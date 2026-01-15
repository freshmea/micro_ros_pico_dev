#include "servo_ctrl.h"
#include "pico_servo.h"
#include "project_config.h"
#include "pico/stdlib.h"
#if PROJECT_USE_FREERTOS
#include "FreeRTOS.h"
#include "task.h"
#endif
#include <stdio.h>
#include <stdlib.h>

#if PROJECT_USE_FREERTOS
#define SERVO_DELAY_MS(ms) vTaskDelay(pdMS_TO_TICKS(ms))
#else
#define SERVO_DELAY_MS(ms) sleep_ms(ms)
#endif

int servo_ctrl_init(uint pin)
{
    printf("Initializing servo controller...\n");

    int ret = servo_init();
    if (ret != 0)
    {
        printf("ERROR: servo_init failed\n");
        return ret;
    }

    ret = servo_clock_auto();
    if (ret != 0)
    {
        printf("ERROR: servo_clock_auto failed\n");
        return ret;
    }
    printf("Servo clock configured\n");

    // PWM settings from project_config.h
    printf("[DEBUG] Before servo_set_bounds\n");
    servo_set_bounds(SERVO_MIN_US, SERVO_MAX_US);
    printf("[DEBUG] After servo_set_bounds\n");
    printf("Servo bounds set: %d-%d microseconds\n", SERVO_MIN_US, SERVO_MAX_US);

    printf("[DEBUG] Before servo_attach (pin=%d)\n", pin);
    ret = servo_attach(pin);
    printf("[DEBUG] After servo_attach (ret=%d)\n", ret);
    if (ret != 0)
    {
        printf("ERROR: servo_attach failed on GP%d\n", pin);
        return ret;
    }
    printf("Servo attached to GP%d\n", pin);

    // Move to initial position from config
    SERVO_DELAY_MS(500);
    ret = servo_move_to(pin, SERVO_INIT_ANGLE);
    if (ret != 0)
    {
        printf("ERROR: Initial servo_move_to failed\n");
        return ret;
    }
    printf("Servo moved to initial position (%d degrees)\n", SERVO_INIT_ANGLE);

    SERVO_DELAY_MS(500); // Give servo time to reach initial position

    printf("Servo controller initialization complete\n");
    return 0;
}

int servo_ctrl_move_to_angle(uint pin, int angle)
{
    // Limit angle to 0-180 range, handle negative values
    angle = abs(angle) % 181;

    printf("Moving servo to angle: %d\n", angle);

    int result = servo_move_to(pin, angle);
    if (result != 0)
    {
        printf("ERROR: servo_move_to failed with code %d\n", result);
        return result;
    }

    printf("Servo command sent successfully\n");
    return 0;
}

int servo_ctrl_center(uint pin)
{
    return servo_ctrl_move_to_angle(pin, 90);
}
