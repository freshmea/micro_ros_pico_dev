#include "board.h"
#include "pico/cyw43_arch.h"
#include "cyw43.h"
#include "cyw43_ll.h"
#include "lwip/netif.h"
#include "project_config.h"
#include <stdio.h>
#include "FreeRTOS.h"
#include "task.h"
#include "hardware/watchdog.h"

// cyw43 상태 및 네트워크 인터페이스 외부 선언
extern cyw43_t cyw43_state;
extern struct netif *netif_default;

int board_wifi_init(void)
{
    printf("[INFO] Initializing WiFi...\n");
    printf("[INFO] FreeRTOS scheduler running: %s\n",
           xTaskGetSchedulerState() == taskSCHEDULER_RUNNING ? "YES" : "NO");
    printf("[INFO] Current task: %s\n", pcTaskGetName(NULL));
    printf("[INFO] Free heap: %u bytes\n", xPortGetFreeHeapSize());
    fflush(stdout);

    printf("[INFO] Calling cyw43_arch_init()...\n");
    fflush(stdout);

    int init_result = cyw43_arch_init();

    printf("[INFO] cyw43_arch_init() returned: %d\n", init_result);
    fflush(stdout);

    if (init_result != 0) {
        printf("[ERROR] Failed to initialize WiFi hardware (error: %d)\n", init_result);
        board_set_wifi_status(0);
        return -1;
    }

    printf("[INFO] WiFi hardware init successful\n");
    fflush(stdout);

    // LED 1회 깜빡임 - WiFi 하드웨어 초기화 완료
    board_set_wifi_status(1);
    vTaskDelay(pdMS_TO_TICKS(200));
    board_set_wifi_status(0);
    vTaskDelay(pdMS_TO_TICKS(200));

    printf("[INFO] Calling cyw43_arch_enable_sta_mode...\n");
    fflush(stdout);

    // threadsafe_background 모드에서는 블로킹 없이 바로 실행됨
    cyw43_arch_enable_sta_mode();

    printf("[INFO] STA mode enabled successfully!\n");
    fflush(stdout);

    // LED 2회 깜빡임 - STA 모드 활성화 완료
    for (int i = 0; i < 2; i++) {
        board_set_wifi_status(1);
        vTaskDelay(pdMS_TO_TICKS(200));
        board_set_wifi_status(0);
        vTaskDelay(pdMS_TO_TICKS(200));
    }

    printf("[INFO] Connecting to SSID: %s\n", WIFI_SSID);
    printf("[INFO] Auth mode: %d\n", WIFI_AUTH_MODE);
    fflush(stdout);

    // 폴링 모드: SDK 함수 사용
    printf("[INFO] Starting WiFi connection (blocking with polling)...\n");
    fflush(stdout);

    // cyw43_arch_wifi_connect_timeout_ms with manual polling
    uint32_t timeout_ms = 30000;  // 30초
    uint32_t start_time = to_ms_since_boot(get_absolute_time());

    int connect_err = cyw43_arch_wifi_connect_async(WIFI_SSID, WIFI_PASSWORD, WIFI_AUTH_MODE);
    if (connect_err != 0) {
        printf("[ERROR] Failed to start WiFi connection (error: %d)\n", connect_err);
        board_set_wifi_status(0);
        return -1;
    }

    printf("[INFO] Polling for connection status...\n");
    fflush(stdout);

    int status = CYW43_LINK_UP + 1;
    int last_status = -999;
    int attempt = 0;

    while (status >= 0 && status != CYW43_LINK_UP) {
        // 타임아웃 확인
        if (to_ms_since_boot(get_absolute_time()) - start_time > timeout_ms) {
            printf("[ERROR] Connection timeout\n");
            break;
        }

        // 폴링 모드: 수동으로 cyw43_arch_poll() 호출 필요
        cyw43_arch_poll();

        // 상태 확인
        status = cyw43_tcpip_link_status(&cyw43_state, CYW43_ITF_STA);

        // 상태 변화 시 로그
        if (status != last_status) {
            last_status = status;
            attempt++;
            printf("[INFO] WiFi status: %d (attempt %d)\n", status, attempt);

            if (status == CYW43_LINK_DOWN) {
                printf("       -> LINK_DOWN\n");
            } else if (status == CYW43_LINK_JOIN) {
                printf("       -> LINK_JOIN (joining...)\n");
            } else if (status == CYW43_LINK_NOIP) {
                printf("       -> LINK_NOIP (connected, waiting for IP)\n");
            } else if (status == CYW43_LINK_UP) {
                printf("       -> LINK_UP (success!)\n");
            } else if (status == CYW43_LINK_FAIL) {
                printf("       -> LINK_FAIL\n");
            } else if (status == CYW43_LINK_NONET) {
                printf("       -> LINK_NONET\n");
            } else if (status == CYW43_LINK_BADAUTH) {
                printf("       -> LINK_BADAUTH\n");
            }
            fflush(stdout);
        }

        // LED 깜빡임
        board_set_wifi_status(attempt % 2);

        // FreeRTOS 태스크 양보 (짧은 간격으로 폴링)
        vTaskDelay(pdMS_TO_TICKS(250));  // 250ms 간격
    }

    // 최종 상태 확인
    if (status != CYW43_LINK_UP) {
        printf("[ERROR] WiFi connection failed (final status: %d)\n", status);

        if (status == CYW43_LINK_BADAUTH) {
            printf("[ERROR] Bad authentication - check password\n");
        } else if (status == CYW43_LINK_FAIL) {
            printf("[ERROR] Connection failed\n");
        } else {
            printf("[ERROR] Connection timeout\n");
        }

        board_set_wifi_status(0);
        return -1;
    }

    printf("[INFO] WiFi connected successfully!\n");

    // 최종 상태 확인
    int final_status = cyw43_tcpip_link_status(&cyw43_state, CYW43_ITF_STA);
    printf("[DEBUG] Final link status: %d\n", final_status);

    // Get and print IP address
    extern struct netif *netif_default;
    if (netif_default) {
        printf("[INFO] IP Address: %s\n", ip4addr_ntoa(netif_ip4_addr(netif_default)));
    }

    // WiFi 연결 상태 LED 켜기
    board_set_wifi_status(1);

    return 0;
}

void board_wifi_deinit(void)
{
    printf("[INFO] Deinitializing WiFi...\n");
    board_set_wifi_status(0);
    cyw43_arch_deinit();
}
