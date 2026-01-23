#ifndef MODE_COMMON_H
#define MODE_COMMON_H

#include <stdint.h>
#include "drivers/passive_buzzer_manager.h"
#include "drivers/ws2812_driver.h"

typedef enum {
    MODE_1 = 0,
    MODE_2 = 1,
    MODE_3 = 2,
    MODE_4 = 3,
    MODE_COUNT
} mode_id_t;

typedef struct {
    PassiveBuzzerManager *buzzer;
    ws2812_strip_t *ws2812;
} mode_context_t;

#endif // MODE_COMMON_H
