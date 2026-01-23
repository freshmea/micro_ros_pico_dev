#include "modes/mode_common.h"
#include "tasks/display_task.h"
#include <string.h>

void mode4_init(const mode_context_t *ctx)
{
    (void)ctx;
}

void mode4_enter(const mode_context_t *ctx, uint64_t now_ms)
{
    (void)ctx;
    (void)now_ms;
    display_set_mode(3);
    const char *text = "micro-ros 수신 모드";
    display_set_message(text, strlen(text));
}

void mode4_exit(const mode_context_t *ctx)
{
    (void)ctx;
}

void mode4_update(const mode_context_t *ctx, uint64_t now_ms)
{
    (void)ctx;
    (void)now_ms;
}

void mode4_button(const mode_context_t *ctx, uint8_t button_id, uint64_t now_ms)
{
    (void)ctx;
    (void)button_id;
    (void)now_ms;
}
