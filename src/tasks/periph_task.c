#include "tasks/periph_task.h"

#include <stdlib.h>
#include "FreeRTOS.h"
#include "task.h"

#include "app_state.h"
#include "drivers/passive_buzzer_manager.h"
#include "drivers/servo_ctrl.h"
#include "drivers/touch_sensor.h"
#include "drivers/ws2812_driver.h"
#include "pico/stdio_usb.h"
#include "pico/stdlib.h"
#include "project_config.h"
#include "tasks/display_task.h"

static ws2812_strip_t ws2812_strip;

void periph_task_init(void)
{
    gpio_init(WIFI_STATUS_PIN);
    gpio_set_dir(WIFI_STATUS_PIN, GPIO_OUT);
    gpio_put(WIFI_STATUS_PIN, 0);

    gpio_init(MSG_STATUS_PIN);
    gpio_set_dir(MSG_STATUS_PIN, GPIO_OUT);
    gpio_put(MSG_STATUS_PIN, 0);

    gpio_init(PWM_LED_PIN);
    gpio_set_dir(PWM_LED_PIN, GPIO_OUT);
    gpio_put(PWM_LED_PIN, 0);

    gpio_set_function(BUZZER_PIN, GPIO_FUNC_PWM);

    gpio_init(PULLUP_BUTTON_PIN);
    gpio_set_dir(PULLUP_BUTTON_PIN, GPIO_IN);
    gpio_pull_up(PULLUP_BUTTON_PIN);
}

static void periph_blink_error(void)
{
    while (true) {
        gpio_put(WIFI_STATUS_PIN, 1);
        sleep_ms(ERROR_BLINK_MS);
        gpio_put(WIFI_STATUS_PIN, 0);
        sleep_ms(ERROR_BLINK_MS);
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
    ws2812_set_pattern(&ws2812_strip, WS2812_PATTERN_SOLID_GREEN);

    while (true) {
        uint64_t now_ms = to_ms_since_boot(get_absolute_time());

        touch_sensor_update(&touch, now_ms);

        if (touch_sensor_is_pressed(&touch, 0)) {
            buzzer_play_beep(&buzzer, 1200, 100);
            ws2812_set_pattern(&ws2812_strip, WS2812_PATTERN_SOLID_RED);
        }
        if (touch_sensor_is_pressed(&touch, 1)) {
            buzzer_play_beep(&buzzer, 1200, 100);
        }
        if (touch_sensor_is_pressed(&touch, 2)) {
            buzzer_play_beep(&buzzer, 1200, 100);
            display_next_screen();
            ws2812_set_pattern(&ws2812_strip, WS2812_PATTERN_SOLID_BLUE);
        }

        if (touch_sensor_is_released(&touch, 1)) {
            uint8_t beep_count = touch_sensor_get_beep_count(&touch, 1);
            ws2812_set_pattern_by_index(&ws2812_strip, beep_count, false);
        }

        // 터치 센서가 누르는 동안 0.5초 마다 비프음 재생
        for (int i = 0; i < TOUCH_SENSOR_COUNT; i++) {
            uint8_t beep_index = 0;
            if (touch_sensor_poll_beep(&touch, i, 500, &beep_index)) {
                uint8_t step = (uint8_t)((beep_index - 1) % 8);
                int frequency = 400 + (step * 100);
                if (frequency > 1600) {
                    frequency = 1600;
                }
                buzzer_play_beep(&buzzer, frequency, 100);
            }
        }

        ws2812_update(&ws2812_strip, now_ms, WS2812_UPDATE_MS);

        buzzer_update(&buzzer, now_ms);
        buzzer_check_button(&buzzer);

        vTaskDelay(pdMS_TO_TICKS(20));
    }
}
