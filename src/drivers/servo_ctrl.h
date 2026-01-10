#ifndef SERVO_CTRL_H
#define SERVO_CTRL_H

#include "pico/stdlib.h"

/**
 * @brief Initialize servo controller
 *
 * Initializes servo PWM and sets default bounds (1000-2000us)
 *
 * @param pin GPIO pin for servo control
 * @return 0 on success, non-zero on error
 */
int servo_ctrl_init(uint pin);

/**
 * @brief Move servo to specified angle
 *
 * @param pin GPIO pin for servo control
 * @param angle Angle in degrees (0-180)
 * @return 0 on success, non-zero on error
 */
int servo_ctrl_move_to_angle(uint pin, int angle);

/**
 * @brief Move servo to center position (90 degrees)
 *
 * @param pin GPIO pin for servo control
 * @return 0 on success, non-zero on error
 */
int servo_ctrl_center(uint pin);

#endif // SERVO_CTRL_H
