#include "modes/mode_manager.h"

typedef struct {
    void (*init)(const mode_context_t *ctx);
    void (*enter)(const mode_context_t *ctx, uint64_t now_ms);
    void (*exit)(const mode_context_t *ctx);
    void (*update)(const mode_context_t *ctx, uint64_t now_ms);
    void (*button)(const mode_context_t *ctx, uint8_t button_id, uint64_t now_ms);
} mode_ops_t;

void mode1_init(const mode_context_t *ctx);
void mode1_enter(const mode_context_t *ctx, uint64_t now_ms);
void mode1_exit(const mode_context_t *ctx);
void mode1_update(const mode_context_t *ctx, uint64_t now_ms);
void mode1_button(const mode_context_t *ctx, uint8_t button_id, uint64_t now_ms);

void mode2_init(const mode_context_t *ctx);
void mode2_enter(const mode_context_t *ctx, uint64_t now_ms);
void mode2_exit(const mode_context_t *ctx);
void mode2_update(const mode_context_t *ctx, uint64_t now_ms);
void mode2_button(const mode_context_t *ctx, uint8_t button_id, uint64_t now_ms);

void mode3_init(const mode_context_t *ctx);
void mode3_enter(const mode_context_t *ctx, uint64_t now_ms);
void mode3_exit(const mode_context_t *ctx);
void mode3_update(const mode_context_t *ctx, uint64_t now_ms);
void mode3_button(const mode_context_t *ctx, uint8_t button_id, uint64_t now_ms);

static mode_context_t mode_ctx;
static mode_id_t current_mode = MODE_COUNT;

static const mode_ops_t mode_ops[MODE_COUNT] = {
    { mode1_init, mode1_enter, mode1_exit, mode1_update, mode1_button },
    { mode2_init, mode2_enter, mode2_exit, mode2_update, mode2_button },
    { mode3_init, mode3_enter, mode3_exit, mode3_update, mode3_button }
};

void mode_manager_init(const mode_context_t *ctx)
{
    mode_ctx = *ctx;
    for (int i = 0; i < MODE_COUNT; i++) {
        if (mode_ops[i].init) {
            mode_ops[i].init(&mode_ctx);
        }
    }
    mode_manager_set(MODE_1);
}

void mode_manager_set(mode_id_t mode)
{
    if (mode >= MODE_COUNT) {
        return;
    }
    if (mode == current_mode) {
        return;
    }
    if (current_mode < MODE_COUNT && mode_ops[current_mode].exit) {
        mode_ops[current_mode].exit(&mode_ctx);
    }
    current_mode = mode;
    if (mode_ops[current_mode].enter) {
        mode_ops[current_mode].enter(&mode_ctx, 0);
    }
}

void mode_manager_next(void)
{
    mode_manager_set((mode_id_t)((current_mode + 1) % MODE_COUNT));
}

mode_id_t mode_manager_get(void)
{
    return current_mode;
}

void mode_manager_handle_button(uint8_t button_id, uint64_t now_ms)
{
    if (mode_ops[current_mode].button) {
        mode_ops[current_mode].button(&mode_ctx, button_id, now_ms);
    }
}

void mode_manager_update(uint64_t now_ms)
{
    if (mode_ops[current_mode].update) {
        mode_ops[current_mode].update(&mode_ctx, now_ms);
    }
}
