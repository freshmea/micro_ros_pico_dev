#include "uros.h"

#include <rcl/error_handling.h>
#include <std_msgs/msg/bool.h>
#include <std_msgs/msg/float32.h>
#include <std_msgs/msg/int32.h>
#include <std_msgs/msg/string.h>
#include <std_msgs/msg/u_int8_multi_array.h>
#include <std_msgs/msg/u_int8.h>

#include <rosidl_runtime_c/string_functions.h>
#include <rosidl_runtime_c/primitives_sequence_functions.h>
#include <rmw/qos_profiles.h>

#include "FreeRTOS.h"
#include "hardware/adc.h"
#include "lwip/netif.h"
#include "pico/cyw43_arch.h"
#include "pico/stdlib.h"
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
static rcl_subscription_t display_bitmap_subscriber;
static std_msgs__msg__UInt8MultiArray msg_display_bitmap;
static uint8_t display_bitmap_buf[DISPLAY_BITMAP_BYTES];
static rcl_subscription_t ws2812_subscriber;
static std_msgs__msg__UInt8MultiArray msg_ws2812;
static uint8_t ws2812_cmd_buf[4];

static bool wifi_connected = false;
static bool uros_connected = false;
static bool uros_running = false;
static char wifi_ip_buf[16] = "0.0.0.0";

// touch_state_publisher 관련 변수
static rcl_publisher_t touch_state_publisher;
static rcl_publisher_t touch_state_publisher2;
static rcl_publisher_t touch_state_publisher3;
static rcl_publisher_t touch_beep_publisher;
static rcl_publisher_t touch_beep_publisher2;
static rcl_publisher_t touch_beep_publisher3;
static rcl_timer_t touch_timer;
static std_msgs__msg__Bool touch_state_msg;
static std_msgs__msg__Bool touch_state_msg2;
static std_msgs__msg__Bool touch_state_msg3;
static std_msgs__msg__UInt8 touch_beep_msg;
static std_msgs__msg__UInt8 touch_beep_msg2;
static std_msgs__msg__UInt8 touch_beep_msg3;

static void touch_timer_callback(rcl_timer_t *timer, int64_t last_call_time) {
    (void)last_call_time;
    if (timer != NULL) {
        if (!uros_running) {
            return;
        }
        touch_state_msg.data = touch_sensor_is_held(&touch, 0);
        rcl_ret_t pub_ret = rcl_publish(&touch_state_publisher, &touch_state_msg, NULL);
        if (pub_ret != RCL_RET_OK) {
            DEBUG_PRINTF("[uros] touch publish failed: %d\n", (int)pub_ret);
        }

        touch_state_msg2.data = touch_sensor_is_held(&touch, 1);
        pub_ret = rcl_publish(&touch_state_publisher2, &touch_state_msg2, NULL);
        if (pub_ret != RCL_RET_OK) {
            DEBUG_PRINTF("[uros] touch2 publish failed: %d\n", (int)pub_ret);
        }

        touch_state_msg3.data = touch_sensor_is_held(&touch, 2);
        pub_ret = rcl_publish(&touch_state_publisher3, &touch_state_msg3, NULL);
        if (pub_ret != RCL_RET_OK) {
            DEBUG_PRINTF("[uros] touch3 publish failed: %d\n", (int)pub_ret);
        }

        touch_beep_msg.data = touch_sensor_get_beep_count(&touch, 0);
        pub_ret = rcl_publish(&touch_beep_publisher, &touch_beep_msg, NULL);
        if (pub_ret != RCL_RET_OK) {
            DEBUG_PRINTF("[uros] touch1 beep publish failed: %d\n", (int)pub_ret);
        }

        touch_beep_msg2.data = touch_sensor_get_beep_count(&touch, 1);
        pub_ret = rcl_publish(&touch_beep_publisher2, &touch_beep_msg2, NULL);
        if (pub_ret != RCL_RET_OK) {
            DEBUG_PRINTF("[uros] touch2 beep publish failed: %d\n", (int)pub_ret);
        }

        touch_beep_msg3.data = touch_sensor_get_beep_count(&touch, 2);
        pub_ret = rcl_publish(&touch_beep_publisher3, &touch_beep_msg3, NULL);
        if (pub_ret != RCL_RET_OK) {
            DEBUG_PRINTF("[uros] touch3 beep publish failed: %d\n", (int)pub_ret);
        }
    }
}

static void servo_callback(const void *msgin) {
    const std_msgs__msg__Int32 *msg = (const std_msgs__msg__Int32 *)msgin;

    gpio_put(MSG_STATUS_PIN, 1);

    if (msg->data % 2 == 0) {
        cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 1);
    } else {
        cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 0);
    }

    servo_ctrl_move_to_angle(SERVO_PIN, msg->data);

    sleep_ms(MSG_STATUS_PULSE_MS);
    gpio_put(MSG_STATUS_PIN, 0);
}

static void servo2_callback(const void *msgin) {
    const std_msgs__msg__Int32 *msg = (const std_msgs__msg__Int32 *)msgin;
    servo_ctrl_move_to_angle(SERVO_PIN2, msg->data);
}

static void display_message_callback(const void *msgin) {
    const std_msgs__msg__String *msg = (const std_msgs__msg__String *)msgin;
    display_set_message(msg->data.data, msg->data.size);
}

static void display_bitmap_callback(const void *msgin) {
    const std_msgs__msg__UInt8MultiArray *msg = (const std_msgs__msg__UInt8MultiArray *)msgin;
    display_set_bitmap(msg->data.data, msg->data.size);
}

static void ws2812_callback(const void *msgin)
{
    const std_msgs__msg__UInt8MultiArray *msg = (const std_msgs__msg__UInt8MultiArray *)msgin;
    if (msg->data.size < 4) {
        DEBUG_PRINTF("[uros] ws2812 rx too short: %u bytes\n", (unsigned)msg->data.size);
        return;
    }
    uint8_t index = msg->data.data[0];
    uint8_t r = msg->data.data[1];
    uint8_t g = msg->data.data[2];
    uint8_t b = msg->data.data[3];
    DEBUG_PRINTF("[uros] ws2812 rx: idx=%u r=%u g=%u b=%u\n", index, r, g, b);
    periph_ws2812_set_pixel(index, r, g, b);
}

void uros_task(void *params) {
    (void)params;

    const TickType_t retry_delay = pdMS_TO_TICKS(5000);

    while (true) {
        DEBUG_PRINTF("[uros] init start\n");
        if (uros_main_init() == 0) {
            DEBUG_PRINTF("[uros] init ok, run loop\n");
            uros_main_run();
            DEBUG_PRINTF("[uros] run loop exited, cleanup\n");
            uros_main_cleanup();
            DEBUG_PRINTF("[uros] cleanup done\n");
        }
        DEBUG_PRINTF("[uros] init/run failed, retry in 5s\n");
        vTaskDelay(retry_delay);
    }
}

int uros_main_init(void) {

    uros_running = false;
    DEBUG_PRINTF("[uros] wifi connect start\n");
    if (pico_wifi_connect() != 0) {
        wifi_connected = false;
        uros_connected = false;
        snprintf(wifi_ip_buf, sizeof(wifi_ip_buf), "0.0.0.0");
        display_set_status(WIFI_SSID, wifi_connected, wifi_ip_buf, uros_connected);
        DEBUG_PRINTF("[uros] wifi connect failed\n");
        return -1;
    }
    DEBUG_PRINTF("[uros] wifi connect ok\n");
    wifi_connected = true;
    snprintf(wifi_ip_buf, sizeof(wifi_ip_buf), "0.0.0.0");
    cyw43_arch_lwip_begin();
    if (netif_default) {
        snprintf(wifi_ip_buf, sizeof(wifi_ip_buf), "%s", ip4addr_ntoa(netif_ip4_addr(netif_default)));
    }
    cyw43_arch_lwip_end();
    uros_connected = false;
    display_set_status(WIFI_SSID, wifi_connected, wifi_ip_buf, uros_connected);

    DEBUG_PRINTF("[uros] set transport\n");
    rmw_uros_set_custom_transport(false, // must be false for UDP
                                  NULL, pico_wifi_transport_open, pico_wifi_transport_close, pico_wifi_transport_write,
                                  pico_wifi_transport_read);

    allocator = rcl_get_default_allocator();

    cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 1);

    // Wait for agent ping with shorter timeouts but more attempts (from main.c)
    const int timeout_ms = AGENT_PING_TIMEOUT_MS;
    const uint8_t attempts = AGENT_PING_ATTEMPTS;
    rcl_ret_t ret = RCL_RET_ERROR;
    uint8_t blink_led = 1;

    for (int loop = 0; loop < attempts; loop++) {
        DEBUG_PRINTF("[uros] ping agent attempt %d/%d\n", loop + 1, attempts);
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
        uros_connected = false;
        display_set_status(WIFI_SSID, wifi_connected, wifi_ip_buf, uros_connected);
        DEBUG_PRINTF("[uros] ping agent failed\n");
        return -1;
    }

    uros_connected = true;
    display_set_status(WIFI_SSID, wifi_connected, wifi_ip_buf, uros_connected);
    DEBUG_PRINTF("[uros] ping agent ok, init rcl\n");

    rclc_support_init(&support, 0, NULL, &allocator);
    rmw_uros_set_context_entity_destroy_session_timeout(rcl_context_get_rmw_context(&support.context), 0);
    rclc_node_init_default(&node, ROS_NODE_NAME, ROS_NAMESPACE, &support);

    rmw_qos_profile_t qos_depth10 = rmw_qos_profile_default;
    qos_depth10.depth = 10;

    RCCHECK(rclc_publisher_init(&touch_state_publisher, &node, ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Bool),
                                "touch_1/state", &qos_depth10));
    RCCHECK(rclc_publisher_init(&touch_state_publisher2, &node, ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Bool),
                                "touch_2/state", &qos_depth10));
    RCCHECK(rclc_publisher_init(&touch_state_publisher3, &node, ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Bool),
                                "touch_3/state", &qos_depth10));
    RCCHECK(rclc_publisher_init(&touch_beep_publisher, &node, ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, UInt8),
                                "touch_1/beep_count", &qos_depth10));
    RCCHECK(rclc_publisher_init(&touch_beep_publisher2, &node, ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, UInt8),
                                "touch_2/beep_count", &qos_depth10));
    RCCHECK(rclc_publisher_init(&touch_beep_publisher3, &node, ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, UInt8),
                                "touch_3/beep_count", &qos_depth10));

    RCCHECK(rclc_timer_init_default2(&touch_timer, &support, RCL_MS_TO_NS(100), touch_timer_callback, true));

    RCCHECK(rclc_subscription_init(&servo_subscriber, &node, ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Int32),
                                   "servo_angle", &qos_depth10));

    RCCHECK(rclc_subscription_init(&servo_subscriber2, &node, ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Int32),
                                   "servo2_angle", &qos_depth10));
    RCCHECK(rclc_subscription_init(&display_subscriber, &node,
                                   ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, String), "display_message",
                                   &qos_depth10));
    RCCHECK(rclc_subscription_init(&display_bitmap_subscriber, &node,
                                   ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, UInt8MultiArray),
                                   "display_bitmap", &qos_depth10));
    RCCHECK(rclc_subscription_init(&ws2812_subscriber, &node,
                                   ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, UInt8MultiArray),
                                   "ws2812_pixel", &qos_depth10));

    // String 버퍼 초기화
    rosidl_runtime_c__String__init(&msg_display.data);
    msg_display.data.data = display_msg_buf;
    msg_display.data.capacity = sizeof(display_msg_buf);
    msg_display.data.size = 0;

    // WS2812 커맨드 버퍼 초기화
    rosidl_runtime_c__uint8__Sequence__init(&msg_ws2812.data, 0);
    msg_ws2812.data.data = ws2812_cmd_buf;
    msg_ws2812.data.capacity = sizeof(ws2812_cmd_buf);
    // Allow deserialization into the full fixed buffer
    msg_ws2812.data.size = msg_ws2812.data.capacity;

    // Display bitmap 버퍼 초기화
    rosidl_runtime_c__uint8__Sequence__init(&msg_display_bitmap.data, 0);
    msg_display_bitmap.data.data = display_bitmap_buf;
    msg_display_bitmap.data.capacity = sizeof(display_bitmap_buf);
    msg_display_bitmap.data.size = msg_display_bitmap.data.capacity;

    // Executor 초기화 및 핸들러 12 추가(Subscriber 5, timer 1, publisher 6)
    rcl_ret_t exec_rc = rclc_executor_init(&executor, &support.context, 6, &allocator);
    if (exec_rc != RCL_RET_OK) {
        DEBUG_PRINTF("[uros] executor init failed rc=%d\n", (int)exec_rc);
        return -1;
    }

    exec_rc = rclc_executor_add_timer(&executor, &touch_timer);
    if (exec_rc != RCL_RET_OK) {
        DEBUG_PRINTF("[uros] executor add timer failed rc=%d\n", (int)exec_rc);
        return -1;
    }

    exec_rc = rclc_executor_add_subscription(&executor, &servo_subscriber, &msg_servo, &servo_callback, ON_NEW_DATA);
    if (exec_rc != RCL_RET_OK) {
        DEBUG_PRINTF("[uros] executor add servo failed rc=%d\n", (int)exec_rc);
        return -1;
    }

    exec_rc =
        rclc_executor_add_subscription(&executor, &servo_subscriber2, &msg_servo2, &servo2_callback, ON_NEW_DATA);
    if (exec_rc != RCL_RET_OK) {
        DEBUG_PRINTF("[uros] executor add servo2 failed rc=%d\n", (int)exec_rc);
        return -1;
    }

    exec_rc = rclc_executor_add_subscription(&executor, &display_subscriber, &msg_display,
                                             &display_message_callback, ON_NEW_DATA);
    if (exec_rc != RCL_RET_OK) {
        DEBUG_PRINTF("[uros] executor add display failed rc=%d\n", (int)exec_rc);
        return -1;
    }

    exec_rc = rclc_executor_add_subscription(&executor, &display_bitmap_subscriber, &msg_display_bitmap,
                                             &display_bitmap_callback, ON_NEW_DATA);
    if (exec_rc != RCL_RET_OK) {
        DEBUG_PRINTF("[uros] executor add bitmap failed rc=%d\n", (int)exec_rc);
        return -1;
    }

    exec_rc =
        rclc_executor_add_subscription(&executor, &ws2812_subscriber, &msg_ws2812, &ws2812_callback, ON_NEW_DATA);
    if (exec_rc != RCL_RET_OK) {
        DEBUG_PRINTF("[uros] executor add ws2812 failed rc=%d\n", (int)exec_rc);
        return -1;
    }

    cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 1);
    uros_running = true;
    DEBUG_PRINTF("[uros] init done\n");

    return 0;
}

void uros_main_run(void) {
    const TickType_t ping_interval = pdMS_TO_TICKS(5000);
    TickType_t last_ping = xTaskGetTickCount();

    while (true) {
        rclc_executor_spin_some(&executor, RCL_MS_TO_NS(10));

        // Make sure WiFi/lwIP driver progresses even while waiting
        cyw43_arch_poll();
        vTaskDelay(pdMS_TO_TICKS(1));

        TickType_t now = xTaskGetTickCount();
        if ((now - last_ping) >= ping_interval) {
            last_ping = now;
            if (rmw_uros_ping_agent(AGENT_PING_TIMEOUT_MS, 1) != RCL_RET_OK) {
                uros_connected = false;
                display_set_status(WIFI_SSID, wifi_connected, wifi_ip_buf, uros_connected);
                DEBUG_PRINTF("[uros] ping lost, exit run loop\n");
                uros_running = false;
                RCSOFTCHECK(rcl_timer_cancel(&touch_timer));
                break;
            }
        }
    }
}

void uros_main_spin_once(void) {
    rclc_executor_spin_some(&executor, RCL_MS_TO_NS(10));
    // Make sure WiFi/lwIP driver progresses even while waiting
    cyw43_arch_poll();
}

void uros_main_cleanup(void) {
    uros_running = false;
    DEBUG_PRINTF("[uros] cleanup: executor_fini\n");
    RCSOFTCHECK(rclc_executor_fini(&executor));
    DEBUG_PRINTF("[uros] cleanup: timer_fini\n");
    RCSOFTCHECK(rcl_timer_fini(&touch_timer));
    DEBUG_PRINTF("[uros] cleanup: publisher_fini\n");
    RCSOFTCHECK(rcl_publisher_fini(&touch_state_publisher, &node));
    RCSOFTCHECK(rcl_publisher_fini(&touch_state_publisher2, &node));
    RCSOFTCHECK(rcl_publisher_fini(&touch_state_publisher3, &node));
    RCSOFTCHECK(rcl_publisher_fini(&touch_beep_publisher, &node));
    RCSOFTCHECK(rcl_publisher_fini(&touch_beep_publisher2, &node));
    RCSOFTCHECK(rcl_publisher_fini(&touch_beep_publisher3, &node));
    DEBUG_PRINTF("[uros] cleanup: string_reset\n");
    msg_display.data.size = 0;
    msg_display_bitmap.data.size = 0;
    msg_ws2812.data.size = 0;
    DEBUG_PRINTF("[uros] cleanup: display_sub_fini\n");
    RCSOFTCHECK(rcl_subscription_fini(&display_subscriber, &node));
    RCSOFTCHECK(rcl_subscription_fini(&display_bitmap_subscriber, &node));
    RCSOFTCHECK(rcl_subscription_fini(&ws2812_subscriber, &node));
    DEBUG_PRINTF("[uros] cleanup: servo2_sub_fini\n");
    RCSOFTCHECK(rcl_subscription_fini(&servo_subscriber2, &node));
    DEBUG_PRINTF("[uros] cleanup: servo_sub_fini\n");
    RCSOFTCHECK(rcl_subscription_fini(&servo_subscriber, &node));
    DEBUG_PRINTF("[uros] cleanup: node_fini\n");
    RCSOFTCHECK(rcl_node_fini(&node));
    DEBUG_PRINTF("[uros] cleanup: support_fini\n");
    RCSOFTCHECK(rclc_support_fini(&support));
    DEBUG_PRINTF("[uros] cleanup: done\n");
}
