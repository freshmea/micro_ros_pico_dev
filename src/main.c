#include <string.h>

#include "FreeRTOS.h"
#include "pico/stdlib.h"
#include "queue.h"
#include "task.h"

#include "app_state.h"
#include "pico/cyw43_arch.h"
#include "drivers/passive_buzzer_manager.h"
#include "drivers/touch_sensor.h"
#include "drivers/servo_ctrl.h"
#include "pico/stdio_usb.h"
#include "project_config.h"
#include "tasks/display_task.h"
#include "tasks/periph_task.h"
#include "tasks/uros.h"

// maximum stack size 128kb / 32768 words
#define ROS_TASK_STACK_SIZE 8192 // 32kb
#define PERIPH_TASK_STACK_SIZE 8192 // 32kb
#define DISPLAY_TASK_STACK_SIZE 2048 // 8kb
#define ROS_TASK_PRIORITY (configMAX_PRIORITIES - 2)
#define PERIPH_TASK_PRIORITY 2
#define DISPLAY_TASK_PRIORITY 1
PassiveBuzzerManager buzzer;
TouchSensorManager touch;

// Minimal FreeRTOS hook implementations (required when linking FreeRTOS)
void vApplicationMallocFailedHook(void) { configASSERT(0); }

void vApplicationStackOverflowHook(TaskHandle_t xTask, char *pcTaskName) {
    (void)xTask;
    (void)pcTaskName;
    configASSERT(0);
}

static TaskHandle_t periph_handle = NULL;
static TaskHandle_t display_handle = NULL;

int main(void) {
    stdio_init_all();

    periph_task_init();
    display_task_init();

    TaskHandle_t ros_handle = NULL;
    xTaskCreate(uros_task, "ros_task", ROS_TASK_STACK_SIZE, NULL, ROS_TASK_PRIORITY, &ros_handle);

    xTaskCreate(display_task, "display_task", DISPLAY_TASK_STACK_SIZE, NULL, DISPLAY_TASK_PRIORITY, &display_handle);

    xTaskCreate(periph_task, "periph_task", PERIPH_TASK_STACK_SIZE, NULL, PERIPH_TASK_PRIORITY, &periph_handle);

#if configUSE_CORE_AFFINITY
    if (ros_handle) {
        vTaskCoreAffinitySet(ros_handle, (1 << 0));
    }
    if (periph_handle) {
        vTaskCoreAffinitySet(periph_handle, (1 << 1));
    }
    if (display_handle) {
        vTaskCoreAffinitySet(display_handle, (1 << 1));
    }
#endif

    vTaskStartScheduler();

    while (true) {
        tight_loop_contents();
    }
}
