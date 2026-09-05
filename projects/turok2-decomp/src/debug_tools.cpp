#include "debug_tools.h"

#include "recomp.h"
#include "recompui/recompui.h"
#include "ui_element.h"
#include "ultramodern/ultra64.h"
#include "hle/rt64_turok2_adon_cover.h"
#include "crash_diagnostics.h"

#include <algorithm>
#include <atomic>
#include <cstddef>
#include <cstdint>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <functional>
#include <mutex>
#include <string>
#include <unistd.h>
#include <vector>

#ifdef __APPLE__
#include <mach-o/dyld.h>
#endif

namespace {

constexpr uint32_t kCinemaObjectPtr = 0x800C1BB0u;
constexpr uint32_t kN64Start = 0x1000u;
constexpr uint32_t kN64A = 0x8000u;
constexpr uint32_t kRdramBytes = 0x800000u;
constexpr uint32_t kUsegBytes = 0x500000u;
constexpr uint32_t kUsegHost = 0x00B00000u;
constexpr uint32_t kMagic = 0x54325153u; // "T2QS"
constexpr uint32_t kVersion = 2;

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
std::mutex g_save_mutex;
std::string g_status = "Esc/F10 menu   Backspace/P skip   5 save   7 load   F3 HUD";
std::string g_hud_last_text;

recompui::ContextId g_hud_context = recompui::ContextId::null();
recompui::Element* g_hud_label = nullptr;
bool g_hud_failed = false;

std::filesystem::path exe_dir() {
#ifdef __APPLE__
    char buf[1024];
    uint32_t size = sizeof(buf);
    if (_NSGetExecutablePath(buf, &size) == 0) {
        std::error_code ec;
        const auto path = std::filesystem::weakly_canonical(buf, ec);
        if (!ec) {
            return path.parent_path();
        }
    }
#endif
    std::error_code ec;
    return std::filesystem::current_path(ec);
}

std::vector<std::filesystem::path> save_candidates() {
    std::error_code ec;
    const auto cwd = std::filesystem::current_path(ec);
    const auto exe = exe_dir();
    return {
        cwd / "saves" / "quick.t2sav",
        exe / "saves" / "quick.t2sav",
        exe.parent_path() / "saves" / "quick.t2sav",
    };
}

std::filesystem::path save_path() {
    for (const auto& path : save_candidates()) {
        std::error_code ec;
        if (std::filesystem::exists(path, ec)) {
            return path;
        }
    }
    return save_candidates().front();
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
    Turok2OsRef thread_refs[32];
    Turok2OsRef queue_refs[64];
    size_t thread_count = 0;
    size_t queue_count = 0;
    turok2_copy_osthreads(thread_refs, &thread_count, 32);
    turok2_copy_mesg_queues(queue_refs, &queue_count, 64);

    std::vector<LiveOsBlock> blocks;
    std::vector<uint32_t> stack_tops;
    for (size_t i = 0; i < thread_count; ++i) {
        const uint32_t addr = thread_refs[i].addr;
        if (!guest_ram(addr) ||
            addr + static_cast<uint32_t>(sizeof(OSThread)) > 0x80800000u) {
            continue;
        }
        add_live_block(blocks, rdram, addr,
                       static_cast<uint32_t>(sizeof(OSThread)));
        const OSThread* thread =
            reinterpret_cast<const OSThread*>(guest_host(rdram, addr));
        uint32_t top = thread_refs[i].extra;
        const uint32_t sp = static_cast<uint32_t>(thread->sp);
        if (guest_ram(sp) && sp > top) {
            top = sp;
        }
        if (guest_ram(top)) {
            stack_tops.push_back(top);
        }
    }
    std::sort(stack_tops.begin(), stack_tops.end());
    for (size_t i = 0; i < stack_tops.size(); ++i) {
        const uint32_t top = stack_tops[i];
        uint32_t size = 0x800u;
        if (i > 0u) {
            const uint32_t gap = top - stack_tops[i - 1u];
            if (gap < size) {
                size = gap;
            }
        }
        if (size < 0x40u) {
            continue;
        }
        uint32_t start = top - size;
        if (!guest_ram(start)) {
            continue;
        }
        add_live_block(blocks, rdram, start, size);
    }

    for (size_t i = 0; i < queue_count; ++i) {
        const uint32_t addr = queue_refs[i].addr;
        if (!guest_ram(addr) ||
            addr + static_cast<uint32_t>(sizeof(OSMesgQueue)) > 0x80800000u) {
            continue;
        }
        add_live_block(blocks, rdram, addr,
                       static_cast<uint32_t>(sizeof(OSMesgQueue)));
        const OSMesgQueue* queue =
            reinterpret_cast<const OSMesgQueue*>(guest_host(rdram, addr));
        const uint32_t msg = static_cast<uint32_t>(queue->msg);
        uint32_t bytes = static_cast<uint32_t>(queue->msgCount) * 4u;
        if (bytes == 0u) {
            bytes = queue_refs[i].extra * 4u;
        }
        if (bytes > 0x400u) {
            bytes = 0x400u;
        }
        add_live_block(blocks, rdram, msg, bytes);
    }

    std::fprintf(stderr,
        "[save] live OS keep %zu threads %zu queues %zu blocks\n",
        thread_count, queue_count, blocks.size());
    return blocks;
}

void restore_live_os(uint8_t* rdram, const std::vector<LiveOsBlock>& blocks) {
    for (const LiveOsBlock& block : blocks) {
        std::memcpy(guest_host(rdram, block.addr), block.bytes.data(),
                    block.size);
    }
}

void save_quick(uint8_t* rdram) {
    std::lock_guard<std::mutex> lock(g_save_mutex);
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
    const uint32_t pid = static_cast<uint32_t>(getpid());
    out.write(reinterpret_cast<const char*>(&magic), 4);
    out.write(reinterpret_cast<const char*>(&version), 4);
    out.write(reinterpret_cast<const char*>(&kRdramBytes), 4);
    out.write(reinterpret_cast<const char*>(&kUsegBytes), 4);
    out.write(reinterpret_cast<const char*>(&pid), 4);
    if (!write_block(out, rdram, kRdramBytes) ||
        !write_block(out, rdram + kUsegHost, kUsegBytes)) {
        set_status("F5 falhou ao escrever o save");
        return;
    }
    char note[160];
    std::snprintf(note, sizeof(note),
        "F5 gravou %s — F7 ou 7 carrega", path.c_str());
    set_status(note);
}

void load_quick(uint8_t* rdram) {
    std::lock_guard<std::mutex> lock(g_save_mutex);
    const auto path = save_path();
    std::ifstream in(path, std::ios::binary);
    if (!in) {
        set_status("F7: nenhum save. Chega em Adia e aperta F5");
        std::fprintf(stderr, "[save] F7: no file at %s\n", path.c_str());
        return;
    }
    uint32_t magic = 0;
    uint32_t version = 0;
    uint32_t rdram_bytes = 0;
    uint32_t useg_bytes = 0;
    uint32_t pid = 0;
    in.read(reinterpret_cast<char*>(&magic), 4);
    in.read(reinterpret_cast<char*>(&version), 4);
    in.read(reinterpret_cast<char*>(&rdram_bytes), 4);
    in.read(reinterpret_cast<char*>(&useg_bytes), 4);
    if (!in || magic != kMagic || (version != 1u && version != 2u) ||
        rdram_bytes != kRdramBytes || useg_bytes != kUsegBytes) {
        set_status("F7: save invalido");
        return;
    }
    if (version >= 2u) {
        in.read(reinterpret_cast<char*>(&pid), 4);
        if (!in) {
            set_status("F7: save invalido");
            return;
        }
    }
    const bool same_process = (version >= 2u && pid == static_cast<uint32_t>(getpid()));
    // Always stitch live OS after the RDRAM blast. Host threads keep waiting
    // on ultramodern semaphores that are not in the save; a raw same-process
    // restore rewinds guest queues and freezes those waiters.
    const std::vector<LiveOsBlock> live_os = snapshot_live_os(rdram);
    if (live_os.empty()) {
        set_status("F7 abortado: sem threads OS vivas para recoser");
        return;
    }
    if (!read_block(in, rdram, kRdramBytes) ||
        !read_block(in, rdram + kUsegHost, kUsegBytes)) {
        set_status("F7 falhou ao ler o save");
        return;
    }
    restore_live_os(rdram, live_os);
    char note[200];
    std::snprintf(note, sizeof(note),
        "F7 carregou %s (%s, %zu blocos OS)", path.c_str(),
        same_process ? "mesmo processo" : "outra sessao", live_os.size());
    set_status(note);
    std::fprintf(stderr, "[save] %s\n", note);
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
    const Turok2AdonCover view = turok2_adon_cover_copy();
    char body[768];
    std::snprintf(
        body, sizeof(body),
        "DEBUG   cinema=%d   %s\n"
        "fog min=%u->%u  rgb=%02X%02X%02X  far=%.0f\n"
        "pitch=%.2f yaw=%.2f  region=%d vis=%08X\n"
        "preg=%08X  sky=%d a=%.2f\n"
        "Esc ou F10  menu grafico\n"
        "F2 dump texturas\n"
        "Backspace ou P  pular cinema\n"
        "9  confirmar menu\n"
        "5  gravar    7  carregar\n"
        "F3 esconder HUD\n"
        "%s",
        cinema, show_120 ? "120Hz" : "60Hz",
        view.fog_min_in, view.fog_min, view.fog_r, view.fog_g, view.fog_b,
        view.far_clip, view.pitch, view.yaw, view.region, view.vis_bits,
        view.pregion, view.sky_layers, view.sky_alpha, note.c_str());
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
    std::fprintf(stderr, "[save] F5 requested\n");
    std::fflush(stderr);
    g_want_save.store(true, std::memory_order_relaxed);
    g_hud_on.store(true, std::memory_order_relaxed);
}

void turok2_debug_request_load() {
    std::fprintf(stderr, "[save] F7 requested\n");
    std::fflush(stderr);
    g_want_load.store(true, std::memory_order_relaxed);
    g_hud_on.store(true, std::memory_order_relaxed);
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
