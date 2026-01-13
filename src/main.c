#include <stdio.h>
#include <stdarg.h>
#include "pico/stdlib.h"
#include "hardware/clocks.h"
#include "FreeRTOS.h"
#include "task.h"
#include "semphr.h"
#include "hardware/watchdog.h"
#include "pico/cyw43_arch.h"
#include "cyw43.h"
#include "project_config.h"

#include "board/board.h"
#include "drivers/servo_ctrl.h"
#include "uros/uros_app.h"

// cyw43 상태 외부 선언
extern cyw43_t cyw43_state;

// Task configuration
// WiFi + lwIP + micro-ROS는 매우 큰 스택 필요!
#define TASK_STACK_SIZE     8192
// lwIP tcpip 스레드와 동일한 우선순위 사용 (configMAX_PRIORITIES - 2 = 30)
#define UROS_TASK_PRIORITY  (configMAX_PRIORITIES - 2)  // 2 -> 30으로 변경
#define MAIN_TASK_PRIORITY  1

// Task handles
static TaskHandle_t task_handle_uros = NULL;
static TaskHandle_t task_handle_main = NULL;

// Agent state enum
typedef enum {
    WAITING_FOR_AGENT,
    AGENT_AVAILABLE,
    AGENT_CONNECTED,
    AGENT_DISCONNECTED
} AGENT_STATE;

// Forward declarations
void reset(void);
bool ping_agent(void);

// Reset system using watchdog
void reset(void) {
    watchdog_disable();
    watchdog_enable(1, true);
    while(1);  // Wait for the watchdog to reset the system
}

// Ping micro-ROS agent
bool ping_agent(void) {
    return rmw_uros_ping_agent(100, 10) == RMW_RET_OK;
}

// FreeRTOS Hook: Malloc failed
void vApplicationMallocFailedHook(void) {
    printf("[ERROR] Malloc failed! Resetting...\n");
    configASSERT(false);
    reset();
}

// FreeRTOS Hook: Stack overflow
void vApplicationStackOverflowHook(TaskHandle_t xTask, char *pcTaskName) {
    printf("[ERROR] Stack overflow in task: '%s'! Resetting...\n", pcTaskName);
    configASSERT(false);
    reset();
}

// Main application task
void main_task(void *params) {
    (void)params;

    printf("[INFO] Main task starting on core %d\n", get_core_num());

    // Initialize servo controller
    if (servo_ctrl_init(SERVO_PIN) != 0) {
        printf("[ERROR] Failed to initialize servo controller\n");
        board_blink_error();
    }

    printf("[INFO] Main task initialized successfully\n");

    // Main task can do other work here while uROS runs on another task
    while (true) {
        // Add any periodic tasks here
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}

// micro-ROS state management task
void uros_state_task(void *params) {
    (void)params;

    printf("[INFO] uROS state task starting on core %d\n", get_core_num());

    // Initialize board peripherals (GPIO, LEDs)
    printf("[INFO] Initializing board peripherals...\n");
    board_init();
    printf("[INFO] Board initialized\n");

    // WiFi 초기화 (ping_agent 전에 필수!)
    printf("[INFO] Initializing WiFi...\n");
    if (cyw43_arch_init())
    {
        printf("[ERROR] Failed to initialize WiFi hardware\n");
        printf("[ERROR] System will reset in 5 seconds...\n");
        vTaskDelay(pdMS_TO_TICKS(5000));
        reset();
    }

    printf("[INFO] WiFi hardware initialized\n");
    cyw43_arch_enable_sta_mode();
    printf("[INFO] STA mode enabled\n");

    // WiFi 연결
    printf("[INFO] Connecting to WiFi: %s\n", WIFI_SSID);

    uint32_t start_time = to_ms_since_boot(get_absolute_time());
    int connect_err = cyw43_arch_wifi_connect_async(WIFI_SSID, WIFI_PASSWORD, WIFI_AUTH_MODE);

    if (connect_err != 0)
    {
        printf("[ERROR] Failed to start WiFi connection (error: %d)\n", connect_err);
        printf("[ERROR] System will reset in 5 seconds...\n");
        vTaskDelay(pdMS_TO_TICKS(5000));
        reset();
    }

    // 연결 대기 (폴링)
    extern cyw43_t cyw43_state;
    int status = CYW43_LINK_UP + 1;
    while (status != CYW43_LINK_UP)
    {
        if (to_ms_since_boot(get_absolute_time()) - start_time > WIFI_CONNECT_TIMEOUT_MS)
        {
            printf("[ERROR] WiFi connection timeout\n");
            printf("[ERROR] System will reset in 5 seconds...\n");
            vTaskDelay(pdMS_TO_TICKS(5000));
            reset();
        }

        cyw43_arch_poll();
        status = cyw43_wifi_link_status(&cyw43_state, CYW43_ITF_STA);

        // FreeRTOS 양보
        vTaskDelay(pdMS_TO_TICKS(100));
    }

    printf("[INFO] WiFi connected successfully!\n");
    board_set_wifi_status(1);  // WiFi LED 켜기

    AGENT_STATE current_agent_state = WAITING_FOR_AGENT;
    printf("[INFO] Waiting for micro-ROS agent...\n");

    while (true) {
        switch (current_agent_state) {
            case WAITING_FOR_AGENT:
                printf("[DEBUG] Pinging agent...\n");
                if (ping_agent()) {
                    current_agent_state = AGENT_AVAILABLE;
                }
                break;            case AGENT_AVAILABLE:
                printf("[INFO] Agent available!\n");

                if (uros_app_init() == 0) {
                    current_agent_state = AGENT_CONNECTED;
                    printf("[INFO] micro-ROS initialized successfully\n");

                    // Start main application task
                    BaseType_t task_created = xTaskCreate(
                        main_task,
                        "main_task",
                        TASK_STACK_SIZE,
                        NULL,
                        MAIN_TASK_PRIORITY,
                        &task_handle_main
                    );

                    #if configUSE_CORE_AFFINITY
                    vTaskCoreAffinitySet(task_handle_main, (1 << 1));  // Core 1
                    #endif

                    if (task_created != pdPASS) {
                        printf("[ERROR] Failed to create main task!\n");
                        current_agent_state = AGENT_DISCONNECTED;
                    }
                } else {
                    printf("[ERROR] Failed to initialize micro-ROS\n");
                    current_agent_state = AGENT_DISCONNECTED;
                }
                break;

            case AGENT_CONNECTED:
                // Run micro-ROS executor
                uros_app_spin_once();

                // Check agent connection
                if (!ping_agent()) {
                    current_agent_state = AGENT_DISCONNECTED;
                    printf("[INFO] Agent disconnected!\n");
                }
                break;

            case AGENT_DISCONNECTED:
                printf("[INFO] Cleaning up resources and preparing for reset...\n");

                // Delete main task if exists
                if (task_handle_main != NULL) {
                    vTaskDelete(task_handle_main);
                    task_handle_main = NULL;
                }

                // Disable interrupts and suspend scheduler
                portDISABLE_INTERRUPTS();
                vTaskSuspendAll();
                printf("[INFO] Scheduler suspended\n");

                // Set up watchdog timer to reset if cleanup hangs
                watchdog_enable(1000, true);

                // Cleanup micro-ROS resources
                uros_app_cleanup();

                printf("[INFO] Cleanup completed, resetting...\n");
                reset();
                break;
        }

        vTaskDelay(pdMS_TO_TICKS(100));
    }
}

int main() {
    // CRITICAL: stdio MUST be initialized before FreeRTOS
    stdio_init_all();

    // Wait for USB to be ready (important for FreeRTOS!)
    sleep_ms(3000);

    // Simple LED blink test to verify system is running
    gpio_init(WIFI_STATUS_PIN);
    gpio_set_dir(WIFI_STATUS_PIN, GPIO_OUT);

    // Blink 3 times to show we reached here
    for (int i = 0; i < 3; i++) {
        gpio_put(WIFI_STATUS_PIN, 1);
        sleep_ms(200);
        gpio_put(WIFI_STATUS_PIN, 0);
        sleep_ms(200);
    }

    printf("\n");
    printf("========================================\n");
    printf("Bindbot micro-ROS with FreeRTOS\n");
    printf("========================================\n");
    printf("FreeRTOS Kernel: %s\n", tskKERNEL_VERSION_NUMBER);
    printf("System Clock: %lu Hz\n", clock_get_hz(clk_sys));
    printf("Creating tasks...\n");

    // Create micro-ROS state task
    BaseType_t task_created = xTaskCreate(
        uros_state_task,
        "uros_state",
        TASK_STACK_SIZE,
        NULL,
        UROS_TASK_PRIORITY,
        &task_handle_uros
    );

    #if configUSE_CORE_AFFINITY
    vTaskCoreAffinitySet(task_handle_uros, (1 << 0));  // Core 0
    #endif

    if (task_created != pdPASS) {
        printf("ERROR: Failed to create micro-ROS state task!\n");

        // Blink rapidly to indicate error
        while(1) {
            gpio_put(WIFI_STATUS_PIN, 1);
            sleep_ms(100);
            gpio_put(WIFI_STATUS_PIN, 0);
            sleep_ms(100);
        }
    }

    printf("Starting FreeRTOS scheduler...\n");
    printf("(After this, printf may not work)\n");

    vTaskStartScheduler();

    // Should never reach here
    printf("FATAL: Scheduler failed to start!\n");

    // Blink very rapidly to indicate fatal error
    while(1) {
        gpio_put(WIFI_STATUS_PIN, 1);
        sleep_ms(50);
        gpio_put(WIFI_STATUS_PIN, 0);
        sleep_ms(50);
    }
}