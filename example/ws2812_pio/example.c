#include "ws2812_demo.h"

#define WS2812_GPIO_PIN 8

int main(void) {
    return ws2812_demo_run(WS2812_GPIO_PIN);
}
