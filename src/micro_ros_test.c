#include <stddef.h>
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

void display_set_status(const char *ssid, bool connected, const char *ip, bool uros_connected)
{
    printf("[display] %s %s %s uros:%s\n",
           connected ? "OK" : "NO",
           ssid ? ssid : "",
           ip ? ip : "",
           uros_connected ? "OK" : "NO");
}

void display_set_hello(const char *text)
{
    printf("[display] %s\n", text ? text : "");
}

void display_set_message(const char *text, size_t len)
{
    printf("[display] message(%u): %.*s\n",
           (unsigned)len,
           (int)len,
           text ? text : "");
}

void display_next_screen(void)
{
    printf("[display] next screen\n");
}

int main() {
    // Initialize board peripherals
    periph_task_init();

    touch_sensor_init(&touch);

#if PROJECT_USE_FREERTOS
    if (pico_wifi_connect() != 0) {
        return -1;
    }

    if (netif_default) {
        printf("[INFO] IP Address: %s\n", ip4addr_ntoa(netif_ip4_addr(netif_default)));
    }
#endif

    // Initialize servo controller
    if (servo_ctrl_init(SERVO_PIN) != 0) {
        printf("ERROR: Failed to initialize servo controller\n");
        return -1;
    }

    // Initialize micro-ROS application
    if (uros_main_init() != 0) {
        printf("ERROR: Failed to initialize micro-ROS application\n");
        return -1;
    }

    // Run main application loop
    uros_main_run();

    // Cleanup (unreachable in current implementation)
    uros_main_cleanup();

    return 0;
}
