#include "modes/mode_common.h"
#include "drivers/servo_ctrl.h"
#include "project_config.h"
#include "tasks/display_task.h"

#define SERVO_RIGHT_DOWN 0
#define SERVO_RIGHT_UP 180
#define SERVO_LEFT_DOWN 180
#define SERVO_LEFT_UP 0
#define SERVO_PULSE_MS 300

typedef struct {
    bool right_active;
    bool left_active;
    uint64_t right_until_ms;
    uint64_t left_until_ms;
} mode2_state_t;

static mode2_state_t state;

void mode2_init(const mode_context_t *ctx)
{
    (void)ctx;
    state.right_active = false;
    state.left_active = false;
    state.right_until_ms = 0;
    state.left_until_ms = 0;
}

void mode2_enter(const mode_context_t *ctx, uint64_t now_ms)
{
    (void)ctx;
    (void)now_ms;
    display_set_mode(1);
    servo_ctrl_move_to_angle(SERVO_PIN, SERVO_RIGHT_DOWN);
    servo_ctrl_move_to_angle(SERVO_PIN2, SERVO_LEFT_DOWN);
    state.right_active = false;
    state.left_active = false;
}

void mode2_exit(const mode_context_t *ctx)
{
    (void)ctx;
}

void mode2_update(const mode_context_t *ctx, uint64_t now_ms)
{
    (void)ctx;
    if (state.right_active && now_ms >= state.right_until_ms) {
        servo_ctrl_move_to_angle(SERVO_PIN, SERVO_RIGHT_DOWN);
        state.right_active = false;
    }
    if (state.left_active && now_ms >= state.left_until_ms) {
        servo_ctrl_move_to_angle(SERVO_PIN2, SERVO_LEFT_DOWN);
        state.left_active = false;
    }
}

void mode2_button(const mode_context_t *ctx, uint8_t button_id, uint64_t now_ms)
{
    (void)ctx;
    if (button_id == 1) {
        servo_ctrl_move_to_angle(SERVO_PIN, SERVO_RIGHT_UP);
        state.right_active = true;
        state.right_until_ms = now_ms + SERVO_PULSE_MS;
    } else if (button_id == 2) {
        servo_ctrl_move_to_angle(SERVO_PIN2, SERVO_LEFT_UP);
        state.left_active = true;
        state.left_until_ms = now_ms + SERVO_PULSE_MS;
    }
}
