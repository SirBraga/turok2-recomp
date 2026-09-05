#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_0042C414(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042C414: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00428058(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00428058: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x0042805C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00428060: addiu       $v0, $v0, 0xE20
    ctx->r2 = ADD32(ctx->r2, 0XE20);
    // 0x00428064: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00428068: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042806C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00428070: sw          $v0, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->r2;
    // 0x00428074: sb          $v0, 0x0($sp)
    MEM_B(0X0, ctx->r29) = ctx->r2;
    // 0x00428078: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0042807C: sb          $v0, 0x1($sp)
    MEM_B(0X1, ctx->r29) = ctx->r2;
    // turok2: reconnected split function: a stray ELF symbol at 0x00428080 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00428080(rdram, ctx);
;}
RECOMP_FUNC void func_00264F58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00264F58: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00264F5C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00264F60: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00264F64: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00264F68: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00264F6C: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x00264F70: sdc1        $f21, 0x28($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X28, ctx->r29);
    // 0x00264F74: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x00264F78: lw          $s1, 0x10C($a1)
    ctx->r17 = MEM_W(ctx->r5, 0X10C);
    // 0x00264F7C: lb          $v1, 0x174($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X174);
    // 0x00264F80: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x00264F84: beq         $v1, $v0, L_00264FA4
    if (ctx->r3 == ctx->r2) {
        // 0x00264F88: addu        $s2, $a0, $zero
        ctx->r18 = ADD32(ctx->r4, 0);
            goto L_00264FA4;
    }
    // 0x00264F88: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00264F8C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00264F90: lwc1        $f22, 0x7C60($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X7C60);
    // 0x00264F94: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00264F98: lwc1        $f21, 0x7C64($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X7C64);
    // 0x00264F9C: j           L_0026501C
    // 0x00264FA0: nop

        goto L_0026501C;
    // 0x00264FA0: nop

L_00264FA4:
    // 0x00264FA4: lw          $s0, 0x1C0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X1C0);
    // 0x00264FA8: beq         $s0, $zero, L_0026500C
    if (ctx->r16 == 0) {
        // 0x00264FAC: nop
    
            goto L_0026500C;
    }
    // 0x00264FAC: nop

    // 0x00264FB0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00264FB4: lwc1        $f12, 0x7C68($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X7C68);
    // 0x00264FB8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00264FBC: lwc1        $f14, 0x7C6C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X7C6C);
    // 0x00264FC0: jal         0x002119FC
    // 0x00264FC4: nop

    func_002119FC(rdram, ctx);
        goto after_0;
    // 0x00264FC4: nop

    after_0:
    // 0x00264FC8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x00264FCC: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x00264FD0: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x00264FD4: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x00264FD8: jal         0x002465F0
    // 0x00264FDC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_002465F0(rdram, ctx);
        goto after_1;
    // 0x00264FDC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x00264FE0: jal         0x00298470
    // 0x00264FE4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_00298470(rdram, ctx);
        goto after_2;
    // 0x00264FE4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_2:
    // 0x00264FE8: mul.s       $f22, $f20, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00264FEC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00264FF0: lwc1        $f0, 0x7C70($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7C70);
    // 0x00264FF4: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00264FF8: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00264FFC: lwc1        $f0, 0x1F98($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X1F98);
    // 0x00265000: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x00265004: j           L_0026501C
    // 0x00265008: div.s       $f21, $f0, $f20
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f21.fl = DIV_S(ctx->f0.fl, ctx->f20.fl);
        goto L_0026501C;
    // 0x00265008: div.s       $f21, $f0, $f20
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f21.fl = DIV_S(ctx->f0.fl, ctx->f20.fl);
L_0026500C:
    // 0x0026500C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00265010: lwc1        $f22, 0x7C74($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X7C74);
    // 0x00265014: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00265018: lwc1        $f21, 0x7C78($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X7C78);
L_0026501C:
    // 0x0026501C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x00265020: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00265024: lwc1        $f14, 0x7C7C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X7C7C);
    // 0x00265028: jal         0x002119FC
    // 0x0026502C: nop

    func_002119FC(rdram, ctx);
        goto after_3;
    // 0x0026502C: nop

    after_3:
    // 0x00265030: lwc1        $f12, 0x50($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X50);
    // 0x00265034: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00265038: lwc1        $f20, 0x7C80($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X7C80);
    // 0x0026503C: add.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f20.fl;
    // 0x00265040: jal         0x002982F0
    // 0x00265044: add.s       $f21, $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f21.fl + ctx->f0.fl;
    func_002982F0(rdram, ctx);
        goto after_4;
    // 0x00265044: add.s       $f21, $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f21.fl + ctx->f0.fl;
    after_4:
    // 0x00265048: mul.s       $f0, $f22, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f22.fl, ctx->f0.fl);
    // 0x0026504C: swc1        $f21, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f_odd[(21 - 1) * 2];
    // 0x00265050: swc1        $f0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->f0.u32l;
    // 0x00265054: lwc1        $f12, 0x50($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X50);
    // 0x00265058: jal         0x002974C0
    // 0x0026505C: add.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f20.fl;
    func_002974C0(rdram, ctx);
        goto after_5;
    // 0x0026505C: add.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f20.fl;
    after_5:
    // 0x00265060: mul.s       $f0, $f22, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f22.fl, ctx->f0.fl);
    // 0x00265064: swc1        $f0, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->f0.u32l;
    // 0x00265068: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0026506C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00265070: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00265074: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00265078: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x0026507C: ldc1        $f21, 0x28($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X28);
    // 0x00265080: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x00265084: jr          $ra
    // 0x00265088: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00265088: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00242CB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00242CB0: bc1f        L_00242CCC
    if (!c1cs) {
        // 0x00242CB4: addiu       $s1, $sp, 0x38
        ctx->r17 = ADD32(ctx->r29, 0X38);
            goto L_00242CCC;
    }
    // 0x00242CB4: addiu       $s1, $sp, 0x38
    ctx->r17 = ADD32(ctx->r29, 0X38);
    // 0x00242CB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00242CBC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00242CC0: jal         0x0020EEF8
    // 0x00242CC4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    func_0020EEF8(rdram, ctx);
        goto after_0;
    // 0x00242CC4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x00242CC8: addiu       $s1, $sp, 0x38
    ctx->r17 = ADD32(ctx->r29, 0X38);
L_00242CCC:
    // 0x00242CCC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00242CD0: addiu       $s2, $sp, 0x28
    ctx->r18 = ADD32(ctx->r29, 0X28);
    // 0x00242CD4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00242CD8: addiu       $s3, $s4, 0x4
    ctx->r19 = ADD32(ctx->r20, 0X4);
    // 0x00242CDC: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x00242CE0: lw          $t0, 0x18($s5)
    ctx->r8 = MEM_W(ctx->r21, 0X18);
    // 0x00242CE4: lw          $t1, 0x1C($s5)
    ctx->r9 = MEM_W(ctx->r21, 0X1C);
    // 0x00242CE8: lw          $t2, 0x20($s5)
    ctx->r10 = MEM_W(ctx->r21, 0X20);
    // 0x00242CEC: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x00242CF0: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x00242CF4: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x00242CF8: sw          $zero, 0x18($s5)
    MEM_W(0X18, ctx->r21) = 0;
    // 0x00242CFC: sw          $zero, 0x1C($s5)
    MEM_W(0X1C, ctx->r21) = 0;
    // 0x00242D00: jal         0x0020EF2C
    // 0x00242D04: sw          $zero, 0x20($s5)
    MEM_W(0X20, ctx->r21) = 0;
    func_0020EF2C(rdram, ctx);
        goto after_1;
    // 0x00242D04: sw          $zero, 0x20($s5)
    MEM_W(0X20, ctx->r21) = 0;
    after_1:
    // 0x00242D08: jal         0x002687FC
    // 0x00242D0C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_002687FC(rdram, ctx);
        goto after_2;
    // 0x00242D0C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_2:
    // 0x00242D10: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x00242D14: addiu       $s0, $sp, 0x48
    ctx->r16 = ADD32(ctx->r29, 0X48);
    // 0x00242D18: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x00242D1C: jal         0x002105A4
    // 0x00242D20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002105A4(rdram, ctx);
        goto after_3;
    // 0x00242D20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x00242D24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00242D28: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00242D2C: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x00242D30: jal         0x0020F908
    // 0x00242D34: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_0020F908(rdram, ctx);
        goto after_4;
    // 0x00242D34: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x00242D38: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00242D3C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00242D40: jal         0x0020EEF8
    // 0x00242D44: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_0020EEF8(rdram, ctx);
        goto after_5;
    // 0x00242D44: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_5:
    // 0x00242D48: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00242D4C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00242D50: jal         0x0020EF2C
    // 0x00242D54: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_0020EF2C(rdram, ctx);
        goto after_6;
    // 0x00242D54: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_6:
    // 0x00242D58: lwc1        $f0, 0x50($s5)
    ctx->f0.u32l = MEM_W(ctx->r21, 0X50);
    // 0x00242D5C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00242D60: add.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f20.fl;
    // 0x00242D64: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00242D68: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x00242D6C: jal         0x0020EEF8
    // 0x00242D70: swc1        $f0, 0x50($s5)
    MEM_W(0X50, ctx->r21) = ctx->f0.u32l;
    func_0020EEF8(rdram, ctx);
        goto after_7;
    // 0x00242D70: swc1        $f0, 0x50($s5)
    MEM_W(0X50, ctx->r21) = ctx->f0.u32l;
    after_7:
    // 0x00242D74: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00242D78: addiu       $v0, $v0, 0x1E10
    ctx->r2 = ADD32(ctx->r2, 0X1E10);
    // 0x00242D7C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00242D80: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x00242D84: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x00242D88: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x00242D8C: jal         0x00239F00
    // 0x00242D90: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    func_00239F00(rdram, ctx);
        goto after_8;
    // 0x00242D90: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    after_8:
    // 0x00242D94: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x00242D98: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x00242D9C: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x00242DA0: sw          $t0, 0x18($s5)
    MEM_W(0X18, ctx->r21) = ctx->r8;
    // 0x00242DA4: sw          $t1, 0x1C($s5)
    MEM_W(0X1C, ctx->r21) = ctx->r9;
    // 0x00242DA8: sw          $t2, 0x20($s5)
    MEM_W(0X20, ctx->r21) = ctx->r10;
    // 0x00242DAC: lbu         $v1, 0x0($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X0);
    // 0x00242DB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00242DB4: bne         $v1, $v0, L_00242E0C
    if (ctx->r3 != ctx->r2) {
        // 0x00242DB8: nop
    
            goto L_00242E0C;
    }
    // 0x00242DB8: nop

    // 0x00242DBC: lw          $v0, 0x14($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X14);
    // 0x00242DC0: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x00242DC4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00242DC8: bne         $v1, $v0, L_00242E0C
    if (ctx->r3 != ctx->r2) {
        // 0x00242DCC: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_00242E0C;
    }
    // 0x00242DCC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00242DD0: jal         0x002640D4
    // 0x00242DD4: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    func_002640D4(rdram, ctx);
        goto after_9;
    // 0x00242DD4: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    after_9:
    // 0x00242DD8: j           L_00242E0C
    // 0x00242DDC: nop

        goto L_00242E0C;
    // 0x00242DDC: nop

    // 0x00242DE0: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x00242DE4: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x00242DE8: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x00242DEC: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
    // 0x00242DF0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00242DF4: j           L_00242E0C
    // 0x00242DF8: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
        goto L_00242E0C;
    // 0x00242DF8: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x00242DFC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00242E00: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00242E04: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00242E08: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
L_00242E0C:
    // 0x00242E0C: lw          $ra, 0xA0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA0);
    // 0x00242E10: lw          $s5, 0x9C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X9C);
    // 0x00242E14: lw          $s4, 0x98($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X98);
    // 0x00242E18: lw          $s3, 0x94($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X94);
    // 0x00242E1C: lw          $s2, 0x90($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X90);
    // 0x00242E20: lw          $s1, 0x8C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X8C);
    // 0x00242E24: lw          $s0, 0x88($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X88);
    // 0x00242E28: ldc1        $f20, 0xA8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XA8);
    // 0x00242E2C: jr          $ra
    // 0x00242E30: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x00242E30: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_002267A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002267A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002267A4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002267A8: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x002267AC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002267B0: addu        $s0, $a3, $zero
    ctx->r16 = ADD32(ctx->r7, 0);
    // 0x002267B4: beq         $a1, $zero, L_002267C8
    if (ctx->r5 == 0) {
        // 0x002267B8: sw          $ra, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r31;
            goto L_002267C8;
    }
    // 0x002267B8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x002267BC: lw          $a0, 0x6C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6C);
    // 0x002267C0: j           L_002267CC
    // 0x002267C4: nop

        goto L_002267CC;
    // 0x002267C4: nop

L_002267C8:
    // 0x002267C8: lw          $a0, 0x70($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X70);
L_002267CC:
    // 0x002267CC: jal         0x002017D4
    // 0x002267D0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x002267D0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x002267D4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x002267D8: jal         0x002017D4
    // 0x002267DC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x002267DC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x002267E0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x002267E4: jal         0x002017D4
    // 0x002267E8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x002267E8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x002267EC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x002267F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002267F4: jal         0x002017D4
    // 0x002267F8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x002267F8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x002267FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00226800: jal         0x00201818
    // 0x00226804: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_00201818(rdram, ctx);
        goto after_4;
    // 0x00226804: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x00226808: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022680C: jal         0x002017D4
    // 0x00226810: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x00226810: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x00226814: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00226818: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0022681C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00226820: jr          $ra
    // 0x00226824: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00226824: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002175D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002175D8: addiu       $sp, $sp, -0x140
    ctx->r29 = ADD32(ctx->r29, -0X140);
    // 0x002175DC: sdc1        $f20, 0x138($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X138, ctx->r29);
    // 0x002175E0: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x002175E4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002175E8: lwc1        $f0, 0x59B8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X59B8);
    // 0x002175EC: sw          $s5, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r21;
    // 0x002175F0: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x002175F4: sw          $ra, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->r31;
    // 0x002175F8: sw          $s7, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r23;
    // 0x002175FC: sw          $s6, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r22;
    // 0x00217600: sw          $s4, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r20;
    // 0x00217604: sw          $s3, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r19;
    // 0x00217608: sw          $s2, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r18;
    // 0x0021760C: sw          $s1, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->r17;
    // 0x00217610: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x00217614: nop

    // 0x00217618: bc1t        L_00217630
    if (c1cs) {
        // 0x0021761C: sw          $s0, 0x110($sp)
        MEM_W(0X110, ctx->r29) = ctx->r16;
            goto L_00217630;
    }
    // 0x0021761C: sw          $s0, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->r16;
    // 0x00217620: trunc.w.s   $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    ctx->f4.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x00217624: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x00217628: j           L_00217648
    // 0x0021762C: addu        $s6, $v1, $zero
    ctx->r22 = ADD32(ctx->r3, 0);
        goto L_00217648;
    // 0x0021762C: addu        $s6, $v1, $zero
    ctx->r22 = ADD32(ctx->r3, 0);
L_00217630:
    // 0x00217630: sub.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f0.fl;
    // 0x00217634: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00217638: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0021763C: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x00217640: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00217644: addu        $s6, $v1, $zero
    ctx->r22 = ADD32(ctx->r3, 0);
L_00217648:
    // 0x00217648: lw          $v0, 0x0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X0);
    // 0x0021764C: lw          $v1, 0x24($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X24);
    // 0x00217650: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00217654: sltu        $a0, $s6, $v1
    ctx->r4 = ctx->r22 < ctx->r3 ? 1 : 0;
    // 0x00217658: bne         $a0, $zero, L_00217674
    if (ctx->r4 != 0) {
        // 0x0021765C: addiu       $s7, $v0, 0x6
        ctx->r23 = ADD32(ctx->r2, 0X6);
            goto L_00217674;
    }
    // 0x0021765C: addiu       $s7, $v0, 0x6
    ctx->r23 = ADD32(ctx->r2, 0X6);
    // 0x00217660: lw          $v0, 0x20($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X20);
    // 0x00217664: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x00217668: sltu        $v0, $s6, $v0
    ctx->r2 = ctx->r22 < ctx->r2 ? 1 : 0;
    // 0x0021766C: bne         $v0, $zero, L_00217720
    if (ctx->r2 != 0) {
        // 0x00217670: nop
    
            goto L_00217720;
    }
    // 0x00217670: nop

L_00217674:
    // 0x00217674: lw          $s2, 0x28($s5)
    ctx->r18 = MEM_W(ctx->r21, 0X28);
    // 0x00217678: addu        $s4, $v1, $zero
    ctx->r20 = ADD32(ctx->r3, 0);
    // 0x0021767C: mult        $s2, $s7
    result = S64(S32(ctx->r18)) * S64(S32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00217680: lw          $v0, 0x20($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X20);
    // 0x00217684: lw          $s1, 0xC($s5)
    ctx->r17 = MEM_W(ctx->r21, 0XC);
    // 0x00217688: addu        $s0, $s4, $v0
    ctx->r16 = ADD32(ctx->r20, ctx->r2);
    // 0x0021768C: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x00217690: mflo        $a2
    ctx->r6 = lo;
    // 0x00217694: beq         $a0, $zero, L_002176B8
    if (ctx->r4 == 0) {
        // 0x00217698: addu        $s1, $s1, $a2
        ctx->r17 = ADD32(ctx->r17, ctx->r6);
            goto L_002176B8;
    }
    // 0x00217698: addu        $s1, $s1, $a2
    ctx->r17 = ADD32(ctx->r17, ctx->r6);
    // 0x0021769C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x002176A0: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x002176A4: addu        $s4, $s2, $zero
    ctx->r20 = ADD32(ctx->r18, 0);
    // 0x002176A8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002176AC: jal         0x00217B64
    // 0x002176B0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_00217B64(rdram, ctx);
        goto after_0;
    // 0x002176B0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_0:
    // 0x002176B4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
L_002176B8:
    // 0x002176B8: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
    // 0x002176BC: sll         $v0, $s2, 2
    ctx->r2 = S32(ctx->r18 << 2);
    // 0x002176C0: addu        $s3, $v0, $v1
    ctx->r19 = ADD32(ctx->r2, ctx->r3);
L_002176C4:
    // 0x002176C4: sltu        $v0, $s6, $s4
    ctx->r2 = ctx->r22 < ctx->r20 ? 1 : 0;
    // 0x002176C8: bnel        $v0, $zero, L_002176FC
    if (ctx->r2 != 0) {
        // 0x002176CC: addu        $s1, $s1, $s7
        ctx->r17 = ADD32(ctx->r17, ctx->r23);
            goto L_002176FC;
    }
    goto skip_0;
    // 0x002176CC: addu        $s1, $s1, $s7
    ctx->r17 = ADD32(ctx->r17, ctx->r23);
    skip_0:
    // 0x002176D0: sltu        $v0, $s6, $s0
    ctx->r2 = ctx->r22 < ctx->r16 ? 1 : 0;
    // 0x002176D4: beql        $v0, $zero, L_002176FC
    if (ctx->r2 == 0) {
        // 0x002176D8: addu        $s1, $s1, $s7
        ctx->r17 = ADD32(ctx->r17, ctx->r23);
            goto L_002176FC;
    }
    goto skip_1;
    // 0x002176D8: addu        $s1, $s1, $s7
    ctx->r17 = ADD32(ctx->r17, ctx->r23);
    skip_1:
    // 0x002176DC: lw          $v0, 0x28($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X28);
    // 0x002176E0: beq         $s2, $v0, L_00217720
    if (ctx->r18 == ctx->r2) {
        // 0x002176E4: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_00217720;
    }
    // 0x002176E4: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x002176E8: sw          $s4, 0x24($s5)
    MEM_W(0X24, ctx->r21) = ctx->r20;
    // 0x002176EC: jal         0x00217214
    // 0x002176F0: sw          $s2, 0x28($s5)
    MEM_W(0X28, ctx->r21) = ctx->r18;
    func_00217214(rdram, ctx);
        goto after_1;
    // 0x002176F0: sw          $s2, 0x28($s5)
    MEM_W(0X28, ctx->r21) = ctx->r18;
    after_1:
    // 0x002176F4: j           L_00217720
    // 0x002176F8: nop

        goto L_00217720;
    // 0x002176F8: nop

L_002176FC:
    // 0x002176FC: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x00217700: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x00217704: addu        $s4, $s0, $zero
    ctx->r20 = ADD32(ctx->r16, 0);
    // 0x00217708: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0021770C: jal         0x00217B64
    // 0x00217710: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_00217B64(rdram, ctx);
        goto after_2;
    // 0x00217710: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_2:
    // 0x00217714: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x00217718: j           L_002176C4
    // 0x0021771C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
        goto L_002176C4;
    // 0x0021771C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
L_00217720:
    // 0x00217720: lw          $v0, 0x24($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X24);
    // 0x00217724: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00217728: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0021772C: bgezl       $v0, L_00217744
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00217730: cvt.s.d     $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
            goto L_00217744;
    }
    goto skip_2;
    // 0x00217730: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    skip_2:
    // 0x00217734: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00217738: ldc1        $f0, 0x59C0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X59C0);
    // 0x0021773C: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x00217740: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
L_00217744:
    // 0x00217744: lw          $a3, 0x10($s5)
    ctx->r7 = MEM_W(ctx->r21, 0X10);
    // 0x00217748: lw          $t0, 0x14($s5)
    ctx->r8 = MEM_W(ctx->r21, 0X14);
    // 0x0021774C: lw          $t1, 0x18($s5)
    ctx->r9 = MEM_W(ctx->r21, 0X18);
    // 0x00217750: lw          $a2, 0x1C($s5)
    ctx->r6 = MEM_W(ctx->r21, 0X1C);
    // 0x00217754: sw          $a3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r7;
    // 0x00217758: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x0021775C: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x00217760: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x00217764: lw          $a3, 0x20($s5)
    ctx->r7 = MEM_W(ctx->r21, 0X20);
    // 0x00217768: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x0021776C: sub.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f0.fl;
    // 0x00217770: lwc1        $f3, 0x14($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X14);
    // 0x00217774: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x00217778: lwc1        $f1, 0x1C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X1C);
    // 0x0021777C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00217780: lwc1        $f2, 0x18($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X18);
    // 0x00217784: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00217788: nop

    // 0x0021778C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00217790: nop

    // 0x00217794: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00217798: lw          $ra, 0x130($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X130);
    // 0x0021779C: lw          $s7, 0x12C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X12C);
    // 0x002177A0: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x002177A4: lw          $s6, 0x128($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X128);
    // 0x002177A8: lw          $s5, 0x124($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X124);
    // 0x002177AC: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x002177B0: lw          $s4, 0x120($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X120);
    // 0x002177B4: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x002177B8: lw          $s3, 0x11C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X11C);
    // 0x002177BC: lw          $s2, 0x118($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X118);
    // 0x002177C0: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x002177C4: lw          $s1, 0x114($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X114);
    // 0x002177C8: lw          $s0, 0x110($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X110);
    // 0x002177CC: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x002177D0: ldc1        $f20, 0x138($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X138);
    // 0x002177D4: jr          $ra
    // 0x002177D8: addiu       $sp, $sp, 0x140
    ctx->r29 = ADD32(ctx->r29, 0X140);
    return;
    // 0x002177D8: addiu       $sp, $sp, 0x140
    ctx->r29 = ADD32(ctx->r29, 0X140);
;}
RECOMP_FUNC void func_00226DE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00226DE8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00226DEC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00226DF0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00226DF4: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x00226DF8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00226DFC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x00226E00: jal         0x0020EF2C
    // 0x00226E04: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    func_0020EF2C(rdram, ctx);
        goto after_0;
    // 0x00226E04: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    after_0:
    // 0x00226E08: lwc1        $f2, 0x10($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X10);
    // 0x00226E0C: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x00226E10: lwc1        $f0, 0x14($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X14);
    // 0x00226E14: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00226E18: lwc1        $f1, 0x18($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x00226E1C: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x00226E20: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x00226E24: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x00226E28: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00226E2C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00226E30: bne         $v0, $v1, L_00226EA8
    if (ctx->r2 != ctx->r3) {
        // 0x00226E34: add.s       $f2, $f2, $f1
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
            goto L_00226EA8;
    }
    // 0x00226E34: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x00226E38: lhu         $v1, 0xB8($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XB8);
    // 0x00226E3C: addiu       $v0, $zero, 0x44E
    ctx->r2 = ADD32(0, 0X44E);
    // 0x00226E40: beq         $v1, $v0, L_00226EA8
    if (ctx->r3 == ctx->r2) {
        // 0x00226E44: addiu       $v0, $zero, 0x453
        ctx->r2 = ADD32(0, 0X453);
            goto L_00226EA8;
    }
    // 0x00226E44: addiu       $v0, $zero, 0x453
    ctx->r2 = ADD32(0, 0X453);
    // 0x00226E48: beq         $v1, $v0, L_00226EA8
    if (ctx->r3 == ctx->r2) {
        // 0x00226E4C: addiu       $v0, $zero, 0x451
        ctx->r2 = ADD32(0, 0X451);
            goto L_00226EA8;
    }
    // 0x00226E4C: addiu       $v0, $zero, 0x451
    ctx->r2 = ADD32(0, 0X451);
    // 0x00226E50: beq         $v1, $v0, L_00226EA8
    if (ctx->r3 == ctx->r2) {
        // 0x00226E54: addiu       $v0, $zero, 0x450
        ctx->r2 = ADD32(0, 0X450);
            goto L_00226EA8;
    }
    // 0x00226E54: addiu       $v0, $zero, 0x450
    ctx->r2 = ADD32(0, 0X450);
    // 0x00226E58: beq         $v1, $v0, L_00226EA8
    if (ctx->r3 == ctx->r2) {
        // 0x00226E5C: addiu       $v0, $zero, 0x454
        ctx->r2 = ADD32(0, 0X454);
            goto L_00226EA8;
    }
    // 0x00226E5C: addiu       $v0, $zero, 0x454
    ctx->r2 = ADD32(0, 0X454);
    // 0x00226E60: beq         $v1, $v0, L_00226EA8
    if (ctx->r3 == ctx->r2) {
        // 0x00226E64: addiu       $v0, $zero, 0x455
        ctx->r2 = ADD32(0, 0X455);
            goto L_00226EA8;
    }
    // 0x00226E64: addiu       $v0, $zero, 0x455
    ctx->r2 = ADD32(0, 0X455);
    // 0x00226E68: beq         $v1, $v0, L_00226EA8
    if (ctx->r3 == ctx->r2) {
        // 0x00226E6C: addiu       $v0, $zero, 0x456
        ctx->r2 = ADD32(0, 0X456);
            goto L_00226EA8;
    }
    // 0x00226E6C: addiu       $v0, $zero, 0x456
    ctx->r2 = ADD32(0, 0X456);
    // 0x00226E70: beq         $v1, $v0, L_00226EAC
    if (ctx->r3 == ctx->r2) {
        // 0x00226E74: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00226EAC;
    }
    // 0x00226E74: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00226E78: lw          $v0, 0x144($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X144);
    // 0x00226E7C: beq         $v0, $zero, L_00226EA8
    if (ctx->r2 == 0) {
        // 0x00226E80: addiu       $v0, $zero, 0x3D
        ctx->r2 = ADD32(0, 0X3D);
            goto L_00226EA8;
    }
    // 0x00226E80: addiu       $v0, $zero, 0x3D
    ctx->r2 = ADD32(0, 0X3D);
    // 0x00226E84: lb          $v1, 0x174($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X174);
    // 0x00226E88: beq         $v1, $v0, L_00226EAC
    if (ctx->r3 == ctx->r2) {
        // 0x00226E8C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00226EAC;
    }
    // 0x00226E8C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00226E90: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00226E94: lwc1        $f0, 0x6048($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6048);
    // 0x00226E98: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x00226E9C: nop

    // 0x00226EA0: bc1t        L_00226EAC
    if (c1cs) {
        // 0x00226EA4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00226EAC;
    }
    // 0x00226EA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00226EA8:
    // 0x00226EA8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00226EAC:
    // 0x00226EAC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00226EB0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00226EB4: jr          $ra
    // 0x00226EB8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00226EB8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_004187FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004187FC: addiu       $v0, $v0, 0x614C
    ctx->r2 = ADD32(ctx->r2, 0X614C);
    // 0x00418800: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00418804: jr          $ra
    // 0x00418808: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00418808: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0043D450(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0040456C:
    // 0x0043D450: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0043D454: addu        $t3, $a0, $zero
    ctx->r11 = ADD32(ctx->r4, 0);
    // 0x0043D458: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x0043D45C: addu        $a2, $t0, $zero
    ctx->r6 = ADD32(ctx->r8, 0);
    // 0x0043D460: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x0043D464: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0043D468: addiu       $v0, $v0, -0x9F0
    ctx->r2 = ADD32(ctx->r2, -0X9F0);
    // 0x0043D46C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0043D470: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0043D474: lw          $t1, 0x3BC($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X3BC);
    // 0x0043D478: addiu       $a3, $v0, 0x3BC
    ctx->r7 = ADD32(ctx->r2, 0X3BC);
    // 0x0043D47C: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x0043D480: sw          $zero, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = 0;
    // 0x0043D484: sllv        $v0, $t2, $a2
    ctx->r2 = S32(ctx->r10 << (ctx->r6 & 31));
L_0043D488:
    // 0x0043D488: and         $v0, $t1, $v0
    ctx->r2 = ctx->r9 & ctx->r2;
    // 0x0043D48C: beql        $v0, $zero, L_0043D4D4
    if (ctx->r2 == 0) {
        // 0x0043D490: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_0043D4D4;
    }
    goto skip_0;
    // 0x0043D490: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    skip_0:
    // 0x0043D494: sll         $v0, $a2, 2
    ctx->r2 = S32(ctx->r6 << 2);
    // 0x0043D498: lw          $v1, -0x3BC($a3)
    ctx->r3 = MEM_W(ctx->r7, -0X3BC);
    // 0x0043D49C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0043D4A0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0043D4A4: lw          $a0, -0x658($at)
    ctx->r4 = MEM_W(ctx->r1, -0X658);
    // 0x0043D4A8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0043D4AC: sw          $v1, -0x3BC($a3)
    MEM_W(-0X3BC, ctx->r7) = ctx->r3;
    // 0x0043D4B0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0043D4B4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0043D4B8: lw          $v1, -0x678($at)
    ctx->r3 = MEM_W(ctx->r1, -0X678);
    // 0x0043D4BC: blez        $v1, L_0043D4D4
    if (SIGNED(ctx->r3) <= 0) {
        // 0x0043D4C0: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_0043D4D4;
    }
    // 0x0043D4C0: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x0043D4C4: lw          $v0, -0x3C0($a3)
    ctx->r2 = MEM_W(ctx->r7, -0X3C0);
    // 0x0043D4C8: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x0043D4CC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0043D4D0: sw          $v0, -0x3C0($a3)
    MEM_W(-0X3C0, ctx->r7) = ctx->r2;
L_0043D4D4:
    // 0x0043D4D4: slti        $v0, $a2, 0x8
    ctx->r2 = SIGNED(ctx->r6) < 0X8 ? 1 : 0;
    // 0x0043D4D8: bne         $v0, $zero, L_0043D488
    if (ctx->r2 != 0) {
        // 0x0043D4DC: sllv        $v0, $t2, $a2
        ctx->r2 = S32(ctx->r10 << (ctx->r6 & 31));
            goto L_0043D488;
    }
    // 0x0043D4DC: sllv        $v0, $t2, $a2
    ctx->r2 = S32(ctx->r10 << (ctx->r6 & 31));
    // 0x0043D4E0: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x0043D4E4: addiu       $s0, $s0, -0x62F
    ctx->r16 = ADD32(ctx->r16, -0X62F);
    // 0x0043D4E8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0043D4EC: bne         $v0, $zero, L_0043D56C
    if (ctx->r2 != 0) {
        // 0x0043D4F0: addiu       $a3, $zero, 0x3
        ctx->r7 = ADD32(0, 0X3);
            goto L_0043D56C;
    }
    // 0x0043D4F0: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x0043D4F4: lw          $v0, -0x3C9($s0)
    ctx->r2 = MEM_W(ctx->r16, -0X3C9);
    // 0x0043D4F8: bne         $v0, $a3, L_0043D518
    if (ctx->r2 != ctx->r7) {
        // 0x0043D4FC: addiu       $v1, $s0, -0x3C9
        ctx->r3 = ADD32(ctx->r16, -0X3C9);
            goto L_0043D518;
    }
    // 0x0043D4FC: addiu       $v1, $s0, -0x3C9
    ctx->r3 = ADD32(ctx->r16, -0X3C9);
    // 0x0043D500: bne         $t0, $zero, L_0043D56C
    if (ctx->r8 != 0) {
        // 0x0043D504: addu        $a0, $t3, $zero
        ctx->r4 = ADD32(ctx->r11, 0);
            goto L_0043D56C;
    }
    // 0x0043D504: addu        $a0, $t3, $zero
    ctx->r4 = ADD32(ctx->r11, 0);
    // 0x0043D508: jal         0x00243414
    // 0x0043D50C: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0043D50C: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    after_0:
    // 0x0043D510: j           L_0040456C
    // 0x0043D514: nop

    entry_0040456C(rdram, ctx);
    return;
    // 0x0043D514: nop

L_0043D518:
    // 0x0043D518: bne         $t0, $zero, L_0043D56C
    if (ctx->r8 != 0) {
        // 0x0043D51C: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_0043D56C;
    }
    // 0x0043D51C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0043D520: sw          $v0, -0x3C9($s0)
    MEM_W(-0X3C9, ctx->r16) = ctx->r2;
    // 0x0043D524: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x0043D528: bne         $v0, $zero, L_0043D560
    if (ctx->r2 != 0) {
        // 0x0043D52C: addu        $a0, $t3, $zero
        ctx->r4 = ADD32(ctx->r11, 0);
            goto L_0043D560;
    }
    // 0x0043D52C: addu        $a0, $t3, $zero
    ctx->r4 = ADD32(ctx->r11, 0);
    // 0x0043D530: lwc1        $f0, 0x434($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X434);
    // 0x0043D534: lwc1        $f1, 0x438($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X438);
    // 0x0043D538: lwc1        $f2, 0x43C($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X43C);
    // 0x0043D53C: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    // 0x0043D540: sw          $a3, 0x3D4($v1)
    MEM_W(0X3D4, ctx->r3) = ctx->r7;
    // 0x0043D544: sw          $a3, 0x3D0($v1)
    MEM_W(0X3D0, ctx->r3) = ctx->r7;
    // 0x0043D548: sb          $zero, 0x3D8($v1)
    MEM_B(0X3D8, ctx->r3) = 0;
    // 0x0043D54C: sb          $zero, 0x3D9($v1)
    MEM_B(0X3D9, ctx->r3) = 0;
    // 0x0043D550: swc1        $f0, 0x428($v1)
    MEM_W(0X428, ctx->r3) = ctx->f0.u32l;
    // 0x0043D554: swc1        $f1, 0x42C($v1)
    MEM_W(0X42C, ctx->r3) = ctx->f_odd[(1 - 1) * 2];
    // 0x0043D558: jal         0x00243414
    // 0x0043D55C: swc1        $f2, 0x430($v1)
    MEM_W(0X430, ctx->r3) = ctx->f2.u32l;
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x0043D55C: swc1        $f2, 0x430($v1)
    MEM_W(0X430, ctx->r3) = ctx->f2.u32l;
    after_1:
L_0043D560:
    // 0x0043D560: lw          $a0, -0x3C9($s0)
    ctx->r4 = MEM_W(ctx->r16, -0X3C9);
    // 0x0043D564: jal         0x00403C14
    // 0x0043D568: nop

    func_00403C14(rdram, ctx);
        goto after_2;
    // 0x0043D568: nop

    after_2:
L_0043D56C:
    // 0x0043D56C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0043D570: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0043D574: jr          $ra
    // 0x0043D578: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0043D578: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00274850(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00274850: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00274854: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00274858: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0027485C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00274860: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00274864: lw          $a0, 0xB0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XB0);
    // 0x00274868: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x0027486C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00274870: sw          $v0, 0xAC($s1)
    MEM_W(0XAC, ctx->r17) = ctx->r2;
    // 0x00274874: sw          $zero, 0x50($s1)
    MEM_W(0X50, ctx->r17) = 0;
    // 0x00274878: lw          $v0, 0x104($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X104);
    // 0x0027487C: beq         $v1, $v0, L_002748BC
    if (ctx->r3 == ctx->r2) {
        // 0x00274880: addiu       $s0, $a0, 0x84
        ctx->r16 = ADD32(ctx->r4, 0X84);
            goto L_002748BC;
    }
    // 0x00274880: addiu       $s0, $a0, 0x84
    ctx->r16 = ADD32(ctx->r4, 0X84);
    // 0x00274884: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00274888: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x0027488C: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x00274890: lh          $a1, 0xDC($v0)
    ctx->r5 = MEM_H(ctx->r2, 0XDC);
    // 0x00274894: jal         0x00293E60
    // 0x00274898: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00293E60(rdram, ctx);
        goto after_0;
    // 0x00274898: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0027489C: jal         0x00293580
    // 0x002748A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00293580(rdram, ctx);
        goto after_1;
    // 0x002748A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x002748A4: beq         $v0, $zero, L_002748B8
    if (ctx->r2 == 0) {
        // 0x002748A8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_002748B8;
    }
    // 0x002748A8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x002748AC: jal         0x00293EC0
    // 0x002748B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00293EC0(rdram, ctx);
        goto after_2;
    // 0x002748B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x002748B4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_002748B8:
    // 0x002748B8: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
L_002748BC:
    // 0x002748BC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x002748C0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002748C4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002748C8: jr          $ra
    // 0x002748CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002748CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00259F94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00259F94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00259F98: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00259F9C: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00259FA0: lhu         $a3, 0x94($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X94);
    // 0x00259FA4: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x00259FA8: addiu       $a2, $a2, -0x730
    ctx->r6 = ADD32(ctx->r6, -0X730);
    // 0x00259FAC: jal         0x00245A98
    // 0x00259FB0: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x00259FB0: nop

    after_0:
    // 0x00259FB4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00259FB8: jr          $ra
    // 0x00259FBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00259FBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00446CCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00446CCC: jr          $ra
    // 0x00446CD0: nop

    return;
    // 0x00446CD0: nop

;}
RECOMP_FUNC void func_0025EE38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025EE38: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0025EE3C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0025EE40: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0025EE44: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0025EE48: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0025EE4C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0025EE50: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0025EE54: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0025EE58: jal         0x00220408
    // 0x0025EE5C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00220408(rdram, ctx);
        goto after_0;
    // 0x0025EE5C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0025EE60: bne         $v0, $zero, L_0025EE74
    if (ctx->r2 != 0) {
        // 0x0025EE64: nop
    
            goto L_0025EE74;
    }
    // 0x0025EE64: nop

    // 0x0025EE68: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0025EE6C: ori         $v0, $v0, 0x2100
    ctx->r2 = ctx->r2 | 0X2100;
    // 0x0025EE70: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
L_0025EE74:
    // 0x0025EE74: jal         0x00284188
    // 0x0025EE78: nop

    func_00284188(rdram, ctx);
        goto after_1;
    // 0x0025EE78: nop

    after_1:
    // 0x0025EE7C: beq         $v0, $zero, L_0025EE90
    if (ctx->r2 == 0) {
        // 0x0025EE80: nop
    
            goto L_0025EE90;
    }
    // 0x0025EE80: nop

    // 0x0025EE84: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x0025EE88: ori         $v0, $v0, 0x200
    ctx->r2 = ctx->r2 | 0X200;
    // 0x0025EE8C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
L_0025EE90:
    // 0x0025EE90: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0025EE94: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0025EE98: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0025EE9C: jr          $ra
    // 0x0025EEA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0025EEA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0025B078(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025B078: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0025B07C: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x0025B080: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x0025B084: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0025B088: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x0025B08C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0025B090: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x0025B094: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0025B098: addu        $s1, $s3, $zero
    ctx->r17 = ADD32(ctx->r19, 0);
    // 0x0025B09C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0025B0A0: addu        $s2, $s3, $zero
    ctx->r18 = ADD32(ctx->r19, 0);
    // 0x0025B0A4: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x0025B0A8: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x0025B0AC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0025B0B0: lw          $v0, 0x14($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X14);
    // 0x0025B0B4: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0025B0B8: lbu         $v1, -0x5511($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X5511);
    // 0x0025B0BC: beq         $v1, $zero, L_0025B144
    if (ctx->r3 == 0) {
        // 0x0025B0C0: addiu       $s0, $v0, 0x14
        ctx->r16 = ADD32(ctx->r2, 0X14);
            goto L_0025B144;
    }
    // 0x0025B0C0: addiu       $s0, $v0, 0x14
    ctx->r16 = ADD32(ctx->r2, 0X14);
    // 0x0025B0C4: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x0025B0C8: beq         $a0, $zero, L_0025B144
    if (ctx->r4 == 0) {
        // 0x0025B0CC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0025B144;
    }
    // 0x0025B0CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0025B0D0: lbu         $a1, 0x0($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X0);
    // 0x0025B0D4: beq         $a1, $v0, L_0025B114
    if (ctx->r5 == ctx->r2) {
        // 0x0025B0D8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0025B114;
    }
    // 0x0025B0D8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0025B0DC: bne         $a1, $v0, L_0025B144
    if (ctx->r5 != ctx->r2) {
        // 0x0025B0E0: nop
    
            goto L_0025B144;
    }
    // 0x0025B0E0: nop

    // 0x0025B0E4: lhu         $v0, 0x2($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X2);
    // 0x0025B0E8: addiu       $v1, $v0, -0x2
    ctx->r3 = ADD32(ctx->r2, -0X2);
    // 0x0025B0EC: sltiu       $v0, $v1, 0x67
    ctx->r2 = ctx->r3 < 0X67 ? 1 : 0;
    // 0x0025B0F0: beq         $v0, $zero, L_0025B144
    if (ctx->r2 == 0) {
        // 0x0025B0F4: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_0025B144;
    }
    // 0x0025B0F4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0025B0F8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025B0FC: addu        $at, $at, $v0
    gpr jr_addend_0025B104 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0025B100: lw          $v0, 0x73A0($at)
    ctx->r2 = ADD32(ctx->r1, 0X73A0);
    // 0x0025B104: jr          $v0
    // 0x0025B108: nop

    switch (jr_addend_0025B104 >> 2) {
        case 0: goto L_0025B138; break;
        case 1: goto L_0025B144; break;
        case 2: goto L_0025B144; break;
        case 3: goto L_0025B144; break;
        case 4: goto L_0025B138; break;
        case 5: goto L_0025B138; break;
        case 6: goto L_0025B138; break;
        case 7: goto L_0025B138; break;
        case 8: goto L_0025B144; break;
        case 9: goto L_0025B144; break;
        case 10: goto L_0025B10C; break;
        case 11: goto L_0025B144; break;
        case 12: goto L_0025B144; break;
        case 13: goto L_0025B144; break;
        case 14: goto L_0025B144; break;
        case 15: goto L_0025B144; break;
        case 16: goto L_0025B144; break;
        case 17: goto L_0025B144; break;
        case 18: goto L_0025B144; break;
        case 19: goto L_0025B144; break;
        case 20: goto L_0025B144; break;
        case 21: goto L_0025B144; break;
        case 22: goto L_0025B144; break;
        case 23: goto L_0025B144; break;
        case 24: goto L_0025B138; break;
        case 25: goto L_0025B144; break;
        case 26: goto L_0025B144; break;
        case 27: goto L_0025B144; break;
        case 28: goto L_0025B144; break;
        case 29: goto L_0025B144; break;
        case 30: goto L_0025B144; break;
        case 31: goto L_0025B144; break;
        case 32: goto L_0025B10C; break;
        case 33: goto L_0025B10C; break;
        case 34: goto L_0025B10C; break;
        case 35: goto L_0025B144; break;
        case 36: goto L_0025B144; break;
        case 37: goto L_0025B144; break;
        case 38: goto L_0025B144; break;
        case 39: goto L_0025B144; break;
        case 40: goto L_0025B144; break;
        case 41: goto L_0025B144; break;
        case 42: goto L_0025B144; break;
        case 43: goto L_0025B144; break;
        case 44: goto L_0025B144; break;
        case 45: goto L_0025B144; break;
        case 46: goto L_0025B144; break;
        case 47: goto L_0025B144; break;
        case 48: goto L_0025B144; break;
        case 49: goto L_0025B144; break;
        case 50: goto L_0025B144; break;
        case 51: goto L_0025B144; break;
        case 52: goto L_0025B144; break;
        case 53: goto L_0025B144; break;
        case 54: goto L_0025B144; break;
        case 55: goto L_0025B144; break;
        case 56: goto L_0025B144; break;
        case 57: goto L_0025B144; break;
        case 58: goto L_0025B144; break;
        case 59: goto L_0025B144; break;
        case 60: goto L_0025B144; break;
        case 61: goto L_0025B144; break;
        case 62: goto L_0025B144; break;
        case 63: goto L_0025B144; break;
        case 64: goto L_0025B144; break;
        case 65: goto L_0025B144; break;
        case 66: goto L_0025B144; break;
        case 67: goto L_0025B144; break;
        case 68: goto L_0025B144; break;
        case 69: goto L_0025B144; break;
        case 70: goto L_0025B144; break;
        case 71: goto L_0025B144; break;
        case 72: goto L_0025B144; break;
        case 73: goto L_0025B144; break;
        case 74: goto L_0025B144; break;
        case 75: goto L_0025B144; break;
        case 76: goto L_0025B144; break;
        case 77: goto L_0025B138; break;
        case 78: goto L_0025B144; break;
        case 79: goto L_0025B144; break;
        case 80: goto L_0025B144; break;
        case 81: goto L_0025B144; break;
        case 82: goto L_0025B144; break;
        case 83: goto L_0025B144; break;
        case 84: goto L_0025B144; break;
        case 85: goto L_0025B10C; break;
        case 86: goto L_0025B10C; break;
        case 87: goto L_0025B144; break;
        case 88: goto L_0025B144; break;
        case 89: goto L_0025B144; break;
        case 90: goto L_0025B144; break;
        case 91: goto L_0025B144; break;
        case 92: goto L_0025B144; break;
        case 93: goto L_0025B144; break;
        case 94: goto L_0025B144; break;
        case 95: goto L_0025B144; break;
        case 96: goto L_0025B144; break;
        case 97: goto L_0025B144; break;
        case 98: goto L_0025B144; break;
        case 99: goto L_0025B144; break;
        case 100: goto L_0025B144; break;
        case 101: goto L_0025B144; break;
        case 102: goto L_0025B138; break;
        default: switch_error(__func__, 0x0025B104, 0x800A73A0);
    }
    // 0x0025B108: nop

L_0025B10C:
    // 0x0025B10C: j           L_0025B144
    // 0x0025B110: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_0025B144;
    // 0x0025B110: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_0025B114:
    // 0x0025B114: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x0025B118: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x0025B11C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025B120: beq         $v0, $zero, L_0025B144
    if (ctx->r2 == 0) {
        // 0x0025B124: nop
    
            goto L_0025B144;
    }
    // 0x0025B124: nop

    // 0x0025B128: lw          $v0, 0x1A8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1A8);
    // 0x0025B12C: lh          $v0, 0x996($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X996);
    // 0x0025B130: bne         $v0, $a1, L_0025B144
    if (ctx->r2 != ctx->r5) {
        // 0x0025B134: nop
    
            goto L_0025B144;
    }
    // 0x0025B134: nop

L_0025B138:
    // 0x0025B138: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x0025B13C: addu        $s1, $s3, $zero
    ctx->r17 = ADD32(ctx->r19, 0);
    // 0x0025B140: addu        $s2, $s3, $zero
    ctx->r18 = ADD32(ctx->r19, 0);
L_0025B144:
    // 0x0025B144: beq         $a2, $zero, L_0025B158
    if (ctx->r6 == 0) {
        // 0x0025B148: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0025B158;
    }
    // 0x0025B148: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0025B14C: lb          $v1, 0x50($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X50);
    // 0x0025B150: bne         $v1, $v0, L_0025B2B0
    if (ctx->r3 != ctx->r2) {
        // 0x0025B154: addiu       $v0, $zero, 0x37
        ctx->r2 = ADD32(0, 0X37);
            goto L_0025B2B0;
    }
    // 0x0025B154: addiu       $v0, $zero, 0x37
    ctx->r2 = ADD32(0, 0X37);
L_0025B158:
    // 0x0025B158: jal         0x002113A4
    // 0x0025B15C: nop

    func_002113A4(rdram, ctx);
        goto after_0;
    // 0x0025B15C: nop

    after_0:
    // 0x0025B160: lui         $v1, 0x1062
    ctx->r3 = S32(0X1062 << 16);
    // 0x0025B164: ori         $v1, $v1, 0x4DD3
    ctx->r3 = ctx->r3 | 0X4DD3;
    // 0x0025B168: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0025B16C: sra         $v1, $v0, 31
    ctx->r3 = S32(SIGNED(ctx->r2) >> 31);
    // 0x0025B170: mfhi        $a3
    ctx->r7 = hi;
    // 0x0025B174: sra         $a0, $a3, 6
    ctx->r4 = S32(SIGNED(ctx->r7) >> 6);
    // 0x0025B178: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x0025B17C: sll         $v1, $a0, 5
    ctx->r3 = S32(ctx->r4 << 5);
    // 0x0025B180: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x0025B184: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0025B188: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0025B18C: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x0025B190: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0025B194: slti        $v0, $v0, 0x1F4
    ctx->r2 = SIGNED(ctx->r2) < 0X1F4 ? 1 : 0;
    // 0x0025B198: beq         $v0, $zero, L_0025B1AC
    if (ctx->r2 == 0) {
        // 0x0025B19C: nop
    
            goto L_0025B1AC;
    }
    // 0x0025B19C: nop

    // 0x0025B1A0: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x0025B1A4: addu        $s1, $s3, $zero
    ctx->r17 = ADD32(ctx->r19, 0);
    // 0x0025B1A8: addu        $s2, $s3, $zero
    ctx->r18 = ADD32(ctx->r19, 0);
L_0025B1AC:
    // 0x0025B1AC: lw          $v0, 0x10($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X10);
    // 0x0025B1B0: beq         $v0, $zero, L_0025B25C
    if (ctx->r2 == 0) {
        // 0x0025B1B4: nop
    
            goto L_0025B25C;
    }
    // 0x0025B1B4: nop

    // 0x0025B1B8: lbu         $a0, 0x65($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X65);
    // 0x0025B1BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0025B1C0: andi        $v1, $a0, 0x3
    ctx->r3 = ctx->r4 & 0X3;
    // 0x0025B1C4: beq         $v1, $v0, L_0025B210
    if (ctx->r3 == ctx->r2) {
        // 0x0025B1C8: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_0025B210;
    }
    // 0x0025B1C8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x0025B1CC: beq         $v0, $zero, L_0025B1E4
    if (ctx->r2 == 0) {
        // 0x0025B1D0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0025B1E4;
    }
    // 0x0025B1D0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0025B1D4: beq         $v1, $zero, L_0025B1F4
    if (ctx->r3 == 0) {
        // 0x0025B1D8: nop
    
            goto L_0025B1F4;
    }
    // 0x0025B1D8: nop

    // 0x0025B1DC: j           L_0025B25C
    // 0x0025B1E0: nop

        goto L_0025B25C;
    // 0x0025B1E0: nop

L_0025B1E4:
    // 0x0025B1E4: beq         $v1, $v0, L_0025B22C
    if (ctx->r3 == ctx->r2) {
        // 0x0025B1E8: nop
    
            goto L_0025B22C;
    }
    // 0x0025B1E8: nop

    // 0x0025B1EC: j           L_0025B25C
    // 0x0025B1F0: nop

        goto L_0025B25C;
    // 0x0025B1F0: nop

L_0025B1F4:
    // 0x0025B1F4: beq         $s3, $zero, L_0025B25C
    if (ctx->r19 == 0) {
        // 0x0025B1F8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0025B25C;
    }
    // 0x0025B1F8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0025B1FC: lb          $v1, 0x54($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X54);
    // 0x0025B200: beq         $v1, $v0, L_0025B25C
    if (ctx->r3 == ctx->r2) {
        // 0x0025B204: addiu       $v0, $zero, 0x3B
        ctx->r2 = ADD32(0, 0X3B);
            goto L_0025B25C;
    }
    // 0x0025B204: addiu       $v0, $zero, 0x3B
    ctx->r2 = ADD32(0, 0X3B);
    // 0x0025B208: j           L_0025B2B0
    // 0x0025B20C: nop

        goto L_0025B2B0;
    // 0x0025B20C: nop

L_0025B210:
    // 0x0025B210: beq         $s1, $zero, L_0025B25C
    if (ctx->r17 == 0) {
        // 0x0025B214: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0025B25C;
    }
    // 0x0025B214: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0025B218: lb          $v1, 0x51($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X51);
    // 0x0025B21C: beq         $v1, $v0, L_0025B25C
    if (ctx->r3 == ctx->r2) {
        // 0x0025B220: addiu       $v0, $zero, 0x38
        ctx->r2 = ADD32(0, 0X38);
            goto L_0025B25C;
    }
    // 0x0025B220: addiu       $v0, $zero, 0x38
    ctx->r2 = ADD32(0, 0X38);
    // 0x0025B224: j           L_0025B2B0
    // 0x0025B228: nop

        goto L_0025B2B0;
    // 0x0025B228: nop

L_0025B22C:
    // 0x0025B22C: beq         $s2, $zero, L_0025B25C
    if (ctx->r18 == 0) {
        // 0x0025B230: andi        $v0, $a0, 0x4
        ctx->r2 = ctx->r4 & 0X4;
            goto L_0025B25C;
    }
    // 0x0025B230: andi        $v0, $a0, 0x4
    ctx->r2 = ctx->r4 & 0X4;
    // 0x0025B234: bne         $v0, $zero, L_0025B250
    if (ctx->r2 != 0) {
        // 0x0025B238: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0025B250;
    }
    // 0x0025B238: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0025B23C: lb          $v1, 0x52($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X52);
    // 0x0025B240: beq         $v1, $v0, L_0025B25C
    if (ctx->r3 == ctx->r2) {
        // 0x0025B244: addiu       $v0, $zero, 0x39
        ctx->r2 = ADD32(0, 0X39);
            goto L_0025B25C;
    }
    // 0x0025B244: addiu       $v0, $zero, 0x39
    ctx->r2 = ADD32(0, 0X39);
    // 0x0025B248: j           L_0025B2B0
    // 0x0025B24C: nop

        goto L_0025B2B0;
    // 0x0025B24C: nop

L_0025B250:
    // 0x0025B250: lb          $v1, 0x53($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X53);
    // 0x0025B254: bne         $v1, $v0, L_0025B2B0
    if (ctx->r3 != ctx->r2) {
        // 0x0025B258: addiu       $v0, $zero, 0x3A
        ctx->r2 = ADD32(0, 0X3A);
            goto L_0025B2B0;
    }
    // 0x0025B258: addiu       $v0, $zero, 0x3A
    ctx->r2 = ADD32(0, 0X3A);
L_0025B25C:
    // 0x0025B25C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0025B260: lbu         $v0, -0x5511($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X5511);
    // 0x0025B264: beq         $v0, $zero, L_0025B2AC
    if (ctx->r2 == 0) {
        // 0x0025B268: lui         $v1, 0x80
        ctx->r3 = S32(0X80 << 16);
            goto L_0025B2AC;
    }
    // 0x0025B268: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x0025B26C: lw          $v0, 0xC($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XC);
    // 0x0025B270: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025B274: beq         $v0, $zero, L_0025B2AC
    if (ctx->r2 == 0) {
        // 0x0025B278: addiu       $s1, $zero, -0x1
        ctx->r17 = ADD32(0, -0X1);
            goto L_0025B2AC;
    }
    // 0x0025B278: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x0025B27C: lb          $v0, 0x4F($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X4F);
    // 0x0025B280: beq         $v0, $s1, L_0025B2AC
    if (ctx->r2 == ctx->r17) {
        // 0x0025B284: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_0025B2AC;
    }
    // 0x0025B284: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x0025B288: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x0025B28C: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x0025B290: jal         0x00219F74
    // 0x0025B294: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    func_00219F74(rdram, ctx);
        goto after_1;
    // 0x0025B294: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    after_1:
    // 0x0025B298: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0025B29C: bne         $v1, $s1, L_0025B2B0
    if (ctx->r3 != ctx->r17) {
        // 0x0025B2A0: addiu       $v0, $zero, 0x35
        ctx->r2 = ADD32(0, 0X35);
            goto L_0025B2B0;
    }
    // 0x0025B2A0: addiu       $v0, $zero, 0x35
    ctx->r2 = ADD32(0, 0X35);
    // 0x0025B2A4: j           L_0025B2B0
    // 0x0025B2A8: addiu       $v0, $zero, 0x36
    ctx->r2 = ADD32(0, 0X36);
        goto L_0025B2B0;
    // 0x0025B2A8: addiu       $v0, $zero, 0x36
    ctx->r2 = ADD32(0, 0X36);
L_0025B2AC:
    // 0x0025B2AC: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
L_0025B2B0:
    // 0x0025B2B0: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x0025B2B4: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0025B2B8: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0025B2BC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0025B2C0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0025B2C4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0025B2C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0025B2CC: jr          $ra
    // 0x0025B2D0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0025B2D0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_002186D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002186D8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x002186DC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x002186E0: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x002186E4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x002186E8: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x002186EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x002186F0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x002186F4: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x002186F8: blez        $s2, L_0021872C
    if (SIGNED(ctx->r18) <= 0) {
        // 0x002186FC: sw          $s1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r17;
            goto L_0021872C;
    }
    // 0x002186FC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00218700: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
L_00218704:
    // 0x00218704: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00218708: jal         0x00217C58
    // 0x0021870C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    func_00217C58(rdram, ctx);
        goto after_0;
    // 0x0021870C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_0:
    // 0x00218710: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00218714: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00218718: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x0021871C: slt         $v0, $s0, $s2
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x00218720: swc1        $f0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f0.u32l;
    // 0x00218724: bne         $v0, $zero, L_00218704
    if (ctx->r2 != 0) {
        // 0x00218728: addiu       $s1, $s1, 0x10
        ctx->r17 = ADD32(ctx->r17, 0X10);
            goto L_00218704;
    }
    // 0x00218728: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
L_0021872C:
    // 0x0021872C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00218730: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x00218734: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00218738: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0021873C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00218740: jr          $ra
    // 0x00218744: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00218744: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0040DBC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040DBC8: jr          $ra
    // 0x0040DBCC: nop

    return;
    // 0x0040DBCC: nop

;}
RECOMP_FUNC void func_00419858(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00419858: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0041985C: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x00419860: lui         $a2, 0x44
    ctx->r6 = S32(0X44 << 16);
    // 0x00419864: addiu       $a2, $a2, -0x5DD0
    ctx->r6 = ADD32(ctx->r6, -0X5DD0);
    // 0x00419868: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0041986C: jal         0x00416894
    // 0x00419870: nop

    func_00416894(rdram, ctx);
        goto after_0;
    // 0x00419870: nop

    after_0:
    // 0x00419874: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00419878: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041987C: jr          $ra
    // 0x00419880: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00419880: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00225AD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00225AD4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00225AD8: addu        $t0, $a2, $zero
    ctx->r8 = ADD32(ctx->r6, 0);
    // 0x00225ADC: lw          $t1, 0xDF8($a0)
    ctx->r9 = MEM_W(ctx->r4, 0XDF8);
    // 0x00225AE0: blez        $t1, L_00225B14
    if (SIGNED(ctx->r9) <= 0) {
        // 0x00225AE4: addiu       $a0, $a0, 0xBF8
        ctx->r4 = ADD32(ctx->r4, 0XBF8);
            goto L_00225B14;
    }
    // 0x00225AE4: addiu       $a0, $a0, 0xBF8
    ctx->r4 = ADD32(ctx->r4, 0XBF8);
    // 0x00225AE8: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
L_00225AEC:
    // 0x00225AEC: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x00225AF0: lw          $v0, 0x1A8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1A8);
    // 0x00225AF4: bne         $v0, $a1, L_00225B08
    if (ctx->r2 != ctx->r5) {
        // 0x00225AF8: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_00225B08;
    }
    // 0x00225AF8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x00225AFC: addu        $t0, $v1, $zero
    ctx->r8 = ADD32(ctx->r3, 0);
    // 0x00225B00: j           L_00225B14
    // 0x00225B04: sw          $zero, 0x1A8($t0)
    MEM_W(0X1A8, ctx->r8) = 0;
        goto L_00225B14;
    // 0x00225B04: sw          $zero, 0x1A8($t0)
    MEM_W(0X1A8, ctx->r8) = 0;
L_00225B08:
    // 0x00225B08: slt         $v0, $a2, $t1
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x00225B0C: bne         $v0, $zero, L_00225AEC
    if (ctx->r2 != 0) {
        // 0x00225B10: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_00225AEC;
    }
    // 0x00225B10: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
L_00225B14:
    // 0x00225B14: blez        $t1, L_00225B3C
    if (SIGNED(ctx->r9) <= 0) {
        // 0x00225B18: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_00225B3C;
    }
    // 0x00225B18: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_00225B1C:
    // 0x00225B1C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00225B20: lw          $v0, 0x1A8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1A8);
    // 0x00225B24: beql        $v0, $a1, L_00225B2C
    if (ctx->r2 == ctx->r5) {
        // 0x00225B28: sw          $t0, 0x1A8($v1)
        MEM_W(0X1A8, ctx->r3) = ctx->r8;
            goto L_00225B2C;
    }
    goto skip_0;
    // 0x00225B28: sw          $t0, 0x1A8($v1)
    MEM_W(0X1A8, ctx->r3) = ctx->r8;
    skip_0:
L_00225B2C:
    // 0x00225B2C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x00225B30: slt         $v0, $a2, $t1
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x00225B34: bne         $v0, $zero, L_00225B1C
    if (ctx->r2 != 0) {
        // 0x00225B38: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_00225B1C;
    }
    // 0x00225B38: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_00225B3C:
    // 0x00225B3C: jr          $ra
    // 0x00225B40: addu        $v0, $t0, $zero
    ctx->r2 = ADD32(ctx->r8, 0);
    return;
    // 0x00225B40: addu        $v0, $t0, $zero
    ctx->r2 = ADD32(ctx->r8, 0);
;}
RECOMP_FUNC void func_0042EC30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042EC30: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0042EC34: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x0042EC38: lw          $a2, 0x4($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X4);
    // 0x0042EC3C: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x0042EC40: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
L_0042EC44:
    // 0x0042EC44: sll         $a3, $a3, 1
    ctx->r7 = S32(ctx->r7 << 1);
    // 0x0042EC48: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0042EC4C: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x0042EC50: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0042EC54: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0042EC58: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0042EC5C: srl         $v0, $v1, 3
    ctx->r2 = S32(U32(ctx->r3) >> 3);
    // 0x0042EC60: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x0042EC64: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x0042EC68: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x0042EC6C: srav        $v1, $t1, $v1
    ctx->r3 = S32(SIGNED(ctx->r9) >> (ctx->r3 & 31));
    // 0x0042EC70: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0042EC74: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x0042EC78: bne         $a1, $t0, L_0042EC44
    if (ctx->r5 != ctx->r8) {
        // 0x0042EC7C: or          $a3, $a3, $v0
        ctx->r7 = ctx->r7 | ctx->r2;
            goto L_0042EC44;
    }
    // 0x0042EC7C: or          $a3, $a3, $v0
    ctx->r7 = ctx->r7 | ctx->r2;
    // 0x0042EC80: beq         $a3, $zero, L_0042ECE4
    if (ctx->r7 == 0) {
            // 0x0042EC84: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_0042ECE4(rdram, ctx);
    return;
    }
    // 0x0042EC84: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0042EC88: beq         $a3, $zero, L_0042ECD8
    if (ctx->r7 == 0) {
        // 0x0042EC8C: addiu       $a1, $a3, -0x1
        ctx->r5 = ADD32(ctx->r7, -0X1);
            goto L_0042ECD8;
    }
    // 0x0042EC8C: addiu       $a1, $a3, -0x1
    ctx->r5 = ADD32(ctx->r7, -0X1);
    // 0x0042EC90: lw          $a3, 0x4($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X4);
    // 0x0042EC94: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x0042EC98: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
L_0042EC9C:
    // 0x0042EC9C: sll         $a2, $a2, 1
    ctx->r6 = S32(ctx->r6 << 1);
    // 0x0042ECA0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0042ECA4: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x0042ECA8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0042ECAC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0042ECB0: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0042ECB4: srl         $v0, $v1, 3
    ctx->r2 = S32(U32(ctx->r3) >> 3);
    // 0x0042ECB8: addu        $v0, $a3, $v0
    ctx->r2 = ADD32(ctx->r7, ctx->r2);
    // 0x0042ECBC: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x0042ECC0: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x0042ECC4: srav        $v1, $t1, $v1
    ctx->r3 = S32(SIGNED(ctx->r9) >> (ctx->r3 & 31));
    // 0x0042ECC8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0042ECCC: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x0042ECD0: bne         $a1, $t0, L_0042EC9C
    if (ctx->r5 != ctx->r8) {
        // 0x0042ECD4: or          $a2, $a2, $v0
        ctx->r6 = ctx->r6 | ctx->r2;
            goto L_0042EC9C;
    }
    // 0x0042ECD4: or          $a2, $a2, $v0
    ctx->r6 = ctx->r6 | ctx->r2;
L_0042ECD8:
    // 0x0042ECD8: addiu       $v0, $a2, 0x1
    ctx->r2 = ADD32(ctx->r6, 0X1);
    // 0x0042ECDC: jr          $ra
    // 0x0042ECE0: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
    return;
    // 0x0042ECE0: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_0043D57C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00404750:
    // 0x0043D57C: addiu       $sp, $sp, -0x108
    ctx->r29 = ADD32(ctx->r29, -0X108);
L_004048A0:
    // 0x0043D580: sw          $s2, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r18;
L_004049EC:
    // 0x0043D584: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
L_00404A8C:
    // 0x0043D588: sw          $s4, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r20;
    // 0x0043D58C: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x0043D590: sw          $s3, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r19;
    // 0x0043D594: sw          $ra, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r31;
    // 0x0043D598: sw          $s1, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r17;
    // 0x0043D59C: sw          $s0, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r16;
    // 0x0043D5A0: sdc1        $f20, 0x100($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X100, ctx->r29);
    // 0x0043D5A4: lw          $a1, 0x4($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X4);
    // 0x0043D5A8: lw          $a2, 0x8($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X8);
    // 0x0043D5AC: lw          $a3, 0xC($s2)
    ctx->r7 = MEM_W(ctx->r18, 0XC);
    // 0x0043D5B0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0043D5B4: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x0043D5B8: jal         0x002532EC
    // 0x0043D5BC: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    func_002532EC(rdram, ctx);
        goto after_0;
    // 0x0043D5BC: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    after_0:
    // 0x0043D5C0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0043D5C4: beq         $v1, $zero, L_0043DC20
    if (ctx->r3 == 0) {
        // 0x0043D5C8: nop
    
            goto L_0043DC20;
    }
    // 0x0043D5C8: nop

    // 0x0043D5CC: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x0043D5D0: addiu       $s0, $s0, -0x5D4
    ctx->r16 = ADD32(ctx->r16, -0X5D4);
    // 0x0043D5D4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0043D5D8: beq         $v0, $zero, L_0043D5EC
    if (ctx->r2 == 0) {
        // 0x0043D5DC: nop
    
            goto L_0043D5EC;
    }
    // 0x0043D5DC: nop

    // 0x0043D5E0: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
    // 0x0043D5E4: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x0043D5E8: sw          $v0, -0xCC($s0)
    MEM_W(-0XCC, ctx->r16) = ctx->r2;
L_0043D5EC:
    // 0x0043D5EC: lbu         $v0, -0xC8($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0XC8);
    // 0x0043D5F0: bne         $v0, $zero, L_0043D634
    if (ctx->r2 != 0) {
        // 0x0043D5F4: nop
    
            goto L_0043D634;
    }
    // 0x0043D5F4: nop

    // 0x0043D5F8: lw          $v0, -0xDC($s0)
    ctx->r2 = MEM_W(ctx->r16, -0XDC);
    // 0x0043D5FC: blez        $v0, L_0043D628
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0043D600: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_0043D628;
    }
    // 0x0043D600: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0043D604: lw          $a0, -0xB0($s0)
    ctx->r4 = MEM_W(ctx->r16, -0XB0);
    // 0x0043D608: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0043D60C: sb          $v0, -0xC8($s0)
    MEM_B(-0XC8, ctx->r16) = ctx->r2;
    // 0x0043D610: jal         0x00243414
    // 0x0043D614: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x0043D614: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_1:
    // 0x0043D618: lw          $a0, -0xAC($s0)
    ctx->r4 = MEM_W(ctx->r16, -0XAC);
    // 0x0043D61C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0043D620: jal         0x00243414
    // 0x0043D624: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x0043D624: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_2:
L_0043D628:
    // 0x0043D628: lbu         $v0, -0xC8($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0XC8);
    // 0x0043D62C: beq         $v0, $zero, L_0043D680
    if (ctx->r2 == 0) {
        // 0x0043D630: nop
    
            goto L_0043D680;
    }
    // 0x0043D630: nop

L_0043D634:
    // 0x0043D634: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x0043D638: addiu       $s0, $s0, -0x6B0
    ctx->r16 = ADD32(ctx->r16, -0X6B0);
    // 0x0043D63C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0043D640: bne         $v0, $zero, L_0043D680
    if (ctx->r2 != 0) {
        // 0x0043D644: nop
    
            goto L_0043D680;
    }
    // 0x0043D644: nop

    // 0x0043D648: lwc1        $f1, 0xC($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XC);
    // 0x0043D64C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0043D650: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0043D654: nop

    // 0x0043D658: bc1f        L_0043D680
    if (!c1cs) {
        // 0x0043D65C: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_0043D680;
    }
    // 0x0043D65C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0043D660: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x0043D664: sb          $zero, 0x14($s0)
    MEM_B(0X14, ctx->r16) = 0;
    // 0x0043D668: jal         0x00243414
    // 0x0043D66C: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_00243414(rdram, ctx);
        goto after_3;
    // 0x0043D66C: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_3:
    // 0x0043D670: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x0043D674: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0043D678: jal         0x00243414
    // 0x0043D67C: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_00243414(rdram, ctx);
        goto after_4;
    // 0x0043D67C: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_4:
L_0043D680:
    // 0x0043D680: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x0043D684: addiu       $s1, $s1, -0x6AC
    ctx->r17 = ADD32(ctx->r17, -0X6AC);
    // 0x0043D688: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x0043D68C: blez        $a0, L_0043D764
    if (SIGNED(ctx->r4) <= 0) {
        // 0x0043D690: nop
    
            goto L_0043D764;
    }
    // 0x0043D690: nop

    // 0x0043D694: lwc1        $f0, 0x18($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X18);
    // 0x0043D698: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x0043D69C: c.le.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl <= ctx->f12.fl;
    // 0x0043D6A0: nop

    // 0x0043D6A4: bc1f        L_0043D764
    if (!c1cs) {
        // 0x0043D6A8: nop
    
            goto L_0043D764;
    }
    // 0x0043D6A8: nop

    // 0x0043D6AC: lw          $v0, 0xC0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC0);
    // 0x0043D6B0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x0043D6B4: beq         $v0, $a1, L_0043D764
    if (ctx->r2 == ctx->r5) {
        // 0x0043D6B8: nop
    
            goto L_0043D764;
    }
    // 0x0043D6B8: nop

    // 0x0043D6BC: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0043D6C0: lw          $v1, -0x5EC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5EC);
    // 0x0043D6C4: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x0043D6C8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0043D6CC: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0043D6D0: lw          $v1, -0x5F4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5F4);
    // 0x0043D6D4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0043D6D8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0043D6DC: lwc1        $f20, 0xC($v0)
    ctx->f20.u32l = MEM_W(ctx->r2, 0XC);
    // 0x0043D6E0: lw          $s0, 0x8($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X8);
    // 0x0043D6E4: addu        $v0, $a0, $a1
    ctx->r2 = ADD32(ctx->r4, ctx->r5);
    // 0x0043D6E8: bne         $v0, $zero, L_0043D700
    if (ctx->r2 != 0) {
        // 0x0043D6EC: sw          $v0, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r2;
            goto L_0043D700;
    }
    // 0x0043D6EC: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x0043D6F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0043D6F4: sb          $v0, 0xC4($s1)
    MEM_B(0XC4, ctx->r17) = ctx->r2;
    // 0x0043D6F8: j           L_00404750
    // 0x0043D6FC: sw          $a1, 0xC0($s1)
    MEM_W(0XC0, ctx->r17) = ctx->r5;
    entry_00404750(rdram, ctx);
    return;
    // 0x0043D6FC: sw          $a1, 0xC0($s1)
    MEM_W(0XC0, ctx->r17) = ctx->r5;
L_0043D700:
    // 0x0043D700: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0043D704: beq         $s0, $v0, L_0043D74C
    if (ctx->r16 == ctx->r2) {
        // 0x0043D708: addiu       $s0, $s0, -0x3
        ctx->r16 = ADD32(ctx->r16, -0X3);
            goto L_0043D74C;
    }
    // 0x0043D708: addiu       $s0, $s0, -0x3
    ctx->r16 = ADD32(ctx->r16, -0X3);
    // 0x0043D70C: sll         $v0, $s0, 1
    ctx->r2 = S32(ctx->r16 << 1);
    // 0x0043D710: mtc1        $v0, $f14
    ctx->f14.u32l = ctx->r2;
    // 0x0043D714: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x0043D718: jal         0x002119FC
    // 0x0043D71C: nop

    func_002119FC(rdram, ctx);
        goto after_5;
    // 0x0043D71C: nop

    after_5:
    // 0x0043D720: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043D724: lwc1        $f1, 0x3B8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X3B8);
    // 0x0043D728: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0043D72C: sll         $v0, $s0, 4
    ctx->r2 = S32(ctx->r16 << 4);
    // 0x0043D730: subu        $v0, $v0, $s0
    ctx->r2 = SUB32(ctx->r2, ctx->r16);
    // 0x0043D734: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0043D738: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0043D73C: sub.s       $f1, $f20, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f20.fl - ctx->f1.fl;
    // 0x0043D740: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0043D744: j           L_00404750
    // 0x0043D748: swc1        $f1, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    entry_00404750(rdram, ctx);
    return;
    // 0x0043D748: swc1        $f1, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
L_0043D74C:
    // 0x0043D74C: swc1        $f20, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f20.u32l;
    // 0x0043D750: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x0043D754: lw          $a0, -0x67C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X67C);
    // 0x0043D758: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0043D75C: jal         0x00243414
    // 0x0043D760: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_00243414(rdram, ctx);
        goto after_6;
    // 0x0043D760: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_6:
L_0043D764:
    // 0x0043D764: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x0043D768: addiu       $s0, $s0, -0x6B0
    ctx->r16 = ADD32(ctx->r16, -0X6B0);
    // 0x0043D76C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0043D770: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0043D774: sltiu       $v0, $v0, 0x8
    ctx->r2 = ctx->r2 < 0X8 ? 1 : 0;
    // 0x0043D778: beq         $v0, $zero, L_0043D9EC
    if (ctx->r2 == 0) {
        // 0x0043D77C: nop
    
            goto L_0043D9EC;
    }
    // 0x0043D77C: nop

    // 0x0043D780: lwc1        $f0, 0x18($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X18);
    // 0x0043D784: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x0043D788: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x0043D78C: nop

    // 0x0043D790: bc1f        L_0043D8B8
    if (!c1cs) {
        // 0x0043D794: addiu       $a1, $zero, -0x1
        ctx->r5 = ADD32(0, -0X1);
            goto L_0043D8B8;
    }
    // 0x0043D794: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x0043D798: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x0043D79C: addiu       $a0, $a0, -0x5460
    ctx->r4 = ADD32(ctx->r4, -0X5460);
    // 0x0043D7A0: lw          $a3, -0x4($s0)
    ctx->r7 = MEM_W(ctx->r16, -0X4);
    // 0x0043D7A4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043D7A8: lwc1        $f1, 0x3BC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X3BC);
    // 0x0043D7AC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043D7B0: lwc1        $f2, 0x3C0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X3C0);
    // 0x0043D7B4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043D7B8: lwc1        $f3, 0x3C4($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X3C4);
    // 0x0043D7BC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043D7C0: lwc1        $f0, 0x3C8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3C8);
    // 0x0043D7C4: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x0043D7C8: addiu       $a2, $zero, 0x387
    ctx->r6 = ADD32(0, 0X387);
    // 0x0043D7CC: swc1        $f1, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0043D7D0: swc1        $f2, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f2.u32l;
    // 0x0043D7D4: swc1        $f3, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x0043D7D8: swc1        $f0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f0.u32l;
    // 0x0043D7DC: swc1        $f0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f0.u32l;
    // 0x0043D7E0: swc1        $f0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f0.u32l;
    // 0x0043D7E4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0043D7E8: lw          $t0, 0xD8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XD8);
    // 0x0043D7EC: lw          $t1, 0xDC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XDC);
    // 0x0043D7F0: lw          $t2, 0xE0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XE0);
    // 0x0043D7F4: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x0043D7F8: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x0043D7FC: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x0043D800: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x0043D804: lw          $t0, 0x18($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X18);
    // 0x0043D808: lw          $t1, 0x1C($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X1C);
    // 0x0043D80C: lw          $t2, 0x20($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X20);
    // 0x0043D810: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x0043D814: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x0043D818: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x0043D81C: lw          $t0, 0xC8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC8);
    // 0x0043D820: lw          $t1, 0xCC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XCC);
    // 0x0043D824: lw          $t2, 0xD0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XD0);
    // 0x0043D828: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x0043D82C: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x0043D830: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x0043D834: jal         0x00228108
    // 0x0043D838: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    func_00228108(rdram, ctx);
        goto after_7;
    // 0x0043D838: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    after_7:
    // 0x0043D83C: beq         $v0, $zero, L_0043D8B0
    if (ctx->r2 == 0) {
        // 0x0043D840: nop
    
            goto L_0043D8B0;
    }
    // 0x0043D840: nop

    // 0x0043D844: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0043D848: lw          $v1, 0xBC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XBC);
    // 0x0043D84C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0043D850: beq         $v1, $zero, L_0043D8A0
    if (ctx->r3 == 0) {
        // 0x0043D854: sw          $v0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r2;
            goto L_0043D8A0;
    }
    // 0x0043D854: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x0043D858: bnel        $v0, $zero, L_0043D8A0
    if (ctx->r2 != 0) {
        // 0x0043D85C: addiu       $s3, $zero, 0x1
        ctx->r19 = ADD32(0, 0X1);
            goto L_0043D8A0;
    }
    goto skip_0;
    // 0x0043D85C: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    skip_0:
    // 0x0043D860: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0043D864: lw          $v1, -0x5EC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5EC);
    // 0x0043D868: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x0043D86C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0043D870: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0043D874: lw          $v1, -0x5F4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5F4);
    // 0x0043D878: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0043D87C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0043D880: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x0043D884: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0043D888: beq         $v0, $v1, L_0043D89C
    if (ctx->r2 == ctx->r3) {
        // 0x0043D88C: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0043D89C;
    }
    // 0x0043D88C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0043D890: sb          $v1, 0xC8($s0)
    MEM_B(0XC8, ctx->r16) = ctx->r3;
    // 0x0043D894: j           L_004048A0
    // 0x0043D898: sw          $v0, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->r2;
    entry_004048A0(rdram, ctx);
    return;
    // 0x0043D898: sw          $v0, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->r2;
L_0043D89C:
    // 0x0043D89C: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_0043D8A0:
    // 0x0043D8A0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043D8A4: lwc1        $f0, 0x3CC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3CC);
    // 0x0043D8A8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0043D8AC: swc1        $f0, -0x6A4($at)
    MEM_W(-0X6A4, ctx->r1) = ctx->f0.u32l;
L_0043D8B0:
    // 0x0043D8B0: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x0043D8B4: addiu       $s0, $s0, -0x6B0
    ctx->r16 = ADD32(ctx->r16, -0X6B0);
L_0043D8B8:
    // 0x0043D8B8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0043D8BC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0043D8C0: sltiu       $v0, $v0, 0x8
    ctx->r2 = ctx->r2 < 0X8 ? 1 : 0;
    // 0x0043D8C4: beq         $v0, $zero, L_0043D9EC
    if (ctx->r2 == 0) {
        // 0x0043D8C8: nop
    
            goto L_0043D9EC;
    }
    // 0x0043D8C8: nop

    // 0x0043D8CC: lwc1        $f0, 0x18($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X18);
    // 0x0043D8D0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x0043D8D4: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x0043D8D8: nop

    // 0x0043D8DC: bc1f        L_0043D9EC
    if (!c1cs) {
        // 0x0043D8E0: addiu       $a1, $zero, -0x1
        ctx->r5 = ADD32(0, -0X1);
            goto L_0043D9EC;
    }
    // 0x0043D8E0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x0043D8E4: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x0043D8E8: addiu       $a0, $a0, -0x5460
    ctx->r4 = ADD32(ctx->r4, -0X5460);
    // 0x0043D8EC: lw          $a3, -0x4($s0)
    ctx->r7 = MEM_W(ctx->r16, -0X4);
    // 0x0043D8F0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043D8F4: lwc1        $f1, 0x3D0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X3D0);
    // 0x0043D8F8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043D8FC: lwc1        $f2, 0x3D4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X3D4);
    // 0x0043D900: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043D904: lwc1        $f3, 0x3D8($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X3D8);
    // 0x0043D908: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043D90C: lwc1        $f0, 0x3DC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3DC);
    // 0x0043D910: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x0043D914: addiu       $a2, $zero, 0x387
    ctx->r6 = ADD32(0, 0X387);
    // 0x0043D918: swc1        $f1, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0043D91C: swc1        $f2, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f2.u32l;
    // 0x0043D920: swc1        $f3, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x0043D924: swc1        $f0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f0.u32l;
    // 0x0043D928: swc1        $f0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f0.u32l;
    // 0x0043D92C: swc1        $f0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f0.u32l;
    // 0x0043D930: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0043D934: lw          $t0, 0xD8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XD8);
    // 0x0043D938: lw          $t1, 0xDC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XDC);
    // 0x0043D93C: lw          $t2, 0xE0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XE0);
    // 0x0043D940: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x0043D944: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x0043D948: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x0043D94C: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x0043D950: lw          $t0, 0x18($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X18);
    // 0x0043D954: lw          $t1, 0x1C($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X1C);
    // 0x0043D958: lw          $t2, 0x20($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X20);
    // 0x0043D95C: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x0043D960: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x0043D964: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x0043D968: lw          $t0, 0xC8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC8);
    // 0x0043D96C: lw          $t1, 0xCC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XCC);
    // 0x0043D970: lw          $t2, 0xD0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XD0);
    // 0x0043D974: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x0043D978: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x0043D97C: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x0043D980: jal         0x00228108
    // 0x0043D984: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    func_00228108(rdram, ctx);
        goto after_8;
    // 0x0043D984: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    after_8:
    // 0x0043D988: beq         $v0, $zero, L_0043D9EC
    if (ctx->r2 == 0) {
        // 0x0043D98C: nop
    
            goto L_0043D9EC;
    }
    // 0x0043D98C: nop

    // 0x0043D990: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0043D994: lw          $v1, 0xBC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XBC);
    // 0x0043D998: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0043D99C: beq         $v1, $zero, L_0043D9EC
    if (ctx->r3 == 0) {
        // 0x0043D9A0: sw          $v0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r2;
            goto L_0043D9EC;
    }
    // 0x0043D9A0: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x0043D9A4: bnel        $v0, $zero, L_0043D9EC
    if (ctx->r2 != 0) {
        // 0x0043D9A8: addiu       $s3, $zero, 0x1
        ctx->r19 = ADD32(0, 0X1);
            goto L_0043D9EC;
    }
    goto skip_1;
    // 0x0043D9A8: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    skip_1:
    // 0x0043D9AC: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0043D9B0: lw          $v1, -0x5EC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5EC);
    // 0x0043D9B4: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x0043D9B8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0043D9BC: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0043D9C0: lw          $v1, -0x5F4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5F4);
    // 0x0043D9C4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0043D9C8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0043D9CC: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x0043D9D0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0043D9D4: beq         $v0, $v1, L_0043D9E8
    if (ctx->r2 == ctx->r3) {
        // 0x0043D9D8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0043D9E8;
    }
    // 0x0043D9D8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0043D9DC: sb          $v1, 0xC8($s0)
    MEM_B(0XC8, ctx->r16) = ctx->r3;
    // 0x0043D9E0: j           L_004049EC
    // 0x0043D9E4: sw          $v0, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->r2;
    entry_004049EC(rdram, ctx);
    return;
    // 0x0043D9E4: sw          $v0, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->r2;
L_0043D9E8:
    // 0x0043D9E8: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_0043D9EC:
    // 0x0043D9EC: beq         $s3, $zero, L_0043DA8C
    if (ctx->r19 == 0) {
        // 0x0043D9F0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0043DA8C;
    }
    // 0x0043D9F0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0043D9F4: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x0043D9F8: addiu       $s1, $s1, -0x5EC
    ctx->r17 = ADD32(ctx->r17, -0X5EC);
    // 0x0043D9FC: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x0043DA00: beq         $v1, $v0, L_0043DA8C
    if (ctx->r3 == ctx->r2) {
        // 0x0043DA04: nop
    
            goto L_0043DA8C;
    }
    // 0x0043DA04: nop

    // 0x0043DA08: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0043DA0C: lw          $v1, -0x5EC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5EC);
    // 0x0043DA10: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x0043DA14: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0043DA18: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0043DA1C: lw          $v1, -0x5F4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5F4);
    // 0x0043DA20: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0043DA24: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0043DA28: lwc1        $f20, 0xC($v0)
    ctx->f20.u32l = MEM_W(ctx->r2, 0XC);
    // 0x0043DA2C: lw          $v1, -0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, -0X8);
    // 0x0043DA30: lw          $s0, 0x8($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X8);
    // 0x0043DA34: beq         $v1, $zero, L_0043DA8C
    if (ctx->r3 == 0) {
        // 0x0043DA38: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_0043DA8C;
    }
    // 0x0043DA38: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0043DA3C: beq         $s0, $v0, L_0043DA88
    if (ctx->r16 == ctx->r2) {
        // 0x0043DA40: addiu       $s0, $s0, -0x3
        ctx->r16 = ADD32(ctx->r16, -0X3);
            goto L_0043DA88;
    }
    // 0x0043DA40: addiu       $s0, $s0, -0x3
    ctx->r16 = ADD32(ctx->r16, -0X3);
    // 0x0043DA44: sll         $v0, $s0, 1
    ctx->r2 = S32(ctx->r16 << 1);
    // 0x0043DA48: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x0043DA4C: mtc1        $v0, $f14
    ctx->f14.u32l = ctx->r2;
    // 0x0043DA50: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x0043DA54: jal         0x002119FC
    // 0x0043DA58: nop

    func_002119FC(rdram, ctx);
        goto after_9;
    // 0x0043DA58: nop

    after_9:
    // 0x0043DA5C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043DA60: lwc1        $f1, 0x3E0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X3E0);
    // 0x0043DA64: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0043DA68: sll         $v0, $s0, 4
    ctx->r2 = S32(ctx->r16 << 4);
    // 0x0043DA6C: subu        $v0, $v0, $s0
    ctx->r2 = SUB32(ctx->r2, ctx->r16);
    // 0x0043DA70: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0043DA74: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0043DA78: sub.s       $f1, $f20, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f20.fl - ctx->f1.fl;
    // 0x0043DA7C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0043DA80: j           L_00404A8C
    // 0x0043DA84: swc1        $f1, -0xAC($s1)
    MEM_W(-0XAC, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    entry_00404A8C(rdram, ctx);
    return;
    // 0x0043DA84: swc1        $f1, -0xAC($s1)
    MEM_W(-0XAC, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
L_0043DA88:
    // 0x0043DA88: swc1        $f20, -0xAC($s1)
    MEM_W(-0XAC, ctx->r17) = ctx->f20.u32l;
L_0043DA8C:
    // 0x0043DA8C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x0043DA90: lw          $a0, -0x14C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X14C);
    // 0x0043DA94: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0043DA98: addiu       $v0, $v0, -0x6A8
    ctx->r2 = ADD32(ctx->r2, -0X6A8);
    // 0x0043DA9C: beq         $a0, $zero, L_0043DAE4
    if (ctx->r4 == 0) {
        // 0x0043DAA0: sw          $zero, 0x0($v0)
        MEM_W(0X0, ctx->r2) = 0;
            goto L_0043DAE4;
    }
    // 0x0043DAA0: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x0043DAA4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043DAA8: lwc1        $f0, 0x3E4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3E4);
    // 0x0043DAAC: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    // 0x0043DAB0: sw          $zero, 0x1EC($a0)
    MEM_W(0X1EC, ctx->r4) = 0;
L_0043DAB4:
    // 0x0043DAB4: swc1        $f0, 0x1F0($a0)
    MEM_W(0X1F0, ctx->r4) = ctx->f0.u32l;
    // 0x0043DAB8: sw          $zero, 0x1F4($a0)
    MEM_W(0X1F4, ctx->r4) = 0;
    // 0x0043DABC: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x0043DAC0: lw          $v1, 0x144($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X144);
    // 0x0043DAC4: blez        $v1, L_0043DAD8
    if (SIGNED(ctx->r3) <= 0) {
        // 0x0043DAC8: sw          $v0, 0x1F8($a0)
        MEM_W(0X1F8, ctx->r4) = ctx->r2;
            goto L_0043DAD8;
    }
    // 0x0043DAC8: sw          $v0, 0x1F8($a0)
    MEM_W(0X1F8, ctx->r4) = ctx->r2;
    // 0x0043DACC: lw          $v0, -0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, -0X8);
    // 0x0043DAD0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0043DAD4: sw          $v0, -0x8($a1)
    MEM_W(-0X8, ctx->r5) = ctx->r2;
L_0043DAD8:
    // 0x0043DAD8: lw          $a0, 0x28C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X28C);
    // 0x0043DADC: bnel        $a0, $zero, L_0043DAB4
    if (ctx->r4 != 0) {
        // 0x0043DAE0: sw          $zero, 0x1EC($a0)
        MEM_W(0X1EC, ctx->r4) = 0;
            goto L_0043DAB4;
    }
    goto skip_2;
    // 0x0043DAE0: sw          $zero, 0x1EC($a0)
    MEM_W(0X1EC, ctx->r4) = 0;
    skip_2:
L_0043DAE4:
    // 0x0043DAE4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0043DAE8: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x0043DAEC: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x0043DAF0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0043DAF4: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x0043DAF8: addiu       $s0, $s0, 0x1F50
    ctx->r16 = ADD32(ctx->r16, 0X1F50);
    // 0x0043DAFC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0043DB00: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x0043DB04: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0043DB08: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x0043DB0C: jal         0x00246108
    // 0x0043DB10: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_10;
    // 0x0043DB10: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    after_10:
    // 0x0043DB14: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x0043DB18: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0043DB1C: ori         $v1, $v1, 0x7FFF
    ctx->r3 = ctx->r3 | 0X7FFF;
    // 0x0043DB20: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0043DB24: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x0043DB28: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x0043DB2C: addiu       $s0, $s0, -0x5EC
    ctx->r16 = ADD32(ctx->r16, -0X5EC);
    // 0x0043DB30: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0043DB34: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x0043DB38: bne         $v0, $s1, L_0043DB4C
    if (ctx->r2 != ctx->r17) {
        // 0x0043DB3C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0043DB4C;
    }
    // 0x0043DB3C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0043DB40: jal         0x00404FE0
    // 0x0043DB44: nop

    func_00404FE0(rdram, ctx);
        goto after_11;
    // 0x0043DB44: nop

    after_11:
    // 0x0043DB48: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_0043DB4C:
    // 0x0043DB4C: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x0043DB50: jal         0x004050E0
    // 0x0043DB54: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_004050E0(rdram, ctx);
        goto after_12;
    // 0x0043DB54: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_12:
    // 0x0043DB58: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x0043DB5C: bne         $v0, $s1, L_0043DB70
    if (ctx->r2 != ctx->r17) {
        // 0x0043DB60: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0043DB70;
    }
    // 0x0043DB60: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0043DB64: jal         0x00405288
    // 0x0043DB68: nop

    func_00405288(rdram, ctx);
        goto after_13;
    // 0x0043DB68: nop

    after_13:
    // 0x0043DB6C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_0043DB70:
    // 0x0043DB70: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x0043DB74: jal         0x004053C4
    // 0x0043DB78: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_004053C4(rdram, ctx);
        goto after_14;
    // 0x0043DB78: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_14:
    // 0x0043DB7C: lw          $v0, -0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, -0X8);
    // 0x0043DB80: beq         $v0, $zero, L_0043DC08
    if (ctx->r2 == 0) {
        // 0x0043DB84: nop
    
            goto L_0043DC08;
    }
    // 0x0043DB84: nop

    // 0x0043DB88: lw          $v0, -0xBC($s0)
    ctx->r2 = MEM_W(ctx->r16, -0XBC);
    // 0x0043DB8C: bne         $v0, $zero, L_0043DBF8
    if (ctx->r2 != 0) {
        // 0x0043DB90: nop
    
            goto L_0043DBF8;
    }
    // 0x0043DB90: nop

    // 0x0043DB94: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0043DB98: lw          $v0, -0x5EC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5EC);
    // 0x0043DB9C: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x0043DBA0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x0043DBA4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0043DBA8: lw          $v0, -0x5F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5F4);
    // 0x0043DBAC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0043DBB0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0043DBB4: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x0043DBB8: bne         $v0, $s3, L_0043DBF8
    if (ctx->r2 != ctx->r19) {
        // 0x0043DBBC: nop
    
            goto L_0043DBF8;
    }
    // 0x0043DBBC: nop

    // 0x0043DBC0: lbu         $v1, 0x0($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X0);
    // 0x0043DBC4: bne         $v1, $v0, L_0043DBF8
    if (ctx->r3 != ctx->r2) {
        // 0x0043DBC8: nop
    
            goto L_0043DBF8;
    }
    // 0x0043DBC8: nop

    // 0x0043DBCC: lw          $v0, -0xC4($s0)
    ctx->r2 = MEM_W(ctx->r16, -0XC4);
    // 0x0043DBD0: bne         $v0, $zero, L_0043DBF8
    if (ctx->r2 != 0) {
        // 0x0043DBD4: nop
    
            goto L_0043DBF8;
    }
    // 0x0043DBD4: nop

    // 0x0043DBD8: lwc1        $f1, -0xC($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, -0XC);
    // 0x0043DBDC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0043DBE0: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0043DBE4: nop

    // 0x0043DBE8: bc1f        L_0043DBF8
    if (!c1cs) {
        // 0x0043DBEC: nop
    
            goto L_0043DBF8;
    }
    // 0x0043DBEC: nop

    // 0x0043DBF0: sb          $v1, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r3;
    // 0x0043DBF4: sw          $s1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r17;
L_0043DBF8:
    // 0x0043DBF8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0043DBFC: lw          $v0, -0x5F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5F4);
    // 0x0043DC00: bne         $v0, $zero, L_0043DC20
    if (ctx->r2 != 0) {
        // 0x0043DC04: nop
    
            goto L_0043DC20;
    }
    // 0x0043DC04: nop

L_0043DC08:
    // 0x0043DC08: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x0043DC0C: addiu       $a0, $a0, -0x628
    ctx->r4 = ADD32(ctx->r4, -0X628);
    // 0x0043DC10: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x0043DC14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0043DC18: beql        $v1, $v0, L_0043DC20
    if (ctx->r3 == ctx->r2) {
        // 0x0043DC1C: sw          $zero, 0x4($a0)
        MEM_W(0X4, ctx->r4) = 0;
            goto L_0043DC20;
    }
    goto skip_3;
    // 0x0043DC1C: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    skip_3:
L_0043DC20:
    // 0x0043DC20: lw          $ra, 0xFC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XFC);
    // 0x0043DC24: lw          $s4, 0xF8($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XF8);
    // 0x0043DC28: lw          $s3, 0xF4($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XF4);
    // 0x0043DC2C: lw          $s2, 0xF0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XF0);
    // 0x0043DC30: lw          $s1, 0xEC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XEC);
    // 0x0043DC34: lw          $s0, 0xE8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XE8);
    // 0x0043DC38: ldc1        $f20, 0x100($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X100);
    // 0x0043DC3C: jr          $ra
    // 0x0043DC40: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
    return;
    // 0x0043DC40: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
;}
RECOMP_FUNC void func_0028ABE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028ABE0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0028ABE4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0028ABE8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0028ABEC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0028ABF0: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x0028ABF4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0028ABF8: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x0028ABFC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0028AC00: addu        $s1, $a3, $zero
    ctx->r17 = ADD32(ctx->r7, 0);
    // 0x0028AC04: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x0028AC08: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x0028AC0C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0028AC10: lw          $s0, 0x2E8($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X2E8);
    // 0x0028AC14: lw          $v0, 0x300($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X300);
    // 0x0028AC18: lw          $v1, 0x2E4($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X2E4);
    // 0x0028AC1C: beq         $v0, $zero, L_0028AC70
    if (ctx->r2 == 0) {
        // 0x0028AC20: addu        $s5, $s1, $zero
        ctx->r21 = ADD32(ctx->r17, 0);
            goto L_0028AC70;
    }
    // 0x0028AC20: addu        $s5, $s1, $zero
    ctx->r21 = ADD32(ctx->r17, 0);
    // 0x0028AC24: andi        $v0, $s1, 0x2
    ctx->r2 = ctx->r17 & 0X2;
    // 0x0028AC28: beq         $v0, $zero, L_0028AC70
    if (ctx->r2 == 0) {
        // 0x0028AC2C: nop
    
            goto L_0028AC70;
    }
    // 0x0028AC2C: nop

    // 0x0028AC30: beql        $s0, $zero, L_0028AC4C
    if (ctx->r16 == 0) {
        // 0x0028AC34: sw          $v1, 0x0($s3)
        MEM_W(0X0, ctx->r19) = ctx->r3;
            goto L_0028AC4C;
    }
    goto skip_0;
    // 0x0028AC34: sw          $v1, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r3;
    skip_0:
    // 0x0028AC38: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x0028AC3C: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x0028AC40: bnel        $v0, $zero, L_0028AD70
    if (ctx->r2 != 0) {
        // 0x0028AC44: sw          $s0, 0x0($s3)
        MEM_W(0X0, ctx->r19) = ctx->r16;
            goto L_0028AD70;
    }
    goto skip_1;
    // 0x0028AC44: sw          $s0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r16;
    skip_1:
    // 0x0028AC48: sw          $v1, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r3;
L_0028AC4C:
    // 0x0028AC4C: lw          $v0, 0x2E4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X2E4);
    // 0x0028AC50: addiu       $v1, $zero, -0x3
    ctx->r3 = ADD32(0, -0X3);
    // 0x0028AC54: sw          $zero, 0x300($s2)
    MEM_W(0X300, ctx->r18) = 0;
    // 0x0028AC58: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0028AC5C: and         $s1, $s1, $v1
    ctx->r17 = ctx->r17 & ctx->r3;
    // 0x0028AC60: bne         $v0, $zero, L_0028ADAC
    if (ctx->r2 != 0) {
        // 0x0028AC64: sw          $v0, 0x2E4($s2)
        MEM_W(0X2E4, ctx->r18) = ctx->r2;
            goto L_0028ADAC;
    }
    // 0x0028AC64: sw          $v0, 0x2E4($s2)
    MEM_W(0X2E4, ctx->r18) = ctx->r2;
    // 0x0028AC68: j           L_0028ADAC
    // 0x0028AC6C: sw          $zero, 0x2EC($s2)
    MEM_W(0X2EC, ctx->r18) = 0;
        goto L_0028ADAC;
    // 0x0028AC6C: sw          $zero, 0x2EC($s2)
    MEM_W(0X2EC, ctx->r18) = 0;
L_0028AC70:
    // 0x0028AC70: beq         $s0, $zero, L_0028ACB4
    if (ctx->r16 == 0) {
        // 0x0028AC74: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0028ACB4;
    }
    // 0x0028AC74: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0028AC78: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0028AC7C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0028AC80: lw          $v0, -0x4F60($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4F60);
    // 0x0028AC84: beq         $v1, $v0, L_0028ACB4
    if (ctx->r3 == ctx->r2) {
        // 0x0028AC88: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0028ACB4;
    }
    // 0x0028AC88: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0028AC8C: jal         0x0029A6E0
    // 0x0028AC90: nop

    func_0029A6E0(rdram, ctx);
        goto after_0;
    // 0x0028AC90: nop

    after_0:
    // 0x0028AC94: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x0028AC98: beq         $a0, $v0, L_0028ACB4
    if (ctx->r4 == ctx->r2) {
        // 0x0028AC9C: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0028ACB4;
    }
    // 0x0028AC9C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0028ACA0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0028ACA4: lw          $v0, -0x4F68($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4F68);
    // 0x0028ACA8: bne         $a0, $v0, L_0028ACB4
    if (ctx->r4 != ctx->r2) {
        // 0x0028ACAC: addu        $v1, $s0, $zero
        ctx->r3 = ADD32(ctx->r16, 0);
            goto L_0028ACB4;
    }
    // 0x0028ACAC: addu        $v1, $s0, $zero
    ctx->r3 = ADD32(ctx->r16, 0);
    // 0x0028ACB0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_0028ACB4:
    // 0x0028ACB4: beq         $v1, $zero, L_0028ADAC
    if (ctx->r3 == 0) {
        // 0x0028ACB8: nop
    
            goto L_0028ADAC;
    }
    // 0x0028ACB8: nop

    // 0x0028ACBC: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x0028ACC0: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x0028ACC4: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x0028ACC8: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x0028ACCC: beq         $v0, $zero, L_0028ADAC
    if (ctx->r2 == 0) {
        // 0x0028ACD0: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_0028ADAC;
    }
    // 0x0028ACD0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0028ACD4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028ACD8: addu        $at, $at, $v0
    gpr jr_addend_0028ACE0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0028ACDC: lw          $v0, -0x61B8($at)
    ctx->r2 = ADD32(ctx->r1, -0X61B8);
    // 0x0028ACE0: jr          $v0
    // 0x0028ACE4: nop

    switch (jr_addend_0028ACE0 >> 2) {
        case 0: goto L_0028ADAC; break;
        case 1: goto L_0028AD54; break;
        case 2: goto L_0028ACE8; break;
        case 3: goto L_0028ADAC; break;
        case 4: goto L_0028ADAC; break;
        case 5: goto L_0028AD54; break;
        case 6: goto L_0028AD54; break;
        default: switch_error(__func__, 0x0028ACE0, 0x800A9E48);
    }
    // 0x0028ACE4: nop

L_0028ACE8:
    // 0x0028ACE8: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0028ACEC: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x0028ACF0: beq         $v0, $zero, L_0028AD30
    if (ctx->r2 == 0) {
        // 0x0028ACF4: andi        $v0, $s1, 0x2
        ctx->r2 = ctx->r17 & 0X2;
            goto L_0028AD30;
    }
    // 0x0028ACF4: andi        $v0, $s1, 0x2
    ctx->r2 = ctx->r17 & 0X2;
    // 0x0028ACF8: beq         $v0, $zero, L_0028ADAC
    if (ctx->r2 == 0) {
        // 0x0028ACFC: addiu       $v1, $zero, -0x3
        ctx->r3 = ADD32(0, -0X3);
            goto L_0028ADAC;
    }
    // 0x0028ACFC: addiu       $v1, $zero, -0x3
    ctx->r3 = ADD32(0, -0X3);
    // 0x0028AD00: sw          $s0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r16;
    // 0x0028AD04: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0028AD08: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0028AD0C: beq         $v0, $zero, L_0028AD20
    if (ctx->r2 == 0) {
        // 0x0028AD10: and         $s1, $s1, $v1
        ctx->r17 = ctx->r17 & ctx->r3;
            goto L_0028AD20;
    }
    // 0x0028AD10: and         $s1, $s1, $v1
    ctx->r17 = ctx->r17 & ctx->r3;
    // 0x0028AD14: sw          $s0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r16;
    // 0x0028AD18: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    // 0x0028AD1C: and         $s1, $s1, $v0
    ctx->r17 = ctx->r17 & ctx->r2;
L_0028AD20:
    // 0x0028AD20: lw          $v0, 0x2E8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X2E8);
    // 0x0028AD24: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0028AD28: j           L_0028ADA4
    // 0x0028AD2C: sw          $v0, 0x2E8($s2)
    MEM_W(0X2E8, ctx->r18) = ctx->r2;
        goto L_0028ADA4;
    // 0x0028AD2C: sw          $v0, 0x2E8($s2)
    MEM_W(0X2E8, ctx->r18) = ctx->r2;
L_0028AD30:
    // 0x0028AD30: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0028AD34: bne         $s1, $v0, L_0028ADAC
    if (ctx->r17 != ctx->r2) {
        // 0x0028AD38: nop
    
            goto L_0028ADAC;
    }
    // 0x0028AD38: nop

    // 0x0028AD3C: sw          $s0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r16;
    // 0x0028AD40: sw          $s0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r16;
    // 0x0028AD44: lw          $v0, 0x2E8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X2E8);
    // 0x0028AD48: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0028AD4C: j           L_0028ADA0
    // 0x0028AD50: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
        goto L_0028ADA0;
    // 0x0028AD50: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
L_0028AD54:
    // 0x0028AD54: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x0028AD58: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x0028AD5C: beq         $v0, $zero, L_0028AD7C
    if (ctx->r2 == 0) {
        // 0x0028AD60: andi        $v0, $s1, 0x2
        ctx->r2 = ctx->r17 & 0X2;
            goto L_0028AD7C;
    }
    // 0x0028AD60: andi        $v0, $s1, 0x2
    ctx->r2 = ctx->r17 & 0X2;
    // 0x0028AD64: beq         $v0, $zero, L_0028ADAC
    if (ctx->r2 == 0) {
        // 0x0028AD68: nop
    
            goto L_0028ADAC;
    }
    // 0x0028AD68: nop

    // 0x0028AD6C: sw          $s0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r16;
L_0028AD70:
    // 0x0028AD70: addiu       $v0, $zero, -0x3
    ctx->r2 = ADD32(0, -0X3);
    // 0x0028AD74: j           L_0028ADAC
    // 0x0028AD78: and         $s1, $s1, $v0
    ctx->r17 = ctx->r17 & ctx->r2;
        goto L_0028ADAC;
    // 0x0028AD78: and         $s1, $s1, $v0
    ctx->r17 = ctx->r17 & ctx->r2;
L_0028AD7C:
    // 0x0028AD7C: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x0028AD80: beq         $v0, $zero, L_0028ADAC
    if (ctx->r2 == 0) {
        // 0x0028AD84: andi        $v0, $s1, 0x1
        ctx->r2 = ctx->r17 & 0X1;
            goto L_0028ADAC;
    }
    // 0x0028AD84: andi        $v0, $s1, 0x1
    ctx->r2 = ctx->r17 & 0X1;
    // 0x0028AD88: beq         $v0, $zero, L_0028ADAC
    if (ctx->r2 == 0) {
        // 0x0028AD8C: addiu       $v1, $zero, -0x2
        ctx->r3 = ADD32(0, -0X2);
            goto L_0028ADAC;
    }
    // 0x0028AD8C: addiu       $v1, $zero, -0x2
    ctx->r3 = ADD32(0, -0X2);
    // 0x0028AD90: sw          $s0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r16;
    // 0x0028AD94: lw          $v0, 0x2E8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X2E8);
    // 0x0028AD98: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0028AD9C: and         $s1, $s1, $v1
    ctx->r17 = ctx->r17 & ctx->r3;
L_0028ADA0:
    // 0x0028ADA0: sw          $v0, 0x2E8($s2)
    MEM_W(0X2E8, ctx->r18) = ctx->r2;
L_0028ADA4:
    // 0x0028ADA4: beql        $v0, $zero, L_0028ADAC
    if (ctx->r2 == 0) {
        // 0x0028ADA8: sw          $zero, 0x2F0($s2)
        MEM_W(0X2F0, ctx->r18) = 0;
            goto L_0028ADAC;
    }
    goto skip_2;
    // 0x0028ADA8: sw          $zero, 0x2F0($s2)
    MEM_W(0X2F0, ctx->r18) = 0;
    skip_2:
L_0028ADAC:
    // 0x0028ADAC: beq         $s1, $s5, L_0028ADC8
    if (ctx->r17 == ctx->r21) {
        // 0x0028ADB0: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0028ADC8;
    }
    // 0x0028ADB0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0028ADB4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0028ADB8: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    // 0x0028ADBC: jal         0x0028ABE0
    // 0x0028ADC0: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    func_0028ABE0(rdram, ctx);
        goto after_1;
    // 0x0028ADC0: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    after_1:
    // 0x0028ADC4: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
L_0028ADC8:
    // 0x0028ADC8: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x0028ADCC: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x0028ADD0: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0028ADD4: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0028ADD8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0028ADDC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0028ADE0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0028ADE4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0028ADE8: jr          $ra
    // 0x0028ADEC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0028ADEC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0026342C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026342C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00263430: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00263434: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00263438: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0026343C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00263440: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00263444: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x00263448: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0026344C: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x00263450: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x00263454: beq         $v0, $zero, L_0026347C
    if (ctx->r2 == 0) {
        // 0x00263458: addiu       $s1, $v1, 0x14
        ctx->r17 = ADD32(ctx->r3, 0X14);
            goto L_0026347C;
    }
    // 0x00263458: addiu       $s1, $v1, 0x14
    ctx->r17 = ADD32(ctx->r3, 0X14);
    // 0x0026345C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00263460: addiu       $v1, $v1, -0x550F
    ctx->r3 = ADD32(ctx->r3, -0X550F);
    // 0x00263464: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00263468: beq         $v0, $zero, L_00263504
    if (ctx->r2 == 0) {
        // 0x0026346C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00263504;
    }
    // 0x0026346C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00263470: lbu         $v1, 0x1($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X1);
    // 0x00263474: bne         $v1, $v0, L_00263504
    if (ctx->r3 != ctx->r2) {
        // 0x00263478: nop
    
            goto L_00263504;
    }
    // 0x00263478: nop

L_0026347C:
    // 0x0026347C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00263480: lwc1        $f12, 0x7BC8($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X7BC8);
    // 0x00263484: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00263488: lwc1        $f14, 0x7BCC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X7BCC);
    // 0x0026348C: jal         0x002119FC
    // 0x00263490: nop

    func_002119FC(rdram, ctx);
        goto after_0;
    // 0x00263490: nop

    after_0:
    // 0x00263494: swc1        $f0, 0x64($s2)
    MEM_W(0X64, ctx->r18) = ctx->f0.u32l;
    // 0x00263498: sw          $zero, 0x10C($s2)
    MEM_W(0X10C, ctx->r18) = 0;
    // 0x0026349C: lh          $v0, 0x8($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X8);
    // 0x002634A0: sw          $v0, 0x110($s2)
    MEM_W(0X110, ctx->r18) = ctx->r2;
    // 0x002634A4: lhu         $v1, 0xB8($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XB8);
    // 0x002634A8: addiu       $v0, $zero, 0x644
    ctx->r2 = ADD32(0, 0X644);
    // 0x002634AC: beq         $v1, $v0, L_002634C4
    if (ctx->r3 == ctx->r2) {
        // 0x002634B0: nop
    
            goto L_002634C4;
    }
    // 0x002634B0: nop

    // 0x002634B4: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x002634B8: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x002634BC: beq         $v0, $zero, L_002634D8
    if (ctx->r2 == 0) {
        // 0x002634C0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_002634D8;
    }
    // 0x002634C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_002634C4:
    // 0x002634C4: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x002634C8: addiu       $v1, $zero, -0x2001
    ctx->r3 = ADD32(0, -0X2001);
    // 0x002634CC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002634D0: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x002634D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_002634D8:
    // 0x002634D8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x002634DC: jal         0x00243414
    // 0x002634E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x002634E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x002634E4: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x002634E8: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x002634EC: beq         $v0, $zero, L_00263514
    if (ctx->r2 == 0) {
        // 0x002634F0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00263514;
    }
    // 0x002634F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002634F4: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x002634F8: lbu         $v1, -0x550E($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X550E);
    // 0x002634FC: beq         $v1, $v0, L_00263514
    if (ctx->r3 == ctx->r2) {
        // 0x00263500: nop
    
            goto L_00263514;
    }
    // 0x00263500: nop

L_00263504:
    // 0x00263504: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x00263508: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x0026350C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00263510: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
L_00263514:
    // 0x00263514: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00263518: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0026351C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00263520: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00263524: jr          $ra
    // 0x00263528: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00263528: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00224180(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00224180: lw          $v0, 0x74($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X74);
    // 0x00224184: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00224188: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x0022418C: blez        $a2, L_002241B8
    if (SIGNED(ctx->r6) <= 0) {
        // 0x00224190: addiu       $a0, $v0, 0x8
        ctx->r4 = ADD32(ctx->r2, 0X8);
            goto L_002241B8;
    }
    // 0x00224190: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x00224194: andi        $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 & 0XFFFF;
L_00224198:
    // 0x00224198: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x0022419C: bnel        $v0, $a1, L_002241AC
    if (ctx->r2 != ctx->r5) {
        // 0x002241A0: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_002241AC;
    }
    goto skip_0;
    // 0x002241A0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_0:
    // 0x002241A4: jr          $ra
    // 0x002241A8: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    return;
    // 0x002241A8: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_002241AC:
    // 0x002241AC: slt         $v0, $v1, $a2
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x002241B0: bne         $v0, $zero, L_00224198
    if (ctx->r2 != 0) {
        // 0x002241B4: addiu       $a0, $a0, 0x2
        ctx->r4 = ADD32(ctx->r4, 0X2);
            goto L_00224198;
    }
    // 0x002241B4: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
L_002241B8:
    // 0x002241B8: jr          $ra
    // 0x002241BC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x002241BC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
;}
RECOMP_FUNC void func_002024E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002024E0: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x002024E4: addiu       $a1, $a1, 0x2F
    ctx->r5 = ADD32(ctx->r5, 0X2F);
    // 0x002024E8: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x002024EC: beq         $v1, $zero, L_002025EC
    if (ctx->r3 == 0) {
        // 0x002024F0: and         $a1, $a1, $v0
        ctx->r5 = ctx->r5 & ctx->r2;
            goto L_002025EC;
    }
    // 0x002024F0: and         $a1, $a1, $v0
    ctx->r5 = ctx->r5 & ctx->r2;
L_002024F4:
    // 0x002024F4: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x002024F8: sltu        $v0, $v0, $a1
    ctx->r2 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x002024FC: bne         $v0, $zero, L_002025E0
    if (ctx->r2 != 0) {
        // 0x00202500: nop
    
            goto L_002025E0;
    }
    // 0x00202500: nop

    // 0x00202504: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
    // 0x00202508: addu        $a2, $v1, $v0
    ctx->r6 = ADD32(ctx->r3, ctx->r2);
    // 0x0020250C: sw          $a1, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->r5;
    // 0x00202510: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x00202514: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x00202518: beq         $v0, $zero, L_00202550
    if (ctx->r2 == 0) {
        // 0x0020251C: sw          $v0, 0x14($a2)
        MEM_W(0X14, ctx->r6) = ctx->r2;
            goto L_00202550;
    }
    // 0x0020251C: sw          $v0, 0x14($a2)
    MEM_W(0X14, ctx->r6) = ctx->r2;
    // 0x00202520: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
    // 0x00202524: lw          $a1, 0x4($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X4);
    // 0x00202528: sw          $a1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r5;
    // 0x0020252C: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x00202530: bnel        $v0, $zero, L_00202538
    if (ctx->r2 != 0) {
        // 0x00202534: sw          $a2, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r6;
            goto L_00202538;
    }
    goto skip_0;
    // 0x00202534: sw          $a2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r6;
    skip_0:
L_00202538:
    // 0x00202538: sw          $a2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r6;
    // 0x0020253C: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x00202540: beql        $v0, $v1, L_00202558
    if (ctx->r2 == ctx->r3) {
        // 0x00202544: sw          $a2, 0xC($a0)
        MEM_W(0XC, ctx->r4) = ctx->r6;
            goto L_00202558;
    }
    goto skip_1;
    // 0x00202544: sw          $a2, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r6;
    skip_1:
    // 0x00202548: j           L_00202558
    // 0x0020254C: nop

        goto L_00202558;
    // 0x0020254C: nop

L_00202550:
    // 0x00202550: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x00202554: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
L_00202558:
    // 0x00202558: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x0020255C: beq         $a1, $zero, L_0020256C
    if (ctx->r5 == 0) {
        // 0x00202560: sw          $zero, 0x14($v1)
        MEM_W(0X14, ctx->r3) = 0;
            goto L_0020256C;
    }
    // 0x00202560: sw          $zero, 0x14($v1)
    MEM_W(0X14, ctx->r3) = 0;
    // 0x00202564: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x00202568: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
L_0020256C:
    // 0x0020256C: lw          $a1, 0x4($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X4);
    // 0x00202570: beq         $a1, $zero, L_00202580
    if (ctx->r5 == 0) {
        // 0x00202574: nop
    
            goto L_00202580;
    }
    // 0x00202574: nop

    // 0x00202578: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0020257C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
L_00202580:
    // 0x00202580: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00202584: bne         $v0, $v1, L_00202594
    if (ctx->r2 != ctx->r3) {
        // 0x00202588: nop
    
            goto L_00202594;
    }
    // 0x00202588: nop

    // 0x0020258C: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x00202590: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
L_00202594:
    // 0x00202594: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x00202598: bnel        $v0, $v1, L_002025B8
    if (ctx->r2 != ctx->r3) {
        // 0x0020259C: sw          $zero, 0x0($v1)
        MEM_W(0X0, ctx->r3) = 0;
            goto L_002025B8;
    }
    goto skip_2;
    // 0x0020259C: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    skip_2:
    // 0x002025A0: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x002025A4: bnel        $v0, $zero, L_002025B4
    if (ctx->r2 != 0) {
        // 0x002025A8: sw          $v0, 0xC($a0)
        MEM_W(0XC, ctx->r4) = ctx->r2;
            goto L_002025B4;
    }
    goto skip_3;
    // 0x002025A8: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
    skip_3:
    // 0x002025AC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x002025B0: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
L_002025B4:
    // 0x002025B4: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
L_002025B8:
    // 0x002025B8: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x002025BC: sw          $v1, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r3;
    // 0x002025C0: lw          $a0, 0xC($v1)
    ctx->r4 = MEM_W(ctx->r3, 0XC);
    // 0x002025C4: sw          $a0, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r4;
    // 0x002025C8: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    // 0x002025CC: bnel        $v0, $zero, L_002025D4
    if (ctx->r2 != 0) {
        // 0x002025D0: sw          $a2, 0x8($a0)
        MEM_W(0X8, ctx->r4) = ctx->r6;
            goto L_002025D4;
    }
    goto skip_4;
    // 0x002025D0: sw          $a2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r6;
    skip_4:
L_002025D4:
    // 0x002025D4: sw          $a2, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r6;
    // 0x002025D8: jr          $ra
    // 0x002025DC: addiu       $v0, $a2, 0x20
    ctx->r2 = ADD32(ctx->r6, 0X20);
    return;
    // 0x002025DC: addiu       $v0, $a2, 0x20
    ctx->r2 = ADD32(ctx->r6, 0X20);
L_002025E0:
    // 0x002025E0: lw          $v1, 0x4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4);
    // 0x002025E4: bne         $v1, $zero, L_002024F4
    if (ctx->r3 != 0) {
        // 0x002025E8: nop
    
            goto L_002024F4;
    }
    // 0x002025E8: nop

L_002025EC:
    // 0x002025EC: jr          $ra
    // 0x002025F0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x002025F0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_002855A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002855A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002855AC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002855B0: lw          $v0, 0xB4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB4);
    // 0x002855B4: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x002855B8: beq         $v0, $zero, L_002855DC
    if (ctx->r2 == 0) {
        // 0x002855BC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002855DC;
    }
    // 0x002855BC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x002855C0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002855C4: lw          $v0, 0x6CF8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6CF8);
    // 0x002855C8: beq         $v0, $zero, L_002855DC
    if (ctx->r2 == 0) {
        // 0x002855CC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002855DC;
    }
    // 0x002855CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002855D0: jal         0x00275624
    // 0x002855D4: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    func_00275624(rdram, ctx);
        goto after_0;
    // 0x002855D4: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    after_0:
    // 0x002855D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_002855DC:
    // 0x002855DC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002855E0: jr          $ra
    // 0x002855E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002855E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0024E700(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0024E700: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x0024E704: bne         $a1, $v0, L_0024E720
    if (ctx->r5 != ctx->r2) {
            // 0x0024E708: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    func_0024E720(rdram, ctx);
    return;
    }
    // 0x0024E708: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x0024E70C: lb          $v0, 0x987($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X987);
    // 0x0024E710: beq         $v0, $zero, L_0024E720
    if (ctx->r2 == 0) {
            // 0x0024E714: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    func_0024E720(rdram, ctx);
    return;
    }
    // 0x0024E714: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x0024E718: jr          $ra
    // 0x0024E71C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x0024E71C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
;}
RECOMP_FUNC void func_00422C34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00422C34: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00422C38: lw          $v1, 0x9C0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X9C0);
    // 0x00422C3C: sltiu       $v0, $v1, 0x10
    ctx->r2 = ctx->r3 < 0X10 ? 1 : 0;
    // 0x00422C40: beq         $v0, $zero, L_00422C5C
    if (ctx->r2 == 0) {
        // 0x00422C44: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00422C5C;
    }
    // 0x00422C44: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00422C48: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00422C4C: addu        $at, $at, $v0
    gpr jr_addend_00422C54 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00422C50: lw          $v0, 0x15B0($at)
    ctx->r2 = ADD32(ctx->r1, 0X15B0);
    // 0x00422C54: jr          $v0
    // 0x00422C58: nop

    switch (jr_addend_00422C54 >> 2) {
        case 0: goto L_00422C5C; break;
        case 1: goto L_00422C6C; break;
        case 2: goto L_00422C7C; break;
        case 3: goto L_00422C8C; break;
        case 4: goto L_00422C9C; break;
        case 5: goto L_00422CAC; break;
        case 6: goto L_00422CBC; break;
        case 7: goto L_00422CCC; break;
        case 8: goto L_00422CDC; break;
        case 9: goto L_00422CEC; break;
        case 10: goto L_00422CFC; break;
        case 11: goto L_00422D0C; break;
        case 12: goto L_00422D1C; break;
        case 13: goto L_00422D2C; break;
        case 14: goto L_00422D3C; break;
        case 15: goto L_00422D4C; break;
        default: switch_error(__func__, 0x00422C54, 0x800C15B0);
    }
    // 0x00422C58: nop

L_00422C5C:
    // 0x00422C5C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422C60: addiu       $v0, $v0, 0x4BF4
    ctx->r2 = ADD32(ctx->r2, 0X4BF4);
    // 0x00422C64: j           L_00422D58
    // 0x00422C68: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422D58;
    // 0x00422C68: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422C6C:
    // 0x00422C6C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422C70: addiu       $v0, $v0, 0x4C28
    ctx->r2 = ADD32(ctx->r2, 0X4C28);
    // 0x00422C74: j           L_00422D58
    // 0x00422C78: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422D58;
    // 0x00422C78: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422C7C:
    // 0x00422C7C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422C80: addiu       $v0, $v0, 0x4C90
    ctx->r2 = ADD32(ctx->r2, 0X4C90);
    // 0x00422C84: j           L_00422D58
    // 0x00422C88: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422D58;
    // 0x00422C88: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422C8C:
    // 0x00422C8C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422C90: addiu       $v0, $v0, 0x4D64
    ctx->r2 = ADD32(ctx->r2, 0X4D64);
    // 0x00422C94: j           L_00422D58
    // 0x00422C98: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422D58;
    // 0x00422C98: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422C9C:
    // 0x00422C9C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422CA0: addiu       $v0, $v0, 0x4CFC
    ctx->r2 = ADD32(ctx->r2, 0X4CFC);
    // 0x00422CA4: j           L_00422D58
    // 0x00422CA8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422D58;
    // 0x00422CA8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422CAC:
    // 0x00422CAC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422CB0: addiu       $v0, $v0, 0x4DC8
    ctx->r2 = ADD32(ctx->r2, 0X4DC8);
    // 0x00422CB4: j           L_00422D58
    // 0x00422CB8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422D58;
    // 0x00422CB8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422CBC:
    // 0x00422CBC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422CC0: addiu       $v0, $v0, 0x4E2C
    ctx->r2 = ADD32(ctx->r2, 0X4E2C);
    // 0x00422CC4: j           L_00422D58
    // 0x00422CC8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422D58;
    // 0x00422CC8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422CCC:
    // 0x00422CCC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422CD0: addiu       $v0, $v0, 0x4E64
    ctx->r2 = ADD32(ctx->r2, 0X4E64);
    // 0x00422CD4: j           L_00422D58
    // 0x00422CD8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422D58;
    // 0x00422CD8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422CDC:
    // 0x00422CDC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422CE0: addiu       $v0, $v0, 0x4E88
    ctx->r2 = ADD32(ctx->r2, 0X4E88);
    // 0x00422CE4: j           L_00422D58
    // 0x00422CE8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422D58;
    // 0x00422CE8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422CEC:
    // 0x00422CEC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422CF0: addiu       $v0, $v0, 0x4ED4
    ctx->r2 = ADD32(ctx->r2, 0X4ED4);
    // 0x00422CF4: j           L_00422D58
    // 0x00422CF8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422D58;
    // 0x00422CF8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422CFC:
    // 0x00422CFC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422D00: addiu       $v0, $v0, 0x4F14
    ctx->r2 = ADD32(ctx->r2, 0X4F14);
    // 0x00422D04: j           L_00422D58
    // 0x00422D08: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422D58;
    // 0x00422D08: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422D0C:
    // 0x00422D0C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422D10: addiu       $v0, $v0, 0x4F5C
    ctx->r2 = ADD32(ctx->r2, 0X4F5C);
    // 0x00422D14: j           L_00422D58
    // 0x00422D18: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422D58;
    // 0x00422D18: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422D1C:
    // 0x00422D1C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422D20: addiu       $v0, $v0, 0x4F90
    ctx->r2 = ADD32(ctx->r2, 0X4F90);
    // 0x00422D24: j           L_00422D58
    // 0x00422D28: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422D58;
    // 0x00422D28: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422D2C:
    // 0x00422D2C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422D30: addiu       $v0, $v0, 0x4FCC
    ctx->r2 = ADD32(ctx->r2, 0X4FCC);
    // 0x00422D34: j           L_00422D58
    // 0x00422D38: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422D58;
    // 0x00422D38: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422D3C:
    // 0x00422D3C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422D40: addiu       $v0, $v0, 0x5008
    ctx->r2 = ADD32(ctx->r2, 0X5008);
    // 0x00422D44: j           L_00422D58
    // 0x00422D48: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422D58;
    // 0x00422D48: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422D4C:
    // 0x00422D4C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422D50: addiu       $v0, $v0, 0x5054
    ctx->r2 = ADD32(ctx->r2, 0X5054);
    // 0x00422D54: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422D58:
    // 0x00422D58: jr          $ra
    // 0x00422D5C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00422D5C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_002638A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002638A0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x002638A4: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
    // 0x002638A8: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x002638AC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x002638B0: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x002638B4: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x002638B8: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x002638BC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x002638C0: lw          $v1, 0x50($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X50);
    // 0x002638C4: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x002638C8: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x002638CC: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x002638D0: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x002638D4: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x002638D8: lwc1        $f0, 0x50($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X50);
    // 0x002638DC: addiu       $v0, $s0, 0x10C
    ctx->r2 = ADD32(ctx->r16, 0X10C);
    // 0x002638E0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x002638E4: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x002638E8: lw          $t0, 0x1C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X1C);
    // 0x002638EC: lw          $t1, 0x20($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X20);
    // 0x002638F0: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x002638F4: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x002638F8: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x002638FC: lw          $v1, 0x5C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X5C);
    // 0x00263900: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x00263904: lw          $t1, 0x64($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X64);
    // 0x00263908: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x0026390C: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x00263910: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x00263914: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x00263918: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x0026391C: lw          $a3, 0x70($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X70);
    // 0x00263920: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x00263924: addiu       $a0, $a0, -0x5460
    ctx->r4 = ADD32(ctx->r4, -0X5460);
    // 0x00263928: jal         0x00228108
    // 0x0026392C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_00228108(rdram, ctx);
        goto after_0;
    // 0x0026392C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x00263930: beq         $v0, $zero, L_00263944
    if (ctx->r2 == 0) {
        // 0x00263934: nop
    
            goto L_00263944;
    }
    // 0x00263934: nop

    // 0x00263938: lw          $v0, 0x110($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X110);
    // 0x0026393C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00263940: sw          $v0, 0x110($s0)
    MEM_W(0X110, ctx->r16) = ctx->r2;
L_00263944:
    // 0x00263944: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x00263948: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x0026394C: jr          $ra
    // 0x00263950: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x00263950: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_0041C764(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041C764: lw          $v0, 0x1C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1C);
    // 0x0041C768: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0041C76C: addiu       $v1, $v1, -0x54E8
    ctx->r3 = ADD32(ctx->r3, -0X54E8);
    // 0x0041C770: beq         $v0, $zero, L_0041C77C
    if (ctx->r2 == 0) {
        // 0x0041C774: nop
    
            goto L_0041C77C;
    }
    // 0x0041C774: nop

    // 0x0041C778: lw          $v1, 0x518($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X518);
L_0041C77C:
    // 0x0041C77C: lbu         $v0, 0x31($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X31);
    // 0x0041C780: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x0041C784: bnel        $v0, $a0, L_0041C790
    if (ctx->r2 != ctx->r4) {
        // 0x0041C788: sb          $a0, 0x31($v1)
        MEM_B(0X31, ctx->r3) = ctx->r4;
            goto L_0041C790;
    }
    goto skip_0;
    // 0x0041C788: sb          $a0, 0x31($v1)
    MEM_B(0X31, ctx->r3) = ctx->r4;
    skip_0:
    // 0x0041C78C: sb          $zero, 0x31($v1)
    MEM_B(0X31, ctx->r3) = 0;
L_0041C790:
    // 0x0041C790: jr          $ra
    // 0x0041C794: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041C794: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0024B3E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0024B3E4: addiu       $sp, $sp, -0x490
    ctx->r29 = ADD32(ctx->r29, -0X490);
    // 0x0024B3E8: sw          $s3, 0x46C($sp)
    MEM_W(0X46C, ctx->r29) = ctx->r19;
    // 0x0024B3EC: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0024B3F0: sw          $ra, 0x480($sp)
    MEM_W(0X480, ctx->r29) = ctx->r31;
    // 0x0024B3F4: sw          $s7, 0x47C($sp)
    MEM_W(0X47C, ctx->r29) = ctx->r23;
    // 0x0024B3F8: sw          $s6, 0x478($sp)
    MEM_W(0X478, ctx->r29) = ctx->r22;
    // 0x0024B3FC: sw          $s5, 0x474($sp)
    MEM_W(0X474, ctx->r29) = ctx->r21;
    // 0x0024B400: sw          $s4, 0x470($sp)
    MEM_W(0X470, ctx->r29) = ctx->r20;
    // 0x0024B404: sw          $s2, 0x468($sp)
    MEM_W(0X468, ctx->r29) = ctx->r18;
    // 0x0024B408: sw          $s1, 0x464($sp)
    MEM_W(0X464, ctx->r29) = ctx->r17;
    // 0x0024B40C: sw          $s0, 0x460($sp)
    MEM_W(0X460, ctx->r29) = ctx->r16;
    // 0x0024B410: sdc1        $f20, 0x488($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X488, ctx->r29);
    // 0x0024B414: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x0024B418: beq         $v0, $zero, L_0024B570
    if (ctx->r2 == 0) {
        // 0x0024B41C: addu        $s7, $a2, $zero
        ctx->r23 = ADD32(ctx->r6, 0);
            goto L_0024B570;
    }
    // 0x0024B41C: addu        $s7, $a2, $zero
    ctx->r23 = ADD32(ctx->r6, 0);
    // 0x0024B420: addiu       $s5, $sp, 0x70
    ctx->r21 = ADD32(ctx->r29, 0X70);
    // 0x0024B424: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x0024B428: lw          $v0, 0x18($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X18);
    // 0x0024B42C: blez        $v0, L_0024B55C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0024B430: addu        $s6, $s2, $zero
        ctx->r22 = ADD32(ctx->r18, 0);
            goto L_0024B55C;
    }
    // 0x0024B430: addu        $s6, $s2, $zero
    ctx->r22 = ADD32(ctx->r18, 0);
    // 0x0024B434: addiu       $s4, $zero, 0x1C
    ctx->r20 = ADD32(0, 0X1C);
    // 0x0024B438: addiu       $s1, $sp, 0x88
    ctx->r17 = ADD32(ctx->r29, 0X88);
L_0024B43C:
    // 0x0024B43C: lw          $v0, 0x37C($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X37C);
    // 0x0024B440: bne         $s2, $v0, L_0024B464
    if (ctx->r18 != ctx->r2) {
        // 0x0024B444: addu        $s0, $s3, $s4
        ctx->r16 = ADD32(ctx->r19, ctx->r20);
            goto L_0024B464;
    }
    // 0x0024B444: addu        $s0, $s3, $s4
    ctx->r16 = ADD32(ctx->r19, ctx->r20);
    // 0x0024B448: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024B44C: lwc1        $f1, -0x1D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X1D28);
    // 0x0024B450: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024B454: lwc1        $f0, 0x6C2C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6C2C);
    // 0x0024B458: mul.s       $f20, $f1, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0024B45C: j           L_0024B488
    // 0x0024B460: nop

        goto L_0024B488;
    // 0x0024B460: nop

L_0024B464:
    // 0x0024B464: lwc1        $f12, 0x10($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X10);
    // 0x0024B468: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x0024B46C: lui         $a2, 0x3EB3
    ctx->r6 = S32(0X3EB3 << 16);
    // 0x0024B470: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x0024B474: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024B478: lwc1        $f20, -0x1D28($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X1D28);
    // 0x0024B47C: jal         0x00211774
    // 0x0024B480: nop

    func_00211774(rdram, ctx);
        goto after_0;
    // 0x0024B480: nop

    after_0:
    // 0x0024B484: swc1        $f0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f0.u32l;
L_0024B488:
    // 0x0024B488: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024B48C: lwc1        $f1, -0x1D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X1D28);
    // 0x0024B490: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024B494: lwc1        $f0, 0x6C30($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6C30);
    // 0x0024B498: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0024B49C: lwc1        $f12, 0x14($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X14);
    // 0x0024B4A0: mfc1        $a2, $f1
    ctx->r6 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x0024B4A4: jal         0x00211774
    // 0x0024B4A8: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    func_00211774(rdram, ctx);
        goto after_1;
    // 0x0024B4A8: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    after_1:
    // 0x0024B4AC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024B4B0: lwc1        $f1, 0x6C34($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6C34);
    // 0x0024B4B4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0024B4B8: swc1        $f0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f0.u32l;
    // 0x0024B4BC: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x0024B4C0: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x0024B4C4: jal         0x0020F79C
    // 0x0024B4C8: swc1        $f1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    func_0020F79C(rdram, ctx);
        goto after_2;
    // 0x0024B4C8: swc1        $f1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    after_2:
    // 0x0024B4CC: lwc1        $f1, 0xC($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0XC);
    // 0x0024B4D0: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x0024B4D4: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0024B4D8: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x0024B4DC: mfc1        $a1, $f1
    ctx->r5 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x0024B4E0: jal         0x00210790
    // 0x0024B4E4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_00210790(rdram, ctx);
        goto after_3;
    // 0x0024B4E4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_3:
    // 0x0024B4E8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0024B4EC: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x0024B4F0: jal         0x0020F85C
    // 0x0024B4F4: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    func_0020F85C(rdram, ctx);
        goto after_4;
    // 0x0024B4F4: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    after_4:
    // 0x0024B4F8: addiu       $s4, $s4, 0x18
    ctx->r20 = ADD32(ctx->r20, 0X18);
    // 0x0024B4FC: sw          $s2, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r18;
    // 0x0024B500: lw          $v1, 0x50($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X50);
    // 0x0024B504: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x0024B508: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x0024B50C: sw          $v1, -0x14($s1)
    MEM_W(-0X14, ctx->r17) = ctx->r3;
    // 0x0024B510: sw          $t0, -0x10($s1)
    MEM_W(-0X10, ctx->r17) = ctx->r8;
    // 0x0024B514: sw          $t1, -0xC($s1)
    MEM_W(-0XC, ctx->r17) = ctx->r9;
    // 0x0024B518: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0024B51C: addiu       $s5, $s5, 0x1C
    ctx->r21 = ADD32(ctx->r21, 0X1C);
    // 0x0024B520: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0024B524: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024B528: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0024B52C: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x0024B530: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024B534: lwc1        $f0, 0x6C38($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6C38);
    // 0x0024B538: lhu         $v0, 0x6($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X6);
    // 0x0024B53C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x0024B540: sw          $zero, -0x4($s1)
    MEM_W(-0X4, ctx->r17) = 0;
    // 0x0024B544: swc1        $f0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f0.u32l;
    // 0x0024B548: sw          $v0, -0x8($s1)
    MEM_W(-0X8, ctx->r17) = ctx->r2;
    // 0x0024B54C: lw          $v0, 0x18($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X18);
    // 0x0024B550: slt         $v0, $s2, $v0
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0024B554: bne         $v0, $zero, L_0024B43C
    if (ctx->r2 != 0) {
        // 0x0024B558: addiu       $s1, $s1, 0x1C
        ctx->r17 = ADD32(ctx->r17, 0X1C);
            goto L_0024B43C;
    }
    // 0x0024B558: addiu       $s1, $s1, 0x1C
    ctx->r17 = ADD32(ctx->r17, 0X1C);
L_0024B55C:
    // 0x0024B55C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0024B560: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x0024B564: addu        $a2, $s6, $zero
    ctx->r6 = ADD32(ctx->r22, 0);
    // 0x0024B568: jal         0x0024AF68
    // 0x0024B56C: addu        $a3, $s7, $zero
    ctx->r7 = ADD32(ctx->r23, 0);
    func_0024AF68(rdram, ctx);
        goto after_5;
    // 0x0024B56C: addu        $a3, $s7, $zero
    ctx->r7 = ADD32(ctx->r23, 0);
    after_5:
L_0024B570:
    // 0x0024B570: lw          $ra, 0x480($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X480);
    // 0x0024B574: lw          $s7, 0x47C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X47C);
    // 0x0024B578: lw          $s6, 0x478($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X478);
    // 0x0024B57C: lw          $s5, 0x474($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X474);
    // 0x0024B580: lw          $s4, 0x470($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X470);
    // 0x0024B584: lw          $s3, 0x46C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X46C);
    // 0x0024B588: lw          $s2, 0x468($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X468);
    // 0x0024B58C: lw          $s1, 0x464($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X464);
    // 0x0024B590: lw          $s0, 0x460($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X460);
    // 0x0024B594: ldc1        $f20, 0x488($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X488);
    // 0x0024B598: jr          $ra
    // 0x0024B59C: addiu       $sp, $sp, 0x490
    ctx->r29 = ADD32(ctx->r29, 0X490);
    return;
    // 0x0024B59C: addiu       $sp, $sp, 0x490
    ctx->r29 = ADD32(ctx->r29, 0X490);
;}
RECOMP_FUNC void func_004143DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004143DC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x004143E0: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x004143E4: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x004143E8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x004143EC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x004143F0: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x004143F4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x004143F8: addiu       $a0, $a0, -0x5378
    ctx->r4 = ADD32(ctx->r4, -0X5378);
    // 0x004143FC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x00414400: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00414404: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x00414408: bne         $v1, $v0, L_00414424
    if (ctx->r3 != ctx->r2) {
        // 0x0041440C: addu        $s1, $a3, $zero
        ctx->r17 = ADD32(ctx->r7, 0);
            goto L_00414424;
    }
    // 0x0041440C: addu        $s1, $a3, $zero
    ctx->r17 = ADD32(ctx->r7, 0);
    // 0x00414410: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x00414414: lui         $v1, 0x4000
    ctx->r3 = S32(0X4000 << 16);
    // 0x00414418: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0041441C: bne         $v0, $zero, L_00414450
    if (ctx->r2 != 0) {
        // 0x00414420: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00414450;
    }
    // 0x00414420: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00414424:
    // 0x00414424: lbu         $v0, -0x197($a0)
    ctx->r2 = MEM_BU(ctx->r4, -0X197);
    // 0x00414428: beq         $v0, $zero, L_00414528
    if (ctx->r2 == 0) {
        // 0x0041442C: nop
    
            goto L_00414528;
    }
    // 0x0041442C: nop

    // 0x00414430: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x00414434: bgez        $v0, L_00414528
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00414438: nop
    
            goto L_00414528;
    }
    // 0x00414438: nop

    // 0x0041443C: jal         0x00266B80
    // 0x00414440: nop

    func_00266B80(rdram, ctx);
        goto after_0;
    // 0x00414440: nop

    after_0:
    // 0x00414444: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x00414448: bne         $v0, $v1, L_00414528
    if (ctx->r2 != ctx->r3) {
        // 0x0041444C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00414528;
    }
    // 0x0041444C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00414450:
    // 0x00414450: sw          $v0, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r2;
    // 0x00414454: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00414458: lw          $v0, 0x1BD0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BD0);
    // 0x0041445C: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x00414460: beq         $v0, $v1, L_00414470
    if (ctx->r2 == ctx->r3) {
        // 0x00414464: nop
    
            goto L_00414470;
    }
    // 0x00414464: nop

    // 0x00414468: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041446C: sw          $v1, 0x1BD0($at)
    MEM_W(0X1BD0, ctx->r1) = ctx->r3;
L_00414470:
    // 0x00414470: jal         0x0027AF4C
    // 0x00414474: nop

    func_0027AF4C(rdram, ctx);
        goto after_1;
    // 0x00414474: nop

    after_1:
    // 0x00414478: lwc1        $f1, 0xC($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XC);
    // 0x0041447C: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x00414480: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00414484: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00414488: lwc1        $f2, 0x10($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X10);
    // 0x0041448C: lwc1        $f1, 0x8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X8);
    // 0x00414490: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00414494: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x00414498: lwc1        $f3, 0x1C($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0X1C);
    // 0x0041449C: cvt.s.w     $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    ctx->f3.fl = CVT_S_W(ctx->f_odd[(3 - 1) * 2]);
    // 0x004144A0: lwc1        $f2, 0x14($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X14);
    // 0x004144A4: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x004144A8: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x004144AC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x004144B0: addiu       $v1, $v1, -0x535C
    ctx->r3 = ADD32(ctx->r3, -0X535C);
    // 0x004144B4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x004144B8: beq         $v0, $zero, L_004144E0
    if (ctx->r2 == 0) {
        // 0x004144BC: add.s       $f3, $f3, $f1
        CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f1.fl;
            goto L_004144E0;
    }
    // 0x004144BC: add.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f1.fl;
    // 0x004144C0: lbu         $v0, -0x1B3($v1)
    ctx->r2 = MEM_BU(ctx->r3, -0X1B3);
    // 0x004144C4: beq         $v0, $zero, L_004144E4
    if (ctx->r2 == 0) {
        // 0x004144C8: addiu       $v1, $zero, 0x80
        ctx->r3 = ADD32(0, 0X80);
            goto L_004144E4;
    }
    // 0x004144C8: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x004144CC: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x004144D0: bgez        $v0, L_004144E4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x004144D4: addiu       $v1, $zero, 0xC0
        ctx->r3 = ADD32(0, 0XC0);
            goto L_004144E4;
    }
    // 0x004144D4: addiu       $v1, $zero, 0xC0
    ctx->r3 = ADD32(0, 0XC0);
    // 0x004144D8: j           L_004144E4
    // 0x004144DC: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
        goto L_004144E4;
    // 0x004144DC: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
L_004144E0:
    // 0x004144E0: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
L_004144E4:
    // 0x004144E4: trunc.w.s   $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x004144E8: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x004144EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004144F0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x004144F4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x004144F8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x004144FC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x00414500: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x00414504: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x00414508: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x0041450C: lw          $a1, 0x1C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1C);
    // 0x00414510: trunc.w.s   $f4, $f3
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    ctx->f4.u32l = TRUNC_W_S(ctx->f3.fl);
    // 0x00414514: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x00414518: jal         0x002778A8
    // 0x0041451C: nop

    func_002778A8(rdram, ctx);
        goto after_2;
    // 0x0041451C: nop

    after_2:
    // 0x00414520: j           L_00414598
    // 0x00414524: nop

        goto L_00414598;
    // 0x00414524: nop

L_00414528:
    // 0x00414528: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041452C: lw          $v0, 0x1BD0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BD0);
    // 0x00414530: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x00414534: beq         $v0, $v1, L_0041456C
    if (ctx->r2 == ctx->r3) {
        // 0x00414538: nop
    
            goto L_0041456C;
    }
    // 0x00414538: nop

    // 0x0041453C: lwc1        $f1, 0x34($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X34);
    // 0x00414540: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414544: lwc1        $f0, 0xBE8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XBE8);
    // 0x00414548: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0041454C: lwc1        $f0, 0x30($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X30);
    // 0x00414550: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00414554: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414558: sw          $v1, 0x1BD0($at)
    MEM_W(0X1BD0, ctx->r1) = ctx->r3;
    // 0x0041455C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00414560: mfc1        $a0, $f4
    ctx->r4 = (int32_t)ctx->f4.u32l;
    // 0x00414564: jal         0x00279028
    // 0x00414568: nop

    func_00279028(rdram, ctx);
        goto after_3;
    // 0x00414568: nop

    after_3:
L_0041456C:
    // 0x0041456C: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x00414570: lh          $a2, 0x16($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X16);
    // 0x00414574: lh          $a3, 0x1E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X1E);
    // 0x00414578: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x0041457C: lwc1        $f0, 0x10($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X10);
    // 0x00414580: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00414584: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00414588: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x0041458C: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x00414590: jal         0x0027B320
    // 0x00414594: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_0027B320(rdram, ctx);
        goto after_4;
    // 0x00414594: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_4:
L_00414598:
    // 0x00414598: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x0041459C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x004145A0: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x004145A4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x004145A8: jr          $ra
    // 0x004145AC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x004145AC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0026C678(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026C678: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0026C67C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0026C680: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0026C684: beq         $s0, $zero, L_0026C714
    if (ctx->r16 == 0) {
        // 0x0026C688: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_0026C714;
    }
    // 0x0026C688: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0026C68C: lhu         $v1, 0x2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2);
    // 0x0026C690: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x0026C694: beq         $v0, $zero, L_0026C6D8
    if (ctx->r2 == 0) {
        // 0x0026C698: andi        $v0, $v1, 0xFFFE
        ctx->r2 = ctx->r3 & 0XFFFE;
            goto L_0026C6D8;
    }
    // 0x0026C698: andi        $v0, $v1, 0xFFFE
    ctx->r2 = ctx->r3 & 0XFFFE;
    // 0x0026C69C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x0026C6A0: beq         $a0, $zero, L_0026C6B0
    if (ctx->r4 == 0) {
        // 0x0026C6A4: sh          $v0, 0x2($s0)
        MEM_H(0X2, ctx->r16) = ctx->r2;
            goto L_0026C6B0;
    }
    // 0x0026C6A4: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
    // 0x0026C6A8: jal         0x0026CEC8
    // 0x0026C6AC: nop

    func_0026CEC8(rdram, ctx);
        goto after_0;
    // 0x0026C6AC: nop

    after_0:
L_0026C6B0:
    // 0x0026C6B0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x0026C6B4: beq         $a0, $zero, L_0026C6C4
    if (ctx->r4 == 0) {
        // 0x0026C6B8: nop
    
            goto L_0026C6C4;
    }
    // 0x0026C6B8: nop

    // 0x0026C6BC: jal         0x0026CEC8
    // 0x0026C6C0: nop

    func_0026CEC8(rdram, ctx);
        goto after_1;
    // 0x0026C6C0: nop

    after_1:
L_0026C6C4:
    // 0x0026C6C4: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x0026C6C8: beq         $a0, $zero, L_0026C6D8
    if (ctx->r4 == 0) {
        // 0x0026C6CC: nop
    
            goto L_0026C6D8;
    }
    // 0x0026C6CC: nop

    // 0x0026C6D0: jal         0x0026CEC8
    // 0x0026C6D4: nop

    func_0026CEC8(rdram, ctx);
        goto after_2;
    // 0x0026C6D4: nop

    after_2:
L_0026C6D8:
    // 0x0026C6D8: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0026C6DC: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0026C6E0: jal         0x0022425C
    // 0x0026C6E4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0022425C(rdram, ctx);
        goto after_3;
    // 0x0026C6E4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x0026C6E8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0026C6EC: beq         $a1, $zero, L_0026C714
    if (ctx->r5 == 0) {
        // 0x0026C6F0: addiu       $v0, $zero, -0x2
        ctx->r2 = ADD32(0, -0X2);
            goto L_0026C714;
    }
    // 0x0026C6F0: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    // 0x0026C6F4: lw          $v1, 0x44($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X44);
    // 0x0026C6F8: lbu         $a0, 0x5B($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X5B);
    // 0x0026C6FC: sb          $zero, 0x58($a1)
    MEM_B(0X58, ctx->r5) = 0;
    // 0x0026C700: sb          $zero, 0x5C($a1)
    MEM_B(0X5C, ctx->r5) = 0;
    // 0x0026C704: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x0026C708: andi        $a0, $a0, 0xFD
    ctx->r4 = ctx->r4 & 0XFD;
    // 0x0026C70C: sw          $v1, 0x44($a1)
    MEM_W(0X44, ctx->r5) = ctx->r3;
    // 0x0026C710: sb          $a0, 0x5B($a1)
    MEM_B(0X5B, ctx->r5) = ctx->r4;
L_0026C714:
    // 0x0026C714: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0026C718: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0026C71C: jr          $ra
    // 0x0026C720: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0026C720: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002662BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002662BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002662C0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002662C4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x002662C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002662CC: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x002662D0: addiu       $s0, $s0, 0x7078
    ctx->r16 = ADD32(ctx->r16, 0X7078);
    // 0x002662D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002662D8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x002662DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x002662E0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002662E4: lw          $s2, 0x14($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X14);
    // 0x002662E8: jal         0x00220260
    // 0x002662EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_00220260(rdram, ctx);
        goto after_0;
    // 0x002662EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x002662F0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002662F4: lui         $a1, 0x8
    ctx->r5 = S32(0X8 << 16);
    // 0x002662F8: jal         0x0026E110
    // 0x002662FC: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0026E110(rdram, ctx);
        goto after_1;
    // 0x002662FC: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_1:
    // 0x00266300: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x00266304: addiu       $a0, $a0, 0x2B8
    ctx->r4 = ADD32(ctx->r4, 0X2B8);
    // 0x00266308: jal         0x002365F8
    // 0x0026630C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002365F8(rdram, ctx);
        goto after_2;
    // 0x0026630C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x00266310: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x00266314: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00266318: beq         $v1, $v0, L_00266368
    if (ctx->r3 == ctx->r2) {
        // 0x0026631C: lui         $v0, 0x800
        ctx->r2 = S32(0X800 << 16);
            goto L_00266368;
    }
    // 0x0026631C: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x00266320: lw          $v1, 0xD4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XD4);
    // 0x00266324: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00266328: sw          $v1, 0xD4($s1)
    MEM_W(0XD4, ctx->r17) = ctx->r3;
    // 0x0026632C: lw          $v0, 0x14($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14);
    // 0x00266330: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x00266334: beq         $v0, $zero, L_0026634C
    if (ctx->r2 == 0) {
        // 0x00266338: addiu       $v0, $zero, -0x2001
        ctx->r2 = ADD32(0, -0X2001);
            goto L_0026634C;
    }
    // 0x00266338: addiu       $v0, $zero, -0x2001
    ctx->r2 = ADD32(0, -0X2001);
    // 0x0026633C: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x00266340: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x00266344: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00266348: sw          $v0, 0xD4($s1)
    MEM_W(0XD4, ctx->r17) = ctx->r2;
L_0026634C:
    // 0x0026634C: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x00266350: lh          $v0, 0x28($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X28);
    // 0x00266354: bne         $v0, $zero, L_00266368
    if (ctx->r2 != 0) {
        // 0x00266358: addiu       $v1, $zero, -0x101
        ctx->r3 = ADD32(0, -0X101);
            goto L_00266368;
    }
    // 0x00266358: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x0026635C: lw          $v0, 0xD4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XD4);
    // 0x00266360: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00266364: sw          $v0, 0xD4($s1)
    MEM_W(0XD4, ctx->r17) = ctx->r2;
L_00266368:
    // 0x00266368: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0026636C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00266370: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00266374: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00266378: jr          $ra
    // 0x0026637C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0026637C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0026E4B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026E4B8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x0026E4BC: sw          $fp, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r30;
    // 0x0026E4C0: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x0026E4C4: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x0026E4C8: addu        $s7, $a1, $zero
    ctx->r23 = ADD32(ctx->r5, 0);
    // 0x0026E4CC: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x0026E4D0: addu        $s6, $a2, $zero
    ctx->r22 = ADD32(ctx->r6, 0);
    // 0x0026E4D4: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x0026E4D8: addu        $s5, $a3, $zero
    ctx->r21 = ADD32(ctx->r7, 0);
    // 0x0026E4DC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0026E4E0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0026E4E4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0026E4E8: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x0026E4EC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x0026E4F0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0026E4F4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0026E4F8: blez        $s7, L_0026E6A4
    if (SIGNED(ctx->r23) <= 0) {
        // 0x0026E4FC: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_0026E6A4;
    }
    // 0x0026E4FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0026E500: lui         $s3, 0x800F
    ctx->r19 = S32(0X800F << 16);
    // 0x0026E504: addiu       $s3, $s3, 0x7078
    ctx->r19 = ADD32(ctx->r19, 0X7078);
    // 0x0026E508: addiu       $s1, $s2, 0xF
    ctx->r17 = ADD32(ctx->r18, 0XF);
L_0026E50C:
    // 0x0026E50C: lw          $v1, 0x0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X0);
    // 0x0026E510: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0026E514: beq         $v1, $v0, L_0026E52C
    if (ctx->r3 == ctx->r2) {
        // 0x0026E518: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_0026E52C;
    }
    // 0x0026E518: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x0026E51C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0026E520: jal         0x00224B58
    // 0x0026E524: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_00224B58(rdram, ctx);
        goto after_0;
    // 0x0026E524: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_0:
    // 0x0026E528: sltiu       $a0, $v0, 0x1
    ctx->r4 = ctx->r2 < 0X1 ? 1 : 0;
L_0026E52C:
    // 0x0026E52C: beql        $a0, $zero, L_0026E694
    if (ctx->r4 == 0) {
        // 0x0026E530: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_0026E694;
    }
    goto skip_0;
    // 0x0026E530: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    skip_0:
    // 0x0026E534: lbu         $a0, -0x1($s1)
    ctx->r4 = MEM_BU(ctx->r17, -0X1);
    // 0x0026E538: andi        $v0, $a0, 0x20
    ctx->r2 = ctx->r4 & 0X20;
    // 0x0026E53C: bne         $v0, $zero, L_0026E59C
    if (ctx->r2 != 0) {
        // 0x0026E540: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_0026E59C;
    }
    // 0x0026E540: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x0026E544: beq         $s5, $zero, L_0026E59C
    if (ctx->r21 == 0) {
        // 0x0026E548: nop
    
            goto L_0026E59C;
    }
    // 0x0026E548: nop

    // 0x0026E54C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x0026E550: and         $v0, $v0, $s5
    ctx->r2 = ctx->r2 & ctx->r21;
    // 0x0026E554: beq         $v0, $zero, L_0026E59C
    if (ctx->r2 == 0) {
        // 0x0026E558: ori         $v0, $a0, 0x40
        ctx->r2 = ctx->r4 | 0X40;
            goto L_0026E59C;
    }
    // 0x0026E558: ori         $v0, $a0, 0x40
    ctx->r2 = ctx->r4 | 0X40;
    // 0x0026E55C: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x0026E560: beq         $v1, $zero, L_0026E590
    if (ctx->r3 == 0) {
        // 0x0026E564: sb          $v0, -0x1($s1)
        MEM_B(-0X1, ctx->r17) = ctx->r2;
            goto L_0026E590;
    }
    // 0x0026E564: sb          $v0, -0x1($s1)
    MEM_B(-0X1, ctx->r17) = ctx->r2;
    // 0x0026E568: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x0026E56C: jal         0x00225210
    // 0x0026E570: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00225210(rdram, ctx);
        goto after_1;
    // 0x0026E570: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_1:
    // 0x0026E574: beq         $v0, $zero, L_0026E59C
    if (ctx->r2 == 0) {
        // 0x0026E578: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_0026E59C;
    }
    // 0x0026E578: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x0026E57C: lbu         $a1, 0x0($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X0);
    // 0x0026E580: jal         0x002252A0
    // 0x0026E584: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_002252A0(rdram, ctx);
        goto after_2;
    // 0x0026E584: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_2:
    // 0x0026E588: j           L_0026E59C
    // 0x0026E58C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_0026E59C;
    // 0x0026E58C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_0026E590:
    // 0x0026E590: jal         0x0026E294
    // 0x0026E594: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_0026E294(rdram, ctx);
        goto after_3;
    // 0x0026E594: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
    // 0x0026E598: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_0026E59C:
    // 0x0026E59C: beq         $s6, $zero, L_0026E5B0
    if (ctx->r22 == 0) {
        // 0x0026E5A0: nop
    
            goto L_0026E5B0;
    }
    // 0x0026E5A0: nop

    // 0x0026E5A4: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x0026E5A8: and         $v0, $v0, $s6
    ctx->r2 = ctx->r2 & ctx->r22;
    // 0x0026E5AC: sltu        $s0, $zero, $v0
    ctx->r16 = 0 < ctx->r2 ? 1 : 0;
L_0026E5B0:
    // 0x0026E5B0: beq         $s5, $zero, L_0026E5C8
    if (ctx->r21 == 0) {
        // 0x0026E5B4: nop
    
            goto L_0026E5C8;
    }
    // 0x0026E5B4: nop

    // 0x0026E5B8: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x0026E5BC: and         $v0, $v0, $s5
    ctx->r2 = ctx->r2 & ctx->r21;
    // 0x0026E5C0: beql        $v0, $zero, L_0026E5C8
    if (ctx->r2 == 0) {
        // 0x0026E5C4: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0026E5C8;
    }
    goto skip_1;
    // 0x0026E5C4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_1:
L_0026E5C8:
    // 0x0026E5C8: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x0026E5CC: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x0026E5D0: and         $v0, $v0, $t0
    ctx->r2 = ctx->r2 & ctx->r8;
    // 0x0026E5D4: beq         $v0, $zero, L_0026E5EC
    if (ctx->r2 == 0) {
        // 0x0026E5D8: nop
    
            goto L_0026E5EC;
    }
    // 0x0026E5D8: nop

    // 0x0026E5DC: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x0026E5E0: and         $v0, $v0, $t0
    ctx->r2 = ctx->r2 & ctx->r8;
    // 0x0026E5E4: beql        $v0, $zero, L_0026E5EC
    if (ctx->r2 == 0) {
        // 0x0026E5E8: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0026E5EC;
    }
    goto skip_2;
    // 0x0026E5E8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_2:
L_0026E5EC:
    // 0x0026E5EC: lw          $v0, -0x3($s1)
    ctx->r2 = MEM_W(ctx->r17, -0X3);
    // 0x0026E5F0: addiu       $v1, $zero, 0x1000
    ctx->r3 = ADD32(0, 0X1000);
    // 0x0026E5F4: andi        $v0, $v0, 0x1100
    ctx->r2 = ctx->r2 & 0X1100;
    // 0x0026E5F8: beql        $v0, $v1, L_0026E600
    if (ctx->r2 == ctx->r3) {
        // 0x0026E5FC: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0026E600;
    }
    goto skip_3;
    // 0x0026E5FC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_3:
L_0026E600:
    // 0x0026E600: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0026E604: jal         0x0026E6D4
    // 0x0026E608: addu        $a1, $fp, $zero
    ctx->r5 = ADD32(ctx->r30, 0);
    func_0026E6D4(rdram, ctx);
        goto after_4;
    // 0x0026E608: addu        $a1, $fp, $zero
    ctx->r5 = ADD32(ctx->r30, 0);
    after_4:
    // 0x0026E60C: beql        $v0, $zero, L_0026E614
    if (ctx->r2 == 0) {
        // 0x0026E610: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0026E614;
    }
    goto skip_4;
    // 0x0026E610: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_4:
L_0026E614:
    // 0x0026E614: beql        $s0, $zero, L_0026E694
    if (ctx->r16 == 0) {
        // 0x0026E618: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_0026E694;
    }
    goto skip_5;
    // 0x0026E618: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    skip_5:
    // 0x0026E61C: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x0026E620: beq         $v0, $zero, L_0026E688
    if (ctx->r2 == 0) {
        // 0x0026E624: nop
    
            goto L_0026E688;
    }
    // 0x0026E624: nop

    // 0x0026E628: lbu         $v0, -0x1($s1)
    ctx->r2 = MEM_BU(ctx->r17, -0X1);
    // 0x0026E62C: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x0026E630: bnel        $v0, $zero, L_0026E694
    if (ctx->r2 != 0) {
        // 0x0026E634: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_0026E694;
    }
    goto skip_6;
    // 0x0026E634: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    skip_6:
    // 0x0026E638: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0026E63C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0026E640: jal         0x00224A68
    // 0x0026E644: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_00224A68(rdram, ctx);
        goto after_5;
    // 0x0026E644: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x0026E648: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0026E64C: lbu         $v0, -0x1($s1)
    ctx->r2 = MEM_BU(ctx->r17, -0X1);
    // 0x0026E650: lbu         $a1, 0x0($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X0);
    // 0x0026E654: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x0026E658: jal         0x00224C98
    // 0x0026E65C: sb          $v0, -0x1($s1)
    MEM_B(-0X1, ctx->r17) = ctx->r2;
    func_00224C98(rdram, ctx);
        goto after_6;
    // 0x0026E65C: sb          $v0, -0x1($s1)
    MEM_B(-0X1, ctx->r17) = ctx->r2;
    after_6:
    // 0x0026E660: lbu         $a1, 0x0($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X0);
    // 0x0026E664: jal         0x00224CF8
    // 0x0026E668: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00224CF8(rdram, ctx);
        goto after_7;
    // 0x0026E668: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_7:
    // 0x0026E66C: beql        $v0, $zero, L_0026E694
    if (ctx->r2 == 0) {
        // 0x0026E670: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_0026E694;
    }
    goto skip_7;
    // 0x0026E670: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    skip_7:
    // 0x0026E674: lbu         $a1, 0x0($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X0);
    // 0x0026E678: jal         0x0022515C
    // 0x0026E67C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_0022515C(rdram, ctx);
        goto after_8;
    // 0x0026E67C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_8:
    // 0x0026E680: j           L_0026E694
    // 0x0026E684: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
        goto L_0026E694;
    // 0x0026E684: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
L_0026E688:
    // 0x0026E688: jal         0x0026E210
    // 0x0026E68C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_0026E210(rdram, ctx);
        goto after_9;
    // 0x0026E68C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_9:
    // 0x0026E690: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
L_0026E694:
    // 0x0026E694: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x0026E698: slt         $v0, $s4, $s7
    ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r23) ? 1 : 0;
    // 0x0026E69C: bne         $v0, $zero, L_0026E50C
    if (ctx->r2 != 0) {
        // 0x0026E6A0: addiu       $s2, $s2, 0x14
        ctx->r18 = ADD32(ctx->r18, 0X14);
            goto L_0026E50C;
    }
    // 0x0026E6A0: addiu       $s2, $s2, 0x14
    ctx->r18 = ADD32(ctx->r18, 0X14);
L_0026E6A4:
    // 0x0026E6A4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x0026E6A8: lw          $fp, 0x30($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X30);
    // 0x0026E6AC: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x0026E6B0: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x0026E6B4: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0026E6B8: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0026E6BC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0026E6C0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0026E6C4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0026E6C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0026E6CC: jr          $ra
    // 0x0026E6D0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0026E6D0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_002862A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002862A4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x002862A8: lw          $v0, -0x5300($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5300);
    // 0x002862AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002862B0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002862B4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002862B8: beq         $v0, $zero, L_0028635C
    if (ctx->r2 == 0) {
        // 0x002862BC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_0028635C;
    }
    // 0x002862BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x002862C0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x002862C4: lwc1        $f0, -0x4EE4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4EE4);
    // 0x002862C8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002862CC: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x002862D0: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x002862D4: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x002862D8: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x002862DC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x002862E0: swc1        $f0, -0x4EE4($at)
    MEM_W(-0X4EE4, ctx->r1) = ctx->f0.u32l;
    // 0x002862E4: bc1f        L_00286430
    if (!c1cs) {
        // 0x002862E8: nop
    
            goto L_00286430;
    }
    // 0x002862E8: nop

    // 0x002862EC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x002862F0: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x002862F4: jal         0x002532A8
    // 0x002862F8: nop

    func_002532A8(rdram, ctx);
        goto after_0;
    // 0x002862F8: nop

    after_0:
    // 0x002862FC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00286300: lw          $v0, 0x6D74($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D74);
    // 0x00286304: beq         $v0, $zero, L_0028632C
    if (ctx->r2 == 0) {
        // 0x00286308: nop
    
            goto L_0028632C;
    }
    // 0x00286308: nop

    // 0x0028630C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00286310: lw          $v0, 0x6D70($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D70);
    // 0x00286314: bne         $v0, $zero, L_00286340
    if (ctx->r2 != 0) {
        // 0x00286318: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00286340;
    }
    // 0x00286318: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0028631C: jal         0x002886D0
    // 0x00286320: addiu       $a1, $zero, 0x1B57
    ctx->r5 = ADD32(0, 0X1B57);
    func_002886D0(rdram, ctx);
        goto after_1;
    // 0x00286320: addiu       $a1, $zero, 0x1B57
    ctx->r5 = ADD32(0, 0X1B57);
    after_1:
    // 0x00286324: j           L_00286430
    // 0x00286328: nop

        goto L_00286430;
    // 0x00286328: nop

L_0028632C:
    // 0x0028632C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00286330: lw          $v0, 0x6D70($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D70);
    // 0x00286334: beq         $v0, $zero, L_00286430
    if (ctx->r2 == 0) {
        // 0x00286338: nop
    
            goto L_00286430;
    }
    // 0x00286338: nop

    // 0x0028633C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_00286340:
    // 0x00286340: jal         0x00288C5C
    // 0x00286344: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_00288C5C(rdram, ctx);
        goto after_2;
    // 0x00286344: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x00286348: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0028634C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00286350: sw          $v0, -0x5308($at)
    MEM_W(-0X5308, ctx->r1) = ctx->r2;
    // 0x00286354: j           L_00286430
    // 0x00286358: nop

        goto L_00286430;
    // 0x00286358: nop

L_0028635C:
    // 0x0028635C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00286360: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x00286364: slti        $v0, $v0, 0xDF
    ctx->r2 = SIGNED(ctx->r2) < 0XDF ? 1 : 0;
    // 0x00286368: bne         $v0, $zero, L_00286388
    if (ctx->r2 != 0) {
        // 0x0028636C: nop
    
            goto L_00286388;
    }
    // 0x0028636C: nop

    // 0x00286370: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00286374: lwc1        $f0, -0xEE0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0XEE0);
    // 0x00286378: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028637C: lwc1        $f1, -0x62D4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X62D4);
    // 0x00286380: j           L_0028639C
    // 0x00286384: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
        goto L_0028639C;
    // 0x00286384: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
L_00286388:
    // 0x00286388: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028638C: lwc1        $f0, -0xEE0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0XEE0);
    // 0x00286390: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00286394: lwc1        $f1, -0x62D0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X62D0);
    // 0x00286398: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
L_0028639C:
    // 0x0028639C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x002863A0: swc1        $f0, -0xEE0($at)
    MEM_W(-0XEE0, ctx->r1) = ctx->f0.u32l;
    // 0x002863A4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002863A8: lwc1        $f0, -0x62CC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X62CC);
    // 0x002863AC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x002863B0: lwc1        $f1, 0x2034($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X2034);
    // 0x002863B4: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x002863B8: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x002863BC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x002863C0: lwc1        $f2, -0xEE0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0XEE0);
    // 0x002863C4: neg.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = -ctx->f1.fl;
    // 0x002863C8: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x002863CC: nop

    // 0x002863D0: bc1f        L_00286430
    if (!c1cs) {
        // 0x002863D4: nop
    
            goto L_00286430;
    }
    // 0x002863D4: nop

    // 0x002863D8: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x002863DC: lw          $v0, 0x6CA0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6CA0);
    // 0x002863E0: add.s       $f0, $f2, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x002863E4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x002863E8: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x002863EC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002863F0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x002863F4: lw          $v1, 0x66DC($at)
    ctx->r3 = MEM_W(ctx->r1, 0X66DC);
    // 0x002863F8: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x002863FC: sw          $v0, 0x6CA0($at)
    MEM_W(0X6CA0, ctx->r1) = ctx->r2;
    // 0x00286400: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00286404: swc1        $f0, -0xEE0($at)
    MEM_W(-0XEE0, ctx->r1) = ctx->f0.u32l;
    // 0x00286408: bne         $v1, $zero, L_00286430
    if (ctx->r3 != 0) {
        // 0x0028640C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00286430;
    }
    // 0x0028640C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00286410: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00286414: sw          $v0, -0x5300($at)
    MEM_W(-0X5300, ctx->r1) = ctx->r2;
    // 0x00286418: jal         0x0027580C
    // 0x0028641C: addiu       $a0, $zero, 0x266
    ctx->r4 = ADD32(0, 0X266);
    func_0027580C(rdram, ctx);
        goto after_3;
    // 0x0028641C: addiu       $a0, $zero, 0x266
    ctx->r4 = ADD32(0, 0X266);
    after_3:
    // 0x00286420: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00286424: lwc1        $f0, -0x62C8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X62C8);
    // 0x00286428: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028642C: swc1        $f0, -0x4EE4($at)
    MEM_W(-0X4EE4, ctx->r1) = ctx->f0.u32l;
L_00286430:
    // 0x00286430: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00286434: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00286438: jr          $ra
    // 0x0028643C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0028643C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00456B7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041DBCC:
    // 0x00456B7C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
L_0041DCA4:
    // 0x00456B80: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
L_0041DCA8:
    // 0x00456B84: lw          $v0, 0x984($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X984);
    // 0x00456B88: beq         $v0, $zero, L_00456C34
    if (ctx->r2 == 0) {
        // 0x00456B8C: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00456C34;
    }
    // 0x00456B8C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00456B90: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00456B94: lw          $v0, 0x9B4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9B4);
    // 0x00456B98: beq         $v0, $zero, L_00456C7C
    if (ctx->r2 == 0) {
        // 0x00456B9C: nop
    
            goto L_00456C7C;
    }
    // 0x00456B9C: nop

    // 0x00456BA0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00456BA4: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x00456BA8: beq         $v0, $zero, L_00456BC0
    if (ctx->r2 == 0) {
        // 0x00456BAC: nop
    
            goto L_00456BC0;
    }
    // 0x00456BAC: nop

    // 0x00456BB0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00456BB4: lw          $v0, 0x2028($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2028);
    // 0x00456BB8: j           L_0041DBCC
    // 0x00456BBC: sw          $v0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r2;
    entry_0041DBCC(rdram, ctx);
    return;
    // 0x00456BBC: sw          $v0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r2;
L_00456BC0:
    // 0x00456BC0: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x00456BC4: lb          $v0, 0x4($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4);
    // 0x00456BC8: sw          $v0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r2;
    // 0x00456BCC: lw          $v1, 0x0($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X0);
    // 0x00456BD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00456BD4: beq         $v1, $v0, L_00456C04
    if (ctx->r3 == ctx->r2) {
        // 0x00456BD8: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_00456C04;
    }
    // 0x00456BD8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x00456BDC: bne         $v0, $zero, L_00456BF4
    if (ctx->r2 != 0) {
        // 0x00456BE0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00456BF4;
    }
    // 0x00456BE0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00456BE4: beq         $v1, $v0, L_00456C14
    if (ctx->r3 == ctx->r2) {
        // 0x00456BE8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00456C14;
    }
    // 0x00456BE8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00456BEC: beq         $v1, $v0, L_00456C24
    if (ctx->r3 == ctx->r2) {
        // 0x00456BF0: nop
    
            goto L_00456C24;
    }
    // 0x00456BF0: nop

L_00456BF4:
    // 0x00456BF4: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x00456BF8: addiu       $v0, $v0, -0x5460
    ctx->r2 = ADD32(ctx->r2, -0X5460);
    // 0x00456BFC: j           L_0041DCA4
    // 0x00456C00: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    entry_0041DCA4(rdram, ctx);
    return;
    // 0x00456C00: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_00456C04:
    // 0x00456C04: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x00456C08: addiu       $v0, $v0, -0x543C
    ctx->r2 = ADD32(ctx->r2, -0X543C);
    // 0x00456C0C: j           L_0041DCA4
    // 0x00456C10: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    entry_0041DCA4(rdram, ctx);
    return;
    // 0x00456C10: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_00456C14:
    // 0x00456C14: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x00456C18: addiu       $v0, $v0, -0x5418
    ctx->r2 = ADD32(ctx->r2, -0X5418);
    // 0x00456C1C: j           L_0041DCA4
    // 0x00456C20: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    entry_0041DCA4(rdram, ctx);
    return;
    // 0x00456C20: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_00456C24:
    // 0x00456C24: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x00456C28: addiu       $v0, $v0, -0x53F4
    ctx->r2 = ADD32(ctx->r2, -0X53F4);
    // 0x00456C2C: j           L_0041DCA4
    // 0x00456C30: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    entry_0041DCA4(rdram, ctx);
    return;
    // 0x00456C30: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_00456C34:
    // 0x00456C34: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00456C38: lw          $v0, 0x994($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X994);
    // 0x00456C3C: beq         $v0, $zero, L_00456C8C
    if (ctx->r2 == 0) {
        // 0x00456C40: nop
    
            goto L_00456C8C;
    }
    // 0x00456C40: nop

    // 0x00456C44: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00456C48: lw          $v0, 0x9B4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9B4);
    // 0x00456C4C: beq         $v0, $zero, L_00456C64
    if (ctx->r2 == 0) {
        // 0x00456C50: nop
    
            goto L_00456C64;
    }
    // 0x00456C50: nop

    // 0x00456C54: lui         $v1, 0x44
    ctx->r3 = S32(0X44 << 16);
    // 0x00456C58: addiu       $v1, $v1, -0x78B4
    ctx->r3 = ADD32(ctx->r3, -0X78B4);
    // 0x00456C5C: j           L_0041DCA8
    // 0x00456C60: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    entry_0041DCA8(rdram, ctx);
    return;
    // 0x00456C60: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_00456C64:
    // 0x00456C64: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00456C68: lw          $v0, 0x998($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X998);
    // 0x00456C6C: lui         $v1, 0x44
    ctx->r3 = S32(0X44 << 16);
    // 0x00456C70: addiu       $v1, $v1, -0x6F50
    ctx->r3 = ADD32(ctx->r3, -0X6F50);
    // 0x00456C74: beq         $v0, $zero, L_00456CA8
    if (ctx->r2 == 0) {
        // 0x00456C78: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_00456CA8;
    }
    // 0x00456C78: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_00456C7C:
    // 0x00456C7C: lui         $v1, 0x44
    ctx->r3 = S32(0X44 << 16);
    // 0x00456C80: addiu       $v1, $v1, -0x41EC
    ctx->r3 = ADD32(ctx->r3, -0X41EC);
    // 0x00456C84: j           L_0041DCA8
    // 0x00456C88: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    entry_0041DCA8(rdram, ctx);
    return;
    // 0x00456C88: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_00456C8C:
    // 0x00456C8C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00456C90: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x00456C94: beq         $v0, $zero, L_00456CA8
    if (ctx->r2 == 0) {
        // 0x00456C98: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_00456CA8;
    }
    // 0x00456C98: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x00456C9C: lui         $v1, 0x44
    ctx->r3 = S32(0X44 << 16);
    // 0x00456CA0: addiu       $v1, $v1, -0x49A8
    ctx->r3 = ADD32(ctx->r3, -0X49A8);
    // 0x00456CA4: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_00456CA8:
    // 0x00456CA8: jr          $ra
    // 0x00456CAC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x00456CAC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_00284254(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00284254: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00284258: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x0028425C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00284260: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00284264: lw          $v0, 0x38($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X38);
    // 0x00284268: beq         $v0, $zero, L_00284278
    if (ctx->r2 == 0) {
        // 0x0028426C: nop
    
            goto L_00284278;
    }
    // 0x0028426C: nop

    // 0x00284270: jal         0x00410CE8
    // 0x00284274: nop

    func_00410CE8(rdram, ctx);
        goto after_0;
    // 0x00284274: nop

    after_0:
L_00284278:
    // 0x00284278: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0028427C: jr          $ra
    // 0x00284280: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00284280: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00285628(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00285628: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0028562C: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x00285630: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00285634: lw          $v0, 0xC0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC0);
    // 0x00285638: ori         $v1, $v1, 0x202
    ctx->r3 = ctx->r3 | 0X202;
    // 0x0028563C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00285640: beq         $v0, $zero, L_00285664
    if (ctx->r2 == 0) {
        // 0x00285644: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00285664;
    }
    // 0x00285644: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00285648: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0028564C: lw          $v0, 0x6CF8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6CF8);
    // 0x00285650: beq         $v0, $zero, L_00285664
    if (ctx->r2 == 0) {
        // 0x00285654: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00285664;
    }
    // 0x00285654: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00285658: jal         0x00275624
    // 0x0028565C: addiu       $a0, $zero, 0x12D
    ctx->r4 = ADD32(0, 0X12D);
    func_00275624(rdram, ctx);
        goto after_0;
    // 0x0028565C: addiu       $a0, $zero, 0x12D
    ctx->r4 = ADD32(0, 0X12D);
    after_0:
    // 0x00285660: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00285664:
    // 0x00285664: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00285668: jr          $ra
    // 0x0028566C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0028566C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002097AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
        turok2_patch_sanitize_anim(rdram, ctx);

    // 0x002097AC: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x002097B0: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x002097B4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002097B8: sdc1        $f20, 0x60($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X60, ctx->r29);
    // 0x002097BC: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x002097C0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x002097C4: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x002097C8: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x002097CC: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x002097D0: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x002097D4: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x002097D8: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x002097DC: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x002097E0: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x002097E4: jal         0x002017D4
    // 0x002097E8: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x002097E8: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    after_0:
    // 0x002097EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002097F0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x002097F4: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x002097F8: lw          $v1, 0x6D18($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6D18);
    // 0x002097FC: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    // 0x00209800: jal         0x002017D4
    // 0x00209804: sw          $v1, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r3;
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00209804: sw          $v1, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r3;
    after_1:
    // 0x00209808: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x0020980C: lw          $s0, 0x0($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X0);
    // 0x00209810: slti        $v0, $s0, 0x3
    ctx->r2 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
    // 0x00209814: bne         $v0, $zero, L_00209AC0
    if (ctx->r2 != 0) {
        // 0x00209818: nop
    
            goto L_00209AC0;
    }
    // 0x00209818: nop

    // 0x0020981C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00209820: lw          $a1, 0x6D1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6D1C);
    // 0x00209824: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x00209828: jal         0x002017D4
    // 0x0020982C: nop

    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x0020982C: nop

    after_2:
    // 0x00209830: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00209834: addiu       $t3, $v0, 0x8
    ctx->r11 = ADD32(ctx->r2, 0X8);
    // 0x00209838: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x0020983C: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x00209840: c.lt.s      $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f20.fl < ctx->f1.fl;
    // 0x00209844: nop

    // 0x00209848: bc1f        L_0020986C
    if (!c1cs) {
        // 0x0020984C: addiu       $v0, $s0, -0x2
        ctx->r2 = ADD32(ctx->r16, -0X2);
            goto L_0020986C;
    }
    // 0x0020984C: addiu       $v0, $s0, -0x2
    ctx->r2 = ADD32(ctx->r16, -0X2);
    // 0x00209850: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00209854: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00209858: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
L_0020985C:
    // 0x0020985C: c.lt.s      $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f20.fl < ctx->f1.fl;
    // 0x00209860: nop

    // 0x00209864: bc1tl       L_0020985C
    if (c1cs) {
        // 0x00209868: add.s       $f20, $f20, $f0
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
            goto L_0020985C;
    }
    goto skip_0;
    // 0x00209868: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    skip_0:
L_0020986C:
    // 0x0020986C: addiu       $v0, $s0, -0x2
    ctx->r2 = ADD32(ctx->r16, -0X2);
    // 0x00209870: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00209874: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00209878: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x0020987C: nop

    // 0x00209880: bc1f        L_002098A8
    if (!c1cs) {
        // 0x00209884: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_002098A8;
    }
    // 0x00209884: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00209888: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0020988C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00209890: sub.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f0.fl;
L_00209894:
    // 0x00209894: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x00209898: nop

    // 0x0020989C: bc1tl       L_00209894
    if (c1cs) {
        // 0x002098A0: sub.s       $f20, $f20, $f0
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f0.fl;
            goto L_00209894;
    }
    goto skip_1;
    // 0x002098A0: sub.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f0.fl;
    skip_1:
    // 0x002098A4: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
L_002098A8:
    // 0x002098A8: trunc.w.s   $f3, $f20
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 20);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f20.fl);
    // 0x002098AC: mfc1        $v0, $f3
    ctx->r2 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x002098B0: addu        $s7, $v0, $zero
    ctx->r23 = ADD32(ctx->r2, 0);
    // 0x002098B4: mtc1        $s7, $f0
    ctx->f0.u32l = ctx->r23;
    // 0x002098B8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002098BC: sub.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f0.fl;
    // 0x002098C0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002098C4: lwc1        $f2, 0x53D0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X53D0);
    // 0x002098C8: addiu       $s4, $s0, -0x2
    ctx->r20 = ADD32(ctx->r16, -0X2);
    // 0x002098CC: mul.s       $f2, $f0, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x002098D0: addiu       $s3, $sp, 0x20
    ctx->r19 = ADD32(ctx->r29, 0X20);
    // 0x002098D4: addiu       $s0, $sp, 0x10
    ctx->r16 = ADD32(ctx->r29, 0X10);
    // 0x002098D8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002098DC: lwc1        $f1, 0x53D4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X53D4);
    // 0x002098E0: addiu       $s2, $sp, 0x18
    ctx->r18 = ADD32(ctx->r29, 0X18);
    // 0x002098E4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002098E8: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x002098EC: swc1        $f20, 0x4($s5)
    MEM_W(0X4, ctx->r21) = ctx->f20.u32l;
    // 0x002098F0: trunc.w.s   $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f2.fl);
    // 0x002098F4: mfc1        $s6, $f3
    ctx->r22 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x002098F8: subu        $t1, $v0, $s6
    ctx->r9 = SUB32(ctx->r2, ctx->r22);
    // 0x002098FC: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00209900: mfc1        $s5, $f3
    ctx->r21 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00209904: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x00209908: subu        $fp, $v0, $s5
    ctx->r30 = SUB32(ctx->r2, ctx->r21);
L_0020990C:
    // 0x0020990C: addu        $v0, $s7, $s1
    ctx->r2 = ADD32(ctx->r23, ctx->r17);
    // 0x00209910: div         $zero, $v0, $s4
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r20))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r20)));
    // 0x00209914: bne         $s4, $zero, L_00209920
    if (ctx->r20 != 0) {
        // 0x00209918: nop
    
            goto L_00209920;
    }
    // 0x00209918: nop

    // 0x0020991C: break       7
    do_break(2136348);
L_00209920:
    // 0x00209920: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x00209924: bne         $s4, $at, L_00209938
    if (ctx->r20 != ctx->r1) {
        // 0x00209928: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_00209938;
    }
    // 0x00209928: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x0020992C: bne         $v0, $at, L_00209938
    if (ctx->r2 != ctx->r1) {
        // 0x00209930: nop
    
            goto L_00209938;
    }
    // 0x00209930: nop

    // 0x00209934: break       6
    do_break(2136372);
L_00209938:
    // 0x00209938: mfhi        $a1
    ctx->r5 = hi;
    // 0x0020993C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x00209940: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x00209944: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x00209948: jal         0x002017D4
    // 0x0020994C: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x0020994C: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    after_3:
    // 0x00209950: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x00209954: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x00209958: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0020995C: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x00209960: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00209964: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x00209968: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x0020996C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x00209970: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x00209974: slti        $v0, $s1, 0x2
    ctx->r2 = SIGNED(ctx->r17) < 0X2 ? 1 : 0;
    // 0x00209978: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x0020997C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x00209980: bne         $v0, $zero, L_0020990C
    if (ctx->r2 != 0) {
        // 0x00209984: addiu       $s3, $s3, 0x4
        ctx->r19 = ADD32(ctx->r19, 0X4);
            goto L_0020990C;
    }
    // 0x00209984: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x00209988: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x0020998C: bne         $v0, $t2, L_00209AC0
    if (ctx->r2 != ctx->r10) {
        // 0x00209990: nop
    
            goto L_00209AC0;
    }
    // 0x00209990: nop

    // 0x00209994: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x00209998: bne         $v0, $t2, L_00209AC0
    if (ctx->r2 != ctx->r10) {
        // 0x0020999C: nop
    
            goto L_00209AC0;
    }
    // 0x0020999C: nop

    // 0x002099A0: blez        $t2, L_00209AC0
    if (SIGNED(ctx->r10) <= 0) {
        // 0x002099A4: addu        $t0, $zero, $zero
        ctx->r8 = ADD32(0, 0);
            goto L_00209AC0;
    }
    // 0x002099A4: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x002099A8: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
L_002099AC:
    // 0x002099AC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x002099B0: sll         $v1, $t0, 4
    ctx->r3 = S32(ctx->r8 << 4);
    // 0x002099B4: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x002099B8: lh          $v0, 0x0($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X0);
    // 0x002099BC: mult        $v0, $fp
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002099C0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x002099C4: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x002099C8: mflo        $a2
    ctx->r6 = lo;
    // 0x002099CC: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x002099D0: nop

    // 0x002099D4: mult        $v0, $s5
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002099D8: mflo        $v1
    ctx->r3 = lo;
    // 0x002099DC: addu        $v0, $a2, $v1
    ctx->r2 = ADD32(ctx->r6, ctx->r3);
    // 0x002099E0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x002099E4: sh          $v0, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r2;
    // 0x002099E8: lh          $v0, 0x2($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X2);
    // 0x002099EC: mult        $v0, $fp
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002099F0: mflo        $v1
    ctx->r3 = lo;
    // 0x002099F4: lh          $v0, 0x2($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2);
    // 0x002099F8: nop

    // 0x002099FC: mult        $v0, $s5
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00209A00: mflo        $a2
    ctx->r6 = lo;
    // 0x00209A04: addu        $v0, $v1, $a2
    ctx->r2 = ADD32(ctx->r3, ctx->r6);
    // 0x00209A08: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x00209A0C: sh          $v0, 0x2($a3)
    MEM_H(0X2, ctx->r7) = ctx->r2;
    // 0x00209A10: lh          $v0, 0x4($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X4);
    // 0x00209A14: mult        $v0, $fp
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00209A18: mflo        $v1
    ctx->r3 = lo;
    // 0x00209A1C: lh          $v0, 0x4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4);
    // 0x00209A20: nop

    // 0x00209A24: mult        $v0, $s5
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00209A28: mflo        $a2
    ctx->r6 = lo;
    // 0x00209A2C: addu        $v0, $v1, $a2
    ctx->r2 = ADD32(ctx->r3, ctx->r6);
    // 0x00209A30: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x00209A34: sh          $v0, 0x4($a3)
    MEM_H(0X4, ctx->r7) = ctx->r2;
    // 0x00209A38: lb          $v0, 0xC($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC);
    // 0x00209A3C: mult        $v0, $t1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00209A40: mflo        $v1
    ctx->r3 = lo;
    // 0x00209A44: lb          $v0, 0xC($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XC);
    // 0x00209A48: nop

    // 0x00209A4C: mult        $v0, $s6
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00209A50: mflo        $a2
    ctx->r6 = lo;
    // 0x00209A54: addu        $v0, $v1, $a2
    ctx->r2 = ADD32(ctx->r3, ctx->r6);
    // 0x00209A58: sra         $v0, $v0, 8
    ctx->r2 = S32(SIGNED(ctx->r2) >> 8);
    // 0x00209A5C: sb          $v0, 0xC($a3)
    MEM_B(0XC, ctx->r7) = ctx->r2;
    // 0x00209A60: lb          $v0, 0xD($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XD);
    // 0x00209A64: mult        $v0, $t1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00209A68: mflo        $v1
    ctx->r3 = lo;
    // 0x00209A6C: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x00209A70: nop

    // 0x00209A74: mult        $v0, $s6
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00209A78: mflo        $a2
    ctx->r6 = lo;
    // 0x00209A7C: addu        $v0, $v1, $a2
    ctx->r2 = ADD32(ctx->r3, ctx->r6);
    // 0x00209A80: sra         $v0, $v0, 8
    ctx->r2 = S32(SIGNED(ctx->r2) >> 8);
    // 0x00209A84: sb          $v0, 0xD($a3)
    MEM_B(0XD, ctx->r7) = ctx->r2;
    // 0x00209A88: lb          $v0, 0xE($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XE);
    // 0x00209A8C: mult        $v0, $t1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00209A90: mflo        $v1
    ctx->r3 = lo;
    // 0x00209A94: lb          $v0, 0xE($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XE);
    // 0x00209A98: nop

    // 0x00209A9C: mult        $v0, $s6
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00209AA0: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x00209AA4: mflo        $a2
    ctx->r6 = lo;
    // 0x00209AA8: addu        $v0, $v1, $a2
    ctx->r2 = ADD32(ctx->r3, ctx->r6);
    // 0x00209AAC: sra         $v0, $v0, 8
    ctx->r2 = S32(SIGNED(ctx->r2) >> 8);
    // 0x00209AB0: sb          $v0, 0xE($a3)
    MEM_B(0XE, ctx->r7) = ctx->r2;
    // 0x00209AB4: slt         $v0, $t0, $t2
    ctx->r2 = SIGNED(ctx->r8) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x00209AB8: bne         $v0, $zero, L_002099AC
    if (ctx->r2 != 0) {
        // 0x00209ABC: addiu       $a3, $a3, 0x10
        ctx->r7 = ADD32(ctx->r7, 0X10);
            goto L_002099AC;
    }
    // 0x00209ABC: addiu       $a3, $a3, 0x10
    ctx->r7 = ADD32(ctx->r7, 0X10);
L_00209AC0:
    // 0x00209AC0: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x00209AC4: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x00209AC8: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x00209ACC: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x00209AD0: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x00209AD4: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x00209AD8: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x00209ADC: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x00209AE0: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x00209AE4: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x00209AE8: ldc1        $f20, 0x60($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X60);
    // 0x00209AEC: jr          $ra
    // 0x00209AF0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x00209AF0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_00286B58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00286B58: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00286B5C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00286B60: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00286B64: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00286B68: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00286B6C: addiu       $a2, $s0, 0x20
    ctx->r6 = ADD32(ctx->r16, 0X20);
    // 0x00286B70: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00286B74: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00286B78: lw          $v0, 0x114($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X114);
    // 0x00286B7C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x00286B80: lw          $a0, 0xA44($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XA44);
    // 0x00286B84: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00286B88: addiu       $v1, $v1, -0x3CD0
    ctx->r3 = ADD32(ctx->r3, -0X3CD0);
    // 0x00286B8C: sw          $v0, 0x40($a2)
    MEM_W(0X40, ctx->r6) = ctx->r2;
    // 0x00286B90: lw          $a1, 0x11C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X11C);
    // 0x00286B94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00286B98: sw          $v0, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->r2;
    // 0x00286B9C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00286BA0: addiu       $v0, $v0, -0x3C00
    ctx->r2 = ADD32(ctx->r2, -0X3C00);
    // 0x00286BA4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00286BA8: sw          $v1, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->r3;
    // 0x00286BAC: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00286BB0: lw          $v1, 0xA48($v1)
    ctx->r3 = MEM_W(ctx->r3, 0XA48);
    // 0x00286BB4: sw          $v0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->r2;
    // 0x00286BB8: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x00286BBC: sw          $v0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->r2;
    // 0x00286BC0: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x00286BC4: sw          $v0, 0x2C($a2)
    MEM_W(0X2C, ctx->r6) = ctx->r2;
    // 0x00286BC8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00286BCC: addiu       $v0, $v0, 0x4000
    ctx->r2 = ADD32(ctx->r2, 0X4000);
    // 0x00286BD0: sw          $v0, 0x48($a2)
    MEM_W(0X48, ctx->r6) = ctx->r2;
    // 0x00286BD4: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
    // 0x00286BD8: sw          $v0, 0x4C($a2)
    MEM_W(0X4C, ctx->r6) = ctx->r2;
    // 0x00286BDC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00286BE0: addiu       $v0, $v0, -0x3C00
    ctx->r2 = ADD32(ctx->r2, -0X3C00);
    // 0x00286BE4: sw          $v0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->r2;
    // 0x00286BE8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00286BEC: addiu       $v0, $v0, -0x8C0
    ctx->r2 = ADD32(ctx->r2, -0X8C0);
    // 0x00286BF0: sw          $v0, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->r2;
    // 0x00286BF4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00286BF8: addiu       $v0, $v0, -0x52D8
    ctx->r2 = ADD32(ctx->r2, -0X52D8);
    // 0x00286BFC: sw          $zero, 0x14($a2)
    MEM_W(0X14, ctx->r6) = 0;
    // 0x00286C00: sw          $zero, 0x30($a2)
    MEM_W(0X30, ctx->r6) = 0;
    // 0x00286C04: sw          $zero, 0x34($a2)
    MEM_W(0X34, ctx->r6) = 0;
    // 0x00286C08: sw          $v1, 0x38($a2)
    MEM_W(0X38, ctx->r6) = ctx->r3;
    // 0x00286C0C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x00286C10: sw          $v1, 0x3C($a2)
    MEM_W(0X3C, ctx->r6) = ctx->r3;
    // 0x00286C14: sw          $a1, 0x44($a2)
    MEM_W(0X44, ctx->r6) = ctx->r5;
    // 0x00286C18: sw          $zero, 0x20($s0)
    MEM_W(0X20, ctx->r16) = 0;
    // 0x00286C1C: sw          $v0, 0x50($a2)
    MEM_W(0X50, ctx->r6) = ctx->r2;
    // 0x00286C20: addiu       $v0, $s0, 0xF0
    ctx->r2 = ADD32(ctx->r16, 0XF0);
    // 0x00286C24: sw          $v0, 0x54($a2)
    MEM_W(0X54, ctx->r6) = ctx->r2;
    // 0x00286C28: lw          $v0, 0x110($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X110);
    // 0x00286C2C: sw          $v0, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r2;
    // 0x00286C30: lw          $v0, 0x128($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X128);
    // 0x00286C34: bne         $v0, $zero, L_00286C40
    if (ctx->r2 != 0) {
        // 0x00286C38: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00286C40;
    }
    // 0x00286C38: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00286C3C: addiu       $v0, $zero, 0x23
    ctx->r2 = ADD32(0, 0X23);
L_00286C40:
    // 0x00286C40: sw          $v0, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r2;
    // 0x00286C44: lw          $v0, 0x128($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X128);
    // 0x00286C48: beq         $v0, $zero, L_00286D10
    if (ctx->r2 == 0) {
        // 0x00286C4C: addiu       $a2, $s0, 0x88
        ctx->r6 = ADD32(ctx->r16, 0X88);
            goto L_00286D10;
    }
    // 0x00286C4C: addiu       $a2, $s0, 0x88
    ctx->r6 = ADD32(ctx->r16, 0X88);
    // 0x00286C50: lw          $v0, 0x118($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X118);
    // 0x00286C54: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x00286C58: lw          $a0, 0xA44($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XA44);
    // 0x00286C5C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00286C60: addiu       $v1, $v1, -0x3CD0
    ctx->r3 = ADD32(ctx->r3, -0X3CD0);
    // 0x00286C64: sw          $v0, 0x40($a2)
    MEM_W(0X40, ctx->r6) = ctx->r2;
    // 0x00286C68: lw          $a1, 0x120($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X120);
    // 0x00286C6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00286C70: sw          $v0, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->r2;
    // 0x00286C74: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00286C78: addiu       $v0, $v0, -0x3C00
    ctx->r2 = ADD32(ctx->r2, -0X3C00);
    // 0x00286C7C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00286C80: sw          $v1, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->r3;
    // 0x00286C84: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00286C88: lw          $v1, 0xA48($v1)
    ctx->r3 = MEM_W(ctx->r3, 0XA48);
    // 0x00286C8C: sw          $v0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->r2;
    // 0x00286C90: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x00286C94: sw          $v0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->r2;
    // 0x00286C98: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x00286C9C: sw          $v0, 0x2C($a2)
    MEM_W(0X2C, ctx->r6) = ctx->r2;
    // 0x00286CA0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00286CA4: addiu       $v0, $v0, 0x4000
    ctx->r2 = ADD32(ctx->r2, 0X4000);
    // 0x00286CA8: sw          $v0, 0x48($a2)
    MEM_W(0X48, ctx->r6) = ctx->r2;
    // 0x00286CAC: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
    // 0x00286CB0: sw          $v0, 0x4C($a2)
    MEM_W(0X4C, ctx->r6) = ctx->r2;
    // 0x00286CB4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00286CB8: addiu       $v0, $v0, -0x2870
    ctx->r2 = ADD32(ctx->r2, -0X2870);
    // 0x00286CBC: sw          $v0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->r2;
    // 0x00286CC0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00286CC4: addiu       $v0, $v0, -0x4A0
    ctx->r2 = ADD32(ctx->r2, -0X4A0);
    // 0x00286CC8: sw          $v0, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->r2;
    // 0x00286CCC: addiu       $v0, $zero, 0x23
    ctx->r2 = ADD32(0, 0X23);
    // 0x00286CD0: sw          $zero, 0x14($a2)
    MEM_W(0X14, ctx->r6) = 0;
    // 0x00286CD4: sw          $zero, 0x30($a2)
    MEM_W(0X30, ctx->r6) = 0;
    // 0x00286CD8: sw          $zero, 0x34($a2)
    MEM_W(0X34, ctx->r6) = 0;
    // 0x00286CDC: sw          $v1, 0x38($a2)
    MEM_W(0X38, ctx->r6) = ctx->r3;
    // 0x00286CE0: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x00286CE4: sw          $v1, 0x3C($a2)
    MEM_W(0X3C, ctx->r6) = ctx->r3;
    // 0x00286CE8: sw          $a1, 0x44($a2)
    MEM_W(0X44, ctx->r6) = ctx->r5;
    // 0x00286CEC: sw          $zero, 0x88($s0)
    MEM_W(0X88, ctx->r16) = 0;
    // 0x00286CF0: sw          $v0, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r2;
    // 0x00286CF4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00286CF8: addiu       $v0, $v0, -0x52D8
    ctx->r2 = ADD32(ctx->r2, -0X52D8);
    // 0x00286CFC: sw          $v0, 0x50($a2)
    MEM_W(0X50, ctx->r6) = ctx->r2;
    // 0x00286D00: addiu       $v0, $s0, 0xF0
    ctx->r2 = ADD32(ctx->r16, 0XF0);
    // 0x00286D04: sw          $v0, 0x54($a2)
    MEM_W(0X54, ctx->r6) = ctx->r2;
    // 0x00286D08: lw          $v0, 0x110($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X110);
    // 0x00286D0C: sw          $v0, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r2;
L_00286D10:
    // 0x00286D10: jal         0x0029E3B0
    // 0x00286D14: nop

    func_0029E3B0(rdram, ctx);
        goto after_0;
    // 0x00286D14: nop

    after_0:
    // 0x00286D18: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x00286D1C: addiu       $s1, $s1, -0x5270
    ctx->r17 = ADD32(ctx->r17, -0X5270);
    // 0x00286D20: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00286D24: jal         0x0028B3E8
    // 0x00286D28: addiu       $a1, $s0, 0x20
    ctx->r5 = ADD32(ctx->r16, 0X20);
    func_0028B3E8(rdram, ctx);
        goto after_1;
    // 0x00286D28: addiu       $a1, $s0, 0x20
    ctx->r5 = ADD32(ctx->r16, 0X20);
    after_1:
    // 0x00286D2C: lw          $v0, 0x128($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X128);
    // 0x00286D30: beq         $v0, $zero, L_00286D40
    if (ctx->r2 == 0) {
        // 0x00286D34: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00286D40;
    }
    // 0x00286D34: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00286D38: jal         0x0028B3E8
    // 0x00286D3C: addiu       $a1, $s0, 0x88
    ctx->r5 = ADD32(ctx->r16, 0X88);
    func_0028B3E8(rdram, ctx);
        goto after_2;
    // 0x00286D3C: addiu       $a1, $s0, 0x88
    ctx->r5 = ADD32(ctx->r16, 0X88);
    after_2:
L_00286D40:
    // 0x00286D40: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00286D44: lw          $v1, 0x6D18($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6D18);
    // 0x00286D48: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00286D4C: lw          $v0, 0x2210($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2210);
    // 0x00286D50: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00286D54: divu        $zero, $v1, $v0
    lo = S32(U32(ctx->r3) / U32(ctx->r2)); hi = S32(U32(ctx->r3) % U32(ctx->r2));
    // 0x00286D58: bne         $v0, $zero, L_00286D64
    if (ctx->r2 != 0) {
        // 0x00286D5C: nop
    
            goto L_00286D64;
    }
    // 0x00286D5C: nop

    // 0x00286D60: break       7
    do_break(2649440);
L_00286D64:
    // 0x00286D64: mfhi        $a0
    ctx->r4 = hi;
    // 0x00286D68: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00286D6C: lw          $v0, 0x6D20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D20);
    // 0x00286D70: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
        turok2_patch_scale_frame_count(rdram, ctx);

    // 0x00286D74: sw          $v1, 0x6D18($at)
    MEM_W(0X6D18, ctx->r1) = ctx->r3;
    // 0x00286D78: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00286D7C: lw          $v1, 0x6D1C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6D1C);
    // 0x00286D80: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00286D84: xori        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 ^ 0X1;
    // 0x00286D88: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
        turok2_patch_scale_frame_aux(rdram, ctx);

    // 0x00286D8C: sw          $v0, 0x6D20($at)
    MEM_W(0X6D20, ctx->r1) = ctx->r2;
    // 0x00286D90: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00286D94: sw          $v1, 0x6D1C($at)
    MEM_W(0X6D1C, ctx->r1) = ctx->r3;
    // 0x00286D98: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x00286D9C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x00286DA0: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x00286DA4: addu        $v0, $s2, $v0
    ctx->r2 = ADD32(ctx->r18, ctx->r2);
    // 0x00286DA8: beq         $v1, $zero, L_00286DC0
    if (ctx->r3 == 0) {
        // 0x00286DAC: sw          $v0, 0x3C0($s2)
        MEM_W(0X3C0, ctx->r18) = ctx->r2;
            goto L_00286DC0;
    }
    // 0x00286DAC: sw          $v0, 0x3C0($s2)
    MEM_W(0X3C0, ctx->r18) = ctx->r2;
    // 0x00286DB0: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00286DB4: lw          $v1, 0xA84($v1)
    ctx->r3 = MEM_W(ctx->r3, 0XA84);
    // 0x00286DB8: j           L_00286DCC
    // 0x00286DBC: sw          $v1, 0x114($v0)
    MEM_W(0X114, ctx->r2) = ctx->r3;
        goto L_00286DCC;
    // 0x00286DBC: sw          $v1, 0x114($v0)
    MEM_W(0X114, ctx->r2) = ctx->r3;
L_00286DC0:
    // 0x00286DC0: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00286DC4: lw          $v1, 0xA80($v1)
    ctx->r3 = MEM_W(ctx->r3, 0XA80);
    // 0x00286DC8: sw          $v1, 0x114($v0)
    MEM_W(0X114, ctx->r2) = ctx->r3;
L_00286DCC:
    // 0x00286DCC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00286DD0: lw          $v0, 0x6D1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D1C);
    // 0x00286DD4: lw          $a0, 0x3C0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X3C0);
    // 0x00286DD8: beq         $v0, $zero, L_00286DF0
    if (ctx->r2 == 0) {
        // 0x00286DDC: nop
    
            goto L_00286DF0;
    }
    // 0x00286DDC: nop

    // 0x00286DE0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00286DE4: lw          $v0, 0xA4C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XA4C);
    // 0x00286DE8: j           L_00286DFC
    // 0x00286DEC: sw          $v0, 0x118($a0)
    MEM_W(0X118, ctx->r4) = ctx->r2;
        goto L_00286DFC;
    // 0x00286DEC: sw          $v0, 0x118($a0)
    MEM_W(0X118, ctx->r4) = ctx->r2;
L_00286DF0:
    // 0x00286DF0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00286DF4: lw          $v0, 0xA50($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XA50);
    // 0x00286DF8: sw          $v0, 0x118($a0)
    MEM_W(0X118, ctx->r4) = ctx->r2;
L_00286DFC:
    // 0x00286DFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00286E00: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00286E04: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00286E08: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00286E0C: jr          $ra
    // 0x00286E10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00286E10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0028D714(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028D714: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0028D718: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x0028D71C: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0028D720: addiu       $v1, $v1, 0x75F0
    ctx->r3 = ADD32(ctx->r3, 0X75F0);
    // 0x0028D724: sltu        $v0, $a0, $v1
    ctx->r2 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x0028D728: bne         $v0, $zero, L_0028D73C
    if (ctx->r2 != 0) {
        // 0x0028D72C: addiu       $v0, $v1, 0x10
        ctx->r2 = ADD32(ctx->r3, 0X10);
            goto L_0028D73C;
    }
    // 0x0028D72C: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x0028D730: sltu        $v0, $a0, $v0
    ctx->r2 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x0028D734: bne         $v0, $zero, L_0028D74C
    if (ctx->r2 != 0) {
        // 0x0028D738: nop
    
            goto L_0028D74C;
    }
    // 0x0028D738: nop

L_0028D73C:
    // 0x0028D73C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0028D740: addiu       $v0, $v0, 0x690
    ctx->r2 = ADD32(ctx->r2, 0X690);
    // 0x0028D744: bne         $a0, $v0, L_0028D754
    if (ctx->r4 != ctx->r2) {
        // 0x0028D748: nop
    
            goto L_0028D754;
    }
    // 0x0028D748: nop

L_0028D74C:
    // 0x0028D74C: jr          $ra
    // 0x0028D750: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0028D750: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0028D754:
    // 0x0028D754: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0028D758: lw          $v0, 0x690($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X690);
    // 0x0028D75C: bne         $v0, $zero, L_0028D80C
    if (ctx->r2 != 0) {
        // 0x0028D760: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0028D80C;
    }
    // 0x0028D760: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0028D764: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0028D768: addiu       $v1, $v1, -0xD70
    ctx->r3 = ADD32(ctx->r3, -0XD70);
    // 0x0028D76C: sltu        $v0, $a0, $v1
    ctx->r2 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x0028D770: bne         $v0, $zero, L_0028D784
    if (ctx->r2 != 0) {
        // 0x0028D774: addiu       $v0, $v1, 0x1400
        ctx->r2 = ADD32(ctx->r3, 0X1400);
            goto L_0028D784;
    }
    // 0x0028D774: addiu       $v0, $v1, 0x1400
    ctx->r2 = ADD32(ctx->r3, 0X1400);
    // 0x0028D778: sltu        $v0, $a0, $v0
    ctx->r2 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x0028D77C: bne         $v0, $zero, L_0028D74C
    if (ctx->r2 != 0) {
        // 0x0028D780: nop
    
            goto L_0028D74C;
    }
    // 0x0028D780: nop

L_0028D784:
    // 0x0028D784: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0028D788: addiu       $v1, $v1, -0x5528
    ctx->r3 = ADD32(ctx->r3, -0X5528);
    // 0x0028D78C: sltu        $v0, $a0, $v1
    ctx->r2 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x0028D790: bne         $v0, $zero, L_0028D7A4
    if (ctx->r2 != 0) {
        // 0x0028D794: addiu       $v0, $v1, 0x184
        ctx->r2 = ADD32(ctx->r3, 0X184);
            goto L_0028D7A4;
    }
    // 0x0028D794: addiu       $v0, $v1, 0x184
    ctx->r2 = ADD32(ctx->r3, 0X184);
    // 0x0028D798: sltu        $v0, $a0, $v0
    ctx->r2 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x0028D79C: bne         $v0, $zero, L_0028D74C
    if (ctx->r2 != 0) {
        // 0x0028D7A0: nop
    
            goto L_0028D74C;
    }
    // 0x0028D7A0: nop

L_0028D7A4:
    // 0x0028D7A4: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0028D7A8: addiu       $v1, $v1, -0x4540
    ctx->r3 = ADD32(ctx->r3, -0X4540);
    // 0x0028D7AC: sltu        $v0, $a0, $v1
    ctx->r2 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x0028D7B0: bne         $v0, $zero, L_0028D7C4
    if (ctx->r2 != 0) {
        // 0x0028D7B4: addiu       $v0, $v1, 0x5800
        ctx->r2 = ADD32(ctx->r3, 0X5800);
            goto L_0028D7C4;
    }
    // 0x0028D7B4: addiu       $v0, $v1, 0x5800
    ctx->r2 = ADD32(ctx->r3, 0X5800);
    // 0x0028D7B8: sltu        $v0, $a0, $v0
    ctx->r2 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x0028D7BC: bne         $v0, $zero, L_0028D74C
    if (ctx->r2 != 0) {
        // 0x0028D7C0: nop
    
            goto L_0028D74C;
    }
    // 0x0028D7C0: nop

L_0028D7C4:
    // 0x0028D7C4: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x0028D7C8: addiu       $v1, $v1, 0x6AC0
    ctx->r3 = ADD32(ctx->r3, 0X6AC0);
    // 0x0028D7CC: sltu        $v0, $a0, $v1
    ctx->r2 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x0028D7D0: bne         $v0, $zero, L_0028D7E4
    if (ctx->r2 != 0) {
        // 0x0028D7D4: addiu       $v0, $v1, 0x5000
        ctx->r2 = ADD32(ctx->r3, 0X5000);
            goto L_0028D7E4;
    }
    // 0x0028D7D4: addiu       $v0, $v1, 0x5000
    ctx->r2 = ADD32(ctx->r3, 0X5000);
    // 0x0028D7D8: sltu        $v0, $a0, $v0
    ctx->r2 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x0028D7DC: bne         $v0, $zero, L_0028D74C
    if (ctx->r2 != 0) {
        // 0x0028D7E0: nop
    
            goto L_0028D74C;
    }
    // 0x0028D7E0: nop

L_0028D7E4:
    // 0x0028D7E4: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0028D7E8: addiu       $v1, $v1, -0x5350
    ctx->r3 = ADD32(ctx->r3, -0X5350);
    // 0x0028D7EC: sltu        $v0, $a0, $v1
    ctx->r2 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x0028D7F0: bne         $v0, $zero, L_0028D80C
    if (ctx->r2 != 0) {
        // 0x0028D7F4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0028D80C;
    }
    // 0x0028D7F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0028D7F8: addiu       $v1, $v1, 0x4C
    ctx->r3 = ADD32(ctx->r3, 0X4C);
    // 0x0028D7FC: sltu        $v1, $v1, $a0
    ctx->r3 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x0028D800: beq         $v1, $zero, L_0028D80C
    if (ctx->r3 == 0) {
        // 0x0028D804: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0028D80C;
    }
    // 0x0028D804: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0028D808: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0028D80C:
    // 0x0028D80C: jr          $ra
    // 0x0028D810: nop

    return;
    // 0x0028D810: nop

;}
RECOMP_FUNC void func_0027672C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027672C: lw          $a2, 0x8($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X8);
    // 0x00276730: addiu       $v0, $a0, 0x4
    ctx->r2 = ADD32(ctx->r4, 0X4);
    // 0x00276734: beq         $a2, $v0, L_00276788
    if (ctx->r6 == ctx->r2) {
        // 0x00276738: addiu       $t1, $a0, 0xD8
        ctx->r9 = ADD32(ctx->r4, 0XD8);
            goto L_00276788;
    }
    // 0x00276738: addiu       $t1, $a0, 0xD8
    ctx->r9 = ADD32(ctx->r4, 0XD8);
    // 0x0027673C: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
L_00276740:
    // 0x00276740: lw          $v0, 0xBC($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XBC);
    // 0x00276744: lw          $a3, 0x4($a2)
    ctx->r7 = MEM_W(ctx->r6, 0X4);
    // 0x00276748: bnel        $v0, $a1, L_00276780
    if (ctx->r2 != ctx->r5) {
        // 0x0027674C: addu        $a2, $a3, $zero
        ctx->r6 = ADD32(ctx->r7, 0);
            goto L_00276780;
    }
    goto skip_0;
    // 0x0027674C: addu        $a2, $a3, $zero
    ctx->r6 = ADD32(ctx->r7, 0);
    skip_0:
    // 0x00276750: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x00276754: sw          $a3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r7;
    // 0x00276758: lw          $v1, 0x4($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X4);
    // 0x0027675C: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x00276760: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00276764: lw          $v0, 0xD8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD8);
    // 0x00276768: sw          $t1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r9;
    // 0x0027676C: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x00276770: lw          $v0, 0xD8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD8);
    // 0x00276774: sw          $a2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r6;
    // 0x00276778: sw          $a2, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->r6;
    // 0x0027677C: addu        $a2, $a3, $zero
    ctx->r6 = ADD32(ctx->r7, 0);
L_00276780:
    // 0x00276780: bne         $a2, $t0, L_00276740
    if (ctx->r6 != ctx->r8) {
        // 0x00276784: nop
    
            goto L_00276740;
    }
    // 0x00276784: nop

L_00276788:
    // 0x00276788: jr          $ra
    // 0x0027678C: nop

    return;
    // 0x0027678C: nop

;}
RECOMP_FUNC void func_00462DE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00462DE4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00462DE8: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x00462DEC: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x00462DF0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00462DF4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x00462DF8: addu        $v1, $a1, $a0
    ctx->r3 = ADD32(ctx->r5, ctx->r4);
L_00462DFC:
    // 0x00462DFC: lbu         $v0, 0x65($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X65);
    // 0x00462E00: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00462E04: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x00462E08: slti        $v0, $a0, 0x20
    ctx->r2 = SIGNED(ctx->r4) < 0X20 ? 1 : 0;
    // 0x00462E0C: bne         $v0, $zero, L_00462DFC
    if (ctx->r2 != 0) {
        // 0x00462E10: addu        $v1, $a1, $a0
        ctx->r3 = ADD32(ctx->r5, ctx->r4);
            goto L_00462DFC;
    }
    // 0x00462E10: addu        $v1, $a1, $a0
    ctx->r3 = ADD32(ctx->r5, ctx->r4);
    // 0x00462E14: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x00462E18: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00462E1C: lw          $a0, 0x4($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X4);
    // 0x00462E20: lw          $a1, 0x8($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X8);
    // 0x00462E24: jal         0x00299A40
    // 0x00462E28: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    func_00299A40(rdram, ctx);
        goto after_0;
    // 0x00462E28: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x00462E2C: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x00462E30: jr          $ra
    // 0x00462E34: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00462E34: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_004408B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0040799C:
    // 0x004408B8: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x004408BC: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x004408C0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x004408C4: sw          $s2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r18;
    // 0x004408C8: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x004408CC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x004408D0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x004408D4: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x004408D8: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x004408DC: addiu       $s0, $s0, 0x1F50
    ctx->r16 = ADD32(ctx->r16, 0X1F50);
    // 0x004408E0: sw          $ra, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r31;
    // 0x004408E4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x004408E8: addu        $v1, $a3, $zero
    ctx->r3 = ADD32(ctx->r7, 0);
    // 0x004408EC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x004408F0: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x004408F4: jal         0x00246108
    // 0x004408F8: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x004408F8: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x004408FC: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x00440900: ori         $v1, $v1, 0x7FFF
    ctx->r3 = ctx->r3 | 0X7FFF;
    // 0x00440904: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00440908: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0044090C: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x00440910: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x00440914: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00440918: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x0044091C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00440920: jal         0x00245BAC
    // 0x00440924: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x00440924: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    after_1:
    // 0x00440928: lb          $v0, 0xC7($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XC7);
    // 0x0044092C: beq         $v0, $zero, L_004409A4
    if (ctx->r2 == 0) {
        // 0x00440930: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_004409A4;
    }
    // 0x00440930: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00440934: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x00440938: addiu       $a0, $a0, -0x5FC
    ctx->r4 = ADD32(ctx->r4, -0X5FC);
    // 0x0044093C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00440940: lwc1        $f0, 0x550($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X550);
    // 0x00440944: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00440948: swc1        $f0, 0x1FC($s1)
    MEM_W(0X1FC, ctx->r17) = ctx->f0.u32l;
    // 0x0044094C: lw          $v1, -0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, -0X2C);
    // 0x00440950: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x00440954: beql        $v1, $v0, L_0044097C
    if (ctx->r3 == ctx->r2) {
        // 0x00440958: sw          $v0, -0x28($a0)
        MEM_W(-0X28, ctx->r4) = ctx->r2;
            goto L_0044097C;
    }
    goto skip_0;
    // 0x00440958: sw          $v0, -0x28($a0)
    MEM_W(-0X28, ctx->r4) = ctx->r2;
    skip_0:
    // 0x0044095C: lwc1        $f1, 0x3C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X3C);
    // 0x00440960: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00440964: lwc1        $f0, 0x554($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X554);
    // 0x00440968: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0044096C: nop

    // 0x00440970: bc1fl       L_0044098C
    if (!c1cs) {
        // 0x00440974: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0044098C;
    }
    goto skip_1;
    // 0x00440974: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_1:
    // 0x00440978: sw          $v0, -0x28($a0)
    MEM_W(-0X28, ctx->r4) = ctx->r2;
L_0044097C:
    // 0x0044097C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00440980: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00440984: j           L_0040799C
    // 0x00440988: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    entry_0040799C(rdram, ctx);
    return;
    // 0x00440988: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_0044098C:
    // 0x0044098C: bne         $v1, $v0, L_004409A4
    if (ctx->r3 != ctx->r2) {
        // 0x00440990: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_004409A4;
    }
    // 0x00440990: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00440994: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00440998: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x0044099C: jal         0x00243414
    // 0x004409A0: nop

    func_00243414(rdram, ctx);
        goto after_2;
    // 0x004409A0: nop

    after_2:
L_004409A4:
    // 0x004409A4: lw          $ra, 0xAC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XAC);
    // 0x004409A8: lw          $s2, 0xA8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA8);
    // 0x004409AC: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x004409B0: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x004409B4: jr          $ra
    // 0x004409B8: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x004409B8: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_0027B4FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027B4FC: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x0027B500: addu        $t1, $a0, $zero
    ctx->r9 = ADD32(ctx->r4, 0);
    // 0x0027B504: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x0027B508: addu        $fp, $a2, $zero
    ctx->r30 = ADD32(ctx->r6, 0);
    // 0x0027B50C: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x0027B510: addiu       $s2, $t1, 0x8
    ctx->r18 = ADD32(ctx->r9, 0X8);
    // 0x0027B514: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x0027B518: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x0027B51C: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x0027B520: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x0027B524: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x0027B528: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x0027B52C: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x0027B530: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x0027B534: lhu         $s6, 0x2($t1)
    ctx->r22 = MEM_HU(ctx->r9, 0X2);
    // 0x0027B538: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0027B53C: addiu       $s6, $s6, -0x1
    ctx->r22 = ADD32(ctx->r22, -0X1);
    // 0x0027B540: beq         $s6, $v0, L_0027B5E4
    if (ctx->r22 == ctx->r2) {
        // 0x0027B544: addu        $s5, $zero, $zero
        ctx->r21 = ADD32(0, 0);
            goto L_0027B5E4;
    }
    // 0x0027B544: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
    // 0x0027B548: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x0027B54C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x0027B550: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
L_0027B554:
    // 0x0027B554: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x0027B558: lhu         $s3, 0x0($t1)
    ctx->r19 = MEM_HU(ctx->r9, 0X0);
    // 0x0027B55C: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x0027B560: beq         $s3, $t0, L_0027B5D8
    if (ctx->r19 == ctx->r8) {
        // 0x0027B564: sra         $s4, $t2, 16
        ctx->r20 = S32(SIGNED(ctx->r10) >> 16);
            goto L_0027B5D8;
    }
    // 0x0027B564: sra         $s4, $t2, 16
    ctx->r20 = S32(SIGNED(ctx->r10) >> 16);
    // 0x0027B568: sll         $s7, $fp, 16
    ctx->r23 = S32(ctx->r30 << 16);
    // 0x0027B56C: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_0027B570:
    // 0x0027B570: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x0027B574: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    // 0x0027B578: addiu       $a0, $s2, 0x8
    ctx->r4 = ADD32(ctx->r18, 0X8);
    // 0x0027B57C: lw          $s5, 0x4($s2)
    ctx->r21 = MEM_W(ctx->r18, 0X4);
    // 0x0027B580: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x0027B584: sra         $a3, $s7, 16
    ctx->r7 = S32(SIGNED(ctx->r23) >> 16);
    // 0x0027B588: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x0027B58C: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x0027B590: mult        $v0, $s5
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0027B594: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x0027B598: addu        $s4, $s4, $v0
    ctx->r20 = ADD32(ctx->r20, ctx->r2);
    // 0x0027B59C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0027B5A0: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x0027B5A4: mflo        $s1
    ctx->r17 = lo;
    // 0x0027B5A8: sll         $s0, $s1, 1
    ctx->r16 = S32(ctx->r17 << 1);
    // 0x0027B5AC: addiu       $a1, $s0, 0x8
    ctx->r5 = ADD32(ctx->r16, 0X8);
    // 0x0027B5B0: jal         0x00279158
    // 0x0027B5B4: addu        $a1, $s2, $a1
    ctx->r5 = ADD32(ctx->r18, ctx->r5);
    func_00279158(rdram, ctx);
        goto after_0;
    // 0x0027B5B4: addu        $a1, $s2, $a1
    ctx->r5 = ADD32(ctx->r18, ctx->r5);
    after_0:
    // 0x0027B5B8: srl         $s1, $s1, 1
    ctx->r17 = S32(U32(ctx->r17) >> 1);
    // 0x0027B5BC: addu        $s0, $s0, $s1
    ctx->r16 = ADD32(ctx->r16, ctx->r17);
    // 0x0027B5C0: addu        $s2, $s2, $s0
    ctx->r18 = ADD32(ctx->r18, ctx->r16);
    // 0x0027B5C4: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x0027B5C8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x0027B5CC: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x0027B5D0: bne         $s3, $v1, L_0027B570
    if (ctx->r19 != ctx->r3) {
        // 0x0027B5D4: addiu       $s2, $s2, 0x8
        ctx->r18 = ADD32(ctx->r18, 0X8);
            goto L_0027B570;
    }
    // 0x0027B5D4: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
L_0027B5D8:
    // 0x0027B5D8: addiu       $s6, $s6, -0x1
    ctx->r22 = ADD32(ctx->r22, -0X1);
    // 0x0027B5DC: bne         $s6, $t0, L_0027B554
    if (ctx->r22 != ctx->r8) {
        // 0x0027B5E0: addu        $fp, $fp, $s5
        ctx->r30 = ADD32(ctx->r30, ctx->r21);
            goto L_0027B554;
    }
    // 0x0027B5E0: addu        $fp, $fp, $s5
    ctx->r30 = ADD32(ctx->r30, ctx->r21);
L_0027B5E4:
    // 0x0027B5E4: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x0027B5E8: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x0027B5EC: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x0027B5F0: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x0027B5F4: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x0027B5F8: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x0027B5FC: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x0027B600: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x0027B604: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x0027B608: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0027B60C: jr          $ra
    // 0x0027B610: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x0027B610: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_0028BDFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028BDFC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0028BE00: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0028BE04: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x0028BE08: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0028BE0C: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0028BE10: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x0028BE14: addu        $s6, $a2, $zero
    ctx->r22 = ADD32(ctx->r6, 0);
    // 0x0028BE18: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0028BE1C: addu        $s1, $s4, $zero
    ctx->r17 = ADD32(ctx->r20, 0);
    // 0x0028BE20: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x0028BE24: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x0028BE28: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0028BE2C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0028BE30: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x0028BE34: andi        $a3, $a3, 0xFF
    ctx->r7 = ctx->r7 & 0XFF;
    // 0x0028BE38: bne         $v0, $a3, L_0028BE50
    if (ctx->r2 != ctx->r7) {
        // 0x0028BE3C: addu        $s5, $s4, $s2
        ctx->r21 = ADD32(ctx->r20, ctx->r18);
            goto L_0028BE50;
    }
    // 0x0028BE3C: addu        $s5, $s4, $s2
    ctx->r21 = ADD32(ctx->r20, ctx->r18);
    // 0x0028BE40: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_0028BE44:
    // 0x0028BE44: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x0028BE48: beql        $v0, $a3, L_0028BE44
    if (ctx->r2 == ctx->r7) {
        // 0x0028BE4C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_0028BE44;
    }
    goto skip_0;
    // 0x0028BE4C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
L_0028BE50:
    // 0x0028BE50: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0028BE54: addiu       $s0, $s0, -0x5F10
    ctx->r16 = ADD32(ctx->r16, -0X5F10);
    // 0x0028BE58: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BE5C: beq         $v0, $zero, L_0028BE7C
    if (ctx->r2 == 0) {
        // 0x0028BE60: nop
    
            goto L_0028BE7C;
    }
    // 0x0028BE60: nop

L_0028BE64:
    // 0x0028BE64: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BE68: jal         0x0028B430
    // 0x0028BE6C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_0;
    // 0x0028BE6C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_0:
    // 0x0028BE70: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BE74: bne         $v0, $zero, L_0028BE64
    if (ctx->r2 != 0) {
        // 0x0028BE78: nop
    
            goto L_0028BE64;
    }
    // 0x0028BE78: nop

L_0028BE7C:
    // 0x0028BE7C: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0028BE80: addiu       $s0, $s0, -0x5F0C
    ctx->r16 = ADD32(ctx->r16, -0X5F0C);
    // 0x0028BE84: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BE88: beq         $v0, $zero, L_0028BEA8
    if (ctx->r2 == 0) {
        // 0x0028BE8C: nop
    
            goto L_0028BEA8;
    }
    // 0x0028BE8C: nop

L_0028BE90:
    // 0x0028BE90: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BE94: jal         0x0028B430
    // 0x0028BE98: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_1;
    // 0x0028BE98: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_1:
    // 0x0028BE9C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BEA0: bne         $v0, $zero, L_0028BE90
    if (ctx->r2 != 0) {
        // 0x0028BEA4: nop
    
            goto L_0028BE90;
    }
    // 0x0028BEA4: nop

L_0028BEA8:
    // 0x0028BEA8: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0028BEAC: addiu       $s0, $s0, -0x5F00
    ctx->r16 = ADD32(ctx->r16, -0X5F00);
    // 0x0028BEB0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BEB4: beql        $v0, $zero, L_0028BED8
    if (ctx->r2 == 0) {
        // 0x0028BEB8: addu        $s2, $s4, $s2
        ctx->r18 = ADD32(ctx->r20, ctx->r18);
            goto L_0028BED8;
    }
    goto skip_1;
    // 0x0028BEB8: addu        $s2, $s4, $s2
    ctx->r18 = ADD32(ctx->r20, ctx->r18);
    skip_1:
L_0028BEBC:
    // 0x0028BEBC: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BEC0: jal         0x0028B430
    // 0x0028BEC4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_2;
    // 0x0028BEC4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_2:
    // 0x0028BEC8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BECC: bne         $v0, $zero, L_0028BEBC
    if (ctx->r2 != 0) {
        // 0x0028BED0: nop
    
            goto L_0028BEBC;
    }
    // 0x0028BED0: nop

    // 0x0028BED4: addu        $s2, $s4, $s2
    ctx->r18 = ADD32(ctx->r20, ctx->r18);
L_0028BED8:
    // 0x0028BED8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0028BEDC: addiu       $s3, $zero, 0x3
    ctx->r19 = ADD32(0, 0X3);
    // 0x0028BEE0: subu        $a0, $s3, $s0
    ctx->r4 = SUB32(ctx->r19, ctx->r16);
L_0028BEE4:
    // 0x0028BEE4: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x0028BEE8: jal         0x0028CD68
    // 0x0028BEEC: srlv        $a0, $s2, $a0
    ctx->r4 = S32(U32(ctx->r18) >> (ctx->r4 & 31));
    func_0028CD68(rdram, ctx);
        goto after_3;
    // 0x0028BEEC: srlv        $a0, $s2, $a0
    ctx->r4 = S32(U32(ctx->r18) >> (ctx->r4 & 31));
    after_3:
    // 0x0028BEF0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0028BEF4: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x0028BEF8: bnel        $v0, $zero, L_0028BEE4
    if (ctx->r2 != 0) {
        // 0x0028BEFC: subu        $a0, $s3, $s0
        ctx->r4 = SUB32(ctx->r19, ctx->r16);
            goto L_0028BEE4;
    }
    goto skip_2;
    // 0x0028BEFC: subu        $a0, $s3, $s0
    ctx->r4 = SUB32(ctx->r19, ctx->r16);
    skip_2:
    // 0x0028BF00: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0028BF04: addiu       $s0, $s0, -0x5EF8
    ctx->r16 = ADD32(ctx->r16, -0X5EF8);
    // 0x0028BF08: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BF0C: beql        $v0, $zero, L_0028BF30
    if (ctx->r2 == 0) {
        // 0x0028BF10: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0028BF30;
    }
    goto skip_3;
    // 0x0028BF10: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_3:
L_0028BF14:
    // 0x0028BF14: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BF18: jal         0x0028B430
    // 0x0028BF1C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_4;
    // 0x0028BF1C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_4:
    // 0x0028BF20: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BF24: bne         $v0, $zero, L_0028BF14
    if (ctx->r2 != 0) {
        // 0x0028BF28: nop
    
            goto L_0028BF14;
    }
    // 0x0028BF28: nop

    // 0x0028BF2C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_0028BF30:
    // 0x0028BF30: addiu       $s2, $zero, 0x3
    ctx->r18 = ADD32(0, 0X3);
    // 0x0028BF34: subu        $a0, $s2, $s0
    ctx->r4 = SUB32(ctx->r18, ctx->r16);
L_0028BF38:
    // 0x0028BF38: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x0028BF3C: jal         0x0028CD68
    // 0x0028BF40: srlv        $a0, $s4, $a0
    ctx->r4 = S32(U32(ctx->r20) >> (ctx->r4 & 31));
    func_0028CD68(rdram, ctx);
        goto after_5;
    // 0x0028BF40: srlv        $a0, $s4, $a0
    ctx->r4 = S32(U32(ctx->r20) >> (ctx->r4 & 31));
    after_5:
    // 0x0028BF44: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0028BF48: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x0028BF4C: bnel        $v0, $zero, L_0028BF38
    if (ctx->r2 != 0) {
        // 0x0028BF50: subu        $a0, $s2, $s0
        ctx->r4 = SUB32(ctx->r18, ctx->r16);
            goto L_0028BF38;
    }
    goto skip_4;
    // 0x0028BF50: subu        $a0, $s2, $s0
    ctx->r4 = SUB32(ctx->r18, ctx->r16);
    skip_4:
    // 0x0028BF54: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0028BF58: addiu       $s0, $s0, -0x5EF0
    ctx->r16 = ADD32(ctx->r16, -0X5EF0);
    // 0x0028BF5C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BF60: beql        $v0, $zero, L_0028BF84
    if (ctx->r2 == 0) {
        // 0x0028BF64: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0028BF84;
    }
    goto skip_5;
    // 0x0028BF64: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_5:
L_0028BF68:
    // 0x0028BF68: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BF6C: jal         0x0028B430
    // 0x0028BF70: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_6;
    // 0x0028BF70: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_6:
    // 0x0028BF74: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BF78: bne         $v0, $zero, L_0028BF68
    if (ctx->r2 != 0) {
        // 0x0028BF7C: nop
    
            goto L_0028BF68;
    }
    // 0x0028BF7C: nop

    // 0x0028BF80: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_0028BF84:
    // 0x0028BF84: addiu       $s2, $zero, 0x3
    ctx->r18 = ADD32(0, 0X3);
    // 0x0028BF88: subu        $a0, $s2, $s0
    ctx->r4 = SUB32(ctx->r18, ctx->r16);
L_0028BF8C:
    // 0x0028BF8C: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x0028BF90: jal         0x0028CD68
    // 0x0028BF94: srlv        $a0, $s1, $a0
    ctx->r4 = S32(U32(ctx->r17) >> (ctx->r4 & 31));
    func_0028CD68(rdram, ctx);
        goto after_7;
    // 0x0028BF94: srlv        $a0, $s1, $a0
    ctx->r4 = S32(U32(ctx->r17) >> (ctx->r4 & 31));
    after_7:
    // 0x0028BF98: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0028BF9C: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x0028BFA0: bnel        $v0, $zero, L_0028BF8C
    if (ctx->r2 != 0) {
        // 0x0028BFA4: subu        $a0, $s2, $s0
        ctx->r4 = SUB32(ctx->r18, ctx->r16);
            goto L_0028BF8C;
    }
    goto skip_6;
    // 0x0028BFA4: subu        $a0, $s2, $s0
    ctx->r4 = SUB32(ctx->r18, ctx->r16);
    skip_6:
    // 0x0028BFA8: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0028BFAC: addiu       $s0, $s0, -0x5EE8
    ctx->r16 = ADD32(ctx->r16, -0X5EE8);
    // 0x0028BFB0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BFB4: beq         $v0, $zero, L_0028BFD4
    if (ctx->r2 == 0) {
        // 0x0028BFB8: nop
    
            goto L_0028BFD4;
    }
    // 0x0028BFB8: nop

L_0028BFBC:
    // 0x0028BFBC: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BFC0: jal         0x0028B430
    // 0x0028BFC4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_8;
    // 0x0028BFC4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_8:
    // 0x0028BFC8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BFCC: bne         $v0, $zero, L_0028BFBC
    if (ctx->r2 != 0) {
        // 0x0028BFD0: nop
    
            goto L_0028BFBC;
    }
    // 0x0028BFD0: nop

L_0028BFD4:
    // 0x0028BFD4: lw          $s2, 0xD4($s6)
    ctx->r18 = MEM_W(ctx->r22, 0XD4);
    // 0x0028BFD8: ori         $v0, $zero, 0xF7A9
    ctx->r2 = 0 | 0XF7A9;
    // 0x0028BFDC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028BFE0: sh          $v0, -0xE7C($at)
    MEM_H(-0XE7C, ctx->r1) = ctx->r2;
    // 0x0028BFE4: sltu        $v0, $s2, $s5
    ctx->r2 = ctx->r18 < ctx->r21 ? 1 : 0;
    // 0x0028BFE8: beq         $v0, $zero, L_0028C07C
    if (ctx->r2 == 0) {
        // 0x0028BFEC: addiu       $s3, $zero, 0x1
        ctx->r19 = ADD32(0, 0X1);
            goto L_0028C07C;
    }
    // 0x0028BFEC: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x0028BFF0: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
    // 0x0028BFF4: slti        $v0, $s3, 0x6
    ctx->r2 = SIGNED(ctx->r19) < 0X6 ? 1 : 0;
L_0028BFF8:
    // 0x0028BFF8: beq         $v0, $zero, L_0028C07C
    if (ctx->r2 == 0) {
        // 0x0028BFFC: nop
    
            goto L_0028C07C;
    }
    // 0x0028BFFC: nop

    // 0x0028C000: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x0028C004: jal         0x00267024
    // 0x0028C008: nop

    func_00267024(rdram, ctx);
        goto after_9;
    // 0x0028C008: nop

    after_9:
    // 0x0028C00C: beql        $v0, $zero, L_0028C070
    if (ctx->r2 == 0) {
        // 0x0028C010: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_0028C070;
    }
    goto skip_7;
    // 0x0028C010: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    skip_7:
    // 0x0028C014: lw          $s1, 0x0($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X0);
    // 0x0028C018: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0028C01C: subu        $a0, $s4, $s0
    ctx->r4 = SUB32(ctx->r20, ctx->r16);
L_0028C020:
    // 0x0028C020: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x0028C024: jal         0x0028CD68
    // 0x0028C028: srlv        $a0, $s1, $a0
    ctx->r4 = S32(U32(ctx->r17) >> (ctx->r4 & 31));
    func_0028CD68(rdram, ctx);
        goto after_10;
    // 0x0028C028: srlv        $a0, $s1, $a0
    ctx->r4 = S32(U32(ctx->r17) >> (ctx->r4 & 31));
    after_10:
    // 0x0028C02C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0028C030: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x0028C034: bnel        $v0, $zero, L_0028C020
    if (ctx->r2 != 0) {
        // 0x0028C038: subu        $a0, $s4, $s0
        ctx->r4 = SUB32(ctx->r20, ctx->r16);
            goto L_0028C020;
    }
    goto skip_8;
    // 0x0028C038: subu        $a0, $s4, $s0
    ctx->r4 = SUB32(ctx->r20, ctx->r16);
    skip_8:
    // 0x0028C03C: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0028C040: addiu       $s0, $s0, -0x5F10
    ctx->r16 = ADD32(ctx->r16, -0X5F10);
    // 0x0028C044: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C048: beql        $v0, $zero, L_0028C06C
    if (ctx->r2 == 0) {
        // 0x0028C04C: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_0028C06C;
    }
    goto skip_9;
    // 0x0028C04C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_9:
L_0028C050:
    // 0x0028C050: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C054: jal         0x0028B430
    // 0x0028C058: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_11;
    // 0x0028C058: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_11:
    // 0x0028C05C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C060: bne         $v0, $zero, L_0028C050
    if (ctx->r2 != 0) {
        // 0x0028C064: nop
    
            goto L_0028C050;
    }
    // 0x0028C064: nop

    // 0x0028C068: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_0028C06C:
    // 0x0028C06C: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_0028C070:
    // 0x0028C070: sltu        $v0, $s2, $s5
    ctx->r2 = ctx->r18 < ctx->r21 ? 1 : 0;
    // 0x0028C074: bne         $v0, $zero, L_0028BFF8
    if (ctx->r2 != 0) {
        // 0x0028C078: slti        $v0, $s3, 0x6
        ctx->r2 = SIGNED(ctx->r19) < 0X6 ? 1 : 0;
            goto L_0028BFF8;
    }
    // 0x0028C078: slti        $v0, $s3, 0x6
    ctx->r2 = SIGNED(ctx->r19) < 0X6 ? 1 : 0;
L_0028C07C:
    // 0x0028C07C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x0028C080: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x0028C084: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0028C088: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0028C08C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0028C090: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0028C094: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0028C098: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0028C09C: ori         $v0, $zero, 0xA529
    ctx->r2 = 0 | 0XA529;
    // 0x0028C0A0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028C0A4: sh          $v0, -0xE7C($at)
    MEM_H(-0XE7C, ctx->r1) = ctx->r2;
    // 0x0028C0A8: jr          $ra
    // 0x0028C0AC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0028C0AC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0045F4AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045F4AC: jr          $ra
    // 0x0045F4B0: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    return;
    // 0x0045F4B0: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
;}
RECOMP_FUNC void func_00429130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00429130: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x00429134: sw          $s1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r17;
    // 0x00429138: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0042913C: sw          $ra, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r31;
    // 0x00429140: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    // 0x00429144: lbu         $v0, 0x65($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X65);
    // 0x00429148: beq         $v0, $zero, L_00429164
    if (ctx->r2 == 0) {
        // 0x0042914C: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_00429164;
    }
    // 0x0042914C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00429150: jal         0x00429EC4
    // 0x00429154: sb          $zero, 0x65($s1)
    MEM_B(0X65, ctx->r17) = 0;
    func_00429EC4(rdram, ctx);
        goto after_0;
    // 0x00429154: sb          $zero, 0x65($s1)
    MEM_B(0X65, ctx->r17) = 0;
    after_0:
    // 0x00429158: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0042915C: bne         $v1, $zero, L_004292CC
    if (ctx->r3 != 0) {
        // 0x00429160: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_004292CC;
    }
    // 0x00429160: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_00429164:
    // 0x00429164: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x00429168: lw          $a1, 0x8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X8);
    // 0x0042916C: jal         0x00299680
    // 0x00429170: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    func_00299680(rdram, ctx);
        goto after_1;
    // 0x00429170: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    after_1:
    // 0x00429174: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00429178: bne         $v1, $zero, L_004292CC
    if (ctx->r3 != 0) {
        // 0x0042917C: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_004292CC;
    }
    // 0x0042917C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00429180: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x00429184: jal         0x00429DB4
    // 0x00429188: addiu       $a2, $sp, 0x52
    ctx->r6 = ADD32(ctx->r29, 0X52);
    func_00429DB4(rdram, ctx);
        goto after_2;
    // 0x00429188: addiu       $a2, $sp, 0x52
    ctx->r6 = ADD32(ctx->r29, 0X52);
    after_2:
    // 0x0042918C: lhu         $v1, 0x2C($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X2C);
    // 0x00429190: lhu         $v0, 0x50($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X50);
    // 0x00429194: bne         $v1, $v0, L_004291AC
    if (ctx->r3 != ctx->r2) {
        // 0x00429198: addiu       $s0, $sp, 0x10
        ctx->r16 = ADD32(ctx->r29, 0X10);
            goto L_004291AC;
    }
    // 0x00429198: addiu       $s0, $sp, 0x10
    ctx->r16 = ADD32(ctx->r29, 0X10);
    // 0x0042919C: lhu         $v1, 0x2E($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X2E);
    // 0x004291A0: lhu         $v0, 0x52($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X52);
    // 0x004291A4: beq         $v1, $v0, L_004291F4
    if (ctx->r3 == ctx->r2) {
        // 0x004291A8: nop
    
            goto L_004291F4;
    }
    // 0x004291A8: nop

L_004291AC:
    // 0x004291AC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x004291B0: jal         0x00429748
    // 0x004291B4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00429748(rdram, ctx);
        goto after_3;
    // 0x004291B4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x004291B8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x004291BC: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x004291C0: bne         $v1, $v0, L_004291EC
    if (ctx->r3 != ctx->r2) {
        // 0x004291C4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_004291EC;
    }
    // 0x004291C4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x004291C8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x004291CC: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x004291D0: jal         0x00429460
    // 0x004291D4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00429460(rdram, ctx);
        goto after_4;
    // 0x004291D4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_4:
    // 0x004291D8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x004291DC: beq         $v1, $zero, L_004291F4
    if (ctx->r3 == 0) {
        // 0x004291E0: nop
    
            goto L_004291F4;
    }
    // 0x004291E0: nop

    // 0x004291E4: j           L_004292CC
    // 0x004291E8: nop

        goto L_004292CC;
    // 0x004291E8: nop

L_004291EC:
    // 0x004291EC: bne         $v1, $zero, L_004292CC
    if (ctx->r3 != 0) {
        // 0x004291F0: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_004292CC;
    }
    // 0x004291F0: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_004291F4:
    // 0x004291F4: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x004291F8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x004291FC: bne         $v0, $zero, L_0042923C
    if (ctx->r2 != 0) {
        // 0x00429200: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0042923C;
    }
    // 0x00429200: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00429204: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00429208: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042920C: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x00429210: jal         0x00429460
    // 0x00429214: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00429460(rdram, ctx);
        goto after_5;
    // 0x00429214: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_5:
    // 0x00429218: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0042921C: bne         $v1, $zero, L_004292CC
    if (ctx->r3 != 0) {
        // 0x00429220: nop
    
            goto L_004292CC;
    }
    // 0x00429220: nop

    // 0x00429224: lhu         $v0, 0x48($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X48);
    // 0x00429228: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0042922C: bne         $v0, $zero, L_0042923C
    if (ctx->r2 != 0) {
        // 0x00429230: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0042923C;
    }
    // 0x00429230: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00429234: j           L_004292CC
    // 0x00429238: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
        goto L_004292CC;
    // 0x00429238: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_0042923C:
    // 0x0042923C: addu        $v1, $s1, $a0
    ctx->r3 = ADD32(ctx->r17, ctx->r4);
L_00429240:
    // 0x00429240: addu        $v0, $s0, $a0
    ctx->r2 = ADD32(ctx->r16, ctx->r4);
    // 0x00429244: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x00429248: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0042924C: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x00429250: slti        $v0, $a0, 0x20
    ctx->r2 = SIGNED(ctx->r4) < 0X20 ? 1 : 0;
    // 0x00429254: bne         $v0, $zero, L_00429240
    if (ctx->r2 != 0) {
        // 0x00429258: addu        $v1, $s1, $a0
        ctx->r3 = ADD32(ctx->r17, ctx->r4);
            goto L_00429240;
    }
    // 0x00429258: addu        $v1, $s1, $a0
    ctx->r3 = ADD32(ctx->r17, ctx->r4);
    // 0x0042925C: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x00429260: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x00429264: lw          $a1, 0x8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X8);
    // 0x00429268: lbu         $v0, 0x1B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1B);
    // 0x0042926C: addiu       $a3, $s1, 0x2C
    ctx->r7 = ADD32(ctx->r17, 0X2C);
    // 0x00429270: sw          $v0, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->r2;
    // 0x00429274: lbu         $v1, 0x1A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1A);
    // 0x00429278: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x0042927C: sw          $v0, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->r2;
    // 0x00429280: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x00429284: sw          $v0, 0x54($s1)
    MEM_W(0X54, ctx->r17) = ctx->r2;
    // 0x00429288: sb          $v1, 0x64($s1)
    MEM_B(0X64, ctx->r17) = ctx->r3;
    // 0x0042928C: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x00429290: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x00429294: lbu         $v0, 0x64($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X64);
    // 0x00429298: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    // 0x0042929C: sw          $v1, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->r3;
    // 0x004292A0: lbu         $v1, 0x64($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X64);
    // 0x004292A4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x004292A8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x004292AC: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x004292B0: sw          $v0, 0x58($s1)
    MEM_W(0X58, ctx->r17) = ctx->r2;
    // 0x004292B4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x004292B8: jal         0x00299680
    // 0x004292BC: sw          $v0, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->r2;
    func_00299680(rdram, ctx);
        goto after_6;
    // 0x004292BC: sw          $v0, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->r2;
    after_6:
    // 0x004292C0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x004292C4: beql        $v1, $zero, L_004292CC
    if (ctx->r3 == 0) {
        // 0x004292C8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_004292CC;
    }
    goto skip_0;
    // 0x004292C8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
L_004292CC:
    // 0x004292CC: lw          $ra, 0x60($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X60);
    // 0x004292D0: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x004292D4: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x004292D8: jr          $ra
    // 0x004292DC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x004292DC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_004409BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004409BC: jr          $ra
    // 0x004409C0: nop

    return;
    // 0x004409C0: nop

;}
RECOMP_FUNC void func_002887F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002887F8: jr          $ra
    // 0x002887FC: nop

    return;
    // 0x002887FC: nop

;}
