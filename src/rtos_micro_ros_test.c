#include <stdio.h>

#include "pico/stdlib.h"
#include "hardware/clocks.h"

#include "FreeRTOS.h"
#include "task.h"

#include "project_config.h"
#include "board/board.h"
#include "drivers/servo_ctrl.h"
#include "drivers/passive_buzzer_manager.h"
#include "drivers/touch_sensor.h"
#include "uros/uros_app.h"

#define ROS_TASK_STACK_SIZE     8192
#define PERIPH_TASK_STACK_SIZE  2048
#define ROS_TASK_PRIORITY       (configMAX_PRIORITIES - 2)
#define PERIPH_TASK_PRIORITY    2

void vApplicationMallocFailedHook(void) {
    printf("[ERROR] Malloc failed\n");
    taskDISABLE_INTERRUPTS();
    for (;;) {
        tight_loop_contents();
    }
}

void vApplicationStackOverflowHook(TaskHandle_t task, char *task_name) {
    (void)task;
    printf("[ERROR] Stack overflow in task: %s\n", task_name ? task_name : "unknown");
    taskDISABLE_INTERRUPTS();
    for (;;) {
        tight_loop_contents();
    }
}

static TaskHandle_t periph_handle = NULL;

static void periph_task(void *params);

static void ros_task(void *params) {
    (void)params;

    printf("[INFO] ROS task starting on core %d\n", get_core_num());

    if (board_wifi_init() != 0) {
        board_blink_error();
    }
    printf("[INFO] WiFi init done, starting micro-ROS init\n");

    if (uros_app_init() != 0) {
        board_blink_error();
    }
    printf("[INFO] micro-ROS init done, entering spin loop\n");

    if (periph_handle == NULL) {
        xTaskCreate(
            periph_task,
            "periph_task",
            PERIPH_TASK_STACK_SIZE,
            NULL,
            PERIPH_TASK_PRIORITY,
            &periph_handle);
#if configUSE_CORE_AFFINITY
        if (periph_handle) {
            vTaskCoreAffinitySet(periph_handle, (1 << 1));
        }
#endif
    }

    while (true) {
        uros_app_spin_once();
        vTaskDelay(pdMS_TO_TICKS(5));
    }
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

        // if ((xTaskGetTickCount() - last_led_toggle) >= pdMS_TO_TICKS(500)) {
        //     last_led_toggle = xTaskGetTickCount();
        //     led_state = !led_state;
        //     board_set_wifi_status(led_state);
        //     board_set_msg_status(!led_state);
        //     board_set_pwm_led(led_state);
        //     printf("[core %d] LED toggle: %d\n", get_core_num(), led_state ? 1 : 0);
        // }

        vTaskDelay(pdMS_TO_TICKS(20));
    }
}

int main(void) {
    board_init();

    printf("\n");
    printf("========================================\n");
    printf("RTOS micro-ROS test\n");
    printf("========================================\n");
    printf("FreeRTOS Kernel: %s\n", tskKERNEL_VERSION_NUMBER);
    printf("System Clock: %lu Hz\n", clock_get_hz(clk_sys));

    TaskHandle_t ros_handle = NULL;

    xTaskCreate(
        ros_task,
        "ros_task",
        ROS_TASK_STACK_SIZE,
        NULL,
        ROS_TASK_PRIORITY,
        &ros_handle);

#if configUSE_CORE_AFFINITY
    if (ros_handle) {
        vTaskCoreAffinitySet(ros_handle, (1 << 0));
    }
#endif

    printf("Starting FreeRTOS scheduler...\n");
    vTaskStartScheduler();

    while (true) {
        tight_loop_contents();
    }
}
