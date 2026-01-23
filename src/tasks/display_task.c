#include "tasks/display_task.h"

#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include "FreeRTOS.h"
#include "hardware/i2c.h"
#include "queue.h"
#include "task.h"
#include "pico/stdlib.h"
#include "project_config.h"
#include "u8g2.h"
#include "u8x8.h"
#include "project_config.h"

typedef enum {
    DISPLAY_CMD_SET_STATUS,
    DISPLAY_CMD_SET_MESSAGE,
    DISPLAY_CMD_SET_MODE,
    DISPLAY_CMD_SET_NUMBER,
    DISPLAY_CMD_NEXT_SCREEN
} display_cmd_type_t;

typedef struct {
    display_cmd_type_t type;
    union {
        struct {
            char ssid[DISPLAY_SSID_MAX + 1];
            char ip[DISPLAY_IP_MAX + 1];
            bool connected;
            bool uros_connected;
        } status;
        struct {
            char message[DISPLAY_MESSAGE_MAX + 1];
        } message;
        struct {
            uint8_t mode;
        } mode;
        struct {
            int value;
        } number;
    } data;
} display_cmd_t;

typedef struct {
    char ssid[DISPLAY_SSID_MAX + 1];
    char ip[DISPLAY_IP_MAX + 1];
    char status_line[DISPLAY_SSID_MAX + DISPLAY_IP_MAX + 12];
    char message[DISPLAY_MESSAGE_MAX + 1];
    size_t message_len;
    int16_t status_width;
    int16_t status_scroll_x;
    int16_t message_width;
    int16_t message_scroll_x;
    bool wifi_connected;
    bool uros_connected;
    uint8_t mode;
    int number_value;
} display_state_t;

typedef struct {
    i2c_inst_t *i2c_port;
    uint8_t sda_pin;
    uint8_t scl_pin;
    uint8_t address;
} display_i2c_config_t;

static QueueHandle_t display_queue = NULL;
static u8g2_t display_u8g2;
static display_i2c_config_t display_i2c_config;

static uint8_t display_gpio_and_delay(u8x8_t *u8x8, uint8_t msg, uint8_t arg_int, void *arg_ptr)
{
    (void)u8x8;
    (void)arg_ptr;

    switch (msg) {
    case U8X8_MSG_GPIO_AND_DELAY_INIT:
        break;
    case U8X8_MSG_DELAY_NANO:
        sleep_us(arg_int ? 1 : 0);
        break;
    case U8X8_MSG_DELAY_10MICRO:
        sleep_us(arg_int * 10);
        break;
    case U8X8_MSG_DELAY_MILLI:
        sleep_ms(arg_int);
        break;
    default:
        break;
    }
    return 1;
}

static uint8_t display_i2c_byte_cb(u8x8_t *u8x8, uint8_t msg, uint8_t arg_int, void *arg_ptr)
{
    (void)u8x8;
    static uint8_t buffer[32];
    static uint8_t buf_idx;
    uint8_t *data;

    switch (msg) {
    case U8X8_MSG_BYTE_INIT:
        i2c_init(display_i2c_config.i2c_port, 100 * 1000);
        gpio_set_function(display_i2c_config.sda_pin, GPIO_FUNC_I2C);
        gpio_set_function(display_i2c_config.scl_pin, GPIO_FUNC_I2C);
        gpio_pull_up(display_i2c_config.sda_pin);
        gpio_pull_up(display_i2c_config.scl_pin);
        break;
    case U8X8_MSG_BYTE_START_TRANSFER:
        buf_idx = 0;
        break;
    case U8X8_MSG_BYTE_SEND:
        data = (uint8_t *)arg_ptr;
        while (arg_int > 0) {
            buffer[buf_idx++] = *data;
            data++;
            arg_int--;
        }
        break;
    case U8X8_MSG_BYTE_END_TRANSFER:
        i2c_write_blocking(display_i2c_config.i2c_port,
                           display_i2c_config.address,
                           buffer,
                           buf_idx,
                           false);
        break;
    default:
        return 0;
    }
    return 1;
}

static void display_setup(void)
{
    display_i2c_config.i2c_port = DISPLAY_I2C_PORT;
    display_i2c_config.sda_pin = DISPLAY_SDA_PIN;
    display_i2c_config.scl_pin = DISPLAY_SCL_PIN;
    display_i2c_config.address = DISPLAY_I2C_ADDR;

    u8g2_Setup_ssd1306_i2c_128x32_univision_f(
        &display_u8g2,
        U8G2_R0,
        display_i2c_byte_cb,
        display_gpio_and_delay);
    u8x8_SetI2CAddress(u8g2_GetU8x8(&display_u8g2), (uint8_t)(DISPLAY_I2C_ADDR << 1));

    u8g2_InitDisplay(&display_u8g2);
    u8g2_SetPowerSave(&display_u8g2, 0);
    u8g2_SetContrast(&display_u8g2, 0xFF);
    u8g2_SetFont(&display_u8g2, u8g2_font_gulim16_t_korean2);
}

static void display_update_status_line(display_state_t *state)
{
    snprintf(state->status_line, sizeof(state->status_line),
             "IP:%s SSID:%s", state->ip, state->ssid);
    state->status_width = (int16_t)u8g2_GetUTF8Width(&display_u8g2, state->status_line);
    if (state->status_width > DISPLAY_WIDTH) {
        state->status_scroll_x = DISPLAY_WIDTH;
    } else {
        state->status_scroll_x = 0;
    }
}

static void display_update_message(display_state_t *state)
{
    state->message_len = strlen(state->message);
    state->message_width = (int16_t)u8g2_GetUTF8Width(&display_u8g2, state->message);
    if (state->message_width > DISPLAY_WIDTH) {
        state->message_scroll_x = DISPLAY_WIDTH;
    } else {
        state->message_scroll_x = 0;
    }
}

static void display_draw(const display_state_t *state)
{
    char line1[64];
    const char *message = state->message[0] ? state->message : "메시지 없음";

    u8g2_ClearBuffer(&display_u8g2);
    u8g2_SetFont(&display_u8g2, u8g2_font_gulim16_t_korean2);

    if (state->mode == 0) {
        snprintf(line1, sizeof(line1),
                 "모드1 wifi:%s uros:%s",
                 state->wifi_connected ? "O" : "X",
                 state->uros_connected ? "O" : "X");
        u8g2_DrawUTF8(&display_u8g2, 0, DISPLAY_LINE1_Y, line1);
        u8g2_DrawUTF8(&display_u8g2, state->status_scroll_x, DISPLAY_LINE2_Y, state->status_line);
    } else if (state->mode == 1) {
        snprintf(line1, sizeof(line1),
                 "모드2 길이:%u", (unsigned)state->message_len);
        u8g2_DrawUTF8(&display_u8g2, 0, DISPLAY_LINE1_Y, line1);
        u8g2_DrawUTF8(&display_u8g2, state->message_scroll_x, DISPLAY_LINE2_Y, message);
    } else {
        snprintf(line1, sizeof(line1), "모드3 숫자");
        u8g2_DrawUTF8(&display_u8g2, 0, DISPLAY_LINE1_Y, line1);
        snprintf(line1, sizeof(line1), "%d", state->number_value);
        u8g2_DrawUTF8(&display_u8g2, 0, DISPLAY_LINE2_Y, line1);
    }

    u8g2_SendBuffer(&display_u8g2);
}

static void display_queue_send(const display_cmd_t *cmd)
{
    if (!display_queue) {
        return;
    }
    xQueueSend(display_queue, cmd, 0);
}

void display_set_status(const char *ssid, bool connected, const char *ip, bool uros_connected)
{
    display_cmd_t cmd = {
        .type = DISPLAY_CMD_SET_STATUS
    };
    snprintf(cmd.data.status.ssid, sizeof(cmd.data.status.ssid), "%s", ssid ? ssid : "");
    snprintf(cmd.data.status.ip, sizeof(cmd.data.status.ip), "%s", ip ? ip : "0.0.0.0");
    cmd.data.status.connected = connected;
    cmd.data.status.uros_connected = uros_connected;
    display_queue_send(&cmd);
}

void display_set_message(const char *text, size_t len)
{
    display_cmd_t cmd = {
        .type = DISPLAY_CMD_SET_MESSAGE
    };
    if (!text) {
        cmd.data.message.message[0] = '\0';
    } else {
        size_t copy_len = len;
        if (copy_len > DISPLAY_MESSAGE_MAX) {
            copy_len = DISPLAY_MESSAGE_MAX;
        }
        memcpy(cmd.data.message.message, text, copy_len);
        cmd.data.message.message[copy_len] = '\0';
    }
    display_queue_send(&cmd);
}

void display_set_mode(uint8_t mode)
{
    display_cmd_t cmd = {
        .type = DISPLAY_CMD_SET_MODE
    };
    cmd.data.mode.mode = mode;
    display_queue_send(&cmd);
}

void display_set_number(int value)
{
    display_cmd_t cmd = {
        .type = DISPLAY_CMD_SET_NUMBER
    };
    cmd.data.number.value = value;
    display_queue_send(&cmd);
}

void display_next_screen(void)
{
    display_cmd_t cmd = {
        .type = DISPLAY_CMD_NEXT_SCREEN
    };
    display_queue_send(&cmd);
}

void display_task_init(void)
{
    display_queue = xQueueCreate(4, sizeof(display_cmd_t));
    configASSERT(display_queue);
}

void display_task(void *params)
{
    (void)params;

    display_setup();

    display_state_t state = {0};
    snprintf(state.ssid, sizeof(state.ssid), "%s", WIFI_SSID);
    snprintf(state.ip, sizeof(state.ip), "0.0.0.0");
    state.wifi_connected = false;
    state.uros_connected = false;
    state.mode = 0;
    state.number_value = 10;
    display_update_status_line(&state);
    display_update_message(&state);

    bool needs_redraw = true;
    const TickType_t refresh_ticks = pdMS_TO_TICKS(DISPLAY_REFRESH_MS);

    while (true) {
        display_cmd_t cmd;
        if (xQueueReceive(display_queue, &cmd, refresh_ticks) == pdTRUE) {
            switch (cmd.type) {
            case DISPLAY_CMD_SET_STATUS:
                snprintf(state.ssid, sizeof(state.ssid), "%s", cmd.data.status.ssid);
                snprintf(state.ip, sizeof(state.ip), "%s", cmd.data.status.ip);
                state.wifi_connected = cmd.data.status.connected;
                state.uros_connected = cmd.data.status.uros_connected;
                display_update_status_line(&state);
                needs_redraw = true;
                break;
            case DISPLAY_CMD_SET_MESSAGE:
                snprintf(state.message, sizeof(state.message), "%s", cmd.data.message.message);
                display_update_message(&state);
                needs_redraw = true;
                break;
            case DISPLAY_CMD_SET_MODE:
                state.mode = cmd.data.mode.mode;
                needs_redraw = true;
                break;
            case DISPLAY_CMD_SET_NUMBER:
                state.number_value = cmd.data.number.value;
                needs_redraw = true;
                break;
            case DISPLAY_CMD_NEXT_SCREEN:
                state.mode = (uint8_t)((state.mode + 1) % 3);
                needs_redraw = true;
                break;
            }
        }

        bool scrolled = false;
        if (state.mode == 0 && state.status_width > DISPLAY_WIDTH) {
            state.status_scroll_x -= DISPLAY_SCROLL_STEP;
            if (state.status_scroll_x < -state.status_width) {
                state.status_scroll_x = DISPLAY_WIDTH;
            }
            scrolled = true;
        }
        if (state.mode == 1 && state.message_width > DISPLAY_WIDTH) {
            state.message_scroll_x -= DISPLAY_SCROLL_STEP;
            if (state.message_scroll_x < -state.message_width) {
                state.message_scroll_x = DISPLAY_WIDTH;
            }
            scrolled = true;
        }

        if (needs_redraw || scrolled) {
            display_draw(&state);
            needs_redraw = false;
        }
    }
}
