#include "debug_tools.h"

#include "recomp.h"
#include "recompui/recompui.h"
#include "ui_element.h"
#include "ultramodern/ultra64.h"

#include <atomic>
#include <cstddef>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <functional>
#include <mutex>
#include <string>
#include <vector>

namespace {

constexpr uint32_t kCinemaObjectPtr = 0x800C1BB0u;
constexpr uint32_t kN64Start = 0x1000u;
constexpr uint32_t kN64A = 0x8000u;
constexpr uint32_t kRdramBytes = 0x800000u;
constexpr uint32_t kUsegBytes = 0x500000u;
constexpr uint32_t kUsegHost = 0x00B00000u;
constexpr uint32_t kMagic = 0x54325153u; // "T2QS"
constexpr uint32_t kVersion = 1;

std::atomic<int> g_skip_pulses{0};
std::atomic<int> g_a_pulses{0};
std::atomic<bool> g_want_skip{false};
std::atomic<bool> g_want_save{false};
std::atomic<bool> g_want_load{false};
// Off by default: this is bring-up tooling, not part of the shipping UI. F3
// brings it up when a session needs it.
std::atomic<bool> g_hud_on{false};
std::atomic<int> g_cinema{0};
std::atomic<uint32_t> g_updates{0};

std::mutex g_status_mutex;
std::string g_status = "Esc/F10 menu   Backspace/P skip   5 save   7 load   F3 HUD";
std::string g_hud_last_text;

recompui::ContextId g_hud_context = recompui::ContextId::null();
recompui::Element* g_hud_label = nullptr;
bool g_hud_failed = false;

std::filesystem::path save_path() {
    return std::filesystem::current_path() / "saves" / "quick.t2sav";
}

float load_f32(uint8_t* rdram, uint32_t addr) {
    const uint32_t bits = MEM_W(static_cast<int32_t>(addr), 0);
    float value = 0.0f;
    std::memcpy(&value, &bits, sizeof(value));
    return value;
}

void store_f32(uint8_t* rdram, uint32_t addr, float value) {
    uint32_t bits = 0;
    std::memcpy(&bits, &value, sizeof(bits));
    MEM_W(static_cast<int32_t>(addr), 0) = bits;
}

void set_status(const std::string& text) {
    std::lock_guard<std::mutex> lock(g_status_mutex);
    g_status = text;
    std::fprintf(stderr, "[debug] %s\n", text.c_str());
}

std::string status_copy() {
    std::lock_guard<std::mutex> lock(g_status_mutex);
    return g_status;
}

void skip_cinema(uint8_t* rdram) {
    const uint32_t object = MEM_W(static_cast<int32_t>(kCinemaObjectPtr), 0);
    if ((object < 0x80000000u) || (object >= 0x80800000u)) {
        return;
    }
    const float end = load_f32(rdram, object + 0x34u);
    if (!(end > 0.0f) || !(end < 1.0e6f)) {
        return;
    }
    store_f32(rdram, object + 0x1Cu, end + 1.0f);
}

bool write_block(std::ofstream& out, const uint8_t* data, uint32_t size) {
    out.write(reinterpret_cast<const char*>(data), static_cast<std::streamsize>(size));
    return static_cast<bool>(out);
}

bool read_block(std::ifstream& in, uint8_t* data, uint32_t size) {
    in.read(reinterpret_cast<char*>(data), static_cast<std::streamsize>(size));
    return static_cast<bool>(in) && (in.gcount() == static_cast<std::streamsize>(size));
}

bool guest_ram(uint32_t addr) {
    return addr >= 0x80000000u && addr < 0x80800000u;
}

uint8_t* guest_host(uint8_t* rdram, uint32_t addr) {
    return rdram + (addr - 0x80000000u);
}

bool host_thread_context(const UltraThreadContext* context) {
    const uintptr_t value = reinterpret_cast<uintptr_t>(context);
    if (value < 0x100000000ull || (value & 7ull) != 0ull) {
        return false;
    }
    const uint32_t low = static_cast<uint32_t>(value);
    if (low >= 0x80000000u && low < 0x80800000u) {
        return false;
    }
    return true;
}

bool looks_like_osthread(uint8_t* rdram, uint32_t addr) {
    if (!guest_ram(addr) || (addr & 7u) != 0u) {
        return false;
    }
    if (addr + static_cast<uint32_t>(sizeof(OSThread)) > 0x80800000u) {
        return false;
    }
    const OSThread* thread = reinterpret_cast<const OSThread*>(guest_host(rdram, addr));
    if (thread->id < 0 || thread->id > 256) {
        return false;
    }
    if (thread->priority < -1 || thread->priority > 255) {
        return false;
    }
    if (thread->state > 4) {
        return false;
    }
    if (!host_thread_context(thread->context)) {
        return false;
    }
    // T2 engine stacks sit in 0x800Cxxxx–0x8012xxxx (see [thread:stack]).
    const uint32_t sp = static_cast<uint32_t>(thread->sp);
    if (sp < 0x800C0000u || sp > 0x80128000u) {
        return false;
    }
    const uint32_t next = static_cast<uint32_t>(thread->next);
    if (next != 0u && !guest_ram(next)) {
        return false;
    }
    const uint32_t queue = static_cast<uint32_t>(thread->queue);
    if (queue != 0u && queue != static_cast<uint32_t>(-1) && !guest_ram(queue)) {
        return false;
    }
    return true;
}

struct LiveOsBlock {
    uint32_t addr;
    uint32_t size;
    std::vector<uint8_t> bytes;
};

void add_live_block(std::vector<LiveOsBlock>& blocks, uint8_t* rdram,
                    uint32_t addr, uint32_t size) {
    if (!guest_ram(addr) || size == 0u || addr + size > 0x80800000u) {
        return;
    }
    for (const LiveOsBlock& existing : blocks) {
        if (existing.addr == addr && existing.size == size) {
            return;
        }
    }
    LiveOsBlock block;
    block.addr = addr;
    block.size = size;
    block.bytes.resize(size);
    std::memcpy(block.bytes.data(), guest_host(rdram, addr), size);
    blocks.push_back(std::move(block));
}

std::vector<LiveOsBlock> snapshot_live_os(uint8_t* rdram) {
    std::vector<LiveOsBlock> blocks;
    for (uint32_t addr = 0x80000000u; addr + sizeof(OSThread) <= 0x80800000u;
         addr += 4u) {
        if (!looks_like_osthread(rdram, addr)) {
            continue;
        }
        add_live_block(blocks, rdram, addr,
                       static_cast<uint32_t>(sizeof(OSThread)));
        const OSThread* thread =
            reinterpret_cast<const OSThread*>(guest_host(rdram, addr));
        const uint32_t queue = static_cast<uint32_t>(thread->queue);
        if (guest_ram(queue)) {
            add_live_block(blocks, rdram, queue, 4u);
        }
        addr += static_cast<uint32_t>(sizeof(OSThread)) - 4u;
    }
    return blocks;
}

void restore_live_os(uint8_t* rdram, const std::vector<LiveOsBlock>& blocks) {
    for (const LiveOsBlock& block : blocks) {
        std::memcpy(guest_host(rdram, block.addr), block.bytes.data(),
                    block.size);
    }
}

void save_quick(uint8_t* rdram) {
    const auto path = save_path();
    std::error_code ec;
    std::filesystem::create_directories(path.parent_path(), ec);
    std::ofstream out(path, std::ios::binary | std::ios::trunc);
    if (!out) {
        set_status("F5 falhou: nao deu para criar saves/quick.t2sav");
        return;
    }
    const uint32_t magic = kMagic;
    const uint32_t version = kVersion;
    out.write(reinterpret_cast<const char*>(&magic), 4);
    out.write(reinterpret_cast<const char*>(&version), 4);
    out.write(reinterpret_cast<const char*>(&kRdramBytes), 4);
    out.write(reinterpret_cast<const char*>(&kUsegBytes), 4);
    if (!write_block(out, rdram, kRdramBytes) ||
        !write_block(out, rdram + kUsegHost, kUsegBytes)) {
        set_status("F5 falhou ao escrever o save");
        return;
    }
    set_status("F5 gravou Adia em saves/quick.t2sav — F7 carrega");
}

void load_quick(uint8_t* rdram) {
    const auto path = save_path();
    std::ifstream in(path, std::ios::binary);
    if (!in) {
        set_status("F7: nenhum save. Chega em Adia e aperta F5");
        return;
    }
    uint32_t magic = 0;
    uint32_t version = 0;
    uint32_t rdram_bytes = 0;
    uint32_t useg_bytes = 0;
    in.read(reinterpret_cast<char*>(&magic), 4);
    in.read(reinterpret_cast<char*>(&version), 4);
    in.read(reinterpret_cast<char*>(&rdram_bytes), 4);
    in.read(reinterpret_cast<char*>(&useg_bytes), 4);
    if (!in || magic != kMagic || version != kVersion ||
        rdram_bytes != kRdramBytes || useg_bytes != kUsegBytes) {
        set_status("F7: save invalido");
        return;
    }
    const std::vector<LiveOsBlock> live_os = snapshot_live_os(rdram);
    if (live_os.size() < 4u || live_os.size() > 24u) {
        std::fprintf(stderr,
            "[save] F7 refused: live OS scan found %zu blocks (want 4-24)\n",
            live_os.size());
        set_status("F7 abortado: scan de threads OS falhou");
        return;
    }
    if (!read_block(in, rdram, kRdramBytes) ||
        !read_block(in, rdram + kUsegHost, kUsegBytes)) {
        set_status("F7 falhou ao ler o save");
        return;
    }
    restore_live_os(rdram, live_os);
    set_status("F7 carregou o save — deveria estar em Adia");
    std::fprintf(stderr, "[save] F7 restored RDRAM, kept %zu live OS thread blocks\n",
                 live_os.size());
}

void with_hud_context(const std::function<void()>& fn) {
    recompui::ContextId prev = recompui::try_close_current_context();
    g_hud_context.open();
    fn();
    g_hud_context.close();
    if (prev != recompui::ContextId::null()) {
        prev.open();
    }
}

void ensure_hud() {
    if (g_hud_failed || g_hud_context != recompui::ContextId::null()) {
        return;
    }
    recompui::ContextId prev = recompui::try_close_current_context();
    g_hud_context = recompui::create_context();
    g_hud_context.set_captures_input(false);
    g_hud_context.set_captures_mouse(false);
    g_hud_context.open();
    recompui::Element* root = g_hud_context.get_root_element();
    g_hud_label = g_hud_context.create_element<recompui::Element>(
        root, 0, "div", true);
    g_hud_label->set_position(recompui::Position::Absolute);
    g_hud_label->set_left(18.0f);
    g_hud_label->set_top(16.0f);
    g_hud_label->set_padding(12.0f);
    g_hud_label->set_border_radius(8.0f);
    g_hud_label->set_background_color(recompui::Color{0, 0, 0, 170});
    g_hud_label->set_color(recompui::Color{240, 240, 235, 255});
    g_hud_label->set_font_family(recompui::get_primary_font_family());
    g_hud_label->set_font_size(18.0f);
    g_hud_label->set_line_height(24.0f);
    g_hud_label->set_white_space(recompui::WhiteSpace::Pre);
    g_hud_label->set_text(
        "DEBUG\n"
        "Esc ou F10  menu grafico\n"
        "F2 dump texturas\n"
        "Backspace ou P  pular cinema\n"
        "9  confirmar menu\n"
        "5 gravar    7 carregar\n"
        "F3 esconder HUD");
    g_hud_context.close();
    if (prev != recompui::ContextId::null()) {
        prev.open();
    }
    recompui::show_context(g_hud_context, "");
}

void refresh_hud() {
    if (g_hud_context == recompui::ContextId::null() || g_hud_label == nullptr) {
        return;
    }
    const int cinema = g_cinema.load(std::memory_order_relaxed);
    const std::string note = status_copy();
    // 120 is the shipping cadence. TUROK2_UNIQUE_60=1 is the opt-out.
    const char* sixty = std::getenv("TUROK2_UNIQUE_60");
    const bool show_120 = !(sixty != nullptr && sixty[0] != '\0' &&
                            std::strcmp(sixty, "0") != 0);
    char body[512];
    std::snprintf(
        body, sizeof(body),
        "DEBUG   cinema=%d   %s\n"
        "Esc ou F10  menu grafico\n"
        "F2 dump texturas\n"
        "Backspace ou P  pular cinema\n"
        "9  confirmar menu\n"
        "5  gravar    7  carregar\n"
        "F3 esconder HUD\n"
        "%s",
        cinema, show_120 ? "120Hz" : "60Hz", note.c_str());
    if (g_hud_last_text == body) {
        return;
    }
    g_hud_last_text = body;
    with_hud_context([&] {
        g_hud_label->set_text(g_hud_last_text);
    });
}

} // namespace

void turok2_debug_request_skip() {
    g_want_skip.store(true, std::memory_order_relaxed);
    g_skip_pulses.store(45, std::memory_order_relaxed);
}

void turok2_debug_request_save() {
    g_want_save.store(true, std::memory_order_relaxed);
}

void turok2_debug_request_load() {
    g_want_load.store(true, std::memory_order_relaxed);
}

void turok2_debug_request_confirm_a() {
    g_a_pulses.store(20, std::memory_order_relaxed);
}

void turok2_debug_toggle_hud() {
    g_hud_on.store(!g_hud_on.load(std::memory_order_relaxed), std::memory_order_relaxed);
}

void turok2_debug_set_status(const char* text) {
    if (text == nullptr || text[0] == '\0') {
        return;
    }
    set_status(text);
}

uint16_t turok2_debug_extra_buttons() {
    uint16_t buttons = 0;
    if (g_skip_pulses.load(std::memory_order_relaxed) > 0) {
        buttons |= static_cast<uint16_t>(kN64Start);
    }
    if (g_a_pulses.load(std::memory_order_relaxed) > 0) {
        buttons |= static_cast<uint16_t>(kN64A);
    }
    return buttons;
}

void turok2_debug_tick(uint8_t* rdram, int cinema) {
    g_cinema.store(cinema, std::memory_order_relaxed);
    const uint32_t updates = g_updates.fetch_add(1, std::memory_order_relaxed) + 1;

    if (g_skip_pulses.load(std::memory_order_relaxed) > 0) {
        g_skip_pulses.fetch_sub(1, std::memory_order_relaxed);
    }
    if (g_a_pulses.load(std::memory_order_relaxed) > 0) {
        g_a_pulses.fetch_sub(1, std::memory_order_relaxed);
    }

    if (g_want_skip.exchange(false, std::memory_order_relaxed)) {
        skip_cinema(rdram);
        set_status("pulando cinema (Backspace/P)");
    }
    if (g_want_save.exchange(false, std::memory_order_relaxed)) {
        save_quick(rdram);
    }
    if (g_want_load.exchange(false, std::memory_order_relaxed)) {
        load_quick(rdram);
    }

    static const bool auto_load = [] {
        const char* value = std::getenv("TUROK2_AUTO_LOAD");
        return value != nullptr && value[0] != '\0' && value[0] != '0';
    }();
    if (auto_load && updates == 180u && std::filesystem::exists(save_path())) {
        load_quick(rdram);
    }
}

void turok2_debug_present() {
    if (!g_hud_on.load(std::memory_order_relaxed)) {
        if (g_hud_context != recompui::ContextId::null() &&
            recompui::is_context_shown(g_hud_context)) {
            recompui::hide_context(g_hud_context);
        }
        return;
    }
    ensure_hud();
    if (g_hud_context != recompui::ContextId::null() &&
        !recompui::is_context_shown(g_hud_context)) {
        recompui::show_context(g_hud_context, "");
    }
    refresh_hud();
}
