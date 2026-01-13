#include "uros_app.h"
#include "board.h"
#include "project_config.h"
#include "servo_ctrl.h"
#include "passive_buzzer_manager.h"
#include "touch_sensor.h"

#include <rcl/error_handling.h>
#include <rmw_microros/rmw_microros.h>
#include <std_msgs/msg/int32.h>
#include <std_msgs/msg/int32_multi_array.h>
#include <std_msgs/msg/bool.h>
#include <std_msgs/msg/u_int8.h>
#include <std_msgs/msg/u_int64.h>
#include <stdio.h>

#include "pico_wifi_transport.h"
#include "rcl_check_macros.h"
#include "pico/cyw43_arch.h"
#include "cyw43.h"
#include "FreeRTOS.h"
#include "task.h"

// cyw43 상태 외부 선언
extern cyw43_t cyw43_state;

// micro-ROS entities
static rcl_node_t node;
static rcl_allocator_t allocator;
static rclc_support_t support;
static rclc_executor_t executor;
static rcl_subscription_t subscriber;
static rcl_subscription_t buzzer_subscriber;
static rcl_timer_t buzzer_timer;
static rcl_timer_t touch_timer;
static std_msgs__msg__Int32 msg_r;
static std_msgs__msg__Int32MultiArray buzzer_msg;

// Publishers for touch sensors
static rcl_publisher_t touch_state_publishers[TOUCH_SENSOR_COUNT];  // Bool (pressed/released)
static rcl_publisher_t touch_beep_publishers[TOUCH_SENSOR_COUNT];   // UInt8 (beep count)
static rcl_publisher_t touch_duration_publishers[TOUCH_SENSOR_COUNT]; // UInt64 (duration)

static std_msgs__msg__Bool touch_state_msgs[TOUCH_SENSOR_COUNT];
static std_msgs__msg__UInt8 touch_beep_msgs[TOUCH_SENSOR_COUNT];
static std_msgs__msg__UInt64 touch_duration_msgs[TOUCH_SENSOR_COUNT];

// Buzzer manager
static PassiveBuzzerManager buzzer_manager;

// Touch sensor manager
static TouchSensorManager touch_manager;

// Buzzer subscription callback
static void buzzer_subscription_callback(const void *msgin)
{
    const std_msgs__msg__Int32MultiArray *msg = (const std_msgs__msg__Int32MultiArray *)msgin;

    // msg->data.data[0] = frequency
    // msg->data.data[1] = duration
    if (msg->data.size >= 2)
    {
        int frequency = msg->data.data[0];
        int duration = msg->data.data[1];
        buzzer_add_note(&buzzer_manager, frequency, duration);
    }
}

// Buzzer timer callback (10ms interval for update)
static void buzzer_timer_callback(rcl_timer_t *timer, int64_t last_call_time)
{
    (void)last_call_time;
    if (timer != NULL)
    {
        uint64_t currentMillis = to_ms_since_boot(get_absolute_time());
        buzzer_update(&buzzer_manager, currentMillis);
        buzzer_check_button(&buzzer_manager);
    }
}

// Touch sensor timer callback (10ms interval for update)
static void touch_timer_callback(rcl_timer_t *timer, int64_t last_call_time)
{
    (void)last_call_time;
    if (timer != NULL)
    {
        uint64_t currentMillis = to_ms_since_boot(get_absolute_time());
        touch_sensor_update(&touch_manager, currentMillis);

        // Check each touch sensor
        for (int i = 0; i < TOUCH_SENSOR_COUNT; i++)
        {
            // Publish state on press/release
            if (touch_sensor_is_pressed(&touch_manager, i))
            {
                // Play beep sound (1000Hz, 100ms)
                buzzer_add_note(&buzzer_manager, 1000, 100);
            }
            else if (touch_sensor_is_held(&touch_manager, i))
            {
                // Increment beep count if every 0.8 seconds
                if (touch_sensor_get_duration(&touch_manager, i) > \
                    touch_sensor_get_beep_count(&touch_manager, i) * 800)
                {
                    touch_sensor_increment_beep_count(&touch_manager, i);
                    buzzer_add_note(&buzzer_manager, 1000, 100);
                }
                // Publish beep count
                touch_beep_msgs[i].data = touch_sensor_get_beep_count(&touch_manager, i);
                RCSOFTCHECK(rcl_publish(&touch_beep_publishers[i], &touch_beep_msgs[i], NULL));
                // Publish duration
                touch_duration_msgs[i].data = touch_sensor_get_duration(&touch_manager, i);
                RCSOFTCHECK(rcl_publish(&touch_duration_publishers[i], &touch_duration_msgs[i], NULL));
            }
            touch_state_msgs[i].data = touch_sensor_is_held(&touch_manager, i);
            RCSOFTCHECK(rcl_publish(&touch_state_publishers[i], &touch_state_msgs[i], NULL));
        }
    }
}

// Subscription callback
static void subscription_callback(const void *msgin)
{
    const std_msgs__msg__Int32 *msg = (const std_msgs__msg__Int32 *)msgin;

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

    // Move servo to angle (0-180 range)
    servo_ctrl_move_to_angle(SERVO_PIN, msg->data);

    // Short delay then turn off GP1
    sleep_ms(MSG_STATUS_PULSE_MS);
    board_set_msg_status(0);
}

int uros_app_init(void)
{
    // WiFi는 이미 main.c에서 초기화됨
    printf("[INFO] Initializing micro-ROS...\n");

    // Initialize buzzer manager
    buzzer_init(&buzzer_manager);

    // Initialize touch sensor manager
    touch_sensor_init(&touch_manager);

    rmw_uros_set_custom_transport(
        false,
        NULL,
        pico_wifi_transport_open,
        pico_wifi_transport_close,
        pico_wifi_transport_write,
        pico_wifi_transport_read);

    allocator = rcl_get_default_allocator();

    // Create init options and set domain ID
    rcl_init_options_t init_options = rcl_get_zero_initialized_init_options();
    RCCHECK(rcl_init_options_init(&init_options, allocator));
    RCCHECK(rcl_init_options_set_domain_id(&init_options, ROS_DOMAIN_ID));

    // Wait for agent successful ping
    const int timeout_ms = AGENT_PING_TIMEOUT_MS;
    const uint8_t attempts = AGENT_PING_ATTEMPTS;

    printf("[INFO] Pinging agent (timeout=%dms, attempts=%u)\n", timeout_ms, attempts);
    rcl_ret_t ret = rmw_uros_ping_agent(timeout_ms, attempts);
    printf("[INFO] Ping result: %d\n", (int)ret);

    if (ret != RCL_RET_OK)
    {
        board_blink_error();
        return -1;
    }

    // Agent connection success - turn on GP0
    board_set_wifi_status(1);

    RCCHECK(rclc_support_init_with_options(&support, 0, NULL, &init_options, &allocator));

    RCCHECK(rclc_node_init_default(&node, ROS_NODE_NAME, ROS_NAMESPACE, &support));

    // Initialize servo angle subscriber
    RCCHECK(rclc_subscription_init_default(
        &subscriber,
        &node,
        ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Int32),
        "servo_angle"));

    // Initialize buzzer subscriber
    buzzer_msg.data.capacity = 10;
    buzzer_msg.data.size = 0;
    buzzer_msg.data.data = (int32_t *)malloc(buzzer_msg.data.capacity * sizeof(int32_t));

    RCCHECK(rclc_subscription_init_default(
        &buzzer_subscriber,
        &node,
        ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Int32MultiArray),
        "buzzer"));

    // Initialize buzzer timer (10ms = 100Hz)
    const unsigned int timer_timeout = 10;
    RCCHECK(rclc_timer_init_default2(
        &buzzer_timer,
        &support,
        RCL_MS_TO_NS(timer_timeout),
        buzzer_timer_callback,
        true));  // autostart = true

    // Initialize touch sensor publishers (3 sensors, 3 topics each = 9 publishers)
    const char *touch_topic_names[TOUCH_SENSOR_COUNT][3] = {
        {"touch_1/state", "touch_1/beep_count", "touch_1/duration"},
        {"touch_2/state", "touch_2/beep_count", "touch_2/duration"},
        {"touch_3/state", "touch_3/beep_count", "touch_3/duration"}
    };

    for (int i = 0; i < TOUCH_SENSOR_COUNT; i++)
    {
        // State publisher (Bool)
        RCCHECK(rclc_publisher_init_default(
            &touch_state_publishers[i],
            &node,
            ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Bool),
            touch_topic_names[i][0]));

        // Beep count publisher (UInt8)
        RCCHECK(rclc_publisher_init_default(
            &touch_beep_publishers[i],
            &node,
            ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, UInt8),
            touch_topic_names[i][1]));

        // Duration publisher (UInt64)
        RCCHECK(rclc_publisher_init_default(
            &touch_duration_publishers[i],
            &node,
            ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, UInt64),
            touch_topic_names[i][2]));
    }

    // Initialize touch timer (10ms = 100Hz)
    RCCHECK(rclc_timer_init_default2(
        &touch_timer,
        &support,
        RCL_MS_TO_NS(timer_timeout),
        touch_timer_callback,
        true));  // autostart = true

    // Initialize executor with 4 handles (2 subscriptions + 2 timers)
    RCCHECK(rclc_executor_init(&executor, &support.context, 4, &allocator));

    RCCHECK(rclc_executor_add_subscription(
        &executor,
        &subscriber,
        &msg_r,
        &subscription_callback,
        ON_NEW_DATA));

    RCCHECK(rclc_executor_add_subscription(
        &executor,
        &buzzer_subscriber,
        &buzzer_msg,
        &buzzer_subscription_callback,
        ON_NEW_DATA));

    RCCHECK(rclc_executor_add_timer(&executor, &buzzer_timer));
    RCCHECK(rclc_executor_add_timer(&executor, &touch_timer));

    board_set_onboard_led(1);

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

void uros_app_spin_once(void)
{
    RCSOFTCHECK(rclc_executor_spin_some(&executor, RCL_MS_TO_NS(EXECUTOR_SPIN_TIMEOUT_MS)));
}

void uros_app_cleanup(void)
{
    // Clean up timers
    RCSOFTCHECK(rcl_timer_fini(&touch_timer));
    RCSOFTCHECK(rcl_timer_fini(&buzzer_timer));

    // Clean up touch sensor publishers
    for (int i = 0; i < TOUCH_SENSOR_COUNT; i++)
    {
        RCSOFTCHECK(rcl_publisher_fini(&touch_duration_publishers[i], &node));
        RCSOFTCHECK(rcl_publisher_fini(&touch_beep_publishers[i], &node));
        RCSOFTCHECK(rcl_publisher_fini(&touch_state_publishers[i], &node));
    }

    // Clean up subscriptions
    RCSOFTCHECK(rcl_subscription_fini(&buzzer_subscriber, &node));
    RCSOFTCHECK(rcl_subscription_fini(&subscriber, &node));

    RCSOFTCHECK(rcl_node_fini(&node));

    // Free buzzer message memory
    if (buzzer_msg.data.data != NULL)
    {
        free(buzzer_msg.data.data);
    }
}
