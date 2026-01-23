#include "tasks/periph_task.h"

#include <stdlib.h>
#include "FreeRTOS.h"
#include "queue.h"
#include "task.h"

#include "app_state.h"
#include "drivers/passive_buzzer_manager.h"
#include "drivers/servo_ctrl.h"
#include "drivers/touch_sensor.h"
#include "drivers/ws2812_driver.h"
#include "modes/mode_manager.h"
#include "pico/stdio_usb.h"
#include "pico/stdlib.h"
#include "project_config.h"

static ws2812_strip_t ws2812_strip;
typedef struct {
    uint8_t index;
    uint8_t r;
    uint8_t g;
    uint8_t b;
} ws2812_cmd_t;

static QueueHandle_t ws2812_cmd_queue = NULL;
static bool ws2812_override = false;
static uint64_t ws2812_override_until_ms = 0;

void periph_ws2812_set_pixel(uint8_t index, uint8_t r, uint8_t g, uint8_t b)
{
    if (!ws2812_cmd_queue) {
        return;
    }
    ws2812_cmd_t cmd = {
        .index = index,
        .r = r,
        .g = g,
        .b = b
    };
    xQueueSend(ws2812_cmd_queue, &cmd, 0);
}

void periph_ws2812_clear_override(void)
{
    ws2812_override = false;
    ws2812_override_until_ms = 0;
}

void periph_task_init(void)
{
    gpio_init(MSG_STATUS_PIN);
    gpio_set_dir(MSG_STATUS_PIN, GPIO_OUT);
    gpio_put(MSG_STATUS_PIN, 0);

    gpio_set_function(BUZZER_PIN, GPIO_FUNC_PWM);

    ws2812_cmd_queue = xQueueCreate(4, sizeof(ws2812_cmd_t));
    configASSERT(ws2812_cmd_queue);
}

static void periph_blink_error(void)
{
    while (true) {
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}

void periph_task(void *params)
{
    (void)params;
    uint8_t last_beep_count[TOUCH_SENSOR_COUNT] = {0};

    buzzer_init(&buzzer);
    touch_sensor_init(&touch);

    if (servo_ctrl_init(SERVO_PIN) != 0) {
        periph_blink_error();
    }

    if (servo_ctrl_init(SERVO_PIN2) != 0) {
        periph_blink_error();
    }

    if (!ws2812_init(&ws2812_strip, WS2812_PIN, WS2812_LED_COUNT, false)) {
        periph_blink_error();
    }
    srand((unsigned)to_ms_since_boot(get_absolute_time()));

    mode_context_t mode_ctx = {
        .buzzer = &buzzer,
        .ws2812 = &ws2812_strip
    };
    mode_manager_init(&mode_ctx);

    while (true) {
        uint64_t now_ms = to_ms_since_boot(get_absolute_time());

        touch_sensor_update(&touch, now_ms);

        if (touch_sensor_is_pressed(&touch, 0)) {
            buzzer_play_beep(&buzzer, 1200, 100);
            mode_manager_next();
        }
        if (touch_sensor_is_pressed(&touch, 1)) {
            buzzer_play_beep(&buzzer, 1200, 100);
            mode_manager_handle_button(1, now_ms);
        }
        if (touch_sensor_is_pressed(&touch, 2)) {
            buzzer_play_beep(&buzzer, 1200, 100);
            mode_manager_handle_button(2, now_ms);
        }

        for (int i = 0; i < TOUCH_SENSOR_COUNT; i++) {
            uint8_t count = touch_sensor_get_beep_count(&touch, i);
            if (count > last_beep_count[i]) {
                buzzer_play_beep(&buzzer, 1200, 100);
                last_beep_count[i] = count;
            }
        }

        ws2812_cmd_t cmd;
        while (ws2812_cmd_queue && xQueueReceive(ws2812_cmd_queue, &cmd, 0) == pdTRUE) {
            ws2812_set_pixel(&ws2812_strip, cmd.index, cmd.r, cmd.g, cmd.b);
            ws2812_show(&ws2812_strip);
            ws2812_override = true;
            ws2812_override_until_ms = now_ms + 5000;
        }

        if (ws2812_override && now_ms >= ws2812_override_until_ms) {
            ws2812_override = false;
        }

        mode_manager_update(now_ms);
        if (!ws2812_override) {
            ws2812_update(&ws2812_strip, now_ms, WS2812_UPDATE_MS);
        }

        buzzer_update(&buzzer, now_ms);

        vTaskDelay(pdMS_TO_TICKS(20));
    }
}
