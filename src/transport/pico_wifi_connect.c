#include "pico/cyw43_arch.h"
#include "pico/stdlib.h"
#include <stdio.h>

#include "project_config.h"
#include "FreeRTOS.h"
#include "task.h"

// WiFi connection initialization
// Returns 0 on success, non-zero on failure
int pico_wifi_connect(void)
{
    printf("[INFO] Initializing WiFi...\n");

    if (cyw43_arch_init())
    {
        printf("[ERROR] cyw43_arch_init failed\n");
        return -1;
    }

    cyw43_arch_enable_sta_mode();

    printf("[INFO] Connecting to WiFi SSID: %s\n", WIFI_SSID);

    if (cyw43_arch_wifi_connect_timeout_ms(
            WIFI_SSID,
            WIFI_PASSWORD,
            WIFI_AUTH_MODE,
            WIFI_CONNECT_TIMEOUT_MS))
    {
        printf("[ERROR] WiFi connect failed\n");
        return -2;
    }

    printf("[INFO] WiFi connected successfully\n");
    return 0;
}
