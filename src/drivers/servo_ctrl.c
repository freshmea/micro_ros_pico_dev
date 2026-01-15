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
    int ret = servo_init();
    if (ret != 0)
    {
        return ret;
    }
    ret = servo_clock_auto();
    if (ret != 0)
    {
        return ret;
    }

    // PWM settings from project_config.h
    servo_set_bounds(SERVO_MIN_US, SERVO_MAX_US);
    ret = servo_attach(pin);
    if (ret != 0)
    {
        return ret;
    }

    ret = servo_move_to(pin, SERVO_INIT_ANGLE);
    if (ret != 0)
    {
        return ret;
    }
    return 0;
}

int servo_ctrl_move_to_angle(uint pin, int angle)
{
    // Limit angle to 0-180 range, handle negative values
    angle = abs(angle) % 181;
    int result = servo_move_to(pin, angle);
    if (result != 0)
    {
        return result;
    }
    return 0;
}

int servo_ctrl_center(uint pin)
{
    return servo_ctrl_move_to_angle(pin, 90);
}
