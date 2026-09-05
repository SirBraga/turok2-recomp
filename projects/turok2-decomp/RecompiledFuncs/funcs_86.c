#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_00429F20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00429F20: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00429F24: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00429F28: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00429F2C: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00429F30: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00429F34: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x00429F38: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00429F3C: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00429F40: srl         $v0, $s2, 31
    ctx->r2 = S32(U32(ctx->r18) >> 31);
    // 0x00429F44: addu        $v0, $s2, $v0
    ctx->r2 = ADD32(ctx->r18, ctx->r2);
    // 0x00429F48: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x00429F4C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00429F50: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00429F54: sw          $a0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r4;
    // 0x00429F58: blez        $s2, L_00429F7C
    if (SIGNED(ctx->r18) <= 0) {
        // 0x00429F5C: sw          $v0, 0x4($s3)
        MEM_W(0X4, ctx->r19) = ctx->r2;
            goto L_00429F7C;
    }
    // 0x00429F5C: sw          $v0, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r2;
    // 0x00429F60: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
L_00429F64:
    // 0x00429F64: jal         0x00297AE0
    // 0x00429F68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00297AE0(rdram, ctx);
        goto after_0;
    // 0x00429F68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00429F6C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00429F70: slt         $v0, $s1, $s2
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x00429F74: bne         $v0, $zero, L_00429F64
    if (ctx->r2 != 0) {
        // 0x00429F78: addiu       $s0, $s0, 0x40
        ctx->r16 = ADD32(ctx->r16, 0X40);
            goto L_00429F64;
    }
    // 0x00429F78: addiu       $s0, $s0, 0x40
    ctx->r16 = ADD32(ctx->r16, 0X40);
L_00429F7C:
    // 0x00429F7C: jal         0x00206920
    // 0x00429F80: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00206920(rdram, ctx);
        goto after_1;
    // 0x00429F80: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_1:
    // 0x00429F84: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00429F88: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00429F8C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00429F90: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00429F94: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00429F98: jr          $ra
    // 0x00429F9C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00429F9C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0041A8F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041A8F0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0041A8F4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041A8F8: sw          $v0, 0x920($at)
    MEM_W(0X920, ctx->r1) = ctx->r2;
    // 0x0041A8FC: jr          $ra
    // 0x0041A900: nop

    return;
    // 0x0041A900: nop

;}
RECOMP_FUNC void func_00421F30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00421F30: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00421F34: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00421F38: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00421F3C: lw          $v0, 0x201C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X201C);
    // 0x00421F40: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00421F44: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00421F48: lh          $s1, 0x22($v0)
    ctx->r17 = MEM_H(ctx->r2, 0X22);
    // 0x00421F4C: jal         0x004160F0
    // 0x00421F50: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x00421F50: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x00421F54: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x00421F58: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x00421F5C: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00421F60: addiu       $a1, $a1, 0x1414
    ctx->r5 = ADD32(ctx->r5, 0X1414);
    // 0x00421F64: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00421F68: jal         0x0029E3E0
    // 0x00421F6C: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0029E3E0(rdram, ctx);
        goto after_1;
    // 0x00421F6C: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_1:
    // 0x00421F70: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00421F74: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00421F78: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00421F7C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00421F80: jr          $ra
    // 0x00421F84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00421F84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0022601C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0022601C: jr          $ra
    // 0x00226020: nop

    return;
    // 0x00226020: nop

;}
RECOMP_FUNC void func_0026B130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026B130: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x0026B134: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x0026B138: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x0026B13C: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x0026B140: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x0026B144: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x0026B148: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x0026B14C: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0026B150: lwc1        $f1, 0x4($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X4);
    // 0x0026B154: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x0026B158: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0026B15C: nop

    // 0x0026B160: bc1fl       L_0026B168
    if (!c1cs) {
        // 0x0026B164: mov.s       $f1, $f0
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
            goto L_0026B168;
    }
    goto skip_0;
    // 0x0026B164: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    skip_0:
L_0026B168:
    // 0x0026B168: lw          $a1, 0xC($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC);
    // 0x0026B16C: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    // 0x0026B170: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0026B174: nop

    // 0x0026B178: bc1fl       L_0026B180
    if (!c1cs) {
        // 0x0026B17C: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0026B180;
    }
    goto skip_1;
    // 0x0026B17C: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_1:
L_0026B180:
    // 0x0026B180: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x0026B184: lwc1        $f1, 0x0($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X0);
    // 0x0026B188: lwc1        $f2, 0x0($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X0);
    // 0x0026B18C: c.le.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl <= ctx->f2.fl;
    // 0x0026B190: nop

    // 0x0026B194: bc1t        L_0026B1A0
    if (c1cs) {
        // 0x0026B198: addiu       $a2, $sp, 0x10
        ctx->r6 = ADD32(ctx->r29, 0X10);
            goto L_0026B1A0;
    }
    // 0x0026B198: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // 0x0026B19C: mov.s       $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    ctx->f1.fl = ctx->f2.fl;
L_0026B1A0:
    // 0x0026B1A0: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x0026B1A4: c.le.s      $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f4.fl <= ctx->f1.fl;
    // 0x0026B1A8: nop

    // 0x0026B1AC: bc1fl       L_0026B1B4
    if (!c1cs) {
        // 0x0026B1B0: mov.s       $f4, $f1
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.fl = ctx->f1.fl;
            goto L_0026B1B4;
    }
    goto skip_2;
    // 0x0026B1B0: mov.s       $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.fl = ctx->f1.fl;
    skip_2:
L_0026B1B4:
    // 0x0026B1B4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x0026B1B8: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0026B1BC: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x0026B1C0: lwc1        $f1, 0x0($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X0);
    // 0x0026B1C4: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x0026B1C8: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0026B1CC: nop

    // 0x0026B1D0: bc1fl       L_0026B1D8
    if (!c1cs) {
        // 0x0026B1D4: mov.s       $f1, $f0
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
            goto L_0026B1D8;
    }
    goto skip_3;
    // 0x0026B1D4: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    skip_3:
L_0026B1D8:
    // 0x0026B1D8: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x0026B1DC: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x0026B1E0: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0026B1E4: nop

    // 0x0026B1E8: bc1fl       L_0026B1F0
    if (!c1cs) {
        // 0x0026B1EC: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0026B1F0;
    }
    goto skip_4;
    // 0x0026B1EC: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_4:
L_0026B1F0:
    // 0x0026B1F0: swc1        $f0, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f0.u32l;
    // 0x0026B1F4: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0026B1F8: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x0026B1FC: lwc1        $f1, 0x8($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X8);
    // 0x0026B200: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x0026B204: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0026B208: nop

    // 0x0026B20C: bc1fl       L_0026B214
    if (!c1cs) {
        // 0x0026B210: mov.s       $f1, $f0
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
            goto L_0026B214;
    }
    goto skip_5;
    // 0x0026B210: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    skip_5:
L_0026B214:
    // 0x0026B214: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x0026B218: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x0026B21C: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0026B220: nop

    // 0x0026B224: bc1fl       L_0026B22C
    if (!c1cs) {
        // 0x0026B228: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0026B22C;
    }
    goto skip_6;
    // 0x0026B228: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_6:
L_0026B22C:
    // 0x0026B22C: swc1        $f0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f0.u32l;
    // 0x0026B230: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0026B234: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x0026B238: lwc1        $f1, 0x8($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X8);
    // 0x0026B23C: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x0026B240: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0026B244: nop

    // 0x0026B248: bc1fl       L_0026B250
    if (!c1cs) {
        // 0x0026B24C: mov.s       $f1, $f0
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
            goto L_0026B250;
    }
    goto skip_7;
    // 0x0026B24C: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    skip_7:
L_0026B250:
    // 0x0026B250: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x0026B254: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x0026B258: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0026B25C: nop

    // 0x0026B260: bc1fl       L_0026B268
    if (!c1cs) {
        // 0x0026B264: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0026B268;
    }
    goto skip_8;
    // 0x0026B264: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_8:
L_0026B268:
    // 0x0026B268: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026B26C: lwc1        $f2, 0x7FDC($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X7FDC);
    // 0x0026B270: swc1        $f0, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f0.u32l;
    // 0x0026B274: sub.s       $f4, $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x0026B278: lwc1        $f3, 0x18($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x0026B27C: add.s       $f3, $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f2.fl;
    // 0x0026B280: lwc1        $f1, 0x14($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X14);
    // 0x0026B284: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x0026B288: sub.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f2.fl;
    // 0x0026B28C: lwc1        $f0, 0x1C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x0026B290: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0026B294: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0026B298: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x0026B29C: swc1        $f3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x0026B2A0: swc1        $f1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0026B2A4: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
L_0026B2A8:
    // 0x0026B2A8: lw          $s0, 0x10($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X10);
    // 0x0026B2AC: beql        $s0, $zero, L_0026B478
    if (ctx->r16 == 0) {
        // 0x0026B2B0: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_0026B478;
    }
    goto skip_9;
    // 0x0026B2B0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_9:
    // 0x0026B2B4: jal         0x0026AFC0
    // 0x0026B2B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0026AFC0(rdram, ctx);
        goto after_0;
    // 0x0026B2B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0026B2BC: beql        $v0, $zero, L_0026B478
    if (ctx->r2 == 0) {
        // 0x0026B2C0: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_0026B478;
    }
    goto skip_10;
    // 0x0026B2C0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_10:
    // 0x0026B2C4: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x0026B2C8: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x0026B2CC: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x0026B2D0: lwc1        $f1, 0x0($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X0);
    // 0x0026B2D4: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0026B2D8: nop

    // 0x0026B2DC: bc1fl       L_0026B2E4
    if (!c1cs) {
        // 0x0026B2E0: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0026B2E4;
    }
    goto skip_11;
    // 0x0026B2E0: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_11:
L_0026B2E4:
    // 0x0026B2E4: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x0026B2E8: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x0026B2EC: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x0026B2F0: nop

    // 0x0026B2F4: bc1fl       L_0026B2FC
    if (!c1cs) {
        // 0x0026B2F8: mov.s       $f4, $f0
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.fl = ctx->f0.fl;
            goto L_0026B2FC;
    }
    goto skip_12;
    // 0x0026B2F8: mov.s       $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.fl = ctx->f0.fl;
    skip_12:
L_0026B2FC:
    // 0x0026B2FC: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x0026B300: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x0026B304: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x0026B308: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x0026B30C: lwc1        $f1, 0x0($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X0);
    // 0x0026B310: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0026B314: nop

    // 0x0026B318: bc1fl       L_0026B320
    if (!c1cs) {
        // 0x0026B31C: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0026B320;
    }
    goto skip_13;
    // 0x0026B31C: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_13:
L_0026B320:
    // 0x0026B320: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x0026B324: lwc1        $f3, 0x0($v0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r2, 0X0);
    // 0x0026B328: c.le.s      $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f0.fl <= ctx->f3.fl;
    // 0x0026B32C: nop

    // 0x0026B330: bc1fl       L_0026B338
    if (!c1cs) {
        // 0x0026B334: mov.s       $f3, $f0
        CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f3.fl = ctx->f0.fl;
            goto L_0026B338;
    }
    goto skip_14;
    // 0x0026B334: mov.s       $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f3.fl = ctx->f0.fl;
    skip_14:
L_0026B338:
    // 0x0026B338: swc1        $f3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x0026B33C: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x0026B340: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x0026B344: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x0026B348: lwc1        $f1, 0x8($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X8);
    // 0x0026B34C: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0026B350: nop

    // 0x0026B354: bc1fl       L_0026B35C
    if (!c1cs) {
        // 0x0026B358: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0026B35C;
    }
    goto skip_15;
    // 0x0026B358: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_15:
L_0026B35C:
    // 0x0026B35C: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x0026B360: lwc1        $f2, 0x8($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X8);
    // 0x0026B364: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x0026B368: nop

    // 0x0026B36C: bc1fl       L_0026B374
    if (!c1cs) {
        // 0x0026B370: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_0026B374;
    }
    goto skip_16;
    // 0x0026B370: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_16:
L_0026B374:
    // 0x0026B374: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x0026B378: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x0026B37C: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x0026B380: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x0026B384: lwc1        $f1, 0x8($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X8);
    // 0x0026B388: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0026B38C: nop

    // 0x0026B390: bc1fl       L_0026B398
    if (!c1cs) {
        // 0x0026B394: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0026B398;
    }
    goto skip_17;
    // 0x0026B394: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_17:
L_0026B398:
    // 0x0026B398: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x0026B39C: lwc1        $f1, 0x8($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X8);
    // 0x0026B3A0: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0026B3A4: nop

    // 0x0026B3A8: bc1fl       L_0026B3B0
    if (!c1cs) {
        // 0x0026B3AC: mov.s       $f1, $f0
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
            goto L_0026B3B0;
    }
    goto skip_18;
    // 0x0026B3AC: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    skip_18:
L_0026B3B0:
    // 0x0026B3B0: lwc1        $f0, 0x18($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X18);
    // 0x0026B3B4: c.lt.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl < ctx->f0.fl;
    // 0x0026B3B8: nop

    // 0x0026B3BC: bc1f        L_0026B474
    if (!c1cs) {
        // 0x0026B3C0: swc1        $f1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
            goto L_0026B474;
    }
    // 0x0026B3C0: swc1        $f1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0026B3C4: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x0026B3C8: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x0026B3CC: nop

    // 0x0026B3D0: bc1fl       L_0026B478
    if (!c1cs) {
        // 0x0026B3D4: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_0026B478;
    }
    goto skip_19;
    // 0x0026B3D4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_19:
    // 0x0026B3D8: lwc1        $f0, 0x1C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x0026B3DC: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0026B3E0: nop

    // 0x0026B3E4: bc1fl       L_0026B478
    if (!c1cs) {
        // 0x0026B3E8: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_0026B478;
    }
    goto skip_20;
    // 0x0026B3E8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_20:
    // 0x0026B3EC: lwc1        $f0, 0x14($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X14);
    // 0x0026B3F0: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x0026B3F4: nop

    // 0x0026B3F8: bc1fl       L_0026B478
    if (!c1cs) {
        // 0x0026B3FC: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_0026B478;
    }
    goto skip_21;
    // 0x0026B3FC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_21:
    // 0x0026B400: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x0026B404: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0026B408: lwc1        $f1, 0x4($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X4);
    // 0x0026B40C: lwc1        $f2, 0x4($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X4);
    // 0x0026B410: c.le.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl <= ctx->f1.fl;
    // 0x0026B414: nop

    // 0x0026B418: bc1fl       L_0026B420
    if (!c1cs) {
        // 0x0026B41C: mov.s       $f1, $f2
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    ctx->f1.fl = ctx->f2.fl;
            goto L_0026B420;
    }
    goto skip_22;
    // 0x0026B41C: mov.s       $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    ctx->f1.fl = ctx->f2.fl;
    skip_22:
L_0026B420:
    // 0x0026B420: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x0026B424: lwc1        $f0, 0x4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4);
    // 0x0026B428: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0026B42C: nop

    // 0x0026B430: bc1fl       L_0026B438
    if (!c1cs) {
        // 0x0026B434: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0026B438;
    }
    goto skip_23;
    // 0x0026B434: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_23:
L_0026B438:
    // 0x0026B438: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x0026B43C: nop

    // 0x0026B440: bc1t        L_0026B470
    if (c1cs) {
        // 0x0026B444: mov.s       $f0, $f20
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
            goto L_0026B470;
    }
    // 0x0026B444: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
    // 0x0026B448: lwc1        $f1, 0x4($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X4);
    // 0x0026B44C: c.le.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl <= ctx->f1.fl;
    // 0x0026B450: nop

    // 0x0026B454: bc1fl       L_0026B45C
    if (!c1cs) {
        // 0x0026B458: mov.s       $f1, $f2
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    ctx->f1.fl = ctx->f2.fl;
            goto L_0026B45C;
    }
    goto skip_24;
    // 0x0026B458: mov.s       $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    ctx->f1.fl = ctx->f2.fl;
    skip_24:
L_0026B45C:
    // 0x0026B45C: lwc1        $f0, 0x4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4);
    // 0x0026B460: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0026B464: nop

    // 0x0026B468: bc1fl       L_0026B470
    if (!c1cs) {
        // 0x0026B46C: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0026B470;
    }
    goto skip_25;
    // 0x0026B46C: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_25:
L_0026B470:
    // 0x0026B470: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_0026B474:
    // 0x0026B474: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_0026B478:
    // 0x0026B478: slti        $v0, $s2, 0x3
    ctx->r2 = SIGNED(ctx->r18) < 0X3 ? 1 : 0;
    // 0x0026B47C: bne         $v0, $zero, L_0026B2A8
    if (ctx->r2 != 0) {
        // 0x0026B480: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_0026B2A8;
    }
    // 0x0026B480: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x0026B484: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
    // 0x0026B488: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x0026B48C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x0026B490: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x0026B494: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0026B498: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x0026B49C: jr          $ra
    // 0x0026B4A0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x0026B4A0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_0040E2DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040E2DC: jr          $ra
    // 0x0040E2E0: nop

    return;
    // 0x0040E2E0: nop

;}
RECOMP_FUNC void func_00441DCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00441DCC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00441DD0: lw          $v0, -0x6770($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6770);
    // 0x00441DD4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00441DD8: lwc1        $f0, 0x5B0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5B0);
    // 0x00441DDC: swc1        $f0, 0xAAC($v0)
    MEM_W(0XAAC, ctx->r2) = ctx->f0.u32l;
    // 0x00441DE0: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x00441DE4: lw          $v1, -0x14C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X14C);
    // 0x00441DE8: beq         $v1, $zero, L_00441E38
    if (ctx->r3 == 0) {
        // 0x00441DEC: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_00441E38;
    }
    // 0x00441DEC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00441DF0: lui         $a1, 0x2000
    ctx->r5 = S32(0X2000 << 16);
    // 0x00441DF4: lui         $a0, 0x4000
    ctx->r4 = S32(0X4000 << 16);
L_00441DF8:
    // 0x00441DF8: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x00441DFC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00441E00: bne         $v0, $a2, L_00441E2C
    if (ctx->r2 != ctx->r6) {
        // 0x00441E04: nop
    
            goto L_00441E2C;
    }
    // 0x00441E04: nop

    // 0x00441E08: lw          $v0, 0x144($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X144);
    // 0x00441E0C: beq         $v0, $zero, L_00441E2C
    if (ctx->r2 == 0) {
        // 0x00441E10: nop
    
            goto L_00441E2C;
    }
    // 0x00441E10: nop

    // 0x00441E14: lw          $v0, 0x140($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X140);
    // 0x00441E18: sw          $zero, 0x1C8($v1)
    MEM_W(0X1C8, ctx->r3) = 0;
    // 0x00441E1C: sw          $zero, 0x1C0($v1)
    MEM_W(0X1C0, ctx->r3) = 0;
    // 0x00441E20: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
    // 0x00441E24: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x00441E28: sw          $v0, 0x140($v1)
    MEM_W(0X140, ctx->r3) = ctx->r2;
L_00441E2C:
    // 0x00441E2C: lw          $v1, 0x28C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X28C);
    // 0x00441E30: bne         $v1, $zero, L_00441DF8
    if (ctx->r3 != 0) {
        // 0x00441E34: nop
    
            goto L_00441DF8;
    }
    // 0x00441E34: nop

L_00441E38:
    // 0x00441E38: jr          $ra
    // 0x00441E3C: nop

    return;
    // 0x00441E3C: nop

;}
RECOMP_FUNC void func_00231E94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00231E94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00231E98: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00231E9C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00231EA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00231EA4: lbu         $v0, 0x1B5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1B5);
    // 0x00231EA8: beq         $v0, $zero, L_00231EC8
    if (ctx->r2 == 0) {
        // 0x00231EAC: nop
    
            goto L_00231EC8;
    }
    // 0x00231EAC: nop

    // 0x00231EB0: jal         0x002327F4
    // 0x00231EB4: nop

    func_002327F4(rdram, ctx);
        goto after_0;
    // 0x00231EB4: nop

    after_0:
    // 0x00231EB8: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x00231EBC: addiu       $a0, $a0, 0x2B8
    ctx->r4 = ADD32(ctx->r4, 0X2B8);
    // 0x00231EC0: jal         0x00234E48
    // 0x00231EC4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00234E48(rdram, ctx);
        goto after_1;
    // 0x00231EC4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
L_00231EC8:
    // 0x00231EC8: lw          $a1, 0x118($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X118);
    // 0x00231ECC: beq         $a1, $zero, L_00231EE8
    if (ctx->r5 == 0) {
        // 0x00231ED0: nop
    
            goto L_00231EE8;
    }
    // 0x00231ED0: nop

    // 0x00231ED4: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x00231ED8: addiu       $a0, $a0, -0xCC
    ctx->r4 = ADD32(ctx->r4, -0XCC);
    // 0x00231EDC: jal         0x00228B4C
    // 0x00231EE0: nop

    func_00228B4C(rdram, ctx);
        goto after_2;
    // 0x00231EE0: nop

    after_2:
    // 0x00231EE4: sw          $zero, 0x118($s0)
    MEM_W(0X118, ctx->r16) = 0;
L_00231EE8:
    // 0x00231EE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00231EEC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00231EF0: jr          $ra
    // 0x00231EF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00231EF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00246440(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00246440: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00246444: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00246448: lwc1        $f0, 0x50($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X50);
    // 0x0024644C: mtc1        $a1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r5;
    // 0x00246450: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00246454: swc1        $f0, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f0.u32l;
    // 0x00246458: jal         0x00210EF0
    // 0x0024645C: addiu       $a0, $a0, 0x50
    ctx->r4 = ADD32(ctx->r4, 0X50);
    func_00210EF0(rdram, ctx);
        goto after_0;
    // 0x0024645C: addiu       $a0, $a0, 0x50
    ctx->r4 = ADD32(ctx->r4, 0X50);
    after_0:
    // 0x00246460: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00246464: jr          $ra
    // 0x00246468: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00246468: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002964D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002964D0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x002964D4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x002964D8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x002964DC: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x002964E0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x002964E4: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x002964E8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x002964EC: lw          $s1, 0x50($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X50);
    // 0x002964F0: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
    // 0x002964F4: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x002964F8: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x002964FC: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x00296500: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x00296504: beq         $s0, $zero, L_0029666C
    if (ctx->r16 == 0) {
        // 0x00296508: addu        $s3, $a1, $zero
        ctx->r19 = ADD32(ctx->r5, 0);
            goto L_0029666C;
    }
    // 0x00296508: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x0029650C: lw          $v0, 0x1C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1C);
    // 0x00296510: beq         $v0, $zero, L_0029656C
    if (ctx->r2 == 0) {
        // 0x00296514: addiu       $a1, $sp, 0x18
        ctx->r5 = ADD32(ctx->r29, 0X18);
            goto L_0029656C;
    }
    // 0x00296514: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x00296518: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x0029651C: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00296520: jalr        $v0
    // 0x00296524: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x00296524: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00296528: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0029652C: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x00296530: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00296534: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00296538: lh          $v0, 0x18($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X18);
    // 0x0029653C: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x00296540: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00296544: lui         $v1, 0xA00
    ctx->r3 = S32(0XA00 << 16);
    // 0x00296548: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0029654C: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00296550: sll         $v0, $s0, 1
    ctx->r2 = S32(ctx->r16 << 1);
    // 0x00296554: lhu         $v1, 0x0($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X0);
    // 0x00296558: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x0029655C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x00296560: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00296564: j           L_0029666C
    // 0x00296568: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
        goto L_0029666C;
    // 0x00296568: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
L_0029656C:
    // 0x0029656C: lwc1        $f0, 0x18($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X18);
    // 0x00296570: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00296574: lwc1        $f1, -0x5980($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X5980);
    // 0x00296578: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0029657C: nop

    // 0x00296580: bc1tl       L_00296588
    if (c1cs) {
        // 0x00296584: swc1        $f1, 0x18($s2)
        MEM_W(0X18, ctx->r18) = ctx->f_odd[(1 - 1) * 2];
            goto L_00296588;
    }
    goto skip_0;
    // 0x00296584: swc1        $f1, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->f_odd[(1 - 1) * 2];
    skip_0:
L_00296588:
    // 0x00296588: lwc1        $f0, 0x18($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X18);
    // 0x0029658C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00296590: lwc1        $f20, -0x597C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X597C);
    // 0x00296594: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x00296598: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0029659C: mfc1        $v0, $f3
    ctx->r2 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x002965A0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002965A4: lwc1        $f0, -0x5978($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5978);
    // 0x002965A8: mtc1        $v0, $f2
    ctx->f2.u32l = ctx->r2;
    // 0x002965AC: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x002965B0: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x002965B4: mtc1        $s0, $f0
    ctx->f0.u32l = ctx->r16;
    // 0x002965B8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002965BC: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x002965C0: lwc1        $f1, 0x20($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X20);
    // 0x002965C4: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x002965C8: trunc.w.s   $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f1.fl);
    // 0x002965CC: mfc1        $a2, $f3
    ctx->r6 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x002965D0: mtc1        $a2, $f0
    ctx->f0.u32l = ctx->r6;
    // 0x002965D4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002965D8: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x002965DC: swc1        $f2, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->f2.u32l;
    // 0x002965E0: swc1        $f1, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->f_odd[(1 - 1) * 2];
    // 0x002965E4: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x002965E8: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x002965EC: jalr        $v0
    // 0x002965F0: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x002965F0: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x002965F4: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x002965F8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002965FC: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x00296600: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x00296604: lhu         $v0, 0x18($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X18);
    // 0x00296608: lwc1        $f0, 0x18($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X18);
    // 0x0029660C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00296610: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00296614: sll         $v0, $s0, 1
    ctx->r2 = S32(ctx->r16 << 1);
    // 0x00296618: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x0029661C: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
    // 0x00296620: lhu         $v1, 0x0($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X0);
    // 0x00296624: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x00296628: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x0029662C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00296630: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    // 0x00296634: lbu         $a0, 0x27($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X27);
    // 0x00296638: lui         $v0, 0x500
    ctx->r2 = S32(0X500 << 16);
    // 0x0029663C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x00296640: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00296644: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00296648: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
    // 0x0029664C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00296650: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x00296654: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    // 0x00296658: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x0029665C: jal         0x0029BF80
    // 0x00296660: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    func_0029BF80(rdram, ctx);
        goto after_2;
    // 0x00296660: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    after_2:
    // 0x00296664: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x00296668: sw          $zero, 0x24($s2)
    MEM_W(0X24, ctx->r18) = 0;
L_0029666C:
    // 0x0029666C: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x00296670: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x00296674: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x00296678: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0029667C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00296680: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00296684: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x00296688: jr          $ra
    // 0x0029668C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x0029668C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00297D4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00297D4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
;}
RECOMP_FUNC void func_0040EBE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040EBE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0040EBE8: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x0040EBEC: addiu       $v0, $v0, 0x2340
    ctx->r2 = ADD32(ctx->r2, 0X2340);
    // 0x0040EBF0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0040EBF4: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x0040EBF8: sw          $v0, 0x4F8($a0)
    MEM_W(0X4F8, ctx->r4) = ctx->r2;
    // 0x0040EBFC: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x0040EC00: jal         0x0040EC14
    // 0x0040EC04: nop

    func_0040EC14(rdram, ctx);
        goto after_0;
    // 0x0040EC04: nop

    after_0:
    // 0x0040EC08: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0040EC0C: jr          $ra
    // 0x0040EC10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040EC10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00405C68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00405C68: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00405C6C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00405C70: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00405C74: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x00405C78: addiu       $s1, $s1, -0x624
    ctx->r17 = ADD32(ctx->r17, -0X624);
    // 0x00405C7C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00405C80: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00405C84: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00405C88: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00405C8C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x00405C90: bne         $v0, $v1, L_00405CA8
    if (ctx->r2 != ctx->r3) {
        // 0x00405C94: addu        $s3, $a0, $zero
        ctx->r19 = ADD32(ctx->r4, 0);
            goto L_00405CA8;
    }
    // 0x00405C94: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00405C98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00405C9C: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
    // 0x00405CA0: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
    // 0x00405CA4: sw          $v1, -0x4($s1)
    MEM_W(-0X4, ctx->r17) = ctx->r3;
L_00405CA8:
    // 0x00405CA8: lw          $v0, -0x3D4($s1)
    ctx->r2 = MEM_W(ctx->r17, -0X3D4);
    // 0x00405CAC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x00405CB0: bne         $v0, $a0, L_00405CC8
    if (ctx->r2 != ctx->r4) {
        // 0x00405CB4: addiu       $s2, $s1, -0x3D4
        ctx->r18 = ADD32(ctx->r17, -0X3D4);
            goto L_00405CC8;
    }
    // 0x00405CB4: addiu       $s2, $s1, -0x3D4
    ctx->r18 = ADD32(ctx->r17, -0X3D4);
    // 0x00405CB8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00405CBC: lwc1        $f0, 0x488($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X488);
    // 0x00405CC0: swc1        $f0, 0x1FC($s3)
    MEM_W(0X1FC, ctx->r19) = ctx->f0.u32l;
    // 0x00405CC4: lw          $v0, -0x3D4($s1)
    ctx->r2 = MEM_W(ctx->r17, -0X3D4);
L_00405CC8:
    // 0x00405CC8: bne         $v0, $v1, L_00405CDC
    if (ctx->r2 != ctx->r3) {
        // 0x00405CCC: nop
    
            goto L_00405CDC;
    }
    // 0x00405CCC: nop

    // 0x00405CD0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00405CD4: lwc1        $f0, 0x48C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X48C);
    // 0x00405CD8: swc1        $f0, 0x1FC($s3)
    MEM_W(0X1FC, ctx->r19) = ctx->f0.u32l;
L_00405CDC:
    // 0x00405CDC: lw          $v1, -0x3D4($s1)
    ctx->r3 = MEM_W(ctx->r17, -0X3D4);
    // 0x00405CE0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00405CE4: bne         $v1, $v0, L_00405CF8
    if (ctx->r3 != ctx->r2) {
        // 0x00405CE8: nop
    
            goto L_00405CF8;
    }
    // 0x00405CE8: nop

    // 0x00405CEC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00405CF0: lwc1        $f0, 0x490($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X490);
    // 0x00405CF4: swc1        $f0, 0x1FC($s3)
    MEM_W(0X1FC, ctx->r19) = ctx->f0.u32l;
L_00405CF8:
    // 0x00405CF8: lw          $v0, -0x3D4($s1)
    ctx->r2 = MEM_W(ctx->r17, -0X3D4);
    // 0x00405CFC: bne         $v0, $a0, L_00405D50
    if (ctx->r2 != ctx->r4) {
        // 0x00405D00: nop
    
            goto L_00405D50;
    }
    // 0x00405D00: nop

    // 0x00405D04: lw          $v0, 0x18($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X18);
    // 0x00405D08: bne         $v0, $zero, L_00405D50
    if (ctx->r2 != 0) {
        // 0x00405D0C: addiu       $a0, $s1, -0x284
        ctx->r4 = ADD32(ctx->r17, -0X284);
            goto L_00405D50;
    }
    // 0x00405D0C: addiu       $a0, $s1, -0x284
    ctx->r4 = ADD32(ctx->r17, -0X284);
    // 0x00405D10: lui         $s0, 0x43
    ctx->r16 = S32(0X43 << 16);
    // 0x00405D14: addiu       $s0, $s0, 0x1B54
    ctx->r16 = ADD32(ctx->r16, 0X1B54);
    // 0x00405D18: jal         0x00236314
    // 0x00405D1C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00236314(rdram, ctx);
        goto after_0;
    // 0x00405D1C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00405D20: addiu       $a0, $s1, -0x220
    ctx->r4 = ADD32(ctx->r17, -0X220);
    // 0x00405D24: jal         0x00236314
    // 0x00405D28: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00236314(rdram, ctx);
        goto after_1;
    // 0x00405D28: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00405D2C: addiu       $a0, $s1, -0x158
    ctx->r4 = ADD32(ctx->r17, -0X158);
    // 0x00405D30: jal         0x00236314
    // 0x00405D34: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00236314(rdram, ctx);
        goto after_2;
    // 0x00405D34: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00405D38: addiu       $a0, $s1, -0x1BC
    ctx->r4 = ADD32(ctx->r17, -0X1BC);
    // 0x00405D3C: jal         0x00236314
    // 0x00405D40: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00236314(rdram, ctx);
        goto after_3;
    // 0x00405D40: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x00405D44: lw          $v0, 0x18($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X18);
    // 0x00405D48: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00405D4C: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
L_00405D50:
    // 0x00405D50: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x00405D54: addiu       $s1, $s1, -0x9F8
    ctx->r17 = ADD32(ctx->r17, -0X9F8);
    // 0x00405D58: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x00405D5C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00405D60: bne         $v1, $v0, L_00405D9C
    if (ctx->r3 != ctx->r2) {
        // 0x00405D64: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00405D9C;
    }
    // 0x00405D64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00405D68: lw          $v1, 0x18($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X18);
    // 0x00405D6C: bne         $v1, $v0, L_00405D9C
    if (ctx->r3 != ctx->r2) {
        // 0x00405D70: addiu       $a0, $s1, 0x24
        ctx->r4 = ADD32(ctx->r17, 0X24);
            goto L_00405D9C;
    }
    // 0x00405D70: addiu       $a0, $s1, 0x24
    ctx->r4 = ADD32(ctx->r17, 0X24);
    // 0x00405D74: lui         $s0, 0x43
    ctx->r16 = S32(0X43 << 16);
    // 0x00405D78: addiu       $s0, $s0, 0x1B54
    ctx->r16 = ADD32(ctx->r16, 0X1B54);
    // 0x00405D7C: jal         0x00236314
    // 0x00405D80: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00236314(rdram, ctx);
        goto after_4;
    // 0x00405D80: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x00405D84: addiu       $a0, $s1, 0xEC
    ctx->r4 = ADD32(ctx->r17, 0XEC);
    // 0x00405D88: jal         0x00236314
    // 0x00405D8C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00236314(rdram, ctx);
        goto after_5;
    // 0x00405D8C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x00405D90: lw          $v0, 0x18($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X18);
    // 0x00405D94: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00405D98: sw          $v0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r2;
L_00405D9C:
    // 0x00405D9C: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x00405DA0: addiu       $s0, $s0, -0x9F8
    ctx->r16 = ADD32(ctx->r16, -0X9F8);
    // 0x00405DA4: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x00405DA8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00405DAC: bne         $v1, $v0, L_00405DDC
    if (ctx->r3 != ctx->r2) {
        // 0x00405DB0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00405DDC;
    }
    // 0x00405DB0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00405DB4: lw          $v1, 0x18($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X18);
    // 0x00405DB8: bne         $v1, $v0, L_00405DDC
    if (ctx->r3 != ctx->r2) {
        // 0x00405DBC: nop
    
            goto L_00405DDC;
    }
    // 0x00405DBC: nop

    // 0x00405DC0: lui         $a1, 0x43
    ctx->r5 = S32(0X43 << 16);
    // 0x00405DC4: addiu       $a1, $a1, 0x1B54
    ctx->r5 = ADD32(ctx->r5, 0X1B54);
    // 0x00405DC8: jal         0x00236314
    // 0x00405DCC: addiu       $a0, $s0, 0x88
    ctx->r4 = ADD32(ctx->r16, 0X88);
    func_00236314(rdram, ctx);
        goto after_6;
    // 0x00405DCC: addiu       $a0, $s0, 0x88
    ctx->r4 = ADD32(ctx->r16, 0X88);
    after_6:
    // 0x00405DD0: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x00405DD4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00405DD8: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
L_00405DDC:
    // 0x00405DDC: lw          $v0, 0xD4($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XD4);
    // 0x00405DE0: ori         $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 | 0X2000;
    // 0x00405DE4: sw          $v0, 0xD4($s3)
    MEM_W(0XD4, ctx->r19) = ctx->r2;
    // 0x00405DE8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00405DEC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00405DF0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00405DF4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00405DF8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00405DFC: jr          $ra
    // 0x00405E00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00405E00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00462E38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00462E38: beq         $a1, $v0, L_00462E84
    if (ctx->r5 == ctx->r2) {
        // 0x00462E3C: addiu       $s1, $s2, 0x60
        ctx->r17 = ADD32(ctx->r18, 0X60);
            goto L_00462E84;
    }
    // 0x00462E3C: addiu       $s1, $s2, 0x60
    ctx->r17 = ADD32(ctx->r18, 0X60);
    // 0x00462E40: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00462E44: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00462E48: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00462E4C: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00462E50: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00462E54: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x00462E58: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00462E5C: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00462E60: srl         $v0, $s2, 31
    ctx->r2 = S32(U32(ctx->r18) >> 31);
    // 0x00462E64: addu        $v0, $s2, $v0
    ctx->r2 = ADD32(ctx->r18, ctx->r2);
    // 0x00462E68: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x00462E6C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00462E70: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00462E74: sw          $a0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r4;
    // 0x00462E78: blez        $s2, L_00462E9C
    if (SIGNED(ctx->r18) <= 0) {
        // 0x00462E7C: sw          $v0, 0x4($s3)
        MEM_W(0X4, ctx->r19) = ctx->r2;
            goto L_00462E9C;
    }
    // 0x00462E7C: sw          $v0, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r2;
    // 0x00462E80: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
L_00462E84:
    // 0x00462E84: jal         0x00297AE0
    // 0x00462E88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00297AE0(rdram, ctx);
        goto after_0;
    // 0x00462E88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00462E8C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00462E90: slt         $v0, $s1, $s2
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x00462E94: bne         $v0, $zero, L_00462E84
    if (ctx->r2 != 0) {
        // 0x00462E98: addiu       $s0, $s0, 0x40
        ctx->r16 = ADD32(ctx->r16, 0X40);
            goto L_00462E84;
    }
    // 0x00462E98: addiu       $s0, $s0, 0x40
    ctx->r16 = ADD32(ctx->r16, 0X40);
L_00462E9C:
    // 0x00462E9C: jal         0x00206920
    // 0x00462EA0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00206920(rdram, ctx);
        goto after_1;
    // 0x00462EA0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_1:
    // 0x00462EA4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00462EA8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00462EAC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00462EB0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00462EB4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00462EB8: jr          $ra
    // 0x00462EBC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00462EBC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00426A20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00426A20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00426A24: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00426A28: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x00426A2C: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x00426A30: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00426A34: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00426A38: lw          $v1, 0xC60($at)
    ctx->r3 = MEM_W(ctx->r1, 0XC60);
    // 0x00426A3C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00426A40: bne         $v1, $v0, L_00426A80
    if (ctx->r3 != ctx->r2) {
        // 0x00426A44: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_00426A80;
    }
    // 0x00426A44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00426A48: sll         $v0, $a0, 7
    ctx->r2 = S32(ctx->r4 << 7);
    // 0x00426A4C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x00426A50: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00426A54: lw          $v1, 0x2224($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2224);
    // 0x00426A58: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00426A5C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00426A60: sll         $v1, $a1, 5
    ctx->r3 = S32(ctx->r5 << 5);
    // 0x00426A64: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00426A68: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x00426A6C: jal         0x00426E6C
    // 0x00426A70: nop

    func_00426E6C(rdram, ctx);
        goto after_0;
    // 0x00426A70: nop

    after_0:
    // 0x00426A74: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x00426A78: j           L_00426A84
    // 0x00426A7C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_00426A84;
    // 0x00426A7C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00426A80:
    // 0x00426A80: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
L_00426A84:
    // 0x00426A84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00426A88: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00426A8C: jr          $ra
    // 0x00426A90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00426A90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00266848(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00266848: lw          $v0, 0x10C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10C);
    // 0x0026684C: jr          $ra
    // 0x00266850: nop

    return;
    // 0x00266850: nop

;}
RECOMP_FUNC void func_00454350(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00454350: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00454354: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x00454358: xori        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 ^ 0X10;
    // 0x0045435C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00454360: sw          $v0, -0x5528($at)
    MEM_W(-0X5528, ctx->r1) = ctx->r2;
    // 0x00454364: jr          $ra
    // 0x00454368: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00454368: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0041B404(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B404: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B408: lw          $v0, -0x5524($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5524);
    // 0x0041B40C: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x0041B410: beq         $v0, $zero, L_0041B424
    if (ctx->r2 == 0) {
        // 0x0041B414: lui         $v1, 0x100
        ctx->r3 = S32(0X100 << 16);
            goto L_0041B424;
    }
    // 0x0041B414: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x0041B418: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041B41C: j           L_0041B434
    // 0x0041B420: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
        goto L_0041B434;
    // 0x0041B420: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
L_0041B424:
    // 0x0041B424: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x0041B428: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041B42C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0041B430: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
L_0041B434:
    // 0x0041B434: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0041B438: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B43C: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0041B440: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x0041B444: beq         $v0, $zero, L_0041B45C
    if (ctx->r2 == 0) {
        // 0x0041B448: nop
    
            goto L_0041B45C;
    }
    // 0x0041B448: nop

    // 0x0041B44C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B450: addiu       $v0, $v0, 0x588C
    ctx->r2 = ADD32(ctx->r2, 0X588C);
    // 0x0041B454: j           L_0041B468
    // 0x0041B458: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041B468;
    // 0x0041B458: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B45C:
    // 0x0041B45C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B460: addiu       $v0, $v0, 0x58A8
    ctx->r2 = ADD32(ctx->r2, 0X58A8);
    // 0x0041B464: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B468:
    // 0x0041B468: jr          $ra
    // 0x0041B46C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B46C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00441FF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_00289A9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00289A9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00289AA0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00289AA4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00289AA8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00289AAC: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x00289AB0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00289AB4: lwc1        $f0, 0x2034($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x00289AB8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00289ABC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00289AC0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00289AC4: sw          $zero, 0x6D70($at)
    MEM_W(0X6D70, ctx->r1) = 0;
    // 0x00289AC8: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00289ACC: sw          $zero, 0x6CA0($at)
    MEM_W(0X6CA0, ctx->r1) = 0;
    // 0x00289AD0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00289AD4: swc1        $f0, -0xEE0($at)
    MEM_W(-0XEE0, ctx->r1) = ctx->f0.u32l;
    // 0x00289AD8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00289ADC: sw          $zero, -0x5300($at)
    MEM_W(-0X5300, ctx->r1) = 0;
    // 0x00289AE0: jal         0x002532A8
    // 0x00289AE4: nop

    func_002532A8(rdram, ctx);
        goto after_0;
    // 0x00289AE4: nop

    after_0:
    // 0x00289AE8: beq         $v0, $zero, L_00289B0C
    if (ctx->r2 == 0) {
        // 0x00289AEC: nop
    
            goto L_00289B0C;
    }
    // 0x00289AEC: nop

    // 0x00289AF0: lw          $v0, 0x9F0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9F0);
    // 0x00289AF4: beq         $v0, $zero, L_00289B0C
    if (ctx->r2 == 0) {
        // 0x00289AF8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00289B0C;
    }
    // 0x00289AF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00289AFC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00289B00: sw          $v0, 0x6D74($at)
    MEM_W(0X6D74, ctx->r1) = ctx->r2;
    // 0x00289B04: j           L_00289B14
    // 0x00289B08: nop

        goto L_00289B14;
    // 0x00289B08: nop

L_00289B0C:
    // 0x00289B0C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00289B10: sw          $zero, 0x6D74($at)
    MEM_W(0X6D74, ctx->r1) = 0;
L_00289B14:
    // 0x00289B14: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00289B18: lw          $v0, 0x6D74($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D74);
    // 0x00289B1C: beq         $v0, $zero, L_00289B48
    if (ctx->r2 == 0) {
        // 0x00289B20: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00289B48;
    }
    // 0x00289B20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00289B24: jal         0x00412438
    // 0x00289B28: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    func_00412438(rdram, ctx);
        goto after_1;
    // 0x00289B28: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    after_1:
    // 0x00289B2C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00289B30: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00289B34: nor         $a1, $zero, $v0
    ctx->r5 = ~(0 | ctx->r2);
    // 0x00289B38: jal         0x0042C700
    // 0x00289B3C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_0042C700(rdram, ctx);
        goto after_2;
    // 0x00289B3C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x00289B40: j           L_00289B50
    // 0x00289B44: nop

        goto L_00289B50;
    // 0x00289B44: nop

L_00289B48:
    // 0x00289B48: jal         0x00288DD0
    // 0x00289B4C: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    func_00288DD0(rdram, ctx);
        goto after_3;
    // 0x00289B4C: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    after_3:
L_00289B50:
    // 0x00289B50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00289B54: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00289B58: jr          $ra
    // 0x00289B5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00289B5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002425A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002425A4: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x002425A8: sdc1        $f20, 0xB8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XB8, ctx->r29);
    // 0x002425AC: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x002425B0: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x002425B4: sdc1        $f21, 0xC0($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0XC0, ctx->r29);
    // 0x002425B8: mtc1        $a2, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r6;
    // 0x002425BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x002425C0: sw          $ra, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r31;
    // 0x002425C4: jal         0x00241960
    // 0x002425C8: sw          $s0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r16;
    entry_00241960(rdram, ctx);
        goto after_0;
    // 0x002425C8: sw          $s0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r16;
    after_0:
    // 0x002425CC: addiu       $s0, $sp, 0x70
    ctx->r16 = ADD32(ctx->r29, 0X70);
    // 0x002425D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002425D4: jal         0x0023C9CC
    // 0x002425D8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_0023C9CC(rdram, ctx);
        goto after_1;
    // 0x002425D8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_1:
    // 0x002425DC: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x002425E0: mfc1        $a2, $f21
    ctx->r6 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x002425E4: jal         0x0023C8A0
    // 0x002425E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0023C8A0(rdram, ctx);
        goto after_2;
    // 0x002425E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x002425EC: lw          $ra, 0xB4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XB4);
    // 0x002425F0: lw          $s0, 0xB0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XB0);
    // 0x002425F4: ldc1        $f21, 0xC0($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0XC0);
    // 0x002425F8: ldc1        $f20, 0xB8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XB8);
    // 0x002425FC: jr          $ra
    // 0x00242600: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    return;
    // 0x00242600: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
RECOMP_FUNC void func_00454118(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00454118: jr          $ra
    // 0x0045411C: addiu       $v0, $zero, 0x1DB1
    ctx->r2 = ADD32(0, 0X1DB1);
    return;
    // 0x0045411C: addiu       $v0, $zero, 0x1DB1
    ctx->r2 = ADD32(0, 0X1DB1);
;}
RECOMP_FUNC void func_004220F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004220F0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004220F4: lw          $v0, 0x9B8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9B8);
    // 0x004220F8: beq         $v0, $zero, L_00422110
    if (ctx->r2 == 0) {
        // 0x004220FC: nop
    
            goto L_00422110;
    }
    // 0x004220FC: nop

    // 0x00422100: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422104: addiu       $v0, $v0, 0x4B84
    ctx->r2 = ADD32(ctx->r2, 0X4B84);
    // 0x00422108: j           L_0042211C
    // 0x0042210C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0042211C;
    // 0x0042210C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422110:
    // 0x00422110: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422114: addiu       $v0, $v0, 0x4B8C
    ctx->r2 = ADD32(ctx->r2, 0X4B8C);
    // 0x00422118: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0042211C:
    // 0x0042211C: jr          $ra
    // 0x00422120: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00422120: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_004301C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004301C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004301CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004301D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x004301D4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004301D8: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    // 0x004301DC: addu        $v1, $s0, $zero
    ctx->r3 = ADD32(ctx->r16, 0);
    // 0x004301E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x004301E4: sb          $a1, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r5;
    // 0x004301E8: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x004301EC: sw          $zero, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = 0;
    // 0x004301F0: sw          $zero, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = 0;
    // 0x004301F4: sw          $zero, 0x220($s0)
    MEM_W(0X220, ctx->r16) = 0;
    // 0x004301F8: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x004301FC: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x00430200: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x00430204: sb          $zero, 0xC4($s0)
    MEM_B(0XC4, ctx->r16) = 0;
    // 0x00430208: sb          $zero, 0xC5($s0)
    MEM_B(0XC5, ctx->r16) = 0;
    // 0x0043020C: sb          $zero, 0xC6($s0)
    MEM_B(0XC6, ctx->r16) = 0;
    // 0x00430210: sb          $zero, 0xC7($s0)
    MEM_B(0XC7, ctx->r16) = 0;
    // 0x00430214: sw          $zero, 0x14($s0)
    MEM_W(0X14, ctx->r16) = 0;
    // 0x00430218: sw          $zero, 0x18($s0)
    MEM_W(0X18, ctx->r16) = 0;
    // 0x0043021C: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
    // 0x00430220: sw          $zero, 0x20($s0)
    MEM_W(0X20, ctx->r16) = 0;
    // 0x00430224: sw          $zero, 0x24($s0)
    MEM_W(0X24, ctx->r16) = 0;
    // 0x00430228: sw          $zero, 0x28($s0)
    MEM_W(0X28, ctx->r16) = 0;
L_0043022C:
    // 0x0043022C: sb          $zero, 0x2C($v1)
    MEM_B(0X2C, ctx->r3) = 0;
    // 0x00430230: sb          $zero, 0x2D($v1)
    MEM_B(0X2D, ctx->r3) = 0;
    // 0x00430234: sb          $a2, 0x2E($v1)
    MEM_B(0X2E, ctx->r3) = ctx->r6;
    // 0x00430238: sb          $zero, 0x2F($v1)
    MEM_B(0X2F, ctx->r3) = 0;
    // 0x0043023C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00430240: slti        $v0, $a0, 0x20
    ctx->r2 = SIGNED(ctx->r4) < 0X20 ? 1 : 0;
    // 0x00430244: bne         $v0, $zero, L_0043022C
    if (ctx->r2 != 0) {
        // 0x00430248: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_0043022C;
    }
    // 0x00430248: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x0043024C: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // turok2: reconnected split function: a stray ELF symbol at 0x00430250 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00430250(rdram, ctx);
;}
RECOMP_FUNC void func_002812A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002812A4: jr          $ra
    // 0x002812A8: nop

    return;
    // 0x002812A8: nop

;}
RECOMP_FUNC void func_00289D94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00289D94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00289D98: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00289D9C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00289DA0: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x00289DA4: lw          $v0, 0x3FF0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X3FF0);
    // 0x00289DA8: beq         $v0, $zero, L_00289DF0
    if (ctx->r2 == 0) {
        // 0x00289DAC: nop
    
            goto L_00289DF0;
    }
    // 0x00289DAC: nop

    // 0x00289DB0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00289DB4: lw          $v0, 0x2038($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2038);
    // 0x00289DB8: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x00289DBC: addiu       $a0, $a0, 0x7E60
    ctx->r4 = ADD32(ctx->r4, 0X7E60);
    // 0x00289DC0: bne         $v0, $zero, L_00289DD0
    if (ctx->r2 != 0) {
        // 0x00289DC4: nop
    
            goto L_00289DD0;
    }
    // 0x00289DC4: nop

    // 0x00289DC8: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x00289DCC: addiu       $a0, $a0, 0x7BE0
    ctx->r4 = ADD32(ctx->r4, 0X7BE0);
L_00289DD0:
    // 0x00289DD0: jal         0x0029AA80
    // 0x00289DD4: nop

    osViSetMode_recomp(rdram, ctx);
        goto after_0;
    // 0x00289DD4: nop

    after_0:
    // 0x00289DD8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00289DDC: lwc1        $f12, -0x61DC($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X61DC);
    // 0x00289DE0: jal         0x0029AC40
    // 0x00289DE4: nop

    osViSetXScale_recomp(rdram, ctx);
        goto after_1;
    // 0x00289DE4: nop

    after_1:
    // 0x00289DE8: jal         0x0029AAD0
    // 0x00289DEC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    osViSetSpecialFeatures_recomp(rdram, ctx);
        goto after_2;
    // 0x00289DEC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_2:
L_00289DF0:
    // 0x00289DF0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00289DF4: jr          $ra
    // 0x00289DF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00289DF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00288860(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00288860: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00288864: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00288868: addiu       $a0, $a0, -0xE78
    ctx->r4 = ADD32(ctx->r4, -0XE78);
    // 0x0028886C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00288870: addiu       $a1, $a1, -0x62C4
    ctx->r5 = ADD32(ctx->r5, -0X62C4);
    // 0x00288874: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x00288878: addiu       $a2, $a2, -0x62BC
    ctx->r6 = ADD32(ctx->r6, -0X62BC);
    // 0x0028887C: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x00288880: addiu       $a3, $a3, -0x62B0
    ctx->r7 = ADD32(ctx->r7, -0X62B0);
    // 0x00288884: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00288888: jal         0x0029E3E0
    // 0x0028888C: nop

    func_0029E3E0(rdram, ctx);
        goto after_0;
    // 0x0028888C: nop

    after_0:
    // 0x00288890: jal         0x0029DFD0
    // 0x00288894: nop

    func_0029DFD0(rdram, ctx);
        goto after_1;
    // 0x00288894: nop

    after_1:
    // 0x00288898: jal         0x0029E220
    // 0x0028889C: ori         $a0, $v0, 0x400
    ctx->r4 = ctx->r2 | 0X400;
    func_0029E220(rdram, ctx);
        goto after_2;
    // 0x0028889C: ori         $a0, $v0, 0x400
    ctx->r4 = ctx->r2 | 0X400;
    after_2:
    // 0x002888A0: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x002888A4: addiu       $a0, $a0, 0x6CB0
    ctx->r4 = ADD32(ctx->r4, 0X6CB0);
    // 0x002888A8: jal         0x00286674
    // 0x002888AC: nop

    func_00286674(rdram, ctx);
        goto after_3;
    // 0x002888AC: nop

    after_3:
    // 0x002888B0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002888B4: jr          $ra
    // 0x002888B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002888B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0040C7DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040C7DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0040C7E0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x0040C7E4: lw          $a0, -0x490($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X490);
    // 0x0040C7E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0040C7EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0040C7F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0040C7F4: jal         0x00243414
    // 0x0040C7F8: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0040C7F8: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_0:
    // 0x0040C7FC: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x0040C800: addiu       $s0, $s0, -0x6790
    ctx->r16 = ADD32(ctx->r16, -0X6790);
    // 0x0040C804: jal         0x002532A8
    // 0x0040C808: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002532A8(rdram, ctx);
        goto after_1;
    // 0x0040C808: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0040C80C: beq         $v0, $zero, L_0040C83C
    if (ctx->r2 == 0) {
        // 0x0040C810: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_0040C83C;
    }
    // 0x0040C810: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0040C814: addiu       $a1, $zero, 0x1B57
    ctx->r5 = ADD32(0, 0X1B57);
    // 0x0040C818: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0040C81C: addiu       $v1, $s0, 0x1268
    ctx->r3 = ADD32(ctx->r16, 0X1268);
    // 0x0040C820: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x0040C824: sw          $v0, 0x9EC($a0)
    MEM_W(0X9EC, ctx->r4) = ctx->r2;
    // 0x0040C828: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x0040C82C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0040C830: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x0040C834: jal         0x00248BA8
    // 0x0040C838: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    func_00248BA8(rdram, ctx);
        goto after_2;
    // 0x0040C838: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    after_2:
L_0040C83C:
    // 0x0040C83C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0040C840: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0040C844: jr          $ra
    // 0x0040C848: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040C848: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002914B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002914B4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x002914B8: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x002914BC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002914C0: lwc1        $f20, -0x5C68($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X5C68);
    // 0x002914C4: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x002914C8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    turok2_patch_seqp_handler(rdram, ctx);
    // 0x002914CC: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x002914D0: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x002914D4: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x002914D8: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x002914DC: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x002914E0: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x002914E4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
L_002914E8:
    // 0x002914E8: lh          $v1, 0x38($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X38);
    // 0x002914EC: sltiu       $v0, $v1, 0x18
    ctx->r2 = ctx->r3 < 0X18 ? 1 : 0;
    // 0x002914F0: beq         $v0, $zero, L_002919A4
    if (ctx->r2 == 0) {
        // 0x002914F4: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_002919A4;
    }
    // 0x002914F4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x002914F8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002914FC: addu        $at, $at, $v0
    gpr jr_addend_00291504 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00291500: lw          $v0, -0x5C60($at)
    ctx->r2 = ADD32(ctx->r1, -0X5C60);
    // 0x00291504: jr          $v0
    // 0x00291508: nop

    switch (jr_addend_00291504 >> 2) {
        case 0: goto L_0029150C; break;
        case 1: goto L_0029198C; break;
        case 2: goto L_00291718; break;
        case 3: goto L_0029198C; break;
        case 4: goto L_0029198C; break;
        case 5: goto L_0029153C; break;
        case 6: goto L_00291584; break;
        case 7: goto L_0029172C; break;
        case 8: goto L_002919A4; break;
        case 9: goto L_0029151C; break;
        case 10: goto L_00291868; break;
        case 11: goto L_002918C0; break;
        case 12: goto L_002918DC; break;
        case 13: goto L_002918F8; break;
        case 14: goto L_00291950; break;
        case 15: goto L_00291740; break;
        case 16: goto L_00291760; break;
        case 17: goto L_002917D0; break;
        case 18: goto L_002919A4; break;
        case 19: goto L_002919A4; break;
        case 20: goto L_002919A4; break;
        case 21: goto L_002919A4; break;
        case 22: goto L_002915E0; break;
        case 23: goto L_00291694; break;
        default: switch_error(__func__, 0x00291504, 0x800AA3A0);
    }
    // 0x00291508: nop

L_0029150C:
    // 0x0029150C: jal         0x002919F0
    // 0x00291510: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_002919F0(rdram, ctx);
        goto after_0;
    // 0x00291510: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_0:
    // 0x00291514: j           L_002919A8
    // 0x00291518: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
        goto L_002919A8;
    // 0x00291518: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
L_0029151C:
    // 0x0029151C: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
    // 0x00291520: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x00291524: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x00291528: lw          $a2, 0x5C($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X5C);
    // 0x0029152C: jal         0x00291034
    // 0x00291530: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_00291034(rdram, ctx);
        goto after_1;
    // 0x00291530: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_1:
    // 0x00291534: j           L_002919A8
    // 0x00291538: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
        goto L_002919A8;
    // 0x00291538: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
L_0029153C:
    // 0x0029153C: lw          $s0, 0x3C($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X3C);
    // 0x00291540: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x00291544: jal         0x00294650
    // 0x00291548: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00294650(rdram, ctx);
        goto after_2;
    // 0x00291548: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0029154C: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x00291550: jal         0x00294160
    // 0x00291554: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00294160(rdram, ctx);
        goto after_3;
    // 0x00291554: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x00291558: lw          $s1, 0x10($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X10);
    // 0x0029155C: lbu         $v0, 0x37($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X37);
    // 0x00291560: beq         $v0, $zero, L_00291570
    if (ctx->r2 == 0) {
        // 0x00291564: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00291570;
    }
    // 0x00291564: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00291568: jal         0x00292B94
    // 0x0029156C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00292B94(rdram, ctx);
        goto after_4;
    // 0x0029156C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_4:
L_00291570:
    // 0x00291570: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00291574: jal         0x002924CC
    // 0x00291578: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002924CC(rdram, ctx);
        goto after_5;
    // 0x00291578: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x0029157C: j           L_002919A8
    // 0x00291580: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
        goto L_002919A8;
    // 0x00291580: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
L_00291584:
    // 0x00291584: lw          $s0, 0x3C($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X3C);
    // 0x00291588: lw          $s1, 0x10($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X10);
    // 0x0029158C: lbu         $v0, 0x34($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X34);
    // 0x00291590: bne         $v0, $zero, L_0029159C
    if (ctx->r2 != 0) {
        // 0x00291594: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0029159C;
    }
    // 0x00291594: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00291598: sb          $v0, 0x34($s1)
    MEM_B(0X34, ctx->r17) = ctx->r2;
L_0029159C:
    // 0x0029159C: lw          $s3, 0x40($s2)
    ctx->r19 = MEM_W(ctx->r18, 0X40);
    // 0x002915A0: lbu         $v0, 0x44($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X44);
    // 0x002915A4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002915A8: sb          $v0, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r2;
    // 0x002915AC: lw          $v0, 0x1C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1C);
    // 0x002915B0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x002915B4: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x002915B8: jal         0x00292774
    // 0x002915BC: sw          $v0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r2;
    func_00292774(rdram, ctx);
        goto after_6;
    // 0x002915BC: sw          $v0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r2;
    after_6:
    // 0x002915C0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x002915C4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x002915C8: sra         $a2, $v0, 16
    ctx->r6 = S32(SIGNED(ctx->r2) >> 16);
    // 0x002915CC: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x002915D0: jal         0x002943E0
    // 0x002915D4: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    func_002943E0(rdram, ctx);
        goto after_7;
    // 0x002915D4: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    after_7:
    // 0x002915D8: j           L_002919A8
    // 0x002915DC: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
        goto L_002919A8;
    // 0x002915DC: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
L_002915E0:
    // 0x002915E0: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x002915E4: lw          $s1, 0x3C($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X3C);
    // 0x002915E8: lw          $s4, 0x40($s2)
    ctx->r20 = MEM_W(ctx->r18, 0X40);
    // 0x002915EC: lw          $v0, 0x74($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X74);
    // 0x002915F0: jalr        $v0
    // 0x002915F4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_8;
    // 0x002915F4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_8:
    // 0x002915F8: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x002915FC: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x00291600: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x00291604: nop

    // 0x00291608: bc1t        L_00291620
    if (c1cs) {
        // 0x0029160C: addiu       $a2, $s1, 0x36
        ctx->r6 = ADD32(ctx->r17, 0X36);
            goto L_00291620;
    }
    // 0x0029160C: addiu       $a2, $s1, 0x36
    ctx->r6 = ADD32(ctx->r17, 0X36);
    // 0x00291610: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00291614: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00291618: j           L_00291638
    // 0x0029161C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
        goto L_00291638;
    // 0x0029161C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_00291620:
    // 0x00291620: sub.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x00291624: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00291628: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0029162C: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00291630: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00291634: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_00291638:
    // 0x00291638: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0029163C: jal         0x00292774
    // 0x00291640: sb          $v1, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r3;
    func_00292774(rdram, ctx);
        goto after_9;
    // 0x00291640: sb          $v1, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r3;
    after_9:
    // 0x00291644: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00291648: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x0029164C: lw          $a1, 0x1C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X1C);
    // 0x00291650: jal         0x002927E8
    // 0x00291654: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    func_002927E8(rdram, ctx);
        goto after_10;
    // 0x00291654: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    after_10:
    // 0x00291658: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    // 0x0029165C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x00291660: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x00291664: jal         0x002943E0
    // 0x00291668: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    func_002943E0(rdram, ctx);
        goto after_11;
    // 0x00291668: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    after_11:
    // 0x0029166C: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
    // 0x00291670: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x00291674: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x00291678: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x0029167C: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x00291680: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00291684: jal         0x00291034
    // 0x00291688: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    func_00291034(rdram, ctx);
        goto after_12;
    // 0x00291688: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    after_12:
    // 0x0029168C: j           L_002919A8
    // 0x00291690: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
        goto L_002919A8;
    // 0x00291690: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
L_00291694:
    // 0x00291694: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x00291698: lw          $s4, 0x40($s2)
    ctx->r20 = MEM_W(ctx->r18, 0X40);
    // 0x0029169C: lw          $s1, 0x3C($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X3C);
    // 0x002916A0: lw          $v0, 0x74($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X74);
    // 0x002916A4: lbu         $s0, 0x44($s2)
    ctx->r16 = MEM_BU(ctx->r18, 0X44);
    // 0x002916A8: jalr        $v0
    // 0x002916AC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_13;
    // 0x002916AC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_13:
    // 0x002916B0: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x002916B4: lwc1        $f1, 0x28($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X28);
    // 0x002916B8: andi        $v1, $s0, 0xFF
    ctx->r3 = ctx->r16 & 0XFF;
    // 0x002916BC: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x002916C0: swc1        $f0, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->f0.u32l;
    // 0x002916C4: lw          $a0, 0x60($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X60);
    // 0x002916C8: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x002916CC: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x002916D0: lwc1        $f0, 0xC($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0XC);
    // 0x002916D4: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x002916D8: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x002916DC: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x002916E0: mfc1        $a2, $f1
    ctx->r6 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x002916E4: jal         0x00294340
    // 0x002916E8: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    func_00294340(rdram, ctx);
        goto after_14;
    // 0x002916E8: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    after_14:
    // 0x002916EC: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
    // 0x002916F0: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x002916F4: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x002916F8: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
    // 0x002916FC: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x00291700: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00291704: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    // 0x00291708: jal         0x00291034
    // 0x0029170C: sb          $s0, 0x1C($sp)
    MEM_B(0X1C, ctx->r29) = ctx->r16;
    func_00291034(rdram, ctx);
        goto after_15;
    // 0x0029170C: sb          $s0, 0x1C($sp)
    MEM_B(0X1C, ctx->r29) = ctx->r16;
    after_15:
    // 0x00291710: j           L_002919A8
    // 0x00291714: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
        goto L_002919A8;
    // 0x00291714: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
L_00291718:
    // 0x00291718: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0029171C: jal         0x00291BF4
    // 0x00291720: addiu       $a1, $s2, 0x38
    ctx->r5 = ADD32(ctx->r18, 0X38);
    func_00291BF4(rdram, ctx);
        goto after_16;
    // 0x00291720: addiu       $a1, $s2, 0x38
    ctx->r5 = ADD32(ctx->r18, 0X38);
    after_16:
    // 0x00291724: j           L_002919A8
    // 0x00291728: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
        goto L_002919A8;
    // 0x00291728: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
L_0029172C:
    // 0x0029172C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00291730: jal         0x00292D4C
    // 0x00291734: addiu       $a1, $s2, 0x38
    ctx->r5 = ADD32(ctx->r18, 0X38);
    func_00292D4C(rdram, ctx);
        goto after_17;
    // 0x00291734: addiu       $a1, $s2, 0x38
    ctx->r5 = ADD32(ctx->r18, 0X38);
    after_17:
    // 0x00291738: j           L_002919A8
    // 0x0029173C: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
        goto L_002919A8;
    // 0x0029173C: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
L_00291740:
    // 0x00291740: lw          $v0, 0x2C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X2C);
    // 0x00291744: beq         $v0, $s5, L_002919A8
    if (ctx->r2 == ctx->r21) {
        // 0x00291748: addiu       $a0, $s2, 0x48
        ctx->r4 = ADD32(ctx->r18, 0X48);
            goto L_002919A8;
    }
    // 0x00291748: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
    // 0x0029174C: sw          $s5, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->r21;
    // 0x00291750: jal         0x00292C84
    // 0x00291754: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00292C84(rdram, ctx);
        goto after_18;
    // 0x00291754: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_18:
    // 0x00291758: j           L_002919A8
    // 0x0029175C: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
        goto L_002919A8;
    // 0x0029175C: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
L_00291760:
    // 0x00291760: lw          $v1, 0x2C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X2C);
    // 0x00291764: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00291768: bne         $v1, $v0, L_002919A8
    if (ctx->r3 != ctx->r2) {
        // 0x0029176C: addiu       $a0, $s2, 0x48
        ctx->r4 = ADD32(ctx->r18, 0X48);
            goto L_002919A8;
    }
    // 0x0029176C: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
    // 0x00291770: lw          $s1, 0x64($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X64);
    // 0x00291774: beql        $s1, $zero, L_002917C8
    if (ctx->r17 == 0) {
        // 0x00291778: sw          $zero, 0x1C($s2)
        MEM_W(0X1C, ctx->r18) = 0;
            goto L_002917C8;
    }
    goto skip_0;
    // 0x00291778: sw          $zero, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = 0;
    skip_0:
    // 0x0029177C: addiu       $s0, $s1, 0x4
    ctx->r16 = ADD32(ctx->r17, 0X4);
L_00291780:
    // 0x00291780: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x00291784: jal         0x00294650
    // 0x00291788: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00294650(rdram, ctx);
        goto after_19;
    // 0x00291788: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_19:
    // 0x0029178C: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x00291790: jal         0x00294160
    // 0x00291794: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00294160(rdram, ctx);
        goto after_20;
    // 0x00291794: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_20:
    // 0x00291798: lbu         $v0, 0x37($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X37);
    // 0x0029179C: beq         $v0, $zero, L_002917AC
    if (ctx->r2 == 0) {
        // 0x002917A0: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_002917AC;
    }
    // 0x002917A0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x002917A4: jal         0x00292B94
    // 0x002917A8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00292B94(rdram, ctx);
        goto after_21;
    // 0x002917A8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_21:
L_002917AC:
    // 0x002917AC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x002917B0: jal         0x002924CC
    // 0x002917B4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002924CC(rdram, ctx);
        goto after_22;
    // 0x002917B4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_22:
    // 0x002917B8: lw          $s1, 0x64($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X64);
    // 0x002917BC: bne         $s1, $zero, L_00291780
    if (ctx->r17 != 0) {
        // 0x002917C0: addiu       $s0, $s1, 0x4
        ctx->r16 = ADD32(ctx->r17, 0X4);
            goto L_00291780;
    }
    // 0x002917C0: addiu       $s0, $s1, 0x4
    ctx->r16 = ADD32(ctx->r17, 0X4);
    // 0x002917C4: sw          $zero, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = 0;
L_002917C8:
    // 0x002917C8: j           L_002919A4
    // 0x002917CC: sw          $zero, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = 0;
        goto L_002919A4;
    // 0x002917CC: sw          $zero, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = 0;
L_002917D0:
    // 0x002917D0: lw          $v0, 0x2C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X2C);
    // 0x002917D4: bne         $v0, $s5, L_002919A8
    if (ctx->r2 != ctx->r21) {
        // 0x002917D8: addiu       $a0, $s2, 0x48
        ctx->r4 = ADD32(ctx->r18, 0X48);
            goto L_002919A8;
    }
    // 0x002917D8: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
    // 0x002917DC: addiu       $s0, $s2, 0x48
    ctx->r16 = ADD32(ctx->r18, 0X48);
    // 0x002917E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002917E4: jal         0x002911B8
    // 0x002917E8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002911B8(rdram, ctx);
        goto after_23;
    // 0x002917E8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_23:
    // 0x002917EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002917F0: jal         0x002911B8
    // 0x002917F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002911B8(rdram, ctx);
        goto after_24;
    // 0x002917F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_24:
    // 0x002917F8: lw          $s1, 0x64($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X64);
    // 0x002917FC: beq         $s1, $zero, L_00291840
    if (ctx->r17 == 0) {
        // 0x00291800: addiu       $a0, $s2, 0x48
        ctx->r4 = ADD32(ctx->r18, 0X48);
            goto L_00291840;
    }
    // 0x00291800: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
    // 0x00291804: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00291808:
    // 0x00291808: addiu       $s0, $s1, 0x4
    ctx->r16 = ADD32(ctx->r17, 0X4);
    // 0x0029180C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00291810: jal         0x00292530
    // 0x00291814: ori         $a2, $zero, 0xC350
    ctx->r6 = 0 | 0XC350;
    func_00292530(rdram, ctx);
        goto after_25;
    // 0x00291814: ori         $a2, $zero, 0xC350
    ctx->r6 = 0 | 0XC350;
    after_25:
    // 0x00291818: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x0029181C: beq         $v0, $zero, L_00291830
    if (ctx->r2 == 0) {
        // 0x00291820: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00291830;
    }
    // 0x00291820: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00291824: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00291828: jal         0x00292A74
    // 0x0029182C: ori         $a2, $zero, 0xC350
    ctx->r6 = 0 | 0XC350;
    func_00292A74(rdram, ctx);
        goto after_26;
    // 0x0029182C: ori         $a2, $zero, 0xC350
    ctx->r6 = 0 | 0XC350;
    after_26:
L_00291830:
    // 0x00291830: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x00291834: bne         $s1, $zero, L_00291808
    if (ctx->r17 != 0) {
        // 0x00291838: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00291808;
    }
    // 0x00291838: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0029183C: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
L_00291840:
    // 0x00291840: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x00291844: lui         $a2, 0x7FFF
    ctx->r6 = S32(0X7FFF << 16);
    // 0x00291848: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x0029184C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00291850: sw          $v0, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->r2;
    // 0x00291854: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x00291858: jal         0x00291034
    // 0x0029185C: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_00291034(rdram, ctx);
        goto after_27;
    // 0x0029185C: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_27:
    // 0x00291860: j           L_002919A8
    // 0x00291864: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
        goto L_002919A8;
    // 0x00291864: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
L_00291868:
    // 0x00291868: lhu         $v0, 0x3C($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X3C);
    // 0x0029186C: lw          $s1, 0x64($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X64);
    // 0x00291870: beq         $s1, $zero, L_002919A4
    if (ctx->r17 == 0) {
        // 0x00291874: sh          $v0, 0x32($s2)
        MEM_H(0X32, ctx->r18) = ctx->r2;
            goto L_002919A4;
    }
    // 0x00291874: sh          $v0, 0x32($s2)
    MEM_H(0X32, ctx->r18) = ctx->r2;
    // 0x00291878: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_0029187C:
    // 0x0029187C: jal         0x00292774
    // 0x00291880: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_00292774(rdram, ctx);
        goto after_28;
    // 0x00291880: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_28:
    // 0x00291884: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00291888: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x0029188C: lw          $a1, 0x1C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X1C);
    // 0x00291890: jal         0x002927E8
    // 0x00291894: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    func_002927E8(rdram, ctx);
        goto after_29;
    // 0x00291894: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    after_29:
    // 0x00291898: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    // 0x0029189C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x002918A0: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x002918A4: jal         0x002943E0
    // 0x002918A8: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    func_002943E0(rdram, ctx);
        goto after_30;
    // 0x002918A8: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    after_30:
    // 0x002918AC: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x002918B0: bne         $s1, $zero, L_0029187C
    if (ctx->r17 != 0) {
        // 0x002918B4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0029187C;
    }
    // 0x002918B4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002918B8: j           L_002919A8
    // 0x002918BC: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
        goto L_002919A8;
    // 0x002918BC: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
L_002918C0:
    // 0x002918C0: lw          $v0, 0x3C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X3C);
    // 0x002918C4: lw          $v1, 0x40($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X40);
    // 0x002918C8: lw          $a0, 0x44($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X44);
    // 0x002918CC: sw          $v0, 0x7C($s2)
    MEM_W(0X7C, ctx->r18) = ctx->r2;
    // 0x002918D0: sw          $v1, 0x80($s2)
    MEM_W(0X80, ctx->r18) = ctx->r3;
    // 0x002918D4: j           L_002919A4
    // 0x002918D8: sw          $a0, 0x84($s2)
    MEM_W(0X84, ctx->r18) = ctx->r4;
        goto L_002919A4;
    // 0x002918D8: sw          $a0, 0x84($s2)
    MEM_W(0X84, ctx->r18) = ctx->r4;
L_002918DC:
    // 0x002918DC: lbu         $v0, 0x3C($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X3C);
    // 0x002918E0: lw          $v1, 0x60($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X60);
    // 0x002918E4: lbu         $a0, 0x3D($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X3D);
    // 0x002918E8: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x002918EC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x002918F0: j           L_002919A4
    // 0x002918F4: sb          $a0, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r4;
        goto L_002919A4;
    // 0x002918F4: sb          $a0, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r4;
L_002918F8:
    // 0x002918F8: lw          $v0, 0x2C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X2C);
    // 0x002918FC: bne         $v0, $s5, L_0029191C
    if (ctx->r2 != ctx->r21) {
        // 0x00291900: nop
    
            goto L_0029191C;
    }
    // 0x00291900: nop

    // 0x00291904: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x00291908: addiu       $a0, $a0, -0x5C80
    ctx->r4 = ADD32(ctx->r4, -0X5C80);
    // 0x0029190C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00291910: addiu       $a1, $a1, -0x5C7C
    ctx->r5 = ADD32(ctx->r5, -0X5C7C);
    // 0x00291914: jal         0x0029B020
    // 0x00291918: addiu       $a2, $zero, 0x128
    ctx->r6 = ADD32(0, 0X128);
    func_0029B020(rdram, ctx);
        goto after_31;
    // 0x00291918: addiu       $a2, $zero, 0x128
    ctx->r6 = ADD32(0, 0X128);
    after_31:
L_0029191C:
    // 0x0029191C: lui         $a1, 0x48F4
    ctx->r5 = S32(0X48F4 << 16);
    // 0x00291920: ori         $a1, $a1, 0x2400
    ctx->r5 = ctx->r5 | 0X2400;
    // 0x00291924: lw          $v0, 0x3C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X3C);
    // 0x00291928: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0029192C: jal         0x00292DB0
    // 0x00291930: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    func_00292DB0(rdram, ctx);
        goto after_32;
    // 0x00291930: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    after_32:
    // 0x00291934: lw          $a1, 0x20($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X20);
    // 0x00291938: beq         $a1, $zero, L_002919A8
    if (ctx->r5 == 0) {
        // 0x0029193C: addiu       $a0, $s2, 0x48
        ctx->r4 = ADD32(ctx->r18, 0X48);
            goto L_002919A8;
    }
    // 0x0029193C: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
    // 0x00291940: jal         0x00292844
    // 0x00291944: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00292844(rdram, ctx);
        goto after_33;
    // 0x00291944: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_33:
    // 0x00291948: j           L_002919A8
    // 0x0029194C: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
        goto L_002919A8;
    // 0x0029194C: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
L_00291950:
    // 0x00291950: lw          $v0, 0x2C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X2C);
    // 0x00291954: beq         $v0, $zero, L_00291974
    if (ctx->r2 == 0) {
        // 0x00291958: nop
    
            goto L_00291974;
    }
    // 0x00291958: nop

    // 0x0029195C: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x00291960: addiu       $a0, $a0, -0x5C80
    ctx->r4 = ADD32(ctx->r4, -0X5C80);
    // 0x00291964: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00291968: addiu       $a1, $a1, -0x5C7C
    ctx->r5 = ADD32(ctx->r5, -0X5C7C);
    // 0x0029196C: jal         0x0029B020
    // 0x00291970: addiu       $a2, $zero, 0x131
    ctx->r6 = ADD32(0, 0X131);
    func_0029B020(rdram, ctx);
        goto after_34;
    // 0x00291970: addiu       $a2, $zero, 0x131
    ctx->r6 = ADD32(0, 0X131);
    after_34:
L_00291974:
    // 0x00291974: lw          $a1, 0x3C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X3C);
    // 0x00291978: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0029197C: jal         0x00292844
    // 0x00291980: sw          $a1, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r5;
    func_00292844(rdram, ctx);
        goto after_35;
    // 0x00291980: sw          $a1, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r5;
    after_35:
    // 0x00291984: j           L_002919A8
    // 0x00291988: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
        goto L_002919A8;
    // 0x00291988: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
L_0029198C:
    // 0x0029198C: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x00291990: addiu       $a0, $a0, -0x5C80
    ctx->r4 = ADD32(ctx->r4, -0X5C80);
    // 0x00291994: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00291998: addiu       $a1, $a1, -0x5C7C
    ctx->r5 = ADD32(ctx->r5, -0X5C7C);
    // 0x0029199C: jal         0x0029B020
    // 0x002919A0: addiu       $a2, $zero, 0x13B
    ctx->r6 = ADD32(0, 0X13B);
    func_0029B020(rdram, ctx);
        goto after_36;
    // 0x002919A0: addiu       $a2, $zero, 0x13B
    ctx->r6 = ADD32(0, 0X13B);
    after_36:
L_002919A4:
    // 0x002919A4: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
L_002919A8:
    // 0x002919A8: jal         0x00290F9C
    // 0x002919AC: addiu       $a1, $s2, 0x38
    ctx->r5 = ADD32(ctx->r18, 0X38);
    func_00290F9C(rdram, ctx);
        goto after_37;
    // 0x002919AC: addiu       $a1, $s2, 0x38
    ctx->r5 = ADD32(ctx->r18, 0X38);
    after_37:
    // 0x002919B0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x002919B4: beq         $a0, $zero, L_002914E8
    if (ctx->r4 == 0) {
        // 0x002919B8: sw          $a0, 0x28($s2)
        MEM_W(0X28, ctx->r18) = ctx->r4;
            goto L_002914E8;
    }
    // 0x002919B8: sw          $a0, 0x28($s2)
    MEM_W(0X28, ctx->r18) = ctx->r4;
    // 0x002919BC: lw          $v1, 0x1C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X1C);
    // 0x002919C0: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x002919C4: sw          $v1, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r3;
    // 0x002919C8: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x002919CC: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x002919D0: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x002919D4: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x002919D8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x002919DC: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x002919E0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x002919E4: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x002919E8: jr          $ra
    // 0x002919EC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x002919EC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_00420C30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00420C30: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00420C34: lw          $v1, 0x9B0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X9B0);
    // 0x00420C38: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00420C3C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x00420C40: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00420C44: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00420C48: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00420C4C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x00420C50: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x00420C54: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x00420C58: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x00420C5C: beq         $v0, $zero, L_00420F14
    if (ctx->r2 == 0) {
        // 0x00420C60: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_00420F14;
    }
    // 0x00420C60: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00420C64: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00420C68: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00420C6C: addu        $at, $at, $v0
    gpr jr_addend_00420C74 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00420C70: lw          $v0, 0x1438($at)
    ctx->r2 = ADD32(ctx->r1, 0X1438);
    // 0x00420C74: jr          $v0
    // 0x00420C78: nop

    switch (jr_addend_00420C74 >> 2) {
        case 0: goto L_00420E10; break;
        case 1: goto L_00420EDC; break;
        case 2: goto L_00420EDC; break;
        case 3: goto L_00420D50; break;
        case 4: goto L_00420C7C; break;
        default: switch_error(__func__, 0x00420C74, 0x800C1438);
    }
    // 0x00420C78: nop

L_00420C7C:
    // 0x00420C7C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00420C80: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x00420C84: beq         $v0, $zero, L_00420C9C
    if (ctx->r2 == 0) {
        // 0x00420C88: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00420C9C;
    }
    // 0x00420C88: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00420C8C: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x00420C90: lw          $s0, 0x2028($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X2028);
    // 0x00420C94: j           L_00420CA8
    // 0x00420C98: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
        goto L_00420CA8;
    // 0x00420C98: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
L_00420C9C:
    // 0x00420C9C: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x00420CA0: lb          $s0, 0x4($v0)
    ctx->r16 = MEM_B(ctx->r2, 0X4);
    // 0x00420CA4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
L_00420CA8:
    // 0x00420CA8: jal         0x0041DD90
    // 0x00420CAC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_0041DD90(rdram, ctx);
        goto after_0;
    // 0x00420CAC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x00420CB0: beq         $v0, $zero, L_00420CE0
    if (ctx->r2 == 0) {
        // 0x00420CB4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00420CE0;
    }
    // 0x00420CB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420CB8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420CBC: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00420CC0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00420CC4: lw          $a1, 0x24($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X24);
    // 0x00420CC8: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x00420CCC: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x00420CD0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00420CD4: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x00420CD8: j           L_00420F0C
    // 0x00420CDC: nop

        goto L_00420F0C;
    // 0x00420CDC: nop

L_00420CE0:
    // 0x00420CE0: jal         0x00426480
    // 0x00420CE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426480(rdram, ctx);
        goto after_1;
    // 0x00420CE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00420CE8: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x00420CEC: lw          $a1, 0x988($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X988);
    // 0x00420CF0: jal         0x00426064
    // 0x00420CF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426064(rdram, ctx);
        goto after_2;
    // 0x00420CF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00420CF8: bne         $v0, $zero, L_00420D28
    if (ctx->r2 != 0) {
        // 0x00420CFC: nop
    
            goto L_00420D28;
    }
    // 0x00420CFC: nop

    // 0x00420D00: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x00420D04: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420D08: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00420D0C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00420D10: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x00420D14: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x00420D18: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00420D1C: addiu       $a1, $a1, -0x4250
    ctx->r5 = ADD32(ctx->r5, -0X4250);
    // 0x00420D20: j           L_00420F0C
    // 0x00420D24: nop

        goto L_00420F0C;
    // 0x00420D24: nop

L_00420D28:
    // 0x00420D28: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x00420D2C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420D30: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00420D34: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00420D38: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x00420D3C: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x00420D40: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00420D44: addiu       $a1, $a1, -0x41E4
    ctx->r5 = ADD32(ctx->r5, -0X41E4);
    // 0x00420D48: j           L_00420F0C
    // 0x00420D4C: nop

        goto L_00420F0C;
    // 0x00420D4C: nop

L_00420D50:
    // 0x00420D50: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00420D54: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x00420D58: beq         $v0, $zero, L_00420D70
    if (ctx->r2 == 0) {
        // 0x00420D5C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00420D70;
    }
    // 0x00420D5C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00420D60: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x00420D64: lw          $s0, 0x2028($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X2028);
    // 0x00420D68: j           L_00420D7C
    // 0x00420D6C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
        goto L_00420D7C;
    // 0x00420D6C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
L_00420D70:
    // 0x00420D70: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x00420D74: lb          $s0, 0x4($v0)
    ctx->r16 = MEM_B(ctx->r2, 0X4);
    // 0x00420D78: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
L_00420D7C:
    // 0x00420D7C: jal         0x0041DD90
    // 0x00420D80: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_0041DD90(rdram, ctx);
        goto after_3;
    // 0x00420D80: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x00420D84: beq         $v0, $zero, L_00420DB4
    if (ctx->r2 == 0) {
        // 0x00420D88: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00420DB4;
    }
    // 0x00420D88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420D8C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420D90: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00420D94: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00420D98: lw          $a1, 0x24($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X24);
    // 0x00420D9C: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x00420DA0: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x00420DA4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00420DA8: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x00420DAC: j           L_00420F0C
    // 0x00420DB0: nop

        goto L_00420F0C;
    // 0x00420DB0: nop

L_00420DB4:
    // 0x00420DB4: jal         0x00426480
    // 0x00420DB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426480(rdram, ctx);
        goto after_4;
    // 0x00420DB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x00420DBC: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x00420DC0: lw          $a1, 0x9C4($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X9C4);
    // 0x00420DC4: jal         0x00426064
    // 0x00420DC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426064(rdram, ctx);
        goto after_5;
    // 0x00420DC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x00420DCC: bne         $v0, $zero, L_00420DE8
    if (ctx->r2 != 0) {
        // 0x00420DD0: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00420DE8;
    }
    // 0x00420DD0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00420DD4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00420DD8: jal         0x0041F0C8
    // 0x00420DDC: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_0041F0C8(rdram, ctx);
        goto after_6;
    // 0x00420DDC: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_6:
    // 0x00420DE0: j           L_00420F18
    // 0x00420DE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_00420F18;
    // 0x00420DE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00420DE8:
    // 0x00420DE8: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x00420DEC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420DF0: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00420DF4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00420DF8: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x00420DFC: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x00420E00: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00420E04: addiu       $a1, $a1, -0x41E4
    ctx->r5 = ADD32(ctx->r5, -0X41E4);
    // 0x00420E08: j           L_00420F0C
    // 0x00420E0C: nop

        goto L_00420F0C;
    // 0x00420E0C: nop

L_00420E10:
    // 0x00420E10: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00420E14: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x00420E18: beq         $v0, $zero, L_00420E30
    if (ctx->r2 == 0) {
        // 0x00420E1C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00420E30;
    }
    // 0x00420E1C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00420E20: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x00420E24: lw          $s0, 0x2028($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X2028);
    // 0x00420E28: j           L_00420E3C
    // 0x00420E2C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
        goto L_00420E3C;
    // 0x00420E2C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
L_00420E30:
    // 0x00420E30: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x00420E34: lb          $s0, 0x4($v0)
    ctx->r16 = MEM_B(ctx->r2, 0X4);
    // 0x00420E38: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
L_00420E3C:
    // 0x00420E3C: jal         0x0041DD90
    // 0x00420E40: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_0041DD90(rdram, ctx);
        goto after_7;
    // 0x00420E40: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x00420E44: beq         $v0, $zero, L_00420E74
    if (ctx->r2 == 0) {
        // 0x00420E48: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00420E74;
    }
    // 0x00420E48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420E4C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420E50: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00420E54: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00420E58: lw          $a1, 0x24($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X24);
    // 0x00420E5C: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x00420E60: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x00420E64: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00420E68: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x00420E6C: j           L_00420F0C
    // 0x00420E70: nop

        goto L_00420F0C;
    // 0x00420E70: nop

L_00420E74:
    // 0x00420E74: jal         0x00426480
    // 0x00420E78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426480(rdram, ctx);
        goto after_8;
    // 0x00420E78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x00420E7C: jal         0x00426814
    // 0x00420E80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426814(rdram, ctx);
        goto after_9;
    // 0x00420E80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x00420E84: bne         $v0, $zero, L_00420EB4
    if (ctx->r2 != 0) {
        // 0x00420E88: nop
    
            goto L_00420EB4;
    }
    // 0x00420E88: nop

    // 0x00420E8C: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x00420E90: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420E94: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00420E98: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00420E9C: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x00420EA0: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x00420EA4: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00420EA8: addiu       $a1, $a1, -0x422C
    ctx->r5 = ADD32(ctx->r5, -0X422C);
    // 0x00420EAC: j           L_00420F0C
    // 0x00420EB0: nop

        goto L_00420F0C;
    // 0x00420EB0: nop

L_00420EB4:
    // 0x00420EB4: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x00420EB8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420EBC: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00420EC0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00420EC4: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x00420EC8: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x00420ECC: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00420ED0: addiu       $a1, $a1, -0x3FC8
    ctx->r5 = ADD32(ctx->r5, -0X3FC8);
    // 0x00420ED4: j           L_00420F0C
    // 0x00420ED8: nop

        goto L_00420F0C;
    // 0x00420ED8: nop

L_00420EDC:
    // 0x00420EDC: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00420EE0: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x00420EE4: beq         $v0, $zero, L_00420EF4
    if (ctx->r2 == 0) {
        // 0x00420EE8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00420EF4;
    }
    // 0x00420EE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00420EEC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00420EF0: sw          $v0, -0x4EEC($at)
    MEM_W(-0X4EEC, ctx->r1) = ctx->r2;
L_00420EF4:
    // 0x00420EF4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00420EF8: lw          $a1, 0x24($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X24);
    // 0x00420EFC: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x00420F00: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x00420F04: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420F08: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
L_00420F0C:
    // 0x00420F0C: jal         0x00416644
    // 0x00420F10: nop

    func_00416644(rdram, ctx);
        goto after_10;
    // 0x00420F10: nop

    after_10:
L_00420F14:
    // 0x00420F14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00420F18:
    // 0x00420F18: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00420F1C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x00420F20: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00420F24: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00420F28: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00420F2C: jr          $ra
    // 0x00420F30: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00420F30: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0026E9D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026E9D8: lw          $v0, 0x38($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X38);
    // 0x0026E9DC: bnel        $v0, $zero, L_0026E9E4
    if (ctx->r2 != 0) {
        // 0x0026E9E0: sw          $zero, 0x0($v0)
        MEM_W(0X0, ctx->r2) = 0;
            goto L_0026E9E4;
    }
    goto skip_0;
    // 0x0026E9E0: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    skip_0:
L_0026E9E4:
    // 0x0026E9E4: jr          $ra
    // 0x0026E9E8: nop

    return;
    // 0x0026E9E8: nop

;}
RECOMP_FUNC void func_00254564(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00254564: lh          $v0, 0x996($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X996);
    // 0x00254568: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0025456C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00254570: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00254574: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x00254578: lh          $v0, 0x8($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X8);
    // 0x0025457C: jr          $ra
    // 0x00254580: slt         $v0, $zero, $v0
    ctx->r2 = SIGNED(0) < SIGNED(ctx->r2) ? 1 : 0;
    return;
    // 0x00254580: slt         $v0, $zero, $v0
    ctx->r2 = SIGNED(0) < SIGNED(ctx->r2) ? 1 : 0;
;}
RECOMP_FUNC void func_0023CB64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023CB64: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x0023CB68: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x0023CB6C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0023CB70: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    // 0x0023CB74: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0023CB78: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x0023CB7C: addiu       $s2, $s0, 0xC
    ctx->r18 = ADD32(ctx->r16, 0XC);
    // 0x0023CB80: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0023CB84: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0023CB88: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x0023CB8C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x0023CB90: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x0023CB94: lw          $a3, 0x1C($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X1C);
    // 0x0023CB98: lw          $t0, 0x20($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X20);
    // 0x0023CB9C: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x0023CBA0: sw          $a3, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r7;
    // 0x0023CBA4: sw          $t0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r8;
    // 0x0023CBA8: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x0023CBAC: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x0023CBB0: lw          $t0, 0x14($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X14);
    // 0x0023CBB4: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
    // 0x0023CBB8: sw          $a3, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r7;
    // 0x0023CBBC: sw          $t0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r8;
    // 0x0023CBC0: lw          $v1, 0x3C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X3C);
    // 0x0023CBC4: lw          $a3, 0x40($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X40);
    // 0x0023CBC8: lw          $t0, 0x44($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X44);
    // 0x0023CBCC: sw          $v1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r3;
    // 0x0023CBD0: sw          $a3, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r7;
    // 0x0023CBD4: sw          $t0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r8;
    // 0x0023CBD8: lw          $v1, 0x48($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X48);
    // 0x0023CBDC: lw          $a3, 0x4C($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X4C);
    // 0x0023CBE0: lw          $t0, 0x50($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X50);
    // 0x0023CBE4: sw          $v1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r3;
    // 0x0023CBE8: sw          $a3, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r7;
    // 0x0023CBEC: sw          $t0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r8;
    // 0x0023CBF0: jal         0x0020EF2C
    // 0x0023CBF4: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    func_0020EF2C(rdram, ctx);
        goto after_0;
    // 0x0023CBF4: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    after_0:
    // 0x0023CBF8: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0023CBFC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0023CC00: jal         0x0020EF2C
    // 0x0023CC04: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_0020EF2C(rdram, ctx);
        goto after_1;
    // 0x0023CC04: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_1:
    // 0x0023CC08: addiu       $a0, $s0, 0x30
    ctx->r4 = ADD32(ctx->r16, 0X30);
    // 0x0023CC0C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x0023CC10: jal         0x0020EFDC
    // 0x0023CC14: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    func_0020EFDC(rdram, ctx);
        goto after_2;
    // 0x0023CC14: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_2:
    // 0x0023CC18: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x0023CC1C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x0023CC20: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x0023CC24: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0023CC28: jr          $ra
    // 0x0023CC2C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x0023CC2C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00284B94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00284B94: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00284B98: lbu         $v0, 0x6CF0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X6CF0);
    // 0x00284B9C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00284BA0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00284BA4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00284BA8: beq         $v0, $zero, L_00284CCC
    if (ctx->r2 == 0) {
        // 0x00284BAC: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_00284CCC;
    }
    // 0x00284BAC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00284BB0: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00284BB4: addiu       $a0, $a0, 0x5A50
    ctx->r4 = ADD32(ctx->r4, 0X5A50);
    // 0x00284BB8: jal         0x0026ECF0
    // 0x00284BBC: nop

    func_0026ECF0(rdram, ctx);
        goto after_0;
    // 0x00284BBC: nop

    after_0:
    // 0x00284BC0: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00284BC4: addiu       $a0, $a0, 0x6758
    ctx->r4 = ADD32(ctx->r4, 0X6758);
    // 0x00284BC8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00284BCC: jal         0x0029B6F0
    // 0x00284BD0: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x00284BD0: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_1:
    // 0x00284BD4: bne         $v0, $zero, L_00284C88
    if (ctx->r2 != 0) {
        // 0x00284BD8: nop
    
            goto L_00284C88;
    }
    // 0x00284BD8: nop

    // 0x00284BDC: jal         0x002847E0
    // 0x00284BE0: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    func_002847E0(rdram, ctx);
        goto after_2;
    // 0x00284BE0: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    after_2:
    // 0x00284BE4: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x00284BE8: addiu       $s0, $s0, 0x5EC0
    ctx->r16 = ADD32(ctx->r16, 0X5EC0);
L_00284BEC:
    // 0x00284BEC: jal         0x002851C0
    // 0x00284BF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002851C0(rdram, ctx);
        goto after_3;
    // 0x00284BF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x00284BF4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00284BF8: slti        $v0, $s1, 0x4
    ctx->r2 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x00284BFC: bne         $v0, $zero, L_00284BEC
    if (ctx->r2 != 0) {
        // 0x00284C00: addiu       $s0, $s0, 0x224
        ctx->r16 = ADD32(ctx->r16, 0X224);
            goto L_00284BEC;
    }
    // 0x00284C00: addiu       $s0, $s0, 0x224
    ctx->r16 = ADD32(ctx->r16, 0X224);
    // 0x00284C04: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00284C08: lbu         $v0, 0x6750($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X6750);
    // 0x00284C0C: beq         $v0, $zero, L_00284C2C
    if (ctx->r2 == 0) {
        // 0x00284C10: nop
    
            goto L_00284C2C;
    }
    // 0x00284C10: nop

    // 0x00284C14: bltz        $v0, L_00284C74
    if (SIGNED(ctx->r2) < 0) {
        // 0x00284C18: slti        $v0, $v0, 0x4
        ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
            goto L_00284C74;
    }
    // 0x00284C18: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x00284C1C: beq         $v0, $zero, L_00284C74
    if (ctx->r2 == 0) {
        // 0x00284C20: nop
    
            goto L_00284C74;
    }
    // 0x00284C20: nop

    // 0x00284C24: j           L_00284C5C
    // 0x00284C28: nop

        goto L_00284C5C;
    // 0x00284C28: nop

L_00284C2C:
    // 0x00284C2C: jal         0x00285A20
    // 0x00284C30: nop

    func_00285A20(rdram, ctx);
        goto after_4;
    // 0x00284C30: nop

    after_4:
    // 0x00284C34: beq         $v0, $zero, L_00284C64
    if (ctx->r2 == 0) {
        // 0x00284C38: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00284C64;
    }
    // 0x00284C38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00284C3C: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00284C40: sb          $v0, 0x6750($at)
    MEM_B(0X6750, ctx->r1) = ctx->r2;
    // 0x00284C44: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00284C48: addiu       $a0, $a0, 0x6798
    ctx->r4 = ADD32(ctx->r4, 0X6798);
    // 0x00284C4C: jal         0x00298670
    // 0x00284C50: nop

    osContStartQuery_recomp(rdram, ctx);
        goto after_5;
    // 0x00284C50: nop

    after_5:
    // 0x00284C54: j           L_00284C74
    // 0x00284C58: nop

        goto L_00284C74;
    // 0x00284C58: nop

L_00284C5C:
    // 0x00284C5C: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00284C60: sb          $zero, 0x6750($at)
    MEM_B(0X6750, ctx->r1) = 0;
L_00284C64:
    // 0x00284C64: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00284C68: addiu       $a0, $a0, 0x6798
    ctx->r4 = ADD32(ctx->r4, 0X6798);
    // 0x00284C6C: jal         0x00298720
    // 0x00284C70: nop

    osContStartReadData_recomp(rdram, ctx);
        goto after_6;
    // 0x00284C70: nop

    after_6:
L_00284C74:
    // 0x00284C74: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00284C78: addiu       $a0, $a0, 0x6758
    ctx->r4 = ADD32(ctx->r4, 0X6758);
    // 0x00284C7C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00284C80: jal         0x0029B820
    // 0x00284C84: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    osSendMesg_recomp(rdram, ctx);
        goto after_7;
    // 0x00284C84: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_7:
L_00284C88:
    // 0x00284C88: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00284C8C: lw          $v1, -0x5378($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5378);
    // 0x00284C90: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x00284C94: bne         $v1, $v0, L_00284CCC
    if (ctx->r3 != ctx->r2) {
        // 0x00284C98: nop
    
            goto L_00284CCC;
    }
    // 0x00284C98: nop

    // 0x00284C9C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00284CA0: lw          $v0, 0x6CF4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6CF4);
    // 0x00284CA4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00284CA8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00284CAC: sw          $v0, 0x6CF4($at)
    MEM_W(0X6CF4, ctx->r1) = ctx->r2;
    // 0x00284CB0: bgtz        $v0, L_00284CCC
    if (SIGNED(ctx->r2) > 0) {
        // 0x00284CB4: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_00284CCC;
    }
    // 0x00284CB4: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x00284CB8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00284CBC: sw          $v0, 0x6CF4($at)
    MEM_W(0X6CF4, ctx->r1) = ctx->r2;
    // 0x00284CC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00284CC4: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00284CC8: sb          $v0, 0x6750($at)
    MEM_B(0X6750, ctx->r1) = ctx->r2;
L_00284CCC:
    // 0x00284CCC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00284CD0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00284CD4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00284CD8: jr          $ra
    // 0x00284CDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00284CDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00294090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00294090: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00294094: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00294098: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0029409C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x002940A0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002940A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002940A8: lw          $s0, 0x14($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X14);
    // 0x002940AC: bne         $s0, $zero, L_002940C0
    if (ctx->r16 != 0) {
        // 0x002940B0: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_002940C0;
    }
    // 0x002940B0: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x002940B4: lw          $s0, 0x4($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X4);
    // 0x002940B8: beq         $s0, $zero, L_002940E0
    if (ctx->r16 == 0) {
        // 0x002940BC: nop
    
            goto L_002940E0;
    }
    // 0x002940BC: nop

L_002940C0:
    // 0x002940C0: sw          $s0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r16;
    // 0x002940C4: jal         0x002933B0
    // 0x002940C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002933B0(rdram, ctx);
        goto after_0;
    // 0x002940C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x002940CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002940D0: jal         0x002933E0
    // 0x002940D4: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    func_002933E0(rdram, ctx);
        goto after_1;
    // 0x002940D4: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    after_1:
    // 0x002940D8: j           L_00294130
    // 0x002940DC: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
        goto L_00294130;
    // 0x002940DC: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
L_002940E0:
    // 0x002940E0: lw          $s0, 0xC($s1)
    ctx->r16 = MEM_W(ctx->r17, 0XC);
    // 0x002940E4: beq         $s0, $zero, L_00294130
    if (ctx->r16 == 0) {
        // 0x002940E8: addu        $v0, $s2, $zero
        ctx->r2 = ADD32(ctx->r18, 0);
            goto L_00294130;
    }
    // 0x002940E8: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
L_002940EC:
    // 0x002940EC: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x002940F0: sll         $v1, $a2, 16
    ctx->r3 = S32(ctx->r6 << 16);
    // 0x002940F4: lh          $v0, 0x16($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X16);
    // 0x002940F8: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x002940FC: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00294100: bne         $v1, $zero, L_00294124
    if (ctx->r3 != 0) {
        // 0x00294104: nop
    
            goto L_00294124;
    }
    // 0x00294104: nop

    // 0x00294108: lw          $v0, 0xD8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD8);
    // 0x0029410C: bne         $v0, $zero, L_00294124
    if (ctx->r2 != 0) {
        // 0x00294110: nop
    
            goto L_00294124;
    }
    // 0x00294110: nop

    // 0x00294114: sw          $s0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r16;
    // 0x00294118: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x0029411C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x00294120: lhu         $a2, 0x16($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X16);
L_00294124:
    // 0x00294124: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x00294128: bne         $s0, $zero, L_002940EC
    if (ctx->r16 != 0) {
        // 0x0029412C: addu        $v0, $s2, $zero
        ctx->r2 = ADD32(ctx->r18, 0);
            goto L_002940EC;
    }
    // 0x0029412C: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
L_00294130:
    // 0x00294130: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00294134: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00294138: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0029413C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00294140: jr          $ra
    // 0x00294144: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00294144: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002A1104(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A1104: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x002A1108: c.le.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl <= ctx->f12.fl;
    // 0x002A110C: nop

    // 0x002A1110: bc1f        L_002A1138
    if (!c1cs) {
        // 0x002A1114: nop
    
            goto L_002A1138;
    }
    // 0x002A1114: nop

    // 0x002A1118: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002A111C: lwc1        $f0, -0x53B8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X53B8);
    // 0x002A1120: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x002A1124: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002A1128: lwc1        $f0, -0x53B4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X53B4);
    // 0x002A112C: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x002A1130: j           L_002A1150
    // 0x002A1134: nop

        goto L_002A1150;
    // 0x002A1134: nop

L_002A1138:
    // 0x002A1138: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002A113C: lwc1        $f0, -0x53B0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X53B0);
    // 0x002A1140: sub.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x002A1144: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002A1148: lwc1        $f0, -0x53AC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X53AC);
    // 0x002A114C: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
L_002A1150:
    // 0x002A1150: nop

    // 0x002A1154: bc1tl       L_002A115C
    if (c1cs) {
        // 0x002A1158: mov.s       $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
            goto L_002A115C;
    }
    goto skip_0;
    // 0x002A1158: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    skip_0:
L_002A115C:
    // 0x002A115C: trunc.w.s   $f1, $f12
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    ctx->f_odd[(1 - 1) * 2] = TRUNC_W_S(ctx->f12.fl);
    // 0x002A1160: mfc1        $v0, $f1
    ctx->r2 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x002A1164: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x002A1168: jr          $ra
    // 0x002A116C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    return;
    // 0x002A116C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
;}
RECOMP_FUNC void func_002768BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002768BC: lh          $v0, 0xC($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XC);
    // 0x002768C0: jr          $ra
    // 0x002768C4: nop

    return;
    // 0x002768C4: nop

;}
RECOMP_FUNC void func_002060E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002060E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002060E4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002060E8: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x002060EC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002060F0: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x002060F4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x002060F8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x002060FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00206100: jal         0x002031E8
    // 0x00206104: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_002031E8(rdram, ctx);
        goto after_0;
    // 0x00206104: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x00206108: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0020610C: beq         $s0, $zero, L_0020619C
    if (ctx->r16 == 0) {
        // 0x00206110: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0020619C;
    }
    // 0x00206110: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00206114: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00206118: srl         $a2, $s1, 5
    ctx->r6 = S32(U32(ctx->r17) >> 5);
    // 0x0020611C: andi        $a2, $a2, 0x1
    ctx->r6 = ctx->r6 & 0X1;
    // 0x00206120: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    // 0x00206124: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00206128: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0020612C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00206130: ori         $v1, $v1, 0x100
    ctx->r3 = ctx->r3 | 0X100;
    // 0x00206134: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x00206138: jal         0x002063B4
    // 0x0020613C: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
    func_002063B4(rdram, ctx);
        goto after_1;
    // 0x0020613C: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
    after_1:
    // 0x00206140: beq         $v0, $zero, L_0020616C
    if (ctx->r2 == 0) {
        // 0x00206144: sw          $v0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r2;
            goto L_0020616C;
    }
    // 0x00206144: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x00206148: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0020614C: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x00206150: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00206154: sw          $s2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r18;
    // 0x00206158: or          $v0, $v0, $s1
    ctx->r2 = ctx->r2 | ctx->r17;
    // 0x0020615C: jal         0x00206498
    // 0x00206160: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    func_00206498(rdram, ctx);
        goto after_2;
    // 0x00206160: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    after_2:
    // 0x00206164: j           L_002061A0
    // 0x00206168: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
        goto L_002061A0;
    // 0x00206168: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_0020616C:
    // 0x0020616C: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00206170: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00206174: bne         $v0, $zero, L_0020618C
    if (ctx->r2 != 0) {
        // 0x00206178: sw          $v0, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->r2;
            goto L_0020618C;
    }
    // 0x00206178: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x0020617C: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x00206180: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x00206184: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00206188: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
L_0020618C:
    // 0x0020618C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00206190: jal         0x002062F8
    // 0x00206194: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002062F8(rdram, ctx);
        goto after_3;
    // 0x00206194: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x00206198: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_0020619C:
    // 0x0020619C: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_002061A0:
    // 0x002061A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x002061A4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002061A8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002061AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002061B0: jr          $ra
    // 0x002061B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002061B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002681BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002681BC: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x002681C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002681C4: beq         $v1, $v0, L_002681D4
    if (ctx->r3 == ctx->r2) {
        // 0x002681C8: nop
    
            goto L_002681D4;
    }
    // 0x002681C8: nop

L_002681CC:
    // 0x002681CC: jr          $ra
    // 0x002681D0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x002681D0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_002681D4:
    // 0x002681D4: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x002681D8: andi        $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 & 0X2000;
    // 0x002681DC: beq         $v0, $zero, L_002681CC
    if (ctx->r2 == 0) {
        // 0x002681E0: nop
    
            goto L_002681CC;
    }
    // 0x002681E0: nop

    // 0x002681E4: lw          $a0, 0x170($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X170);
    // 0x002681E8: beq         $a0, $zero, L_00268208
    if (ctx->r4 == 0) {
        // 0x002681EC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00268208;
    }
    // 0x002681EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002681F0: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x002681F4: lui         $a0, 0x1
    ctx->r4 = S32(0X1 << 16);
    // 0x002681F8: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x002681FC: bne         $v1, $zero, L_00268208
    if (ctx->r3 != 0) {
        // 0x00268200: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00268208;
    }
    // 0x00268200: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00268204: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00268208:
    // 0x00268208: jr          $ra
    // 0x0026820C: nop

    return;
    // 0x0026820C: nop

;}
RECOMP_FUNC void func_00226CD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00226CD0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x00226CD4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00226CD8: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x00226CDC: sw          $v0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r2;
    // 0x00226CE0: sw          $v1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r3;
    // 0x00226CE4: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00226CE8: lw          $v1, 0x4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X4);
    // 0x00226CEC: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00226CF0: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    // 0x00226CF4: lw          $v0, 0x0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X0);
    // 0x00226CF8: lw          $v1, 0x4($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4);
    // 0x00226CFC: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x00226D00: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
    // 0x00226D04: jr          $ra
    // 0x00226D08: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x00226D08: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_002240C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002240C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002240C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002240CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002240D0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002240D4: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x002240D8: lui         $a1, 0xDB04
    ctx->r5 = S32(0XDB04 << 16);
    // 0x002240DC: ori         $a1, $a1, 0x4
    ctx->r5 = ctx->r5 | 0X4;
    // 0x002240E0: lui         $a2, 0xDB04
    ctx->r6 = S32(0XDB04 << 16);
    // 0x002240E4: ori         $a2, $a2, 0xC
    ctx->r6 = ctx->r6 | 0XC;
    // 0x002240E8: lui         $a3, 0xDB04
    ctx->r7 = S32(0XDB04 << 16);
    // 0x002240EC: ori         $a3, $a3, 0x14
    ctx->r7 = ctx->r7 | 0X14;
    // 0x002240F0: lui         $t0, 0xDB04
    ctx->r8 = S32(0XDB04 << 16);
    // 0x002240F4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x002240F8: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x002240FC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00224100: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00224104: ori         $t0, $t0, 0x1C
    ctx->r8 = ctx->r8 | 0X1C;
    // 0x00224108: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x0022410C: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x00224110: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x00224114: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x00224118: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0022411C: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
    // 0x00224120: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x00224124: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00224128: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x0022412C: addiu       $a2, $v1, 0x10
    ctx->r6 = ADD32(ctx->r3, 0X10);
    // 0x00224130: sw          $a1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r5;
    // 0x00224134: ori         $a1, $zero, 0xFFFF
    ctx->r5 = 0 | 0XFFFF;
    // 0x00224138: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    // 0x0022413C: sw          $a3, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r7;
    // 0x00224140: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
    // 0x00224144: addiu       $v0, $v1, 0x18
    ctx->r2 = ADD32(ctx->r3, 0X18);
    // 0x00224148: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0022414C: sw          $t0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r8;
    // 0x00224150: jal         0x0020B5D4
    // 0x00224154: sw          $a1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r5;
    func_0020B5D4(rdram, ctx);
        goto after_0;
    // 0x00224154: sw          $a1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r5;
    after_0:
    // 0x00224158: addiu       $a0, $s0, 0x18B0
    ctx->r4 = ADD32(ctx->r16, 0X18B0);
    // 0x0022415C: jal         0x0023118C
    // 0x00224160: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0023118C(rdram, ctx);
        goto after_1;
    // 0x00224160: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x00224164: jal         0x0020B624
    // 0x00224168: nop

    func_0020B624(rdram, ctx);
        goto after_2;
    // 0x00224168: nop

    after_2:
    // 0x0022416C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00224170: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00224174: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00224178: jr          $ra
    // 0x0022417C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0022417C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0025FD30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025FD30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025FD34: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025FD38: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x0025FD3C: beq         $v0, $zero, L_0025FD4C
    if (ctx->r2 == 0) {
        // 0x0025FD40: nop
    
            goto L_0025FD4C;
    }
    // 0x0025FD40: nop

    // 0x0025FD44: jal         0x0025D474
    // 0x0025FD48: nop

    func_0025D474(rdram, ctx);
        goto after_0;
    // 0x0025FD48: nop

    after_0:
L_0025FD4C:
    // 0x0025FD4C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025FD50: jr          $ra
    // 0x0025FD54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025FD54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0029B1EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00262314:
    // 0x0029B1EC: j           L_00262314
    entry_00262314(rdram, ctx);
    return;
;}
RECOMP_FUNC void func_00257830(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00257830: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00257834: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00257838: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0025783C: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x00257840: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00257844: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00257848: sll         $s0, $v1, 3
    ctx->r16 = S32(ctx->r3 << 3);
    // 0x0025784C: addu        $s0, $s0, $v1
    ctx->r16 = ADD32(ctx->r16, ctx->r3);
    // 0x00257850: sll         $v0, $s0, 4
    ctx->r2 = S32(ctx->r16 << 4);
    // 0x00257854: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x00257858: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x0025785C: addu        $s0, $s0, $v1
    ctx->r16 = ADD32(ctx->r16, ctx->r3);
    // 0x00257860: sll         $s0, $s0, 3
    ctx->r16 = S32(ctx->r16 << 3);
    // 0x00257864: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00257868: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    // 0x0025786C: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x00257870: addiu       $a3, $a3, 0x7080
    ctx->r7 = ADD32(ctx->r7, 0X7080);
    // 0x00257874: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00257878: jal         0x00204EDC
    // 0x0025787C: sw          $v1, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r3;
    func_00204EDC(rdram, ctx);
        goto after_0;
    // 0x0025787C: sw          $v1, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r3;
    after_0:
    // 0x00257880: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00257884: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x00257888: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x0025788C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x00257890: jal         0x00266C5C
    // 0x00257894: sw          $a0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r4;
    func_00266C5C(rdram, ctx);
        goto after_1;
    // 0x00257894: sw          $a0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r4;
    after_1:
    // 0x00257898: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0025789C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002578A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002578A4: jr          $ra
    // 0x002578A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002578A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00408FB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00408FB0: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x00408FB4: lw          $v1, -0x14C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X14C);
    // 0x00408FB8: beq         $v1, $zero, L_00408FE8
    if (ctx->r3 == 0) {
        // 0x00408FBC: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_00408FE8;
    }
    // 0x00408FBC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_00408FC0:
    // 0x00408FC0: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x00408FC4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00408FC8: bne         $v0, $a0, L_00408FDC
    if (ctx->r2 != ctx->r4) {
        // 0x00408FCC: nop
    
            goto L_00408FDC;
    }
    // 0x00408FCC: nop

    // 0x00408FD0: lw          $v0, 0x144($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X144);
    // 0x00408FD4: bne         $v0, $zero, L_00408FE8
    if (ctx->r2 != 0) {
        // 0x00408FD8: nop
    
            goto L_00408FE8;
    }
    // 0x00408FD8: nop

L_00408FDC:
    // 0x00408FDC: lw          $v1, 0x28C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X28C);
    // 0x00408FE0: bne         $v1, $zero, L_00408FC0
    if (ctx->r3 != 0) {
        // 0x00408FE4: nop
    
            goto L_00408FC0;
    }
    // 0x00408FE4: nop

L_00408FE8:
    // 0x00408FE8: jr          $ra
    // 0x00408FEC: nop

    return;
    // 0x00408FEC: nop

;}
RECOMP_FUNC void func_002658A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002658A0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x002658A4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x002658A8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002658AC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x002658B0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x002658B4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x002658B8: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x002658BC: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x002658C0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x002658C4: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x002658C8: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x002658CC: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x002658D0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x002658D4: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x002658D8: lw          $a3, 0x4($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X4);
    // 0x002658DC: jal         0x00237EE4
    // 0x002658E0: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_00237EE4(rdram, ctx);
        goto after_0;
    // 0x002658E0: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_0:
    // 0x002658E4: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x002658E8: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x002658EC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x002658F0: jal         0x00220260
    // 0x002658F4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_00220260(rdram, ctx);
        goto after_1;
    // 0x002658F4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x002658F8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x002658FC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x00265900: jr          $ra
    // 0x00265904: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00265904: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0023FDF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023FDF0: addiu       $sp, $sp, -0x190
    ctx->r29 = ADD32(ctx->r29, -0X190);
    // 0x0023FDF4: sw          $ra, 0x17C($sp)
    MEM_W(0X17C, ctx->r29) = ctx->r31;
    // 0x0023FDF8: sw          $fp, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->r30;
    // 0x0023FDFC: sw          $s7, 0x174($sp)
    MEM_W(0X174, ctx->r29) = ctx->r23;
    // 0x0023FE00: sw          $s6, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->r22;
    // 0x0023FE04: sw          $s5, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->r21;
    // 0x0023FE08: sw          $s4, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r20;
    // 0x0023FE0C: sw          $s3, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->r19;
    // 0x0023FE10: sw          $s2, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->r18;
    // 0x0023FE14: sw          $s1, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->r17;
    // 0x0023FE18: sw          $s0, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r16;
    // 0x0023FE1C: sdc1        $f21, 0x188($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X188, ctx->r29);
    // 0x0023FE20: sdc1        $f20, 0x180($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X180, ctx->r29);
    // 0x0023FE24: sw          $a0, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->r4;
    // 0x0023FE28: sw          $a2, 0x198($sp)
    MEM_W(0X198, ctx->r29) = ctx->r6;
    // 0x0023FE2C: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0023FE30: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x0023FE34: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0023FE38: addu        $s6, $a3, $zero
    ctx->r22 = ADD32(ctx->r7, 0);
    // 0x0023FE3C: bgez        $v0, L_0023FE68
    if (SIGNED(ctx->r2) >= 0) {
        // 0x0023FE40: sw          $zero, 0x150($sp)
        MEM_W(0X150, ctx->r29) = 0;
            goto L_0023FE68;
    }
    // 0x0023FE40: sw          $zero, 0x150($sp)
    MEM_W(0X150, ctx->r29) = 0;
    // 0x0023FE44: lw          $v0, 0x14($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X14);
    // 0x0023FE48: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x0023FE4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0023FE50: beq         $v1, $v0, L_0023FE60
    if (ctx->r3 == ctx->r2) {
        // 0x0023FE54: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_0023FE60;
    }
    // 0x0023FE54: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0023FE58: bne         $v1, $v0, L_0023FE68
    if (ctx->r3 != ctx->r2) {
        // 0x0023FE5C: nop
    
            goto L_0023FE68;
    }
    // 0x0023FE5C: nop

L_0023FE60:
    // 0x0023FE60: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x0023FE64: sw          $t0, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->r8;
L_0023FE68:
    // 0x0023FE68: lw          $v0, 0x98($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X98);
    // 0x0023FE6C: beq         $v0, $zero, L_0023FE84
    if (ctx->r2 == 0) {
        // 0x0023FE70: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_0023FE84;
    }
    // 0x0023FE70: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x0023FE74: jal         0x0021F358
    // 0x0023FE78: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_0021F358(rdram, ctx);
        goto after_0;
    // 0x0023FE78: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_0:
    // 0x0023FE7C: j           L_0023FE88
    // 0x0023FE80: addu        $s7, $v0, $zero
    ctx->r23 = ADD32(ctx->r2, 0);
        goto L_0023FE88;
    // 0x0023FE80: addu        $s7, $v0, $zero
    ctx->r23 = ADD32(ctx->r2, 0);
L_0023FE84:
    // 0x0023FE84: addu        $s7, $zero, $zero
    ctx->r23 = ADD32(0, 0);
L_0023FE88:
    // 0x0023FE88: beq         $s7, $zero, L_002400DC
    if (ctx->r23 == 0) {
        // 0x0023FE8C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_002400DC;
    }
    // 0x0023FE8C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0023FE90: lwc1        $f0, 0x38($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X38);
    // 0x0023FE94: lwc1        $f1, 0x34($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X34);
    // 0x0023FE98: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0023FE9C: nop

    // 0x0023FEA0: bc1fl       L_0023FEA8
    if (!c1cs) {
        // 0x0023FEA4: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0023FEA8;
    }
    goto skip_0;
    // 0x0023FEA4: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_0:
L_0023FEA8:
    // 0x0023FEA8: lwc1        $f21, 0x3C($s4)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r20, 0X3C);
    // 0x0023FEAC: c.le.s      $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f0.fl <= ctx->f21.fl;
    // 0x0023FEB0: nop

    // 0x0023FEB4: bc1fl       L_0023FEBC
    if (!c1cs) {
        // 0x0023FEB8: mov.s       $f21, $f0
        CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
            goto L_0023FEBC;
    }
    goto skip_1;
    // 0x0023FEB8: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    skip_1:
L_0023FEBC:
    // 0x0023FEBC: lw          $a0, 0x0($s7)
    ctx->r4 = MEM_W(ctx->r23, 0X0);
    // 0x0023FEC0: jal         0x002017D4
    // 0x0023FEC4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x0023FEC4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x0023FEC8: sw          $v0, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->r2;
    // 0x0023FECC: lw          $fp, 0x0($v0)
    ctx->r30 = MEM_W(ctx->r2, 0X0);
    // 0x0023FED0: blez        $fp, L_002400C8
    if (SIGNED(ctx->r30) <= 0) {
        // 0x0023FED4: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_002400C8;
    }
    // 0x0023FED4: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0023FED8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023FEDC: lwc1        $f20, 0x67FC($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X67FC);
    // 0x0023FEE0: addiu       $s5, $sp, 0xF0
    ctx->r21 = ADD32(ctx->r29, 0XF0);
L_0023FEE4:
    // 0x0023FEE4: lw          $a0, 0x14C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X14C);
    // 0x0023FEE8: jal         0x002017D4
    // 0x0023FEEC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x0023FEEC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x0023FEF0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0023FEF4: jal         0x002017D4
    // 0x0023FEF8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x0023FEF8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x0023FEFC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0023FF00: lw          $v0, 0x6C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X6C);
    // 0x0023FF04: lw          $v1, 0x14C($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X14C);
    // 0x0023FF08: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0023FF0C: beql        $v0, $zero, L_002400BC
    if (ctx->r2 == 0) {
        // 0x0023FF10: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_002400BC;
    }
    goto skip_2;
    // 0x0023FF10: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_2:
    // 0x0023FF14: lw          $t0, 0x150($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X150);
    // 0x0023FF18: beq         $t0, $zero, L_0023FF3C
    if (ctx->r8 == 0) {
        // 0x0023FF1C: nop
    
            goto L_0023FF3C;
    }
    // 0x0023FF1C: nop

    // 0x0023FF20: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x0023FF24: andi        $v1, $v0, 0x3
    ctx->r3 = ctx->r2 & 0X3;
    // 0x0023FF28: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x0023FF2C: beq         $v0, $zero, L_0023FF3C
    if (ctx->r2 == 0) {
        // 0x0023FF30: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_0023FF3C;
    }
    // 0x0023FF30: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x0023FF34: nor         $v0, $zero, $v1
    ctx->r2 = ~(0 | ctx->r3);
    // 0x0023FF38: srl         $s3, $v0, 31
    ctx->r19 = S32(U32(ctx->r2) >> 31);
L_0023FF3C:
    // 0x0023FF3C: lw          $v1, 0x98($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X98);
    // 0x0023FF40: sll         $s2, $s1, 6
    ctx->r18 = S32(ctx->r17 << 6);
    // 0x0023FF44: addu        $v1, $v1, $s2
    ctx->r3 = ADD32(ctx->r3, ctx->r18);
    // 0x0023FF48: lh          $v0, 0x18($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X18);
    // 0x0023FF4C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x0023FF50: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x0023FF54: swc1        $f4, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f4.u32l;
    // 0x0023FF58: lh          $v0, 0x1A($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X1A);
    // 0x0023FF5C: mtc1        $v0, $f2
    ctx->f2.u32l = ctx->r2;
    // 0x0023FF60: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x0023FF64: swc1        $f2, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f2.u32l;
    // 0x0023FF68: lh          $v0, 0x1C($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X1C);
    // 0x0023FF6C: mtc1        $v0, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r2;
    // 0x0023FF70: cvt.s.w     $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    ctx->f3.fl = CVT_S_W(ctx->f_odd[(3 - 1) * 2]);
    // 0x0023FF74: swc1        $f3, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x0023FF78: lwc1        $f0, 0x60($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X60);
    // 0x0023FF7C: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x0023FF80: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023FF84: lwc1        $f1, 0x6800($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6800);
    // 0x0023FF88: beq         $s3, $zero, L_0023FF94
    if (ctx->r19 == 0) {
        // 0x0023FF8C: add.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
            goto L_0023FF94;
    }
    // 0x0023FF8C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0023FF90: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
L_0023FF94:
    // 0x0023FF94: sub.s       $f5, $f4, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f5.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x0023FF98: sub.s       $f7, $f2, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f7.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x0023FF9C: sub.s       $f6, $f3, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f3.fl - ctx->f0.fl;
    // 0x0023FFA0: add.s       $f1, $f4, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x0023FFA4: add.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x0023FFA8: add.s       $f2, $f3, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f3.fl + ctx->f0.fl;
    // 0x0023FFAC: swc1        $f5, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x0023FFB0: swc1        $f7, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x0023FFB4: swc1        $f6, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f6.u32l;
    // 0x0023FFB8: swc1        $f1, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0023FFBC: swc1        $f4, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->f4.u32l;
    // 0x0023FFC0: swc1        $f2, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->f2.u32l;
    // 0x0023FFC4: lwc1        $f0, 0x0($s6)
    ctx->f0.u32l = MEM_W(ctx->r22, 0X0);
    // 0x0023FFC8: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0023FFCC: nop

    // 0x0023FFD0: bc1fl       L_002400BC
    if (!c1cs) {
        // 0x0023FFD4: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_002400BC;
    }
    goto skip_3;
    // 0x0023FFD4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_3:
    // 0x0023FFD8: lwc1        $f0, 0xC($s6)
    ctx->f0.u32l = MEM_W(ctx->r22, 0XC);
    // 0x0023FFDC: c.lt.s      $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f5.fl < ctx->f0.fl;
    // 0x0023FFE0: nop

    // 0x0023FFE4: bc1fl       L_002400BC
    if (!c1cs) {
        // 0x0023FFE8: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_002400BC;
    }
    goto skip_4;
    // 0x0023FFE8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_4:
    // 0x0023FFEC: lwc1        $f0, 0x8($s6)
    ctx->f0.u32l = MEM_W(ctx->r22, 0X8);
    // 0x0023FFF0: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x0023FFF4: nop

    // 0x0023FFF8: bc1fl       L_002400BC
    if (!c1cs) {
        // 0x0023FFFC: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_002400BC;
    }
    goto skip_5;
    // 0x0023FFFC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_5:
    // 0x00240000: lwc1        $f0, 0x14($s6)
    ctx->f0.u32l = MEM_W(ctx->r22, 0X14);
    // 0x00240004: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x00240008: nop

    // 0x0024000C: bc1fl       L_002400BC
    if (!c1cs) {
        // 0x00240010: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_002400BC;
    }
    goto skip_6;
    // 0x00240010: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_6:
    // 0x00240014: lwc1        $f0, 0x4($s6)
    ctx->f0.u32l = MEM_W(ctx->r22, 0X4);
    // 0x00240018: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x0024001C: nop

    // 0x00240020: bc1fl       L_002400BC
    if (!c1cs) {
        // 0x00240024: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_002400BC;
    }
    goto skip_7;
    // 0x00240024: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_7:
    // 0x00240028: lwc1        $f0, 0x10($s6)
    ctx->f0.u32l = MEM_W(ctx->r22, 0X10);
    // 0x0024002C: c.lt.s      $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f7.fl < ctx->f0.fl;
    // 0x00240030: nop

    // 0x00240034: bc1fl       L_002400BC
    if (!c1cs) {
        // 0x00240038: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_002400BC;
    }
    goto skip_8;
    // 0x00240038: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_8:
    // 0x0024003C: lw          $a0, 0x190($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X190);
    // 0x00240040: addiu       $a1, $sp, 0x130
    ctx->r5 = ADD32(ctx->r29, 0X130);
    // 0x00240044: jal         0x0023A640
    // 0x00240048: addiu       $a2, $sp, 0x148
    ctx->r6 = ADD32(ctx->r29, 0X148);
    func_0023A640(rdram, ctx);
        goto after_4;
    // 0x00240048: addiu       $a2, $sp, 0x148
    ctx->r6 = ADD32(ctx->r29, 0X148);
    after_4:
    // 0x0024004C: beql        $v0, $zero, L_002400BC
    if (ctx->r2 == 0) {
        // 0x00240050: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_002400BC;
    }
    goto skip_9;
    // 0x00240050: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_9:
    // 0x00240054: lw          $a1, 0x98($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X98);
    // 0x00240058: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x0024005C: jal         0x0020D908
    // 0x00240060: addu        $a1, $a1, $s2
    ctx->r5 = ADD32(ctx->r5, ctx->r18);
    func_0020D908(rdram, ctx);
        goto after_5;
    // 0x00240060: addu        $a1, $a1, $s2
    ctx->r5 = ADD32(ctx->r5, ctx->r18);
    after_5:
    // 0x00240064: beq         $s3, $zero, L_00240084
    if (ctx->r19 == 0) {
        // 0x00240068: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_00240084;
    }
    // 0x00240068: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x0024006C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x00240070: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x00240074: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x00240078: jal         0x0021034C
    // 0x0024007C: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    func_0021034C(rdram, ctx);
        goto after_6;
    // 0x0024007C: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    after_6:
    // 0x00240080: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
L_00240084:
    // 0x00240084: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00240088: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x0024008C: jal         0x0020F908
    // 0x00240090: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    func_0020F908(rdram, ctx);
        goto after_7;
    // 0x00240090: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    after_7:
    // 0x00240094: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x00240098: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    // 0x0024009C: lw          $a0, 0x190($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X190);
    // 0x002400A0: lw          $a3, 0x198($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X198);
    // 0x002400A4: addiu       $v0, $sp, 0x20
    ctx->r2 = ADD32(ctx->r29, 0X20);
    // 0x002400A8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x002400AC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x002400B0: jal         0x0023F880
    // 0x002400B4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    func_0023F880(rdram, ctx);
        goto after_8;
    // 0x002400B4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    after_8:
    // 0x002400B8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_002400BC:
    // 0x002400BC: slt         $v0, $s1, $fp
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x002400C0: bne         $v0, $zero, L_0023FEE4
    if (ctx->r2 != 0) {
        // 0x002400C4: nop
    
            goto L_0023FEE4;
    }
    // 0x002400C4: nop

L_002400C8:
    // 0x002400C8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x002400CC: jal         0x002051F4
    // 0x002400D0: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    func_002051F4(rdram, ctx);
        goto after_9;
    // 0x002400D0: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    after_9:
    // 0x002400D4: j           L_002402F4
    // 0x002400D8: nop

        goto L_002402F4;
    // 0x002400D8: nop

L_002400DC:
    // 0x002400DC: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x002400E0: addiu       $v0, $v0, 0x67E8
    ctx->r2 = ADD32(ctx->r2, 0X67E8);
    // 0x002400E4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x002400E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002400EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x002400F0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x002400F4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x002400F8: lw          $a1, 0xA4($s4)
    ctx->r5 = MEM_W(ctx->r20, 0XA4);
    // 0x002400FC: lw          $a2, 0xB0($s4)
    ctx->r6 = MEM_W(ctx->r20, 0XB0);
    // 0x00240100: jal         0x0020367C
    // 0x00240104: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_0020367C(rdram, ctx);
        goto after_10;
    // 0x00240104: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_10:
    // 0x00240108: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0024010C: beq         $s0, $zero, L_00240208
    if (ctx->r16 == 0) {
        // 0x00240110: addiu       $v1, $s4, 0xBC
        ctx->r3 = ADD32(ctx->r20, 0XBC);
            goto L_00240208;
    }
    // 0x00240110: addiu       $v1, $s4, 0xBC
    ctx->r3 = ADD32(ctx->r20, 0XBC);
    // 0x00240114: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x00240118: jal         0x002017D4
    // 0x0024011C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_11;
    // 0x0024011C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_11:
    // 0x00240120: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x00240124: swc1        $f0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f0.u32l;
    // 0x00240128: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x0024012C: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
    // 0x00240130: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x00240134: swc1        $f0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f0.u32l;
    // 0x00240138: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x0024013C: swc1        $f0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f0.u32l;
    // 0x00240140: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x00240144: swc1        $f0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f0.u32l;
    // 0x00240148: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x0024014C: swc1        $f0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f0.u32l;
    // 0x00240150: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x00240154: swc1        $f0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f0.u32l;
    // 0x00240158: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x0024015C: swc1        $f0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f0.u32l;
    // 0x00240160: lwc1        $f0, 0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
    // 0x00240164: swc1        $f0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f0.u32l;
    // 0x00240168: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x0024016C: swc1        $f0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f0.u32l;
    // 0x00240170: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x00240174: swc1        $f0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f0.u32l;
    // 0x00240178: lwc1        $f0, 0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
    // 0x0024017C: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    // 0x00240180: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x00240184: swc1        $f0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f0.u32l;
    // 0x00240188: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x0024018C: swc1        $f0, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f0.u32l;
    // 0x00240190: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x00240194: swc1        $f0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f0.u32l;
    // 0x00240198: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x0024019C: swc1        $f0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f0.u32l;
    // 0x002401A0: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x002401A4: swc1        $f0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f0.u32l;
    // 0x002401A8: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x002401AC: swc1        $f0, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f0.u32l;
    // 0x002401B0: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x002401B4: swc1        $f0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f0.u32l;
    // 0x002401B8: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x002401BC: swc1        $f0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f0.u32l;
    // 0x002401C0: lwc1        $f0, 0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
    // 0x002401C4: addiu       $a0, $s4, 0x58
    ctx->r4 = ADD32(ctx->r20, 0X58);
    // 0x002401C8: swc1        $f0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f0.u32l;
    // 0x002401CC: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x002401D0: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    // 0x002401D4: swc1        $f0, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f0.u32l;
    // 0x002401D8: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x002401DC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x002401E0: swc1        $f0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f0.u32l;
    // 0x002401E4: lwc1        $f0, 0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
    // 0x002401E8: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    // 0x002401EC: jal         0x0020F908
    // 0x002401F0: swc1        $f0, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f0.u32l;
    func_0020F908(rdram, ctx);
        goto after_12;
    // 0x002401F0: swc1        $f0, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f0.u32l;
    after_12:
    // 0x002401F4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x002401F8: jal         0x002051F4
    // 0x002401FC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002051F4(rdram, ctx);
        goto after_13;
    // 0x002401FC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_13:
    // 0x00240200: j           L_002402D0
    // 0x00240204: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
        goto L_002402D0;
    // 0x00240204: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
L_00240208:
    // 0x00240208: lwc1        $f0, 0xBC($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0XBC);
    // 0x0024020C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x00240210: lwc1        $f0, 0x4($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X4);
    // 0x00240214: addiu       $v0, $sp, 0x20
    ctx->r2 = ADD32(ctx->r29, 0X20);
    // 0x00240218: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    // 0x0024021C: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x00240220: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x00240224: lwc1        $f0, 0xC($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0XC);
    // 0x00240228: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
    // 0x0024022C: lwc1        $f0, 0x4($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X4);
    // 0x00240230: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
    // 0x00240234: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x00240238: swc1        $f0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f0.u32l;
    // 0x0024023C: lwc1        $f0, 0xC($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0XC);
    // 0x00240240: swc1        $f0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f0.u32l;
    // 0x00240244: lwc1        $f0, 0x4($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X4);
    // 0x00240248: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x0024024C: lwc1        $f0, 0x14($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X14);
    // 0x00240250: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x00240254: lwc1        $f0, 0xBC($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0XBC);
    // 0x00240258: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x0024025C: lwc1        $f0, 0x4($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X4);
    // 0x00240260: swc1        $f0, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f0.u32l;
    // 0x00240264: lwc1        $f0, 0x14($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X14);
    // 0x00240268: swc1        $f0, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f0.u32l;
    // 0x0024026C: lwc1        $f0, 0xBC($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0XBC);
    // 0x00240270: swc1        $f0, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f0.u32l;
    // 0x00240274: lwc1        $f0, 0x10($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X10);
    // 0x00240278: swc1        $f0, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f0.u32l;
    // 0x0024027C: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x00240280: swc1        $f0, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->f0.u32l;
    // 0x00240284: lwc1        $f0, 0xC($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0XC);
    // 0x00240288: swc1        $f0, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f0.u32l;
    // 0x0024028C: lwc1        $f0, 0x10($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X10);
    // 0x00240290: swc1        $f0, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->f0.u32l;
    // 0x00240294: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x00240298: swc1        $f0, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->f0.u32l;
    // 0x0024029C: lwc1        $f0, 0xC($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0XC);
    // 0x002402A0: swc1        $f0, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->f0.u32l;
    // 0x002402A4: lwc1        $f0, 0x10($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X10);
    // 0x002402A8: swc1        $f0, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->f0.u32l;
    // 0x002402AC: lwc1        $f0, 0x14($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X14);
    // 0x002402B0: swc1        $f0, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->f0.u32l;
    // 0x002402B4: lwc1        $f0, 0xBC($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0XBC);
    // 0x002402B8: swc1        $f0, 0x54($v0)
    MEM_W(0X54, ctx->r2) = ctx->f0.u32l;
    // 0x002402BC: lwc1        $f0, 0x10($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X10);
    // 0x002402C0: swc1        $f0, 0x58($v0)
    MEM_W(0X58, ctx->r2) = ctx->f0.u32l;
    // 0x002402C4: lwc1        $f0, 0x14($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X14);
    // 0x002402C8: swc1        $f0, 0x5C($v0)
    MEM_W(0X5C, ctx->r2) = ctx->f0.u32l;
    // 0x002402CC: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
L_002402D0:
    // 0x002402D0: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    // 0x002402D4: lw          $a0, 0x190($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X190);
    // 0x002402D8: lw          $a3, 0x198($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X198);
    // 0x002402DC: addiu       $v0, $sp, 0x20
    ctx->r2 = ADD32(ctx->r29, 0X20);
    // 0x002402E0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x002402E4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x002402E8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x002402EC: jal         0x0023F880
    // 0x002402F0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_0023F880(rdram, ctx);
        goto after_14;
    // 0x002402F0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_14:
L_002402F4:
    // 0x002402F4: lw          $ra, 0x17C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X17C);
    // 0x002402F8: lw          $fp, 0x178($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X178);
    // 0x002402FC: lw          $s7, 0x174($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X174);
    // 0x00240300: lw          $s6, 0x170($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X170);
    // 0x00240304: lw          $s5, 0x16C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X16C);
    // 0x00240308: lw          $s4, 0x168($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X168);
    // 0x0024030C: lw          $s3, 0x164($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X164);
    // 0x00240310: lw          $s2, 0x160($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X160);
    // 0x00240314: lw          $s1, 0x15C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X15C);
    // 0x00240318: lw          $s0, 0x158($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X158);
    // 0x0024031C: ldc1        $f21, 0x188($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X188);
    // 0x00240320: ldc1        $f20, 0x180($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X180);
    // 0x00240324: jr          $ra
    // 0x00240328: addiu       $sp, $sp, 0x190
    ctx->r29 = ADD32(ctx->r29, 0X190);
    return;
    // 0x00240328: addiu       $sp, $sp, 0x190
    ctx->r29 = ADD32(ctx->r29, 0X190);
;}
RECOMP_FUNC void func_0025A918(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025A918: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025A91C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025A920: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025A924: lhu         $a3, 0x8C($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X8C);
    // 0x0025A928: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025A92C: addiu       $a2, $a2, 0x210
    ctx->r6 = ADD32(ctx->r6, 0X210);
    // 0x0025A930: jal         0x00245A98
    // 0x0025A934: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025A934: nop

    after_0:
    // 0x0025A938: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025A93C: jr          $ra
    // 0x0025A940: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025A940: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0025A178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025A178: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025A17C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025A180: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025A184: lhu         $a3, 0x78($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X78);
    // 0x0025A188: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025A18C: addiu       $a2, $a2, -0x520
    ctx->r6 = ADD32(ctx->r6, -0X520);
    // 0x0025A190: jal         0x00245A98
    // 0x0025A194: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025A194: nop

    after_0:
    // 0x0025A198: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025A19C: jr          $ra
    // 0x0025A1A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025A1A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0045D500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045D500: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0045D504: lw          $v1, 0x2038($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2038);
    // 0x0045D508: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045D50C: beq         $v1, $v0, L_0045D53C
    if (ctx->r3 == ctx->r2) {
            // 0x0045D510: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    func_0045D53C(rdram, ctx);
    return;
    }
    // 0x0045D510: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x0045D514: bne         $v0, $zero, L_0045D52C
    if (ctx->r2 != 0) {
        // 0x0045D518: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0045D52C;
    }
    // 0x0045D518: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0045D51C: beq         $v1, $v0, L_0045D54C
    if (ctx->r3 == ctx->r2) {
            // 0x0045D520: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    func_0045D54C(rdram, ctx);
    return;
    }
    // 0x0045D520: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0045D524: beq         $v1, $v0, L_0045D55C
    if (ctx->r3 == ctx->r2) {
            // 0x0045D528: nop

    func_0045D55C(rdram, ctx);
    return;
    }
    // 0x0045D528: nop

L_0045D52C:
    // 0x0045D52C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045D530: addiu       $v0, $v0, 0x40E0
    ctx->r2 = ADD32(ctx->r2, 0X40E0);
    // 0x0045D534: jr          $ra
    // 0x0045D538: nop

    return;
    // 0x0045D538: nop

;}
