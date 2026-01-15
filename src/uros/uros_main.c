#include "uros_main.h"

#include <stdio.h>

#include <rcl/error_handling.h>
#include <std_msgs/msg/float32.h>

#include "FreeRTOS.h"
#include "hardware/adc.h"
#include "pico/cyw43_arch.h"
#include "pico/stdlib.h"
#include "task.h"

#include "pico_wifi_connect.h"
#include "pico_wifi_transport.h"
#include "rcl_check_macros.h"


static rcl_publisher_t publisher;
static std_msgs__msg__Float32 msg;

static rcl_timer_t timer;
static rcl_node_t node;
static rcl_allocator_t allocator;
static rclc_support_t support;
static rclc_executor_t executor;

static void timer_callback(rcl_timer_t *timer, int64_t last_call_time) {
    (void)last_call_time;

    RCSOFTCHECK(rcl_publish(&publisher, &msg, NULL));
}

int uros_main_init(void) {

    if (pico_wifi_connect() != 0) {
        return -1;
    }

    rmw_uros_set_custom_transport(
        false, // must be false for UDP
        NULL,
        pico_wifi_transport_open,
        pico_wifi_transport_close,
        pico_wifi_transport_write,
        pico_wifi_transport_read);

    allocator = rcl_get_default_allocator();

    cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 1);

    // Wait for agent ping with shorter timeouts but more attempts (from main.c)
    const int timeout_ms = 200;
    const uint8_t attempts = 50;
    rcl_ret_t ret = RCL_RET_ERROR;
    uint8_t blink_led = 1;

    for (int loop = 0; loop < attempts; loop++) {
        printf("uros_ping_agent: loop[%d]\n", loop);
        ret = rmw_uros_ping_agent(timeout_ms, 1);

        // Make sure WiFi/lwIP driver progresses even while waiting
        cyw43_arch_poll();
        vTaskDelay(pdMS_TO_TICKS(10));

        if (ret == RCL_RET_OK) {
            // Reachable agent, exiting loop.
            cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 0);
            break;
        }
        cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, blink_led);
        blink_led = blink_led ? 0 : 1;
    }

    if (ret != RCL_RET_OK) {
        // Unreachable agent.
        cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 0);
        return -1;
    }

    rclc_support_init(&support, 0, NULL, &allocator);

    rclc_node_init_default(&node, "picow_node", "", &support);
    rclc_publisher_init_default(&publisher, &node,
                                ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Float32),
                                "picow_publisher");

    rclc_timer_init_default2(&timer, &support, RCL_MS_TO_NS(1000), timer_callback, true);

    rclc_executor_init(&executor, &support.context, 1, &allocator);
    rclc_executor_add_timer(&executor, &timer);

    cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 1);

    msg.data = 0.0f;
    return 0;
}

void uros_main_run(void) {
    msg.data = 0.0f;

    while (true) {
        rclc_executor_spin_some(&executor, RCL_MS_TO_NS(100));

        // Make sure WiFi/lwIP driver progresses even while waiting
        cyw43_arch_poll();
        vTaskDelay(pdMS_TO_TICKS(1));
    }
}

void uros_main_spin_once(void) {
    rclc_executor_spin_some(&executor, RCL_MS_TO_NS(100));
    // Make sure WiFi/lwIP driver progresses even while waiting
    cyw43_arch_poll();
}

void uros_main_cleanup(void) {
    RCSOFTCHECK(rcl_timer_fini(&timer));
    RCSOFTCHECK(rcl_publisher_fini(&publisher, &node));
    RCSOFTCHECK(rcl_node_fini(&node));
    cyw43_arch_deinit();
}
