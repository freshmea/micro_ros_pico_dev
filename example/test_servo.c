#include "hardware/clocks.h"
#include "pico/stdlib.h"
#include "pico_servo.h"
#include <stdio.h>

#define SERVO_PIN 2

int main()
{
    stdio_init_all();
    sleep_ms(2000);

    printf("\n");
    printf("========================================\n");
    printf("   Servo Test (WRAP=10000, 50Hz PWM)   \n");
    printf("========================================\n\n");

    uint32_t sys_clk = clock_get_hz(clk_sys);
    printf("Detected system clock: %u Hz (%.2f MHz)\n", sys_clk, sys_clk / 1000000.0f);

    if (sys_clk == 125000000)
    {
        printf("Platform: RP2040\n");
        printf("Expected divider: 250.00\n");
    }
    else if (sys_clk == 150000000)
    {
        printf("Platform: RP2350\n");
        printf("Expected divider: 300.00\n");
    }
    printf("\n");

    printf("Initializing servo library...\n");
    int ret = servo_init();
    printf("servo_init: %d\n\n", ret);

    printf("Configuring clock (auto)...\n");
    ret = servo_clock_auto();
    printf("servo_clock_auto: %d\n\n", ret);

    printf("Setting bounds (1000-2000 us)...\n");
    servo_set_bounds(1000, 2000);
    printf("\n");

    printf("Attaching servo to GP%d...\n", SERVO_PIN);
    ret = servo_attach(SERVO_PIN);
    printf("servo_attach: %d\n", ret);

    if (ret != 0)
    {
        printf("\nERROR: Failed to attach servo!\n");
        while (1)
        {
            sleep_ms(1000);
        }
    }

    printf("\n");
    printf("========================================\n");
    printf("   Starting Movement Test\n");
    printf("========================================\n\n");

    sleep_ms(1000);

    int count = 0;
    while (true)
    {
        printf("\n--- Cycle %d ---\n", ++count);

        printf("\n0° (min, should be 1000us):\n");
        servo_move_to(SERVO_PIN, 0);
        sleep_ms(2000);

        printf("\n45°:\n");
        servo_move_to(SERVO_PIN, 45);
        sleep_ms(2000);

        printf("\n90° (center, should be 1500us):\n");
        servo_move_to(SERVO_PIN, 90);
        sleep_ms(2000);

        printf("\n135°:\n");
        servo_move_to(SERVO_PIN, 135);
        sleep_ms(2000);

        printf("\n180° (max, should be 2000us):\n");
        servo_move_to(SERVO_PIN, 180);
        sleep_ms(2000);
    }

    return 0;
}
