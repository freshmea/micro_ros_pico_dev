#include "uros_main.h"

#include <stdio.h>

#include <rcl/error_handling.h>
#include <std_msgs/msg/bool.h>
#include <std_msgs/msg/float32.h>
#include <std_msgs/msg/int32.h>
#include <std_msgs/msg/string.h>

#include <rosidl_runtime_c/string_functions.h>

#include "FreeRTOS.h"
#include "hardware/adc.h"
#include "pico/cyw43_arch.h"
#include "pico/stdlib.h"
#include "task.h"

#include "app_state.h"
#include "board.h"
#include "project_config.h"
#include "servo_ctrl.h"

#include "pico_wifi_connect.h"
#include "pico_wifi_transport.h"
#include "rcl_check_macros.h"


static rcl_publisher_t publisher;
static std_msgs__msg__Float32 msg;
static rcl_node_t node;
static rcl_allocator_t allocator;
static rclc_support_t support;
static rclc_executor_t executor;
static rcl_subscription_t subscriber;
static std_msgs__msg__Int32 msg_r;

static rcl_publisher_t hello_publisher;
static rcl_timer_t hello_timer;
static std_msgs__msg__String hello_msg;
static uint32_t hello_counter = 0;

static rcl_publisher_t touch_state_publisher;
static rcl_timer_t touch_timer;
static std_msgs__msg__Bool touch_state_msg;


static void hello_timer_callback(rcl_timer_t *timer, int64_t last_call_time)
{
    (void)last_call_time;
    if (timer != NULL)
    {
        char buffer[64];
        hello_counter++;
        snprintf(buffer, sizeof(buffer), "hellow, pico %u", hello_counter);

        rosidl_runtime_c__String__assign(&hello_msg.data, buffer);
        RCSOFTCHECK(rcl_publish(&hello_publisher, &hello_msg, NULL));
        DEBUG_PRINTF("[hello] published: %s\n", buffer);
    }
}

static void touch_timer_callback(rcl_timer_t *timer, int64_t last_call_time)
{
    (void)last_call_time;
    if (timer != NULL)
    {
        touch_state_msg.data = touch_sensor_is_held(&touch, 0);
        RCSOFTCHECK(rcl_publish(&touch_state_publisher, &touch_state_msg, NULL));
    }
}

static void servo_callback(const void *msgin)
{
    const std_msgs__msg__Int32 *msg = (const std_msgs__msg__Int32 *)msgin;

    board_set_msg_status(1);

    if (msg->data % 2 == 0)
    {
        board_set_onboard_led(1);
        board_set_pwm_led(1);
    }
    else
    {
        board_set_onboard_led(0);
        board_set_pwm_led(0);
    }

    servo_ctrl_move_to_angle(SERVO_PIN, msg->data);

    sleep_ms(MSG_STATUS_PULSE_MS);
    board_set_msg_status(0);
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

    rmw_qos_profile_t hello_qos = rmw_qos_profile_default;
    hello_qos.reliability = RMW_QOS_POLICY_RELIABILITY_RELIABLE;
    hello_qos.durability = RMW_QOS_POLICY_DURABILITY_VOLATILE;
    hello_qos.history = RMW_QOS_POLICY_HISTORY_KEEP_LAST;
    hello_qos.depth = 10;

    RCCHECK(rclc_publisher_init(
        &hello_publisher,
        &node,
        ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, String),
        "message_publisher",
        &hello_qos));

    rosidl_runtime_c__String__init(&hello_msg.data);

    RCCHECK(rclc_timer_init_default2(
        &hello_timer,
        &support,
        RCL_MS_TO_NS(1000),
        hello_timer_callback,
        true));

    RCCHECK(rclc_publisher_init_default(
        &touch_state_publisher,
        &node,
        ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Bool),
        "touch_1/state"));

    RCCHECK(rclc_timer_init_default2(
        &touch_timer,
        &support,
        RCL_MS_TO_NS(10),
        touch_timer_callback,
        true));

    RCCHECK(rclc_subscription_init_default(
        &subscriber,
        &node,
        ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Int32),
        "servo_angle"));
    // Initialize executor with 3 handles (1 subscription + 2 timers)
    rclc_executor_init(&executor, &support.context, 3, &allocator);
    rclc_executor_add_timer(&executor, &hello_timer);
    rclc_executor_add_timer(&executor, &touch_timer);
    rclc_executor_add_subscription(
        &executor,
        &subscriber,
        &msg_r,
        &servo_callback,
        ON_NEW_DATA);

    cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 1);

    return 0;
}

void uros_main_run(void) {
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
    RCSOFTCHECK(rcl_publisher_fini(&publisher, &node));
    RCSOFTCHECK(rcl_timer_fini(&touch_timer));
    RCSOFTCHECK(rcl_publisher_fini(&touch_state_publisher, &node));
    RCSOFTCHECK(rcl_timer_fini(&hello_timer));
    RCSOFTCHECK(rcl_publisher_fini(&hello_publisher, &node));
    rosidl_runtime_c__String__fini(&hello_msg.data);
    RCSOFTCHECK(rcl_subscription_fini(&subscriber, &node));
    RCSOFTCHECK(rcl_node_fini(&node));
    cyw43_arch_deinit();
}
