#ifndef APP_STATE_H
#define APP_STATE_H

#include "drivers/passive_buzzer_manager.h"
#include "drivers/touch_sensor.h"

extern PassiveBuzzerManager buzzer;
extern TouchSensorManager touch;

#include "drivers/ssd1306_driver.h"
extern SSD1306_t ssd1306;
void display_set_status(const char *ssid, bool connected, const char *ip);
void display_set_hello(const char *text);

#endif // APP_STATE_H
