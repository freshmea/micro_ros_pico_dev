#ifndef PERIPH_TASK_H
#define PERIPH_TASK_H

#include <stdint.h>

void periph_task_init(void);
void periph_task(void *params);
void periph_ws2812_set_pixel(uint8_t index, uint8_t r, uint8_t g, uint8_t b);
void periph_ws2812_clear_override(void);

#endif // PERIPH_TASK_H
