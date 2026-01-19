#include <stdio.h>
#include <string.h>

#include "FreeRTOS.h"
#include "pico/stdlib.h"
#include "queue.h"
#include "task.h"

#include "board/board.h"
#include "app_state.h"
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
#define DISPLAY_TASK_STACK_SIZE 2048 // 8kb
#define ROS_TASK_PRIORITY (configMAX_PRIORITIES - 2)
#define PERIPH_TASK_PRIORITY 2
#define DISPLAY_TASK_PRIORITY 1
#define DISPLAY_LINE_CHARS 16

PassiveBuzzerManager buzzer;
TouchSensorManager touch;
SSD1306_t ssd1306;

// Minimal FreeRTOS hook implementations (required when linking FreeRTOS)
void vApplicationMallocFailedHook(void) { configASSERT(0); }

void vApplicationStackOverflowHook(TaskHandle_t xTask, char *pcTaskName) {
    (void)xTask;
    (void)pcTaskName;
    configASSERT(0);
}

static void periph_task(void *params);
static void display_task(void *params);

static TaskHandle_t periph_handle = NULL;
static TaskHandle_t display_handle = NULL;

typedef struct {
    char line1[DISPLAY_LINE_CHARS + 1];
    char line2[DISPLAY_LINE_CHARS + 1];
    char line3[DISPLAY_LINE_CHARS + 1];
    char line4[DISPLAY_LINE_CHARS + 1];
} display_msg_t;

static QueueHandle_t display_queue = NULL;
static display_msg_t display_state = {0};

static void display_sanitize_text(char *dst, size_t dst_len, const char *src) {
    size_t j = 0;
    if (!dst || dst_len == 0) {
        return;
    }
    for (size_t i = 0; src && src[i] != '\0' && j < dst_len - 1; i++) {
        char c = src[i];
        if (c >= 'a' && c <= 'z') {
            c = (char)(c - ('a' - 'A'));
        }
        if ((c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9') || c == ' ') {
            dst[j++] = c;
        } else {
            dst[j++] = ' ';
        }
    }
    dst[j] = '\0';
}

static void display_queue_refresh(void) {
    if (!display_queue) {
        if (!display_queue) {
            printf("[display] queue not ready\n");
        }
        return;
    }
    xQueueOverwrite(display_queue, &display_state);
    printf("[display] queued: %s | %s | %s\n",
           display_state.line1, display_state.line2, display_state.line3);
}

void display_set_status(const char *ssid, bool connected, const char *ip) {
    const char *safe_ssid = ssid ? ssid : "";
    const char *safe_ip = ip ? ip : "0.0.0.0";
    const char *status = connected ? "OK" : "NO";
    char ssid_buf[33];
    display_sanitize_text(ssid_buf, sizeof(ssid_buf), safe_ssid);
    size_t ssid_len = strlen(ssid_buf);
    const char *ssid_tail = (ssid_len > 13) ? ssid_buf + 13 : "";

    snprintf(display_state.line1, sizeof(display_state.line1),
             "%s %.13s", status, ssid_buf);
    snprintf(display_state.line2, sizeof(display_state.line2),
             "%-16.16s", ssid_tail);
    // safe_ip 의 . 지우기
    char safe_ip_no_dots[16];
    size_t j = 0;
    for (size_t i = 0; i < strlen(safe_ip) && j < sizeof(safe_ip_no_dots) - 1; i++) {
        if (safe_ip[i] != '.') {
            safe_ip_no_dots[j++] = safe_ip[i];
        }
    }
    safe_ip_no_dots[j] = '\0';

    snprintf(display_state.line3, sizeof(display_state.line3),
             "IP%s", safe_ip_no_dots);

    display_queue_refresh();
}

void display_set_hello(const char *text) {
    const char *safe_text = text ? text : "";
    char hello_buf[DISPLAY_LINE_CHARS + 1];
    display_sanitize_text(hello_buf, sizeof(hello_buf), safe_text);
    snprintf(display_state.line4, sizeof(display_state.line4),
             "%-16.16s", hello_buf);
    display_queue_refresh();
}

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

    buzzer_init(&buzzer);
    touch_sensor_init(&touch);

    if (servo_ctrl_init(SERVO_PIN) != 0) {
        board_blink_error();
    }

    if (servo_ctrl_init(SERVO_PIN2) != 0) {
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

static void display_task(void *params) {
    (void)params;

    printf("[display] task start\n");
    ssd1306_init(&ssd1306);
    ssd1306_clear(&ssd1306);
    ssd1306_render(&ssd1306);
    printf("[display] init done\n");

    display_set_status(WIFI_SSID, false, "0.0.0.0");

    display_msg_t msg;
    while (true) {
        if (xQueueReceive(display_queue, &msg, portMAX_DELAY) == pdTRUE) {
            printf("[display] render: %s | %s | %s | %s\n",
                   msg.line1, msg.line2, msg.line3, msg.line4);
            ssd1306_clear(&ssd1306);
            ssd1306_write_string(&ssd1306, 0, 0, msg.line1);
            ssd1306_write_string(&ssd1306, 0, 8, msg.line2);
            ssd1306_write_string(&ssd1306, 0, 16, msg.line3);
            ssd1306_write_string(&ssd1306, 0, 24, msg.line4);
            ssd1306_render(&ssd1306);
        }
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

    display_queue = xQueueCreate(1, sizeof(display_msg_t));
    configASSERT(display_queue);

    TaskHandle_t ros_handle = NULL;
    xTaskCreate(ros_task, "ros_task", ROS_TASK_STACK_SIZE, NULL, ROS_TASK_PRIORITY, &ros_handle);

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
