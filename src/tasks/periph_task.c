#include "tasks/periph_task.h"

#include <stdlib.h>
#include "FreeRTOS.h"
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

void periph_task_init(void)
{
    gpio_init(MSG_STATUS_PIN);
    gpio_set_dir(MSG_STATUS_PIN, GPIO_OUT);
    gpio_put(MSG_STATUS_PIN, 0);

    gpio_set_function(BUZZER_PIN, GPIO_FUNC_PWM);
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
            mode_manager_next();
        }
        if (touch_sensor_is_pressed(&touch, 1)) {
            mode_manager_handle_button(1, now_ms);
        }
        if (touch_sensor_is_pressed(&touch, 2)) {
            mode_manager_handle_button(2, now_ms);
        }

        mode_manager_update(now_ms);
        ws2812_update(&ws2812_strip, now_ms, WS2812_UPDATE_MS);

        buzzer_update(&buzzer, now_ms);

        vTaskDelay(pdMS_TO_TICKS(20));
    }
}
