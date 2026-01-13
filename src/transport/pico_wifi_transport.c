#include "pico/cyw43_arch.h"
#include "pico/stdlib.h"
#include <stdio.h>
#include <time.h>

#include <uxr/client/profile/transport/custom/custom_transport.h>

#include "lwip/pbuf.h"
#include "lwip/udp.h"
#include "project_config.h"
#include "FreeRTOS.h"
#include "task.h"
#include "cyw43.h"

// Agent IP and Port are defined in project_config.h
// #define AGENT_IP "192.168.219.74"
// #define AGENT_PORT 8888

// cyw43 상태 외부 선언
extern cyw43_t cyw43_state;

typedef struct
{
    struct udp_pcb *pcb;
    ip_addr_t agent_addr;
    uint16_t agent_port;
    uint8_t *recv_buffer;
    size_t recv_len;
    bool data_ready;
} wifi_transport_params_t;

static wifi_transport_params_t wifi_params = {0};

// POSIX microsecond delay function (FreeRTOS compatible)
// This is CRITICAL for micro-ROS to work properly with FreeRTOS
int usleep(uint64_t us)
{
    #if PROJECT_USE_FREERTOS
    vTaskDelay(pdMS_TO_TICKS(us / 1000 + (us % 1000 != 0)));
    #else
    sleep_us(us);
    #endif
    return 0;
}

// POSIX get current time function
int clock_gettime(clockid_t unused, struct timespec *tp)
{
    uint64_t m = time_us_64();
    tp->tv_sec = m / 1000000;
    tp->tv_nsec = (m % 1000000) * 1000;
    return 0;
}

static void udp_recv_callback(void *arg, struct udp_pcb *pcb, struct pbuf *p, const ip_addr_t *addr, u16_t port)
{
    wifi_transport_params_t *params = (wifi_transport_params_t *)arg;

    if (p != NULL)
    {
        if (params->recv_buffer && p->len <= 2048)
        {
            pbuf_copy_partial(p, params->recv_buffer, p->len, 0);
            params->recv_len = p->len;
            params->data_ready = true;
        }
        pbuf_free(p);
    }
}

bool pico_wifi_transport_open(struct uxrCustomTransport *transport)
{
    // FreeRTOS 경로에서는 WiFi가 별도 태스크에서 이미 초기화/연결된 상태를 전제.
    // bare metal 경로는 여기서 직접 init/connect 수행 (6d2ce22 흐름 유지).
    #if PROJECT_USE_FREERTOS
    printf("[INFO] Setting up UDP transport...\n");
    #else
    printf("[INFO] Initializing WiFi (transport open)...\n");
    if (cyw43_arch_init())
    {
        printf("[ERROR] cyw43_arch_init failed\n");
        return false;
    }

    cyw43_arch_enable_sta_mode();

    if (cyw43_arch_wifi_connect_timeout_ms(
            WIFI_SSID,
            WIFI_PASSWORD,
            WIFI_AUTH_MODE,
            WIFI_CONNECT_TIMEOUT_MS))
    {
        printf("[ERROR] WiFi connect failed\n");
        return false;
    }
    printf("[INFO] WiFi connected\n");
    #endif

    wifi_params.pcb = udp_new();
    if (!wifi_params.pcb)
    {
        printf("[ERROR] Failed to create UDP PCB\n");
        return false;
    }

    // Agent IP 주소 설정
    ip4addr_aton(AGENT_IP, &wifi_params.agent_addr);
    wifi_params.agent_port = AGENT_PORT;

    printf("[INFO] Agent IP: %s, Port: %d\n", AGENT_IP, AGENT_PORT);

    // UDP 바인딩
    if (udp_bind(wifi_params.pcb, IP_ADDR_ANY, 0) != ERR_OK)
    {
        printf("[ERROR] Failed to bind UDP\n");
        return false;
    }

    // UDP 수신 콜백 설정
    udp_recv(wifi_params.pcb, udp_recv_callback, &wifi_params);

    transport->args = &wifi_params;

    printf("[INFO] UDP transport ready\n");

    return true;
}

bool pico_wifi_transport_close(struct uxrCustomTransport *transport)
{
    if (wifi_params.pcb)
    {
        udp_remove(wifi_params.pcb);
        wifi_params.pcb = NULL;
    }
    cyw43_arch_deinit();
    return true;
}

size_t pico_wifi_transport_write(struct uxrCustomTransport *transport, const uint8_t *buf, size_t len, uint8_t *errcode)
{
    wifi_transport_params_t *params = (wifi_transport_params_t *)transport->args;

    if (!params || !params->pcb)
    {
        *errcode = 1;
        return 0;
    }

    struct pbuf *p = pbuf_alloc(PBUF_TRANSPORT, len, PBUF_RAM);
    if (!p)
    {
        *errcode = 1;
        return 0;
    }

    memcpy(p->payload, buf, len);

    err_t err = udp_sendto(params->pcb, p, &params->agent_addr, params->agent_port);
    pbuf_free(p);

    if (err != ERR_OK)
    {
        *errcode = 1;
        return 0;
    }

    return len;
}

size_t pico_wifi_transport_read(struct uxrCustomTransport *transport, uint8_t *buf, size_t len, int timeout, uint8_t *errcode)
{
    wifi_transport_params_t *params = (wifi_transport_params_t *)transport->args;

    if (!params || !params->pcb)
    {
        *errcode = 1;
        return 0;
    }

    params->recv_buffer = buf;
    params->recv_len = 0;
    params->data_ready = false;

    uint64_t start_time = time_us_64();
    uint64_t timeout_us = timeout * 1000;

    while (!params->data_ready)
    {
        cyw43_arch_poll();

        if ((time_us_64() - start_time) > timeout_us)
        {
            *errcode = 1;
            return 0;
        }

        sleep_us(100);
    }

    size_t received = params->recv_len < len ? params->recv_len : len;
    params->recv_buffer = NULL;

    return received;
}
