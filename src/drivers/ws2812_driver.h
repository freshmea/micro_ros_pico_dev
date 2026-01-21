#ifndef WS2812_DRIVER_H
#define WS2812_DRIVER_H

#include <stdbool.h>
#include <stdint.h>
#include "hardware/pio.h"

#define WS2812_MAX_LEDS 16

typedef enum {
    WS2812_PATTERN_SOLID_RED,
    WS2812_PATTERN_SOLID_GREEN,
    WS2812_PATTERN_SOLID_BLUE,
    WS2812_PATTERN_CHASE,
    WS2812_PATTERN_SPARKLE,
    WS2812_PATTERN_RANDOM,
    WS2812_PATTERN_ALTERNATE,
    WS2812_PATTERN_PULSE,
    WS2812_PATTERN_WIPE,
    WS2812_PATTERN_RAINBOW
} ws2812_pattern_t;

typedef struct {
    PIO pio;
    uint sm;
    uint offset;
    uint pin;
    uint led_count;
    bool is_rgbw;
    bool initialized;
    ws2812_pattern_t pattern;
    uint32_t step;
    uint64_t last_update_ms;
    uint32_t pixels[WS2812_MAX_LEDS];
} ws2812_strip_t;

bool ws2812_init(ws2812_strip_t *strip, uint pin, uint led_count, bool is_rgbw);
void ws2812_deinit(ws2812_strip_t *strip);
void ws2812_set_pixel(ws2812_strip_t *strip, uint index, uint8_t r, uint8_t g, uint8_t b);
void ws2812_clear(ws2812_strip_t *strip);
void ws2812_show(ws2812_strip_t *strip);
void ws2812_set_pattern(ws2812_strip_t *strip, ws2812_pattern_t pattern);
void ws2812_set_pattern_by_index(ws2812_strip_t *strip, uint8_t index, bool include_solid);
void ws2812_update(ws2812_strip_t *strip, uint64_t now_ms, uint32_t interval_ms);

#endif // WS2812_DRIVER_H
