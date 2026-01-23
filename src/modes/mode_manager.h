#ifndef MODE_MANAGER_H
#define MODE_MANAGER_H

#include <stdint.h>
#include "modes/mode_common.h"

void mode_manager_init(const mode_context_t *ctx);
void mode_manager_set(mode_id_t mode);
void mode_manager_next(void);
mode_id_t mode_manager_get(void);
void mode_manager_handle_button(uint8_t button_id, uint64_t now_ms);
void mode_manager_update(uint64_t now_ms);

#endif // MODE_MANAGER_H
