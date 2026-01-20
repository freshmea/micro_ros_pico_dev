#ifndef PERIPH_TASK_H
#define PERIPH_TASK_H

#include <stdint.h>

void periph_task_init(void);
void periph_task(void *params);

void board_set_wifi_status(uint8_t state);
void board_set_msg_status(uint8_t state);
void board_set_pwm_led(uint8_t state);
void board_set_onboard_led(uint8_t state);
void board_blink_error(void);

#endif // PERIPH_TASK_H
