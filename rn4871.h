#pragma once
#include <stdint.h>
#include <stdbool.h>

void rn4871_init(void);
void rn4871_configure_hid(void);
void rn4871_send_report(uint8_t modifier, const uint8_t keys[6]);
void rn4871_update_key(uint16_t keycode, bool pressed);
