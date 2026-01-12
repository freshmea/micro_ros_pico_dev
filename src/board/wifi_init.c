#include "board.h"
#include "pico/cyw43_arch.h"
#include "project_config.h"
#include <stdio.h>

int board_wifi_init(void)
{
    printf("[INFO] Initializing WiFi...\n");

    // WiFi 초기화
    if (cyw43_arch_init())
    {
        printf("[ERROR] Failed to initialize WiFi hardware\n");
        return -1;
    }

    cyw43_arch_enable_sta_mode();
    printf("[INFO] WiFi hardware initialized\n");

    // WiFi 연결
    printf("[INFO] Connecting to WiFi SSID: %s\n", WIFI_SSID);
    int result = cyw43_arch_wifi_connect_timeout_ms(
        WIFI_SSID,
        WIFI_PASSWORD,
        WIFI_AUTH_MODE,
        WIFI_CONNECT_TIMEOUT_MS
    );

    if (result != 0)
    {
        printf("[ERROR] Failed to connect to WiFi (error: %d)\n", result);
        return -1;
    }

    printf("[INFO] WiFi connected successfully\n");

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
