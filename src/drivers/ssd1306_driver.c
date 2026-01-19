#include "ssd1306_driver.h"
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "hardware/i2c.h"
#include "pico/stdlib.h"
#include "ssd1306_font.h" // 8x8 font table, you must provide this file

#define SSD1306_SET_MEM_MODE        0x20
#define SSD1306_SET_COL_ADDR        0x21
#define SSD1306_SET_PAGE_ADDR       0x22
#define SSD1306_SET_DISP_START_LINE 0x40
#define SSD1306_SET_CONTRAST        0x81
#define SSD1306_SET_CHARGE_PUMP     0x8D
#define SSD1306_SET_SEG_REMAP       0xA0
#define SSD1306_SET_ENTIRE_ON       0xA4
#define SSD1306_SET_NORM_DISP       0xA6
#define SSD1306_SET_INV_DISP        0xA7
#define SSD1306_SET_MUX_RATIO       0xA8
#define SSD1306_SET_DISP            0xAE
#define SSD1306_SET_COM_OUT_DIR     0xC8
#define SSD1306_SET_SCROLL          0x2E
#define SSD1306_SET_DISP_OFFSET     0xD3
#define SSD1306_SET_DISP_CLK_DIV    0xD5
#define SSD1306_SET_PRECHARGE       0xD9
#define SSD1306_SET_COM_PIN_CFG     0xDA
#define SSD1306_SET_VCOM_DESEL      0xDB

static void ssd1306_send_cmd(uint8_t cmd) {
    uint8_t buf[2] = {0x80, cmd};
    i2c_write_blocking(SSD1306_I2C, SSD1306_I2C_ADDR, buf, 2, false);
}

static void ssd1306_send_cmds(const uint8_t *cmds, int num) {
    for (int i = 0; i < num; i++) ssd1306_send_cmd(cmds[i]);
}

static void ssd1306_send_buf(uint8_t *buf, int buflen) {
    uint8_t *temp = malloc(buflen + 1);
    temp[0] = 0x40;
    memcpy(temp + 1, buf, buflen);
    i2c_write_blocking(SSD1306_I2C, SSD1306_I2C_ADDR, temp, buflen + 1, false);
    free(temp);
}

void ssd1306_init(SSD1306_t *disp) {
    i2c_init(SSD1306_I2C, SSD1306_I2C_CLK * 1000);
    gpio_set_function(SSD1306_I2C_SDA_PIN, GPIO_FUNC_I2C);
    gpio_set_function(SSD1306_I2C_SCL_PIN, GPIO_FUNC_I2C);
    gpio_pull_up(SSD1306_I2C_SDA_PIN);
    gpio_pull_up(SSD1306_I2C_SCL_PIN);

    const uint8_t cmds[] = {
        SSD1306_SET_DISP, // display off
        SSD1306_SET_MEM_MODE, 0x00, // horizontal addressing
        SSD1306_SET_DISP_START_LINE,
        SSD1306_SET_SEG_REMAP | 0x01,
        SSD1306_SET_MUX_RATIO, SSD1306_HEIGHT - 1,
        SSD1306_SET_COM_OUT_DIR | 0x08,
        SSD1306_SET_DISP_OFFSET, 0x00,
        SSD1306_SET_COM_PIN_CFG,
#if ((SSD1306_WIDTH == 128) && (SSD1306_HEIGHT == 32))
        0x02,
#elif ((SSD1306_WIDTH == 128) && (SSD1306_HEIGHT == 64))
        0x12,
#else
        0x02,
#endif
        SSD1306_SET_DISP_CLK_DIV, 0x80,
        SSD1306_SET_PRECHARGE, 0xF1,
        SSD1306_SET_VCOM_DESEL, 0x30,
        SSD1306_SET_CONTRAST, 0xFF,
        SSD1306_SET_ENTIRE_ON,
        SSD1306_SET_NORM_DISP,
        SSD1306_SET_CHARGE_PUMP, 0x14,
        SSD1306_SET_SCROLL | 0x00, // deactivate scrolling
        SSD1306_SET_DISP | 0x01 // display on
    };
    ssd1306_send_cmds(cmds, sizeof(cmds));
    ssd1306_clear(disp);
    ssd1306_render(disp);
}

void ssd1306_clear(SSD1306_t *disp) {
    memset(disp->buffer, 0, SSD1306_BUF_LEN);
}

void ssd1306_render(SSD1306_t *disp) {
    uint8_t cmds[] = {
        SSD1306_SET_COL_ADDR, 0, SSD1306_WIDTH - 1,
        SSD1306_SET_PAGE_ADDR, 0, SSD1306_NUM_PAGES - 1
    };
    ssd1306_send_cmds(cmds, sizeof(cmds));
    ssd1306_send_buf(disp->buffer, SSD1306_BUF_LEN);
}

static int get_font_index(uint8_t ch) {
    if (ch >= 'A' && ch <= 'Z') return ch - 'A' + 1;
    if (ch >= '0' && ch <= '9') return ch - '0' + 27;
    return 0;
}

static void ssd1306_write_char(SSD1306_t *disp, int16_t x, int16_t y, uint8_t ch) {
    if (x > SSD1306_WIDTH - 8 || y > SSD1306_HEIGHT - 8) return;
    y = y / 8;
    ch = toupper(ch);
    int idx = get_font_index(ch);
    int fb_idx = y * SSD1306_WIDTH + x;
    extern const uint8_t font[];
    for (int i = 0; i < 8; i++) {
        disp->buffer[fb_idx++] = font[idx * 8 + i];
    }
}

void ssd1306_write_string(SSD1306_t *disp, int16_t x, int16_t y, const char *str) {
    if (x > SSD1306_WIDTH - 8 || y > SSD1306_HEIGHT - 8) return;
    while (*str) {
        ssd1306_write_char(disp, x, y, *str++);
        x += 8;
    }
}
