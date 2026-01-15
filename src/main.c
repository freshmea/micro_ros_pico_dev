#include <stdio.h>

#include "FreeRTOS.h"
#include "pico/stdlib.h"
#include "task.h"

#include "board/board.h"
#include "pico/cyw43_arch.h"
#include "drivers/passive_buzzer_manager.h"
#include "drivers/touch_sensor.h"
#include "drivers/servo_ctrl.h"
#include "pico/stdio_usb.h"
#include "project_config.h"
#include "uros/uros_main.h"

// maximum stack size 128kb / 32768 words
#define ROS_TASK_STACK_SIZE 8192 // 32kb
#define PERIPH_TASK_STACK_SIZE 8192 // 32kb
#define ROS_TASK_PRIORITY (configMAX_PRIORITIES - 2)
#define PERIPH_TASK_PRIORITY 2

// Minimal FreeRTOS hook implementations (required when linking FreeRTOS)
void vApplicationMallocFailedHook(void) { configASSERT(0); }

void vApplicationStackOverflowHook(TaskHandle_t xTask, char *pcTaskName) {
    (void)xTask;
    (void)pcTaskName;
    configASSERT(0);
}

static void periph_task(void *params);

static TaskHandle_t periph_handle = NULL;

static void ros_task(void *params) {
    (void)params;

    if (uros_main_init() != 0) {
        vTaskDelete(NULL);
    }

    uros_main_run();
    uros_main_cleanup();
    vTaskDelete(NULL);
}

static void periph_task(void *params) {
    (void)params;

    printf("[INFO] Periph task starting on core %d\n", get_core_num());

    PassiveBuzzerManager buzzer;
    // TouchSensorManager touch;

    buzzer_init(&buzzer);
    // touch_sensor_init(&touch);

    if (servo_ctrl_init(SERVO_PIN) != 0) {
        board_blink_error();
    }

    // TickType_t last_led_toggle = xTaskGetTickCount();
    // bool led_state = false;

    while (true) {
        uint64_t now_ms = to_ms_since_boot(get_absolute_time());

        // touch_sensor_update(&touch, now_ms);

        // for (int i = 0; i < TOUCH_SENSOR_COUNT; i++) {
        //     if (touch_sensor_is_pressed(&touch, i)) {
        //         printf("[core %d] Touch %d pressed\n", get_core_num(), i + 1);
        //         buzzer_play_beep(&buzzer, 1200, 100);
        //     }
        // }

        buzzer_update(&buzzer, now_ms);
        buzzer_check_button(&buzzer);
        if (now_ms % 50 == 0) {
            printf("[INFO] Periph task loop on core %d time : %llu \n", get_core_num(), now_ms);
        }

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
