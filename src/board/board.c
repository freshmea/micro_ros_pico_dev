#include "board.h"
#include "pico/cyw43_arch.h"
#include <stdio.h>

void board_init(void)
{
    // USB serial initialization (for debugging)
    stdio_init_all();

    // Wait for USB connection (max 5 seconds)
    printf("Waiting for USB connection...\n");
    for (int i = 0; i < 50; i++)
    {
        sleep_ms(100);
        if (stdio_usb_connected())
        {
            break;
        }
    }

    printf("\n=== Pico 2W Micro-ROS WiFi Servo Control ===\n");
    printf("Starting board initialization...\n");

    // GPIO initialization (before WiFi initialization)
    gpio_init(WIFI_STATUS_PIN);
    gpio_set_dir(WIFI_STATUS_PIN, GPIO_OUT);
    gpio_put(WIFI_STATUS_PIN, 0);
    printf("GP0 (WiFi status) initialized\n");

    gpio_init(MSG_STATUS_PIN);
    gpio_set_dir(MSG_STATUS_PIN, GPIO_OUT);
    gpio_put(MSG_STATUS_PIN, 0);
    printf("GP1 (Message status) initialized\n");

    gpio_init(PWM_LED_PIN);
    gpio_set_dir(PWM_LED_PIN, GPIO_OUT);
    gpio_put(PWM_LED_PIN, 0);
    printf("GP3 (PWM LED) initialized\n");

    printf("Board initialization complete\n");
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
    cyw43_arch_gpio_put(LED_PIN, state);
}

void board_blink_error(void)
{
    printf("GP0 will blink to indicate error\n");
    while (true)
    {
        gpio_put(WIFI_STATUS_PIN, 1);
        sleep_ms(200);
        gpio_put(WIFI_STATUS_PIN, 0);
        sleep_ms(200);
    }
}
