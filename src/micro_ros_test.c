#include <stdio.h>

#include "pico/stdlib.h"
#include "pico/cyw43_arch.h"
#include "lwip/netif.h"

#include "board/board.h"
#include "drivers/servo_ctrl.h"
#include "uros/uros_app.h"
#include "project_config.h"

#if PROJECT_USE_FREERTOS
static int wifi_init_blocking(void)
{
    printf("[INFO] Initializing WiFi (blocking)...\n");

    int init_result = cyw43_arch_init();
    if (init_result != 0) {
        printf("[ERROR] cyw43_arch_init failed: %d\n", init_result);
        return -1;
    }

    cyw43_arch_enable_sta_mode();
    printf("[INFO] STA mode enabled\n");

    int connect_err = cyw43_arch_wifi_connect_timeout_ms(
        WIFI_SSID,
        WIFI_PASSWORD,
        WIFI_AUTH_MODE,
        WIFI_CONNECT_TIMEOUT_MS);

    if (connect_err != PICO_OK) {
        printf("[ERROR] WiFi connect failed: %d\n", connect_err);
        return -1;
    }

    if (netif_default) {
        printf("[INFO] IP Address: %s\n", ip4addr_ntoa(netif_ip4_addr(netif_default)));
    }

    board_set_wifi_status(1);
    return 0;
}
#endif

int main() {
    // Initialize board peripherals
    board_init();

#if PROJECT_USE_FREERTOS
    if (wifi_init_blocking() != 0) {
        board_blink_error();
    }
#endif

    // Initialize servo controller
    if (servo_ctrl_init(SERVO_PIN) != 0) {
        printf("ERROR: Failed to initialize servo controller\n");
        board_blink_error();
    }

    // Initialize micro-ROS application
    if (uros_app_init() != 0) {
        printf("ERROR: Failed to initialize micro-ROS application\n");
        board_blink_error();
    }

    // Run main application loop
    uros_app_run();

    // Cleanup (unreachable in current implementation)
    uros_app_cleanup();

    return 0;
}
