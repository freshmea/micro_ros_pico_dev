#ifndef DISPLAY_TASK_H
#define DISPLAY_TASK_H

#include <stdbool.h>
#include <stddef.h>

#define DISPLAY_MESSAGE_MAX 128

void display_task_init(void);
void display_task(void *params);
void display_set_status(const char *ssid, bool connected, const char *ip);
void display_set_message(const char *text, size_t len);
void display_next_screen(void);

#endif // DISPLAY_TASK_H
