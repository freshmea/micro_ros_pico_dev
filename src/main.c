#include <stdio.h>

#include <rcl/error_handling.h>
#include <rcl/rcl.h>
#include <rclc/executor.h>
#include <rclc/rclc.h>
#include <rmw_microros/rmw_microros.h>
#include <std_msgs/msg/float32.h>

#include "FreeRTOS.h"
#include "pico/stdio_usb.h"
#include "pico/stdlib.h"
#include "project_config.h"
#include "task.h"

#include "board/board.h"
#include "hardware/adc.h"
#include "pico/cyw43_arch.h"
#include "pico_wifi_connect.h"
#include "pico_wifi_transport.h"
#include "drivers/passive_buzzer_manager.h"
#include "drivers/touch_sensor.h"
#include "drivers/servo_ctrl.h"

#define VREF (3.25f)                   // Voltage of Vref
#define CONV_FACTOR (VREF / (1 << 12)) // conversion factor
#define TEMP_ADC (4)                   // ADC number of temperature sensor

#define ROS_TASK_STACK_SIZE 8192
#define PERIPH_TASK_STACK_SIZE 2048
#define ROS_TASK_PRIORITY (configMAX_PRIORITIES - 2)
#define PERIPH_TASK_PRIORITY 2

rcl_publisher_t publisher;
std_msgs__msg__Float32 msg;

static void timer_callback(rcl_timer_t *timer, int64_t last_call_time) {
    uint16_t raw_data;
    float temp, voltage;

    // read raw data from ADC
    raw_data = adc_read();
    // convert raw to voltage
    voltage = raw_data * CONV_FACTOR;
    // convert voltage to temperature
    temp = 27 - (voltage - 0.706) / 0.001721;
    msg.data = temp;

    (void)rcl_publish(&publisher, &msg, NULL);
}

// Minimal FreeRTOS hook implementations (required when linking FreeRTOS)
void vApplicationMallocFailedHook(void) { configASSERT(0); }

void vApplicationStackOverflowHook(TaskHandle_t xTask, char *pcTaskName) {
    (void)xTask;
    (void)pcTaskName;
    configASSERT(0);
}

static void ros_task(void *params) {
    (void)params;

    // initialize ADC
    adc_init();
    adc_set_temp_sensor_enabled(true); // set temperature sensor enabled
    adc_select_input(TEMP_ADC);        // temperature sensor selected

    if (pico_wifi_connect() != 0) {
        vTaskDelete(NULL);
    }

    rmw_uros_set_custom_transport(
        false, // must be false for UDP
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

    int loop = 0;
    for (; loop < attempts; loop++) {
        printf("uros_ping_agent: loop[%d]\n", loop);
        ret = rmw_uros_ping_agent(timeout_ms, 1);

//=================================
#if PICO_CYW43_ARCH_POLL
        // if you are using pico_cyw43_arch_poll, then you must poll periodically from your
        // main loop (not from a timer) to check for WiFi driver or lwIP work that needs to be done.
        cyw43_arch_poll();
        vTaskDelay(pdMS_TO_TICKS(10));
#else
        // if you are not using pico_cyw43_arch_poll, then WiFI driver and lwIP work
        // is done via interrupt in the background. This sleep is just an example of some (blocking)
        // work you might be doing.
        vTaskDelay(pdMS_TO_TICKS(10));
#endif
        //=================================
        if (ret == RCL_RET_OK) {
            // Reachable agent, exiting loop.
            cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 0);
            break;
        }
        cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, blink_led);
        blink_led = blink_led ? 0 : 1;
    }
    if (ret != RCL_RET_OK) {
        // Unreachable agent, exiting program.
        cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 0);
        vTaskDelete(NULL);
    }

    rclc_support_init(&support, 0, NULL, &allocator);

    rclc_node_init_default(&node, "picow_node", "", &support);
    rclc_publisher_init_default(&publisher, &node, ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Float32),
                                "picow_publisher");

    rclc_timer_init_default2(&timer, &support, RCL_MS_TO_NS(1000), timer_callback, true);

    rclc_executor_init(&executor, &support.context, 1, &allocator);
    rclc_executor_add_timer(&executor, &timer);

//=================================
#if 0
    gpio_put(LED_PIN, 1);
#else
    cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 1);
#endif
    //=================================

    printf("main loop start\n");

    msg.data = 0;
    while (true) {
        rclc_executor_spin_some(&executor, RCL_MS_TO_NS(100));
//=================================
#if PICO_CYW43_ARCH_POLL
        // if you are using pico_cyw43_arch_poll, then you must poll periodically from your
        // main loop (not from a timer) to check for WiFi driver or lwIP work that needs to be done.
        cyw43_arch_poll();
        vTaskDelay(pdMS_TO_TICKS(1));
#else
        // if you are not using pico_cyw43_arch_poll, then WiFI driver and lwIP work
        // is done via interrupt in the background. This sleep is just an example of some (blocking)
        // work you might be doing.
        vTaskDelay(pdMS_TO_TICKS(1000));
#endif
        //=================================
    }
    //=================================
    cyw43_arch_deinit();
    //=================================
    vTaskDelete(NULL);
}

static void periph_task(void *params) {
    (void)params;

    printf("[INFO] Periph task starting on core %d\n", get_core_num());

    PassiveBuzzerManager buzzer;
    TouchSensorManager touch;

    buzzer_init(&buzzer);
    touch_sensor_init(&touch);

    if (servo_ctrl_init(SERVO_PIN) != 0) {
        board_blink_error();
    }

    TickType_t last_led_toggle = xTaskGetTickCount();
    bool led_state = false;

    while (true) {
        uint64_t now_ms = to_ms_since_boot(get_absolute_time());

        touch_sensor_update(&touch, now_ms);

        for (int i = 0; i < TOUCH_SENSOR_COUNT; i++) {
            if (touch_sensor_is_pressed(&touch, i)) {
                printf("[core %d] Touch %d pressed\n", get_core_num(), i + 1);
                buzzer_play_beep(&buzzer, 1200, 100);
            }
        }

        buzzer_update(&buzzer, now_ms);
        buzzer_check_button(&buzzer);

        vTaskDelay(pdMS_TO_TICKS(20));
    }
}

int main(void) {
    stdio_init_all();
    stdio_uart_init();
    board_init();

    for (int i = 0; i < 50; i++) { // ~5s max
        if (stdio_usb_connected()) {
            break;
        }
        sleep_ms(100);
    }

    TaskHandle_t ros_handle = NULL;
    xTaskCreate(ros_task, "ros_task", ROS_TASK_STACK_SIZE, NULL, ROS_TASK_PRIORITY, &ros_handle);

    TaskHandle_t periph_handle = NULL;
    xTaskCreate(periph_task, "periph_task", PERIPH_TASK_STACK_SIZE, NULL, PERIPH_TASK_PRIORITY, &periph_handle);

#if configUSE_CORE_AFFINITY
    if (ros_handle) {
        vTaskCoreAffinitySet(ros_handle, (1 << 0));
    }
    if (periph_handle) {
        vTaskCoreAffinitySet(periph_handle, (1 << 1));
    }
#endif

    vTaskStartScheduler();

    while (true) {
        tight_loop_contents();
    }
}
