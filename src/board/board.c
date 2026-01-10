#include "board.h"
#include "pico/cyw43_arch.h"
#include "project_config.h"
#include <stdio.h>

void board_init(void)
{
    // USB serial initialization (for debugging)
    stdio_init_all();

    // Wait for USB connection (configurable timeout)
    printf("Waiting for USB connection...\n");
    int max_checks = USB_CONNECT_WAIT_MS / USB_CONNECT_CHECK_INTERVAL_MS;
    for (int i = 0; i < max_checks; i++)
    {
        sleep_ms(USB_CONNECT_CHECK_INTERVAL_MS);
        if (stdio_usb_connected())
        {
            break;
        }
    }

    printf("\n=== Bindbot - Pico 2W Micro-ROS Servo Control ===\n");
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
    printf("GP%d will blink to indicate error\n", WIFI_STATUS_PIN);
    while (true)
    {
        gpio_put(WIFI_STATUS_PIN, 1);
        sleep_ms(ERROR_BLINK_MS);
        gpio_put(WIFI_STATUS_PIN, 0);
        sleep_ms(ERROR_BLINK_MS);
    }
}
