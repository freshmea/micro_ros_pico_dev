#include "pico/cyw43_arch.h"
#include "pico/stdlib.h"
#include <stdio.h>
#include <time.h>
#include <string.h>

#include <uxr/client/profile/transport/custom/custom_transport.h>

#include "lwip/pbuf.h"
#include "lwip/udp.h"
#include "project_config.h"
#include "FreeRTOS.h"
#include "task.h"
#include "semphr.h"
#include "cyw43.h"

// cyw43 상태 외부 선언
extern cyw43_t cyw43_state;

// Packet queue for preserving UDP message boundaries
#define MAX_PACKET_SIZE 512
#define PACKET_QUEUE_SIZE 16

typedef struct
{
    uint8_t data[MAX_PACKET_SIZE];
    uint16_t len;
    bool valid;
} packet_buffer_t;

typedef struct
{
    struct udp_pcb *pcb;
    ip_addr_t agent_addr;
    uint16_t agent_port;

    // Packet queue for thread-safe reception (preserves message boundaries)
    packet_buffer_t packet_queue[PACKET_QUEUE_SIZE];
    volatile uint8_t queue_write_idx;
    volatile uint8_t queue_read_idx;
    volatile uint8_t queue_count;

    // Statistics for debugging
    uint32_t packets_received;
    uint32_t packets_sent;
    uint32_t packets_dropped_full;
    uint32_t packets_dropped_too_large;
    uint32_t packets_dropped_wrong_source;

    #if PROJECT_USE_FREERTOS
    SemaphoreHandle_t recv_mutex;
    #endif
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

// Helper function: enqueue a packet (call within lwIP callback - already protected)
static inline bool packet_queue_enqueue(wifi_transport_params_t *params, const uint8_t *data, uint16_t len)
{
    if (len > MAX_PACKET_SIZE)
    {
        params->packets_dropped_too_large++;
        if (params->packets_dropped_too_large < 5)
        {
            printf("[ERROR] Packet too large: %u bytes (max: %u)\n", len, MAX_PACKET_SIZE);
        }
        return false;
    }

    if (params->queue_count >= PACKET_QUEUE_SIZE)
    {
        params->packets_dropped_full++;
        if (params->packets_dropped_full < 5)
        {
            printf("[WARN] Packet queue full, dropping packet (%u bytes)\n", len);
        }
        return false;
    }

    packet_buffer_t *pkt = &params->packet_queue[params->queue_write_idx];
    memcpy(pkt->data, data, len);
    pkt->len = len;
    pkt->valid = true;

    params->queue_write_idx = (params->queue_write_idx + 1) % PACKET_QUEUE_SIZE;
    params->queue_count++;

    return true;
}

// Helper function: dequeue a packet (call with mutex/protection)
static inline uint16_t packet_queue_dequeue(wifi_transport_params_t *params, uint8_t *buf, uint16_t max_len)
{
    if (params->queue_count == 0)
    {
        return 0;
    }

    packet_buffer_t *pkt = &params->packet_queue[params->queue_read_idx];
    if (!pkt->valid)
    {
        return 0;
    }

    // CRITICAL FIX: Don't read partial packets - micro-ROS needs complete messages
    // If buffer is too small, skip this packet and report error
    if (pkt->len > max_len)
    {
        printf("[ERROR] Buffer too small for packet: need %u, have %u - DROPPING\n",
               pkt->len, max_len);

        // Drop this packet to avoid corrupting the stream
        pkt->valid = false;
        params->queue_read_idx = (params->queue_read_idx + 1) % PACKET_QUEUE_SIZE;
        params->queue_count--;
        return 0;
    }

    // Copy entire packet
    memcpy(buf, pkt->data, pkt->len);
    uint16_t packet_len = pkt->len;

    pkt->valid = false;
    params->queue_read_idx = (params->queue_read_idx + 1) % PACKET_QUEUE_SIZE;
    params->queue_count--;

    return packet_len;
}

static void udp_recv_callback(void *arg, struct udp_pcb *pcb, struct pbuf *p, const ip_addr_t *addr, u16_t port)
{
    wifi_transport_params_t *params = (wifi_transport_params_t *)arg;

    // NOTE: We are already in lwIP callback context, so cyw43_arch_lwip_begin/end
    // is NOT needed here (and would cause deadlock in some configurations)

    if (p != NULL)
    {
        // CRITICAL: Only accept packets from the configured agent
        if (!ip_addr_cmp(addr, &params->agent_addr) || port != params->agent_port)
        {
            params->packets_dropped_wrong_source++;
            if (params->packets_dropped_wrong_source < 3)
            {
                printf("[WARN] Packet from unexpected source %s:%u (expected %s:%u)\n",
                       ipaddr_ntoa(addr), port,
                       ip4addr_ntoa(&params->agent_addr), params->agent_port);
            }
            pbuf_free(p);
            return;
        }

        // For UDP, we need to preserve packet boundaries
        // Copy entire packet (including chained pbufs) into a single buffer
        uint16_t total_len = p->tot_len;

        if (total_len > 0 && total_len <= MAX_PACKET_SIZE)
        {
            uint8_t packet_data[MAX_PACKET_SIZE];
            uint16_t copied = pbuf_copy_partial(p, packet_data, total_len, 0);

            if (copied == total_len)
            {
                // Critical section for queue write (callback is already in lwIP context)
                #if PROJECT_USE_FREERTOS
                taskENTER_CRITICAL();
                #endif

                bool success = packet_queue_enqueue(params, packet_data, total_len);

                #if PROJECT_USE_FREERTOS
                taskEXIT_CRITICAL();
                #endif

                if (success)
                {
                    params->packets_received++;
                    // Only log first few packets or errors
                    if (params->packets_received <= 10)
                    {
                        printf("[DEBUG] UDP RX: %u bytes from %s:%u\n", total_len,
                               ipaddr_ntoa(addr), port);
                    }
                }
                else
                {
                    printf("[ERROR] Queue full, dropping packet (%u bytes)\n", total_len);
                }
            }
        }
        else if (total_len > MAX_PACKET_SIZE)
        {
            printf("[ERROR] Packet too large: %u bytes\n", total_len);
        }

        pbuf_free(p);
    }
}

bool pico_wifi_transport_open(struct uxrCustomTransport *transport)
{
    // WiFi connection is assumed to be already initialized
    // (either by pico_wifi_connect() in FreeRTOS or bare metal main)
    printf("[INFO] Setting up UDP transport...\n");

    // Initialize packet queue
    wifi_params.queue_write_idx = 0;
    wifi_params.queue_read_idx = 0;
    wifi_params.queue_count = 0;

    // Initialize statistics
    wifi_params.packets_received = 0;
    wifi_params.packets_sent = 0;
    wifi_params.packets_dropped_full = 0;
    wifi_params.packets_dropped_too_large = 0;
    wifi_params.packets_dropped_wrong_source = 0;

    // Clear all packet buffers
    for (int i = 0; i < PACKET_QUEUE_SIZE; i++)
    {
        wifi_params.packet_queue[i].valid = false;
        wifi_params.packet_queue[i].len = 0;
    }

    #if PROJECT_USE_FREERTOS
    // Create mutex for thread-safe access (not used in callback, only in read)
    if (wifi_params.recv_mutex == NULL)
    {
        wifi_params.recv_mutex = xSemaphoreCreateMutex();
        if (wifi_params.recv_mutex == NULL)
        {
            printf("[ERROR] Failed to create receive mutex\n");
            return false;
        }
    }
    #endif

    // FreeRTOS + lwIP: Use cyw43_arch_lwip_begin/end for protection
    cyw43_arch_lwip_begin();

    wifi_params.pcb = udp_new();
    if (!wifi_params.pcb)
    {
        cyw43_arch_lwip_end();
        printf("[ERROR] Failed to create UDP PCB\n");
        return false;
    }

    // Agent IP 주소 설정
    if (!ip4addr_aton(AGENT_IP, &wifi_params.agent_addr))
    {
        printf("[ERROR] Invalid agent IP address: %s\n", AGENT_IP);
        udp_remove(wifi_params.pcb);
        wifi_params.pcb = NULL;
        cyw43_arch_lwip_end();
        return false;
    }
    wifi_params.agent_port = AGENT_PORT;

    printf("[INFO] Agent IP: %s, Port: %d\n", AGENT_IP, AGENT_PORT);

    // UDP 바인딩 (모든 인터페이스, 랜덤 포트)
    err_t err = udp_bind(wifi_params.pcb, IP_ADDR_ANY, 0);
    if (err != ERR_OK)
    {
        printf("[ERROR] Failed to bind UDP: %d\n", err);
        udp_remove(wifi_params.pcb);
        wifi_params.pcb = NULL;
        cyw43_arch_lwip_end();
        return false;
    }

    // UDP 수신 콜백 설정
    udp_recv(wifi_params.pcb, udp_recv_callback, &wifi_params);

    cyw43_arch_lwip_end();

    transport->args = &wifi_params;

    printf("[INFO] UDP transport ready (local port: %d)\n", wifi_params.pcb->local_port);

    return true;
}

bool pico_wifi_transport_close(struct uxrCustomTransport *transport)
{
    if (wifi_params.pcb)
    {
        // Protect lwIP call
        cyw43_arch_lwip_begin();
        udp_remove(wifi_params.pcb);
        cyw43_arch_lwip_end();

        wifi_params.pcb = NULL;
    }

    #if PROJECT_USE_FREERTOS
    if (wifi_params.recv_mutex)
    {
        vSemaphoreDelete(wifi_params.recv_mutex);
        wifi_params.recv_mutex = NULL;
    }
    #endif

    // WiFi deinit is not done here - managed externally
    return true;
}

size_t pico_wifi_transport_write(struct uxrCustomTransport *transport, const uint8_t *buf, size_t len, uint8_t *errcode)
{
    wifi_transport_params_t *params = (wifi_transport_params_t *)transport->args;

    if (!params || !params->pcb)
    {
        printf("[ERROR] Write: Invalid params or PCB\n");
        *errcode = 1;
        return 0;
    }

    // Protect all lwIP operations
    cyw43_arch_lwip_begin();

    // CRITICAL FIX: Use PBUF_RAM to ensure proper checksum calculation
    // CYW43 WiFi chip requires software checksum calculation
    struct pbuf *p = pbuf_alloc(PBUF_TRANSPORT, len, PBUF_RAM);
    if (!p)
    {
        cyw43_arch_lwip_end();
        printf("[ERROR] Write: Failed to allocate pbuf\n");
        *errcode = 1;
        return 0;
    }

    // Copy data to pbuf payload
    memcpy(p->payload, buf, len);

    // CRITICAL FIX: Clear checksum flags to force software checksum calculation
    // This fixes the "bad udp cksum" problem on Pico W
    #if CHECKSUM_GEN_UDP
    // Ensure UDP checksum is calculated by software (not hardware offload)
    // The CYW43 chip doesn't support hardware checksum offload properly
    p->flags &= ~(PBUF_FLAG_IS_CUSTOM);
    #endif

    err_t err = udp_sendto(params->pcb, p, &params->agent_addr, params->agent_port);
    pbuf_free(p);

    cyw43_arch_lwip_end();

    // CRITICAL: Poll WiFi driver to actually send the packet
    #if PICO_CYW43_ARCH_POLL
    cyw43_arch_poll();
    #endif

    if (err != ERR_OK)
    {
        printf("[ERROR] UDP TX failed: %d\n", err);
        *errcode = 1;
        return 0;
    }

    params->packets_sent++;
    // Only log first few packets
    if (params->packets_sent <= 10)
    {
        printf("[DEBUG] UDP TX: %zu bytes to %s:%u\n", len,
               ip4addr_ntoa(&params->agent_addr), params->agent_port);
    }

    // Print statistics every 100 packets
    if (params->packets_sent % 100 == 0)
    {
        printf("[STATS] TX:%lu RX:%lu Dropped(full:%lu large:%lu wrong:%lu)\n",
               params->packets_sent, params->packets_received,
               params->packets_dropped_full, params->packets_dropped_too_large,
               params->packets_dropped_wrong_source);
    }

    *errcode = 0;
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

    uint64_t start_time = time_us_64();
    uint64_t timeout_us = (uint64_t)timeout * 1000ULL;
    size_t received = 0;

    // Poll for data with timeout
    while (received == 0)
    {
        #if PICO_CYW43_ARCH_POLL
        // If using pico_cyw43_arch_poll, must poll periodically
        cyw43_arch_poll();
        #endif

        // Check for packet in queue (with critical section protection)
        #if PROJECT_USE_FREERTOS
        // Use critical section instead of mutex (faster, works with callbacks)
        taskENTER_CRITICAL();
        if (params->queue_count > 0)
        {
            received = packet_queue_dequeue(params, buf, (uint16_t)len);
        }
        taskEXIT_CRITICAL();
        #else
        // Bare metal: disable interrupts briefly
        uint32_t int_status = save_and_disable_interrupts();
        if (params->queue_count > 0)
        {
            received = packet_queue_dequeue(params, buf, (uint16_t)len);
        }
        restore_interrupts(int_status);
        #endif

        // Check timeout
        if (received == 0)
        {
            uint64_t elapsed = time_us_64() - start_time;
            if (elapsed >= timeout_us)
            {
                // Timeout is NOT an error - it's normal in micro-ROS
                // The upper layer will retry if needed
                *errcode = 0;
                return 0;
            }

            // Small delay to prevent busy-waiting and allow lwIP to process
            #if PROJECT_USE_FREERTOS
            vTaskDelay(pdMS_TO_TICKS(1));
            #else
            sleep_us(100);
            #endif
        }
    }

    // Don't log individual reads to reduce spam
    // Statistics are logged in write function

    *errcode = 0;
    return received;
}
