#include "recompui/config.h"
#include "recompinput/players.h"
#include "recompinput/profiles.h"
#include "recompinput/input_types.h"
#include "elements/ui_element.h"
#include "ui_config_page_controls.h"
#include "librecomp/game.hpp"

namespace recompui {

void config::controls::add_game_input(
    const std::string &name,
    const std::string &description,
    recompinput::GameInput input_id,
    bool clearable
) {
    (void)clearable;
    recompinput::set_game_input_name(input_id, name);
    recompinput::set_game_input_description(input_id, description);
}

void config::create_controls_tab(const std::string &name) {
    config::create_tab(
        name,
        config::controls::id,
        [](ContextId context, Element* parent) {
            context.create_element<ConfigPageControls>(parent);
        },
        nullptr,
        [](TabCloseContext close_context) {
            // Save the current control mappings when closing the controls tab.
            recompinput::profiles::save_controls_config(recomp::get_config_path() / (config::controls::id + ".json"));
        }
    );
}

} // namespace recompui
