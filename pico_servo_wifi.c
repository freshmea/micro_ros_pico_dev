#include <stdio.h>

#include <rcl/error_handling.h>
#include <rcl/rcl.h>
#include <rclc/executor.h>
#include <rclc/rclc.h>
#include <rmw_microros/rmw_microros.h>
#include <std_msgs/msg/int32.h>

#include "pico/cyw43_arch.h"
#include "pico/stdlib.h"
#include "pico_servo.h"
#include "pico_wifi_transport.h"

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

// Pico 2W uses CYW43 for LED
#define LED_PIN CYW43_WL_GPIO_LED_PIN
#define WIFI_STATUS_PIN 0 // GP0: WiFi 연결 상태
#define MSG_STATUS_PIN 1  // GP1: 메시지 전송 상태
#define SERVO_PIN 2       // GP2: Servo 제어
#define PWM_LED_PIN 3     // GP3: PWM LED (짝수/홀수 표시)

rcl_subscription_t subscriber;
std_msgs__msg__Int32 msg_r;

void subscription_callback(const void *msgin)
{
    const std_msgs__msg__Int32 *msg = (const std_msgs__msg__Int32 *)msgin;

    printf("Received message: %d\n", msg->data);

    // GP1 켜기 (메시지 수신 표시)
    gpio_put(MSG_STATUS_PIN, 1);

    // LED control based on even/odd (onboard LED)
    if (msg->data % 2 == 0)
    {
        cyw43_arch_gpio_put(LED_PIN, 1);
        gpio_put(PWM_LED_PIN, 1); // GP3 켜기 (짝수)
    }
    else
    {
        cyw43_arch_gpio_put(LED_PIN, 0);
        gpio_put(PWM_LED_PIN, 0); // GP3 끄기 (홀수)
    }

    // Update response message data
    msg_r.data = msg_r.data + 3;

    // Move servo to angle (0-180 range)
    int angle = abs(msg->data) % 181; // 0-180 범위로 제한, 음수 처리
    printf("Moving servo to angle: %d\n", angle);

    int result = servo_move_to(SERVO_PIN, angle);
    if (result != 0)
    {
        printf("ERROR: servo_move_to failed with code %d\n", result);
    }
    else
    {
        printf("Servo command sent successfully\n");
    }

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

    printf("\n=== Pico 2W Micro-ROS WiFi Servo Control ===\n");
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

    // GP3 초기화 (PWM LED)
    gpio_init(PWM_LED_PIN);
    gpio_set_dir(PWM_LED_PIN, GPIO_OUT);
    gpio_put(PWM_LED_PIN, 0); // 초기 상태: 꺼짐
    printf("GP3 (PWM LED) initialized\n");

    // Servo 초기화
    printf("Initializing servo...\n");

    int ret_servo = servo_init();
    if (ret_servo != 0)
    {
        printf("ERROR: servo_init failed\n");
    }

    ret_servo = servo_clock_auto();
    if (ret_servo != 0)
    {
        printf("ERROR: servo_clock_auto failed\n");
    }
    else
    {
        printf("Servo clock configured\n");
    }

    // pwm period 50hz(20ms) duty cycle 1ms to 2ms (1000-2000us)
    servo_set_bounds(1000, 2000);
    printf("Servo bounds set: 1000-2000 microseconds\n");

    ret_servo = servo_attach(SERVO_PIN);
    if (ret_servo != 0)
    {
        printf("ERROR: servo_attach failed on GP%d\n", SERVO_PIN);
    }
    else
    {
        printf("Servo attached to GP%d\n", SERVO_PIN);
    }

    // 초기 위치로 이동 (90도)
    sleep_ms(100); // 초기화 후 짧은 대기
    ret_servo = servo_move_to(SERVO_PIN, 90);
    if (ret_servo != 0)
    {
        printf("ERROR: Initial servo_move_to failed\n");
    }
    else
    {
        printf("Servo moved to initial position (90 degrees)\n");
    }

    sleep_ms(500); // 서보가 초기 위치로 이동할 시간 제공

    printf("Setting up custom transport...\n");
    rmw_uros_set_custom_transport(
        false,
        NULL,
        pico_wifi_transport_open,
        pico_wifi_transport_close,
        pico_wifi_transport_write,
        pico_wifi_transport_read);

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
    RCCHECK(rclc_support_init(&support, 0, NULL, &allocator));

    printf("Creating node 'pico_node'...\n");
    RCCHECK(rclc_node_init_default(&node, "pico_node", "", &support));

    printf("Creating subscriber 'pico_subscriber'...\n");
    RCCHECK(rclc_subscription_init_default(
        &subscriber,
        &node,
        ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Int32),
        "pico_subscriber"));

    printf("Initializing executor...\n");
    RCCHECK(rclc_executor_init(&executor, &support.context, 1, &allocator));
    RCCHECK(rclc_executor_add_subscription(
        &executor,
        &subscriber,
        &msg_r,
        &subscription_callback,
        ON_NEW_DATA));

    printf("Turning on onboard LED...\n");
    cyw43_arch_gpio_put(LED_PIN, 1);

    printf("\n=== System Ready ===\n");
    printf("Waiting for messages on 'pico_subscriber' topic...\n\n");

    msg_r.data = 0;
    while (true)
    {
        RCSOFTCHECK(rclc_executor_spin_some(&executor, RCL_MS_TO_NS(100)));
    }

    // Cleanup (unreachable in current implementation)
    RCCHECK(rcl_subscription_fini(&subscriber, &node));
    RCCHECK(rcl_node_fini(&node));

    return 0;
}
