#include "uros.h"

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
#include "lwip/netif.h"
#include "task.h"

#include "app_state.h"
#include "project_config.h"
#include "servo_ctrl.h"
#include "tasks/display_task.h"
#include "tasks/periph_task.h"

#include "pico_wifi_connect.h"
#include "pico_wifi_transport.h"
#include "rcl_check_macros.h"


static rcl_node_t node;
static rcl_allocator_t allocator;
static rclc_support_t support;
static rclc_executor_t executor;
static rcl_subscription_t servo_subscriber;
static rcl_subscription_t servo_subscriber2;
static std_msgs__msg__Int32 msg_servo;
static std_msgs__msg__Int32 msg_servo2;

static rcl_subscription_t display_subscriber;
static std_msgs__msg__String msg_display;
static char display_msg_buf[DISPLAY_MESSAGE_MAX + 1];

// touch_state_publisher 관련 변수
static rcl_publisher_t touch_state_publisher;
static rcl_timer_t touch_timer;
static std_msgs__msg__Bool touch_state_msg;

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

static void servo2_callback(const void *msgin)
{
    const std_msgs__msg__Int32 *msg = (const std_msgs__msg__Int32 *)msgin;
    printf("Servo2 angle command received: %d\n", msg->data);
    servo_ctrl_move_to_angle(SERVO_PIN2, msg->data);
    display_set_message("Servo2 moved", 12);
}

static void display_message_callback(const void *msgin)
{
    const std_msgs__msg__String *msg = (const std_msgs__msg__String *)msgin;
    printf("Display message received: %.*s\n", (int)msg->data.size, msg->data.data);

    display_set_message(msg->data.data, msg->data.size);
}

void uros_task(void *params)
{
    (void)params;

    if (uros_main_init() != 0) {
        vTaskDelete(NULL);
    }

    uros_main_run();
    uros_main_cleanup();
    vTaskDelete(NULL);
}

int uros_main_init(void) {

    if (pico_wifi_connect() != 0) {
        display_set_status(WIFI_SSID, false, "0.0.0.0");
        return -1;
    }
    char ip_buf[16] = "0.0.0.0";
    cyw43_arch_lwip_begin();
    if (netif_default) {
        snprintf(ip_buf, sizeof(ip_buf), "%s", ip4addr_ntoa(netif_ip4_addr(netif_default)));
    }
    cyw43_arch_lwip_end();
    display_set_status(WIFI_SSID, true, ip_buf);

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
        &servo_subscriber,
        &node,
        ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Int32),
        "servo_angle"));

    RCCHECK(rclc_subscription_init_default(
        &servo_subscriber2,
        &node,
        ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Int32),
        "servo2_angle"));
    RCCHECK(rclc_subscription_init_default(
        &display_subscriber,
        &node,
        ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, String),
        "display_message"));

    // String 버퍼 초기화
    rosidl_runtime_c__String__init(&msg_display.data);
    msg_display.data.data = display_msg_buf;
    msg_display.data.capacity = sizeof(display_msg_buf);
    msg_display.data.size = 0;
    // Executor 초기화 및 핸들러 4 추가(Subscriber 3, timer 1)
    rclc_executor_init(&executor, &support.context, 4, &allocator);
    rclc_executor_add_timer(&executor, &touch_timer);
    rclc_executor_add_subscription(
        &executor,
        &servo_subscriber,
        &msg_servo,
        &servo_callback,
        ON_NEW_DATA);
    rclc_executor_add_subscription(
        &executor,
        &servo_subscriber2,
        &msg_servo2,
        &servo2_callback,
        ON_NEW_DATA);
    rclc_executor_add_subscription(
        &executor,
        &display_subscriber,
        &msg_display,
        &display_message_callback,
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
    RCSOFTCHECK(rcl_timer_fini(&touch_timer));
    RCSOFTCHECK(rcl_publisher_fini(&touch_state_publisher, &node));
    rosidl_runtime_c__String__fini(&msg_display.data);
    RCSOFTCHECK(rcl_subscription_fini(&display_subscriber, &node));
    RCSOFTCHECK(rcl_subscription_fini(&servo_subscriber2, &node));
    RCSOFTCHECK(rcl_subscription_fini(&servo_subscriber, &node));
    RCSOFTCHECK(rcl_node_fini(&node));
    cyw43_arch_deinit();
}
