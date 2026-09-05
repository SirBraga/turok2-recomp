#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_00417E7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00417E7C: jr          $ra
    // 0x00417E80: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00417E80: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00292C84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00292C84: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00292C88: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x00292C8C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00292C90: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00292C94: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x00292C98: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x00292C9C: lw          $v0, 0x2C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X2C);
    // 0x00292CA0: lw          $s0, 0x18($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X18);
    // 0x00292CA4: bne         $v0, $v1, L_00292D38
    if (ctx->r2 != ctx->r3) {
        // 0x00292CA8: nop
    
            goto L_00292D38;
    }
    // 0x00292CA8: nop

    // 0x00292CAC: beq         $s0, $zero, L_00292D38
    if (ctx->r16 == 0) {
        // 0x00292CB0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00292D38;
    }
    // 0x00292CB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00292CB4: jal         0x00293254
    // 0x00292CB8: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_00293254(rdram, ctx);
        goto after_0;
    // 0x00292CB8: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x00292CBC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x00292CC0: beq         $v0, $zero, L_00292D38
    if (ctx->r2 == 0) {
        // 0x00292CC4: nop
    
            goto L_00292D38;
    }
    // 0x00292CC4: nop

    // 0x00292CC8: lw          $v0, 0x84($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X84);
    // 0x00292CCC: beq         $v0, $zero, L_00292D18
    if (ctx->r2 == 0) {
        // 0x00292CD0: nop
    
            goto L_00292D18;
    }
    // 0x00292CD0: nop

    // 0x00292CD4: jal         0x00293028
    // 0x00292CD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00293028(rdram, ctx);
        goto after_1;
    // 0x00292CD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00292CDC: lw          $v1, 0x80($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X80);
    // 0x00292CE0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x00292CE4: lw          $v1, 0x8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X8);
    // 0x00292CE8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x00292CEC: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00292CF0: bne         $v0, $zero, L_00292D18
    if (ctx->r2 != 0) {
        // 0x00292CF4: nop
    
            goto L_00292D18;
    }
    // 0x00292CF4: nop

    // 0x00292CF8: lw          $a1, 0x7C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X7C);
    // 0x00292CFC: jal         0x0029321C
    // 0x00292D00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0029321C(rdram, ctx);
        goto after_2;
    // 0x00292D00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00292D04: lw          $v1, 0x84($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X84);
    // 0x00292D08: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00292D0C: beq         $v1, $v0, L_00292D18
    if (ctx->r3 == ctx->r2) {
        // 0x00292D10: addu        $v0, $v1, $v0
        ctx->r2 = ADD32(ctx->r3, ctx->r2);
            goto L_00292D18;
    }
    // 0x00292D10: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x00292D14: sw          $v0, 0x84($s1)
    MEM_W(0X84, ctx->r17) = ctx->r2;
L_00292D18:
    // 0x00292D18: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x00292D1C: sh          $zero, 0x10($sp)
    MEM_H(0X10, ctx->r29) = 0;
    // 0x00292D20: lw          $a2, 0x24($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X24);
    // 0x00292D24: mult        $v0, $a2
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00292D28: addiu       $a0, $s1, 0x48
    ctx->r4 = ADD32(ctx->r17, 0X48);
    // 0x00292D2C: mflo        $a2
    ctx->r6 = lo;
    // 0x00292D30: jal         0x00291034
    // 0x00292D34: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_00291034(rdram, ctx);
        goto after_3;
    // 0x00292D34: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_3:
L_00292D38:
    // 0x00292D38: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x00292D3C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x00292D40: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x00292D44: jr          $ra
    // 0x00292D48: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00292D48: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00271694(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00271694: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00271698: lw          $v0, 0x2680($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2680);
    // 0x0027169C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x002716A0: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x002716A4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002716A8: beq         $v0, $zero, L_00271730
    if (ctx->r2 == 0) {
        // 0x002716AC: sw          $ra, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r31;
            goto L_00271730;
    }
    // 0x002716AC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x002716B0: lw          $v0, 0x2BB4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2BB4);
    // 0x002716B4: beq         $v0, $zero, L_00271730
    if (ctx->r2 == 0) {
        // 0x002716B8: addiu       $v0, $zero, 0xD
        ctx->r2 = ADD32(0, 0XD);
            goto L_00271730;
    }
    // 0x002716B8: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x002716BC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x002716C0: addiu       $a0, $a0, -0x5378
    ctx->r4 = ADD32(ctx->r4, -0X5378);
    // 0x002716C4: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x002716C8: bne         $v1, $v0, L_00271730
    if (ctx->r3 != ctx->r2) {
        // 0x002716CC: nop
    
            goto L_00271730;
    }
    // 0x002716CC: nop

    // 0x002716D0: lw          $v0, 0x134($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X134);
    // 0x002716D4: blez        $v0, L_00271730
    if (SIGNED(ctx->r2) <= 0) {
        // 0x002716D8: addiu       $a1, $sp, 0x20
        ctx->r5 = ADD32(ctx->r29, 0X20);
            goto L_00271730;
    }
    // 0x002716D8: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x002716DC: addiu       $a0, $a0, -0x13D8
    ctx->r4 = ADD32(ctx->r4, -0X13D8);
    // 0x002716E0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x002716E4: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x002716E8: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x002716EC: jal         0x00281444
    // 0x002716F0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    func_00281444(rdram, ctx);
        goto after_0;
    // 0x002716F0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x002716F4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x002716F8: lw          $v0, 0x104($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X104);
    // 0x002716FC: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x00271700: bne         $v0, $zero, L_00271730
    if (ctx->r2 != 0) {
        // 0x00271704: addiu       $v1, $a0, 0x114
        ctx->r3 = ADD32(ctx->r4, 0X114);
            goto L_00271730;
    }
    // 0x00271704: addiu       $v1, $a0, 0x114
    ctx->r3 = ADD32(ctx->r4, 0X114);
    // 0x00271708: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0027170C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00271710: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00271714: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
    // 0x00271718: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0027171C: lw          $a1, 0x134($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X134);
    // 0x00271720: lw          $a2, 0x114($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X114);
    // 0x00271724: lw          $a3, 0x4($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X4);
    // 0x00271728: jal         0x00270C80
    // 0x0027172C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00270C80(rdram, ctx);
        goto after_1;
    // 0x0027172C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_00271730:
    // 0x00271730: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x00271734: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x00271738: jr          $ra
    // 0x0027173C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0027173C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0027592C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027592C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00275930: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00275934: addiu       $a0, $a0, 0x2A00
    ctx->r4 = ADD32(ctx->r4, 0X2A00);
    // 0x00275938: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0027593C: jal         0x002712E8
    // 0x00275940: nop

    func_002712E8(rdram, ctx);
        goto after_0;
    // 0x00275940: nop

    after_0:
    // 0x00275944: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00275948: jr          $ra
    // 0x0027594C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0027594C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0045425C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041B28C:
    // 0x0045425C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
L_0041B2C0:
    // 0x00454260: lw          $v0, -0x5524($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5524);
    // 0x00454264: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x00454268: beq         $v0, $zero, L_0045427C
    if (ctx->r2 == 0) {
        // 0x0045426C: lui         $v1, 0x100
        ctx->r3 = S32(0X100 << 16);
            goto L_0045427C;
    }
    // 0x0045426C: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x00454270: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00454274: j           L_0041B28C
    // 0x00454278: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    entry_0041B28C(rdram, ctx);
    return;
    // 0x00454278: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
L_0045427C:
    // 0x0045427C: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x00454280: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00454284: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00454288: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0045428C: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x00454290: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00454294: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x00454298: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x0045429C: beq         $v0, $zero, L_004542B4
    if (ctx->r2 == 0) {
        // 0x004542A0: nop
    
            goto L_004542B4;
    }
    // 0x004542A0: nop

    // 0x004542A4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004542A8: addiu       $v0, $v0, 0x581C
    ctx->r2 = ADD32(ctx->r2, 0X581C);
    // 0x004542AC: j           L_0041B2C0
    // 0x004542B0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_0041B2C0(rdram, ctx);
    return;
    // 0x004542B0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004542B4:
    // 0x004542B4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004542B8: addiu       $v0, $v0, 0x5838
    ctx->r2 = ADD32(ctx->r2, 0X5838);
    // 0x004542BC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x004542C0: jr          $ra
    // 0x004542C4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x004542C4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_002680A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002680A8: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x002680AC: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x002680B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002680B4: beq         $v1, $v0, L_002680C4
    if (ctx->r3 == ctx->r2) {
            // 0x002680B8: nop

    func_002680C4(rdram, ctx);
    return;
    }
    // 0x002680B8: nop

    // 0x002680BC: jr          $ra
    // 0x002680C0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x002680C0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00203330(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00203330: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x00203334: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x00203338: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x0020333C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00203340: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x00203344: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    // 0x00203348: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x0020334C: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x00203350: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x00203354: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x00203358: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x0020335C: jal         0x00200500
    // 0x00203360: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    func_00200500(rdram, ctx);
        goto after_0;
    // 0x00203360: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    after_0:
    // 0x00203364: bne         $s5, $zero, L_0020337C
    if (ctx->r21 != 0) {
        // 0x00203368: nop
    
            goto L_0020337C;
    }
    // 0x00203368: nop

    // 0x0020336C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x00203370: lw          $v0, -0x7E28($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7E28);
    // 0x00203374: bne         $v0, $zero, L_00203390
    if (ctx->r2 != 0) {
        // 0x00203378: nop
    
            goto L_00203390;
    }
    // 0x00203378: nop

L_0020337C:
    // 0x0020337C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x00203380: addiu       $v0, $v0, -0x7E28
    ctx->r2 = ADD32(ctx->r2, -0X7E28);
    // 0x00203384: lw          $v1, 0x1C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1C);
    // 0x00203388: beq         $v1, $zero, L_00203440
    if (ctx->r3 == 0) {
        // 0x0020338C: sw          $v1, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r3;
            goto L_00203440;
    }
    // 0x0020338C: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
L_00203390:
    // 0x00203390: lui         $s2, 0x800E
    ctx->r18 = S32(0X800E << 16);
    // 0x00203394: addiu       $s2, $s2, -0x7E28
    ctx->r18 = ADD32(ctx->r18, -0X7E28);
    // 0x00203398: lui         $s4, 0x800D
    ctx->r20 = S32(0X800D << 16);
    // 0x0020339C: addiu       $s4, $s4, 0x1CC8
    ctx->r20 = ADD32(ctx->r20, 0X1CC8);
    // 0x002033A0: addiu       $s3, $s4, -0x8
    ctx->r19 = ADD32(ctx->r20, -0X8);
L_002033A4:
    // 0x002033A4: lw          $s1, 0x0($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X0);
    // 0x002033A8: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x002033AC: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x002033B0: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x002033B4: andi        $v0, $v0, 0x701
    ctx->r2 = ctx->r2 & 0X701;
    // 0x002033B8: bne         $v0, $zero, L_00203430
    if (ctx->r2 != 0) {
        // 0x002033BC: nop
    
            goto L_00203430;
    }
    // 0x002033BC: nop

    // 0x002033C0: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x002033C4: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x002033C8: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x002033CC: sltu        $v0, $v0, $a1
    ctx->r2 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x002033D0: beq         $v0, $zero, L_00203430
    if (ctx->r2 == 0) {
        // 0x002033D4: nop
    
            goto L_00203430;
    }
    // 0x002033D4: nop

    // 0x002033D8: jal         0x002026EC
    // 0x002033DC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    entry_002026EC(rdram, ctx);
        goto after_1;
    // 0x002033DC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_1:
    // 0x002033E0: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x002033E4: jal         0x002024E0
    // 0x002033E8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_002024E0(rdram, ctx);
        goto after_2;
    // 0x002033E8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_2:
    // 0x002033EC: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x002033F0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x002033F4: sltu        $v0, $s0, $a1
    ctx->r2 = ctx->r16 < ctx->r5 ? 1 : 0;
    // 0x002033F8: beq         $v0, $zero, L_00203428
    if (ctx->r2 == 0) {
        // 0x002033FC: nop
    
            goto L_00203428;
    }
    // 0x002033FC: nop

    // 0x00203400: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    // 0x00203404: jal         0x00266B90
    // 0x00203408: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00266B90(rdram, ctx);
        goto after_3;
    // 0x00203408: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x0020340C: addiu       $a0, $s2, 0x1C
    ctx->r4 = ADD32(ctx->r18, 0X1C);
    // 0x00203410: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00203414: jal         0x00200738
    // 0x00203418: sw          $s0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r16;
    func_00200738(rdram, ctx);
        goto after_4;
    // 0x00203418: sw          $s0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r16;
    after_4:
    // 0x0020341C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00203420: jal         0x00200574
    // 0x00203424: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00200574(rdram, ctx);
        goto after_5;
    // 0x00203424: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_5:
L_00203428:
    // 0x00203428: beq         $s5, $zero, L_00203440
    if (ctx->r21 == 0) {
        // 0x0020342C: nop
    
            goto L_00203440;
    }
    // 0x0020342C: nop

L_00203430:
    // 0x00203430: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x00203434: lw          $v0, -0x7E28($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7E28);
    // 0x00203438: bne         $v0, $zero, L_002033A4
    if (ctx->r2 != 0) {
        // 0x0020343C: nop
    
            goto L_002033A4;
    }
    // 0x0020343C: nop

L_00203440:
    // 0x00203440: lw          $s1, 0x10($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X10);
    // 0x00203444: beq         $s1, $zero, L_002034D0
    if (ctx->r17 == 0) {
        // 0x00203448: nop
    
            goto L_002034D0;
    }
    // 0x00203448: nop

L_0020344C:
    // 0x0020344C: lw          $s2, 0x24($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X24);
    // 0x00203450: jal         0x002007D0
    // 0x00203454: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_002007D0(rdram, ctx);
        goto after_6;
    // 0x00203454: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_6:
    // 0x00203458: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x0020345C: lw          $s0, -0x7E0C($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X7E0C);
    // 0x00203460: beq         $s0, $zero, L_002034A8
    if (ctx->r16 == 0) {
        // 0x00203464: nop
    
            goto L_002034A8;
    }
    // 0x00203464: nop

L_00203468:
    // 0x00203468: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x0020346C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00203470: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x00203474: beq         $v0, $zero, L_00203494
    if (ctx->r2 == 0) {
        // 0x00203478: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_00203494;
    }
    // 0x00203478: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0020347C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00203480: addiu       $a0, $a0, -0x7E0C
    ctx->r4 = ADD32(ctx->r4, -0X7E0C);
    // 0x00203484: jal         0x002005D0
    // 0x00203488: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_002005D0(rdram, ctx);
        goto after_7;
    // 0x00203488: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_7:
    // 0x0020348C: j           L_002034A0
    // 0x00203490: nop

        goto L_002034A0;
    // 0x00203490: nop

L_00203494:
    // 0x00203494: lw          $s0, 0x24($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X24);
    // 0x00203498: bne         $s0, $zero, L_00203468
    if (ctx->r16 != 0) {
        // 0x0020349C: nop
    
            goto L_00203468;
    }
    // 0x0020349C: nop

L_002034A0:
    // 0x002034A0: bne         $s0, $zero, L_002034B8
    if (ctx->r16 != 0) {
        // 0x002034A4: nop
    
            goto L_002034B8;
    }
    // 0x002034A4: nop

L_002034A8:
    // 0x002034A8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x002034AC: addiu       $a0, $a0, -0x7E0C
    ctx->r4 = ADD32(ctx->r4, -0X7E0C);
    // 0x002034B0: jal         0x00200574
    // 0x002034B4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00200574(rdram, ctx);
        goto after_8;
    // 0x002034B4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_8:
L_002034B8:
    // 0x002034B8: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x002034BC: ori         $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 | 0X1000;
    // 0x002034C0: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
    // 0x002034C4: addu        $s1, $s2, $zero
    ctx->r17 = ADD32(ctx->r18, 0);
    // 0x002034C8: bne         $s1, $zero, L_0020344C
    if (ctx->r17 != 0) {
        // 0x002034CC: nop
    
            goto L_0020344C;
    }
    // 0x002034CC: nop

L_002034D0:
    // 0x002034D0: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x002034D4: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x002034D8: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x002034DC: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x002034E0: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x002034E4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x002034E8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x002034EC: jr          $ra
    // 0x002034F0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x002034F0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_004590BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00420174:
    // 0x004590BC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
L_004202A8:
    // 0x004590C0: lw          $v0, 0x2010($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2010);
L_00420308:
    // 0x004590C4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
L_00420364:
    // 0x004590C8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x004590CC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x004590D0: bne         $v0, $zero, L_004590E8
    if (ctx->r2 != 0) {
        // 0x004590D4: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_004590E8;
    }
    // 0x004590D4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x004590D8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x004590DC: lw          $v0, 0x2014($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2014);
    // 0x004590E0: beq         $v0, $zero, L_004590F0
    if (ctx->r2 == 0) {
        // 0x004590E4: nop
    
            goto L_004590F0;
    }
    // 0x004590E4: nop

L_004590E8:
    // 0x004590E8: jal         0x002053A8
    // 0x004590EC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_0;
    // 0x004590EC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
L_004590F0:
    // 0x004590F0: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x004590F4: lw          $a1, 0x2010($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2010);
    // 0x004590F8: beq         $a1, $zero, L_00459108
    if (ctx->r5 == 0) {
        // 0x004590FC: nop
    
            goto L_00459108;
    }
    // 0x004590FC: nop

    // 0x00459100: jal         0x002052D8
    // 0x00459104: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_1;
    // 0x00459104: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
L_00459108:
    // 0x00459108: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0045910C: lw          $a1, 0x2014($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2014);
    // 0x00459110: beq         $a1, $zero, L_00459120
    if (ctx->r5 == 0) {
        // 0x00459114: nop
    
            goto L_00459120;
    }
    // 0x00459114: nop

    // 0x00459118: jal         0x002052D8
    // 0x0045911C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_2;
    // 0x0045911C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_2:
L_00459120:
    // 0x00459120: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00459124: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x00459128: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045912C: sw          $zero, 0x2010($at)
    MEM_W(0X2010, ctx->r1) = 0;
    // 0x00459130: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00459134: sw          $zero, 0x2014($at)
    MEM_W(0X2014, ctx->r1) = 0;
    // 0x00459138: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045913C: sw          $zero, 0x2018($at)
    MEM_W(0X2018, ctx->r1) = 0;
    // 0x00459140: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00459144: sw          $zero, 0x201C($at)
    MEM_W(0X201C, ctx->r1) = 0;
    // 0x00459148: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045914C: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
    // 0x00459150: beq         $v0, $zero, L_00459168
    if (ctx->r2 == 0) {
        // 0x00459154: nop
    
            goto L_00459168;
    }
    // 0x00459154: nop

    // 0x00459158: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0045915C: lw          $v0, 0x2028($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2028);
    // 0x00459160: j           L_00420174
    // 0x00459164: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    entry_00420174(rdram, ctx);
    return;
    // 0x00459164: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
L_00459168:
    // 0x00459168: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x0045916C: lb          $v0, 0x4($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4);
    // 0x00459170: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00459174: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00459178: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x0045917C: beq         $v0, $zero, L_004591C4
    if (ctx->r2 == 0) {
        // 0x00459180: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_004591C4;
    }
    // 0x00459180: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00459184: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00459188: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0045918C: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00459190: addiu       $a1, $a1, -0x49A8
    ctx->r5 = ADD32(ctx->r5, -0X49A8);
    // 0x00459194: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00459198: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x0045919C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x004591A0: sw          $zero, -0xEB8($at)
    MEM_W(-0XEB8, ctx->r1) = 0;
    // 0x004591A4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x004591A8: sw          $zero, -0x4EF8($at)
    MEM_W(-0X4EF8, ctx->r1) = 0;
    // 0x004591AC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x004591B0: sw          $v0, -0xEBC($at)
    MEM_W(-0XEBC, ctx->r1) = ctx->r2;
    // 0x004591B4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x004591B8: sw          $zero, -0x4EEC($at)
    MEM_W(-0X4EEC, ctx->r1) = 0;
    // 0x004591BC: j           L_00420308
    // 0x004591C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    entry_00420308(rdram, ctx);
    return;
    // 0x004591C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_004591C4:
    // 0x004591C4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004591C8: lw          $v0, 0x9B4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9B4);
    // 0x004591CC: beq         $v0, $zero, L_004592C0
    if (ctx->r2 == 0) {
        // 0x004591D0: nop
    
            goto L_004592C0;
    }
    // 0x004591D0: nop

    // 0x004591D4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004591D8: lw          $v0, 0x994($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X994);
    // 0x004591DC: beq         $v0, $zero, L_00459224
    if (ctx->r2 == 0) {
        // 0x004591E0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00459224;
    }
    // 0x004591E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004591E4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x004591E8: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x004591EC: lw          $a1, 0x20($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X20);
    // 0x004591F0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004591F4: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x004591F8: jal         0x0025342C
    // 0x004591FC: nop

    func_0025342C(rdram, ctx);
        goto after_3;
    // 0x004591FC: nop

    after_3:
    // 0x00459200: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x00459204: lw          $a0, 0x51C($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X51C);
    // 0x00459208: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x0045920C: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00459210: addiu       $a1, $a1, -0x78D8
    ctx->r5 = ADD32(ctx->r5, -0X78D8);
    // 0x00459214: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00459218: lw          $a3, 0xA50($a2)
    ctx->r7 = MEM_W(ctx->r6, 0XA50);
    // 0x0045921C: j           L_00420308
    // 0x00459220: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    entry_00420308(rdram, ctx);
    return;
    // 0x00459220: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
L_00459224:
    // 0x00459224: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00459228: lw          $v0, 0x984($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X984);
    // 0x0045922C: beq         $v0, $zero, L_00459360
    if (ctx->r2 == 0) {
        // 0x00459230: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00459360;
    }
    // 0x00459230: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00459234: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x00459238: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x0045923C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00459240: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x00459244: lb          $v1, 0x4($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X4);
    // 0x00459248: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x0045924C: beq         $v1, $v0, L_00459280
    if (ctx->r3 == ctx->r2) {
        // 0x00459250: sw          $v1, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r3;
            goto L_00459280;
    }
    // 0x00459250: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x00459254: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x00459258: bne         $v0, $zero, L_00459270
    if (ctx->r2 != 0) {
        // 0x0045925C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00459270;
    }
    // 0x0045925C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00459260: beq         $v1, $v0, L_00459290
    if (ctx->r3 == ctx->r2) {
        // 0x00459264: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00459290;
    }
    // 0x00459264: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00459268: beq         $v1, $v0, L_004592A0
    if (ctx->r3 == ctx->r2) {
        // 0x0045926C: nop
    
            goto L_004592A0;
    }
    // 0x0045926C: nop

L_00459270:
    // 0x00459270: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00459274: addiu       $a1, $a1, -0x5460
    ctx->r5 = ADD32(ctx->r5, -0X5460);
    // 0x00459278: j           L_004202A8
    // 0x0045927C: nop

    entry_004202A8(rdram, ctx);
    return;
    // 0x0045927C: nop

L_00459280:
    // 0x00459280: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00459284: addiu       $a1, $a1, -0x543C
    ctx->r5 = ADD32(ctx->r5, -0X543C);
    // 0x00459288: j           L_004202A8
    // 0x0045928C: nop

    entry_004202A8(rdram, ctx);
    return;
    // 0x0045928C: nop

L_00459290:
    // 0x00459290: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00459294: addiu       $a1, $a1, -0x5418
    ctx->r5 = ADD32(ctx->r5, -0X5418);
    // 0x00459298: j           L_004202A8
    // 0x0045929C: nop

    entry_004202A8(rdram, ctx);
    return;
    // 0x0045929C: nop

L_004592A0:
    // 0x004592A0: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x004592A4: addiu       $a1, $a1, -0x53F4
    ctx->r5 = ADD32(ctx->r5, -0X53F4);
    // 0x004592A8: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x004592AC: lw          $a0, 0x51C($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X51C);
    // 0x004592B0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x004592B4: lw          $a3, 0xA50($a2)
    ctx->r7 = MEM_W(ctx->r6, 0XA50);
    // 0x004592B8: j           L_00420308
    // 0x004592BC: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    entry_00420308(rdram, ctx);
    return;
    // 0x004592BC: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
L_004592C0:
    // 0x004592C0: lw          $a1, 0x20($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X20);
    // 0x004592C4: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x004592C8: addiu       $s0, $s0, -0x6790
    ctx->r16 = ADD32(ctx->r16, -0X6790);
    // 0x004592CC: jal         0x0025342C
    // 0x004592D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0025342C(rdram, ctx);
        goto after_4;
    // 0x004592D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x004592D4: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x004592D8: lw          $v1, 0x994($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X994);
    // 0x004592DC: beq         $v1, $zero, L_00459318
    if (ctx->r3 == 0) {
        // 0x004592E0: addu        $a2, $v0, $zero
        ctx->r6 = ADD32(ctx->r2, 0);
            goto L_00459318;
    }
    // 0x004592E0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x004592E4: addiu       $a0, $s0, 0x5BC
    ctx->r4 = ADD32(ctx->r16, 0X5BC);
    // 0x004592E8: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x004592EC: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x004592F0: addiu       $a1, $a1, -0x6F50
    ctx->r5 = ADD32(ctx->r5, -0X6F50);
    // 0x004592F4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x004592F8: lw          $a3, 0xA50($a2)
    ctx->r7 = MEM_W(ctx->r6, 0XA50);
    // 0x004592FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00459300: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00459304: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x00459308: jal         0x00416644
    // 0x0045930C: nop

    func_00416644(rdram, ctx);
        goto after_5;
    // 0x0045930C: nop

    after_5:
    // 0x00459310: j           L_00420364
    // 0x00459314: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    entry_00420364(rdram, ctx);
    return;
    // 0x00459314: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00459318:
    // 0x00459318: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045931C: lw          $v0, 0x984($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X984);
    // 0x00459320: beq         $v0, $zero, L_00459360
    if (ctx->r2 == 0) {
        // 0x00459324: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00459360;
    }
    // 0x00459324: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00459328: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0045932C: addiu       $a1, $a1, -0x41EC
    ctx->r5 = ADD32(ctx->r5, -0X41EC);
    // 0x00459330: lw          $a0, 0x51C($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X51C);
    // 0x00459334: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x00459338: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045933C: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x00459340: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x00459344: lw          $a3, 0xA50($a2)
    ctx->r7 = MEM_W(ctx->r6, 0XA50);
    // 0x00459348: jal         0x00416644
    // 0x0045934C: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    func_00416644(rdram, ctx);
        goto after_6;
    // 0x0045934C: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    after_6:
    // 0x00459350: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00459354: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
    // 0x00459358: j           L_00420364
    // 0x0045935C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    entry_00420364(rdram, ctx);
    return;
    // 0x0045935C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00459360:
    // 0x00459360: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00459364: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00459368: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0045936C: jr          $ra
    // 0x00459370: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00459370: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00206380(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00206380: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00206384: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00206388: andi        $a2, $a2, 0x10
    ctx->r6 = ctx->r6 & 0X10;
    // 0x0020638C: beq         $a2, $zero, L_00206398
    if (ctx->r6 == 0) {
        // 0x00206390: addu        $v0, $a1, $zero
        ctx->r2 = ADD32(ctx->r5, 0);
            goto L_00206398;
    }
    // 0x00206390: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    // 0x00206394: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00206398:
    // 0x00206398: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0020639C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x002063A0: jal         0x00203068
    // 0x002063A4: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_00203068(rdram, ctx);
        goto after_0;
    // 0x002063A4: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_0:
    // 0x002063A8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002063AC: jr          $ra
    // 0x002063B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002063B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00452AD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00452AD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00452AD8: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x00452ADC: lui         $a2, 0x44
    ctx->r6 = S32(0X44 << 16);
    // 0x00452AE0: addiu       $a2, $a2, -0x6118
    ctx->r6 = ADD32(ctx->r6, -0X6118);
    // 0x00452AE4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00452AE8: jal         0x00416894
    // 0x00452AEC: nop

    func_00416894(rdram, ctx);
        goto after_0;
    // 0x00452AEC: nop

    after_0:
    // 0x00452AF0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00452AF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00452AF8: jr          $ra
    // 0x00452AFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00452AFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002912A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002912A0: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x002912A4: mult        $a3, $v0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002912A8: lw          $a1, 0x4($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X4);
    // 0x002912AC: lw          $a0, 0x8($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X8);
    // 0x002912B0: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x002912B4: mflo        $t0
    ctx->r8 = lo;
    // 0x002912B8: addiu       $v1, $t0, 0xF
    ctx->r3 = ADD32(ctx->r8, 0XF);
    // 0x002912BC: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x002912C0: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x002912C4: addu        $v1, $a1, $v1
    ctx->r3 = ADD32(ctx->r5, ctx->r3);
    // 0x002912C8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x002912CC: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x002912D0: bne         $v0, $zero, L_002912E0
    if (ctx->r2 != 0) {
        // 0x002912D4: addu        $a3, $zero, $zero
        ctx->r7 = ADD32(0, 0);
            goto L_002912E0;
    }
    // 0x002912D4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x002912D8: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    // 0x002912DC: sw          $v1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r3;
L_002912E0:
    // 0x002912E0: jr          $ra
    // 0x002912E4: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
    return;
    // 0x002912E4: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
;}
RECOMP_FUNC void func_004579A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041EB40:
    // 0x004579A4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
L_0041EB48:
    // 0x004579A8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
L_0041EB50:
    // 0x004579AC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x004579B0: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x004579B4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x004579B8: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x004579BC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x004579C0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004579C4: sw          $t0, 0x984($at)
    MEM_W(0X984, ctx->r1) = ctx->r8;
    // 0x004579C8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004579CC: sw          $t0, 0x9A0($at)
    MEM_W(0X9A0, ctx->r1) = ctx->r8;
    // 0x004579D0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004579D4: sw          $zero, 0x994($at)
    MEM_W(0X994, ctx->r1) = 0;
    // 0x004579D8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004579DC: sw          $zero, 0x9B4($at)
    MEM_W(0X9B4, ctx->r1) = 0;
    // 0x004579E0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004579E4: sw          $zero, 0x2024($at)
    MEM_W(0X2024, ctx->r1) = 0;
    // 0x004579E8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004579EC: sw          $zero, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = 0;
    // 0x004579F0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004579F4: sw          $zero, 0x990($at)
    MEM_W(0X990, ctx->r1) = 0;
    // 0x004579F8: lb          $v0, 0x4($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4);
    // 0x004579FC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00457A00: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x00457A04: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00457A08: lw          $v1, 0x2020($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2020);
    // 0x00457A0C: beq         $v1, $zero, L_00457A4C
    if (ctx->r3 == 0) {
        // 0x00457A10: addu        $s0, $v0, $zero
        ctx->r16 = ADD32(ctx->r2, 0);
            goto L_00457A4C;
    }
    // 0x00457A10: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00457A14: lw          $a0, 0x51C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X51C);
    // 0x00457A18: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00457A1C: addiu       $a1, $a1, -0x41EC
    ctx->r5 = ADD32(ctx->r5, -0X41EC);
    // 0x00457A20: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00457A24: lw          $a3, 0xA50($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XA50);
    // 0x00457A28: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x00457A2C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00457A30: sw          $t0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r8;
    // 0x00457A34: jal         0x00416644
    // 0x00457A38: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    func_00416644(rdram, ctx);
        goto after_0;
    // 0x00457A38: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    after_0:
    // 0x00457A3C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00457A40: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
    // 0x00457A44: j           L_0041EB50
    // 0x00457A48: nop

    entry_0041EB50(rdram, ctx);
    return;
    // 0x00457A48: nop

L_00457A4C:
    // 0x00457A4C: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x00457A50: lb          $a0, 0x4($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X4);
    // 0x00457A54: jal         0x004263A0
    // 0x00457A58: nop

    func_004263A0(rdram, ctx);
        goto after_1;
    // 0x00457A58: nop

    after_1:
    // 0x00457A5C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x00457A60: jal         0x0042647C
    // 0x00457A64: nop

    entry_0042647C(rdram, ctx);
        goto after_2;
    // 0x00457A64: nop

    after_2:
    // 0x00457A68: bnel        $v0, $zero, L_00457ABC
    if (ctx->r2 != 0) {
        // 0x00457A6C: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_00457ABC;
    }
    goto skip_0;
    // 0x00457A6C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    skip_0:
    // 0x00457A70: jal         0x0041D7B0
    // 0x00457A74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0041D7B0(rdram, ctx);
        goto after_3;
    // 0x00457A74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x00457A78: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x00457A7C: lui         $a1, 0x800F
    ctx->r5 = S32(0X800F << 16);
    // 0x00457A80: lw          $a1, 0x70A8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X70A8);
    // 0x00457A84: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x00457A88: lw          $a0, 0x2018($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2018);
    // 0x00457A8C: jal         0x00426D98
    // 0x00457A90: addiu       $a1, $a1, 0x684
    ctx->r5 = ADD32(ctx->r5, 0X684);
    entry_00426D98(rdram, ctx);
        goto after_4;
    // 0x00457A90: addiu       $a1, $a1, 0x684
    ctx->r5 = ADD32(ctx->r5, 0X684);
    after_4:
    // 0x00457A94: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00457A98: lw          $a1, 0x2018($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2018);
    // 0x00457A9C: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x00457AA0: lw          $v1, 0x70A8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X70A8);
    // 0x00457AA4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00457AA8: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x00457AAC: jal         0x0041D948
    // 0x00457AB0: sw          $v0, 0x684($v1)
    MEM_W(0X684, ctx->r3) = ctx->r2;
    entry_0041D948(rdram, ctx);
        goto after_5;
    // 0x00457AB0: sw          $v0, 0x684($v1)
    MEM_W(0X684, ctx->r3) = ctx->r2;
    after_5:
    // 0x00457AB4: j           L_0041EB50
    // 0x00457AB8: nop

    entry_0041EB50(rdram, ctx);
    return;
    // 0x00457AB8: nop

L_00457ABC:
    // 0x00457ABC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x00457AC0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00457AC4: sw          $s1, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r17;
    // 0x00457AC8: jal         0x004264B4
    // 0x00457ACC: nop

    entry_004264B4(rdram, ctx);
        goto after_6;
    // 0x00457ACC: nop

    after_6:
    // 0x00457AD0: beq         $v0, $zero, L_00457AEC
    if (ctx->r2 == 0) {
        // 0x00457AD4: addu        $a2, $s0, $zero
        ctx->r6 = ADD32(ctx->r16, 0);
            goto L_00457AEC;
    }
    // 0x00457AD4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x00457AD8: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00457ADC: addiu       $a1, $a1, -0x4498
    ctx->r5 = ADD32(ctx->r5, -0X4498);
    // 0x00457AE0: lw          $a0, 0x51C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X51C);
    // 0x00457AE4: j           L_0041EB40
    // 0x00457AE8: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    entry_0041EB40(rdram, ctx);
    return;
    // 0x00457AE8: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
L_00457AEC:
    // 0x00457AEC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x00457AF0: jal         0x00426AF8
    // 0x00457AF4: nop

    func_00426AF8(rdram, ctx);
        goto after_7;
    // 0x00457AF4: nop

    after_7:
    // 0x00457AF8: beq         $v0, $zero, L_00457B28
    if (ctx->r2 == 0) {
        // 0x00457AFC: addu        $a2, $s0, $zero
        ctx->r6 = ADD32(ctx->r16, 0);
            goto L_00457B28;
    }
    // 0x00457AFC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x00457B00: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00457B04: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00457B08: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00457B0C: addiu       $a1, $a1, -0x4084
    ctx->r5 = ADD32(ctx->r5, -0X4084);
    // 0x00457B10: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x00457B14: addiu       $v0, $v0, -0x49CC
    ctx->r2 = ADD32(ctx->r2, -0X49CC);
    // 0x00457B18: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00457B1C: lw          $a3, 0xA50($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XA50);
    // 0x00457B20: j           L_0041EB48
    // 0x00457B24: nop

    entry_0041EB48(rdram, ctx);
    return;
    // 0x00457B24: nop

L_00457B28:
    // 0x00457B28: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00457B2C: addiu       $a1, $a1, -0x44E0
    ctx->r5 = ADD32(ctx->r5, -0X44E0);
    // 0x00457B30: lw          $a0, 0x51C($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X51C);
    // 0x00457B34: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x00457B38: addiu       $v0, $v0, -0x41EC
    ctx->r2 = ADD32(ctx->r2, -0X41EC);
    // 0x00457B3C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00457B40: lw          $a3, 0xA50($a2)
    ctx->r7 = MEM_W(ctx->r6, 0XA50);
    // 0x00457B44: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    // 0x00457B48: jal         0x00416644
    // 0x00457B4C: nop

    func_00416644(rdram, ctx);
        goto after_8;
    // 0x00457B4C: nop

    after_8:
    // 0x00457B50: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00457B54: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00457B58: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00457B5C: jr          $ra
    // 0x00457B60: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00457B60: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0023BE24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023BE24: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x0023BE28: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x0023BE2C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0023BE30: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x0023BE34: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x0023BE38: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x0023BE3C: sdc1        $f21, 0x48($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X48, ctx->r29);
    // 0x0023BE40: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x0023BE44: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x0023BE48: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0023BE4C: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x0023BE50: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0023BE54: bnel        $v0, $zero, L_0023C0DC
    if (ctx->r2 != 0) {
        // 0x0023BE58: sw          $zero, 0x94($s1)
        MEM_W(0X94, ctx->r17) = 0;
            goto L_0023C0DC;
    }
    goto skip_0;
    // 0x0023BE58: sw          $zero, 0x94($s1)
    MEM_W(0X94, ctx->r17) = 0;
    skip_0:
    // 0x0023BE5C: lw          $v0, 0x98($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X98);
    // 0x0023BE60: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x0023BE64: beq         $v0, $zero, L_0023BEA8
    if (ctx->r2 == 0) {
        // 0x0023BE68: nop
    
            goto L_0023BEA8;
    }
    // 0x0023BE68: nop

    // 0x0023BE6C: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    // 0x0023BE70: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0023BE74: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0023BE78: jal         0x0022425C
    // 0x0023BE7C: nop

    func_0022425C(rdram, ctx);
        goto after_0;
    // 0x0023BE7C: nop

    after_0:
    // 0x0023BE80: beq         $v0, $zero, L_0023BE98
    if (ctx->r2 == 0) {
        // 0x0023BE84: nop
    
            goto L_0023BE98;
    }
    // 0x0023BE84: nop

    // 0x0023BE88: lw          $v0, 0x44($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X44);
    // 0x0023BE8C: andi        $v0, $v0, 0x4000
    ctx->r2 = ctx->r2 & 0X4000;
    // 0x0023BE90: bne         $v0, $zero, L_0023BEAC
    if (ctx->r2 != 0) {
        // 0x0023BE94: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0023BEAC;
    }
    // 0x0023BE94: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_0023BE98:
    // 0x0023BE98: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x0023BE9C: lb          $v1, 0x6($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X6);
    // 0x0023BEA0: j           L_0023BEAC
    // 0x0023BEA4: nop

        goto L_0023BEAC;
    // 0x0023BEA4: nop

L_0023BEA8:
    // 0x0023BEA8: lb          $v1, 0x6($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X6);
L_0023BEAC:
    // 0x0023BEAC: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x0023BEB0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0023BEB4: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x0023BEB8: beql        $v0, $zero, L_0023C0DC
    if (ctx->r2 == 0) {
        // 0x0023BEBC: sw          $zero, 0x94($s1)
        MEM_W(0X94, ctx->r17) = 0;
            goto L_0023C0DC;
    }
    goto skip_1;
    // 0x0023BEBC: sw          $zero, 0x94($s1)
    MEM_W(0X94, ctx->r17) = 0;
    skip_1:
    // 0x0023BEC0: beql        $v1, $zero, L_0023C0DC
    if (ctx->r3 == 0) {
        // 0x0023BEC4: sw          $zero, 0x94($s1)
        MEM_W(0X94, ctx->r17) = 0;
            goto L_0023C0DC;
    }
    goto skip_2;
    // 0x0023BEC4: sw          $zero, 0x94($s1)
    MEM_W(0X94, ctx->r17) = 0;
    skip_2:
    // 0x0023BEC8: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    // 0x0023BECC: jal         0x0026BC54
    // 0x0023BED0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_0026BC54(rdram, ctx);
        goto after_1;
    // 0x0023BED0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_1:
    // 0x0023BED4: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x0023BED8: jal         0x0026AFC0
    // 0x0023BEDC: nop

    func_0026AFC0(rdram, ctx);
        goto after_2;
    // 0x0023BEDC: nop

    after_2:
    // 0x0023BEE0: beq         $v0, $zero, L_0023BF98
    if (ctx->r2 == 0) {
        // 0x0023BEE4: nop
    
            goto L_0023BF98;
    }
    // 0x0023BEE4: nop

    // 0x0023BEE8: jal         0x00267EA8
    // 0x0023BEEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00267EA8(rdram, ctx);
        goto after_3;
    // 0x0023BEEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x0023BEF0: beq         $v0, $zero, L_0023BF68
    if (ctx->r2 == 0) {
        // 0x0023BEF4: lui         $v1, 0x1
        ctx->r3 = S32(0X1 << 16);
            goto L_0023BF68;
    }
    // 0x0023BEF4: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x0023BEF8: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x0023BEFC: lhu         $v0, 0x2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2);
    // 0x0023BF00: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x0023BF04: beq         $v0, $zero, L_0023BF60
    if (ctx->r2 == 0) {
        // 0x0023BF08: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0023BF60;
    }
    // 0x0023BF08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0023BF0C: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x0023BF10: bne         $v1, $v0, L_0023BF98
    if (ctx->r3 != ctx->r2) {
        // 0x0023BF14: nop
    
            goto L_0023BF98;
    }
    // 0x0023BF14: nop

    // 0x0023BF18: lwc1        $f12, 0x50($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X50);
    // 0x0023BF1C: jal         0x002982F0
    // 0x0023BF20: nop

    func_002982F0(rdram, ctx);
        goto after_4;
    // 0x0023BF20: nop

    after_4:
    // 0x0023BF24: lwc1        $f12, 0x50($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X50);
    // 0x0023BF28: jal         0x002974C0
    // 0x0023BF2C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_002974C0(rdram, ctx);
        goto after_5;
    // 0x0023BF2C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_5:
    // 0x0023BF30: lwc1        $f2, 0x10($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X10);
    // 0x0023BF34: neg.s       $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = -ctx->f20.fl;
    // 0x0023BF38: mul.s       $f2, $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x0023BF3C: lwc1        $f1, 0x18($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x0023BF40: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0023BF44: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0023BF48: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x0023BF4C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0023BF50: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x0023BF54: nop

    // 0x0023BF58: bc1f        L_0023BF98
    if (!c1cs) {
        // 0x0023BF5C: nop
    
            goto L_0023BF98;
    }
    // 0x0023BF5C: nop

L_0023BF60:
    // 0x0023BF60: j           L_0023C0DC
    // 0x0023BF64: sw          $zero, 0x94($s1)
    MEM_W(0X94, ctx->r17) = 0;
        goto L_0023C0DC;
    // 0x0023BF64: sw          $zero, 0x94($s1)
    MEM_W(0X94, ctx->r17) = 0;
L_0023BF68:
    // 0x0023BF68: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x0023BF6C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0023BF70: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0023BF74: bne         $v0, $zero, L_0023BF8C
    if (ctx->r2 != 0) {
        // 0x0023BF78: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_0023BF8C;
    }
    // 0x0023BF78: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x0023BF7C: jal         0x00267EE8
    // 0x0023BF80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00267EE8(rdram, ctx);
        goto after_6;
    // 0x0023BF80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x0023BF84: beq         $v0, $zero, L_0023BF90
    if (ctx->r2 == 0) {
        // 0x0023BF88: nop
    
            goto L_0023BF90;
    }
    // 0x0023BF88: nop

L_0023BF8C:
    // 0x0023BF8C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_0023BF90:
    // 0x0023BF90: beql        $s2, $zero, L_0023C0DC
    if (ctx->r18 == 0) {
        // 0x0023BF94: sw          $zero, 0x94($s1)
        MEM_W(0X94, ctx->r17) = 0;
            goto L_0023C0DC;
    }
    goto skip_3;
    // 0x0023BF94: sw          $zero, 0x94($s1)
    MEM_W(0X94, ctx->r17) = 0;
    skip_3:
L_0023BF98:
    // 0x0023BF98: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x0023BF9C: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x0023BFA0: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    // 0x0023BFA4: jal         0x0026BE60
    // 0x0023BFA8: nop

    func_0026BE60(rdram, ctx);
        goto after_7;
    // 0x0023BFA8: nop

    after_7:
    // 0x0023BFAC: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x0023BFB0: lw          $a1, 0x4C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4C);
    // 0x0023BFB4: lw          $a2, 0x54($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X54);
    // 0x0023BFB8: jal         0x0026BE60
    // 0x0023BFBC: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    func_0026BE60(rdram, ctx);
        goto after_8;
    // 0x0023BFBC: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    after_8:
    // 0x0023BFC0: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x0023BFC4: beq         $v0, $zero, L_0023BFE4
    if (ctx->r2 == 0) {
        // 0x0023BFC8: mov.s       $f20, $f0
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
            goto L_0023BFE4;
    }
    // 0x0023BFC8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x0023BFCC: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0023BFD0: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x0023BFD4: jal         0x0020EF2C
    // 0x0023BFD8: addiu       $a1, $s1, 0x4C
    ctx->r5 = ADD32(ctx->r17, 0X4C);
    func_0020EF2C(rdram, ctx);
        goto after_9;
    // 0x0023BFD8: addiu       $a1, $s1, 0x4C
    ctx->r5 = ADD32(ctx->r17, 0X4C);
    after_9:
    // 0x0023BFDC: j           L_0023BFFC
    // 0x0023BFE0: nop

        goto L_0023BFFC;
    // 0x0023BFE0: nop

L_0023BFE4:
    // 0x0023BFE4: lw          $a3, 0x4C($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X4C);
    // 0x0023BFE8: lw          $t0, 0x50($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X50);
    // 0x0023BFEC: lw          $t1, 0x54($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X54);
    // 0x0023BFF0: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x0023BFF4: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x0023BFF8: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
L_0023BFFC:
    // 0x0023BFFC: lwc1        $f3, 0x10($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x0023C000: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x0023C004: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0023C008: lwc1        $f2, 0x14($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X14);
    // 0x0023C00C: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x0023C010: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0023C014: lwc1        $f1, 0x28($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x0023C018: lwc1        $f0, 0x18($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X18);
    // 0x0023C01C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0023C020: add.s       $f3, $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f2.fl;
    // 0x0023C024: add.s       $f2, $f3, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f3.fl + ctx->f0.fl;
    // 0x0023C028: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x0023C02C: c.le.s      $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f2.fl <= ctx->f3.fl;
    // 0x0023C030: nop

    // 0x0023C034: bc1t        L_0023C040
    if (c1cs) {
        // 0x0023C038: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0023C040;
    }
    // 0x0023C038: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0023C03C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0023C040:
    // 0x0023C040: beq         $v0, $zero, L_0023C0DC
    if (ctx->r2 == 0) {
        // 0x0023C044: sw          $v0, 0x94($s1)
        MEM_W(0X94, ctx->r17) = ctx->r2;
            goto L_0023C0DC;
    }
    // 0x0023C044: sw          $v0, 0x94($s1)
    MEM_W(0X94, ctx->r17) = ctx->r2;
    // 0x0023C048: lwc1        $f2, 0x4C($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X4C);
    // 0x0023C04C: sub.s       $f20, $f20, $f21
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f21.fl;
    // 0x0023C050: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x0023C054: lwc1        $f1, 0xC($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XC);
    // 0x0023C058: sub.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x0023C05C: lwc1        $f0, 0x54($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X54);
    // 0x0023C060: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0023C064: mul.s       $f1, $f20, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f1.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x0023C068: nop

    // 0x0023C06C: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x0023C070: nop

    // 0x0023C074: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0023C078: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x0023C07C: add.s       $f0, $f2, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x0023C080: c.eq.s      $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f0.fl == ctx->f3.fl;
    // 0x0023C084: nop

    // 0x0023C088: bc1f        L_0023C098
    if (!c1cs) {
        // 0x0023C08C: nop
    
            goto L_0023C098;
    }
    // 0x0023C08C: nop

    // 0x0023C090: j           L_0023C0DC
    // 0x0023C094: swc1        $f21, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->f_odd[(21 - 1) * 2];
        goto L_0023C0DC;
    // 0x0023C094: swc1        $f21, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->f_odd[(21 - 1) * 2];
L_0023C098:
    // 0x0023C098: jal         0x00298470
    // 0x0023C09C: div.s       $f12, $f2, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    func_00298470(rdram, ctx);
        goto after_10;
    // 0x0023C09C: div.s       $f12, $f2, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    after_10:
    // 0x0023C0A0: mul.s       $f3, $f0, $f20
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f3.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x0023C0A4: lwc1        $f1, 0x4C($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X4C);
    // 0x0023C0A8: lwc1        $f2, 0x4($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X4);
    // 0x0023C0AC: sub.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f2.fl;
    // 0x0023C0B0: mul.s       $f1, $f0, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0023C0B4: add.s       $f3, $f21, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = ctx->f21.fl + ctx->f3.fl;
    // 0x0023C0B8: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x0023C0BC: lwc1        $f1, 0x54($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X54);
    // 0x0023C0C0: swc1        $f3, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->f_odd[(3 - 1) * 2];
    // 0x0023C0C4: swc1        $f2, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->f2.u32l;
    // 0x0023C0C8: lwc1        $f2, 0xC($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XC);
    // 0x0023C0CC: sub.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f2.fl;
    // 0x0023C0D0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0023C0D4: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x0023C0D8: swc1        $f2, 0x54($s1)
    MEM_W(0X54, ctx->r17) = ctx->f2.u32l;
L_0023C0DC:
    // 0x0023C0DC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x0023C0E0: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x0023C0E4: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x0023C0E8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0023C0EC: ldc1        $f21, 0x48($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X48);
    // 0x0023C0F0: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x0023C0F4: jr          $ra
    // 0x0023C0F8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x0023C0F8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_00267D94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00267D94: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x00267D98: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00267D9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00267DA0: beq         $v1, $v0, L_00267DB0
    if (ctx->r3 == ctx->r2) {
            // 0x00267DA4: nop

    func_00267DB0(rdram, ctx);
    return;
    }
    // 0x00267DA4: nop

    // 0x00267DA8: jr          $ra
    // 0x00267DAC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00267DAC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0021F00C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021F00C: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x0021F010: sw          $s1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r17;
    // 0x0021F014: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0021F018: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0021F01C: sw          $ra, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r31;
    // 0x0021F020: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    // 0x0021F024: sw          $a2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r6;
    // 0x0021F028: jal         0x0021AE6C
    // 0x0021F02C: sw          $a3, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r7;
    func_0021AE6C(rdram, ctx);
        goto after_0;
    // 0x0021F02C: sw          $a3, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r7;
    after_0:
    // 0x0021F030: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0021F034: addiu       $s0, $sp, 0x20
    ctx->r16 = ADD32(ctx->r29, 0X20);
    // 0x0021F038: jal         0x00211114
    // 0x0021F03C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00211114(rdram, ctx);
        goto after_1;
    // 0x0021F03C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0021F040: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0021F044: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    // 0x0021F048: jal         0x0020F85C
    // 0x0021F04C: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    func_0020F85C(rdram, ctx);
        goto after_2;
    // 0x0021F04C: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    after_2:
    // 0x0021F050: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x0021F054: lw          $v1, 0x60($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X60);
    // 0x0021F058: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
    // 0x0021F05C: lw          $t1, 0x68($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X68);
    // 0x0021F060: sw          $v1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r3;
    // 0x0021F064: sw          $t0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r8;
    // 0x0021F068: sw          $t1, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r9;
    // 0x0021F06C: lw          $ra, 0x78($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X78);
    // 0x0021F070: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x0021F074: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x0021F078: jr          $ra
    // 0x0021F07C: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x0021F07C: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_00204FD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00204FD0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00204FD4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00204FD8: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00204FDC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00204FE0: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x00204FE4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00204FE8: jal         0x0029DFF0
    // 0x00204FEC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_0029DFF0(rdram, ctx);
        goto after_0;
    // 0x00204FEC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x00204FF0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00204FF4: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00204FF8: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x00204FFC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00205000: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00205004: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00205008: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x0020500C: beq         $v1, $v0, L_00205038
    if (ctx->r3 == ctx->r2) {
        // 0x00205010: nop
    
            goto L_00205038;
    }
    // 0x00205010: nop

    // 0x00205014: jal         0x0029E010
    // 0x00205018: nop

    func_0029E010(rdram, ctx);
        goto after_1;
    // 0x00205018: nop

    after_1:
    // 0x0020501C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00205020: addiu       $a0, $a0, -0x7250
    ctx->r4 = ADD32(ctx->r4, -0X7250);
    // 0x00205024: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00205028: jal         0x0029B6F0
    // 0x0020502C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x0020502C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x00205030: j           L_00205044
    // 0x00205034: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
        goto L_00205044;
    // 0x00205034: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00205038:
    // 0x00205038: jal         0x0029E010
    // 0x0020503C: nop

    func_0029E010(rdram, ctx);
        goto after_3;
    // 0x0020503C: nop

    after_3:
    // 0x00205040: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00205044:
    // 0x00205044: jal         0x002031E8
    // 0x00205048: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_002031E8(rdram, ctx);
        goto after_4;
    // 0x00205048: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_4:
    // 0x0020504C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00205050: beq         $s0, $zero, L_002050A4
    if (ctx->r16 == 0) {
        // 0x00205054: addu        $a1, $s2, $zero
        ctx->r5 = ADD32(ctx->r18, 0);
            goto L_002050A4;
    }
    // 0x00205054: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00205058: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x0020505C: addiu       $a0, $a0, 0x1CC0
    ctx->r4 = ADD32(ctx->r4, 0X1CC0);
    // 0x00205060: jal         0x002021F0
    // 0x00205064: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_002021F0(rdram, ctx);
        goto after_5;
    // 0x00205064: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_5:
    // 0x00205068: beq         $v0, $zero, L_00205094
    if (ctx->r2 == 0) {
        // 0x0020506C: sw          $v0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r2;
            goto L_00205094;
    }
    // 0x0020506C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x00205070: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00205074: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x00205078: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0020507C: sw          $s1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r17;
    // 0x00205080: ori         $v0, $v0, 0x3
    ctx->r2 = ctx->r2 | 0X3;
    // 0x00205084: jal         0x00206498
    // 0x00205088: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    func_00206498(rdram, ctx);
        goto after_6;
    // 0x00205088: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    after_6:
    // 0x0020508C: j           L_002050A4
    // 0x00205090: nop

        goto L_002050A4;
    // 0x00205090: nop

L_00205094:
    // 0x00205094: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00205098: jal         0x002062F8
    // 0x0020509C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002062F8(rdram, ctx);
        goto after_7;
    // 0x0020509C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_7:
    // 0x002050A0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_002050A4:
    // 0x002050A4: jal         0x0029DFF0
    // 0x002050A8: nop

    func_0029DFF0(rdram, ctx);
        goto after_8;
    // 0x002050A8: nop

    after_8:
    // 0x002050AC: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x002050B0: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x002050B4: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x002050B8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x002050BC: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x002050C0: beq         $v1, $zero, L_002050EC
    if (ctx->r3 == 0) {
        // 0x002050C4: nop
    
            goto L_002050EC;
    }
    // 0x002050C4: nop

    // 0x002050C8: jal         0x0029E010
    // 0x002050CC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_9;
    // 0x002050CC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_9:
    // 0x002050D0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x002050D4: addiu       $a0, $a0, -0x7250
    ctx->r4 = ADD32(ctx->r4, -0X7250);
    // 0x002050D8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x002050DC: jal         0x0029B820
    // 0x002050E0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_10;
    // 0x002050E0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_10:
    // 0x002050E4: j           L_002050F8
    // 0x002050E8: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
        goto L_002050F8;
    // 0x002050E8: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_002050EC:
    // 0x002050EC: jal         0x0029E010
    // 0x002050F0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_11;
    // 0x002050F0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_11:
    // 0x002050F4: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_002050F8:
    // 0x002050F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x002050FC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00205100: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00205104: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00205108: jr          $ra
    // 0x0020510C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0020510C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00267D2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00267D2C: lw          $v1, 0x14($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X14);
    // 0x00267D30: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x00267D34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00267D38: beq         $a0, $v0, L_00267D4C
    if (ctx->r4 == ctx->r2) {
        // 0x00267D3C: nop
    
            goto L_00267D4C;
    }
    // 0x00267D3C: nop

    // 0x00267D40: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00267D44: bne         $a0, $v0, L_00267D58
    if (ctx->r4 != ctx->r2) {
            // 0x00267D48: nop

    func_00267D58(rdram, ctx);
    return;
    }
    // 0x00267D48: nop

L_00267D4C:
    // 0x00267D4C: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x00267D50: jr          $ra
    // 0x00267D54: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    return;
    // 0x00267D54: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
;}
RECOMP_FUNC void func_00234E48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00234E48: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x00234E4C: sw          $ra, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r31;
    // 0x00234E50: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x00234E54: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x00234E58: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x00234E5C: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x00234E60: lw          $s1, 0x7520($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X7520);
    // 0x00234E64: beq         $s1, $zero, L_002350D0
    if (ctx->r17 == 0) {
        // 0x00234E68: addu        $s2, $a1, $zero
        ctx->r18 = ADD32(ctx->r5, 0);
            goto L_002350D0;
    }
    // 0x00234E68: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00234E6C: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
L_00234E70:
    // 0x00234E70: lw          $v1, 0x3C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X3C);
    // 0x00234E74: andi        $v0, $v1, 0x8
    ctx->r2 = ctx->r3 & 0X8;
    // 0x00234E78: beq         $v0, $zero, L_00234FC0
    if (ctx->r2 == 0) {
        // 0x00234E7C: nop
    
            goto L_00234FC0;
    }
    // 0x00234E7C: nop

    // 0x00234E80: lw          $s0, 0x40($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X40);
    // 0x00234E84: beq         $s0, $zero, L_002350C4
    if (ctx->r16 == 0) {
        // 0x00234E88: nop
    
            goto L_002350C4;
    }
    // 0x00234E88: nop

L_00234E8C:
    // 0x00234E8C: lw          $v0, 0xB0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XB0);
    // 0x00234E90: bne         $v0, $s2, L_00234FAC
    if (ctx->r2 != ctx->r18) {
        // 0x00234E94: nop
    
            goto L_00234FAC;
    }
    // 0x00234E94: nop

    // 0x00234E98: beql        $s2, $zero, L_00234FAC
    if (ctx->r18 == 0) {
        // 0x00234E9C: sw          $s3, 0xB0($s0)
        MEM_W(0XB0, ctx->r16) = ctx->r19;
            goto L_00234FAC;
    }
    goto skip_0;
    // 0x00234E9C: sw          $s3, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->r19;
    skip_0:
    // 0x00234EA0: bne         $s2, $s3, L_00234F04
    if (ctx->r18 != ctx->r19) {
        // 0x00234EA4: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_00234F04;
    }
    // 0x00234EA4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00234EA8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00234EAC: lw          $v1, 0x6D1C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6D1C);
    // 0x00234EB0: sll         $v0, $v1, 6
    ctx->r2 = S32(ctx->r3 << 6);
    // 0x00234EB4: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x00234EB8: addiu       $v0, $v0, 0x28
    ctx->r2 = ADD32(ctx->r2, 0X28);
    // 0x00234EBC: xori        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 ^ 0X1;
    // 0x00234EC0: sll         $v1, $v1, 6
    ctx->r3 = S32(ctx->r3 << 6);
    // 0x00234EC4: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x00234EC8: addiu       $a0, $v1, 0x28
    ctx->r4 = ADD32(ctx->r3, 0X28);
    // 0x00234ECC: addiu       $v1, $v1, 0x68
    ctx->r3 = ADD32(ctx->r3, 0X68);
L_00234ED0:
    // 0x00234ED0: lw          $t0, 0x0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X0);
    // 0x00234ED4: lw          $t1, 0x4($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X4);
    // 0x00234ED8: lw          $t2, 0x8($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X8);
    // 0x00234EDC: lw          $t3, 0xC($a0)
    ctx->r11 = MEM_W(ctx->r4, 0XC);
    // 0x00234EE0: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x00234EE4: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x00234EE8: sw          $t2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r10;
    // 0x00234EEC: sw          $t3, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r11;
    // 0x00234EF0: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x00234EF4: bne         $a0, $v1, L_00234ED0
    if (ctx->r4 != ctx->r3) {
        // 0x00234EF8: addiu       $v0, $v0, 0x10
        ctx->r2 = ADD32(ctx->r2, 0X10);
            goto L_00234ED0;
    }
    // 0x00234EF8: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00234EFC: j           L_00234F9C
    // 0x00234F00: sw          $zero, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = 0;
        goto L_00234F9C;
    // 0x00234F00: sw          $zero, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = 0;
L_00234F04:
    // 0x00234F04: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00234F08: lw          $a1, 0x6D1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6D1C);
    // 0x00234F0C: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    // 0x00234F10: addiu       $a1, $a1, 0x48
    ctx->r5 = ADD32(ctx->r5, 0X48);
    // 0x00234F14: jal         0x0020D908
    // 0x00234F18: addu        $a1, $s2, $a1
    ctx->r5 = ADD32(ctx->r18, ctx->r5);
    func_0020D908(rdram, ctx);
        goto after_0;
    // 0x00234F18: addu        $a1, $s2, $a1
    ctx->r5 = ADD32(ctx->r18, ctx->r5);
    after_0:
    // 0x00234F1C: lw          $v0, 0xF8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XF8);
    // 0x00234F20: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x00234F24: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00234F28: lwc1        $f0, 0x64A8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X64A8);
    // 0x00234F2C: beq         $v0, $zero, L_00234F3C
    if (ctx->r2 == 0) {
        // 0x00234F30: nop
    
            goto L_00234F3C;
    }
    // 0x00234F30: nop

    // 0x00234F34: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00234F38: lwc1        $f0, 0x64AC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X64AC);
L_00234F3C:
    // 0x00234F3C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x00234F40: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00234F44: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x00234F48: jal         0x0021034C
    // 0x00234F4C: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    func_0021034C(rdram, ctx);
        goto after_1;
    // 0x00234F4C: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    after_1:
    // 0x00234F50: jal         0x0020F7EC
    // 0x00234F54: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_0020F7EC(rdram, ctx);
        goto after_2;
    // 0x00234F54: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_2:
    // 0x00234F58: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00234F5C: jal         0x002101A0
    // 0x00234F60: addiu       $a1, $s0, 0x10
    ctx->r5 = ADD32(ctx->r16, 0X10);
    func_002101A0(rdram, ctx);
        goto after_3;
    // 0x00234F60: addiu       $a1, $s0, 0x10
    ctx->r5 = ADD32(ctx->r16, 0X10);
    after_3:
    // 0x00234F64: lw          $v0, 0x3C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X3C);
    // 0x00234F68: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x00234F6C: beq         $v0, $zero, L_00234F84
    if (ctx->r2 == 0) {
        // 0x00234F70: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_00234F84;
    }
    // 0x00234F70: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00234F74: jal         0x002101BC
    // 0x00234F78: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    func_002101BC(rdram, ctx);
        goto after_4;
    // 0x00234F78: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    after_4:
    // 0x00234F7C: j           L_00234F9C
    // 0x00234F80: nop

        goto L_00234F9C;
    // 0x00234F80: nop

L_00234F84:
    // 0x00234F84: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00234F88: lw          $a1, 0x6D1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6D1C);
    // 0x00234F8C: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    // 0x00234F90: addiu       $a1, $a1, 0x28
    ctx->r5 = ADD32(ctx->r5, 0X28);
    // 0x00234F94: jal         0x0020D274
    // 0x00234F98: addu        $a1, $s0, $a1
    ctx->r5 = ADD32(ctx->r16, ctx->r5);
    func_0020D274(rdram, ctx);
        goto after_5;
    // 0x00234F98: addu        $a1, $s0, $a1
    ctx->r5 = ADD32(ctx->r16, ctx->r5);
    after_5:
L_00234F9C:
    // 0x00234F9C: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x00234FA0: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x00234FA4: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x00234FA8: sw          $s3, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->r19;
L_00234FAC:
    // 0x00234FAC: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x00234FB0: beq         $s0, $zero, L_002350C4
    if (ctx->r16 == 0) {
        // 0x00234FB4: nop
    
            goto L_002350C4;
    }
    // 0x00234FB4: nop

    // 0x00234FB8: j           L_00234E8C
    // 0x00234FBC: nop

        goto L_00234E8C;
    // 0x00234FBC: nop

L_00234FC0:
    // 0x00234FC0: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x00234FC4: bne         $v0, $s2, L_002350C4
    if (ctx->r2 != ctx->r18) {
        // 0x00234FC8: andi        $v0, $v1, 0x2
        ctx->r2 = ctx->r3 & 0X2;
            goto L_002350C4;
    }
    // 0x00234FC8: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x00234FCC: beq         $v0, $zero, L_00235054
    if (ctx->r2 == 0) {
        // 0x00234FD0: nop
    
            goto L_00235054;
    }
    // 0x00234FD0: nop

    // 0x00234FD4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00234FD8: lw          $v0, 0x6D1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D1C);
    // 0x00234FDC: lwc1        $f1, 0x24($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X24);
    // 0x00234FE0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00234FE4: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x00234FE8: addu        $a1, $v0, $s2
    ctx->r5 = ADD32(ctx->r2, ctx->r18);
    // 0x00234FEC: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00234FF0: nop

    // 0x00234FF4: bc1f        L_00235054
    if (!c1cs) {
        // 0x00234FF8: addiu       $a1, $a1, 0x48
        ctx->r5 = ADD32(ctx->r5, 0X48);
            goto L_00235054;
    }
    // 0x00234FF8: addiu       $a1, $a1, 0x48
    ctx->r5 = ADD32(ctx->r5, 0X48);
    // 0x00234FFC: jal         0x0020D908
    // 0x00235000: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_0020D908(rdram, ctx);
        goto after_6;
    // 0x00235000: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_6:
    // 0x00235004: lw          $v0, 0xF8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XF8);
    // 0x00235008: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x0023500C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00235010: lwc1        $f0, 0x64B0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X64B0);
    // 0x00235014: beq         $v0, $zero, L_00235024
    if (ctx->r2 == 0) {
        // 0x00235018: nop
    
            goto L_00235024;
    }
    // 0x00235018: nop

    // 0x0023501C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00235020: lwc1        $f0, 0x64B4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X64B4);
L_00235024:
    // 0x00235024: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x00235028: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0023502C: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x00235030: jal         0x0021034C
    // 0x00235034: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    func_0021034C(rdram, ctx);
        goto after_7;
    // 0x00235034: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    after_7:
    // 0x00235038: jal         0x0020F7EC
    // 0x0023503C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_0020F7EC(rdram, ctx);
        goto after_8;
    // 0x0023503C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_8:
    // 0x00235040: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x00235044: addiu       $a0, $a0, 0x2B8
    ctx->r4 = ADD32(ctx->r4, 0X2B8);
    // 0x00235048: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0023504C: jal         0x002333C0
    // 0x00235050: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    func_002333C0(rdram, ctx);
        goto after_9;
    // 0x00235050: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    after_9:
L_00235054:
    // 0x00235054: lw          $v1, 0x1C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X1C);
    // 0x00235058: beq         $v1, $zero, L_002350A4
    if (ctx->r3 == 0) {
        // 0x0023505C: nop
    
            goto L_002350A4;
    }
    // 0x0023505C: nop

    // 0x00235060: lw          $v0, 0x3C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X3C);
    // 0x00235064: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00235068: beq         $v0, $zero, L_00235080
    if (ctx->r2 == 0) {
        // 0x0023506C: nop
    
            goto L_00235080;
    }
    // 0x0023506C: nop

    // 0x00235070: lbu         $v0, 0x10F($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X10F);
    // 0x00235074: beq         $v0, $zero, L_00235080
    if (ctx->r2 == 0) {
        // 0x00235078: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_00235080;
    }
    // 0x00235078: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0023507C: sb          $v0, 0x10F($v1)
    MEM_B(0X10F, ctx->r3) = ctx->r2;
L_00235080:
    // 0x00235080: lw          $v0, 0x3C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X3C);
    // 0x00235084: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x00235088: beq         $v0, $zero, L_002350A4
    if (ctx->r2 == 0) {
        // 0x0023508C: nop
    
            goto L_002350A4;
    }
    // 0x0023508C: nop

    // 0x00235090: lw          $v1, 0x1C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X1C);
    // 0x00235094: lbu         $v0, 0x1B5($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X1B5);
    // 0x00235098: beq         $v0, $zero, L_002350A4
    if (ctx->r2 == 0) {
        // 0x0023509C: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_002350A4;
    }
    // 0x0023509C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x002350A0: sb          $v0, 0x1B5($v1)
    MEM_B(0X1B5, ctx->r3) = ctx->r2;
L_002350A4:
    // 0x002350A4: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x002350A8: lwc1        $f0, 0x24($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X24);
    // 0x002350AC: sw          $zero, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = 0;
    // 0x002350B0: lwc1        $f1, 0x4($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X4);
    // 0x002350B4: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x002350B8: nop

    // 0x002350BC: bc1tl       L_002350C4
    if (c1cs) {
        // 0x002350C0: swc1        $f1, 0x24($s1)
        MEM_W(0X24, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
            goto L_002350C4;
    }
    goto skip_1;
    // 0x002350C0: swc1        $f1, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    skip_1:
L_002350C4:
    // 0x002350C4: lw          $s1, 0x4($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X4);
    // 0x002350C8: bne         $s1, $zero, L_00234E70
    if (ctx->r17 != 0) {
        // 0x002350CC: nop
    
            goto L_00234E70;
    }
    // 0x002350CC: nop

L_002350D0:
    // 0x002350D0: lw          $ra, 0x60($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X60);
    // 0x002350D4: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x002350D8: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x002350DC: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x002350E0: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x002350E4: jr          $ra
    // 0x002350E8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x002350E8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_00285748(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00285748: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0028574C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00285750: lw          $v0, 0xB4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB4);
    // 0x00285754: andi        $v0, $v0, 0x4000
    ctx->r2 = ctx->r2 & 0X4000;
    // 0x00285758: beq         $v0, $zero, L_0028577C
    if (ctx->r2 == 0) {
        // 0x0028575C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0028577C;
    }
    // 0x0028575C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00285760: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00285764: lw          $v0, 0x6CF8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6CF8);
    // 0x00285768: beq         $v0, $zero, L_0028577C
    if (ctx->r2 == 0) {
        // 0x0028576C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0028577C;
    }
    // 0x0028576C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00285770: jal         0x00275624
    // 0x00285774: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    func_00275624(rdram, ctx);
        goto after_0;
    // 0x00285774: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    after_0:
    // 0x00285778: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0028577C:
    // 0x0028577C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00285780: jr          $ra
    // 0x00285784: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00285784: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00211DB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00211DB0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00211DB4: lwc1        $f0, 0x56D0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X56D0);
    // 0x00211DB8: mtc1        $a1, $f8
    ctx->f8.u32l = ctx->r5;
    // 0x00211DBC: mul.s       $f1, $f8, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x00211DC0: mtc1        $a2, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r6;
    // 0x00211DC4: mtc1        $a3, $f6
    ctx->f6.u32l = ctx->r7;
    // 0x00211DC8: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x00211DCC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00211DD0: div.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = DIV_S(ctx->f1.fl, ctx->f2.fl);
    // 0x00211DD4: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00211DD8: nop

    // 0x00211DDC: bc1f        L_00211DF4
    if (!c1cs) {
        // 0x00211DE0: addiu       $sp, $sp, -0x10
        ctx->r29 = ADD32(ctx->r29, -0X10);
            goto L_00211DF4;
    }
    // 0x00211DE0: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x00211DE4: trunc.w.s   $f8, $f1
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 1);
    ctx->f8.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00211DE8: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x00211DEC: j           L_00211E18
    // 0x00211DF0: nop

        goto L_00211E18;
    // 0x00211DF0: nop

L_00211DF4:
    // 0x00211DF4: trunc.w.s   $f8, $f1
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 1);
    ctx->f8.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00211DF8: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x00211DFC: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00211E00: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00211E04: c.eq.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl == ctx->f1.fl;
    // 0x00211E08: nop

    // 0x00211E0C: bc1tl       L_00211E24
    if (c1cs) {
        // 0x00211E10: sub.s       $f0, $f1, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
            goto L_00211E24;
    }
    goto skip_0;
    // 0x00211E10: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    skip_0:
    // 0x00211E14: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_00211E18:
    // 0x00211E18: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00211E1C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00211E20: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
L_00211E24:
    // 0x00211E24: mul.s       $f1, $f0, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00211E28: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00211E2C: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00211E30: nop

    // 0x00211E34: bc1f        L_00211E4C
    if (!c1cs) {
        // 0x00211E38: nop
    
            goto L_00211E4C;
    }
    // 0x00211E38: nop

    // 0x00211E3C: trunc.w.s   $f8, $f1
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 1);
    ctx->f8.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00211E40: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x00211E44: j           L_00211E74
    // 0x00211E48: nop

        goto L_00211E74;
    // 0x00211E48: nop

L_00211E4C:
    // 0x00211E4C: trunc.w.s   $f8, $f1
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 1);
    ctx->f8.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00211E50: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x00211E54: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00211E58: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00211E5C: c.eq.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl == ctx->f1.fl;
    // 0x00211E60: nop

    // 0x00211E64: bc1f        L_00211E70
    if (!c1cs) {
        // 0x00211E68: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_00211E70;
    }
    // 0x00211E68: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00211E6C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_00211E70:
    // 0x00211E70: subu        $v1, $v0, $v1
    ctx->r3 = SUB32(ctx->r2, ctx->r3);
L_00211E74:
    // 0x00211E74: mtc1        $v1, $f0
    ctx->f0.u32l = ctx->r3;
    // 0x00211E78: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00211E7C: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00211E80: mul.s       $f2, $f7, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f7.fl, ctx->f0.fl);
    // 0x00211E84: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00211E88: lwc1        $f3, 0x56D4($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X56D4);
    // 0x00211E8C: sub.s       $f1, $f3, $f7
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f1.fl = ctx->f3.fl - ctx->f7.fl;
    // 0x00211E90: mul.s       $f4, $f6, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f1.fl);
    // 0x00211E94: sub.s       $f0, $f3, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f3.fl - ctx->f0.fl;
    // 0x00211E98: mul.s       $f0, $f7, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f7.fl, ctx->f0.fl);
    // 0x00211E9C: sub.s       $f2, $f3, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = ctx->f3.fl - ctx->f2.fl;
    // 0x00211EA0: mul.s       $f5, $f6, $f2
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f5.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x00211EA4: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x00211EA8: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00211EAC: sub.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f3.fl - ctx->f0.fl;
    // 0x00211EB0: mov.s       $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.fl = ctx->f1.fl;
    // 0x00211EB4: mul.s       $f3, $f6, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = MUL_S(ctx->f6.fl, ctx->f3.fl);
    // 0x00211EB8: beq         $v0, $zero, L_00211F34
    if (ctx->r2 == 0) {
        // 0x00211EBC: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_00211F34;
    }
    // 0x00211EBC: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    // 0x00211EC0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00211EC4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00211EC8: addu        $at, $at, $v0
    gpr jr_addend_00211ED0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00211ECC: lw          $v0, 0x56D8($at)
    ctx->r2 = ADD32(ctx->r1, 0X56D8);
    // 0x00211ED0: jr          $v0
    // 0x00211ED4: nop

    switch (jr_addend_00211ED0 >> 2) {
        case 0: goto L_00211ED8; break;
        case 1: goto L_00211EE8; break;
        case 2: goto L_00211EF8; break;
        case 3: goto L_00211F08; break;
        case 4: goto L_00211F18; break;
        case 5: goto L_00211F28; break;
        default: switch_error(__func__, 0x00211ED0, 0x800A56D8);
    }
    // 0x00211ED4: nop

L_00211ED8:
    // 0x00211ED8: mov.s       $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = ctx->f6.fl;
    // 0x00211EDC: mov.s       $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    ctx->f1.fl = ctx->f3.fl;
    // 0x00211EE0: j           L_00211F34
    // 0x00211EE4: mov.s       $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = ctx->f4.fl;
        goto L_00211F34;
    // 0x00211EE4: mov.s       $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = ctx->f4.fl;
L_00211EE8:
    // 0x00211EE8: mov.s       $f2, $f5
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    ctx->f2.fl = ctx->f5.fl;
    // 0x00211EEC: mov.s       $f1, $f6
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 6);
    ctx->f1.fl = ctx->f6.fl;
    // 0x00211EF0: j           L_00211F34
    // 0x00211EF4: mov.s       $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = ctx->f4.fl;
        goto L_00211F34;
    // 0x00211EF4: mov.s       $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = ctx->f4.fl;
L_00211EF8:
    // 0x00211EF8: mov.s       $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = ctx->f4.fl;
    // 0x00211EFC: mov.s       $f1, $f6
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 6);
    ctx->f1.fl = ctx->f6.fl;
    // 0x00211F00: j           L_00211F34
    // 0x00211F04: mov.s       $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    ctx->f0.fl = ctx->f3.fl;
        goto L_00211F34;
    // 0x00211F04: mov.s       $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    ctx->f0.fl = ctx->f3.fl;
L_00211F08:
    // 0x00211F08: mov.s       $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = ctx->f4.fl;
    // 0x00211F0C: mov.s       $f1, $f5
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 5);
    ctx->f1.fl = ctx->f5.fl;
    // 0x00211F10: j           L_00211F34
    // 0x00211F14: mov.s       $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = ctx->f6.fl;
        goto L_00211F34;
    // 0x00211F14: mov.s       $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = ctx->f6.fl;
L_00211F18:
    // 0x00211F18: mov.s       $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    ctx->f2.fl = ctx->f3.fl;
    // 0x00211F1C: mov.s       $f1, $f4
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    ctx->f1.fl = ctx->f4.fl;
    // 0x00211F20: j           L_00211F34
    // 0x00211F24: mov.s       $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = ctx->f6.fl;
        goto L_00211F34;
    // 0x00211F24: mov.s       $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = ctx->f6.fl;
L_00211F28:
    // 0x00211F28: mov.s       $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = ctx->f6.fl;
    // 0x00211F2C: mov.s       $f1, $f4
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    ctx->f1.fl = ctx->f4.fl;
    // 0x00211F30: mov.s       $f0, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    ctx->f0.fl = ctx->f5.fl;
L_00211F34:
    // 0x00211F34: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x00211F38: swc1        $f2, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f2.u32l;
    // 0x00211F3C: swc1        $f1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00211F40: swc1        $f0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f0.u32l;
    // 0x00211F44: lw          $t0, 0x0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X0);
    // 0x00211F48: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x00211F4C: lw          $t2, 0x8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8);
    // 0x00211F50: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x00211F54: sw          $t1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r9;
    // 0x00211F58: sw          $t2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r10;
    // 0x00211F5C: jr          $ra
    // 0x00211F60: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x00211F60: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_002291C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002291C0: sb          $a1, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r5;
    // 0x002291C4: sb          $a2, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r6;
    // 0x002291C8: sb          $a3, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r7;
    // 0x002291CC: jr          $ra
    // 0x002291D0: nop

    return;
    // 0x002291D0: nop

;}
RECOMP_FUNC void func_004233E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004233E8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x004233EC: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x004233F0: lw          $v1, 0x990($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X990);
    // 0x004233F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004233F8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004233FC: sw          $v0, 0x980($at)
    MEM_W(0X980, ctx->r1) = ctx->r2;
    // 0x00423400: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00423404: addiu       $v0, $v0, -0x675C
    ctx->r2 = ADD32(ctx->r2, -0X675C);
    // 0x00423408: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x0042340C: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x00423410: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x00423414: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00423418: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
    // 0x0042341C: beq         $v1, $zero, L_00423434
    if (ctx->r3 == 0) {
        // 0x00423420: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_00423434;
    }
    // 0x00423420: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00423424: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00423428: lw          $v0, 0x2028($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2028);
    // 0x0042342C: j           L_00423444
    // 0x00423430: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
        goto L_00423444;
    // 0x00423430: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
L_00423434:
    // 0x00423434: lw          $v0, 0x20($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X20);
    // 0x00423438: lw          $a2, 0x1C($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X1C);
    // 0x0042343C: lb          $v0, 0x4($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4);
    // 0x00423440: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
L_00423444:
    // 0x00423444: lw          $a0, 0x51C($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X51C);
    // 0x00423448: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0042344C: addiu       $a1, $a1, -0x4370
    ctx->r5 = ADD32(ctx->r5, -0X4370);
    // 0x00423450: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00423454: lw          $a3, 0xA50($a2)
    ctx->r7 = MEM_W(ctx->r6, 0XA50);
    // 0x00423458: jal         0x00416644
    // 0x0042345C: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    func_00416644(rdram, ctx);
        goto after_0;
    // 0x0042345C: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    after_0:
    // 0x00423460: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00423464: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00423468: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0042346C: sw          $zero, 0x998($at)
    MEM_W(0X998, ctx->r1) = 0;
    // 0x00423470: jr          $ra
    // 0x00423474: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00423474: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_004656BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004656BC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x004656C0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x004656C4: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x004656C8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x004656CC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x004656D0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x004656D4: jal         0x002842C8
    // 0x004656D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_002842C8(rdram, ctx);
        goto after_0;
    // 0x004656D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x004656DC: lw          $s2, 0x1168($s3)
    ctx->r18 = MEM_W(ctx->r19, 0X1168);
    // 0x004656E0: blez        $s2, L_0046570C
    if (SIGNED(ctx->r18) <= 0) {
        // 0x004656E4: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0046570C;
    }
    // 0x004656E4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x004656E8: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
L_004656EC:
    // 0x004656EC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x004656F0: lw          $a1, 0x1178($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X1178);
    // 0x004656F4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x004656F8: jal         0x00220BF0
    // 0x004656FC: addu        $a1, $a1, $s1
    ctx->r5 = ADD32(ctx->r5, ctx->r17);
    func_00220BF0(rdram, ctx);
        goto after_1;
    // 0x004656FC: addu        $a1, $a1, $s1
    ctx->r5 = ADD32(ctx->r5, ctx->r17);
    after_1:
    // 0x00465700: slt         $v0, $s0, $s2
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x00465704: bne         $v0, $zero, L_004656EC
    if (ctx->r2 != 0) {
        // 0x00465708: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_004656EC;
    }
    // 0x00465708: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
L_0046570C:
    // 0x0046570C: lw          $s2, 0x116C($s3)
    ctx->r18 = MEM_W(ctx->r19, 0X116C);
    // 0x00465710: blez        $s2, L_0046573C
    if (SIGNED(ctx->r18) <= 0) {
        // 0x00465714: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0046573C;
    }
    // 0x00465714: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00465718: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
L_0046571C:
    // 0x0046571C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00465720: lw          $a1, 0x117C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X117C);
    // 0x00465724: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00465728: jal         0x00220BF0
    // 0x0046572C: addu        $a1, $a1, $s1
    ctx->r5 = ADD32(ctx->r5, ctx->r17);
    func_00220BF0(rdram, ctx);
        goto after_2;
    // 0x0046572C: addu        $a1, $a1, $s1
    ctx->r5 = ADD32(ctx->r5, ctx->r17);
    after_2:
    // 0x00465730: slt         $v0, $s0, $s2
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x00465734: bne         $v0, $zero, L_0046571C
    if (ctx->r2 != 0) {
        // 0x00465738: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_0046571C;
    }
    // 0x00465738: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
L_0046573C:
    // 0x0046573C: jal         0x002842B4
    // 0x00465740: nop

    func_002842B4(rdram, ctx);
        goto after_3;
    // 0x00465740: nop

    after_3:
    // 0x00465744: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00465748: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0046574C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00465750: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00465754: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00465758: jr          $ra
    // 0x0046575C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0046575C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00266540(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00266540: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00266544: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x00266548: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0026654C: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00266550: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00266554: lhu         $a1, 0xA($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0XA);
    // 0x00266558: lhu         $a2, 0x4($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X4);
    // 0x0026655C: jal         0x002245BC
    // 0x00266560: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_002245BC(rdram, ctx);
        goto after_0;
    // 0x00266560: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x00266564: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00266568: jr          $ra
    // 0x0026656C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0026656C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0045302C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041A08C:
    // 0x0045302C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00453030: lw          $v0, 0x1F78($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1F78);
    // 0x00453034: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00453038: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0045303C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00453040: bne         $v0, $zero, L_00453058
    if (ctx->r2 != 0) {
        // 0x00453044: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_00453058;
    }
    // 0x00453044: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00453048: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045304C: addiu       $v0, $v0, 0x6600
    ctx->r2 = ADD32(ctx->r2, 0X6600);
    // 0x00453050: j           L_0041A08C
    // 0x00453054: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    entry_0041A08C(rdram, ctx);
    return;
    // 0x00453054: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
L_00453058:
    // 0x00453058: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0045305C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00453060: addiu       $v0, $v0, 0x6618
    ctx->r2 = ADD32(ctx->r2, 0X6618);
    // 0x00453064: jal         0x004160F0
    // 0x00453068: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x00453068: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    after_0:
    // 0x0045306C: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x00453070: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00453074: addiu       $a1, $a1, 0x1040
    ctx->r5 = ADD32(ctx->r5, 0X1040);
    // 0x00453078: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x0045307C: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x00453080: lw          $a2, 0x1F78($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X1F78);
    // 0x00453084: jal         0x0029E3E0
    // 0x00453088: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_1;
    // 0x00453088: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_1:
    // 0x0045308C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00453090: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00453094: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00453098: jr          $ra
    // 0x0045309C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0045309C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0044BF88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00412FEC:
    // 0x0044BF88: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0044BF8C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0044BF90: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0044BF94: addiu       $v0, $v0, 0x7078
    ctx->r2 = ADD32(ctx->r2, 0X7078);
    // 0x0044BF98: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x0044BF9C: lw          $a0, 0x60($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X60);
    // 0x0044BFA0: lw          $a1, 0x24($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X24);
    // 0x0044BFA4: jal         0x0020185C
    // 0x0044BFA8: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    func_0020185C(rdram, ctx);
        goto after_0;
    // 0x0044BFA8: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x0044BFAC: beq         $v0, $zero, L_0044BFE8
    if (ctx->r2 == 0) {
        // 0x0044BFB0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0044BFE8;
    }
    // 0x0044BFB0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0044BFB4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0044BFB8: addiu       $a3, $zero, 0x13
    ctx->r7 = ADD32(0, 0X13);
    // 0x0044BFBC: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x0044BFC0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0044BFC4: addiu       $v0, $v0, 0x970
    ctx->r2 = ADD32(ctx->r2, 0X970);
    // 0x0044BFC8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0044BFCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0044BFD0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0044BFD4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0044BFD8: jal         0x0020367C
    // 0x0044BFDC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_0020367C(rdram, ctx);
        goto after_1;
    // 0x0044BFDC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x0044BFE0: j           L_00412FEC
    // 0x0044BFE4: nop

    entry_00412FEC(rdram, ctx);
    return;
    // 0x0044BFE4: nop

L_0044BFE8:
    // 0x0044BFE8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0044BFEC: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x0044BFF0: jr          $ra
    // 0x0044BFF4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0044BFF4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0028591C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028591C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00285920: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00285924: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00285928: jal         0x00285A54
    // 0x0028592C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_00285A54(rdram, ctx);
        goto after_0;
    // 0x0028592C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x00285930: beq         $v0, $zero, L_0028594C
    if (ctx->r2 == 0) {
        // 0x00285934: sll         $v0, $s0, 2
        ctx->r2 = S32(ctx->r16 << 2);
            goto L_0028594C;
    }
    // 0x00285934: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x00285938: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0028593C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00285940: lw          $v0, 0x6788($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6788);
    // 0x00285944: j           L_00285950
    // 0x00285948: nop

        goto L_00285950;
    // 0x00285948: nop

L_0028594C:
    // 0x0028594C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00285950:
    // 0x00285950: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00285954: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00285958: jr          $ra
    // 0x0028595C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0028595C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0025627C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025627C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00256280: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00256284: jal         0x00251698
    // 0x00256288: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    func_00251698(rdram, ctx);
        goto after_0;
    // 0x00256288: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    after_0:
    // 0x0025628C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00256290: jr          $ra
    // 0x00256294: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00256294: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_004076B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004076B0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x004076B4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x004076B8: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x004076BC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x004076C0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x004076C4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x004076C8: lb          $v0, 0xC7($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XC7);
    // 0x004076CC: beq         $v0, $zero, L_00407794
    if (ctx->r2 == 0) {
        // 0x004076D0: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_00407794;
    }
    // 0x004076D0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x004076D4: lwc1        $f1, 0x8($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X8);
    // 0x004076D8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004076DC: lwc1        $f0, 0x538($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X538);
    // 0x004076E0: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x004076E4: nop

    // 0x004076E8: bc1f        L_00407794
    if (!c1cs) {
        // 0x004076EC: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00407794;
    }
    // 0x004076EC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x004076F0: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x004076F4: addiu       $s0, $s0, -0x5FC
    ctx->r16 = ADD32(ctx->r16, -0X5FC);
    // 0x004076F8: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x004076FC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00407700: sb          $zero, -0x32($s0)
    MEM_B(-0X32, ctx->r16) = 0;
    // 0x00407704: sw          $v0, -0x28($s0)
    MEM_W(-0X28, ctx->r16) = ctx->r2;
    // 0x00407708: lwc1        $f0, 0x4($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X4);
    // 0x0040770C: mul.s       $f1, $f0, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00407710: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00407714: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x00407718: lwc1        $f0, 0xC($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XC);
    // 0x0040771C: mul.s       $f12, $f0, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00407720: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    // 0x00407724: jal         0x00298470
    // 0x00407728: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_00298470(rdram, ctx);
        goto after_0;
    // 0x00407728: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x0040772C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00407730: lwc1        $f1, 0x53C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X53C);
    // 0x00407734: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00407738: nop

    // 0x0040773C: bc1f        L_0040776C
    if (!c1cs) {
        // 0x00407740: addiu       $a1, $zero, -0x301
        ctx->r5 = ADD32(0, -0X301);
            goto L_0040776C;
    }
    // 0x00407740: addiu       $a1, $zero, -0x301
    ctx->r5 = ADD32(0, -0X301);
    // 0x00407744: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00407748: addiu       $a0, $a0, 0x1C40
    ctx->r4 = ADD32(ctx->r4, 0X1C40);
    // 0x0040774C: lui         $a2, 0x800F
    ctx->r6 = S32(0X800F << 16);
    // 0x00407750: addiu       $a2, $a2, 0x1F50
    ctx->r6 = ADD32(ctx->r6, 0X1F50);
    // 0x00407754: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00407758: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x0040775C: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x00407760: and         $v1, $v1, $a1
    ctx->r3 = ctx->r3 & ctx->r5;
    // 0x00407764: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00407768: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
L_0040776C:
    // 0x0040776C: lbu         $v0, -0x33($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0X33);
    // 0x00407770: bne         $v0, $zero, L_00407784
    if (ctx->r2 != 0) {
        // 0x00407774: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00407784;
    }
    // 0x00407774: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00407778: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0040777C: j           L_0040778C
    // 0x00407780: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
        goto L_0040778C;
    // 0x00407780: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
L_00407784:
    // 0x00407784: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00407788: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
L_0040778C:
    // 0x0040778C: jal         0x00243414
    // 0x00407790: nop

    func_00243414(rdram, ctx);
        goto after_1;
    // 0x00407790: nop

    after_1:
L_00407794:
    // 0x00407794: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x00407798: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0040779C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x004077A0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x004077A4: jr          $ra
    // 0x004077A8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x004077A8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0040CCC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040CCC0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0040CCC4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x0040CCC8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0040CCCC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0040CCD0: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x0040CCD4: addiu       $s0, $s0, 0x7078
    ctx->r16 = ADD32(ctx->r16, 0X7078);
    // 0x0040CCD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0040CCDC: addiu       $a1, $zero, 0x454
    ctx->r5 = ADD32(0, 0X454);
    // 0x0040CCE0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0040CCE4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x0040CCE8: addiu       $v0, $s2, 0x8
    ctx->r2 = ADD32(ctx->r18, 0X8);
    // 0x0040CCEC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0040CCF0: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
    // 0x0040CCF4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0040CCF8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0040CCFC: jal         0x00225F6C
    // 0x0040CD00: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_00225F6C(rdram, ctx);
        goto after_0;
    // 0x0040CD00: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x0040CD04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0040CD08: addiu       $a1, $zero, 0x455
    ctx->r5 = ADD32(0, 0X455);
    // 0x0040CD0C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0040CD10: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x0040CD14: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    // 0x0040CD18: addiu       $v0, $s2, 0x1C
    ctx->r2 = ADD32(ctx->r18, 0X1C);
    // 0x0040CD1C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0040CD20: jal         0x00225F6C
    // 0x0040CD24: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_00225F6C(rdram, ctx);
        goto after_1;
    // 0x0040CD24: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_1:
    // 0x0040CD28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0040CD2C: addiu       $a1, $zero, 0x456
    ctx->r5 = ADD32(0, 0X456);
    // 0x0040CD30: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0040CD34: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x0040CD38: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x0040CD3C: addiu       $v0, $s2, 0x30
    ctx->r2 = ADD32(ctx->r18, 0X30);
    // 0x0040CD40: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0040CD44: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0040CD48: jal         0x00225F6C
    // 0x0040CD4C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_00225F6C(rdram, ctx);
        goto after_2;
    // 0x0040CD4C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_2:
    // 0x0040CD50: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x0040CD54: sw          $v0, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->r2;
    // 0x0040CD58: addiu       $v0, $zero, 0x3200
    ctx->r2 = ADD32(0, 0X3200);
    // 0x0040CD5C: sw          $zero, 0x4EC($s2)
    MEM_W(0X4EC, ctx->r18) = 0;
    // 0x0040CD60: sw          $v0, 0x148($v1)
    MEM_W(0X148, ctx->r3) = ctx->r2;
    // 0x0040CD64: sw          $v0, 0x144($v1)
    MEM_W(0X144, ctx->r3) = ctx->r2;
    // 0x0040CD68: lw          $v0, 0x4EC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4EC);
    // 0x0040CD6C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0040CD70: sw          $v0, 0x254($v1)
    MEM_W(0X254, ctx->r3) = ctx->r2;
    // 0x0040CD74: lw          $v1, 0x4($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4);
    // 0x0040CD78: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0040CD7C: blez        $v1, L_0040CDC0
    if (SIGNED(ctx->r3) <= 0) {
        // 0x0040CD80: sw          $v0, 0x4EC($s2)
        MEM_W(0X4EC, ctx->r18) = ctx->r2;
            goto L_0040CDC0;
    }
    // 0x0040CD80: sw          $v0, 0x4EC($s2)
    MEM_W(0X4EC, ctx->r18) = ctx->r2;
    // 0x0040CD84: addiu       $a1, $zero, 0x6400
    ctx->r5 = ADD32(0, 0X6400);
    // 0x0040CD88: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_0040CD8C:
    // 0x0040CD8C: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x0040CD90: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x0040CD94: sw          $zero, 0x144($v1)
    MEM_W(0X144, ctx->r3) = 0;
    // 0x0040CD98: sw          $a1, 0x148($v1)
    MEM_W(0X148, ctx->r3) = ctx->r5;
    // 0x0040CD9C: sw          $s0, 0x250($v1)
    MEM_W(0X250, ctx->r3) = ctx->r16;
    // 0x0040CDA0: lw          $v0, 0x4EC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4EC);
    // 0x0040CDA4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0040CDA8: sw          $v0, 0x254($v1)
    MEM_W(0X254, ctx->r3) = ctx->r2;
    // 0x0040CDAC: lw          $v1, 0x4($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4);
    // 0x0040CDB0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0040CDB4: slt         $v1, $s0, $v1
    ctx->r3 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x0040CDB8: bne         $v1, $zero, L_0040CD8C
    if (ctx->r3 != 0) {
        // 0x0040CDBC: sw          $v0, 0x4EC($s2)
        MEM_W(0X4EC, ctx->r18) = ctx->r2;
            goto L_0040CD8C;
    }
    // 0x0040CDBC: sw          $v0, 0x4EC($s2)
    MEM_W(0X4EC, ctx->r18) = ctx->r2;
L_0040CDC0:
    // 0x0040CDC0: lw          $v0, 0x18($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X18);
    // 0x0040CDC4: blez        $v0, L_0040CE08
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040CDC8: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0040CE08;
    }
    // 0x0040CDC8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0040CDCC: addiu       $a1, $zero, 0x5000
    ctx->r5 = ADD32(0, 0X5000);
    // 0x0040CDD0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_0040CDD4:
    // 0x0040CDD4: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x0040CDD8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x0040CDDC: sw          $zero, 0x144($v1)
    MEM_W(0X144, ctx->r3) = 0;
    // 0x0040CDE0: sw          $a1, 0x148($v1)
    MEM_W(0X148, ctx->r3) = ctx->r5;
    // 0x0040CDE4: sw          $s0, 0x250($v1)
    MEM_W(0X250, ctx->r3) = ctx->r16;
    // 0x0040CDE8: lw          $v0, 0x4EC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4EC);
    // 0x0040CDEC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0040CDF0: sw          $v0, 0x254($v1)
    MEM_W(0X254, ctx->r3) = ctx->r2;
    // 0x0040CDF4: lw          $v1, 0x18($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X18);
    // 0x0040CDF8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0040CDFC: slt         $v1, $s0, $v1
    ctx->r3 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x0040CE00: bne         $v1, $zero, L_0040CDD4
    if (ctx->r3 != 0) {
        // 0x0040CE04: sw          $v0, 0x4EC($s2)
        MEM_W(0X4EC, ctx->r18) = ctx->r2;
            goto L_0040CDD4;
    }
    // 0x0040CE04: sw          $v0, 0x4EC($s2)
    MEM_W(0X4EC, ctx->r18) = ctx->r2;
L_0040CE08:
    // 0x0040CE08: lw          $v0, 0x2C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X2C);
    // 0x0040CE0C: blez        $v0, L_0040CE50
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040CE10: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0040CE50;
    }
    // 0x0040CE10: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0040CE14: addiu       $a1, $zero, 0x6400
    ctx->r5 = ADD32(0, 0X6400);
    // 0x0040CE18: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_0040CE1C:
    // 0x0040CE1C: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x0040CE20: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x0040CE24: sw          $zero, 0x144($v1)
    MEM_W(0X144, ctx->r3) = 0;
    // 0x0040CE28: sw          $a1, 0x148($v1)
    MEM_W(0X148, ctx->r3) = ctx->r5;
    // 0x0040CE2C: sw          $s0, 0x250($v1)
    MEM_W(0X250, ctx->r3) = ctx->r16;
    // 0x0040CE30: lw          $v0, 0x4EC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4EC);
    // 0x0040CE34: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0040CE38: sw          $v0, 0x254($v1)
    MEM_W(0X254, ctx->r3) = ctx->r2;
    // 0x0040CE3C: lw          $v1, 0x2C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X2C);
    // 0x0040CE40: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0040CE44: slt         $v1, $s0, $v1
    ctx->r3 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x0040CE48: bne         $v1, $zero, L_0040CE1C
    if (ctx->r3 != 0) {
        // 0x0040CE4C: sw          $v0, 0x4EC($s2)
        MEM_W(0X4EC, ctx->r18) = ctx->r2;
            goto L_0040CE1C;
    }
    // 0x0040CE4C: sw          $v0, 0x4EC($s2)
    MEM_W(0X4EC, ctx->r18) = ctx->r2;
L_0040CE50:
    // 0x0040CE50: lw          $v0, 0x4EC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4EC);
    // 0x0040CE54: blez        $v0, L_0040CE80
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040CE58: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0040CE80;
    }
    // 0x0040CE58: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0040CE5C: addiu       $s1, $zero, 0x3C
    ctx->r17 = ADD32(0, 0X3C);
L_0040CE60:
    // 0x0040CE60: addu        $a0, $s2, $s1
    ctx->r4 = ADD32(ctx->r18, ctx->r17);
    // 0x0040CE64: jal         0x002362E4
    // 0x0040CE68: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002362E4(rdram, ctx);
        goto after_3;
    // 0x0040CE68: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x0040CE6C: lw          $v0, 0x4EC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4EC);
    // 0x0040CE70: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0040CE74: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0040CE78: bne         $v0, $zero, L_0040CE60
    if (ctx->r2 != 0) {
        // 0x0040CE7C: addiu       $s1, $s1, 0x64
        ctx->r17 = ADD32(ctx->r17, 0X64);
            goto L_0040CE60;
    }
    // 0x0040CE7C: addiu       $s1, $s1, 0x64
    ctx->r17 = ADD32(ctx->r17, 0X64);
L_0040CE80:
    // 0x0040CE80: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x0040CE84: addiu       $s0, $s0, 0x7078
    ctx->r16 = ADD32(ctx->r16, 0X7078);
    // 0x0040CE88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0040CE8C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0040CE90: jal         0x00225EBC
    // 0x0040CE94: addiu       $a2, $zero, 0x1CE9
    ctx->r6 = ADD32(0, 0X1CE9);
    func_00225EBC(rdram, ctx);
        goto after_4;
    // 0x0040CE94: addiu       $a2, $zero, 0x1CE9
    ctx->r6 = ADD32(0, 0X1CE9);
    after_4:
    // 0x0040CE98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0040CE9C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0040CEA0: addiu       $a2, $zero, 0x1CEA
    ctx->r6 = ADD32(0, 0X1CEA);
    // 0x0040CEA4: jal         0x00225EBC
    // 0x0040CEA8: sw          $v0, 0x4F0($s2)
    MEM_W(0X4F0, ctx->r18) = ctx->r2;
    func_00225EBC(rdram, ctx);
        goto after_5;
    // 0x0040CEA8: sw          $v0, 0x4F0($s2)
    MEM_W(0X4F0, ctx->r18) = ctx->r2;
    after_5:
    // 0x0040CEAC: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x0040CEB0: addiu       $a0, $a0, 0xF0
    ctx->r4 = ADD32(ctx->r4, 0XF0);
    // 0x0040CEB4: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x0040CEB8: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x0040CEBC: addiu       $a2, $a2, 0x8D4
    ctx->r6 = ADD32(ctx->r6, 0X8D4);
    // 0x0040CEC0: sw          $v0, 0x4F4($s2)
    MEM_W(0X4F4, ctx->r18) = ctx->r2;
    // 0x0040CEC4: sw          $zero, 0x500($s2)
    MEM_W(0X500, ctx->r18) = 0;
    // 0x0040CEC8: sw          $zero, 0x504($s2)
    MEM_W(0X504, ctx->r18) = 0;
    // 0x0040CECC: sw          $zero, 0x508($s2)
    MEM_W(0X508, ctx->r18) = 0;
    // 0x0040CED0: sw          $zero, 0x50C($s2)
    MEM_W(0X50C, ctx->r18) = 0;
    // 0x0040CED4: sw          $zero, 0x510($s2)
    MEM_W(0X510, ctx->r18) = 0;
    // 0x0040CED8: jal         0x0027AD24
    // 0x0040CEDC: sw          $zero, 0x514($s2)
    MEM_W(0X514, ctx->r18) = 0;
    func_0027AD24(rdram, ctx);
        goto after_6;
    // 0x0040CEDC: sw          $zero, 0x514($s2)
    MEM_W(0X514, ctx->r18) = 0;
    after_6:
    // 0x0040CEE0: jal         0x00225D0C
    // 0x0040CEE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00225D0C(rdram, ctx);
        goto after_7;
    // 0x0040CEE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x0040CEE8: lw          $v1, 0x4F8($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4F8);
    // 0x0040CEEC: addiu       $v0, $v1, 0xC
    ctx->r2 = ADD32(ctx->r3, 0XC);
    // 0x0040CEF0: sw          $v0, 0x4F8($s2)
    MEM_W(0X4F8, ctx->r18) = ctx->r2;
    // 0x0040CEF4: lw          $a1, 0xC($v1)
    ctx->r5 = MEM_W(ctx->r3, 0XC);
    // 0x0040CEF8: lw          $v0, 0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4);
    // 0x0040CEFC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0040CF00: sw          $zero, 0x518($s2)
    MEM_W(0X518, ctx->r18) = 0;
    // 0x0040CF04: sw          $zero, 0x530($s2)
    MEM_W(0X530, ctx->r18) = 0;
    // 0x0040CF08: blez        $v0, L_0040CF30
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040CF0C: sw          $zero, 0x548($s2)
        MEM_W(0X548, ctx->r18) = 0;
            goto L_0040CF30;
    }
    // 0x0040CF0C: sw          $zero, 0x548($s2)
    MEM_W(0X548, ctx->r18) = 0;
    // 0x0040CF10: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_0040CF14:
    // 0x0040CF14: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0040CF18: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x0040CF1C: lw          $v0, 0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4);
    // 0x0040CF20: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0040CF24: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0040CF28: bne         $v0, $zero, L_0040CF14
    if (ctx->r2 != 0) {
        // 0x0040CF2C: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_0040CF14;
    }
    // 0x0040CF2C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_0040CF30:
    // 0x0040CF30: lw          $v0, 0x18($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X18);
    // 0x0040CF34: blez        $v0, L_0040CF5C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040CF38: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0040CF5C;
    }
    // 0x0040CF38: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0040CF3C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_0040CF40:
    // 0x0040CF40: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x0040CF44: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x0040CF48: lw          $v0, 0x18($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X18);
    // 0x0040CF4C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0040CF50: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0040CF54: bne         $v0, $zero, L_0040CF40
    if (ctx->r2 != 0) {
        // 0x0040CF58: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_0040CF40;
    }
    // 0x0040CF58: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_0040CF5C:
    // 0x0040CF5C: lw          $v0, 0x2C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X2C);
    // 0x0040CF60: blez        $v0, L_0040CF88
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040CF64: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0040CF88;
    }
    // 0x0040CF64: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0040CF68: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_0040CF6C:
    // 0x0040CF6C: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
    // 0x0040CF70: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x0040CF74: lw          $v0, 0x2C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X2C);
    // 0x0040CF78: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0040CF7C: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0040CF80: bne         $v0, $zero, L_0040CF6C
    if (ctx->r2 != 0) {
        // 0x0040CF84: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_0040CF6C;
    }
    // 0x0040CF84: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_0040CF88:
    // 0x0040CF88: sll         $v0, $a1, 3
    ctx->r2 = S32(ctx->r5 << 3);
    // 0x0040CF8C: sw          $a1, 0x4FC($s2)
    MEM_W(0X4FC, ctx->r18) = ctx->r5;
    // 0x0040CF90: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x0040CF94: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0040CF98: lw          $v0, 0x240C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X240C);
    // 0x0040CF9C: beq         $v0, $zero, L_0040CFAC
    if (ctx->r2 == 0) {
        // 0x0040CFA0: nop
    
            goto L_0040CFAC;
    }
    // 0x0040CFA0: nop

    // 0x0040CFA4: jalr        $v0
    // 0x0040CFA8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_8;
    // 0x0040CFA8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_8:
L_0040CFAC:
    // 0x0040CFAC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0040CFB0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0040CFB4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0040CFB8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0040CFBC: jr          $ra
    // 0x0040CFC0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0040CFC0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0026D5E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026D5E4: lh          $v1, 0x0($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X0);
    // 0x0026D5E8: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x0026D5EC: beq         $v1, $v0, L_0026D620
    if (ctx->r3 == ctx->r2) {
            // 0x0026D5F0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    func_0026D620(rdram, ctx);
    return;
    }
    // 0x0026D5F0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0026D5F4: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x0026D5F8: sh          $a1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r5;
    // 0x0026D5FC: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x0026D600: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0026D604: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x0026D608: sh          $a2, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r6;
    // 0x0026D60C: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x0026D610: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0026D614: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0026D618: jr          $ra
    // 0x0026D61C: sh          $v1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r3;
    return;
    // 0x0026D61C: sh          $v1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_00253D18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00253D18: lwc1        $f1, 0x30($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X30);
    // 0x00253D1C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00253D20: lwc1        $f0, 0x7100($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7100);
    // 0x00253D24: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00253D28: jr          $ra
    // 0x00253D2C: nop

    return;
    // 0x00253D2C: nop

;}
RECOMP_FUNC void func_00201AD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00201AD0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00201AD4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00201AD8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00201ADC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00201AE0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00201AE4: addiu       $a0, $s0, 0x230
    ctx->r4 = ADD32(ctx->r16, 0X230);
    // 0x00201AE8: addiu       $a1, $s0, 0x248
    ctx->r5 = ADD32(ctx->r16, 0X248);
    // 0x00201AEC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00201AF0: jal         0x0029B030
    // 0x00201AF4: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x00201AF4: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    after_0:
    // 0x00201AF8: addiu       $a0, $s0, 0x448
    ctx->r4 = ADD32(ctx->r16, 0X448);
    // 0x00201AFC: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    // 0x00201B00: jal         0x00266C5C
    // 0x00201B04: addiu       $a2, $zero, 0x1000
    ctx->r6 = ADD32(0, 0X1000);
    func_00266C5C(rdram, ctx);
        goto after_1;
    // 0x00201B04: addiu       $a2, $zero, 0x1000
    ctx->r6 = ADD32(0, 0X1000);
    after_1:
    // 0x00201B08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00201B0C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00201B10: lui         $a2, 0x20
    ctx->r6 = S32(0X20 << 16);
    // 0x00201B14: addiu       $a2, $a2, 0x1C60
    ctx->r6 = ADD32(ctx->r6, 0X1C60);
    // 0x00201B18: addiu       $v0, $s0, 0x1448
    ctx->r2 = ADD32(ctx->r16, 0X1448);
    // 0x00201B1C: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00201B20: lw          $v1, 0x6E7C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6E7C);
    // 0x00201B24: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x00201B28: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00201B2C: jal         0x0029B060
    // 0x00201B30: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    osCreateThread_recomp(rdram, ctx);
        goto after_2;
    // 0x00201B30: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    after_2:
    // 0x00201B34: jal         0x0029BB10
    // 0x00201B38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    osStartThread_recomp(rdram, ctx);
        goto after_3;
    // 0x00201B38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x00201B3C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00201B40: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00201B44: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00201B48: jr          $ra
    // 0x00201B4C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00201B4C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00430068(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00430068: lh          $s3, 0x8($s0)
    ctx->r19 = MEM_H(ctx->r16, 0X8);
    // 0x0043006C: addiu       $v0, $zero, 0x4B
    ctx->r2 = ADD32(0, 0X4B);
;}
RECOMP_FUNC void func_00426594(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00426594: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x00426598: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0042659C: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x004265A0: lw          $v0, 0xC60($at)
    ctx->r2 = MEM_W(ctx->r1, 0XC60);
    // 0x004265A4: xori        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 ^ 0X2;
    // 0x004265A8: jr          $ra
    // 0x004265AC: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    return;
    // 0x004265AC: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
;}
RECOMP_FUNC void func_0042C38C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042C38C: lw          $ra, 0x36C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X36C);
    // 0x0042C390: lw          $fp, 0x368($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X368);
    // 0x0042C394: lw          $s7, 0x364($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X364);
    // 0x0042C398: lw          $s6, 0x360($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X360);
    // 0x0042C39C: lw          $s5, 0x35C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X35C);
    // 0x0042C3A0: lw          $s4, 0x358($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X358);
    // 0x0042C3A4: lw          $s3, 0x354($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X354);
    // 0x0042C3A8: lw          $s2, 0x350($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X350);
    // 0x0042C3AC: lw          $s1, 0x34C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34C);
    // 0x0042C3B0: lw          $s0, 0x348($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X348);
    // 0x0042C3B4: jr          $ra
    // 0x0042C3B8: addiu       $sp, $sp, 0x370
    ctx->r29 = ADD32(ctx->r29, 0X370);
    return;
    // 0x0042C3B8: addiu       $sp, $sp, 0x370
    ctx->r29 = ADD32(ctx->r29, 0X370);
;}
RECOMP_FUNC void func_00237FAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00237FAC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00237FB0: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x00237FB4: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x00237FB8: addiu       $v0, $sp, 0x20
    ctx->r2 = ADD32(ctx->r29, 0X20);
    // 0x00237FBC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00237FC0: addiu       $v0, $sp, 0x30
    ctx->r2 = ADD32(ctx->r29, 0X30);
    // 0x00237FC4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x00237FC8: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x00237FCC: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x00237FD0: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x00237FD4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00237FD8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x00237FDC: jal         0x002688C8
    // 0x00237FE0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_002688C8(rdram, ctx);
        goto after_0;
    // 0x00237FE0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x00237FE4: beq         $s0, $zero, L_00238000
    if (ctx->r16 == 0) {
        // 0x00237FE8: nop
    
            goto L_00238000;
    }
    // 0x00237FE8: nop

    // 0x00237FEC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x00237FF0: jal         0x0026C55C
    // 0x00237FF4: nop

    func_0026C55C(rdram, ctx);
        goto after_1;
    // 0x00237FF4: nop

    after_1:
    // 0x00237FF8: j           L_0023800C
    // 0x00237FFC: nop

        goto L_0023800C;
    // 0x00237FFC: nop

L_00238000:
    // 0x00238000: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x00238004: jal         0x0026C590
    // 0x00238008: nop

    func_0026C590(rdram, ctx);
        goto after_2;
    // 0x00238008: nop

    after_2:
L_0023800C:
    // 0x0023800C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x00238010: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x00238014: jr          $ra
    // 0x00238018: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00238018: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00419B1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00419B1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00419B20: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x00419B24: lui         $a2, 0x44
    ctx->r6 = S32(0X44 << 16);
    // 0x00419B28: addiu       $a2, $a2, -0x5DD0
    ctx->r6 = ADD32(ctx->r6, -0X5DD0);
    // 0x00419B2C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00419B30: jal         0x00416894
    // 0x00419B34: nop

    func_00416894(rdram, ctx);
        goto after_0;
    // 0x00419B34: nop

    after_0:
    // 0x00419B38: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00419B3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00419B40: jr          $ra
    // 0x00419B44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00419B44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0041BCD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041BCD8: addu        $v1, $a0, $a1
    ctx->r3 = ADD32(ctx->r4, ctx->r5);
L_0041BCDC:
    // 0x0041BCDC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0041BCE0: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x0041BCE4: lbu         $v0, 0x5E98($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X5E98);
    // 0x0041BCE8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0041BCEC: sb          $v0, 0x33($v1)
    MEM_B(0X33, ctx->r3) = ctx->r2;
    // 0x0041BCF0: slti        $v0, $a1, 0x8
    ctx->r2 = SIGNED(ctx->r5) < 0X8 ? 1 : 0;
    // 0x0041BCF4: bne         $v0, $zero, L_0041BCDC
    if (ctx->r2 != 0) {
        // 0x0041BCF8: addu        $v1, $a0, $a1
        ctx->r3 = ADD32(ctx->r4, ctx->r5);
            goto L_0041BCDC;
    }
    // 0x0041BCF8: addu        $v1, $a0, $a1
    ctx->r3 = ADD32(ctx->r4, ctx->r5);
    // 0x0041BCFC: jr          $ra
    // 0x0041BD00: nop

    return;
    // 0x0041BD00: nop

;}
RECOMP_FUNC void func_0045386C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041A9BC:
    // 0x0045386C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x00453870: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x00453874: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00453878: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x0045387C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00453880: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x00453884: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x00453888: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0045388C: addiu       $a1, $a1, 0x1F84
    ctx->r5 = ADD32(ctx->r5, 0X1F84);
    // 0x00453890: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x00453894: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x00453898: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x0045389C: sdc1        $f21, 0x48($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X48, ctx->r29);
    // 0x004538A0: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x004538A4: lwc1        $f1, 0x0($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X0);
    // 0x004538A8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004538AC: lwc1        $f0, 0x126C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X126C);
    // 0x004538B0: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x004538B4: nop

    // 0x004538B8: bc1f        L_004539CC
    if (!c1cs) {
        // 0x004538BC: addu        $s2, $a3, $zero
        ctx->r18 = ADD32(ctx->r7, 0);
            goto L_004539CC;
    }
    // 0x004538BC: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    // 0x004538C0: lui         $a0, 0xE6C2
    ctx->r4 = S32(0XE6C2 << 16);
    // 0x004538C4: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x004538C8: lw          $v1, 0x2030($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2030);
    // 0x004538CC: ori         $a0, $a0, 0xB449
    ctx->r4 = ctx->r4 | 0XB449;
    // 0x004538D0: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x004538D4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x004538D8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x004538DC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x004538E0: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x004538E4: lwc1        $f2, 0x34($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X34);
    // 0x004538E8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004538EC: lwc1        $f0, 0x1270($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X1270);
    // 0x004538F0: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x004538F4: lwc1        $f1, -0x4($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, -0X4);
    // 0x004538F8: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x004538FC: mfhi        $t0
    ctx->r8 = hi;
    // 0x00453900: addu        $v1, $t0, $v0
    ctx->r3 = ADD32(ctx->r8, ctx->r2);
    // 0x00453904: sra         $v1, $v1, 8
    ctx->r3 = S32(SIGNED(ctx->r3) >> 8);
    // 0x00453908: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x0045390C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x00453910: mtc1        $v1, $f20
    ctx->f20.u32l = ctx->r3;
    // 0x00453914: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x00453918: mul.s       $f1, $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f20.fl);
    // 0x0045391C: lwc1        $f0, 0x14($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X14);
    // 0x00453920: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00453924: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00453928: lwc1        $f1, 0x30($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X30);
    // 0x0045392C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00453930: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00453934: sw          $v0, 0x1BD0($at)
    MEM_W(0X1BD0, ctx->r1) = ctx->r2;
    // 0x00453938: mul.s       $f21, $f1, $f2
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f21.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0045393C: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00453940: mfc1        $s0, $f3
    ctx->r16 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00453944: jal         0x0027AF4C
    // 0x00453948: nop

    func_0027AF4C(rdram, ctx);
        goto after_0;
    // 0x00453948: nop

    after_0:
    // 0x0045394C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x00453950: lw          $v1, 0x20($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X20);
    // 0x00453954: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00453958: lwc1        $f1, 0x1274($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X1274);
    // 0x0045395C: mtc1        $s0, $f0
    ctx->f0.u32l = ctx->r16;
    // 0x00453960: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00453964: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00453968: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0045396C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00453970: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x00453974: add.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f20.fl;
    // 0x00453978: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x0045397C: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00453980: mfc1        $a2, $f3
    ctx->r6 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00453984: c.le.s      $f1, $f21
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f1.fl <= ctx->f21.fl;
    // 0x00453988: nop

    // 0x0045398C: bc1t        L_004539A4
    if (c1cs) {
        // 0x00453990: addiu       $a3, $v1, 0x2
        ctx->r7 = ADD32(ctx->r3, 0X2);
            goto L_004539A4;
    }
    // 0x00453990: addiu       $a3, $v1, 0x2
    ctx->r7 = ADD32(ctx->r3, 0X2);
    // 0x00453994: trunc.w.s   $f3, $f21
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 21);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f21.fl);
    // 0x00453998: mfc1        $a1, $f3
    ctx->r5 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0045399C: j           L_0041A9BC
    // 0x004539A0: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
    entry_0041A9BC(rdram, ctx);
    return;
    // 0x004539A0: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
L_004539A4:
    // 0x004539A4: sub.s       $f0, $f21, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f21.fl - ctx->f1.fl;
    // 0x004539A8: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x004539AC: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x004539B0: mfc1        $a1, $f3
    ctx->r5 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x004539B4: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x004539B8: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
    // 0x004539BC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x004539C0: lw          $a1, 0x20($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X20);
    // 0x004539C4: jal         0x002778A8
    // 0x004539C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002778A8(rdram, ctx);
        goto after_1;
    // 0x004539C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_004539CC:
    // 0x004539CC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x004539D0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x004539D4: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    // 0x004539D8: jal         0x00416168
    // 0x004539DC: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    func_00416168(rdram, ctx);
        goto after_2;
    // 0x004539DC: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    after_2:
    // 0x004539E0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x004539E4: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x004539E8: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x004539EC: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x004539F0: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x004539F4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x004539F8: ldc1        $f21, 0x48($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X48);
    // 0x004539FC: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x00453A00: jr          $ra
    // 0x00453A04: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x00453A04: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_0029B814(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029B814: beq         $v0, $zero, L_0029B824
    if (ctx->r2 == 0) {
        // 0x0029B818: nop
    
            goto L_0029B824;
    }
    // 0x0029B818: nop

    // 0x0029B81C: jal         0x00243414
    // 0x0029B820: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0029B820: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    after_0:
L_0029B824:
    // 0x0029B824: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0029B828: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0029B82C: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x0029B830: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x0029B834: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0029B838: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x0029B83C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x0029B840: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0029B844: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0029B848: jal         0x0029DFF0
    // 0x0029B84C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_0029DFF0(rdram, ctx);
        goto after_1;
    // 0x0029B84C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_1:
    // 0x0029B850: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x0029B854: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x0029B858: slt         $v1, $v1, $a0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x0029B85C: bne         $v1, $zero, L_0029B8A8
    if (ctx->r3 != 0) {
        // 0x0029B860: addu        $s1, $v0, $zero
        ctx->r17 = ADD32(ctx->r2, 0);
            goto L_0029B8A8;
    }
    // 0x0029B860: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0029B864: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x0029B868: addiu       $s2, $zero, 0x8
    ctx->r18 = ADD32(0, 0X8);
L_0029B86C:
    // 0x0029B86C: beq         $s4, $s3, L_0029B884
    if (ctx->r20 == ctx->r19) {
        // 0x0029B870: addiu       $a0, $s0, 0x4
        ctx->r4 = ADD32(ctx->r16, 0X4);
            goto L_0029B884;
    }
    // 0x0029B870: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    // 0x0029B874: jal         0x0029E010
    // 0x0029B878: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0029E010(rdram, ctx);
        goto after_2;
    // 0x0029B878: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x0029B87C: j           L_0029B92C
    // 0x0029B880: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_0029B92C;
    // 0x0029B880: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_0029B884:
    // 0x0029B884: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0029B888: lw          $v0, -0x76E0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X76E0);
    // 0x0029B88C: jal         0x0029C6DC
    // 0x0029B890: sh          $s2, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r18;
    func_0029C6DC(rdram, ctx);
        goto after_3;
    // 0x0029B890: sh          $s2, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r18;
    after_3:
    // 0x0029B894: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x0029B898: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x0029B89C: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x0029B8A0: beq         $v0, $zero, L_0029B86C
    if (ctx->r2 == 0) {
        // 0x0029B8A4: nop
    
            goto L_0029B86C;
    }
    // 0x0029B8A4: nop

L_0029B8A8:
    // 0x0029B8A8: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0029B8AC: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x0029B8B0: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x0029B8B4: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0029B8B8: div         $zero, $v1, $v0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r2)));
    // 0x0029B8BC: bne         $v0, $zero, L_0029B8C8
    if (ctx->r2 != 0) {
        // 0x0029B8C0: nop
    
            goto L_0029B8C8;
    }
    // 0x0029B8C0: nop

    // 0x0029B8C4: break       7
    do_break(2734276);
L_0029B8C8:
    // 0x0029B8C8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x0029B8CC: bne         $v0, $at, L_0029B8E0
    if (ctx->r2 != ctx->r1) {
        // 0x0029B8D0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_0029B8E0;
    }
    // 0x0029B8D0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x0029B8D4: bne         $v1, $at, L_0029B8E0
    if (ctx->r3 != ctx->r1) {
        // 0x0029B8D8: nop
    
            goto L_0029B8E0;
    }
    // 0x0029B8D8: nop

    // 0x0029B8DC: break       6
    do_break(2734300);
L_0029B8E0:
    // 0x0029B8E0: mfhi        $v0
    ctx->r2 = hi;
    // 0x0029B8E4: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x0029B8E8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0029B8EC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0029B8F0: sw          $s5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r21;
    // 0x0029B8F4: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x0029B8F8: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x0029B8FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0029B900: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x0029B904: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0029B908: beq         $v0, $zero, L_0029B920
    if (ctx->r2 == 0) {
        // 0x0029B90C: nop
    
            goto L_0029B920;
    }
    // 0x0029B90C: nop

    // 0x0029B910: jal         0x0029C8C8
    // 0x0029B914: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0029C8C8(rdram, ctx);
        goto after_4;
    // 0x0029B914: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x0029B918: jal         0x0029BB10
    // 0x0029B91C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    osStartThread_recomp(rdram, ctx);
        goto after_5;
    // 0x0029B91C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_5:
L_0029B920:
    // 0x0029B920: jal         0x0029E010
    // 0x0029B924: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0029E010(rdram, ctx);
        goto after_6;
    // 0x0029B924: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
    // 0x0029B928: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0029B92C:
    // 0x0029B92C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x0029B930: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0029B934: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0029B938: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0029B93C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0029B940: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0029B944: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0029B948: jr          $ra
    // 0x0029B94C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0029B94C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_002687FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002687FC: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x00268800: sw          $ra, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r31;
    // 0x00268804: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x00268808: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0026880C: beq         $v1, $v0, L_00268820
    if (ctx->r3 == ctx->r2) {
        // 0x00268810: addiu       $a1, $a0, 0x140
        ctx->r5 = ADD32(ctx->r4, 0X140);
            goto L_00268820;
    }
    // 0x00268810: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // 0x00268814: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00268818: j           L_0026882C
    // 0x0026881C: nop

        goto L_0026882C;
    // 0x0026881C: nop

L_00268820:
    // 0x00268820: jal         0x0024599C
    // 0x00268824: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    func_0024599C(rdram, ctx);
        goto after_0;
    // 0x00268824: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    after_0:
    // 0x00268828: lwc1        $f0, 0x48($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X48);
L_0026882C:
    // 0x0026882C: lw          $ra, 0x50($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X50);
    // 0x00268830: jr          $ra
    // 0x00268834: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x00268834: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_0041B954(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B954: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B958: lw          $v0, -0x5524($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5524);
    // 0x0041B95C: andi        $v0, $v0, 0x4000
    ctx->r2 = ctx->r2 & 0X4000;
    // 0x0041B960: beq         $v0, $zero, L_0041B974
    if (ctx->r2 == 0) {
        // 0x0041B964: lui         $v1, 0x100
        ctx->r3 = S32(0X100 << 16);
            goto L_0041B974;
    }
    // 0x0041B964: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x0041B968: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041B96C: j           L_0041B984
    // 0x0041B970: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
        goto L_0041B984;
    // 0x0041B970: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
L_0041B974:
    // 0x0041B974: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x0041B978: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041B97C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0041B980: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
L_0041B984:
    // 0x0041B984: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0041B988: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B98C: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0041B990: andi        $v0, $v0, 0x4000
    ctx->r2 = ctx->r2 & 0X4000;
    // 0x0041B994: beq         $v0, $zero, L_0041B9AC
    if (ctx->r2 == 0) {
        // 0x0041B998: nop
    
            goto L_0041B9AC;
    }
    // 0x0041B998: nop

    // 0x0041B99C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B9A0: addiu       $v0, $v0, 0x5ABC
    ctx->r2 = ADD32(ctx->r2, 0X5ABC);
    // 0x0041B9A4: j           L_0041B9B8
    // 0x0041B9A8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_0041B9B8(rdram, ctx);
    return;
    // 0x0041B9A8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B9AC:
    // 0x0041B9AC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // turok2: reconnected split function: a stray ELF symbol at 0x0041B9B0 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0041B9B0(rdram, ctx);
;}
RECOMP_FUNC void func_00423D04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00423D04: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423D08: addiu       $v0, $v0, 0x5218
    ctx->r2 = ADD32(ctx->r2, 0X5218);
    // 0x00423D0C: j           L_00423D30
    // 0x00423D10: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    func_00423D30(rdram, ctx);
    return;
    // 0x00423D10: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // turok2: reconnected split function: a stray ELF symbol at 0x00423D14 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00423D14(rdram, ctx);
;}
RECOMP_FUNC void func_002964A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002964A0: lw          $a3, 0x1C($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X1C);
    // 0x002964A4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x002964A8: bne         $a1, $v0, L_002964C8
    if (ctx->r5 != ctx->r2) {
        // 0x002964AC: nop
    
            goto L_002964C8;
    }
    // 0x002964AC: nop

    // 0x002964B0: lw          $v1, 0x14($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X14);
    // 0x002964B4: sllv        $v0, $v1, $v0
    ctx->r2 = S32(ctx->r3 << (ctx->r2 & 31));
    // 0x002964B8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x002964BC: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x002964C0: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x002964C4: sw          $v1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r3;
L_002964C8:
    // 0x002964C8: jr          $ra
    // 0x002964CC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x002964CC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00266B80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00266B80: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00266B84: lw          $v0, 0x318($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X318);
    // 0x00266B88: jr          $ra
    // 0x00266B8C: nop

    return;
    // 0x00266B8C: nop

;}
RECOMP_FUNC void func_0045B784(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_0043CC14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00403CE0:
    // 0x0043CC14: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0043CC18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0043CC1C: bne         $a1, $v0, L_0043CC8C
    if (ctx->r5 != ctx->r2) {
        // 0x0043CC20: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_0043CC8C;
    }
    // 0x0043CC20: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x0043CC24: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0043CC28: addiu       $v1, $v1, -0x634
    ctx->r3 = ADD32(ctx->r3, -0X634);
    // 0x0043CC2C: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x0043CC30: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0043CC34: addiu       $v0, $zero, 0x1400
    ctx->r2 = ADD32(0, 0X1400);
    // 0x0043CC38: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043CC3C: lwc1        $f0, 0x388($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X388);
    // 0x0043CC40: addiu       $a0, $zero, 0x3200
    ctx->r4 = ADD32(0, 0X3200);
    // 0x0043CC44: sw          $v0, -0x38($v1)
    MEM_W(-0X38, ctx->r3) = ctx->r2;
    // 0x0043CC48: sw          $v0, -0x34($v1)
    MEM_W(-0X34, ctx->r3) = ctx->r2;
    // 0x0043CC4C: sw          $v0, -0x2C($v1)
    MEM_W(-0X2C, ctx->r3) = ctx->r2;
    // 0x0043CC50: sw          $v0, -0x30($v1)
    MEM_W(-0X30, ctx->r3) = ctx->r2;
    // 0x0043CC54: sw          $v0, -0x18($v1)
    MEM_W(-0X18, ctx->r3) = ctx->r2;
    // 0x0043CC58: sw          $v0, -0x14($v1)
    MEM_W(-0X14, ctx->r3) = ctx->r2;
    // 0x0043CC5C: sw          $v0, -0xC($v1)
    MEM_W(-0XC, ctx->r3) = ctx->r2;
    // 0x0043CC60: sw          $v0, -0x10($v1)
    MEM_W(-0X10, ctx->r3) = ctx->r2;
    // 0x0043CC64: addiu       $v0, $zero, 0x5000
    ctx->r2 = ADD32(0, 0X5000);
    // 0x0043CC68: sw          $v0, -0x44($v1)
    MEM_W(-0X44, ctx->r3) = ctx->r2;
    // 0x0043CC6C: sw          $v0, -0x24($v1)
    MEM_W(-0X24, ctx->r3) = ctx->r2;
    // 0x0043CC70: ori         $v0, $zero, 0xC800
    ctx->r2 = 0 | 0XC800;
    // 0x0043CC74: sw          $a0, -0x3C($v1)
    MEM_W(-0X3C, ctx->r3) = ctx->r4;
    // 0x0043CC78: sw          $a0, -0x1C($v1)
    MEM_W(-0X1C, ctx->r3) = ctx->r4;
    // 0x0043CC7C: sw          $v0, -0x40($v1)
    MEM_W(-0X40, ctx->r3) = ctx->r2;
    // 0x0043CC80: sw          $v0, -0x20($v1)
    MEM_W(-0X20, ctx->r3) = ctx->r2;
    // 0x0043CC84: j           L_00403CE0
    // 0x0043CC88: swc1        $f0, -0x70($v1)
    MEM_W(-0X70, ctx->r3) = ctx->f0.u32l;
    entry_00403CE0(rdram, ctx);
    return;
    // 0x0043CC88: swc1        $f0, -0x70($v1)
    MEM_W(-0X70, ctx->r3) = ctx->f0.u32l;
L_0043CC8C:
    // 0x0043CC8C: bne         $a1, $v1, L_0043CCC0
    if (ctx->r5 != ctx->r3) {
        // 0x0043CC90: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_0043CCC0;
    }
    // 0x0043CC90: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0043CC94: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0043CC98: addiu       $v1, $v1, -0x634
    ctx->r3 = ADD32(ctx->r3, -0X634);
    // 0x0043CC9C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x0043CCA0: addiu       $a0, $zero, 0x3200
    ctx->r4 = ADD32(0, 0X3200);
    // 0x0043CCA4: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0043CCA8: addiu       $v0, $zero, 0x5000
    ctx->r2 = ADD32(0, 0X5000);
    // 0x0043CCAC: sw          $a0, -0x3C($v1)
    MEM_W(-0X3C, ctx->r3) = ctx->r4;
    // 0x0043CCB0: sw          $v0, -0x44($v1)
    MEM_W(-0X44, ctx->r3) = ctx->r2;
    // 0x0043CCB4: sw          $a0, -0x1C($v1)
    MEM_W(-0X1C, ctx->r3) = ctx->r4;
    // 0x0043CCB8: j           L_00403CE0
    // 0x0043CCBC: sw          $v0, -0x24($v1)
    MEM_W(-0X24, ctx->r3) = ctx->r2;
    entry_00403CE0(rdram, ctx);
    return;
    // 0x0043CCBC: sw          $v0, -0x24($v1)
    MEM_W(-0X24, ctx->r3) = ctx->r2;
L_0043CCC0:
    // 0x0043CCC0: bne         $a1, $v0, L_0043CCE0
    if (ctx->r5 != ctx->r2) {
        // 0x0043CCC4: nop
    
            goto L_0043CCE0;
    }
    // 0x0043CCC4: nop

    // 0x0043CCC8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0043CCCC: addiu       $v0, $v0, -0x634
    ctx->r2 = ADD32(ctx->r2, -0X634);
    // 0x0043CCD0: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x0043CCD4: ori         $v1, $zero, 0xC800
    ctx->r3 = 0 | 0XC800;
    // 0x0043CCD8: sw          $v1, -0x40($v0)
    MEM_W(-0X40, ctx->r2) = ctx->r3;
    // 0x0043CCDC: sw          $v1, -0x20($v0)
    MEM_W(-0X20, ctx->r2) = ctx->r3;
L_0043CCE0:
    // 0x0043CCE0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0043CCE4: addiu       $v0, $v0, -0x9F8
    ctx->r2 = ADD32(ctx->r2, -0X9F8);
    // 0x0043CCE8: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x0043CCEC: sb          $zero, 0x3C8($v0)
    MEM_B(0X3C8, ctx->r2) = 0;
    // 0x0043CCF0: jr          $ra
    // 0x0043CCF4: sb          $zero, 0x3C9($v0)
    MEM_B(0X3C9, ctx->r2) = 0;
    return;
    // 0x0043CCF4: sb          $zero, 0x3C9($v0)
    MEM_B(0X3C9, ctx->r2) = 0;
;}
RECOMP_FUNC void func_00280EE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00280EE8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00280EEC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00280EF0: lbu         $v1, 0x530($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X530);
    // 0x00280EF4: lbu         $v0, 0x531($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X531);
    // 0x00280EF8: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x00280EFC: beql        $v0, $zero, L_00280F60
    if (ctx->r2 == 0) {
        // 0x00280F00: sb          $zero, 0x530($a0)
        MEM_B(0X530, ctx->r4) = 0;
            goto L_00280F60;
    }
    goto skip_0;
    // 0x00280F00: sb          $zero, 0x530($a0)
    MEM_B(0X530, ctx->r4) = 0;
    skip_0:
    // 0x00280F04: lbu         $v0, 0x531($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X531);
    // 0x00280F08: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00280F0C: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x00280F10: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00280F14: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00280F18: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00280F1C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00280F20: lwc1        $f1, -0x6408($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X6408);
    // 0x00280F24: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00280F28: nop

    // 0x00280F2C: bc1tl       L_00280F44
    if (c1cs) {
        // 0x00280F30: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_00280F44;
    }
    goto skip_1;
    // 0x00280F30: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_1:
    // 0x00280F34: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00280F38: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x00280F3C: j           L_00280F54
    // 0x00280F40: nop

        goto L_00280F54;
    // 0x00280F40: nop

L_00280F44:
    // 0x00280F44: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00280F48: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00280F4C: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x00280F50: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
L_00280F54:
    // 0x00280F54: lbu         $v0, 0x530($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X530);
    // 0x00280F58: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00280F5C: sb          $v0, 0x530($a0)
    MEM_B(0X530, ctx->r4) = ctx->r2;
L_00280F60:
    // 0x00280F60: lbu         $v0, 0x530($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X530);
    // 0x00280F64: beq         $v0, $zero, L_00280FCC
    if (ctx->r2 == 0) {
        // 0x00280F68: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_00280FCC;
    }
    // 0x00280F68: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x00280F6C: sb          $v0, 0x18($sp)
    MEM_B(0X18, ctx->r29) = ctx->r2;
    // 0x00280F70: sb          $zero, 0x19($sp)
    MEM_B(0X19, ctx->r29) = 0;
    // 0x00280F74: sb          $zero, 0x1A($sp)
    MEM_B(0X1A, ctx->r29) = 0;
    // 0x00280F78: lbu         $v0, 0x530($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X530);
    // 0x00280F7C: sb          $v0, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r2;
    // 0x00280F80: lwc1        $f2, 0x290($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X290);
    // 0x00280F84: lwc1        $f0, 0x288($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X288);
    // 0x00280F88: add.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x00280F8C: lwc1        $f3, 0x294($a0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r4, 0X294);
    // 0x00280F90: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00280F94: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x00280F98: lwc1        $f0, 0x294($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X294);
    // 0x00280F9C: lwc1        $f1, 0x28C($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X28C);
    // 0x00280FA0: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00280FA4: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00280FA8: addiu       $a0, $a0, 0x6CB0
    ctx->r4 = ADD32(ctx->r4, 0X6CB0);
    // 0x00280FAC: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00280FB0: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x00280FB4: trunc.w.s   $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x00280FB8: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x00280FBC: trunc.w.s   $f4, $f3
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    ctx->f4.u32l = TRUNC_W_S(ctx->f3.fl);
    // 0x00280FC0: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x00280FC4: jal         0x002883E0
    // 0x00280FC8: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_002883E0(rdram, ctx);
        goto after_0;
    // 0x00280FC8: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_0:
L_00280FCC:
    // 0x00280FCC: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00280FD0: jr          $ra
    // 0x00280FD4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00280FD4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00225354(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00225354: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00225358: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0022535C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00225360: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00225364: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00225368: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0022536C: lw          $s0, 0x1194($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X1194);
    // 0x00225370: beq         $s0, $zero, L_00225398
    if (ctx->r16 == 0) {
        // 0x00225374: addu        $s2, $a1, $zero
        ctx->r18 = ADD32(ctx->r5, 0);
            goto L_00225398;
    }
    // 0x00225374: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00225378: addiu       $a0, $s1, 0x1194
    ctx->r4 = ADD32(ctx->r17, 0X1194);
    // 0x0022537C: jal         0x00200738
    // 0x00225380: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200738(rdram, ctx);
        goto after_0;
    // 0x00225380: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00225384: addiu       $a0, $s1, 0x1180
    ctx->r4 = ADD32(ctx->r17, 0X1180);
    // 0x00225388: jal         0x00200518
    // 0x0022538C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200518(rdram, ctx);
        goto after_1;
    // 0x0022538C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00225390: j           L_002253AC
    // 0x00225394: sw          $s2, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r18;
        goto L_002253AC;
    // 0x00225394: sw          $s2, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r18;
L_00225398:
    // 0x00225398: lw          $s0, 0x1184($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X1184);
    // 0x0022539C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x002253A0: jal         0x0026DFB0
    // 0x002253A4: nop

    func_0026DFB0(rdram, ctx);
        goto after_2;
    // 0x002253A4: nop

    after_2:
    // 0x002253A8: sw          $s2, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r18;
L_002253AC:
    // 0x002253AC: lhu         $a0, 0xC($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0XC);
    // 0x002253B0: jal         0x0026D210
    // 0x002253B4: nop

    func_0026D210(rdram, ctx);
        goto after_3;
    // 0x002253B4: nop

    after_3:
    // 0x002253B8: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    // 0x002253BC: swc1        $f1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x002253C0: lbu         $v0, 0xE($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XE);
    // 0x002253C4: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x002253C8: beq         $v0, $zero, L_002253E0
    if (ctx->r2 == 0) {
        // 0x002253CC: nop
    
            goto L_002253E0;
    }
    // 0x002253CC: nop

    // 0x002253D0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002253D4: lwc1        $f0, 0x5FF0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5FF0);
    // 0x002253D8: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x002253DC: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
L_002253E0:
    // 0x002253E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x002253E4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002253E8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002253EC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002253F0: jr          $ra
    // 0x002253F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002253F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
