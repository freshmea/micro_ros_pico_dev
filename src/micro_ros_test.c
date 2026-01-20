#include <stdio.h>

#include "pico/stdlib.h"
#include "pico/cyw43_arch.h"
#include "lwip/netif.h"

#include "app_state.h"
#include "drivers/passive_buzzer_manager.h"
#include "drivers/ssd1306_driver.h"
#include "drivers/servo_ctrl.h"
#include "drivers/touch_sensor.h"
#include "project_config.h"
#include "tasks/periph_task.h"
#include "tasks/uros.h"
#include "transport/pico_wifi_connect.h"

PassiveBuzzerManager buzzer;
TouchSensorManager touch;
SSD1306_t ssd1306;

void display_set_status(const char *ssid, bool connected, const char *ip)
{
    printf("[display] %s %s %s\n", connected ? "OK" : "NO", ssid ? ssid : "", ip ? ip : "");
}

void display_set_hello(const char *text)
{
    printf("[display] %s\n", text ? text : "");
}

int main() {
    // Initialize board peripherals
    periph_task_init();

    touch_sensor_init(&touch);

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
    if (uros_main_init() != 0) {
        printf("ERROR: Failed to initialize micro-ROS application\n");
        board_blink_error();
    }

    // Run main application loop
    uros_main_run();

    // Cleanup (unreachable in current implementation)
    uros_main_cleanup();

    return 0;
}
