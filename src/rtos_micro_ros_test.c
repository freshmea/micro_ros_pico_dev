#include <stddef.h>
#include <stdio.h>

#include "pico/stdlib.h"
#include "hardware/clocks.h"
#include "hardware/watchdog.h"

#include "FreeRTOS.h"
#include "task.h"

#include "project_config.h"
#include "app_state.h"
#include "drivers/servo_ctrl.h"
#include "drivers/ssd1306_driver.h"
#include "drivers/passive_buzzer_manager.h"
#include "drivers/touch_sensor.h"
#include "tasks/periph_task.h"
#include "tasks/uros.h"
#include "transport/pico_wifi_connect.h"
#include "transport/pico_wifi_transport.h"
#include "pico/cyw43_arch.h"
#include <rmw_microros/rmw_microros.h>

#define ROS_TASK_STACK_SIZE     8192
#define PERIPH_TASK_STACK_SIZE  2048
#define ROS_TASK_PRIORITY       (configMAX_PRIORITIES - 2)
#define PERIPH_TASK_PRIORITY    2

PassiveBuzzerManager buzzer;
TouchSensorManager touch;
SSD1306_t ssd1306;

void display_set_status(const char *ssid, bool connected, const char *ip, bool uros_connected)
{
    printf("[display] %s %s %s uros:%s\n",
           connected ? "OK" : "NO",
           ssid ? ssid : "",
           ip ? ip : "",
           uros_connected ? "OK" : "NO");
}

void display_set_hello(const char *text)
{
    printf("[display] %s\n", text ? text : "");
}

void display_set_message(const char *text, size_t len)
{
    printf("[display] message(%u): %.*s\n",
           (unsigned)len,
           (int)len,
           text ? text : "");
}

void display_set_mode(uint8_t mode)
{
    printf("[display] mode %u\n", (unsigned)mode);
}

void display_set_number(int value)
{
    printf("[display] number %d\n", value);
}

void display_next_screen(void)
{
    printf("[display] next screen\n");
}

typedef enum {
    WAITING_FOR_AGENT,
    AGENT_AVAILABLE,
    AGENT_CONNECTED,
    AGENT_DISCONNECTED
} agent_state_t;

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

static void reset_system(void) {
    watchdog_disable();
    watchdog_enable(1, true);
    while (1) {
        tight_loop_contents();
    }
}

static bool ping_agent(void) {
    return rmw_uros_ping_agent(AGENT_PING_TIMEOUT_MS, 1) == RMW_RET_OK;
}

static void ros_task(void *params) {
    (void)params;

    printf("[INFO] ROS task starting on core %d\n", get_core_num());

    if (pico_wifi_connect() != 0) {
        vTaskDelete(NULL);
    }
    printf("[INFO] WiFi init done, waiting for agent\n");

    // Set custom UDP transport BEFORE any ping to the agent
    rmw_uros_set_custom_transport(
        false,
        NULL,
        pico_wifi_transport_open,
        pico_wifi_transport_close,
        pico_wifi_transport_write,
        pico_wifi_transport_read);

    agent_state_t state = WAITING_FOR_AGENT;
    int ping_fail_count = 0;

    while (true) {
        // Make sure WiFi/lwIP driver progresses even while waiting
        cyw43_arch_poll();

        switch (state) {
            case WAITING_FOR_AGENT:
                if (ping_agent()) {
                    state = AGENT_AVAILABLE;
                    ping_fail_count = 0;
                } else {
                    if ((++ping_fail_count % 10) == 0) {
                        printf("[WARN] Agent not reachable (%d attempts)\n", ping_fail_count);
                    }
                }
                break;

            case AGENT_AVAILABLE:
                printf("[INFO] Agent available, initializing micro-ROS\n");
                if (uros_main_init() == 0) {
                    state = AGENT_CONNECTED;
                    printf("[INFO] micro-ROS init done\n");

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
                } else {
                    printf("[ERROR] micro-ROS init failed, resetting...\n");
                    state = AGENT_DISCONNECTED;
                }
                break;

            case AGENT_CONNECTED:
                uros_main_spin_once();
                if (!ping_agent()) {
                    printf("[WARN] Agent lost\n");
                    state = AGENT_DISCONNECTED;
                }
                break;

            case AGENT_DISCONNECTED:
                printf("[INFO] Cleaning up after disconnect\n");

                if (periph_handle != NULL) {
                    vTaskDelete(periph_handle);
                    periph_handle = NULL;
                }

                // Stop executor and free entities
                uros_main_cleanup();

                // Let watchdog perform a clean reset to re-establish WiFi/agent
                reset_system();
                break;
        }

        vTaskDelay(pdMS_TO_TICKS(100));
    }
}

int main(void) {
    periph_task_init();

    printf("\n");
    printf("========================================\n");
    printf("RTOS micro-ROS test\n");
    printf("========================================\n");
    printf("FreeRTOS Kernel: %s\n", tskKERNEL_VERSION_NUMBER);
    printf("System Clock: %lu Hz\n", clock_get_hz(clk_sys));

    TaskHandle_t ros_handle = NULL;

    // pico_wifi_connect();

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
