#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/i2c.h"
#include "u8g2.h"
#include "u8x8.h"
// #include "u8g2_font_unifont_t_korean_NanumGothicCoding_16.h"

#define I2C_PORT i2c1
#define SDA_PIN 6
#define SCL_PIN 7
#define I2C_ADDR 0x3C

#define SSD1306_WIDTH 128
#define SSD1306_HEIGHT 32

#define DISPLAY_DRIVER_SSD1306_UNIVISION 0
#define DISPLAY_DRIVER_SSD1306_WINSTAR 1
#define DISPLAY_DRIVER_SH1106_VISIONOX 2
#define DISPLAY_DRIVER DISPLAY_DRIVER_SSD1306_UNIVISION

typedef struct
{
    i2c_inst_t *i2c_port;
    uint8_t sda_pin;
    uint8_t scl_pin;
    uint8_t address;
} u8g2pico_i2c_config_t;

static u8g2pico_i2c_config_t u8g2pico_i2c_config;
static u8g2_t u8g2;

static bool reserved_addr(uint8_t addr)
{
    return (addr & 0x78) == 0 || (addr & 0x78) == 0x78;
}

static uint8_t scan_i2c_addr(i2c_inst_t *i2c, uint8_t sda_pin, uint8_t scl_pin)
{
    uint8_t found = 0;

    i2c_init(i2c, 100 * 1000);
    gpio_set_function(sda_pin, GPIO_FUNC_I2C);
    gpio_set_function(scl_pin, GPIO_FUNC_I2C);
    gpio_pull_up(sda_pin);
    gpio_pull_up(scl_pin);

    printf("u8g2pico: i2c scan\n");
    for (uint8_t addr = 0; addr < 0x80; ++addr)
    {
        if (reserved_addr(addr))
        {
            continue;
        }
        uint8_t rxdata;
        int ret = i2c_read_blocking(i2c, addr, &rxdata, 1, false);
        if (ret >= 0)
        {
            printf("u8g2pico: i2c device at 0x%02x\n", addr);
            if (found == 0)
            {
                found = addr;
            }
        }
    }

    return found;
}

static uint8_t pico_gpio_and_delay(u8x8_t *u8x8, uint8_t msg, uint8_t arg_int, void *arg_ptr)
{
    switch (msg)
    {
    case U8X8_MSG_GPIO_AND_DELAY_INIT:
        break;
    case U8X8_MSG_DELAY_NANO:
        sleep_us(arg_int ? 1 : 0);
        break;
    case U8X8_MSG_DELAY_100NANO:
        break;
    case U8X8_MSG_DELAY_10MICRO:
        sleep_us(arg_int * 10);
        break;
    case U8X8_MSG_DELAY_MILLI:
        sleep_ms(arg_int);
        break;
    case U8X8_MSG_DELAY_I2C:
        break;
    default:
        break;
    }
    return 1;
}

static uint8_t pico_i2c_byte_cb(u8x8_t *u8x8, uint8_t msg, uint8_t arg_int, void *arg_ptr)
{
    static uint8_t buffer[32];
    static uint8_t buf_idx;
    uint8_t *data;

    switch (msg)
    {
    case U8X8_MSG_BYTE_INIT:
        i2c_init(u8g2pico_i2c_config.i2c_port, 100 * 1000);
        gpio_set_function(u8g2pico_i2c_config.sda_pin, GPIO_FUNC_I2C);
        gpio_set_function(u8g2pico_i2c_config.scl_pin, GPIO_FUNC_I2C);
        gpio_pull_up(u8g2pico_i2c_config.sda_pin);
        gpio_pull_up(u8g2pico_i2c_config.scl_pin);
        break;
    case U8X8_MSG_BYTE_START_TRANSFER:
        buf_idx = 0;
        break;
    case U8X8_MSG_BYTE_SEND:
        data = (uint8_t *)arg_ptr;
        while (arg_int > 0)
        {
            buffer[buf_idx++] = *data;
            data++;
            arg_int--;
        }
        break;
    case U8X8_MSG_BYTE_END_TRANSFER:
        i2c_write_blocking(u8g2pico_i2c_config.i2c_port,
                           u8g2pico_i2c_config.address,
                           buffer,
                           buf_idx,
                           false);
        break;
    default:
        return 0;
    }
    return 1;
}

static void setup_display(uint8_t address_7bit)
{
    u8g2pico_i2c_config.i2c_port = I2C_PORT;
    u8g2pico_i2c_config.sda_pin = SDA_PIN;
    u8g2pico_i2c_config.scl_pin = SCL_PIN;
    u8g2pico_i2c_config.address = address_7bit;

#if DISPLAY_DRIVER == DISPLAY_DRIVER_SSD1306_WINSTAR
    u8g2_Setup_ssd1306_i2c_128x32_winstar_f(&u8g2, U8G2_R0, pico_i2c_byte_cb, pico_gpio_and_delay);
#elif DISPLAY_DRIVER == DISPLAY_DRIVER_SH1106_VISIONOX
    u8g2_Setup_sh1106_i2c_128x32_visionox_f(&u8g2, U8G2_R0, pico_i2c_byte_cb, pico_gpio_and_delay);
#else
    u8g2_Setup_ssd1306_i2c_128x32_univision_f(&u8g2, U8G2_R0, pico_i2c_byte_cb, pico_gpio_and_delay);
#endif

    u8x8_SetI2CAddress(u8g2_GetU8x8(&u8g2), (uint8_t)(address_7bit << 1));
}

int main(void)
{
    stdio_init_all();
    sleep_ms(2000);
    printf("u8g2pico: korean test start\n");

    uint8_t addr = scan_i2c_addr(I2C_PORT, SDA_PIN, SCL_PIN);
    if (addr == 0)
    {
        addr = I2C_ADDR;
        printf("u8g2pico: no i2c device found, using 0x%02x\n", addr);
    }
    else
    {
        printf("u8g2pico: using i2c addr 0x%02x\n", addr);
    }

    setup_display(addr);

    u8g2_InitDisplay(&u8g2);
    u8g2_SetPowerSave(&u8g2, 0);
    u8g2_SetContrast(&u8g2, 0xFF);
    u8g2_SetFont(&u8g2, u8g2_font_gulim16_t_korean2);

    const char *line1 = "안녕하세요!. 방갑습니다.";
    const char *line2 = "이것은 라즈페리파이 피코에 SSD1306 테스트입니다.";
    int16_t width1 = (int16_t)u8g2_GetUTF8Width(&u8g2, line1);
    int16_t width2 = (int16_t)u8g2_GetUTF8Width(&u8g2, line2);
    int16_t text_width = width1 > width2 ? width1 : width2;
    int16_t x = SSD1306_WIDTH;

    printf("u8g2pico: software scroll enabled\n");
    while (true)
    {
        u8g2_ClearBuffer(&u8g2);
        u8g2_DrawUTF8(&u8g2, x, 15, line1);
        u8g2_DrawUTF8(&u8g2, x, 31, line2);
        u8g2_SendBuffer(&u8g2);

        x -= 2;
        if (x < -text_width)
        {
            x = SSD1306_WIDTH;
        }
        sleep_ms(50);
    }
}
