#include <stdio.h>

#include "pico/stdlib.h"
#include "FreeRTOS.h"
#include "task.h"

#include "project_config.h"

#define TASK_STACK_SIZE 512
#define TASK_PRIORITY   1

static void led_task_gp0(void *params) {
    (void)params;

    while (true) {
        gpio_put(WIFI_STATUS_PIN, 1);
        printf("[core %d] GP0 LED on\n", get_core_num());
        vTaskDelay(pdMS_TO_TICKS(500));

        gpio_put(WIFI_STATUS_PIN, 0);
        printf("[core %d] GP0 LED off\n", get_core_num());
        vTaskDelay(pdMS_TO_TICKS(500));
    }
}

static void led_task_gp1(void *params) {
    (void)params;

    while (true) {
        gpio_put(MSG_STATUS_PIN, 1);
        printf("[core %d] GP1 LED on\n", get_core_num());
        vTaskDelay(pdMS_TO_TICKS(700));

        gpio_put(MSG_STATUS_PIN, 0);
        printf("[core %d] GP1 LED off\n", get_core_num());
        vTaskDelay(pdMS_TO_TICKS(700));
    }
}

static void led_task_gp3(void *params) {
    (void)params;

    while (true) {
        gpio_put(PWM_LED_PIN, 1);
        printf("[core %d] GP3 LED on\n", get_core_num());
        vTaskDelay(pdMS_TO_TICKS(900));

        gpio_put(PWM_LED_PIN, 0);
        printf("[core %d] GP3 LED off\n", get_core_num());
        vTaskDelay(pdMS_TO_TICKS(900));
    }
}

static void log_task(void *params) {
    (void)params;

    while (true) {
        printf("[core %d] RTOS log task alive\n", get_core_num());
        vTaskDelay(pdMS_TO_TICKS(1000));
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

void vApplicationMallocFailedHook(void) {
    printf("[ERROR] FreeRTOS malloc failed\n");
    taskDISABLE_INTERRUPTS();
    for (;;) {
        tight_loop_contents();
    }
}

int main(void) {
    stdio_init_all();
    sleep_ms(2000);

    gpio_init(WIFI_STATUS_PIN);
    gpio_set_dir(WIFI_STATUS_PIN, GPIO_OUT);
    gpio_init(MSG_STATUS_PIN);
    gpio_set_dir(MSG_STATUS_PIN, GPIO_OUT);
    gpio_init(PWM_LED_PIN);
    gpio_set_dir(PWM_LED_PIN, GPIO_OUT);

    TaskHandle_t task_gp0 = NULL;
    TaskHandle_t task_gp1 = NULL;
    TaskHandle_t task_gp3 = NULL;
    TaskHandle_t task_log = NULL;

    xTaskCreate(led_task_gp0, "led_gp0", TASK_STACK_SIZE, NULL, TASK_PRIORITY, &task_gp0);
    xTaskCreate(led_task_gp1, "led_gp1", TASK_STACK_SIZE, NULL, TASK_PRIORITY, &task_gp1);
    xTaskCreate(led_task_gp3, "led_gp3", TASK_STACK_SIZE, NULL, TASK_PRIORITY, &task_gp3);
    xTaskCreate(log_task, "log_task", TASK_STACK_SIZE, NULL, TASK_PRIORITY, &task_log);

#if configUSE_CORE_AFFINITY
    if (task_gp0) {
        vTaskCoreAffinitySet(task_gp0, (1 << 0));
    }
    if (task_gp1) {
        vTaskCoreAffinitySet(task_gp1, (1 << 0));
    }
    if (task_gp3) {
        vTaskCoreAffinitySet(task_gp3, (1 << 1));
    }
    if (task_log) {
        vTaskCoreAffinitySet(task_log, (1 << 1));
    }
#endif

    printf("Starting FreeRTOS scheduler...\n");
    vTaskStartScheduler();

    while (true) {
        tight_loop_contents();
    }
}
