#ifndef MICRO_ROS_PICO_WIFI
#define MICRO_ROS_PICO_WIFI

#include <stdint.h>

#include <uxr/client/profile/transport/custom/custom_transport.h>

bool pico_wifi_transport_open(struct uxrCustomTransport *transport);
bool pico_wifi_transport_close(struct uxrCustomTransport *transport);
size_t pico_wifi_transport_write(struct uxrCustomTransport *transport, const uint8_t *buf, size_t len, uint8_t *errcode);
size_t pico_wifi_transport_read(struct uxrCustomTransport *transport, uint8_t *buf, size_t len, int timeout, uint8_t *errcode);

#endif // MICRO_ROS_PICO_WIFI
