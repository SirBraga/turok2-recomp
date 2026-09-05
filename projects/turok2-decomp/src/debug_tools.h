#ifndef TUROK2_DEBUG_TOOLS_H
#define TUROK2_DEBUG_TOOLS_H

#include <cstdint>

void turok2_debug_request_skip();
void turok2_debug_request_save();
void turok2_debug_request_load();
void turok2_debug_request_confirm_a();
void turok2_debug_toggle_hud();
void turok2_debug_set_status(const char* text);
uint16_t turok2_debug_extra_buttons();
void turok2_debug_tick(uint8_t* rdram, int cinema);
void turok2_debug_present();

#endif
