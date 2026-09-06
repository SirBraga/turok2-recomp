#include <algorithm>
#include <array>
#include <atomic>
#include <cinttypes>
#include <csignal>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <memory>
#include <mutex>
#include <stdexcept>
#include <string>
#include <vector>

#if !defined(_WIN32)
#include <execinfo.h>
#include <unistd.h>
#else
// GetCurrentThreadId, for the window handle RT64 expects on Windows.
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#endif

#define SDL_MAIN_HANDLED
#include <SDL2/SDL.h>
#include <SDL2/SDL_syswm.h>

#include "librecomp/game.hpp"
#include "librecomp/mods.hpp"
#include "recompui/config.h"
#include "recompui/program_config.h"
#include "recompui/recompui.h"
#include "recompui/renderer.h"
// Not under include/: recompui exports its src/ tree publicly for these.
#include "base/ui_launcher.h"
#include "elements/ui_element.h"
#include "elements/ui_image.h"
#include "elements/ui_label.h"
#include "util/file.h"
#include "recompinput/recompinput.h"
#include "recompinput/profiles.h"
#include "recompinput/input_mapping.h"
#include "recompinput/input_state.h"
#include "recompinput/input_binding.h"
#include "recompinput/input_events.h"
#include "recompinput/input_types.h"
#include "recompinput/players.h"
#include "ultramodern/input.hpp"
#include "ultramodern/ultramodern.hpp"
#include "crash_diagnostics.h"
#include "debug_tools.h"

extern "C" void recomp_entrypoint(uint8_t*, recomp_context*);
gpr get_entrypoint_address();
void turok2_on_init(uint8_t*, recomp_context*);
void turok2_on_thread_create(uint8_t*, recomp_context*);
void register_turok2_sections();
extern "C" void turok2_set_camera_scales(float fov_scale);
extern "C" void turok2_set_engine_hz(int mode);
extern RspUcodeFunc aspMain;

void enable_texture_pack(recomp::mods::ModContext& context, const recomp::mods::ModHandle& mod) {
    recompui::renderer::enable_texture_pack(context, mod);
}

void disable_texture_pack(recomp::mods::ModContext&, const recomp::mods::ModHandle& mod) {
    recompui::renderer::disable_texture_pack(mod);
}

void reorder_texture_pack(recomp::mods::ModContext&) {
    recompui::renderer::trigger_texture_pack_update();
}

void register_turok2_texture_pack_content() {
    recomp::mods::ModContentType texture_pack_content_type{
        .content_filename = "rt64.json",
        .allow_runtime_toggle = true,
        .on_enabled = enable_texture_pack,
        .on_disabled = disable_texture_pack,
        .on_reordered = reorder_texture_pack,
    };
    auto texture_pack_content_type_id =
        recomp::mods::register_mod_content_type(texture_pack_content_type);
    recomp::mods::register_mod_container_type(
        "rtz", std::vector{texture_pack_content_type_id}, false);
}

static recompui::Color rgba(uint8_t r, uint8_t g, uint8_t b, uint8_t a = 255) {
    return recompui::Color{r, g, b, a};
}

static recompui::Color with_a(recompui::Color c, uint8_t a) {
    c.a = a;
    return c;
}

void apply_turok2_ui_theme() {
    using recompui::theme::color;
    using recompui::theme::Typography;
    const recompui::Color paper = rgba(10, 8, 6);
    const recompui::Color ink = rgba(236, 228, 214);
    const recompui::Color rust = rgba(196, 82, 36);
    const recompui::Color ochre = rgba(201, 160, 72);
    const recompui::Color wash = rgba(201, 140, 72);

    recompui::theme::set_theme_color(color::Background1, paper);
    recompui::theme::set_theme_color(color::Background2, rgba(18, 14, 11));
    recompui::theme::set_theme_color(color::Background3, rgba(28, 22, 17));
    recompui::theme::set_theme_color(color::BGOverlay, with_a(wash, 28));
    recompui::theme::set_theme_color(color::ModalOverlay, rgba(8, 6, 4, 235));
    recompui::theme::set_theme_color(color::BGShadow, rgba(0, 0, 0, 96));
    recompui::theme::set_theme_color(color::BGShadow2, rgba(8, 6, 4, 184));

    recompui::theme::set_theme_color(color::Text, ink);
    recompui::theme::set_theme_color(color::TextActive, rgba(245, 238, 226));
    recompui::theme::set_theme_color(color::TextDim, rgba(196, 184, 166));
    recompui::theme::set_theme_color(color::TextInactive, rgba(236, 228, 214, 153));
    recompui::theme::set_theme_color(color::TextA5, with_a(ink, 13));
    recompui::theme::set_theme_color(color::TextA20, with_a(ink, 51));
    recompui::theme::set_theme_color(color::TextA30, with_a(ink, 77));
    recompui::theme::set_theme_color(color::TextA50, with_a(ink, 128));
    recompui::theme::set_theme_color(color::TextA80, with_a(ink, 204));

    recompui::theme::set_theme_color(color::Primary, rust);
    recompui::theme::set_theme_color(color::PrimaryL, rgba(232, 168, 112));
    recompui::theme::set_theme_color(color::PrimaryD, rgba(122, 42, 18));
    recompui::theme::set_theme_color(color::PrimaryA5, with_a(rust, 13));
    recompui::theme::set_theme_color(color::PrimaryA20, with_a(rust, 51));
    recompui::theme::set_theme_color(color::PrimaryA30, with_a(rust, 77));
    recompui::theme::set_theme_color(color::PrimaryA50, with_a(rust, 128));
    recompui::theme::set_theme_color(color::PrimaryA80, with_a(rust, 204));

    recompui::theme::set_theme_color(color::Secondary, ochre);
    recompui::theme::set_theme_color(color::SecondaryL, rgba(232, 204, 140));
    recompui::theme::set_theme_color(color::SecondaryD, rgba(140, 104, 32));
    recompui::theme::set_theme_color(color::SecondaryA5, with_a(ochre, 13));
    recompui::theme::set_theme_color(color::SecondaryA20, with_a(ochre, 51));
    recompui::theme::set_theme_color(color::SecondaryA30, with_a(ochre, 77));
    recompui::theme::set_theme_color(color::SecondaryA50, with_a(ochre, 128));
    recompui::theme::set_theme_color(color::SecondaryA80, with_a(ochre, 204));

    recompui::theme::set_theme_color(color::A, rust);
    recompui::theme::set_theme_color(color::AL, rgba(232, 168, 112));
    recompui::theme::set_theme_color(color::AD, rgba(122, 42, 18));
    recompui::theme::set_theme_color(color::AA5, with_a(rust, 13));
    recompui::theme::set_theme_color(color::AA20, with_a(rust, 51));
    recompui::theme::set_theme_color(color::AA30, with_a(rust, 77));
    recompui::theme::set_theme_color(color::AA50, with_a(rust, 128));
    recompui::theme::set_theme_color(color::AA80, with_a(rust, 204));

    recompui::theme::set_theme_color(color::Elevated, with_a(wash, 28));
    recompui::theme::set_theme_color(color::ElevatedSoft, with_a(wash, 14));
    recompui::theme::set_theme_color(color::ElevatedBorder, with_a(wash, 180));
    recompui::theme::set_theme_color(color::ElevatedBorderHard, wash);

    recompui::theme::set_border_radius_sm(4.0f);
    recompui::theme::set_border_radius_md(6.0f);
    recompui::theme::set_border_radius_lg(8.0f);

    recompui::theme::set_typography_preset(Typography::Header1, 44.0f, -0.02f, 700);
    recompui::theme::set_typography_preset(Typography::Header2, 32.0f, -0.01f, 700);
    recompui::theme::set_typography_preset(Typography::Header3, 24.0f, 0.0f, 700);
    recompui::theme::set_typography_preset(Typography::LabelLG, 22.0f, 0.02f, 600);
    recompui::theme::set_typography_preset(Typography::LabelMD, 17.0f, 0.01f, 600);
    recompui::theme::set_typography_preset(Typography::LabelSM, 13.0f, 0.08f, 600);
    recompui::theme::set_typography_preset(Typography::LabelXS, 13.0f, 0.04f, 400);
    recompui::theme::set_typography_preset(Typography::Body, 16.0f, 0.0f, 400);
}

void register_turok2_default_keyboard() {
    using recompinput::GameInput;
    using recompinput::InputField;

    recompinput::set_default_mapping_for_keyboard(
        GameInput::A, {InputField::keyboard(SDL_SCANCODE_TAB)});
    recompinput::set_default_mapping_for_keyboard(
        GameInput::B, {InputField::keyboard(SDL_SCANCODE_LCTRL),
                       InputField::mouse(SDL_BUTTON_MIDDLE)});
    recompinput::set_default_mapping_for_keyboard(
        GameInput::Z, {InputField::mouse(SDL_BUTTON_LEFT)});
    recompinput::set_default_mapping_for_keyboard(
        GameInput::L, {InputField::mouse(SDL_BUTTON_RIGHT),
                       InputField::keyboard(SDL_SCANCODE_R)});
    recompinput::set_default_mapping_for_keyboard(
        GameInput::R, {InputField::keyboard(SDL_SCANCODE_SPACE)});
    recompinput::set_default_mapping_for_keyboard(
        GameInput::START, {InputField::keyboard(SDL_SCANCODE_RETURN)});
    recompinput::set_default_mapping_for_keyboard(
        GameInput::C_LEFT, {InputField::keyboard(SDL_SCANCODE_1)});
    recompinput::set_default_mapping_for_keyboard(
        GameInput::C_RIGHT, {InputField::keyboard(SDL_SCANCODE_3)});
    recompinput::set_default_mapping_for_keyboard(
        GameInput::C_UP, {InputField::keyboard(SDL_SCANCODE_4)});
    recompinput::set_default_mapping_for_keyboard(
        GameInput::C_DOWN, {InputField::keyboard(SDL_SCANCODE_2)});
    recompinput::set_default_mapping_for_keyboard(
        GameInput::DPAD_LEFT, {InputField::keyboard(SDL_SCANCODE_LEFT)});
    recompinput::set_default_mapping_for_keyboard(
        GameInput::DPAD_RIGHT, {InputField::keyboard(SDL_SCANCODE_RIGHT)});
    recompinput::set_default_mapping_for_keyboard(
        GameInput::DPAD_UP, {InputField::keyboard(SDL_SCANCODE_UP)});
    recompinput::set_default_mapping_for_keyboard(
        GameInput::DPAD_DOWN, {InputField::keyboard(SDL_SCANCODE_DOWN)});
    recompinput::set_default_mapping_for_keyboard(
        GameInput::X_AXIS_NEG, {InputField::keyboard(SDL_SCANCODE_A)});
    recompinput::set_default_mapping_for_keyboard(
        GameInput::X_AXIS_POS, {InputField::keyboard(SDL_SCANCODE_D)});
    recompinput::set_default_mapping_for_keyboard(
        GameInput::Y_AXIS_POS, {InputField::keyboard(SDL_SCANCODE_W)});
    recompinput::set_default_mapping_for_keyboard(
        GameInput::Y_AXIS_NEG, {InputField::keyboard(SDL_SCANCODE_S)});

    recompinput::set_default_mapping_for_controller(
        GameInput::A, {InputField::controller_digital(SDL_CONTROLLER_BUTTON_B)});
    recompinput::set_default_mapping_for_controller(
        GameInput::B, {InputField::controller_digital(SDL_CONTROLLER_BUTTON_X)});
    recompinput::set_default_mapping_for_controller(
        GameInput::Z,
        {InputField::controller_analog(SDL_CONTROLLER_AXIS_TRIGGERLEFT, true)});
    recompinput::set_default_mapping_for_controller(
        GameInput::L,
        {InputField::controller_analog(SDL_CONTROLLER_AXIS_TRIGGERRIGHT, true),
         InputField::controller_digital(SDL_CONTROLLER_BUTTON_LEFTSHOULDER)});
    recompinput::set_default_mapping_for_controller(
        GameInput::R, {InputField::controller_digital(SDL_CONTROLLER_BUTTON_A)});
    recompinput::set_default_mapping_for_controller(
        GameInput::START, {InputField::controller_digital(SDL_CONTROLLER_BUTTON_START)});
    recompinput::set_default_mapping_for_controller(
        GameInput::C_UP, {InputField::controller_digital(SDL_CONTROLLER_BUTTON_Y)});
    recompinput::set_default_mapping_for_controller(
        GameInput::C_DOWN,
        {InputField::controller_digital(SDL_CONTROLLER_BUTTON_RIGHTSHOULDER)});
    recompinput::set_default_mapping_for_controller(
        GameInput::C_LEFT, {InputField::controller_digital(SDL_CONTROLLER_BUTTON_DPAD_LEFT)});
    recompinput::set_default_mapping_for_controller(
        GameInput::C_RIGHT, {InputField::controller_digital(SDL_CONTROLLER_BUTTON_DPAD_RIGHT)});
}

void register_turok2_game_inputs() {
    using recompinput::GameInput;
    recompui::config::controls::add_game_input(
        "Frente", "Andar para frente.", GameInput::Y_AXIS_POS, true);
    recompui::config::controls::add_game_input(
        "Tras", "Andar para tras.", GameInput::Y_AXIS_NEG, true);
    recompui::config::controls::add_game_input(
        "Esquerda", "Strafe para a esquerda.", GameInput::X_AXIS_NEG, true);
    recompui::config::controls::add_game_input(
        "Direita", "Strafe para a direita.", GameInput::X_AXIS_POS, true);
    recompui::config::controls::add_game_input(
        "Pular", "Pulo (botao R do N64).", GameInput::R, true);
    recompui::config::controls::add_game_input(
        "Atirar", "Tiro / golpe. Clique no slot e aperte o botao do mouse.", GameInput::Z, true);
    recompui::config::controls::add_game_input(
        "Mira", "Mira / scope (botao L do N64).", GameInput::L, true);
    recompui::config::controls::add_game_input(
        "Agachar", "Agachar (botao B do N64).", GameInput::B, true);
    recompui::config::controls::add_game_input(
        "Arma", "Ciclo de arma / confirmar no menu nativo (botao A).", GameInput::A, true);
    recompui::config::controls::add_game_input(
        "Pause", "Pause / Start.", GameInput::START, true);
    recompui::config::controls::add_game_input(
        "Item cima", "C-Up: item / camera classica.", GameInput::C_UP, true);
    recompui::config::controls::add_game_input(
        "Item baixo", "C-Down: item / camera classica.", GameInput::C_DOWN, true);
    recompui::config::controls::add_game_input(
        "Item esquerda", "C-Left: item / camera classica.", GameInput::C_LEFT, true);
    recompui::config::controls::add_game_input(
        "Item direita", "C-Right: item / camera classica.", GameInput::C_RIGHT, true);
    recompui::config::controls::add_game_input(
        "D-Pad cima", "D-pad cima.", GameInput::DPAD_UP, true);
    recompui::config::controls::add_game_input(
        "D-Pad baixo", "D-pad baixo.", GameInput::DPAD_DOWN, true);
    recompui::config::controls::add_game_input(
        "D-Pad esquerda", "D-pad esquerda.", GameInput::DPAD_LEFT, true);
    recompui::config::controls::add_game_input(
        "D-Pad direita", "D-pad direita.", GameInput::DPAD_RIGHT, true);
}

static bool keyboard_binding_empty(recompinput::GameInput input) {
    const int kb = recompinput::profiles::get_sp_keyboard_profile_index();
    return recompinput::profiles::get_input_binding(kb, input, 0).is_empty() &&
           recompinput::profiles::get_input_binding(kb, input, 1).is_empty();
}

void turok2_repair_hollow_keyboard_profile() {
    if (keyboard_binding_empty(recompinput::GameInput::Z) &&
        keyboard_binding_empty(recompinput::GameInput::R) &&
        keyboard_binding_empty(recompinput::GameInput::X_AXIS_POS)) {
        recompinput::profiles::reset_profile_bindings(
            recompinput::profiles::get_sp_keyboard_profile_index(),
            recompinput::InputDevice::Keyboard);
        std::fprintf(stderr, "[ui] teclado vazio restaurado para o padrao Turok 2\n");
    }
}

void register_recomp_controller(SDL_GameController* controller) {
    if (controller == nullptr) {
        return;
    }
    SDL_Joystick* joystick = SDL_GameControllerGetJoystick(controller);
    if (joystick == nullptr) {
        return;
    }
    recompinput::add_controller_state(SDL_JoystickInstanceID(joystick), controller);
}

// RecompFrontend currently consumes these two application-owned globals.
SDL_Window* window = nullptr;
std::vector<recomp::GameEntry> supported_games;

namespace {
#if defined(__APPLE__)
SDL_MetalView metal_view = nullptr;
#endif
volatile std::sig_atomic_t debug_a_polls = 0;
volatile std::sig_atomic_t debug_start_polls = 0;

static SDL_AudioCVT audio_convert;
static SDL_AudioDeviceID audio_device = 0;
static uint32_t audio_sample_rate = 48000;
static uint32_t audio_output_sample_rate = 48000;
constexpr uint32_t audio_input_channels = 2;
static uint32_t audio_output_channels = 2;
constexpr uint32_t duplicated_audio_frames = 4;
static uint32_t discarded_audio_frames = 0;
static uint32_t current_audio_commands = 0;
static uint32_t current_audio_command_size = 0;
static uint32_t current_audio_ucode_data = 0;
constexpr uint32_t audio_bytes_per_frame = audio_input_channels * sizeof(float);

void update_audio_converter() {
    const int result = SDL_BuildAudioCVT(
        &audio_convert,
        AUDIO_F32, audio_input_channels, static_cast<int>(audio_sample_rate),
        AUDIO_F32, audio_output_channels, static_cast<int>(audio_output_sample_rate));
    if (result < 0) {
        throw std::runtime_error(std::string("SDL_BuildAudioCVT failed: ") + SDL_GetError());
    }

    discarded_audio_frames = duplicated_audio_frames * audio_output_sample_rate / audio_sample_rate;
}

bool reset_audio(uint32_t output_frequency) {
    if (audio_device != 0) {
        SDL_CloseAudioDevice(audio_device);
        audio_device = 0;
    }

    SDL_AudioSpec desired{};
    desired.freq = static_cast<int>(output_frequency);
    desired.format = AUDIO_F32;
    desired.channels = static_cast<Uint8>(audio_output_channels);
    desired.samples = 0x100;
    desired.callback = nullptr;

    audio_device = 0;
    for (int attempt = 0; attempt < 8 && audio_device == 0; ++attempt) {
        if (attempt > 0) {
            SDL_Delay(300);
        }
        audio_device = SDL_OpenAudioDevice(nullptr, 0, &desired, nullptr, 0);
    }
    if (audio_device == 0) {
        std::fprintf(stderr, "SDL_OpenAudioDevice failed: %s\n", SDL_GetError());
        return false;
    }

    audio_output_sample_rate = output_frequency;
    update_audio_converter();
    SDL_PauseAudioDevice(audio_device, 0);
    std::fprintf(stderr, "[audio] output initialized at %u Hz, stereo float32\n", output_frequency);
    return true;
}

void set_audio_frequency(uint32_t frequency) {
    if (frequency == 0) {
        return;
    }

    audio_sample_rate = frequency;
    update_audio_converter();
    if (std::getenv("TUROK2_AUDIO_DIAGNOSTICS") != nullptr) {
        std::fprintf(stderr, "[audio] game frequency=%u Hz\n", frequency);
    }
}

size_t get_audio_frames_remaining() {
    if (audio_device == 0) {
        return 0;
    }

    uint64_t buffered_bytes = SDL_GetQueuedAudioSize(audio_device);
    buffered_bytes = buffered_bytes * audio_input_channels * audio_sample_rate /
        audio_output_sample_rate / audio_output_channels;
    return static_cast<size_t>(buffered_bytes / audio_bytes_per_frame);
}

void queue_audio_samples(int16_t* audio_data, size_t sample_count) {
    if ((audio_device == 0) || (audio_data == nullptr) ||
        (sample_count <= duplicated_audio_frames * audio_input_channels)) {
        return;
    }

    static std::vector<float> swap_buffer;
    static std::array<float, duplicated_audio_frames * audio_input_channels> duplicated_samples{};
    const size_t converted_sample_count = sample_count + duplicated_audio_frames * audio_input_channels;
    const size_t required_sample_count = std::max(
        converted_sample_count,
        converted_sample_count * static_cast<size_t>(std::max(audio_convert.len_mult, 1)));
    if (swap_buffer.size() < required_sample_count) {
        swap_buffer.resize(required_sample_count);
    }

    std::copy(duplicated_samples.begin(), duplicated_samples.end(), swap_buffer.begin());

    const float volume = static_cast<float>(recompui::config::sound::get_main_volume()) / 100.0f;
    int16_t peak = 0;
    for (size_t i = 0; i < sample_count; i += audio_input_channels) {
        const int16_t left = audio_data[i + 1];
        const int16_t right = audio_data[i + 0];
        peak = std::max<int16_t>(peak, static_cast<int16_t>(std::min<int32_t>(32767, std::abs(static_cast<int32_t>(left)))));
        peak = std::max<int16_t>(peak, static_cast<int16_t>(std::min<int32_t>(32767, std::abs(static_cast<int32_t>(right)))));
        swap_buffer[i + 0 + duplicated_audio_frames * audio_input_channels] = left * (0.5f / 32768.0f) * volume;
        swap_buffer[i + 1 + duplicated_audio_frames * audio_input_channels] = right * (0.5f / 32768.0f) * volume;
    }

    std::copy(
        swap_buffer.begin() + sample_count,
        swap_buffer.begin() + sample_count + duplicated_samples.size(),
        duplicated_samples.begin());

    audio_convert.buf = reinterpret_cast<Uint8*>(swap_buffer.data());
    audio_convert.len = static_cast<int>(converted_sample_count * sizeof(float));
    if (SDL_ConvertAudio(&audio_convert) < 0) {
        std::fprintf(stderr, "SDL_ConvertAudio failed: %s\n", SDL_GetError());
        return;
    }

    const uint32_t discarded_bytes = audio_output_channels * discarded_audio_frames * sizeof(float);
    if (audio_convert.len_cvt <= discarded_bytes) {
        return;
    }

    float* samples_to_queue = swap_buffer.data() + audio_output_channels * discarded_audio_frames / 2;
    uint32_t bytes_to_queue = static_cast<uint32_t>(audio_convert.len_cvt) - discarded_bytes;

    // Bound latency without starving the producer. This is the same policy used
    // by the reference N64Recomp ports, applied after sample-rate conversion.
    const uint64_t queued_microseconds =
        uint64_t(SDL_GetQueuedAudioSize(audio_device)) /
        (audio_output_channels * sizeof(float)) * 1000000 / audio_output_sample_rate;
    const uint32_t skip_factor = static_cast<uint32_t>(queued_microseconds / 100000);
    if (skip_factor != 0) {
        const uint32_t skip_ratio = 1u << std::min(skip_factor, 8u);
        bytes_to_queue /= skip_ratio;
        const size_t output_frames = bytes_to_queue / (audio_output_channels * sizeof(float));
        for (size_t i = 0; i < output_frames; i++) {
            samples_to_queue[2 * i + 0] = samples_to_queue[2 * skip_ratio * i + 0];
            samples_to_queue[2 * i + 1] = samples_to_queue[2 * skip_ratio * i + 1];
        }
    }

    SDL_QueueAudio(audio_device, samples_to_queue, bytes_to_queue);

    static uint64_t queued_buffers = 0;
    queued_buffers++;
    if ((std::getenv("TUROK2_AUDIO_DIAGNOSTICS") != nullptr) &&
        ((queued_buffers <= 30) || ((queued_buffers % 120) == 0))) {
        std::fprintf(stderr,
            "[audio] buffer=%llu input_samples=%zu output_bytes=%u peak=%d queued_bytes=%u\n",
            static_cast<unsigned long long>(queued_buffers), sample_count, bytes_to_queue,
            static_cast<int>(peak), SDL_GetQueuedAudioSize(audio_device));
    }
}

void debug_a_signal(int) {
    debug_a_polls = 15;
}

void debug_start_signal(int) {
    debug_start_polls = 15;
}

bool test_input_enabled() {
    static const bool enabled = [] {
        const char* value = SDL_getenv("TUROK2_TEST_INPUT");
        return value != nullptr && value[0] != '\0' && value[0] != '0';
    }();
    return enabled;
}

#if !defined(_WIN32)
void crash_signal(int sig) {
    std::fprintf(stderr, "[crash] signal %d\n", sig);
    turok2_diag_report_signal(sig);
    void* frames[64];
    const int frame_count = backtrace(frames, 64);
    backtrace_symbols_fd(frames, frame_count, STDERR_FILENO);
    _exit(128 + sig);
}
#endif

ultramodern::gfx_callbacks_t::gfx_data_t create_gfx() {
    SDL_SetHint(SDL_HINT_WINDOWS_DPI_AWARENESS, "permonitorv2");
    // Modern FPS mouse input must use unscaled relative counts. In particular,
    // do not let DPI, renderer scaling or the desktop acceleration curve alter
    // the relationship between a physical mouse count and an angular delta.
    SDL_SetHint(SDL_HINT_MOUSE_RELATIVE_SCALING, "0");
    SDL_SetHint(SDL_HINT_MOUSE_RELATIVE_SYSTEM_SCALE, "0");
    SDL_SetHint(SDL_HINT_MOUSE_RELATIVE_SPEED_SCALE, "1.0");
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_GAMECONTROLLER | SDL_INIT_AUDIO) != 0) {
        std::fprintf(stderr, "SDL_Init falhou: %s\n", SDL_GetError());
        std::exit(EXIT_FAILURE);
    }
    if (!reset_audio(48000)) {
        std::exit(EXIT_FAILURE);
    }
    return {};
}

ultramodern::renderer::WindowHandle create_window(
    ultramodern::gfx_callbacks_t::gfx_data_t) {
    uint32_t flags = SDL_WINDOW_RESIZABLE | SDL_WINDOW_ALLOW_HIGHDPI;
#if defined(__APPLE__)
    flags |= SDL_WINDOW_METAL;
#elif defined(RT64_SDL_WINDOW_VULKAN)
    // Windows and Linux go through Vulkan. RT64 also has a D3D12 backend on
    // Windows, which does not need a window flag of its own.
    flags |= SDL_WINDOW_VULKAN;
#endif

    window = SDL_CreateWindow(
        "Turok 2: Recompiled",
        SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
        1920, 1080,
        flags);
    if (window == nullptr) {
        std::fprintf(stderr, "SDL_CreateWindow falhou: %s\n", SDL_GetError());
        std::exit(EXIT_FAILURE);
    }

    SDL_SysWMinfo info{};
    SDL_VERSION(&info.version);
    if (SDL_GetWindowWMInfo(window, &info) != SDL_TRUE) {
        std::fprintf(stderr, "SDL_GetWindowWMInfo falhou: %s\n", SDL_GetError());
        std::exit(EXIT_FAILURE);
    }

#if defined(_WIN32)
    // RT64 posts to the thread that owns the window, so it needs that thread id.
    return ultramodern::renderer::WindowHandle{info.info.win.window, GetCurrentThreadId()};
#elif defined(__linux__) || defined(__ANDROID__)
    return ultramodern::renderer::WindowHandle{window};
#elif defined(__APPLE__)
    metal_view = SDL_Metal_CreateView(window);
    return {info.info.cocoa.window, SDL_Metal_GetLayer(metal_view)};
#else
#error "Unsupported platform for create_window"
#endif
}

// Tracks the first SDL game controller that gets plugged in. Kept alongside the
// keyboard fallback so the game is playable without any pad attached.
SDL_GameController* game_controller = nullptr;

void open_first_game_controller() {
    if (game_controller != nullptr) {
        return;
    }
    for (int index = 0; index < SDL_NumJoysticks(); index++) {
        if (SDL_IsGameController(index)) {
            game_controller = SDL_GameControllerOpen(index);
            if (game_controller != nullptr) {
                std::fprintf(stderr, "Controller connected: %s\n",
                             SDL_GameControllerName(game_controller));
                register_recomp_controller(game_controller);
                break;
            }
        }
    }
}

void sample_input();

static std::atomic<bool> g_mouse_grabbed{false};
static std::atomic<bool> g_look_captured{false};
static std::mutex g_mouse_input_mutex;
static float g_mouse_accum_x = 0.0f;
static float g_mouse_accum_y = 0.0f;
static std::atomic<float> g_keyboard_strafe{0.0f};
static std::atomic<float> g_keyboard_forward{0.0f};
static std::atomic<bool> g_weapon_previous{false};
static std::atomic<bool> g_weapon_next{false};

static float get_turok_mouse_look_scale() {
    const char* env = std::getenv("TUROK2_MOUSE_SENSITIVITY");
    if (env != nullptr && *env != '\0') {
        float val = std::strtof(env, nullptr);
        if (val > 0.001f && val < 50.0f) {
            return val;
        }
    }
    try {
        if (recompui::config::general::has_mouse_sensitivity_option()) {
            const double percent = recompui::config::general::get_mouse_sensitivity();
            if (percent <= 0.0) {
                return 0.0f;
            }
            return static_cast<float>(percent / 50.0);
        }
    } catch (const std::exception&) {
    }
    return 1.0f;
}

static float get_mouse_vertical_scale() {
    static const float scale = [] {
        const char* env = std::getenv("TUROK2_MOUSE_VERTICAL_SCALE");
        if (env != nullptr && *env != '\0') {
            const float val = std::strtof(env, nullptr);
            if (val >= 0.01f && val <= 2.0f) return val;
        }
        // A modern FPS uses the same angular scale for both mouse axes. This is
        // retained as an optional user override, but defaults to one-to-one.
        return 1.0f;
    }();
    return scale;
}

static bool get_mouse_invert_y() {
    static const bool inv = [] {
        const char* env = std::getenv("TUROK2_MOUSE_INVERT_Y");
        return env != nullptr && (std::strcmp(env, "1") == 0 || std::strcmp(env, "true") == 0);
    }();
    return inv;
}

extern "C" void turok2_take_mouse_deltas(float* dx, float* dy, bool* captured) {
    std::lock_guard lock(g_mouse_input_mutex);
    if (dx) *dx = g_mouse_accum_x;
    if (dy) *dy = g_mouse_accum_y;
    if (captured) *captured = g_look_captured.load(std::memory_order_relaxed);
    g_mouse_accum_x = 0.0f;
    g_mouse_accum_y = 0.0f;
}

extern "C" void turok2_get_keyboard_movement(float* strafe, float* forward) {
    if (strafe) *strafe = g_keyboard_strafe.load(std::memory_order_relaxed);
    if (forward) *forward = g_keyboard_forward.load(std::memory_order_relaxed);
}

extern "C" void turok2_get_weapon_keys(bool* previous, bool* next) {
    if (previous) *previous = g_weapon_previous.load(std::memory_order_relaxed);
    if (next) *next = g_weapon_next.load(std::memory_order_relaxed);
}

void clear_mouse_input() {
    std::lock_guard lock(g_mouse_input_mutex);
    g_mouse_accum_x = 0.0f;
    g_mouse_accum_y = 0.0f;
}

void set_mouse_grabbed(bool grabbed) {
    SDL_SetRelativeMouseMode(grabbed ? SDL_TRUE : SDL_FALSE);
    g_mouse_grabbed.store(grabbed, std::memory_order_relaxed);
    clear_mouse_input();
}

static void push_camera_scales_from_menu() {
    try {
        turok2_set_camera_scales(
            static_cast<float>(recompui::config::graphics::get_fov_scale()));
        turok2_set_engine_hz(
            static_cast<int>(recompui::config::graphics::get_engine_hz()));
    } catch (const std::exception&) {
    }
}

static bool recomp_config_open() {
    try {
        return recompui::is_context_shown(recompui::config::get_config_context_id());
    } catch (const std::exception&) {
        return false;
    }
}

void update_gfx(void*) {
    static bool printed_menu_hint = false;
    if (!printed_menu_hint) {
        printed_menu_hint = true;
        std::fprintf(stderr, "[ui] Esc or F10 opens Graphics / Controls / General\n");
        std::fprintf(stderr, "[ui] F2 dumps textures to runtime-data/texture-dumps (F1 editor is D3D12/Vulkan only)\n");
    }

    const bool inspector_open = recompui::renderer::is_rt64_inspector_open();
    const bool menu_open = recomp_config_open() ||
                           recompui::is_context_capturing_input() ||
                           inspector_open;
    if (menu_open && g_mouse_grabbed.load(std::memory_order_relaxed)) {
        set_mouse_grabbed(false);
    }
    SDL_Event event{};
    while (SDL_PollEvent(&event)) {
        // Official bind + RmlUi queue. This port owns SDL_PollEvent, so the
        // frontend handle_events() never runs; call the filter here instead
        // of a second queue_event (that would double-fire Accept / Enter).
        recompinput::sdl_event_filter(nullptr, &event);
        if (recompinput::binding::is_binding()) {
            continue;
        }

        if (event.type == SDL_QUIT) {
            ultramodern::quit();
            continue;
        }

        bool consumed_by_rt64 = false;
        if (event.type == SDL_KEYDOWN && event.key.repeat == 0) {
            if (event.key.keysym.scancode == SDL_SCANCODE_F1) {
                set_mouse_grabbed(false);
                if (!recompui::renderer::toggle_rt64_inspector()) {
                    turok2_debug_set_status(
                        "F1 editor so D3D12/Vulkan — neste Mac use F2 para dump");
                }
                consumed_by_rt64 = true;
            } else if (event.key.keysym.scancode == SDL_SCANCODE_F2) {
                set_mouse_grabbed(false);
                if (recompui::renderer::toggle_texture_dump()) {
                    turok2_debug_set_status(
                        "F2 dump ON em runtime-data/texture-dumps — F2 para parar");
                } else {
                    turok2_debug_set_status("F2 dump OFF");
                }
                consumed_by_rt64 = true;
            }
        }
        if (!consumed_by_rt64 && !recomp_config_open()) {
            consumed_by_rt64 = recompui::renderer::filter_sdl_event(&event);
        }
        if (consumed_by_rt64) {
            continue;
        }

        switch (event.type) {
            case SDL_CONTROLLERDEVICEADDED:
                open_first_game_controller();
                break;
            case SDL_CONTROLLERDEVICEREMOVED:
                recompinput::remove_controller_state(event.cdevice.which);
                if (game_controller != nullptr &&
                    event.cdevice.which == SDL_JoystickInstanceID(
                        SDL_GameControllerGetJoystick(game_controller))) {
                    SDL_GameControllerClose(game_controller);
                    game_controller = nullptr;
                }
                break;
            case SDL_MOUSEBUTTONDOWN:
                if (!menu_open && !g_mouse_grabbed.load(std::memory_order_relaxed)) {
                    set_mouse_grabbed(true);
                }
                break;
            case SDL_KEYDOWN:
                if (event.key.keysym.scancode == SDL_SCANCODE_F11 ||
                    (event.key.keysym.scancode == SDL_SCANCODE_RETURN &&
                     (event.key.keysym.mod & KMOD_ALT))) {
                    recompui::config::graphics::toggle_fullscreen();
                    break;
                }
                if (event.key.keysym.scancode == SDL_SCANCODE_4 &&
                    event.key.repeat == 0) {
                    set_mouse_grabbed(false);
                } else if (event.key.keysym.scancode == SDL_SCANCODE_ESCAPE) {
                    set_mouse_grabbed(false);
                } else if (event.key.keysym.scancode == SDL_SCANCODE_F10 &&
                           event.key.repeat == 0) {
                    set_mouse_grabbed(false);
                    try {
                        if (recomp_config_open()) {
                            recompui::config::close();
                        } else {
                            recompui::config::open();
                        }
                    } catch (const std::exception&) {
                    }
                } else if (event.key.repeat == 0 &&
                           (event.key.keysym.scancode == SDL_SCANCODE_F5 ||
                            event.key.keysym.scancode == SDL_SCANCODE_5 ||
                            event.key.keysym.scancode == SDL_SCANCODE_F7 ||
                            event.key.keysym.scancode == SDL_SCANCODE_7 ||
                            event.key.keysym.scancode == SDL_SCANCODE_KP_7) &&
                           !recomp_config_open()) {
                    // Save/load must work while the N64 pause layer or a
                    // capturing overlay is up. Only the Graphics modal eats
                    // these keys. Mac F7 is often a media key — 7 still loads.
                    if (event.key.keysym.scancode == SDL_SCANCODE_F5 ||
                        event.key.keysym.scancode == SDL_SCANCODE_5) {
                        turok2_debug_request_save();
                    } else {
                        turok2_debug_request_load();
                    }
                } else if (event.key.repeat == 0 && !menu_open) {
                    switch (event.key.keysym.scancode) {
                    case SDL_SCANCODE_F3:
                        turok2_debug_toggle_hud();
                        break;
                    case SDL_SCANCODE_F8:
                    case SDL_SCANCODE_BACKSPACE:
                    case SDL_SCANCODE_P:
                        turok2_debug_request_skip();
                        break;
                    case SDL_SCANCODE_F9:
                    case SDL_SCANCODE_9:
                        turok2_debug_request_confirm_a();
                        break;
                    default:
                        break;
                    }
                }
                break;
            case SDL_WINDOWEVENT:
                if (event.window.event == SDL_WINDOWEVENT_FOCUS_LOST) {
                    set_mouse_grabbed(false);
                }
                break;
            case SDL_MOUSEMOTION:
                if (!menu_open && g_mouse_grabbed.load(std::memory_order_relaxed)) {
                    // Both axes are raw angular deltas. Accumulating the pair
                    // under one lock preserves diagonal motion across threads.
                    const float base_scale = 0.0010f * get_turok_mouse_look_scale();
                    const float x_delta = static_cast<float>(event.motion.xrel) * base_scale;
                    float y_delta = static_cast<float>(event.motion.yrel) *
                        base_scale * get_mouse_vertical_scale();
                    if (get_mouse_invert_y()) {
                        y_delta = -y_delta;
                    }

                    std::lock_guard lock(g_mouse_input_mutex);
                    g_mouse_accum_x += x_delta;
                    g_mouse_accum_y += y_delta;
                }
                break;
            default:
                break;
        }
    }
    // handle_events() clears this after each poll. We own the poll, so a
    // cancelled bind used to leave skip_events stuck and the UI deaf.
    recompinput::binding::stop_skipping_events();

    static bool announced_game_start = false;
    if (!announced_game_start && ultramodern::is_game_started()) {
        announced_game_start = true;
        recompui::process_game_started();
    }

    sample_input();
}

// N64 controller button bits, as libultra defines them in os_cont.h.
enum : uint16_t {
    N64_A       = 0x8000,
    N64_B       = 0x4000,
    N64_Z       = 0x2000,
    N64_START   = 0x1000,
    N64_D_UP    = 0x0800,
    N64_D_DOWN  = 0x0400,
    N64_D_LEFT  = 0x0200,
    N64_D_RIGHT = 0x0100,
    N64_L       = 0x0020,
    N64_R       = 0x0010,
    N64_C_UP    = 0x0008,
    N64_C_DOWN  = 0x0004,
    N64_C_LEFT  = 0x0002,
    N64_C_RIGHT = 0x0001,
};

// Reporting a controller on port 1 is what makes osContInit clear err_no. While
// every port read as disconnected the game polled the pad each frame and stayed on
// its attract screen, which at least rendered.
//
// Announcing a controller used to hang the game, because it reaches the engine's
// own low level SI routines and nothing emulated the interface:
//
//   func_00289110 sets the "no save device chosen" sentinel at 0x800C2028 to -1,
//   which enables the scan in func_004211AC over all four ports. That reaches
//   func_00299A40 and func_00427F80, which stage a command block in PIF RAM, start
//   a raw transaction and then block in osRecvMesg on the SI queue waiting for a
//   completion message that never arrived.
//
//   Normal pad reads were never affected: the ELF names osContStartReadData, so
//   librecomp replaces it and posts the SI message itself. Only the Controller Pak
//   probe takes the raw path, because the ELF left those routines unnamed and they
//   were recompiled rather than replaced.
//
// src/si.cpp now implements that layer, so the transaction completes and reports
// every channel as unanswered, and the probe concludes there is no pak. Reporting
// Pak::None below keeps the two views consistent.
//
// The hang was hiding a second, larger problem. With the probe unblocked the game
// ran on into code that had never executed before and corrupted memory, zeroing the
// scheduler queue and the PIF buffer together. The cause was stray ELF symbols
// splitting functions, which left them without their epilogues; see
// tools/merge-split-funcs.py and tools/fix-lost-delay-slots.py.
//
// With those two fixed the controller path stops hanging and stops corrupting
// memory, and it renders the same frame content as the silent path. It is still not
// the default, because it now runs on into code that never executed before and
// traps there:
//
//   func_00288860 -> func_00286674 -> func_00288C80 -> func_00287ABC ->
//   func_00287248 -> func_00285CF0 -> func_0020B624 -> func_0020A994 ->
//   func_00208810, which reads a byte at 0x1 from the pointer func_002079D8 left
//   at sp+0x30 and divides 0x800B6D20 by it. The byte is zero, so the divu is
//   followed by the compiler's "break 7" trap and the process dies.
//
//   That divide only runs when the value in $s0 is negative, so it sits on a
//   failure path: something above reports an error and the descriptor is never
//   filled in. Measured over three runs each, reporting no controller survived 3/3
//   and reporting one survived 0/3, so the quiet path stays the default.
//
// Set TUROK2_ENABLE_INPUT=1 to opt into the controller path while working on that.
bool input_enabled() {
    static const bool enabled = [] {
        const char* value = SDL_getenv("TUROK2_ENABLE_INPUT");
        if (value != nullptr) {
            const bool on = value[0] != '\0' && value[0] != '0';
            std::fprintf(stderr, "Controller reporting %s (TUROK2_ENABLE_INPUT)\n",
                         on ? "enabled" : "disabled");
            return on;
        }
        std::fprintf(stderr, "Controller reporting enabled (default)\n");
        return true;
    }();
    return enabled;
}

// A note on one approach that does not work, so it is not tried again.
//
// It looked possible to report the controller to the per-frame pad reads while
// still telling osContInit that every port is empty, on the theory that only the
// osContInit answer triggers the save device scan and that serving pad reads would
// be enough to drive menus. It is not. The game gates on the controller it was
// told about at init, not on button traffic: with osContInit answering that the
// ports are empty it stops on its "NO CONTROLLER" screen and never reads a button
// meaningfully. That screen is what the 12 glyphs measured on the display list
// after the legal text actually are.
//
// So there is no way around it: the controller has to be reported for real, and
// the failure on that path has to be fixed rather than avoided.
ultramodern::input::connected_device_info_t get_connected_device_info(int controller_num) {
    if (controller_num != 0 || !input_enabled()) {
        return { ultramodern::input::Device::None, ultramodern::input::Pak::None };
    }
    // Report no pak, which has to agree with what the SI layer in src/si.cpp
    // answers. osContGetReadData turns any pak other than None into a set status
    // bit, telling the game an accessory is inserted; it then tries to talk to it
    // over raw SI, where every channel comes back flagged as unanswered. Claiming
    // a Rumble Pak here, as Zelda64Recomp does, left those two views disagreeing
    // and the game retried the CONT_CMD_WRITE_PAK probe at address 0x8001 in a
    // loop. Emulating the pak for real would mean answering its read and write
    // blocks in the PIF, which is well beyond what this game needs to boot.
    return { ultramodern::input::Device::Controller, ultramodern::input::Pak::None };
}

// Input is sampled on the main thread and published here for the game threads to
// read. Touching SDL from a game thread is not an option: SDL_PumpEvents reaches
// into Cocoa's nextEventMatchingMask, which raises an NSException and aborts the
// process when called off the main thread.
struct InputSnapshot {
    uint16_t buttons = 0;
    float stick_x = 0.0f;
    float stick_y = 0.0f;
};

std::mutex input_mutex;
InputSnapshot input_snapshot;

void publish_input_snapshot(const InputSnapshot& snapshot) {
    std::lock_guard<std::mutex> lock{ input_mutex };
    input_snapshot = snapshot;
}

void poll_input() {
    // Nothing to do. The main thread samples SDL in update_gfx.
}

bool get_input(int controller_num, uint16_t* buttons, float* x, float* y) {
    if (controller_num != 0) {
        return false;
    }

    InputSnapshot snapshot;
    {
        std::lock_guard<std::mutex> lock{ input_mutex };
        snapshot = input_snapshot;
    }

    *buttons = snapshot.buttons;
    *x = snapshot.stick_x;
    *y = snapshot.stick_y;
    *buttons |= turok2_debug_extra_buttons();

    // Synthetic input is isolated behind one explicit master switch. Merely
    // setting an old AUTO_* variable or sending a debug signal can no longer
    // affect an ordinary play session.
    if (test_input_enabled()) {
#if !defined(_WIN32)
    // Test-only input injection: SIGUSR1 pulses A and SIGUSR2 pulses Start.
    // This lets automated visual checks dismiss a modal at the exact moment it
    // appears without changing normal input behavior.
    if (debug_a_polls > 0) {
        *buttons |= N64_A;
        --debug_a_polls;
    }
    if (debug_start_polls > 0) {
        *buttons |= N64_START;
        --debug_start_polls;
    }
#endif

    // Debug aid. The crash in the Iguana logo animation only happens once
    // something presses Start to leave the attract loop, so an unattended run
    // never reaches it and the bug looks intermittent. Set TUROK2_AUTO_START to a
    // number of seconds to have Start pulsed once, which makes it reproducible
    // without continuing to skip every later logo, menu and cinematic.
    static const int auto_start_after = [] {
        const char* value = SDL_getenv("TUROK2_AUTO_START");
        return value != nullptr ? SDL_atoi(value) : 0;
    }();
    static const bool auto_start_repeat = [] {
        const char* value = SDL_getenv("TUROK2_AUTO_START_REPEAT");
        return value != nullptr && value[0] != '\0' && value[0] != '0';
    }();
    if (auto_start_after > 0) {
        const uint32_t elapsed = SDL_GetTicks();
        const uint32_t pulse_start = (uint32_t)auto_start_after * 1000u;
        const bool in_one_shot_pulse = elapsed >= pulse_start && elapsed < pulse_start + 250u;
        const bool in_repeating_debug_pulse = auto_start_repeat &&
            elapsed >= pulse_start && (elapsed / 250u) % 4u == 0u;
        if (in_one_shot_pulse || in_repeating_debug_pulse) {
            *buttons |= N64_START;
        }
    }

    // Companion automation for modal warnings (Expansion/Controller Pak),
    // which accept the N64 A button rather than Start. This is diagnostic-only
    // and remains completely inactive in normal runs.
    static const int auto_a_after = [] {
        const char* value = SDL_getenv("TUROK2_AUTO_A");
        return value != nullptr ? SDL_atoi(value) : 0;
    }();
    static const bool auto_a_repeat = [] {
        const char* value = SDL_getenv("TUROK2_AUTO_A_REPEAT");
        return value != nullptr && value[0] != '\0' && value[0] != '0';
    }();
    if (auto_a_after > 0) {
        const uint32_t elapsed = SDL_GetTicks();
        const uint32_t pulse_start = (uint32_t)auto_a_after * 1000u;
        const bool in_one_shot_pulse = elapsed >= pulse_start && elapsed < pulse_start + 250u;
        const bool in_repeating_debug_pulse = auto_a_repeat &&
            elapsed >= pulse_start && (elapsed / 250u) % 4u == 0u;
        if (in_one_shot_pulse || in_repeating_debug_pulse) {
            *buttons |= N64_A;
        }
    }
    }

    return true;
}

// Runs on the main thread only.
void sample_input() {
    if (recompui::is_context_capturing_input() ||
        recompui::renderer::is_rt64_inspector_open()) {
        push_camera_scales_from_menu();
        g_look_captured.store(false, std::memory_order_relaxed);
        g_keyboard_strafe.store(0.0f, std::memory_order_relaxed);
        g_keyboard_forward.store(0.0f, std::memory_order_relaxed);
        publish_input_snapshot({});
        return;
    }

    uint16_t pressed = 0;
    float stick_x = 0.0f;
    float stick_y = 0.0f;

    const Uint8* keys = SDL_GetKeyboardState(nullptr);
    if (keys != nullptr) {
        g_weapon_previous.store(keys[SDL_SCANCODE_Q] != 0, std::memory_order_relaxed);
        g_weapon_next.store(keys[SDL_SCANCODE_E] != 0, std::memory_order_relaxed);
    } else {
        g_weapon_previous.store(false, std::memory_order_relaxed);
        g_weapon_next.store(false, std::memory_order_relaxed);
    }

    recompinput::poll_inputs();

    bool analog_look = false;
    try {
        analog_look = recompui::config::general::get_analog_look();
    } catch (const std::exception&) {
        analog_look = true;
    }
    recompinput::set_right_analog_suppressed(analog_look);

    const bool analog_active = analog_look && game_controller != nullptr &&
        !recompinput::game_input_disabled();
    g_look_captured.store(
        g_mouse_grabbed.load(std::memory_order_relaxed) || analog_active,
        std::memory_order_relaxed);

    if (analog_active) {
        float rx = 0.0f;
        float ry = 0.0f;
        recompinput::get_right_analog(0, &rx, &ry);
        float analog_scale = get_turok_mouse_look_scale();
        if (analog_scale <= 0.001f) {
            analog_scale = 1.0f;
        }
        const float look_scale = 0.04f * analog_scale;
        if (rx != 0.0f || ry != 0.0f) {
            const float x_delta = rx * look_scale;
            float y_delta = ry * look_scale * get_mouse_vertical_scale();
            if (get_mouse_invert_y()) {
                y_delta = -y_delta;
            }
            std::lock_guard lock(g_mouse_input_mutex);
            g_mouse_accum_x += x_delta;
            g_mouse_accum_y += y_delta;
        }
    }

    uint16_t n64_buttons = 0;
    float n64_x = 0.0f;
    float n64_y = 0.0f;
    recompinput::profiles::get_n64_input(0, &n64_buttons, &n64_x, &n64_y);
    pressed |= n64_buttons;

    const int kb_profile = recompinput::profiles::get_sp_keyboard_profile_index();
    auto kb_axis = [kb_profile](recompinput::GameInput pos, recompinput::GameInput neg) {
        float plus = 0.0f;
        float minus = 0.0f;
        for (size_t i = 0; i < recompinput::num_bindings_per_input; i++) {
            plus += recompinput::get_input_analog(
                0, recompinput::profiles::get_input_binding(kb_profile, pos, i));
            minus += recompinput::get_input_analog(
                0, recompinput::profiles::get_input_binding(kb_profile, neg, i));
        }
        return std::clamp(plus, 0.0f, 1.0f) - std::clamp(minus, 0.0f, 1.0f);
    };
    float kb_strafe = kb_axis(recompinput::GameInput::X_AXIS_POS, recompinput::GameInput::X_AXIS_NEG);
    float kb_forward = kb_axis(recompinput::GameInput::Y_AXIS_POS, recompinput::GameInput::Y_AXIS_NEG);
    n64_x -= kb_strafe;
    n64_y -= kb_forward;

    const bool mouse_grabbed = g_mouse_grabbed.load(std::memory_order_relaxed);
    if (mouse_grabbed) {
        if (kb_strafe != 0.0f && kb_forward != 0.0f) {
            constexpr float diagonal = 0.70710678f;
            kb_strafe *= diagonal;
            kb_forward *= diagonal;
        }
        g_keyboard_strafe.store(kb_strafe, std::memory_order_relaxed);
        g_keyboard_forward.store(kb_forward, std::memory_order_relaxed);
    } else {
        g_keyboard_strafe.store(0.0f, std::memory_order_relaxed);
        g_keyboard_forward.store(0.0f, std::memory_order_relaxed);
        if (kb_strafe < -0.4f) { pressed |= N64_D_LEFT; }
        if (kb_strafe > 0.4f)  { pressed |= N64_D_RIGHT; }
        if (kb_forward > 0.4f) { pressed |= N64_D_UP; }
        if (kb_forward < -0.4f){ pressed |= N64_D_DOWN; }
    }

    if (n64_x != 0.0f || n64_y != 0.0f) {
        stick_x = n64_x;
        stick_y = n64_y;
    }

    if (stick_x < -1.0f) { stick_x = -1.0f; }
    if (stick_x > 1.0f)  { stick_x = 1.0f; }
    if (stick_y < -1.0f) { stick_y = -1.0f; }
    if (stick_y > 1.0f)  { stick_y = 1.0f; }

    push_camera_scales_from_menu();
    publish_input_snapshot({ pressed, stick_x, stick_y });
}

void set_rumble(int, bool) {
    // No Rumble Pak is reported, so nothing to do.
}

std::unique_ptr<ultramodern::renderer::RendererContext> create_renderer(
    uint8_t* rdram, ultramodern::renderer::WindowHandle handle,
    bool developer_mode) {
    auto presentation_mode = ultramodern::renderer::PresentationMode::SkipBuffering;
    if (const char* mode = std::getenv("TUROK2_PRESENTATION_MODE")) {
        if (std::strcmp(mode, "console") == 0) {
            presentation_mode = ultramodern::renderer::PresentationMode::Console;
        }
        else if (std::strcmp(mode, "early") == 0) {
            presentation_mode = ultramodern::renderer::PresentationMode::PresentEarly;
        }
    }
    return recompui::renderer::create_render_context(
        // Unique 60 Hz display lists presented as-is (no RT64 interpolation).
        rdram, handle, presentation_mode,
        developer_mode);
}

RspExitReason dummy_rsp(uint8_t*, uint32_t) {
    // Graphics tasks are sent directly to RT64. This fallback keeps bring-up
    // deterministic until Turok 2's actual non-graphics task is identified.
    return RspExitReason::Broke;
}

uint32_t host_rdram_offset(uint32_t address) {
    if ((address >= RECOMP_USEG_BANKS_START) &&
        (address < RECOMP_USEG_BANKS_END)) {
        return RECOMP_USEG_BANKS_BASE + (address - RECOMP_USEG_BANKS_START);
    }
    return address & 0x1FFFFFFFU;
}

uint32_t read_rdram_word(const uint8_t* rdram, uint32_t address) {
    const uint32_t physical = host_rdram_offset(address);
    uint32_t word = 0;
    for (uint32_t byte = 0; byte < 4; ++byte) {
        word = (word << 8) | rdram[(physical + byte) ^ 3U];
    }
    return word;
}

size_t count_nonzero_rdram(const uint8_t* rdram, uint32_t address, uint32_t size) {
    const uint32_t physical = host_rdram_offset(address);
    size_t nonzero = 0;
    for (uint32_t byte = 0; byte < size; ++byte) {
        nonzero += rdram[(physical + byte) ^ 3U] != 0;
    }
    return nonzero;
}

struct AudioDmaCommand {
    uint8_t opcode;
    uint32_t address;
    uint16_t dmem_address;
    uint16_t size;
    size_t nonzero_before;
};

std::vector<AudioDmaCommand> inspect_audio_commands(const uint8_t* rdram, bool report) {
    std::array<uint32_t, 16> segments{};
    std::array<uint32_t, 16> opcode_counts{};
    std::vector<AudioDmaCommand> dma_commands;
    uint16_t input_dmem = 0;
    uint16_t output_dmem = 0;
    uint16_t buffer_size = 0;
    const uint32_t command_base = current_audio_commands & 0x1FFFFFFFU;

    for (uint32_t offset = 0; (offset + 8) <= current_audio_command_size; offset += 8) {
        const uint32_t word0 = read_rdram_word(rdram, command_base + offset);
        const uint32_t word1 = read_rdram_word(rdram, command_base + offset + 4);
        const uint8_t opcode = static_cast<uint8_t>(word0 >> 24);
        if (opcode < opcode_counts.size()) {
            opcode_counts[opcode]++;
        }

        if (opcode == 7) { // A_SEGMENT
            segments[(word1 >> 24) & 0x0F] = word1 & 0x00FFFFFFU;
        }
        else if (opcode == 8) { // A_SETBUFF
            input_dmem = static_cast<uint16_t>(word0);
            output_dmem = static_cast<uint16_t>(word1 >> 16);
            buffer_size = static_cast<uint16_t>(word1);
        }
        else if ((opcode == 4) || (opcode == 6)) { // A_LOADBUFF / A_SAVEBUFF
            const uint8_t segment = static_cast<uint8_t>(word1 >> 24) & 0x0F;
            const uint32_t effective_address =
                (segments[segment] + (word1 & 0x00FFFFFFU)) & 0x1FFFFFFFU;
            const uint16_t dmem_address = (opcode == 4) ? input_dmem : output_dmem;
            dma_commands.push_back({
                opcode,
                effective_address,
                dmem_address,
                buffer_size,
                count_nonzero_rdram(rdram, effective_address, buffer_size),
            });
        }
    }

    if (report) {
        std::fprintf(stderr, "[audio] ABI histogram:");
        for (size_t opcode = 0; opcode < opcode_counts.size(); ++opcode) {
            if (opcode_counts[opcode] != 0) {
                std::fprintf(stderr, " %zu=%" PRIu32, opcode, opcode_counts[opcode]);
            }
        }
        std::fprintf(stderr, "\n");
        for (size_t index = 0; index < dma_commands.size(); ++index) {
            const AudioDmaCommand& command = dma_commands[index];
            std::fprintf(stderr,
                "[audio] %s[%zu] rdram=%08" PRIX32 " dmem=%04X size=%u nonzero_before=%zu\n",
                command.opcode == 4 ? "LOAD" : "SAVE", index,
                command.address, command.dmem_address, command.size,
                command.nonzero_before);
        }
    }

    return dma_commands;
}

RspExitReason turok2_audio_rsp(uint8_t* rdram, uint32_t ucode_addr) {
    const uint32_t physical = ucode_addr & 0x1FFFFFFFU;
    // N64ModernRuntime has already loaded the task's audio data bank at DMEM
    // zero. Keep the OSTask pointer authoritative: shifting the bank changes
    // every coefficient/state offset and can leave vector loops unterminated.
    dma_rdram_to_dmem(rdram, 0, current_audio_ucode_data, 0xF80 - 1);
    static bool reported_audio_layout = false;
    if (!reported_audio_layout &&
        (std::getenv("TUROK2_AUDIO_DIAGNOSTICS") != nullptr)) {
        reported_audio_layout = true;
        const uint32_t command_physical = current_audio_commands & 0x1FFFFFFFU;
        std::fprintf(stderr, "[audio] dispatch@0010:");
        for (uint32_t i = 0; i < 16; ++i) {
            std::fprintf(stderr, " %04X", RSP_MEM_HU_LOAD(0x10 + i * 2, 0));
        }
        std::fprintf(stderr, "\n[audio] dispatch@036E:");
        for (uint32_t i = 0; i < 16; ++i) {
            std::fprintf(stderr, " %04X", RSP_MEM_HU_LOAD(0x36E + i * 2, 0));
        }
        std::fprintf(stderr, "\n[audio] constants C0=%08X C4=%08X commands:",
            RSP_MEM_W_LOAD(0xC0, 0), RSP_MEM_W_LOAD(0xC4, 0));
        for (uint32_t i = 0; i < 8; ++i) {
            uint32_t word = 0;
            for (uint32_t b = 0; b < 4; ++b) {
                word = (word << 8) | rdram[(command_physical + i * 4 + b) ^ 3U];
            }
            std::fprintf(stderr, " %08" PRIX32, word);
        }
        std::fprintf(stderr, "\n");
    }
    static bool dumped_ucode = false;
    if (!dumped_ucode &&
        (std::getenv("TUROK2_AUDIO_DIAGNOSTICS") != nullptr)) {
        dumped_ucode = true;
        std::array<uint8_t, 0x1000> logical_ucode{};
        for (size_t i = 0; i < logical_ucode.size(); ++i) {
            logical_ucode[i] = rdram[(physical + static_cast<uint32_t>(i)) ^ 3U];
        }
        std::ofstream output("audio-ucode-runtime.bin", std::ios::binary);
        output.write(reinterpret_cast<const char*>(logical_ucode.data()),
                     static_cast<std::streamsize>(logical_ucode.size()));
        std::fprintf(stderr,
            "[audio] dumped runtime ucode at %08" PRIX32
            " to audio-ucode-runtime.bin\n", ucode_addr);
    }
    static uint64_t audio_tasks = 0;
    audio_tasks++;
    const bool report_dma = (std::getenv("TUROK2_AUDIO_DIAGNOSTICS") != nullptr) &&
        ((audio_tasks <= 8) || ((audio_tasks % 120) == 0));
    const std::vector<AudioDmaCommand> dma_commands = inspect_audio_commands(rdram, report_dma);
    RspExitReason result = aspMain(rdram, ucode_addr);
    if (report_dma) {
        for (size_t index = 0; index < dma_commands.size(); ++index) {
            const AudioDmaCommand& command = dma_commands[index];
            if (command.opcode != 6) {
                continue;
            }
            std::fprintf(stderr,
                "[audio] SAVE[%zu] after nonzero=%zu/%u (before=%zu)\n",
                index, count_nonzero_rdram(rdram, command.address, command.size),
                command.size, command.nonzero_before);
        }
    }
    static bool reported_commands = false;
    if (!reported_commands &&
        (std::getenv("TUROK2_AUDIO_DIAGNOSTICS") != nullptr)) {
        reported_commands = true;
        const uint32_t command_physical = current_audio_commands & 0x1FFFFFFFU;
        size_t nonzero_command_bytes = 0;
        for (uint32_t i = 0; i < current_audio_command_size; ++i) {
            nonzero_command_bytes += rdram[(command_physical + i) ^ 3U] != 0;
        }
        size_t nonzero_dmem_bytes = 0;
        for (size_t i = 0; i < 0x1000; ++i) {
            nonzero_dmem_bytes += dmem[i] != 0;
        }
        std::fprintf(stderr,
            "[audio] aspMain result=%d commands_nonzero=%zu/%" PRIu32
            " dmem_nonzero=%zu/4096\n",
            static_cast<int>(result), nonzero_command_bytes,
            current_audio_command_size, nonzero_dmem_bytes);
    }
    return result;
}

RspUcodeFunc* get_rsp_microcode(const OSTask* task) {
    if (task->t.type == M_AUDTASK) {
        current_audio_commands = task->t.data_ptr;
        current_audio_command_size = task->t.data_size;
        current_audio_ucode_data = task->t.ucode_data;
        static bool reported_audio_task = false;
        if (!reported_audio_task &&
            (std::getenv("TUROK2_AUDIO_DIAGNOSTICS") != nullptr)) {
            reported_audio_task = true;
            std::fprintf(stderr,
                "[audio] OSTask boot=%08" PRIX32 "/%" PRIu32
                " ucode=%08" PRIX32 "/%" PRIu32
                " data=%08" PRIX32 "/%" PRIu32
                " commands=%08" PRIX32 "/%" PRIu32 "\n",
                task->t.ucode_boot, task->t.ucode_boot_size,
                task->t.ucode, task->t.ucode_size,
                task->t.ucode_data, task->t.ucode_data_size,
                task->t.data_ptr, task->t.data_size);
        }
        return turok2_audio_rsp;
    }

    std::fprintf(stderr, "RSP nao-grafico temporariamente ignorado (tipo %" PRIu32 ")\n",
                 task->t.type);
    return dummy_rsp;
}

void message_box(const char* message) {
    std::fprintf(stderr, "Turok2Recompiled: %s\n", message);
}

// Builds the first screen the player sees. The framework's default callback
// would work, but it labels the menu from the generic game entry and leaves
// the placeholder title in place.
void turok2_on_launcher_init(recompui::LauncherMenu* menu) {
    const recomp::GameEntry& entry = supported_games.front();
    recompui::GameOptionsMenu* options = menu->init_game_options_menu(
        entry.game_id,
        entry.mod_game_id,
        entry.display_name,
        entry.thumbnail_bytes,
        recompui::GameOptionsMenuLayout::Left);

    recompui::GameOption* play = options->add_start_game_or_load_rom_option(
        "Carregar ROM", "Jogar");
    play->set_primary_action(true);
    options->add_setup_controls_option("Controles");
    options->add_settings_option("Opcoes");
    options->add_mods_option("Mods");
    options->add_exit_option("Sair");

    menu->remove_default_title();

    recompui::Element* background = menu->get_background_wrapper();
    recompui::ContextId context = recompui::get_current_context();
    static constexpr const char* kArtSrc = "turok2-launcher-art";
    static bool art_registered = false;
    if (!art_registered) {
        const std::filesystem::path art_file =
            recompui::file::get_asset_path("launcher-background.png");
        std::ifstream stream(art_file, std::ios::binary);
        if (stream) {
            const std::vector<char> bytes{std::istreambuf_iterator<char>(stream),
                                          std::istreambuf_iterator<char>()};
            if (!bytes.empty()) {
                recompui::queue_image_from_bytes_file(kArtSrc, bytes);
                art_registered = true;
            }
        }
        if (!art_registered) {
            std::fprintf(stderr, "[ui] arte do launcher nao carregada: %s\n",
                         art_file.string().c_str());
        }
    }

    recompui::Image* art =
        context.create_element<recompui::Image>(background, kArtSrc);
    art->set_position(recompui::Position::Absolute);
    art->set_top(0);
    art->set_left(0);
    art->set_width(100.0f, recompui::Unit::Percent);
    art->set_height(100.0f, recompui::Unit::Percent);

    recompui::Element* scrim = context.create_element<recompui::Element>(background);
    scrim->set_position(recompui::Position::Absolute);
    scrim->set_top(0);
    scrim->set_left(0);
    scrim->set_bottom(0);
    scrim->set_width(36.0f, recompui::Unit::Percent);
    scrim->set_background_color(rgba(8, 6, 4, 230));

    recompui::Element* menu_container = menu->get_menu_container();
    menu_container->set_top(0);
    menu_container->set_left(0);
    menu_container->set_right(0);
    menu_container->set_bottom(0);

    recompui::Element* rail = context.create_element<recompui::Element>(menu_container);
    rail->set_position(recompui::Position::Absolute);
    rail->set_left(48.0f);
    rail->set_bottom(56.0f);
    rail->set_width(400.0f);
    rail->set_display(recompui::Display::Flex);
    rail->set_flex_direction(recompui::FlexDirection::Column);
    rail->set_align_items(recompui::AlignItems::FlexStart);
    rail->set_gap(28.0f);

    recompui::Element* title_block = context.create_element<recompui::Element>(rail);
    title_block->set_display(recompui::Display::Flex);
    title_block->set_flex_direction(recompui::FlexDirection::Column);
    title_block->set_align_items(recompui::AlignItems::FlexStart);
    title_block->set_gap(8.0f);
    title_block->set_width(100.0f, recompui::Unit::Percent);

    recompui::Label* title = context.create_element<recompui::Label>(
        title_block, "TUROK 2", recompui::theme::Typography::Header1);
    title->set_color(recompui::theme::color::Text);

    recompui::Element* rule = context.create_element<recompui::Element>(title_block);
    rule->set_width(72.0f);
    rule->set_height(3.0f);
    rule->set_background_color(recompui::theme::color::Primary);

    recompui::Label* subtitle = context.create_element<recompui::Label>(
        title_block, "Seeds of Evil  ·  Recompiled",
        recompui::theme::Typography::LabelMD);
    subtitle->set_color(recompui::theme::color::Primary);

    std::u8string rom_id = entry.game_id;
    const bool rom_ready = recomp::is_rom_valid(rom_id);
    recompui::Label* status = context.create_element<recompui::Label>(
        title_block,
        rom_ready ? "ROM NTSC-U pronta" : "Precisa da ROM NTSC-U de Turok 2",
        recompui::theme::Typography::Body);
    status->set_color(recompui::theme::color::TextDim);

    options->set_parent(rail);
    options->set_position(recompui::Position::Relative);
    options->set_left(0);
    options->set_bottom(0);
    options->set_width(100.0f, recompui::Unit::Percent);
    options->set_align_items(recompui::AlignItems::Stretch);
    options->set_gap(4.0f);
}
}

int main(int argc, char** argv) {
#if !defined(_WIN32)
    if (test_input_enabled()) {
        std::signal(SIGUSR1, debug_a_signal);
        std::signal(SIGUSR2, debug_start_signal);
        std::fprintf(stderr, "Test input injection enabled (TUROK2_TEST_INPUT)\n");
    }
    std::signal(SIGSEGV, crash_signal);
    std::signal(SIGBUS, crash_signal);
    std::signal(SIGABRT, crash_signal);
#endif
    // A ROM on the command line is the developer fast path: validate it and
    // boot straight in, skipping the launcher. Shipping runs pass no argument
    // and get the launcher, which owns ROM selection from then on.
    const bool have_cli_rom = argc > 1;
    const std::filesystem::path rom_path =
        have_cli_rom ? std::filesystem::path(argv[1]) : std::filesystem::path();

    recompui::programconfig::set_program_name("Turok 2: Recompiled");
    recompui::programconfig::set_program_id(u8"turok2-recompiled");
    apply_turok2_ui_theme();

    // Standard per-user application folder, with portable.txt support, instead
    // of the bring-up path under build-native. Saves, settings and the stored
    // ROM now survive a rebuild and land where a shipped port puts them.
    // Derived from the program id, so it has to follow the two calls above.
    const std::filesystem::path config_path = recompui::file::get_app_folder_path();
    std::filesystem::create_directories(config_path);
    recomp::register_config_path(config_path);
    recompui::register_primary_font("LatoLatin-Regular.ttf", "LatoLatin");
    // Turok 2 is one player here. Without this the controls page shows the
    // four-player assignment cards, and every Edit Profile stays disabled.
    recompinput::players::set_single_player_mode(true);
    register_turok2_default_keyboard();
    recompui::config::create_general_tab({
        .has_mouse_sensitivity = true,
        .has_analog_look = true,
        .mouse_sensitivity_default = 50.0,
        .joystick_deadzone_default = 20.0,
    }, "Geral");
    recompui::config::create_controls_tab("Controles");
    register_turok2_game_inputs();
    recompui::config::create_graphics_tab("Video");
    recompui::config::create_sound_tab("Audio");
    recompui::config::create_mods_tab("Mods");
    recompui::config::finalize();
    turok2_repair_hollow_keyboard_profile();
    recompui::register_present_overlay(&turok2_debug_present);

    open_first_game_controller();

    const std::u8string game_id = u8"turok2.n64.us.1.0";
    recomp::GameEntry game{
        .rom_hash = 0xC8A153E0C80403AAULL,
        .internal_name = "Turok 2: Seeds of Ev",
        .display_name = "Turok 2: Seeds of Evil",
        .game_id = game_id,
        .mod_game_id = "turok2",
        .save_type = recomp::SaveType::AllowAll,
        .is_enabled = true,
        .has_compressed_code = false,
        .entrypoint_address = get_entrypoint_address(),
        .entrypoint = recomp_entrypoint,
        .on_init_callback = turok2_on_init,
        // Every game thread starts from a fresh context that defaults to FR = 0,
        // so the FR bit has to be raised again for each one.
        .thread_create_callback = turok2_on_thread_create,
    };
    supported_games.emplace_back(game);
    recomp::register_game(supported_games.front());
    register_turok2_sections();

    // Without a callback the launcher still builds, but with the framework's
    // generic title. This gives it the game's own name and artwork.
    recompui::register_launcher_init_callback(turok2_on_launcher_init);

    if (have_cli_rom) {
        std::u8string selected_id = game_id;
        const auto result = recomp::select_rom(rom_path, selected_id);
        if (result != recomp::RomValidationError::Good) {
            // Fall through to the launcher rather than exiting. A bad path on
            // the command line is a typo, not a reason to deny the user the
            // ROM picker.
            std::fprintf(stderr,
                         "ROM da linha de comando recusada (erro %d): %s — abrindo o launcher\n",
                         static_cast<int>(result), rom_path.string().c_str());
        }
        else {
            recomp::start_game(game_id, {});
        }
    }

    recomp::Configuration config{
        .project_version = {0, 1, 0, ""},
        .rsp_callbacks = {.get_rsp_microcode = get_rsp_microcode},
        .renderer_callbacks = {.create_render_context = create_renderer},
        .audio_callbacks = {
            .queue_samples = queue_audio_samples,
            .get_frames_remaining = get_audio_frames_remaining,
            .set_frequency = set_audio_frequency,
        },
        // These have to travel through the configuration rather than a direct
        // ultramodern::input::set_callbacks call, because ultramodern::set_callbacks
        // installs whatever the configuration carries and would otherwise overwrite
        // an earlier registration with empty function pointers. With them empty
        // every port reads as disconnected, osContInit leaves err_no as
        // CONT_NO_RESPONSE_ERROR and no button ever reaches the game.
        .input_callbacks = {
            .poll_input = poll_input,
            .get_input = get_input,
            .set_rumble = set_rumble,
            .get_connected_device_info = get_connected_device_info,
        },
        .gfx_callbacks = {
            .create_gfx = create_gfx,
            .create_window = create_window,
            .update_gfx = update_gfx,
        },
        .error_handling_callbacks = {.message_box = message_box},
    };
    register_turok2_texture_pack_content();
    recomp::start(config);

#if defined(__APPLE__)
    if (metal_view != nullptr) {
        SDL_Metal_DestroyView(metal_view);
    }
#endif
    if (window != nullptr) {
        SDL_DestroyWindow(window);
    }
    if (audio_device != 0) {
        SDL_CloseAudioDevice(audio_device);
        audio_device = 0;
    }
    SDL_Quit();
    return EXIT_SUCCESS;
}
