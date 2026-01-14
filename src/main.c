#include <stdio.h>
#include "pico/stdlib.h"
#include "pico/cyw43_arch.h"
#include "project_config.h"
#include "pico/stdio_usb.h"

#include <rcl/rcl.h>
#include <rcl/error_handling.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>
#include <std_msgs/msg/float32.h>
#include <rmw_microros/rmw_microros.h>

#include "transport/pico_wifi_transport.h"

// Simple picoW-style micro-ROS publisher using dev transport

// Minimal forward declaration to satisfy FreeRTOS hook signatures
typedef void * TaskHandle_t;

rcl_publisher_t publisher;
std_msgs__msg__Float32 msg;

static void timer_callback(rcl_timer_t *timer, int64_t last_call_time)
{
    (void)timer;
    (void)last_call_time;

    static float value = 0.0f;
    value += 0.1f;
    if (value > 100.0f) value = 0.0f;
    msg.data = value;

    (void)rcl_publish(&publisher, &msg, NULL);
}

// Minimal FreeRTOS hook implementations (required when linking FreeRTOS)
void vApplicationMallocFailedHook(void)
{
    configASSERT(0);
}

void vApplicationStackOverflowHook(TaskHandle_t xTask, char *pcTaskName)
{
    (void)xTask;
    (void)pcTaskName;
    configASSERT(0);
}

int main()
{
    // Enable both USB and UART stdio (CMake already enables both, but call explicit init helpers)
    stdio_init_all();
    stdio_uart_init();

    // Give USB CDC some time to enumerate so early logs are visible
    for (int i = 0; i < 50; i++) { // ~5s max
        if (stdio_usb_connected()) {
            break;
        }
        sleep_ms(100);
    }

    if (cyw43_arch_init()) {
        printf("failed to initialise WiFi\n");
        return 1;
    }

    cyw43_arch_enable_sta_mode();

    printf("Connecting to WiFi...\n");
    if (cyw43_arch_wifi_connect_timeout_ms(WIFI_SSID, WIFI_PASSWORD, WIFI_AUTH_MODE, WIFI_CONNECT_TIMEOUT_MS)) {
        printf("failed to connect.\n");
        return 1;
    } else {
        printf("Connected.\n");
    }

    // Use pico_wifi_transport (dev) instead of picow_udp_transports
    rmw_uros_set_custom_transport(
        false,
        NULL,
        pico_wifi_transport_open,
        pico_wifi_transport_close,
        pico_wifi_transport_write,
        pico_wifi_transport_read);

    rcl_timer_t timer;
    rcl_node_t node;
    rcl_allocator_t allocator;
    rclc_support_t support;
    rclc_executor_t executor;

    allocator = rcl_get_default_allocator();

    cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 1);

    // Wait for agent ping with shorter timeouts but more attempts
    const int timeout_ms = 200;
    const uint8_t attempts = 50;
    rcl_ret_t ret = RCL_RET_ERROR;
    uint8_t blink_led = 1;

    for (int i = 0; i < attempts; i++) {
        printf("uros_ping_agent: loop[%d]\n", i);
    ret = rmw_uros_ping_agent(timeout_ms, 1);

        cyw43_arch_poll();
    sleep_ms(10);

        if (ret == RCL_RET_OK) {
            cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 0);
            break;
        }
        cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, blink_led);
        blink_led = blink_led ? 0 : 1;
    }
    if (ret != RCL_RET_OK) {
        printf("Agent not reachable after %u attempts\n", attempts);
        cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 0);
        return ret;
    }

    rclc_support_init(&support, 0, NULL, &allocator);

    rclc_node_init_default(&node, "picow_node", "", &support);
    rclc_publisher_init_default(
        &publisher,
        &node,
        ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Float32),
        "picow_publisher");

    rclc_timer_init_default2(
        &timer,
        &support,
        RCL_MS_TO_NS(1000),
        timer_callback,
        true);

    rclc_executor_init(&executor, &support.context, 1, &allocator);
    rclc_executor_add_timer(&executor, &timer);

    printf("main loop start\n");

    msg.data = 0;
    while (true)
    {
        rclc_executor_spin_some(&executor, RCL_MS_TO_NS(100));
        cyw43_arch_poll();
        sleep_ms(1);
    }

    cyw43_arch_deinit();
    return 0;
}
