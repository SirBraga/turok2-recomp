#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_0023F034(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023F034: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x0023F038: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0023F03C: bne         $v1, $v0, L_0023F054
    if (ctx->r3 != ctx->r2) {
        // 0x0023F040: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0023F054;
    }
    // 0x0023F040: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0023F044: lw          $v0, 0xD4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XD4);
    // 0x0023F048: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x0023F04C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0023F050: sltu        $a0, $a0, $v0
    ctx->r4 = ctx->r4 < ctx->r2 ? 1 : 0;
L_0023F054:
    // 0x0023F054: jr          $ra
    // 0x0023F058: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    return;
    // 0x0023F058: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
;}
RECOMP_FUNC void func_00264198(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00264198: lw          $v1, 0x14($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X14);
    // 0x0026419C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002641A0: lwc1        $f1, 0x7C2C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7C2C);
    // 0x002641A4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002641A8: addiu       $v0, $v0, 0x20B0
    ctx->r2 = ADD32(ctx->r2, 0X20B0);
    // 0x002641AC: sw          $v0, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r2;
    // 0x002641B0: lui         $v0, 0x26
    ctx->r2 = S32(0X26 << 16);
    // 0x002641B4: addiu       $v0, $v0, 0x4378
    ctx->r2 = ADD32(ctx->r2, 0X4378);
    // 0x002641B8: sw          $v0, 0xF0($a1)
    MEM_W(0XF0, ctx->r5) = ctx->r2;
    // 0x002641BC: lui         $v0, 0x26
    ctx->r2 = S32(0X26 << 16);
    // 0x002641C0: addiu       $v0, $v0, 0x426C
    ctx->r2 = ADD32(ctx->r2, 0X426C);
    // 0x002641C4: sw          $v0, 0x104($a1)
    MEM_W(0X104, ctx->r5) = ctx->r2;
    // 0x002641C8: sw          $zero, 0x11C($a1)
    MEM_W(0X11C, ctx->r5) = 0;
    // 0x002641CC: sw          $zero, 0x120($a1)
    MEM_W(0X120, ctx->r5) = 0;
    // 0x002641D0: addiu       $v0, $v1, 0x14
    ctx->r2 = ADD32(ctx->r3, 0X14);
    // 0x002641D4: lwc1        $f0, 0x40($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X40);
    // 0x002641D8: sw          $zero, 0x10C($a1)
    MEM_W(0X10C, ctx->r5) = 0;
    // 0x002641DC: sw          $zero, 0x110($a1)
    MEM_W(0X110, ctx->r5) = 0;
    // 0x002641E0: sw          $zero, 0x114($a1)
    MEM_W(0X114, ctx->r5) = 0;
    // 0x002641E4: sw          $zero, 0x118($a1)
    MEM_W(0X118, ctx->r5) = 0;
    // 0x002641E8: swc1        $f0, 0x64($a1)
    MEM_W(0X64, ctx->r5) = ctx->f0.u32l;
    // 0x002641EC: lwc1        $f0, 0x40($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X40);
    // 0x002641F0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002641F4: swc1        $f0, 0x124($a1)
    MEM_W(0X124, ctx->r5) = ctx->f0.u32l;
    // 0x002641F8: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x002641FC: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x00264200: beq         $v0, $zero, L_00264214
    if (ctx->r2 == 0) {
        // 0x00264204: addiu       $v1, $zero, -0x2001
        ctx->r3 = ADD32(0, -0X2001);
            goto L_00264214;
    }
    // 0x00264204: addiu       $v1, $zero, -0x2001
    ctx->r3 = ADD32(0, -0X2001);
    // 0x00264208: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x0026420C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00264210: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
L_00264214:
    // 0x00264214: jr          $ra
    // 0x00264218: nop

    return;
    // 0x00264218: nop

;}
RECOMP_FUNC void func_0025AD5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025AD5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025AD60: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025AD64: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025AD68: lhu         $a3, 0x78($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X78);
    // 0x0025AD6C: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025AD70: addiu       $a2, $a2, 0x600
    ctx->r6 = ADD32(ctx->r6, 0X600);
    // 0x0025AD74: jal         0x00245A98
    // 0x0025AD78: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025AD78: nop

    after_0:
    // 0x0025AD7C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025AD80: jr          $ra
    // 0x0025AD84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025AD84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002A12F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A12F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002A12F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x002A12F8: jal         0x002A31E4
    // 0x002A12FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_002A31E4(rdram, ctx);
        goto after_0;
    // 0x002A12FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x002A1300: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x002A1304: addiu       $a0, $zero, -0x2
    ctx->r4 = ADD32(0, -0X2);
    // 0x002A1308: jal         0x002A31F0
    // 0x002A130C: and         $a0, $s0, $a0
    ctx->r4 = ctx->r16 & ctx->r4;
    func_002A31F0(rdram, ctx);
        goto after_1;
    // 0x002A130C: and         $a0, $s0, $a0
    ctx->r4 = ctx->r16 & ctx->r4;
    after_1:
    // 0x002A1310: andi        $v0, $s0, 0x1
    ctx->r2 = ctx->r16 & 0X1;
    // 0x002A1314: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x002A1318: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002A131C: jr          $ra
    // 0x002A1320: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002A1320: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00236D50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00236D50: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00236D54: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00236D58: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00236D5C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00236D60: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00236D64: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00236D68: lw          $s0, 0x7520($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X7520);
    // 0x00236D6C: beq         $s0, $zero, L_00236DFC
    if (ctx->r16 == 0) {
        // 0x00236D70: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_00236DFC;
    }
    // 0x00236D70: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
L_00236D74:
    // 0x00236D74: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x00236D78: bgez        $v0, L_00236DEC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00236D7C: nop
    
            goto L_00236DEC;
    }
    // 0x00236D7C: nop

    // 0x00236D80: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x00236D84: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x00236D88: beq         $v0, $zero, L_00236D98
    if (ctx->r2 == 0) {
        // 0x00236D8C: nop
    
            goto L_00236D98;
    }
    // 0x00236D8C: nop

    // 0x00236D90: jal         0x0023417C
    // 0x00236D94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0023417C(rdram, ctx);
        goto after_0;
    // 0x00236D94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
L_00236D98:
    // 0x00236D98: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x00236D9C: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x00236DA0: beq         $v0, $zero, L_00236DB0
    if (ctx->r2 == 0) {
        // 0x00236DA4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00236DB0;
    }
    // 0x00236DA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00236DA8: jal         0x00233FCC
    // 0x00236DAC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00233FCC(rdram, ctx);
        goto after_1;
    // 0x00236DAC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
L_00236DB0:
    // 0x00236DB0: lw          $v0, 0x48($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X48);
    // 0x00236DB4: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x00236DB8: bne         $v0, $zero, L_00236DEC
    if (ctx->r2 != 0) {
        // 0x00236DBC: nop
    
            goto L_00236DEC;
    }
    // 0x00236DBC: nop

    // 0x00236DC0: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x00236DC4: bltz        $v0, L_00236DE0
    if (SIGNED(ctx->r2) < 0) {
        // 0x00236DC8: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00236DE0;
    }
    // 0x00236DC8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00236DCC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00236DD0: jal         0x00234348
    // 0x00236DD4: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_00234348(rdram, ctx);
        goto after_2;
    // 0x00236DD4: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_2:
    // 0x00236DD8: j           L_00236DEC
    // 0x00236DDC: nop

        goto L_00236DEC;
    // 0x00236DDC: nop

L_00236DE0:
    // 0x00236DE0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00236DE4: jal         0x00234928
    // 0x00236DE8: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_00234928(rdram, ctx);
        goto after_3;
    // 0x00236DE8: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_3:
L_00236DEC:
    // 0x00236DEC: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x00236DF0: bne         $s0, $zero, L_00236D74
    if (ctx->r16 != 0) {
        // 0x00236DF4: nop
    
            goto L_00236D74;
    }
    // 0x00236DF4: nop

    // 0x00236DF8: lw          $s0, 0x7520($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X7520);
L_00236DFC:
    // 0x00236DFC: beq         $s0, $zero, L_00236E88
    if (ctx->r16 == 0) {
        // 0x00236E00: nop
    
            goto L_00236E88;
    }
    // 0x00236E00: nop

L_00236E04:
    // 0x00236E04: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x00236E08: blez        $v0, L_00236E7C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00236E0C: nop
    
            goto L_00236E7C;
    }
    // 0x00236E0C: nop

    // 0x00236E10: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x00236E14: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x00236E18: beq         $v0, $zero, L_00236E28
    if (ctx->r2 == 0) {
        // 0x00236E1C: nop
    
            goto L_00236E28;
    }
    // 0x00236E1C: nop

    // 0x00236E20: jal         0x0023417C
    // 0x00236E24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0023417C(rdram, ctx);
        goto after_4;
    // 0x00236E24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_00236E28:
    // 0x00236E28: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x00236E2C: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x00236E30: beq         $v0, $zero, L_00236E40
    if (ctx->r2 == 0) {
        // 0x00236E34: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00236E40;
    }
    // 0x00236E34: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00236E38: jal         0x00233FCC
    // 0x00236E3C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00233FCC(rdram, ctx);
        goto after_5;
    // 0x00236E3C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_5:
L_00236E40:
    // 0x00236E40: lw          $v0, 0x48($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X48);
    // 0x00236E44: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x00236E48: bne         $v0, $zero, L_00236E7C
    if (ctx->r2 != 0) {
        // 0x00236E4C: nop
    
            goto L_00236E7C;
    }
    // 0x00236E4C: nop

    // 0x00236E50: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x00236E54: bltz        $v0, L_00236E70
    if (SIGNED(ctx->r2) < 0) {
        // 0x00236E58: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00236E70;
    }
    // 0x00236E58: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00236E5C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00236E60: jal         0x00234348
    // 0x00236E64: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_00234348(rdram, ctx);
        goto after_6;
    // 0x00236E64: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_6:
    // 0x00236E68: j           L_00236E7C
    // 0x00236E6C: nop

        goto L_00236E7C;
    // 0x00236E6C: nop

L_00236E70:
    // 0x00236E70: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00236E74: jal         0x00234928
    // 0x00236E78: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_00234928(rdram, ctx);
        goto after_7;
    // 0x00236E78: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_7:
L_00236E7C:
    // 0x00236E7C: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x00236E80: bne         $s0, $zero, L_00236E04
    if (ctx->r16 != 0) {
        // 0x00236E84: nop
    
            goto L_00236E04;
    }
    // 0x00236E84: nop

L_00236E88:
    // 0x00236E88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00236E8C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00236E90: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00236E94: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00236E98: jr          $ra
    // 0x00236E9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00236E9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0025005C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025005C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00250060: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x00250064: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00250068: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x0025006C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x00250070: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00250074: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00250078: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x0025007C: lh          $v0, 0xA08($s2)
    ctx->r2 = MEM_H(ctx->r18, 0XA08);
    // 0x00250080: bne         $v0, $zero, L_0025009C
    if (ctx->r2 != 0) {
        // 0x00250084: addu        $s3, $a1, $zero
        ctx->r19 = ADD32(ctx->r5, 0);
            goto L_0025009C;
    }
    // 0x00250084: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x00250088: lw          $v0, 0xA64($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XA64);
    // 0x0025008C: andi        $v0, $v0, 0xE000
    ctx->r2 = ctx->r2 & 0XE000;
    // 0x00250090: bne         $v0, $zero, L_0025009C
    if (ctx->r2 != 0) {
        // 0x00250094: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0025009C;
    }
    // 0x00250094: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00250098: sh          $v0, 0xA08($s2)
    MEM_H(0XA08, ctx->r18) = ctx->r2;
L_0025009C:
    // 0x0025009C: lw          $v0, 0xA50($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XA50);
    // 0x002500A0: sw          $zero, 0xAD0($s2)
    MEM_W(0XAD0, ctx->r18) = 0;
    // 0x002500A4: lb          $v0, 0xC6($v0)
    ctx->r2 = MEM_B(ctx->r2, 0XC6);
    // 0x002500A8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002500AC: lwc1        $f1, 0x6EB8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6EB8);
    // 0x002500B0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002500B4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002500B8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002500BC: lwc1        $f1, 0x50($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X50);
    // 0x002500C0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002500C4: lwc1        $f20, 0x6EBC($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6EBC);
    // 0x002500C8: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x002500CC: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x002500D0: mfc1        $a1, $f1
    ctx->r5 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x002500D4: jal         0x002117DC
    // 0x002500D8: addiu       $a0, $s3, 0x50
    ctx->r4 = ADD32(ctx->r19, 0X50);
    func_002117DC(rdram, ctx);
        goto after_0;
    // 0x002500D8: addiu       $a0, $s3, 0x50
    ctx->r4 = ADD32(ctx->r19, 0X50);
    after_0:
    // 0x002500DC: lw          $v0, 0xA50($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XA50);
    // 0x002500E0: lb          $v0, 0xC7($v0)
    ctx->r2 = MEM_B(ctx->r2, 0XC7);
    // 0x002500E4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002500E8: lwc1        $f1, 0x6EC0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6EC0);
    // 0x002500EC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x002500F0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002500F4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002500F8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002500FC: lwc1        $f1, 0xAC8($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0XAC8);
    // 0x00250100: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00250104: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x00250108: mfc1        $a1, $f1
    ctx->r5 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x0025010C: jal         0x002117DC
    // 0x00250110: addiu       $a0, $s2, 0xAC8
    ctx->r4 = ADD32(ctx->r18, 0XAC8);
    func_002117DC(rdram, ctx);
        goto after_1;
    // 0x00250110: addiu       $a0, $s2, 0xAC8
    ctx->r4 = ADD32(ctx->r18, 0XAC8);
    after_1:
    // 0x00250114: lwc1        $f2, 0xA60($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0XA60);
    // 0x00250118: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0025011C: c.eq.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl == ctx->f1.fl;
    // 0x00250120: nop

    // 0x00250124: bc1t        L_00250180
    if (c1cs) {
        // 0x00250128: nop
    
            goto L_00250180;
    }
    // 0x00250128: nop

    // 0x0025012C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00250130: lwc1        $f0, 0x6EC4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6EC4);
    // 0x00250134: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x00250138: mul.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0025013C: bc1f        L_0025015C
    if (!c1cs) {
        // 0x00250140: nop
    
            goto L_0025015C;
    }
    // 0x00250140: nop

    // 0x00250144: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00250148: lwc1        $f1, 0x6EC8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6EC8);
    // 0x0025014C: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x00250150: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00250154: j           L_00250168
    // 0x00250158: nop

        goto L_00250168;
    // 0x00250158: nop

L_0025015C:
    // 0x0025015C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00250160: lwc1        $f0, 0x6ECC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6ECC);
    // 0x00250164: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
L_00250168:
    // 0x00250168: lwc1        $f12, 0xA78($s2)
    ctx->f12.u32l = MEM_W(ctx->r18, 0XA78);
    // 0x0025016C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x00250170: jal         0x0021160C
    // 0x00250174: nop

    func_0021160C(rdram, ctx);
        goto after_2;
    // 0x00250174: nop

    after_2:
    // 0x00250178: j           L_00250198
    // 0x0025017C: swc1        $f0, 0xA78($s2)
    MEM_W(0XA78, ctx->r18) = ctx->f0.u32l;
        goto L_00250198;
    // 0x0025017C: swc1        $f0, 0xA78($s2)
    MEM_W(0XA78, ctx->r18) = ctx->f0.u32l;
L_00250180:
    // 0x00250180: lwc1        $f12, 0xA78($s2)
    ctx->f12.u32l = MEM_W(ctx->r18, 0XA78);
    // 0x00250184: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00250188: lwc1        $f14, 0x6ED0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X6ED0);
    // 0x0025018C: jal         0x0021170C
    // 0x00250190: nop

    func_0021170C(rdram, ctx);
        goto after_3;
    // 0x00250190: nop

    after_3:
    // 0x00250194: swc1        $f0, 0xA78($s2)
    MEM_W(0XA78, ctx->r18) = ctx->f0.u32l;
L_00250198:
    // 0x00250198: lwc1        $f2, 0xA5C($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0XA5C);
    // 0x0025019C: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x002501A0: c.eq.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl == ctx->f1.fl;
    // 0x002501A4: nop

    // 0x002501A8: bc1t        L_00250204
    if (c1cs) {
        // 0x002501AC: nop
    
            goto L_00250204;
    }
    // 0x002501AC: nop

    // 0x002501B0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002501B4: lwc1        $f0, 0x6ED4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6ED4);
    // 0x002501B8: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x002501BC: mul.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x002501C0: bc1f        L_002501E0
    if (!c1cs) {
        // 0x002501C4: nop
    
            goto L_002501E0;
    }
    // 0x002501C4: nop

    // 0x002501C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002501CC: lwc1        $f1, 0x6ED8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6ED8);
    // 0x002501D0: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x002501D4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002501D8: j           L_002501EC
    // 0x002501DC: nop

        goto L_002501EC;
    // 0x002501DC: nop

L_002501E0:
    // 0x002501E0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002501E4: lwc1        $f0, 0x6EDC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6EDC);
    // 0x002501E8: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
L_002501EC:
    // 0x002501EC: lwc1        $f12, 0xA7C($s2)
    ctx->f12.u32l = MEM_W(ctx->r18, 0XA7C);
    // 0x002501F0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x002501F4: jal         0x0021160C
    // 0x002501F8: nop

    func_0021160C(rdram, ctx);
        goto after_4;
    // 0x002501F8: nop

    after_4:
    // 0x002501FC: j           L_0025021C
    // 0x00250200: swc1        $f0, 0xA7C($s2)
    MEM_W(0XA7C, ctx->r18) = ctx->f0.u32l;
        goto L_0025021C;
    // 0x00250200: swc1        $f0, 0xA7C($s2)
    MEM_W(0XA7C, ctx->r18) = ctx->f0.u32l;
L_00250204:
    // 0x00250204: lwc1        $f12, 0xA7C($s2)
    ctx->f12.u32l = MEM_W(ctx->r18, 0XA7C);
    // 0x00250208: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025020C: lwc1        $f14, 0x6EE0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X6EE0);
    // 0x00250210: jal         0x0021170C
    // 0x00250214: nop

    func_0021170C(rdram, ctx);
        goto after_5;
    // 0x00250214: nop

    after_5:
    // 0x00250218: swc1        $f0, 0xA7C($s2)
    MEM_W(0XA7C, ctx->r18) = ctx->f0.u32l;
L_0025021C:
    // 0x0025021C: lw          $v1, 0xA64($s2)
    ctx->r3 = MEM_W(ctx->r18, 0XA64);
    // 0x00250220: andi        $v0, $v1, 0x10
    ctx->r2 = ctx->r3 & 0X10;
    // 0x00250224: beq         $v0, $zero, L_00250250
    if (ctx->r2 == 0) {
        // 0x00250228: andi        $v0, $v1, 0x2020
        ctx->r2 = ctx->r3 & 0X2020;
            goto L_00250250;
    }
    // 0x00250228: andi        $v0, $v1, 0x2020
    ctx->r2 = ctx->r3 & 0X2020;
    // 0x0025022C: lwc1        $f12, 0x1C($s3)
    ctx->f12.u32l = MEM_W(ctx->r19, 0X1C);
    // 0x00250230: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00250234: lwc1        $f14, 0x6EE4($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X6EE4);
    // 0x00250238: lui         $a2, 0x428F
    ctx->r6 = S32(0X428F << 16);
    // 0x0025023C: ori         $a2, $a2, 0x5C29
    ctx->r6 = ctx->r6 | 0X5C29;
    // 0x00250240: jal         0x0021160C
    // 0x00250244: nop

    func_0021160C(rdram, ctx);
        goto after_6;
    // 0x00250244: nop

    after_6:
    // 0x00250248: j           L_00250294
    // 0x0025024C: swc1        $f0, 0x1C($s3)
    MEM_W(0X1C, ctx->r19) = ctx->f0.u32l;
        goto L_00250294;
    // 0x0025024C: swc1        $f0, 0x1C($s3)
    MEM_W(0X1C, ctx->r19) = ctx->f0.u32l;
L_00250250:
    // 0x00250250: beq         $v0, $zero, L_0025027C
    if (ctx->r2 == 0) {
        // 0x00250254: nop
    
            goto L_0025027C;
    }
    // 0x00250254: nop

    // 0x00250258: lwc1        $f12, 0x1C($s3)
    ctx->f12.u32l = MEM_W(ctx->r19, 0X1C);
    // 0x0025025C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00250260: lwc1        $f14, 0x6EE8($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X6EE8);
    // 0x00250264: lui         $a2, 0x428F
    ctx->r6 = S32(0X428F << 16);
    // 0x00250268: ori         $a2, $a2, 0x5C29
    ctx->r6 = ctx->r6 | 0X5C29;
    // 0x0025026C: jal         0x0021160C
    // 0x00250270: nop

    func_0021160C(rdram, ctx);
        goto after_7;
    // 0x00250270: nop

    after_7:
    // 0x00250274: j           L_00250294
    // 0x00250278: swc1        $f0, 0x1C($s3)
    MEM_W(0X1C, ctx->r19) = ctx->f0.u32l;
        goto L_00250294;
    // 0x00250278: swc1        $f0, 0x1C($s3)
    MEM_W(0X1C, ctx->r19) = ctx->f0.u32l;
L_0025027C:
    // 0x0025027C: lwc1        $f12, 0x1C($s3)
    ctx->f12.u32l = MEM_W(ctx->r19, 0X1C);
    // 0x00250280: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00250284: lwc1        $f14, 0x6EEC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X6EEC);
    // 0x00250288: jal         0x0021170C
    // 0x0025028C: nop

    func_0021170C(rdram, ctx);
        goto after_8;
    // 0x0025028C: nop

    after_8:
    // 0x00250290: swc1        $f0, 0x1C($s3)
    MEM_W(0X1C, ctx->r19) = ctx->f0.u32l;
L_00250294:
    // 0x00250294: lwc1        $f12, 0x50($s3)
    ctx->f12.u32l = MEM_W(ctx->r19, 0X50);
    // 0x00250298: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025029C: lwc1        $f20, 0x6EF0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6EF0);
    // 0x002502A0: jal         0x002982F0
    // 0x002502A4: add.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f20.fl;
    func_002982F0(rdram, ctx);
        goto after_9;
    // 0x002502A4: add.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f20.fl;
    after_9:
    // 0x002502A8: lwc1        $f1, 0xA78($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0XA78);
    // 0x002502AC: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x002502B0: swc1        $f1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x002502B4: lwc1        $f0, 0x1C($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X1C);
    // 0x002502B8: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x002502BC: lwc1        $f12, 0x50($s3)
    ctx->f12.u32l = MEM_W(ctx->r19, 0X50);
    // 0x002502C0: jal         0x002974C0
    // 0x002502C4: add.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f20.fl;
    func_002974C0(rdram, ctx);
        goto after_10;
    // 0x002502C4: add.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f20.fl;
    after_10:
    // 0x002502C8: lwc1        $f1, 0xA78($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0XA78);
    // 0x002502CC: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x002502D0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002502D4: lwc1        $f20, 0x6EF4($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6EF4);
    // 0x002502D8: swc1        $f1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x002502DC: lwc1        $f12, 0x50($s3)
    ctx->f12.u32l = MEM_W(ctx->r19, 0X50);
    // 0x002502E0: jal         0x002982F0
    // 0x002502E4: sub.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f20.fl;
    func_002982F0(rdram, ctx);
        goto after_11;
    // 0x002502E4: sub.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f20.fl;
    after_11:
    // 0x002502E8: lwc1        $f1, 0xA7C($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0XA7C);
    // 0x002502EC: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x002502F0: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x002502F4: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x002502F8: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x002502FC: lwc1        $f12, 0x50($s3)
    ctx->f12.u32l = MEM_W(ctx->r19, 0X50);
    // 0x00250300: jal         0x002974C0
    // 0x00250304: sub.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f20.fl;
    func_002974C0(rdram, ctx);
        goto after_12;
    // 0x00250304: sub.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f20.fl;
    after_12:
    // 0x00250308: lwc1        $f1, 0xA7C($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0XA7C);
    // 0x0025030C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00250310: lwc1        $f0, 0x18($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X18);
    // 0x00250314: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00250318: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0025031C: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x00250320: lw          $a2, 0x6D28($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X6D28);
    // 0x00250324: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00250328: jal         0x0020EF60
    // 0x0025032C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_0020EF60(rdram, ctx);
        goto after_13;
    // 0x0025032C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_13:
    // 0x00250330: addiu       $a0, $s2, 0xAA0
    ctx->r4 = ADD32(ctx->r18, 0XAA0);
    // 0x00250334: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00250338: jal         0x0020EEF8
    // 0x0025033C: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    func_0020EEF8(rdram, ctx);
        goto after_14;
    // 0x0025033C: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    after_14:
    // 0x00250340: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00250344: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00250348: addiu       $s1, $s3, 0x4
    ctx->r17 = ADD32(ctx->r19, 0X4);
    // 0x0025034C: jal         0x00220A1C
    // 0x00250350: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00220A1C(rdram, ctx);
        goto after_15;
    // 0x00250350: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_15:
    // 0x00250354: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00250358: bnel        $s0, $zero, L_00250360
    if (ctx->r16 != 0) {
        // 0x0025035C: sw          $s0, 0x10($s3)
        MEM_W(0X10, ctx->r19) = ctx->r16;
            goto L_00250360;
    }
    goto skip_0;
    // 0x0025035C: sw          $s0, 0x10($s3)
    MEM_W(0X10, ctx->r19) = ctx->r16;
    skip_0:
L_00250360:
    // 0x00250360: lh          $v1, 0xA08($s2)
    ctx->r3 = MEM_H(ctx->r18, 0XA08);
    // 0x00250364: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00250368: bne         $v1, $v0, L_00250410
    if (ctx->r3 != ctx->r2) {
        // 0x0025036C: ori         $v1, $zero, 0xE000
        ctx->r3 = 0 | 0XE000;
            goto L_00250410;
    }
    // 0x0025036C: ori         $v1, $zero, 0xE000
    ctx->r3 = 0 | 0XE000;
    // 0x00250370: lw          $v0, 0xA64($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XA64);
    // 0x00250374: andi        $v0, $v0, 0xE000
    ctx->r2 = ctx->r2 & 0XE000;
    // 0x00250378: bne         $v0, $v1, L_00250410
    if (ctx->r2 != ctx->r3) {
        // 0x0025037C: nop
    
            goto L_00250410;
    }
    // 0x0025037C: nop

    // 0x00250380: lw          $v0, 0xA68($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XA68);
    // 0x00250384: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00250388: beq         $v0, $zero, L_00250410
    if (ctx->r2 == 0) {
        // 0x0025038C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00250410;
    }
    // 0x0025038C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00250390: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00250394: jal         0x0024E5F0
    // 0x00250398: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_0024E5F0(rdram, ctx);
        goto after_16;
    // 0x00250398: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_16:
    // 0x0025039C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x002503A0: addiu       $a0, $a0, -0x6750
    ctx->r4 = ADD32(ctx->r4, -0X6750);
    // 0x002503A4: lw          $a1, 0x51C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X51C);
    // 0x002503A8: lui         $a2, 0x800A
    ctx->r6 = S32(0X800A << 16);
    // 0x002503AC: addiu       $a2, $a2, 0x6EA8
    ctx->r6 = ADD32(ctx->r6, 0X6EA8);
    // 0x002503B0: jal         0x0027FC2C
    // 0x002503B4: nop

    func_0027FC2C(rdram, ctx);
        goto after_17;
    // 0x002503B4: nop

    after_17:
    // 0x002503B8: bne         $s0, $zero, L_00250410
    if (ctx->r16 != 0) {
        // 0x002503BC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00250410;
    }
    // 0x002503BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002503C0: lw          $s0, 0x10($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X10);
    // 0x002503C4: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x002503C8: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x002503CC: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x002503D0: lw          $t1, 0x8($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X8);
    // 0x002503D4: sw          $a3, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r7;
    // 0x002503D8: sw          $t0, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r8;
    // 0x002503DC: sw          $t1, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r9;
    // 0x002503E0: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x002503E4: jal         0x0020EEF8
    // 0x002503E8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0020EEF8(rdram, ctx);
        goto after_18;
    // 0x002503E8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_18:
    // 0x002503EC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002503F0: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    // 0x002503F4: jal         0x0020EEF8
    // 0x002503F8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0020EEF8(rdram, ctx);
        goto after_19;
    // 0x002503F8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_19:
    // 0x002503FC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00250400: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x00250404: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x00250408: jal         0x0020EF60
    // 0x0025040C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_20;
    // 0x0025040C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_20:
L_00250410:
    // 0x00250410: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x00250414: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x00250418: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0025041C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00250420: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00250424: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x00250428: jr          $ra
    // 0x0025042C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x0025042C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00251698(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00251698: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0025169C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002516A0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x002516A4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x002516A8: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x002516AC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002516B0: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x002516B4: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x002516B8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002516BC: lw          $a1, 0x10($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X10);
    // 0x002516C0: beq         $a1, $zero, L_002516E4
    if (ctx->r5 == 0) {
        // 0x002516C4: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_002516E4;
    }
    // 0x002516C4: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x002516C8: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x002516CC: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x002516D0: jal         0x0022425C
    // 0x002516D4: nop

    func_0022425C(rdram, ctx);
        goto after_0;
    // 0x002516D4: nop

    after_0:
    // 0x002516D8: beq         $v0, $zero, L_002516E4
    if (ctx->r2 == 0) {
        // 0x002516DC: nop
    
            goto L_002516E4;
    }
    // 0x002516DC: nop

    // 0x002516E0: lw          $s1, 0x44($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X44);
L_002516E4:
    // 0x002516E4: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x002516E8: lw          $v1, 0x1C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1C);
    // 0x002516EC: bnel        $v1, $zero, L_002516F4
    if (ctx->r3 != 0) {
        // 0x002516F0: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_002516F4;
    }
    goto skip_0;
    // 0x002516F0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_0:
L_002516F4:
    // 0x002516F4: lw          $v0, 0xA1C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XA1C);
    // 0x002516F8: andi        $a0, $v0, 0x8000
    ctx->r4 = ctx->r2 & 0X8000;
    // 0x002516FC: bnel        $a0, $zero, L_00251704
    if (ctx->r4 != 0) {
        // 0x00251700: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00251704;
    }
    goto skip_1;
    // 0x00251700: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_1:
L_00251704:
    // 0x00251704: bnel        $v1, $zero, L_0025170C
    if (ctx->r3 != 0) {
        // 0x00251708: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0025170C;
    }
    goto skip_2;
    // 0x00251708: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_2:
L_0025170C:
    // 0x0025170C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00251710: lw          $v0, -0x6788($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6788);
    // 0x00251714: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x00251718: beql        $v0, $zero, L_00251720
    if (ctx->r2 == 0) {
        // 0x0025171C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00251720;
    }
    goto skip_3;
    // 0x0025171C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_3:
L_00251720:
    // 0x00251720: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x00251724: beql        $s3, $v0, L_0025172C
    if (ctx->r19 == ctx->r2) {
        // 0x00251728: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0025172C;
    }
    goto skip_4;
    // 0x00251728: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_4:
L_0025172C:
    // 0x0025172C: bnel        $a0, $zero, L_00251734
    if (ctx->r4 != 0) {
        // 0x00251730: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00251734;
    }
    goto skip_5;
    // 0x00251730: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_5:
L_00251734:
    // 0x00251734: lui         $v0, 0x100
    ctx->r2 = S32(0X100 << 16);
    // 0x00251738: and         $v0, $s1, $v0
    ctx->r2 = ctx->r17 & ctx->r2;
    // 0x0025173C: bnel        $v0, $zero, L_00251744
    if (ctx->r2 != 0) {
        // 0x00251740: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00251744;
    }
    goto skip_6;
    // 0x00251740: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_6:
L_00251744:
    // 0x00251744: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
    // 0x00251748: and         $v0, $s1, $v0
    ctx->r2 = ctx->r17 & ctx->r2;
    // 0x0025174C: beq         $v0, $zero, L_0025176C
    if (ctx->r2 == 0) {
        // 0x00251750: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_0025176C;
    }
    // 0x00251750: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x00251754: beq         $s3, $v0, L_0025176C
    if (ctx->r19 == ctx->r2) {
        // 0x00251758: addiu       $v0, $zero, 0x28
        ctx->r2 = ADD32(0, 0X28);
            goto L_0025176C;
    }
    // 0x00251758: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x0025175C: beq         $s3, $v0, L_0025176C
    if (ctx->r19 == ctx->r2) {
        // 0x00251760: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_0025176C;
    }
    // 0x00251760: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x00251764: bnel        $s3, $v0, L_0025176C
    if (ctx->r19 != ctx->r2) {
        // 0x00251768: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0025176C;
    }
    goto skip_7;
    // 0x00251768: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_7:
L_0025176C:
    // 0x0025176C: beq         $s0, $zero, L_002517D8
    if (ctx->r16 == 0) {
        // 0x00251770: sw          $s0, 0xBF0($s2)
        MEM_W(0XBF0, ctx->r18) = ctx->r16;
            goto L_002517D8;
    }
    // 0x00251770: sw          $s0, 0xBF0($s2)
    MEM_W(0XBF0, ctx->r18) = ctx->r16;
    // 0x00251774: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x00251778: bne         $s3, $v0, L_002517B8
    if (ctx->r19 != ctx->r2) {
        // 0x0025177C: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_002517B8;
    }
    // 0x0025177C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00251780: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00251784: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00251788: sw          $v0, -0x1CC0($at)
    MEM_W(-0X1CC0, ctx->r1) = ctx->r2;
    // 0x0025178C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_00251790:
    // 0x00251790: lw          $v0, 0x51C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X51C);
    // 0x00251794: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00251798: lbu         $v0, 0x508($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X508);
    // 0x0025179C: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x002517A0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x002517A4: sb          $v0, 0x1FE4($at)
    MEM_B(0X1FE4, ctx->r1) = ctx->r2;
    // 0x002517A8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x002517AC: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x002517B0: bne         $v0, $zero, L_00251790
    if (ctx->r2 != 0) {
        // 0x002517B4: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_00251790;
    }
    // 0x002517B4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_002517B8:
    // 0x002517B8: lui         $a2, 0x25
    ctx->r6 = S32(0X25 << 16);
    // 0x002517BC: addiu       $a2, $a2, 0x7784
    ctx->r6 = ADD32(ctx->r6, 0X7784);
    // 0x002517C0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002517C4: sw          $zero, -0x321C($at)
    MEM_W(-0X321C, ctx->r1) = 0;
    // 0x002517C8: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x002517CC: sw          $s2, 0x1FD0($at)
    MEM_W(0X1FD0, ctx->r1) = ctx->r18;
    // 0x002517D0: jal         0x00283FF8
    // 0x002517D4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_00283FF8(rdram, ctx);
        goto after_1;
    // 0x002517D4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
L_002517D8:
    // 0x002517D8: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x002517DC: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x002517E0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x002517E4: jal         0x00225EBC
    // 0x002517E8: addiu       $a2, $zero, 0xC45
    ctx->r6 = ADD32(0, 0XC45);
    func_00225EBC(rdram, ctx);
        goto after_2;
    // 0x002517E8: addiu       $a2, $zero, 0xC45
    ctx->r6 = ADD32(0, 0XC45);
    after_2:
    // 0x002517EC: beq         $v0, $zero, L_0025180C
    if (ctx->r2 == 0) {
        // 0x002517F0: nop
    
            goto L_0025180C;
    }
    // 0x002517F0: nop

    // 0x002517F4: lwc1        $f0, 0x38($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X38);
    // 0x002517F8: swc1        $f0, 0x34($s2)
    MEM_W(0X34, ctx->r18) = ctx->f0.u32l;
    // 0x002517FC: lwc1        $f0, 0x3C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x00251800: swc1        $f0, 0x38($s2)
    MEM_W(0X38, ctx->r18) = ctx->f0.u32l;
    // 0x00251804: lwc1        $f0, 0x40($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X40);
    // 0x00251808: swc1        $f0, 0x3C($s2)
    MEM_W(0X3C, ctx->r18) = ctx->f0.u32l;
L_0025180C:
    // 0x0025180C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00251810: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00251814: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00251818: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0025181C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00251820: jr          $ra
    // 0x00251824: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00251824: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_004524F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004524F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004524F8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x004524FC: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x00452500: lb          $a0, 0x4($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X4);
    // 0x00452504: jal         0x00285A68
    // 0x00452508: nop

    func_00285A68(rdram, ctx);
        goto after_0;
    // 0x00452508: nop

    after_0:
    // 0x0045250C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00452510: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00452514: sw          $zero, 0x2020($at)
    MEM_W(0X2020, ctx->r1) = 0;
    // 0x00452518: jr          $ra
    // 0x0045251C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0045251C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00257BA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00257BA0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00257BA4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00257BA8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00257BAC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x00257BB0: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00257BB4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00257BB8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00257BBC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00257BC0: lh          $v1, 0x996($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X996);
    // 0x00257BC4: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x00257BC8: lw          $a0, 0x5C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5C);
    // 0x00257BCC: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x00257BD0: beq         $v0, $zero, L_00257C78
    if (ctx->r2 == 0) {
        // 0x00257BD4: addiu       $s0, $v1, 0x1
        ctx->r16 = ADD32(ctx->r3, 0X1);
            goto L_00257C78;
    }
    // 0x00257BD4: addiu       $s0, $v1, 0x1
    ctx->r16 = ADD32(ctx->r3, 0X1);
    // 0x00257BD8: slt         $v0, $s0, $a0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x00257BDC: beq         $v0, $zero, L_00257C74
    if (ctx->r2 == 0) {
        // 0x00257BE0: sll         $v1, $s0, 2
        ctx->r3 = S32(ctx->r16 << 2);
            goto L_00257C74;
    }
    // 0x00257BE0: sll         $v1, $s0, 2
    ctx->r3 = S32(ctx->r16 << 2);
    // 0x00257BE4: addiu       $s4, $zero, 0x17
    ctx->r20 = ADD32(0, 0X17);
    // 0x00257BE8: addiu       $s3, $zero, 0xC
    ctx->r19 = ADD32(0, 0XC);
    // 0x00257BEC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00257BF0: addiu       $v0, $v0, -0x9E8
    ctx->r2 = ADD32(ctx->r2, -0X9E8);
    // 0x00257BF4: addu        $s1, $v1, $v0
    ctx->r17 = ADD32(ctx->r3, ctx->r2);
L_00257BF8:
    // 0x00257BF8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00257BFC: jal         0x0024E700
    // 0x00257C00: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0024E700(rdram, ctx);
        goto after_0;
    // 0x00257C00: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00257C04: beq         $v0, $zero, L_00257C5C
    if (ctx->r2 == 0) {
        // 0x00257C08: addu        $v0, $s2, $s0
        ctx->r2 = ADD32(ctx->r18, ctx->r16);
            goto L_00257C5C;
    }
    // 0x00257C08: addu        $v0, $s2, $s0
    ctx->r2 = ADD32(ctx->r18, ctx->r16);
    // 0x00257C0C: lb          $v0, 0x972($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X972);
    // 0x00257C10: beq         $v0, $zero, L_00257C5C
    if (ctx->r2 == 0) {
        // 0x00257C14: nop
    
            goto L_00257C5C;
    }
    // 0x00257C14: nop

    // 0x00257C18: beq         $s0, $s4, L_00257C5C
    if (ctx->r16 == ctx->r20) {
        // 0x00257C1C: nop
    
            goto L_00257C5C;
    }
    // 0x00257C1C: nop

    // 0x00257C20: beq         $s0, $s3, L_00257C5C
    if (ctx->r16 == ctx->r19) {
        // 0x00257C24: nop
    
            goto L_00257C5C;
    }
    // 0x00257C24: nop

    // 0x00257C28: lw          $v0, 0x140($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X140);
    // 0x00257C2C: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x00257C30: beq         $v0, $zero, L_00257C48
    if (ctx->r2 == 0) {
        // 0x00257C34: nop
    
            goto L_00257C48;
    }
    // 0x00257C34: nop

    // 0x00257C38: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00257C3C: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x00257C40: j           L_00257C54
    // 0x00257C44: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
        goto L_00257C54;
    // 0x00257C44: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
L_00257C48:
    // 0x00257C48: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00257C4C: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x00257C50: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
L_00257C54:
    // 0x00257C54: bne         $v0, $zero, L_00257D28
    if (ctx->r2 != 0) {
        // 0x00257C58: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_00257D28;
    }
    // 0x00257C58: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_00257C5C:
    // 0x00257C5C: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x00257C60: lw          $v0, 0x5C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5C);
    // 0x00257C64: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00257C68: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00257C6C: bne         $v0, $zero, L_00257BF8
    if (ctx->r2 != 0) {
        // 0x00257C70: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_00257BF8;
    }
    // 0x00257C70: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_00257C74:
    // 0x00257C74: lh          $v1, 0x996($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X996);
L_00257C78:
    // 0x00257C78: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x00257C7C: lw          $v0, 0x58($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X58);
    // 0x00257C80: addiu       $s0, $v1, -0x1
    ctx->r16 = ADD32(ctx->r3, -0X1);
    // 0x00257C84: slt         $v0, $v0, $s0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x00257C88: beq         $v0, $zero, L_00257D14
    if (ctx->r2 == 0) {
        // 0x00257C8C: addiu       $s3, $zero, 0xC
        ctx->r19 = ADD32(0, 0XC);
            goto L_00257D14;
    }
    // 0x00257C8C: addiu       $s3, $zero, 0xC
    ctx->r19 = ADD32(0, 0XC);
    // 0x00257C90: sll         $v1, $s0, 2
    ctx->r3 = S32(ctx->r16 << 2);
    // 0x00257C94: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00257C98: addiu       $v0, $v0, -0x9E8
    ctx->r2 = ADD32(ctx->r2, -0X9E8);
    // 0x00257C9C: addu        $s1, $v1, $v0
    ctx->r17 = ADD32(ctx->r3, ctx->r2);
L_00257CA0:
    // 0x00257CA0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00257CA4: jal         0x0024E700
    // 0x00257CA8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0024E700(rdram, ctx);
        goto after_1;
    // 0x00257CA8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00257CAC: beq         $v0, $zero, L_00257CFC
    if (ctx->r2 == 0) {
        // 0x00257CB0: addu        $v0, $s2, $s0
        ctx->r2 = ADD32(ctx->r18, ctx->r16);
            goto L_00257CFC;
    }
    // 0x00257CB0: addu        $v0, $s2, $s0
    ctx->r2 = ADD32(ctx->r18, ctx->r16);
    // 0x00257CB4: lb          $v0, 0x972($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X972);
    // 0x00257CB8: beq         $v0, $zero, L_00257CFC
    if (ctx->r2 == 0) {
        // 0x00257CBC: nop
    
            goto L_00257CFC;
    }
    // 0x00257CBC: nop

    // 0x00257CC0: beq         $s0, $s3, L_00257CFC
    if (ctx->r16 == ctx->r19) {
        // 0x00257CC4: nop
    
            goto L_00257CFC;
    }
    // 0x00257CC4: nop

    // 0x00257CC8: lw          $v0, 0x140($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X140);
    // 0x00257CCC: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x00257CD0: beq         $v0, $zero, L_00257CE8
    if (ctx->r2 == 0) {
        // 0x00257CD4: nop
    
            goto L_00257CE8;
    }
    // 0x00257CD4: nop

    // 0x00257CD8: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00257CDC: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x00257CE0: j           L_00257CF4
    // 0x00257CE4: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
        goto L_00257CF4;
    // 0x00257CE4: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
L_00257CE8:
    // 0x00257CE8: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00257CEC: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x00257CF0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
L_00257CF4:
    // 0x00257CF4: bne         $v0, $zero, L_00257D28
    if (ctx->r2 != 0) {
        // 0x00257CF8: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_00257D28;
    }
    // 0x00257CF8: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_00257CFC:
    // 0x00257CFC: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x00257D00: lw          $v0, 0x58($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X58);
    // 0x00257D04: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x00257D08: slt         $v0, $v0, $s0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x00257D0C: bne         $v0, $zero, L_00257CA0
    if (ctx->r2 != 0) {
        // 0x00257D10: addiu       $s1, $s1, -0x4
        ctx->r17 = ADD32(ctx->r17, -0X4);
            goto L_00257CA0;
    }
    // 0x00257D10: addiu       $s1, $s1, -0x4
    ctx->r17 = ADD32(ctx->r17, -0X4);
L_00257D14:
    // 0x00257D14: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00257D18: lbu         $v1, -0x550F($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X550F);
    // 0x00257D1C: bne         $v1, $zero, L_00257D28
    if (ctx->r3 != 0) {
        // 0x00257D20: addiu       $v0, $zero, 0x18
        ctx->r2 = ADD32(0, 0X18);
            goto L_00257D28;
    }
    // 0x00257D20: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x00257D24: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00257D28:
    // 0x00257D28: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00257D2C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00257D30: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00257D34: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00257D38: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00257D3C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00257D40: jr          $ra
    // 0x00257D44: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00257D44: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00200904(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00200904: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00200908: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x0020090C: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x00200910: beq         $a2, $zero, L_0020092C
    if (ctx->r6 == 0) {
        // 0x00200914: nop
    
            goto L_0020092C;
    }
    // 0x00200914: nop

    // 0x00200918: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x0020091C: addu        $v1, $a1, $v0
    ctx->r3 = ADD32(ctx->r5, ctx->r2);
    // 0x00200920: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x00200924: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x00200928: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
L_0020092C:
    // 0x0020092C: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x00200930: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x00200934: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x00200938: beq         $a2, $zero, L_00200954
    if (ctx->r6 == 0) {
        // 0x0020093C: nop
    
            goto L_00200954;
    }
    // 0x0020093C: nop

    // 0x00200940: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00200944: addu        $v1, $a1, $v0
    ctx->r3 = ADD32(ctx->r5, ctx->r2);
    // 0x00200948: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x0020094C: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x00200950: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
L_00200954:
    // 0x00200954: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00200958: bne         $v0, $a1, L_00200970
    if (ctx->r2 != ctx->r5) {
        // 0x0020095C: nop
    
            goto L_00200970;
    }
    // 0x0020095C: nop

    // 0x00200960: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x00200964: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x00200968: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0020096C: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
L_00200970:
    // 0x00200970: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00200974: bne         $v0, $a1, L_0020098C
    if (ctx->r2 != ctx->r5) {
        // 0x00200978: nop
    
            goto L_0020098C;
    }
    // 0x00200978: nop

    // 0x0020097C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00200980: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x00200984: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00200988: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
L_0020098C:
    // 0x0020098C: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x00200990: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x00200994: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00200998: beq         $v1, $zero, L_002009C0
    if (ctx->r3 == 0) {
        // 0x0020099C: sw          $v0, 0x10($a0)
        MEM_W(0X10, ctx->r4) = ctx->r2;
            goto L_002009C0;
    }
    // 0x0020099C: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
    // 0x002009A0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x002009A4: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x002009A8: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x002009AC: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x002009B0: lw          $v1, 0xC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC);
    // 0x002009B4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x002009B8: j           L_002009D0
    // 0x002009BC: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
        goto L_002009D0;
    // 0x002009BC: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
L_002009C0:
    // 0x002009C0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x002009C4: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x002009C8: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x002009CC: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
L_002009D0:
    // 0x002009D0: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x002009D4: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x002009D8: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x002009DC: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x002009E0: sw          $a1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r5;
    // 0x002009E4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x002009E8: jr          $ra
    // 0x002009EC: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
    return;
    // 0x002009EC: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_004419E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00408AD0:
    // 0x004419E0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x004419E4: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x004419E8: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x004419EC: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x004419F0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x004419F4: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x004419F8: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x004419FC: addiu       $a2, $s2, 0x18
    ctx->r6 = ADD32(ctx->r18, 0X18);
    // 0x00441A00: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x00441A04: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x00441A08: lw          $a1, 0x14($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X14);
    // 0x00441A0C: jal         0x0021EBE4
    // 0x00441A10: addiu       $a3, $s2, 0x1C
    ctx->r7 = ADD32(ctx->r18, 0X1C);
    func_0021EBE4(rdram, ctx);
        goto after_0;
    // 0x00441A10: addiu       $a3, $s2, 0x1C
    ctx->r7 = ADD32(ctx->r18, 0X1C);
    after_0:
    // 0x00441A14: lw          $v0, 0x18($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X18);
    // 0x00441A18: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x00441A1C: sllv        $v0, $s0, $v0
    ctx->r2 = S32(ctx->r16 << (ctx->r2 & 31));
    // 0x00441A20: sw          $v0, 0x14C($s3)
    MEM_W(0X14C, ctx->r19) = ctx->r2;
    // 0x00441A24: lw          $v0, 0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4);
    // 0x00441A28: beq         $v0, $zero, L_00441A3C
    if (ctx->r2 == 0) {
        // 0x00441A2C: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_00441A3C;
    }
    // 0x00441A2C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00441A30: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00441A34: jal         0x0021DC84
    // 0x00441A38: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_0021DC84(rdram, ctx);
        goto after_1;
    // 0x00441A38: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_1:
L_00441A3C:
    // 0x00441A3C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00441A40: beq         $v0, $zero, L_00441B04
    if (ctx->r2 == 0) {
        // 0x00441A44: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00441B04;
    }
    // 0x00441A44: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00441A48: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x00441A4C: lw          $v1, 0x280($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X280);
    // 0x00441A50: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00441A54: lw          $a1, -0x3528($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3528);
    // 0x00441A58: lui         $v0, 0x22
    ctx->r2 = S32(0X22 << 16);
    // 0x00441A5C: addiu       $v0, $v0, 0x208
    ctx->r2 = ADD32(ctx->r2, 0X208);
    // 0x00441A60: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00441A64: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00441A68: addiu       $v0, $v0, 0x570
    ctx->r2 = ADD32(ctx->r2, 0X570);
    // 0x00441A6C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00441A70: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x00441A74: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x00441A78: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00441A7C: lw          $a2, 0xC($s2)
    ctx->r6 = MEM_W(ctx->r18, 0XC);
    // 0x00441A80: jal         0x00203CA0
    // 0x00441A84: or          $a1, $v1, $a1
    ctx->r5 = ctx->r3 | ctx->r5;
    func_00203CA0(rdram, ctx);
        goto after_2;
    // 0x00441A84: or          $a1, $v1, $a1
    ctx->r5 = ctx->r3 | ctx->r5;
    after_2:
    // 0x00441A88: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x00441A8C: beq         $s1, $zero, L_00441B04
    if (ctx->r17 == 0) {
        // 0x00441A90: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00441B04;
    }
    // 0x00441A90: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00441A94: jal         0x0020565C
    // 0x00441A98: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0020565C(rdram, ctx);
        goto after_3;
    // 0x00441A98: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x00441A9C: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x00441AA0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00441AA4: bne         $v0, $s0, L_00441ACC
    if (ctx->r2 != ctx->r16) {
        // 0x00441AA8: addiu       $s0, $v1, 0x8
        ctx->r16 = ADD32(ctx->r3, 0X8);
            goto L_00441ACC;
    }
    // 0x00441AA8: addiu       $s0, $v1, 0x8
    ctx->r16 = ADD32(ctx->r3, 0X8);
    // 0x00441AAC: lw          $s0, 0x4($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X4);
    // 0x00441AB0: lw          $a1, 0x8($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X8);
    // 0x00441AB4: addu        $s0, $v1, $s0
    ctx->r16 = ADD32(ctx->r3, ctx->r16);
    // 0x00441AB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00441ABC: jal         0x00214F68
    // 0x00441AC0: addu        $a1, $v1, $a1
    ctx->r5 = ADD32(ctx->r3, ctx->r5);
    entry_00214F68(rdram, ctx);
        goto after_4;
    // 0x00441AC0: addu        $a1, $v1, $a1
    ctx->r5 = ADD32(ctx->r3, ctx->r5);
    after_4:
    // 0x00441AC4: j           L_00408AD0
    // 0x00441AC8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    entry_00408AD0(rdram, ctx);
    return;
    // 0x00441AC8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_00441ACC:
    // 0x00441ACC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00441AD0: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00441AD4: lw          $v1, -0x49C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X49C);
    // 0x00441AD8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00441ADC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00441AE0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00441AE4: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x00441AE8: lw          $a0, 0xC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XC);
    // 0x00441AEC: lw          $a1, 0x98($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X98);
    // 0x00441AF0: jal         0x0020B6A0
    // 0x00441AF4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_0020B6A0(rdram, ctx);
        goto after_5;
    // 0x00441AF4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_5:
    // 0x00441AF8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00441AFC: jal         0x002051F4
    // 0x00441B00: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002051F4(rdram, ctx);
        goto after_6;
    // 0x00441B00: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_6:
L_00441B04:
    // 0x00441B04: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x00441B08: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x00441B0C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x00441B10: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x00441B14: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x00441B18: jr          $ra
    // 0x00441B1C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00441B1C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_0025AAD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025AAD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025AAD4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025AAD8: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025AADC: lhu         $a3, 0x7C($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X7C);
    // 0x0025AAE0: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025AAE4: addiu       $a2, $a2, 0x3F0
    ctx->r6 = ADD32(ctx->r6, 0X3F0);
    // 0x0025AAE8: jal         0x00245A98
    // 0x0025AAEC: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025AAEC: nop

    after_0:
    // 0x0025AAF0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025AAF4: jr          $ra
    // 0x0025AAF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025AAF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_004163C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004163C0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x004163C4: sdc1        $f21, 0x28($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X28, ctx->r29);
    // 0x004163C8: mtc1        $a1, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r5;
    // 0x004163CC: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x004163D0: mtc1        $a2, $f22
    ctx->f22.u32l = ctx->r6;
    // 0x004163D4: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x004163D8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x004163DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004163E0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x004163E4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x004163E8: beq         $s0, $zero, L_00416430
    if (ctx->r16 == 0) {
        // 0x004163EC: sw          $s1, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r17;
            goto L_00416430;
    }
    // 0x004163EC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x004163F0: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x004163F4: beq         $a0, $zero, L_00416430
    if (ctx->r4 == 0) {
        // 0x004163F8: addiu       $s1, $zero, 0xA
        ctx->r17 = ADD32(0, 0XA);
            goto L_00416430;
    }
    // 0x004163F8: addiu       $s1, $zero, 0xA
    ctx->r17 = ADD32(0, 0XA);
    // 0x004163FC: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
L_00416400:
    // 0x00416400: beq         $a0, $s1, L_00416430
    if (ctx->r4 == ctx->r17) {
        // 0x00416404: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00416430;
    }
    // 0x00416404: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00416408: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x0041640C: mfc1        $a2, $f21
    ctx->r6 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x00416410: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x00416414: jal         0x004162FC
    // 0x00416418: nop

    func_004162FC(rdram, ctx);
        goto after_0;
    // 0x00416418: nop

    after_0:
    // 0x0041641C: beq         $s0, $zero, L_00416430
    if (ctx->r16 == 0) {
        // 0x00416420: add.s       $f20, $f20, $f0
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
            goto L_00416430;
    }
    // 0x00416420: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x00416424: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x00416428: bnel        $a0, $zero, L_00416400
    if (ctx->r4 != 0) {
        // 0x0041642C: andi        $a0, $a0, 0xFF
        ctx->r4 = ctx->r4 & 0XFF;
            goto L_00416400;
    }
    goto skip_0;
    // 0x0041642C: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    skip_0:
L_00416430:
    // 0x00416430: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
    // 0x00416434: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00416438: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0041643C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00416440: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x00416444: ldc1        $f21, 0x28($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X28);
    // 0x00416448: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x0041644C: jr          $ra
    // 0x00416450: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00416450: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00289700(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00289700: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00289704: lw          $v0, 0x5D28($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5D28);
    // 0x00289708: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0028970C: beq         $v0, $zero, L_00289720
    if (ctx->r2 == 0) {
        // 0x00289710: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_00289720;
    }
    // 0x00289710: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00289714: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00289718: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x0028971C: sw          $zero, 0x3FD0($at)
    MEM_W(0X3FD0, ctx->r1) = 0;
L_00289720:
    // 0x00289720: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00289724: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x00289728: lwc1        $f1, 0x3FD0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X3FD0);
    // 0x0028972C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00289730: lwc1        $f0, -0x61EC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X61EC);
    // 0x00289734: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00289738: nop

    // 0x0028973C: bc1f        L_0028974C
    if (!c1cs) {
        // 0x00289740: nop
    
            goto L_0028974C;
    }
    // 0x00289740: nop

    // 0x00289744: jal         0x00288C5C
    // 0x00289748: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_00288C5C(rdram, ctx);
        goto after_0;
    // 0x00289748: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_0:
L_0028974C:
    // 0x0028974C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00289750: jr          $ra
    // 0x00289754: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00289754: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0040A5B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040A5B4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0040A5B8: lui         $v1, 0xE7FF
    ctx->r3 = S32(0XE7FF << 16);
    // 0x0040A5BC: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x0040A5C0: addiu       $a2, $a2, -0x490
    ctx->r6 = ADD32(ctx->r6, -0X490);
    // 0x0040A5C4: addiu       $v0, $zero, 0x600
    ctx->r2 = ADD32(0, 0X600);
    // 0x0040A5C8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x0040A5CC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0040A5D0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0040A5D4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0040A5D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0040A5DC: sw          $v0, 0x688($a2)
    MEM_W(0X688, ctx->r6) = ctx->r2;
    // 0x0040A5E0: addiu       $v0, $zero, 0x900
    ctx->r2 = ADD32(0, 0X900);
    // 0x0040A5E4: sw          $v0, 0x68C($a2)
    MEM_W(0X68C, ctx->r6) = ctx->r2;
    // 0x0040A5E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0040A5EC: sw          $v0, 0x65C($a2)
    MEM_W(0X65C, ctx->r6) = ctx->r2;
    // 0x0040A5F0: sw          $zero, 0x67C($a2)
    MEM_W(0X67C, ctx->r6) = 0;
    // 0x0040A5F4: lw          $v0, 0x27C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X27C);
    // 0x0040A5F8: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0040A5FC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0040A600: sw          $v0, 0x27C($a0)
    MEM_W(0X27C, ctx->r4) = ctx->r2;
    // 0x0040A604: lw          $v0, 0x65C($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X65C);
    // 0x0040A608: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0040A60C: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x0040A610: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0040A614: lw          $v0, 0x1DE4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1DE4);
    // 0x0040A618: sw          $v0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r2;
    // 0x0040A61C: lw          $v0, 0x65C($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X65C);
    // 0x0040A620: lui         $a0, 0x1
    ctx->r4 = S32(0X1 << 16);
    // 0x0040A624: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0040A628: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x0040A62C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0040A630: lw          $v1, 0x1DFC($at)
    ctx->r3 = MEM_W(ctx->r1, 0X1DFC);
    // 0x0040A634: ori         $a0, $a0, 0x2C00
    ctx->r4 = ctx->r4 | 0X2C00;
    // 0x0040A638: sw          $v1, 0x664($a2)
    MEM_W(0X664, ctx->r6) = ctx->r3;
    // 0x0040A63C: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x0040A640: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0040A644: lw          $a3, 0x1DF0($at)
    ctx->r7 = MEM_W(ctx->r1, 0X1DF0);
    // 0x0040A648: ori         $v0, $zero, 0x9600
    ctx->r2 = 0 | 0X9600;
    // 0x0040A64C: sw          $v0, 0x220($a2)
    MEM_W(0X220, ctx->r6) = ctx->r2;
    // 0x0040A650: sw          $v0, 0x80($a2)
    MEM_W(0X80, ctx->r6) = ctx->r2;
    // 0x0040A654: sw          $a0, 0x678($a2)
    MEM_W(0X678, ctx->r6) = ctx->r4;
    // 0x0040A658: sw          $a0, 0x674($a2)
    MEM_W(0X674, ctx->r6) = ctx->r4;
    // 0x0040A65C: sw          $a3, 0x660($a2)
    MEM_W(0X660, ctx->r6) = ctx->r7;
    // 0x0040A660: lb          $v1, 0x34($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X34);
    // 0x0040A664: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x0040A668: beq         $v1, $v0, L_0040A6D4
    if (ctx->r3 == ctx->r2) {
        // 0x0040A66C: addu        $s2, $a3, $zero
        ctx->r18 = ADD32(ctx->r7, 0);
            goto L_0040A6D4;
    }
    // 0x0040A66C: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    // 0x0040A670: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x0040A674: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0040A678: addiu       $s1, $zero, 0x18
    ctx->r17 = ADD32(0, 0X18);
L_0040A67C:
    // 0x0040A67C: srav        $v0, $s2, $s0
    ctx->r2 = S32(SIGNED(ctx->r18) >> (ctx->r16 & 31));
    // 0x0040A680: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0040A684: beql        $v0, $zero, L_0040A6A4
    if (ctx->r2 == 0) {
        // 0x0040A688: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_0040A6A4;
    }
    goto skip_0;
    // 0x0040A688: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x0040A68C: addu        $a0, $s3, $s1
    ctx->r4 = ADD32(ctx->r19, ctx->r17);
    // 0x0040A690: lui         $a1, 0x43
    ctx->r5 = S32(0X43 << 16);
    // 0x0040A694: addiu       $a1, $a1, 0x1E08
    ctx->r5 = ADD32(ctx->r5, 0X1E08);
    // 0x0040A698: jal         0x00236314
    // 0x0040A69C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_00236314(rdram, ctx);
        goto after_0;
    // 0x0040A69C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_0:
    // 0x0040A6A0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_0040A6A4:
    // 0x0040A6A4: slti        $v0, $s0, 0xF
    ctx->r2 = SIGNED(ctx->r16) < 0XF ? 1 : 0;
    // 0x0040A6A8: bne         $v0, $zero, L_0040A67C
    if (ctx->r2 != 0) {
        // 0x0040A6AC: addiu       $s1, $s1, 0x68
        ctx->r17 = ADD32(ctx->r17, 0X68);
            goto L_0040A67C;
    }
    // 0x0040A6AC: addiu       $s1, $s1, 0x68
    ctx->r17 = ADD32(ctx->r17, 0X68);
    // 0x0040A6B0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_0040A6B4:
    // 0x0040A6B4: lui         $a1, 0x43
    ctx->r5 = S32(0X43 << 16);
    // 0x0040A6B8: addiu       $a1, $a1, 0x1DDC
    ctx->r5 = ADD32(ctx->r5, 0X1DDC);
    // 0x0040A6BC: jal         0x00409500
    // 0x0040A6C0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_00409500(rdram, ctx);
        goto after_1;
    // 0x0040A6C0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
    // 0x0040A6C4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0040A6C8: slti        $v0, $s0, 0x3
    ctx->r2 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
    // 0x0040A6CC: bne         $v0, $zero, L_0040A6B4
    if (ctx->r2 != 0) {
        // 0x0040A6D0: nop
    
            goto L_0040A6B4;
    }
    // 0x0040A6D0: nop

L_0040A6D4:
    // 0x0040A6D4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x0040A6D8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0040A6DC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0040A6E0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0040A6E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0040A6E8: jr          $ra
    // 0x0040A6EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0040A6EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_002924CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002924CC: lw          $v1, 0x64($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X64);
    // 0x002924D0: beq         $v1, $zero, L_00292528
    if (ctx->r3 == 0) {
        // 0x002924D4: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_00292528;
    }
    // 0x002924D4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x002924D8: addiu       $v0, $v1, 0x4
    ctx->r2 = ADD32(ctx->r3, 0X4);
L_002924DC:
    // 0x002924DC: bnel        $v0, $a1, L_0029251C
    if (ctx->r2 != ctx->r5) {
        // 0x002924E0: addu        $a2, $v1, $zero
        ctx->r6 = ADD32(ctx->r3, 0);
            goto L_0029251C;
    }
    goto skip_0;
    // 0x002924E0: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    skip_0:
    // 0x002924E4: beq         $a2, $zero, L_002924F8
    if (ctx->r6 == 0) {
        // 0x002924E8: nop
    
            goto L_002924F8;
    }
    // 0x002924E8: nop

    // 0x002924EC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x002924F0: j           L_00292500
    // 0x002924F4: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
        goto L_00292500;
    // 0x002924F4: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
L_002924F8:
    // 0x002924F8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x002924FC: sw          $v0, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r2;
L_00292500:
    // 0x00292500: lw          $v0, 0x68($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X68);
    // 0x00292504: beql        $v1, $v0, L_0029250C
    if (ctx->r3 == ctx->r2) {
        // 0x00292508: sw          $a2, 0x68($a0)
        MEM_W(0X68, ctx->r4) = ctx->r6;
            goto L_0029250C;
    }
    goto skip_1;
    // 0x00292508: sw          $a2, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r6;
    skip_1:
L_0029250C:
    // 0x0029250C: lw          $v0, 0x6C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X6C);
    // 0x00292510: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00292514: jr          $ra
    // 0x00292518: sw          $v1, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r3;
    return;
    // 0x00292518: sw          $v1, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r3;
L_0029251C:
    // 0x0029251C: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x00292520: bne         $v1, $zero, L_002924DC
    if (ctx->r3 != 0) {
        // 0x00292524: addiu       $v0, $v1, 0x4
        ctx->r2 = ADD32(ctx->r3, 0X4);
            goto L_002924DC;
    }
    // 0x00292524: addiu       $v0, $v1, 0x4
    ctx->r2 = ADD32(ctx->r3, 0X4);
L_00292528:
    // 0x00292528: jr          $ra
    // 0x0029252C: nop

    return;
    // 0x0029252C: nop

;}
RECOMP_FUNC void func_002812BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002812BC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x002812C0: sw          $zero, 0xF4($a0)
    MEM_W(0XF4, ctx->r4) = 0;
    // 0x002812C4: jr          $ra
    // 0x002812C8: sw          $v0, 0xF0($a0)
    MEM_W(0XF0, ctx->r4) = ctx->r2;
    return;
    // 0x002812C8: sw          $v0, 0xF0($a0)
    MEM_W(0XF0, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_002561B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002561B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002561BC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002561C0: jal         0x00255FF4
    // 0x002561C4: nop

    func_00255FF4(rdram, ctx);
        goto after_0;
    // 0x002561C4: nop

    after_0:
    // 0x002561C8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002561CC: jr          $ra
    // 0x002561D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002561D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0029846C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029846C: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // turok2: reconnected split function: a stray ELF symbol at 0x00298470 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00298470(rdram, ctx);
;}
RECOMP_FUNC void func_004468B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0040D91C:
    // 0x004468B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
L_0040D964:
    // 0x004468B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004468B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x004468BC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x004468C0: addiu       $v0, $v0, 0x1A90
    ctx->r2 = ADD32(ctx->r2, 0X1A90);
    // 0x004468C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x004468C8: sw          $v0, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r2;
    // 0x004468CC: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x004468D0: addiu       $v0, $v0, -0x2090
    ctx->r2 = ADD32(ctx->r2, -0X2090);
    // 0x004468D4: sw          $v0, 0xF0($a1)
    MEM_W(0XF0, ctx->r5) = ctx->r2;
    // 0x004468D8: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x004468DC: addiu       $v0, $v0, -0x224C
    ctx->r2 = ADD32(ctx->r2, -0X224C);
    // 0x004468E0: sw          $v0, 0xF8($a1)
    MEM_W(0XF8, ctx->r5) = ctx->r2;
    // 0x004468E4: lui         $v0, 0x26
    ctx->r2 = S32(0X26 << 16);
    // 0x004468E8: addiu       $v0, $v0, -0x1B48
    ctx->r2 = ADD32(ctx->r2, -0X1B48);
    // 0x004468EC: sw          $v0, 0x108($a1)
    MEM_W(0X108, ctx->r5) = ctx->r2;
    // 0x004468F0: lhu         $v1, 0xB8($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XB8);
    // 0x004468F4: addiu       $v0, $zero, 0x456
    ctx->r2 = ADD32(0, 0X456);
    // 0x004468F8: bne         $v1, $v0, L_00446910
    if (ctx->r3 != ctx->r2) {
        // 0x004468FC: nop
    
            goto L_00446910;
    }
    // 0x004468FC: nop

    // 0x00446900: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x00446904: addiu       $v0, $v0, -0x1160
    ctx->r2 = ADD32(ctx->r2, -0X1160);
    // 0x00446908: j           L_0040D91C
    // 0x0044690C: sw          $v0, 0xF4($a1)
    MEM_W(0XF4, ctx->r5) = ctx->r2;
    entry_0040D91C(rdram, ctx);
    return;
    // 0x0044690C: sw          $v0, 0xF4($a1)
    MEM_W(0XF4, ctx->r5) = ctx->r2;
L_00446910:
    // 0x00446910: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x00446914: addiu       $v0, $v0, -0x1250
    ctx->r2 = ADD32(ctx->r2, -0X1250);
    // 0x00446918: sw          $v0, 0xF4($a1)
    MEM_W(0XF4, ctx->r5) = ctx->r2;
    // 0x0044691C: lui         $v1, 0xEFFF
    ctx->r3 = S32(0XEFFF << 16);
    // 0x00446920: sw          $zero, 0x10C($a1)
    MEM_W(0X10C, ctx->r5) = 0;
    // 0x00446924: sw          $zero, 0x118($a1)
    MEM_W(0X118, ctx->r5) = 0;
    // 0x00446928: sw          $zero, 0x11C($a1)
    MEM_W(0X11C, ctx->r5) = 0;
    // 0x0044692C: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x00446930: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x00446934: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00446938: and         $a0, $v0, $v1
    ctx->r4 = ctx->r2 & ctx->r3;
    // 0x0044693C: lhu         $v1, 0xB8($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XB8);
    // 0x00446940: addiu       $v0, $zero, 0x456
    ctx->r2 = ADD32(0, 0X456);
    // 0x00446944: bne         $v1, $v0, L_00446958
    if (ctx->r3 != ctx->r2) {
        // 0x00446948: sw          $a0, 0xD4($s0)
        MEM_W(0XD4, ctx->r16) = ctx->r4;
            goto L_00446958;
    }
    // 0x00446948: sw          $a0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r4;
    // 0x0044694C: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x00446950: j           L_0040D964
    // 0x00446954: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    entry_0040D964(rdram, ctx);
    return;
    // 0x00446954: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
L_00446958:
    // 0x00446958: lui         $v0, 0xFFFD
    ctx->r2 = S32(0XFFFD << 16);
    // 0x0044695C: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x00446960: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x00446964: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x00446968: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0044696C: lw          $v0, -0x6770($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6770);
    // 0x00446970: beq         $v0, $zero, L_0044698C
    if (ctx->r2 == 0) {
        // 0x00446974: lui         $v1, 0x6000
        ctx->r3 = S32(0X6000 << 16);
            goto L_0044698C;
    }
    // 0x00446974: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x00446978: sw          $v0, 0x80($a1)
    MEM_W(0X80, ctx->r5) = ctx->r2;
    // 0x0044697C: sw          $v0, 0x88($a1)
    MEM_W(0X88, ctx->r5) = ctx->r2;
    // 0x00446980: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00446984: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00446988: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
L_0044698C:
    // 0x0044698C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00446990: jal         0x00243414
    // 0x00446994: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00446994: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x00446998: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0044699C: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x004469A0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x004469A4: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x004469A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x004469AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004469B0: jr          $ra
    // 0x004469B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004469B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00261F18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00261F18: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00261F1C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00261F20: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00261F24: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00261F28: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00261F2C: lwc1        $f12, 0xBC($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0XBC);
    // 0x00261F30: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261F34: lwc1        $f14, 0x7B4C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X7B4C);
    // 0x00261F38: lui         $a2, 0x3E4C
    ctx->r6 = S32(0X3E4C << 16);
    // 0x00261F3C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x00261F40: jal         0x00211774
    // 0x00261F44: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_00211774(rdram, ctx);
        goto after_0;
    // 0x00261F44: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x00261F48: swc1        $f0, 0xBC($s1)
    MEM_W(0XBC, ctx->r17) = ctx->f0.u32l;
    // 0x00261F4C: lwc1        $f12, 0x1C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x00261F50: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x00261F54: lui         $a2, 0x3F83
    ctx->r6 = S32(0X3F83 << 16);
    // 0x00261F58: ori         $a2, $a2, 0x126F
    ctx->r6 = ctx->r6 | 0X126F;
    // 0x00261F5C: jal         0x00211774
    // 0x00261F60: nop

    func_00211774(rdram, ctx);
        goto after_1;
    // 0x00261F60: nop

    after_1:
    // 0x00261F64: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x00261F68: lwc1        $f1, 0x40($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X40);
    // 0x00261F6C: lwc1        $f0, 0x64($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X64);
    // 0x00261F70: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00261F74: nop

    // 0x00261F78: bc1f        L_00261F9C
    if (!c1cs) {
        // 0x00261F7C: addiu       $a2, $zero, 0x6
        ctx->r6 = ADD32(0, 0X6);
            goto L_00261F9C;
    }
    // 0x00261F7C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x00261F80: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x00261F84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00261F88: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x00261F8C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00261F90: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00261F94: jal         0x00243414
    // 0x00261F98: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x00261F98: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    after_2:
L_00261F9C:
    // 0x00261F9C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00261FA0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00261FA4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00261FA8: jr          $ra
    // 0x00261FAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00261FAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_004035F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004035F8: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x004035FC: lw          $v0, 0x244($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X244);
    // 0x00403600: blez        $v0, L_00403630
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00403604: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_00403630;
    }
    // 0x00403604: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x00403608: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x0040360C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
L_00403610:
    // 0x00403610: lw          $v0, 0x224($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X224);
    // 0x00403614: lb          $v0, 0x174($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X174);
    // 0x00403618: beql        $v0, $a3, L_00403620
    if (ctx->r2 == ctx->r7) {
        // 0x0040361C: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_00403620;
    }
    goto skip_0;
    // 0x0040361C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    skip_0:
L_00403620:
    // 0x00403620: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00403624: slt         $v0, $v1, $a2
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x00403628: bne         $v0, $zero, L_00403610
    if (ctx->r2 != 0) {
        // 0x0040362C: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_00403610;
    }
    // 0x0040362C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_00403630:
    // 0x00403630: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x00403634: lw          $v1, -0x14C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X14C);
    // 0x00403638: beq         $v1, $zero, L_00403658
    if (ctx->r3 == 0) {
        // 0x0040363C: nop
    
            goto L_00403658;
    }
    // 0x0040363C: nop

L_00403640:
    // 0x00403640: lw          $v0, 0x144($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X144);
    // 0x00403644: bgtzl       $v0, L_0040364C
    if (SIGNED(ctx->r2) > 0) {
        // 0x00403648: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_0040364C;
    }
    goto skip_1;
    // 0x00403648: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    skip_1:
L_0040364C:
    // 0x0040364C: lw          $v1, 0x28C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X28C);
    // 0x00403650: bne         $v1, $zero, L_00403640
    if (ctx->r3 != 0) {
        // 0x00403654: nop
    
            goto L_00403640;
    }
    // 0x00403654: nop

L_00403658:
    // 0x00403658: jr          $ra
    // 0x0040365C: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    return;
    // 0x0040365C: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
;}
RECOMP_FUNC void func_0045414C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041B17C:
    // 0x0045414C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
L_0041B1B0:
    // 0x00454150: lw          $v0, -0x5524($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5524);
    // 0x00454154: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00454158: beq         $v0, $zero, L_0045416C
    if (ctx->r2 == 0) {
        // 0x0045415C: lui         $v1, 0x100
        ctx->r3 = S32(0X100 << 16);
            goto L_0045416C;
    }
    // 0x0045415C: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x00454160: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00454164: j           L_0041B17C
    // 0x00454168: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    entry_0041B17C(rdram, ctx);
    return;
    // 0x00454168: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
L_0045416C:
    // 0x0045416C: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x00454170: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00454174: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00454178: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0045417C: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x00454180: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00454184: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x00454188: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0045418C: beq         $v0, $zero, L_004541A4
    if (ctx->r2 == 0) {
        // 0x00454190: nop
    
            goto L_004541A4;
    }
    // 0x00454190: nop

    // 0x00454194: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00454198: addiu       $v0, $v0, 0x57AC
    ctx->r2 = ADD32(ctx->r2, 0X57AC);
    // 0x0045419C: j           L_0041B1B0
    // 0x004541A0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    func_0041B1B0(rdram, ctx);
    return;
    // 0x004541A0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004541A4:
    // 0x004541A4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004541A8: addiu       $v0, $v0, 0x57C8
    ctx->r2 = ADD32(ctx->r2, 0X57C8);
    // 0x004541AC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x004541B0: jr          $ra
    // 0x004541B4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x004541B4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00219328(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00219328: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x0021932C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00219330: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00219334: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x00219338: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0021933C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00219340: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00219344: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00219348: sdc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X38, ctx->r29);
    // 0x0021934C: sdc1        $f21, 0x30($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X30, ctx->r29);
    // 0x00219350: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x00219354: lw          $a0, 0x10($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X10);
    // 0x00219358: bne         $a0, $zero, L_00219368
    if (ctx->r4 != 0) {
        // 0x0021935C: addu        $s4, $a1, $zero
        ctx->r20 = ADD32(ctx->r5, 0);
            goto L_00219368;
    }
    // 0x0021935C: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x00219360: j           L_00219374
    // 0x00219364: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_00219374;
    // 0x00219364: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00219368:
    // 0x00219368: jal         0x00204D90
    // 0x0021936C: nop

    func_00204D90(rdram, ctx);
        goto after_0;
    // 0x0021936C: nop

    after_0:
    // 0x00219370: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
L_00219374:
    // 0x00219374: beq         $v0, $zero, L_002198E4
    if (ctx->r2 == 0) {
        // 0x00219378: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_002198E4;
    }
    // 0x00219378: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0021937C: lw          $v0, 0x10($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X10);
    // 0x00219380: lw          $s0, 0x0($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X0);
    // 0x00219384: jal         0x002017D4
    // 0x00219388: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00219388: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0021938C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00219390: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x00219394: jal         0x002017D4
    // 0x00219398: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x00219398: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_2:
    // 0x0021939C: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x002193A0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x002193A4: jal         0x002017D4
    // 0x002193A8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x002193A8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x002193AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002193B0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x002193B4: lw          $s0, 0xC($s3)
    ctx->r16 = MEM_W(ctx->r19, 0XC);
    // 0x002193B8: lwc1        $f20, 0x0($s3)
    ctx->f20.u32l = MEM_W(ctx->r19, 0X0);
    // 0x002193BC: lh          $v0, 0x8($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X8);
    // 0x002193C0: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x002193C4: mtc1        $v0, $f22
    ctx->f22.u32l = ctx->r2;
    // 0x002193C8: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x002193CC: jal         0x002017D4
    // 0x002193D0: sw          $s1, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r17;
    func_002017D4(rdram, ctx);
        goto after_4;
    // 0x002193D0: sw          $s1, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r17;
    after_4:
    // 0x002193D4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x002193D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x002193DC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x002193E0: jal         0x002017D4
    // 0x002193E4: sw          $v0, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r2;
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x002193E4: sw          $v0, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r2;
    after_5:
    // 0x002193E8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x002193EC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x002193F0: jal         0x002017D4
    // 0x002193F4: sw          $v0, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r2;
    func_002017D4(rdram, ctx);
        goto after_6;
    // 0x002193F4: sw          $v0, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r2;
    after_6:
    // 0x002193F8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x002193FC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00219400: lwc1        $f21, 0x5A58($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X5A58);
    // 0x00219404: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x00219408: nop

    // 0x0021940C: bc1f        L_00219424
    if (!c1cs) {
        // 0x00219410: sw          $v0, 0xC($s4)
        MEM_W(0XC, ctx->r20) = ctx->r2;
            goto L_00219424;
    }
    // 0x00219410: sw          $v0, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r2;
    // 0x00219414: trunc.w.s   $f3, $f20
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 20);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f20.fl);
    // 0x00219418: mfc1        $v0, $f3
    ctx->r2 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0021941C: j           L_00219448
    // 0x00219420: nop

        goto L_00219448;
    // 0x00219420: nop

L_00219424:
    // 0x00219424: trunc.w.s   $f3, $f20
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 20);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f20.fl);
    // 0x00219428: mfc1        $v0, $f3
    ctx->r2 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0021942C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00219430: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00219434: c.eq.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl == ctx->f20.fl;
    // 0x00219438: nop

    // 0x0021943C: bc1tl       L_00219454
    if (c1cs) {
        // 0x00219440: sub.s       $f0, $f20, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f0.fl;
            goto L_00219454;
    }
    goto skip_0;
    // 0x00219440: sub.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f0.fl;
    skip_0:
    // 0x00219444: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_00219448:
    // 0x00219448: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0021944C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00219450: sub.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f0.fl;
L_00219454:
    // 0x00219454: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x00219458: bne         $s0, $v0, L_002194E8
    if (ctx->r16 != ctx->r2) {
        // 0x0021945C: swc1        $f0, 0x20($s4)
        MEM_W(0X20, ctx->r20) = ctx->f0.u32l;
            goto L_002194E8;
    }
    // 0x0021945C: swc1        $f0, 0x20($s4)
    MEM_W(0X20, ctx->r20) = ctx->f0.u32l;
    // 0x00219460: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00219464: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x00219468: nop

    // 0x0021946C: bc1f        L_00219484
    if (!c1cs) {
        // 0x00219470: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00219484;
    }
    // 0x00219470: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00219474: trunc.w.s   $f3, $f20
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 20);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f20.fl);
    // 0x00219478: mfc1        $a1, $f3
    ctx->r5 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0021947C: j           L_002194AC
    // 0x00219480: nop

        goto L_002194AC;
    // 0x00219480: nop

L_00219484:
    // 0x00219484: trunc.w.s   $f3, $f20
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 20);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f20.fl);
    // 0x00219488: mfc1        $v0, $f3
    ctx->r2 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0021948C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00219490: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00219494: c.eq.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl == ctx->f20.fl;
    // 0x00219498: nop

    // 0x0021949C: bc1f        L_002194A8
    if (!c1cs) {
        // 0x002194A0: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_002194A8;
    }
    // 0x002194A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x002194A4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_002194A8:
    // 0x002194A8: subu        $a1, $v0, $a1
    ctx->r5 = SUB32(ctx->r2, ctx->r5);
L_002194AC:
    // 0x002194AC: mtc1        $a1, $f0
    ctx->f0.u32l = ctx->r5;
    // 0x002194B0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002194B4: c.le.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl <= ctx->f0.fl;
    // 0x002194B8: nop

    // 0x002194BC: bc1tl       L_002194C4
    if (c1cs) {
        // 0x002194C0: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_002194C4;
    }
    goto skip_1;
    // 0x002194C0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    skip_1:
L_002194C4:
    // 0x002194C4: addiu       $v1, $a1, 0x1
    ctx->r3 = ADD32(ctx->r5, 0X1);
    // 0x002194C8: mtc1        $v1, $f0
    ctx->f0.u32l = ctx->r3;
    // 0x002194CC: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002194D0: c.le.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl <= ctx->f0.fl;
    // 0x002194D4: nop

    // 0x002194D8: bc1tl       L_00219798
    if (c1cs) {
        // 0x002194DC: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00219798;
    }
    goto skip_2;
    // 0x002194DC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    skip_2:
    // 0x002194E0: j           L_00219798
    // 0x002194E4: nop

        goto L_00219798;
    // 0x002194E4: nop

L_002194E8:
    // 0x002194E8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x002194EC: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x002194F0: nop

    // 0x002194F4: bc1f        L_0021950C
    if (!c1cs) {
        // 0x002194F8: nop
    
            goto L_0021950C;
    }
    // 0x002194F8: nop

    // 0x002194FC: trunc.w.s   $f3, $f20
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 20);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f20.fl);
    // 0x00219500: mfc1        $a1, $f3
    ctx->r5 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00219504: j           L_00219534
    // 0x00219508: nop

        goto L_00219534;
    // 0x00219508: nop

L_0021950C:
    // 0x0021950C: trunc.w.s   $f3, $f20
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 20);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f20.fl);
    // 0x00219510: mfc1        $v0, $f3
    ctx->r2 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00219514: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00219518: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0021951C: c.eq.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl == ctx->f20.fl;
    // 0x00219520: nop

    // 0x00219524: bc1f        L_00219530
    if (!c1cs) {
        // 0x00219528: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_00219530;
    }
    // 0x00219528: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0021952C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_00219530:
    // 0x00219530: subu        $a1, $v0, $a1
    ctx->r5 = SUB32(ctx->r2, ctx->r5);
L_00219534:
    // 0x00219534: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00219538: lwc1        $f0, 0x5A5C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5A5C);
    // 0x0021953C: sub.s       $f0, $f22, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f22.fl - ctx->f0.fl;
    // 0x00219540: mtc1        $a1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r5;
    // 0x00219544: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00219548: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0021954C: nop

    // 0x00219550: bc1f        L_00219664
    if (!c1cs) {
        // 0x00219554: nop
    
            goto L_00219664;
    }
    // 0x00219554: nop

    // 0x00219558: lw          $v1, 0xC($s3)
    ctx->r3 = MEM_W(ctx->r19, 0XC);
    // 0x0021955C: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x00219560: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00219564: bgezl       $v1, L_0021957C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x00219568: cvt.s.d     $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
            goto L_0021957C;
    }
    goto skip_3;
    // 0x00219568: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    skip_3:
    // 0x0021956C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00219570: ldc1        $f0, 0x5A60($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X5A60);
    // 0x00219574: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x00219578: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
L_0021957C:
    // 0x0021957C: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x00219580: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00219584: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00219588: nop

    // 0x0021958C: bc1f        L_002195C8
    if (!c1cs) {
        // 0x00219590: nop
    
            goto L_002195C8;
    }
    // 0x00219590: nop

    // 0x00219594: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x00219598: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0021959C: bgezl       $v1, L_002195B4
    if (SIGNED(ctx->r3) >= 0) {
        // 0x002195A0: cvt.s.d     $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
            goto L_002195B4;
    }
    goto skip_4;
    // 0x002195A0: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    skip_4:
    // 0x002195A4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002195A8: ldc1        $f0, 0x5A68($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X5A68);
    // 0x002195AC: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x002195B0: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
L_002195B4:
    // 0x002195B4: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x002195B8: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x002195BC: mfc1        $a1, $f3
    ctx->r5 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x002195C0: j           L_00219664
    // 0x002195C4: nop

        goto L_00219664;
    // 0x002195C4: nop

L_002195C8:
    // 0x002195C8: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x002195CC: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x002195D0: bgezl       $v1, L_002195E8
    if (SIGNED(ctx->r3) >= 0) {
        // 0x002195D4: cvt.s.d     $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
            goto L_002195E8;
    }
    goto skip_5;
    // 0x002195D4: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    skip_5:
    // 0x002195D8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002195DC: ldc1        $f0, 0x5A70($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X5A70);
    // 0x002195E0: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x002195E4: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
L_002195E8:
    // 0x002195E8: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x002195EC: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x002195F0: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x002195F4: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x002195F8: mfc1        $v0, $f3
    ctx->r2 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x002195FC: mtc1        $v0, $f2
    ctx->f2.u32l = ctx->r2;
    // 0x00219600: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x00219604: bgezl       $v1, L_0021961C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x00219608: cvt.s.d     $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
            goto L_0021961C;
    }
    goto skip_6;
    // 0x00219608: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    skip_6:
    // 0x0021960C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00219610: ldc1        $f0, 0x5A78($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X5A78);
    // 0x00219614: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x00219618: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
L_0021961C:
    // 0x0021961C: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x00219620: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x00219624: nop

    // 0x00219628: bc1f        L_00219634
    if (!c1cs) {
        // 0x0021962C: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_00219634;
    }
    // 0x0021962C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00219630: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_00219634:
    // 0x00219634: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x00219638: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0021963C: bgezl       $v1, L_00219654
    if (SIGNED(ctx->r3) >= 0) {
        // 0x00219640: cvt.s.d     $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
            goto L_00219654;
    }
    goto skip_7;
    // 0x00219640: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    skip_7:
    // 0x00219644: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00219648: ldc1        $f0, 0x5A80($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X5A80);
    // 0x0021964C: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x00219650: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
L_00219654:
    // 0x00219654: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x00219658: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021965C: mfc1        $v0, $f3
    ctx->r2 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00219660: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
L_00219664:
    // 0x00219664: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00219668: lwc1        $f0, 0x5A88($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5A88);
    // 0x0021966C: sub.s       $f0, $f22, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f22.fl - ctx->f0.fl;
    // 0x00219670: addiu       $v1, $a1, 0x1
    ctx->r3 = ADD32(ctx->r5, 0X1);
    // 0x00219674: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x00219678: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0021967C: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00219680: nop

    // 0x00219684: bc1f        L_00219798
    if (!c1cs) {
        // 0x00219688: nop
    
            goto L_00219798;
    }
    // 0x00219688: nop

    // 0x0021968C: lw          $a0, 0xC($s3)
    ctx->r4 = MEM_W(ctx->r19, 0XC);
    // 0x00219690: mtc1        $a0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r4;
    // 0x00219694: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00219698: bgezl       $a0, L_002196B0
    if (SIGNED(ctx->r4) >= 0) {
        // 0x0021969C: cvt.s.d     $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
            goto L_002196B0;
    }
    goto skip_8;
    // 0x0021969C: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    skip_8:
    // 0x002196A0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002196A4: ldc1        $f0, 0x5A90($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X5A90);
    // 0x002196A8: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x002196AC: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
L_002196B0:
    // 0x002196B0: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x002196B4: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x002196B8: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x002196BC: nop

    // 0x002196C0: bc1f        L_002196FC
    if (!c1cs) {
        // 0x002196C4: nop
    
            goto L_002196FC;
    }
    // 0x002196C4: nop

    // 0x002196C8: mtc1        $a0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r4;
    // 0x002196CC: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x002196D0: bgezl       $a0, L_002196E8
    if (SIGNED(ctx->r4) >= 0) {
        // 0x002196D4: cvt.s.d     $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
            goto L_002196E8;
    }
    goto skip_9;
    // 0x002196D4: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    skip_9:
    // 0x002196D8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002196DC: ldc1        $f0, 0x5A98($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X5A98);
    // 0x002196E0: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x002196E4: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
L_002196E8:
    // 0x002196E8: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x002196EC: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x002196F0: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x002196F4: j           L_00219798
    // 0x002196F8: nop

        goto L_00219798;
    // 0x002196F8: nop

L_002196FC:
    // 0x002196FC: mtc1        $a0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r4;
    // 0x00219700: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00219704: bgezl       $a0, L_0021971C
    if (SIGNED(ctx->r4) >= 0) {
        // 0x00219708: cvt.s.d     $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
            goto L_0021971C;
    }
    goto skip_10;
    // 0x00219708: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    skip_10:
    // 0x0021970C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00219710: ldc1        $f0, 0x5AA0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X5AA0);
    // 0x00219714: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x00219718: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
L_0021971C:
    // 0x0021971C: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x00219720: mtc1        $a0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r4;
    // 0x00219724: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00219728: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021972C: mfc1        $v0, $f3
    ctx->r2 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00219730: mtc1        $v0, $f2
    ctx->f2.u32l = ctx->r2;
    // 0x00219734: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x00219738: bgezl       $a0, L_00219750
    if (SIGNED(ctx->r4) >= 0) {
        // 0x0021973C: cvt.s.d     $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
            goto L_00219750;
    }
    goto skip_11;
    // 0x0021973C: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    skip_11:
    // 0x00219740: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00219744: ldc1        $f0, 0x5AA8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X5AA8);
    // 0x00219748: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x0021974C: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
L_00219750:
    // 0x00219750: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x00219754: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x00219758: nop

    // 0x0021975C: bc1f        L_00219768
    if (!c1cs) {
        // 0x00219760: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_00219768;
    }
    // 0x00219760: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00219764: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_00219768:
    // 0x00219768: mtc1        $a0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r4;
    // 0x0021976C: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00219770: bgezl       $a0, L_00219788
    if (SIGNED(ctx->r4) >= 0) {
        // 0x00219774: cvt.s.d     $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
            goto L_00219788;
    }
    goto skip_12;
    // 0x00219774: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    skip_12:
    // 0x00219778: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021977C: ldc1        $f0, 0x5AB0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X5AB0);
    // 0x00219780: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x00219784: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
L_00219788:
    // 0x00219788: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x0021978C: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00219790: mfc1        $v0, $f3
    ctx->r2 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00219794: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
L_00219798:
    // 0x00219798: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0021979C: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x002197A0: sw          $v0, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r2;
    // 0x002197A4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x002197A8: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x002197AC: nop

    // 0x002197B0: bc1f        L_002197C8
    if (!c1cs) {
        // 0x002197B4: sw          $v0, 0x14($s4)
        MEM_W(0X14, ctx->r20) = ctx->r2;
            goto L_002197C8;
    }
    // 0x002197B4: sw          $v0, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->r2;
    // 0x002197B8: trunc.w.s   $f3, $f20
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 20);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f20.fl);
    // 0x002197BC: mfc1        $a1, $f3
    ctx->r5 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x002197C0: j           L_002197F0
    // 0x002197C4: nop

        goto L_002197F0;
    // 0x002197C4: nop

L_002197C8:
    // 0x002197C8: trunc.w.s   $f3, $f20
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 20);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f20.fl);
    // 0x002197CC: mfc1        $v0, $f3
    ctx->r2 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x002197D0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002197D4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002197D8: c.eq.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl == ctx->f20.fl;
    // 0x002197DC: nop

    // 0x002197E0: bc1f        L_002197EC
    if (!c1cs) {
        // 0x002197E4: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_002197EC;
    }
    // 0x002197E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x002197E8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_002197EC:
    // 0x002197EC: subu        $a1, $v0, $a1
    ctx->r5 = SUB32(ctx->r2, ctx->r5);
L_002197F0:
    // 0x002197F0: mtc1        $a1, $f0
    ctx->f0.u32l = ctx->r5;
    // 0x002197F4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002197F8: c.le.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl <= ctx->f0.fl;
    // 0x002197FC: nop

    // 0x00219800: bc1f        L_00219864
    if (!c1cs) {
        // 0x00219804: addiu       $v1, $a1, 0x1
        ctx->r3 = ADD32(ctx->r5, 0X1);
            goto L_00219864;
    }
    // 0x00219804: addiu       $v1, $a1, 0x1
    ctx->r3 = ADD32(ctx->r5, 0X1);
    // 0x00219808: mtc1        $s0, $f0
    ctx->f0.u32l = ctx->r16;
    // 0x0021980C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00219810: mul.s       $f1, $f0, $f21
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f1.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x00219814: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00219818: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0021981C: nop

    // 0x00219820: bc1f        L_00219838
    if (!c1cs) {
        // 0x00219824: nop
    
            goto L_00219838;
    }
    // 0x00219824: nop

    // 0x00219828: trunc.w.s   $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f1.fl);
    // 0x0021982C: mfc1        $a1, $f3
    ctx->r5 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00219830: j           L_00219864
    // 0x00219834: addiu       $v1, $a1, 0x1
    ctx->r3 = ADD32(ctx->r5, 0X1);
        goto L_00219864;
    // 0x00219834: addiu       $v1, $a1, 0x1
    ctx->r3 = ADD32(ctx->r5, 0X1);
L_00219838:
    // 0x00219838: trunc.w.s   $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f1.fl);
    // 0x0021983C: mfc1        $v0, $f3
    ctx->r2 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00219840: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00219844: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00219848: c.eq.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl == ctx->f1.fl;
    // 0x0021984C: nop

    // 0x00219850: bc1f        L_0021985C
    if (!c1cs) {
        // 0x00219854: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_0021985C;
    }
    // 0x00219854: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00219858: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_0021985C:
    // 0x0021985C: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x00219860: addiu       $v1, $a1, 0x1
    ctx->r3 = ADD32(ctx->r5, 0X1);
L_00219864:
    // 0x00219864: mtc1        $v1, $f0
    ctx->f0.u32l = ctx->r3;
    // 0x00219868: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0021986C: c.le.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl <= ctx->f0.fl;
    // 0x00219870: nop

    // 0x00219874: bc1f        L_002198D8
    if (!c1cs) {
        // 0x00219878: sll         $v0, $a1, 2
        ctx->r2 = S32(ctx->r5 << 2);
            goto L_002198D8;
    }
    // 0x00219878: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x0021987C: mtc1        $s0, $f0
    ctx->f0.u32l = ctx->r16;
    // 0x00219880: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00219884: mul.s       $f1, $f0, $f21
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f1.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x00219888: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0021988C: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00219890: nop

    // 0x00219894: bc1f        L_002198AC
    if (!c1cs) {
        // 0x00219898: nop
    
            goto L_002198AC;
    }
    // 0x00219898: nop

    // 0x0021989C: trunc.w.s   $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f1.fl);
    // 0x002198A0: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x002198A4: j           L_002198DC
    // 0x002198A8: sw          $v0, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r2;
        goto L_002198DC;
    // 0x002198A8: sw          $v0, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r2;
L_002198AC:
    // 0x002198AC: trunc.w.s   $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f1.fl);
    // 0x002198B0: mfc1        $v0, $f3
    ctx->r2 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x002198B4: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002198B8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002198BC: c.eq.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl == ctx->f1.fl;
    // 0x002198C0: nop

    // 0x002198C4: bc1f        L_002198D0
    if (!c1cs) {
        // 0x002198C8: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_002198D0;
    }
    // 0x002198C8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x002198CC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_002198D0:
    // 0x002198D0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x002198D4: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
L_002198D8:
    // 0x002198D8: sw          $v0, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r2;
L_002198DC:
    // 0x002198DC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x002198E0: sw          $v0, 0x1C($s4)
    MEM_W(0X1C, ctx->r20) = ctx->r2;
L_002198E4:
    // 0x002198E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x002198E8: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x002198EC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x002198F0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002198F4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002198F8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002198FC: ldc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X38);
    // 0x00219900: ldc1        $f21, 0x30($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X30);
    // 0x00219904: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x00219908: jr          $ra
    // 0x0021990C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x0021990C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_0044AC94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00411ED0:
    // 0x0044AC94: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0044AC98: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044AC9C: lwc1        $f2, 0x2034($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x0044ACA0: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x0044ACA4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044ACA8: lwc1        $f3, 0xA6C($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0XA6C);
    // 0x0044ACAC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0044ACB0: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x0044ACB4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044ACB8: lwc1        $f0, 0x2030($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2030);
    // 0x0044ACBC: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0044ACC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0044ACC4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0044ACC8: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x0044ACCC: lwc1        $f1, 0xA4($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0XA4);
    // 0x0044ACD0: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x0044ACD4: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0044ACD8: sub.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x0044ACDC: lwc1        $f1, 0x30($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X30);
    // 0x0044ACE0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044ACE4: lwc1        $f0, 0xA70($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XA70);
    // 0x0044ACE8: c.lt.s      $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f4.fl < ctx->f1.fl;
    // 0x0044ACEC: mul.s       $f20, $f2, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0044ACF0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044ACF4: lwc1        $f2, 0xA74($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0XA74);
    // 0x0044ACF8: bc1f        L_0044AD24
    if (!c1cs) {
        // 0x0044ACFC: nop
    
            goto L_0044AD24;
    }
    // 0x0044ACFC: nop

    // 0x0044AD00: sub.s       $f3, $f1, $f4
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f3.fl = ctx->f1.fl - ctx->f4.fl;
    // 0x0044AD04: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044AD08: lwc1        $f0, 0xA78($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XA78);
    // 0x0044AD0C: div.s       $f3, $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = DIV_S(ctx->f3.fl, ctx->f2.fl);
    // 0x0044AD10: c.lt.s      $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f0.fl < ctx->f3.fl;
    // 0x0044AD14: nop

    // 0x0044AD18: bc1tl       L_0044AD20
    if (c1cs) {
        // 0x0044AD1C: mov.s       $f3, $f0
        CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f3.fl = ctx->f0.fl;
            goto L_0044AD20;
    }
    goto skip_0;
    // 0x0044AD1C: mov.s       $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f3.fl = ctx->f0.fl;
    skip_0:
L_0044AD20:
    // 0x0044AD20: sub.s       $f3, $f0, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = ctx->f0.fl - ctx->f3.fl;
L_0044AD24:
    // 0x0044AD24: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0044AD28: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x0044AD2C: lwc1        $f1, 0x1C($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X1C);
    // 0x0044AD30: lwc1        $f0, 0x34($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X34);
    // 0x0044AD34: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0044AD38: nop

    // 0x0044AD3C: bc1f        L_0044AD6C
    if (!c1cs) {
        // 0x0044AD40: lui         $a2, 0xE300
        ctx->r6 = S32(0XE300 << 16);
            goto L_0044AD6C;
    }
    // 0x0044AD40: lui         $a2, 0xE300
    ctx->r6 = S32(0XE300 << 16);
    // 0x0044AD44: sub.s       $f3, $f1, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0044AD48: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044AD4C: lwc1        $f0, 0xA7C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XA7C);
    // 0x0044AD50: div.s       $f3, $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = DIV_S(ctx->f3.fl, ctx->f2.fl);
    // 0x0044AD54: c.lt.s      $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f0.fl < ctx->f3.fl;
    // 0x0044AD58: nop

    // 0x0044AD5C: bc1tl       L_0044AD64
    if (c1cs) {
        // 0x0044AD60: mov.s       $f3, $f0
        CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f3.fl = ctx->f0.fl;
            goto L_0044AD64;
    }
    goto skip_1;
    // 0x0044AD60: mov.s       $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f3.fl = ctx->f0.fl;
    skip_1:
L_0044AD64:
    // 0x0044AD64: sub.s       $f3, $f0, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = ctx->f0.fl - ctx->f3.fl;
    // 0x0044AD68: lui         $a2, 0xE300
    ctx->r6 = S32(0XE300 << 16);
L_0044AD6C:
    // 0x0044AD6C: ori         $a2, $a2, 0xA01
    ctx->r6 = ctx->r6 | 0XA01;
    // 0x0044AD70: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x0044AD74: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x0044AD78: addiu       $s0, $s0, -0x71DC
    ctx->r16 = ADD32(ctx->r16, -0X71DC);
    // 0x0044AD7C: lui         $v1, 0xE700
    ctx->r3 = S32(0XE700 << 16);
    // 0x0044AD80: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0044AD84: mul.s       $f20, $f20, $f3
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f3.fl);
    // 0x0044AD88: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0044AD8C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x0044AD90: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x0044AD94: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x0044AD98: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x0044AD9C: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x0044ADA0: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x0044ADA4: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x0044ADA8: jal         0x00207FEC
    // 0x0044ADAC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    func_00207FEC(rdram, ctx);
        goto after_0;
    // 0x0044ADAC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    after_0:
    // 0x0044ADB0: jal         0x00207A70
    // 0x0044ADB4: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    func_00207A70(rdram, ctx);
        goto after_1;
    // 0x0044ADB4: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    after_1:
    // 0x0044ADB8: lui         $v0, 0xFA00
    ctx->r2 = S32(0XFA00 << 16);
    // 0x0044ADBC: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x0044ADC0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x0044ADC4: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0044ADC8: lw          $a1, 0x2030($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2030);
    // 0x0044ADCC: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x0044ADD0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x0044ADD4: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    // 0x0044ADD8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0044ADDC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x0044ADE0: addiu       $a3, $a0, 0x8
    ctx->r7 = ADD32(ctx->r4, 0X8);
    // 0x0044ADE4: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x0044ADE8: bgez        $a1, L_0044ADF4
    if (SIGNED(ctx->r5) >= 0) {
        // 0x0044ADEC: sw          $a3, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r7;
            goto L_0044ADF4;
    }
    // 0x0044ADEC: sw          $a3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r7;
    // 0x0044ADF0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_0044ADF4:
    // 0x0044ADF4: trunc.w.s   $f5, $f20
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 20);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f20.fl);
    // 0x0044ADF8: mfc1        $v1, $f5
    ctx->r3 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0044ADFC: andi        $v0, $a1, 0x3FF
    ctx->r2 = ctx->r5 & 0X3FF;
    // 0x0044AE00: bgez        $v1, L_0044AE0C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x0044AE04: sll         $a2, $v0, 14
        ctx->r6 = S32(ctx->r2 << 14);
            goto L_0044AE0C;
    }
    // 0x0044AE04: sll         $a2, $v0, 14
    ctx->r6 = S32(ctx->r2 << 14);
    // 0x0044AE08: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_0044AE0C:
    // 0x0044AE0C: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x0044AE10: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0044AE14: lui         $t0, 0xF600
    ctx->r8 = S32(0XF600 << 16);
    // 0x0044AE18: or          $v0, $v0, $t0
    ctx->r2 = ctx->r2 | ctx->r8;
    // 0x0044AE1C: or          $v0, $a2, $v0
    ctx->r2 = ctx->r6 | ctx->r2;
    // 0x0044AE20: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0044AE24: addiu       $v0, $a0, 0x10
    ctx->r2 = ADD32(ctx->r4, 0X10);
    // 0x0044AE28: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0044AE2C: lw          $a1, 0x2030($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2030);
    // 0x0044AE30: addu        $a2, $a3, $zero
    ctx->r6 = ADD32(ctx->r7, 0);
    // 0x0044AE34: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x0044AE38: bgez        $a1, L_0044AE44
    if (SIGNED(ctx->r5) >= 0) {
        // 0x0044AE3C: sw          $v0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r2;
            goto L_0044AE44;
    }
    // 0x0044AE3C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x0044AE40: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_0044AE44:
    // 0x0044AE44: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0044AE48: lw          $v1, 0x2034($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2034);
    // 0x0044AE4C: andi        $v0, $a1, 0x3FF
    ctx->r2 = ctx->r5 & 0X3FF;
    // 0x0044AE50: bgez        $v1, L_0044AE5C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x0044AE54: sll         $a1, $v0, 14
        ctx->r5 = S32(ctx->r2 << 14);
            goto L_0044AE5C;
    }
    // 0x0044AE54: sll         $a1, $v0, 14
    ctx->r5 = S32(ctx->r2 << 14);
    // 0x0044AE58: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_0044AE5C:
    // 0x0044AE5C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044AE60: lwc1        $f0, 0x2034($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x0044AE64: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0044AE68: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x0044AE6C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0044AE70: or          $v0, $v0, $t0
    ctx->r2 = ctx->r2 | ctx->r8;
    // 0x0044AE74: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0044AE78: sub.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x0044AE7C: or          $v0, $a1, $v0
    ctx->r2 = ctx->r5 | ctx->r2;
    // 0x0044AE80: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0044AE84: nop

    // 0x0044AE88: bc1t        L_0044AE94
    if (c1cs) {
        // 0x0044AE8C: sw          $v0, 0x8($a0)
        MEM_W(0X8, ctx->r4) = ctx->r2;
            goto L_0044AE94;
    }
    // 0x0044AE8C: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0044AE90: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
L_0044AE94:
    // 0x0044AE94: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044AE98: lwc1        $f1, 0xA80($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XA80);
    // 0x0044AE9C: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0044AEA0: nop

    // 0x0044AEA4: bc1tl       L_0044AEBC
    if (c1cs) {
        // 0x0044AEA8: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_0044AEBC;
    }
    goto skip_2;
    // 0x0044AEA8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_2:
    // 0x0044AEAC: trunc.w.s   $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044AEB0: mfc1        $v1, $f5
    ctx->r3 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0044AEB4: j           L_00411ED0
    // 0x0044AEB8: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    entry_00411ED0(rdram, ctx);
    return;
    // 0x0044AEB8: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_0044AEBC:
    // 0x0044AEBC: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0044AEC0: trunc.w.s   $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044AEC4: mfc1        $v1, $f5
    ctx->r3 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0044AEC8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0044AECC: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x0044AED0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0044AED4: trunc.w.s   $f5, $f20
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 20);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f20.fl);
    // 0x0044AED8: mfc1        $a0, $f5
    ctx->r4 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x0044AEDC: jal         0x004110CC
    // 0x0044AEE0: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    func_004110CC(rdram, ctx);
        goto after_2;
    // 0x0044AEE0: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    after_2:
    // 0x0044AEE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0044AEE8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0044AEEC: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x0044AEF0: jr          $ra
    // 0x0044AEF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0044AEF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0021F268(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021F268: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0021F26C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0021F270: lwc1        $f12, 0x34($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X34);
    // 0x0021F274: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0021F278: lwc1        $f1, 0x38($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X38);
    // 0x0021F27C: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0021F280: lwc1        $f0, 0x3C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x0021F284: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0021F288: add.s       $f12, $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f1.fl;
    // 0x0021F28C: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x0021F290: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021F294: lwc1        $f0, 0x5D14($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5D14);
    // 0x0021F298: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x0021F29C: jal         0x00298470
    // 0x0021F2A0: nop

    func_00298470(rdram, ctx);
        goto after_0;
    // 0x0021F2A0: nop

    after_0:
    // 0x0021F2A4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0021F2A8: jr          $ra
    // 0x0021F2AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0021F2AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0041E824(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041E824: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041E828: sw          $zero, -0xEBC($at)
    MEM_W(-0XEBC, ctx->r1) = 0;
    // 0x0041E82C: jal         0x00416644
    // 0x0041E830: nop

    func_00416644(rdram, ctx);
        goto after_0;
    // 0x0041E830: nop

    after_0:
    // 0x0041E834: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041E838: sw          $zero, -0xEC4($at)
    MEM_W(-0XEC4, ctx->r1) = 0;
    // 0x0041E83C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041E840: sw          $s0, 0x202C($at)
    MEM_W(0X202C, ctx->r1) = ctx->r16;
    // 0x0041E844: j           L_0041EA5C
    // 0x0041E848: nop

        goto L_0041EA5C;
    // 0x0041E848: nop

L_0041E84C:
    // 0x0041E84C: j           L_0041E8B0
    // 0x0041E850: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
        goto L_0041E8B0;
    // 0x0041E850: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_0041E854:
    // 0x0041E854: j           L_0041E904
    // 0x0041E858: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_0041E904;
    // 0x0041E858: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041E85C: lui         $s1, 0x800C
    ctx->r17 = S32(0X800C << 16);
    // 0x0041E860: lw          $s1, 0x2028($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X2028);
    // 0x0041E864: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0041E868: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_0041E86C:
    // 0x0041E86C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0041E870: jal         0x00426978
    // 0x0041E874: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    func_00426978(rdram, ctx);
        goto after_1;
    // 0x0041E874: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_1:
    // 0x0041E878: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x0041E87C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x0041E880: jal         0x00426C88
    // 0x0041E884: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_00426C88(rdram, ctx);
        goto after_2;
    // 0x0041E884: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x0041E888: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041E88C: addiu       $a1, $a1, 0x45C0
    ctx->r5 = ADD32(ctx->r5, 0X45C0);
    // 0x0041E890: jal         0x00426D54
    // 0x0041E894: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    func_00426D54(rdram, ctx);
        goto after_3;
    // 0x0041E894: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_3:
    // 0x0041E898: beq         $v0, $zero, L_0041E84C
    if (ctx->r2 == 0) {
        // 0x0041E89C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_0041E84C;
    }
    // 0x0041E89C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0041E8A0: slti        $v0, $s0, 0x10
    ctx->r2 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x0041E8A4: bnel        $v0, $zero, L_0041E86C
    if (ctx->r2 != 0) {
        // 0x0041E8A8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0041E86C;
    }
    goto skip_0;
    // 0x0041E8A8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    skip_0:
    // 0x0041E8AC: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
L_0041E8B0:
    // 0x0041E8B0: lui         $s1, 0x800C
    ctx->r17 = S32(0X800C << 16);
    // 0x0041E8B4: lw          $s1, 0x2028($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X2028);
    // 0x0041E8B8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0041E8BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_0041E8C0:
    // 0x0041E8C0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0041E8C4: jal         0x00426978
    // 0x0041E8C8: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    func_00426978(rdram, ctx);
        goto after_4;
    // 0x0041E8C8: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_4:
    // 0x0041E8CC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x0041E8D0: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x0041E8D4: jal         0x00426C88
    // 0x0041E8D8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_00426C88(rdram, ctx);
        goto after_5;
    // 0x0041E8D8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_5:
    // 0x0041E8DC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041E8E0: addiu       $a1, $a1, 0x45CC
    ctx->r5 = ADD32(ctx->r5, 0X45CC);
    // 0x0041E8E4: jal         0x00426D54
    // 0x0041E8E8: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    func_00426D54(rdram, ctx);
        goto after_6;
    // 0x0041E8E8: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_6:
    // 0x0041E8EC: beq         $v0, $zero, L_0041E854
    if (ctx->r2 == 0) {
        // 0x0041E8F0: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_0041E854;
    }
    // 0x0041E8F0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0041E8F4: slti        $v0, $s0, 0x10
    ctx->r2 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x0041E8F8: bnel        $v0, $zero, L_0041E8C0
    if (ctx->r2 != 0) {
        // 0x0041E8FC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0041E8C0;
    }
    goto skip_1;
    // 0x0041E8FC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    skip_1:
    // 0x0041E900: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0041E904:
    // 0x0041E904: bne         $s2, $zero, L_0041EA30
    if (ctx->r18 != 0) {
        // 0x0041E908: nop
    
            goto L_0041EA30;
    }
    // 0x0041E908: nop

    // 0x0041E90C: bne         $v0, $zero, L_0041EA30
    if (ctx->r2 != 0) {
        // 0x0041E910: nop
    
            goto L_0041EA30;
    }
    // 0x0041E910: nop

    // 0x0041E914: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0041E918: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x0041E91C: jal         0x004267A0
    // 0x0041E920: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_004267A0(rdram, ctx);
        goto after_7;
    // 0x0041E920: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_7:
    // 0x0041E924: bne         $v0, $zero, L_0041E9F0
    if (ctx->r2 != 0) {
        // 0x0041E928: nop
    
            goto L_0041E9F0;
    }
    // 0x0041E928: nop

    // 0x0041E92C: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0041E930: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x0041E934: jal         0x0042670C
    // 0x0041E938: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_0042670C(rdram, ctx);
        goto after_8;
    // 0x0041E938: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_8:
    // 0x0041E93C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0041E940: bne         $s0, $zero, L_0041E9F0
    if (ctx->r16 != 0) {
        // 0x0041E944: nop
    
            goto L_0041E9F0;
    }
    // 0x0041E944: nop

    // 0x0041E948: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0041E94C: lw          $a0, 0x70A8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X70A8);
    // 0x0041E950: jal         0x00426E6C
    // 0x0041E954: addiu       $a0, $a0, 0x688
    ctx->r4 = ADD32(ctx->r4, 0X688);
    func_00426E6C(rdram, ctx);
        goto after_9;
    // 0x0041E954: addiu       $a0, $a0, 0x688
    ctx->r4 = ADD32(ctx->r4, 0X688);
    after_9:
    // 0x0041E958: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    // 0x0041E95C: jal         0x00426E6C
    // 0x0041E960: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    func_00426E6C(rdram, ctx);
        goto after_10;
    // 0x0041E960: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_10:
    // 0x0041E964: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x0041E968: beq         $v1, $zero, L_0041E9A8
    if (ctx->r3 == 0) {
        // 0x0041E96C: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_0041E9A8;
    }
    // 0x0041E96C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0041E970: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x0041E974: slt         $v1, $v0, $a0
    ctx->r3 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x0041E978: bne         $v1, $zero, L_0041E9A8
    if (ctx->r3 != 0) {
        // 0x0041E97C: slt         $v0, $v0, $s1
        ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
            goto L_0041E9A8;
    }
    // 0x0041E97C: slt         $v0, $v0, $s1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x0041E980: beq         $v0, $zero, L_0041E9A0
    if (ctx->r2 == 0) {
        // 0x0041E984: nop
    
            goto L_0041E9A0;
    }
    // 0x0041E984: nop

    // 0x0041E988: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041E98C: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041E990: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041E994: addiu       $a1, $a1, -0x3E18
    ctx->r5 = ADD32(ctx->r5, -0X3E18);
    // 0x0041E998: j           L_0041E9B8
    // 0x0041E99C: nop

        goto L_0041E9B8;
    // 0x0041E99C: nop

L_0041E9A0:
    // 0x0041E9A0: beq         $v1, $zero, L_0041E9E8
    if (ctx->r3 == 0) {
        // 0x0041E9A4: nop
    
            goto L_0041E9E8;
    }
    // 0x0041E9A4: nop

L_0041E9A8:
    // 0x0041E9A8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041E9AC: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041E9B0: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041E9B4: addiu       $a1, $a1, -0x3E3C
    ctx->r5 = ADD32(ctx->r5, -0X3E3C);
L_0041E9B8:
    // 0x0041E9B8: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041E9BC: addiu       $v0, $v0, -0x48C8
    ctx->r2 = ADD32(ctx->r2, -0X48C8);
    // 0x0041E9C0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041E9C4: lw          $a2, 0x1C($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X1C);
    // 0x0041E9C8: lw          $a3, 0x20($s4)
    ctx->r7 = MEM_W(ctx->r20, 0X20);
    // 0x0041E9CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041E9D0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E9D4: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x0041E9D8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041E9DC: sw          $v0, -0x4EF8($at)
    MEM_W(-0X4EF8, ctx->r1) = ctx->r2;
    // 0x0041E9E0: jal         0x00416644
    // 0x0041E9E4: nop

    func_00416644(rdram, ctx);
        goto after_11;
    // 0x0041E9E4: nop

    after_11:
L_0041E9E8:
    // 0x0041E9E8: beq         $s0, $zero, L_0041EA30
    if (ctx->r16 == 0) {
        // 0x0041E9EC: nop
    
            goto L_0041EA30;
    }
    // 0x0041E9EC: nop

L_0041E9F0:
    // 0x0041E9F0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041E9F4: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041E9F8: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041E9FC: addiu       $a1, $a1, -0x3FA4
    ctx->r5 = ADD32(ctx->r5, -0X3FA4);
    // 0x0041EA00: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041EA04: addiu       $v0, $v0, -0x48C8
    ctx->r2 = ADD32(ctx->r2, -0X48C8);
    // 0x0041EA08: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041EA0C: lw          $a2, 0x1C($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X1C);
    // 0x0041EA10: lw          $a3, 0x20($s4)
    ctx->r7 = MEM_W(ctx->r20, 0X20);
    // 0x0041EA14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041EA18: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041EA1C: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x0041EA20: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041EA24: sw          $v0, -0x4EF8($at)
    MEM_W(-0X4EF8, ctx->r1) = ctx->r2;
    // 0x0041EA28: jal         0x00416644
    // 0x0041EA2C: nop

    func_00416644(rdram, ctx);
        goto after_12;
    // 0x0041EA2C: nop

    after_12:
L_0041EA30:
    // 0x0041EA30: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041EA34: lw          $v0, 0x9BC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9BC);
    // 0x0041EA38: bne         $v0, $zero, L_0041EA4C
    if (ctx->r2 != 0) {
        // 0x0041EA3C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0041EA4C;
    }
    // 0x0041EA3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041EA40: jal         0x0041DA28
    // 0x0041EA44: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_0041DA28(rdram, ctx);
        goto after_13;
    // 0x0041EA44: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_13:
    // 0x0041EA48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0041EA4C:
    // 0x0041EA4C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041EA50: sw          $zero, -0xEC4($at)
    MEM_W(-0XEC4, ctx->r1) = 0;
    // 0x0041EA54: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041EA58: sw          $v0, 0x202C($at)
    MEM_W(0X202C, ctx->r1) = ctx->r2;
L_0041EA5C:
    // 0x0041EA5C: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x0041EA60: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x0041EA64: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x0041EA68: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x0041EA6C: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x0041EA70: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x0041EA74: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x0041EA78: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x0041EA7C: jr          $ra
    // 0x0041EA80: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x0041EA80: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_00238CE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00238CE4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00238CE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00238CEC: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x00238CF0: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x00238CF4: lw          $v1, 0x50($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X50);
    // 0x00238CF8: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x00238CFC: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x00238D00: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x00238D04: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x00238D08: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x00238D0C: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x00238D10: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x00238D14: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x00238D18: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x00238D1C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x00238D20: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x00238D24: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x00238D28: jal         0x00237AFC
    // 0x00238D2C: nop

    func_00237AFC(rdram, ctx);
        goto after_0;
    // 0x00238D2C: nop

    after_0:
    // 0x00238D30: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x00238D34: jr          $ra
    // 0x00238D38: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00238D38: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00299680(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00299680: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x00299684: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x00299688: addu        $s7, $a0, $zero
    ctx->r23 = ADD32(ctx->r4, 0);
    // 0x0029968C: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x00299690: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x00299694: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x00299698: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    // 0x0029969C: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x002996A0: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x002996A4: addiu       $s1, $s1, 0xE20
    ctx->r17 = ADD32(ctx->r17, 0XE20);
    // 0x002996A8: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x002996AC: addiu       $s3, $zero, 0x2
    ctx->r19 = ADD32(0, 0X2);
    // 0x002996B0: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x002996B4: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x002996B8: sw          $ra, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r31;
    // 0x002996BC: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x002996C0: jal         0x00299FE4
    // 0x002996C4: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    func_00299FE4(rdram, ctx);
        goto after_0;
    // 0x002996C4: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    after_0:
    // 0x002996C8: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x002996CC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x002996D0: sb          $s3, 0x1420($at)
    MEM_B(0X1420, ctx->r1) = ctx->r19;
    // 0x002996D4: jal         0x002998B0
    // 0x002996D8: andi        $a1, $s0, 0xFFFF
    ctx->r5 = ctx->r16 & 0XFFFF;
    func_002998B0(rdram, ctx);
        goto after_1;
    // 0x002996D8: andi        $a1, $s0, 0xFFFF
    ctx->r5 = ctx->r16 & 0XFFFF;
    after_1:
    // 0x002996DC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x002996E0: jal         0x0029A080
    // 0x002996E4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0029A080(rdram, ctx);
        goto after_2;
    // 0x002996E4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x002996E8: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x002996EC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x002996F0: jal         0x0029B6F0
    // 0x002996F4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x002996F4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x002996F8: addu        $s6, $s1, $zero
    ctx->r22 = ADD32(ctx->r17, 0);
    // 0x002996FC: addiu       $s5, $sp, 0x10
    ctx->r21 = ADD32(ctx->r29, 0X10);
L_00299700:
    // 0x00299700: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00299704: jal         0x0029A080
    // 0x00299708: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    func_0029A080(rdram, ctx);
        goto after_4;
    // 0x00299708: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    after_4:
    // 0x0029970C: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x00299710: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00299714: jal         0x0029B6F0
    // 0x00299718: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_5;
    // 0x00299718: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x0029971C: beq         $s4, $zero, L_0029973C
    if (ctx->r20 == 0) {
        // 0x00299720: addu        $s1, $s6, $zero
        ctx->r17 = ADD32(ctx->r22, 0);
            goto L_0029973C;
    }
    // 0x00299720: addu        $s1, $s6, $zero
    ctx->r17 = ADD32(ctx->r22, 0);
    // 0x00299724: blez        $s4, L_0029973C
    if (SIGNED(ctx->r20) <= 0) {
        // 0x00299728: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0029973C;
    }
    // 0x00299728: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_0029972C:
    // 0x0029972C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00299730: slt         $v0, $v1, $s4
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x00299734: bne         $v0, $zero, L_0029972C
    if (ctx->r2 != 0) {
        // 0x00299738: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_0029972C;
    }
    // 0x00299738: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_0029973C:
    // 0x0029973C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00299740: andi        $v0, $a1, 0x3
    ctx->r2 = ctx->r5 & 0X3;
    // 0x00299744: beq         $v0, $zero, L_002997A4
    if (ctx->r2 == 0) {
        // 0x00299748: addiu       $v1, $sp, 0x10
        ctx->r3 = ADD32(ctx->r29, 0X10);
            goto L_002997A4;
    }
    // 0x00299748: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
    // 0x0029974C: addiu       $v0, $a1, 0x20
    ctx->r2 = ADD32(ctx->r5, 0X20);
L_00299750:
    // 0x00299750: lwl         $t0, 0x0($a1)
    ctx->r8 = do_lwl(rdram, ctx->r8, ctx->r5, 0X0);
    // 0x00299754: lwr         $t0, 0x3($a1)
    ctx->r8 = do_lwr(rdram, ctx->r8, ctx->r5, 0X3);
    // 0x00299758: lwl         $t1, 0x4($a1)
    ctx->r9 = do_lwl(rdram, ctx->r9, ctx->r5, 0X4);
    // 0x0029975C: lwr         $t1, 0x7($a1)
    ctx->r9 = do_lwr(rdram, ctx->r9, ctx->r5, 0X7);
    // 0x00299760: lwl         $t2, 0x8($a1)
    ctx->r10 = do_lwl(rdram, ctx->r10, ctx->r5, 0X8);
    // 0x00299764: lwr         $t2, 0xB($a1)
    ctx->r10 = do_lwr(rdram, ctx->r10, ctx->r5, 0XB);
    // 0x00299768: lwl         $t3, 0xC($a1)
    ctx->r11 = do_lwl(rdram, ctx->r11, ctx->r5, 0XC);
    // 0x0029976C: lwr         $t3, 0xF($a1)
    ctx->r11 = do_lwr(rdram, ctx->r11, ctx->r5, 0XF);
    // 0x00299770: swl         $t0, 0x0($v1)
    do_swl(rdram, 0X0, ctx->r3, ctx->r8);
    // 0x00299774: swr         $t0, 0x3($v1)
    do_swr(rdram, 0X3, ctx->r3, ctx->r8);
    // 0x00299778: swl         $t1, 0x4($v1)
    do_swl(rdram, 0X4, ctx->r3, ctx->r9);
    // 0x0029977C: swr         $t1, 0x7($v1)
    do_swr(rdram, 0X7, ctx->r3, ctx->r9);
    // 0x00299780: swl         $t2, 0x8($v1)
    do_swl(rdram, 0X8, ctx->r3, ctx->r10);
    // 0x00299784: swr         $t2, 0xB($v1)
    do_swr(rdram, 0XB, ctx->r3, ctx->r10);
    // 0x00299788: swl         $t3, 0xC($v1)
    do_swl(rdram, 0XC, ctx->r3, ctx->r11);
    // 0x0029978C: swr         $t3, 0xF($v1)
    do_swr(rdram, 0XF, ctx->r3, ctx->r11);
    // 0x00299790: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x00299794: bne         $a1, $v0, L_00299750
    if (ctx->r5 != ctx->r2) {
        // 0x00299798: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00299750;
    }
    // 0x00299798: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x0029979C: j           L_002997D4
    // 0x002997A0: nop

        goto L_002997D4;
    // 0x002997A0: nop

L_002997A4:
    // 0x002997A4: addiu       $v0, $a1, 0x20
    ctx->r2 = ADD32(ctx->r5, 0X20);
L_002997A8:
    // 0x002997A8: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x002997AC: lw          $t1, 0x4($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X4);
    // 0x002997B0: lw          $t2, 0x8($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X8);
    // 0x002997B4: lw          $t3, 0xC($a1)
    ctx->r11 = MEM_W(ctx->r5, 0XC);
    // 0x002997B8: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x002997BC: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x002997C0: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x002997C4: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x002997C8: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x002997CC: bne         $a1, $v0, L_002997A8
    if (ctx->r5 != ctx->r2) {
        // 0x002997D0: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_002997A8;
    }
    // 0x002997D0: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
L_002997D4:
    // 0x002997D4: lwl         $t0, 0x0($a1)
    ctx->r8 = do_lwl(rdram, ctx->r8, ctx->r5, 0X0);
    // 0x002997D8: lwr         $t0, 0x3($a1)
    ctx->r8 = do_lwr(rdram, ctx->r8, ctx->r5, 0X3);
    // 0x002997DC: lwl         $t1, 0x4($a1)
    ctx->r9 = do_lwl(rdram, ctx->r9, ctx->r5, 0X4);
    // 0x002997E0: lwr         $t1, 0x7($a1)
    ctx->r9 = do_lwr(rdram, ctx->r9, ctx->r5, 0X7);
    // 0x002997E4: swl         $t0, 0x0($v1)
    do_swl(rdram, 0X0, ctx->r3, ctx->r8);
    // 0x002997E8: swr         $t0, 0x3($v1)
    do_swr(rdram, 0X3, ctx->r3, ctx->r8);
    // 0x002997EC: swl         $t1, 0x4($v1)
    do_swl(rdram, 0X4, ctx->r3, ctx->r9);
    // 0x002997F0: swr         $t1, 0x7($v1)
    do_swr(rdram, 0X7, ctx->r3, ctx->r9);
    // 0x002997F4: lbu         $v0, 0x12($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X12);
    // 0x002997F8: andi        $v0, $v0, 0xC0
    ctx->r2 = ctx->r2 & 0XC0;
    // 0x002997FC: srl         $s0, $v0, 4
    ctx->r16 = S32(U32(ctx->r2) >> 4);
    // 0x00299800: bnel        $s0, $zero, L_00299864
    if (ctx->r16 != 0) {
        // 0x00299804: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_00299864;
    }
    goto skip_0;
    // 0x00299804: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    skip_0:
    // 0x00299808: jal         0x00299E48
    // 0x0029980C: addiu       $a0, $sp, 0x16
    ctx->r4 = ADD32(ctx->r29, 0X16);
    func_00299E48(rdram, ctx);
        goto after_6;
    // 0x0029980C: addiu       $a0, $sp, 0x16
    ctx->r4 = ADD32(ctx->r29, 0X16);
    after_6:
    // 0x00299810: lbu         $v1, 0x36($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X36);
    // 0x00299814: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x00299818: beq         $v0, $v1, L_0029983C
    if (ctx->r2 == ctx->r3) {
        // 0x0029981C: addu        $a0, $s7, $zero
        ctx->r4 = ADD32(ctx->r23, 0);
            goto L_0029983C;
    }
    // 0x0029981C: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x00299820: jal         0x00427F80
    // 0x00299824: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_00427F80(rdram, ctx);
        goto after_7;
    // 0x00299824: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_7:
    // 0x00299828: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0029982C: bne         $s0, $zero, L_00299878
    if (ctx->r16 != 0) {
        // 0x00299830: nop
    
            goto L_00299878;
    }
    // 0x00299830: nop

    // 0x00299834: j           L_00299864
    // 0x00299838: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
        goto L_00299864;
    // 0x00299838: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
L_0029983C:
    // 0x0029983C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_00299840:
    // 0x00299840: addu        $v0, $s5, $v1
    ctx->r2 = ADD32(ctx->r21, ctx->r3);
    // 0x00299844: lbu         $v0, 0x6($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X6);
    // 0x00299848: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0029984C: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x00299850: slti        $v0, $v1, 0x20
    ctx->r2 = SIGNED(ctx->r3) < 0X20 ? 1 : 0;
    // 0x00299854: bne         $v0, $zero, L_00299840
    if (ctx->r2 != 0) {
        // 0x00299858: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_00299840;
    }
    // 0x00299858: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x0029985C: j           L_00299868
    // 0x00299860: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_00299868;
    // 0x00299860: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_00299864:
    // 0x00299864: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_00299868:
    // 0x00299868: bne         $s0, $v0, L_00299878
    if (ctx->r16 != ctx->r2) {
        // 0x0029986C: addu        $v0, $s3, $zero
        ctx->r2 = ADD32(ctx->r19, 0);
            goto L_00299878;
    }
    // 0x0029986C: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00299870: bgez        $v0, L_00299700
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00299874: addiu       $s3, $s3, -0x1
        ctx->r19 = ADD32(ctx->r19, -0X1);
            goto L_00299700;
    }
    // 0x00299874: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
L_00299878:
    // 0x00299878: jal         0x0029A050
    // 0x0029987C: nop

    func_0029A050(rdram, ctx);
        goto after_8;
    // 0x0029987C: nop

    after_8:
    // 0x00299880: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x00299884: lw          $ra, 0x58($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X58);
    // 0x00299888: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x0029988C: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x00299890: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x00299894: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x00299898: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x0029989C: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x002998A0: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x002998A4: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x002998A8: jr          $ra
    // 0x002998AC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x002998AC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_002534D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002534D8: jr          $ra
    // 0x002534DC: nop

    return;
    // 0x002534DC: nop

;}
RECOMP_FUNC void func_002572FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002572FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00257300: beq         $a1, $v0, L_00257360
    if (ctx->r5 == ctx->r2) {
        // 0x00257304: sll         $v0, $a0, 16
        ctx->r2 = S32(ctx->r4 << 16);
            goto L_00257360;
    }
    // 0x00257304: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x00257308: slti        $v0, $a1, 0x2
    ctx->r2 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x0025730C: beq         $v0, $zero, L_00257324
    if (ctx->r2 == 0) {
        // 0x00257310: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00257324;
    }
    // 0x00257310: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00257314: beq         $a1, $zero, L_00257334
    if (ctx->r5 == 0) {
        // 0x00257318: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00257334;
    }
    // 0x00257318: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0025731C: j           L_00257394
    // 0x00257320: nop

        goto L_00257394;
    // 0x00257320: nop

L_00257324:
    // 0x00257324: beq         $a1, $v0, L_0025737C
    if (ctx->r5 == ctx->r2) {
        // 0x00257328: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0025737C;
    }
    // 0x00257328: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0025732C: j           L_00257394
    // 0x00257330: nop

        goto L_00257394;
    // 0x00257330: nop

L_00257334:
    // 0x00257334: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x00257338: sra         $v0, $v0, 14
    ctx->r2 = S32(SIGNED(ctx->r2) >> 14);
    // 0x0025733C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00257340: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00257344: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x00257348: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x0025734C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
L_00257350:
    // 0x00257350: beq         $v0, $zero, L_00257394
    if (ctx->r2 == 0) {
        // 0x00257354: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00257394;
    }
    // 0x00257354: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00257358: jr          $ra
    // 0x0025735C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x0025735C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00257360:
    // 0x00257360: sra         $v0, $v0, 14
    ctx->r2 = S32(SIGNED(ctx->r2) >> 14);
    // 0x00257364: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00257368: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0025736C: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x00257370: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x00257374: j           L_00257350
    // 0x00257378: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
        goto L_00257350;
    // 0x00257378: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
L_0025737C:
    // 0x0025737C: sll         $v1, $a0, 16
    ctx->r3 = S32(ctx->r4 << 16);
    // 0x00257380: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x00257384: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x00257388: beq         $v1, $a0, L_00257394
    if (ctx->r3 == ctx->r4) {
        // 0x0025738C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00257394;
    }
    // 0x0025738C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00257390: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00257394:
    // 0x00257394: jr          $ra
    // 0x00257398: nop

    return;
    // 0x00257398: nop

;}
RECOMP_FUNC void func_002842C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002842C8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x002842CC: sw          $zero, 0x1BB8($at)
    MEM_W(0X1BB8, ctx->r1) = 0;
    // 0x002842D0: jr          $ra
    // 0x002842D4: nop

    return;
    // 0x002842D4: nop

;}
RECOMP_FUNC void func_0021F1A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021F1A4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021F1A8: lwc1        $f0, 0x5D10($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5D10);
    // 0x0021F1AC: jr          $ra
    // 0x0021F1B0: nop

    return;
    // 0x0021F1B0: nop

;}
RECOMP_FUNC void func_0045BB54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_00206098(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00206098: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x0020609C: lw          $v0, -0x7254($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7254);
    // 0x002060A0: jr          $ra
    // 0x002060A4: nop

    return;
    // 0x002060A4: nop

;}
RECOMP_FUNC void func_002718FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002718FC: jr          $ra
    // 0x00271900: sw          $a1, 0x2BB8($a0)
    MEM_W(0X2BB8, ctx->r4) = ctx->r5;
    return;
    // 0x00271900: sw          $a1, 0x2BB8($a0)
    MEM_W(0X2BB8, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_0040E648(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040E648: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0040E64C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0040E650: lw          $v0, 0x50C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X50C);
    // 0x0040E654: bne         $v0, $zero, L_0040E720
    if (ctx->r2 != 0) {
        // 0x0040E658: nop
    
            goto L_0040E720;
    }
    // 0x0040E658: nop

    // 0x0040E65C: lw          $v0, 0x4F8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4F8);
    // 0x0040E660: addiu       $v1, $v0, 0xC
    ctx->r3 = ADD32(ctx->r2, 0XC);
    // 0x0040E664: sw          $v1, 0x4F8($a0)
    MEM_W(0X4F8, ctx->r4) = ctx->r3;
    // 0x0040E668: lw          $a2, 0xC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XC);
    // 0x0040E66C: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0040E670: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0040E674: sw          $zero, 0x518($a0)
    MEM_W(0X518, ctx->r4) = 0;
    // 0x0040E678: sw          $zero, 0x530($a0)
    MEM_W(0X530, ctx->r4) = 0;
    // 0x0040E67C: blez        $v0, L_0040E6A4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040E680: sw          $zero, 0x548($a0)
        MEM_W(0X548, ctx->r4) = 0;
            goto L_0040E6A4;
    }
    // 0x0040E680: sw          $zero, 0x548($a0)
    MEM_W(0X548, ctx->r4) = 0;
    // 0x0040E684: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_0040E688:
    // 0x0040E688: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x0040E68C: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x0040E690: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0040E694: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0040E698: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0040E69C: bne         $v0, $zero, L_0040E688
    if (ctx->r2 != 0) {
        // 0x0040E6A0: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_0040E688;
    }
    // 0x0040E6A0: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_0040E6A4:
    // 0x0040E6A4: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x0040E6A8: blez        $v0, L_0040E6D0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040E6AC: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0040E6D0;
    }
    // 0x0040E6AC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0040E6B0: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_0040E6B4:
    // 0x0040E6B4: lw          $v0, 0x1C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1C);
    // 0x0040E6B8: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x0040E6BC: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x0040E6C0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0040E6C4: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0040E6C8: bne         $v0, $zero, L_0040E6B4
    if (ctx->r2 != 0) {
        // 0x0040E6CC: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_0040E6B4;
    }
    // 0x0040E6CC: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_0040E6D0:
    // 0x0040E6D0: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    // 0x0040E6D4: blez        $v0, L_0040E6FC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040E6D8: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0040E6FC;
    }
    // 0x0040E6D8: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0040E6DC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_0040E6E0:
    // 0x0040E6E0: lw          $v0, 0x30($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X30);
    // 0x0040E6E4: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x0040E6E8: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    // 0x0040E6EC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0040E6F0: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0040E6F4: bne         $v0, $zero, L_0040E6E0
    if (ctx->r2 != 0) {
        // 0x0040E6F8: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_0040E6E0;
    }
    // 0x0040E6F8: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_0040E6FC:
    // 0x0040E6FC: sll         $v0, $a2, 3
    ctx->r2 = S32(ctx->r6 << 3);
    // 0x0040E700: sw          $a2, 0x4FC($a0)
    MEM_W(0X4FC, ctx->r4) = ctx->r6;
    // 0x0040E704: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x0040E708: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0040E70C: lw          $v0, 0x240C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X240C);
    // 0x0040E710: beq         $v0, $zero, L_0040E720
    if (ctx->r2 == 0) {
        // 0x0040E714: nop
    
            goto L_0040E720;
    }
    // 0x0040E714: nop

    // 0x0040E718: jalr        $v0
    // 0x0040E71C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x0040E71C: nop

    after_0:
L_0040E720:
    // 0x0040E720: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0040E724: jr          $ra
    // 0x0040E728: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040E728: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00224ED0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00224ED0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x00224ED4: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x00224ED8: ori         $v0, $v0, 0x518
    ctx->r2 = ctx->r2 | 0X518;
    // 0x00224EDC: lwc1        $f0, 0x60($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X60);
    // 0x00224EE0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00224EE4: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x00224EE8: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x00224EEC: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x00224EF0: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x00224EF4: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x00224EF8: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x00224EFC: lw          $v1, 0x50($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X50);
    // 0x00224F00: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x00224F04: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x00224F08: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x00224F0C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x00224F10: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x00224F14: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x00224F18: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x00224F1C: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x00224F20: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x00224F24: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x00224F28: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x00224F2C: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x00224F30: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    // 0x00224F34: jal         0x00227240
    // 0x00224F38: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_00227240(rdram, ctx);
        goto after_0;
    // 0x00224F38: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x00224F3C: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x00224F40: jr          $ra
    // 0x00224F44: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x00224F44: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_0023F7B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023F7B8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x0023F7BC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0023F7C0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0023F7C4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0023F7C8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0023F7CC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0023F7D0: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x0023F7D4: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x0023F7D8: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    // 0x0023F7DC: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x0023F7E0: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    // 0x0023F7E4: addiu       $v0, $zero, 0x4B
    ctx->r2 = ADD32(0, 0X4B);
    // 0x0023F7E8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0023F7EC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0023F7F0: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x0023F7F4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0023F7F8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x0023F7FC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x0023F800: lw          $a0, 0x51C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X51C);
    // 0x0023F804: jal         0x00281060
    // 0x0023F808: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    func_00281060(rdram, ctx);
        goto after_0;
    // 0x0023F808: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    after_0:
    // 0x0023F80C: beq         $s1, $zero, L_0023F828
    if (ctx->r17 == 0) {
        // 0x0023F810: nop
    
            goto L_0023F828;
    }
    // 0x0023F810: nop

    // 0x0023F814: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0023F818: addiu       $a0, $a0, -0x6750
    ctx->r4 = ADD32(ctx->r4, -0X6750);
    // 0x0023F81C: lw          $a1, 0x51C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X51C);
    // 0x0023F820: jal         0x0027FC2C
    // 0x0023F824: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0027FC2C(rdram, ctx);
        goto after_1;
    // 0x0023F824: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_1:
L_0023F828:
    // 0x0023F828: beq         $s2, $zero, L_0023F850
    if (ctx->r18 == 0) {
        // 0x0023F82C: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0023F850;
    }
    // 0x0023F82C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0023F830: sll         $a0, $s2, 16
    ctx->r4 = S32(ctx->r18 << 16);
    // 0x0023F834: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0023F838: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0023F83C: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x0023F840: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x0023F844: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x0023F848: jal         0x00275544
    // 0x0023F84C: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    func_00275544(rdram, ctx);
        goto after_2;
    // 0x0023F84C: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    after_2:
L_0023F850:
    // 0x0023F850: beq         $s3, $zero, L_0023F860
    if (ctx->r19 == 0) {
        // 0x0023F854: nop
    
            goto L_0023F860;
    }
    // 0x0023F854: nop

    // 0x0023F858: jal         0x0027580C
    // 0x0023F85C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_0027580C(rdram, ctx);
        goto after_3;
    // 0x0023F85C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_3:
L_0023F860:
    // 0x0023F860: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x0023F864: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0023F868: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0023F86C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0023F870: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0023F874: jr          $ra
    // 0x0023F878: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0023F878: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x0023F87C: nop

;}
RECOMP_FUNC void func_002536D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002536D8: jr          $ra
    // 0x002536DC: addiu       $v0, $a1, -0xFA0
    ctx->r2 = ADD32(ctx->r5, -0XFA0);
    return;
    // 0x002536DC: addiu       $v0, $a1, -0xFA0
    ctx->r2 = ADD32(ctx->r5, -0XFA0);
;}
RECOMP_FUNC void func_0041E374(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041E374: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x0041E378: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x0041E37C: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0041E380: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x0041E384: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x0041E388: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x0041E38C: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    // 0x0041E390: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x0041E394: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0041E398: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x0041E39C: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x0041E3A0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_0041E3A4:
    // 0x0041E3A4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0041E3A8: jal         0x00426978
    // 0x0041E3AC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    func_00426978(rdram, ctx);
        goto after_0;
    // 0x0041E3AC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x0041E3B0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x0041E3B4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x0041E3B8: jal         0x00426C88
    // 0x0041E3BC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_00426C88(rdram, ctx);
        goto after_1;
    // 0x0041E3BC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x0041E3C0: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041E3C4: addiu       $a1, $a1, 0x45C0
    ctx->r5 = ADD32(ctx->r5, 0X45C0);
    // 0x0041E3C8: jal         0x00426D54
    // 0x0041E3CC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_00426D54(rdram, ctx);
        goto after_2;
    // 0x0041E3CC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_2:
    // 0x0041E3D0: beq         $v0, $zero, L_0041E45C
    if (ctx->r2 == 0) {
        // 0x0041E3D4: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_0041E45C;
    }
    // 0x0041E3D4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0041E3D8: slti        $v0, $s0, 0x10
    ctx->r2 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x0041E3DC: bnel        $v0, $zero, L_0041E3A4
    if (ctx->r2 != 0) {
        // 0x0041E3E0: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0041E3A4;
    }
    goto skip_0;
    // 0x0041E3E0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    skip_0:
    // 0x0041E3E4: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
L_0041E3E8:
    // 0x0041E3E8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0041E3EC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_0041E3F0:
    // 0x0041E3F0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0041E3F4: jal         0x00426978
    // 0x0041E3F8: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    func_00426978(rdram, ctx);
        goto after_3;
    // 0x0041E3F8: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    after_3:
    // 0x0041E3FC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x0041E400: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x0041E404: jal         0x00426C88
    // 0x0041E408: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_00426C88(rdram, ctx);
        goto after_4;
    // 0x0041E408: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
    // 0x0041E40C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041E410: addiu       $a1, $a1, 0x45CC
    ctx->r5 = ADD32(ctx->r5, 0X45CC);
    // 0x0041E414: jal         0x00426D54
    // 0x0041E418: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_00426D54(rdram, ctx);
        goto after_5;
    // 0x0041E418: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_5:
    // 0x0041E41C: beq         $v0, $zero, L_0041E454
    if (ctx->r2 == 0) {
        // 0x0041E420: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_0041E454;
    }
    // 0x0041E420: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0041E424: slti        $v0, $s0, 0x10
    ctx->r2 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x0041E428: bnel        $v0, $zero, L_0041E3F0
    if (ctx->r2 != 0) {
        // 0x0041E42C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0041E3F0;
    }
    goto skip_1;
    // 0x0041E42C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    skip_1:
    // 0x0041E430: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0041E434:
    // 0x0041E434: bnel        $s1, $zero, L_0041E444
    if (ctx->r17 != 0) {
        // 0x0041E438: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0041E444;
    }
    goto skip_2;
    // 0x0041E438: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_2:
    // 0x0041E43C: beq         $v0, $zero, L_0041E464
    if (ctx->r2 == 0) {
        // 0x0041E440: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0041E464;
    }
    // 0x0041E440: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0041E444:
    // 0x0041E444: addiu       $v1, $zero, 0x7B
    ctx->r3 = ADD32(0, 0X7B);
    // 0x0041E448: sw          $s2, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r18;
    // 0x0041E44C: j           L_0041E4E0
    // 0x0041E450: sw          $v1, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r3;
        goto L_0041E4E0;
    // 0x0041E450: sw          $v1, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r3;
L_0041E454:
    // 0x0041E454: j           L_0041E434
    // 0x0041E458: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_0041E434;
    // 0x0041E458: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0041E45C:
    // 0x0041E45C: j           L_0041E3E8
    // 0x0041E460: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
        goto L_0041E3E8;
    // 0x0041E460: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_0041E464:
    // 0x0041E464: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0041E468: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x0041E46C: jal         0x004267A0
    // 0x0041E470: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_004267A0(rdram, ctx);
        goto after_6;
    // 0x0041E470: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_6:
    // 0x0041E474: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0041E478: bne         $s0, $zero, L_0041E4E0
    if (ctx->r16 != 0) {
        // 0x0041E47C: sltiu       $v0, $s0, 0x1
        ctx->r2 = ctx->r16 < 0X1 ? 1 : 0;
            goto L_0041E4E0;
    }
    // 0x0041E47C: sltiu       $v0, $s0, 0x1
    ctx->r2 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x0041E480: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0041E484: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x0041E488: jal         0x0042670C
    // 0x0041E48C: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_0042670C(rdram, ctx);
        goto after_7;
    // 0x0041E48C: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_7:
    // 0x0041E490: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0041E494: bne         $s0, $zero, L_0041E4E0
    if (ctx->r16 != 0) {
        // 0x0041E498: sltiu       $v0, $s0, 0x1
        ctx->r2 = ctx->r16 < 0X1 ? 1 : 0;
            goto L_0041E4E0;
    }
    // 0x0041E498: sltiu       $v0, $s0, 0x1
    ctx->r2 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x0041E49C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0041E4A0: lw          $a0, 0x70A8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X70A8);
    // 0x0041E4A4: jal         0x00426E6C
    // 0x0041E4A8: addiu       $a0, $a0, 0x688
    ctx->r4 = ADD32(ctx->r4, 0X688);
    func_00426E6C(rdram, ctx);
        goto after_8;
    // 0x0041E4A8: addiu       $a0, $a0, 0x688
    ctx->r4 = ADD32(ctx->r4, 0X688);
    after_8:
    // 0x0041E4AC: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x0041E4B0: beq         $v1, $zero, L_0041E4C8
    if (ctx->r3 == 0) {
        // 0x0041E4B4: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_0041E4C8;
    }
    // 0x0041E4B4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0041E4B8: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x0041E4BC: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x0041E4C0: beq         $v0, $zero, L_0041E4E0
    if (ctx->r2 == 0) {
        // 0x0041E4C4: sltiu       $v0, $s0, 0x1
        ctx->r2 = ctx->r16 < 0X1 ? 1 : 0;
            goto L_0041E4E0;
    }
    // 0x0041E4C4: sltiu       $v0, $s0, 0x1
    ctx->r2 = ctx->r16 < 0X1 ? 1 : 0;
L_0041E4C8:
    // 0x0041E4C8: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x0041E4CC: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x0041E4D0: beq         $v0, $zero, L_0041E4E0
    if (ctx->r2 == 0) {
        // 0x0041E4D4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0041E4E0;
    }
    // 0x0041E4D4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041E4D8: sw          $a0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r4;
    // 0x0041E4DC: sw          $s2, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r18;
L_0041E4E0:
    // 0x0041E4E0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x0041E4E4: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x0041E4E8: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x0041E4EC: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x0041E4F0: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x0041E4F4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0041E4F8: jr          $ra
    // 0x0041E4FC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x0041E4FC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_002744D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002744D0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x002744D4: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x002744D8: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x002744DC: sdc1        $f21, 0x20($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X20, ctx->r29);
    // 0x002744E0: mtc1        $a1, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r5;
    // 0x002744E4: cvt.s.w     $f21, $f21
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    ctx->f21.fl = CVT_S_W(ctx->f_odd[(21 - 1) * 2]);
    // 0x002744E8: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    // 0x002744EC: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x002744F0: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x002744F4: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x002744F8: mtc1        $a0, $f20
    ctx->f20.u32l = ctx->r4;
    // 0x002744FC: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x00274500: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00274504: jal         0x002119FC
    // 0x00274508: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    func_002119FC(rdram, ctx);
        goto after_0;
    // 0x00274508: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    after_0:
    // 0x0027450C: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00274510: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00274514: nop

    // 0x00274518: bc1f        L_00274530
    if (!c1cs) {
        // 0x0027451C: mov.s       $f12, $f21
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
            goto L_00274530;
    }
    // 0x0027451C: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    // 0x00274520: jal         0x002119FC
    // 0x00274524: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    func_002119FC(rdram, ctx);
        goto after_1;
    // 0x00274524: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    after_1:
    // 0x00274528: j           L_0027453C
    // 0x0027452C: sub.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f0.fl;
        goto L_0027453C;
    // 0x0027452C: sub.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f0.fl;
L_00274530:
    // 0x00274530: jal         0x002119FC
    // 0x00274534: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    func_002119FC(rdram, ctx);
        goto after_2;
    // 0x00274534: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    after_2:
    // 0x00274538: add.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f20.fl + ctx->f0.fl;
L_0027453C:
    // 0x0027453C: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00274540: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x00274544: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x00274548: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0027454C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00274550: ldc1        $f21, 0x20($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X20);
    // 0x00274554: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x00274558: jr          $ra
    // 0x0027455C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0027455C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00416760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00416760: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00416764: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00416768: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0041676C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x00416770: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x00416774: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00416778: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x0041677C: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x00416780: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x00416784: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x00416788: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x0041678C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00416790: lh          $v1, 0x4($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X4);
    // 0x00416794: lw          $s3, 0x18($a1)
    ctx->r19 = MEM_W(ctx->r5, 0X18);
    // 0x00416798: lw          $s4, 0x1C($a1)
    ctx->r20 = MEM_W(ctx->r5, 0X1C);
    // 0x0041679C: lw          $s5, 0x20($a1)
    ctx->r21 = MEM_W(ctx->r5, 0X20);
    // 0x004167A0: lw          $s6, 0x24($a1)
    ctx->r22 = MEM_W(ctx->r5, 0X24);
    // 0x004167A4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x004167A8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x004167AC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x004167B0: blez        $v1, L_004167E8
    if (SIGNED(ctx->r3) <= 0) {
        // 0x004167B4: addiu       $a3, $v0, 0x1D8
        ctx->r7 = ADD32(ctx->r2, 0X1D8);
            goto L_004167E8;
    }
    // 0x004167B4: addiu       $a3, $v0, 0x1D8
    ctx->r7 = ADD32(ctx->r2, 0X1D8);
    // 0x004167B8: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x004167BC: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x004167C0: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
L_004167C4:
    // 0x004167C4: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x004167C8: bne         $v0, $t0, L_004167D4
    if (ctx->r2 != ctx->r8) {
        // 0x004167CC: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_004167D4;
    }
    // 0x004167CC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x004167D0: addiu       $v1, $zero, 0x330
    ctx->r3 = ADD32(0, 0X330);
L_004167D4:
    // 0x004167D4: addu        $a3, $a3, $v1
    ctx->r7 = ADD32(ctx->r7, ctx->r3);
    // 0x004167D8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x004167DC: slt         $v0, $a2, $a1
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x004167E0: bne         $v0, $zero, L_004167C4
    if (ctx->r2 != 0) {
        // 0x004167E4: addiu       $a0, $a0, 0x24
        ctx->r4 = ADD32(ctx->r4, 0X24);
            goto L_004167C4;
    }
    // 0x004167E4: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
L_004167E8:
    // 0x004167E8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004167EC: addu        $a1, $a3, $zero
    ctx->r5 = ADD32(ctx->r7, 0);
    // 0x004167F0: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x004167F4: addiu       $a3, $a3, 0xC54
    ctx->r7 = ADD32(ctx->r7, 0XC54);
    // 0x004167F8: jal         0x00204EDC
    // 0x004167FC: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
    func_00204EDC(rdram, ctx);
        goto after_0;
    // 0x004167FC: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
    after_0:
    // 0x00416800: beql        $v0, $zero, L_0041686C
    if (ctx->r2 == 0) {
        // 0x00416804: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0041686C;
    }
    goto skip_0;
    // 0x00416804: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x00416808: lw          $s0, 0x0($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X0);
    // 0x0041680C: bne         $s0, $zero, L_0041681C
    if (ctx->r16 != 0) {
        // 0x00416810: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0041681C;
    }
    // 0x00416810: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00416814: j           L_0041686C
    // 0x00416818: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_0041686C;
    // 0x00416818: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0041681C:
    // 0x0041681C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00416820: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x00416824: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    // 0x00416828: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x0041682C: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x00416830: sw          $s6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r22;
    // 0x00416834: jal         0x00414EA8
    // 0x00416838: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    func_00414EA8(rdram, ctx);
        goto after_1;
    // 0x00416838: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    after_1:
    // 0x0041683C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00416840: jal         0x00200518
    // 0x00416844: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200518(rdram, ctx);
        goto after_2;
    // 0x00416844: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00416848: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x0041684C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00416850: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
    // 0x00416854: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x00416858: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0041685C: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x00416860: beql        $v0, $zero, L_00416868
    if (ctx->r2 == 0) {
        // 0x00416864: sh          $zero, 0x14($s1)
        MEM_H(0X14, ctx->r17) = 0;
            goto L_00416868;
    }
    goto skip_1;
    // 0x00416864: sh          $zero, 0x14($s1)
    MEM_H(0X14, ctx->r17) = 0;
    skip_1:
L_00416868:
    // 0x00416868: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_0041686C:
    // 0x0041686C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x00416870: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x00416874: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x00416878: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x0041687C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x00416880: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00416884: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00416888: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0041688C: jr          $ra
    // 0x00416890: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00416890: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_0028130C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028130C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00281310: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x00281314: addiu       $a1, $a0, 0x114
    ctx->r5 = ADD32(ctx->r4, 0X114);
    // 0x00281318: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x0028131C: jal         0x0020EF2C
    // 0x00281320: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_0020EF2C(rdram, ctx);
        goto after_0;
    // 0x00281320: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_0:
    // 0x00281324: lwc1        $f1, 0x10($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x00281328: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0028132C: lwc1        $f0, 0x14($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X14);
    // 0x00281330: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00281334: lwc1        $f12, 0x18($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
    // 0x00281338: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0028133C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00281340: jal         0x00298470
    // 0x00281344: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_1;
    // 0x00281344: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_1:
    // 0x00281348: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x0028134C: jr          $ra
    // 0x00281350: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00281350: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0044D5B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044D5B0: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x0044D5B4: sw          $s0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r16;
    // 0x0044D5B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0044D5BC: sw          $s1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r17;
    // 0x0044D5C0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0044D5C4: sw          $s2, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r18;
    // 0x0044D5C8: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x0044D5CC: sw          $s3, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r19;
    // 0x0044D5D0: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    // 0x0044D5D4: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    // 0x0044D5D8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0044D5DC: sw          $ra, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r31;
    // 0x0044D5E0: sw          $s4, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r20;
    // 0x0044D5E4: lw          $v0, 0x14($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14);
    // 0x0044D5E8: lw          $v1, 0x18($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X18);
    // 0x0044D5EC: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
    // 0x0044D5F0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0044D5F4: srl         $v1, $v0, 31
    ctx->r3 = S32(U32(ctx->r2) >> 31);
    // 0x0044D5F8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0044D5FC: sra         $s4, $v0, 1
    ctx->r20 = S32(SIGNED(ctx->r2) >> 1);
L_0044D600:
    // 0x0044D600: lw          $t1, 0x0($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X0);
    // 0x0044D604: lw          $t2, 0x4($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X4);
    // 0x0044D608: lw          $t3, 0x8($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X8);
    // 0x0044D60C: lw          $t4, 0xC($a2)
    ctx->r12 = MEM_W(ctx->r6, 0XC);
    // 0x0044D610: sw          $t1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r9;
    // 0x0044D614: sw          $t2, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r10;
    // 0x0044D618: sw          $t3, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->r11;
    // 0x0044D61C: sw          $t4, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->r12;
    // 0x0044D620: addiu       $a2, $a2, 0x10
    ctx->r6 = ADD32(ctx->r6, 0X10);
    // 0x0044D624: bne         $a2, $a0, L_0044D600
    if (ctx->r6 != ctx->r4) {
        // 0x0044D628: addiu       $a3, $a3, 0x10
        ctx->r7 = ADD32(ctx->r7, 0X10);
            goto L_0044D600;
    }
    // 0x0044D628: addiu       $a3, $a3, 0x10
    ctx->r7 = ADD32(ctx->r7, 0X10);
    // 0x0044D62C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x0044D630: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x0044D634: lw          $t1, 0x0($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X0);
    // 0x0044D638: lw          $t2, 0x4($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X4);
    // 0x0044D63C: sw          $t1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r9;
    // 0x0044D640: sw          $t2, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r10;
    // 0x0044D644: jal         0x0041363C
    // 0x0044D648: sh          $zero, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = 0;
    func_0041363C(rdram, ctx);
        goto after_0;
    // 0x0044D648: sh          $zero, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = 0;
    after_0:
    // 0x0044D64C: addiu       $v1, $sp, 0x18
    ctx->r3 = ADD32(ctx->r29, 0X18);
    // 0x0044D650: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x0044D654: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
L_0044D658:
    // 0x0044D658: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x0044D65C: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x0044D660: lw          $t3, 0x8($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X8);
    // 0x0044D664: lw          $t4, 0xC($v0)
    ctx->r12 = MEM_W(ctx->r2, 0XC);
    // 0x0044D668: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x0044D66C: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x0044D670: sw          $t3, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r11;
    // 0x0044D674: sw          $t4, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r12;
    // 0x0044D678: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x0044D67C: bne         $v0, $a0, L_0044D658
    if (ctx->r2 != ctx->r4) {
        // 0x0044D680: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_0044D658;
    }
    // 0x0044D680: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x0044D684: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x0044D688: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    // 0x0044D68C: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x0044D690: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x0044D694: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x0044D698: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x0044D69C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0044D6A0: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    // 0x0044D6A4: jal         0x0041363C
    // 0x0044D6A8: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    func_0041363C(rdram, ctx);
        goto after_1;
    // 0x0044D6A8: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    after_1:
    // 0x0044D6AC: addiu       $v1, $sp, 0x18
    ctx->r3 = ADD32(ctx->r29, 0X18);
    // 0x0044D6B0: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x0044D6B4: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
L_0044D6B8:
    // 0x0044D6B8: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x0044D6BC: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x0044D6C0: lw          $t3, 0x8($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X8);
    // 0x0044D6C4: lw          $t4, 0xC($v0)
    ctx->r12 = MEM_W(ctx->r2, 0XC);
    // 0x0044D6C8: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x0044D6CC: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x0044D6D0: sw          $t3, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r11;
    // 0x0044D6D4: sw          $t4, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r12;
    // 0x0044D6D8: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x0044D6DC: bne         $v0, $a0, L_0044D6B8
    if (ctx->r2 != ctx->r4) {
        // 0x0044D6E0: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_0044D6B8;
    }
    // 0x0044D6E0: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x0044D6E4: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x0044D6E8: addiu       $a1, $sp, 0x90
    ctx->r5 = ADD32(ctx->r29, 0X90);
    // 0x0044D6EC: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x0044D6F0: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x0044D6F4: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x0044D6F8: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x0044D6FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0044D700: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    // 0x0044D704: jal         0x0041363C
    // 0x0044D708: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    func_0041363C(rdram, ctx);
        goto after_2;
    // 0x0044D708: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    after_2:
    // 0x0044D70C: addiu       $v1, $sp, 0x18
    ctx->r3 = ADD32(ctx->r29, 0X18);
    // 0x0044D710: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x0044D714: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
L_0044D718:
    // 0x0044D718: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x0044D71C: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x0044D720: lw          $t3, 0x8($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X8);
    // 0x0044D724: lw          $t4, 0xC($v0)
    ctx->r12 = MEM_W(ctx->r2, 0XC);
    // 0x0044D728: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x0044D72C: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x0044D730: sw          $t3, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r11;
    // 0x0044D734: sw          $t4, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r12;
    // 0x0044D738: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x0044D73C: bne         $v0, $a0, L_0044D718
    if (ctx->r2 != ctx->r4) {
        // 0x0044D740: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_0044D718;
    }
    // 0x0044D740: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x0044D744: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x0044D748: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x0044D74C: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x0044D750: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x0044D754: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x0044D758: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x0044D75C: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x0044D760: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0044D764: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x0044D768: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x0044D76C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0044D770: beq         $v0, $zero, L_0044D798
    if (ctx->r2 == 0) {
        // 0x0044D774: addiu       $a0, $sp, 0x18
        ctx->r4 = ADD32(ctx->r29, 0X18);
            goto L_0044D798;
    }
    // 0x0044D774: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x0044D778: lw          $v0, 0x6C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X6C);
    // 0x0044D77C: lw          $v1, 0x94($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X94);
    // 0x0044D780: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0044D784: srl         $v1, $v0, 31
    ctx->r3 = S32(U32(ctx->r2) >> 31);
    // 0x0044D788: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0044D78C: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x0044D790: subu        $v0, $s4, $v0
    ctx->r2 = SUB32(ctx->r20, ctx->r2);
    // 0x0044D794: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_0044D798:
    // 0x0044D798: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0044D79C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0044D7A0: lw          $v0, 0x94($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X94);
    // 0x0044D7A4: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    // 0x0044D7A8: srl         $v1, $v0, 31
    ctx->r3 = S32(U32(ctx->r2) >> 31);
    // 0x0044D7AC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0044D7B0: lw          $v1, 0x14($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X14);
    // 0x0044D7B4: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x0044D7B8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0044D7BC: jal         0x004143DC
    // 0x0044D7C0: sw          $v1, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r3;
    func_004143DC(rdram, ctx);
        goto after_3;
    // 0x0044D7C0: sw          $v1, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r3;
    after_3:
    // 0x0044D7C4: addiu       $v1, $sp, 0x18
    ctx->r3 = ADD32(ctx->r29, 0X18);
    // 0x0044D7C8: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x0044D7CC: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
L_0044D7D0:
    // 0x0044D7D0: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x0044D7D4: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x0044D7D8: lw          $t3, 0x8($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X8);
    // 0x0044D7DC: lw          $t4, 0xC($v0)
    ctx->r12 = MEM_W(ctx->r2, 0XC);
    // 0x0044D7E0: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x0044D7E4: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x0044D7E8: sw          $t3, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r11;
    // 0x0044D7EC: sw          $t4, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r12;
    // 0x0044D7F0: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x0044D7F4: bne         $v0, $a0, L_0044D7D0
    if (ctx->r2 != ctx->r4) {
        // 0x0044D7F8: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_0044D7D0;
    }
    // 0x0044D7F8: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x0044D7FC: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x0044D800: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x0044D804: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x0044D808: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x0044D80C: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x0044D810: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x0044D814: lw          $v0, 0x6C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X6C);
    // 0x0044D818: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0044D81C: mflo        $a3
    ctx->r7 = lo;
    // 0x0044D820: bltzl       $a3, L_0044D828
    if (SIGNED(ctx->r7) < 0) {
        // 0x0044D824: addiu       $a3, $a3, 0xFF
        ctx->r7 = ADD32(ctx->r7, 0XFF);
            goto L_0044D828;
    }
    goto skip_0;
    // 0x0044D824: addiu       $a3, $a3, 0xFF
    ctx->r7 = ADD32(ctx->r7, 0XFF);
    skip_0:
L_0044D828:
    // 0x0044D828: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x0044D82C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0044D830: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0044D834: lw          $v1, 0x94($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X94);
    // 0x0044D838: sra         $a3, $a3, 8
    ctx->r7 = S32(SIGNED(ctx->r7) >> 8);
    // 0x0044D83C: srl         $v0, $v1, 31
    ctx->r2 = S32(U32(ctx->r3) >> 31);
    // 0x0044D840: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0044D844: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x0044D848: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x0044D84C: subu        $a3, $a3, $v1
    ctx->r7 = SUB32(ctx->r7, ctx->r3);
    // 0x0044D850: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x0044D854: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    // 0x0044D858: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    // 0x0044D85C: lw          $v1, 0x70($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X70);
    // 0x0044D860: lw          $t0, 0x98($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X98);
    // 0x0044D864: srl         $v0, $v1, 31
    ctx->r2 = S32(U32(ctx->r3) >> 31);
    // 0x0044D868: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0044D86C: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x0044D870: srl         $v0, $t0, 31
    ctx->r2 = S32(U32(ctx->r8) >> 31);
    // 0x0044D874: addu        $t0, $t0, $v0
    ctx->r8 = ADD32(ctx->r8, ctx->r2);
    // 0x0044D878: sra         $t0, $t0, 1
    ctx->r8 = S32(SIGNED(ctx->r8) >> 1);
    // 0x0044D87C: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x0044D880: subu        $v1, $v1, $t0
    ctx->r3 = SUB32(ctx->r3, ctx->r8);
    // 0x0044D884: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0044D888: jal         0x004143DC
    // 0x0044D88C: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    func_004143DC(rdram, ctx);
        goto after_4;
    // 0x0044D88C: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    after_4:
    // 0x0044D890: addiu       $v1, $sp, 0x18
    ctx->r3 = ADD32(ctx->r29, 0X18);
    // 0x0044D894: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x0044D898: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
L_0044D89C:
    // 0x0044D89C: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x0044D8A0: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x0044D8A4: lw          $t3, 0x8($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X8);
    // 0x0044D8A8: lw          $t4, 0xC($v0)
    ctx->r12 = MEM_W(ctx->r2, 0XC);
    // 0x0044D8AC: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x0044D8B0: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x0044D8B4: sw          $t3, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r11;
    // 0x0044D8B8: sw          $t4, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r12;
    // 0x0044D8BC: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x0044D8C0: bne         $v0, $a0, L_0044D89C
    if (ctx->r2 != ctx->r4) {
        // 0x0044D8C4: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_0044D89C;
    }
    // 0x0044D8C4: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x0044D8C8: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x0044D8CC: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x0044D8D0: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x0044D8D4: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x0044D8D8: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x0044D8DC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0044D8E0: beq         $v0, $zero, L_0044D900
    if (ctx->r2 == 0) {
        // 0x0044D8E4: addiu       $a0, $sp, 0x18
        ctx->r4 = ADD32(ctx->r29, 0X18);
            goto L_0044D900;
    }
    // 0x0044D8E4: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x0044D8E8: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x0044D8EC: srl         $v1, $v0, 31
    ctx->r3 = S32(U32(ctx->r2) >> 31);
    // 0x0044D8F0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0044D8F4: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x0044D8F8: subu        $v0, $s4, $v0
    ctx->r2 = SUB32(ctx->r20, ctx->r2);
    // 0x0044D8FC: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_0044D900:
    // 0x0044D900: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0044D904: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0044D908: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0044D90C: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    // 0x0044D910: jal         0x00413F74
    // 0x0044D914: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00413F74(rdram, ctx);
        goto after_5;
    // 0x0044D914: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_5:
    // 0x0044D918: lw          $ra, 0xCC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XCC);
    // 0x0044D91C: lw          $s4, 0xC8($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XC8);
    // 0x0044D920: lw          $s3, 0xC4($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XC4);
    // 0x0044D924: lw          $s2, 0xC0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC0);
    // 0x0044D928: lw          $s1, 0xBC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XBC);
    // 0x0044D92C: lw          $s0, 0xB8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XB8);
    // 0x0044D930: jr          $ra
    // 0x0044D934: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x0044D934: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void func_00299C60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00299C60: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x00299C64: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x00299C68: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x00299C6C: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x00299C70: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00299C74: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x00299C78: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x00299C7C: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x00299C80: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x00299C84: addiu       $s2, $s2, 0xE20
    ctx->r18 = ADD32(ctx->r18, 0XE20);
    // 0x00299C88: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00299C8C: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x00299C90: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
    // 0x00299C94: addiu       $v0, $zero, 0x23
    ctx->r2 = ADD32(0, 0X23);
    // 0x00299C98: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x00299C9C: sw          $v1, 0x3C($s2)
    MEM_W(0X3C, ctx->r18) = ctx->r3;
    // 0x00299CA0: sb          $v0, 0x11($sp)
    MEM_B(0X11, ctx->r29) = ctx->r2;
    // 0x00299CA4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00299CA8: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    // 0x00299CAC: sb          $s1, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r17;
    // 0x00299CB0: sb          $v1, 0x12($sp)
    MEM_B(0X12, ctx->r29) = ctx->r3;
    // 0x00299CB4: jal         0x00299E00
    // 0x00299CB8: sb          $v0, 0x13($sp)
    MEM_B(0X13, ctx->r29) = ctx->r2;
    func_00299E00(rdram, ctx);
        goto after_0;
    // 0x00299CB8: sb          $v0, 0x13($sp)
    MEM_B(0X13, ctx->r29) = ctx->r2;
    after_0:
    // 0x00299CBC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00299CC0: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x00299CC4: sll         $s0, $s0, 5
    ctx->r16 = S32(ctx->r16 << 5);
    // 0x00299CC8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x00299CCC: or          $v0, $v0, $s0
    ctx->r2 = ctx->r2 | ctx->r16;
    // 0x00299CD0: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x00299CD4: sb          $s1, 0x36($sp)
    MEM_B(0X36, ctx->r29) = ctx->r17;
L_00299CD8:
    // 0x00299CD8: lbu         $v1, 0x0($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X0);
    // 0x00299CDC: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
    // 0x00299CE0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00299CE4: sb          $v1, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r3;
    // 0x00299CE8: slti        $v0, $a0, 0x20
    ctx->r2 = SIGNED(ctx->r4) < 0X20 ? 1 : 0;
    // 0x00299CEC: bne         $v0, $zero, L_00299CD8
    if (ctx->r2 != 0) {
        // 0x00299CF0: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_00299CD8;
    }
    // 0x00299CF0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x00299CF4: beq         $s4, $zero, L_00299D1C
    if (ctx->r20 == 0) {
        // 0x00299CF8: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00299D1C;
    }
    // 0x00299CF8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00299CFC: blez        $s4, L_00299D18
    if (SIGNED(ctx->r20) <= 0) {
        // 0x00299D00: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00299D18;
    }
    // 0x00299D00: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00299D04:
    // 0x00299D04: sb          $zero, 0x0($s2)
    MEM_B(0X0, ctx->r18) = 0;
    // 0x00299D08: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00299D0C: slt         $v0, $a0, $s4
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x00299D10: bne         $v0, $zero, L_00299D04
    if (ctx->r2 != 0) {
        // 0x00299D14: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_00299D04;
    }
    // 0x00299D14: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_00299D18:
    // 0x00299D18: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00299D1C:
    // 0x00299D1C: andi        $v0, $s2, 0x3
    ctx->r2 = ctx->r18 & 0X3;
    // 0x00299D20: beq         $v0, $zero, L_00299D80
    if (ctx->r2 == 0) {
        // 0x00299D24: addiu       $v1, $sp, 0x10
        ctx->r3 = ADD32(ctx->r29, 0X10);
            goto L_00299D80;
    }
    // 0x00299D24: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
    // 0x00299D28: addiu       $v0, $sp, 0x30
    ctx->r2 = ADD32(ctx->r29, 0X30);
L_00299D2C:
    // 0x00299D2C: lwl         $a3, 0x0($v1)
    ctx->r7 = do_lwl(rdram, ctx->r7, ctx->r3, 0X0);
    // 0x00299D30: lwr         $a3, 0x3($v1)
    ctx->r7 = do_lwr(rdram, ctx->r7, ctx->r3, 0X3);
    // 0x00299D34: lwl         $t0, 0x4($v1)
    ctx->r8 = do_lwl(rdram, ctx->r8, ctx->r3, 0X4);
    // 0x00299D38: lwr         $t0, 0x7($v1)
    ctx->r8 = do_lwr(rdram, ctx->r8, ctx->r3, 0X7);
    // 0x00299D3C: lwl         $t1, 0x8($v1)
    ctx->r9 = do_lwl(rdram, ctx->r9, ctx->r3, 0X8);
    // 0x00299D40: lwr         $t1, 0xB($v1)
    ctx->r9 = do_lwr(rdram, ctx->r9, ctx->r3, 0XB);
    // 0x00299D44: lwl         $t2, 0xC($v1)
    ctx->r10 = do_lwl(rdram, ctx->r10, ctx->r3, 0XC);
    // 0x00299D48: lwr         $t2, 0xF($v1)
    ctx->r10 = do_lwr(rdram, ctx->r10, ctx->r3, 0XF);
    // 0x00299D4C: swl         $a3, 0x0($a0)
    do_swl(rdram, 0X0, ctx->r4, ctx->r7);
    // 0x00299D50: swr         $a3, 0x3($a0)
    do_swr(rdram, 0X3, ctx->r4, ctx->r7);
    // 0x00299D54: swl         $t0, 0x4($a0)
    do_swl(rdram, 0X4, ctx->r4, ctx->r8);
    // 0x00299D58: swr         $t0, 0x7($a0)
    do_swr(rdram, 0X7, ctx->r4, ctx->r8);
    // 0x00299D5C: swl         $t1, 0x8($a0)
    do_swl(rdram, 0X8, ctx->r4, ctx->r9);
    // 0x00299D60: swr         $t1, 0xB($a0)
    do_swr(rdram, 0XB, ctx->r4, ctx->r9);
    // 0x00299D64: swl         $t2, 0xC($a0)
    do_swl(rdram, 0XC, ctx->r4, ctx->r10);
    // 0x00299D68: swr         $t2, 0xF($a0)
    do_swr(rdram, 0XF, ctx->r4, ctx->r10);
    // 0x00299D6C: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00299D70: bne         $v1, $v0, L_00299D2C
    if (ctx->r3 != ctx->r2) {
        // 0x00299D74: addiu       $a0, $a0, 0x10
        ctx->r4 = ADD32(ctx->r4, 0X10);
            goto L_00299D2C;
    }
    // 0x00299D74: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x00299D78: j           L_00299DB4
    // 0x00299D7C: addiu       $v0, $zero, 0xFE
    ctx->r2 = ADD32(0, 0XFE);
        goto L_00299DB4;
    // 0x00299D7C: addiu       $v0, $zero, 0xFE
    ctx->r2 = ADD32(0, 0XFE);
L_00299D80:
    // 0x00299D80: addiu       $v0, $sp, 0x30
    ctx->r2 = ADD32(ctx->r29, 0X30);
L_00299D84:
    // 0x00299D84: lw          $a3, 0x0($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X0);
    // 0x00299D88: lw          $t0, 0x4($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X4);
    // 0x00299D8C: lw          $t1, 0x8($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X8);
    // 0x00299D90: lw          $t2, 0xC($v1)
    ctx->r10 = MEM_W(ctx->r3, 0XC);
    // 0x00299D94: sw          $a3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r7;
    // 0x00299D98: sw          $t0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r8;
    // 0x00299D9C: sw          $t1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r9;
    // 0x00299DA0: sw          $t2, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r10;
    // 0x00299DA4: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00299DA8: bne         $v1, $v0, L_00299D84
    if (ctx->r3 != ctx->r2) {
        // 0x00299DAC: addiu       $a0, $a0, 0x10
        ctx->r4 = ADD32(ctx->r4, 0X10);
            goto L_00299D84;
    }
    // 0x00299DAC: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x00299DB0: addiu       $v0, $zero, 0xFE
    ctx->r2 = ADD32(0, 0XFE);
L_00299DB4:
    // 0x00299DB4: lwl         $a3, 0x0($v1)
    ctx->r7 = do_lwl(rdram, ctx->r7, ctx->r3, 0X0);
    // 0x00299DB8: lwr         $a3, 0x3($v1)
    ctx->r7 = do_lwr(rdram, ctx->r7, ctx->r3, 0X3);
    // 0x00299DBC: lwl         $t0, 0x4($v1)
    ctx->r8 = do_lwl(rdram, ctx->r8, ctx->r3, 0X4);
    // 0x00299DC0: lwr         $t0, 0x7($v1)
    ctx->r8 = do_lwr(rdram, ctx->r8, ctx->r3, 0X7);
    // 0x00299DC4: swl         $a3, 0x0($a0)
    do_swl(rdram, 0X0, ctx->r4, ctx->r7);
    // 0x00299DC8: swr         $a3, 0x3($a0)
    do_swr(rdram, 0X3, ctx->r4, ctx->r7);
    // 0x00299DCC: swl         $t0, 0x4($a0)
    do_swl(rdram, 0X4, ctx->r4, ctx->r8);
    // 0x00299DD0: swr         $t0, 0x7($a0)
    do_swr(rdram, 0X7, ctx->r4, ctx->r8);
    // 0x00299DD4: sb          $v0, 0x28($s2)
    MEM_B(0X28, ctx->r18) = ctx->r2;
    // 0x00299DD8: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x00299DDC: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x00299DE0: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x00299DE4: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x00299DE8: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x00299DEC: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x00299DF0: jr          $ra
    // 0x00299DF4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x00299DF4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_00407F20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00407F20: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00407F24: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00407F28: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00407F2C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00407F30: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00407F34: addiu       $s0, $s0, -0x6790
    ctx->r16 = ADD32(ctx->r16, -0X6790);
    // 0x00407F38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00407F3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00407F40: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00407F44: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00407F48: jal         0x002532A8
    // 0x00407F4C: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
    func_002532A8(rdram, ctx);
        goto after_0;
    // 0x00407F4C: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
    after_0:
    // 0x00407F50: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x00407F54: lw          $a1, 0x51C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X51C);
    // 0x00407F58: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x00407F5C: addiu       $a2, $a2, 0x6660
    ctx->r6 = ADD32(ctx->r6, 0X6660);
    // 0x00407F60: jal         0x0027FC2C
    // 0x00407F64: addiu       $a0, $s0, 0x40
    ctx->r4 = ADD32(ctx->r16, 0X40);
    func_0027FC2C(rdram, ctx);
        goto after_1;
    // 0x00407F64: addiu       $a0, $s0, 0x40
    ctx->r4 = ADD32(ctx->r16, 0X40);
    after_1:
    // 0x00407F68: jal         0x0027580C
    // 0x00407F6C: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    func_0027580C(rdram, ctx);
        goto after_2;
    // 0x00407F6C: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    after_2:
    // 0x00407F70: lui         $a1, 0x4461
    ctx->r5 = S32(0X4461 << 16);
    // 0x00407F74: jal         0x002535E4
    // 0x00407F78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002535E4(rdram, ctx);
        goto after_3;
    // 0x00407F78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x00407F7C: addiu       $a1, $zero, 0x5337
    ctx->r5 = ADD32(0, 0X5337);
    // 0x00407F80: lw          $s0, 0x0($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X0);
    // 0x00407F84: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x00407F88: jal         0x00219F74
    // 0x00407F8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00219F74(rdram, ctx);
        goto after_4;
    // 0x00407F8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x00407F90: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00407F94: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00407F98: addiu       $a1, $s0, 0x140
    ctx->r5 = ADD32(ctx->r16, 0X140);
    // 0x00407F9C: sb          $v0, 0xC6($a1)
    MEM_B(0XC6, ctx->r5) = ctx->r2;
    // 0x00407FA0: addiu       $v0, $zero, 0x5337
    ctx->r2 = ADD32(0, 0X5337);
    // 0x00407FA4: sh          $v0, 0xC4($a1)
    MEM_H(0XC4, ctx->r5) = ctx->r2;
    // 0x00407FA8: lw          $v0, 0x140($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X140);
    // 0x00407FAC: addiu       $v1, $zero, -0x2
    ctx->r3 = ADD32(0, -0X2);
    // 0x00407FB0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00407FB4: sw          $v0, 0x140($s0)
    MEM_W(0X140, ctx->r16) = ctx->r2;
    // 0x00407FB8: jal         0x00225D0C
    // 0x00407FBC: sb          $zero, 0xC7($a1)
    MEM_B(0XC7, ctx->r5) = 0;
    func_00225D0C(rdram, ctx);
        goto after_5;
    // 0x00407FBC: sb          $zero, 0xC7($a1)
    MEM_B(0XC7, ctx->r5) = 0;
    after_5:
    // 0x00407FC0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00407FC4: lw          $v0, -0x6770($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6770);
    // 0x00407FC8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00407FCC: lwc1        $f0, 0x580($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X580);
    // 0x00407FD0: swc1        $f0, 0xAAC($v0)
    MEM_W(0XAAC, ctx->r2) = ctx->f0.u32l;
    // 0x00407FD4: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x00407FD8: lw          $v1, -0x14C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X14C);
    // 0x00407FDC: beq         $v1, $zero, L_0040802C
    if (ctx->r3 == 0) {
        // 0x00407FE0: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_0040802C;
    }
    // 0x00407FE0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00407FE4: lui         $a1, 0x2000
    ctx->r5 = S32(0X2000 << 16);
    // 0x00407FE8: lui         $a0, 0x4000
    ctx->r4 = S32(0X4000 << 16);
L_00407FEC:
    // 0x00407FEC: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x00407FF0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00407FF4: bne         $v0, $a2, L_00408020
    if (ctx->r2 != ctx->r6) {
        // 0x00407FF8: nop
    
            goto L_00408020;
    }
    // 0x00407FF8: nop

    // 0x00407FFC: lw          $v0, 0x144($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X144);
    // 0x00408000: beq         $v0, $zero, L_00408020
    if (ctx->r2 == 0) {
        // 0x00408004: nop
    
            goto L_00408020;
    }
    // 0x00408004: nop

    // 0x00408008: lw          $v0, 0x140($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X140);
    // 0x0040800C: sw          $zero, 0x1C8($v1)
    MEM_W(0X1C8, ctx->r3) = 0;
    // 0x00408010: sw          $zero, 0x1C0($v1)
    MEM_W(0X1C0, ctx->r3) = 0;
    // 0x00408014: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
    // 0x00408018: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x0040801C: sw          $v0, 0x140($v1)
    MEM_W(0X140, ctx->r3) = ctx->r2;
L_00408020:
    // 0x00408020: lw          $v1, 0x28C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X28C);
    // 0x00408024: bne         $v1, $zero, L_00407FEC
    if (ctx->r3 != 0) {
        // 0x00408028: nop
    
            goto L_00407FEC;
    }
    // 0x00408028: nop

L_0040802C:
    // 0x0040802C: lui         $s0, 0x8011
    ctx->r16 = S32(0X8011 << 16);
    // 0x00408030: addiu       $s0, $s0, 0xF0
    ctx->r16 = ADD32(ctx->r16, 0XF0);
    // 0x00408034: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00408038: lwc1        $f0, 0x584($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X584);
    // 0x0040803C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00408040: jal         0x0027AD98
    // 0x00408044: swc1        $f0, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->f0.u32l;
    func_0027AD98(rdram, ctx);
        goto after_6;
    // 0x00408044: swc1        $f0, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->f0.u32l;
    after_6:
    // 0x00408048: jal         0x0027ADA0
    // 0x0040804C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0027ADA0(rdram, ctx);
        goto after_7;
    // 0x0040804C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x00408050: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x00408054: lw          $v1, 0x48($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X48);
    // 0x00408058: addiu       $v0, $zero, 0x1C84
    ctx->r2 = ADD32(0, 0X1C84);
    // 0x0040805C: beq         $v1, $v0, L_004080DC
    if (ctx->r3 == ctx->r2) {
        // 0x00408060: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_004080DC;
    }
    // 0x00408060: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00408064: slti        $v0, $v1, 0x1C85
    ctx->r2 = SIGNED(ctx->r3) < 0X1C85 ? 1 : 0;
    // 0x00408068: beq         $v0, $zero, L_0040808C
    if (ctx->r2 == 0) {
        // 0x0040806C: addiu       $v0, $zero, 0x1BBC
        ctx->r2 = ADD32(0, 0X1BBC);
            goto L_0040808C;
    }
    // 0x0040806C: addiu       $v0, $zero, 0x1BBC
    ctx->r2 = ADD32(0, 0X1BBC);
    // 0x00408070: beq         $v1, $v0, L_004080AC
    if (ctx->r3 == ctx->r2) {
        // 0x00408074: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_004080AC;
    }
    // 0x00408074: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00408078: addiu       $v0, $zero, 0x1C20
    ctx->r2 = ADD32(0, 0X1C20);
    // 0x0040807C: beq         $v1, $v0, L_004080C4
    if (ctx->r3 == ctx->r2) {
        // 0x00408080: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_004080C4;
    }
    // 0x00408080: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00408084: j           L_00408124
    // 0x00408088: nop

        goto L_00408124;
    // 0x00408088: nop

L_0040808C:
    // 0x0040808C: addiu       $v0, $zero, 0x1CE8
    ctx->r2 = ADD32(0, 0X1CE8);
    // 0x00408090: beq         $v1, $v0, L_004080F4
    if (ctx->r3 == ctx->r2) {
        // 0x00408094: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_004080F4;
    }
    // 0x00408094: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00408098: addiu       $v0, $zero, 0x1D4C
    ctx->r2 = ADD32(0, 0X1D4C);
    // 0x0040809C: beq         $v1, $v0, L_0040810C
    if (ctx->r3 == ctx->r2) {
        // 0x004080A0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0040810C;
    }
    // 0x004080A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004080A4: j           L_00408124
    // 0x004080A8: nop

        goto L_00408124;
    // 0x004080A8: nop

L_004080AC:
    // 0x004080AC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x004080B0: addiu       $v1, $v1, -0x5528
    ctx->r3 = ADD32(ctx->r3, -0X5528);
    // 0x004080B4: sw          $v0, 0x9D0($s1)
    MEM_W(0X9D0, ctx->r17) = ctx->r2;
    // 0x004080B8: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x004080BC: j           L_00408120
    // 0x004080C0: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
        goto L_00408120;
    // 0x004080C0: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
L_004080C4:
    // 0x004080C4: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x004080C8: addiu       $v1, $v1, -0x5528
    ctx->r3 = ADD32(ctx->r3, -0X5528);
    // 0x004080CC: sw          $v0, 0x9D4($s1)
    MEM_W(0X9D4, ctx->r17) = ctx->r2;
    // 0x004080D0: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x004080D4: j           L_00408120
    // 0x004080D8: ori         $v0, $v0, 0x200
    ctx->r2 = ctx->r2 | 0X200;
        goto L_00408120;
    // 0x004080D8: ori         $v0, $v0, 0x200
    ctx->r2 = ctx->r2 | 0X200;
L_004080DC:
    // 0x004080DC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x004080E0: addiu       $v1, $v1, -0x5528
    ctx->r3 = ADD32(ctx->r3, -0X5528);
    // 0x004080E4: sw          $v0, 0x9D8($s1)
    MEM_W(0X9D8, ctx->r17) = ctx->r2;
    // 0x004080E8: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x004080EC: j           L_00408120
    // 0x004080F0: ori         $v0, $v0, 0x400
    ctx->r2 = ctx->r2 | 0X400;
        goto L_00408120;
    // 0x004080F0: ori         $v0, $v0, 0x400
    ctx->r2 = ctx->r2 | 0X400;
L_004080F4:
    // 0x004080F4: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x004080F8: addiu       $v1, $v1, -0x5528
    ctx->r3 = ADD32(ctx->r3, -0X5528);
    // 0x004080FC: sw          $v0, 0x9DC($s1)
    MEM_W(0X9DC, ctx->r17) = ctx->r2;
    // 0x00408100: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x00408104: j           L_00408120
    // 0x00408108: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
        goto L_00408120;
    // 0x00408108: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
L_0040810C:
    // 0x0040810C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00408110: addiu       $v1, $v1, -0x5528
    ctx->r3 = ADD32(ctx->r3, -0X5528);
    // 0x00408114: sw          $v0, 0x9E0($s1)
    MEM_W(0X9E0, ctx->r17) = ctx->r2;
    // 0x00408118: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x0040811C: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
L_00408120:
    // 0x00408120: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
L_00408124:
    // 0x00408124: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00408128: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0040812C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00408130: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00408134: jr          $ra
    // 0x00408138: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00408138: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00422D60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00422D60: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00422D64: lw          $v1, 0x9C0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X9C0);
    // 0x00422D68: sltiu       $v0, $v1, 0x10
    ctx->r2 = ctx->r3 < 0X10 ? 1 : 0;
    // 0x00422D6C: beq         $v0, $zero, L_00422D88
    if (ctx->r2 == 0) {
        // 0x00422D70: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00422D88;
    }
    // 0x00422D70: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00422D74: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00422D78: addu        $at, $at, $v0
    gpr jr_addend_00422D80 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00422D7C: lw          $v0, 0x15F0($at)
    ctx->r2 = ADD32(ctx->r1, 0X15F0);
    // 0x00422D80: jr          $v0
    // 0x00422D84: nop

    switch (jr_addend_00422D80 >> 2) {
        case 0: goto L_00422D88; break;
        case 1: goto L_00422D98; break;
        case 2: goto L_00422DA8; break;
        case 3: goto L_00422DB8; break;
        case 4: goto L_00422DC8; break;
        case 5: goto L_00422DD8; break;
        case 6: goto L_00422DE8; break;
        case 7: goto L_00422DF8; break;
        case 8: goto L_00422E08; break;
        case 9: goto L_00422E18; break;
        case 10: goto L_00422E28; break;
        case 11: goto L_00422E38; break;
        case 12: goto L_00422E48; break;
        case 13: goto L_00422E58; break;
        case 14: goto L_00422E68; break;
        case 15: goto L_00422E78; break;
        default: switch_error(__func__, 0x00422D80, 0x800C15F0);
    }
    // 0x00422D84: nop

L_00422D88:
    // 0x00422D88: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422D8C: addiu       $v0, $v0, 0x4BF8
    ctx->r2 = ADD32(ctx->r2, 0X4BF8);
    // 0x00422D90: j           L_00422E84
    // 0x00422D94: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422E84;
    // 0x00422D94: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422D98:
    // 0x00422D98: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422D9C: addiu       $v0, $v0, 0x4C3C
    ctx->r2 = ADD32(ctx->r2, 0X4C3C);
    // 0x00422DA0: j           L_00422E84
    // 0x00422DA4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422E84;
    // 0x00422DA4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422DA8:
    // 0x00422DA8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422DAC: addiu       $v0, $v0, 0x4CA8
    ctx->r2 = ADD32(ctx->r2, 0X4CA8);
    // 0x00422DB0: j           L_00422E84
    // 0x00422DB4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422E84;
    // 0x00422DB4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422DB8:
    // 0x00422DB8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422DBC: addiu       $v0, $v0, 0x4D7C
    ctx->r2 = ADD32(ctx->r2, 0X4D7C);
    // 0x00422DC0: j           L_00422E84
    // 0x00422DC4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422E84;
    // 0x00422DC4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422DC8:
    // 0x00422DC8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422DCC: addiu       $v0, $v0, 0x4D14
    ctx->r2 = ADD32(ctx->r2, 0X4D14);
    // 0x00422DD0: j           L_00422E84
    // 0x00422DD4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422E84;
    // 0x00422DD4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422DD8:
    // 0x00422DD8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422DDC: addiu       $v0, $v0, 0x4DE0
    ctx->r2 = ADD32(ctx->r2, 0X4DE0);
    // 0x00422DE0: j           L_00422E84
    // 0x00422DE4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422E84;
    // 0x00422DE4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422DE8:
    // 0x00422DE8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422DEC: addiu       $v0, $v0, 0x4E34
    ctx->r2 = ADD32(ctx->r2, 0X4E34);
    // 0x00422DF0: j           L_00422E84
    // 0x00422DF4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422E84;
    // 0x00422DF4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422DF8:
    // 0x00422DF8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422DFC: addiu       $v0, $v0, 0x4E6C
    ctx->r2 = ADD32(ctx->r2, 0X4E6C);
    // 0x00422E00: j           L_00422E84
    // 0x00422E04: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422E84;
    // 0x00422E04: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422E08:
    // 0x00422E08: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422E0C: addiu       $v0, $v0, 0x4E8C
    ctx->r2 = ADD32(ctx->r2, 0X4E8C);
    // 0x00422E10: j           L_00422E84
    // 0x00422E14: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422E84;
    // 0x00422E14: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422E18:
    // 0x00422E18: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422E1C: addiu       $v0, $v0, 0x4EEC
    ctx->r2 = ADD32(ctx->r2, 0X4EEC);
    // 0x00422E20: j           L_00422E84
    // 0x00422E24: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422E84;
    // 0x00422E24: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422E28:
    // 0x00422E28: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422E2C: addiu       $v0, $v0, 0x4F18
    ctx->r2 = ADD32(ctx->r2, 0X4F18);
    // 0x00422E30: j           L_00422E84
    // 0x00422E34: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422E84;
    // 0x00422E34: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422E38:
    // 0x00422E38: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422E3C: addiu       $v0, $v0, 0x4F64
    ctx->r2 = ADD32(ctx->r2, 0X4F64);
    // 0x00422E40: j           L_00422E84
    // 0x00422E44: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422E84;
    // 0x00422E44: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422E48:
    // 0x00422E48: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422E4C: addiu       $v0, $v0, 0x4F94
    ctx->r2 = ADD32(ctx->r2, 0X4F94);
    // 0x00422E50: j           L_00422E84
    // 0x00422E54: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422E84;
    // 0x00422E54: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422E58:
    // 0x00422E58: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422E5C: addiu       $v0, $v0, 0x4FD0
    ctx->r2 = ADD32(ctx->r2, 0X4FD0);
    // 0x00422E60: j           L_00422E84
    // 0x00422E64: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422E84;
    // 0x00422E64: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422E68:
    // 0x00422E68: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422E6C: addiu       $v0, $v0, 0x500C
    ctx->r2 = ADD32(ctx->r2, 0X500C);
    // 0x00422E70: j           L_00422E84
    // 0x00422E74: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422E84;
    // 0x00422E74: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422E78:
    // 0x00422E78: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422E7C: addiu       $v0, $v0, 0x506C
    ctx->r2 = ADD32(ctx->r2, 0X506C);
    // 0x00422E80: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422E84:
    // 0x00422E84: jr          $ra
    // 0x00422E88: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00422E88: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00468520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00468520: sw          $a1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r5;
    // 0x00468524: sw          $a2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r6;
    // 0x00468528: sw          $a3, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r7;
    // 0x0046852C: lw          $v1, 0x10($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X10);
    // 0x00468530: lw          $a1, 0x14($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X14);
    // 0x00468534: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x00468538: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0046853C: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
    // 0x00468540: sw          $v1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r3;
    // 0x00468544: sw          $a1, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r5;
    // 0x00468548: jr          $ra
    // 0x0046854C: sw          $a2, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r6;
    return;
    // 0x0046854C: sw          $a2, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r6;
;}
RECOMP_FUNC void func_00259FC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00259FC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00259FC4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00259FC8: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00259FCC: lhu         $a3, 0x94($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X94);
    // 0x00259FD0: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x00259FD4: addiu       $a2, $a2, -0x700
    ctx->r6 = ADD32(ctx->r6, -0X700);
    // 0x00259FD8: jal         0x00245A98
    // 0x00259FDC: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x00259FDC: nop

    after_0:
    // 0x00259FE0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00259FE4: jr          $ra
    // 0x00259FE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00259FE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
