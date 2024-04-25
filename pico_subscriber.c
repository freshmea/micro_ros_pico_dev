#include <stdio.h>

#include <rcl/rcl.h>
#include <rcl/error_handling.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>
#include <std_msgs/msg/int32.h>
#include <rmw_microros/rmw_microros.h>

#include "pico/stdlib.h"
#include "pico_uart_transports.h"

#define RCCHECK(fn)                                                                      \
    {                                                                                    \
        rcl_ret_t temp_rc = fn;                                                          \
        if ((temp_rc != RCL_RET_OK))                                                     \
        {                                                                                \
            printf("Failed status on line %d: %d. Aborting.\n", __LINE__, (int)temp_rc); \
            return 1;                                                                    \
        }                                                                                \
    }
#define RCSOFTCHECK(fn)                                                                    \
    {                                                                                      \
        rcl_ret_t temp_rc = fn;                                                            \
        if ((temp_rc != RCL_RET_OK))                                                       \
        {                                                                                  \
            printf("Failed status on line %d: %d. Continuing.\n", __LINE__, (int)temp_rc); \
        }                                                                                  \
    }

const uint LED_PIN = 25;

rcl_subscription_t subscriber;
std_msgs__msg__Int32 msg_r;

void subscription_callback(const void *msgin)
{
    const std_msgs__msg__Int32 *msg = (const std_msgs__msg__Int32 *)msgin;
    if (msg->data % 2 == 0)
    {
        gpio_put(LED_PIN, 1);
    }
    else
    {
        gpio_put(LED_PIN, 0);
    }
    msg_r.data = msg_r.data + 3;
}

int main()
{
    rmw_uros_set_custom_transport(
        true,
        NULL,
        pico_serial_transport_open,
        pico_serial_transport_close,
        pico_serial_transport_write,
        pico_serial_transport_read);

    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    rcl_node_t node;
    rcl_allocator_t allocator = rcl_get_default_allocator();
    rclc_support_t support;
    rclc_executor_t executor = rclc_executor_get_zero_initialized_executor();

    // Wait for agent successful ping for 2 minutes.
    const int timeout_ms = 1000;
    const uint8_t attempts = 120;

    rmw_uros_ping_agent(timeout_ms, attempts);

    RCCHECK(rclc_support_init(&support, 0, NULL, &allocator));

    RCCHECK(rclc_node_init_default(&node, "pico_node", "", &support));

    RCCHECK(rclc_subscription_init_default(
        &subscriber,
        &node,
        ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Int32),
        "pico_subscriber"));

    rclc_executor_init(&executor, &support.context, 1, &allocator);
    rclc_executor_add_subscription(
        &executor,
        &subscriber,
        &msg_r,
        &subscription_callback,
        ON_NEW_DATA);

    msg_r.data = 0;
    rclc_executor_spin(&executor);

    RCCHECK(rcl_subscription_fini(&subscriber, &node));
    RCCHECK(rcl_node_fini(&node));
}
