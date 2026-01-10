#ifndef BOARD_H
#define BOARD_H

#include "pico/stdlib.h"
#include "project_config.h"

// Pin definitions (from project_config.h)
#define LED_PIN CYW43_WL_GPIO_LED_PIN // Pico 2W onboard LED
// WIFI_STATUS_PIN, MSG_STATUS_PIN, SERVO_PIN, PWM_LED_PIN은 project_config.h에 정의됨

/**
 * @brief Initialize all board peripherals
 *
 * Initializes GPIO pins, USB serial for debugging, and servo control
 */
void board_init(void);

/**
 * @brief Set WiFi status LED
 *
 * @param state 1 to turn on, 0 to turn off
 */
void board_set_wifi_status(uint8_t state);

/**
 * @brief Set message status LED
 *
 * @param state 1 to turn on, 0 to turn off
 */
void board_set_msg_status(uint8_t state);

/**
 * @brief Set PWM LED (even/odd indicator)
 *
 * @param state 1 to turn on, 0 to turn off
 */
void board_set_pwm_led(uint8_t state);

/**
 * @brief Set onboard LED (CYW43)
 *
 * @param state 1 to turn on, 0 to turn off
 */
void board_set_onboard_led(uint8_t state);

/**
 * @brief Blink WiFi status LED for error indication
 */
void board_blink_error(void);

#endif // BOARD_H
