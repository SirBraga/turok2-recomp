#pragma once

#include <unordered_set>
#include <filesystem>

#include "common/rt64_user_configuration.h"
#include "ultramodern/renderer_context.hpp"
#include "librecomp/config.hpp"
#include "librecomp/mods.hpp"

namespace RT64 {
    struct Application;
}

namespace recompui {
    namespace renderer {
        inline const std::string special_option_texture_pack_enabled = "_recomp_texture_pack_enabled";

        class RT64Context final : public ultramodern::renderer::RendererContext {
        public:
            ~RT64Context() override;
            RT64Context(uint8_t *rdram, ultramodern::renderer::WindowHandle window_handle, ultramodern::renderer::PresentationMode presentation_mode, bool developer_mode);

            bool valid() override { return static_cast<bool>(app); }

            bool update_config(const ultramodern::renderer::GraphicsConfig &old_config, const ultramodern::renderer::GraphicsConfig &new_config) override;

            void enable_instant_present() override;
            void send_dl(const OSTask *task) override;
            void send_dummy_workload(uint32_t fb_address) override;
            void update_screen() override;
            void shutdown() override;
            uint32_t get_display_framerate() const override;
            float get_resolution_scale() const override;

        private:
            std::unique_ptr<RT64::Application> app;
            std::unordered_set<std::string> enabled_texture_packs;
            std::unordered_set<std::string> secondary_disabled_texture_packs;
            uint32_t last_refresh_rate = 0;

            void check_texture_pack_actions();
            void check_refresh_rate_changes();
        };

        std::unique_ptr<ultramodern::renderer::RendererContext> create_render_context(uint8_t *rdram, ultramodern::renderer::WindowHandle window_handle, ultramodern::renderer::PresentationMode presentation_mode, bool developer_mode);

        RT64::UserConfiguration::Antialiasing RT64MaxMSAA();
        bool RT64SamplePositionsSupported();
        bool RT64HighPrecisionFBEnabled();

        void trigger_texture_pack_update();
        void enable_texture_pack(const recomp::mods::ModContext& context, const recomp::mods::ModHandle& mod);
        void disable_texture_pack(const recomp::mods::ModHandle& mod);
        // Filtering / dither live in graphics.json, not GraphicsConfig. Apply
        // them onto the current RT64 Application even when ultramodern's
        // GraphicsConfig did not change.
        void apply_extra_graphics_options();
        // Turok polls SDL itself. Forward events so RT64 ImGui (F1) works.
        // `sdl_event` must be an SDL_Event*. Returns true if RT64 consumed it.
        bool filter_sdl_event(void* sdl_event);
        // Returns true if the ImGui inspector is now visible. Metal has no
        // ImGui backend in this RT64; F1 is a no-op there (use F2 to dump).
        bool toggle_rt64_inspector();
        bool is_rt64_inspector_open();
        // Dump hashes to runtime-data/texture-dumps (no native file dialog).
        // Returns true while dumping.
        bool toggle_texture_dump();
        bool is_dumping_textures();
        void secondary_enable_texture_pack(const std::string& mod_id);
        void secondary_disable_texture_pack(const std::string& mod_id);

        // Texture pack enable option. Must be an enum with two options.
        // The first option is treated as disabled and the second option is treated as enabled.
        bool is_texture_pack_enable_config_option(const recomp::config::ConfigOption& option, bool show_errors);
    }
}
