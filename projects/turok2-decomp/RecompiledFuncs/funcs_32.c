#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_004217A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004217A0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004217A4: lw          $v0, 0x9BC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9BC);
    // 0x004217A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004217AC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004217B0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x004217B4: bne         $v0, $zero, L_00421868
    if (ctx->r2 != 0) {
        // 0x004217B8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_00421868;
    }
    // 0x004217B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x004217BC: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004217C0: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x004217C4: beq         $v0, $zero, L_004217DC
    if (ctx->r2 == 0) {
        // 0x004217C8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_004217DC;
    }
    // 0x004217C8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x004217CC: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x004217D0: lw          $v1, 0x2028($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2028);
    // 0x004217D4: j           L_004217E8
    // 0x004217D8: nop

        goto L_004217E8;
    // 0x004217D8: nop

L_004217DC:
    // 0x004217DC: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x004217E0: lb          $v1, 0x4($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X4);
    // 0x004217E4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_004217E8:
    // 0x004217E8: beq         $v1, $v0, L_00421868
    if (ctx->r3 == ctx->r2) {
        // 0x004217EC: nop
    
            goto L_00421868;
    }
    // 0x004217EC: nop

    // 0x004217F0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004217F4: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x004217F8: beq         $v0, $zero, L_00421810
    if (ctx->r2 == 0) {
        // 0x004217FC: nop
    
            goto L_00421810;
    }
    // 0x004217FC: nop

    // 0x00421800: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x00421804: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x00421808: j           L_00421818
    // 0x0042180C: nop

        goto L_00421818;
    // 0x0042180C: nop

L_00421810:
    // 0x00421810: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x00421814: lb          $a0, 0x4($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X4);
L_00421818:
    // 0x00421818: jal         0x0028591C
    // 0x0042181C: nop

    func_0028591C(rdram, ctx);
        goto after_0;
    // 0x0042181C: nop

    after_0:
    // 0x00421820: beq         $v0, $zero, L_00421868
    if (ctx->r2 == 0) {
        // 0x00421824: nop
    
            goto L_00421868;
    }
    // 0x00421824: nop

    // 0x00421828: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0042182C: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x00421830: beq         $v0, $zero, L_00421848
    if (ctx->r2 == 0) {
        // 0x00421834: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00421848;
    }
    // 0x00421834: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00421838: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0042183C: lw          $a1, 0x2028($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2028);
    // 0x00421840: j           L_00421850
    // 0x00421844: nop

        goto L_00421850;
    // 0x00421844: nop

L_00421848:
    // 0x00421848: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x0042184C: lb          $a1, 0x4($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X4);
L_00421850:
    // 0x00421850: jal         0x0041DD90
    // 0x00421854: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_0041DD90(rdram, ctx);
        goto after_1;
    // 0x00421854: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x00421858: beq         $v0, $zero, L_00421868
    if (ctx->r2 == 0) {
        // 0x0042185C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00421868;
    }
    // 0x0042185C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00421860: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00421864: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
L_00421868:
    // 0x00421868: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0042186C: lw          $v0, 0x9BC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9BC);
    // 0x00421870: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00421874: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00421878: jr          $ra
    // 0x0042187C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0042187C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0045ADF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045ADF4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0045ADF8: lw          $v0, 0x201C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X201C);
    // 0x0045ADFC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0045AE00: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0045AE04: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0045AE08: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0045AE0C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0045AE10: lw          $s0, 0x1C($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X1C);
    // 0x0045AE14: jal         0x004160F0
    // 0x0045AE18: sra         $s0, $s0, 8
    ctx->r16 = S32(SIGNED(ctx->r16) >> 8);
    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x0045AE18: sra         $s0, $s0, 8
    ctx->r16 = S32(SIGNED(ctx->r16) >> 8);
    after_0:
    // 0x0045AE1C: addiu       $v0, $v0, -0x3
    ctx->r2 = ADD32(ctx->r2, -0X3);
    // 0x0045AE20: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0045AE24: addiu       $a1, $a1, 0x1404
    ctx->r5 = ADD32(ctx->r5, 0X1404);
    // 0x0045AE28: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x0045AE2C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0045AE30: jal         0x0029E3E0
    // 0x0045AE34: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_1;
    // 0x0045AE34: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_1:
    // 0x0045AE38: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0045AE3C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0045AE40: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0045AE44: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0045AE48: jr          $ra
    // 0x0045AE4C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0045AE4C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0045A2EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045A2EC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0045A2F0: lw          $v0, 0x2010($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2010);
    // 0x0045A2F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0045A2F8: bne         $v0, $zero, L_0045A310
    if (ctx->r2 != 0) {
        // 0x0045A2FC: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_0045A310;
    }
    // 0x0045A2FC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0045A300: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0045A304: lw          $v0, 0x2014($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2014);
    // 0x0045A308: beq         $v0, $zero, L_0045A318
    if (ctx->r2 == 0) {
        // 0x0045A30C: nop
    
            goto L_0045A318;
    }
    // 0x0045A30C: nop

L_0045A310:
    // 0x0045A310: jal         0x002053A8
    // 0x0045A314: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_0;
    // 0x0045A314: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
L_0045A318:
    // 0x0045A318: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0045A31C: lw          $a1, 0x2010($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2010);
    // 0x0045A320: beq         $a1, $zero, L_0045A330
    if (ctx->r5 == 0) {
        // 0x0045A324: nop
    
            goto L_0045A330;
    }
    // 0x0045A324: nop

    // 0x0045A328: jal         0x002052D8
    // 0x0045A32C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_1;
    // 0x0045A32C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
L_0045A330:
    // 0x0045A330: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0045A334: lw          $a1, 0x2014($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2014);
    // 0x0045A338: beq         $a1, $zero, L_0045A348
    if (ctx->r5 == 0) {
        // 0x0045A33C: nop
    
            goto L_0045A348;
    }
    // 0x0045A33C: nop

    // 0x0045A340: jal         0x002052D8
    // 0x0045A344: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_2;
    // 0x0045A344: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_2:
L_0045A348:
    // 0x0045A348: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0045A34C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045A350: sw          $zero, 0x2010($at)
    MEM_W(0X2010, ctx->r1) = 0;
    // 0x0045A354: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045A358: sw          $zero, 0x2014($at)
    MEM_W(0X2014, ctx->r1) = 0;
    // 0x0045A35C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045A360: sw          $zero, 0x2018($at)
    MEM_W(0X2018, ctx->r1) = 0;
    // 0x0045A364: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045A368: sw          $zero, 0x201C($at)
    MEM_W(0X201C, ctx->r1) = 0;
    // 0x0045A36C: jr          $ra
    // 0x0045A370: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0045A370: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0045BF60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00422FB8:
    // 0x0045BF60: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
L_00422FE8:
    // 0x0045BF64: lw          $v0, 0x980($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X980);
L_00423020:
    // 0x0045BF68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0045BF6C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0045BF70: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0045BF74: bne         $v0, $zero, L_0045C038
    if (ctx->r2 != 0) {
        // 0x0045BF78: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_0045C038;
    }
    // 0x0045BF78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0045BF7C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045BF80: lw          $v0, 0x9AC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9AC);
    // 0x0045BF84: bne         $v0, $zero, L_0045C040
    if (ctx->r2 != 0) {
        // 0x0045BF88: nop
    
            goto L_0045C040;
    }
    // 0x0045BF88: nop

    // 0x0045BF8C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045BF90: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x0045BF94: beq         $v0, $zero, L_0045BFAC
    if (ctx->r2 == 0) {
        // 0x0045BF98: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0045BFAC;
    }
    // 0x0045BF98: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0045BF9C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0045BFA0: lw          $v1, 0x2028($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2028);
    // 0x0045BFA4: j           L_00422FB8
    // 0x0045BFA8: nop

    entry_00422FB8(rdram, ctx);
    return;
    // 0x0045BFA8: nop

L_0045BFAC:
    // 0x0045BFAC: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x0045BFB0: lb          $v1, 0x4($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X4);
    // 0x0045BFB4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0045BFB8: beq         $v1, $v0, L_0045C038
    if (ctx->r3 == ctx->r2) {
        // 0x0045BFBC: nop
    
            goto L_0045C038;
    }
    // 0x0045BFBC: nop

    // 0x0045BFC0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045BFC4: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x0045BFC8: beq         $v0, $zero, L_0045BFE0
    if (ctx->r2 == 0) {
        // 0x0045BFCC: nop
    
            goto L_0045BFE0;
    }
    // 0x0045BFCC: nop

    // 0x0045BFD0: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0045BFD4: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x0045BFD8: j           L_00422FE8
    // 0x0045BFDC: nop

    entry_00422FE8(rdram, ctx);
    return;
    // 0x0045BFDC: nop

L_0045BFE0:
    // 0x0045BFE0: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x0045BFE4: lb          $a0, 0x4($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X4);
    // 0x0045BFE8: jal         0x0028591C
    // 0x0045BFEC: nop

    func_0028591C(rdram, ctx);
        goto after_0;
    // 0x0045BFEC: nop

    after_0:
    // 0x0045BFF0: beq         $v0, $zero, L_0045C038
    if (ctx->r2 == 0) {
        // 0x0045BFF4: nop
    
            goto L_0045C038;
    }
    // 0x0045BFF4: nop

    // 0x0045BFF8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045BFFC: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x0045C000: beq         $v0, $zero, L_0045C018
    if (ctx->r2 == 0) {
        // 0x0045C004: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0045C018;
    }
    // 0x0045C004: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0045C008: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0045C00C: lw          $a1, 0x2028($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2028);
    // 0x0045C010: j           L_00423020
    // 0x0045C014: nop

    entry_00423020(rdram, ctx);
    return;
    // 0x0045C014: nop

L_0045C018:
    // 0x0045C018: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x0045C01C: lb          $a1, 0x4($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X4);
    // 0x0045C020: jal         0x0041DCB0
    // 0x0045C024: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_0041DCB0(rdram, ctx);
        goto after_1;
    // 0x0045C024: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x0045C028: beq         $v0, $zero, L_0045C038
    if (ctx->r2 == 0) {
        // 0x0045C02C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0045C038;
    }
    // 0x0045C02C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045C030: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045C034: sw          $v0, 0x9AC($at)
    MEM_W(0X9AC, ctx->r1) = ctx->r2;
L_0045C038:
    // 0x0045C038: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045C03C: lw          $v0, 0x9AC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9AC);
L_0045C040:
    // 0x0045C040: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0045C044: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0045C048: jr          $ra
    // 0x0045C04C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0045C04C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00443170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0040A224:
    // 0x00443170: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00443174: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00443178: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0044317C: lw          $v1, 0x1CC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1CC);
    // 0x00443180: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00443184: beq         $v1, $v0, L_004431E4
    if (ctx->r3 == ctx->r2) {
        // 0x00443188: sw          $ra, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r31;
            goto L_004431E4;
    }
    // 0x00443188: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x0044318C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x00443190: beq         $v0, $zero, L_00443234
    if (ctx->r2 == 0) {
        // 0x00443194: sll         $v0, $a0, 2
        ctx->r2 = S32(ctx->r4 << 2);
            goto L_00443234;
    }
    // 0x00443194: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x00443198: bnel        $v1, $zero, L_00443238
    if (ctx->r3 != 0) {
        // 0x0044319C: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_00443238;
    }
    goto skip_0;
    // 0x0044319C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    skip_0:
    // 0x004431A0: lw          $v0, 0xC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC);
    // 0x004431A4: andi        $v0, $v0, 0x1C
    ctx->r2 = ctx->r2 & 0X1C;
    // 0x004431A8: beq         $v0, $zero, L_004431C0
    if (ctx->r2 == 0) {
        // 0x004431AC: addiu       $v0, $zero, 0x55FA
        ctx->r2 = ADD32(0, 0X55FA);
            goto L_004431C0;
    }
    // 0x004431AC: addiu       $v0, $zero, 0x55FA
    ctx->r2 = ADD32(0, 0X55FA);
    // 0x004431B0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x004431B4: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x004431B8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x004431BC: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
L_004431C0:
    // 0x004431C0: lw          $v0, 0xC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC);
    // 0x004431C4: andi        $v0, $v0, 0x1C0
    ctx->r2 = ctx->r2 & 0X1C0;
    // 0x004431C8: beq         $v0, $zero, L_00443230
    if (ctx->r2 == 0) {
        // 0x004431CC: sll         $v1, $a0, 2
        ctx->r3 = S32(ctx->r4 << 2);
            goto L_00443230;
    }
    // 0x004431CC: sll         $v1, $a0, 2
    ctx->r3 = S32(ctx->r4 << 2);
    // 0x004431D0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x004431D4: addiu       $v0, $sp, 0x10
    ctx->r2 = ADD32(ctx->r29, 0X10);
    // 0x004431D8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x004431DC: j           L_0040A224
    // 0x004431E0: addiu       $v1, $zero, 0x5604
    ctx->r3 = ADD32(0, 0X5604);
    entry_0040A224(rdram, ctx);
    return;
    // 0x004431E0: addiu       $v1, $zero, 0x5604
    ctx->r3 = ADD32(0, 0X5604);
L_004431E4:
    // 0x004431E4: lw          $v0, 0xC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC);
    // 0x004431E8: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x004431EC: beq         $v0, $zero, L_00443204
    if (ctx->r2 == 0) {
        // 0x004431F0: addiu       $v0, $zero, 0x5654
        ctx->r2 = ADD32(0, 0X5654);
            goto L_00443204;
    }
    // 0x004431F0: addiu       $v0, $zero, 0x5654
    ctx->r2 = ADD32(0, 0X5654);
    // 0x004431F4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x004431F8: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x004431FC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00443200: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
L_00443204:
    // 0x00443204: lw          $v0, 0xC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC);
    // 0x00443208: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x0044320C: beq         $v0, $zero, L_00443230
    if (ctx->r2 == 0) {
        // 0x00443210: sll         $v1, $a0, 2
        ctx->r3 = S32(ctx->r4 << 2);
            goto L_00443230;
    }
    // 0x00443210: sll         $v1, $a0, 2
    ctx->r3 = S32(ctx->r4 << 2);
    // 0x00443214: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00443218: addiu       $v0, $sp, 0x10
    ctx->r2 = ADD32(ctx->r29, 0X10);
    // 0x0044321C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00443220: addiu       $v1, $zero, 0x565E
    ctx->r3 = ADD32(0, 0X565E);
    // 0x00443224: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x00443228: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x0044322C: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
L_00443230:
    // 0x00443230: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
L_00443234:
    // 0x00443234: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
L_00443238:
    // 0x00443238: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x0044323C: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x00443240: jal         0x0026D518
    // 0x00443244: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    func_0026D518(rdram, ctx);
        goto after_0;
    // 0x00443244: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    after_0:
    // 0x00443248: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0044324C: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x00443250: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x00443254: jr          $ra
    // 0x00443258: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00443258: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0040BEE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040BEE4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x0040BEE8: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0040BEEC: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0040BEF0: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x0040BEF4: addu        $s6, $a1, $zero
    ctx->r22 = ADD32(ctx->r5, 0);
    // 0x0040BEF8: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x0040BEFC: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x0040BF00: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0040BF04: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0040BF08: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x0040BF0C: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x0040BF10: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0040BF14: addiu       $v0, $v0, -0x490
    ctx->r2 = ADD32(ctx->r2, -0X490);
    // 0x0040BF18: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x0040BF1C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x0040BF20: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0040BF24: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x0040BF28: addiu       $s1, $v0, 0x1C
    ctx->r17 = ADD32(ctx->r2, 0X1C);
    // 0x0040BF2C: lw          $s4, 0x14C($v1)
    ctx->r20 = MEM_W(ctx->r3, 0X14C);
L_0040BF30:
    // 0x0040BF30: sllv        $v0, $s5, $s0
    ctx->r2 = S32(ctx->r21 << (ctx->r16 & 31));
    // 0x0040BF34: and         $v0, $s4, $v0
    ctx->r2 = ctx->r20 & ctx->r2;
    // 0x0040BF38: beq         $v0, $zero, L_0040BFB8
    if (ctx->r2 == 0) {
        // 0x0040BF3C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0040BFB8;
    }
    // 0x0040BF3C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0040BF40: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x0040BF44: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x0040BF48: sw          $s0, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r16;
    // 0x0040BF4C: jal         0x0021DC84
    // 0x0040BF50: sw          $s0, 0x1C($s3)
    MEM_W(0X1C, ctx->r19) = ctx->r16;
    func_0021DC84(rdram, ctx);
        goto after_0;
    // 0x0040BF50: sw          $s0, 0x1C($s3)
    MEM_W(0X1C, ctx->r19) = ctx->r16;
    after_0:
    // 0x0040BF54: jal         0x00284188
    // 0x0040BF58: nop

    func_00284188(rdram, ctx);
        goto after_1;
    // 0x0040BF58: nop

    after_1:
    // 0x0040BF5C: bnel        $v0, $zero, L_0040BF78
    if (ctx->r2 != 0) {
        // 0x0040BF60: sw          $zero, 0x10($sp)
        MEM_W(0X10, ctx->r29) = 0;
            goto L_0040BF78;
    }
    goto skip_0;
    // 0x0040BF60: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    skip_0:
    // 0x0040BF64: jal         0x00236324
    // 0x0040BF68: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00236324(rdram, ctx);
        goto after_2;
    // 0x0040BF68: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x0040BF6C: jal         0x00235898
    // 0x0040BF70: nop

    func_00235898(rdram, ctx);
        goto after_3;
    // 0x0040BF70: nop

    after_3:
    // 0x0040BF74: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
L_0040BF78:
    // 0x0040BF78: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x0040BF7C: lb          $v0, 0x151($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X151);
    // 0x0040BF80: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0040BF84: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0040BF88: lw          $a0, 0xC($s3)
    ctx->r4 = MEM_W(ctx->r19, 0XC);
    // 0x0040BF8C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0040BF90: lw          $v0, 0x6D1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D1C);
    // 0x0040BF94: lw          $a1, 0x98($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X98);
    // 0x0040BF98: sllv        $a3, $v0, $a2
    ctx->r7 = S32(ctx->r2 << (ctx->r6 & 31));
    // 0x0040BF9C: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x0040BFA0: sll         $a3, $a3, 3
    ctx->r7 = S32(ctx->r7 << 3);
    // 0x0040BFA4: addiu       $a3, $a3, 0x110
    ctx->r7 = ADD32(ctx->r7, 0X110);
    // 0x0040BFA8: jal         0x0020A33C
    // 0x0040BFAC: addu        $a3, $s2, $a3
    ctx->r7 = ADD32(ctx->r18, ctx->r7);
    func_0020A33C(rdram, ctx);
        goto after_4;
    // 0x0040BFAC: addu        $a3, $s2, $a3
    ctx->r7 = ADD32(ctx->r18, ctx->r7);
    after_4:
    // 0x0040BFB0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0040BFB4: sw          $zero, -0x4750($at)
    MEM_W(-0X4750, ctx->r1) = 0;
L_0040BFB8:
    // 0x0040BFB8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0040BFBC: slti        $v0, $s0, 0xF
    ctx->r2 = SIGNED(ctx->r16) < 0XF ? 1 : 0;
    // 0x0040BFC0: bne         $v0, $zero, L_0040BF30
    if (ctx->r2 != 0) {
        // 0x0040BFC4: addiu       $s1, $s1, 0x68
        ctx->r17 = ADD32(ctx->r17, 0X68);
            goto L_0040BF30;
    }
    // 0x0040BFC4: addiu       $s1, $s1, 0x68
    ctx->r17 = ADD32(ctx->r17, 0X68);
    // 0x0040BFC8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x0040BFCC: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x0040BFD0: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x0040BFD4: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x0040BFD8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0040BFDC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0040BFE0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0040BFE4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0040BFE8: jr          $ra
    // 0x0040BFEC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x0040BFEC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00286A04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00286A04: lui         $t3, 0xDC08
    ctx->r11 = S32(0XDC08 << 16);
    // 0x00286A08: lui         $a3, 0x800E
    ctx->r7 = S32(0X800E << 16);
    // 0x00286A0C: addiu       $a3, $a3, -0x71DC
    ctx->r7 = ADD32(ctx->r7, -0X71DC);
    // 0x00286A10: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00286A14: lw          $v0, 0x7070($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7070);
    // 0x00286A18: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00286A1C: lwc1        $f2, -0x6298($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X6298);
    // 0x00286A20: lw          $v0, 0x114($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X114);
    // 0x00286A24: ori         $t3, $t3, 0x8
    ctx->r11 = ctx->r11 | 0X8;
    // 0x00286A28: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00286A2C: sw          $v0, -0x71DC($at)
    MEM_W(-0X71DC, ctx->r1) = ctx->r2;
    // 0x00286A30: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x00286A34: lui         $v0, 0xDB06
    ctx->r2 = S32(0XDB06 << 16);
    // 0x00286A38: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x00286A3C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x00286A40: addiu       $a1, $a0, 0x8
    ctx->r5 = ADD32(ctx->r4, 0X8);
    // 0x00286A44: sw          $a0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r4;
    // 0x00286A48: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00286A4C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x00286A50: lui         $v1, 0xDE00
    ctx->r3 = S32(0XDE00 << 16);
    // 0x00286A54: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00286A58: addiu       $v0, $v0, -0x4F00
    ctx->r2 = ADD32(ctx->r2, -0X4F00);
    // 0x00286A5C: addiu       $a2, $a0, 0x10
    ctx->r6 = ADD32(ctx->r4, 0X10);
    // 0x00286A60: sw          $a1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r5;
    // 0x00286A64: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x00286A68: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00286A6C: addiu       $v0, $v0, -0x4ED0
    ctx->r2 = ADD32(ctx->r2, -0X4ED0);
    // 0x00286A70: addiu       $t2, $a0, 0x18
    ctx->r10 = ADD32(ctx->r4, 0X18);
    // 0x00286A74: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x00286A78: sw          $a2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r6;
    // 0x00286A7C: sw          $v1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r3;
    // 0x00286A80: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x00286A84: lui         $v0, 0xFE00
    ctx->r2 = S32(0XFE00 << 16);
    // 0x00286A88: sw          $t2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r10;
    // 0x00286A8C: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
    // 0x00286A90: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00286A94: addiu       $v0, $v0, -0x4F58
    ctx->r2 = ADD32(ctx->r2, -0X4F58);
    // 0x00286A98: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00286A9C: lw          $v1, 0x6D1C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6D1C);
    // 0x00286AA0: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x00286AA4: lw          $a1, 0xA78($a1)
    ctx->r5 = MEM_W(ctx->r5, 0XA78);
    // 0x00286AA8: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x00286AAC: lw          $t1, 0x2034($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X2034);
    // 0x00286AB0: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x00286AB4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00286AB8: sw          $a1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r5;
    // 0x00286ABC: sll         $a2, $t1, 1
    ctx->r6 = S32(ctx->r9 << 1);
    // 0x00286AC0: addiu       $v0, $zero, 0x3FF
    ctx->r2 = ADD32(0, 0X3FF);
    // 0x00286AC4: sh          $a2, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r6;
    // 0x00286AC8: sh          $a2, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r6;
    // 0x00286ACC: addiu       $a2, $a0, 0x20
    ctx->r6 = ADD32(ctx->r4, 0X20);
    // 0x00286AD0: sh          $v0, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r2;
    // 0x00286AD4: addiu       $v0, $a0, 0x28
    ctx->r2 = ADD32(ctx->r4, 0X28);
    // 0x00286AD8: addiu       $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
    // 0x00286ADC: mtc1        $t1, $f0
    ctx->f0.u32l = ctx->r9;
    // 0x00286AE0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00286AE4: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00286AE8: lw          $a1, 0x2030($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2030);
    // 0x00286AEC: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00286AF0: sh          $zero, 0x6($v1)
    MEM_H(0X6, ctx->r3) = 0;
    // 0x00286AF4: sh          $zero, 0xC($v1)
    MEM_H(0XC, ctx->r3) = 0;
    // 0x00286AF8: sh          $zero, 0xE($v1)
    MEM_H(0XE, ctx->r3) = 0;
    // 0x00286AFC: sll         $t0, $a1, 1
    ctx->r8 = S32(ctx->r5 << 1);
    // 0x00286B00: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x00286B04: mtc1        $a1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r5;
    // 0x00286B08: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00286B0C: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x00286B10: sh          $t0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r8;
    // 0x00286B14: sh          $t0, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r8;
    // 0x00286B18: sw          $a2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r6;
    // 0x00286B1C: sw          $t3, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r11;
    // 0x00286B20: sw          $v1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r3;
    // 0x00286B24: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x00286B28: lui         $v0, 0xED00
    ctx->r2 = S32(0XED00 << 16);
    // 0x00286B2C: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
    // 0x00286B30: trunc.w.s   $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f1.fl);
    // 0x00286B34: mfc1        $v0, $f3
    ctx->r2 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00286B38: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x00286B3C: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x00286B40: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00286B44: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00286B48: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x00286B4C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00286B50: jr          $ra
    // 0x00286B54: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    return;
    // 0x00286B54: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
;}
RECOMP_FUNC void func_00204DB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00204DB8: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00204DBC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00204DC0: bne         $v0, $zero, L_00204DD8
    if (ctx->r2 != 0) {
        // 0x00204DC4: sw          $v0, 0x8($a0)
        MEM_W(0X8, ctx->r4) = ctx->r2;
            goto L_00204DD8;
    }
    // 0x00204DC4: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x00204DC8: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x00204DCC: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x00204DD0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00204DD4: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
L_00204DD8:
    // 0x00204DD8: jr          $ra
    // 0x00204DDC: nop

    return;
    // 0x00204DDC: nop

;}
RECOMP_FUNC void func_0029B140(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029B140: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0029B144: lw          $v0, -0x76DC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X76DC);
    // 0x0029B148: jr          $ra
    // 0x0029B14C: nop

    return;
    // 0x0029B14C: nop

;}
RECOMP_FUNC void func_0025A734(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025A734: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025A738: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025A73C: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025A740: lhu         $a3, 0x84($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X84);
    // 0x0025A744: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025A748: addiu       $a2, $a2, -0x28
    ctx->r6 = ADD32(ctx->r6, -0X28);
    // 0x0025A74C: jal         0x00245A98
    // 0x0025A750: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025A750: nop

    after_0:
    // 0x0025A754: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025A758: jr          $ra
    // 0x0025A75C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025A75C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0025ABAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025ABAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025ABB0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025ABB4: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025ABB8: lhu         $a3, 0x7C($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X7C);
    // 0x0025ABBC: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025ABC0: addiu       $a2, $a2, 0x4E0
    ctx->r6 = ADD32(ctx->r6, 0X4E0);
    // 0x0025ABC4: jal         0x00245A98
    // 0x0025ABC8: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025ABC8: nop

    after_0:
    // 0x0025ABCC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025ABD0: jr          $ra
    // 0x0025ABD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025ABD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0025556C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025556C: sw          $zero, 0x18($a1)
    MEM_W(0X18, ctx->r5) = 0;
    // 0x00255570: sw          $zero, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = 0;
    // 0x00255574: jr          $ra
    // 0x00255578: sw          $zero, 0x20($a1)
    MEM_W(0X20, ctx->r5) = 0;
    return;
    // 0x00255578: sw          $zero, 0x20($a1)
    MEM_W(0X20, ctx->r5) = 0;
;}
RECOMP_FUNC void func_0028E754(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028E754: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x0028E758: addiu       $a2, $a2, 0x6A0
    ctx->r6 = ADD32(ctx->r6, 0X6A0);
    // 0x0028E75C: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x0028E760: lw          $v1, 0x4($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X4);
    // 0x0028E764: lw          $a1, 0x8($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X8);
    // 0x0028E768: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0028E76C: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    // 0x0028E770: sw          $a1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r5;
    // 0x0028E774: lw          $v0, 0xC($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XC);
    // 0x0028E778: lw          $v1, 0x10($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X10);
    // 0x0028E77C: lw          $a1, 0x14($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X14);
    // 0x0028E780: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
    // 0x0028E784: sw          $v1, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r3;
    // 0x0028E788: sw          $a1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r5;
    // 0x0028E78C: lw          $v0, 0x18($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X18);
    // 0x0028E790: lw          $v1, 0x1C($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X1C);
    // 0x0028E794: sw          $v0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r2;
    // 0x0028E798: sw          $v1, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r3;
    // 0x0028E79C: jr          $ra
    // 0x0028E7A0: nop

    return;
    // 0x0028E7A0: nop

;}
RECOMP_FUNC void func_00279028(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00279028: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0027902C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00279030: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00279034: lui         $a2, 0xE300
    ctx->r6 = S32(0XE300 << 16);
    // 0x00279038: ori         $a2, $a2, 0xA01
    ctx->r6 = ctx->r6 | 0XA01;
    // 0x0027903C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00279040: lui         $s1, 0x800E
    ctx->r17 = S32(0X800E << 16);
    // 0x00279044: addiu       $s1, $s1, -0x71DC
    ctx->r17 = ADD32(ctx->r17, -0X71DC);
    // 0x00279048: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    // 0x0027904C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00279050: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00279054: lui         $v1, 0xE700
    ctx->r3 = S32(0XE700 << 16);
    // 0x00279058: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0027905C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x00279060: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x00279064: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x00279068: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x0027906C: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x00279070: sw          $v1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r3;
    // 0x00279074: lui         $v1, 0x10
    ctx->r3 = S32(0X10 << 16);
    // 0x00279078: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x0027907C: jal         0x00207A70
    // 0x00279080: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    func_00207A70(rdram, ctx);
        goto after_0;
    // 0x00279080: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    after_0:
    // 0x00279084: jal         0x00207FEC
    // 0x00279088: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    func_00207FEC(rdram, ctx);
        goto after_1;
    // 0x00279088: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    after_1:
    // 0x0027908C: lui         $a1, 0xD700
    ctx->r5 = S32(0XD700 << 16);
    // 0x00279090: ori         $a1, $a1, 0x2
    ctx->r5 = ctx->r5 | 0X2;
    // 0x00279094: lui         $a0, 0x8000
    ctx->r4 = S32(0X8000 << 16);
    // 0x00279098: ori         $a0, $a0, 0x8000
    ctx->r4 = ctx->r4 | 0X8000;
    // 0x0027909C: lui         $a2, 0xE300
    ctx->r6 = S32(0XE300 << 16);
    // 0x002790A0: ori         $a2, $a2, 0x1001
    ctx->r6 = ctx->r6 | 0X1001;
    // 0x002790A4: lui         $a3, 0xE300
    ctx->r7 = S32(0XE300 << 16);
    // 0x002790A8: ori         $a3, $a3, 0xC00
    ctx->r7 = ctx->r7 | 0XC00;
    // 0x002790AC: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x002790B0: lui         $v0, 0xFB00
    ctx->r2 = S32(0XFB00 << 16);
    // 0x002790B4: addu        $v1, $t0, $zero
    ctx->r3 = ADD32(ctx->r8, 0);
    // 0x002790B8: addiu       $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x002790BC: sw          $t0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r8;
    // 0x002790C0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x002790C4: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x002790C8: or          $s0, $s0, $v0
    ctx->r16 = ctx->r16 | ctx->r2;
    // 0x002790CC: addiu       $v0, $t0, 0x8
    ctx->r2 = ADD32(ctx->r8, 0X8);
    // 0x002790D0: sw          $s0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r16;
    // 0x002790D4: addiu       $v1, $t0, 0x10
    ctx->r3 = ADD32(ctx->r8, 0X10);
    // 0x002790D8: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x002790DC: sw          $a1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r5;
    // 0x002790E0: sw          $a0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r4;
    // 0x002790E4: sw          $v1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r3;
    // 0x002790E8: sw          $a2, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r6;
    // 0x002790EC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x002790F0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x002790F4: lw          $v0, 0x2038($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2038);
    // 0x002790F8: addiu       $a0, $t0, 0x18
    ctx->r4 = ADD32(ctx->r8, 0X18);
    // 0x002790FC: sw          $a0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r4;
    // 0x00279100: sw          $a3, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->r7;
    // 0x00279104: bne         $v0, $zero, L_00279128
    if (ctx->r2 != 0) {
        // 0x00279108: sw          $zero, 0x4($v1)
        MEM_W(0X4, ctx->r3) = 0;
            goto L_00279128;
    }
    // 0x00279108: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x0027910C: lui         $v1, 0xE300
    ctx->r3 = S32(0XE300 << 16);
    // 0x00279110: ori         $v1, $v1, 0x1201
    ctx->r3 = ctx->r3 | 0X1201;
    // 0x00279114: addiu       $v0, $t0, 0x20
    ctx->r2 = ADD32(ctx->r8, 0X20);
    // 0x00279118: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x0027911C: sw          $v1, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->r3;
    // 0x00279120: j           L_00279144
    // 0x00279124: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
        goto L_00279144;
    // 0x00279124: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
L_00279128:
    // 0x00279128: lui         $v0, 0xE300
    ctx->r2 = S32(0XE300 << 16);
    // 0x0027912C: ori         $v0, $v0, 0x1201
    ctx->r2 = ctx->r2 | 0X1201;
    // 0x00279130: addiu       $v1, $t0, 0x20
    ctx->r3 = ADD32(ctx->r8, 0X20);
    // 0x00279134: sw          $v1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r3;
    // 0x00279138: sw          $v0, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->r2;
    // 0x0027913C: addiu       $v0, $zero, 0x2000
    ctx->r2 = ADD32(0, 0X2000);
    // 0x00279140: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
L_00279144:
    // 0x00279144: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00279148: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0027914C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00279150: jr          $ra
    // 0x00279154: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00279154: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00236D10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00236D10: lw          $v1, 0x7520($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X7520);
    // 0x00236D14: beq         $v1, $zero, L_00236D40
    if (ctx->r3 == 0) {
        // 0x00236D18: nop
    
            goto L_00236D40;
    }
    // 0x00236D18: nop

L_00236D1C:
    // 0x00236D1C: lw          $v0, 0x1C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1C);
    // 0x00236D20: bne         $v0, $a1, L_00236D34
    if (ctx->r2 != ctx->r5) {
        // 0x00236D24: nop
    
            goto L_00236D34;
    }
    // 0x00236D24: nop

    // 0x00236D28: lw          $v0, 0x20($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X20);
    // 0x00236D2C: beq         $v0, $a2, L_00236D48
    if (ctx->r2 == ctx->r6) {
            // 0x00236D30: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    func_00236D48(rdram, ctx);
    return;
    }
    // 0x00236D30: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_00236D34:
    // 0x00236D34: lw          $v1, 0x4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4);
    // 0x00236D38: bne         $v1, $zero, L_00236D1C
    if (ctx->r3 != 0) {
        // 0x00236D3C: nop
    
            goto L_00236D1C;
    }
    // 0x00236D3C: nop

L_00236D40:
    // 0x00236D40: jr          $ra
    // 0x00236D44: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00236D44: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0029C6DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_00419E04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00419E04: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00419E08: lbu         $v0, -0x5514($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X5514);
    // 0x00419E0C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00419E10: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00419E14: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00419E18: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00419E1C: addiu       $a2, $v0, -0x80
    ctx->r6 = ADD32(ctx->r2, -0X80);
    // 0x00419E20: bgez        $a2, L_00419E2C
    if (SIGNED(ctx->r6) >= 0) {
        // 0x00419E24: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_00419E2C;
    }
    // 0x00419E24: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00419E28: addiu       $a2, $v0, -0x79
    ctx->r6 = ADD32(ctx->r2, -0X79);
L_00419E2C:
    // 0x00419E2C: sra         $s0, $a2, 3
    ctx->r16 = S32(SIGNED(ctx->r6) >> 3);
    // 0x00419E30: bne         $s0, $zero, L_00419E48
    if (ctx->r16 != 0) {
        // 0x00419E34: addiu       $v0, $zero, 0xF
        ctx->r2 = ADD32(0, 0XF);
            goto L_00419E48;
    }
    // 0x00419E34: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x00419E38: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00419E3C: addiu       $v0, $v0, 0x6510
    ctx->r2 = ADD32(ctx->r2, 0X6510);
    // 0x00419E40: j           L_00419ECC
    // 0x00419E44: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
        goto L_00419ECC;
    // 0x00419E44: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_00419E48:
    // 0x00419E48: bne         $s0, $v0, L_00419E60
    if (ctx->r16 != ctx->r2) {
        // 0x00419E4C: addiu       $v0, $zero, -0x10
        ctx->r2 = ADD32(0, -0X10);
            goto L_00419E60;
    }
    // 0x00419E4C: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x00419E50: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00419E54: addiu       $v0, $v0, 0x64F8
    ctx->r2 = ADD32(ctx->r2, 0X64F8);
    // 0x00419E58: j           L_00419ECC
    // 0x00419E5C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
        goto L_00419ECC;
    // 0x00419E5C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_00419E60:
    // 0x00419E60: bne         $s0, $v0, L_00419E78
    if (ctx->r16 != ctx->r2) {
        // 0x00419E64: nop
    
            goto L_00419E78;
    }
    // 0x00419E64: nop

    // 0x00419E68: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00419E6C: addiu       $v0, $v0, 0x64E0
    ctx->r2 = ADD32(ctx->r2, 0X64E0);
    // 0x00419E70: j           L_00419ECC
    // 0x00419E74: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
        goto L_00419ECC;
    // 0x00419E74: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_00419E78:
    // 0x00419E78: blez        $s0, L_00419EA0
    if (SIGNED(ctx->r16) <= 0) {
        // 0x00419E7C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00419EA0;
    }
    // 0x00419E7C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00419E80: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00419E84: addiu       $v0, $v0, 0x6528
    ctx->r2 = ADD32(ctx->r2, 0X6528);
    // 0x00419E88: jal         0x004160F0
    // 0x00419E8C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x00419E8C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    after_0:
    // 0x00419E90: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00419E94: addiu       $a1, $a1, 0x1030
    ctx->r5 = ADD32(ctx->r5, 0X1030);
    // 0x00419E98: j           L_00419EBC
    // 0x00419E9C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
        goto L_00419EBC;
    // 0x00419E9C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
L_00419EA0:
    // 0x00419EA0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00419EA4: addiu       $v0, $v0, 0x6528
    ctx->r2 = ADD32(ctx->r2, 0X6528);
    // 0x00419EA8: jal         0x004160F0
    // 0x00419EAC: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_1;
    // 0x00419EAC: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    after_1:
    // 0x00419EB0: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00419EB4: addiu       $a1, $a1, 0x1038
    ctx->r5 = ADD32(ctx->r5, 0X1038);
    // 0x00419EB8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
L_00419EBC:
    // 0x00419EBC: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x00419EC0: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x00419EC4: jal         0x0029E3E0
    // 0x00419EC8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_2;
    // 0x00419EC8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_2:
L_00419ECC:
    // 0x00419ECC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00419ED0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00419ED4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00419ED8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00419EDC: jr          $ra
    // 0x00419EE0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00419EE0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00450E28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00450E28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00450E2C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00450E30: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00450E34: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00450E38: addiu       $v0, $v0, 0x42F0
    ctx->r2 = ADD32(ctx->r2, 0X42F0);
    // 0x00450E3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00450E40: jal         0x004160F0
    // 0x00450E44: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x00450E44: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    after_0:
    // 0x00450E48: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x00450E4C: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00450E50: addiu       $a1, $a1, 0xE70
    ctx->r5 = ADD32(ctx->r5, 0XE70);
    // 0x00450E54: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x00450E58: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x00450E5C: lw          $a2, -0x5320($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X5320);
    // 0x00450E60: jal         0x0029E3E0
    // 0x00450E64: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_1;
    // 0x00450E64: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_1:
    // 0x00450E68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00450E6C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00450E70: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00450E74: jr          $ra
    // 0x00450E78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00450E78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0025C5F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025C5F8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x0025C5FC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x0025C600: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0025C604: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x0025C608: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x0025C60C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x0025C610: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0025C614: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0025C618: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x0025C61C: lw          $v1, 0xD4($s3)
    ctx->r3 = MEM_W(ctx->r19, 0XD4);
    // 0x0025C620: andi        $v0, $v1, 0x2000
    ctx->r2 = ctx->r3 & 0X2000;
    // 0x0025C624: bne         $v0, $zero, L_0025C634
    if (ctx->r2 != 0) {
        // 0x0025C628: addu        $s0, $a1, $zero
        ctx->r16 = ADD32(ctx->r5, 0);
            goto L_0025C634;
    }
    // 0x0025C628: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0025C62C: j           L_0025CA9C
    // 0x0025C630: addiu       $v0, $zero, -0x101
    ctx->r2 = ADD32(0, -0X101);
        goto L_0025CA9C;
    // 0x0025C630: addiu       $v0, $zero, -0x101
    ctx->r2 = ADD32(0, -0X101);
L_0025C634:
    // 0x0025C634: lw          $a0, 0x80($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X80);
    // 0x0025C638: beq         $a0, $zero, L_0025C68C
    if (ctx->r4 == 0) {
        // 0x0025C63C: nop
    
            goto L_0025C68C;
    }
    // 0x0025C63C: nop

    // 0x0025C640: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025C644: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x0025C648: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0025C64C: bne         $v1, $v0, L_0025C68C
    if (ctx->r3 != ctx->r2) {
        // 0x0025C650: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_0025C68C;
    }
    // 0x0025C650: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x0025C654: lb          $v1, 0x174($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X174);
    // 0x0025C658: beql        $v1, $v0, L_0025C670
    if (ctx->r3 == ctx->r2) {
        // 0x0025C65C: lui         $a0, 0xDFFF
        ctx->r4 = S32(0XDFFF << 16);
            goto L_0025C670;
    }
    goto skip_0;
    // 0x0025C65C: lui         $a0, 0xDFFF
    ctx->r4 = S32(0XDFFF << 16);
    skip_0:
    // 0x0025C660: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x0025C664: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x0025C668: bne         $v0, $zero, L_0025C68C
    if (ctx->r2 != 0) {
        // 0x0025C66C: lui         $a0, 0xDFFF
        ctx->r4 = S32(0XDFFF << 16);
            goto L_0025C68C;
    }
    // 0x0025C66C: lui         $a0, 0xDFFF
    ctx->r4 = S32(0XDFFF << 16);
L_0025C670:
    // 0x0025C670: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x0025C674: lui         $v1, 0xBFFF
    ctx->r3 = S32(0XBFFF << 16);
    // 0x0025C678: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0025C67C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0025C680: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0025C684: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025C688: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
L_0025C68C:
    // 0x0025C68C: lb          $v0, 0xCB($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XCB);
    // 0x0025C690: lbu         $v1, 0xCB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XCB);
    // 0x0025C694: slti        $v0, $v0, 0x64
    ctx->r2 = SIGNED(ctx->r2) < 0X64 ? 1 : 0;
    // 0x0025C698: beq         $v0, $zero, L_0025C6A4
    if (ctx->r2 == 0) {
        // 0x0025C69C: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_0025C6A4;
    }
    // 0x0025C69C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
        turok2_patch_scale_hurt_sfx(rdram, ctx);

    // 0x0025C6A0: sb          $v0, 0xCB($s0)
    MEM_B(0XCB, ctx->r16) = ctx->r2;
L_0025C6A4:
    // 0x0025C6A4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0025C6A8: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x0025C6AC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0025C6B0: lwc1        $f0, 0x6D2C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D2C);
    // 0x0025C6B4: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0025C6B8: lw          $a1, 0x4($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4);
    // 0x0025C6BC: lw          $a2, 0x8($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X8);
    // 0x0025C6C0: lw          $a3, 0xC($s3)
    ctx->r7 = MEM_W(ctx->r19, 0XC);
    // 0x0025C6C4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0025C6C8: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x0025C6CC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0025C6D0: swc1        $f1, 0x6D28($at)
    MEM_W(0X6D28, ctx->r1) = ctx->f_odd[(1 - 1) * 2];
    // 0x0025C6D4: jal         0x002532EC
    // 0x0025C6D8: nop

    func_002532EC(rdram, ctx);
        goto after_0;
    // 0x0025C6D8: nop

    after_0:
    // 0x0025C6DC: lb          $v1, 0x133($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X133);
    // 0x0025C6E0: addu        $v0, $s0, $v1
    ctx->r2 = ADD32(ctx->r16, ctx->r3);
    // 0x0025C6E4: lb          $v0, 0x130($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X130);
    // 0x0025C6E8: addu        $s2, $v1, $zero
    ctx->r18 = ADD32(ctx->r3, 0);
    // 0x0025C6EC: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x0025C6F0: xori        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 ^ 0X2;
    // 0x0025C6F4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0025C6F8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0025C6FC: lw          $s1, 0x1790($at)
    ctx->r17 = MEM_W(ctx->r1, 0X1790);
    // 0x0025C700: beq         $s1, $zero, L_0025C790
    if (ctx->r17 == 0) {
        // 0x0025C704: sltiu       $s4, $v0, 0x1
        ctx->r20 = ctx->r2 < 0X1 ? 1 : 0;
            goto L_0025C790;
    }
    // 0x0025C704: sltiu       $s4, $v0, 0x1
    ctx->r20 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x0025C708: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0025C70C: beq         $s2, $v0, L_0025C748
    if (ctx->r18 == ctx->r2) {
        // 0x0025C710: slti        $v0, $s2, 0x2
        ctx->r2 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
            goto L_0025C748;
    }
    // 0x0025C710: slti        $v0, $s2, 0x2
    ctx->r2 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
    // 0x0025C714: beq         $v0, $zero, L_0025C72C
    if (ctx->r2 == 0) {
        // 0x0025C718: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0025C72C;
    }
    // 0x0025C718: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0025C71C: beq         $s2, $zero, L_0025C73C
    if (ctx->r18 == 0) {
        // 0x0025C720: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0025C73C;
    }
    // 0x0025C720: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0025C724: j           L_0025C758
    // 0x0025C728: nop

        goto L_0025C758;
    // 0x0025C728: nop

L_0025C72C:
    // 0x0025C72C: beq         $s2, $v0, L_0025C754
    if (ctx->r18 == ctx->r2) {
        // 0x0025C730: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0025C754;
    }
    // 0x0025C730: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0025C734: j           L_0025C758
    // 0x0025C738: nop

        goto L_0025C758;
    // 0x0025C738: nop

L_0025C73C:
    // 0x0025C73C: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    // 0x0025C740: j           L_0025C758
    // 0x0025C744: nop

        goto L_0025C758;
    // 0x0025C744: nop

L_0025C748:
    // 0x0025C748: lw          $v1, 0xC($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XC);
    // 0x0025C74C: j           L_0025C758
    // 0x0025C750: nop

        goto L_0025C758;
    // 0x0025C750: nop

L_0025C754:
    // 0x0025C754: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
L_0025C758:
    // 0x0025C758: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    // 0x0025C75C: beq         $v0, $v1, L_0025C77C
    if (ctx->r2 == ctx->r3) {
        // 0x0025C760: nop
    
            goto L_0025C77C;
    }
    // 0x0025C760: nop

    // 0x0025C764: sw          $v1, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r3;
    // 0x0025C768: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x0025C76C: beq         $v0, $zero, L_0025C77C
    if (ctx->r2 == 0) {
        // 0x0025C770: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025C77C;
    }
    // 0x0025C770: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0025C774: jalr        $v0
    // 0x0025C778: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x0025C778: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
L_0025C77C:
    // 0x0025C77C: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x0025C780: beq         $v0, $zero, L_0025C790
    if (ctx->r2 == 0) {
        // 0x0025C784: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025C790;
    }
    // 0x0025C784: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0025C788: jalr        $v0
    // 0x0025C78C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x0025C78C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
L_0025C790:
    // 0x0025C790: lbu         $v0, 0x34($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34);
    // 0x0025C794: addiu       $v0, $v0, -0x11
    ctx->r2 = ADD32(ctx->r2, -0X11);
    // 0x0025C798: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x0025C79C: bne         $v0, $zero, L_0025C7CC
    if (ctx->r2 != 0) {
        // 0x0025C7A0: nop
    
            goto L_0025C7CC;
    }
    // 0x0025C7A0: nop

    // 0x0025C7A4: lwc1        $f0, 0x120($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X120);
    // 0x0025C7A8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0025C7AC: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x0025C7B0: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0025C7B4: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0025C7B8: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0025C7BC: nop

    // 0x0025C7C0: bc1f        L_0025C7CC
    if (!c1cs) {
        // 0x0025C7C4: swc1        $f0, 0x120($s0)
        MEM_W(0X120, ctx->r16) = ctx->f0.u32l;
            goto L_0025C7CC;
    }
    // 0x0025C7C4: swc1        $f0, 0x120($s0)
    MEM_W(0X120, ctx->r16) = ctx->f0.u32l;
    // 0x0025C7C8: swc1        $f1, 0x120($s0)
    MEM_W(0X120, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
L_0025C7CC:
    // 0x0025C7CC: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x0025C7D0: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x0025C7D4: lb          $s2, 0x133($s0)
    ctx->r18 = MEM_B(ctx->r16, 0X133);
    // 0x0025C7D8: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x0025C7DC: beq         $v0, $zero, L_0025C898
    if (ctx->r2 == 0) {
        // 0x0025C7E0: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025C898;
    }
    // 0x0025C7E0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0025C7E4: lwc1        $f0, 0x124($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X124);
    // 0x0025C7E8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0025C7EC: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x0025C7F0: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0025C7F4: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0025C7F8: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0025C7FC: nop

    // 0x0025C800: bc1f        L_0025C80C
    if (!c1cs) {
        // 0x0025C804: swc1        $f0, 0x124($s0)
        MEM_W(0X124, ctx->r16) = ctx->f0.u32l;
            goto L_0025C80C;
    }
    // 0x0025C804: swc1        $f0, 0x124($s0)
    MEM_W(0X124, ctx->r16) = ctx->f0.u32l;
    // 0x0025C808: swc1        $f1, 0x124($s0)
    MEM_W(0X124, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
L_0025C80C:
    // 0x0025C80C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0025C810: beq         $v0, $zero, L_0025C898
    if (ctx->r2 == 0) {
        // 0x0025C814: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025C898;
    }
    // 0x0025C814: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0025C818: lwc1        $f0, 0x124($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X124);
    // 0x0025C81C: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0025C820: nop

    // 0x0025C824: bc1f        L_0025C898
    if (!c1cs) {
        // 0x0025C828: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_0025C898;
    }
    // 0x0025C828: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0025C82C: lb          $v1, 0x34($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X34);
    // 0x0025C830: beq         $v1, $v0, L_0025C868
    if (ctx->r3 == ctx->r2) {
        // 0x0025C834: addiu       $v0, $zero, 0xE
        ctx->r2 = ADD32(0, 0XE);
            goto L_0025C868;
    }
    // 0x0025C834: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x0025C838: beq         $v1, $v0, L_0025C868
    if (ctx->r3 == ctx->r2) {
        // 0x0025C83C: addiu       $v0, $zero, 0xF
        ctx->r2 = ADD32(0, 0XF);
            goto L_0025C868;
    }
    // 0x0025C83C: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x0025C840: beq         $v1, $v0, L_0025C868
    if (ctx->r3 == ctx->r2) {
        // 0x0025C844: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_0025C868;
    }
    // 0x0025C844: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x0025C848: beq         $v1, $v0, L_0025C868
    if (ctx->r3 == ctx->r2) {
        // 0x0025C84C: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_0025C868;
    }
    // 0x0025C84C: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x0025C850: beq         $v1, $v0, L_0025C868
    if (ctx->r3 == ctx->r2) {
        // 0x0025C854: addiu       $v0, $zero, 0x12
        ctx->r2 = ADD32(0, 0X12);
            goto L_0025C868;
    }
    // 0x0025C854: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x0025C858: beq         $v1, $v0, L_0025C868
    if (ctx->r3 == ctx->r2) {
        // 0x0025C85C: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_0025C868;
    }
    // 0x0025C85C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x0025C860: bne         $v1, $v0, L_0025C898
    if (ctx->r3 != ctx->r2) {
        // 0x0025C864: nop
    
            goto L_0025C898;
    }
    // 0x0025C864: nop

L_0025C868:
    // 0x0025C868: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025C86C: lwc1        $f12, 0x75D4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X75D4);
    // 0x0025C870: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025C874: lwc1        $f14, 0x75D8($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X75D8);
    // 0x0025C878: jal         0x002119FC
    // 0x0025C87C: nop

    func_002119FC(rdram, ctx);
        goto after_3;
    // 0x0025C87C: nop

    after_3:
    // 0x0025C880: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0025C884: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0025C888: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    // 0x0025C88C: jal         0x00243414
    // 0x0025C890: swc1        $f0, 0x124($s0)
    MEM_W(0X124, ctx->r16) = ctx->f0.u32l;
    func_00243414(rdram, ctx);
        goto after_4;
    // 0x0025C890: swc1        $f0, 0x124($s0)
    MEM_W(0X124, ctx->r16) = ctx->f0.u32l;
    after_4:
    // 0x0025C894: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_0025C898:
    // 0x0025C898: jal         0x0025C338
    // 0x0025C89C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0025C338(rdram, ctx);
        goto after_5;
    // 0x0025C89C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x0025C8A0: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0025C8A4: beq         $v0, $zero, L_0025C964
    if (ctx->r2 == 0) {
        // 0x0025C8A8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0025C964;
    }
    // 0x0025C8A8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0025C8AC: beq         $s2, $v0, L_0025C914
    if (ctx->r18 == ctx->r2) {
        // 0x0025C8B0: nop
    
            goto L_0025C914;
    }
    // 0x0025C8B0: nop

    // 0x0025C8B4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0025C8B8: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x0025C8BC: beq         $v0, $zero, L_0025C914
    if (ctx->r2 == 0) {
        // 0x0025C8C0: addiu       $v0, $zero, 0x27
        ctx->r2 = ADD32(0, 0X27);
            goto L_0025C914;
    }
    // 0x0025C8C0: addiu       $v0, $zero, 0x27
    ctx->r2 = ADD32(0, 0X27);
    // 0x0025C8C4: lb          $v1, 0x34($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X34);
    // 0x0025C8C8: beq         $v1, $v0, L_0025C914
    if (ctx->r3 == ctx->r2) {
        // 0x0025C8CC: addiu       $v0, $zero, 0x29
        ctx->r2 = ADD32(0, 0X29);
            goto L_0025C914;
    }
    // 0x0025C8CC: addiu       $v0, $zero, 0x29
    ctx->r2 = ADD32(0, 0X29);
    // 0x0025C8D0: beq         $v1, $v0, L_0025C914
    if (ctx->r3 == ctx->r2) {
        // 0x0025C8D4: nop
    
            goto L_0025C914;
    }
    // 0x0025C8D4: nop

    // 0x0025C8D8: lb          $v0, 0x132($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X132);
    // 0x0025C8DC: beq         $v0, $zero, L_0025C914
    if (ctx->r2 == 0) {
        // 0x0025C8E0: nop
    
            goto L_0025C914;
    }
    // 0x0025C8E0: nop

    // 0x0025C8E4: bne         $s2, $zero, L_0025C8FC
    if (ctx->r18 != 0) {
        // 0x0025C8E8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0025C8FC;
    }
    // 0x0025C8E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0025C8EC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0025C8F0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0025C8F4: j           L_0025C90C
    // 0x0025C8F8: addiu       $a2, $zero, 0x27
    ctx->r6 = ADD32(0, 0X27);
        goto L_0025C90C;
    // 0x0025C8F8: addiu       $a2, $zero, 0x27
    ctx->r6 = ADD32(0, 0X27);
L_0025C8FC:
    // 0x0025C8FC: bne         $s2, $v0, L_0025C914
    if (ctx->r18 != ctx->r2) {
        // 0x0025C900: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025C914;
    }
    // 0x0025C900: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0025C904: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0025C908: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
L_0025C90C:
    // 0x0025C90C: jal         0x00243414
    // 0x0025C910: nop

    func_00243414(rdram, ctx);
        goto after_6;
    // 0x0025C910: nop

    after_6:
L_0025C914:
    // 0x0025C914: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0025C918: beq         $v0, $zero, L_0025C964
    if (ctx->r2 == 0) {
        // 0x0025C91C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0025C964;
    }
    // 0x0025C91C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0025C920: bne         $s2, $v0, L_0025C964
    if (ctx->r18 != ctx->r2) {
        // 0x0025C924: nop
    
            goto L_0025C964;
    }
    // 0x0025C924: nop

    // 0x0025C928: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0025C92C: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x0025C930: bne         $v0, $zero, L_0025C964
    if (ctx->r2 != 0) {
        // 0x0025C934: addiu       $v0, $zero, 0x2A
        ctx->r2 = ADD32(0, 0X2A);
            goto L_0025C964;
    }
    // 0x0025C934: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x0025C938: lb          $v1, 0x34($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X34);
    // 0x0025C93C: beq         $v1, $v0, L_0025C964
    if (ctx->r3 == ctx->r2) {
        // 0x0025C940: addiu       $v0, $zero, 0x2B
        ctx->r2 = ADD32(0, 0X2B);
            goto L_0025C964;
    }
    // 0x0025C940: addiu       $v0, $zero, 0x2B
    ctx->r2 = ADD32(0, 0X2B);
    // 0x0025C944: beq         $v1, $v0, L_0025C964
    if (ctx->r3 == ctx->r2) {
        // 0x0025C948: nop
    
            goto L_0025C964;
    }
    // 0x0025C948: nop

    // 0x0025C94C: lb          $v0, 0x130($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X130);
    // 0x0025C950: beq         $v0, $zero, L_0025C964
    if (ctx->r2 == 0) {
        // 0x0025C954: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025C964;
    }
    // 0x0025C954: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0025C958: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0025C95C: jal         0x00243414
    // 0x0025C960: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    func_00243414(rdram, ctx);
        goto after_7;
    // 0x0025C960: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    after_7:
L_0025C964:
    // 0x0025C964: lw          $v0, 0x30($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X30);
    // 0x0025C968: beq         $v0, $zero, L_0025C984
    if (ctx->r2 == 0) {
        // 0x0025C96C: nop
    
            goto L_0025C984;
    }
    // 0x0025C96C: nop

    // 0x0025C970: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
    // 0x0025C974: beq         $v0, $zero, L_0025C984
    if (ctx->r2 == 0) {
        // 0x0025C978: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025C984;
    }
    // 0x0025C978: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0025C97C: jalr        $v0
    // 0x0025C980: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_8;
    // 0x0025C980: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_8:
L_0025C984:
    // 0x0025C984: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0025C988: beq         $v0, $zero, L_0025C9B8
    if (ctx->r2 == 0) {
        // 0x0025C98C: nop
    
            goto L_0025C9B8;
    }
    // 0x0025C98C: nop

    // 0x0025C990: beq         $s4, $zero, L_0025C9B8
    if (ctx->r20 == 0) {
        // 0x0025C994: lui         $v1, 0xFFFD
        ctx->r3 = S32(0XFFFD << 16);
            goto L_0025C9B8;
    }
    // 0x0025C994: lui         $v1, 0xFFFD
    ctx->r3 = S32(0XFFFD << 16);
    // 0x0025C998: lwc1        $f0, 0x9C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X9C);
    // 0x0025C99C: lwc1        $f1, 0xA4($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA4);
    // 0x0025C9A0: swc1        $f0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->f0.u32l;
    // 0x0025C9A4: swc1        $f1, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0025C9A8: lw          $v0, 0xD4($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XD4);
    // 0x0025C9AC: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0025C9B0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025C9B4: sw          $v0, 0xD4($s3)
    MEM_W(0XD4, ctx->r19) = ctx->r2;
L_0025C9B8:
    // 0x0025C9B8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x0025C9BC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0025C9C0: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x0025C9C4: jal         0x0025AD90
    // 0x0025C9C8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0025AD90(rdram, ctx);
        goto after_9;
    // 0x0025C9C8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_9:
    // 0x0025C9CC: lwc1        $f1, 0xD0($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XD0);
    // 0x0025C9D0: c.lt.s      $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f20.fl < ctx->f1.fl;
    // 0x0025C9D4: nop

    // 0x0025C9D8: bc1f        L_0025CA68
    if (!c1cs) {
        // 0x0025C9DC: addiu       $v1, $zero, -0x3
        ctx->r3 = ADD32(0, -0X3);
            goto L_0025CA68;
    }
    // 0x0025C9DC: addiu       $v1, $zero, -0x3
    ctx->r3 = ADD32(0, -0X3);
    // 0x0025C9E0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0025C9E4: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0025C9E8: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0025C9EC: swc1        $f0, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->f0.u32l;
    // 0x0025C9F0: lw          $v0, 0x27C($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X27C);
    // 0x0025C9F4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x0025C9F8: sw          $v0, 0x27C($s3)
    MEM_W(0X27C, ctx->r19) = ctx->r2;
    // 0x0025C9FC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0025CA00: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0025CA04: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0025CA08: lw          $a1, 0x4($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4);
    // 0x0025CA0C: lw          $a2, 0x8($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X8);
    // 0x0025CA10: lw          $a3, 0xC($s3)
    ctx->r7 = MEM_W(ctx->r19, 0XC);
    // 0x0025CA14: jal         0x00275544
    // 0x0025CA18: addiu       $a0, $zero, 0x3D1
    ctx->r4 = ADD32(0, 0X3D1);
    func_00275544(rdram, ctx);
        goto after_10;
    // 0x0025CA18: addiu       $a0, $zero, 0x3D1
    ctx->r4 = ADD32(0, 0X3D1);
    after_10:
    // 0x0025CA1C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0025CA20: beq         $v0, $zero, L_0025CA3C
    if (ctx->r2 == 0) {
        // 0x0025CA24: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025CA3C;
    }
    // 0x0025CA24: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0025CA28: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0025CA2C: jal         0x00246860
    // 0x0025CA30: addiu       $a2, $zero, 0x3D2
    ctx->r6 = ADD32(0, 0X3D2);
    func_00246860(rdram, ctx);
        goto after_11;
    // 0x0025CA30: addiu       $a2, $zero, 0x3D2
    ctx->r6 = ADD32(0, 0X3D2);
    after_11:
    // 0x0025CA34: j           L_0025CA74
    // 0x0025CA38: nop

        goto L_0025CA74;
    // 0x0025CA38: nop

L_0025CA3C:
    // 0x0025CA3C: lw          $v0, 0xEC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XEC);
    // 0x0025CA40: beq         $v0, $zero, L_0025CA74
    if (ctx->r2 == 0) {
        // 0x0025CA44: nop
    
            goto L_0025CA74;
    }
    // 0x0025CA44: nop

    // 0x0025CA48: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x0025CA4C: addiu       $v0, $zero, 0x3D2
    ctx->r2 = ADD32(0, 0X3D2);
    // 0x0025CA50: beq         $v1, $v0, L_0025CA74
    if (ctx->r3 == ctx->r2) {
        // 0x0025CA54: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025CA74;
    }
    // 0x0025CA54: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0025CA58: jal         0x00246918
    // 0x0025CA5C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00246918(rdram, ctx);
        goto after_12;
    // 0x0025CA5C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_12:
    // 0x0025CA60: j           L_0025CA74
    // 0x0025CA64: nop

        goto L_0025CA74;
    // 0x0025CA64: nop

L_0025CA68:
    // 0x0025CA68: lw          $v0, 0x27C($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X27C);
    // 0x0025CA6C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025CA70: sw          $v0, 0x27C($s3)
    MEM_W(0X27C, ctx->r19) = ctx->r2;
L_0025CA74:
    // 0x0025CA74: lb          $v1, 0x34($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X34);
    // 0x0025CA78: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x0025CA7C: bne         $v1, $v0, L_0025CA94
    if (ctx->r3 != ctx->r2) {
        // 0x0025CA80: lui         $v1, 0xFF7F
        ctx->r3 = S32(0XFF7F << 16);
            goto L_0025CA94;
    }
    // 0x0025CA80: lui         $v1, 0xFF7F
    ctx->r3 = S32(0XFF7F << 16);
    // 0x0025CA84: lw          $v0, 0xD4($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XD4);
    // 0x0025CA88: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x0025CA8C: j           L_0025CAA0
    // 0x0025CA90: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
        goto L_0025CAA0;
    // 0x0025CA90: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
L_0025CA94:
    // 0x0025CA94: lw          $v0, 0xD4($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XD4);
    // 0x0025CA98: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
L_0025CA9C:
    // 0x0025CA9C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
L_0025CAA0:
    // 0x0025CAA0: sw          $v0, 0xD4($s3)
    MEM_W(0XD4, ctx->r19) = ctx->r2;
    // 0x0025CAA4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x0025CAA8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x0025CAAC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x0025CAB0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0025CAB4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0025CAB8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0025CABC: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x0025CAC0: jr          $ra
    // 0x0025CAC4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0025CAC4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00407F0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00407F0C: jr          $ra
    // 0x00407F10: nop

    return;
    // 0x00407F10: nop

;}
RECOMP_FUNC void func_002766C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002766C8: lw          $a2, 0x8($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X8);
    // 0x002766CC: addiu       $v0, $a0, 0x4
    ctx->r2 = ADD32(ctx->r4, 0X4);
    // 0x002766D0: beq         $a2, $v0, L_00276724
    if (ctx->r6 == ctx->r2) {
        // 0x002766D4: addiu       $t1, $a0, 0xD8
        ctx->r9 = ADD32(ctx->r4, 0XD8);
            goto L_00276724;
    }
    // 0x002766D4: addiu       $t1, $a0, 0xD8
    ctx->r9 = ADD32(ctx->r4, 0XD8);
    // 0x002766D8: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
L_002766DC:
    // 0x002766DC: lw          $v0, 0xB0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XB0);
    // 0x002766E0: lw          $a3, 0x4($a2)
    ctx->r7 = MEM_W(ctx->r6, 0X4);
    // 0x002766E4: bnel        $v0, $a1, L_0027671C
    if (ctx->r2 != ctx->r5) {
        // 0x002766E8: addu        $a2, $a3, $zero
        ctx->r6 = ADD32(ctx->r7, 0);
            goto L_0027671C;
    }
    goto skip_0;
    // 0x002766E8: addu        $a2, $a3, $zero
    ctx->r6 = ADD32(ctx->r7, 0);
    skip_0:
    // 0x002766EC: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x002766F0: sw          $a3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r7;
    // 0x002766F4: lw          $v1, 0x4($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X4);
    // 0x002766F8: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x002766FC: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00276700: lw          $v0, 0xD8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD8);
    // 0x00276704: sw          $t1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r9;
    // 0x00276708: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x0027670C: lw          $v0, 0xD8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD8);
    // 0x00276710: sw          $a2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r6;
    // 0x00276714: sw          $a2, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->r6;
    // 0x00276718: addu        $a2, $a3, $zero
    ctx->r6 = ADD32(ctx->r7, 0);
L_0027671C:
    // 0x0027671C: bne         $a2, $t0, L_002766DC
    if (ctx->r6 != ctx->r8) {
        // 0x00276720: nop
    
            goto L_002766DC;
    }
    // 0x00276720: nop

L_00276724:
    // 0x00276724: jr          $ra
    // 0x00276728: nop

    return;
    // 0x00276728: nop

;}
RECOMP_FUNC void func_0029E114(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_0042E9A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042E9A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0042E9A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0042E9AC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0042E9B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0042E9B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0042E9B8: lw          $v1, 0x518($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X518);
    // 0x0042E9BC: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x0042E9C0: jal         0x0042DC18
    // 0x0042E9C4: sb          $v0, 0x28($v1)
    MEM_B(0X28, ctx->r3) = ctx->r2;
    func_0042DC18(rdram, ctx);
        goto after_0;
    // 0x0042E9C4: sb          $v0, 0x28($v1)
    MEM_B(0X28, ctx->r3) = ctx->r2;
    after_0:
    // 0x0042E9C8: addiu       $a0, $s0, 0x288
    ctx->r4 = ADD32(ctx->r16, 0X288);
    // 0x0042E9CC: addiu       $a1, $s0, 0x3C8
    ctx->r5 = ADD32(ctx->r16, 0X3C8);
    // 0x0042E9D0: jal         0x00243414
    // 0x0042E9D4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x0042E9D4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_1:
    // 0x0042E9D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042E9DC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0042E9E0: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x0042E9E4: lw          $a1, -0x5358($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X5358);
    // 0x0042E9E8: jal         0x00248BA8
    // 0x0042E9EC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_00248BA8(rdram, ctx);
        goto after_2;
    // 0x0042E9EC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x0042E9F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0042E9F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042E9F8: jr          $ra
    // 0x0042E9FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0042E9FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002715F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002715F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002715F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002715F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002715FC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00271600: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00271604: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00271608: jal         0x002742F4
    // 0x0027160C: addiu       $a0, $s0, 0x1DB8
    ctx->r4 = ADD32(ctx->r16, 0X1DB8);
    func_002742F4(rdram, ctx);
        goto after_0;
    // 0x0027160C: addiu       $a0, $s0, 0x1DB8
    ctx->r4 = ADD32(ctx->r16, 0X1DB8);
    after_0:
    // 0x00271610: addiu       $a0, $s0, 0x138
    ctx->r4 = ADD32(ctx->r16, 0X138);
    // 0x00271614: jal         0x00276790
    // 0x00271618: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00276790(rdram, ctx);
        goto after_1;
    // 0x00271618: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x0027161C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00271620: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00271624: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00271628: jr          $ra
    // 0x0027162C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0027162C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0028B954(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028B954: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0028B958: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0028B95C: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0028B960: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0028B964: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x0028B968: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0028B96C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0028B970: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0028B974: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0028B978: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0028B97C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028B980: beq         $v0, $zero, L_0028B9A0
    if (ctx->r2 == 0) {
        // 0x0028B984: addu        $s4, $a3, $zero
        ctx->r20 = ADD32(ctx->r7, 0);
            goto L_0028B9A0;
    }
    // 0x0028B984: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
L_0028B988:
    // 0x0028B988: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028B98C: jal         0x0028B430
    // 0x0028B990: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_0;
    // 0x0028B990: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_0:
    // 0x0028B994: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028B998: bne         $v0, $zero, L_0028B988
    if (ctx->r2 != 0) {
        // 0x0028B99C: nop
    
            goto L_0028B988;
    }
    // 0x0028B99C: nop

L_0028B9A0:
    // 0x0028B9A0: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0028B9A4: addiu       $s0, $s0, -0x5F24
    ctx->r16 = ADD32(ctx->r16, -0X5F24);
    // 0x0028B9A8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028B9AC: beql        $v0, $zero, L_0028B9D0
    if (ctx->r2 == 0) {
        // 0x0028B9B0: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0028B9D0;
    }
    goto skip_0;
    // 0x0028B9B0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_0:
L_0028B9B4:
    // 0x0028B9B4: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028B9B8: jal         0x0028B430
    // 0x0028B9BC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_1;
    // 0x0028B9BC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_1:
    // 0x0028B9C0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028B9C4: bne         $v0, $zero, L_0028B9B4
    if (ctx->r2 != 0) {
        // 0x0028B9C8: nop
    
            goto L_0028B9B4;
    }
    // 0x0028B9C8: nop

    // 0x0028B9CC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_0028B9D0:
    // 0x0028B9D0: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x0028B9D4: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
L_0028B9D8:
    // 0x0028B9D8: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x0028B9DC: jal         0x0028CD68
    // 0x0028B9E0: srlv        $a0, $s2, $a0
    ctx->r4 = S32(U32(ctx->r18) >> (ctx->r4 & 31));
    func_0028CD68(rdram, ctx);
        goto after_2;
    // 0x0028B9E0: srlv        $a0, $s2, $a0
    ctx->r4 = S32(U32(ctx->r18) >> (ctx->r4 & 31));
    after_2:
    // 0x0028B9E4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0028B9E8: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x0028B9EC: bnel        $v0, $zero, L_0028B9D8
    if (ctx->r2 != 0) {
        // 0x0028B9F0: subu        $a0, $s1, $s0
        ctx->r4 = SUB32(ctx->r17, ctx->r16);
            goto L_0028B9D8;
    }
    goto skip_1;
    // 0x0028B9F0: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    skip_1:
    // 0x0028B9F4: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0028B9F8: addiu       $s0, $s0, -0x5F14
    ctx->r16 = ADD32(ctx->r16, -0X5F14);
    // 0x0028B9FC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BA00: beql        $v0, $zero, L_0028BA24
    if (ctx->r2 == 0) {
        // 0x0028BA04: addu        $s0, $s3, $zero
        ctx->r16 = ADD32(ctx->r19, 0);
            goto L_0028BA24;
    }
    goto skip_2;
    // 0x0028BA04: addu        $s0, $s3, $zero
    ctx->r16 = ADD32(ctx->r19, 0);
    skip_2:
L_0028BA08:
    // 0x0028BA08: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BA0C: jal         0x0028B430
    // 0x0028BA10: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_3;
    // 0x0028BA10: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_3:
    // 0x0028BA14: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BA18: bne         $v0, $zero, L_0028BA08
    if (ctx->r2 != 0) {
        // 0x0028BA1C: nop
    
            goto L_0028BA08;
    }
    // 0x0028BA1C: nop

    // 0x0028BA20: addu        $s0, $s3, $zero
    ctx->r16 = ADD32(ctx->r19, 0);
L_0028BA24:
    // 0x0028BA24: ori         $v0, $zero, 0xF7A9
    ctx->r2 = 0 | 0XF7A9;
    // 0x0028BA28: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028BA2C: sh          $v0, -0xE7C($at)
    MEM_H(-0XE7C, ctx->r1) = ctx->r2;
    // 0x0028BA30: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BA34: beq         $v0, $zero, L_0028BA54
    if (ctx->r2 == 0) {
        // 0x0028BA38: nop
    
            goto L_0028BA54;
    }
    // 0x0028BA38: nop

L_0028BA3C:
    // 0x0028BA3C: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BA40: jal         0x0028B430
    // 0x0028BA44: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_4;
    // 0x0028BA44: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_4:
    // 0x0028BA48: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BA4C: bne         $v0, $zero, L_0028BA3C
    if (ctx->r2 != 0) {
        // 0x0028BA50: nop
    
            goto L_0028BA3C;
    }
    // 0x0028BA50: nop

L_0028BA54:
    // 0x0028BA54: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0028BA58: addiu       $s0, $s0, -0x5F24
    ctx->r16 = ADD32(ctx->r16, -0X5F24);
    // 0x0028BA5C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BA60: beql        $v0, $zero, L_0028BA84
    if (ctx->r2 == 0) {
        // 0x0028BA64: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0028BA84;
    }
    goto skip_3;
    // 0x0028BA64: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_3:
L_0028BA68:
    // 0x0028BA68: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BA6C: jal         0x0028B430
    // 0x0028BA70: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_5;
    // 0x0028BA70: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_5:
    // 0x0028BA74: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BA78: bne         $v0, $zero, L_0028BA68
    if (ctx->r2 != 0) {
        // 0x0028BA7C: nop
    
            goto L_0028BA68;
    }
    // 0x0028BA7C: nop

    // 0x0028BA80: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_0028BA84:
    // 0x0028BA84: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x0028BA88: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
L_0028BA8C:
    // 0x0028BA8C: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x0028BA90: jal         0x0028CD68
    // 0x0028BA94: srlv        $a0, $s4, $a0
    ctx->r4 = S32(U32(ctx->r20) >> (ctx->r4 & 31));
    func_0028CD68(rdram, ctx);
        goto after_6;
    // 0x0028BA94: srlv        $a0, $s4, $a0
    ctx->r4 = S32(U32(ctx->r20) >> (ctx->r4 & 31));
    after_6:
    // 0x0028BA98: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0028BA9C: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x0028BAA0: bnel        $v0, $zero, L_0028BA8C
    if (ctx->r2 != 0) {
        // 0x0028BAA4: subu        $a0, $s1, $s0
        ctx->r4 = SUB32(ctx->r17, ctx->r16);
            goto L_0028BA8C;
    }
    goto skip_4;
    // 0x0028BAA4: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    skip_4:
    // 0x0028BAA8: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0028BAAC: addiu       $s0, $s0, -0x5F10
    ctx->r16 = ADD32(ctx->r16, -0X5F10);
    // 0x0028BAB0: ori         $v0, $zero, 0xA529
    ctx->r2 = 0 | 0XA529;
    // 0x0028BAB4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028BAB8: sh          $v0, -0xE7C($at)
    MEM_H(-0XE7C, ctx->r1) = ctx->r2;
    // 0x0028BABC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BAC0: beq         $v0, $zero, L_0028BAE0
    if (ctx->r2 == 0) {
        // 0x0028BAC4: nop
    
            goto L_0028BAE0;
    }
    // 0x0028BAC4: nop

L_0028BAC8:
    // 0x0028BAC8: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BACC: jal         0x0028B430
    // 0x0028BAD0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_7;
    // 0x0028BAD0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_7:
    // 0x0028BAD4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BAD8: bne         $v0, $zero, L_0028BAC8
    if (ctx->r2 != 0) {
        // 0x0028BADC: nop
    
            goto L_0028BAC8;
    }
    // 0x0028BADC: nop

L_0028BAE0:
    // 0x0028BAE0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0028BAE4: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0028BAE8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0028BAEC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0028BAF0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0028BAF4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0028BAF8: jr          $ra
    // 0x0028BAFC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0028BAFC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0041266C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041266C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00412670: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00412674: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00412678: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0041267C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00412680: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00412684: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x00412688: jal         0x002017D4
    // 0x0041268C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x0041268C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x00412690: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x00412694: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x00412698: blez        $t0, L_00412784
    if (SIGNED(ctx->r8) <= 0) {
        // 0x0041269C: addiu       $v0, $v0, 0x8
        ctx->r2 = ADD32(ctx->r2, 0X8);
            goto L_00412784;
    }
    // 0x0041269C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x004126A0: lui         $t1, 0x800F
    ctx->r9 = S32(0X800F << 16);
    // 0x004126A4: addiu       $t1, $t1, 0x7078
    ctx->r9 = ADD32(ctx->r9, 0X7078);
    // 0x004126A8: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x004126AC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x004126B0: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x004126B4: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x004126B8: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x004126BC: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x004126C0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
L_004126C4:
    // 0x004126C4: lw          $v0, 0x4($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X4);
    // 0x004126C8: bne         $v0, $zero, L_004126E8
    if (ctx->r2 != 0) {
        // 0x004126CC: nop
    
            goto L_004126E8;
    }
    // 0x004126CC: nop

    // 0x004126D0: lw          $v0, 0x8($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X8);
    // 0x004126D4: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x004126D8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x004126DC: lw          $v0, 0x1178($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X1178);
    // 0x004126E0: j           L_004126FC
    // 0x004126E4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
        goto L_004126FC;
    // 0x004126E4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
L_004126E8:
    // 0x004126E8: lw          $v0, 0x8($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X8);
    // 0x004126EC: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x004126F0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x004126F4: lw          $v0, 0x117C($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X117C);
    // 0x004126F8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
L_004126FC:
    // 0x004126FC: addu        $a0, $v0, $v1
    ctx->r4 = ADD32(ctx->r2, ctx->r3);
    // 0x00412700: lbu         $v1, 0x11($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X11);
    // 0x00412704: beq         $v1, $t7, L_0041274C
    if (ctx->r3 == ctx->r15) {
        // 0x00412708: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_0041274C;
    }
    // 0x00412708: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0041270C: slti        $v0, $v1, 0xA
    ctx->r2 = SIGNED(ctx->r3) < 0XA ? 1 : 0;
    // 0x00412710: beq         $v0, $zero, L_00412728
    if (ctx->r2 == 0) {
        // 0x00412714: nop
    
            goto L_00412728;
    }
    // 0x00412714: nop

    // 0x00412718: beq         $v1, $t6, L_00412738
    if (ctx->r3 == ctx->r14) {
        // 0x0041271C: nop
    
            goto L_00412738;
    }
    // 0x0041271C: nop

    // 0x00412720: j           L_0041276C
    // 0x00412724: nop

        goto L_0041276C;
    // 0x00412724: nop

L_00412728:
    // 0x00412728: beq         $v1, $t5, L_00412760
    if (ctx->r3 == ctx->r13) {
        // 0x0041272C: nop
    
            goto L_00412760;
    }
    // 0x0041272C: nop

    // 0x00412730: j           L_0041276C
    // 0x00412734: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
        goto L_0041276C;
    // 0x00412734: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_00412738:
    // 0x00412738: lbu         $v0, 0x12($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X12);
    // 0x0041273C: beql        $v0, $t4, L_0041276C
    if (ctx->r2 == ctx->r12) {
        // 0x00412740: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_0041276C;
    }
    goto skip_0;
    // 0x00412740: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    skip_0:
    // 0x00412744: j           L_0041276C
    // 0x00412748: nop

        goto L_0041276C;
    // 0x00412748: nop

L_0041274C:
    // 0x0041274C: lbu         $v0, 0x12($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X12);
    // 0x00412750: beql        $v0, $t3, L_0041276C
    if (ctx->r2 == ctx->r11) {
        // 0x00412754: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_0041276C;
    }
    goto skip_1;
    // 0x00412754: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    skip_1:
    // 0x00412758: j           L_0041276C
    // 0x0041275C: nop

        goto L_0041276C;
    // 0x0041275C: nop

L_00412760:
    // 0x00412760: lbu         $v0, 0x12($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X12);
    // 0x00412764: beql        $v0, $t2, L_0041276C
    if (ctx->r2 == ctx->r10) {
        // 0x00412768: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_0041276C;
    }
    goto skip_2;
    // 0x00412768: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    skip_2:
L_0041276C:
    // 0x0041276C: bnel        $a1, $zero, L_00412774
    if (ctx->r5 != 0) {
        // 0x00412770: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_00412774;
    }
    goto skip_3;
    // 0x00412770: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    skip_3:
L_00412774:
    // 0x00412774: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x00412778: slt         $v0, $a3, $t0
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x0041277C: bne         $v0, $zero, L_004126C4
    if (ctx->r2 != 0) {
        // 0x00412780: addiu       $a2, $a2, 0xC
        ctx->r6 = ADD32(ctx->r6, 0XC);
            goto L_004126C4;
    }
    // 0x00412780: addiu       $a2, $a2, 0xC
    ctx->r6 = ADD32(ctx->r6, 0XC);
L_00412784:
    // 0x00412784: xori        $v0, $s0, 0x1
    ctx->r2 = ctx->r16 ^ 0X1;
    // 0x00412788: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0041278C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00412790: jr          $ra
    // 0x00412794: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00412794: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00211920(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00211920: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00211924: lwc1        $f1, 0x56A0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X56A0);
    // 0x00211928: c.lt.s      $f14, $f1
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f14.fl < ctx->f1.fl;
    // 0x0021192C: nop

    // 0x00211930: bc1f        L_00211954
    if (!c1cs) {
        // 0x00211934: nop
    
            goto L_00211954;
    }
    // 0x00211934: nop

    // 0x00211938: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021193C: lwc1        $f2, 0x56A4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X56A4);
    // 0x00211940: add.s       $f14, $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f2.fl;
L_00211944:
    // 0x00211944: c.lt.s      $f14, $f1
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f14.fl < ctx->f1.fl;
    // 0x00211948: nop

    // 0x0021194C: bc1tl       L_00211944
    if (c1cs) {
        // 0x00211950: add.s       $f14, $f14, $f2
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f2.fl;
            goto L_00211944;
    }
    goto skip_0;
    // 0x00211950: add.s       $f14, $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f2.fl;
    skip_0:
L_00211954:
    // 0x00211954: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00211958: lwc1        $f1, 0x56A8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X56A8);
    // 0x0021195C: c.lt.s      $f1, $f14
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f1.fl < ctx->f14.fl;
    // 0x00211960: nop

    // 0x00211964: bc1fl       L_0021198C
    if (!c1cs) {
        // 0x00211968: sub.s       $f0, $f12, $f14
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f14.fl;
            goto L_0021198C;
    }
    goto skip_1;
    // 0x00211968: sub.s       $f0, $f12, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f14.fl;
    skip_1:
    // 0x0021196C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00211970: lwc1        $f2, 0x56AC($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X56AC);
    // 0x00211974: sub.s       $f14, $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f2.fl;
L_00211978:
    // 0x00211978: c.lt.s      $f1, $f14
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f1.fl < ctx->f14.fl;
    // 0x0021197C: nop

    // 0x00211980: bc1tl       L_00211978
    if (c1cs) {
        // 0x00211984: sub.s       $f14, $f14, $f2
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f2.fl;
            goto L_00211978;
    }
    goto skip_2;
    // 0x00211984: sub.s       $f14, $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f2.fl;
    skip_2:
    // 0x00211988: sub.s       $f0, $f12, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f14.fl;
L_0021198C:
    // 0x0021198C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00211990: lwc1        $f1, 0x56B0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X56B0);
    // 0x00211994: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00211998: nop

    // 0x0021199C: bc1f        L_002119C0
    if (!c1cs) {
        // 0x002119A0: nop
    
            goto L_002119C0;
    }
    // 0x002119A0: nop

    // 0x002119A4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002119A8: lwc1        $f2, 0x56B4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X56B4);
    // 0x002119AC: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
L_002119B0:
    // 0x002119B0: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x002119B4: nop

    // 0x002119B8: bc1tl       L_002119B0
    if (c1cs) {
        // 0x002119BC: add.s       $f0, $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
            goto L_002119B0;
    }
    goto skip_3;
    // 0x002119BC: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    skip_3:
L_002119C0:
    // 0x002119C0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002119C4: lwc1        $f1, 0x56B8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X56B8);
    // 0x002119C8: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x002119CC: nop

    // 0x002119D0: bc1f        L_002119F4
    if (!c1cs) {
        // 0x002119D4: nop
    
            goto L_002119F4;
    }
    // 0x002119D4: nop

    // 0x002119D8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002119DC: lwc1        $f2, 0x56BC($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X56BC);
    // 0x002119E0: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
L_002119E4:
    // 0x002119E4: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x002119E8: nop

    // 0x002119EC: bc1tl       L_002119E4
    if (c1cs) {
        // 0x002119F0: sub.s       $f0, $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
            goto L_002119E4;
    }
    goto skip_4;
    // 0x002119F0: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    skip_4:
L_002119F4:
    // 0x002119F4: jr          $ra
    // 0x002119F8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    return;
    // 0x002119F8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
;}
RECOMP_FUNC void func_0028205C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028205C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00282060: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00282064: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00282068: addiu       $a0, $s0, 0x40
    ctx->r4 = ADD32(ctx->r16, 0X40);
    // 0x0028206C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00282070: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00282074: jal         0x00275AE0
    // 0x00282078: sw          $v0, 0x11E8($s0)
    MEM_W(0X11E8, ctx->r16) = ctx->r2;
    func_00275AE0(rdram, ctx);
        goto after_0;
    // 0x00282078: sw          $v0, 0x11E8($s0)
    MEM_W(0X11E8, ctx->r16) = ctx->r2;
    after_0:
    // 0x0028207C: jal         0x002053A8
    // 0x00282080: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_1;
    // 0x00282080: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
    // 0x00282084: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x00282088: beq         $a1, $zero, L_002820A4
    if (ctx->r5 == 0) {
        // 0x0028208C: nop
    
            goto L_002820A4;
    }
    // 0x0028208C: nop

    // 0x00282090: jal         0x002052D8
    // 0x00282094: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_2;
    // 0x00282094: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_2:
    // 0x00282098: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x0028209C: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x002820A0: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
L_002820A4:
    // 0x002820A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x002820A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002820AC: jr          $ra
    // 0x002820B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002820B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002248D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002248D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002248D8: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x002248DC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x002248E0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002248E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002248E8: lhu         $s1, 0x16E($a1)
    ctx->r17 = MEM_HU(ctx->r5, 0X16E);
    // 0x002248EC: lw          $a0, 0x6C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X6C);
    // 0x002248F0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x002248F4: addu        $at, $v0, $at
    ctx->r1 = ADD32(ctx->r2, ctx->r1);
    // 0x002248F8: lw          $s0, -0x7058($at)
    ctx->r16 = MEM_W(ctx->r1, -0X7058);
    // 0x002248FC: jal         0x002017D4
    // 0x00224900: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00224900: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x00224904: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00224908: jal         0x002017D4
    // 0x0022490C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x0022490C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00224910: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00224914: jal         0x002017D4
    // 0x00224918: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x00224918: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x0022491C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00224920: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00224924: jal         0x002017D4
    // 0x00224928: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x00224928: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x0022492C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00224930: jal         0x00201818
    // 0x00224934: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_00201818(rdram, ctx);
        goto after_4;
    // 0x00224934: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x00224938: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022493C: jal         0x002017D4
    // 0x00224940: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x00224940: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x00224944: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00224948: andi        $v1, $s1, 0x7
    ctx->r3 = ctx->r17 & 0X7;
    // 0x0022494C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00224950: bgez        $s1, L_0022495C
    if (SIGNED(ctx->r17) >= 0) {
        // 0x00224954: sllv        $v1, $v0, $v1
        ctx->r3 = S32(ctx->r2 << (ctx->r3 & 31));
            goto L_0022495C;
    }
    // 0x00224954: sllv        $v1, $v0, $v1
    ctx->r3 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x00224958: addiu       $s1, $s1, 0x7
    ctx->r17 = ADD32(ctx->r17, 0X7);
L_0022495C:
    // 0x0022495C: sra         $v0, $s1, 3
    ctx->r2 = S32(SIGNED(ctx->r17) >> 3);
    // 0x00224960: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x00224964: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x00224968: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0022496C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00224970: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00224974: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00224978: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x0022497C: jr          $ra
    // 0x00224980: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00224980: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0044FBAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00416BE0:
    // 0x0044FBAC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0044FBB0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x0044FBB4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0044FBB8: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x0044FBBC: lh          $v1, 0x4($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4);
    // 0x0044FBC0: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x0044FBC4: bne         $v1, $v0, L_0044FBDC
    if (ctx->r3 != ctx->r2) {
        // 0x0044FBC8: nop
    
            goto L_0044FBDC;
    }
    // 0x0044FBC8: nop

    // 0x0044FBCC: jal         0x00413230
    // 0x0044FBD0: nop

    func_00413230(rdram, ctx);
        goto after_0;
    // 0x0044FBD0: nop

    after_0:
    // 0x0044FBD4: j           L_00416BE0
    // 0x0044FBD8: nop

    entry_00416BE0(rdram, ctx);
    return;
    // 0x0044FBD8: nop

L_0044FBDC:
    // 0x0044FBDC: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0044FBE0: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x0044FBE4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0044FBE8: jal         0x004163C0
    // 0x0044FBEC: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    func_004163C0(rdram, ctx);
        goto after_1;
    // 0x0044FBEC: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_1:
    // 0x0044FBF0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0044FBF4: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x0044FBF8: jr          $ra
    // 0x0044FBFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0044FBFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0026EB3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026EB3C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0026EB40: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0026EB44: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0026EB48: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0026EB4C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0026EB50: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0026EB54: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x0026EB58: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0026EB5C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0026EB60: jal         0x0029DFF0
    // 0x0026EB64: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_0029DFF0(rdram, ctx);
        goto after_0;
    // 0x0026EB64: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x0026EB68: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0026EB6C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0026EB70: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x0026EB74: jal         0x00200500
    // 0x0026EB78: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    func_00200500(rdram, ctx);
        goto after_1;
    // 0x0026EB78: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    after_1:
    // 0x0026EB7C: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
    // 0x0026EB80: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0026EB84: jal         0x00200500
    // 0x0026EB88: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00200500(rdram, ctx);
        goto after_2;
    // 0x0026EB88: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_2:
    // 0x0026EB8C: blez        $s3, L_0026EBB0
    if (SIGNED(ctx->r19) <= 0) {
        // 0x0026EB90: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0026EBB0;
    }
    // 0x0026EB90: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_0026EB94:
    // 0x0026EB94: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0026EB98: jal         0x00200574
    // 0x0026EB9C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00200574(rdram, ctx);
        goto after_3;
    // 0x0026EB9C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x0026EBA0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0026EBA4: slt         $v0, $s0, $s3
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x0026EBA8: bne         $v0, $zero, L_0026EB94
    if (ctx->r2 != 0) {
        // 0x0026EBAC: addiu       $s1, $s1, 0x3C
        ctx->r17 = ADD32(ctx->r17, 0X3C);
            goto L_0026EB94;
    }
    // 0x0026EBAC: addiu       $s1, $s1, 0x3C
    ctx->r17 = ADD32(ctx->r17, 0X3C);
L_0026EBB0:
    // 0x0026EBB0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x0026EBB4: jal         0x0029E010
    // 0x0026EBB8: sw          $zero, 0x28($s2)
    MEM_W(0X28, ctx->r18) = 0;
    func_0029E010(rdram, ctx);
        goto after_4;
    // 0x0026EBB8: sw          $zero, 0x28($s2)
    MEM_W(0X28, ctx->r18) = 0;
    after_4:
    // 0x0026EBBC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0026EBC0: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0026EBC4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0026EBC8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0026EBCC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0026EBD0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0026EBD4: jr          $ra
    // 0x0026EBD8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0026EBD8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00465D30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0042CE88:
    // 0x00465D30: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00465D34: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x00465D38: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00465D3C: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x00465D40: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x00465D44: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x00465D48: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x00465D4C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x00465D50: jal         0x00224180
    // 0x00465D54: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    func_00224180(rdram, ctx);
        goto after_0;
    // 0x00465D54: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    after_0:
    // 0x00465D58: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00465D5C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00465D60: bne         $a1, $v0, L_00465D70
    if (ctx->r5 != ctx->r2) {
        // 0x00465D64: nop
    
            goto L_00465D70;
    }
    // 0x00465D64: nop

    // 0x00465D68: j           L_0042CE88
    // 0x00465D6C: sw          $zero, 0x8($s3)
    MEM_W(0X8, ctx->r19) = 0;
    entry_0042CE88(rdram, ctx);
    return;
    // 0x00465D6C: sw          $zero, 0x8($s3)
    MEM_W(0X8, ctx->r19) = 0;
L_00465D70:
    // 0x00465D70: jal         0x00224F84
    // 0x00465D74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00224F84(rdram, ctx);
        goto after_1;
    // 0x00465D74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00465D78: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00465D7C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00465D80: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00465D84: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x00465D88: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x00465D8C: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x00465D90: addiu       $v0, $v0, 0x5D70
    ctx->r2 = ADD32(ctx->r2, 0X5D70);
    // 0x00465D94: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x00465D98: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00465D9C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00465DA0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00465DA4: jal         0x0020367C
    // 0x00465DA8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_0020367C(rdram, ctx);
        goto after_2;
    // 0x00465DA8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_2:
    // 0x00465DAC: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x00465DB0: beq         $s1, $zero, L_00465E88
    if (ctx->r17 == 0) {
        // 0x00465DB4: addu        $a2, $s2, $zero
        ctx->r6 = ADD32(ctx->r18, 0);
            goto L_00465E88;
    }
    // 0x00465DB4: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x00465DB8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00465DBC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x00465DC0: jal         0x0020185C
    // 0x00465DC4: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    func_0020185C(rdram, ctx);
        goto after_3;
    // 0x00465DC4: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x00465DC8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00465DCC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00465DD0: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x00465DD4: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x00465DD8: lui         $v0, 0x21
    ctx->r2 = S32(0X21 << 16);
    // 0x00465DDC: addiu       $v0, $v0, -0x4B70
    ctx->r2 = ADD32(ctx->r2, -0X4B70);
    // 0x00465DE0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00465DE4: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x00465DE8: addiu       $v0, $v0, 0x5D80
    ctx->r2 = ADD32(ctx->r2, 0X5D80);
    // 0x00465DEC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00465DF0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00465DF4: jal         0x0020367C
    // 0x00465DF8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_0020367C(rdram, ctx);
        goto after_4;
    // 0x00465DF8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_4:
    // 0x00465DFC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00465E00: beq         $s0, $zero, L_00465E80
    if (ctx->r16 == 0) {
        // 0x00465E04: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00465E80;
    }
    // 0x00465E04: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00465E08: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x00465E0C: jal         0x002017D4
    // 0x00465E10: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x00465E10: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
    // 0x00465E14: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00465E18: jal         0x002017D4
    // 0x00465E1C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_6;
    // 0x00465E1C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_6:
    // 0x00465E20: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00465E24: jal         0x002017D4
    // 0x00465E28: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_7;
    // 0x00465E28: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_7:
    // 0x00465E2C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00465E30: jal         0x002017D4
    // 0x00465E34: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_8;
    // 0x00465E34: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_8:
    // 0x00465E38: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00465E3C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00465E40: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x00465E44: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x00465E48: lw          $t1, 0x8($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X8);
    // 0x00465E4C: lw          $t2, 0xC($v0)
    ctx->r10 = MEM_W(ctx->r2, 0XC);
    // 0x00465E50: sw          $v1, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r3;
    // 0x00465E54: sw          $t0, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r8;
    // 0x00465E58: sw          $t1, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r9;
    // 0x00465E5C: sw          $t2, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r10;
    // 0x00465E60: lw          $v1, 0x10($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X10);
    // 0x00465E64: lw          $t0, 0x14($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X14);
    // 0x00465E68: lw          $t1, 0x18($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X18);
    // 0x00465E6C: sw          $v1, 0x10($s3)
    MEM_W(0X10, ctx->r19) = ctx->r3;
    // 0x00465E70: sw          $t0, 0x14($s3)
    MEM_W(0X14, ctx->r19) = ctx->r8;
    // 0x00465E74: jal         0x002052D8
    // 0x00465E78: sw          $t1, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r9;
    func_002052D8(rdram, ctx);
        goto after_9;
    // 0x00465E78: sw          $t1, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r9;
    after_9:
    // 0x00465E7C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00465E80:
    // 0x00465E80: jal         0x002052D8
    // 0x00465E84: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002052D8(rdram, ctx);
        goto after_10;
    // 0x00465E84: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_10:
L_00465E88:
    // 0x00465E88: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x00465E8C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x00465E90: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x00465E94: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x00465E98: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x00465E9C: jr          $ra
    // 0x00465EA0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00465EA0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_0040BB30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040BB30: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x0040BB34: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x0040BB38: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0040BB3C: sw          $s2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r18;
    // 0x0040BB40: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0040BB44: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x0040BB48: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0040BB4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0040BB50: sw          $ra, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r31;
    // 0x0040BB54: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x0040BB58: jal         0x00246108
    // 0x0040BB5C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x0040BB5C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x0040BB60: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040BB64: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x0040BB68: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x0040BB6C: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x0040BB70: jal         0x00245BAC
    // 0x0040BB74: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x0040BB74: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_1:
    // 0x0040BB78: lui         $v0, 0x5555
    ctx->r2 = S32(0X5555 << 16);
    // 0x0040BB7C: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x0040BB80: addiu       $s0, $s0, -0x490
    ctx->r16 = ADD32(ctx->r16, -0X490);
    // 0x0040BB84: lw          $a1, 0x67C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X67C);
    // 0x0040BB88: ori         $v0, $v0, 0x5556
    ctx->r2 = ctx->r2 | 0X5556;
    // 0x0040BB8C: mult        $a1, $v0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0040BB90: sra         $v1, $a1, 31
    ctx->r3 = S32(SIGNED(ctx->r5) >> 31);
    // 0x0040BB94: mfhi        $t0
    ctx->r8 = hi;
    // 0x0040BB98: subu        $v1, $t0, $v1
    ctx->r3 = SUB32(ctx->r8, ctx->r3);
    // 0x0040BB9C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x0040BBA0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0040BBA4: bne         $a1, $v0, L_0040BBB4
    if (ctx->r5 != ctx->r2) {
        // 0x0040BBA8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0040BBB4;
    }
    // 0x0040BBA8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040BBAC: jal         0x00409A64
    // 0x0040BBB0: sltiu       $a1, $a1, 0x1
    ctx->r5 = ctx->r5 < 0X1 ? 1 : 0;
    func_00409A64(rdram, ctx);
        goto after_2;
    // 0x0040BBB0: sltiu       $a1, $a1, 0x1
    ctx->r5 = ctx->r5 < 0X1 ? 1 : 0;
    after_2:
L_0040BBB4:
    // 0x0040BBB4: lw          $v0, 0x67C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X67C);
    // 0x0040BBB8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0040BBBC: sw          $v0, 0x67C($s0)
    MEM_W(0X67C, ctx->r16) = ctx->r2;
    // 0x0040BBC0: lb          $v0, 0xC7($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XC7);
    // 0x0040BBC4: beq         $v0, $zero, L_0040BBDC
    if (ctx->r2 == 0) {
        // 0x0040BBC8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0040BBDC;
    }
    // 0x0040BBC8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040BBCC: sw          $zero, 0x67C($s0)
    MEM_W(0X67C, ctx->r16) = 0;
    // 0x0040BBD0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0040BBD4: jal         0x00243414
    // 0x0040BBD8: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    func_00243414(rdram, ctx);
        goto after_3;
    // 0x0040BBD8: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    after_3:
L_0040BBDC:
    // 0x0040BBDC: lw          $ra, 0xAC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XAC);
    // 0x0040BBE0: lw          $s2, 0xA8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA8);
    // 0x0040BBE4: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x0040BBE8: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x0040BBEC: jr          $ra
    // 0x0040BBF0: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x0040BBF0: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_0025F504(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025F504: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x0025F508: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x0025F50C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0025F510: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x0025F514: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x0025F518: sdc1        $f21, 0x40($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X40, ctx->r29);
    // 0x0025F51C: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x0025F520: jal         0x00267E74
    // 0x0025F524: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_00267E74(rdram, ctx);
        goto after_0;
    // 0x0025F524: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x0025F528: beq         $v0, $zero, L_0025F540
    if (ctx->r2 == 0) {
        // 0x0025F52C: nop
    
            goto L_0025F540;
    }
    // 0x0025F52C: nop

    // 0x0025F530: jal         0x00268534
    // 0x0025F534: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00268534(rdram, ctx);
        goto after_1;
    // 0x0025F534: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x0025F538: j           L_0025F548
    // 0x0025F53C: nop

        goto L_0025F548;
    // 0x0025F53C: nop

L_0025F540:
    // 0x0025F540: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025F544: lwc1        $f0, 0x7900($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7900);
L_0025F548:
    // 0x0025F548: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x0025F54C: jal         0x002119FC
    // 0x0025F550: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    func_002119FC(rdram, ctx);
        goto after_2;
    // 0x0025F550: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    after_2:
    // 0x0025F554: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025F558: lwc1        $f12, 0x7904($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X7904);
    // 0x0025F55C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025F560: lwc1        $f14, 0x7908($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X7908);
    // 0x0025F564: jal         0x002119FC
    // 0x0025F568: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_002119FC(rdram, ctx);
        goto after_3;
    // 0x0025F568: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_3:
    // 0x0025F56C: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    // 0x0025F570: jal         0x002974C0
    // 0x0025F574: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    func_002974C0(rdram, ctx);
        goto after_4;
    // 0x0025F574: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    after_4:
    // 0x0025F578: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x0025F57C: lwc1        $f1, 0xAC($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XAC);
    // 0x0025F580: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0025F584: swc1        $f1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0025F588: lwc1        $f0, 0xB0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x0025F58C: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    // 0x0025F590: jal         0x002982F0
    // 0x0025F594: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    func_002982F0(rdram, ctx);
        goto after_5;
    // 0x0025F594: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x0025F598: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x0025F59C: lwc1        $f0, 0xB4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x0025F5A0: add.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f20.fl;
    // 0x0025F5A4: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x0025F5A8: lw          $v0, 0x30($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X30);
    // 0x0025F5AC: lw          $v0, 0xC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XC);
    // 0x0025F5B0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0025F5B4: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x0025F5B8: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x0025F5BC: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x0025F5C0: jal         0x00239F00
    // 0x0025F5C4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00239F00(rdram, ctx);
        goto after_6;
    // 0x0025F5C4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
    // 0x0025F5C8: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x0025F5CC: lw          $t0, 0x8($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X8);
    // 0x0025F5D0: lw          $t1, 0xC($s1)
    ctx->r9 = MEM_W(ctx->r17, 0XC);
    // 0x0025F5D4: sw          $v1, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r3;
    // 0x0025F5D8: sw          $t0, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->r8;
    // 0x0025F5DC: sw          $t1, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->r9;
    // 0x0025F5E0: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x0025F5E4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x0025F5E8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x0025F5EC: ldc1        $f21, 0x40($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X40);
    // 0x0025F5F0: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x0025F5F4: jr          $ra
    // 0x0025F5F8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x0025F5F8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_0029DD64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029DD64: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0029DD68: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0029DD6C: addiu       $v1, $v1, -0x7670
    ctx->r3 = ADD32(ctx->r3, -0X7670);
    // 0x0029DD70: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0029DD74: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0029DD78: bne         $v0, $zero, L_0029DDB0
    if (ctx->r2 != 0) {
        // 0x0029DD7C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0029DDB0;
    }
    // 0x0029DD7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0029DD80: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0029DD84: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0029DD88: addiu       $a0, $a0, 0x4DB8
    ctx->r4 = ADD32(ctx->r4, 0X4DB8);
    // 0x0029DD8C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x0029DD90: addiu       $a1, $a1, 0x4DB0
    ctx->r5 = ADD32(ctx->r5, 0X4DB0);
    // 0x0029DD94: jal         0x0029B030
    // 0x0029DD98: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x0029DD98: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_0:
    // 0x0029DD9C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0029DDA0: addiu       $a0, $a0, 0x4DB8
    ctx->r4 = ADD32(ctx->r4, 0X4DB8);
    // 0x0029DDA4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0029DDA8: jal         0x0029B820
    // 0x0029DDAC: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    osSendMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x0029DDAC: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_1:
L_0029DDB0:
    // 0x0029DDB0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0029DDB4: addiu       $a0, $a0, 0x4DB8
    ctx->r4 = ADD32(ctx->r4, 0X4DB8);
    // 0x0029DDB8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x0029DDBC: jal         0x0029B6F0
    // 0x0029DDC0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x0029DDC0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x0029DDC4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0029DDC8: jr          $ra
    // 0x0029DDCC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0029DDCC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00210478(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00210478: mtc1        $a1, $f0
    ctx->f0.u32l = ctx->r5;
    // 0x0021047C: lwc1        $f8, 0x0($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X0);
    // 0x00210480: mul.s       $f8, $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x00210484: lwc1        $f9, 0x10($a0)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r4, 0X10);
    // 0x00210488: mul.s       $f9, $f9, $f0
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f9.fl = MUL_S(ctx->f9.fl, ctx->f0.fl);
    // 0x0021048C: lwc1        $f6, 0x20($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X20);
    // 0x00210490: mul.s       $f6, $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x00210494: lwc1        $f11, 0x30($a0)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r4, 0X30);
    // 0x00210498: mul.s       $f11, $f11, $f0
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f11.fl = MUL_S(ctx->f11.fl, ctx->f0.fl);
    // 0x0021049C: mtc1        $a2, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r6;
    // 0x002104A0: lwc1        $f10, 0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4);
    // 0x002104A4: mul.s       $f10, $f10, $f1
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f1.fl);
    // 0x002104A8: lwc1        $f7, 0x14($a0)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r4, 0X14);
    // 0x002104AC: mul.s       $f7, $f7, $f1
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f7.fl = MUL_S(ctx->f7.fl, ctx->f1.fl);
    // 0x002104B0: lwc1        $f4, 0x24($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X24);
    // 0x002104B4: mul.s       $f4, $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f1.fl);
    // 0x002104B8: lwc1        $f5, 0x34($a0)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r4, 0X34);
    // 0x002104BC: mul.s       $f5, $f5, $f1
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f5.fl = MUL_S(ctx->f5.fl, ctx->f1.fl);
    // 0x002104C0: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x002104C4: lwc1        $f3, 0x8($a0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r4, 0X8);
    // 0x002104C8: mul.s       $f3, $f3, $f12
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f12.fl);
    // 0x002104CC: lwc1        $f2, 0x18($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X18);
    // 0x002104D0: mul.s       $f2, $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x002104D4: lwc1        $f0, 0x28($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X28);
    // 0x002104D8: mul.s       $f0, $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x002104DC: lwc1        $f1, 0x38($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X38);
    // 0x002104E0: mul.s       $f1, $f1, $f12
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f12.fl);
    // 0x002104E4: swc1        $f8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f8.u32l;
    // 0x002104E8: swc1        $f9, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f_odd[(9 - 1) * 2];
    // 0x002104EC: swc1        $f6, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f6.u32l;
    // 0x002104F0: swc1        $f11, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f_odd[(11 - 1) * 2];
    // 0x002104F4: swc1        $f10, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f10.u32l;
    // 0x002104F8: swc1        $f7, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f_odd[(7 - 1) * 2];
    // 0x002104FC: swc1        $f4, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f4.u32l;
    // 0x00210500: swc1        $f5, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f_odd[(5 - 1) * 2];
    // 0x00210504: swc1        $f3, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f_odd[(3 - 1) * 2];
    // 0x00210508: swc1        $f2, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f2.u32l;
    // 0x0021050C: swc1        $f0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f0.u32l;
    // 0x00210510: jr          $ra
    // 0x00210514: swc1        $f1, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    return;
    // 0x00210514: swc1        $f1, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
;}
RECOMP_FUNC void func_0026803C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026803C: lw          $a1, 0x14($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X14);
    // 0x00268040: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x00268044: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00268048: bne         $v1, $v0, L_00268078
    if (ctx->r3 != ctx->r2) {
            // 0x0026804C: nop

    func_00268078(rdram, ctx);
    return;
    }
    // 0x0026804C: nop

    // 0x00268050: lw          $v0, 0x144($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X144);
    // 0x00268054: blez        $v0, L_0026806C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00268058: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0026806C;
    }
    // 0x00268058: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0026805C: lw          $v0, 0x48($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X48);
    // 0x00268060: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x00268064: beq         $v0, $zero, L_00268070
    if (ctx->r2 == 0) {
        // 0x00268068: nop
    
            goto L_00268070;
    }
    // 0x00268068: nop

L_0026806C:
    // 0x0026806C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_00268070:
    // 0x00268070: jr          $ra
    // 0x00268074: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    return;
    // 0x00268074: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
;}
RECOMP_FUNC void func_0040C65C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040C65C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0040C660: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x0040C664: lw          $a0, -0x490($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X490);
    // 0x0040C668: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0040C66C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0040C670: jal         0x00243414
    // 0x0040C674: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0040C674: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_0:
    // 0x0040C678: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0040C67C: jr          $ra
    // 0x0040C680: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040C680: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0021AE6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021AE6C: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x0021AE70: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x0021AE74: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x0021AE78: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0021AE7C: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x0021AE80: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x0021AE84: sdc1        $f21, 0x58($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X58, ctx->r29);
    // 0x0021AE88: sdc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X50, ctx->r29);
    // 0x0021AE8C: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0021AE90: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x0021AE94: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0021AE98: beq         $v0, $zero, L_0021AEEC
    if (ctx->r2 == 0) {
        // 0x0021AE9C: addu        $s2, $a0, $zero
        ctx->r18 = ADD32(ctx->r4, 0);
            goto L_0021AEEC;
    }
    // 0x0021AE9C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0021AEA0: lw          $v0, 0x1A8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A8);
    // 0x0021AEA4: lw          $s1, 0x51C($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X51C);
    // 0x0021AEA8: beq         $s1, $zero, L_0021AF94
    if (ctx->r17 == 0) {
        // 0x0021AEAC: nop
    
            goto L_0021AF94;
    }
    // 0x0021AEAC: nop

    // 0x0021AEB0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021AEB4: lwc1        $f20, 0x5B18($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X5B18);
    // 0x0021AEB8: jal         0x002982F0
    // 0x0021AEBC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_002982F0(rdram, ctx);
        goto after_0;
    // 0x0021AEBC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_0:
    // 0x0021AEC0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x0021AEC4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021AEC8: swc1        $f0, -0x2874($at)
    MEM_W(-0X2874, ctx->r1) = ctx->f0.u32l;
    // 0x0021AECC: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x0021AED0: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x0021AED4: jal         0x002974C0
    // 0x0021AED8: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    func_002974C0(rdram, ctx);
        goto after_1;
    // 0x0021AED8: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    after_1:
    // 0x0021AEDC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0021AEE0: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x0021AEE4: j           L_0021AFEC
    // 0x0021AEE8: addiu       $a2, $s1, 0x12C
    ctx->r6 = ADD32(ctx->r17, 0X12C);
        goto L_0021AFEC;
    // 0x0021AEE8: addiu       $a2, $s1, 0x12C
    ctx->r6 = ADD32(ctx->r17, 0X12C);
L_0021AEEC:
    // 0x0021AEEC: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x0021AEF0: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x0021AEF4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0021AEF8: bne         $v1, $v0, L_0021AF94
    if (ctx->r3 != ctx->r2) {
        // 0x0021AEFC: nop
    
            goto L_0021AF94;
    }
    // 0x0021AEFC: nop

    // 0x0021AF00: lwc1        $f12, 0x24C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X24C);
    // 0x0021AF04: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021AF08: lwc1        $f20, 0x5B1C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X5B1C);
    // 0x0021AF0C: mul.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f20.fl);
    // 0x0021AF10: jal         0x002982F0
    // 0x0021AF14: nop

    func_002982F0(rdram, ctx);
        goto after_2;
    // 0x0021AF14: nop

    after_2:
    // 0x0021AF18: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x0021AF1C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x0021AF20: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x0021AF24: lwc1        $f12, 0x24C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X24C);
    // 0x0021AF28: mul.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f20.fl);
    // 0x0021AF2C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021AF30: swc1        $f0, -0x2874($at)
    MEM_W(-0X2874, ctx->r1) = ctx->f0.u32l;
    // 0x0021AF34: jal         0x002974C0
    // 0x0021AF38: nop

    func_002974C0(rdram, ctx);
        goto after_3;
    // 0x0021AF38: nop

    after_3:
    // 0x0021AF3C: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x0021AF40: lwc1        $f12, 0x50($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X50);
    // 0x0021AF44: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021AF48: lwc1        $f21, 0x5B20($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X5B20);
    // 0x0021AF4C: add.s       $f12, $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f21.fl;
    // 0x0021AF50: mul.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f20.fl);
    // 0x0021AF54: jal         0x002982F0
    // 0x0021AF58: nop

    func_002982F0(rdram, ctx);
        goto after_4;
    // 0x0021AF58: nop

    after_4:
    // 0x0021AF5C: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x0021AF60: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x0021AF64: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x0021AF68: lwc1        $f12, 0x50($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X50);
    // 0x0021AF6C: add.s       $f12, $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f21.fl;
    // 0x0021AF70: mul.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f20.fl);
    // 0x0021AF74: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021AF78: swc1        $f0, -0x2874($at)
    MEM_W(-0X2874, ctx->r1) = ctx->f0.u32l;
    // 0x0021AF7C: jal         0x002974C0
    // 0x0021AF80: nop

    func_002974C0(rdram, ctx);
        goto after_5;
    // 0x0021AF80: nop

    after_5:
    // 0x0021AF84: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0021AF88: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x0021AF8C: j           L_0021AFEC
    // 0x0021AF90: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
        goto L_0021AFEC;
    // 0x0021AF90: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
L_0021AF94:
    // 0x0021AF94: lwc1        $f12, 0x50($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X50);
    // 0x0021AF98: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021AF9C: lwc1        $f21, 0x5B24($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X5B24);
    // 0x0021AFA0: add.s       $f12, $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f21.fl;
    // 0x0021AFA4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021AFA8: lwc1        $f20, 0x5B28($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X5B28);
    // 0x0021AFAC: mul.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f20.fl);
    // 0x0021AFB0: jal         0x002982F0
    // 0x0021AFB4: nop

    func_002982F0(rdram, ctx);
        goto after_6;
    // 0x0021AFB4: nop

    after_6:
    // 0x0021AFB8: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x0021AFBC: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x0021AFC0: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x0021AFC4: lwc1        $f12, 0x50($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X50);
    // 0x0021AFC8: add.s       $f12, $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f21.fl;
    // 0x0021AFCC: mul.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f20.fl);
    // 0x0021AFD0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021AFD4: swc1        $f0, -0x2874($at)
    MEM_W(-0X2874, ctx->r1) = ctx->f0.u32l;
    // 0x0021AFD8: jal         0x002974C0
    // 0x0021AFDC: nop

    func_002974C0(rdram, ctx);
        goto after_7;
    // 0x0021AFDC: nop

    after_7:
    // 0x0021AFE0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0021AFE4: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x0021AFE8: addiu       $a2, $s0, 0x40
    ctx->r6 = ADD32(ctx->r16, 0X40);
L_0021AFEC:
    // 0x0021AFEC: jal         0x00210F68
    // 0x0021AFF0: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    func_00210F68(rdram, ctx);
        goto after_8;
    // 0x0021AFF0: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    after_8:
    // 0x0021AFF4: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x0021AFF8: lw          $a3, 0x10($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X10);
    // 0x0021AFFC: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x0021B000: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x0021B004: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x0021B008: sw          $a3, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r7;
    // 0x0021B00C: sw          $t0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r8;
    // 0x0021B010: sw          $t1, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r9;
    // 0x0021B014: sw          $t2, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r10;
    // 0x0021B018: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x0021B01C: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x0021B020: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x0021B024: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x0021B028: ldc1        $f21, 0x58($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X58);
    // 0x0021B02C: ldc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X50);
    // 0x0021B030: jr          $ra
    // 0x0021B034: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x0021B034: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_00271E20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00271E20: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x00271E24: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x00271E28: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00271E2C: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x00271E30: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x00271E34: sdc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X50, ctx->r29);
    // 0x00271E38: beq         $s0, $zero, L_00271F00
    if (ctx->r16 == 0) {
        // 0x00271E3C: addu        $a2, $a0, $zero
        ctx->r6 = ADD32(ctx->r4, 0);
            goto L_00271F00;
    }
    // 0x00271E3C: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x00271E40: addiu       $s1, $sp, 0x20
    ctx->r17 = ADD32(ctx->r29, 0X20);
    // 0x00271E44: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00271E48: jal         0x0020EF2C
    // 0x00271E4C: addiu       $a1, $s0, 0x114
    ctx->r5 = ADD32(ctx->r16, 0X114);
    func_0020EF2C(rdram, ctx);
        goto after_0;
    // 0x00271E4C: addiu       $a1, $s0, 0x114
    ctx->r5 = ADD32(ctx->r16, 0X114);
    after_0:
    // 0x00271E50: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x00271E54: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00271E58: lwc1        $f1, 0x28($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x00271E5C: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x00271E60: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00271E64: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00271E68: lwc1        $f1, -0x7F10($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7F10);
    // 0x00271E6C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00271E70: nop

    // 0x00271E74: bc1t        L_00271F54
    if (c1cs) {
        // 0x00271E78: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_00271F54;
    }
    // 0x00271E78: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x00271E7C: addiu       $a0, $s0, 0x14C
    ctx->r4 = ADD32(ctx->r16, 0X14C);
    // 0x00271E80: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00271E84: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x00271E88: jal         0x0020FB90
    // 0x00271E8C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0020FB90(rdram, ctx);
        goto after_1;
    // 0x00271E8C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00271E90: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x00271E94: lwc1        $f20, 0x34($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X34);
    // 0x00271E98: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00271E9C: lwc1        $f0, -0x7F0C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7F0C);
    // 0x00271EA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00271EA4: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x00271EA8: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x00271EAC: jal         0x0020F040
    // 0x00271EB0: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_0020F040(rdram, ctx);
        goto after_2;
    // 0x00271EB0: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x00271EB4: lwc1        $f2, 0x30($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X30);
    // 0x00271EB8: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x00271EBC: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00271EC0: lwc1        $f1, 0x34($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X34);
    // 0x00271EC4: lwc1        $f0, 0x14($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X14);
    // 0x00271EC8: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00271ECC: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x00271ED0: lwc1        $f0, 0x18($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X18);
    // 0x00271ED4: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x00271ED8: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x00271EDC: jal         0x0021153C
    // 0x00271EE0: add.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f12.fl;
    func_0021153C(rdram, ctx);
        goto after_3;
    // 0x00271EE0: add.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f12.fl;
    after_3:
    // 0x00271EE4: jal         0x002982F0
    // 0x00271EE8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_002982F0(rdram, ctx);
        goto after_4;
    // 0x00271EE8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_4:
    // 0x00271EEC: lwc1        $f1, 0x30($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x00271EF0: c.eq.s      $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f1.fl == ctx->f20.fl;
    // 0x00271EF4: nop

    // 0x00271EF8: bc1f        L_00271F08
    if (!c1cs) {
        // 0x00271EFC: nop
    
            goto L_00271F08;
    }
    // 0x00271EFC: nop

L_00271F00:
    // 0x00271F00: j           L_00271F54
    // 0x00271F04: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
        goto L_00271F54;
    // 0x00271F04: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
L_00271F08:
    // 0x00271F08: c.lt.s      $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f20.fl < ctx->f1.fl;
    // 0x00271F0C: nop

    // 0x00271F10: bc1fl       L_00271F30
    if (!c1cs) {
        // 0x00271F14: abs.s       $f0, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
            goto L_00271F30;
    }
    goto skip_0;
    // 0x00271F14: abs.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
    skip_0:
    // 0x00271F18: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x00271F1C: nop

    // 0x00271F20: bc1f        L_00271F34
    if (!c1cs) {
        // 0x00271F24: nop
    
            goto L_00271F34;
    }
    // 0x00271F24: nop

    // 0x00271F28: j           L_00271F34
    // 0x00271F2C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_00271F34;
    // 0x00271F2C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_00271F30:
    // 0x00271F30: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_00271F34:
    // 0x00271F34: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00271F38: lwc1        $f1, -0x7F08($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7F08);
    // 0x00271F3C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00271F40: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00271F44: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00271F48: mfc1        $v0, $f3
    ctx->r2 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00271F4C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x00271F50: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
L_00271F54:
    // 0x00271F54: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x00271F58: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x00271F5C: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x00271F60: ldc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X50);
    // 0x00271F64: jr          $ra
    // 0x00271F68: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x00271F68: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_0042FE4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042FE4C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0042FE50: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0042FE54: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0042FE58: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042FE5C: addiu       $a2, $zero, 0x11F0
    ctx->r6 = ADD32(0, 0X11F0);
    // 0x0042FE60: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0042FE64: jal         0x00266C5C
    // 0x0042FE68: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_00266C5C(rdram, ctx);
        goto after_0;
    // 0x0042FE68: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x0042FE6C: addiu       $a0, $s0, 0xC
    ctx->r4 = ADD32(ctx->r16, 0XC);
    // 0x0042FE70: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042FE74: jal         0x00200500
    // 0x0042FE78: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00200500(rdram, ctx);
        goto after_1;
    // 0x0042FE78: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_1:
    // 0x0042FE7C: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
    // 0x0042FE80: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042FE84: jal         0x00200500
    // 0x0042FE88: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00200500(rdram, ctx);
        goto after_2;
    // 0x0042FE88: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_2:
    // 0x0042FE8C: addiu       $a0, $s0, 0xF0C
    ctx->r4 = ADD32(ctx->r16, 0XF0C);
    // 0x0042FE90: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042FE94: jal         0x00200500
    // 0x0042FE98: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00200500(rdram, ctx);
        goto after_3;
    // 0x0042FE98: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_3:
    // 0x0042FE9C: addiu       $s1, $s0, 0x40
    ctx->r17 = ADD32(ctx->r16, 0X40);
    // 0x0042FEA0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0042FEA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042FEA8: sw          $v0, 0x11E8($s0)
    MEM_W(0X11E8, ctx->r16) = ctx->r2;
    // 0x0042FEAC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0042FEB0: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x0042FEB4: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x0042FEB8: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x0042FEBC: sw          $zero, 0xF00($s0)
    MEM_W(0XF00, ctx->r16) = 0;
    // 0x0042FEC0: sw          $zero, 0xF04($s0)
    MEM_W(0XF04, ctx->r16) = 0;
    // 0x0042FEC4: sw          $zero, 0xF08($s0)
    MEM_W(0XF08, ctx->r16) = 0;
    // 0x0042FEC8: jal         0x0042F9B0
    // 0x0042FECC: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
    func_0042F9B0(rdram, ctx);
        goto after_4;
    // 0x0042FECC: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
    after_4:
    // 0x0042FED0: jal         0x0027D160
    // 0x0042FED4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0027D160(rdram, ctx);
        goto after_5;
    // 0x0042FED4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x0042FED8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0042FEDC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0042FEE0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042FEE4: jr          $ra
    // 0x0042FEE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0042FEE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002245BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002245BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002245C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002245C4: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x002245C8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002245CC: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x002245D0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002245D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x002245D8: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x002245DC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x002245E0: beq         $v1, $v0, L_002246E8
    if (ctx->r3 == ctx->r2) {
        // 0x002245E4: addu        $s2, $a3, $zero
        ctx->r18 = ADD32(ctx->r7, 0);
            goto L_002246E8;
    }
    // 0x002245E4: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    // 0x002245E8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x002245EC: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x002245F0: lw          $v0, -0x7058($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7058);
    // 0x002245F4: bne         $v0, $s0, L_0022463C
    if (ctx->r2 != ctx->r16) {
        // 0x002245F8: sll         $v0, $s1, 2
        ctx->r2 = S32(ctx->r17 << 2);
            goto L_0022463C;
    }
    // 0x002245F8: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x002245FC: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x00224600: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x00224604: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x00224608: lw          $v1, 0xE0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XE0);
    // 0x0022460C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00224610: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00224614: lw          $v1, 0x14($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X14);
    // 0x00224618: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0022461C: addiu       $v0, $v0, -0x9
    ctx->r2 = ADD32(ctx->r2, -0X9);
    // 0x00224620: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x00224624: beq         $v0, $zero, L_0022463C
    if (ctx->r2 == 0) {
        // 0x00224628: nop
    
            goto L_0022463C;
    }
    // 0x00224628: nop

    // 0x0022462C: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x00224630: andi        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 & 0X200;
    // 0x00224634: bne         $v0, $zero, L_002246E8
    if (ctx->r2 != 0) {
        // 0x00224638: nop
    
            goto L_002246E8;
    }
    // 0x00224638: nop

L_0022463C:
    // 0x0022463C: lw          $a0, 0x6C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6C);
    // 0x00224640: jal         0x002017D4
    // 0x00224644: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00224644: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x00224648: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0022464C: jal         0x002017D4
    // 0x00224650: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00224650: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00224654: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00224658: jal         0x002017D4
    // 0x0022465C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x0022465C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_2:
    // 0x00224660: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00224664: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00224668: jal         0x002017D4
    // 0x0022466C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x0022466C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x00224670: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00224674: jal         0x00201818
    // 0x00224678: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_00201818(rdram, ctx);
        goto after_4;
    // 0x00224678: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x0022467C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00224680: jal         0x002017D4
    // 0x00224684: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x00224684: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x00224688: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0022468C: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    // 0x00224690: andi        $v1, $s1, 0x7
    ctx->r3 = ctx->r17 & 0X7;
    // 0x00224694: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00224698: beq         $s2, $zero, L_002246C4
    if (ctx->r18 == 0) {
        // 0x0022469C: sllv        $a0, $v0, $v1
        ctx->r4 = S32(ctx->r2 << (ctx->r3 & 31));
            goto L_002246C4;
    }
    // 0x0022469C: sllv        $a0, $v0, $v1
    ctx->r4 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x002246A0: bgez        $s1, L_002246AC
    if (SIGNED(ctx->r17) >= 0) {
        // 0x002246A4: addu        $v1, $s1, $zero
        ctx->r3 = ADD32(ctx->r17, 0);
            goto L_002246AC;
    }
    // 0x002246A4: addu        $v1, $s1, $zero
    ctx->r3 = ADD32(ctx->r17, 0);
    // 0x002246A8: addiu       $v1, $s1, 0x7
    ctx->r3 = ADD32(ctx->r17, 0X7);
L_002246AC:
    // 0x002246AC: sra         $v1, $v1, 3
    ctx->r3 = S32(SIGNED(ctx->r3) >> 3);
    // 0x002246B0: addu        $v1, $a1, $v1
    ctx->r3 = ADD32(ctx->r5, ctx->r3);
    // 0x002246B4: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x002246B8: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x002246BC: j           L_002246E8
    // 0x002246C0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
        goto L_002246E8;
    // 0x002246C0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_002246C4:
    // 0x002246C4: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x002246C8: bltzl       $a2, L_002246D0
    if (SIGNED(ctx->r6) < 0) {
        // 0x002246CC: addiu       $a2, $a2, 0x7
        ctx->r6 = ADD32(ctx->r6, 0X7);
            goto L_002246D0;
    }
    goto skip_0;
    // 0x002246CC: addiu       $a2, $a2, 0x7
    ctx->r6 = ADD32(ctx->r6, 0X7);
    skip_0:
L_002246D0:
    // 0x002246D0: sra         $v0, $a2, 3
    ctx->r2 = S32(SIGNED(ctx->r6) >> 3);
    // 0x002246D4: addu        $v0, $a3, $v0
    ctx->r2 = ADD32(ctx->r7, ctx->r2);
    // 0x002246D8: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x002246DC: nor         $a0, $zero, $a0
    ctx->r4 = ~(0 | ctx->r4);
    // 0x002246E0: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x002246E4: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
L_002246E8:
    // 0x002246E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x002246EC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002246F0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002246F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002246F8: jr          $ra
    // 0x002246FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002246FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0040C850(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040C850: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x0040C854: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0040C858: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0040C85C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x0040C860: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x0040C864: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0040C868: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0040C86C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0040C870: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0040C874: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x0040C878: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x0040C87C: beq         $v0, $zero, L_0040CB00
    if (ctx->r2 == 0) {
        // 0x0040C880: nop
    
            goto L_0040CB00;
    }
    // 0x0040C880: nop

    // 0x0040C884: lwc1        $f0, 0xC($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0XC);
    // 0x0040C888: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0040C88C: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x0040C890: sub.s       $f1, $f0, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0040C894: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0040C898: lui         $s4, 0x8013
    ctx->r20 = S32(0X8013 << 16);
    // 0x0040C89C: addiu       $s4, $s4, 0x200
    ctx->r20 = ADD32(ctx->r20, 0X200);
    // 0x0040C8A0: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0040C8A4: nop

    // 0x0040C8A8: bc1f        L_0040CB00
    if (!c1cs) {
        // 0x0040C8AC: swc1        $f1, 0xC($s3)
        MEM_W(0XC, ctx->r19) = ctx->f_odd[(1 - 1) * 2];
            goto L_0040CB00;
    }
    // 0x0040C8AC: swc1        $f1, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->f_odd[(1 - 1) * 2];
    // 0x0040C8B0: lwc1        $f0, 0x8($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X8);
    // 0x0040C8B4: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0040C8B8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040C8BC: lwc1        $f20, 0x8D0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X8D0);
    // 0x0040C8C0: swc1        $f0, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->f0.u32l;
    // 0x0040C8C4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_0040C8C8:
    // 0x0040C8C8: lw          $v1, 0x4($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X4);
    // 0x0040C8CC: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x0040C8D0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0040C8D4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x0040C8D8: lw          $s5, 0x0($v0)
    ctx->r21 = MEM_W(ctx->r2, 0X0);
    // 0x0040C8DC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0040C8E0: sw          $v1, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r3;
    // 0x0040C8E4: lw          $v1, 0x4($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X4);
    // 0x0040C8E8: andi        $v0, $s5, 0x800
    ctx->r2 = ctx->r21 & 0X800;
    // 0x0040C8EC: blez        $v1, L_0040C978
    if (SIGNED(ctx->r3) <= 0) {
        // 0x0040C8F0: sltu        $s2, $s0, $v0
        ctx->r18 = ctx->r16 < ctx->r2 ? 1 : 0;
            goto L_0040C978;
    }
    // 0x0040C8F0: sltu        $s2, $s0, $v0
    ctx->r18 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x0040C8F4: addu        $s1, $s4, $zero
    ctx->r17 = ADD32(ctx->r20, 0);
L_0040C8F8:
    // 0x0040C8F8: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x0040C8FC: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x0040C900: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x0040C904: bne         $v1, $zero, L_0040C910
    if (ctx->r3 != 0) {
        // 0x0040C908: nop
    
            goto L_0040C910;
    }
    // 0x0040C908: nop

    // 0x0040C90C: break       7
    do_break(4245772);
L_0040C910:
    // 0x0040C910: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x0040C914: bne         $v1, $at, L_0040C928
    if (ctx->r3 != ctx->r1) {
        // 0x0040C918: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_0040C928;
    }
    // 0x0040C918: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x0040C91C: bne         $v0, $at, L_0040C928
    if (ctx->r2 != ctx->r1) {
        // 0x0040C920: nop
    
            goto L_0040C928;
    }
    // 0x0040C920: nop

    // 0x0040C924: break       6
    do_break(4245796);
L_0040C928:
    // 0x0040C928: mfhi        $v1
    ctx->r3 = hi;
    // 0x0040C92C: srav        $v0, $s5, $v1
    ctx->r2 = S32(SIGNED(ctx->r21) >> (ctx->r3 & 31));
    // 0x0040C930: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0040C934: beq         $v0, $zero, L_0040C964
    if (ctx->r2 == 0) {
        // 0x0040C938: nop
    
            goto L_0040C964;
    }
    // 0x0040C938: nop

    // 0x0040C93C: lw          $v0, 0x50C($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X50C);
    // 0x0040C940: beql        $v0, $zero, L_0040C948
    if (ctx->r2 == 0) {
        // 0x0040C944: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_0040C948;
    }
    goto skip_0;
    // 0x0040C944: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    skip_0:
L_0040C948:
    // 0x0040C948: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x0040C94C: lw          $v0, 0x144($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X144);
    // 0x0040C950: blez        $v0, L_0040C964
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040C954: addiu       $a1, $a0, 0x140
        ctx->r5 = ADD32(ctx->r4, 0X140);
            goto L_0040C964;
    }
    // 0x0040C954: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // 0x0040C958: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x0040C95C: jal         0x00243414
    // 0x0040C960: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0040C960: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_0:
L_0040C964:
    // 0x0040C964: lw          $v1, 0x4($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X4);
    // 0x0040C968: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0040C96C: slt         $v0, $s0, $v1
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x0040C970: bne         $v0, $zero, L_0040C8F8
    if (ctx->r2 != 0) {
        // 0x0040C974: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_0040C8F8;
    }
    // 0x0040C974: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_0040C978:
    // 0x0040C978: lw          $v1, 0x18($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X18);
    // 0x0040C97C: blez        $v1, L_0040CA30
    if (SIGNED(ctx->r3) <= 0) {
        // 0x0040C980: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0040CA30;
    }
    // 0x0040C980: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0040C984: addu        $s1, $s4, $zero
    ctx->r17 = ADD32(ctx->r20, 0);
L_0040C988:
    // 0x0040C988: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x0040C98C: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x0040C990: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x0040C994: bne         $v1, $zero, L_0040C9A0
    if (ctx->r3 != 0) {
        // 0x0040C998: nop
    
            goto L_0040C9A0;
    }
    // 0x0040C998: nop

    // 0x0040C99C: break       7
    do_break(4245916);
L_0040C9A0:
    // 0x0040C9A0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x0040C9A4: bne         $v1, $at, L_0040C9B8
    if (ctx->r3 != ctx->r1) {
        // 0x0040C9A8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_0040C9B8;
    }
    // 0x0040C9A8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x0040C9AC: bne         $v0, $at, L_0040C9B8
    if (ctx->r2 != ctx->r1) {
        // 0x0040C9B0: nop
    
            goto L_0040C9B8;
    }
    // 0x0040C9B0: nop

    // 0x0040C9B4: break       6
    do_break(4245940);
L_0040C9B8:
    // 0x0040C9B8: mfhi        $v1
    ctx->r3 = hi;
    // 0x0040C9BC: addiu       $v0, $v1, 0x4
    ctx->r2 = ADD32(ctx->r3, 0X4);
    // 0x0040C9C0: srav        $v0, $s5, $v0
    ctx->r2 = S32(SIGNED(ctx->r21) >> (ctx->r2 & 31));
    // 0x0040C9C4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0040C9C8: beq         $v0, $zero, L_0040CA1C
    if (ctx->r2 == 0) {
        // 0x0040C9CC: nop
    
            goto L_0040CA1C;
    }
    // 0x0040C9CC: nop

    // 0x0040C9D0: lw          $v0, 0x510($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X510);
    // 0x0040C9D4: beql        $v0, $zero, L_0040C9DC
    if (ctx->r2 == 0) {
        // 0x0040C9D8: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_0040C9DC;
    }
    goto skip_1;
    // 0x0040C9D8: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    skip_1:
L_0040C9DC:
    // 0x0040C9DC: lw          $a0, 0x1C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X1C);
    // 0x0040C9E0: lw          $v0, 0x144($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X144);
    // 0x0040C9E4: beq         $v0, $zero, L_0040CA1C
    if (ctx->r2 == 0) {
        // 0x0040C9E8: nop
    
            goto L_0040CA1C;
    }
    // 0x0040C9E8: nop

    // 0x0040C9EC: lwc1        $f0, 0x25C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X25C);
    // 0x0040C9F0: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x0040C9F4: nop

    // 0x0040C9F8: bc1f        L_0040CA0C
    if (!c1cs) {
        // 0x0040C9FC: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_0040CA0C;
    }
    // 0x0040C9FC: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x0040CA00: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // 0x0040CA04: j           L_0040CA14
    // 0x0040CA08: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
        goto L_0040CA14;
    // 0x0040CA08: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
L_0040CA0C:
    // 0x0040CA0C: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // 0x0040CA10: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
L_0040CA14:
    // 0x0040CA14: jal         0x00243414
    // 0x0040CA18: nop

    func_00243414(rdram, ctx);
        goto after_1;
    // 0x0040CA18: nop

    after_1:
L_0040CA1C:
    // 0x0040CA1C: lw          $v1, 0x18($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X18);
    // 0x0040CA20: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0040CA24: slt         $v0, $s0, $v1
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x0040CA28: bne         $v0, $zero, L_0040C988
    if (ctx->r2 != 0) {
        // 0x0040CA2C: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_0040C988;
    }
    // 0x0040CA2C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_0040CA30:
    // 0x0040CA30: lw          $v1, 0x2C($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X2C);
    // 0x0040CA34: blez        $v1, L_0040CAC4
    if (SIGNED(ctx->r3) <= 0) {
        // 0x0040CA38: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0040CAC4;
    }
    // 0x0040CA38: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0040CA3C: addu        $s1, $s4, $zero
    ctx->r17 = ADD32(ctx->r20, 0);
L_0040CA40:
    // 0x0040CA40: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x0040CA44: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x0040CA48: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x0040CA4C: bne         $v1, $zero, L_0040CA58
    if (ctx->r3 != 0) {
        // 0x0040CA50: nop
    
            goto L_0040CA58;
    }
    // 0x0040CA50: nop

    // 0x0040CA54: break       7
    do_break(4246100);
L_0040CA58:
    // 0x0040CA58: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x0040CA5C: bne         $v1, $at, L_0040CA70
    if (ctx->r3 != ctx->r1) {
        // 0x0040CA60: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_0040CA70;
    }
    // 0x0040CA60: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x0040CA64: bne         $v0, $at, L_0040CA70
    if (ctx->r2 != ctx->r1) {
        // 0x0040CA68: nop
    
            goto L_0040CA70;
    }
    // 0x0040CA68: nop

    // 0x0040CA6C: break       6
    do_break(4246124);
L_0040CA70:
    // 0x0040CA70: mfhi        $v1
    ctx->r3 = hi;
    // 0x0040CA74: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x0040CA78: srav        $v0, $s5, $v0
    ctx->r2 = S32(SIGNED(ctx->r21) >> (ctx->r2 & 31));
    // 0x0040CA7C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0040CA80: beq         $v0, $zero, L_0040CAB0
    if (ctx->r2 == 0) {
        // 0x0040CA84: nop
    
            goto L_0040CAB0;
    }
    // 0x0040CA84: nop

    // 0x0040CA88: lw          $v0, 0x514($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X514);
    // 0x0040CA8C: beql        $v0, $zero, L_0040CA94
    if (ctx->r2 == 0) {
        // 0x0040CA90: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_0040CA94;
    }
    goto skip_2;
    // 0x0040CA90: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    skip_2:
L_0040CA94:
    // 0x0040CA94: lw          $a0, 0x30($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X30);
    // 0x0040CA98: lw          $v0, 0x144($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X144);
    // 0x0040CA9C: beq         $v0, $zero, L_0040CAB0
    if (ctx->r2 == 0) {
        // 0x0040CAA0: addiu       $a1, $a0, 0x140
        ctx->r5 = ADD32(ctx->r4, 0X140);
            goto L_0040CAB0;
    }
    // 0x0040CAA0: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // 0x0040CAA4: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x0040CAA8: jal         0x00243414
    // 0x0040CAAC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x0040CAAC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_2:
L_0040CAB0:
    // 0x0040CAB0: lw          $v1, 0x2C($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X2C);
    // 0x0040CAB4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0040CAB8: slt         $v0, $s0, $v1
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x0040CABC: bne         $v0, $zero, L_0040CA40
    if (ctx->r2 != 0) {
        // 0x0040CAC0: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_0040CA40;
    }
    // 0x0040CAC0: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_0040CAC4:
    // 0x0040CAC4: lw          $v0, 0x4($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X4);
    // 0x0040CAC8: lw          $v1, 0x0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X0);
    // 0x0040CACC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0040CAD0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0040CAD4: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x0040CAD8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0040CADC: bne         $v1, $v0, L_0040CAF8
    if (ctx->r3 != ctx->r2) {
        // 0x0040CAE0: nop
    
            goto L_0040CAF8;
    }
    // 0x0040CAE0: nop

    // 0x0040CAE4: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x0040CAE8: lw          $v1, 0x10($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X10);
    // 0x0040CAEC: sw          $zero, 0x4($s3)
    MEM_W(0X4, ctx->r19) = 0;
    // 0x0040CAF0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0040CAF4: sw          $v0, 0x14($s3)
    MEM_W(0X14, ctx->r19) = ctx->r2;
L_0040CAF8:
    // 0x0040CAF8: bne         $s2, $zero, L_0040C8C8
    if (ctx->r18 != 0) {
        // 0x0040CAFC: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0040C8C8;
    }
    // 0x0040CAFC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_0040CB00:
    // 0x0040CB00: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x0040CB04: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0040CB08: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0040CB0C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0040CB10: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0040CB14: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0040CB18: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0040CB1C: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x0040CB20: jr          $ra
    // 0x0040CB24: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0040CB24: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0025A480(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025A480: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x0025A484: sw          $s0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r16;
    // 0x0025A488: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0025A48C: sw          $s1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r17;
    // 0x0025A490: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0025A494: sw          $ra, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r31;
    // 0x0025A498: jal         0x0026D5DC
    // 0x0025A49C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_0026D5DC(rdram, ctx);
        goto after_0;
    // 0x0025A49C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_0:
    // 0x0025A4A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025A4A4: jal         0x0025A600
    // 0x0025A4A8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0025A600(rdram, ctx);
        goto after_1;
    // 0x0025A4A8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x0025A4AC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0025A4B0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0025A4B4: sra         $a1, $v0, 16
    ctx->r5 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0025A4B8: jal         0x0026D5E4
    // 0x0025A4BC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_0026D5E4(rdram, ctx);
        goto after_2;
    // 0x0025A4BC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_2:
    // 0x0025A4C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025A4C4: jal         0x0025A684
    // 0x0025A4C8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0025A684(rdram, ctx);
        goto after_3;
    // 0x0025A4C8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x0025A4CC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0025A4D0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0025A4D4: sra         $a1, $v0, 16
    ctx->r5 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0025A4D8: jal         0x0026D5E4
    // 0x0025A4DC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_0026D5E4(rdram, ctx);
        goto after_4;
    // 0x0025A4DC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_4:
    // 0x0025A4E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025A4E4: jal         0x0025A810
    // 0x0025A4E8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0025A810(rdram, ctx);
        goto after_5;
    // 0x0025A4E8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_5:
    // 0x0025A4EC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0025A4F0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0025A4F4: sra         $a1, $v0, 16
    ctx->r5 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0025A4F8: jal         0x0026D5E4
    // 0x0025A4FC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_0026D5E4(rdram, ctx);
        goto after_6;
    // 0x0025A4FC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_6:
    // 0x0025A500: jal         0x0026D628
    // 0x0025A504: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_0026D628(rdram, ctx);
        goto after_7;
    // 0x0025A504: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_7:
    // 0x0025A508: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0025A50C: lw          $ra, 0x80($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X80);
    // 0x0025A510: lw          $s1, 0x7C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X7C);
    // 0x0025A514: lw          $s0, 0x78($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X78);
    // 0x0025A518: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0025A51C: jr          $ra
    // 0x0025A520: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x0025A520: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_0044B798(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004128A0:
    // 0x0044B798: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
L_00412900:
    // 0x0044B79C: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
L_00412908:
    // 0x0044B7A0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
L_00412930:
    // 0x0044B7A4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0044B7A8: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x0044B7AC: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x0044B7B0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0044B7B4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0044B7B8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0044B7BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0044B7C0: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x0044B7C4: lwc1        $f20, 0x1C($v0)
    ctx->f20.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x0044B7C8: jal         0x00284174
    // 0x0044B7CC: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    func_00284174(rdram, ctx);
        goto after_0;
    // 0x0044B7CC: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    after_0:
    // 0x0044B7D0: beq         $v0, $zero, L_0044B970
    if (ctx->r2 == 0) {
        // 0x0044B7D4: nop
    
            goto L_0044B970;
    }
    // 0x0044B7D4: nop

    // 0x0044B7D8: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0044B7DC: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x0044B7E0: lw          $v0, 0x50($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X50);
    // 0x0044B7E4: beq         $v0, $zero, L_0044B970
    if (ctx->r2 == 0) {
        // 0x0044B7E8: nop
    
            goto L_0044B970;
    }
    // 0x0044B7E8: nop

    // 0x0044B7EC: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    // 0x0044B7F0: jal         0x002017D4
    // 0x0044B7F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x0044B7F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x0044B7F8: lw          $s3, 0x4($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X4);
    // 0x0044B7FC: beq         $s3, $zero, L_0044B970
    if (ctx->r19 == 0) {
        // 0x0044B800: addiu       $v1, $v0, 0x8
        ctx->r3 = ADD32(ctx->r2, 0X8);
            goto L_0044B970;
    }
    // 0x0044B800: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x0044B804: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0044B808: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x0044B80C: lwc1        $f0, 0x34($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X34);
    // 0x0044B810: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x0044B814: nop

    // 0x0044B818: bc1tl       L_0044B820
    if (c1cs) {
        // 0x0044B81C: addiu       $s4, $zero, 0x1
        ctx->r20 = ADD32(0, 0X1);
            goto L_0044B820;
    }
    goto skip_0;
    // 0x0044B81C: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    skip_0:
L_0044B820:
    // 0x0044B820: blez        $s3, L_0044B970
    if (SIGNED(ctx->r19) <= 0) {
        // 0x0044B824: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_0044B970;
    }
    // 0x0044B824: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x0044B828: lui         $s5, 0x800F
    ctx->r21 = S32(0X800F << 16);
    // 0x0044B82C: addiu       $s5, $s5, 0x7078
    ctx->r21 = ADD32(ctx->r21, 0X7078);
    // 0x0044B830: addu        $s1, $v1, $zero
    ctx->r17 = ADD32(ctx->r3, 0);
L_0044B834:
    // 0x0044B834: lwc1        $f1, 0x0($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X0);
    // 0x0044B838: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044B83C: lwc1        $f0, 0xAD0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XAD0);
    // 0x0044B840: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0044B844: nop

    // 0x0044B848: bc1tl       L_0044B964
    if (c1cs) {
        // 0x0044B84C: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_0044B964;
    }
    goto skip_1;
    // 0x0044B84C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_1:
    // 0x0044B850: c.lt.s      $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f20.fl < ctx->f1.fl;
    // 0x0044B854: nop

    // 0x0044B858: bc1f        L_0044B868
    if (!c1cs) {
        // 0x0044B85C: nop
    
            goto L_0044B868;
    }
    // 0x0044B85C: nop

    // 0x0044B860: beql        $s4, $zero, L_0044B964
    if (ctx->r20 == 0) {
        // 0x0044B864: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_0044B964;
    }
    goto skip_2;
    // 0x0044B864: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_2:
L_0044B868:
    // 0x0044B868: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x0044B86C: bne         $v0, $zero, L_0044B88C
    if (ctx->r2 != 0) {
        // 0x0044B870: nop
    
            goto L_0044B88C;
    }
    // 0x0044B870: nop

    // 0x0044B874: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x0044B878: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x0044B87C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0044B880: lw          $v0, 0x1178($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X1178);
    // 0x0044B884: j           L_004128A0
    // 0x0044B888: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    entry_004128A0(rdram, ctx);
    return;
    // 0x0044B888: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
L_0044B88C:
    // 0x0044B88C: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x0044B890: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x0044B894: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0044B898: lw          $v0, 0x117C($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X117C);
    // 0x0044B89C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0044B8A0: addu        $s0, $v0, $v1
    ctx->r16 = ADD32(ctx->r2, ctx->r3);
    // 0x0044B8A4: lbu         $v1, 0x11($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X11);
    // 0x0044B8A8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x0044B8AC: beq         $v1, $v0, L_0044B8F0
    if (ctx->r3 == ctx->r2) {
        // 0x0044B8B0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0044B8F0;
    }
    // 0x0044B8B0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0044B8B4: slti        $v0, $v1, 0xA
    ctx->r2 = SIGNED(ctx->r3) < 0XA ? 1 : 0;
    // 0x0044B8B8: beq         $v0, $zero, L_0044B8D0
    if (ctx->r2 == 0) {
        // 0x0044B8BC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0044B8D0;
    }
    // 0x0044B8BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0044B8C0: beq         $v1, $v0, L_0044B8E4
    if (ctx->r3 == ctx->r2) {
        // 0x0044B8C4: nop
    
            goto L_0044B8E4;
    }
    // 0x0044B8C4: nop

    // 0x0044B8C8: j           L_00412908
    // 0x0044B8CC: nop

    entry_00412908(rdram, ctx);
    return;
    // 0x0044B8CC: nop

L_0044B8D0:
    // 0x0044B8D0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x0044B8D4: beq         $v1, $v0, L_0044B8FC
    if (ctx->r3 == ctx->r2) {
        // 0x0044B8D8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_0044B8FC;
    }
    // 0x0044B8D8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0044B8DC: j           L_00412908
    // 0x0044B8E0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    entry_00412908(rdram, ctx);
    return;
    // 0x0044B8E0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0044B8E4:
    // 0x0044B8E4: lbu         $v1, 0x12($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X12);
    // 0x0044B8E8: j           L_00412900
    // 0x0044B8EC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    entry_00412900(rdram, ctx);
    return;
    // 0x0044B8EC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_0044B8F0:
    // 0x0044B8F0: lbu         $v1, 0x12($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X12);
    // 0x0044B8F4: j           L_00412900
    // 0x0044B8F8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    entry_00412900(rdram, ctx);
    return;
    // 0x0044B8F8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_0044B8FC:
    // 0x0044B8FC: lbu         $v1, 0x12($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X12);
    // 0x0044B900: beql        $v1, $v0, L_0044B908
    if (ctx->r3 == ctx->r2) {
        // 0x0044B904: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_0044B908;
    }
    goto skip_3;
    // 0x0044B904: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_3:
L_0044B908:
    // 0x0044B908: beq         $a0, $zero, L_0044B928
    if (ctx->r4 == 0) {
        // 0x0044B90C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0044B928;
    }
    // 0x0044B90C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0044B910: jal         0x00412314
    // 0x0044B914: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00412314(rdram, ctx);
        goto after_2;
    // 0x0044B914: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0044B918: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0044B91C: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x0044B920: j           L_00412930
    // 0x0044B924: sw          $zero, 0x58($v0)
    MEM_W(0X58, ctx->r2) = 0;
    entry_00412930(rdram, ctx);
    return;
    // 0x0044B924: sw          $zero, 0x58($v0)
    MEM_W(0X58, ctx->r2) = 0;
L_0044B928:
    // 0x0044B928: jal         0x0026E210
    // 0x0044B92C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0026E210(rdram, ctx);
        goto after_3;
    // 0x0044B92C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x0044B930: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0044B934: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0044B938: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044B93C: lwc1        $f0, 0xAD4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XAD4);
    // 0x0044B940: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0044B944: swc1        $f0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f0.u32l;
    // 0x0044B948: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x0044B94C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0044B950: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x0044B954: andi        $v0, $v0, 0xEF
    ctx->r2 = ctx->r2 & 0XEF;
    // 0x0044B958: jal         0x00224A68
    // 0x0044B95C: sb          $v0, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r2;
    func_00224A68(rdram, ctx);
        goto after_4;
    // 0x0044B95C: sb          $v0, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r2;
    after_4:
    // 0x0044B960: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_0044B964:
    // 0x0044B964: slt         $v0, $s2, $s3
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x0044B968: bne         $v0, $zero, L_0044B834
    if (ctx->r2 != 0) {
        // 0x0044B96C: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_0044B834;
    }
    // 0x0044B96C: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
L_0044B970:
    // 0x0044B970: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x0044B974: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0044B978: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0044B97C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0044B980: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0044B984: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0044B988: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0044B98C: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x0044B990: jr          $ra
    // 0x0044B994: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0044B994: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00246BC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00246BC0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00246BC4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00246BC8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00246BCC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00246BD0: lwc1        $f4, 0xB90($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XB90);
    // 0x00246BD4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00246BD8: lwc1        $f0, 0x69A0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X69A0);
    // 0x00246BDC: lw          $s1, 0x518($a1)
    ctx->r17 = MEM_W(ctx->r5, 0X518);
    // 0x00246BE0: mul.s       $f4, $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
        turok2_patch_disable_lookspring(rdram, ctx);

    // 0x00246BE4: lbu         $v0, 0x2A($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2A);
    // 0x00246BE8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00246BEC: lwc1        $f1, 0x69A4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X69A4);
    // 0x00246BF0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00246BF4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00246BF8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00246BFC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00246C00: lwc1        $f3, 0x69A8($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X69A8);
    // 0x00246C04: sub.s       $f4, $f3, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f3.fl - ctx->f4.fl;
    // 0x00246C08: sub.s       $f5, $f0, $f3
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f5.fl = ctx->f0.fl - ctx->f3.fl;
    // 0x00246C0C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00246C10: lwc1        $f0, 0x69AC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X69AC);
    // 0x00246C14: mul.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x00246C18: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00246C1C: lwc1        $f2, 0x69B0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X69B0);
    // 0x00246C20: mul.s       $f2, $f5, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f5.fl, ctx->f2.fl);
    // 0x00246C24: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00246C28: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x00246C2C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00246C30: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00246C34: add.s       $f5, $f2, $f3
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f5.fl = ctx->f2.fl + ctx->f3.fl;
    // 0x00246C38: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    // 0x00246C3C: lb          $v1, 0x2B($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X2B);
    // 0x00246C40: mul.s       $f5, $f5, $f1
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f5.fl = MUL_S(ctx->f5.fl, ctx->f1.fl);
    // 0x00246C44: lb          $v1, 0x2B($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X2B);
    // 0x00246C48: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x00246C4C: beq         $v0, $zero, L_00246C70
    if (ctx->r2 == 0) {
        // 0x00246C50: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_00246C70;
    }
    // 0x00246C50: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00246C54: bltz        $v1, L_00246C70
    if (SIGNED(ctx->r3) < 0) {
        // 0x00246C58: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00246C70;
    }
    // 0x00246C58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00246C5C: lbu         $v1, 0x2C($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X2C);
    // 0x00246C60: bne         $v1, $v0, L_00246C70
    if (ctx->r3 != ctx->r2) {
        // 0x00246C64: nop
    
            goto L_00246C70;
    }
    // 0x00246C64: nop

    // 0x00246C68: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x00246C6C: addiu       $a2, $a2, -0x2590
    ctx->r6 = ADD32(ctx->r6, -0X2590);
L_00246C70:
    // 0x00246C70: beq         $a2, $zero, L_00246D40
    if (ctx->r6 == 0) {
        // 0x00246C74: nop
    
            goto L_00246D40;
    }
    // 0x00246C74: nop

    // 0x00246C78: sw          $zero, 0x24($s0)
    MEM_W(0X24, ctx->r16) = 0;
    // 0x00246C7C: sw          $zero, 0x28($s0)
    MEM_W(0X28, ctx->r16) = 0;
    // 0x00246C80: sw          $zero, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = 0;
    // 0x00246C84: sw          $zero, 0x30($s0)
    MEM_W(0X30, ctx->r16) = 0;
    // 0x00246C88: sw          $zero, 0x34($s0)
    MEM_W(0X34, ctx->r16) = 0;
    // 0x00246C8C: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x00246C90: beq         $v0, $zero, L_00246D68
    if (ctx->r2 == 0) {
        // 0x00246C94: nop
    
            goto L_00246D68;
    }
    // 0x00246C94: nop

L_00246C98:
    // 0x00246C98: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x00246C9C: lw          $v0, 0xB0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XB0);
    // 0x00246CA0: lw          $a0, 0x4($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X4);
    // 0x00246CA4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00246CA8: beq         $v0, $zero, L_00246CBC
    if (ctx->r2 == 0) {
        // 0x00246CAC: nop
    
            goto L_00246CBC;
    }
    // 0x00246CAC: nop

    // 0x00246CB0: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x00246CB4: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x00246CB8: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
L_00246CBC:
    // 0x00246CBC: lw          $v0, 0xB4($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XB4);
    // 0x00246CC0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00246CC4: beq         $v0, $zero, L_00246CD8
    if (ctx->r2 == 0) {
        // 0x00246CC8: nop
    
            goto L_00246CD8;
    }
    // 0x00246CC8: nop

    // 0x00246CCC: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    // 0x00246CD0: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x00246CD4: sw          $v0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r2;
L_00246CD8:
    // 0x00246CD8: lw          $v0, 0xB8($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XB8);
    // 0x00246CDC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00246CE0: beq         $v0, $zero, L_00246CF4
    if (ctx->r2 == 0) {
        // 0x00246CE4: nop
    
            goto L_00246CF4;
    }
    // 0x00246CE4: nop

    // 0x00246CE8: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    // 0x00246CEC: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x00246CF0: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
L_00246CF4:
    // 0x00246CF4: lw          $v0, 0xBC($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XBC);
    // 0x00246CF8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00246CFC: beq         $v0, $zero, L_00246D10
    if (ctx->r2 == 0) {
        // 0x00246D00: nop
    
            goto L_00246D10;
    }
    // 0x00246D00: nop

    // 0x00246D04: lw          $v0, 0x30($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X30);
    // 0x00246D08: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x00246D0C: sw          $v0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r2;
L_00246D10:
    // 0x00246D10: lw          $v0, 0xC0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XC0);
    // 0x00246D14: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00246D18: beq         $v0, $zero, L_00246D2C
    if (ctx->r2 == 0) {
        // 0x00246D1C: addiu       $a2, $a2, 0x8
        ctx->r6 = ADD32(ctx->r6, 0X8);
            goto L_00246D2C;
    }
    // 0x00246D1C: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x00246D20: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x00246D24: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x00246D28: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
L_00246D2C:
    // 0x00246D2C: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x00246D30: beq         $v0, $zero, L_00246D68
    if (ctx->r2 == 0) {
        // 0x00246D34: nop
    
            goto L_00246D68;
    }
    // 0x00246D34: nop

    // 0x00246D38: j           L_00246C98
    // 0x00246D3C: nop

        goto L_00246C98;
    // 0x00246D3C: nop

L_00246D40:
    // 0x00246D40: lw          $v0, 0xB0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XB0);
    // 0x00246D44: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x00246D48: lw          $v0, 0xB4($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XB4);
    // 0x00246D4C: sw          $v0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r2;
    // 0x00246D50: lw          $v0, 0xB8($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XB8);
    // 0x00246D54: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x00246D58: lw          $v0, 0xBC($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XBC);
    // 0x00246D5C: sw          $v0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r2;
    // 0x00246D60: lw          $v0, 0xC0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XC0);
    // 0x00246D64: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
L_00246D68:
    // 0x00246D68: lb          $v1, 0x2B($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X2B);
    // 0x00246D6C: beq         $v1, $zero, L_00246D84
    if (ctx->r3 == 0) {
        // 0x00246D70: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00246D84;
    }
    // 0x00246D70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00246D74: beq         $v1, $v0, L_00246F08
    if (ctx->r3 == ctx->r2) {
        // 0x00246D78: nop
    
            goto L_00246F08;
    }
    // 0x00246D78: nop

    // 0x00246D7C: j           L_00247060
    // 0x00246D80: nop

        goto L_00247060;
    // 0x00246D80: nop

L_00246D84:
    // 0x00246D84: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x00246D88: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x00246D8C: beq         $v0, $zero, L_00246DA4
    if (ctx->r2 == 0) {
        // 0x00246D90: andi        $v0, $v1, 0x2
        ctx->r2 = ctx->r3 & 0X2;
            goto L_00246DA4;
    }
    // 0x00246D90: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x00246D94: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00246D98: lwc1        $f0, 0x69B4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X69B4);
    // 0x00246D9C: j           L_00246DB8
    // 0x00246DA0: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
        goto L_00246DB8;
    // 0x00246DA0: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
L_00246DA4:
    // 0x00246DA4: beql        $v0, $zero, L_00246DB8
    if (ctx->r2 == 0) {
        // 0x00246DA8: sw          $zero, 0x8($s0)
        MEM_W(0X8, ctx->r16) = 0;
            goto L_00246DB8;
    }
    goto skip_0;
    // 0x00246DA8: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    skip_0:
    // 0x00246DAC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00246DB0: lwc1        $f0, 0x69B8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X69B8);
    // 0x00246DB4: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
L_00246DB8:
    // 0x00246DB8: lb          $v0, 0xC6($a3)
    ctx->r2 = MEM_B(ctx->r7, 0XC6);
    // 0x00246DBC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00246DC0: lwc1        $f1, 0x69BC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X69BC);
    // 0x00246DC4: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00246DC8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00246DCC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00246DD0: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x00246DD4: andi        $v0, $v1, 0x8
    ctx->r2 = ctx->r3 & 0X8;
    // 0x00246DD8: beq         $v0, $zero, L_00246DF0
    if (ctx->r2 == 0) {
        // 0x00246DDC: swc1        $f0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
            goto L_00246DF0;
    }
    // 0x00246DDC: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    // 0x00246DE0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00246DE4: lwc1        $f0, 0x69C0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X69C0);
    // 0x00246DE8: j           L_00246E08
    // 0x00246DEC: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
        goto L_00246E08;
    // 0x00246DEC: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
L_00246DF0:
    // 0x00246DF0: andi        $v0, $v1, 0x4
    ctx->r2 = ctx->r3 & 0X4;
    // 0x00246DF4: beql        $v0, $zero, L_00246E08
    if (ctx->r2 == 0) {
        // 0x00246DF8: sw          $zero, 0xC($s0)
        MEM_W(0XC, ctx->r16) = 0;
            goto L_00246E08;
    }
    goto skip_1;
    // 0x00246DF8: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    skip_1:
    // 0x00246DFC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00246E00: lwc1        $f0, 0x69C4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X69C4);
    // 0x00246E04: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
L_00246E08:
    // 0x00246E08: lbu         $v0, 0x2D($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2D);
    // 0x00246E0C: beq         $v0, $zero, L_00246E34
    if (ctx->r2 == 0) {
        // 0x00246E10: nop
    
            goto L_00246E34;
    }
    // 0x00246E10: nop

    // 0x00246E14: lb          $v0, 0xC7($a3)
    ctx->r2 = MEM_B(ctx->r7, 0XC7);
    // 0x00246E18: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00246E1C: lwc1        $f1, 0x69C8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X69C8);
    // 0x00246E20: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00246E24: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00246E28: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00246E2C: j           L_00247060
    // 0x00246E30: swc1        $f0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f0.u32l;
        goto L_00247060;
    // 0x00246E30: swc1        $f0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f0.u32l;
L_00246E34:
    // 0x00246E34: lw          $v0, 0x1284($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1284);
    // 0x00246E38: bne         $v0, $zero, L_00247060
    if (ctx->r2 != 0) {
        // 0x00246E3C: nop
    
            goto L_00247060;
    }
    // 0x00246E3C: nop

    // 0x00246E40: lb          $v0, 0xC7($a3)
    ctx->r2 = MEM_B(ctx->r7, 0XC7);
    // 0x00246E44: beq         $v0, $zero, L_00246E74
    if (ctx->r2 == 0) {
        // 0x00246E48: nop
    
            goto L_00246E74;
    }
    // 0x00246E48: nop

    // 0x00246E4C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00246E50: lwc1        $f0, 0x69CC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X69CC);
    // 0x00246E54: mul.s       $f0, $f5, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f5.fl, ctx->f0.fl);
    // 0x00246E58: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00246E5C: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00246E60: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00246E64: lwc1        $f1, 0x4($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X4);
    // 0x00246E68: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00246E6C: j           L_00246ECC
    // 0x00246E70: swc1        $f1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
        goto L_00246ECC;
    // 0x00246E70: swc1        $f1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
L_00246E74:
    // 0x00246E74: lwc1        $f14, 0xC($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0XC);
    // 0x00246E78: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00246E7C: c.eq.s      $f14, $f1
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f14.fl == ctx->f1.fl;
    // 0x00246E80: nop

    // 0x00246E84: bc1t        L_00246ECC
    if (c1cs) {
        // 0x00246E88: nop
    
            goto L_00246ECC;
    }
    // 0x00246E88: nop

    // 0x00246E8C: lw          $v0, 0xB8C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XB8C);
    // 0x00246E90: bne         $v0, $zero, L_00246ECC
    if (ctx->r2 != 0) {
        // 0x00246E94: nop
    
            goto L_00246ECC;
    }
    // 0x00246E94: nop

    // 0x00246E98: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00246E9C: lwc1        $f0, 0x69D0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X69D0);
    // 0x00246EA0: mul.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x00246EA4: nop

    // 0x00246EA8: mul.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x00246EAC: c.lt.s      $f14, $f1
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f14.fl < ctx->f1.fl;
    // 0x00246EB0: nop

    // 0x00246EB4: bc1tl       L_00246EBC
    if (c1cs) {
        // 0x00246EB8: neg.s       $f14, $f14
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
            goto L_00246EBC;
    }
    goto skip_2;
    // 0x00246EB8: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    skip_2:
L_00246EBC:
    // 0x00246EBC: lwc1        $f12, 0x4($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X4);
    // 0x00246EC0: jal         0x0021170C
    // 0x00246EC4: nop

    func_0021170C(rdram, ctx);
        goto after_0;
    // 0x00246EC4: nop

    after_0:
    // 0x00246EC8: swc1        $f0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f0.u32l;
L_00246ECC:
    // 0x00246ECC: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x00246ED0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00246ED4: lwc1        $f1, 0x69D4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X69D4);
    // 0x00246ED8: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00246EDC: nop

    // 0x00246EE0: bc1tl       L_00247060
    if (c1cs) {
        // 0x00246EE4: swc1        $f1, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
            goto L_00247060;
    }
    goto skip_3;
    // 0x00246EE4: swc1        $f1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    skip_3:
    // 0x00246EE8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00246EEC: lwc1        $f1, 0x69D8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X69D8);
    // 0x00246EF0: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00246EF4: nop

    // 0x00246EF8: bc1f        L_00247060
    if (!c1cs) {
        // 0x00246EFC: nop
    
            goto L_00247060;
    }
    // 0x00246EFC: nop

    // 0x00246F00: j           L_00247060
    // 0x00246F04: swc1        $f1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
        goto L_00247060;
    // 0x00246F04: swc1        $f1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
L_00246F08:
    // 0x00246F08: lb          $v0, 0xC6($a3)
    ctx->r2 = MEM_B(ctx->r7, 0XC6);
    // 0x00246F0C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00246F10: lwc1        $f1, 0x69DC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X69DC);
    // 0x00246F14: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00246F18: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00246F1C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00246F20: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x00246F24: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x00246F28: beq         $v0, $zero, L_00246F40
    if (ctx->r2 == 0) {
        // 0x00246F2C: swc1        $f0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
            goto L_00246F40;
    }
    // 0x00246F2C: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    // 0x00246F30: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00246F34: lwc1        $f0, 0x69E0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X69E0);
    // 0x00246F38: j           L_00246F58
    // 0x00246F3C: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
        goto L_00246F58;
    // 0x00246F3C: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
L_00246F40:
    // 0x00246F40: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x00246F44: beql        $v0, $zero, L_00246F58
    if (ctx->r2 == 0) {
        // 0x00246F48: sw          $zero, 0x8($s0)
        MEM_W(0X8, ctx->r16) = 0;
            goto L_00246F58;
    }
    goto skip_4;
    // 0x00246F48: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    skip_4:
    // 0x00246F4C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00246F50: lwc1        $f0, 0x69E4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X69E4);
    // 0x00246F54: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
L_00246F58:
    // 0x00246F58: lw          $v0, 0x1284($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1284);
    // 0x00246F5C: bnel        $v0, $zero, L_00246F80
    if (ctx->r2 != 0) {
        // 0x00246F60: sw          $zero, 0xC($s0)
        MEM_W(0XC, ctx->r16) = 0;
            goto L_00246F80;
    }
    goto skip_5;
    // 0x00246F60: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    skip_5:
    // 0x00246F64: lb          $v0, 0xC7($a3)
    ctx->r2 = MEM_B(ctx->r7, 0XC7);
    // 0x00246F68: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00246F6C: lwc1        $f1, 0x69E8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X69E8);
    // 0x00246F70: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00246F74: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00246F78: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00246F7C: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
L_00246F80:
    // 0x00246F80: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x00246F84: andi        $v0, $v1, 0x10
    ctx->r2 = ctx->r3 & 0X10;
    // 0x00246F88: bne         $v0, $zero, L_00247060
    if (ctx->r2 != 0) {
        // 0x00246F8C: andi        $v0, $v1, 0x8
        ctx->r2 = ctx->r3 & 0X8;
            goto L_00247060;
    }
    // 0x00246F8C: andi        $v0, $v1, 0x8
    ctx->r2 = ctx->r3 & 0X8;
    // 0x00246F90: beq         $v0, $zero, L_00246FC0
    if (ctx->r2 == 0) {
        // 0x00246F94: andi        $v0, $v1, 0x4
        ctx->r2 = ctx->r3 & 0X4;
            goto L_00246FC0;
    }
    // 0x00246F94: andi        $v0, $v1, 0x4
    ctx->r2 = ctx->r3 & 0X4;
    // 0x00246F98: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00246F9C: lwc1        $f0, 0x69EC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X69EC);
    // 0x00246FA0: mul.s       $f0, $f5, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f5.fl, ctx->f0.fl);
    // 0x00246FA4: lwc1        $f1, 0x4($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X4);
    // 0x00246FA8: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00246FAC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00246FB0: lwc1        $f0, 0x69F0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X69F0);
    // 0x00246FB4: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00246FB8: j           L_00246FE8
    // 0x00246FBC: nop

        goto L_00246FE8;
    // 0x00246FBC: nop

L_00246FC0:
    // 0x00246FC0: beq         $v0, $zero, L_00246FFC
    if (ctx->r2 == 0) {
        // 0x00246FC4: nop
    
            goto L_00246FFC;
    }
    // 0x00246FC4: nop

    // 0x00246FC8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00246FCC: lwc1        $f0, 0x69F4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X69F4);
    // 0x00246FD0: mul.s       $f0, $f5, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f5.fl, ctx->f0.fl);
    // 0x00246FD4: lwc1        $f1, 0x4($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X4);
    // 0x00246FD8: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00246FDC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00246FE0: lwc1        $f0, 0x69F8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X69F8);
    // 0x00246FE4: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
L_00246FE8:
    // 0x00246FE8: nop

    // 0x00246FEC: bc1tl       L_00246FF4
    if (c1cs) {
        // 0x00246FF0: mov.s       $f1, $f0
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
            goto L_00246FF4;
    }
    goto skip_6;
    // 0x00246FF0: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    skip_6:
L_00246FF4:
    // 0x00246FF4: j           L_00247060
    // 0x00246FF8: swc1        $f1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
        goto L_00247060;
    // 0x00246FF8: swc1        $f1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
L_00246FFC:
    // 0x00246FFC: lbu         $v0, 0x2D($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2D);
    // 0x00247000: beq         $v0, $zero, L_00247060
    if (ctx->r2 == 0) {
        // 0x00247004: nop
    
            goto L_00247060;
    }
    // 0x00247004: nop

    // 0x00247008: lwc1        $f14, 0xC($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0XC);
    // 0x0024700C: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00247010: c.eq.s      $f14, $f1
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f14.fl == ctx->f1.fl;
    // 0x00247014: nop

    // 0x00247018: bc1t        L_00247060
    if (c1cs) {
        // 0x0024701C: nop
    
            goto L_00247060;
    }
    // 0x0024701C: nop

    // 0x00247020: lw          $v0, 0xB8C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XB8C);
    // 0x00247024: bne         $v0, $zero, L_00247060
    if (ctx->r2 != 0) {
        // 0x00247028: nop
    
            goto L_00247060;
    }
    // 0x00247028: nop

    // 0x0024702C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00247030: lwc1        $f0, 0x69FC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X69FC);
    // 0x00247034: mul.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x00247038: nop

    // 0x0024703C: mul.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x00247040: c.lt.s      $f14, $f1
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f14.fl < ctx->f1.fl;
    // 0x00247044: nop

    // 0x00247048: bc1tl       L_00247050
    if (c1cs) {
        // 0x0024704C: neg.s       $f14, $f14
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
            goto L_00247050;
    }
    goto skip_7;
    // 0x0024704C: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    skip_7:
L_00247050:
    // 0x00247050: lwc1        $f12, 0x4($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X4);
    // 0x00247054: jal         0x0021170C
    // 0x00247058: nop

    func_0021170C(rdram, ctx);
        goto after_1;
    // 0x00247058: nop

    after_1:
    // 0x0024705C: swc1        $f0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f0.u32l;
L_00247060:
    // 0x00247060: lwc1        $f2, 0x8($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X8);
    // 0x00247064: mul.s       $f1, $f2, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x00247068: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0024706C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00247070: nop

    // 0x00247074: bc1f        L_0024708C
    if (!c1cs) {
        // 0x00247078: nop
    
            goto L_0024708C;
    }
    // 0x00247078: nop

    // 0x0024707C: neg.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = -ctx->f1.fl;
    // 0x00247080: mul.s       $f3, $f2, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00247084: j           L_00247090
    // 0x00247088: nop

        goto L_00247090;
    // 0x00247088: nop

L_0024708C:
    // 0x0024708C: mul.s       $f3, $f2, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
L_00247090:
    // 0x00247090: lwc1        $f2, 0x0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X0);
    // 0x00247094: mul.s       $f1, $f2, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x00247098: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0024709C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x002470A0: nop

    // 0x002470A4: bc1f        L_002470BC
    if (!c1cs) {
        // 0x002470A8: swc1        $f3, 0x1C($s0)
        MEM_W(0X1C, ctx->r16) = ctx->f_odd[(3 - 1) * 2];
            goto L_002470BC;
    }
    // 0x002470A8: swc1        $f3, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f_odd[(3 - 1) * 2];
    // 0x002470AC: neg.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = -ctx->f1.fl;
    // 0x002470B0: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x002470B4: j           L_002470C4
    // 0x002470B8: swc1        $f0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f0.u32l;
        goto L_002470C4;
    // 0x002470B8: swc1        $f0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f0.u32l;
L_002470BC:
    // 0x002470BC: mul.s       $f0, $f2, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x002470C0: swc1        $f0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f0.u32l;
L_002470C4:
    // 0x002470C4: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x002470C8: lwc1        $f1, 0x4($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X4);
    // 0x002470CC: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x002470D0: swc1        $f1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
        turok2_patch_player_controls(rdram, ctx);

    // 0x002470D4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x002470D8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002470DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002470E0: jr          $ra
    // 0x002470E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002470E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00425760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00425760: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00425764: lw          $v0, 0x2224($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2224);
    // 0x00425768: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x0042576C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x00425770: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x00425774: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x00425778: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x0042577C: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x00425780: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x00425784: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x00425788: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x0042578C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x00425790: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00425794: beq         $v0, $zero, L_00425890
    if (ctx->r2 == 0) {
        // 0x00425798: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_00425890;
    }
    // 0x00425798: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0042579C: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x004257A0: sll         $v0, $s4, 1
    ctx->r2 = S32(ctx->r20 << 1);
    // 0x004257A4: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x004257A8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x004257AC: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x004257B0: sll         $s6, $v0, 3
    ctx->r22 = S32(ctx->r2 << 3);
    // 0x004257B4: lui         $fp, 0x8013
    ctx->r30 = S32(0X8013 << 16);
    // 0x004257B8: addiu       $fp, $fp, 0xC80
    ctx->r30 = ADD32(ctx->r30, 0XC80);
    // 0x004257BC: addu        $s5, $s6, $fp
    ctx->r21 = ADD32(ctx->r22, ctx->r30);
    // 0x004257C0: sll         $v0, $s4, 7
    ctx->r2 = S32(ctx->r20 << 7);
    // 0x004257C4: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x004257C8: sll         $s0, $v0, 2
    ctx->r16 = S32(ctx->r2 << 2);
    // 0x004257CC: addiu       $s7, $zero, 0x5
    ctx->r23 = ADD32(0, 0X5);
    // 0x004257D0: addu        $s2, $s3, $zero
    ctx->r18 = ADD32(ctx->r19, 0);
    // 0x004257D4: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
L_004257D8:
    // 0x004257D8: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x004257DC: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x004257E0: lw          $a2, 0x2224($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X2224);
    // 0x004257E4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x004257E8: addu        $a2, $a2, $s0
    ctx->r6 = ADD32(ctx->r6, ctx->r16);
    // 0x004257EC: jal         0x00427C20
    // 0x004257F0: addu        $a2, $a2, $s1
    ctx->r6 = ADD32(ctx->r6, ctx->r17);
    func_00427C20(rdram, ctx);
        goto after_0;
    // 0x004257F0: addu        $a2, $a2, $s1
    ctx->r6 = ADD32(ctx->r6, ctx->r17);
    after_0:
    // 0x004257F4: beq         $v0, $zero, L_0042581C
    if (ctx->r2 == 0) {
        // 0x004257F8: nop
    
            goto L_0042581C;
    }
    // 0x004257F8: nop

    // 0x004257FC: beq         $v0, $s7, L_00425824
    if (ctx->r2 == ctx->r23) {
        // 0x00425800: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_00425824;
    }
    // 0x00425800: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x00425804: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x00425808: lw          $a2, 0x2224($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X2224);
    // 0x0042580C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00425810: addu        $a2, $a2, $s0
    ctx->r6 = ADD32(ctx->r6, ctx->r16);
    // 0x00425814: jal         0x00427C20
    // 0x00425818: addu        $a2, $a2, $s1
    ctx->r6 = ADD32(ctx->r6, ctx->r17);
    func_00427C20(rdram, ctx);
        goto after_1;
    // 0x00425818: addu        $a2, $a2, $s1
    ctx->r6 = ADD32(ctx->r6, ctx->r17);
    after_1:
L_0042581C:
    // 0x0042581C: bne         $v0, $s7, L_0042585C
    if (ctx->r2 != ctx->r23) {
        // 0x00425820: addu        $a0, $s6, $fp
        ctx->r4 = ADD32(ctx->r22, ctx->r30);
            goto L_0042585C;
    }
    // 0x00425820: addu        $a0, $s6, $fp
    ctx->r4 = ADD32(ctx->r22, ctx->r30);
L_00425824:
    // 0x00425824: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00425828: lw          $v0, 0x2224($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2224);
    // 0x0042582C: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x00425830: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x00425834: sb          $zero, 0xE($v0)
    MEM_B(0XE, ctx->r2) = 0;
    // 0x00425838: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0042583C: lw          $v1, 0x2224($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2224);
    // 0x00425840: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x00425844: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x00425848: sh          $zero, 0xC($v0)
    MEM_H(0XC, ctx->r2) = 0;
    // 0x0042584C: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x00425850: addu        $v1, $v1, $s2
    ctx->r3 = ADD32(ctx->r3, ctx->r18);
    // 0x00425854: sb          $zero, 0x12($v1)
    MEM_B(0X12, ctx->r3) = 0;
    // 0x00425858: addu        $a0, $s6, $fp
    ctx->r4 = ADD32(ctx->r22, ctx->r30);
L_0042585C:
    // 0x0042585C: jal         0x00427E60
    // 0x00425860: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_00427E60(rdram, ctx);
        goto after_2;
    // 0x00425860: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_2:
    // 0x00425864: bne         $v0, $zero, L_00425880
    if (ctx->r2 != 0) {
        // 0x00425868: addiu       $s2, $s2, 0x20
        ctx->r18 = ADD32(ctx->r18, 0X20);
            goto L_00425880;
    }
    // 0x00425868: addiu       $s2, $s2, 0x20
    ctx->r18 = ADD32(ctx->r18, 0X20);
    // 0x0042586C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00425870: lw          $v0, 0x2224($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2224);
    // 0x00425874: lw          $v1, 0x10($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X10);
    // 0x00425878: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x0042587C: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
L_00425880:
    // 0x00425880: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x00425884: slti        $v0, $s3, 0x10
    ctx->r2 = SIGNED(ctx->r19) < 0X10 ? 1 : 0;
    // 0x00425888: bne         $v0, $zero, L_004257D8
    if (ctx->r2 != 0) {
        // 0x0042588C: addiu       $s1, $s1, 0x20
        ctx->r17 = ADD32(ctx->r17, 0X20);
            goto L_004257D8;
    }
    // 0x0042588C: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
L_00425890:
    // 0x00425890: sll         $a0, $s4, 1
    ctx->r4 = S32(ctx->r20 << 1);
    // 0x00425894: addu        $a0, $a0, $s4
    ctx->r4 = ADD32(ctx->r4, ctx->r20);
    // 0x00425898: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x0042589C: addu        $a0, $a0, $s4
    ctx->r4 = ADD32(ctx->r4, ctx->r20);
    // 0x004258A0: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x004258A4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004258A8: addiu       $v0, $v0, 0xC80
    ctx->r2 = ADD32(ctx->r2, 0XC80);
    // 0x004258AC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x004258B0: jal         0x00427E60
    // 0x004258B4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_00427E60(rdram, ctx);
        goto after_3;
    // 0x004258B4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_3:
    // 0x004258B8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x004258BC: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x004258C0: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x004258C4: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x004258C8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x004258CC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x004258D0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x004258D4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x004258D8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x004258DC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x004258E0: jr          $ra
    // 0x004258E4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x004258E4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00410BB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00410BB4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00410BB8: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00410BBC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00410BC0: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x00410BC4: mov.s       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
    // 0x00410BC8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00410BCC: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x00410BD0: jal         0x002017D4
    // 0x00410BD4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00410BD4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x00410BD8: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    // 0x00410BDC: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x00410BE0: blez        $a0, L_00410BF8
    if (SIGNED(ctx->r4) <= 0) {
        // 0x00410BE4: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00410BF8;
    }
    // 0x00410BE4: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00410BE8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_00410BEC:
    // 0x00410BEC: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x00410BF0: bnel        $v0, $zero, L_00410BEC
    if (ctx->r2 != 0) {
        // 0x00410BF4: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_00410BEC;
    }
    goto skip_0;
    // 0x00410BF4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_0:
L_00410BF8:
    // 0x00410BF8: bne         $a0, $zero, L_00410C10
    if (ctx->r4 != 0) {
        // 0x00410BFC: nop
    
            goto L_00410C10;
    }
    // 0x00410BFC: nop

    // 0x00410C00: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00410C04: lwc1        $f0, 0x994($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X994);
    // 0x00410C08: j           L_00410CD8
    // 0x00410C0C: nop

        goto L_00410CD8;
    // 0x00410C0C: nop

L_00410C10:
    // 0x00410C10: lwc1        $f1, 0x4($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X4);
    // 0x00410C14: c.le.s      $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f20.fl <= ctx->f1.fl;
    // 0x00410C18: nop

    // 0x00410C1C: bc1f        L_00410C30
    if (!c1cs) {
        // 0x00410C20: sll         $v0, $a0, 3
        ctx->r2 = S32(ctx->r4 << 3);
            goto L_00410C30;
    }
    // 0x00410C20: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x00410C24: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x00410C28: j           L_00410CD8
    // 0x00410C2C: nop

        goto L_00410CD8;
    // 0x00410C2C: nop

L_00410C30:
    // 0x00410C30: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x00410C34: lwc1        $f0, -0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, -0X4);
    // 0x00410C38: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x00410C3C: nop

    // 0x00410C40: bc1f        L_00410C54
    if (!c1cs) {
        // 0x00410C44: nop
    
            goto L_00410C54;
    }
    // 0x00410C44: nop

    // 0x00410C48: lwc1        $f0, -0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, -0X8);
    // 0x00410C4C: j           L_00410CD8
    // 0x00410C50: nop

        goto L_00410CD8;
    // 0x00410C50: nop

L_00410C54:
    // 0x00410C54: c.lt.s      $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f1.fl < ctx->f20.fl;
    // 0x00410C58: nop

    // 0x00410C5C: bc1f        L_00410C7C
    if (!c1cs) {
        // 0x00410C60: nop
    
            goto L_00410C7C;
    }
    // 0x00410C60: nop

    // 0x00410C64: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
L_00410C68:
    // 0x00410C68: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    // 0x00410C6C: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x00410C70: nop

    // 0x00410C74: bc1tl       L_00410C68
    if (c1cs) {
        // 0x00410C78: addiu       $a1, $a1, 0x8
        ctx->r5 = ADD32(ctx->r5, 0X8);
            goto L_00410C68;
    }
    goto skip_1;
    // 0x00410C78: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    skip_1:
L_00410C7C:
    // 0x00410C7C: lwc1        $f1, -0x4($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, -0X4);
    // 0x00410C80: sub.s       $f2, $f20, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f20.fl - ctx->f1.fl;
    // 0x00410C84: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    // 0x00410C88: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00410C8C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00410C90: lwc1        $f1, 0x998($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X998);
    // 0x00410C94: div.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00410C98: mul.s       $f1, $f2, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x00410C9C: add.s       $f0, $f2, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f2.fl;
    // 0x00410CA0: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00410CA4: nop

    // 0x00410CA8: mul.s       $f1, $f2, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x00410CAC: nop

    // 0x00410CB0: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00410CB4: sub.s       $f2, $f1, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00410CB8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00410CBC: lwc1        $f0, 0x99C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X99C);
    // 0x00410CC0: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x00410CC4: lwc1        $f1, -0x8($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, -0X8);
    // 0x00410CC8: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00410CCC: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x00410CD0: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00410CD4: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
L_00410CD8:
    // 0x00410CD8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00410CDC: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x00410CE0: jr          $ra
    // 0x00410CE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00410CE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00445518(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00445518: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x0044551C: addiu       $v0, $zero, 0xA00
    ctx->r2 = ADD32(0, 0XA00);
    // 0x00445520: sll         $a2, $a2, 8
    ctx->r6 = S32(ctx->r6 << 8);
    // 0x00445524: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x00445528: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x0044552C: sh          $a2, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r6;
    // 0x00445530: sb          $zero, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = 0;
    // 0x00445534: sb          $zero, 0x2E($sp)
    MEM_B(0X2E, ctx->r29) = 0;
    // 0x00445538: sb          $zero, 0x2D($sp)
    MEM_B(0X2D, ctx->r29) = 0;
    // 0x0044553C: sb          $zero, 0x2C($sp)
    MEM_B(0X2C, ctx->r29) = 0;
    // 0x00445540: lw          $v1, 0x4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X4);
    // 0x00445544: lw          $t0, 0x8($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X8);
    // 0x00445548: lw          $t1, 0xC($a1)
    ctx->r9 = MEM_W(ctx->r5, 0XC);
    // 0x0044554C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x00445550: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x00445554: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x00445558: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0044555C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x00445560: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x00445564: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x00445568: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x0044556C: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x00445570: jal         0x00236EA0
    // 0x00445574: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_00236EA0(rdram, ctx);
        goto after_0;
    // 0x00445574: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_0:
    // 0x00445578: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x0044557C: jr          $ra
    // 0x00445580: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00445580: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0044ECE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00415EE8:
    // 0x0044ECE8: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
L_00415F7C:
    // 0x0044ECEC: sw          $s2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r18;
    // 0x0044ECF0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0044ECF4: sw          $s4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r20;
    // 0x0044ECF8: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x0044ECFC: sw          $ra, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r31;
    // 0x0044ED00: sw          $s3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r19;
    // 0x0044ED04: sw          $s1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r17;
    // 0x0044ED08: sw          $s0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r16;
    // 0x0044ED0C: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x0044ED10: lw          $s3, 0x40($s2)
    ctx->r19 = MEM_W(ctx->r18, 0X40);
    // 0x0044ED14: andi        $v1, $v0, 0x3FE0
    ctx->r3 = ctx->r2 & 0X3FE0;
    // 0x0044ED18: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x0044ED1C: addiu       $v1, $zero, -0x400
    ctx->r3 = ADD32(0, -0X400);
    // 0x0044ED20: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x0044ED24: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    // 0x0044ED28: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x0044ED2C: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    // 0x0044ED30: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x0044ED34: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x0044ED38: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x0044ED3C: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
    // 0x0044ED40: sw          $zero, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = 0;
    // 0x0044ED44: sw          $zero, 0x70($sp)
    MEM_W(0X70, ctx->r29) = 0;
    // 0x0044ED48: lw          $v0, 0x10($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X10);
    // 0x0044ED4C: blez        $v0, L_0044EDDC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0044ED50: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0044EDDC;
    }
    // 0x0044ED50: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0044ED54: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
L_0044ED58:
    // 0x0044ED58: lw          $a0, 0xC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XC);
    // 0x0044ED5C: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x0044ED60: jal         0x0041363C
    // 0x0044ED64: addu        $a0, $a0, $s1
    ctx->r4 = ADD32(ctx->r4, ctx->r17);
    func_0041363C(rdram, ctx);
        goto after_0;
    // 0x0044ED64: addu        $a0, $a0, $s1
    ctx->r4 = ADD32(ctx->r4, ctx->r17);
    after_0:
    // 0x0044ED68: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x0044ED6C: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x0044ED70: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x0044ED74: bnel        $v0, $zero, L_0044ED7C
    if (ctx->r2 != 0) {
        // 0x0044ED78: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_0044ED7C;
    }
    goto skip_0;
    // 0x0044ED78: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    skip_0:
L_0044ED7C:
    // 0x0044ED7C: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x0044ED80: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x0044ED84: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x0044ED88: beq         $v0, $zero, L_0044ED94
    if (ctx->r2 == 0) {
        // 0x0044ED8C: sw          $v1, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r3;
            goto L_0044ED94;
    }
    // 0x0044ED8C: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x0044ED90: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
L_0044ED94:
    // 0x0044ED94: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x0044ED98: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x0044ED9C: slt         $v0, $v1, $a1
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x0044EDA0: beq         $v0, $zero, L_0044EDAC
    if (ctx->r2 == 0) {
        // 0x0044EDA4: sw          $a0, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->r4;
            goto L_0044EDAC;
    }
    // 0x0044EDA4: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x0044EDA8: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
L_0044EDAC:
    // 0x0044EDAC: lw          $v1, 0x70($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X70);
    // 0x0044EDB0: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x0044EDB4: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x0044EDB8: beq         $v0, $zero, L_0044EDC4
    if (ctx->r2 == 0) {
        // 0x0044EDBC: sw          $a1, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r5;
            goto L_0044EDC4;
    }
    // 0x0044EDBC: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x0044EDC0: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
L_0044EDC4:
    // 0x0044EDC4: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    // 0x0044EDC8: lw          $v0, 0x10($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X10);
    // 0x0044EDCC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0044EDD0: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0044EDD4: bne         $v0, $zero, L_0044ED58
    if (ctx->r2 != 0) {
        // 0x0044EDD8: addiu       $s1, $s1, 0x28
        ctx->r17 = ADD32(ctx->r17, 0X28);
            goto L_0044ED58;
    }
    // 0x0044EDD8: addiu       $s1, $s1, 0x28
    ctx->r17 = ADD32(ctx->r17, 0X28);
L_0044EDDC:
    // 0x0044EDDC: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x0044EDE0: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x0044EDE4: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x0044EDE8: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x0044EDEC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0044EDF0: subu        $a1, $a1, $a0
    ctx->r5 = SUB32(ctx->r5, ctx->r4);
    // 0x0044EDF4: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x0044EDF8: bltz        $v0, L_0044EF98
    if (SIGNED(ctx->r2) < 0) {
        // 0x0044EDFC: sw          $a1, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r5;
            goto L_0044EF98;
    }
    // 0x0044EDFC: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    // 0x0044EE00: bltz        $a1, L_0044EF98
    if (SIGNED(ctx->r5) < 0) {
        // 0x0044EE04: nop
    
            goto L_0044EF98;
    }
    // 0x0044EE04: nop

    // 0x0044EE08: lwc1        $f0, 0x288($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X288);
    // 0x0044EE0C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044EE10: lwc1        $f1, 0xC3C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XC3C);
    // 0x0044EE14: lh          $v0, 0x2($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X2);
    // 0x0044EE18: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0044EE1C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0044EE20: lw          $v1, 0x2030($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2030);
    // 0x0044EE24: mtc1        $v0, $f2
    ctx->f2.u32l = ctx->r2;
    // 0x0044EE28: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x0044EE2C: lwc1        $f1, 0x290($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X290);
    // 0x0044EE30: srl         $v0, $v1, 31
    ctx->r2 = S32(U32(ctx->r3) >> 31);
    // 0x0044EE34: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0044EE38: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x0044EE3C: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x0044EE40: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x0044EE44: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x0044EE48: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0044EE4C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0044EE50: sub.s       $f3, $f1, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0044EE54: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0044EE58: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x0044EE5C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044EE60: lwc1        $f2, 0xC40($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0XC40);
    // 0x0044EE64: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0044EE68: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0044EE6C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0044EE70: slti        $v0, $v0, 0xDF
    ctx->r2 = SIGNED(ctx->r2) < 0XDF ? 1 : 0;
    // 0x0044EE74: mul.s       $f2, $f0, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0044EE78: trunc.w.s   $f4, $f3
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    ctx->f4.u32l = TRUNC_W_S(ctx->f3.fl);
    // 0x0044EE7C: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    // 0x0044EE80: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x0044EE84: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    // 0x0044EE88: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044EE8C: lwc1        $f0, 0xC44($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XC44);
    // 0x0044EE90: bne         $v0, $zero, L_0044EEA0
    if (ctx->r2 != 0) {
        // 0x0044EE94: nop
    
            goto L_0044EEA0;
    }
    // 0x0044EE94: nop

    // 0x0044EE98: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044EE9C: lwc1        $f0, 0xC48($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XC48);
L_0044EEA0:
    // 0x0044EEA0: beq         $s4, $zero, L_0044EED4
    if (ctx->r20 == 0) {
        // 0x0044EEA4: sub.s       $f2, $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
            goto L_0044EED4;
    }
    // 0x0044EEA4: sub.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x0044EEA8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044EEAC: lwc1        $f1, 0x2034($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X2034);
    // 0x0044EEB0: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0044EEB4: lwc1        $f0, 0x294($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X294);
    // 0x0044EEB8: lh          $v0, 0x4($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X4);
    // 0x0044EEBC: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0044EEC0: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0044EEC4: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0044EEC8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0044EECC: j           L_00415EE8
    // 0x0044EED0: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    entry_00415EE8(rdram, ctx);
    return;
    // 0x0044EED0: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
L_0044EED4:
    // 0x0044EED4: lh          $v0, 0x4($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X4);
    // 0x0044EED8: lwc1        $f0, 0x294($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X294);
    // 0x0044EEDC: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0044EEE0: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0044EEE4: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0044EEE8: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0044EEEC: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x0044EEF0: mtc1        $v1, $f0
    ctx->f0.u32l = ctx->r3;
    // 0x0044EEF4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0044EEF8: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0044EEFC: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    // 0x0044EF00: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0044EF04: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x0044EF08: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x0044EF0C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0044EF10: jal         0x0027AF4C
    // 0x0044EF14: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    func_0027AF4C(rdram, ctx);
        goto after_1;
    // 0x0044EF14: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    after_1:
    // 0x0044EF18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0044EF1C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0044EF20: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0044EF24: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x0044EF28: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x0044EF2C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x0044EF30: lwc1        $f1, 0x30($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X30);
    // 0x0044EF34: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044EF38: lwc1        $f0, 0xC4C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XC4C);
    // 0x0044EF3C: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0044EF40: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044EF44: lwc1        $f1, 0xC50($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XC50);
    // 0x0044EF48: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0044EF4C: nop

    // 0x0044EF50: bc1tl       L_0044EF68
    if (c1cs) {
        // 0x0044EF54: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_0044EF68;
    }
    goto skip_1;
    // 0x0044EF54: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_1:
    // 0x0044EF58: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0044EF5C: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x0044EF60: j           L_00415F7C
    // 0x0044EF64: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    entry_00415F7C(rdram, ctx);
    return;
    // 0x0044EF64: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
L_0044EF68:
    // 0x0044EF68: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0044EF6C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0044EF70: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x0044EF74: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0044EF78: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x0044EF7C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x0044EF80: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x0044EF84: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x0044EF88: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x0044EF8C: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x0044EF90: jal         0x002778A8
    // 0x0044EF94: nop

    func_002778A8(rdram, ctx);
        goto after_2;
    // 0x0044EF94: nop

    after_2:
L_0044EF98:
    // 0x0044EF98: lw          $ra, 0x8C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X8C);
    // 0x0044EF9C: lw          $s4, 0x88($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X88);
    // 0x0044EFA0: lw          $s3, 0x84($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X84);
    // 0x0044EFA4: lw          $s2, 0x80($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X80);
    // 0x0044EFA8: lw          $s1, 0x7C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X7C);
    // 0x0044EFAC: lw          $s0, 0x78($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X78);
    // 0x0044EFB0: jr          $ra
    // 0x0044EFB4: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x0044EFB4: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
