#include "pico/cyw43_arch.h"
#include "pico/stdlib.h"
#include <stdio.h>
#include <time.h>

#include <uxr/client/profile/transport/custom/custom_transport.h>

#include "lwip/pbuf.h"
#include "lwip/udp.h"

#define AGENT_IP "192.168.219.74" // PC의 실제 IP 주소로 변경
#define AGENT_PORT 8888

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

void usleep(uint64_t us)
{
    sleep_us(us);
}

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
    printf("\n--- WiFi Transport Open ---\n");

    // WiFi 초기화
    printf("Initializing CYW43...\n");
    if (cyw43_arch_init())
    {
        printf("ERROR: Failed to initialize WiFi\n");
        return false;
    }
    printf("CYW43 initialized successfully\n");

    cyw43_arch_enable_sta_mode();
    printf("Station mode enabled\n");

    // WiFi 연결 (SSID와 비밀번호를 환경에 맞게 수정)
    printf("Connecting to WiFi SSID: 'bindsoft_805_2.4g'...\n");
    printf("This may take up to 30 seconds...\n");

    if (cyw43_arch_wifi_connect_timeout_ms("bindsoft_805_2.4g", "bindsoft805", CYW43_AUTH_WPA2_AES_PSK, 30000))
    {
        printf("ERROR: Failed to connect to WiFi\n");
        printf("Please check:\n");
        printf("  - SSID and password are correct\n");
        printf("  - WiFi router is powered on\n");
        printf("  - Pico is in range of WiFi\n");
        return false;
    }
    printf("SUCCESS: Connected to WiFi!\n");

    // IP 주소 출력
    printf("IP Address: %s\n", ip4addr_ntoa(netif_ip4_addr(netif_list)));

    // UDP 초기화
    printf("Creating UDP socket...\n");
    wifi_params.pcb = udp_new();
    if (!wifi_params.pcb)
    {
        printf("ERROR: Failed to create UDP PCB\n");
        return false;
    }
    printf("UDP socket created\n");

    // Agent IP 주소 설정
    ip4addr_aton(AGENT_IP, &wifi_params.agent_addr);
    wifi_params.agent_port = AGENT_PORT;
    printf("Agent address set to: %s:%d\n", AGENT_IP, AGENT_PORT);

    // UDP 바인딩
    printf("Binding UDP socket...\n");
    if (udp_bind(wifi_params.pcb, IP_ADDR_ANY, 0) != ERR_OK)
    {
        printf("ERROR: Failed to bind UDP\n");
        return false;
    }
    printf("UDP socket bound successfully\n");

    // UDP 수신 콜백 설정
    udp_recv(wifi_params.pcb, udp_recv_callback, &wifi_params);
    printf("UDP receive callback registered\n");

    transport->args = &wifi_params;

    printf("--- WiFi transport opened successfully ---\n\n");
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
        printf("ERROR: Invalid transport params in write\n");
        *errcode = 1;
        return 0;
    }

    struct pbuf *p = pbuf_alloc(PBUF_TRANSPORT, len, PBUF_RAM);
    if (!p)
    {
        printf("ERROR: Failed to allocate pbuf\n");
        *errcode = 1;
        return 0;
    }

    memcpy(p->payload, buf, len);

    err_t err = udp_sendto(params->pcb, p, &params->agent_addr, params->agent_port);
    pbuf_free(p);

    if (err != ERR_OK)
    {
        printf("ERROR: UDP send failed (err: %d)\n", err);
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
