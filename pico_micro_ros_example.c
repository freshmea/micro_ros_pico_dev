#include <stdio.h>

#include <rcl/error_handling.h>
#include <rcl/rcl.h>
#include <rclc/executor.h>
#include <rclc/rclc.h>
#include <rmw_microros/rmw_microros.h>
#include <std_msgs/msg/int32.h>

#include "pico/cyw43_arch.h"
#include "pico/stdlib.h"
#include "pico_wifi_transport.h"

// Pico 2W uses CYW43 for LED
#define LED_PIN CYW43_WL_GPIO_LED_PIN
#define WIFI_STATUS_PIN 0 // GP0: WiFi 연결 상태
#define MSG_STATUS_PIN 1  // GP1: 메시지 전송 상태

rcl_publisher_t publisher;
std_msgs__msg__Int32 msg;

void timer_callback(rcl_timer_t *timer, int64_t last_call_time)
{
    // GP1 켜기
    gpio_put(MSG_STATUS_PIN, 1);

    rcl_ret_t ret = rcl_publish(&publisher, &msg, NULL);
    printf("Published message: %d (result: %d)\n", msg.data, ret);
    msg.data++;

    // 짧은 지연 후 GP1 끄기
    sleep_ms(50);
    gpio_put(MSG_STATUS_PIN, 0);
}

int main()
{
    // USB 시리얼 초기화 (디버깅용)
    stdio_init_all();

    // USB 연결 대기 (최대 5초)
    printf("Waiting for USB connection...\n");
    for (int i = 0; i < 50; i++)
    {
        sleep_ms(100);
        if (stdio_usb_connected())
        {
            break;
        }
    }

    printf("\n=== Pico 2W Micro-ROS WiFi Example ===\n");
    printf("Starting initialization...\n");

    // GPIO 초기화 (WiFi 초기화 전에 수행)
    gpio_init(WIFI_STATUS_PIN);
    gpio_set_dir(WIFI_STATUS_PIN, GPIO_OUT);
    gpio_put(WIFI_STATUS_PIN, 0); // 초기 상태: 꺼짐
    printf("GP0 (WiFi status) initialized\n");

    gpio_init(MSG_STATUS_PIN);
    gpio_set_dir(MSG_STATUS_PIN, GPIO_OUT);
    gpio_put(MSG_STATUS_PIN, 0); // 초기 상태: 꺼짐
    printf("GP1 (Message status) initialized\n");

    printf("Setting up custom transport...\n");
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

    // Wait for agent successful ping for 2 minutes.
    const int timeout_ms = 1000;
    const uint8_t attempts = 120;

    printf("Pinging micro-ROS agent (timeout: %d ms, attempts: %d)...\n", timeout_ms, attempts);
    rcl_ret_t ret = rmw_uros_ping_agent(timeout_ms, attempts);

    if (ret != RCL_RET_OK)
    {
        printf("ERROR: Failed to connect to agent (error code: %d)\n", ret);
        printf("GP0 will blink to indicate error\n");
        // Unreachable agent, exiting program.
        // GP0 깜빡여서 오류 표시
        while (true)
        {
            gpio_put(WIFI_STATUS_PIN, 1);
            sleep_ms(200);
            gpio_put(WIFI_STATUS_PIN, 0);
            sleep_ms(200);
        }
    }

    printf("Successfully connected to agent!\n");
    // Agent 연결 성공 - GP0 켜기
    gpio_put(WIFI_STATUS_PIN, 1);

    printf("Initializing RCL support...\n");
    rclc_support_init(&support, 0, NULL, &allocator);

    printf("Creating node 'pico_node'...\n");
    rclc_node_init_default(&node, "pico_node", "", &support);

    printf("Creating publisher 'pico_publisher'...\n");
    rclc_publisher_init_default(
        &publisher,
        &node,
        ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Int32),
        "pico_publisher");

    printf("Creating timer (1 second interval)...\n");
    rclc_timer_init_default2(
        &timer,
        &support,
        RCL_MS_TO_NS(1000),
        timer_callback,
        true);

    printf("Initializing executor...\n");
    rclc_executor_init(&executor, &support.context, 1, &allocator);
    rclc_executor_add_timer(&executor, &timer);

    printf("Turning on onboard LED...\n");
    cyw43_arch_gpio_put(LED_PIN, 1);

    printf("\n=== System Ready ===\n");
    printf("Starting main loop...\n\n");

    msg.data = 0;
    while (true)
    {
        rclc_executor_spin_some(&executor, RCL_MS_TO_NS(100));
    }
    return 0;
}
