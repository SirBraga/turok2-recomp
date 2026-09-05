#include "librecomp/config.hpp"
#include "recompui/config.h"
#include "util/steam_deck.h"

namespace recompui {

static bool created_general_config = false;

namespace config {
    recomp::config::Config &get_general_config() {
        if (!created_general_config) {
            throw std::runtime_error("General config has not been created yet. Call create_general_tab() first.");
        }
        return config::get_config(config::general::id);
    }

    using EnumOptionVector = const std::vector<recomp::config::ConfigOptionEnumOption>;
    enum class BackgroundInputMode {
        Off,
        On,
        OptionCount
    };
    static EnumOptionVector background_input_options = {
        {BackgroundInputMode::Off, "Off"},
        {BackgroundInputMode::On, "On"},
    };

    template <typename T = uint32_t>
    T get_general_config_enum_value(const std::string& option_id) {
        return static_cast<T>(std::get<uint32_t>(get_general_config().get_option_value(option_id)));
    }

    template <typename T = uint32_t>
    T get_general_config_number_value(const std::string& option_id) {
        return static_cast<T>(std::get<double>(get_general_config().get_option_value(option_id)));
    }

    bool get_general_config_bool_value(const std::string& option_id) {
        return std::get<bool>(get_general_config().get_option_value(option_id));
    }
    
    bool general::has_rumble_strength_option() {
        return get_general_config().has_option(general::options::rumble_strength);
    }

    double general::get_rumble_strength() {
        return get_general_config_number_value<double>(general::options::rumble_strength);
    }

    bool general::has_gyro_sensitivity_option() {
        return get_general_config().has_option(general::options::gyro_sensitivity);
    }
    
    double general::get_gyro_sensitivity() {
        return get_general_config_number_value<double>(general::options::gyro_sensitivity);
    }
    
    bool general::has_mouse_sensitivity_option() {
        return get_general_config().has_option(general::options::mouse_sensitivity);
    }
    
    double general::get_mouse_sensitivity() {
        return get_general_config_number_value<double>(general::options::mouse_sensitivity);
    }
    
    double general::get_joystick_deadzone() {
        return get_general_config_number_value<double>(general::options::joystick_deadzone);
    }

    bool general::has_analog_look_option() {
        return get_general_config().has_option(general::options::analog_look);
    }

    bool general::get_analog_look() {
        if (!has_analog_look_option()) {
            return true;
        }
        return get_general_config_bool_value(general::options::analog_look);
    }
    
    bool general::get_background_input_mode_enabled() {
        return get_general_config_enum_value<BackgroundInputMode>(general::options::background_input_mode) == BackgroundInputMode::On;
    }
    
    bool general::get_debug_mode_enabled() {
        return get_general_config_bool_value(general::options::debug_mode);
    }

    recomp::config::Config &create_general_tab(const GeneralTabOptions& options, const std::string &name) {
        created_general_config = true;
        recomp::config::Config &config = recompui::config::create_config_tab(name, general::id, false);

        config.add_bool_option(
            general::options::debug_mode,
            "Debug Mode",
            "Enables debugging features.",
            false,
            true // hidden by default
        );

        if (options.has_rumble_strength) {
            config.add_percent_number_option(
                general::options::rumble_strength,
                "Rumble Strength",
                "Controls the strength of rumble when using a controller that supports it. "
                "<b>Setting this to zero will disable rumble.</b>",
                25.0
            );
        }

        if (options.has_gyro_sensitivity) {
            config.add_percent_number_option(
                general::options::gyro_sensitivity,
                "Gyro Sensitivity",
                "Controls the sensitivity of gyro aiming when using items in first person for controllers that support it."
                "<b>Setting this to zero will disable gyro.</b>"
                "<br />"
                "<br />"
                "<b>Note: To recalibrate controller gyro, set the controller down on a still, flat surface for 5 seconds.</b>",
                25.0
            );
        }

        if (options.has_mouse_sensitivity) {
            const double mouse_default = options.mouse_sensitivity_default >= 0.0
                ? options.mouse_sensitivity_default
                : (is_steam_deck() ? 50.0 : 0.0);
            config.add_percent_number_option(
                general::options::mouse_sensitivity,
                "Mouse Sensitivity",
                "Controls mouse look speed. <b>Setting this to zero disables mouse look.</b> 50% matches the default Turok 2 scale.",
                mouse_default
            );
        }

        if (options.has_analog_look) {
            config.add_bool_option(
                general::options::analog_look,
                "Modern analog look",
                "Right stick looks (yaw/pitch) without N64 C-button acceleration. Turn this off to keep classic C-button camera / item binds on the right stick.",
                true
            );
        }

        config.add_percent_number_option(
            general::options::joystick_deadzone,
            "Joystick Deadzone",
            "Applies a deadzone to joystick inputs.",
            options.joystick_deadzone_default
        );

        config.add_enum_option(
            general::options::background_input_mode,
            "Background Input Mode",
            "Allows the game to read controller input when out of focus."
            "<br/>"
            "<b>This setting does not affect keyboard input.</b>",
            background_input_options,
            BackgroundInputMode::On
        );

        return config;
    }
} // namespace config
} // namespace recompui
