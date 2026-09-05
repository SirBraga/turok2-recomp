#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_0025F380(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025F380: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025F384: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025F388: lw          $a0, 0x114($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X114);
    // 0x0025F38C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0025F390: jal         0x00243414
    // 0x0025F394: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0025F394: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_0:
    // 0x0025F398: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025F39C: jr          $ra
    // 0x0025F3A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025F3A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00269DF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00269DF0: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x00269DF4: sdc1        $f21, 0xA8($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0XA8, ctx->r29);
    // 0x00269DF8: mtc1        $a2, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r6;
    // 0x00269DFC: sw          $s2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r18;
    // 0x00269E00: sw          $s1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r17;
    // 0x00269E04: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00269E08: sw          $ra, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r31;
    // 0x00269E0C: sw          $s0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r16;
    // 0x00269E10: sdc1        $f20, 0xA0($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XA0, ctx->r29);
    // 0x00269E14: bne         $s1, $zero, L_00269E30
    if (ctx->r17 != 0) {
        // 0x00269E18: addu        $s2, $a0, $zero
        ctx->r18 = ADD32(ctx->r4, 0);
            goto L_00269E30;
    }
    // 0x00269E18: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00269E1C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00269E20: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    // 0x00269E24: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x00269E28: j           L_00269F40
    // 0x00269E2C: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
        goto L_00269F40;
    // 0x00269E2C: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
L_00269E30:
    // 0x00269E30: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00269E34: lwc1        $f0, 0x7F6C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7F6C);
    // 0x00269E38: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00269E3C: lw          $v0, 0x2608($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2608);
    // 0x00269E40: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x00269E44: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x00269E48: beq         $s1, $v0, L_00269E84
    if (ctx->r17 == ctx->r2) {
        // 0x00269E4C: swc1        $f0, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
            goto L_00269E84;
    }
    // 0x00269E4C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x00269E50: lw          $a1, 0x8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X8);
    // 0x00269E54: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    // 0x00269E58: jal         0x0020EF2C
    // 0x00269E5C: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    func_0020EF2C(rdram, ctx);
        goto after_0;
    // 0x00269E5C: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    after_0:
    // 0x00269E60: lw          $a1, 0xC($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XC);
    // 0x00269E64: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x00269E68: jal         0x0020EF2C
    // 0x00269E6C: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    func_0020EF2C(rdram, ctx);
        goto after_1;
    // 0x00269E6C: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    after_1:
    // 0x00269E70: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00269E74: addiu       $a0, $a0, 0x2020
    ctx->r4 = ADD32(ctx->r4, 0X2020);
    // 0x00269E78: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x00269E7C: jal         0x0020EFDC
    // 0x00269E80: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    func_0020EFDC(rdram, ctx);
        goto after_2;
    // 0x00269E80: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    after_2:
L_00269E84:
    // 0x00269E84: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x00269E88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00269E8C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x00269E90: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00269E94: sw          $s1, 0x2608($at)
    MEM_W(0X2608, ctx->r1) = ctx->r17;
    // 0x00269E98: lui         $t1, 0x800F
    ctx->r9 = S32(0X800F << 16);
    // 0x00269E9C: addiu       $t1, $t1, 0x2020
    ctx->r9 = ADD32(ctx->r9, 0X2020);
    // 0x00269EA0: lw          $v1, 0x0($t1)
    ctx->r3 = MEM_W(ctx->r9, 0X0);
    // 0x00269EA4: lw          $a3, 0x4($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X4);
    // 0x00269EA8: lw          $t0, 0x8($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X8);
    // 0x00269EAC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x00269EB0: sw          $a3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r7;
    // 0x00269EB4: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x00269EB8: jal         0x0020EFDC
    // 0x00269EBC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    func_0020EFDC(rdram, ctx);
        goto after_3;
    // 0x00269EBC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x00269EC0: addiu       $s1, $sp, 0x40
    ctx->r17 = ADD32(ctx->r29, 0X40);
    // 0x00269EC4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00269EC8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x00269ECC: jal         0x0020EFDC
    // 0x00269ED0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0020EFDC(rdram, ctx);
        goto after_4;
    // 0x00269ED0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_4:
    // 0x00269ED4: jal         0x0020F040
    // 0x00269ED8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0020F040(rdram, ctx);
        goto after_5;
    // 0x00269ED8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x00269EDC: lwc1        $f0, 0x44($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X44);
    // 0x00269EE0: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x00269EE4: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x00269EE8: nop

    // 0x00269EEC: bc1f        L_00269F04
    if (!c1cs) {
        // 0x00269EF0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00269F04;
    }
    // 0x00269EF0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00269EF4: lui         $a2, 0xBF80
    ctx->r6 = S32(0XBF80 << 16);
    // 0x00269EF8: jal         0x0020EF60
    // 0x00269EFC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0020EF60(rdram, ctx);
        goto after_6;
    // 0x00269EFC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_6:
    // 0x00269F00: lwc1        $f0, 0x44($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X44);
L_00269F04:
    // 0x00269F04: neg.s       $f1, $f21
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f21.fl); 
    ctx->f1.fl = -ctx->f21.fl;
    // 0x00269F08: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x00269F0C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00269F10: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00269F14: lwc1        $f1, 0x7F70($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7F70);
    // 0x00269F18: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00269F1C: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x00269F20: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x00269F24: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00269F28: lwc1        $f0, 0x7F74($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7F74);
    // 0x00269F2C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00269F30: swc1        $f20, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f20.u32l;
    // 0x00269F34: swc1        $f20, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f20.u32l;
    // 0x00269F38: jal         0x0020EF60
    // 0x00269F3C: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    func_0020EF60(rdram, ctx);
        goto after_7;
    // 0x00269F3C: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    after_7:
L_00269F40:
    // 0x00269F40: lw          $v1, 0x60($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X60);
    // 0x00269F44: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x00269F48: lw          $t0, 0x68($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X68);
    // 0x00269F4C: sw          $v1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r3;
    // 0x00269F50: sw          $a3, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r7;
    // 0x00269F54: sw          $t0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r8;
    // 0x00269F58: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x00269F5C: lw          $ra, 0x9C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X9C);
    // 0x00269F60: lw          $s2, 0x98($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X98);
    // 0x00269F64: lw          $s1, 0x94($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X94);
    // 0x00269F68: lw          $s0, 0x90($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X90);
    // 0x00269F6C: ldc1        $f21, 0xA8($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0XA8);
    // 0x00269F70: ldc1        $f20, 0xA0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XA0);
    // 0x00269F74: jr          $ra
    // 0x00269F78: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x00269F78: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_00253C14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00253C14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00253C18: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00253C1C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00253C20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00253C24: jal         0x0023EF64
    // 0x00253C28: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_0023EF64(rdram, ctx);
        goto after_0;
    // 0x00253C28: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_0:
    // 0x00253C2C: bne         $v0, $zero, L_00253C3C
    if (ctx->r2 != 0) {
        // 0x00253C30: nop
    
            goto L_00253C3C;
    }
    // 0x00253C30: nop

    // 0x00253C34: j           L_00253CE0
    // 0x00253C38: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_00253CE0;
    // 0x00253C38: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00253C3C:
    // 0x00253C3C: lh          $t0, 0xC($v0)
    ctx->r8 = MEM_H(ctx->r2, 0XC);
    // 0x00253C40: sll         $v0, $t0, 1
    ctx->r2 = S32(ctx->r8 << 1);
    // 0x00253C44: addiu       $v0, $v0, 0x934
    ctx->r2 = ADD32(ctx->r2, 0X934);
    // 0x00253C48: addu        $t1, $s0, $v0
    ctx->r9 = ADD32(ctx->r16, ctx->r2);
    // 0x00253C4C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00253C50: bne         $t0, $v0, L_00253C60
    if (ctx->r8 != ctx->r2) {
        // 0x00253C54: addu        $a3, $zero, $zero
        ctx->r7 = ADD32(0, 0);
            goto L_00253C60;
    }
    // 0x00253C54: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00253C58: j           L_00253CD8
    // 0x00253C5C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
        goto L_00253CD8;
    // 0x00253C5C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_00253C60:
    // 0x00253C60: addu        $a2, $a3, $zero
    ctx->r6 = ADD32(ctx->r7, 0);
    // 0x00253C64: addu        $v0, $s0, $a2
    ctx->r2 = ADD32(ctx->r16, ctx->r6);
L_00253C68:
    // 0x00253C68: lb          $v0, 0x972($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X972);
    // 0x00253C6C: beql        $v0, $zero, L_00253CC8
    if (ctx->r2 == 0) {
        // 0x00253C70: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_00253CC8;
    }
    goto skip_0;
    // 0x00253C70: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    skip_0:
    // 0x00253C74: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00253C78: sll         $v0, $a2, 2
    ctx->r2 = S32(ctx->r6 << 2);
    // 0x00253C7C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00253C80: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00253C84: lw          $a0, -0x9E8($at)
    ctx->r4 = MEM_W(ctx->r1, -0X9E8);
L_00253C88:
    // 0x00253C88: lw          $v1, 0x20($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X20);
    // 0x00253C8C: beql        $v1, $zero, L_00253CC8
    if (ctx->r3 == 0) {
        // 0x00253C90: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_00253CC8;
    }
    goto skip_1;
    // 0x00253C90: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    skip_1:
    // 0x00253C94: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x00253C98: bnel        $v0, $t0, L_00253CB8
    if (ctx->r2 != ctx->r8) {
        // 0x00253C9C: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_00253CB8;
    }
    goto skip_2;
    // 0x00253C9C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    skip_2:
    // 0x00253CA0: lh          $v1, 0x2($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X2);
    // 0x00253CA4: slt         $v0, $v1, $a3
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x00253CA8: bnel        $v0, $zero, L_00253CB0
    if (ctx->r2 != 0) {
        // 0x00253CAC: addu        $v1, $a3, $zero
        ctx->r3 = ADD32(ctx->r7, 0);
            goto L_00253CB0;
    }
    goto skip_3;
    // 0x00253CAC: addu        $v1, $a3, $zero
    ctx->r3 = ADD32(ctx->r7, 0);
    skip_3:
L_00253CB0:
    // 0x00253CB0: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
    // 0x00253CB4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_00253CB8:
    // 0x00253CB8: slti        $v0, $a1, 0x3
    ctx->r2 = SIGNED(ctx->r5) < 0X3 ? 1 : 0;
    // 0x00253CBC: bne         $v0, $zero, L_00253C88
    if (ctx->r2 != 0) {
        // 0x00253CC0: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_00253C88;
    }
    // 0x00253CC0: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x00253CC4: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_00253CC8:
    // 0x00253CC8: slti        $v0, $a2, 0x23
    ctx->r2 = SIGNED(ctx->r6) < 0X23 ? 1 : 0;
    // 0x00253CCC: bne         $v0, $zero, L_00253C68
    if (ctx->r2 != 0) {
        // 0x00253CD0: addu        $v0, $s0, $a2
        ctx->r2 = ADD32(ctx->r16, ctx->r6);
            goto L_00253C68;
    }
    // 0x00253CD0: addu        $v0, $s0, $a2
    ctx->r2 = ADD32(ctx->r16, ctx->r6);
    // 0x00253CD4: addu        $v1, $a3, $zero
    ctx->r3 = ADD32(ctx->r7, 0);
L_00253CD8:
    // 0x00253CD8: lh          $v0, 0x0($t1)
    ctx->r2 = MEM_H(ctx->r9, 0X0);
    // 0x00253CDC: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
L_00253CE0:
    // 0x00253CE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00253CE4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00253CE8: jr          $ra
    // 0x00253CEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00253CEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00254F24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00254F24: lw          $v0, 0x380($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X380);
    // 0x00254F28: beq         $v0, $zero, L_00254F58
    if (ctx->r2 == 0) {
            // 0x00254F2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    func_00254F58(rdram, ctx);
    return;
    }
    // 0x00254F2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00254F30: lw          $v0, 0xA50($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XA50);
    // 0x00254F34: lw          $v0, 0xB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XB0);
    // 0x00254F38: andi        $v0, $v0, 0xC000
    ctx->r2 = ctx->r2 & 0XC000;
    // 0x00254F3C: beq         $v0, $zero, L_00254F4C
    if (ctx->r2 == 0) {
            // 0x00254F40: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    func_00254F4C(rdram, ctx);
    return;
    }
    // 0x00254F40: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00254F44: jr          $ra
    // 0x00254F48: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00254F48: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_002581C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002581C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002581C8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002581CC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x002581D0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x002581D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002581D8: lw          $a0, 0x1A8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X1A8);
    // 0x002581DC: lw          $v0, 0xA64($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA64);
    // 0x002581E0: andi        $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 & 0X2000;
    // 0x002581E4: bne         $v0, $zero, L_0025835C
    if (ctx->r2 != 0) {
        // 0x002581E8: addu        $s0, $a1, $zero
        ctx->r16 = ADD32(ctx->r5, 0);
            goto L_0025835C;
    }
    // 0x002581E8: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x002581EC: lh          $v1, 0x996($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X996);
    // 0x002581F0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x002581F4: bne         $v0, $zero, L_00258328
    if (ctx->r2 != 0) {
        // 0x002581F8: slti        $v0, $v1, 0x4
        ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
            goto L_00258328;
    }
    // 0x002581F8: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x002581FC: bne         $v0, $zero, L_00258214
    if (ctx->r2 != 0) {
        // 0x00258200: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_00258214;
    }
    // 0x00258200: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x00258204: beq         $v1, $v0, L_002582D0
    if (ctx->r3 == ctx->r2) {
        // 0x00258208: nop
    
            goto L_002582D0;
    }
    // 0x00258208: nop

    // 0x0025820C: j           L_00258328
    // 0x00258210: nop

        goto L_00258328;
    // 0x00258210: nop

L_00258214:
    // 0x00258214: lw          $v0, 0xB8C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB8C);
    // 0x00258218: beq         $v0, $zero, L_00258238
    if (ctx->r2 == 0) {
        // 0x0025821C: nop
    
            goto L_00258238;
    }
    // 0x0025821C: nop

    // 0x00258220: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00258224: lwc1        $f0, 0x7250($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7250);
    // 0x00258228: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0025822C: swc1        $f0, -0x1CB0($at)
    MEM_W(-0X1CB0, ctx->r1) = ctx->f0.u32l;
    // 0x00258230: j           L_00258328
    // 0x00258234: nop

        goto L_00258328;
    // 0x00258234: nop

L_00258238:
    // 0x00258238: lwc1        $f1, 0x40($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X40);
    // 0x0025823C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00258240: lwc1        $f0, 0x7254($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7254);
    // 0x00258244: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00258248: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025824C: lwc1        $f0, 0x7258($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7258);
    // 0x00258250: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00258254: nop

    // 0x00258258: bc1t        L_0025827C
    if (c1cs) {
        // 0x0025825C: mov.s       $f2, $f1
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.fl = ctx->f1.fl;
            goto L_0025827C;
    }
    // 0x0025825C: mov.s       $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.fl = ctx->f1.fl;
    // 0x00258260: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00258264: lwc1        $f2, 0x725C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X725C);
    // 0x00258268: c.lt.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl < ctx->f2.fl;
    // 0x0025826C: nop

    // 0x00258270: bc1t        L_0025828C
    if (c1cs) {
        // 0x00258274: nop
    
            goto L_0025828C;
    }
    // 0x00258274: nop

    // 0x00258278: mov.s       $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.fl = ctx->f1.fl;
L_0025827C:
    // 0x0025827C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x00258280: nop

    // 0x00258284: bc1tl       L_0025828C
    if (c1cs) {
        // 0x00258288: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_0025828C;
    }
    goto skip_0;
    // 0x00258288: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_0:
L_0025828C:
    // 0x0025828C: lwc1        $f0, 0x40($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X40);
    // 0x00258290: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00258294: lwc1        $f1, 0x7260($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7260);
    // 0x00258298: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0025829C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002582A0: lwc1        $f1, 0x7264($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7264);
    // 0x002582A4: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x002582A8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002582AC: lwc1        $f1, 0x7268($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7268);
    // 0x002582B0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002582B4: swc1        $f2, -0x1CB0($at)
    MEM_W(-0X1CB0, ctx->r1) = ctx->f2.u32l;
    // 0x002582B8: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x002582BC: nop

    // 0x002582C0: bc1tl       L_002582C8
    if (c1cs) {
        // 0x002582C4: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_002582C8;
    }
    goto skip_1;
    // 0x002582C4: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_1:
L_002582C8:
    // 0x002582C8: j           L_00258328
    // 0x002582CC: swc1        $f0, 0x1294($a0)
    MEM_W(0X1294, ctx->r4) = ctx->f0.u32l;
        goto L_00258328;
    // 0x002582CC: swc1        $f0, 0x1294($a0)
    MEM_W(0X1294, ctx->r4) = ctx->f0.u32l;
L_002582D0:
    // 0x002582D0: lwc1        $f1, 0x40($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X40);
    // 0x002582D4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002582D8: lwc1        $f0, 0x726C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X726C);
    // 0x002582DC: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x002582E0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002582E4: lwc1        $f0, 0x7270($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7270);
    // 0x002582E8: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x002582EC: nop

    // 0x002582F0: bc1tl       L_00258320
    if (c1cs) {
        // 0x002582F4: mov.s       $f1, $f0
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
            goto L_00258320;
    }
    goto skip_2;
    // 0x002582F4: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    skip_2:
    // 0x002582F8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002582FC: lwc1        $f2, 0x7274($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X7274);
    // 0x00258300: c.lt.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl < ctx->f2.fl;
    // 0x00258304: nop

    // 0x00258308: bc1tl       L_00258320
    if (c1cs) {
        // 0x0025830C: mov.s       $f1, $f2
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    ctx->f1.fl = ctx->f2.fl;
            goto L_00258320;
    }
    goto skip_3;
    // 0x0025830C: mov.s       $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    ctx->f1.fl = ctx->f2.fl;
    skip_3:
    // 0x00258310: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00258314: nop

    // 0x00258318: bc1tl       L_00258320
    if (c1cs) {
        // 0x0025831C: mov.s       $f1, $f0
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
            goto L_00258320;
    }
    goto skip_4;
    // 0x0025831C: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    skip_4:
L_00258320:
    // 0x00258320: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00258324: swc1        $f1, -0x1CB0($at)
    MEM_W(-0X1CB0, ctx->r1) = ctx->f_odd[(1 - 1) * 2];
L_00258328:
    // 0x00258328: lh          $a1, 0x996($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X996);
    // 0x0025832C: jal         0x0024E700
    // 0x00258330: nop

    func_0024E700(rdram, ctx);
        goto after_0;
    // 0x00258330: nop

    after_0:
    // 0x00258334: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00258338: bne         $v0, $v1, L_0025834C
    if (ctx->r2 != ctx->r3) {
        // 0x0025833C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0025834C;
    }
    // 0x0025833C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00258340: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00258344: j           L_00258354
    // 0x00258348: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
        goto L_00258354;
    // 0x00258348: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
L_0025834C:
    // 0x0025834C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00258350: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
L_00258354:
    // 0x00258354: jal         0x00243414
    // 0x00258358: nop

    func_00243414(rdram, ctx);
        goto after_1;
    // 0x00258358: nop

    after_1:
L_0025835C:
    // 0x0025835C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00258360: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00258364: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00258368: jr          $ra
    // 0x0025836C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0025836C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00421E44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00421E44: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00421E48: lw          $v0, 0x9B8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9B8);
    // 0x00421E4C: beq         $v0, $zero, L_00421E64
    if (ctx->r2 == 0) {
        // 0x00421E50: nop
    
            goto L_00421E64;
    }
    // 0x00421E50: nop

    // 0x00421E54: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00421E58: addiu       $v0, $v0, 0x49C4
    ctx->r2 = ADD32(ctx->r2, 0X49C4);
    // 0x00421E5C: j           L_00421E70
    // 0x00421E60: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00421E70;
    // 0x00421E60: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00421E64:
    // 0x00421E64: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00421E68: addiu       $v0, $v0, 0x49D0
    ctx->r2 = ADD32(ctx->r2, 0X49D0);
    // 0x00421E6C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00421E70:
    // 0x00421E70: jr          $ra
    // 0x00421E74: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00421E74: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0028CE4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028CE4C: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x0028CE50: addiu       $v0, $zero, -0x800
    ctx->r2 = ADD32(0, -0X800);
    // 0x0028CE54: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x0028CE58: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x0028CE5C: andi        $a1, $a1, 0x7C0
    ctx->r5 = ctx->r5 & 0X7C0;
    // 0x0028CE60: or          $a0, $a0, $a1
    ctx->r4 = ctx->r4 | ctx->r5;
    // 0x0028CE64: sra         $a2, $a2, 2
    ctx->r6 = S32(SIGNED(ctx->r6) >> 2);
    // 0x0028CE68: andi        $a2, $a2, 0x3E
    ctx->r6 = ctx->r6 & 0X3E;
    // 0x0028CE6C: or          $a0, $a0, $a2
    ctx->r4 = ctx->r4 | ctx->r6;
    // 0x0028CE70: ori         $a0, $a0, 0x1
    ctx->r4 = ctx->r4 | 0X1;
    // 0x0028CE74: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028CE78: sh          $a0, -0xE7C($at)
    MEM_H(-0XE7C, ctx->r1) = ctx->r4;
    // 0x0028CE7C: jr          $ra
    // 0x0028CE80: nop

    return;
    // 0x0028CE80: nop

;}
RECOMP_FUNC void func_00290EF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00290EF0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00290EF4: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x00290EF8: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    // 0x00290EFC: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x00290F00: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00290F04: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00290F08: jal         0x00291034
    // 0x00290F0C: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_00291034(rdram, ctx);
        goto after_0;
    // 0x00290F0C: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x00290F10: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00290F14: jr          $ra
    // 0x00290F18: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00290F18: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00262CBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00262CBC: addiu       $v0, $zero, 0x847
    ctx->r2 = ADD32(0, 0X847);
    // 0x00262CC0: beq         $a0, $v0, L_00262D3C
    if (ctx->r4 == ctx->r2) {
        // 0x00262CC4: slt         $v0, $a0, $v0
        ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_00262D3C;
    }
    // 0x00262CC4: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00262CC8: bne         $v0, $zero, L_00262D2C
    if (ctx->r2 != 0) {
        // 0x00262CCC: addiu       $v0, $zero, 0x848
        ctx->r2 = ADD32(0, 0X848);
            goto L_00262D2C;
    }
    // 0x00262CCC: addiu       $v0, $zero, 0x848
    ctx->r2 = ADD32(0, 0X848);
    // 0x00262CD0: beq         $a0, $v0, L_00262D4C
    if (ctx->r4 == ctx->r2) {
        // 0x00262CD4: addiu       $v0, $zero, 0x84A
        ctx->r2 = ADD32(0, 0X84A);
            goto L_00262D4C;
    }
    // 0x00262CD4: addiu       $v0, $zero, 0x84A
    ctx->r2 = ADD32(0, 0X84A);
    // 0x00262CD8: beq         $a0, $v0, L_00262D5C
    if (ctx->r4 == ctx->r2) {
        // 0x00262CDC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00262D5C;
    }
    // 0x00262CDC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00262CE0: jr          $ra
    // 0x00262CE4: nop

    return;
    // 0x00262CE4: nop

    // 0x00262CE8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00262CEC: lbu         $v0, -0x54F7($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X54F7);
    // 0x00262CF0: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
L_00262CF4:
    // 0x00262CF4: jr          $ra
    // 0x00262CF8: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    return;
    // 0x00262CF8: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x00262CFC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00262D00: lbu         $v0, -0x54F6($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X54F6);
    // 0x00262D04: j           L_00262CF4
    // 0x00262D08: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
        goto L_00262CF4;
    // 0x00262D08: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x00262D0C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00262D10: lbu         $v0, -0x54F5($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X54F5);
    // 0x00262D14: j           L_00262CF4
    // 0x00262D18: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
        goto L_00262CF4;
    // 0x00262D18: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x00262D1C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00262D20: lbu         $v0, -0x54F4($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X54F4);
    // 0x00262D24: j           L_00262CF4
    // 0x00262D28: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
        goto L_00262CF4;
    // 0x00262D28: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
L_00262D2C:
    // 0x00262D2C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00262D30: lbu         $v0, -0x54F3($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X54F3);
    // 0x00262D34: j           L_00262CF4
    // 0x00262D38: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
        goto L_00262CF4;
    // 0x00262D38: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
L_00262D3C:
    // 0x00262D3C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00262D40: lbu         $v0, -0x54F2($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X54F2);
    // 0x00262D44: j           L_00262CF4
    // 0x00262D48: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
        goto L_00262CF4;
    // 0x00262D48: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
L_00262D4C:
    // 0x00262D4C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00262D50: lbu         $v0, -0x54F1($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X54F1);
    // 0x00262D54: j           L_00262CF4
    // 0x00262D58: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
        goto L_00262CF4;
    // 0x00262D58: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
L_00262D5C:
    // 0x00262D5C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00262D60: lbu         $v0, -0x54EF($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X54EF);
    // 0x00262D64: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x00262D68: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x00262D6C: jr          $ra
    // 0x00262D70: nop

    return;
    // 0x00262D70: nop

;}
RECOMP_FUNC void func_0045B6D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045B6D0: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x0045B6D4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045B6D8: sw          $v0, 0x9C0($at)
    MEM_W(0X9C0, ctx->r1) = ctx->r2;
    // 0x0045B6DC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045B6E0: sw          $zero, 0x98C($at)
    MEM_W(0X98C, ctx->r1) = 0;
    // 0x0045B6E4: jr          $ra
    // 0x0045B6E8: nop

    return;
    // 0x0045B6E8: nop

;}
RECOMP_FUNC void func_00296314(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00296314: beq         $a2, $zero, L_0029632C
    if (ctx->r6 == 0) {
        // 0x00296318: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0029632C;
    }
    // 0x00296318: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0029631C: sllv        $v0, $v0, $a2
    ctx->r2 = S32(ctx->r2 << (ctx->r6 & 31));
    // 0x00296320: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00296324: cvt.d.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.d = CVT_D_W(ctx->f0.u32l);
    // 0x00296328: mul.d       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f0.d); 
    ctx->f12.d = MUL_D(ctx->f12.d, ctx->f0.d);
L_0029632C:
    // 0x0029632C: jr          $ra
    // 0x00296330: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
    return;
    // 0x00296330: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
;}
RECOMP_FUNC void func_002627EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002627EC: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x002627F0: lw          $v1, 0x1C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1C);
    // 0x002627F4: bne         $v1, $zero, L_00262800
    if (ctx->r3 != 0) {
        // 0x002627F8: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_00262800;
    }
    // 0x002627F8: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x002627FC: addiu       $v0, $zero, 0x2F44
    ctx->r2 = ADD32(0, 0X2F44);
L_00262800:
    // 0x00262800: jr          $ra
    // 0x00262804: nop

    return;
    // 0x00262804: nop

;}
RECOMP_FUNC void func_00290E10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00290E10: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00290E14: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x00290E18: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    // 0x00290E1C: sw          $a1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r5;
    // 0x00290E20: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x00290E24: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00290E28: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00290E2C: jal         0x00291034
    // 0x00290E30: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_00291034(rdram, ctx);
        goto after_0;
    // 0x00290E30: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x00290E34: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00290E38: jr          $ra
    // 0x00290E3C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00290E3C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0028E9E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028E9E0: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x0028E9E4: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0028E9E8: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x0028E9EC: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0028E9F0: bnel        $v0, $zero, L_0028E9F8
    if (ctx->r2 != 0) {
        // 0x0028E9F4: sw          $a1, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r5;
            goto L_0028E9F8;
    }
    goto skip_0;
    // 0x0028E9F4: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    skip_0:
L_0028E9F8:
    // 0x0028E9F8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0028E9FC: bne         $v0, $zero, L_0028EA08
    if (ctx->r2 != 0) {
        // 0x0028EA00: sw          $a1, 0x4($a0)
        MEM_W(0X4, ctx->r4) = ctx->r5;
            goto L_0028EA08;
    }
    // 0x0028EA00: sw          $a1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r5;
    // 0x0028EA04: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
L_0028EA08:
    // 0x0028EA08: jr          $ra
    // 0x0028EA0C: nop

    return;
    // 0x0028EA0C: nop

;}
RECOMP_FUNC void func_00421B40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00421B40: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x00421B44: addiu       $v0, $v0, -0x5314
    ctx->r2 = ADD32(ctx->r2, -0X5314);
    // 0x00421B48: jr          $ra
    // 0x00421B4C: nop

    return;
    // 0x00421B4C: nop

;}
RECOMP_FUNC void func_0026BC54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026BC54: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x0026BC58: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x0026BC5C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0026BC60: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x0026BC64: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0026BC68: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x0026BC6C: bne         $s1, $zero, L_0026BC94
    if (ctx->r17 != 0) {
        // 0x0026BC70: sw          $s0, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r16;
            goto L_0026BC94;
    }
    // 0x0026BC70: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x0026BC74: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026BC78: lwc1        $f0, 0x7FEC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7FEC);
    // 0x0026BC7C: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0026BC80: addiu       $v0, $v0, 0x2020
    ctx->r2 = ADD32(ctx->r2, 0X2020);
    // 0x0026BC84: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x0026BC88: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x0026BC8C: j           L_0026BCDC
    // 0x0026BC90: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
        goto L_0026BCDC;
    // 0x0026BC90: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
L_0026BC94:
    // 0x0026BC94: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0026BC98: lw          $v0, 0x2608($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2608);
    // 0x0026BC9C: beq         $s1, $v0, L_0026BCE0
    if (ctx->r17 == ctx->r2) {
        // 0x0026BCA0: addu        $v0, $s2, $zero
        ctx->r2 = ADD32(ctx->r18, 0);
            goto L_0026BCE0;
    }
    // 0x0026BCA0: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x0026BCA4: lw          $a1, 0x8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X8);
    // 0x0026BCA8: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    // 0x0026BCAC: jal         0x0020EF2C
    // 0x0026BCB0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_0020EF2C(rdram, ctx);
        goto after_0;
    // 0x0026BCB0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_0:
    // 0x0026BCB4: addiu       $s0, $sp, 0x20
    ctx->r16 = ADD32(ctx->r29, 0X20);
    // 0x0026BCB8: lw          $a1, 0xC($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XC);
    // 0x0026BCBC: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x0026BCC0: jal         0x0020EF2C
    // 0x0026BCC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020EF2C(rdram, ctx);
        goto after_1;
    // 0x0026BCC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0026BCC8: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0026BCCC: addiu       $a0, $a0, 0x2020
    ctx->r4 = ADD32(ctx->r4, 0X2020);
    // 0x0026BCD0: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x0026BCD4: jal         0x0020EFDC
    // 0x0026BCD8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0020EFDC(rdram, ctx);
        goto after_2;
    // 0x0026BCD8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_2:
L_0026BCDC:
    // 0x0026BCDC: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
L_0026BCE0:
    // 0x0026BCE0: lui         $t1, 0x800F
    ctx->r9 = S32(0X800F << 16);
    // 0x0026BCE4: addiu       $t1, $t1, 0x2020
    ctx->r9 = ADD32(ctx->r9, 0X2020);
    // 0x0026BCE8: lw          $v1, 0x0($t1)
    ctx->r3 = MEM_W(ctx->r9, 0X0);
    // 0x0026BCEC: lw          $a3, 0x4($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X4);
    // 0x0026BCF0: lw          $t0, 0x8($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X8);
    // 0x0026BCF4: sw          $v1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r3;
    // 0x0026BCF8: sw          $a3, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r7;
    // 0x0026BCFC: sw          $t0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r8;
    // 0x0026BD00: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x0026BD04: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x0026BD08: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026BD0C: sw          $s1, 0x2608($at)
    MEM_W(0X2608, ctx->r1) = ctx->r17;
    // 0x0026BD10: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x0026BD14: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0026BD18: jr          $ra
    // 0x0026BD1C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x0026BD1C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_0025F730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025F730: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025F734: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025F738: lb          $v1, 0xC7($a1)
    ctx->r3 = MEM_B(ctx->r5, 0XC7);
    // 0x0025F73C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0025F740: beq         $v1, $zero, L_0025F750
    if (ctx->r3 == 0) {
        // 0x0025F744: sb          $v0, 0x133($a1)
        MEM_B(0X133, ctx->r5) = ctx->r2;
            goto L_0025F750;
    }
    // 0x0025F744: sb          $v0, 0x133($a1)
    MEM_B(0X133, ctx->r5) = ctx->r2;
    // 0x0025F748: jal         0x00243414
    // 0x0025F74C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0025F74C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_0:
L_0025F750:
    // 0x0025F750: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025F754: jr          $ra
    // 0x0025F758: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025F758: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_004072C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004072C8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x004072CC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x004072D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x004072D4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004072D8: lwc1        $f0, 0x508($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X508);
    // 0x004072DC: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004072E0: addiu       $v0, $v0, -0x62E
    ctx->r2 = ADD32(ctx->r2, -0X62E);
    // 0x004072E4: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x004072E8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x004072EC: swc1        $f0, 0x1FC($s0)
    MEM_W(0X1FC, ctx->r16) = ctx->f0.u32l;
    // 0x004072F0: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x004072F4: sw          $zero, 0x1A($v0)
    MEM_W(0X1A, ctx->r2) = 0;
    // 0x004072F8: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x004072FC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00407300: ori         $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 | 0X2000;
    // 0x00407304: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x00407308: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0040730C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00407310: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00407314: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x00407318: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x0040731C: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x00407320: jal         0x00275544
    // 0x00407324: addiu       $a0, $zero, 0x2779
    ctx->r4 = ADD32(0, 0X2779);
    func_00275544(rdram, ctx);
        goto after_0;
    // 0x00407324: addiu       $a0, $zero, 0x2779
    ctx->r4 = ADD32(0, 0X2779);
    after_0:
    // 0x00407328: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0040732C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00407330: jal         0x00246860
    // 0x00407334: addiu       $a2, $zero, 0x3B21
    ctx->r6 = ADD32(0, 0X3B21);
    func_00246860(rdram, ctx);
        goto after_1;
    // 0x00407334: addiu       $a2, $zero, 0x3B21
    ctx->r6 = ADD32(0, 0X3B21);
    after_1:
    // 0x00407338: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x0040733C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00407340: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00407344: jr          $ra
    // 0x00407348: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00407348: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00246918(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00246918: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0024691C: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x00246920: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00246924: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00246928: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0024692C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00246930: beq         $v0, $zero, L_00246950
    if (ctx->r2 == 0) {
        // 0x00246934: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00246950;
    }
    // 0x00246934: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00246938: bltz        $v0, L_00246954
    if (SIGNED(ctx->r2) < 0) {
        // 0x0024693C: slti        $v0, $v0, 0x3
        ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
            goto L_00246954;
    }
    // 0x0024693C: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x00246940: bnel        $v0, $zero, L_00246954
    if (ctx->r2 != 0) {
        // 0x00246944: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_00246954;
    }
    goto skip_0;
    // 0x00246944: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    skip_0:
    // 0x00246948: j           L_00246954
    // 0x0024694C: nop

        goto L_00246954;
    // 0x0024694C: nop

L_00246950:
    // 0x00246950: lw          $a0, 0x80($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X80);
L_00246954:
    // 0x00246954: lw          $v0, 0xEC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XEC);
    // 0x00246958: beq         $v0, $zero, L_0024698C
    if (ctx->r2 == 0) {
        // 0x0024695C: nop
    
            goto L_0024698C;
    }
    // 0x0024695C: nop

    // 0x00246960: jal         0x002758B4
    // 0x00246964: nop

    func_002758B4(rdram, ctx);
        goto after_0;
    // 0x00246964: nop

    after_0:
    // 0x00246968: lw          $v0, 0xEC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XEC);
    // 0x0024696C: beq         $v0, $zero, L_0024698C
    if (ctx->r2 == 0) {
        // 0x00246970: nop
    
            goto L_0024698C;
    }
    // 0x00246970: nop

    // 0x00246974: jal         0x00275F7C
    // 0x00246978: nop

    func_00275F7C(rdram, ctx);
        goto after_1;
    // 0x00246978: nop

    after_1:
    // 0x0024697C: lw          $a1, 0xEC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XEC);
    // 0x00246980: jal         0x00275D34
    // 0x00246984: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_00275D34(rdram, ctx);
        goto after_2;
    // 0x00246984: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_2:
    // 0x00246988: sw          $zero, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = 0;
L_0024698C:
    // 0x0024698C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00246990: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00246994: jr          $ra
    // 0x00246998: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00246998: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00220BF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00220BF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00220BF4: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x00220BF8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00220BFC: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00220C00: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00220C04: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00220C08: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00220C0C: lw          $a0, 0x6C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X6C);
    // 0x00220C10: lbu         $s1, 0x13($s2)
    ctx->r17 = MEM_BU(ctx->r18, 0X13);
    // 0x00220C14: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00220C18: addu        $at, $v0, $at
    ctx->r1 = ADD32(ctx->r2, ctx->r1);
    // 0x00220C1C: lw          $s0, -0x7058($at)
    ctx->r16 = MEM_W(ctx->r1, -0X7058);
    // 0x00220C20: jal         0x002017D4
    // 0x00220C24: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00220C24: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x00220C28: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00220C2C: jal         0x002017D4
    // 0x00220C30: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00220C30: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00220C34: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00220C38: jal         0x002017D4
    // 0x00220C3C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x00220C3C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x00220C40: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00220C44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00220C48: jal         0x002017D4
    // 0x00220C4C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x00220C4C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x00220C50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00220C54: jal         0x00201818
    // 0x00220C58: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_00201818(rdram, ctx);
        goto after_4;
    // 0x00220C58: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x00220C5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00220C60: jal         0x002017D4
    // 0x00220C64: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x00220C64: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x00220C68: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00220C6C: andi        $v1, $s1, 0x7
    ctx->r3 = ctx->r17 & 0X7;
    // 0x00220C70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00220C74: bgez        $s1, L_00220C80
    if (SIGNED(ctx->r17) >= 0) {
        // 0x00220C78: sllv        $v1, $v0, $v1
        ctx->r3 = S32(ctx->r2 << (ctx->r3 & 31));
            goto L_00220C80;
    }
    // 0x00220C78: sllv        $v1, $v0, $v1
    ctx->r3 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x00220C7C: addiu       $s1, $s1, 0x7
    ctx->r17 = ADD32(ctx->r17, 0X7);
L_00220C80:
    // 0x00220C80: sra         $v0, $s1, 3
    ctx->r2 = S32(SIGNED(ctx->r17) >> 3);
    // 0x00220C84: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x00220C88: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x00220C8C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00220C90: beq         $v0, $zero, L_00220CE8
    if (ctx->r2 == 0) {
        // 0x00220C94: nop
    
            goto L_00220CE8;
    }
    // 0x00220C94: nop

    // 0x00220C98: lbu         $v0, 0xF($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XF);
    // 0x00220C9C: beq         $v0, $zero, L_00220CE0
    if (ctx->r2 == 0) {
        // 0x00220CA0: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_00220CE0;
    }
    // 0x00220CA0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00220CA4: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00220CA8: lw          $a0, 0x70E4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X70E4);
    // 0x00220CAC: jal         0x002017D4
    // 0x00220CB0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_6;
    // 0x00220CB0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_6:
    // 0x00220CB4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00220CB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00220CBC: jal         0x002017D4
    // 0x00220CC0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_7;
    // 0x00220CC0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_7:
    // 0x00220CC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00220CC8: jal         0x002017D4
    // 0x00220CCC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_8;
    // 0x00220CCC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x00220CD0: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x00220CD4: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x00220CD8: bne         $v0, $zero, L_00220CE8
    if (ctx->r2 != 0) {
        // 0x00220CDC: nop
    
            goto L_00220CE8;
    }
    // 0x00220CDC: nop

L_00220CE0:
    // 0x00220CE0: jal         0x0026DFB0
    // 0x00220CE4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_0026DFB0(rdram, ctx);
        goto after_9;
    // 0x00220CE4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_9:
L_00220CE8:
    // 0x00220CE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00220CEC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00220CF0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00220CF4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00220CF8: jr          $ra
    // 0x00220CFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00220CFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00424008(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00424008: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0042400C: lh          $v0, 0x9D0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X9D0);
    // 0x00424010: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x00424014: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x00424018: addu        $s6, $a0, $zero
    ctx->r22 = ADD32(ctx->r4, 0);
    // 0x0042401C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x00424020: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00424024: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x00424028: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x0042402C: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x00424030: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    // 0x00424034: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x00424038: lui         $s5, 0x8013
    ctx->r21 = S32(0X8013 << 16);
    // 0x0042403C: addiu       $s5, $s5, 0x9D8
    ctx->r21 = ADD32(ctx->r21, 0X9D8);
    // 0x00424040: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x00424044: lw          $s1, 0x58($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X58);
    // 0x00424048: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x0042404C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x00424050: lw          $s2, 0x5C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X5C);
    // 0x00424054: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    // 0x00424058: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x0042405C: sll         $a1, $v0, 2
    ctx->r5 = S32(ctx->r2 << 2);
    // 0x00424060: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x00424064: sll         $a1, $a1, 4
    ctx->r5 = S32(ctx->r5 << 4);
    // 0x00424068: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042406C: addiu       $v0, $v0, 0x7BE0
    ctx->r2 = ADD32(ctx->r2, 0X7BE0);
    // 0x00424070: jal         0x0029E460
    // 0x00424074: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    func_0029E460(rdram, ctx);
        goto after_0;
    // 0x00424074: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    after_0:
    // 0x00424078: srl         $a3, $s6, 31
    ctx->r7 = S32(U32(ctx->r22) >> 31);
    // 0x0042407C: addu        $a3, $s6, $a3
    ctx->r7 = ADD32(ctx->r22, ctx->r7);
    // 0x00424080: sra         $a3, $a3, 1
    ctx->r7 = S32(SIGNED(ctx->r7) >> 1);
    // 0x00424084: srl         $a2, $s0, 31
    ctx->r6 = S32(U32(ctx->r16) >> 31);
    // 0x00424088: addu        $a2, $s0, $a2
    ctx->r6 = ADD32(ctx->r16, ctx->r6);
    // 0x0042408C: sra         $a2, $a2, 1
    ctx->r6 = S32(SIGNED(ctx->r6) >> 1);
    // 0x00424090: srl         $t1, $s2, 31
    ctx->r9 = S32(U32(ctx->r18) >> 31);
    // 0x00424094: addu        $t1, $s2, $t1
    ctx->r9 = ADD32(ctx->r18, ctx->r9);
    // 0x00424098: sra         $t1, $t1, 1
    ctx->r9 = S32(SIGNED(ctx->r9) >> 1);
    // 0x0042409C: sll         $s2, $s2, 1
    ctx->r18 = S32(ctx->r18 << 1);
    // 0x004240A0: sll         $s0, $s0, 11
    ctx->r16 = S32(ctx->r16 << 11);
    // 0x004240A4: lui         $t6, 0xFFFF
    ctx->r14 = S32(0XFFFF << 16);
    // 0x004240A8: lw          $t5, 0x1C($s5)
    ctx->r13 = MEM_W(ctx->r21, 0X1C);
    // 0x004240AC: lw          $t7, 0x2C($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X2C);
    // 0x004240B0: lw          $t4, 0x30($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X30);
    // 0x004240B4: addu        $t8, $t5, $zero
    ctx->r24 = ADD32(ctx->r13, 0);
    // 0x004240B8: sll         $v0, $t8, 16
    ctx->r2 = S32(ctx->r24 << 16);
    // 0x004240BC: sra         $t9, $v0, 16
    ctx->r25 = S32(SIGNED(ctx->r2) >> 16);
    // 0x004240C0: sra         $v1, $t8, 16
    ctx->r3 = S32(SIGNED(ctx->r24) >> 16);
    // 0x004240C4: subu        $a0, $t9, $v1
    ctx->r4 = SUB32(ctx->r25, ctx->r3);
    // 0x004240C8: srl         $v0, $a0, 31
    ctx->r2 = S32(U32(ctx->r4) >> 31);
    // 0x004240CC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x004240D0: sra         $a0, $a0, 1
    ctx->r4 = S32(SIGNED(ctx->r4) >> 1);
    // 0x004240D4: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x004240D8: subu        $a0, $a0, $s3
    ctx->r4 = SUB32(ctx->r4, ctx->r19);
    // 0x004240DC: subu        $v1, $a0, $a3
    ctx->r3 = SUB32(ctx->r4, ctx->r7);
    // 0x004240E0: srl         $v0, $s1, 31
    ctx->r2 = S32(U32(ctx->r17) >> 31);
    // 0x004240E4: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x004240E8: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x004240EC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x004240F0: sll         $t5, $v1, 16
    ctx->r13 = S32(ctx->r3 << 16);
    // 0x004240F4: addu        $a0, $a0, $a3
    ctx->r4 = ADD32(ctx->r4, ctx->r7);
    // 0x004240F8: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x004240FC: lh          $v0, 0x12($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X12);
    // 0x00424100: lh          $a1, 0x10($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X10);
    // 0x00424104: lhu         $t0, 0x10($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X10);
    // 0x00424108: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x0042410C: srl         $v1, $v0, 31
    ctx->r3 = S32(U32(ctx->r2) >> 31);
    // 0x00424110: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00424114: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x00424118: addu        $t0, $t0, $v0
    ctx->r8 = ADD32(ctx->r8, ctx->r2);
    // 0x0042411C: subu        $t3, $t0, $s4
    ctx->r11 = SUB32(ctx->r8, ctx->r20);
    // 0x00424120: subu        $t2, $t3, $a2
    ctx->r10 = SUB32(ctx->r11, ctx->r6);
    // 0x00424124: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x00424128: addu        $a1, $t3, $a2
    ctx->r5 = ADD32(ctx->r11, ctx->r6);
    // 0x0042412C: subu        $a1, $a1, $s2
    ctx->r5 = SUB32(ctx->r5, ctx->r18);
    // 0x00424130: sll         $v1, $a1, 16
    ctx->r3 = S32(ctx->r5 << 16);
    // 0x00424134: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x00424138: sll         $v0, $t2, 16
    ctx->r2 = S32(ctx->r10 << 16);
    // 0x0042413C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x00424140: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x00424144: div         $zero, $s0, $v1
    lo = S32(S64(S32(ctx->r16)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r16)) % S64(S32(ctx->r3)));
    // 0x00424148: bne         $v1, $zero, L_00424154
    if (ctx->r3 != 0) {
        // 0x0042414C: nop
    
            goto L_00424154;
    }
    // 0x0042414C: nop

    // 0x00424150: break       7
    do_break(4342096);
L_00424154:
    // 0x00424154: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x00424158: bne         $v1, $at, L_0042416C
    if (ctx->r3 != ctx->r1) {
        // 0x0042415C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_0042416C;
    }
    // 0x0042415C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x00424160: bne         $s0, $at, L_0042416C
    if (ctx->r16 != ctx->r1) {
        // 0x00424164: nop
    
            goto L_0042416C;
    }
    // 0x00424164: nop

    // 0x00424168: break       6
    do_break(4342120);
L_0042416C:
    // 0x0042416C: mflo        $s0
    ctx->r16 = lo;
    // 0x00424170: sll         $s1, $s1, 1
    ctx->r17 = S32(ctx->r17 << 1);
    // 0x00424174: subu        $a0, $a0, $s1
    ctx->r4 = SUB32(ctx->r4, ctx->r17);
    // 0x00424178: andi        $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 & 0XFFFF;
    // 0x0042417C: or          $t5, $t5, $a0
    ctx->r13 = ctx->r13 | ctx->r4;
    // 0x00424180: lw          $a3, 0x44($s5)
    ctx->r7 = MEM_W(ctx->r21, 0X44);
    // 0x00424184: and         $t7, $t7, $t6
    ctx->r15 = ctx->r15 & ctx->r14;
    // 0x00424188: sw          $a3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r7;
    // 0x0042418C: lh          $v0, 0x16($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X16);
    // 0x00424190: lh          $v1, 0x14($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X14);
    // 0x00424194: sll         $a0, $s6, 10
    ctx->r4 = S32(ctx->r22 << 10);
    // 0x00424198: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x0042419C: sh          $a1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r5;
    // 0x004241A0: addiu       $a1, $a1, -0x3
    ctx->r5 = ADD32(ctx->r5, -0X3);
    // 0x004241A4: sh          $a1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r5;
    // 0x004241A8: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x004241AC: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x004241B0: sh          $t0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r8;
    // 0x004241B4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x004241B8: srl         $v1, $v0, 31
    ctx->r3 = S32(U32(ctx->r2) >> 31);
    // 0x004241BC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x004241C0: lhu         $v1, 0x14($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X14);
    // 0x004241C4: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x004241C8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x004241CC: sh          $v1, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r3;
    // 0x004241D0: subu        $v1, $v1, $s4
    ctx->r3 = SUB32(ctx->r3, ctx->r20);
    // 0x004241D4: subu        $v0, $v1, $a2
    ctx->r2 = SUB32(ctx->r3, ctx->r6);
    // 0x004241D8: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x004241DC: sh          $v1, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r3;
    // 0x004241E0: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x004241E4: subu        $v1, $v1, $s2
    ctx->r3 = SUB32(ctx->r3, ctx->r18);
    // 0x004241E8: addiu       $a2, $v1, -0x3
    ctx->r6 = ADD32(ctx->r3, -0X3);
    // 0x004241EC: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x004241F0: sll         $v0, $t5, 16
    ctx->r2 = S32(ctx->r13 << 16);
    // 0x004241F4: sra         $a3, $v0, 16
    ctx->r7 = S32(SIGNED(ctx->r2) >> 16);
    // 0x004241F8: sra         $v0, $t5, 16
    ctx->r2 = S32(SIGNED(ctx->r13) >> 16);
    // 0x004241FC: subu        $v0, $a3, $v0
    ctx->r2 = SUB32(ctx->r7, ctx->r2);
    // 0x00424200: div         $zero, $a0, $v0
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r2)));
    // 0x00424204: bne         $v0, $zero, L_00424210
    if (ctx->r2 != 0) {
        // 0x00424208: nop
    
            goto L_00424210;
    }
    // 0x00424208: nop

    // 0x0042420C: break       7
    do_break(4342284);
L_00424210:
    // 0x00424210: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x00424214: bne         $v0, $at, L_00424228
    if (ctx->r2 != ctx->r1) {
        // 0x00424218: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_00424228;
    }
    // 0x00424218: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x0042421C: bne         $a0, $at, L_00424228
    if (ctx->r4 != ctx->r1) {
        // 0x00424220: nop
    
            goto L_00424228;
    }
    // 0x00424220: nop

    // 0x00424224: break       6
    do_break(4342308);
L_00424228:
    // 0x00424228: mflo        $t0
    ctx->r8 = lo;
    // 0x0042422C: sh          $v1, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r3;
    // 0x00424230: lh          $v1, 0x1A($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X1A);
    // 0x00424234: lhu         $v0, 0x1A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X1A);
    // 0x00424238: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x0042423C: sh          $t3, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r11;
    // 0x00424240: sh          $t2, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r10;
    // 0x00424244: sh          $a2, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r6;
    // 0x00424248: slt         $v1, $v1, $a1
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x0042424C: andi        $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 & 0XFFFF;
    // 0x00424250: beq         $v1, $zero, L_0042425C
    if (ctx->r3 == 0) {
        // 0x00424254: or          $t7, $t7, $s0
        ctx->r15 = ctx->r15 | ctx->r16;
            goto L_0042425C;
    }
    // 0x00424254: or          $t7, $t7, $s0
    ctx->r15 = ctx->r15 | ctx->r16;
    // 0x00424258: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
L_0042425C:
    // 0x0042425C: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x00424260: lh          $v1, 0x1E($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X1E);
    // 0x00424264: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x00424268: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0042426C: lhu         $v0, 0x1E($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X1E);
    // 0x00424270: bnel        $v1, $zero, L_00424278
    if (ctx->r3 != 0) {
        // 0x00424274: sh          $v0, 0x16($sp)
        MEM_H(0X16, ctx->r29) = ctx->r2;
            goto L_00424278;
    }
    goto skip_0;
    // 0x00424274: sh          $v0, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r2;
    skip_0:
L_00424278:
    // 0x00424278: slt         $v0, $t9, $a3
    ctx->r2 = SIGNED(ctx->r25) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x0042427C: beq         $v0, $zero, L_0042428C
    if (ctx->r2 == 0) {
        // 0x00424280: andi        $v0, $t8, 0xFFFF
        ctx->r2 = ctx->r24 & 0XFFFF;
            goto L_0042428C;
    }
    // 0x00424280: andi        $v0, $t8, 0xFFFF
    ctx->r2 = ctx->r24 & 0XFFFF;
    // 0x00424284: and         $t5, $t5, $t6
    ctx->r13 = ctx->r13 & ctx->r14;
    // 0x00424288: or          $t5, $t5, $v0
    ctx->r13 = ctx->r13 | ctx->r2;
L_0042428C:
    // 0x0042428C: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x00424290: sw          $t7, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r15;
    // 0x00424294: sw          $t7, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r15;
    // 0x00424298: sw          $zero, 0x28($a0)
    MEM_W(0X28, ctx->r4) = 0;
    // 0x0042429C: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x004242A0: lw          $a1, 0x14($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X14);
    // 0x004242A4: sll         $v1, $s6, 1
    ctx->r3 = S32(ctx->r22 << 1);
    // 0x004242A8: sw          $v1, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r3;
    // 0x004242AC: sw          $s6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r22;
    // 0x004242B0: sw          $t0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r8;
    // 0x004242B4: sw          $t5, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r13;
    // 0x004242B8: sw          $v0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r2;
    // 0x004242BC: jal         0x0029AA80
    // 0x004242C0: sw          $a1, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r5;
    osViSetMode_recomp(rdram, ctx);
        goto after_1;
    // 0x004242C0: sw          $a1, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r5;
    after_1:
    // 0x004242C4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x004242C8: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x004242CC: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x004242D0: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x004242D4: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x004242D8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x004242DC: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x004242E0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x004242E4: jr          $ra
    // 0x004242E8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x004242E8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_0025FE08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025FE08: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025FE0C: lh          $v0, 0x74($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X74);
    // 0x0025FE10: jr          $ra
    // 0x0025FE14: nop

    return;
    // 0x0025FE14: nop

;}
RECOMP_FUNC void func_00288DB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00288DB0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00288DB4: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x00288DB8: sb          $v1, 0x3FE1($at)
    MEM_B(0X3FE1, ctx->r1) = ctx->r3;
    // 0x00288DBC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00288DC0: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x00288DC4: sw          $a2, 0x3FDC($at)
    MEM_W(0X3FDC, ctx->r1) = ctx->r6;
    // 0x00288DC8: jr          $ra
    // 0x00288DCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x00288DCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_00409784(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00409784: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x00409788: sw          $s2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r18;
    // 0x0040978C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00409790: sw          $s3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r19;
    // 0x00409794: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x00409798: sw          $s7, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r23;
    // 0x0040979C: addu        $s7, $s3, $zero
    ctx->r23 = ADD32(ctx->r19, 0);
    // 0x004097A0: sw          $s4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r20;
    // 0x004097A4: addu        $s4, $s3, $zero
    ctx->r20 = ADD32(ctx->r19, 0);
    // 0x004097A8: sw          $s6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r22;
    // 0x004097AC: addu        $s6, $s3, $zero
    ctx->r22 = ADD32(ctx->r19, 0);
    // 0x004097B0: sw          $s5, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r21;
    // 0x004097B4: addu        $s5, $s3, $zero
    ctx->r21 = ADD32(ctx->r19, 0);
    // 0x004097B8: sw          $s1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r17;
    // 0x004097BC: addu        $s1, $s3, $zero
    ctx->r17 = ADD32(ctx->r19, 0);
    // 0x004097C0: sw          $s0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r16;
    // 0x004097C4: addiu       $s0, $zero, 0x18
    ctx->r16 = ADD32(0, 0X18);
    // 0x004097C8: sw          $ra, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r31;
    // 0x004097CC: sdc1        $f21, 0x98($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X98, ctx->r29);
    // 0x004097D0: sdc1        $f20, 0x90($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X90, ctx->r29);
L_004097D4:
    // 0x004097D4: addu        $a0, $s2, $s0
    ctx->r4 = ADD32(ctx->r18, ctx->r16);
    // 0x004097D8: jal         0x00235510
    // 0x004097DC: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_00235510(rdram, ctx);
        goto after_0;
    // 0x004097DC: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_0:
    // 0x004097E0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x004097E4: slti        $v0, $s1, 0xF
    ctx->r2 = SIGNED(ctx->r17) < 0XF ? 1 : 0;
    // 0x004097E8: bne         $v0, $zero, L_004097D4
    if (ctx->r2 != 0) {
        // 0x004097EC: addiu       $s0, $s0, 0x68
        ctx->r16 = ADD32(ctx->r16, 0X68);
            goto L_004097D4;
    }
    // 0x004097EC: addiu       $s0, $s0, 0x68
    ctx->r16 = ADD32(ctx->r16, 0X68);
    // 0x004097F0: jal         0x00284188
    // 0x004097F4: nop

    func_00284188(rdram, ctx);
        goto after_1;
    // 0x004097F4: nop

    after_1:
    // 0x004097F8: bne         $v0, $zero, L_00409A30
    if (ctx->r2 != 0) {
        // 0x004097FC: nop
    
            goto L_00409A30;
    }
    // 0x004097FC: nop

    // 0x00409800: lw          $v0, 0x680($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X680);
    // 0x00409804: lw          $v1, 0x684($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X684);
    // 0x00409808: lw          $a0, 0x65C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X65C);
    // 0x0040980C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00409810: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00409814: sw          $v0, 0x680($s2)
    MEM_W(0X680, ctx->r18) = ctx->r2;
    // 0x00409818: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0040981C: beq         $a0, $v0, L_00409850
    if (ctx->r4 == ctx->r2) {
        // 0x00409820: sw          $v1, 0x684($s2)
        MEM_W(0X684, ctx->r18) = ctx->r3;
            goto L_00409850;
    }
    // 0x00409820: sw          $v1, 0x684($s2)
    MEM_W(0X684, ctx->r18) = ctx->r3;
    // 0x00409824: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x00409828: beq         $v0, $zero, L_00409840
    if (ctx->r2 == 0) {
        // 0x0040982C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00409840;
    }
    // 0x0040982C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00409830: beq         $a0, $zero, L_004098B8
    if (ctx->r4 == 0) {
        // 0x00409834: nop
    
            goto L_004098B8;
    }
    // 0x00409834: nop

    // 0x00409838: j           L_004098D0
    // 0x0040983C: nop

        goto L_004098D0;
    // 0x0040983C: nop

L_00409840:
    // 0x00409840: beq         $a0, $v0, L_00409884
    if (ctx->r4 == ctx->r2) {
        // 0x00409844: nop
    
            goto L_00409884;
    }
    // 0x00409844: nop

    // 0x00409848: j           L_004098D0
    // 0x0040984C: nop

        goto L_004098D0;
    // 0x0040984C: nop

L_00409850:
    // 0x00409850: lw          $v0, 0x680($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X680);
    // 0x00409854: slti        $v0, $v0, 0x4C
    ctx->r2 = SIGNED(ctx->r2) < 0X4C ? 1 : 0;
    // 0x00409858: bne         $v0, $zero, L_00409868
    if (ctx->r2 != 0) {
        // 0x0040985C: slti        $v0, $v1, 0x20E
        ctx->r2 = SIGNED(ctx->r3) < 0X20E ? 1 : 0;
            goto L_00409868;
    }
    // 0x0040985C: slti        $v0, $v1, 0x20E
    ctx->r2 = SIGNED(ctx->r3) < 0X20E ? 1 : 0;
    // 0x00409860: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x00409864: addiu       $s4, $zero, 0x258
    ctx->r20 = ADD32(0, 0X258);
L_00409868:
    // 0x00409868: bne         $v0, $zero, L_004098D0
    if (ctx->r2 != 0) {
        // 0x0040986C: nop
    
            goto L_004098D0;
    }
    // 0x0040986C: nop

    // 0x00409870: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x00409874: lui         $s5, 0x43
    ctx->r21 = S32(0X43 << 16);
    // 0x00409878: addiu       $s5, $s5, 0x1DC4
    ctx->r21 = ADD32(ctx->r21, 0X1DC4);
    // 0x0040987C: j           L_004098D0
    // 0x00409880: addiu       $s6, $zero, 0x14A
    ctx->r22 = ADD32(0, 0X14A);
        goto L_004098D0;
    // 0x00409880: addiu       $s6, $zero, 0x14A
    ctx->r22 = ADD32(0, 0X14A);
L_00409884:
    // 0x00409884: lw          $v0, 0x680($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X680);
    // 0x00409888: slti        $v0, $v0, 0x97
    ctx->r2 = SIGNED(ctx->r2) < 0X97 ? 1 : 0;
    // 0x0040988C: bne         $v0, $zero, L_0040989C
    if (ctx->r2 != 0) {
        // 0x00409890: slti        $v0, $v1, 0x20E
        ctx->r2 = SIGNED(ctx->r3) < 0X20E ? 1 : 0;
            goto L_0040989C;
    }
    // 0x00409890: slti        $v0, $v1, 0x20E
    ctx->r2 = SIGNED(ctx->r3) < 0X20E ? 1 : 0;
    // 0x00409894: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x00409898: addiu       $s4, $zero, 0x1C2
    ctx->r20 = ADD32(0, 0X1C2);
L_0040989C:
    // 0x0040989C: bne         $v0, $zero, L_004098D0
    if (ctx->r2 != 0) {
        // 0x004098A0: nop
    
            goto L_004098D0;
    }
    // 0x004098A0: nop

    // 0x004098A4: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x004098A8: lui         $s5, 0x43
    ctx->r21 = S32(0X43 << 16);
    // 0x004098AC: addiu       $s5, $s5, 0x1DD0
    ctx->r21 = ADD32(ctx->r21, 0X1DD0);
    // 0x004098B0: j           L_004098D0
    // 0x004098B4: addiu       $s6, $zero, 0x14A
    ctx->r22 = ADD32(0, 0X14A);
        goto L_004098D0;
    // 0x004098B4: addiu       $s6, $zero, 0x14A
    ctx->r22 = ADD32(0, 0X14A);
L_004098B8:
    // 0x004098B8: lw          $v0, 0x680($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X680);
    // 0x004098BC: slti        $v0, $v0, 0x97
    ctx->r2 = SIGNED(ctx->r2) < 0X97 ? 1 : 0;
    // 0x004098C0: bne         $v0, $zero, L_004098D0
    if (ctx->r2 != 0) {
        // 0x004098C4: nop
    
            goto L_004098D0;
    }
    // 0x004098C4: nop

    // 0x004098C8: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x004098CC: addiu       $s4, $zero, 0x1C2
    ctx->r20 = ADD32(0, 0X1C2);
L_004098D0:
    // 0x004098D0: jal         0x00284188
    // 0x004098D4: nop

    func_00284188(rdram, ctx);
        goto after_2;
    // 0x004098D4: nop

    after_2:
    // 0x004098D8: bne         $v0, $zero, L_00409A30
    if (ctx->r2 != 0) {
        // 0x004098DC: nop
    
            goto L_00409A30;
    }
    // 0x004098DC: nop

    // 0x004098E0: beq         $s3, $zero, L_00409A14
    if (ctx->r19 == 0) {
        // 0x004098E4: nop
    
            goto L_00409A14;
    }
    // 0x004098E4: nop

    // 0x004098E8: lui         $a0, 0x43
    ctx->r4 = S32(0X43 << 16);
    // 0x004098EC: addiu       $a0, $a0, 0x1D94
    ctx->r4 = ADD32(ctx->r4, 0X1D94);
    // 0x004098F0: jal         0x0026D518
    // 0x004098F4: sw          $zero, 0x680($s2)
    MEM_W(0X680, ctx->r18) = 0;
    func_0026D518(rdram, ctx);
        goto after_3;
    // 0x004098F4: sw          $zero, 0x680($s2)
    MEM_W(0X680, ctx->r18) = 0;
    after_3:
    // 0x004098F8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004098FC: lwc1        $f12, 0x1F8($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X1F8);
    // 0x00409900: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x00409904: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00409908: lwc1        $f14, 0x1FC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X1FC);
    // 0x0040990C: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x00409910: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x00409914: jal         0x002119FC
    // 0x00409918: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    func_002119FC(rdram, ctx);
        goto after_4;
    // 0x00409918: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    after_4:
    // 0x0040991C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00409920: lwc1        $f12, 0x5EC($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X5EC);
    // 0x00409924: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00409928: lwc1        $f14, 0x5F0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X5F0);
    // 0x0040992C: jal         0x002119FC
    // 0x00409930: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_002119FC(rdram, ctx);
        goto after_5;
    // 0x00409930: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_5:
    // 0x00409934: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    // 0x00409938: jal         0x002982F0
    // 0x0040993C: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    func_002982F0(rdram, ctx);
        goto after_6;
    // 0x0040993C: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    after_6:
    // 0x00409940: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00409944: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    // 0x00409948: jal         0x002974C0
    // 0x0040994C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    func_002974C0(rdram, ctx);
        goto after_7;
    // 0x0040994C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    after_7:
    // 0x00409950: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00409954: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00409958: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0040995C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x00409960: swc1        $f20, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f20.u32l;
    // 0x00409964: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x00409968: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x0040996C: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x00409970: sw          $t0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r8;
    // 0x00409974: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    // 0x00409978: sw          $t2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r10;
    // 0x0040997C: jal         0x00220A1C
    // 0x00409980: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    func_00220A1C(rdram, ctx);
        goto after_8;
    // 0x00409980: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    after_8:
    // 0x00409984: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x00409988: addiu       $a0, $a0, 0x7590
    ctx->r4 = ADD32(ctx->r4, 0X7590);
    // 0x0040998C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00409990: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00409994: lwc1        $f0, 0x5F4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5F4);
    // 0x00409998: addiu       $v1, $sp, 0x58
    ctx->r3 = ADD32(ctx->r29, 0X58);
    // 0x0040999C: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x004099A0: swc1        $f0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f0.u32l;
    // 0x004099A4: mtc1        $s4, $f0
    ctx->f0.u32l = ctx->r20;
    // 0x004099A8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x004099AC: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x004099B0: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x004099B4: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x004099B8: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x004099BC: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x004099C0: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x004099C4: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x004099C8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x004099CC: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x004099D0: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x004099D4: lw          $t1, 0x60($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X60);
    // 0x004099D8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x004099DC: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x004099E0: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    // 0x004099E4: jal         0x00227240
    // 0x004099E8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00227240(rdram, ctx);
        goto after_9;
    // 0x004099E8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_9:
    // 0x004099EC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x004099F0: beq         $a0, $zero, L_00409A14
    if (ctx->r4 == 0) {
        // 0x004099F4: nop
    
            goto L_00409A14;
    }
    // 0x004099F4: nop

    // 0x004099F8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x004099FC: lw          $v0, 0x50($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X50);
    // 0x00409A00: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00409A04: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x00409A08: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x00409A0C: jal         0x00246690
    // 0x00409A10: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    func_00246690(rdram, ctx);
        goto after_10;
    // 0x00409A10: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    after_10:
L_00409A14:
    // 0x00409A14: beq         $s5, $zero, L_00409A30
    if (ctx->r21 == 0) {
        // 0x00409A18: nop
    
            goto L_00409A30;
    }
    // 0x00409A18: nop

    // 0x00409A1C: beq         $s7, $zero, L_00409A30
    if (ctx->r23 == 0) {
        // 0x00409A20: addu        $a0, $s6, $zero
        ctx->r4 = ADD32(ctx->r22, 0);
            goto L_00409A30;
    }
    // 0x00409A20: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x00409A24: sw          $zero, 0x684($s2)
    MEM_W(0X684, ctx->r18) = 0;
    // 0x00409A28: jal         0x00409500
    // 0x00409A2C: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    func_00409500(rdram, ctx);
        goto after_11;
    // 0x00409A2C: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    after_11:
L_00409A30:
    // 0x00409A30: lw          $ra, 0x88($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X88);
    // 0x00409A34: lw          $s7, 0x84($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X84);
    // 0x00409A38: lw          $s6, 0x80($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X80);
    // 0x00409A3C: lw          $s5, 0x7C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X7C);
    // 0x00409A40: lw          $s4, 0x78($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X78);
    // 0x00409A44: lw          $s3, 0x74($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X74);
    // 0x00409A48: lw          $s2, 0x70($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X70);
    // 0x00409A4C: lw          $s1, 0x6C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X6C);
    // 0x00409A50: lw          $s0, 0x68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X68);
    // 0x00409A54: ldc1        $f21, 0x98($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X98);
    // 0x00409A58: ldc1        $f20, 0x90($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X90);
    // 0x00409A5C: jr          $ra
    // 0x00409A60: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x00409A60: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_00253F40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00253F40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00253F44: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00253F48: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00253F4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00253F50: lw          $v0, 0x128C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X128C);
    // 0x00253F54: beq         $v0, $zero, L_00253F68
    if (ctx->r2 == 0) {
        // 0x00253F58: nop
    
            goto L_00253F68;
    }
    // 0x00253F58: nop

    // 0x00253F5C: lw          $a0, 0xC($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XC);
    // 0x00253F60: jal         0x0027588C
    // 0x00253F64: nop

    func_0027588C(rdram, ctx);
        goto after_0;
    // 0x00253F64: nop

    after_0:
L_00253F68:
    // 0x00253F68: jal         0x00275F7C
    // 0x00253F6C: nop

    func_00275F7C(rdram, ctx);
        goto after_1;
    // 0x00253F6C: nop

    after_1:
    // 0x00253F70: lw          $a1, 0x128C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X128C);
    // 0x00253F74: jal         0x00275D34
    // 0x00253F78: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_00275D34(rdram, ctx);
        goto after_2;
    // 0x00253F78: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_2:
    // 0x00253F7C: sw          $zero, 0x128C($s0)
    MEM_W(0X128C, ctx->r16) = 0;
    // 0x00253F80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00253F84: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00253F88: jr          $ra
    // 0x00253F8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00253F8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0023F300(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023F300: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x0023F304: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0023F308: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0023F30C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0023F310: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0023F314: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x0023F318: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x0023F31C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x0023F320: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0023F324: lh          $a2, 0xC($s0)
    ctx->r6 = MEM_H(ctx->r16, 0XC);
    // 0x0023F328: jal         0x00253B54
    // 0x0023F32C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_00253B54(rdram, ctx);
        goto after_0;
    // 0x0023F32C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x0023F330: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x0023F334: beq         $s4, $zero, L_0023F3C0
    if (ctx->r20 == 0) {
        // 0x0023F338: addiu       $a1, $zero, 0x80
        ctx->r5 = ADD32(0, 0X80);
            goto L_0023F3C0;
    }
    // 0x0023F338: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x0023F33C: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    // 0x0023F340: lh          $s2, 0x6($s0)
    ctx->r18 = MEM_H(ctx->r16, 0X6);
    // 0x0023F344: lh          $s3, 0x8($s0)
    ctx->r19 = MEM_H(ctx->r16, 0X8);
    // 0x0023F348: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x0023F34C: addiu       $v0, $zero, 0x4B
    ctx->r2 = ADD32(0, 0X4B);
    // 0x0023F350: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0023F354: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0023F358: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0023F35C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x0023F360: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x0023F364: lw          $a0, 0x51C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X51C);
    // 0x0023F368: jal         0x00281060
    // 0x0023F36C: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    func_00281060(rdram, ctx);
        goto after_1;
    // 0x0023F36C: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    after_1:
    // 0x0023F370: beq         $s0, $zero, L_0023F38C
    if (ctx->r16 == 0) {
        // 0x0023F374: nop
    
            goto L_0023F38C;
    }
    // 0x0023F374: nop

    // 0x0023F378: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0023F37C: addiu       $a0, $a0, -0x6750
    ctx->r4 = ADD32(ctx->r4, -0X6750);
    // 0x0023F380: lw          $a1, 0x51C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X51C);
    // 0x0023F384: jal         0x0027FC2C
    // 0x0023F388: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0027FC2C(rdram, ctx);
        goto after_2;
    // 0x0023F388: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_2:
L_0023F38C:
    // 0x0023F38C: beq         $s2, $zero, L_0023F3B0
    if (ctx->r18 == 0) {
        // 0x0023F390: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0023F3B0;
    }
    // 0x0023F390: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0023F394: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0023F398: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0023F39C: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x0023F3A0: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x0023F3A4: lw          $a3, 0xC($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XC);
    // 0x0023F3A8: jal         0x00275544
    // 0x0023F3AC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00275544(rdram, ctx);
        goto after_3;
    // 0x0023F3AC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
L_0023F3B0:
    // 0x0023F3B0: beq         $s3, $zero, L_0023F3C4
    if (ctx->r19 == 0) {
        // 0x0023F3B4: addu        $v0, $s4, $zero
        ctx->r2 = ADD32(ctx->r20, 0);
            goto L_0023F3C4;
    }
    // 0x0023F3B4: addu        $v0, $s4, $zero
    ctx->r2 = ADD32(ctx->r20, 0);
    // 0x0023F3B8: jal         0x0027580C
    // 0x0023F3BC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_0027580C(rdram, ctx);
        goto after_4;
    // 0x0023F3BC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_4:
L_0023F3C0:
    // 0x0023F3C0: addu        $v0, $s4, $zero
    ctx->r2 = ADD32(ctx->r20, 0);
L_0023F3C4:
    // 0x0023F3C4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x0023F3C8: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x0023F3CC: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0023F3D0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0023F3D4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0023F3D8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0023F3DC: jr          $ra
    // 0x0023F3E0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0023F3E0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0028F98C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028F98C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0028F990: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0028F994: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0028F998: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0028F99C: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0028F9A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0028F9A4: jal         0x0028F460
    // 0x0028F9A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_0028F460(rdram, ctx);
        goto after_0;
    // 0x0028F9A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x0028F9AC: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x0028F9B0: andi        $v0, $s0, 0x80
    ctx->r2 = ctx->r16 & 0X80;
    // 0x0028F9B4: beq         $v0, $zero, L_0028F9E8
    if (ctx->r2 == 0) {
        // 0x0028F9B8: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_0028F9E8;
    }
    // 0x0028F9B8: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x0028F9BC: andi        $s0, $s0, 0x7F
    ctx->r16 = ctx->r16 & 0X7F;
L_0028F9C0:
    // 0x0028F9C0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0028F9C4: jal         0x0028F460
    // 0x0028F9C8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_0028F460(rdram, ctx);
        goto after_1;
    // 0x0028F9C8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_1:
    // 0x0028F9CC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x0028F9D0: sll         $a0, $s0, 7
    ctx->r4 = S32(ctx->r16 << 7);
    // 0x0028F9D4: andi        $v1, $v0, 0x7F
    ctx->r3 = ctx->r2 & 0X7F;
    // 0x0028F9D8: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x0028F9DC: bne         $v0, $zero, L_0028F9C0
    if (ctx->r2 != 0) {
        // 0x0028F9E0: addu        $s0, $a0, $v1
        ctx->r16 = ADD32(ctx->r4, ctx->r3);
            goto L_0028F9C0;
    }
    // 0x0028F9E0: addu        $s0, $a0, $v1
    ctx->r16 = ADD32(ctx->r4, ctx->r3);
    // 0x0028F9E4: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_0028F9E8:
    // 0x0028F9E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0028F9EC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0028F9F0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0028F9F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0028F9F8: jr          $ra
    // 0x0028F9FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0028F9FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0028D23C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028D23C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0028D240: addiu       $v1, $v1, -0xD70
    ctx->r3 = ADD32(ctx->r3, -0XD70);
    // 0x0028D244: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
    // 0x0028D248: beq         $v0, $zero, L_0028D25C
    if (ctx->r2 == 0) {
        // 0x0028D24C: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_0028D25C;
    }
    // 0x0028D24C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0028D250: bne         $v0, $zero, L_0028D25C
    if (ctx->r2 != 0) {
        // 0x0028D254: sw          $v0, 0x8($v1)
        MEM_W(0X8, ctx->r3) = ctx->r2;
            goto L_0028D25C;
    }
    // 0x0028D254: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
    // 0x0028D258: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
L_0028D25C:
    // 0x0028D25C: jr          $ra
    // 0x0028D260: nop

    return;
    // 0x0028D260: nop

;}
RECOMP_FUNC void func_0029FE70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029FE70: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x0029FE74: sw          $s1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r17;
    // 0x0029FE78: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0029FE7C: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0029FE80: addiu       $a0, $a0, -0x7458
    ctx->r4 = ADD32(ctx->r4, -0X7458);
    // 0x0029FE84: sw          $s0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r16;
    // 0x0029FE88: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x0029FE8C: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x0029FE90: bne         $v0, $zero, L_0029FEC0
    if (ctx->r2 != 0) {
        // 0x0029FE94: andi        $v0, $a2, 0xFFFF
        ctx->r2 = ctx->r6 & 0XFFFF;
            goto L_0029FEC0;
    }
    // 0x0029FE94: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
    // 0x0029FE98: lw          $v0, 0x14($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X14);
    // 0x0029FE9C: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x0029FEA0: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x0029FEA4: sw          $v0, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->r2;
    // 0x0029FEA8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x0029FEAC: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x0029FEB0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0029FEB4: addiu       $v0, $v0, 0x5000
    ctx->r2 = ADD32(ctx->r2, 0X5000);
    // 0x0029FEB8: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x0029FEBC: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
L_0029FEC0:
    // 0x0029FEC0: beq         $v0, $zero, L_002A0030
    if (ctx->r2 == 0) {
        // 0x0029FEC4: addu        $t1, $zero, $zero
        ctx->r9 = ADD32(0, 0);
            goto L_002A0030;
    }
    // 0x0029FEC4: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
    // 0x0029FEC8: addu        $t2, $a0, $zero
    ctx->r10 = ADD32(ctx->r4, 0);
    // 0x0029FECC: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x0029FED0: addiu       $t3, $t3, 0x5000
    ctx->r11 = ADD32(ctx->r11, 0X5000);
    // 0x0029FED4: addiu       $s0, $zero, 0x10
    ctx->r16 = ADD32(0, 0X10);
    // 0x0029FED8: sllv        $v0, $a3, $s0
    ctx->r2 = S32(ctx->r7 << (ctx->r16 & 31));
    // 0x0029FEDC: srav        $t7, $v0, $s0
    ctx->r15 = S32(SIGNED(ctx->r2) >> (ctx->r16 & 31));
    // 0x0029FEE0: andi        $t5, $a1, 0xFFFF
    ctx->r13 = ctx->r5 & 0XFFFF;
    // 0x0029FEE4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0029FEE8: addiu       $v0, $v0, -0x759C
    ctx->r2 = ADD32(ctx->r2, -0X759C);
    // 0x0029FEEC: sll         $v1, $t5, 1
    ctx->r3 = S32(ctx->r13 << 1);
    // 0x0029FEF0: addu        $t6, $v1, $v0
    ctx->r14 = ADD32(ctx->r3, ctx->r2);
    // 0x0029FEF4: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x0029FEF8: addiu       $t8, $t8, -0x75C0
    ctx->r24 = ADD32(ctx->r24, -0X75C0);
    // 0x0029FEFC: addu        $t4, $v1, $t8
    ctx->r12 = ADD32(ctx->r3, ctx->r24);
L_0029FF00:
    // 0x0029FF00: lhu         $v1, 0x0($t2)
    ctx->r3 = MEM_HU(ctx->r10, 0X0);
    // 0x0029FF04: sltu        $v0, $v1, $t5
    ctx->r2 = ctx->r3 < ctx->r13 ? 1 : 0;
    // 0x0029FF08: beq         $v0, $zero, L_0029FFB0
    if (ctx->r2 == 0) {
        // 0x0029FF0C: andi        $a0, $v1, 0xFFFF
        ctx->r4 = ctx->r3 & 0XFFFF;
            goto L_0029FFB0;
    }
    // 0x0029FF0C: andi        $a0, $v1, 0xFFFF
    ctx->r4 = ctx->r3 & 0XFFFF;
    // 0x0029FF10: subu        $t0, $a1, $v1
    ctx->r8 = SUB32(ctx->r5, ctx->r3);
    // 0x0029FF14: sll         $a0, $a0, 1
    ctx->r4 = S32(ctx->r4 << 1);
    // 0x0029FF18: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x0029FF1C: sll         $v0, $t1, 16
    ctx->r2 = S32(ctx->r9 << 16);
    // 0x0029FF20: sra         $v0, $v0, 15
    ctx->r2 = S32(SIGNED(ctx->r2) >> 15);
    // 0x0029FF24: lhu         $v1, 0x0($t3)
    ctx->r3 = MEM_HU(ctx->r11, 0X0);
    // 0x0029FF28: lhu         $a0, 0x0($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X0);
    // 0x0029FF2C: addu        $a3, $v0, $s1
    ctx->r7 = ADD32(ctx->r2, ctx->r17);
    // 0x0029FF30: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x0029FF34: andi        $a0, $t0, 0xFFFF
    ctx->r4 = ctx->r8 & 0XFFFF;
    // 0x0029FF38: sllv        $v1, $v1, $a0
    ctx->r3 = S32(ctx->r3 << (ctx->r4 & 31));
    // 0x0029FF3C: sh          $v1, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r3;
    // 0x0029FF40: lw          $v0, 0x14($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X14);
    // 0x0029FF44: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x0029FF48: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x0029FF4C: sw          $v0, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->r2;
    // 0x0029FF50: subu        $v0, $s0, $a0
    ctx->r2 = SUB32(ctx->r16, ctx->r4);
    // 0x0029FF54: sll         $a0, $a0, 1
    ctx->r4 = S32(ctx->r4 << 1);
    // 0x0029FF58: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x0029FF5C: sh          $v1, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r3;
    // 0x0029FF60: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
    // 0x0029FF64: srav        $v1, $v1, $v0
    ctx->r3 = S32(SIGNED(ctx->r3) >> (ctx->r2 & 31));
    // 0x0029FF68: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x0029FF6C: lhu         $a0, 0x0($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0X0);
    // 0x0029FF70: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x0029FF74: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x0029FF78: beq         $t7, $zero, L_0029FFA8
    if (ctx->r15 == 0) {
        // 0x0029FF7C: sh          $a0, 0x0($a3)
        MEM_H(0X0, ctx->r7) = ctx->r4;
            goto L_0029FFA8;
    }
    // 0x0029FF7C: sh          $a0, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r4;
    // 0x0029FF80: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x0029FF84: lhu         $v1, 0x0($t6)
    ctx->r3 = MEM_HU(ctx->r14, 0X0);
    // 0x0029FF88: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0029FF8C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0029FF90: beql        $v0, $zero, L_002A000C
    if (ctx->r2 == 0) {
        // 0x0029FF94: subu        $v0, $s0, $t0
        ctx->r2 = SUB32(ctx->r16, ctx->r8);
            goto L_002A000C;
    }
    goto skip_0;
    // 0x0029FF94: subu        $v0, $s0, $t0
    ctx->r2 = SUB32(ctx->r16, ctx->r8);
    skip_0:
    // 0x0029FF98: lhu         $v0, 0x0($t4)
    ctx->r2 = MEM_HU(ctx->r12, 0X0);
    // 0x0029FF9C: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x0029FFA0: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x0029FFA4: sh          $v0, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r2;
L_0029FFA8:
    // 0x0029FFA8: j           L_002A000C
    // 0x0029FFAC: subu        $v0, $s0, $t0
    ctx->r2 = SUB32(ctx->r16, ctx->r8);
        goto L_002A000C;
    // 0x0029FFAC: subu        $v0, $s0, $t0
    ctx->r2 = SUB32(ctx->r16, ctx->r8);
L_0029FFB0:
    // 0x0029FFB0: lhu         $v1, 0x0($t2)
    ctx->r3 = MEM_HU(ctx->r10, 0X0);
    // 0x0029FFB4: lhu         $v0, 0x0($t3)
    ctx->r2 = MEM_HU(ctx->r11, 0X0);
    // 0x0029FFB8: lhu         $a0, 0x0($t4)
    ctx->r4 = MEM_HU(ctx->r12, 0X0);
    // 0x0029FFBC: subu        $v1, $v1, $t5
    ctx->r3 = SUB32(ctx->r3, ctx->r13);
    // 0x0029FFC0: srav        $v0, $v0, $v1
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r3 & 31));
    // 0x0029FFC4: and         $a0, $v0, $a0
    ctx->r4 = ctx->r2 & ctx->r4;
    // 0x0029FFC8: sll         $v0, $t1, 16
    ctx->r2 = S32(ctx->r9 << 16);
    // 0x0029FFCC: sra         $v0, $v0, 15
    ctx->r2 = S32(SIGNED(ctx->r2) >> 15);
    // 0x0029FFD0: addu        $a3, $v0, $s1
    ctx->r7 = ADD32(ctx->r2, ctx->r17);
    // 0x0029FFD4: beq         $t7, $zero, L_002A0004
    if (ctx->r15 == 0) {
        // 0x0029FFD8: sh          $a0, 0x0($a3)
        MEM_H(0X0, ctx->r7) = ctx->r4;
            goto L_002A0004;
    }
    // 0x0029FFD8: sh          $a0, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r4;
    // 0x0029FFDC: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x0029FFE0: lhu         $v1, 0x0($t6)
    ctx->r3 = MEM_HU(ctx->r14, 0X0);
    // 0x0029FFE4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0029FFE8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0029FFEC: beq         $v0, $zero, L_002A0004
    if (ctx->r2 == 0) {
        // 0x0029FFF0: nop
    
            goto L_002A0004;
    }
    // 0x0029FFF0: nop

    // 0x0029FFF4: lhu         $v0, 0x0($t4)
    ctx->r2 = MEM_HU(ctx->r12, 0X0);
    // 0x0029FFF8: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x0029FFFC: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x002A0000: sh          $v0, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r2;
L_002A0004:
    // 0x002A0004: lhu         $v0, 0x0($t2)
    ctx->r2 = MEM_HU(ctx->r10, 0X0);
    // 0x002A0008: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
L_002A000C:
    // 0x002A000C: sh          $v0, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r2;
    // 0x002A0010: addiu       $v0, $t1, 0x1
    ctx->r2 = ADD32(ctx->r9, 0X1);
    // 0x002A0014: addu        $t1, $v0, $zero
    ctx->r9 = ADD32(ctx->r2, 0);
    // 0x002A0018: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x002A001C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x002A0020: andi        $v1, $a2, 0xFFFF
    ctx->r3 = ctx->r6 & 0XFFFF;
    // 0x002A0024: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x002A0028: bne         $v0, $zero, L_0029FF00
    if (ctx->r2 != 0) {
        // 0x002A002C: nop
    
            goto L_0029FF00;
    }
    // 0x002A002C: nop

L_002A0030:
    // 0x002A0030: lw          $s1, 0x4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4);
    // 0x002A0034: lw          $s0, 0x0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X0);
    // 0x002A0038: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002A003C: jr          $ra
    // 0x002A0040: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x002A0040: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_002044A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002044A8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x002044AC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x002044B0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x002044B4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x002044B8: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x002044BC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x002044C0: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x002044C4: addiu       $s0, $s0, -0x7270
    ctx->r16 = ADD32(ctx->r16, -0X7270);
    // 0x002044C8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x002044CC: jal         0x00200738
    // 0x002044D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00200738(rdram, ctx);
        goto after_0;
    // 0x002044D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x002044D4: addiu       $a0, $s0, -0x14
    ctx->r4 = ADD32(ctx->r16, -0X14);
    // 0x002044D8: jal         0x00200518
    // 0x002044DC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00200518(rdram, ctx);
        goto after_1;
    // 0x002044DC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x002044E0: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x002044E4: beql        $v0, $zero, L_00204754
    if (ctx->r2 == 0) {
        // 0x002044E8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00204754;
    }
    goto skip_0;
    // 0x002044E8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    skip_0:
    // 0x002044EC: lw          $a1, 0x8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X8);
    // 0x002044F0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x002044F4: lw          $a0, -0x7E40($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7E40);
    // 0x002044F8: sll         $v0, $a1, 5
    ctx->r2 = S32(ctx->r5 << 5);
    // 0x002044FC: srl         $v1, $a1, 1
    ctx->r3 = S32(U32(ctx->r5) >> 1);
    // 0x00204500: xor         $v0, $v0, $v1
    ctx->r2 = ctx->r2 ^ ctx->r3;
    // 0x00204504: srl         $v1, $a1, 9
    ctx->r3 = S32(U32(ctx->r5) >> 9);
    // 0x00204508: xor         $v0, $v0, $v1
    ctx->r2 = ctx->r2 ^ ctx->r3;
    // 0x0020450C: srl         $v1, $a1, 17
    ctx->r3 = S32(U32(ctx->r5) >> 17);
    // 0x00204510: xor         $v0, $v0, $v1
    ctx->r2 = ctx->r2 ^ ctx->r3;
    // 0x00204514: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x00204518: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x0020451C: lw          $v1, -0x7E3C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7E3C);
    // 0x00204520: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x00204524: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00204528: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0020452C: bne         $v0, $a1, L_0020454C
    if (ctx->r2 != ctx->r5) {
        // 0x00204530: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_0020454C;
    }
    // 0x00204530: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00204534: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x00204538: j           L_0020456C
    // 0x0020453C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
        goto L_0020456C;
    // 0x0020453C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
L_00204540:
    // 0x00204540: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x00204544: j           L_0020456C
    // 0x00204548: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
        goto L_0020456C;
    // 0x00204548: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
L_0020454C:
    // 0x0020454C: beq         $v1, $zero, L_0020456C
    if (ctx->r3 == 0) {
        // 0x00204550: sw          $zero, 0x10($sp)
        MEM_W(0X10, ctx->r29) = 0;
            goto L_0020456C;
    }
    // 0x00204550: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
L_00204554:
    // 0x00204554: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00204558: beq         $v0, $a1, L_00204540
    if (ctx->r2 == ctx->r5) {
        // 0x0020455C: nop
    
            goto L_00204540;
    }
    // 0x0020455C: nop

    // 0x00204560: lw          $v1, 0xC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0XC);
    // 0x00204564: bne         $v1, $zero, L_00204554
    if (ctx->r3 != 0) {
        // 0x00204568: nop
    
            goto L_00204554;
    }
    // 0x00204568: nop

L_0020456C:
    // 0x0020456C: lw          $a0, 0x10($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X10);
    // 0x00204570: beq         $a0, $zero, L_00204710
    if (ctx->r4 == 0) {
        // 0x00204574: nop
    
            goto L_00204710;
    }
    // 0x00204574: nop

    // 0x00204578: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x0020457C: lw          $v1, 0xC($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XC);
    // 0x00204580: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00204584: beq         $v0, $zero, L_00204664
    if (ctx->r2 == 0) {
        // 0x00204588: nop
    
            goto L_00204664;
    }
    // 0x00204588: nop

    // 0x0020458C: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x00204590: jal         0x00202A08
    // 0x00204594: nop

    entry_00202A08(rdram, ctx);
        goto after_2;
    // 0x00204594: nop

    after_2:
    // 0x00204598: lw          $v1, 0x10($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X10);
    // 0x0020459C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x002045A0: sw          $zero, 0x14($v0)
    MEM_W(0X14, ctx->r2) = 0;
    // 0x002045A4: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x002045A8: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    // 0x002045AC: andi        $v0, $v0, 0x702
    ctx->r2 = ctx->r2 & 0X702;
    // 0x002045B0: bne         $v0, $zero, L_00204650
    if (ctx->r2 != 0) {
        // 0x002045B4: nop
    
            goto L_00204650;
    }
    // 0x002045B4: nop

    // 0x002045B8: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x002045BC: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x002045C0: addiu       $a0, $a0, 0x1CC0
    ctx->r4 = ADD32(ctx->r4, 0X1CC0);
    // 0x002045C4: jal         0x002026EC
    // 0x002045C8: nop

    entry_002026EC(rdram, ctx);
        goto after_3;
    // 0x002045C8: nop

    after_3:
    // 0x002045CC: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x002045D0: lw          $s0, 0x0($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X0);
    // 0x002045D4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x002045D8: addiu       $a0, $a0, -0x7E20
    ctx->r4 = ADD32(ctx->r4, -0X7E20);
    // 0x002045DC: jal         0x00200738
    // 0x002045E0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200738(rdram, ctx);
        goto after_4;
    // 0x002045E0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x002045E4: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x002045E8: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x002045EC: beq         $v0, $zero, L_00204604
    if (ctx->r2 == 0) {
        // 0x002045F0: nop
    
            goto L_00204604;
    }
    // 0x002045F0: nop

    // 0x002045F4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x002045F8: addiu       $a0, $a0, -0x7E0C
    ctx->r4 = ADD32(ctx->r4, -0X7E0C);
    // 0x002045FC: jal         0x00200738
    // 0x00204600: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200738(rdram, ctx);
        goto after_5;
    // 0x00204600: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
L_00204604:
    // 0x00204604: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x00204608: lw          $v0, -0x7E28($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7E28);
    // 0x0020460C: bnel        $v0, $s0, L_00204620
    if (ctx->r2 != ctx->r16) {
        // 0x00204610: sw          $zero, 0xC($s0)
        MEM_W(0XC, ctx->r16) = 0;
            goto L_00204620;
    }
    goto skip_1;
    // 0x00204610: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    skip_1:
    // 0x00204614: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00204618: sw          $zero, -0x7E28($at)
    MEM_W(-0X7E28, ctx->r1) = 0;
    // 0x0020461C: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
L_00204620:
    // 0x00204620: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x00204624: lw          $v0, -0x7254($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7254);
    // 0x00204628: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x0020462C: lw          $v1, -0x7E2C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7E2C);
    // 0x00204630: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00204634: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00204638: sw          $s0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r16;
    // 0x0020463C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x00204640: lw          $v0, -0x7254($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7254);
    // 0x00204644: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00204648: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0020464C: sw          $v0, -0x7254($at)
    MEM_W(-0X7254, ctx->r1) = ctx->r2;
L_00204650:
    // 0x00204650: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x00204654: jal         0x002066B0
    // 0x00204658: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002066B0(rdram, ctx);
        goto after_6;
    // 0x00204658: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_6:
    // 0x0020465C: j           L_00204710
    // 0x00204660: nop

        goto L_00204710;
    // 0x00204660: nop

L_00204664:
    // 0x00204664: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00204668: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x0020466C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x00204670: addiu       $a0, $a0, 0x1CC0
    ctx->r4 = ADD32(ctx->r4, 0X1CC0);
    // 0x00204674: jal         0x002026EC
    // 0x00204678: nop

    entry_002026EC(rdram, ctx);
        goto after_7;
    // 0x00204678: nop

    after_7:
    // 0x0020467C: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x00204680: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00204684: addiu       $a0, $a0, -0x7E20
    ctx->r4 = ADD32(ctx->r4, -0X7E20);
    // 0x00204688: jal         0x00200738
    // 0x0020468C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200738(rdram, ctx);
        goto after_8;
    // 0x0020468C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_8:
    // 0x00204690: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x00204694: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x00204698: beq         $v0, $zero, L_002046B0
    if (ctx->r2 == 0) {
        // 0x0020469C: nop
    
            goto L_002046B0;
    }
    // 0x0020469C: nop

    // 0x002046A0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x002046A4: addiu       $a0, $a0, -0x7E0C
    ctx->r4 = ADD32(ctx->r4, -0X7E0C);
    // 0x002046A8: jal         0x00200738
    // 0x002046AC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200738(rdram, ctx);
        goto after_9;
    // 0x002046AC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_9:
L_002046B0:
    // 0x002046B0: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x002046B4: lw          $v0, -0x7E28($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7E28);
    // 0x002046B8: bne         $v0, $s0, L_002046C8
    if (ctx->r2 != ctx->r16) {
        // 0x002046BC: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_002046C8;
    }
    // 0x002046BC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x002046C0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x002046C4: sw          $zero, -0x7E28($at)
    MEM_W(-0X7E28, ctx->r1) = 0;
L_002046C8:
    // 0x002046C8: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x002046CC: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x002046D0: lw          $v0, -0x7254($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7254);
    // 0x002046D4: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x002046D8: lw          $v1, -0x7E2C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7E2C);
    // 0x002046DC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002046E0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x002046E4: sw          $s0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r16;
    // 0x002046E8: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x002046EC: lw          $v0, -0x7254($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7254);
    // 0x002046F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x002046F4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x002046F8: sw          $v0, -0x7254($at)
    MEM_W(-0X7254, ctx->r1) = ctx->r2;
    // 0x002046FC: jal         0x002066B0
    // 0x00204700: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002066B0(rdram, ctx);
        goto after_10;
    // 0x00204700: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_10:
    // 0x00204704: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x00204708: j           L_00204760
    // 0x0020470C: nop

        goto L_00204760;
    // 0x0020470C: nop

L_00204710:
    // 0x00204710: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x00204714: jal         0x00202934
    // 0x00204718: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00202934(rdram, ctx);
        goto after_11;
    // 0x00204718: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_11:
    // 0x0020471C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00204720: beq         $s2, $zero, L_0020474C
    if (ctx->r18 == 0) {
        // 0x00204724: sw          $s1, 0x14($v0)
        MEM_W(0X14, ctx->r2) = ctx->r17;
            goto L_0020474C;
    }
    // 0x00204724: sw          $s1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r17;
    // 0x00204728: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x0020472C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00204730: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00204734: bne         $v0, $zero, L_0020474C
    if (ctx->r2 != 0) {
        // 0x00204738: sw          $v0, 0x8($a0)
        MEM_W(0X8, ctx->r4) = ctx->r2;
            goto L_0020474C;
    }
    // 0x00204738: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0020473C: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x00204740: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x00204744: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00204748: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
L_0020474C:
    // 0x0020474C: j           L_00204760
    // 0x00204750: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
        goto L_00204760;
    // 0x00204750: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
L_00204754:
    // 0x00204754: jal         0x002066B0
    // 0x00204758: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002066B0(rdram, ctx);
        goto after_12;
    // 0x00204758: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_12:
    // 0x0020475C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00204760:
    // 0x00204760: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00204764: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00204768: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0020476C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00204770: jr          $ra
    // 0x00204774: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00204774: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0040DD90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040DD90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0040DD94: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0040DD98: jal         0x00275624
    // 0x0040DD9C: addiu       $a0, $zero, 0x284E
    ctx->r4 = ADD32(0, 0X284E);
    func_00275624(rdram, ctx);
        goto after_0;
    // 0x0040DD9C: addiu       $a0, $zero, 0x284E
    ctx->r4 = ADD32(0, 0X284E);
    after_0:
    // 0x0040DDA0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0040DDA4: jr          $ra
    // 0x0040DDA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040DDA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0041A254(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041A254: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0041A258: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0041A25C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0041A260: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0041A264: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0041A268: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0041A26C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0041A270: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
L_0041A274:
    // 0x0041A274: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0041A278: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x0041A27C: lw          $v1, 0x5F8C($at)
    ctx->r3 = MEM_W(ctx->r1, 0X5F8C);
    // 0x0041A280: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x0041A284: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0041A288: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041A28C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0041A290: sw          $v1, 0x910($at)
    MEM_W(0X910, ctx->r1) = ctx->r3;
    // 0x0041A294: slti        $v0, $a0, 0x4
    ctx->r2 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
    // 0x0041A298: bne         $v0, $zero, L_0041A274
    if (ctx->r2 != 0) {
        // 0x0041A29C: addiu       $a1, $a1, 0x224
        ctx->r5 = ADD32(ctx->r5, 0X224);
            goto L_0041A274;
    }
    // 0x0041A29C: addiu       $a1, $a1, 0x224
    ctx->r5 = ADD32(ctx->r5, 0X224);
    // 0x0041A2A0: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0041A2A4: addiu       $a0, $a0, 0x5A50
    ctx->r4 = ADD32(ctx->r4, 0X5A50);
    // 0x0041A2A8: jal         0x0026EDA8
    // 0x0041A2AC: nop

    func_0026EDA8(rdram, ctx);
        goto after_0;
    // 0x0041A2AC: nop

    after_0:
    // 0x0041A2B0: jal         0x00285304
    // 0x0041A2B4: nop

    func_00285304(rdram, ctx);
        goto after_1;
    // 0x0041A2B4: nop

    after_1:
    // 0x0041A2B8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041A2BC: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0041A2C0: beq         $v0, $zero, L_0041A2F0
    if (ctx->r2 == 0) {
        // 0x0041A2C4: lui         $a0, 0x80
        ctx->r4 = S32(0X80 << 16);
            goto L_0041A2F0;
    }
    // 0x0041A2C4: lui         $a0, 0x80
    ctx->r4 = S32(0X80 << 16);
    // 0x0041A2C8: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0041A2CC: lui         $a0, 0xFF7F
    ctx->r4 = S32(0XFF7F << 16);
    // 0x0041A2D0: lw          $v0, 0x80($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X80);
    // 0x0041A2D4: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x0041A2D8: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0041A2DC: sw          $v0, 0x80($v1)
    MEM_W(0X80, ctx->r3) = ctx->r2;
    // 0x0041A2E0: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0041A2E4: lw          $v0, 0xA8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XA8);
    // 0x0041A2E8: j           L_0041A30C
    // 0x0041A2EC: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
        goto L_0041A30C;
    // 0x0041A2EC: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
L_0041A2F0:
    // 0x0041A2F0: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0041A2F4: lw          $v0, 0x80($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X80);
    // 0x0041A2F8: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x0041A2FC: sw          $v0, 0x80($v1)
    MEM_W(0X80, ctx->r3) = ctx->r2;
    // 0x0041A300: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0041A304: lw          $v0, 0xA8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XA8);
    // 0x0041A308: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
L_0041A30C:
    // 0x0041A30C: jal         0x00275F7C
    // 0x0041A310: sw          $v0, 0xA8($v1)
    MEM_W(0XA8, ctx->r3) = ctx->r2;
    func_00275F7C(rdram, ctx);
        goto after_2;
    // 0x0041A310: sw          $v0, 0xA8($v1)
    MEM_W(0XA8, ctx->r3) = ctx->r2;
    after_2:
    // 0x0041A314: jal         0x00275DC0
    // 0x0041A318: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_00275DC0(rdram, ctx);
        goto after_3;
    // 0x0041A318: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_3:
    // 0x0041A31C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0041A320: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041A324: jr          $ra
    // 0x0041A328: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0041A328: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0041C718(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041C718: lw          $v0, 0x1C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1C);
    // 0x0041C71C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0041C720: addiu       $v1, $v1, -0x54E8
    ctx->r3 = ADD32(ctx->r3, -0X54E8);
    // 0x0041C724: beq         $v0, $zero, L_0041C730
    if (ctx->r2 == 0) {
        // 0x0041C728: nop
    
            goto L_0041C730;
    }
    // 0x0041C728: nop

    // 0x0041C72C: lw          $v1, 0x518($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X518);
L_0041C730:
    // 0x0041C730: lbu         $v1, 0x31($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X31);
    // 0x0041C734: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041C738: bne         $v1, $v0, L_0041C750
    if (ctx->r3 != ctx->r2) {
        // 0x0041C73C: nop
    
            goto L_0041C750;
    }
    // 0x0041C73C: nop

    // 0x0041C740: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041C744: addiu       $v0, $v0, 0x40B0
    ctx->r2 = ADD32(ctx->r2, 0X40B0);
    // 0x0041C748: j           L_0041C75C
    // 0x0041C74C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041C75C;
    // 0x0041C74C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041C750:
    // 0x0041C750: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041C754: addiu       $v0, $v0, 0x40C8
    ctx->r2 = ADD32(ctx->r2, 0X40C8);
    // 0x0041C758: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041C75C:
    // 0x0041C75C: jr          $ra
    // 0x0041C760: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041C760: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0024BF1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0024BF1C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x0024BF20: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x0024BF24: addu        $s6, $a0, $zero
    ctx->r22 = ADD32(ctx->r4, 0);
    // 0x0024BF28: addu        $t0, $a1, $zero
    ctx->r8 = ADD32(ctx->r5, 0);
    // 0x0024BF2C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x0024BF30: mult        $a3, $t0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0024BF34: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x0024BF38: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x0024BF3C: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x0024BF40: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x0024BF44: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x0024BF48: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x0024BF4C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0024BF50: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0024BF54: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x0024BF58: sw          $zero, 0x18($s6)
    MEM_W(0X18, ctx->r22) = 0;
    // 0x0024BF5C: lw          $s7, 0x50($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X50);
    // 0x0024BF60: mflo        $a3
    ctx->r7 = lo;
    // 0x0024BF64: blez        $a3, L_0024BFC8
    if (SIGNED(ctx->r7) <= 0) {
        // 0x0024BF68: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_0024BFC8;
    }
    // 0x0024BF68: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x0024BF6C: addu        $v1, $s6, $zero
    ctx->r3 = ADD32(ctx->r22, 0);
    // 0x0024BF70: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024BF74: lwc1        $f4, 0x6C5C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6C5C);
    // 0x0024BF78: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024BF7C: lwc1        $f3, 0x6C60($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X6C60);
    // 0x0024BF80: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024BF84: lwc1        $f2, -0x1D28($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X1D28);
L_0024BF88:
    // 0x0024BF88: mtc1        $s3, $f0
    ctx->f0.u32l = ctx->r19;
    // 0x0024BF8C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0024BF90: mtc1        $a3, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r7;
    // 0x0024BF94: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0024BF98: div.s       $f1, $f4, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = DIV_S(ctx->f4.fl, ctx->f1.fl);
    // 0x0024BF9C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0024BFA0: nop

    // 0x0024BFA4: mul.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x0024BFA8: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x0024BFAC: slt         $v0, $s3, $a3
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x0024BFB0: sw          $zero, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = 0;
    // 0x0024BFB4: swc1        $f2, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->f2.u32l;
    // 0x0024BFB8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0024BFBC: swc1        $f0, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f0.u32l;
    // 0x0024BFC0: bne         $v0, $zero, L_0024BF88
    if (ctx->r2 != 0) {
        // 0x0024BFC4: addiu       $v1, $v1, 0x18
        ctx->r3 = ADD32(ctx->r3, 0X18);
            goto L_0024BF88;
    }
    // 0x0024BFC4: addiu       $v1, $v1, 0x18
    ctx->r3 = ADD32(ctx->r3, 0X18);
L_0024BFC8:
    // 0x0024BFC8: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x0024BFCC: blez        $t0, L_0024C084
    if (SIGNED(ctx->r8) <= 0) {
        // 0x0024BFD0: addu        $s3, $s4, $zero
        ctx->r19 = ADD32(ctx->r20, 0);
            goto L_0024C084;
    }
    // 0x0024BFD0: addu        $s3, $s4, $zero
    ctx->r19 = ADD32(ctx->r20, 0);
    // 0x0024BFD4: addiu       $fp, $zero, -0x1
    ctx->r30 = ADD32(0, -0X1);
    // 0x0024BFD8: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
L_0024BFDC:
    // 0x0024BFDC: lw          $s5, 0x48($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X48);
    // 0x0024BFE0: sll         $v0, $s4, 1
    ctx->r2 = S32(ctx->r20 << 1);
    // 0x0024BFE4: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x0024BFE8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0024BFEC: addu        $s1, $v0, $s6
    ctx->r17 = ADD32(ctx->r2, ctx->r22);
L_0024BFF0:
    // 0x0024BFF0: lw          $v0, 0x0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X0);
    // 0x0024BFF4: beq         $v0, $zero, L_0024C064
    if (ctx->r2 == 0) {
        // 0x0024BFF8: sll         $v1, $s2, 2
        ctx->r3 = S32(ctx->r18 << 2);
            goto L_0024C064;
    }
    // 0x0024BFF8: sll         $v1, $s2, 2
    ctx->r3 = S32(ctx->r18 << 2);
    // 0x0024BFFC: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x0024C000: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024C004: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0024C008: lw          $s0, -0x9E8($at)
    ctx->r16 = MEM_W(ctx->r1, -0X9E8);
    // 0x0024C00C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0024C010: jal         0x0024E700
    // 0x0024C014: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_0024E700(rdram, ctx);
        goto after_0;
    // 0x0024C014: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_0:
    // 0x0024C018: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x0024C01C: sw          $s2, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r18;
    // 0x0024C020: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    // 0x0024C024: sw          $s0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r16;
    // 0x0024C028: lw          $v0, 0x37C($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X37C);
    // 0x0024C02C: lw          $t0, 0x10($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X10);
    // 0x0024C030: bnel        $v0, $fp, L_0024C054
    if (ctx->r2 != ctx->r30) {
        // 0x0024C034: addiu       $s1, $s1, 0x18
        ctx->r17 = ADD32(ctx->r17, 0X18);
            goto L_0024C054;
    }
    goto skip_0;
    // 0x0024C034: addiu       $s1, $s1, 0x18
    ctx->r17 = ADD32(ctx->r17, 0X18);
    skip_0:
    // 0x0024C038: lh          $v0, 0xB14($s7)
    ctx->r2 = MEM_H(ctx->r23, 0XB14);
    // 0x0024C03C: bnel        $s2, $v0, L_0024C054
    if (ctx->r18 != ctx->r2) {
        // 0x0024C040: addiu       $s1, $s1, 0x18
        ctx->r17 = ADD32(ctx->r17, 0X18);
            goto L_0024C054;
    }
    goto skip_1;
    // 0x0024C040: addiu       $s1, $s1, 0x18
    ctx->r17 = ADD32(ctx->r17, 0X18);
    skip_1:
    // 0x0024C044: sw          $s4, 0x37C($s6)
    MEM_W(0X37C, ctx->r22) = ctx->r20;
    // 0x0024C048: lwc1        $f0, 0x28($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X28);
    // 0x0024C04C: swc1        $f0, 0xC($s6)
    MEM_W(0XC, ctx->r22) = ctx->f0.u32l;
    // 0x0024C050: addiu       $s1, $s1, 0x18
    ctx->r17 = ADD32(ctx->r17, 0X18);
L_0024C054:
    // 0x0024C054: lw          $v0, 0x18($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X18);
    // 0x0024C058: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x0024C05C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0024C060: sw          $v0, 0x18($s6)
    MEM_W(0X18, ctx->r22) = ctx->r2;
L_0024C064:
    // 0x0024C064: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x0024C068: slti        $v0, $s2, 0x23
    ctx->r2 = SIGNED(ctx->r18) < 0X23 ? 1 : 0;
    // 0x0024C06C: bne         $v0, $zero, L_0024BFF0
    if (ctx->r2 != 0) {
        // 0x0024C070: addiu       $s5, $s5, 0x4
        ctx->r21 = ADD32(ctx->r21, 0X4);
            goto L_0024BFF0;
    }
    // 0x0024C070: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
    // 0x0024C074: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x0024C078: slt         $v0, $s3, $t0
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x0024C07C: bne         $v0, $zero, L_0024BFDC
    if (ctx->r2 != 0) {
        // 0x0024C080: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_0024BFDC;
    }
    // 0x0024C080: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
L_0024C084:
    // 0x0024C084: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x0024C088: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x0024C08C: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x0024C090: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x0024C094: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x0024C098: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x0024C09C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x0024C0A0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0024C0A4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0024C0A8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0024C0AC: jr          $ra
    // 0x0024C0B0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x0024C0B0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00403C14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00403C14: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00403C18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00403C1C: bne         $a1, $v0, L_00403C8C
    if (ctx->r5 != ctx->r2) {
        // 0x00403C20: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_00403C8C;
    }
    // 0x00403C20: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x00403C24: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00403C28: addiu       $v1, $v1, -0x634
    ctx->r3 = ADD32(ctx->r3, -0X634);
    // 0x00403C2C: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x00403C30: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00403C34: addiu       $v0, $zero, 0x1400
    ctx->r2 = ADD32(0, 0X1400);
    // 0x00403C38: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00403C3C: lwc1        $f0, 0x388($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X388);
    // 0x00403C40: addiu       $a0, $zero, 0x3200
    ctx->r4 = ADD32(0, 0X3200);
    // 0x00403C44: sw          $v0, -0x38($v1)
    MEM_W(-0X38, ctx->r3) = ctx->r2;
    // 0x00403C48: sw          $v0, -0x34($v1)
    MEM_W(-0X34, ctx->r3) = ctx->r2;
    // 0x00403C4C: sw          $v0, -0x2C($v1)
    MEM_W(-0X2C, ctx->r3) = ctx->r2;
    // 0x00403C50: sw          $v0, -0x30($v1)
    MEM_W(-0X30, ctx->r3) = ctx->r2;
    // 0x00403C54: sw          $v0, -0x18($v1)
    MEM_W(-0X18, ctx->r3) = ctx->r2;
    // 0x00403C58: sw          $v0, -0x14($v1)
    MEM_W(-0X14, ctx->r3) = ctx->r2;
    // 0x00403C5C: sw          $v0, -0xC($v1)
    MEM_W(-0XC, ctx->r3) = ctx->r2;
    // 0x00403C60: sw          $v0, -0x10($v1)
    MEM_W(-0X10, ctx->r3) = ctx->r2;
    // 0x00403C64: addiu       $v0, $zero, 0x5000
    ctx->r2 = ADD32(0, 0X5000);
    // 0x00403C68: sw          $v0, -0x44($v1)
    MEM_W(-0X44, ctx->r3) = ctx->r2;
    // 0x00403C6C: sw          $v0, -0x24($v1)
    MEM_W(-0X24, ctx->r3) = ctx->r2;
    // 0x00403C70: ori         $v0, $zero, 0xC800
    ctx->r2 = 0 | 0XC800;
    // 0x00403C74: sw          $a0, -0x3C($v1)
    MEM_W(-0X3C, ctx->r3) = ctx->r4;
    // 0x00403C78: sw          $a0, -0x1C($v1)
    MEM_W(-0X1C, ctx->r3) = ctx->r4;
    // 0x00403C7C: sw          $v0, -0x40($v1)
    MEM_W(-0X40, ctx->r3) = ctx->r2;
    // 0x00403C80: sw          $v0, -0x20($v1)
    MEM_W(-0X20, ctx->r3) = ctx->r2;
    // 0x00403C84: j           L_00403CE0
    // 0x00403C88: swc1        $f0, -0x70($v1)
    MEM_W(-0X70, ctx->r3) = ctx->f0.u32l;
        goto L_00403CE0;
    // 0x00403C88: swc1        $f0, -0x70($v1)
    MEM_W(-0X70, ctx->r3) = ctx->f0.u32l;
L_00403C8C:
    // 0x00403C8C: bne         $a1, $v1, L_00403CC0
    if (ctx->r5 != ctx->r3) {
        // 0x00403C90: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00403CC0;
    }
    // 0x00403C90: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00403C94: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00403C98: addiu       $v1, $v1, -0x634
    ctx->r3 = ADD32(ctx->r3, -0X634);
    // 0x00403C9C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00403CA0: addiu       $a0, $zero, 0x3200
    ctx->r4 = ADD32(0, 0X3200);
    // 0x00403CA4: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00403CA8: addiu       $v0, $zero, 0x5000
    ctx->r2 = ADD32(0, 0X5000);
    // 0x00403CAC: sw          $a0, -0x3C($v1)
    MEM_W(-0X3C, ctx->r3) = ctx->r4;
    // 0x00403CB0: sw          $v0, -0x44($v1)
    MEM_W(-0X44, ctx->r3) = ctx->r2;
    // 0x00403CB4: sw          $a0, -0x1C($v1)
    MEM_W(-0X1C, ctx->r3) = ctx->r4;
    // 0x00403CB8: j           L_00403CE0
    // 0x00403CBC: sw          $v0, -0x24($v1)
    MEM_W(-0X24, ctx->r3) = ctx->r2;
        goto L_00403CE0;
    // 0x00403CBC: sw          $v0, -0x24($v1)
    MEM_W(-0X24, ctx->r3) = ctx->r2;
L_00403CC0:
    // 0x00403CC0: bne         $a1, $v0, L_00403CE0
    if (ctx->r5 != ctx->r2) {
        // 0x00403CC4: nop
    
            goto L_00403CE0;
    }
    // 0x00403CC4: nop

    // 0x00403CC8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00403CCC: addiu       $v0, $v0, -0x634
    ctx->r2 = ADD32(ctx->r2, -0X634);
    // 0x00403CD0: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x00403CD4: ori         $v1, $zero, 0xC800
    ctx->r3 = 0 | 0XC800;
    // 0x00403CD8: sw          $v1, -0x40($v0)
    MEM_W(-0X40, ctx->r2) = ctx->r3;
    // 0x00403CDC: sw          $v1, -0x20($v0)
    MEM_W(-0X20, ctx->r2) = ctx->r3;
L_00403CE0:
    // 0x00403CE0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00403CE4: addiu       $v0, $v0, -0x9F8
    ctx->r2 = ADD32(ctx->r2, -0X9F8);
    // 0x00403CE8: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x00403CEC: sb          $zero, 0x3C8($v0)
    MEM_B(0X3C8, ctx->r2) = 0;
    // 0x00403CF0: jr          $ra
    // 0x00403CF4: sb          $zero, 0x3C9($v0)
    MEM_B(0X3C9, ctx->r2) = 0;
    return;
    // 0x00403CF4: sb          $zero, 0x3C9($v0)
    MEM_B(0X3C9, ctx->r2) = 0;
;}
RECOMP_FUNC void func_0045CCC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_00294644(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00294644: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x00294648: slti        $v0, $v0, 0xFF
    ctx->r2 = SIGNED(ctx->r2) < 0XFF ? 1 : 0;
    // 0x0029464C: bnel        $v0, $zero, L_0029465C
    if (ctx->r2 != 0) {
        // 0x00294650: addiu       $sp, $sp, -0x20
        ctx->r29 = ADD32(ctx->r29, -0X20);
            goto L_0029465C;
    }
    goto skip_0;
    // 0x00294650: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    skip_0:
    // 0x00294654: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00294658: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
L_0029465C:
    // 0x0029465C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00294660: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00294664: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00294668: beq         $v0, $zero, L_002946B8
    if (ctx->r2 == 0) {
        // 0x0029466C: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_002946B8;
    }
    // 0x0029466C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00294670: jal         0x00294B58
    // 0x00294674: nop

    func_00294B58(rdram, ctx);
        goto after_0;
    // 0x00294674: nop

    after_0:
    // 0x00294678: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x0029467C: beq         $a2, $zero, L_002946B8
    if (ctx->r6 == 0) {
        // 0x00294680: nop
    
            goto L_002946B8;
    }
    // 0x00294680: nop

    // 0x00294684: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00294688: lw          $v1, 0x1C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X1C);
    // 0x0029468C: lw          $a0, 0xD8($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XD8);
    // 0x00294690: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x00294694: sh          $v0, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r2;
    // 0x00294698: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x0029469C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x002946A0: sw          $v1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r3;
    // 0x002946A4: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x002946A8: lw          $a0, 0xC($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XC);
    // 0x002946AC: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x002946B0: jalr        $v0
    // 0x002946B4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x002946B4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
L_002946B8:
    // 0x002946B8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x002946BC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002946C0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002946C4: jr          $ra
    // 0x002946C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002946C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0040B298(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040B298: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x0040B29C: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x0040B2A0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0040B2A4: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x0040B2A8: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0040B2AC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x0040B2B0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0040B2B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0040B2B8: sw          $ra, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r31;
    // 0x0040B2BC: jal         0x00246108
    // 0x0040B2C0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x0040B2C0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x0040B2C4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040B2C8: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x0040B2CC: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x0040B2D0: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x0040B2D4: jal         0x00245BAC
    // 0x0040B2D8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x0040B2D8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0040B2DC: lb          $v0, 0xC7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC7);
    // 0x0040B2E0: beq         $v0, $zero, L_0040B2F4
    if (ctx->r2 == 0) {
        // 0x0040B2E4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0040B2F4;
    }
    // 0x0040B2E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040B2E8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0040B2EC: jal         0x00243414
    // 0x0040B2F0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x0040B2F0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_2:
L_0040B2F4:
    // 0x0040B2F4: lw          $ra, 0xA8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA8);
    // 0x0040B2F8: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x0040B2FC: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x0040B300: jr          $ra
    // 0x0040B304: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x0040B304: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_0042F650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042F650: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0042F654: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0042F658: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x0042F65C: jalr        $v0
    // 0x0042F660: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x0042F660: nop

    after_0:
    // 0x0042F664: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0042F668: jr          $ra
    // 0x0042F66C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0042F66C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00285A68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00285A68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00285A6C: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00285A70: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x00285A74: sb          $v0, 0x5EA0($at)
    MEM_B(0X5EA0, ctx->r1) = ctx->r2;
    // 0x00285A78: jr          $ra
    // 0x00285A7C: nop

    return;
    // 0x00285A7C: nop

;}
RECOMP_FUNC void func_00219F74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00219F74: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x00219F78: sw          $s0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r16;
    // 0x00219F7C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00219F80: sw          $s3, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r19;
    // 0x00219F84: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x00219F88: sw          $s5, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r21;
    // 0x00219F8C: sw          $ra, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r31;
    // 0x00219F90: sw          $s6, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r22;
    // 0x00219F94: sw          $s4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r20;
    // 0x00219F98: sw          $s2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r18;
    // 0x00219F9C: sw          $s1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r17;
    // 0x00219FA0: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x00219FA4: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
    // 0x00219FA8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00219FAC: beq         $v0, $zero, L_0021A124
    if (ctx->r2 == 0) {
        // 0x00219FB0: addu        $s5, $a2, $zero
        ctx->r21 = ADD32(ctx->r6, 0);
            goto L_0021A124;
    }
    // 0x00219FB0: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
    // 0x00219FB4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00219FB8: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x00219FBC: addiu       $v0, $v0, 0x5AC4
    ctx->r2 = ADD32(ctx->r2, 0X5AC4);
    // 0x00219FC0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00219FC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00219FC8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00219FCC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00219FD0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x00219FD4: lw          $a1, 0xA4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XA4);
    // 0x00219FD8: lw          $a2, 0xB0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XB0);
    // 0x00219FDC: jal         0x0020367C
    // 0x00219FE0: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    func_0020367C(rdram, ctx);
        goto after_0;
    // 0x00219FE0: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    after_0:
    // 0x00219FE4: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x00219FE8: beq         $s4, $zero, L_0021A128
    if (ctx->r20 == 0) {
        // 0x00219FEC: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0021A128;
    }
    // 0x00219FEC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00219FF0: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x00219FF4: jal         0x002017D4
    // 0x00219FF8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00219FF8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x00219FFC: addiu       $s1, $v0, 0x8
    ctx->r17 = ADD32(ctx->r2, 0X8);
    // 0x0021A000: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0021A004: lh          $a1, 0xBA($s0)
    ctx->r5 = MEM_H(ctx->r16, 0XBA);
    // 0x0021A008: lw          $s2, 0x4($v0)
    ctx->r18 = MEM_W(ctx->r2, 0X4);
    // 0x0021A00C: jal         0x00266D24
    // 0x0021A010: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_00266D24(rdram, ctx);
        goto after_2;
    // 0x0021A010: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_2:
    // 0x0021A014: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0021A018: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0021A01C: beq         $s0, $v0, L_0021A114
    if (ctx->r16 == ctx->r2) {
        // 0x0021A020: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0021A114;
    }
    // 0x0021A020: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0021A024: blez        $s0, L_0021A04C
    if (SIGNED(ctx->r16) <= 0) {
        // 0x0021A028: addu        $s6, $s0, $zero
        ctx->r22 = ADD32(ctx->r16, 0);
            goto L_0021A04C;
    }
    // 0x0021A028: addu        $s6, $s0, $zero
    ctx->r22 = ADD32(ctx->r16, 0);
    // 0x0021A02C: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x0021A030: addu        $v1, $v0, $s1
    ctx->r3 = ADD32(ctx->r2, ctx->r17);
L_0021A034:
    // 0x0021A034: lw          $v0, -0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, -0X4);
    // 0x0021A038: bne         $v0, $s3, L_0021A04C
    if (ctx->r2 != ctx->r19) {
        // 0x0021A03C: nop
    
            goto L_0021A04C;
    }
    // 0x0021A03C: nop

    // 0x0021A040: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x0021A044: bgtz        $s0, L_0021A034
    if (SIGNED(ctx->r16) > 0) {
        // 0x0021A048: addiu       $v1, $v1, -0x4
        ctx->r3 = ADD32(ctx->r3, -0X4);
            goto L_0021A034;
    }
    // 0x0021A048: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
L_0021A04C:
    // 0x0021A04C: jal         0x0026D5DC
    // 0x0021A050: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    func_0026D5DC(rdram, ctx);
        goto after_3;
    // 0x0021A050: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x0021A054: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0021A058: bne         $s5, $v0, L_0021A0A4
    if (ctx->r21 != ctx->r2) {
        // 0x0021A05C: slt         $v0, $s0, $s2
        ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
            goto L_0021A0A4;
    }
    // 0x0021A05C: slt         $v0, $s0, $s2
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x0021A060: beq         $v0, $zero, L_0021A0E4
    if (ctx->r2 == 0) {
        // 0x0021A064: sll         $v0, $s0, 2
        ctx->r2 = S32(ctx->r16 << 2);
            goto L_0021A0E4;
    }
    // 0x0021A064: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x0021A068: addu        $s1, $v0, $s1
    ctx->r17 = ADD32(ctx->r2, ctx->r17);
L_0021A06C:
    // 0x0021A06C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x0021A070: bne         $v0, $s3, L_0021A0E4
    if (ctx->r2 != ctx->r19) {
        // 0x0021A074: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_0021A0E4;
    }
    // 0x0021A074: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x0021A078: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
    // 0x0021A07C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0021A080: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0021A084: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x0021A088: jal         0x0026D5E4
    // 0x0021A08C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_0026D5E4(rdram, ctx);
        goto after_4;
    // 0x0021A08C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_4:
    // 0x0021A090: slt         $v0, $s0, $s2
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x0021A094: beq         $v0, $zero, L_0021A0E4
    if (ctx->r2 == 0) {
        // 0x0021A098: nop
    
            goto L_0021A0E4;
    }
    // 0x0021A098: nop

    // 0x0021A09C: j           L_0021A06C
    // 0x0021A0A0: nop

        goto L_0021A06C;
    // 0x0021A0A0: nop

L_0021A0A4:
    // 0x0021A0A4: beq         $v0, $zero, L_0021A0E4
    if (ctx->r2 == 0) {
        // 0x0021A0A8: sll         $v0, $s0, 2
        ctx->r2 = S32(ctx->r16 << 2);
            goto L_0021A0E4;
    }
    // 0x0021A0A8: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x0021A0AC: addu        $s1, $v0, $s1
    ctx->r17 = ADD32(ctx->r2, ctx->r17);
L_0021A0B0:
    // 0x0021A0B0: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x0021A0B4: bne         $v0, $s3, L_0021A0E4
    if (ctx->r2 != ctx->r19) {
        // 0x0021A0B8: nop
    
            goto L_0021A0E4;
    }
    // 0x0021A0B8: nop

    // 0x0021A0BC: beq         $s5, $s0, L_0021A0D4
    if (ctx->r21 == ctx->r16) {
        // 0x0021A0C0: addiu       $a0, $sp, 0x20
        ctx->r4 = ADD32(ctx->r29, 0X20);
            goto L_0021A0D4;
    }
    // 0x0021A0C0: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0021A0C4: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
    // 0x0021A0C8: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x0021A0CC: jal         0x0026D5E4
    // 0x0021A0D0: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_0026D5E4(rdram, ctx);
        goto after_5;
    // 0x0021A0D0: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_5:
L_0021A0D4:
    // 0x0021A0D4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0021A0D8: slt         $v0, $s0, $s2
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x0021A0DC: bne         $v0, $zero, L_0021A0B0
    if (ctx->r2 != 0) {
        // 0x0021A0E0: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_0021A0B0;
    }
    // 0x0021A0E0: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_0021A0E4:
    // 0x0021A0E4: lh          $v0, 0x20($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X20);
    // 0x0021A0E8: bne         $v0, $zero, L_0021A100
    if (ctx->r2 != 0) {
        // 0x0021A0EC: addiu       $a0, $sp, 0x20
        ctx->r4 = ADD32(ctx->r29, 0X20);
            goto L_0021A100;
    }
    // 0x0021A0EC: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0021A0F0: sll         $a1, $s6, 16
    ctx->r5 = S32(ctx->r22 << 16);
    // 0x0021A0F4: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x0021A0F8: jal         0x0026D5E4
    // 0x0021A0FC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_0026D5E4(rdram, ctx);
        goto after_6;
    // 0x0021A0FC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_6:
L_0021A100:
    // 0x0021A100: jal         0x0026D628
    // 0x0021A104: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    func_0026D628(rdram, ctx);
        goto after_7;
    // 0x0021A104: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_7:
    // 0x0021A108: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0021A10C: sra         $s0, $v0, 16
    ctx->r16 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0021A110: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0021A114:
    // 0x0021A114: jal         0x002051F4
    // 0x0021A118: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_002051F4(rdram, ctx);
        goto after_8;
    // 0x0021A118: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_8:
    // 0x0021A11C: j           L_0021A128
    // 0x0021A120: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
        goto L_0021A128;
    // 0x0021A120: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_0021A124:
    // 0x0021A124: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_0021A128:
    // 0x0021A128: lw          $ra, 0xA4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA4);
    // 0x0021A12C: lw          $s6, 0xA0($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XA0);
    // 0x0021A130: lw          $s5, 0x9C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X9C);
    // 0x0021A134: lw          $s4, 0x98($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X98);
    // 0x0021A138: lw          $s3, 0x94($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X94);
    // 0x0021A13C: lw          $s2, 0x90($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X90);
    // 0x0021A140: lw          $s1, 0x8C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X8C);
    // 0x0021A144: lw          $s0, 0x88($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X88);
    // 0x0021A148: jr          $ra
    // 0x0021A14C: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    // 0x0021A14C: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void func_004221C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004221C4: lw          $v1, 0xC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC);
    // 0x004221C8: lui         $a1, 0xFE7F
    ctx->r5 = S32(0XFE7F << 16);
    // 0x004221CC: lw          $v0, 0xA8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XA8);
    // 0x004221D0: ori         $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 | 0XFFFF;
    // 0x004221D4: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x004221D8: sw          $v0, 0xA8($v1)
    MEM_W(0XA8, ctx->r3) = ctx->r2;
    // 0x004221DC: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x004221E0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004221E4: sw          $zero, 0x960($at)
    MEM_W(0X960, ctx->r1) = 0;
    // 0x004221E8: lw          $v0, 0xD0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD0);
    // 0x004221EC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x004221F0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004221F4: sw          $v1, 0x9A8($at)
    MEM_W(0X9A8, ctx->r1) = ctx->r3;
    // 0x004221F8: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x004221FC: jr          $ra
    // 0x00422200: sw          $v0, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = ctx->r2;
    return;
    // 0x00422200: sw          $v0, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_002116F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002116F0: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x002116F4: nop

    // 0x002116F8: bc1tl       L_00211700
    if (c1cs) {
        // 0x002116FC: mov.s       $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
            goto L_00211700;
    }
    goto skip_0;
    // 0x002116FC: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    skip_0:
L_00211700:
    // 0x00211700: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    // 0x00211704: jr          $ra
    // 0x00211708: nop

    return;
    // 0x00211708: nop

;}
RECOMP_FUNC void func_00422E8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00422E8C: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00422E90: lw          $v1, 0x9C0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X9C0);
    // 0x00422E94: sltiu       $v0, $v1, 0x10
    ctx->r2 = ctx->r3 < 0X10 ? 1 : 0;
    // 0x00422E98: beq         $v0, $zero, L_00422EB4
    if (ctx->r2 == 0) {
        // 0x00422E9C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00422EB4;
    }
    // 0x00422E9C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00422EA0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00422EA4: addu        $at, $at, $v0
    gpr jr_addend_00422EAC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00422EA8: lw          $v0, 0x1630($at)
    ctx->r2 = ADD32(ctx->r1, 0X1630);
    // 0x00422EAC: jr          $v0
    // 0x00422EB0: nop

    switch (jr_addend_00422EAC >> 2) {
        case 0: goto L_00422EB4; break;
        case 1: goto L_00422EB4; break;
        case 2: goto L_00422EB4; break;
        case 3: goto L_00422EB4; break;
        case 4: goto L_00422EB4; break;
        case 5: goto L_00422EB4; break;
        case 6: goto L_00422EB4; break;
        case 7: goto L_00422EB4; break;
        case 8: goto L_00422EC4; break;
        case 9: goto L_00422EB4; break;
        case 10: goto L_00422EB4; break;
        case 11: goto L_00422EB4; break;
        case 12: goto L_00422EB4; break;
        case 13: goto L_00422EB4; break;
        case 14: goto L_00422EB4; break;
        case 15: goto L_00422EB4; break;
        default: switch_error(__func__, 0x00422EAC, 0x800C1630);
    }
    // 0x00422EB0: nop

L_00422EB4:
    // 0x00422EB4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422EB8: addiu       $v0, $v0, 0x4BB0
    ctx->r2 = ADD32(ctx->r2, 0X4BB0);
    // 0x00422EBC: j           L_00422ED0
    // 0x00422EC0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422ED0;
    // 0x00422EC0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422EC4:
    // 0x00422EC4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422EC8: addiu       $v0, $v0, 0x4BB4
    ctx->r2 = ADD32(ctx->r2, 0X4BB4);
    // 0x00422ECC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422ED0:
    // 0x00422ED0: jr          $ra
    // 0x00422ED4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00422ED4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0025F4AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025F4AC: jr          $ra
    // 0x0025F4B0: nop

    return;
    // 0x0025F4B0: nop

;}
RECOMP_FUNC void func_0028E068(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028E068: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x0028E06C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x0028E070: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x0028E074: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x0028E078: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x0028E07C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x0028E080: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x0028E084: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0028E088: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0028E08C: sdc1        $f21, 0x40($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X40, ctx->r29);
    // 0x0028E090: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x0028E094: jal         0x0029B140
    // 0x0028E098: nop

    func_0029B140(rdram, ctx);
        goto after_0;
    // 0x0028E098: nop

    after_0:
    // 0x0028E09C: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x0028E0A0: lw          $v0, 0x120($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X120);
    // 0x0028E0A4: andi        $v1, $v0, 0x7C
    ctx->r3 = ctx->r2 & 0X7C;
    // 0x0028E0A8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0028E0AC: beq         $v1, $v0, L_0028E0BC
    if (ctx->r3 == ctx->r2) {
        // 0x0028E0B0: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_0028E0BC;
    }
    // 0x0028E0B0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x0028E0B4: bne         $v1, $v0, L_0028E3F8
    if (ctx->r3 != ctx->r2) {
        // 0x0028E0B8: nop
    
            goto L_0028E3F8;
    }
    // 0x0028E0B8: nop

L_0028E0BC:
    // 0x0028E0BC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0028E0C0: addiu       $v0, $v0, 0x6A0
    ctx->r2 = ADD32(ctx->r2, 0X6A0);
    // 0x0028E0C4: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x0028E0C8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0028E0CC: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x0028E0D0: lw          $v1, 0x124($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X124);
    // 0x0028E0D4: addiu       $s0, $v0, 0xCD8
    ctx->r16 = ADD32(ctx->r2, 0XCD8);
    // 0x0028E0D8: beq         $s0, $zero, L_0028E110
    if (ctx->r16 == 0) {
        // 0x0028E0DC: srl         $s2, $v1, 12
        ctx->r18 = S32(U32(ctx->r3) >> 12);
            goto L_0028E110;
    }
    // 0x0028E0DC: srl         $s2, $v1, 12
    ctx->r18 = S32(U32(ctx->r3) >> 12);
L_0028E0E0:
    // 0x0028E0E0: lhu         $v1, 0x4($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4);
    // 0x0028E0E4: sltu        $v0, $s2, $v1
    ctx->r2 = ctx->r18 < ctx->r3 ? 1 : 0;
    // 0x0028E0E8: bne         $v0, $zero, L_0028E104
    if (ctx->r2 != 0) {
        // 0x0028E0EC: nop
    
            goto L_0028E104;
    }
    // 0x0028E0EC: nop

    // 0x0028E0F0: lhu         $v0, 0x6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6);
    // 0x0028E0F4: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x0028E0F8: sltu        $v0, $s2, $v0
    ctx->r2 = ctx->r18 < ctx->r2 ? 1 : 0;
    // 0x0028E0FC: bne         $v0, $zero, L_0028E110
    if (ctx->r2 != 0) {
        // 0x0028E100: nop
    
            goto L_0028E110;
    }
    // 0x0028E100: nop

L_0028E104:
    // 0x0028E104: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x0028E108: bne         $s0, $zero, L_0028E0E0
    if (ctx->r16 != 0) {
        // 0x0028E10C: nop
    
            goto L_0028E0E0;
    }
    // 0x0028E10C: nop

L_0028E110:
    // 0x0028E110: beq         $s0, $zero, L_0028E324
    if (ctx->r16 == 0) {
        // 0x0028E114: addiu       $a0, $zero, 0xFF
        ctx->r4 = ADD32(0, 0XFF);
            goto L_0028E324;
    }
    // 0x0028E114: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x0028E118: lw          $v0, 0x124($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X124);
    // 0x0028E11C: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x0028E120: addiu       $s1, $s1, 0x6A8
    ctx->r17 = ADD32(ctx->r17, 0X6A8);
    // 0x0028E124: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x0028E128: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x0028E12C: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x0028E130: subu        $v0, $s2, $v0
    ctx->r2 = SUB32(ctx->r18, ctx->r2);
    // 0x0028E134: addu        $s3, $v1, $v0
    ctx->r19 = ADD32(ctx->r3, ctx->r2);
    // 0x0028E138: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x0028E13C: beq         $v0, $a0, L_0028E214
    if (ctx->r2 == ctx->r4) {
        // 0x0028E140: sll         $v0, $v0, 4
        ctx->r2 = S32(ctx->r2 << 4);
            goto L_0028E214;
    }
    // 0x0028E140: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x0028E144: addiu       $v1, $s1, 0x918
    ctx->r3 = ADD32(ctx->r17, 0X918);
    // 0x0028E148: addu        $s0, $v0, $v1
    ctx->r16 = ADD32(ctx->r2, ctx->r3);
    // 0x0028E14C: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x0028E150: bne         $v0, $a0, L_0028E208
    if (ctx->r2 != ctx->r4) {
        // 0x0028E154: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0028E208;
    }
    // 0x0028E154: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0028E158: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x0028E15C: beq         $v1, $zero, L_0028E170
    if (ctx->r3 == 0) {
        // 0x0028E160: nop
    
            goto L_0028E170;
    }
    // 0x0028E160: nop

    // 0x0028E164: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0028E168: j           L_0028E184
    // 0x0028E16C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
        goto L_0028E184;
    // 0x0028E16C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_0028E170:
    // 0x0028E170: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0028E174: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028E178: sw          $v0, 0x1290($at)
    MEM_W(0X1290, ctx->r1) = ctx->r2;
    // 0x0028E17C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0028E180: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
L_0028E184:
    // 0x0028E184: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x0028E188: beq         $v1, $zero, L_0028E19C
    if (ctx->r3 == 0) {
        // 0x0028E18C: nop
    
            goto L_0028E19C;
    }
    // 0x0028E18C: nop

    // 0x0028E190: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0028E194: j           L_0028E1B0
    // 0x0028E198: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
        goto L_0028E1B0;
    // 0x0028E198: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
L_0028E19C:
    // 0x0028E19C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0028E1A0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028E1A4: sw          $v0, 0x1294($at)
    MEM_W(0X1294, ctx->r1) = ctx->r2;
    // 0x0028E1A8: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0028E1AC: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
L_0028E1B0:
    // 0x0028E1B0: sll         $a0, $s2, 16
    ctx->r4 = S32(ctx->r18 << 16);
    // 0x0028E1B4: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x0028E1B8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0028E1BC: lbu         $a2, 0x17($s4)
    ctx->r6 = MEM_BU(ctx->r20, 0X17);
    // 0x0028E1C0: jal         0x0028DBAC
    // 0x0028E1C4: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    func_0028DBAC(rdram, ctx);
        goto after_1;
    // 0x0028E1C4: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    after_1:
    // 0x0028E1C8: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x0028E1CC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0028E1D0: lw          $v0, 0x1294($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1294);
    // 0x0028E1D4: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x0028E1D8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0028E1DC: lw          $v0, 0x1294($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1294);
    // 0x0028E1E0: bnel        $v0, $zero, L_0028E1E8
    if (ctx->r2 != 0) {
        // 0x0028E1E4: sw          $s0, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r16;
            goto L_0028E1E8;
    }
    goto skip_0;
    // 0x0028E1E4: sw          $s0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r16;
    skip_0:
L_0028E1E8:
    // 0x0028E1E8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0028E1EC: lw          $v0, 0x1290($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1290);
    // 0x0028E1F0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028E1F4: sw          $s0, 0x1294($at)
    MEM_W(0X1294, ctx->r1) = ctx->r16;
    // 0x0028E1F8: bne         $v0, $zero, L_0028E208
    if (ctx->r2 != 0) {
        // 0x0028E1FC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0028E208;
    }
    // 0x0028E1FC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0028E200: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028E204: sw          $s0, 0x1290($at)
    MEM_W(0X1290, ctx->r1) = ctx->r16;
L_0028E208:
    // 0x0028E208: sh          $v0, 0x12($s4)
    MEM_H(0X12, ctx->r20) = ctx->r2;
    // 0x0028E20C: j           L_0028E504
    // 0x0028E210: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
        goto L_0028E504;
    // 0x0028E210: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
L_0028E214:
    // 0x0028E214: addiu       $a0, $s1, 0xA98
    ctx->r4 = ADD32(ctx->r17, 0XA98);
    // 0x0028E218: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x0028E21C: jal         0x0029B6F0
    // 0x0028E220: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x0028E220: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x0028E224: lw          $v0, -0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, -0X4);
    // 0x0028E228: addiu       $v1, $zero, 0x1000
    ctx->r3 = ADD32(0, 0X1000);
    // 0x0028E22C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0028E230: sw          $v0, -0x4($s1)
    MEM_W(-0X4, ctx->r17) = ctx->r2;
    // 0x0028E234: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x0028E238: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x0028E23C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x0028E240: subu        $v0, $s2, $v0
    ctx->r2 = SUB32(ctx->r18, ctx->r2);
    // 0x0028E244: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x0028E248: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x0028E24C: sw          $v1, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r3;
    // 0x0028E250: sw          $a0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r4;
    // 0x0028E254: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x0028E258: lw          $s0, 0x1290($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X1290);
    // 0x0028E25C: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x0028E260: beq         $v1, $zero, L_0028E274
    if (ctx->r3 == 0) {
        // 0x0028E264: nop
    
            goto L_0028E274;
    }
    // 0x0028E264: nop

    // 0x0028E268: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0028E26C: j           L_0028E288
    // 0x0028E270: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
        goto L_0028E288;
    // 0x0028E270: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_0028E274:
    // 0x0028E274: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0028E278: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028E27C: sw          $v0, 0x1290($at)
    MEM_W(0X1290, ctx->r1) = ctx->r2;
    // 0x0028E280: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0028E284: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
L_0028E288:
    // 0x0028E288: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x0028E28C: beq         $v1, $zero, L_0028E2A0
    if (ctx->r3 == 0) {
        // 0x0028E290: nop
    
            goto L_0028E2A0;
    }
    // 0x0028E290: nop

    // 0x0028E294: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0028E298: j           L_0028E2B4
    // 0x0028E29C: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
        goto L_0028E2B4;
    // 0x0028E29C: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
L_0028E2A0:
    // 0x0028E2A0: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0028E2A4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028E2A8: sw          $v0, 0x1294($at)
    MEM_W(0X1294, ctx->r1) = ctx->r2;
    // 0x0028E2AC: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0028E2B0: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
L_0028E2B4:
    // 0x0028E2B4: jal         0x0028DEFC
    // 0x0028E2B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0028DEFC(rdram, ctx);
        goto after_3;
    // 0x0028E2B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x0028E2BC: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x0028E2C0: ori         $s1, $zero, 0xFFFF
    ctx->r17 = 0 | 0XFFFF;
    // 0x0028E2C4: beq         $v0, $s1, L_0028E2F4
    if (ctx->r2 == ctx->r17) {
        // 0x0028E2C8: nop
    
            goto L_0028E2F4;
    }
    // 0x0028E2C8: nop

    // 0x0028E2CC: jal         0x0028EA40
    // 0x0028E2D0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0028EA40(rdram, ctx);
        goto after_4;
    // 0x0028E2D0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_4:
    // 0x0028E2D4: lhu         $v1, 0x8($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X8);
    // 0x0028E2D8: lhu         $a0, 0x4($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X4);
    // 0x0028E2DC: lw          $v0, 0x10($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X10);
    // 0x0028E2E0: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x0028E2E4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0028E2E8: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x0028E2EC: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    // 0x0028E2F0: sh          $s1, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r17;
L_0028E2F4:
    // 0x0028E2F4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0028E2F8: addiu       $a0, $a0, 0x1178
    ctx->r4 = ADD32(ctx->r4, 0X1178);
    // 0x0028E2FC: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x0028E300: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0028E304: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x0028E308: sw          $s0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r16;
    // 0x0028E30C: sh          $s2, 0xC($a1)
    MEM_H(0XC, ctx->r5) = ctx->r18;
    // 0x0028E310: sw          $s3, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r19;
    // 0x0028E314: jal         0x0029B820
    // 0x0028E318: sw          $s4, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r20;
    osSendMesg_recomp(rdram, ctx);
        goto after_5;
    // 0x0028E318: sw          $s4, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r20;
    after_5:
    // 0x0028E31C: j           L_0028E50C
    // 0x0028E320: nop

        goto L_0028E50C;
    // 0x0028E320: nop

L_0028E324:
    // 0x0028E324: jal         0x0029B170
    // 0x0028E328: nop

    func_0029B170(rdram, ctx);
        goto after_6;
    // 0x0028E328: nop

    after_6:
    // 0x0028E32C: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x0028E330: addu        $s3, $v1, $zero
    ctx->r19 = ADD32(ctx->r3, 0);
    // 0x0028E334: addiu       $s6, $zero, 0x0
    ctx->r22 = ADD32(0, 0X0);
    // 0x0028E338: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x0028E33C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028E340: lwc1        $f21, -0x5DE0($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, -0X5DE0);
    // 0x0028E344: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028E348: lwc1        $f20, -0x5DDC($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X5DDC);
L_0028E34C:
    // 0x0028E34C: jal         0x0029B170
    // 0x0028E350: nop

    func_0029B170(rdram, ctx);
        goto after_7;
    // 0x0028E350: nop

    after_7:
    // 0x0028E354: sltu        $a2, $v1, $s3
    ctx->r6 = ctx->r3 < ctx->r19 ? 1 : 0;
    // 0x0028E358: subu        $a1, $v1, $s3
    ctx->r5 = SUB32(ctx->r3, ctx->r19);
    // 0x0028E35C: subu        $a0, $v0, $s2
    ctx->r4 = SUB32(ctx->r2, ctx->r18);
    // 0x0028E360: subu        $a0, $a0, $a2
    ctx->r4 = SUB32(ctx->r4, ctx->r6);
    // 0x0028E364: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    // 0x0028E368: srl         $v0, $a1, 26
    ctx->r2 = S32(U32(ctx->r5) >> 26);
    // 0x0028E36C: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x0028E370: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x0028E374: addiu       $a3, $zero, 0xBB8
    ctx->r7 = ADD32(0, 0XBB8);
    // 0x0028E378: jal         0x002A4650
    // 0x0028E37C: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    func_002A4650(rdram, ctx);
        goto after_8;
    // 0x0028E37C: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    after_8:
    // 0x0028E380: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0028E384: addu        $s1, $v1, $zero
    ctx->r17 = ADD32(ctx->r3, 0);
    // 0x0028E388: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0028E38C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0028E390: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0028E394: jal         0x002A50E0
    // 0x0028E398: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002A50E0(rdram, ctx);
        goto after_9;
    // 0x0028E398: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_9:
    // 0x0028E39C: blez        $v0, L_0028E3B4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0028E3A0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0028E3B4;
    }
    // 0x0028E3A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0028E3A4: jal         0x002A5130
    // 0x0028E3A8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002A5130(rdram, ctx);
        goto after_10;
    // 0x0028E3A8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_10:
    // 0x0028E3AC: j           L_0028E3DC
    // 0x0028E3B0: nop

        goto L_0028E3DC;
    // 0x0028E3B0: nop

L_0028E3B4:
    // 0x0028E3B4: and         $a0, $s0, $s6
    ctx->r4 = ctx->r16 & ctx->r22;
    // 0x0028E3B8: and         $a1, $s1, $s7
    ctx->r5 = ctx->r17 & ctx->r23;
    // 0x0028E3BC: srl         $v1, $s1, 1
    ctx->r3 = S32(U32(ctx->r17) >> 1);
    // 0x0028E3C0: sll         $a2, $s0, 31
    ctx->r6 = S32(ctx->r16 << 31);
    // 0x0028E3C4: or          $v1, $v1, $a2
    ctx->r3 = ctx->r3 | ctx->r6;
    // 0x0028E3C8: srl         $v0, $s0, 1
    ctx->r2 = S32(U32(ctx->r16) >> 1);
    // 0x0028E3CC: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x0028E3D0: jal         0x002A5130
    // 0x0028E3D4: or          $a1, $a1, $v1
    ctx->r5 = ctx->r5 | ctx->r3;
    func_002A5130(rdram, ctx);
        goto after_11;
    // 0x0028E3D4: or          $a1, $a1, $v1
    ctx->r5 = ctx->r5 | ctx->r3;
    after_11:
    // 0x0028E3D8: add.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f0.fl;
L_0028E3DC:
    // 0x0028E3DC: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x0028E3E0: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x0028E3E4: nop

    // 0x0028E3E8: bc1f        L_0028E4C4
    if (!c1cs) {
        // 0x0028E3EC: nop
    
            goto L_0028E4C4;
    }
    // 0x0028E3EC: nop

    // 0x0028E3F0: j           L_0028E34C
    // 0x0028E3F4: nop

        goto L_0028E34C;
    // 0x0028E3F4: nop

L_0028E3F8:
    // 0x0028E3F8: jal         0x0029B170
    // 0x0028E3FC: nop

    func_0029B170(rdram, ctx);
        goto after_12;
    // 0x0028E3FC: nop

    after_12:
    // 0x0028E400: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x0028E404: addu        $s3, $v1, $zero
    ctx->r19 = ADD32(ctx->r3, 0);
    // 0x0028E408: addiu       $s6, $zero, 0x0
    ctx->r22 = ADD32(0, 0X0);
    // 0x0028E40C: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x0028E410: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028E414: lwc1        $f21, -0x5DD8($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, -0X5DD8);
    // 0x0028E418: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028E41C: lwc1        $f20, -0x5DD4($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X5DD4);
L_0028E420:
    // 0x0028E420: jal         0x0029B170
    // 0x0028E424: nop

    func_0029B170(rdram, ctx);
        goto after_13;
    // 0x0028E424: nop

    after_13:
    // 0x0028E428: sltu        $a2, $v1, $s3
    ctx->r6 = ctx->r3 < ctx->r19 ? 1 : 0;
    // 0x0028E42C: subu        $a1, $v1, $s3
    ctx->r5 = SUB32(ctx->r3, ctx->r19);
    // 0x0028E430: subu        $a0, $v0, $s2
    ctx->r4 = SUB32(ctx->r2, ctx->r18);
    // 0x0028E434: subu        $a0, $a0, $a2
    ctx->r4 = SUB32(ctx->r4, ctx->r6);
    // 0x0028E438: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    // 0x0028E43C: srl         $v0, $a1, 26
    ctx->r2 = S32(U32(ctx->r5) >> 26);
    // 0x0028E440: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x0028E444: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x0028E448: addiu       $a3, $zero, 0xBB8
    ctx->r7 = ADD32(0, 0XBB8);
    // 0x0028E44C: jal         0x002A4650
    // 0x0028E450: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    func_002A4650(rdram, ctx);
        goto after_14;
    // 0x0028E450: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    after_14:
    // 0x0028E454: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0028E458: addu        $s1, $v1, $zero
    ctx->r17 = ADD32(ctx->r3, 0);
    // 0x0028E45C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0028E460: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0028E464: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0028E468: jal         0x002A50E0
    // 0x0028E46C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002A50E0(rdram, ctx);
        goto after_15;
    // 0x0028E46C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_15:
    // 0x0028E470: blez        $v0, L_0028E488
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0028E474: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0028E488;
    }
    // 0x0028E474: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0028E478: jal         0x002A5130
    // 0x0028E47C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002A5130(rdram, ctx);
        goto after_16;
    // 0x0028E47C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_16:
    // 0x0028E480: j           L_0028E4B0
    // 0x0028E484: nop

        goto L_0028E4B0;
    // 0x0028E484: nop

L_0028E488:
    // 0x0028E488: and         $a0, $s0, $s6
    ctx->r4 = ctx->r16 & ctx->r22;
    // 0x0028E48C: and         $a1, $s1, $s7
    ctx->r5 = ctx->r17 & ctx->r23;
    // 0x0028E490: srl         $v1, $s1, 1
    ctx->r3 = S32(U32(ctx->r17) >> 1);
    // 0x0028E494: sll         $a2, $s0, 31
    ctx->r6 = S32(ctx->r16 << 31);
    // 0x0028E498: or          $v1, $v1, $a2
    ctx->r3 = ctx->r3 | ctx->r6;
    // 0x0028E49C: srl         $v0, $s0, 1
    ctx->r2 = S32(U32(ctx->r16) >> 1);
    // 0x0028E4A0: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x0028E4A4: jal         0x002A5130
    // 0x0028E4A8: or          $a1, $a1, $v1
    ctx->r5 = ctx->r5 | ctx->r3;
    func_002A5130(rdram, ctx);
        goto after_17;
    // 0x0028E4A8: or          $a1, $a1, $v1
    ctx->r5 = ctx->r5 | ctx->r3;
    after_17:
    // 0x0028E4AC: add.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f0.fl;
L_0028E4B0:
    // 0x0028E4B0: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x0028E4B4: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x0028E4B8: nop

    // 0x0028E4BC: bc1t        L_0028E420
    if (c1cs) {
        // 0x0028E4C0: nop
    
            goto L_0028E420;
    }
    // 0x0028E4C0: nop

L_0028E4C4:
    // 0x0028E4C4: jal         0x0029E3B0
    // 0x0028E4C8: nop

    func_0029E3B0(rdram, ctx);
        goto after_18;
    // 0x0028E4C8: nop

    after_18:
    // 0x0028E4CC: jal         0x0029E230
    // 0x0028E4D0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_0029E230(rdram, ctx);
        goto after_19;
    // 0x0028E4D0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_19:
    // 0x0028E4D4: jal         0x0028CF80
    // 0x0028E4D8: nop

    func_0028CF80(rdram, ctx);
        goto after_20;
    // 0x0028E4D8: nop

    after_20:
    // 0x0028E4DC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x0028E4E0: ori         $at, $at, 0x400
    ctx->r1 = ctx->r1 | 0X400;
    // 0x0028E4E4: jalr        $at
    // 0x0028E4E8: nop

    LOOKUP_FUNC(ctx->r1)(rdram, ctx);
        goto after_21;
    // 0x0028E4E8: nop

    after_21:
    // 0x0028E4EC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x0028E4F0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0028E4F4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028E4F8: sw          $v0, 0x7658($at)
    MEM_W(0X7658, ctx->r1) = ctx->r2;
    // 0x0028E4FC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0028E500: sh          $v0, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r2;
L_0028E504:
    // 0x0028E504: jal         0x0029BB10
    // 0x0028E508: nop

    osStartThread_recomp(rdram, ctx);
        goto after_22;
    // 0x0028E508: nop

    after_22:
L_0028E50C:
    // 0x0028E50C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x0028E510: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x0028E514: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x0028E518: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x0028E51C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x0028E520: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0028E524: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0028E528: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0028E52C: ldc1        $f21, 0x40($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X40);
    // 0x0028E530: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x0028E534: jr          $ra
    // 0x0028E538: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x0028E538: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_004211AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004211AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x004211B0: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x004211B4: lw          $v1, 0x2028($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2028);
    // 0x004211B8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x004211BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x004211C0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x004211C4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x004211C8: bne         $v1, $v0, L_00421224
    if (ctx->r3 != ctx->r2) {
        // 0x004211CC: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_00421224;
    }
    // 0x004211CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004211D0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x004211D4: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
    // 0x004211D8: addiu       $s2, $zero, -0x2
    ctx->r18 = ADD32(0, -0X2);
L_004211DC:
    // 0x004211DC: jal         0x00426480
    // 0x004211E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426480(rdram, ctx);
        goto after_0;
    // 0x004211E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x004211E4: jal         0x0042655C
    // 0x004211E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0042655C(rdram, ctx);
        goto after_1;
    // 0x004211E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x004211EC: bne         $v0, $s2, L_00421214
    if (ctx->r2 != ctx->r18) {
        // 0x004211F0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_00421214;
    }
    // 0x004211F0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x004211F4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x004211F8: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x004211FC: beql        $v0, $zero, L_00421204
    if (ctx->r2 == 0) {
        // 0x00421200: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00421204;
    }
    goto skip_0;
    // 0x00421200: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_0:
L_00421204:
    // 0x00421204: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00421208: slti        $v0, $s1, 0x4
    ctx->r2 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x0042120C: bne         $v0, $zero, L_004211DC
    if (ctx->r2 != 0) {
        // 0x00421210: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_004211DC;
    }
    // 0x00421210: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_00421214:
    // 0x00421214: beql        $s1, $v0, L_0042121C
    if (ctx->r17 == ctx->r2) {
        // 0x00421218: addiu       $s0, $zero, -0x1
        ctx->r16 = ADD32(0, -0X1);
            goto L_0042121C;
    }
    goto skip_1;
    // 0x00421218: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    skip_1:
L_0042121C:
    // 0x0042121C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00421220: sw          $s0, 0x2028($at)
    MEM_W(0X2028, ctx->r1) = ctx->r16;
L_00421224:
    // 0x00421224: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00421228: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0042122C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00421230: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00421234: jr          $ra
    // 0x00421238: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00421238: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00454570(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00454570: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00454574: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x00454578: xori        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 ^ 0X100;
    // 0x0045457C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00454580: sw          $v0, -0x5528($at)
    MEM_W(-0X5528, ctx->r1) = ctx->r2;
    // 0x00454584: jr          $ra
    // 0x00454588: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00454588: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0021F418(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021F418: jr          $ra
    // 0x0021F41C: nop

    return;
    // 0x0021F41C: nop

;}
RECOMP_FUNC void func_0024E88C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0024E88C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0024E890: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0024E894: lw          $v0, 0x140($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X140);
    // 0x0024E898: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x0024E89C: beq         $v0, $zero, L_0024E90C
    if (ctx->r2 == 0) {
        // 0x0024E8A0: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_0024E90C;
    }
    // 0x0024E8A0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x0024E8A4: lh          $v1, 0xA08($a0)
    ctx->r3 = MEM_H(ctx->r4, 0XA08);
    // 0x0024E8A8: beq         $v1, $v0, L_0024E910
    if (ctx->r3 == ctx->r2) {
        // 0x0024E8AC: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_0024E910;
    }
    // 0x0024E8AC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x0024E8B0: beq         $v1, $v0, L_0024E910
    if (ctx->r3 == ctx->r2) {
        // 0x0024E8B4: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_0024E910;
    }
    // 0x0024E8B4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x0024E8B8: beq         $v1, $v0, L_0024E910
    if (ctx->r3 == ctx->r2) {
        // 0x0024E8BC: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_0024E910;
    }
    // 0x0024E8BC: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x0024E8C0: beq         $v1, $v0, L_0024E910
    if (ctx->r3 == ctx->r2) {
        // 0x0024E8C4: addiu       $v0, $zero, 0x23
        ctx->r2 = ADD32(0, 0X23);
            goto L_0024E910;
    }
    // 0x0024E8C4: addiu       $v0, $zero, 0x23
    ctx->r2 = ADD32(0, 0X23);
    // 0x0024E8C8: beq         $v1, $v0, L_0024E910
    if (ctx->r3 == ctx->r2) {
        // 0x0024E8CC: addiu       $v0, $zero, 0x12
        ctx->r2 = ADD32(0, 0X12);
            goto L_0024E910;
    }
    // 0x0024E8CC: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x0024E8D0: beq         $v1, $v0, L_0024E8E8
    if (ctx->r3 == ctx->r2) {
        // 0x0024E8D4: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_0024E8E8;
    }
    // 0x0024E8D4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x0024E8D8: beq         $v1, $v0, L_0024E8E8
    if (ctx->r3 == ctx->r2) {
        // 0x0024E8DC: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_0024E8E8;
    }
    // 0x0024E8DC: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x0024E8E0: bne         $v1, $v0, L_0024E8EC
    if (ctx->r3 != ctx->r2) {
        // 0x0024E8E4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0024E8EC;
    }
    // 0x0024E8E4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0024E8E8:
    // 0x0024E8E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0024E8EC:
    // 0x0024E8EC: beq         $v0, $zero, L_0024E904
    if (ctx->r2 == 0) {
        // 0x0024E8F0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0024E904;
    }
    // 0x0024E8F0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0024E8F4: lw          $v1, 0x140($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X140);
    // 0x0024E8F8: ori         $v1, $v1, 0x80
    ctx->r3 = ctx->r3 | 0X80;
    // 0x0024E8FC: j           L_0024E9C4
    // 0x0024E900: sw          $v1, 0x140($a0)
    MEM_W(0X140, ctx->r4) = ctx->r3;
        goto L_0024E9C4;
    // 0x0024E900: sw          $v1, 0x140($a0)
    MEM_W(0X140, ctx->r4) = ctx->r3;
L_0024E904:
    // 0x0024E904: j           L_0024E9B0
    // 0x0024E908: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
        goto L_0024E9B0;
    // 0x0024E908: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
L_0024E90C:
    // 0x0024E90C: lh          $v1, 0xA08($a0)
    ctx->r3 = MEM_H(ctx->r4, 0XA08);
L_0024E910:
    // 0x0024E910: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x0024E914: beq         $v1, $v0, L_0024E92C
    if (ctx->r3 == ctx->r2) {
        // 0x0024E918: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_0024E92C;
    }
    // 0x0024E918: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x0024E91C: beq         $v1, $v0, L_0024E92C
    if (ctx->r3 == ctx->r2) {
        // 0x0024E920: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_0024E92C;
    }
    // 0x0024E920: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x0024E924: bne         $v1, $v0, L_0024E930
    if (ctx->r3 != ctx->r2) {
        // 0x0024E928: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0024E930;
    }
    // 0x0024E928: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0024E92C:
    // 0x0024E92C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0024E930:
    // 0x0024E930: bne         $v0, $zero, L_0024E9C4
    if (ctx->r2 != 0) {
        // 0x0024E934: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0024E9C4;
    }
    // 0x0024E934: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0024E938: lui         $v0, 0xC
    ctx->r2 = S32(0XC << 16);
    // 0x0024E93C: lw          $v1, 0x140($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X140);
    // 0x0024E940: ori         $v0, $v0, 0x200
    ctx->r2 = ctx->r2 | 0X200;
    // 0x0024E944: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x0024E948: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x0024E94C: bne         $v1, $v0, L_0024E9C4
    if (ctx->r3 != ctx->r2) {
        // 0x0024E950: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0024E9C4;
    }
    // 0x0024E950: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0024E954: lwc1        $f1, 0x1C($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X1C);
    // 0x0024E958: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0024E95C: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0024E960: nop

    // 0x0024E964: bc1f        L_0024E9C4
    if (!c1cs) {
        // 0x0024E968: nop
    
            goto L_0024E9C4;
    }
    // 0x0024E968: nop

    // 0x0024E96C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024E970: lwc1        $f0, 0x6D74($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D74);
    // 0x0024E974: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0024E978: nop

    // 0x0024E97C: bc1f        L_0024E9C0
    if (!c1cs) {
        // 0x0024E980: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_0024E9C0;
    }
    // 0x0024E980: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x0024E984: lh          $v1, 0xA08($a0)
    ctx->r3 = MEM_H(ctx->r4, 0XA08);
    // 0x0024E988: beq         $v1, $v0, L_0024E9C0
    if (ctx->r3 == ctx->r2) {
        // 0x0024E98C: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_0024E9C0;
    }
    // 0x0024E98C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x0024E990: beq         $v1, $v0, L_0024E9C0
    if (ctx->r3 == ctx->r2) {
        // 0x0024E994: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_0024E9C0;
    }
    // 0x0024E994: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x0024E998: beq         $v1, $v0, L_0024E9C0
    if (ctx->r3 == ctx->r2) {
        // 0x0024E99C: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_0024E9C0;
    }
    // 0x0024E99C: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x0024E9A0: beq         $v1, $v0, L_0024E9C0
    if (ctx->r3 == ctx->r2) {
        // 0x0024E9A4: addiu       $v0, $zero, 0x23
        ctx->r2 = ADD32(0, 0X23);
            goto L_0024E9C0;
    }
    // 0x0024E9A4: addiu       $v0, $zero, 0x23
    ctx->r2 = ADD32(0, 0X23);
    // 0x0024E9A8: beq         $v1, $v0, L_0024E9C0
    if (ctx->r3 == ctx->r2) {
        // 0x0024E9AC: addiu       $a2, $zero, 0x9
        ctx->r6 = ADD32(0, 0X9);
            goto L_0024E9C0;
    }
    // 0x0024E9AC: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
L_0024E9B0:
    // 0x0024E9B0: jal         0x0024E5F0
    // 0x0024E9B4: nop

    func_0024E5F0(rdram, ctx);
        goto after_0;
    // 0x0024E9B4: nop

    after_0:
    // 0x0024E9B8: j           L_0024E9C4
    // 0x0024E9BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_0024E9C4;
    // 0x0024E9BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0024E9C0:
    // 0x0024E9C0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0024E9C4:
    // 0x0024E9C4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0024E9C8: jr          $ra
    // 0x0024E9CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0024E9CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
