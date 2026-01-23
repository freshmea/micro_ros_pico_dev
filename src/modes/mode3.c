#include "modes/mode_common.h"
#include "drivers/servo_ctrl.h"
#include "project_config.h"
#include "tasks/display_task.h"
#include <stdlib.h>

#define SERVO_RIGHT_DOWN 0
#define SERVO_RIGHT_UP 180
#define SERVO_LEFT_DOWN 180
#define SERVO_LEFT_UP 0
#define SERVO_PULSE_MS 300

typedef struct {
    int number_value;
    bool servo_active;
    bool servo_right;
    uint64_t servo_until_ms;
} mode3_state_t;

static mode3_state_t state;

static void mode3_set_number(int value)
{
    state.number_value = value;
    display_set_number(state.number_value);
}

static void mode3_start_random_servo(uint64_t now_ms)
{
    state.servo_right = (rand() % 2) == 0;
    state.servo_active = true;
    state.servo_until_ms = now_ms + SERVO_PULSE_MS;
    if (state.servo_right) {
        servo_ctrl_move_to_angle(SERVO_PIN, SERVO_RIGHT_UP);
    } else {
        servo_ctrl_move_to_angle(SERVO_PIN2, SERVO_LEFT_UP);
    }
}

void mode3_init(const mode_context_t *ctx)
{
    (void)ctx;
    state.number_value = 10;
    state.servo_active = false;
    state.servo_right = true;
    state.servo_until_ms = 0;
}

void mode3_enter(const mode_context_t *ctx, uint64_t now_ms)
{
    (void)ctx;
    (void)now_ms;
    display_set_mode(2);
    mode3_set_number(10);
    state.servo_active = false;
}

void mode3_exit(const mode_context_t *ctx)
{
    (void)ctx;
}

void mode3_update(const mode_context_t *ctx, uint64_t now_ms)
{
    (void)ctx;
    if (state.servo_active && now_ms >= state.servo_until_ms) {
        if (state.servo_right) {
            servo_ctrl_move_to_angle(SERVO_PIN, SERVO_RIGHT_DOWN);
        } else {
            servo_ctrl_move_to_angle(SERVO_PIN2, SERVO_LEFT_DOWN);
        }
        state.servo_active = false;
    }
}

void mode3_button(const mode_context_t *ctx, uint8_t button_id, uint64_t now_ms)
{
    if (!ctx) {
        return;
    }
    if (button_id == 1) {
        mode3_set_number(state.number_value + 1);
    } else if (button_id == 2) {
        if (state.number_value == 0) {
            buzzer_play_happy_birthday(ctx->buzzer);
            return;
        }
        mode3_set_number(state.number_value - 1);
        mode3_start_random_servo(now_ms);
        if (state.number_value == 0) {
            buzzer_play_happy_birthday(ctx->buzzer);
        }
    }
}
