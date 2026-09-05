#ifndef __RECOMP_H__
#define __RECOMP_H__

#include <stdlib.h>
#include <stdint.h>
#include <math.h>
#include <fenv.h>
#include <assert.h>

// Compiler definition to disable inter-procedural optimization, allowing multiple functions to be in a single file without breaking interposition.
#if defined(_MSC_VER) && !defined(__clang__) && !defined(__INTEL_COMPILER)
    // MSVC's __declspec(noinline) seems to disable inter-procedural optimization entirely, so it's all that's needed.
    #define RECOMP_FUNC __declspec(noinline)
    
    // Use MSVC's fenv_access pragma.
    #define SET_FENV_ACCESS() _Pragma("fenv_access(on)")
#elif defined(__clang__)
    // Clang has no dedicated IPO attribute, so we use a combination of other attributes to give the desired behavior.
    // The inline keyword allows multiple definitions during linking, and extern forces clang to emit an externally visible definition.
    // Weak forces Clang to not perform any IPO as the symbol can be interposed, which prevents actual inlining due to the inline keyword.
    // Add noinline on for good measure, which doesn't conflict with the inline keyword as they have different meanings.
    #define RECOMP_FUNC extern inline __attribute__((weak,noinline))

    // Use the standard STDC FENV_ACCESS pragma.
    #define SET_FENV_ACCESS() _Pragma("STDC FENV_ACCESS ON")
#elif defined(__GNUC__) && !defined(__INTEL_COMPILER)
    // Use GCC's attribute for disabling inter-procedural optimizations. Also enable the rounding-math compiler flag to disable
    // constant folding so that arithmetic respects the floating point environment. This is needed because gcc doesn't implement
    // any FENV_ACCESS pragma.
    #define RECOMP_FUNC __attribute__((noipa, optimize("rounding-math")))

    // There's no FENV_ACCESS pragma in gcc, so this can be empty.
    #define SET_FENV_ACCESS()
#else
    #error "No RECOMP_FUNC definition for this compiler"
#endif

// Implementation of 64-bit multiply and divide instructions
#if defined(__SIZEOF_INT128__)

static inline void DMULT(int64_t a, int64_t b, int64_t* lo64, int64_t* hi64) {
    __int128 full128 = ((__int128)a) * ((__int128)b);

    *hi64 = (int64_t)(full128 >> 64);
    *lo64 = (int64_t)(full128 >> 0);
}

static inline void DMULTU(uint64_t a, uint64_t b, uint64_t* lo64, uint64_t* hi64) {
    unsigned __int128 full128 = ((unsigned __int128)a) * ((unsigned __int128)b);

    *hi64 = (uint64_t)(full128 >> 64);
    *lo64 = (uint64_t)(full128 >> 0);
}

#elif defined(_MSC_VER)

#include <intrin.h>
#pragma intrinsic(_mul128)
#pragma intrinsic(_umul128)

static inline void DMULT(int64_t a, int64_t b, int64_t* lo64, int64_t* hi64) {
    *lo64 = _mul128(a, b, hi64);
}

static inline void DMULTU(uint64_t a, uint64_t b, uint64_t* lo64, uint64_t* hi64) {
    *lo64 = _umul128(a, b, hi64);
}

#else
#error "128-bit integer type not found"
#endif

static inline void DDIV(int64_t a, int64_t b, int64_t* quot, int64_t* rem) {
    int overflow = ((uint64_t)a == 0x8000000000000000ull) && (b == -1ll);
    *quot = overflow ? a : (a / b);
    *rem = overflow ? 0 : (a % b);
}

static inline void DDIVU(uint64_t a, uint64_t b, uint64_t* quot, uint64_t* rem) {
    *quot = a / b;
    *rem = a % b;
}

typedef uint64_t gpr;

#define SIGNED(val) \
    ((int64_t)(val))

#define ADD32(a, b) \
    ((gpr)(int32_t)((a) + (b)))

#define SUB32(a, b) \
    ((gpr)(int32_t)((a) - (b)))

// Resolve both the usual sign-extended KSEG0 addresses and Turok 2's low useg
// arena into the native 8 MiB RDRAM allocation. The game mirrors its active
// 4 KiB TLB mappings in a compact table at D_80121318. Each record contains an
// even virtual page number followed by the physical page indices for the even
// and odd halves. Those physical pages live after D_80132000.
// Turok 2 keeps engine banks and streamed useg windows (audio ctl/tbl at
// 0x004B0000, size 0x3EA7A0) at useg 0x00400000 instead of letting VMASM/TLB
// page them in. Masked into the 8 MiB game area those addresses land on
// 0x80400000, which is inside the heap that entry_00202130 clears and the
// allocator then hands out, so the banks get wiped.
//
// On real hardware the TLB maps this window to physical pages outside the heap.
// Reproduce that by giving the window its own storage in extended RDRAM. rdram is
// mem_size bytes (512 MiB), of which the game only uses the low 8 MiB; the PI
// handles sit at 0x00800000, patch data at 0x00801000 and the recomp heap starts
// at 0x01000000, which leaves the range below that free.
//
// END is 0x00900000 so 0x004B0000+0x3EA7A0 stays inside the relocated span and
// BASE+(END-START) stays below 0x01000000. Do not strip KSEG0 before this test:
// 0x804B0000 is heap and must keep aliasing physical 0x004B0000.
//
// Only the bank window is redirected. The resident engine mirror at 0x00200400 is
// left aliasing its KSEG0 counterpart, which is how it already works.
#define RECOMP_USEG_BANKS_START 0x00400000U
#define RECOMP_USEG_BANKS_END   0x00900000U
#define RECOMP_USEG_BANKS_BASE  0x00B00000U

static inline uint32_t recomp_rdram_offset(uint8_t* rdram, uint32_t address) {
    const uint32_t rdram_mask = 0x007FFFFFU;

    // Returns before the mask below, which would fold the relocated offset back
    // into the low 8 MiB.
    if (address >= RECOMP_USEG_BANKS_START && address < RECOMP_USEG_BANKS_END) {
        return RECOMP_USEG_BANKS_BASE + (address - RECOMP_USEG_BANKS_START);
    }

    if (address < 0x00200000U) {
        const uint32_t tlb_table = 0x00121318U;
        const uint32_t tlb_arena = 0x00132000U;
        const uint16_t virtual_pair = (uint16_t)((address >> 12) & 0xFFFEU);

        // Before the VM manager starts, the BSS-backed table contains only
        // zeroes. Do not mistake that state for a valid mapping of page zero.
        // The game initializes all 24 records sequentially to FFFF/FF/FF.
        // Do not consult the table until the final record is initialized: a
        // partially-zero record would otherwise look like a valid mapping for
        // virtual page zero during startup.
        const uint32_t last_record = tlb_table + (23U * 4U);
        const uint16_t last_pair = *(const uint16_t*)(rdram + (last_record ^ 2U));
        const uint8_t last_even = rdram[(last_record + 2U) ^ 3U];
        const uint8_t last_odd = rdram[(last_record + 3U) ^ 3U];
        const int table_ready = last_pair == 0xFFFFU && last_even == 0xFFU && last_odd == 0xFFU;

        if (!table_ready) {
            return address & rdram_mask;
        }

        for (uint32_t index = 0; index < 24; index++) {
            const uint32_t record = tlb_table + index * 4;
            const uint16_t mapped_pair = *(const uint16_t*)(rdram + (record ^ 2U));
            if (mapped_pair == virtual_pair) {
                const uint32_t page_byte = record + ((address & 0x1000U) != 0 ? 3U : 2U);
                const uint8_t physical_page = rdram[page_byte ^ 3U];
                if (physical_page != 0xFFU) {
                    return (tlb_arena + (uint32_t)(physical_page) * 0x1000U +
                        (address & 0xFFFU)) & rdram_mask;
                }
            }
        }
    }

    return address & rdram_mask;
}

#define RDRAM_OFFSET(offset, reg) \
    (recomp_rdram_offset(rdram, (uint32_t)((reg) + (offset))))

// ---------------------------------------------------------------------------
// Temporary diagnostic: find who zeroes the Turok 2 scheduler message queues.
//
// The scheduler lives at 0x8011AD90 and embeds two OSMesgQueue values, the
// event/VI queue at +0x40 (0x8011ADD0) and the task queue at +0x78
// (0x8011AE08). OSMesgQueue::msgCount sits at +0x10 of each, so the capacities
// are the words at 0x8011ADE0 and 0x8011AE18.
//
// Both capacities are created as 8 and later observed as 0. The runtime only
// ever writes msgCount from osCreateMesgQueue, so the zero has to come from a
// store issued by recompiled game code. Every such store goes through MEM_W or
// SD below, and every recompiled function is a real native function with a
// symbol, so reporting a backtrace at the offending access names the culprit.
//
// Toggle: set this to 0 (or pass -DRECOMP_QUEUE_WATCH=0) to compile the whole
// thing out and restore the original MEM_W and SD definitions. It costs two
// extra loads and compares on every recompiled memory access, so it is a
// debugging aid rather than something to ship.
//
// Findings this produced, for reference:
//   - The stores are genuine KSEG0 stores (vaddr 0x8011ADE0 / 0x8011AE18), so
//     TLB translation is not involved.
//   - They come from the clearing loop at L_0042FC1C in func_0042FBA4, reached
//     through func_00288860 -> func_00286674 -> func_00288C80 -> func_00289DFC
//     -> func_00289110 -> func_002888BC.
//   - func_00286674 receives the correct object pointer 0x800F6CB0 but forwards
//     0x800F7078, which is 0x3C8 too high, so the array it clears lands on the
//     scheduler instead of ending safely below it.
#ifndef RECOMP_QUEUE_WATCH
#define RECOMP_QUEUE_WATCH 0
#endif

#if RECOMP_QUEUE_WATCH

// The watch is armed for the lifetime of one stack frame rather than for fixed
// addresses. Stack memory is recycled constantly, so watching a raw address
// reports hundreds of unrelated frames; arming on entry to the frame under
// investigation and disarming on exit isolates exactly the writes that corrupt
// it.
//
// Call recomp_qwatch_arm_frame(sp) just after the prologue has spilled the
// registers, and recomp_qwatch_disarm() just before the epilogue reloads them.

#define RECOMP_QWATCH_MAX_REPORTS   10

#ifdef __cplusplus
extern "C" {
#endif

// Shared across every translation unit on purpose. A per-file copy would make
// the shadow useless, because the file that observes a change would not be the
// file that recorded the previous value.
extern uint32_t recomp_qwatch_enabled;
extern uint32_t recomp_qwatch_target[2];
extern int32_t recomp_qwatch_last[2];
extern int32_t recomp_qwatch_reports;

// Watch the two saved-register slots of the frame at sp: sp+0x40 and sp+0x44.
void recomp_qwatch_arm_frame(uint8_t* rdram, uint32_t sp);
void recomp_qwatch_disarm(void);

// Reports the first callee after which sp no longer matches the value recorded by
// recomp_qwatch_arm_frame. An unbalanced callee makes the caller's epilogue
// reload its saved registers from the wrong addresses.
void recomp_qwatch_check_sp(const char* after, uint32_t sp);

void recomp_qwatch_report(uint32_t vaddr, uint32_t offset, int32_t old_value, int32_t new_value, const char* kind);

// Records the base pointer func_002888BC was handed, and flags the calls whose
// derived object would reach into the scheduler.
void recomp_qwatch_note_base(uint32_t base);

// Records the game object pointer as it is forwarded down the call chain, so the
// frame that alters it can be identified. tag is the caller's MIPS address.
void recomp_qwatch_note_ptr(uint32_t tag, uint32_t value);

#ifdef __cplusplus
}
#endif

// Compares both watched slots against their last known values. Runs on every
// memory access while armed, so it catches stores arriving through any path,
// including byte and halfword stores and memset-style loops.
static inline void recomp_qwatch_poll(uint8_t* rdram) {
    if (!recomp_qwatch_enabled || recomp_qwatch_reports >= RECOMP_QWATCH_MAX_REPORTS) {
        return;
    }

    for (int index = 0; index < 2; index++) {
        const int32_t current = *(const int32_t*)(rdram + recomp_qwatch_target[index]);
        if (current != recomp_qwatch_last[index]) {
            recomp_qwatch_report(0, recomp_qwatch_target[index], recomp_qwatch_last[index], current, "poll");
            recomp_qwatch_last[index] = current;
        }
    }
}

// Takes the untranslated virtual address so the report can show both it and the
// RDRAM offset it resolved to.
static inline int32_t* recomp_qwatch_word_ptr(uint8_t* rdram, uint32_t vaddr) {
    const uint32_t offset = recomp_rdram_offset(rdram, vaddr);

    if (recomp_qwatch_enabled) {
        // Only value changes are reported. The watched addresses are touched every
        // frame by the game, so reporting each access would exhaust the budget
        // long before the change of interest happens.
        recomp_qwatch_poll(rdram);
    }

    return (int32_t*)(rdram + offset);
}

#define MEM_W(offset, reg) \
    (*recomp_qwatch_word_ptr(rdram, (uint32_t)((reg) + (offset))))

#else

#define MEM_W(offset, reg) \
    (*(int32_t*)(rdram + RDRAM_OFFSET((offset), (reg))))

#endif

#define MEM_H(offset, reg) \
    (*(int16_t*)(rdram + (RDRAM_OFFSET((offset), (reg)) ^ 2)))

#define MEM_B(offset, reg) \
    (*(int8_t*)(rdram + (RDRAM_OFFSET((offset), (reg)) ^ 3)))

#define MEM_HU(offset, reg) \
    (*(uint16_t*)(rdram + (RDRAM_OFFSET((offset), (reg)) ^ 2)))

#define MEM_BU(offset, reg) \
    (*(uint8_t*)(rdram + (RDRAM_OFFSET((offset), (reg)) ^ 3)))

// A doubleword store covering 0x0011ADE0 or 0x0011AE18 would clobber a queue
// capacity together with its buffer pointer, so route both halves through the
// same watched accessor as MEM_W.
#if RECOMP_QUEUE_WATCH

#define SD(val, offset, reg) { \
    *(uint32_t*)recomp_qwatch_word_ptr(rdram, (uint32_t)((reg) + (offset) + 4)) = (uint32_t)((gpr)(val) >> 0); \
    *(uint32_t*)recomp_qwatch_word_ptr(rdram, (uint32_t)((reg) + (offset) + 0)) = (uint32_t)((gpr)(val) >> 32); \
}

#else

#define SD(val, offset, reg) { \
    *(uint32_t*)(rdram + RDRAM_OFFSET((offset) + 4, (reg))) = (uint32_t)((gpr)(val) >> 0); \
    *(uint32_t*)(rdram + RDRAM_OFFSET((offset) + 0, (reg))) = (uint32_t)((gpr)(val) >> 32); \
}

#endif

static inline uint64_t load_doubleword(uint8_t* rdram, gpr reg, gpr offset) {
    uint64_t ret = 0;
    uint64_t lo = (uint64_t)(uint32_t)MEM_W(reg, offset + 4);
    uint64_t hi = (uint64_t)(uint32_t)MEM_W(reg, offset + 0);
    ret = (lo << 0) | (hi << 32);
    return ret;
}

#define LD(offset, reg) \
    load_doubleword(rdram, offset, reg)

static inline gpr do_lwl(uint8_t* rdram, gpr initial_value, gpr offset, gpr reg) {
    // Calculate the overall address
    gpr address = (offset + reg);

    // Load the aligned word
    gpr word_address = address & ~0x3;
    uint32_t loaded_value = MEM_W(0, word_address);

    // Mask the existing value and shift the loaded value appropriately
    gpr misalignment = address & 0x3;
    gpr masked_value = initial_value & (gpr)(uint32_t)~(0xFFFFFFFFu << (misalignment * 8));
    loaded_value <<= (misalignment * 8);

    // Cast to int32_t to sign extend first
    return (gpr)(int32_t)(masked_value | loaded_value);
}

static inline gpr do_lwr(uint8_t* rdram, gpr initial_value, gpr offset, gpr reg) {
    // Calculate the overall address
    gpr address = (offset + reg);
    
    // Load the aligned word
    gpr word_address = address & ~0x3;
    uint32_t loaded_value = MEM_W(0, word_address);

    // Mask the existing value and shift the loaded value appropriately
    gpr misalignment = address & 0x3;
    gpr masked_value = initial_value & (gpr)(uint32_t)~(0xFFFFFFFFu >> (24 - misalignment * 8));
    loaded_value >>= (24 - misalignment * 8);

    // Cast to int32_t to sign extend first
    return (gpr)(int32_t)(masked_value | loaded_value);
}

static inline void do_swl(uint8_t* rdram, gpr offset, gpr reg, gpr val) {
    // Calculate the overall address
    gpr address = (offset + reg);

    // Get the initial value of the aligned word
    gpr word_address = address & ~0x3;
    uint32_t initial_value = MEM_W(0, word_address);

    // Mask the initial value and shift the input value appropriately
    gpr misalignment = address & 0x3;
    uint32_t masked_initial_value = initial_value & ~(0xFFFFFFFFu >> (misalignment * 8));
    uint32_t shifted_input_value = ((uint32_t)val) >> (misalignment * 8);
    MEM_W(0, word_address) = masked_initial_value | shifted_input_value;
}

static inline void do_swr(uint8_t* rdram, gpr offset, gpr reg, gpr val) {
    // Calculate the overall address
    gpr address = (offset + reg);

    // Get the initial value of the aligned word
    gpr word_address = address & ~0x3;
    uint32_t initial_value = MEM_W(0, word_address);

    // Mask the initial value and shift the input value appropriately
    gpr misalignment = address & 0x3;
    uint32_t masked_initial_value = initial_value & ~(0xFFFFFFFFu << (24 - misalignment * 8));
    uint32_t shifted_input_value = ((uint32_t)val) << (24 - misalignment * 8);
    MEM_W(0, word_address) = masked_initial_value | shifted_input_value;
}

static inline gpr do_ldl(uint8_t* rdram, gpr initial_value, gpr offset, gpr reg) {
    // Calculate the overall address
    gpr address = (offset + reg);

    // Load the aligned dword
    gpr dword_address = address & ~0x7;
    uint64_t loaded_value = load_doubleword(rdram, 0, dword_address);

    // Mask the existing value and shift the loaded value appropriately
    gpr misalignment = address & 0x7;
    gpr masked_value = initial_value & ~(0xFFFFFFFFFFFFFFFFu << (misalignment * 8));
    loaded_value <<= (misalignment * 8);

    return masked_value | loaded_value;
}

static inline gpr do_ldr(uint8_t* rdram, gpr initial_value, gpr offset, gpr reg) {
    // Calculate the overall address
    gpr address = (offset + reg);
    
    // Load the aligned dword
    gpr dword_address = address & ~0x7;
    uint64_t loaded_value = load_doubleword(rdram, 0, dword_address);

    // Mask the existing value and shift the loaded value appropriately
    gpr misalignment = address & 0x7;
    gpr masked_value = initial_value & ~(0xFFFFFFFFFFFFFFFFu >> (56 - misalignment * 8));
    loaded_value >>= (56 - misalignment * 8);

    return masked_value | loaded_value;
}

static inline void do_sdl(uint8_t* rdram, gpr offset, gpr reg, gpr val) {
    // Calculate the overall address
    gpr address = (offset + reg);

    // Get the initial value of the aligned dword
    gpr dword_address = address & ~0x7;
    uint64_t initial_value = load_doubleword(rdram, 0, dword_address);

    // Mask the initial value and shift the input value appropriately
    gpr misalignment = address & 0x7;
    uint64_t masked_initial_value = initial_value & ~(0xFFFFFFFFFFFFFFFFu >> (misalignment * 8));
    uint64_t shifted_input_value = val >> (misalignment * 8);

    uint64_t ret = masked_initial_value | shifted_input_value;
    uint32_t lo = (uint32_t)ret;
    uint32_t hi = (uint32_t)(ret >> 32);

    MEM_W(0, dword_address + 4) = lo;
    MEM_W(0, dword_address + 0) = hi;
}

static inline void do_sdr(uint8_t* rdram, gpr offset, gpr reg, gpr val) {
    // Calculate the overall address
    gpr address = (offset + reg);

    // Get the initial value of the aligned dword
    gpr dword_address = address & ~0x7;
    uint64_t initial_value = load_doubleword(rdram, 0, dword_address);

    // Mask the initial value and shift the input value appropriately
    gpr misalignment = address & 0x7;
    uint64_t masked_initial_value = initial_value & ~(0xFFFFFFFFFFFFFFFFu << (56 - misalignment * 8));
    uint64_t shifted_input_value = val << (56 - misalignment * 8);
    
    uint64_t ret = masked_initial_value | shifted_input_value;
    uint32_t lo = (uint32_t)ret;
    uint32_t hi = (uint32_t)(ret >> 32);

    MEM_W(0, dword_address + 4) = lo;
    MEM_W(0, dword_address + 0) = hi;
}

static inline uint32_t get_cop1_cs() {
    uint32_t rounding_mode = 0;
    switch (fegetround()) {
        // round to nearest value
        case FE_TONEAREST:
        default:
            rounding_mode = 0;
            break;
        // round to zero (truncate)
        case FE_TOWARDZERO:
            rounding_mode = 1;
            break;
        // round to positive infinity (ceil)
        case FE_UPWARD:
            rounding_mode = 2;
            break;
        // round to negative infinity (floor)
        case FE_DOWNWARD:
            rounding_mode = 3;
            break;
    }
    return rounding_mode;
}

static inline void set_cop1_cs(uint32_t val) {
    uint32_t rounding_mode = val & 0x3;
    int round = FE_TONEAREST;
    switch (rounding_mode) {
        case 0: // round to nearest value
            round = FE_TONEAREST;
            break;
        case 1: // round to zero (truncate)
            round = FE_TOWARDZERO;
            break;
        case 2: // round to positive infinity (ceil)
            round = FE_UPWARD;
            break;
        case 3: // round to negative infinity (floor)
            round = FE_DOWNWARD;
            break;
    }
    fesetround(round);
}

#define S32(val) \
    ((int32_t)(val))
    
#define U32(val) \
    ((uint32_t)(val))

#define S64(val) \
    ((int64_t)(val))

#define U64(val) \
    ((uint64_t)(val))

#define MUL_S(val1, val2) \
    ((val1) * (val2))

#define MUL_D(val1, val2) \
    ((val1) * (val2))

#define DIV_S(val1, val2) \
    ((val1) / (val2))

#define DIV_D(val1, val2) \
    ((val1) / (val2))

#define CVT_S_W(val) \
    ((float)((int32_t)(val)))

#define CVT_D_W(val) \
    ((double)((int32_t)(val)))

#define CVT_D_L(val) \
    ((double)((int64_t)(val)))

#define CVT_S_L(val) \
    ((float)((int64_t)(val)))

#define CVT_D_S(val) \
    ((double)(val))

#define CVT_S_D(val) \
    ((float)(val))

#define TRUNC_W_S(val) \
    ((int32_t)(val))

#define TRUNC_W_D(val) \
    ((int32_t)(val))

#define TRUNC_L_S(val) \
    ((int64_t)(val))

#define TRUNC_L_D(val) \
    ((int64_t)(val))

#define DEFAULT_ROUNDING_MODE 0

static inline int32_t do_cvt_w_s(float val) {
    // Rounding mode aware float to 32-bit int conversion.
    return (int32_t)lrintf(val);
}

#define CVT_W_S(val) \
    do_cvt_w_s(val)

static inline int64_t do_cvt_l_s(float val) {
    // Rounding mode aware float to 64-bit int conversion.
    return (int64_t)llrintf(val);
}

#define CVT_L_S(val) \
    do_cvt_l_s(val);

static inline int32_t do_cvt_w_d(double val) {
    // Rounding mode aware double to 32-bit int conversion.
    return (int32_t)lrint(val);
}

#define CVT_W_D(val) \
    do_cvt_w_d(val)

static inline int64_t do_cvt_l_d(double val) {
    // Rounding mode aware double to 64-bit int conversion.
    return (int64_t)llrint(val);
}

#define CVT_L_D(val) \
    do_cvt_l_d(val)

#define NAN_CHECK(val) \
    assert(val == val)

//#define NAN_CHECK(val)

typedef union {
    double d;
    struct {
        float fl;
        float fh;
    };
    struct {
        uint32_t u32l;
        uint32_t u32h;
    };
    uint64_t u64;
} fpr;

typedef struct {
    gpr r0,  r1,  r2,  r3,  r4,  r5,  r6,  r7,
        r8,  r9,  r10, r11, r12, r13, r14, r15,
        r16, r17, r18, r19, r20, r21, r22, r23,
        r24, r25, r26, r27, r28, r29, r30, r31;
    fpr f0,  f1,  f2,  f3,  f4,  f5,  f6,  f7,
        f8,  f9,  f10, f11, f12, f13, f14, f15,
        f16, f17, f18, f19, f20, f21, f22, f23,
        f24, f25, f26, f27, f28, f29, f30, f31;
    uint64_t hi, lo;
    uint32_t* f_odd;
    uint32_t status_reg;
    uint8_t mips3_float_mode;
} recomp_context;

// Checks if the target is an even float register or that mips3 float mode is enabled
#define CHECK_FR(ctx, idx) \
    assert(((idx) & 1) == 0 || (ctx)->mips3_float_mode)

#ifdef __cplusplus
extern "C" {
#endif

void cop0_status_write(recomp_context* ctx, gpr value);
gpr cop0_status_read(recomp_context* ctx);
void switch_error(const char* func, uint32_t vram, uint32_t jtbl);
void do_break(uint32_t vram);

// The function signature for all recompiler output functions.
typedef void (recomp_func_t)(uint8_t* rdram, recomp_context* ctx);
// The function signature for special functions that need a third argument.
// These get called via generated shims to allow providing some information about the caller, such as mod id.
typedef void (recomp_func_ext_t)(uint8_t* rdram, recomp_context* ctx, uintptr_t arg);

recomp_func_t* get_function(int32_t vram);
recomp_func_t* get_function_or_null(int32_t vram);

#define LOOKUP_FUNC(val) \
    get_function((int32_t)(val))

#define LOOKUP_FUNC_OR_NULL(val) \
    get_function_or_null((int32_t)(val))

extern int32_t* section_addresses;

#define LO16(x) \
    ((x) & 0xFFFF)

#define HI16(x) \
    (((x) >> 16) + (((x) >> 15) & 1))

#define RELOC_HI16(section_index, offset) \
    HI16(section_addresses[section_index] + (offset))

#define RELOC_LO16(section_index, offset) \
    LO16(section_addresses[section_index] + (offset))

void recomp_syscall_handler(uint8_t* rdram, recomp_context* ctx, int32_t instruction_vram);

void pause_self(uint8_t *rdram);

#ifdef __cplusplus
}
#endif

#endif
