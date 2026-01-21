#include "tasks/periph_task.h"

#include "FreeRTOS.h"
#include "task.h"

#include "app_state.h"
#include "drivers/passive_buzzer_manager.h"
#include "drivers/servo_ctrl.h"
#include "drivers/touch_sensor.h"
#include "pico/cyw43_arch.h"
#include "pico/stdio_usb.h"
#include "pico/stdlib.h"
#include "project_config.h"
#include "tasks/display_task.h"

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

void board_set_wifi_status(uint8_t state)
{
    gpio_put(WIFI_STATUS_PIN, state);
}

void board_set_msg_status(uint8_t state)
{
    gpio_put(MSG_STATUS_PIN, state);
}

void board_set_pwm_led(uint8_t state)
{
    gpio_put(PWM_LED_PIN, state);
}

void board_set_onboard_led(uint8_t state)
{
    cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, state);
}

void board_blink_error(void)
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
        board_blink_error();
    }

    if (servo_ctrl_init(SERVO_PIN2) != 0) {
        board_blink_error();
    }

    while (true) {
        uint64_t now_ms = to_ms_since_boot(get_absolute_time());

        touch_sensor_update(&touch, now_ms);

        for (int i = 0; i < TOUCH_SENSOR_COUNT; i++) {
            if (touch_sensor_is_pressed(&touch, i)) {
                buzzer_play_beep(&buzzer, 1200, 100);
            }
        }

        if (touch_sensor_is_pressed(&touch, 2)) {
            display_next_screen();
        }

        buzzer_update(&buzzer, now_ms);
        buzzer_check_button(&buzzer);

        vTaskDelay(pdMS_TO_TICKS(20));
    }
}
