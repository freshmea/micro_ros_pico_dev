#include "pico/cyw43_arch.h"
#include "pico/stdlib.h"

#include "project_config.h"
#include "FreeRTOS.h"
#include "task.h"

// WiFi connection initialization
// Returns 0 on success, non-zero on failure
int pico_wifi_connect(void)
{
    static bool cyw43_initialized = false;

    if (!cyw43_initialized) {
        if (cyw43_arch_init())
        {
            return -1;
        }
        cyw43_initialized = true;
    }

    cyw43_arch_enable_sta_mode();

    if (cyw43_arch_wifi_connect_timeout_ms(
            WIFI_SSID,
            WIFI_PASSWORD,
            WIFI_AUTH_MODE,
            WIFI_CONNECT_TIMEOUT_MS))
    {
        return -2;
    }
    return 0;
}
