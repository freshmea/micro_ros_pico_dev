#include <stdio.h>

#include "pico/stdlib.h"
#include "pico/cyw43_arch.h"
#include "lwip/netif.h"

#include "board/board.h"
#include "drivers/servo_ctrl.h"
#include "uros/uros_app.h"
#include "transport/pico_wifi_connect.h"

int main() {
    // Initialize board peripherals
    board_init();

#if PROJECT_USE_FREERTOS
    if (pico_wifi_connect() != 0) {
        board_blink_error();
    }

    if (netif_default) {
        printf("[INFO] IP Address: %s\n", ip4addr_ntoa(netif_ip4_addr(netif_default)));
    }
    board_set_wifi_status(1);
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
