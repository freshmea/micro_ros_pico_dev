#include "tasks/display_task.h"

#include <string.h>
#include <stdio.h>
#include "FreeRTOS.h"
#include "queue.h"
#include "task.h"

#include "app_state.h"
#include "drivers/ssd1306_driver.h"
#include "pico/stdlib.h"
#include "project_config.h"

#define DISPLAY_LINE_CHARS 16

typedef struct {
    char line1[DISPLAY_LINE_CHARS + 1];
    char line2[DISPLAY_LINE_CHARS + 1];
    char line3[DISPLAY_LINE_CHARS + 1];
    char line4[DISPLAY_LINE_CHARS + 1];
} display_msg_t;

static QueueHandle_t display_queue = NULL;
static display_msg_t display_state = {0};

static void display_sanitize_text(char *dst, size_t dst_len, const char *src)
{
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

static void display_queue_refresh(void)
{
    if (!display_queue) {
        return;
    }
    xQueueOverwrite(display_queue, &display_state);
}

void display_set_status(const char *ssid, bool connected, const char *ip)
{
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

void display_set_hello(const char *text)
{
    const char *safe_text = text ? text : "";
    char hello_buf[DISPLAY_LINE_CHARS + 1];
    display_sanitize_text(hello_buf, sizeof(hello_buf), safe_text);
    snprintf(display_state.line4, sizeof(display_state.line4),
             "%-16.16s", hello_buf);
    display_queue_refresh();
}

void display_task_init(void)
{
    display_queue = xQueueCreate(1, sizeof(display_msg_t));
    configASSERT(display_queue);
}

void display_task(void *params)
{
    (void)params;

    ssd1306_init(&ssd1306);
    ssd1306_clear(&ssd1306);
    ssd1306_render(&ssd1306);

    display_set_status(WIFI_SSID, false, "0.0.0.0");

    display_msg_t msg;
    while (true) {
        if (xQueueReceive(display_queue, &msg, portMAX_DELAY) == pdTRUE) {
            ssd1306_clear(&ssd1306);
            ssd1306_write_string(&ssd1306, 0, 0, msg.line1);
            ssd1306_write_string(&ssd1306, 0, 8, msg.line2);
            ssd1306_write_string(&ssd1306, 0, 16, msg.line3);
            ssd1306_write_string(&ssd1306, 0, 24, msg.line4);
            ssd1306_render(&ssd1306);
        }
    }
}
