#include "ultramodern/ultra64.h"

#define K0BASE        0x80000000
#define K1BASE        0xA0000000
#define K2BASE        0xC0000000
#define IS_KSEG0(x)   ((u32)(x) >= K0BASE && (u32)(x) < K1BASE)
#define IS_KSEG1(x)   ((u32)(x) >= K1BASE && (u32)(x) < K2BASE)
#define K0_TO_PHYS(x) ((u32)(x)&0x1FFFFFFF)
#define K1_TO_PHYS(x) ((u32)(x)&0x1FFFFFFF)

u32 osVirtualToPhysical(PTR(void) addr) {
    uintptr_t addr_val = (uintptr_t)addr;
    if (IS_KSEG0(addr_val)) {
        return K0_TO_PHYS(addr_val);
    } else if (IS_KSEG1(addr_val)) {
        return K1_TO_PHYS(addr_val);
    } else {
        const u32 va = (u32)addr_val;
        // Same window as RECOMP_USEG_BANKS_* in recomp.h: paged Turok 2 banks.
        if (va >= 0x00400000u && va < 0x00900000u) {
            return 0x00B00000u + (va - 0x00400000u);
        }
        return va;
    }
}

