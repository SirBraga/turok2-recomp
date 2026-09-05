#include "crash_diagnostics.h"

#include <cinttypes>
#include <cstdio>
#include <cstring>
#include <mutex>

namespace {
struct GuestSnapshot {
    bool valid = false;
    uint8_t* rdram = nullptr;
    recomp_context ctx{};
    uint32_t pc = 0;
    uint32_t target = 0;
};

thread_local GuestSnapshot g_snapshot;
std::mutex g_report_mutex;

bool guest_word_address(uint32_t address) {
    if ((address >= 0x80000000u) && (address <= 0x807FFFFCu)) return true;
    return (address >= 0x00200000u) && (address <= 0x008FFFFCu);
}

uint32_t nearest_registered_function(uint32_t address, uint32_t* distance) {
    constexpr uint32_t kMaxDistance = 0x10000u;
    const uint32_t aligned = address & ~3u;
    for (uint32_t delta = 0; delta <= kMaxDistance && delta <= aligned; delta += 4) {
        const uint32_t candidate = aligned - delta;
        if (LOOKUP_FUNC_OR_NULL(static_cast<int32_t>(candidate)) != nullptr) {
            if (distance) *distance = delta;
            return candidate;
        }
    }
    if (distance) *distance = 0;
    return 0;
}

void print_nearest(const char* label, uint32_t address) {
    uint32_t distance = 0;
    const uint32_t nearest = nearest_registered_function(address, &distance);
    if (nearest != 0) {
        std::fprintf(stderr,
            "[guest-crash] %s=%08" PRIX32 " nearest=func_%08" PRIX32 "+0x%X\n",
            label, address, nearest, distance);
    } else {
        std::fprintf(stderr,
            "[guest-crash] %s=%08" PRIX32 " nearest=<none within 0x10000>\n",
            label, address);
    }
}

void print_registers(const recomp_context& ctx) {
    const gpr* regs = &ctx.r0;
    for (int row = 0; row < 8; row++) {
        const int first = row * 4;
        std::fprintf(stderr,
            "[guest-crash] r%02d=%08" PRIX32 " r%02d=%08" PRIX32
            " r%02d=%08" PRIX32 " r%02d=%08" PRIX32 "\n",
            first, static_cast<uint32_t>(regs[first]),
            first + 1, static_cast<uint32_t>(regs[first + 1]),
            first + 2, static_cast<uint32_t>(regs[first + 2]),
            first + 3, static_cast<uint32_t>(regs[first + 3]));
    }
    std::fprintf(stderr,
        "[guest-crash] hi=%08" PRIX32 " lo=%08" PRIX32 " status=%08" PRIX32 "\n",
        static_cast<uint32_t>(ctx.hi), static_cast<uint32_t>(ctx.lo), ctx.status_reg);
}

void print_guest_stack(uint8_t* rdram, const recomp_context& ctx) {
    if (!rdram) return;
    const uint32_t sp = static_cast<uint32_t>(ctx.r29) & ~3u;
    if (!guest_word_address(sp)) {
        std::fprintf(stderr, "[guest-crash] stack unavailable: sp=%08" PRIX32 "\n", sp);
        return;
    }
    std::fprintf(stderr, "[guest-crash] probable guest return addresses from sp=%08" PRIX32 ":\n", sp);
    unsigned found = 0;
    for (uint32_t offset = 0; offset < 0x180u; offset += 4) {
        const uint32_t slot = sp + offset;
        if (!guest_word_address(slot)) break;
        const uint32_t value = static_cast<uint32_t>(MEM_W(slot, 0));
        uint32_t distance = 0;
        const uint32_t nearest = nearest_registered_function(value, &distance);
        if (nearest != 0 && distance <= 0x2000u) {
            std::fprintf(stderr,
                "[guest-crash]   sp+0x%03X %08" PRIX32 " -> func_%08" PRIX32 "+0x%X\n",
                offset, value, nearest, distance);
            if (++found == 16) break;
        }
    }
    if (found == 0) std::fprintf(stderr, "[guest-crash]   <no plausible return addresses>\n");
}
} // namespace

void turok2_diag_capture(uint8_t* rdram, const recomp_context* ctx,
                         uint32_t guest_pc, uint32_t indirect_target) {
    if (!ctx) return;
    g_snapshot.valid = true;
    g_snapshot.rdram = rdram;
    std::memcpy(&g_snapshot.ctx, ctx, sizeof(*ctx));
    g_snapshot.ctx.f_odd = nullptr;
    g_snapshot.pc = guest_pc;
    g_snapshot.target = indirect_target;
}

void turok2_diag_report(const char* reason, uint8_t* rdram,
                        const recomp_context* ctx, uint32_t guest_pc,
                        uint32_t bad_address) {
    if (!ctx) return;
    turok2_diag_capture(rdram, ctx, guest_pc, bad_address);
    std::lock_guard<std::mutex> lock(g_report_mutex);
    std::fprintf(stderr, "\n[guest-crash] TUROK 2 HYBRID CRASH REPORT\n");
    std::fprintf(stderr, "[guest-crash] reason=%s\n", reason ? reason : "unknown");
    print_nearest("pc", guest_pc);
    print_nearest("bad/target", bad_address);
    print_nearest("ra", static_cast<uint32_t>(ctx->r31));
    print_registers(*ctx);
    print_guest_stack(rdram, *ctx);
    std::fprintf(stderr, "[guest-crash] END REPORT\n\n");
    std::fflush(stderr);
}

void turok2_diag_report_signal(int signal_number) {
    if (!g_snapshot.valid) {
        std::fprintf(stderr, "[guest-crash] no guest snapshot on this native thread\n");
        std::fflush(stderr);
        return;
    }
    const recomp_context& ctx = g_snapshot.ctx;
    std::fprintf(stderr,
        "[guest-crash] signal=%d last_pc=%08" PRIX32 " last_target=%08" PRIX32
        " ra=%08" PRIX32 " sp=%08" PRIX32 " gp=%08" PRIX32
        " a0=%08" PRIX32 " a1=%08" PRIX32 " v0=%08" PRIX32 "\n",
        signal_number, g_snapshot.pc, g_snapshot.target,
        static_cast<uint32_t>(ctx.r31), static_cast<uint32_t>(ctx.r29),
        static_cast<uint32_t>(ctx.r28), static_cast<uint32_t>(ctx.r4),
        static_cast<uint32_t>(ctx.r5), static_cast<uint32_t>(ctx.r2));
    std::fflush(stderr);
}
