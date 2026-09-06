#pragma once

#include "recompinput.h"

namespace recompinput {
    bool sdl_event_filter(void* userdata, SDL_Event* event);
    void handle_events();
    void purge_deferred_controller_profiles();
}
