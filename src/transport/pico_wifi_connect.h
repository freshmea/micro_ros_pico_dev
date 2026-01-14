#ifndef PICO_WIFI_CONNECT_H
#define PICO_WIFI_CONNECT_H

#ifdef __cplusplus
extern "C" {
#endif

// WiFi connection initialization
// Returns 0 on success, non-zero on failure
int pico_wifi_connect(void);

#ifdef __cplusplus
}
#endif

#endif // PICO_WIFI_CONNECT_H
