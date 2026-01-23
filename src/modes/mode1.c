#include "modes/mode_common.h"
#include "tasks/display_task.h"

static uint8_t pattern_index = 0;

void mode1_init(const mode_context_t *ctx)
{
    (void)ctx;
    pattern_index = 0;
}

void mode1_enter(const mode_context_t *ctx, uint64_t now_ms)
{
    (void)now_ms;
    pattern_index = 0;
    display_set_mode(0);
    if (ctx && ctx->ws2812) {
        ws2812_set_pattern_by_index(ctx->ws2812, pattern_index, true);
    }
}

void mode1_exit(const mode_context_t *ctx)
{
    (void)ctx;
}

void mode1_update(const mode_context_t *ctx, uint64_t now_ms)
{
    (void)ctx;
    (void)now_ms;
}

void mode1_button(const mode_context_t *ctx, uint8_t button_id, uint64_t now_ms)
{
    (void)now_ms;
    if (!ctx) {
        return;
    }
    if (button_id == 1) {
        pattern_index++;
        ws2812_set_pattern_by_index(ctx->ws2812, pattern_index, true);
    } else if (button_id == 2) {
        buzzer_play_random(ctx->buzzer);
    }
}
