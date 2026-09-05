#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_00245D78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00245D78: lw          $v0, 0x68($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X68);
    // 0x00245D7C: beq         $a2, $v0, L_00245E40
    if (ctx->r6 == ctx->r2) {
        // 0x00245D80: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00245E40;
    }
    // 0x00245D80: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00245D84: lw          $v0, 0x14($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X14);
    // 0x00245D88: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x00245D8C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00245D90: beq         $v1, $v0, L_00245E40
    if (ctx->r3 == ctx->r2) {
        // 0x00245D94: nop
    
            goto L_00245E40;
    }
    // 0x00245D94: nop

    // 0x00245D98: lhu         $v1, 0xB8($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0XB8);
    // 0x00245D9C: addiu       $v0, $zero, 0x64F
    ctx->r2 = ADD32(0, 0X64F);
    // 0x00245DA0: beq         $v1, $v0, L_00245E40
    if (ctx->r3 == ctx->r2) {
        // 0x00245DA4: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_00245E40;
    }
    // 0x00245DA4: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x00245DA8: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x00245DAC: lw          $v0, 0x1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1C);
    // 0x00245DB0: bne         $v0, $zero, L_00245E40
    if (ctx->r2 != 0) {
        // 0x00245DB4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00245E40;
    }
    // 0x00245DB4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00245DB8: lw          $v0, 0xD4($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XD4);
    // 0x00245DBC: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x00245DC0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00245DC4: beq         $v0, $zero, L_00245E20
    if (ctx->r2 == 0) {
        // 0x00245DC8: nop
    
            goto L_00245E20;
    }
    // 0x00245DC8: nop

    // 0x00245DCC: lw          $a2, 0x1A8($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X1A8);
    // 0x00245DD0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00245DD4: lwc1        $f1, 0xAAC($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0XAAC);
    // 0x00245DD8: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00245DDC: nop

    // 0x00245DE0: bc1f        L_00245E00
    if (!c1cs) {
        // 0x00245DE4: addiu       $v0, $zero, 0xCA
        ctx->r2 = ADD32(0, 0XCA);
            goto L_00245E00;
    }
    // 0x00245DE4: addiu       $v0, $zero, 0xCA
    ctx->r2 = ADD32(0, 0XCA);
    // 0x00245DE8: lhu         $v1, 0xB8($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0XB8);
    // 0x00245DEC: bne         $v1, $v0, L_00245E18
    if (ctx->r3 != ctx->r2) {
        // 0x00245DF0: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_00245E18;
    }
    // 0x00245DF0: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x00245DF4: lh          $v1, 0x996($a2)
    ctx->r3 = MEM_H(ctx->r6, 0X996);
    // 0x00245DF8: bne         $v1, $v0, L_00245E18
    if (ctx->r3 != ctx->r2) {
        // 0x00245DFC: nop
    
            goto L_00245E18;
    }
    // 0x00245DFC: nop

L_00245E00:
    // 0x00245E00: lw          $v0, 0xB38($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XB38);
    // 0x00245E04: bne         $v0, $a0, L_00245E20
    if (ctx->r2 != ctx->r4) {
        // 0x00245E08: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00245E20;
    }
    // 0x00245E08: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00245E0C: lw          $v1, 0xB2C($a2)
    ctx->r3 = MEM_W(ctx->r6, 0XB2C);
    // 0x00245E10: bne         $v1, $v0, L_00245E20
    if (ctx->r3 != ctx->r2) {
        // 0x00245E14: nop
    
            goto L_00245E20;
    }
    // 0x00245E14: nop

L_00245E18:
    // 0x00245E18: jr          $ra
    // 0x00245E1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x00245E1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00245E20:
    // 0x00245E20: lw          $v0, 0x27C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X27C);
    // 0x00245E24: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x00245E28: beq         $v0, $zero, L_00245E3C
    if (ctx->r2 == 0) {
        // 0x00245E2C: addiu       $v1, $zero, 0xCA
        ctx->r3 = ADD32(0, 0XCA);
            goto L_00245E3C;
    }
    // 0x00245E2C: addiu       $v1, $zero, 0xCA
    ctx->r3 = ADD32(0, 0XCA);
    // 0x00245E30: lhu         $a0, 0xB8($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XB8);
    // 0x00245E34: bne         $a0, $v1, L_00245E40
    if (ctx->r4 != ctx->r3) {
        // 0x00245E38: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00245E40;
    }
    // 0x00245E38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00245E3C:
    // 0x00245E3C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00245E40:
    // 0x00245E40: jr          $ra
    // 0x00245E44: nop

    return;
    // 0x00245E44: nop

;}
RECOMP_FUNC void func_00264168(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00264168: jr          $ra
    // 0x0026416C: nop

    return;
    // 0x0026416C: nop

;}
RECOMP_FUNC void func_00450F4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00418004:
    // 0x00450F4C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
L_00418028:
    // 0x00450F50: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00450F54: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00450F58: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00450F5C: lw          $v0, 0x1C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1C);
    // 0x00450F60: lw          $v0, 0x518($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X518);
    // 0x00450F64: lbu         $s1, 0x32($v0)
    ctx->r17 = MEM_BU(ctx->r2, 0X32);
    // 0x00450F68: bne         $s1, $zero, L_00450F80
    if (ctx->r17 != 0) {
        // 0x00450F6C: addu        $s0, $a0, $zero
        ctx->r16 = ADD32(ctx->r4, 0);
            goto L_00450F80;
    }
    // 0x00450F6C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00450F70: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00450F74: addiu       $v0, $v0, 0x41F0
    ctx->r2 = ADD32(ctx->r2, 0X41F0);
    // 0x00450F78: j           L_00418028
    // 0x00450F7C: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    entry_00418028(rdram, ctx);
    return;
    // 0x00450F7C: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
L_00450F80:
    // 0x00450F80: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x00450F84: bne         $s1, $v0, L_00450F9C
    if (ctx->r17 != ctx->r2) {
        // 0x00450F88: nop
    
            goto L_00450F9C;
    }
    // 0x00450F88: nop

    // 0x00450F8C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00450F90: addiu       $v0, $v0, 0x4200
    ctx->r2 = ADD32(ctx->r2, 0X4200);
    // 0x00450F94: j           L_00418028
    // 0x00450F98: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    entry_00418028(rdram, ctx);
    return;
    // 0x00450F98: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
L_00450F9C:
    // 0x00450F9C: lw          $v0, 0x20($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X20);
    // 0x00450FA0: lb          $v1, 0x4($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X4);
    // 0x00450FA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00450FA8: beq         $v1, $v0, L_00450FD8
    if (ctx->r3 == ctx->r2) {
        // 0x00450FAC: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_00450FD8;
    }
    // 0x00450FAC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x00450FB0: bne         $v0, $zero, L_00450FC8
    if (ctx->r2 != 0) {
        // 0x00450FB4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00450FC8;
    }
    // 0x00450FB4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00450FB8: beq         $v1, $v0, L_00450FE8
    if (ctx->r3 == ctx->r2) {
        // 0x00450FBC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00450FE8;
    }
    // 0x00450FBC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00450FC0: beq         $v1, $v0, L_00450FF8
    if (ctx->r3 == ctx->r2) {
        // 0x00450FC4: nop
    
            goto L_00450FF8;
    }
    // 0x00450FC4: nop

L_00450FC8:
    // 0x00450FC8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00450FCC: addiu       $v0, $v0, 0x41B0
    ctx->r2 = ADD32(ctx->r2, 0X41B0);
    // 0x00450FD0: j           L_00418004
    // 0x00450FD4: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    entry_00418004(rdram, ctx);
    return;
    // 0x00450FD4: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
L_00450FD8:
    // 0x00450FD8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00450FDC: addiu       $v0, $v0, 0x41C0
    ctx->r2 = ADD32(ctx->r2, 0X41C0);
    // 0x00450FE0: j           L_00418004
    // 0x00450FE4: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    entry_00418004(rdram, ctx);
    return;
    // 0x00450FE4: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
L_00450FE8:
    // 0x00450FE8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00450FEC: addiu       $v0, $v0, 0x41D0
    ctx->r2 = ADD32(ctx->r2, 0X41D0);
    // 0x00450FF0: j           L_00418004
    // 0x00450FF4: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    entry_00418004(rdram, ctx);
    return;
    // 0x00450FF4: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
L_00450FF8:
    // 0x00450FF8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00450FFC: addiu       $v0, $v0, 0x41E0
    ctx->r2 = ADD32(ctx->r2, 0X41E0);
    // 0x00451000: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x00451004: jal         0x004160F0
    // 0x00451008: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x00451008: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0045100C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x00451010: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x00451014: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00451018: addiu       $a1, $a1, 0xE7C
    ctx->r5 = ADD32(ctx->r5, 0XE7C);
    // 0x0045101C: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x00451020: jal         0x0029E3E0
    // 0x00451024: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_1;
    // 0x00451024: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_1:
    // 0x00451028: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0045102C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00451030: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00451034: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00451038: jr          $ra
    // 0x0045103C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0045103C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00284174(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00284174: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00284178: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x0028417C: lw          $v0, 0x38($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X38);
    // 0x00284180: jr          $ra
    // 0x00284184: nop

    return;
    // 0x00284184: nop

;}
RECOMP_FUNC void func_00256858(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00256858: beq         $a2, $v0, L_00256878
    if (ctx->r6 == ctx->r2) {
            // 0x0025685C: nop

    func_00256878(rdram, ctx);
    return;
    }
    // 0x0025685C: nop

    // 0x00256860: jr          $ra
    // 0x00256864: nop

    return;
    // 0x00256864: nop

;}
RECOMP_FUNC void func_0025864C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025864C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00258650: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00258654: jal         0x00243414
    // 0x00258658: nop

    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00258658: nop

    after_0:
    // 0x0025865C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00258660: jr          $ra
    // 0x00258664: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00258664: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002577DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002577DC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x002577E0: lw          $a0, 0x1FD8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1FD8);
    // 0x002577E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002577E8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002577EC: jal         0x0042E29C
    // 0x002577F0: nop

    func_0042E29C(rdram, ctx);
        goto after_0;
    // 0x002577F0: nop

    after_0:
    // 0x002577F4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002577F8: jr          $ra
    // 0x002577FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002577FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00444308(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00444308: jr          $ra
    // 0x0044430C: nop

    return;
    // 0x0044430C: nop

;}
RECOMP_FUNC void func_00293470(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00293470: lw          $v0, 0x44($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X44);
    // 0x00293474: lw          $t1, 0x40($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X40);
    // 0x00293478: blez        $v0, L_00293520
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0029347C: addu        $t0, $zero, $zero
        ctx->r8 = ADD32(0, 0);
            goto L_00293520;
    }
    // 0x0029347C: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x00293480: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x00293484: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00293488: lwc1        $f0, -0x5BB0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5BB0);
    // 0x0029348C: addiu       $t4, $zero, 0x40
    ctx->r12 = ADD32(0, 0X40);
    // 0x00293490: lui         $t2, 0x8102
    ctx->r10 = S32(0X8102 << 16);
    // 0x00293494: ori         $t2, $t2, 0x409
    ctx->r10 = ctx->r10 | 0X409;
    // 0x00293498: sll         $v0, $t0, 16
    ctx->r2 = S32(ctx->r8 << 16);
L_0029349C:
    // 0x0029349C: sra         $a3, $v0, 16
    ctx->r7 = S32(SIGNED(ctx->r2) >> 16);
    // 0x002934A0: sll         $v0, $a3, 1
    ctx->r2 = S32(ctx->r7 << 1);
    // 0x002934A4: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x002934A8: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x002934AC: addu        $a2, $v0, $t1
    ctx->r6 = ADD32(ctx->r2, ctx->r9);
    // 0x002934B0: lw          $v0, 0x1C($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X1C);
    // 0x002934B4: bne         $v0, $zero, L_00293504
    if (ctx->r2 != 0) {
        // 0x002934B8: addiu       $v0, $t0, 0x1
        ctx->r2 = ADD32(ctx->r8, 0X1);
            goto L_00293504;
    }
    // 0x002934B8: addiu       $v0, $t0, 0x1
    ctx->r2 = ADD32(ctx->r8, 0X1);
    // 0x002934BC: sw          $a1, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->r5;
    // 0x002934C0: sh          $t3, 0x20($a2)
    MEM_H(0X20, ctx->r6) = ctx->r11;
    // 0x002934C4: sw          $zero, 0x28($a2)
    MEM_W(0X28, ctx->r6) = 0;
    // 0x002934C8: swc1        $f0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f0.u32l;
    // 0x002934CC: sb          $t4, 0x2E($a2)
    MEM_B(0X2E, ctx->r6) = ctx->r12;
    // 0x002934D0: sb          $zero, 0x2F($a2)
    MEM_B(0X2F, ctx->r6) = 0;
    // 0x002934D4: lbu         $v0, 0xD($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XD);
    // 0x002934D8: sll         $v1, $v0, 15
    ctx->r3 = S32(ctx->r2 << 15);
    // 0x002934DC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x002934E0: mult        $v1, $t2
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002934E4: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
    // 0x002934E8: mfhi        $t5
    ctx->r13 = hi;
    // 0x002934EC: addu        $a0, $t5, $v1
    ctx->r4 = ADD32(ctx->r13, ctx->r3);
    // 0x002934F0: sra         $a0, $a0, 6
    ctx->r4 = S32(SIGNED(ctx->r4) >> 6);
    // 0x002934F4: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x002934F8: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x002934FC: jr          $ra
    // 0x00293500: sh          $a0, 0x2C($a2)
    MEM_H(0X2C, ctx->r6) = ctx->r4;
    return;
    // 0x00293500: sh          $a0, 0x2C($a2)
    MEM_H(0X2C, ctx->r6) = ctx->r4;
L_00293504:
    // 0x00293504: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
    // 0x00293508: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0029350C: lw          $v1, 0x44($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X44);
    // 0x00293510: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x00293514: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00293518: bne         $v0, $zero, L_0029349C
    if (ctx->r2 != 0) {
        // 0x0029351C: sll         $v0, $t0, 16
        ctx->r2 = S32(ctx->r8 << 16);
            goto L_0029349C;
    }
    // 0x0029351C: sll         $v0, $t0, 16
    ctx->r2 = S32(ctx->r8 << 16);
L_00293520:
    // 0x00293520: jr          $ra
    // 0x00293524: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x00293524: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
;}
RECOMP_FUNC void func_002009F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002009F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002009F4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002009F8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x002009FC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00200A00: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00200A04: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x00200A08: beq         $s0, $zero, L_00200A60
    if (ctx->r16 == 0) {
        // 0x00200A0C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00200A60;
    }
    // 0x00200A0C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00200A10: jal         0x002113A4
    // 0x00200A14: nop

    func_002113A4(rdram, ctx);
        goto after_0;
    // 0x00200A14: nop

    after_0:
    // 0x00200A18: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x00200A1C: divu        $zero, $v0, $v1
    lo = S32(U32(ctx->r2) / U32(ctx->r3)); hi = S32(U32(ctx->r2) % U32(ctx->r3));
    // 0x00200A20: bne         $v1, $zero, L_00200A2C
    if (ctx->r3 != 0) {
        // 0x00200A24: nop
    
            goto L_00200A2C;
    }
    // 0x00200A24: nop

    // 0x00200A28: break       7
    do_break(2099752);
L_00200A2C:
    // 0x00200A2C: mfhi        $v1
    ctx->r3 = hi;
    // 0x00200A30: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00200A34: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00200A38: beql        $v1, $v0, L_00200A60
    if (ctx->r3 == ctx->r2) {
        // 0x00200A3C: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_00200A60;
    }
    goto skip_0;
    // 0x00200A3C: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x00200A40: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x00200A44: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00200A48: addu        $v0, $s0, $a0
    ctx->r2 = ADD32(ctx->r16, ctx->r4);
L_00200A4C:
    // 0x00200A4C: lw          $s0, 0x0($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X0);
    // 0x00200A50: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00200A54: bne         $v1, $a1, L_00200A4C
    if (ctx->r3 != ctx->r5) {
        // 0x00200A58: addu        $v0, $s0, $a0
        ctx->r2 = ADD32(ctx->r16, ctx->r4);
            goto L_00200A4C;
    }
    // 0x00200A58: addu        $v0, $s0, $a0
    ctx->r2 = ADD32(ctx->r16, ctx->r4);
    // 0x00200A5C: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_00200A60:
    // 0x00200A60: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00200A64: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00200A68: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00200A6C: jr          $ra
    // 0x00200A70: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00200A70: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0029AC84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029AC84: swc1        $f1, 0x118($s0)
    MEM_W(0X118, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0029AC88: lwc1        $f0, 0x34($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X34);
    // 0x0029AC8C: swc1        $f20, 0x128($s0)
    MEM_W(0X128, ctx->r16) = ctx->f20.u32l;
;}
RECOMP_FUNC void func_0040DF70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040DF70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0040DF74: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0040DF78: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0040DF7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0040DF80: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0040DF84: beq         $v0, $zero, L_0040DFB4
    if (ctx->r2 == 0) {
        // 0x0040DF88: nop
    
            goto L_0040DFB4;
    }
    // 0x0040DF88: nop

    // 0x0040DF8C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0040DF90: lw          $v0, -0x6770($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6770);
    // 0x0040DF94: beq         $v0, $zero, L_0040DFB4
    if (ctx->r2 == 0) {
        // 0x0040DF98: nop
    
            goto L_0040DFB4;
    }
    // 0x0040DF98: nop

    // 0x0040DF9C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040DFA0: lwc1        $f0, 0x90C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X90C);
    // 0x0040DFA4: sw          $v0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r2;
    // 0x0040DFA8: sw          $v0, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r2;
    // 0x0040DFAC: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x0040DFB0: swc1        $f0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f0.u32l;
L_0040DFB4:
    // 0x0040DFB4: lw          $v0, 0x30($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X30);
    // 0x0040DFB8: beq         $v0, $zero, L_0040DFD4
    if (ctx->r2 == 0) {
        // 0x0040DFBC: nop
    
            goto L_0040DFD4;
    }
    // 0x0040DFBC: nop

    // 0x0040DFC0: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
    // 0x0040DFC4: beq         $v0, $zero, L_0040DFD4
    if (ctx->r2 == 0) {
        // 0x0040DFC8: nop
    
            goto L_0040DFD4;
    }
    // 0x0040DFC8: nop

    // 0x0040DFCC: jalr        $v0
    // 0x0040DFD0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x0040DFD0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
L_0040DFD4:
    // 0x0040DFD4: lwc1        $f0, 0x118($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X118);
    // 0x0040DFD8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0040DFDC: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x0040DFE0: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0040DFE4: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0040DFE8: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0040DFEC: nop

    // 0x0040DFF0: bc1tl       L_0040DFF8
    if (c1cs) {
        // 0x0040DFF4: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0040DFF8;
    }
    goto skip_0;
    // 0x0040DFF4: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_0:
L_0040DFF8:
    // 0x0040DFF8: swc1        $f0, 0x118($s0)
    MEM_W(0X118, ctx->r16) = ctx->f0.u32l;
    // 0x0040DFFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0040E000: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0040E004: jr          $ra
    // 0x0040E008: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040E008: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0040F1D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040F1D8: lw          $t1, 0x10($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X10);
    // 0x0040F1DC: blez        $a1, L_0040F230
    if (SIGNED(ctx->r5) <= 0) {
        // 0x0040F1E0: addu        $t0, $zero, $zero
        ctx->r8 = ADD32(0, 0);
            goto L_0040F230;
    }
    // 0x0040F1E0: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
L_0040F1E4:
    // 0x0040F1E4: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x0040F1E8: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x0040F1EC: lw          $v1, 0x148($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X148);
    // 0x0040F1F0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0040F1F4: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x0040F1F8: lw          $v0, 0x144($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X144);
    // 0x0040F1FC: beq         $v0, $zero, L_0040F224
    if (ctx->r2 == 0) {
        // 0x0040F200: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_0040F224;
    }
    // 0x0040F200: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x0040F204: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x0040F208: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x0040F20C: beq         $v0, $zero, L_0040F224
    if (ctx->r2 == 0) {
        // 0x0040F210: nop
    
            goto L_0040F224;
    }
    // 0x0040F210: nop

    // 0x0040F214: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
    // 0x0040F218: lw          $v1, 0x148($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X148);
    // 0x0040F21C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0040F220: sw          $v0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r2;
L_0040F224:
    // 0x0040F224: slt         $v0, $t0, $a1
    ctx->r2 = SIGNED(ctx->r8) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x0040F228: bne         $v0, $zero, L_0040F1E4
    if (ctx->r2 != 0) {
        // 0x0040F22C: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_0040F1E4;
    }
    // 0x0040F22C: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
L_0040F230:
    // 0x0040F230: jr          $ra
    // 0x0040F234: nop

    return;
    // 0x0040F234: nop

;}
RECOMP_FUNC void func_0044475C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044475C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00444760: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00444764: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x00444768: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x0044476C: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x00444770: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00444774: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00444778: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0044477C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00444780: lb          $v0, 0xC7($s4)
    ctx->r2 = MEM_B(ctx->r20, 0XC7);
    // 0x00444784: beq         $v0, $zero, L_004447E8
    if (ctx->r2 == 0) {
        // 0x00444788: addu        $s5, $a0, $zero
        ctx->r21 = ADD32(ctx->r4, 0);
            goto L_004447E8;
    }
    // 0x00444788: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x0044478C: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x00444790: lw          $s2, 0x1D0($s2)
    ctx->r18 = MEM_W(ctx->r18, 0X1D0);
    // 0x00444794: lui         $s3, 0x8013
    ctx->r19 = S32(0X8013 << 16);
    // 0x00444798: addiu       $s3, $s3, -0x490
    ctx->r19 = ADD32(ctx->r19, -0X490);
    // 0x0044479C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x004447A0: addiu       $s1, $zero, 0x18
    ctx->r17 = ADD32(0, 0X18);
L_004447A4:
    // 0x004447A4: srav        $v0, $s2, $s0
    ctx->r2 = S32(SIGNED(ctx->r18) >> (ctx->r16 & 31));
    // 0x004447A8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x004447AC: beql        $v0, $zero, L_004447CC
    if (ctx->r2 == 0) {
        // 0x004447B0: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_004447CC;
    }
    goto skip_0;
    // 0x004447B0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x004447B4: addu        $a0, $s3, $s1
    ctx->r4 = ADD32(ctx->r19, ctx->r17);
    // 0x004447B8: lui         $a1, 0x43
    ctx->r5 = S32(0X43 << 16);
    // 0x004447BC: addiu       $a1, $a1, 0x1E04
    ctx->r5 = ADD32(ctx->r5, 0X1E04);
    // 0x004447C0: jal         0x00236314
    // 0x004447C4: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_00236314(rdram, ctx);
        goto after_0;
    // 0x004447C4: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_0:
    // 0x004447C8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_004447CC:
    // 0x004447CC: slti        $v0, $s0, 0xF
    ctx->r2 = SIGNED(ctx->r16) < 0XF ? 1 : 0;
    // 0x004447D0: bne         $v0, $zero, L_004447A4
    if (ctx->r2 != 0) {
        // 0x004447D4: addiu       $s1, $s1, 0x68
        ctx->r17 = ADD32(ctx->r17, 0X68);
            goto L_004447A4;
    }
    // 0x004447D4: addiu       $s1, $s1, 0x68
    ctx->r17 = ADD32(ctx->r17, 0X68);
    // 0x004447D8: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x004447DC: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x004447E0: jal         0x00243414
    // 0x004447E4: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x004447E4: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    after_1:
L_004447E8:
    // 0x004447E8: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x004447EC: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x004447F0: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x004447F4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x004447F8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x004447FC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00444800: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00444804: jr          $ra
    // 0x00444808: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00444808: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0042F6C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042F6C8: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0042F6CC: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x0042F6D0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0042F6D4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0042F6D8: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0042F6DC: srl         $v0, $a1, 3
    ctx->r2 = S32(U32(ctx->r5) >> 3);
    // 0x0042F6E0: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    // 0x0042F6E4: andi        $a1, $a1, 0x7
    ctx->r5 = ctx->r5 & 0X7;
    // 0x0042F6E8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x0042F6EC: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x0042F6F0: srav        $v1, $v1, $a1
    ctx->r3 = S32(SIGNED(ctx->r3) >> (ctx->r5 & 31));
    // 0x0042F6F4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0042F6F8: jr          $ra
    // 0x0042F6FC: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    return;
    // 0x0042F6FC: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
;}
RECOMP_FUNC void func_0028AF00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028AF00: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0028AF04: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0028AF08: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0028AF0C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0028AF10: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0028AF14: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0028AF18: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x0028AF1C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0028AF20: jal         0x0029E230
    // 0x0028AF24: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_0029E230(rdram, ctx);
        goto after_0;
    // 0x0028AF24: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x0028AF28: sw          $s1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r17;
    // 0x0028AF2C: lw          $v1, 0x2E0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X2E0);
    // 0x0028AF30: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0028AF34: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x0028AF38: jal         0x0029E230
    // 0x0028AF3C: sw          $s0, 0x2E0($s2)
    MEM_W(0X2E0, ctx->r18) = ctx->r16;
    func_0029E230(rdram, ctx);
        goto after_1;
    // 0x0028AF3C: sw          $s0, 0x2E0($s2)
    MEM_W(0X2E0, ctx->r18) = ctx->r16;
    after_1:
    // 0x0028AF40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0028AF44: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0028AF48: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0028AF4C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0028AF50: jr          $ra
    // 0x0028AF54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0028AF54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0028E9CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028E9CC: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x0028E9D0: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x0028E9D4: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x0028E9D8: jr          $ra
    // 0x0028E9DC: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    return;
    // 0x0028E9DC: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
;}
RECOMP_FUNC void func_0025A1FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025A1FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025A200: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025A204: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025A208: lhu         $a3, 0x78($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X78);
    // 0x0025A20C: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025A210: addiu       $a2, $a2, -0x388
    ctx->r6 = ADD32(ctx->r6, -0X388);
    // 0x0025A214: jal         0x00245A98
    // 0x0025A218: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025A218: nop

    after_0:
    // 0x0025A21C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025A220: jr          $ra
    // 0x0025A224: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025A224: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0021E840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021E840: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x0021E844: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x0021E848: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0021E84C: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x0021E850: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x0021E854: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x0021E858: sdc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X50, ctx->r29);
    // 0x0021E85C: lw          $v1, 0x40($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X40);
    // 0x0021E860: lw          $t0, 0x44($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X44);
    // 0x0021E864: lw          $t1, 0x48($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X48);
    // 0x0021E868: lw          $t2, 0x4C($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X4C);
    // 0x0021E86C: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x0021E870: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x0021E874: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x0021E878: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    // 0x0021E87C: jal         0x00284188
    // 0x0021E880: addiu       $s2, $sp, 0x30
    ctx->r18 = ADD32(ctx->r29, 0X30);
    func_00284188(rdram, ctx);
        goto after_0;
    // 0x0021E880: addiu       $s2, $sp, 0x30
    ctx->r18 = ADD32(ctx->r29, 0X30);
    after_0:
    // 0x0021E884: beq         $v0, $zero, L_0021E898
    if (ctx->r2 == 0) {
        // 0x0021E888: nop
    
            goto L_0021E898;
    }
    // 0x0021E888: nop

    // 0x0021E88C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0021E890: jal         0x00268F3C
    // 0x0021E894: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00268F3C(rdram, ctx);
        goto after_1;
    // 0x0021E894: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
L_0021E898:
    // 0x0021E898: lwc1        $f12, 0x50($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X50);
    // 0x0021E89C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021E8A0: lwc1        $f20, 0x5CF4($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X5CF4);
    // 0x0021E8A4: mul.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f20.fl);
    // 0x0021E8A8: jal         0x002982F0
    // 0x0021E8AC: nop

    func_002982F0(rdram, ctx);
        goto after_2;
    // 0x0021E8AC: nop

    after_2:
    // 0x0021E8B0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0021E8B4: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x0021E8B8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x0021E8BC: lwc1        $f12, 0x50($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X50);
    // 0x0021E8C0: mul.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f20.fl);
    // 0x0021E8C4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021E8C8: swc1        $f0, -0x2874($at)
    MEM_W(-0X2874, ctx->r1) = ctx->f0.u32l;
    // 0x0021E8CC: jal         0x002974C0
    // 0x0021E8D0: nop

    func_002974C0(rdram, ctx);
        goto after_3;
    // 0x0021E8D0: nop

    after_3:
    // 0x0021E8D4: addiu       $s0, $sp, 0x20
    ctx->r16 = ADD32(ctx->r29, 0X20);
    // 0x0021E8D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0021E8DC: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x0021E8E0: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0021E8E4: jal         0x00210F68
    // 0x0021E8E8: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    func_00210F68(rdram, ctx);
        goto after_4;
    // 0x0021E8E8: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x0021E8EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0021E8F0: addiu       $s0, $s1, 0x58
    ctx->r16 = ADD32(ctx->r17, 0X58);
    // 0x0021E8F4: jal         0x00211114
    // 0x0021E8F8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00211114(rdram, ctx);
        goto after_5;
    // 0x0021E8F8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x0021E8FC: lw          $a1, 0x34($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X34);
    // 0x0021E900: lw          $a2, 0x38($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X38);
    // 0x0021E904: lw          $a3, 0x3C($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X3C);
    // 0x0021E908: jal         0x0021034C
    // 0x0021E90C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0021034C(rdram, ctx);
        goto after_6;
    // 0x0021E90C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x0021E910: lui         $a1, 0x469C
    ctx->r5 = S32(0X469C << 16);
    // 0x0021E914: ori         $a1, $a1, 0x4000
    ctx->r5 = ctx->r5 | 0X4000;
    // 0x0021E918: jal         0x0020F510
    // 0x0021E91C: addiu       $a0, $s1, 0x4
    ctx->r4 = ADD32(ctx->r17, 0X4);
    func_0020F510(rdram, ctx);
        goto after_7;
    // 0x0021E91C: addiu       $a0, $s1, 0x4
    ctx->r4 = ADD32(ctx->r17, 0X4);
    after_7:
    // 0x0021E920: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x0021E924: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x0021E928: lw          $a3, 0xC($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XC);
    // 0x0021E92C: jal         0x00210318
    // 0x0021E930: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00210318(rdram, ctx);
        goto after_8;
    // 0x0021E930: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x0021E934: jal         0x00210C3C
    // 0x0021E938: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00210C3C(rdram, ctx);
        goto after_9;
    // 0x0021E938: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x0021E93C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x0021E940: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x0021E944: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x0021E948: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x0021E94C: ldc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X50);
    // 0x0021E950: jr          $ra
    // 0x0021E954: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x0021E954: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_004659D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0042CA64:
    // 0x004659D4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x004659D8: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x004659DC: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x004659E0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004659E4: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x004659E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x004659EC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x004659F0: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x004659F4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x004659F8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x004659FC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00465A00: jal         0x00200B00
    // 0x00465A04: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_00200B00(rdram, ctx);
        goto after_0;
    // 0x00465A04: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x00465A08: beq         $v0, $zero, L_00465AE0
    if (ctx->r2 == 0) {
        // 0x00465A0C: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_00465AE0;
    }
    // 0x00465A0C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x00465A10: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00465A14: lw          $s0, 0x0($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X0);
    // 0x00465A18: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x00465A1C: jal         0x002017D4
    // 0x00465A20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00465A20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00465A24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00465A28: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00465A2C: lw          $s3, 0x4($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X4);
    // 0x00465A30: jal         0x002017D4
    // 0x00465A34: addiu       $s0, $v0, 0x8
    ctx->r16 = ADD32(ctx->r2, 0X8);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x00465A34: addiu       $s0, $v0, 0x8
    ctx->r16 = ADD32(ctx->r2, 0X8);
    after_2:
    // 0x00465A38: blez        $s3, L_00465AE0
    if (SIGNED(ctx->r19) <= 0) {
        // 0x00465A3C: addu        $s1, $v0, $zero
        ctx->r17 = ADD32(ctx->r2, 0);
            goto L_00465AE0;
    }
    // 0x00465A3C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x00465A40: addiu       $s4, $zero, -0x1
    ctx->r20 = ADD32(0, -0X1);
L_00465A44:
    // 0x00465A44: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    // 0x00465A48: bne         $a1, $s4, L_00465A58
    if (ctx->r5 != ctx->r20) {
        // 0x00465A4C: nop
    
            goto L_00465A58;
    }
    // 0x00465A4C: nop

    // 0x00465A50: j           L_0042CA64
    // 0x00465A54: sw          $zero, 0x14($s0)
    MEM_W(0X14, ctx->r16) = 0;
    entry_0042CA64(rdram, ctx);
    return;
    // 0x00465A54: sw          $zero, 0x14($s0)
    MEM_W(0X14, ctx->r16) = 0;
L_00465A58:
    // 0x00465A58: jal         0x00224F84
    // 0x00465A5C: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    func_00224F84(rdram, ctx);
        goto after_3;
    // 0x00465A5C: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    after_3:
    // 0x00465A60: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x00465A64: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x00465A68: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x00465A6C: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x00465A70: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x00465A74: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x00465A78: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x00465A7C: addu        $v1, $s1, $v1
    ctx->r3 = ADD32(ctx->r17, ctx->r3);
    // 0x00465A80: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x00465A84: lw          $v1, 0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X28);
    // 0x00465A88: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x00465A8C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x00465A90: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x00465A94: addu        $v1, $s1, $v1
    ctx->r3 = ADD32(ctx->r17, ctx->r3);
    // 0x00465A98: sw          $v1, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r3;
    // 0x00465A9C: lw          $v1, 0x30($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X30);
    // 0x00465AA0: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x00465AA4: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x00465AA8: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    // 0x00465AAC: addu        $v1, $s1, $v1
    ctx->r3 = ADD32(ctx->r17, ctx->r3);
    // 0x00465AB0: sw          $v1, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r3;
    // 0x00465AB4: lw          $v1, 0x38($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X38);
    // 0x00465AB8: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x00465ABC: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x00465AC0: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x00465AC4: addu        $v1, $s1, $v1
    ctx->r3 = ADD32(ctx->r17, ctx->r3);
    // 0x00465AC8: sw          $v1, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r3;
    // 0x00465ACC: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x00465AD0: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    // 0x00465AD4: slt         $v0, $s2, $s3
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x00465AD8: bne         $v0, $zero, L_00465A44
    if (ctx->r2 != 0) {
        // 0x00465ADC: addiu       $s0, $s0, 0x3C
        ctx->r16 = ADD32(ctx->r16, 0X3C);
            goto L_00465A44;
    }
    // 0x00465ADC: addiu       $s0, $s0, 0x3C
    ctx->r16 = ADD32(ctx->r16, 0X3C);
L_00465AE0:
    // 0x00465AE0: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00465AE4: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x00465AE8: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00465AEC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00465AF0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00465AF4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00465AF8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00465AFC: jr          $ra
    // 0x00465B00: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00465B00: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_004181A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004181A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004181A8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x004181AC: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x004181B0: lb          $a0, 0x4($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X4);
    // 0x004181B4: jal         0x00285A68
    // 0x004181B8: nop

    func_00285A68(rdram, ctx);
        goto after_0;
    // 0x004181B8: nop

    after_0:
    // 0x004181BC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x004181C0: jr          $ra
    // 0x004181C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004181C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002367A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002367A0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x002367A4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002367A8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x002367AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x002367B0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002367B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002367B8: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x002367BC: lw          $s0, 0x758C($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X758C);
    // 0x002367C0: beq         $s0, $zero, L_00236840
    if (ctx->r16 == 0) {
        // 0x002367C4: nop
    
            goto L_00236840;
    }
    // 0x002367C4: nop

    // 0x002367C8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
L_002367CC:
    // 0x002367CC: lwc1        $f1, 0x8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X8);
    // 0x002367D0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002367D4: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x002367D8: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x002367DC: lw          $s1, 0x4($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X4);
        turok2_patch_fx_timer_fire_hold(rdram, ctx);

    // 0x002367E0: c.le.s      $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f1.fl <= ctx->f20.fl;
    // 0x002367E4: nop

    // 0x002367E8: bc1f        L_00236834
    if (!c1cs) {
        // 0x002367EC: swc1        $f1, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
            goto L_00236834;
    }
    // 0x002367EC: swc1        $f1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x002367F0: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x002367F4: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x002367F8: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x002367FC: nop

    // 0x00236800: bc1f        L_0023680C
    if (!c1cs) {
        // 0x00236804: swc1        $f0, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
            goto L_0023680C;
    }
    // 0x00236804: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x00236808: swc1        $f20, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f20.u32l;
L_0023680C:
    // 0x0023680C: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x00236810: jalr        $v0
    // 0x00236814: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x00236814: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00236818: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x0023681C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00236820: bgtz        $v0, L_00236834
    if (SIGNED(ctx->r2) > 0) {
        // 0x00236824: sw          $v0, 0x10($s0)
        MEM_W(0X10, ctx->r16) = ctx->r2;
            goto L_00236834;
    }
    // 0x00236824: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x00236828: addiu       $a0, $s2, 0x7580
    ctx->r4 = ADD32(ctx->r18, 0X7580);
    // 0x0023682C: jal         0x0026D474
    // 0x00236830: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0026D474(rdram, ctx);
        goto after_1;
    // 0x00236830: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
L_00236834:
    // 0x00236834: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
    // 0x00236838: bne         $s0, $zero, L_002367CC
    if (ctx->r16 != 0) {
        // 0x0023683C: nop
    
            goto L_002367CC;
    }
    // 0x0023683C: nop

L_00236840:
    // 0x00236840: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00236844: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00236848: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0023684C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00236850: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x00236854: jr          $ra
    // 0x00236858: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00236858: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0041BF6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041BF6C: lw          $v0, 0x1C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1C);
    // 0x0041BF70: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0041BF74: addiu       $v1, $v1, -0x54E8
    ctx->r3 = ADD32(ctx->r3, -0X54E8);
    // 0x0041BF78: beq         $v0, $zero, L_0041BF8C
    if (ctx->r2 == 0) {
        // 0x0041BF7C: nop
    
            goto L_0041BF8C;
    }
    // 0x0041BF7C: nop

    // 0x0041BF80: lw          $v0, 0x518($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X518);
    // 0x0041BF84: bnel        $v0, $zero, L_0041BF8C
    if (ctx->r2 != 0) {
        // 0x0041BF88: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_0041BF8C;
    }
    goto skip_0;
    // 0x0041BF88: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    skip_0:
L_0041BF8C:
    // 0x0041BF8C: lb          $v1, 0x2B($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X2B);
    // 0x0041BF90: beq         $v1, $zero, L_0041BFA8
    if (ctx->r3 == 0) {
        // 0x0041BF94: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0041BFA8;
    }
    // 0x0041BF94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041BF98: beq         $v1, $v0, L_0041BFB8
    if (ctx->r3 == ctx->r2) {
        // 0x0041BF9C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0041BFB8;
    }
    // 0x0041BF9C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041BFA0: j           L_0041BFC8
    // 0x0041BFA4: nop

        goto L_0041BFC8;
    // 0x0041BFA4: nop

L_0041BFA8:
    // 0x0041BFA8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041BFAC: addiu       $v0, $v0, 0x3EB8
    ctx->r2 = ADD32(ctx->r2, 0X3EB8);
    // 0x0041BFB0: j           L_0041BFC4
    // 0x0041BFB4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041BFC4;
    // 0x0041BFB4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041BFB8:
    // 0x0041BFB8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041BFBC: addiu       $v0, $v0, 0x3ED0
    ctx->r2 = ADD32(ctx->r2, 0X3ED0);
    // 0x0041BFC0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041BFC4:
    // 0x0041BFC4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0041BFC8:
    // 0x0041BFC8: jr          $ra
    // 0x0041BFCC: nop

    return;
    // 0x0041BFCC: nop

;}
RECOMP_FUNC void func_0044113C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044113C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00441140: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00441144: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00441148: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0044114C: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00441150: addiu       $s0, $s0, -0x6790
    ctx->r16 = ADD32(ctx->r16, -0X6790);
    // 0x00441154: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00441158: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0044115C: jal         0x002532A8
    // 0x00441160: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_002532A8(rdram, ctx);
        goto after_0;
    // 0x00441160: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x00441164: addiu       $a0, $s0, 0x40
    ctx->r4 = ADD32(ctx->r16, 0X40);
    // 0x00441168: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0044116C: lw          $a1, 0x51C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X51C);
    // 0x00441170: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x00441174: addiu       $a2, $a2, 0x6674
    ctx->r6 = ADD32(ctx->r6, 0X6674);
    // 0x00441178: jal         0x0027FC2C
    // 0x0044117C: nop

    func_0027FC2C(rdram, ctx);
        goto after_1;
    // 0x0044117C: nop

    after_1:
    // 0x00441180: addiu       $a1, $zero, 0x5336
    ctx->r5 = ADD32(0, 0X5336);
    // 0x00441184: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00441188: lwc1        $f0, 0x588($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X588);
    // 0x0044118C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x00441190: swc1        $f0, 0xA28($s0)
    MEM_W(0XA28, ctx->r16) = ctx->f0.u32l;
    // 0x00441194: lw          $s0, 0x0($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X0);
    // 0x00441198: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0044119C: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
    // 0x004411A0: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x004411A4: jal         0x00219F74
    // 0x004411A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00219F74(rdram, ctx);
        goto after_2;
    // 0x004411A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x004411AC: lui         $s1, 0x8011
    ctx->r17 = S32(0X8011 << 16);
    // 0x004411B0: addiu       $s1, $s1, 0xF0
    ctx->r17 = ADD32(ctx->r17, 0XF0);
    // 0x004411B4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x004411B8: addiu       $a1, $s0, 0x140
    ctx->r5 = ADD32(ctx->r16, 0X140);
    // 0x004411BC: sb          $v0, 0xC6($a1)
    MEM_B(0XC6, ctx->r5) = ctx->r2;
    // 0x004411C0: addiu       $v0, $zero, 0x5336
    ctx->r2 = ADD32(0, 0X5336);
    // 0x004411C4: sh          $v0, 0xC4($a1)
    MEM_H(0XC4, ctx->r5) = ctx->r2;
    // 0x004411C8: lw          $v0, 0x140($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X140);
    // 0x004411CC: addiu       $v1, $zero, -0x2
    ctx->r3 = ADD32(0, -0X2);
    // 0x004411D0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x004411D4: sw          $v0, 0x140($s0)
    MEM_W(0X140, ctx->r16) = ctx->r2;
    // 0x004411D8: jal         0x0027AD98
    // 0x004411DC: sb          $zero, 0xC7($a1)
    MEM_B(0XC7, ctx->r5) = 0;
    func_0027AD98(rdram, ctx);
        goto after_3;
    // 0x004411DC: sb          $zero, 0xC7($a1)
    MEM_B(0XC7, ctx->r5) = 0;
    after_3:
    // 0x004411E0: jal         0x0027ADA0
    // 0x004411E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0027ADA0(rdram, ctx);
        goto after_4;
    // 0x004411E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x004411E8: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x004411EC: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x004411F0: jal         0x00225D0C
    // 0x004411F4: nop

    func_00225D0C(rdram, ctx);
        goto after_5;
    // 0x004411F4: nop

    after_5:
    // 0x004411F8: lw          $v1, 0x8($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X8);
    // 0x004411FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00441200: beq         $v1, $v0, L_00441288
    if (ctx->r3 == ctx->r2) {
        // 0x00441204: nop
    
            goto L_00441288;
    }
    // 0x00441204: nop

    // 0x00441208: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x0044120C: lw          $a0, -0x14C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X14C);
    // 0x00441210: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x00441214: lw          $a1, -0x6770($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X6770);
    // 0x00441218: beq         $a0, $zero, L_00441288
    if (ctx->r4 == 0) {
        // 0x0044121C: nop
    
            goto L_00441288;
    }
    // 0x0044121C: nop

    // 0x00441220: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
    // 0x00441224: lui         $a3, 0x2000
    ctx->r7 = S32(0X2000 << 16);
    // 0x00441228: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
L_0044122C:
    // 0x0044122C: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00441230: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00441234: bne         $v0, $t0, L_0044127C
    if (ctx->r2 != ctx->r8) {
        // 0x00441238: nop
    
            goto L_0044127C;
    }
    // 0x00441238: nop

    // 0x0044123C: lw          $v0, 0x1B8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1B8);
    // 0x00441240: bne         $v0, $zero, L_0044127C
    if (ctx->r2 != 0) {
        // 0x00441244: nop
    
            goto L_0044127C;
    }
    // 0x00441244: nop

    // 0x00441248: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x0044124C: beq         $v0, $zero, L_00441264
    if (ctx->r2 == 0) {
        // 0x00441250: nop
    
            goto L_00441264;
    }
    // 0x00441250: nop

    // 0x00441254: lw          $v1, 0x1C0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C0);
    // 0x00441258: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x0044125C: bne         $v1, $v0, L_0044127C
    if (ctx->r3 != ctx->r2) {
        // 0x00441260: nop
    
            goto L_0044127C;
    }
    // 0x00441260: nop

L_00441264:
    // 0x00441264: lw          $v0, 0x140($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X140);
    // 0x00441268: sw          $a1, 0x1C8($a0)
    MEM_W(0X1C8, ctx->r4) = ctx->r5;
    // 0x0044126C: sw          $a1, 0x1C0($a0)
    MEM_W(0X1C0, ctx->r4) = ctx->r5;
    // 0x00441270: or          $v0, $v0, $a3
    ctx->r2 = ctx->r2 | ctx->r7;
    // 0x00441274: or          $v0, $v0, $a2
    ctx->r2 = ctx->r2 | ctx->r6;
    // 0x00441278: sw          $v0, 0x140($a0)
    MEM_W(0X140, ctx->r4) = ctx->r2;
L_0044127C:
    // 0x0044127C: lw          $a0, 0x28C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X28C);
    // 0x00441280: bne         $a0, $zero, L_0044122C
    if (ctx->r4 != 0) {
        // 0x00441284: nop
    
            goto L_0044122C;
    }
    // 0x00441284: nop

L_00441288:
    // 0x00441288: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0044128C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00441290: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00441294: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00441298: jr          $ra
    // 0x0044129C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0044129C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00288318(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00288318: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0028831C: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00288320: lw          $v1, 0x6D18($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6D18);
    // 0x00288324: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00288328: lw          $v0, 0x2210($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2210);
    // 0x0028832C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00288330: divu        $zero, $v1, $v0
    lo = S32(U32(ctx->r3) / U32(ctx->r2)); hi = S32(U32(ctx->r3) % U32(ctx->r2));
    // 0x00288334: bne         $v0, $zero, L_00288340
    if (ctx->r2 != 0) {
        // 0x00288338: nop
    
            goto L_00288340;
    }
    // 0x00288338: nop

    // 0x0028833C: break       7
    do_break(2655036);
L_00288340:
    // 0x00288340: mfhi        $a0
    ctx->r4 = hi;
    // 0x00288344: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00288348: lw          $v0, 0x6D20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D20);
    // 0x0028834C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00288350: sw          $v1, 0x6D18($at)
    MEM_W(0X6D18, ctx->r1) = ctx->r3;
    // 0x00288354: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00288358: lw          $v1, 0x6D1C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6D1C);
    // 0x0028835C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00288360: xori        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 ^ 0X1;
    // 0x00288364: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00288368: sw          $v0, 0x6D20($at)
    MEM_W(0X6D20, ctx->r1) = ctx->r2;
    // 0x0028836C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00288370: sw          $v1, 0x6D1C($at)
    MEM_W(0X6D1C, ctx->r1) = ctx->r3;
    // 0x00288374: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x00288378: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x0028837C: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x00288380: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x00288384: beq         $v1, $zero, L_0028839C
    if (ctx->r3 == 0) {
        // 0x00288388: sw          $v0, 0x3C0($a1)
        MEM_W(0X3C0, ctx->r5) = ctx->r2;
            goto L_0028839C;
    }
    // 0x00288388: sw          $v0, 0x3C0($a1)
    MEM_W(0X3C0, ctx->r5) = ctx->r2;
    // 0x0028838C: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00288390: lw          $v1, 0xA84($v1)
    ctx->r3 = MEM_W(ctx->r3, 0XA84);
    // 0x00288394: j           L_002883A8
    // 0x00288398: sw          $v1, 0x114($v0)
    MEM_W(0X114, ctx->r2) = ctx->r3;
        goto L_002883A8;
    // 0x00288398: sw          $v1, 0x114($v0)
    MEM_W(0X114, ctx->r2) = ctx->r3;
L_0028839C:
    // 0x0028839C: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x002883A0: lw          $v1, 0xA80($v1)
    ctx->r3 = MEM_W(ctx->r3, 0XA80);
    // 0x002883A4: sw          $v1, 0x114($v0)
    MEM_W(0X114, ctx->r2) = ctx->r3;
L_002883A8:
    // 0x002883A8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002883AC: lw          $v0, 0x6D1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D1C);
    // 0x002883B0: lw          $a0, 0x3C0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X3C0);
    // 0x002883B4: beq         $v0, $zero, L_002883CC
    if (ctx->r2 == 0) {
            // 0x002883B8: nop

    func_002883CC(rdram, ctx);
    return;
    }
    // 0x002883B8: nop

    // 0x002883BC: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x002883C0: lw          $v0, 0xA4C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XA4C);
    // 0x002883C4: jr          $ra
    // 0x002883C8: sw          $v0, 0x118($a0)
    MEM_W(0X118, ctx->r4) = ctx->r2;
    return;
    // 0x002883C8: sw          $v0, 0x118($a0)
    MEM_W(0X118, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_0042D140(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042D140: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x0042D144: jal         0x00200500
    // 0x0042D148: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00200500(rdram, ctx);
        goto after_0;
    // 0x0042D148: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_0:
    // 0x0042D14C: addiu       $a0, $s3, 0x14
    ctx->r4 = ADD32(ctx->r19, 0X14);
    // 0x0042D150: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042D154: jal         0x00200500
    // 0x0042D158: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00200500(rdram, ctx);
        goto after_1;
    // 0x0042D158: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_1:
    // 0x0042D15C: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x0042D160: addiu       $s1, $zero, 0x28
    ctx->r17 = ADD32(0, 0X28);
    // 0x0042D164: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0042D168: lwc1        $f20, 0x60B8($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X60B8);
L_0042D16C:
    // 0x0042D16C: addiu       $a0, $s3, 0x14
    ctx->r4 = ADD32(ctx->r19, 0X14);
    // 0x0042D170: addu        $s0, $s3, $s1
    ctx->r16 = ADD32(ctx->r19, ctx->r17);
    // 0x0042D174: jal         0x00200574
    // 0x0042D178: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200574(rdram, ctx);
        goto after_2;
    // 0x0042D178: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0042D17C: addiu       $s1, $s1, 0x18
    ctx->r17 = ADD32(ctx->r17, 0X18);
    // 0x0042D180: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x0042D184: slti        $v0, $s2, 0x8
    ctx->r2 = SIGNED(ctx->r18) < 0X8 ? 1 : 0;
    // 0x0042D188: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x0042D18C: swc1        $f20, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f20.u32l;
    // 0x0042D190: bne         $v0, $zero, L_0042D16C
    if (ctx->r2 != 0) {
        // 0x0042D194: sh          $zero, 0x16($s0)
        MEM_H(0X16, ctx->r16) = 0;
            goto L_0042D16C;
    }
    // 0x0042D194: sh          $zero, 0x16($s0)
    MEM_H(0X16, ctx->r16) = 0;
    // 0x0042D198: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x0042D19C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0042D1A0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0042D1A4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0042D1A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042D1AC: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x0042D1B0: jr          $ra
    // 0x0042D1B4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0042D1B4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_002972D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002972D8: jal         0x0025AAA4
    // 0x002972DC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0025AAA4(rdram, ctx);
        goto after_0;
    // 0x002972DC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
    // 0x002972E0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x002972E4: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x002972E8: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x002972EC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x002972F0: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x002972F4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x002972F8: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x002972FC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x00297300: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x00297304: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00297308: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0029730C: lw          $s1, 0x0($s5)
    ctx->r17 = MEM_W(ctx->r21, 0X0);
    // 0x00297310: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x00297314: bne         $s1, $zero, L_00297334
    if (ctx->r17 != 0) {
        // 0x00297318: addu        $s4, $a3, $zero
        ctx->r20 = ADD32(ctx->r7, 0);
            goto L_00297334;
    }
    // 0x00297318: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    // 0x0029731C: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x00297320: addiu       $a0, $a0, -0x58D0
    ctx->r4 = ADD32(ctx->r4, -0X58D0);
    // 0x00297324: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00297328: addiu       $a1, $a1, -0x58CC
    ctx->r5 = ADD32(ctx->r5, -0X58CC);
    // 0x0029732C: jal         0x0029B020
    // 0x00297330: addiu       $a2, $zero, 0x22
    ctx->r6 = ADD32(0, 0X22);
    func_0029B020(rdram, ctx);
        goto after_1;
    // 0x00297330: addiu       $a2, $zero, 0x22
    ctx->r6 = ADD32(0, 0X22);
    after_1:
L_00297334:
    // 0x00297334: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00297338: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0029733C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x00297340: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00297344: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00297348: jalr        $v0
    // 0x0029734C: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x0029734C: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    after_2:
    // 0x00297350: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00297354: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00297358: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x0029735C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00297360: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x00297364: lui         $a3, 0x440
    ctx->r7 = S32(0X440 << 16);
    // 0x00297368: ori         $a3, $a3, 0x580
    ctx->r7 = ctx->r7 | 0X580;
    // 0x0029736C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x00297370: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x00297374: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x00297378: sll         $v0, $s2, 1
    ctx->r2 = S32(ctx->r18 << 1);
    // 0x0029737C: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x00297380: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x00297384: lui         $v0, 0xD00
    ctx->r2 = S32(0XD00 << 16);
    // 0x00297388: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x0029738C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x00297390: sll         $v0, $s2, 2
    ctx->r2 = S32(ctx->r18 << 2);
    // 0x00297394: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x00297398: sw          $a3, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r7;
    // 0x0029739C: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
    // 0x002973A0: addu        $v1, $s0, $zero
    ctx->r3 = ADD32(ctx->r16, 0);
    // 0x002973A4: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    // 0x002973A8: lui         $v0, 0x600
    ctx->r2 = S32(0X600 << 16);
    // 0x002973AC: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x002973B0: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    // 0x002973B4: sw          $a0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r4;
    // 0x002973B8: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x002973BC: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x002973C0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x002973C4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x002973C8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x002973CC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x002973D0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x002973D4: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x002973D8: jr          $ra
    // 0x002973DC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x002973DC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00253458(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00253458: jr          $ra
    // 0x0025345C: nop

    return;
    // 0x0025345C: nop

;}
RECOMP_FUNC void func_00466B38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0042DD60:
    // 0x00466B38: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00466B3C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00466B40: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00466B44: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00466B48: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00466B4C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x00466B50: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x00466B54: jal         0x0027BC34
    // 0x00466B58: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    func_0027BC34(rdram, ctx);
        goto after_0;
    // 0x00466B58: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    after_0:
    // 0x00466B5C: bnel        $v0, $zero, L_00466B64
    if (ctx->r2 != 0) {
        // 0x00466B60: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_00466B64;
    }
    goto skip_0;
    // 0x00466B60: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    skip_0:
L_00466B64:
    // 0x00466B64: jal         0x0028D0E0
    // 0x00466B68: nop

    func_0028D0E0(rdram, ctx);
        goto after_1;
    // 0x00466B68: nop

    after_1:
    // 0x00466B6C: bnel        $v0, $zero, L_00466B74
    if (ctx->r2 != 0) {
        // 0x00466B70: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_00466B74;
    }
    goto skip_1;
    // 0x00466B70: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    skip_1:
L_00466B74:
    // 0x00466B74: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00466B78: addiu       $a0, $a0, -0x6750
    ctx->r4 = ADD32(ctx->r4, -0X6750);
    // 0x00466B7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00466B80: sw          $v0, 0x510($s0)
    MEM_W(0X510, ctx->r16) = ctx->r2;
    // 0x00466B84: jal         0x0042FE78
    // 0x00466B88: sw          $s1, 0x520($s0)
    MEM_W(0X520, ctx->r16) = ctx->r17;
    entry_0042FE78(rdram, ctx);
        goto after_2;
    // 0x00466B88: sw          $s1, 0x520($s0)
    MEM_W(0X520, ctx->r16) = ctx->r17;
    after_2:
    // 0x00466B8C: addiu       $a0, $s0, 0xCD0
    ctx->r4 = ADD32(ctx->r16, 0XCD0);
    // 0x00466B90: jal         0x00254C44
    // 0x00466B94: sw          $v0, 0x51C($s0)
    MEM_W(0X51C, ctx->r16) = ctx->r2;
    func_00254C44(rdram, ctx);
        goto after_3;
    // 0x00466B94: sw          $v0, 0x51C($s0)
    MEM_W(0X51C, ctx->r16) = ctx->r2;
    after_3:
    // 0x00466B98: addiu       $a0, $zero, 0x3FF
    ctx->r4 = ADD32(0, 0X3FF);
    // 0x00466B9C: addu        $v0, $s0, $a0
    ctx->r2 = ADD32(ctx->r16, ctx->r4);
L_00466BA0:
    // 0x00466BA0: sb          $zero, 0x52C($v0)
    MEM_B(0X52C, ctx->r2) = 0;
    // 0x00466BA4: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x00466BA8: bgez        $a0, L_00466BA0
    if (SIGNED(ctx->r4) >= 0) {
        // 0x00466BAC: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_00466BA0;
    }
    // 0x00466BAC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00466BB0: sh          $zero, 0x528($s0)
    MEM_H(0X528, ctx->r16) = 0;
    // 0x00466BB4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x00466BB8: addu        $v0, $s0, $a0
    ctx->r2 = ADD32(ctx->r16, ctx->r4);
L_00466BBC:
    // 0x00466BBC: sb          $zero, 0x9FC($v0)
    MEM_B(0X9FC, ctx->r2) = 0;
    // 0x00466BC0: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x00466BC4: bgez        $a0, L_00466BBC
    if (SIGNED(ctx->r4) >= 0) {
        // 0x00466BC8: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_00466BBC;
    }
    // 0x00466BC8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00466BCC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x00466BD0: addu        $v0, $s0, $a0
    ctx->r2 = ADD32(ctx->r16, ctx->r4);
L_00466BD4:
    // 0x00466BD4: sb          $zero, 0xA02($v0)
    MEM_B(0XA02, ctx->r2) = 0;
    // 0x00466BD8: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x00466BDC: bgez        $a0, L_00466BD4
    if (SIGNED(ctx->r4) >= 0) {
        // 0x00466BE0: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_00466BD4;
    }
    // 0x00466BE0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00466BE4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00466BE8: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x00466BEC: bne         $v0, $zero, L_00466BF8
    if (ctx->r2 != 0) {
        // 0x00466BF0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00466BF8;
    }
    // 0x00466BF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00466BF4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_00466BF8:
    // 0x00466BF8: sh          $v0, 0x52A($s0)
    MEM_H(0X52A, ctx->r16) = ctx->r2;
    // 0x00466BFC: jal         0x00248A8C
    // 0x00466C00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00248A8C(rdram, ctx);
        goto after_4;
    // 0x00466C00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x00466C04: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00466C08: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00466C0C: sw          $zero, 0xA28($s0)
    MEM_W(0XA28, ctx->r16) = 0;
    // 0x00466C10: sw          $zero, 0xA2C($s0)
    MEM_W(0XA2C, ctx->r16) = 0;
    // 0x00466C14: sw          $v0, 0xC04($s0)
    MEM_W(0XC04, ctx->r16) = ctx->r2;
    // 0x00466C18: sw          $v0, 0xC08($s0)
    MEM_W(0XC08, ctx->r16) = ctx->r2;
L_00466C1C:
    // 0x00466C1C: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x00466C20: sll         $v1, $a0, 1
    ctx->r3 = S32(ctx->r4 << 1);
    // 0x00466C24: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00466C28: sh          $zero, 0x18($v0)
    MEM_H(0X18, ctx->r2) = 0;
    // 0x00466C2C: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x00466C30: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00466C34: sh          $zero, 0x20($v0)
    MEM_H(0X20, ctx->r2) = 0;
    // 0x00466C38: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x00466C3C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00466C40: sh          $zero, 0x8($v0)
    MEM_H(0X8, ctx->r2) = 0;
    // 0x00466C44: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x00466C48: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00466C4C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00466C50: sh          $zero, 0x10($v0)
    MEM_H(0X10, ctx->r2) = 0;
    // 0x00466C54: slti        $v0, $a0, 0x4
    ctx->r2 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
    // 0x00466C58: bne         $v0, $zero, L_00466C1C
    if (ctx->r2 != 0) {
        // 0x00466C5C: addu        $v1, $s0, $zero
        ctx->r3 = ADD32(ctx->r16, 0);
            goto L_00466C1C;
    }
    // 0x00466C5C: addu        $v1, $s0, $zero
    ctx->r3 = ADD32(ctx->r16, 0);
    // 0x00466C60: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x00466C64: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    // 0x00466C68: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x00466C6C: sh          $zero, 0x2($v0)
    MEM_H(0X2, ctx->r2) = 0;
    // 0x00466C70: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x00466C74: sh          $zero, 0x4($v0)
    MEM_H(0X4, ctx->r2) = 0;
    // 0x00466C78: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x00466C7C: sh          $zero, 0x6($v0)
    MEM_H(0X6, ctx->r2) = 0;
    // 0x00466C80: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x00466C84: sb          $zero, 0x3C($v0)
    MEM_B(0X3C, ctx->r2) = 0;
    // 0x00466C88: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x00466C8C: sb          $zero, 0x3D($v0)
    MEM_B(0X3D, ctx->r2) = 0;
    // 0x00466C90: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x00466C94: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00466C98: sb          $zero, 0x3E($v0)
    MEM_B(0X3E, ctx->r2) = 0;
    // 0x00466C9C: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x00466CA0: sb          $zero, 0x3F($v0)
    MEM_B(0X3F, ctx->r2) = 0;
L_00466CA4:
    // 0x00466CA4: sw          $zero, 0x9A0($v1)
    MEM_W(0X9A0, ctx->r3) = 0;
    // 0x00466CA8: sw          $zero, 0x9B8($v1)
    MEM_W(0X9B8, ctx->r3) = 0;
    // 0x00466CAC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00466CB0: slti        $v0, $a0, 0x6
    ctx->r2 = SIGNED(ctx->r4) < 0X6 ? 1 : 0;
    // 0x00466CB4: bne         $v0, $zero, L_00466CA4
    if (ctx->r2 != 0) {
        // 0x00466CB8: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_00466CA4;
    }
    // 0x00466CB8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x00466CBC: lw          $v0, 0x9F8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X9F8);
    // 0x00466CC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00466CC4: sw          $zero, 0x9D0($s0)
    MEM_W(0X9D0, ctx->r16) = 0;
    // 0x00466CC8: sw          $zero, 0x9D4($s0)
    MEM_W(0X9D4, ctx->r16) = 0;
    // 0x00466CCC: sw          $zero, 0x9D8($s0)
    MEM_W(0X9D8, ctx->r16) = 0;
    // 0x00466CD0: sw          $zero, 0x9DC($s0)
    MEM_W(0X9DC, ctx->r16) = 0;
    // 0x00466CD4: sw          $zero, 0x9E0($s0)
    MEM_W(0X9E0, ctx->r16) = 0;
    // 0x00466CD8: sw          $zero, 0x9E4($s0)
    MEM_W(0X9E4, ctx->r16) = 0;
    // 0x00466CDC: sw          $zero, 0x9E8($s0)
    MEM_W(0X9E8, ctx->r16) = 0;
    // 0x00466CE0: sw          $zero, 0x9EC($s0)
    MEM_W(0X9EC, ctx->r16) = 0;
    // 0x00466CE4: sw          $zero, 0x9F0($s0)
    MEM_W(0X9F0, ctx->r16) = 0;
    // 0x00466CE8: sw          $zero, 0x9F4($s0)
    MEM_W(0X9F4, ctx->r16) = 0;
    // 0x00466CEC: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x00466CF0: jal         0x0042E920
    // 0x00466CF4: sw          $v0, 0x9F8($s0)
    MEM_W(0X9F8, ctx->r16) = ctx->r2;
    func_0042E920(rdram, ctx);
        goto after_5;
    // 0x00466CF4: sw          $v0, 0x9F8($s0)
    MEM_W(0X9F8, ctx->r16) = ctx->r2;
    after_5:
    // 0x00466CF8: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00466CFC: addiu       $v1, $v1, -0x5528
    ctx->r3 = ADD32(ctx->r3, -0X5528);
    // 0x00466D00: lbu         $v0, 0x19($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X19);
    // 0x00466D04: bnel        $v0, $zero, L_00466D0C
    if (ctx->r2 != 0) {
        // 0x00466D08: sw          $zero, 0x12B4($s0)
        MEM_W(0X12B4, ctx->r16) = 0;
            goto L_00466D0C;
    }
    goto skip_2;
    // 0x00466D08: sw          $zero, 0x12B4($s0)
    MEM_W(0X12B4, ctx->r16) = 0;
    skip_2:
L_00466D0C:
    // 0x00466D0C: beq         $s2, $zero, L_00466D7C
    if (ctx->r18 == 0) {
        // 0x00466D10: nop
    
            goto L_00466D7C;
    }
    // 0x00466D10: nop

    // 0x00466D14: lbu         $v0, 0x19($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X19);
    // 0x00466D18: beq         $v0, $zero, L_00466D58
    if (ctx->r2 == 0) {
        // 0x00466D1C: nop
    
            goto L_00466D58;
    }
    // 0x00466D1C: nop

    // 0x00466D20: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x00466D24: sb          $zero, 0x30($v0)
    MEM_B(0X30, ctx->r2) = 0;
    // 0x00466D28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00466D2C: sw          $zero, 0x520($s0)
    MEM_W(0X520, ctx->r16) = 0;
    // 0x00466D30: sw          $v0, 0xBF8($s0)
    MEM_W(0XBF8, ctx->r16) = ctx->r2;
    // 0x00466D34: lw          $v0, 0x1FC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1FC);
    // 0x00466D38: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00466D3C: addiu       $a1, $a1, -0x7800
    ctx->r5 = ADD32(ctx->r5, -0X7800);
    // 0x00466D40: bne         $v0, $zero, L_00466D60
    if (ctx->r2 != 0) {
        // 0x00466D44: nop
    
            goto L_00466D60;
    }
    // 0x00466D44: nop

    // 0x00466D48: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00466D4C: addiu       $a1, $a1, -0x78D8
    ctx->r5 = ADD32(ctx->r5, -0X78D8);
    // 0x00466D50: j           L_0042DD60
    // 0x00466D54: nop

    entry_0042DD60(rdram, ctx);
    return;
    // 0x00466D54: nop

L_00466D58:
    // 0x00466D58: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00466D5C: addiu       $a1, $a1, -0x6F74
    ctx->r5 = ADD32(ctx->r5, -0X6F74);
L_00466D60:
    // 0x00466D60: lw          $a0, 0x51C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X51C);
    // 0x00466D64: lw          $v0, 0x514($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X514);
    // 0x00466D68: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x00466D6C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00466D70: lw          $a3, 0xA50($a2)
    ctx->r7 = MEM_W(ctx->r6, 0XA50);
    // 0x00466D74: jal         0x00416644
    // 0x00466D78: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    func_00416644(rdram, ctx);
        goto after_6;
    // 0x00466D78: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    after_6:
L_00466D7C:
    // 0x00466D7C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00466D80: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00466D84: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00466D88: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00466D8C: jr          $ra
    // 0x00466D90: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00466D90: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00293528(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00293528: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0029352C: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // turok2: reconnected split function: a stray ELF symbol at 0x00293530 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00293530(rdram, ctx);
;}
RECOMP_FUNC void func_00226BD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00226BD8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00226BDC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00226BE0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00226BE4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00226BE8: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x00226BEC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00226BF0: lw          $a0, 0x6C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6C);
    // 0x00226BF4: jal         0x002017D4
    // 0x00226BF8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00226BF8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x00226BFC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00226C00: jal         0x002017D4
    // 0x00226C04: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00226C04: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00226C08: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00226C0C: jal         0x002017D4
    // 0x00226C10: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x00226C10: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x00226C14: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00226C18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00226C1C: jal         0x002017D4
    // 0x00226C20: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x00226C20: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x00226C24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00226C28: jal         0x00201818
    // 0x00226C2C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_00201818(rdram, ctx);
        goto after_4;
    // 0x00226C2C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x00226C30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00226C34: jal         0x002017D4
    // 0x00226C38: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x00226C38: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x00226C3C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00226C40: andi        $v1, $s1, 0x7
    ctx->r3 = ctx->r17 & 0X7;
    // 0x00226C44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00226C48: bgez        $s1, L_00226C54
    if (SIGNED(ctx->r17) >= 0) {
        // 0x00226C4C: sllv        $v1, $v0, $v1
        ctx->r3 = S32(ctx->r2 << (ctx->r3 & 31));
            goto L_00226C54;
    }
    // 0x00226C4C: sllv        $v1, $v0, $v1
    ctx->r3 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x00226C50: addiu       $s1, $s1, 0x7
    ctx->r17 = ADD32(ctx->r17, 0X7);
L_00226C54:
    // 0x00226C54: sra         $v0, $s1, 3
    ctx->r2 = S32(SIGNED(ctx->r17) >> 3);
    // 0x00226C58: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x00226C5C: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x00226C60: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00226C64: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00226C68: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00226C6C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00226C70: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x00226C74: jr          $ra
    // 0x00226C78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00226C78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0029BA80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029BA80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0029BA84: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x0029BA88: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x0029BA8C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0029BA90: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0029BA94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0029BA98: sw          $a2, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r6;
    // 0x0029BA9C: sw          $a3, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r7;
    // 0x0029BAA0: or          $a2, $a3, $a2
    ctx->r6 = ctx->r7 | ctx->r6;
    // 0x0029BAA4: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x0029BAA8: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x0029BAAC: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x0029BAB0: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
    // 0x0029BAB4: bne         $a2, $zero, L_0029BAC4
    if (ctx->r6 != 0) {
        // 0x0029BAB8: nop
    
            goto L_0029BAC4;
    }
    // 0x0029BAB8: nop

    // 0x0029BABC: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x0029BAC0: sw          $v1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r3;
L_0029BAC4:
    // 0x0029BAC4: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x0029BAC8: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x0029BACC: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x0029BAD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0029BAD4: jal         0x0029BE6C
    // 0x0029BAD8: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    func_0029BE6C(rdram, ctx);
        goto after_0;
    // 0x0029BAD8: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    after_0:
    // 0x0029BADC: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0029BAE0: lw          $a0, -0x76D0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X76D0);
    // 0x0029BAE4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x0029BAE8: bne         $a0, $s0, L_0029BAF8
    if (ctx->r4 != ctx->r16) {
        // 0x0029BAEC: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_0029BAF8;
    }
    // 0x0029BAEC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0029BAF0: jal         0x0029BE0C
    // 0x0029BAF4: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    func_0029BE0C(rdram, ctx);
        goto after_1;
    // 0x0029BAF4: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    after_1:
L_0029BAF8:
    // 0x0029BAF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0029BAFC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0029BB00: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0029BB04: jr          $ra
    // 0x0029BB08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0029BB08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0025EB80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025EB80: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0025EB84: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0025EB88: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0025EB8C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0025EB90: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0025EB94: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0025EB98: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x0025EB9C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0025EBA0: beq         $s0, $zero, L_0025EBB8
    if (ctx->r16 == 0) {
        // 0x0025EBA4: sw          $s0, 0x114($s2)
        MEM_W(0X114, ctx->r18) = ctx->r16;
            goto L_0025EBB8;
    }
    // 0x0025EBA4: sw          $s0, 0x114($s2)
    MEM_W(0X114, ctx->r18) = ctx->r16;
    // 0x0025EBA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025EBAC: addiu       $a1, $s0, 0x140
    ctx->r5 = ADD32(ctx->r16, 0X140);
    // 0x0025EBB0: jal         0x00264C8C
    // 0x0025EBB4: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_00264C8C(rdram, ctx);
        goto after_0;
    // 0x0025EBB4: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_0:
L_0025EBB8:
    // 0x0025EBB8: lui         $v1, 0xDFFF
    ctx->r3 = S32(0XDFFF << 16);
    // 0x0025EBBC: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0025EBC0: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0025EBC4: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0025EBC8: lw          $t0, 0x34($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X34);
    // 0x0025EBCC: lw          $t1, 0x38($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X38);
    // 0x0025EBD0: lw          $t2, 0x3C($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X3C);
    // 0x0025EBD4: sw          $t0, 0xBD0($s0)
    MEM_W(0XBD0, ctx->r16) = ctx->r8;
    // 0x0025EBD8: sw          $t1, 0xBD4($s0)
    MEM_W(0XBD4, ctx->r16) = ctx->r9;
    // 0x0025EBDC: sw          $t2, 0xBD8($s0)
    MEM_W(0XBD8, ctx->r16) = ctx->r10;
    // 0x0025EBE0: lw          $v0, 0xD4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XD4);
    // 0x0025EBE4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0025EBE8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025EBEC: sw          $v0, 0xD4($s1)
    MEM_W(0XD4, ctx->r17) = ctx->r2;
    // 0x0025EBF0: lw          $a2, 0xBB4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XBB4);
    // 0x0025EBF4: lh          $a3, 0xC4($s2)
    ctx->r7 = MEM_H(ctx->r18, 0XC4);
    // 0x0025EBF8: jal         0x002241D8
    // 0x0025EBFC: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    func_002241D8(rdram, ctx);
        goto after_1;
    // 0x0025EBFC: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    after_1:
    // 0x0025EC00: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0025EC04: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0025EC08: jal         0x00243414
    // 0x0025EC0C: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x0025EC0C: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    after_2:
    // 0x0025EC10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0025EC14: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0025EC18: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0025EC1C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0025EC20: jr          $ra
    // 0x0025EC24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0025EC24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00412798(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00412798: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041279C: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x004127A0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x004127A4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x004127A8: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x004127AC: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x004127B0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x004127B4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x004127B8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x004127BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004127C0: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x004127C4: lwc1        $f20, 0x1C($v0)
    ctx->f20.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x004127C8: jal         0x00284174
    // 0x004127CC: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    func_00284174(rdram, ctx);
        goto after_0;
    // 0x004127CC: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    after_0:
    // 0x004127D0: beq         $v0, $zero, L_00412970
    if (ctx->r2 == 0) {
        // 0x004127D4: nop
    
            goto L_00412970;
    }
    // 0x004127D4: nop

    // 0x004127D8: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x004127DC: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x004127E0: lw          $v0, 0x50($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X50);
    // 0x004127E4: beq         $v0, $zero, L_00412970
    if (ctx->r2 == 0) {
        // 0x004127E8: nop
    
            goto L_00412970;
    }
    // 0x004127E8: nop

    // 0x004127EC: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    // 0x004127F0: jal         0x002017D4
    // 0x004127F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x004127F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x004127F8: lw          $s3, 0x4($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X4);
    // 0x004127FC: beq         $s3, $zero, L_00412970
    if (ctx->r19 == 0) {
        // 0x00412800: addiu       $v1, $v0, 0x8
        ctx->r3 = ADD32(ctx->r2, 0X8);
            goto L_00412970;
    }
    // 0x00412800: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x00412804: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00412808: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x0041280C: lwc1        $f0, 0x34($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X34);
    // 0x00412810: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x00412814: nop

    // 0x00412818: bc1tl       L_00412820
    if (c1cs) {
        // 0x0041281C: addiu       $s4, $zero, 0x1
        ctx->r20 = ADD32(0, 0X1);
            goto L_00412820;
    }
    goto skip_0;
    // 0x0041281C: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    skip_0:
L_00412820:
    // 0x00412820: blez        $s3, L_00412970
    if (SIGNED(ctx->r19) <= 0) {
        // 0x00412824: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_00412970;
    }
    // 0x00412824: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x00412828: lui         $s5, 0x800F
    ctx->r21 = S32(0X800F << 16);
    // 0x0041282C: addiu       $s5, $s5, 0x7078
    ctx->r21 = ADD32(ctx->r21, 0X7078);
    // 0x00412830: addu        $s1, $v1, $zero
    ctx->r17 = ADD32(ctx->r3, 0);
L_00412834:
    // 0x00412834: lwc1        $f1, 0x0($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X0);
    // 0x00412838: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041283C: lwc1        $f0, 0xAD0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XAD0);
    // 0x00412840: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00412844: nop

    // 0x00412848: bc1tl       L_00412964
    if (c1cs) {
        // 0x0041284C: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_00412964;
    }
    goto skip_1;
    // 0x0041284C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_1:
    // 0x00412850: c.lt.s      $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f20.fl < ctx->f1.fl;
    // 0x00412854: nop

    // 0x00412858: bc1f        L_00412868
    if (!c1cs) {
        // 0x0041285C: nop
    
            goto L_00412868;
    }
    // 0x0041285C: nop

    // 0x00412860: beql        $s4, $zero, L_00412964
    if (ctx->r20 == 0) {
        // 0x00412864: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_00412964;
    }
    goto skip_2;
    // 0x00412864: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_2:
L_00412868:
    // 0x00412868: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x0041286C: bne         $v0, $zero, L_0041288C
    if (ctx->r2 != 0) {
        // 0x00412870: nop
    
            goto L_0041288C;
    }
    // 0x00412870: nop

    // 0x00412874: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x00412878: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x0041287C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00412880: lw          $v0, 0x1178($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X1178);
    // 0x00412884: j           L_004128A0
    // 0x00412888: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
        goto L_004128A0;
    // 0x00412888: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
L_0041288C:
    // 0x0041288C: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x00412890: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x00412894: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00412898: lw          $v0, 0x117C($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X117C);
    // 0x0041289C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
L_004128A0:
    // 0x004128A0: addu        $s0, $v0, $v1
    ctx->r16 = ADD32(ctx->r2, ctx->r3);
    // 0x004128A4: lbu         $v1, 0x11($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X11);
    // 0x004128A8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x004128AC: beq         $v1, $v0, L_004128F0
    if (ctx->r3 == ctx->r2) {
        // 0x004128B0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_004128F0;
    }
    // 0x004128B0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004128B4: slti        $v0, $v1, 0xA
    ctx->r2 = SIGNED(ctx->r3) < 0XA ? 1 : 0;
    // 0x004128B8: beq         $v0, $zero, L_004128D0
    if (ctx->r2 == 0) {
        // 0x004128BC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_004128D0;
    }
    // 0x004128BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004128C0: beq         $v1, $v0, L_004128E4
    if (ctx->r3 == ctx->r2) {
        // 0x004128C4: nop
    
            goto L_004128E4;
    }
    // 0x004128C4: nop

    // 0x004128C8: j           L_00412908
    // 0x004128CC: nop

        goto L_00412908;
    // 0x004128CC: nop

L_004128D0:
    // 0x004128D0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x004128D4: beq         $v1, $v0, L_004128FC
    if (ctx->r3 == ctx->r2) {
        // 0x004128D8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_004128FC;
    }
    // 0x004128D8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x004128DC: j           L_00412908
    // 0x004128E0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
        goto L_00412908;
    // 0x004128E0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_004128E4:
    // 0x004128E4: lbu         $v1, 0x12($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X12);
    // 0x004128E8: j           L_00412900
    // 0x004128EC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_00412900;
    // 0x004128EC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_004128F0:
    // 0x004128F0: lbu         $v1, 0x12($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X12);
    // 0x004128F4: j           L_00412900
    // 0x004128F8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_00412900;
    // 0x004128F8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_004128FC:
    // 0x004128FC: lbu         $v1, 0x12($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X12);
L_00412900:
    // 0x00412900: beql        $v1, $v0, L_00412908
    if (ctx->r3 == ctx->r2) {
        // 0x00412904: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_00412908;
    }
    goto skip_3;
    // 0x00412904: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_3:
L_00412908:
    // 0x00412908: beq         $a0, $zero, L_00412928
    if (ctx->r4 == 0) {
        // 0x0041290C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00412928;
    }
    // 0x0041290C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00412910: jal         0x00412314
    // 0x00412914: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00412314(rdram, ctx);
        goto after_2;
    // 0x00412914: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00412918: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041291C: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00412920: j           L_00412930
    // 0x00412924: sw          $zero, 0x58($v0)
    MEM_W(0X58, ctx->r2) = 0;
        goto L_00412930;
    // 0x00412924: sw          $zero, 0x58($v0)
    MEM_W(0X58, ctx->r2) = 0;
L_00412928:
    // 0x00412928: jal         0x0026E210
    // 0x0041292C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0026E210(rdram, ctx);
        goto after_3;
    // 0x0041292C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_00412930:
    // 0x00412930: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00412934: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00412938: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041293C: lwc1        $f0, 0xAD4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XAD4);
    // 0x00412940: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00412944: swc1        $f0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f0.u32l;
    // 0x00412948: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x0041294C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00412950: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x00412954: andi        $v0, $v0, 0xEF
    ctx->r2 = ctx->r2 & 0XEF;
    // 0x00412958: jal         0x00224A68
    // 0x0041295C: sb          $v0, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r2;
    func_00224A68(rdram, ctx);
        goto after_4;
    // 0x0041295C: sb          $v0, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r2;
    after_4:
    // 0x00412960: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_00412964:
    // 0x00412964: slt         $v0, $s2, $s3
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x00412968: bne         $v0, $zero, L_00412834
    if (ctx->r2 != 0) {
        // 0x0041296C: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_00412834;
    }
    // 0x0041296C: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
L_00412970:
    // 0x00412970: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00412974: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x00412978: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0041297C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00412980: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00412984: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00412988: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041298C: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x00412990: jr          $ra
    // 0x00412994: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00412994: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0023C120(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023C120: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    // 0x0023C124: beq         $v0, $zero, L_0023C144
    if (ctx->r2 == 0) {
        // 0x0023C128: nop
    
            goto L_0023C144;
    }
    // 0x0023C128: nop

    // 0x0023C12C: lw          $a2, 0x4($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X4);
    // 0x0023C130: lw          $a3, 0x8($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X8);
    // 0x0023C134: lw          $t0, 0xC($a1)
    ctx->r8 = MEM_W(ctx->r5, 0XC);
    // 0x0023C138: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x0023C13C: sw          $a3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r7;
    // 0x0023C140: sw          $t0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r8;
L_0023C144:
    // 0x0023C144: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x0023C148: beq         $v1, $zero, L_0023C158
    if (ctx->r3 == 0) {
        // 0x0023C14C: nop
    
            goto L_0023C158;
    }
    // 0x0023C14C: nop

    // 0x0023C150: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x0023C154: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_0023C158:
    // 0x0023C158: lw          $v1, 0x34($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X34);
    // 0x0023C15C: beq         $v1, $zero, L_0023C16C
    if (ctx->r3 == 0) {
        // 0x0023C160: nop
    
            goto L_0023C16C;
    }
    // 0x0023C160: nop

    // 0x0023C164: lw          $v0, 0x38($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X38);
    // 0x0023C168: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_0023C16C:
    // 0x0023C16C: lw          $v1, 0x3C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X3C);
    // 0x0023C170: beq         $v1, $zero, L_0023C180
    if (ctx->r3 == 0) {
        // 0x0023C174: nop
    
            goto L_0023C180;
    }
    // 0x0023C174: nop

    // 0x0023C178: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x0023C17C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_0023C180:
    // 0x0023C180: jr          $ra
    // 0x0023C184: nop

    return;
    // 0x0023C184: nop

;}
RECOMP_FUNC void func_00201C08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00201C08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00201C0C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00201C10: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00201C14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00201C18: lw          $v0, 0x238($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X238);
    // 0x00201C1C: beq         $v0, $zero, L_00201C40
    if (ctx->r2 == 0) {
        // 0x00201C20: nop
    
            goto L_00201C40;
    }
    // 0x00201C20: nop

L_00201C24:
    // 0x00201C24: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00201C28: lw          $a1, 0x6E88($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6E88);
    // 0x00201C2C: jal         0x0029B9B0
    // 0x00201C30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0029B9B0(rdram, ctx);
        goto after_0;
    // 0x00201C30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00201C34: lw          $v0, 0x238($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X238);
    // 0x00201C38: bne         $v0, $zero, L_00201C24
    if (ctx->r2 != 0) {
        // 0x00201C3C: nop
    
            goto L_00201C24;
    }
    // 0x00201C3C: nop

L_00201C40:
    // 0x00201C40: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00201C44: lw          $a1, 0x6E7C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6E7C);
    // 0x00201C48: jal         0x0029B9B0
    // 0x00201C4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0029B9B0(rdram, ctx);
        goto after_1;
    // 0x00201C4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00201C50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00201C54: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00201C58: jr          $ra
    // 0x00201C5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00201C5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0045A3E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045A3E4: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0045A3E8: addiu       $v1, $v1, 0x970
    ctx->r3 = ADD32(ctx->r3, 0X970);
    // 0x0045A3EC: lw          $a1, 0x518($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X518);
    // 0x0045A3F0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x0045A3F4: sb          $v0, 0x30($a1)
    MEM_B(0X30, ctx->r5) = ctx->r2;
    // 0x0045A3F8: lhu         $v0, -0x8($v1)
    ctx->r2 = MEM_HU(ctx->r3, -0X8);
    // 0x0045A3FC: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x0045A400: lhu         $v0, -0x6($v1)
    ctx->r2 = MEM_HU(ctx->r3, -0X6);
    // 0x0045A404: sh          $v0, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r2;
    // 0x0045A408: lhu         $v0, -0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, -0X4);
    // 0x0045A40C: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x0045A410: lhu         $v0, -0x2($v1)
    ctx->r2 = MEM_HU(ctx->r3, -0X2);
    // 0x0045A414: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0045A418: sh          $v0, 0x6($a1)
    MEM_H(0X6, ctx->r5) = ctx->r2;
    // 0x0045A41C: addu        $v1, $a1, $a0
    ctx->r3 = ADD32(ctx->r5, ctx->r4);
L_0045A420:
    // 0x0045A420: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045A424: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x0045A428: lbu         $v0, 0x974($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X974);
    // 0x0045A42C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0045A430: sb          $v0, 0x33($v1)
    MEM_B(0X33, ctx->r3) = ctx->r2;
    // 0x0045A434: slti        $v0, $a0, 0x8
    ctx->r2 = SIGNED(ctx->r4) < 0X8 ? 1 : 0;
    // 0x0045A438: bne         $v0, $zero, L_0045A420
    if (ctx->r2 != 0) {
        // 0x0045A43C: addu        $v1, $a1, $a0
        ctx->r3 = ADD32(ctx->r5, ctx->r4);
            goto L_0045A420;
    }
    // 0x0045A43C: addu        $v1, $a1, $a0
    ctx->r3 = ADD32(ctx->r5, ctx->r4);
    // 0x0045A440: jr          $ra
    // 0x0045A444: nop

    return;
    // 0x0045A444: nop

;}
RECOMP_FUNC void func_0024BACC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0024BACC: jr          $ra
    // 0x0024BAD0: nop

    return;
    // 0x0024BAD0: nop

;}
RECOMP_FUNC void func_002602F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002602F8: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x002602FC: lb          $v1, 0x130($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X130);
    // 0x00260300: beq         $v1, $zero, L_00260318
    if (ctx->r3 == 0) {
        // 0x00260304: addiu       $a0, $v0, 0x14
        ctx->r4 = ADD32(ctx->r2, 0X14);
            goto L_00260318;
    }
    // 0x00260304: addiu       $a0, $v0, 0x14
    ctx->r4 = ADD32(ctx->r2, 0X14);
    // 0x00260308: lhu         $v0, 0x74($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X74);
    // 0x0026030C: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x00260310: bne         $v0, $zero, L_00260350
    if (ctx->r2 != 0) {
        // 0x00260314: nop
    
            goto L_00260350;
    }
    // 0x00260314: nop

L_00260318:
    // 0x00260318: lb          $v0, 0x131($a1)
    ctx->r2 = MEM_B(ctx->r5, 0X131);
    // 0x0026031C: beq         $v0, $zero, L_00260334
    if (ctx->r2 == 0) {
        // 0x00260320: nop
    
            goto L_00260334;
    }
    // 0x00260320: nop

    // 0x00260324: lhu         $v0, 0x74($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X74);
    // 0x00260328: andi        $v0, $v0, 0x3E0
    ctx->r2 = ctx->r2 & 0X3E0;
    // 0x0026032C: bne         $v0, $zero, L_00260350
    if (ctx->r2 != 0) {
        // 0x00260330: nop
    
            goto L_00260350;
    }
    // 0x00260330: nop

L_00260334:
    // 0x00260334: lb          $v0, 0x132($a1)
    ctx->r2 = MEM_B(ctx->r5, 0X132);
    // 0x00260338: beq         $v0, $zero, L_00260358
    if (ctx->r2 == 0) {
            // 0x0026033C: nop

    func_00260358(rdram, ctx);
    return;
    }
    // 0x0026033C: nop

    // 0x00260340: lhu         $v0, 0x74($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X74);
    // 0x00260344: andi        $v0, $v0, 0x7C00
    ctx->r2 = ctx->r2 & 0X7C00;
    // 0x00260348: beq         $v0, $zero, L_00260358
    if (ctx->r2 == 0) {
            // 0x0026034C: nop

    func_00260358(rdram, ctx);
    return;
    }
    // 0x0026034C: nop

L_00260350:
    // 0x00260350: jr          $ra
    // 0x00260354: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x00260354: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_00200518(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00200518: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x0020051C: beq         $v1, $zero, L_00200544
    if (ctx->r3 == 0) {
        // 0x00200520: nop
    
            goto L_00200544;
    }
    // 0x00200520: nop

    // 0x00200524: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x00200528: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x0020052C: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x00200530: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00200534: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x00200538: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0020053C: j           L_00200554
    // 0x00200540: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
        goto L_00200554;
    // 0x00200540: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
L_00200544:
    // 0x00200544: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x00200548: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x0020054C: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x00200550: sw          $a1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r5;
L_00200554:
    // 0x00200554: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00200558: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x0020055C: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x00200560: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x00200564: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x00200568: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0020056C: jr          $ra
    // 0x00200570: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
    return;
    // 0x00200570: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_004517BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004187F8:
    // 0x004517BC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
L_004187FC:
    // 0x004517C0: lbu         $v1, -0x54FF($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X54FF);
    // 0x004517C4: beq         $v1, $zero, L_004517DC
    if (ctx->r3 == 0) {
        // 0x004517C8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_004517DC;
    }
    // 0x004517C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004517CC: beq         $v1, $v0, L_004517EC
    if (ctx->r3 == ctx->r2) {
        // 0x004517D0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_004517EC;
    }
    // 0x004517D0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x004517D4: j           L_004187FC
    // 0x004517D8: nop

    func_004187FC(rdram, ctx);
    return;
    // 0x004517D8: nop

L_004517DC:
    // 0x004517DC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004517E0: addiu       $v0, $v0, 0x617C
    ctx->r2 = ADD32(ctx->r2, 0X617C);
    // 0x004517E4: j           L_004187F8
    // 0x004517E8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_004187F8(rdram, ctx);
    return;
    // 0x004517E8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004517EC:
    // 0x004517EC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004517F0: addiu       $v0, $v0, 0x6164
    ctx->r2 = ADD32(ctx->r2, 0X6164);
    // 0x004517F4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x004517F8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x004517FC: jr          $ra
    // 0x00451800: nop

    return;
    // 0x00451800: nop

;}
RECOMP_FUNC void func_00290C60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00290C60: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00290C64: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x00290C68: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00290C6C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x00290C70: lw          $v1, 0x2C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2C);
    // 0x00290C74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00290C78: bne         $v1, $v0, L_00290CBC
    if (ctx->r3 != ctx->r2) {
        // 0x00290C7C: nop
    
            goto L_00290CBC;
    }
    // 0x00290C7C: nop

    // 0x00290C80: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x00290C84: beq         $a0, $zero, L_00290CBC
    if (ctx->r4 == 0) {
        // 0x00290C88: nop
    
            goto L_00290CBC;
    }
    // 0x00290C88: nop

    // 0x00290C8C: jal         0x0028F910
    // 0x00290C90: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_0028F910(rdram, ctx);
        goto after_0;
    // 0x00290C90: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x00290C94: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x00290C98: beq         $v0, $zero, L_00290CBC
    if (ctx->r2 == 0) {
        // 0x00290C9C: addiu       $a0, $s0, 0x48
        ctx->r4 = ADD32(ctx->r16, 0X48);
            goto L_00290CBC;
    }
    // 0x00290C9C: addiu       $a0, $s0, 0x48
    ctx->r4 = ADD32(ctx->r16, 0X48);
    // 0x00290CA0: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x00290CA4: sh          $zero, 0x10($sp)
    MEM_H(0X10, ctx->r29) = 0;
    // 0x00290CA8: lw          $a2, 0x24($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X24);
    // 0x00290CAC: mult        $v0, $a2
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00290CB0: mflo        $a2
    ctx->r6 = lo;
    // 0x00290CB4: jal         0x00291034
    // 0x00290CB8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_00291034(rdram, ctx);
        goto after_1;
    // 0x00290CB8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_1:
L_00290CBC:
    // 0x00290CBC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x00290CC0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x00290CC4: jr          $ra
    // 0x00290CC8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00290CC8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0021EAE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021EAE8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x0021EAEC: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x0021EAF0: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0021EAF4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0021EAF8: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x0021EAFC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0021EB00: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0021EB04: lw          $v0, 0xD4($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XD4);
    // 0x0021EB08: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
    // 0x0021EB0C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0021EB10: beq         $v0, $zero, L_0021EBA0
    if (ctx->r2 == 0) {
        // 0x0021EB14: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0021EBA0;
    }
    // 0x0021EB14: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0021EB18: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0021EB1C: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0021EB20: addiu       $v0, $v0, 0x5AC4
    ctx->r2 = ADD32(ctx->r2, 0X5AC4);
    // 0x0021EB24: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0021EB28: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0021EB2C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0021EB30: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0021EB34: lw          $a1, 0xA4($s3)
    ctx->r5 = MEM_W(ctx->r19, 0XA4);
    // 0x0021EB38: lw          $a2, 0xB0($s3)
    ctx->r6 = MEM_W(ctx->r19, 0XB0);
    // 0x0021EB3C: jal         0x0020367C
    // 0x0021EB40: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    func_0020367C(rdram, ctx);
        goto after_0;
    // 0x0021EB40: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    after_0:
    // 0x0021EB44: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x0021EB48: beq         $s2, $zero, L_0021EBA4
    if (ctx->r18 == 0) {
        // 0x0021EB4C: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_0021EBA4;
    }
    // 0x0021EB4C: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x0021EB50: jal         0x0021F358
    // 0x0021EB54: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_0021F358(rdram, ctx);
        goto after_1;
    // 0x0021EB54: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_1:
    // 0x0021EB58: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0021EB5C: beq         $s1, $zero, L_0021EB98
    if (ctx->r17 == 0) {
        // 0x0021EB60: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0021EB98;
    }
    // 0x0021EB60: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0021EB64: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x0021EB68: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x0021EB6C: jal         0x002017D4
    // 0x0021EB70: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x0021EB70: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_2:
    // 0x0021EB74: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0021EB78: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0021EB7C: jal         0x0021CDAC
    // 0x0021EB80: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_0021CDAC(rdram, ctx);
        goto after_3;
    // 0x0021EB80: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
    // 0x0021EB84: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0021EB88: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0021EB8C: jal         0x002051F4
    // 0x0021EB90: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002051F4(rdram, ctx);
        goto after_4;
    // 0x0021EB90: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_4:
    // 0x0021EB94: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0021EB98:
    // 0x0021EB98: jal         0x002051F4
    // 0x0021EB9C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_002051F4(rdram, ctx);
        goto after_5;
    // 0x0021EB9C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_5:
L_0021EBA0:
    // 0x0021EBA0: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_0021EBA4:
    // 0x0021EBA4: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x0021EBA8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0021EBAC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0021EBB0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0021EBB4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0021EBB8: jr          $ra
    // 0x0021EBBC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0021EBBC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00238BDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00238BDC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00238BE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00238BE4: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x00238BE8: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x00238BEC: lw          $v1, 0x50($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X50);
    // 0x00238BF0: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x00238BF4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x00238BF8: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x00238BFC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x00238C00: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
    // 0x00238C04: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x00238C08: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x00238C0C: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x00238C10: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x00238C14: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x00238C18: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x00238C1C: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x00238C20: jal         0x00237AFC
    // 0x00238C24: nop

    func_00237AFC(rdram, ctx);
        goto after_0;
    // 0x00238C24: nop

    after_0:
    // 0x00238C28: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x00238C2C: jr          $ra
    // 0x00238C30: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00238C30: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00467A24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00467A24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00467A28: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00467A2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00467A30: jal         0x00275F7C
    // 0x00467A34: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_00275F7C(rdram, ctx);
        goto after_0;
    // 0x00467A34: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x00467A38: lw          $a1, 0x1288($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1288);
    // 0x00467A3C: jal         0x00275D34
    // 0x00467A40: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_00275D34(rdram, ctx);
        goto after_1;
    // 0x00467A40: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_1:
    // 0x00467A44: jal         0x00275F7C
    // 0x00467A48: sw          $zero, 0x1288($s0)
    MEM_W(0X1288, ctx->r16) = 0;
    func_00275F7C(rdram, ctx);
        goto after_2;
    // 0x00467A48: sw          $zero, 0x1288($s0)
    MEM_W(0X1288, ctx->r16) = 0;
    after_2:
    // 0x00467A4C: lw          $a1, 0x128C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X128C);
    // 0x00467A50: jal         0x00275D34
    // 0x00467A54: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_00275D34(rdram, ctx);
        goto after_3;
    // 0x00467A54: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_3:
    // 0x00467A58: sw          $zero, 0x128C($s0)
    MEM_W(0X128C, ctx->r16) = 0;
    // 0x00467A5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00467A60: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00467A64: jr          $ra
    // 0x00467A68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00467A68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00228BB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00228BB0: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    // 0x00228BB4: jr          $ra
    // 0x00228BB8: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    return;
    // 0x00228BB8: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
;}
RECOMP_FUNC void func_0040C6F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040C6F4: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x0040C6F8: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x0040C6FC: sw          $s1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r17;
    // 0x0040C700: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x0040C704: lw          $s1, -0x490($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X490);
    // 0x0040C708: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x0040C70C: sw          $ra, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r31;
    // 0x0040C710: sw          $s0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r16;
    // 0x0040C714: sw          $zero, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = 0;
    // 0x0040C718: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0040C71C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040C720: jal         0x00246108
    // 0x0040C724: addiu       $a1, $s1, 0x140
    ctx->r5 = ADD32(ctx->r17, 0X140);
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x0040C724: addiu       $a1, $s1, 0x140
    ctx->r5 = ADD32(ctx->r17, 0X140);
    after_0:
    // 0x0040C728: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x0040C72C: beq         $a0, $zero, L_0040C748
    if (ctx->r4 == 0) {
        // 0x0040C730: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0040C748;
    }
    // 0x0040C730: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0040C734: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x0040C738: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x0040C73C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0040C740: bnel        $v0, $zero, L_0040C748
    if (ctx->r2 != 0) {
        // 0x0040C744: sw          $a0, 0xA0($sp)
        MEM_W(0XA0, ctx->r29) = ctx->r4;
            goto L_0040C748;
    }
    goto skip_0;
    // 0x0040C744: sw          $a0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r4;
    skip_0:
L_0040C748:
    // 0x0040C748: lw          $v0, 0xA0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XA0);
    // 0x0040C74C: beq         $v0, $zero, L_0040C758
    if (ctx->r2 == 0) {
        // 0x0040C750: nop
    
            goto L_0040C758;
    }
    // 0x0040C750: nop

    // 0x0040C754: lw          $s0, 0x1A8($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X1A8);
L_0040C758:
    // 0x0040C758: beq         $s0, $zero, L_0040C794
    if (ctx->r16 == 0) {
        // 0x0040C75C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0040C794;
    }
    // 0x0040C75C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040C760: lui         $a1, 0x43
    ctx->r5 = S32(0X43 << 16);
    // 0x0040C764: addiu       $a1, $a1, 0x1D7C
    ctx->r5 = ADD32(ctx->r5, 0X1D7C);
    // 0x0040C768: jal         0x00253D68
    // 0x0040C76C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00253D68(rdram, ctx);
        goto after_1;
    // 0x0040C76C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0040C770: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0040C774: jal         0x0024CF58
    // 0x0040C778: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0024CF58(rdram, ctx);
        goto after_2;
    // 0x0040C778: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0040C77C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040C780: lwc1        $f0, 0x8C4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X8C4);
    // 0x0040C784: swc1        $f0, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f0.u32l;
    // 0x0040C788: swc1        $f0, 0x2D8($s0)
    MEM_W(0X2D8, ctx->r16) = ctx->f0.u32l;
    // 0x0040C78C: sw          $zero, 0x50($s1)
    MEM_W(0X50, ctx->r17) = 0;
    // 0x0040C790: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_0040C794:
    // 0x0040C794: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // 0x0040C798: jal         0x00243414
    // 0x0040C79C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_00243414(rdram, ctx);
        goto after_3;
    // 0x0040C79C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_3:
    // 0x0040C7A0: lw          $ra, 0xB0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XB0);
    // 0x0040C7A4: lw          $s1, 0xAC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XAC);
    // 0x0040C7A8: lw          $s0, 0xA8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA8);
    // 0x0040C7AC: jr          $ra
    // 0x0040C7B0: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x0040C7B0: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_00298E10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00298E10: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x00298E14: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x00298E18: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00298E1C: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x00298E20: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x00298E24: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x00298E28: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00298E2C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00298E30: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00298E34: lw          $v0, 0x7A40($at)
    ctx->r2 = MEM_W(ctx->r1, 0X7A40);
    // 0x00298E38: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x00298E3C: addiu       $s0, $s0, 0xE20
    ctx->r16 = ADD32(ctx->r16, 0XE20);
    // 0x00298E40: beq         $v0, $zero, L_00298FC0
    if (ctx->r2 == 0) {
        // 0x00298E44: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_00298FC0;
    }
    // 0x00298E44: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00298E48: jal         0x00299FE4
    // 0x00298E4C: nop

    func_00299FE4(rdram, ctx);
        goto after_0;
    // 0x00298E4C: nop

    after_0:
    // 0x00298E50: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x00298E54: lw          $a1, 0x8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X8);
    // 0x00298E58: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00298E5C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00298E60: sb          $v0, 0x1420($at)
    MEM_B(0X1420, ctx->r1) = ctx->r2;
    // 0x00298E64: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00298E68: addiu       $v0, $v0, 0x1550
    ctx->r2 = ADD32(ctx->r2, 0X1550);
    // 0x00298E6C: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    // 0x00298E70: jal         0x0029A080
    // 0x00298E74: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    func_0029A080(rdram, ctx);
        goto after_1;
    // 0x00298E74: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    after_1:
    // 0x00298E78: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00298E7C: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x00298E80: jal         0x0029B6F0
    // 0x00298E84: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x00298E84: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x00298E88: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00298E8C: jal         0x0029A080
    // 0x00298E90: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0029A080(rdram, ctx);
        goto after_3;
    // 0x00298E90: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x00298E94: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00298E98: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x00298E9C: jal         0x0029B6F0
    // 0x00298EA0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_4;
    // 0x00298EA0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x00298EA4: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x00298EA8: beq         $a0, $zero, L_00298ECC
    if (ctx->r4 == 0) {
        // 0x00298EAC: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_00298ECC;
    }
    // 0x00298EAC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00298EB0: blez        $a0, L_00298ECC
    if (SIGNED(ctx->r4) <= 0) {
        // 0x00298EB4: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00298ECC;
    }
    // 0x00298EB4: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_00298EB8:
    // 0x00298EB8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00298EBC: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x00298EC0: bne         $v0, $zero, L_00298EB8
    if (ctx->r2 != 0) {
        // 0x00298EC4: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00298EB8;
    }
    // 0x00298EC4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00298EC8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
L_00298ECC:
    // 0x00298ECC: andi        $v0, $a1, 0x3
    ctx->r2 = ctx->r5 & 0X3;
    // 0x00298ED0: beq         $v0, $zero, L_00298F30
    if (ctx->r2 == 0) {
        // 0x00298ED4: addiu       $v1, $sp, 0x10
        ctx->r3 = ADD32(ctx->r29, 0X10);
            goto L_00298F30;
    }
    // 0x00298ED4: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
    // 0x00298ED8: addiu       $v0, $a1, 0x20
    ctx->r2 = ADD32(ctx->r5, 0X20);
L_00298EDC:
    // 0x00298EDC: lwl         $a3, 0x0($a1)
    ctx->r7 = do_lwl(rdram, ctx->r7, ctx->r5, 0X0);
    // 0x00298EE0: lwr         $a3, 0x3($a1)
    ctx->r7 = do_lwr(rdram, ctx->r7, ctx->r5, 0X3);
    // 0x00298EE4: lwl         $t0, 0x4($a1)
    ctx->r8 = do_lwl(rdram, ctx->r8, ctx->r5, 0X4);
    // 0x00298EE8: lwr         $t0, 0x7($a1)
    ctx->r8 = do_lwr(rdram, ctx->r8, ctx->r5, 0X7);
    // 0x00298EEC: lwl         $t1, 0x8($a1)
    ctx->r9 = do_lwl(rdram, ctx->r9, ctx->r5, 0X8);
    // 0x00298EF0: lwr         $t1, 0xB($a1)
    ctx->r9 = do_lwr(rdram, ctx->r9, ctx->r5, 0XB);
    // 0x00298EF4: lwl         $t2, 0xC($a1)
    ctx->r10 = do_lwl(rdram, ctx->r10, ctx->r5, 0XC);
    // 0x00298EF8: lwr         $t2, 0xF($a1)
    ctx->r10 = do_lwr(rdram, ctx->r10, ctx->r5, 0XF);
    // 0x00298EFC: swl         $a3, 0x0($v1)
    do_swl(rdram, 0X0, ctx->r3, ctx->r7);
    // 0x00298F00: swr         $a3, 0x3($v1)
    do_swr(rdram, 0X3, ctx->r3, ctx->r7);
    // 0x00298F04: swl         $t0, 0x4($v1)
    do_swl(rdram, 0X4, ctx->r3, ctx->r8);
    // 0x00298F08: swr         $t0, 0x7($v1)
    do_swr(rdram, 0X7, ctx->r3, ctx->r8);
    // 0x00298F0C: swl         $t1, 0x8($v1)
    do_swl(rdram, 0X8, ctx->r3, ctx->r9);
    // 0x00298F10: swr         $t1, 0xB($v1)
    do_swr(rdram, 0XB, ctx->r3, ctx->r9);
    // 0x00298F14: swl         $t2, 0xC($v1)
    do_swl(rdram, 0XC, ctx->r3, ctx->r10);
    // 0x00298F18: swr         $t2, 0xF($v1)
    do_swr(rdram, 0XF, ctx->r3, ctx->r10);
    // 0x00298F1C: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x00298F20: bne         $a1, $v0, L_00298EDC
    if (ctx->r5 != ctx->r2) {
        // 0x00298F24: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00298EDC;
    }
    // 0x00298F24: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00298F28: j           L_00298F60
    // 0x00298F2C: nop

        goto L_00298F60;
    // 0x00298F2C: nop

L_00298F30:
    // 0x00298F30: addiu       $v0, $a1, 0x20
    ctx->r2 = ADD32(ctx->r5, 0X20);
L_00298F34:
    // 0x00298F34: lw          $a3, 0x0($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X0);
    // 0x00298F38: lw          $t0, 0x4($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X4);
    // 0x00298F3C: lw          $t1, 0x8($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X8);
    // 0x00298F40: lw          $t2, 0xC($a1)
    ctx->r10 = MEM_W(ctx->r5, 0XC);
    // 0x00298F44: sw          $a3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r7;
    // 0x00298F48: sw          $t0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r8;
    // 0x00298F4C: sw          $t1, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r9;
    // 0x00298F50: sw          $t2, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r10;
    // 0x00298F54: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x00298F58: bne         $a1, $v0, L_00298F34
    if (ctx->r5 != ctx->r2) {
        // 0x00298F5C: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00298F34;
    }
    // 0x00298F5C: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
L_00298F60:
    // 0x00298F60: lwl         $a3, 0x0($a1)
    ctx->r7 = do_lwl(rdram, ctx->r7, ctx->r5, 0X0);
    // 0x00298F64: lwr         $a3, 0x3($a1)
    ctx->r7 = do_lwr(rdram, ctx->r7, ctx->r5, 0X3);
    // 0x00298F68: lwl         $t0, 0x4($a1)
    ctx->r8 = do_lwl(rdram, ctx->r8, ctx->r5, 0X4);
    // 0x00298F6C: lwr         $t0, 0x7($a1)
    ctx->r8 = do_lwr(rdram, ctx->r8, ctx->r5, 0X7);
    // 0x00298F70: swl         $a3, 0x0($v1)
    do_swl(rdram, 0X0, ctx->r3, ctx->r7);
    // 0x00298F74: swr         $a3, 0x3($v1)
    do_swr(rdram, 0X3, ctx->r3, ctx->r7);
    // 0x00298F78: swl         $t0, 0x4($v1)
    do_swl(rdram, 0X4, ctx->r3, ctx->r8);
    // 0x00298F7C: swr         $t0, 0x7($v1)
    do_swr(rdram, 0X7, ctx->r3, ctx->r8);
    // 0x00298F80: lbu         $v0, 0x12($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X12);
    // 0x00298F84: andi        $v0, $v0, 0xC0
    ctx->r2 = ctx->r2 & 0XC0;
    // 0x00298F88: srl         $s0, $v0, 4
    ctx->r16 = S32(U32(ctx->r2) >> 4);
    // 0x00298F8C: bne         $s0, $zero, L_00298FB4
    if (ctx->r16 != 0) {
        // 0x00298F90: nop
    
            goto L_00298FB4;
    }
    // 0x00298F90: nop

    // 0x00298F94: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00298F98: addiu       $a0, $a0, 0x1650
    ctx->r4 = ADD32(ctx->r4, 0X1650);
    // 0x00298F9C: jal         0x00299E48
    // 0x00298FA0: nop

    func_00299E48(rdram, ctx);
        goto after_5;
    // 0x00298FA0: nop

    after_5:
    // 0x00298FA4: lbu         $v1, 0x36($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X36);
    // 0x00298FA8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x00298FAC: bnel        $v0, $v1, L_00298FB4
    if (ctx->r2 != ctx->r3) {
        // 0x00298FB0: addiu       $s0, $zero, 0x4
        ctx->r16 = ADD32(0, 0X4);
            goto L_00298FB4;
    }
    goto skip_0;
    // 0x00298FB0: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    skip_0:
L_00298FB4:
    // 0x00298FB4: jal         0x0029A050
    // 0x00298FB8: nop

    func_0029A050(rdram, ctx);
        goto after_6;
    // 0x00298FB8: nop

    after_6:
    // 0x00298FBC: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_00298FC0:
    // 0x00298FC0: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x00298FC4: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x00298FC8: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x00298FCC: jr          $ra
    // 0x00298FD0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x00298FD0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_00418530(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00418530: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00418534: addiu       $v0, $zero, 0x63
    ctx->r2 = ADD32(0, 0X63);
    // 0x00418538: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041853C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00418540: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00418544: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00418548: addiu       $s0, $s0, -0x5528
    ctx->r16 = ADD32(ctx->r16, -0X5528);
    // 0x0041854C: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00418550: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00418554: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00418558: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0041855C: lb          $v0, 0x26($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X26);
    // 0x00418560: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00418564: jal         0x0041648C
    // 0x00418568: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x00418568: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x0041856C: sb          $v0, 0x26($s0)
    MEM_B(0X26, ctx->r16) = ctx->r2;
    // 0x00418570: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00418574: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00418578: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041857C: jr          $ra
    // 0x00418580: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00418580: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00294148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00294148: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0029414C: lb          $v1, 0x50($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X50);
    // turok2: reconnected split function: a stray ELF symbol at 0x00294150 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00294150(rdram, ctx);
;}
