#include "uros_app.h"
#include "board.h"
#include "project_config.h"
#include "servo_ctrl.h"

#include <rcl/error_handling.h>
#include <rmw_microros/rmw_microros.h>
#include <std_msgs/msg/int32.h>
#include <stdio.h>

#include "pico_wifi_transport.h"
#include "rcl_check_macros.h"

// micro-ROS entities
static rcl_node_t node;
static rcl_allocator_t allocator;
static rclc_support_t support;
static rclc_executor_t executor;
static rcl_subscription_t subscriber;
static std_msgs__msg__Int32 msg_r;

// Subscription callback
static void subscription_callback(const void *msgin)
{
    const std_msgs__msg__Int32 *msg = (const std_msgs__msg__Int32 *)msgin;

    printf("Received message: %d\n", msg->data);

    // Turn on GP1 (message received indicator)
    board_set_msg_status(1);

    // LED control based on even/odd (onboard LED)
    if (msg->data % 2 == 0)
    {
        board_set_onboard_led(1);
        board_set_pwm_led(1); // GP3 on (even)
    }
    else
    {
        board_set_onboard_led(0);
        board_set_pwm_led(0); // GP3 off (odd)
    }

    // Update response message data
    msg_r.data = msg_r.data + 3;

    // Move servo to angle (0-180 range)
    servo_ctrl_move_to_angle(SERVO_PIN, msg->data);

    // Short delay then turn off GP1
    sleep_ms(MSG_STATUS_PULSE_MS);
    board_set_msg_status(0);
}

int uros_app_init(void)
{
    printf("Setting up custom transport...\n");
    rmw_uros_set_custom_transport(
        false,
        NULL,
        pico_wifi_transport_open,
        pico_wifi_transport_close,
        pico_wifi_transport_write,
        pico_wifi_transport_read);

    allocator = rcl_get_default_allocator();

    // Wait for agent successful ping (settings from project_config.h)
    const int timeout_ms = AGENT_PING_TIMEOUT_MS;
    const uint8_t attempts = AGENT_PING_ATTEMPTS;

    printf("Pinging micro-ROS agent (timeout: %d ms, attempts: %d)...\n", timeout_ms, attempts);
    rcl_ret_t ret = rmw_uros_ping_agent(timeout_ms, attempts);

    if (ret != RCL_RET_OK)
    {
        printf("ERROR: Failed to connect to agent (error code: %d)\n", ret);
        board_blink_error();
        return -1;
    }

    printf("Successfully connected to agent!\n");
    // Agent connection success - turn on GP0
    board_set_wifi_status(1);

    printf("Initializing RCL support...\n");
    RCCHECK(rclc_support_init(&support, 0, NULL, &allocator));

    printf("Creating node '%s'...\n", ROS_NODE_NAME);
    RCCHECK(rclc_node_init_default(&node, ROS_NODE_NAME, ROS_NAMESPACE, &support));

    printf("Creating subscriber '%s'...\n", ROS_TOPIC_SUBSCRIBE);
    RCCHECK(rclc_subscription_init_default(
        &subscriber,
        &node,
        ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Int32),
        ROS_TOPIC_SUBSCRIBE));

    printf("Initializing executor...\n");
    RCCHECK(rclc_executor_init(&executor, &support.context, 1, &allocator));
    RCCHECK(rclc_executor_add_subscription(
        &executor,
        &subscriber,
        &msg_r,
        &subscription_callback,
        ON_NEW_DATA));

    printf("Turning on onboard LED...\n");
    board_set_onboard_led(1);

    printf("\n=== System Ready ===\n");
    printf("Waiting for messages on '%s' topic...\n\n", ROS_TOPIC_SUBSCRIBE);

    msg_r.data = 0;
    return 0;
}

void uros_app_run(void)
{
    while (true)
    {
        RCSOFTCHECK(rclc_executor_spin_some(&executor, RCL_MS_TO_NS(EXECUTOR_SPIN_TIMEOUT_MS)));
    }
}

void uros_app_cleanup(void)
{
    rcl_ret_t ret;

    ret = rcl_subscription_fini(&subscriber, &node);
    if (ret != RCL_RET_OK)
    {
        printf("ERROR: Failed to cleanup subscription (error code: %d)\n", ret);
    }

    ret = rcl_node_fini(&node);
    if (ret != RCL_RET_OK)
    {
        printf("ERROR: Failed to cleanup node (error code: %d)\n", ret);
    }
}
