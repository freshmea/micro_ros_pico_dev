#include "drivers/ws2812_driver.h"

#include <stdlib.h>
#include "hardware/clocks.h"
#include "pico/stdlib.h"
#include "ws2812.pio.h"

static inline void ws2812_put_pixel(PIO pio, uint sm, uint32_t pixel_grb)
{
    pio_sm_put_blocking(pio, sm, pixel_grb << 8u);
}

static inline uint32_t ws2812_urgb_u32(uint8_t r, uint8_t g, uint8_t b)
{
    return ((uint32_t)r << 8) | ((uint32_t)g << 16) | (uint32_t)b;
}

static void ws2812_apply_pattern(ws2812_strip_t *strip)
{
    if (!strip) {
        return;
    }

    switch (strip->pattern) {
    case WS2812_PATTERN_SOLID_RED:
        for (uint i = 0; i < strip->led_count; i++) {
            ws2812_set_pixel(strip, i, 0xff, 0x00, 0x00);
        }
        break;
    case WS2812_PATTERN_SOLID_GREEN:
        for (uint i = 0; i < strip->led_count; i++) {
            ws2812_set_pixel(strip, i, 0x00, 0xff, 0x00);
        }
        break;
    case WS2812_PATTERN_SOLID_BLUE:
        for (uint i = 0; i < strip->led_count; i++) {
            ws2812_set_pixel(strip, i, 0x00, 0x00, 0xff);
        }
        break;
    case WS2812_PATTERN_CHASE: {
        uint index = strip->step % strip->led_count;
        ws2812_clear(strip);
        for (uint i = 0; i < strip->led_count; i++) {
            if (i == index) {
                ws2812_set_pixel(strip, i, 0xff, 0x80, 0x00);
            } else {
                ws2812_set_pixel(strip, i, 0x10, 0x10, 0x10);
            }
        }
        break;
    }
    case WS2812_PATTERN_SPARKLE: {
        ws2812_clear(strip);
        uint index = (uint)(rand() % strip->led_count);
        ws2812_set_pixel(strip, index, 0xff, 0xff, 0xff);
        break;
    }
    case WS2812_PATTERN_RANDOM:
        for (uint i = 0; i < strip->led_count; i++) {
            ws2812_set_pixel(strip, i, (uint8_t)rand(), (uint8_t)rand(), (uint8_t)rand());
        }
        break;
    case WS2812_PATTERN_ALTERNATE:
        for (uint i = 0; i < strip->led_count; i++) {
            if (i % 2 == 0) {
                ws2812_set_pixel(strip, i, 0xff, 0x00, 0xff);
            } else {
                ws2812_set_pixel(strip, i, 0x00, 0xff, 0xff);
            }
        }
        break;
    case WS2812_PATTERN_PULSE: {
        static const uint8_t levels[] = {20, 60, 100, 140, 180, 220, 180, 140};
        uint8_t level = levels[strip->step % (sizeof(levels) / sizeof(levels[0]))];
        for (uint i = 0; i < strip->led_count; i++) {
            ws2812_set_pixel(strip, i, level, 0x10, level);
        }
        break;
    }
    case WS2812_PATTERN_WIPE: {
        uint lit = (strip->step % (strip->led_count + 1));
        for (uint i = 0; i < strip->led_count; i++) {
            if (i < lit) {
                ws2812_set_pixel(strip, i, 0x00, 0x80, 0xff);
            } else {
                ws2812_set_pixel(strip, i, 0x00, 0x00, 0x00);
            }
        }
        break;
    }
    case WS2812_PATTERN_RAINBOW: {
        for (uint i = 0; i < strip->led_count; i++) {
            uint8_t phase = (uint8_t)((strip->step + i * 3) % 9);
            switch (phase) {
            case 0: ws2812_set_pixel(strip, i, 0xff, 0x00, 0x00); break;
            case 1: ws2812_set_pixel(strip, i, 0xff, 0x40, 0x00); break;
            case 2: ws2812_set_pixel(strip, i, 0xff, 0x80, 0x00); break;
            case 3: ws2812_set_pixel(strip, i, 0x00, 0xff, 0x00); break;
            case 4: ws2812_set_pixel(strip, i, 0x00, 0xff, 0x80); break;
            case 5: ws2812_set_pixel(strip, i, 0x00, 0x80, 0xff); break;
            case 6: ws2812_set_pixel(strip, i, 0x00, 0x00, 0xff); break;
            case 7: ws2812_set_pixel(strip, i, 0x80, 0x00, 0xff); break;
            default: ws2812_set_pixel(strip, i, 0xff, 0x00, 0x80); break;
            }
        }
        break;
    }
    }
}

bool ws2812_init(ws2812_strip_t *strip, uint pin, uint led_count, bool is_rgbw)
{
    if (!strip || led_count == 0 || led_count > WS2812_MAX_LEDS) {
        return false;
    }

    strip->pin = pin;
    strip->led_count = led_count;
    strip->is_rgbw = is_rgbw;
    strip->initialized = false;
    strip->pattern = WS2812_PATTERN_SOLID_GREEN;
    strip->step = 0;
    strip->last_update_ms = 0;
    for (uint i = 0; i < WS2812_MAX_LEDS; i++) {
        strip->pixels[i] = 0;
    }

    if (pin >= NUM_BANK0_GPIOS) {
        return false;
    }

    PIO pio;
    uint sm;
    uint offset;
    bool success = pio_claim_free_sm_and_add_program_for_gpio_range(
        &ws2812_program, &pio, &sm, &offset, pin, 1, true);
    if (!success) {
        return false;
    }

    ws2812_program_init(pio, sm, offset, pin, 800000, is_rgbw);

    strip->pio = pio;
    strip->sm = sm;
    strip->offset = offset;
    strip->initialized = true;

    ws2812_apply_pattern(strip);
    ws2812_show(strip);

    return true;
}

void ws2812_deinit(ws2812_strip_t *strip)
{
    if (!strip || !strip->initialized) {
        return;
    }
    pio_remove_program_and_unclaim_sm(&ws2812_program, strip->pio, strip->sm, strip->offset);
    strip->initialized = false;
}

void ws2812_set_pixel(ws2812_strip_t *strip, uint index, uint8_t r, uint8_t g, uint8_t b)
{
    if (!strip || !strip->initialized || index >= strip->led_count) {
        return;
    }
    strip->pixels[index] = ws2812_urgb_u32(r, g, b);
}

void ws2812_clear(ws2812_strip_t *strip)
{
    if (!strip || !strip->initialized) {
        return;
    }
    for (uint i = 0; i < strip->led_count; i++) {
        strip->pixels[i] = 0;
    }
}

void ws2812_show(ws2812_strip_t *strip)
{
    if (!strip || !strip->initialized) {
        return;
    }
    for (uint i = 0; i < strip->led_count; i++) {
        ws2812_put_pixel(strip->pio, strip->sm, strip->pixels[i]);
    }
    sleep_us(60);
}

void ws2812_set_pattern(ws2812_strip_t *strip, ws2812_pattern_t pattern)
{
    if (!strip || !strip->initialized) {
        return;
    }
    strip->pattern = pattern;
    strip->step = 0;
    strip->last_update_ms = 0;
    ws2812_apply_pattern(strip);
    ws2812_show(strip);
}

void ws2812_set_pattern_by_index(ws2812_strip_t *strip, uint8_t index, bool include_solid)
{
    if (!strip || !strip->initialized) {
        return;
    }

    if (index == 0) {
        index = (uint8_t)(rand() & 0xff);
    }

    if (include_solid) {
        static const ws2812_pattern_t patterns[] = {
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
        };
        ws2812_set_pattern(strip, patterns[index % (sizeof(patterns) / sizeof(patterns[0]))]);
    } else {
        static const ws2812_pattern_t patterns[] = {
            WS2812_PATTERN_CHASE,
            WS2812_PATTERN_SPARKLE,
            WS2812_PATTERN_RANDOM,
            WS2812_PATTERN_ALTERNATE,
            WS2812_PATTERN_PULSE,
            WS2812_PATTERN_WIPE,
            WS2812_PATTERN_RAINBOW
        };
        ws2812_set_pattern(strip, patterns[index % (sizeof(patterns) / sizeof(patterns[0]))]);
    }
}

void ws2812_update(ws2812_strip_t *strip, uint64_t now_ms, uint32_t interval_ms)
{
    if (!strip || !strip->initialized) {
        return;
    }
    if (interval_ms == 0) {
        return;
    }
    if (now_ms - strip->last_update_ms >= interval_ms) {
        strip->last_update_ms = now_ms;
        ws2812_apply_pattern(strip);
        ws2812_show(strip);
        strip->step++;
    }
}
