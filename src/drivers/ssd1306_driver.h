#ifndef SSD1306_DRIVER_H
#define SSD1306_DRIVER_H

#include <stdbool.h>
#include <stdint.h>
#include "pico/stdlib.h"

#define SSD1306_WIDTH 128
#define SSD1306_HEIGHT 32

// I2C pins for this project (GP6 = SDA, GP7 = SCL)
#define SSD1306_I2C i2c1
#define SSD1306_I2C_ADDR 0x3C
#define SSD1306_I2C_SDA_PIN 6
#define SSD1306_I2C_SCL_PIN 7
#define SSD1306_I2C_CLK 400

// SSD1306 display buffer size
#define SSD1306_PAGE_HEIGHT 8
#define SSD1306_NUM_PAGES (SSD1306_HEIGHT / SSD1306_PAGE_HEIGHT)
#define SSD1306_BUF_LEN (SSD1306_NUM_PAGES * SSD1306_WIDTH)

// SSD1306 driver struct
typedef struct {
    uint8_t buffer[SSD1306_BUF_LEN];
} SSD1306_t;

void ssd1306_init(SSD1306_t *disp);
void ssd1306_clear(SSD1306_t *disp);
void ssd1306_render(SSD1306_t *disp);
void ssd1306_write_string(SSD1306_t *disp, int16_t x, int16_t y, const char *str);

#endif // SSD1306_DRIVER_H
