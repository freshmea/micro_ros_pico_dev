/* 이 모드 mode1은 wifi와 micro-ros agent 접속 정보를 확인하고
버저 패턴 테스트와 ws2812(네오픽셀) 의 작동 테스트를 할 수 있다.
*/

#include "modes/mode_common.h"
#include "tasks/display_task.h"
#include "tasks/periph_task.h"

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
    periph_ws2812_clear_override();
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
        periph_ws2812_clear_override();
        ws2812_set_pattern_by_index(ctx->ws2812, pattern_index, true);
    } else if (button_id == 2) {
        buzzer_play_random(ctx->buzzer);
    }
}
