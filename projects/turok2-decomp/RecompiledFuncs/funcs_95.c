#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_00210F68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00210F68: lwc1        $f0, 0xC($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0XC);
    // 0x00210F6C: lwc1        $f1, 0x0($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X0);
    // 0x00210F70: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00210F74: lwc1        $f4, 0x8($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X8);
    // 0x00210F78: lwc1        $f1, 0x4($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X4);
    // 0x00210F7C: mul.s       $f4, $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f1.fl);
    // 0x00210F80: lwc1        $f3, 0x4($a2)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r6, 0X4);
    // 0x00210F84: lwc1        $f1, 0x8($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X8);
    // 0x00210F88: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x00210F8C: lwc1        $f2, 0x0($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X0);
    // 0x00210F90: lwc1        $f1, 0xC($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0XC);
    // 0x00210F94: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x00210F98: sub.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x00210F9C: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x00210FA0: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x00210FA4: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x00210FA8: lwc1        $f0, 0x8($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X8);
    // 0x00210FAC: lwc1        $f1, 0x0($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X0);
    // 0x00210FB0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00210FB4: lwc1        $f4, 0xC($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0XC);
    // 0x00210FB8: lwc1        $f1, 0x4($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X4);
    // 0x00210FBC: mul.s       $f4, $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f1.fl);
    // 0x00210FC0: lwc1        $f3, 0x0($a2)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r6, 0X0);
    // 0x00210FC4: lwc1        $f1, 0x8($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X8);
    // 0x00210FC8: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x00210FCC: lwc1        $f2, 0x4($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X4);
    // 0x00210FD0: lwc1        $f1, 0xC($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0XC);
    // 0x00210FD4: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x00210FD8: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x00210FDC: sub.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f3.fl;
    // 0x00210FE0: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x00210FE4: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x00210FE8: lwc1        $f0, 0x4($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X4);
    // 0x00210FEC: lwc1        $f1, 0x0($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X0);
    // 0x00210FF0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x00210FF4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00210FF8: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x00210FFC: lwc1        $f1, 0x4($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X4);
    // 0x00211000: mul.s       $f4, $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f1.fl);
    // 0x00211004: lwc1        $f3, 0xC($a2)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r6, 0XC);
    // 0x00211008: lwc1        $f1, 0x8($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X8);
    // 0x0021100C: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x00211010: lwc1        $f2, 0x8($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X8);
    // 0x00211014: lwc1        $f1, 0xC($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0XC);
    // 0x00211018: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0021101C: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x00211020: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x00211024: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x00211028: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x0021102C: lwc1        $f0, 0x0($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X0);
    // 0x00211030: lwc1        $f1, 0x0($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X0);
    // 0x00211034: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x00211038: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021103C: lwc1        $f4, 0x4($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X4);
    // 0x00211040: lwc1        $f1, 0x4($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X4);
    // 0x00211044: mul.s       $f4, $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f1.fl);
    // 0x00211048: lwc1        $f3, 0x8($a2)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r6, 0X8);
    // 0x0021104C: lwc1        $f1, 0x8($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X8);
    // 0x00211050: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x00211054: lwc1        $f2, 0xC($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0XC);
    // 0x00211058: lwc1        $f1, 0xC($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0XC);
    // 0x0021105C: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x00211060: sub.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x00211064: sub.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f3.fl;
    // 0x00211068: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0021106C: jr          $ra
    // 0x00211070: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x00211070: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_004130EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004130EC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x004130F0: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x004130F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004130F8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004130FC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00413100: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00413104: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x00413108: jal         0x002017D4
    // 0x0041310C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x0041310C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x00413110: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00413114: jal         0x002017D4
    // 0x00413118: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00413118: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0041311C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00413120: jal         0x002017D4
    // 0x00413124: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x00413124: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x00413128: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x0041312C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00413130: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00413134: jr          $ra
    // 0x00413138: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00413138: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0025F978(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025F978: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025F97C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025F980: lwc1        $f0, 0x64($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X64);
    // 0x0025F984: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025F988: lwc1        $f1, 0x7938($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7938);
    // 0x0025F98C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0025F990: nop

    // 0x0025F994: bc1tl       L_0025F99C
    if (c1cs) {
        // 0x0025F998: swc1        $f1, 0x64($a1)
        MEM_W(0X64, ctx->r5) = ctx->f_odd[(1 - 1) * 2];
            goto L_0025F99C;
    }
    goto skip_0;
    // 0x0025F998: swc1        $f1, 0x64($a1)
    MEM_W(0X64, ctx->r5) = ctx->f_odd[(1 - 1) * 2];
    skip_0:
L_0025F99C:
    // 0x0025F99C: lwc1        $f0, 0x64($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X64);
    // 0x0025F9A0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0025F9A4: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x0025F9A8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0025F9AC: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0025F9B0: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0025F9B4: nop

    // 0x0025F9B8: bc1f        L_0025F9C8
    if (!c1cs) {
        // 0x0025F9BC: swc1        $f0, 0x64($a1)
        MEM_W(0X64, ctx->r5) = ctx->f0.u32l;
            goto L_0025F9C8;
    }
    // 0x0025F9BC: swc1        $f0, 0x64($a1)
    MEM_W(0X64, ctx->r5) = ctx->f0.u32l;
    // 0x0025F9C0: jal         0x00243414
    // 0x0025F9C4: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0025F9C4: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    after_0:
L_0025F9C8:
    // 0x0025F9C8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025F9CC: jr          $ra
    // 0x0025F9D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025F9D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00230AB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00230AB0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x00230AB4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x00230AB8: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00230ABC: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x00230AC0: addu        $s7, $a2, $zero
    ctx->r23 = ADD32(ctx->r6, 0);
    // 0x00230AC4: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x00230AC8: addu        $s6, $a3, $zero
    ctx->r22 = ADD32(ctx->r7, 0);
    // 0x00230ACC: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00230AD0: addiu       $v0, $v0, 0x7078
    ctx->r2 = ADD32(ctx->r2, 0X7078);
    // 0x00230AD4: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x00230AD8: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x00230ADC: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x00230AE0: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x00230AE4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00230AE8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00230AEC: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x00230AF0: lw          $s3, 0xEFC($v0)
    ctx->r19 = MEM_W(ctx->r2, 0XEFC);
    // 0x00230AF4: blez        $s3, L_00230B70
    if (SIGNED(ctx->r19) <= 0) {
        // 0x00230AF8: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00230B70;
    }
    // 0x00230AF8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00230AFC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00230B00: lwc1        $f20, 0x63E4($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X63E4);
    // 0x00230B04: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x00230B08: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
L_00230B0C:
    // 0x00230B0C: lw          $a1, 0xDFC($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XDFC);
    // 0x00230B10: lw          $v0, 0x144($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X144);
    // 0x00230B14: blezl       $v0, L_00230B64
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00230B18: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00230B64;
    }
    goto skip_0;
    // 0x00230B18: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x00230B1C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00230B20: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x00230B24: jal         0x0020EF2C
    // 0x00230B28: addiu       $a2, $s2, 0x4
    ctx->r6 = ADD32(ctx->r18, 0X4);
    func_0020EF2C(rdram, ctx);
        goto after_0;
    // 0x00230B28: addiu       $a2, $s2, 0x4
    ctx->r6 = ADD32(ctx->r18, 0X4);
    after_0:
    // 0x00230B2C: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x00230B30: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00230B34: lwc1        $f2, 0x14($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X14);
    // 0x00230B38: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x00230B3C: lwc1        $f1, 0x18($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x00230B40: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x00230B44: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x00230B48: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00230B4C: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x00230B50: nop

    // 0x00230B54: bc1f        L_00230B64
    if (!c1cs) {
        // 0x00230B58: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00230B64;
    }
    // 0x00230B58: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00230B5C: j           L_00230C84
    // 0x00230B60: sh          $s4, 0x128($s2)
    MEM_H(0X128, ctx->r18) = ctx->r20;
        goto L_00230C84;
    // 0x00230B60: sh          $s4, 0x128($s2)
    MEM_H(0X128, ctx->r18) = ctx->r20;
L_00230B64:
    // 0x00230B64: slt         $v0, $s0, $s3
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x00230B68: bne         $v0, $zero, L_00230B0C
    if (ctx->r2 != 0) {
        // 0x00230B6C: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_00230B0C;
    }
    // 0x00230B6C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_00230B70:
    // 0x00230B70: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00230B74: lw          $s0, -0x6770($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X6770);
    // 0x00230B78: beq         $s0, $zero, L_00230BF0
    if (ctx->r16 == 0) {
        // 0x00230B7C: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_00230BF0;
    }
    // 0x00230B7C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x00230B80: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00230B84: lwc1        $f20, 0x63E8($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X63E8);
L_00230B88:
    // 0x00230B88: lw          $v0, 0x10C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X10C);
    // 0x00230B8C: beq         $v0, $s0, L_00230BE4
    if (ctx->r2 == ctx->r16) {
        // 0x00230B90: nop
    
            goto L_00230BE4;
    }
    // 0x00230B90: nop

    // 0x00230B94: lw          $v0, 0x524($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X524);
    // 0x00230B98: blez        $v0, L_00230BE4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00230B9C: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_00230BE4;
    }
    // 0x00230B9C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00230BA0: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x00230BA4: jal         0x0020EF2C
    // 0x00230BA8: addiu       $a2, $s2, 0x4
    ctx->r6 = ADD32(ctx->r18, 0X4);
    func_0020EF2C(rdram, ctx);
        goto after_1;
    // 0x00230BA8: addiu       $a2, $s2, 0x4
    ctx->r6 = ADD32(ctx->r18, 0X4);
    after_1:
    // 0x00230BAC: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x00230BB0: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00230BB4: lwc1        $f2, 0x14($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X14);
    // 0x00230BB8: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x00230BBC: lwc1        $f1, 0x18($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x00230BC0: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x00230BC4: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x00230BC8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00230BCC: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x00230BD0: nop

    // 0x00230BD4: bc1f        L_00230BE4
    if (!c1cs) {
        // 0x00230BD8: nop
    
            goto L_00230BE4;
    }
    // 0x00230BD8: nop

    // 0x00230BDC: j           L_00230C84
    // 0x00230BE0: sh          $s1, 0x128($s2)
    MEM_H(0X128, ctx->r18) = ctx->r17;
        goto L_00230C84;
    // 0x00230BE0: sh          $s1, 0x128($s2)
    MEM_H(0X128, ctx->r18) = ctx->r17;
L_00230BE4:
    // 0x00230BE4: lw          $s0, 0x1320($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X1320);
    // 0x00230BE8: bne         $s0, $zero, L_00230B88
    if (ctx->r16 != 0) {
        // 0x00230BEC: nop
    
            goto L_00230B88;
    }
    // 0x00230BEC: nop

L_00230BF0:
    // 0x00230BF0: blez        $s6, L_00230C84
    if (SIGNED(ctx->r22) <= 0) {
        // 0x00230BF4: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00230C84;
    }
    // 0x00230BF4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00230BF8: addiu       $s5, $zero, 0xC
    ctx->r21 = ADD32(0, 0XC);
    // 0x00230BFC: addiu       $s4, $zero, 0x22
    ctx->r20 = ADD32(0, 0X22);
    // 0x00230C00: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00230C04: lwc1        $f20, 0x63EC($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X63EC);
    // 0x00230C08: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x00230C0C: addu        $s1, $s7, $zero
    ctx->r17 = ADD32(ctx->r23, 0);
L_00230C10:
    // 0x00230C10: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x00230C14: beql        $a1, $s2, L_00230C78
    if (ctx->r5 == ctx->r18) {
        // 0x00230C18: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00230C78;
    }
    goto skip_1;
    // 0x00230C18: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_1:
    // 0x00230C1C: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x00230C20: beq         $v0, $s5, L_00230C34
    if (ctx->r2 == ctx->r21) {
        // 0x00230C24: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_00230C34;
    }
    // 0x00230C24: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00230C28: bnel        $v0, $s4, L_00230C78
    if (ctx->r2 != ctx->r20) {
        // 0x00230C2C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00230C78;
    }
    goto skip_2;
    // 0x00230C2C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_2:
    // 0x00230C30: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
L_00230C34:
    // 0x00230C34: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x00230C38: jal         0x0020EF2C
    // 0x00230C3C: addiu       $a2, $s2, 0x4
    ctx->r6 = ADD32(ctx->r18, 0X4);
    func_0020EF2C(rdram, ctx);
        goto after_2;
    // 0x00230C3C: addiu       $a2, $s2, 0x4
    ctx->r6 = ADD32(ctx->r18, 0X4);
    after_2:
    // 0x00230C40: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x00230C44: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00230C48: lwc1        $f2, 0x14($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X14);
    // 0x00230C4C: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x00230C50: lwc1        $f1, 0x18($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x00230C54: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x00230C58: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x00230C5C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00230C60: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x00230C64: nop

    // 0x00230C68: bc1f        L_00230C78
    if (!c1cs) {
        // 0x00230C6C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00230C78;
    }
    // 0x00230C6C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00230C70: j           L_00230C84
    // 0x00230C74: sh          $s3, 0x128($s2)
    MEM_H(0X128, ctx->r18) = ctx->r19;
        goto L_00230C84;
    // 0x00230C74: sh          $s3, 0x128($s2)
    MEM_H(0X128, ctx->r18) = ctx->r19;
L_00230C78:
    // 0x00230C78: slt         $v0, $s0, $s6
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x00230C7C: bne         $v0, $zero, L_00230C10
    if (ctx->r2 != 0) {
        // 0x00230C80: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_00230C10;
    }
    // 0x00230C80: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_00230C84:
    // 0x00230C84: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x00230C88: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x00230C8C: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x00230C90: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x00230C94: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x00230C98: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x00230C9C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00230CA0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00230CA4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00230CA8: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x00230CAC: jr          $ra
    // 0x00230CB0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x00230CB0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_00267EE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00267EE8: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x00267EEC: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00267EF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00267EF4: beq         $v1, $v0, L_00267F04
    if (ctx->r3 == ctx->r2) {
            // 0x00267EF8: nop

    func_00267F04(rdram, ctx);
    return;
    }
    // 0x00267EF8: nop

    // 0x00267EFC: jr          $ra
    // 0x00267F00: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00267F00: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00265D14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00265D14: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00265D18: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00265D1C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00265D20: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x00265D24: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x00265D28: lui         $a3, 0xFFFE
    ctx->r7 = S32(0XFFFE << 16);
    // 0x00265D2C: ori         $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 | 0XFFFF;
    // 0x00265D30: lui         $a1, 0x4
    ctx->r5 = S32(0X4 << 16);
    // 0x00265D34: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x00265D38: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x00265D3C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x00265D40: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00265D44: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x00265D48: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x00265D4C: and         $v0, $v0, $a3
    ctx->r2 = ctx->r2 & ctx->r7;
    // 0x00265D50: addiu       $s1, $v1, 0x14
    ctx->r17 = ADD32(ctx->r3, 0X14);
    // 0x00265D54: jal         0x0026E110
    // 0x00265D58: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    func_0026E110(rdram, ctx);
        goto after_0;
    // 0x00265D58: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    after_0:
    // 0x00265D5C: lw          $v0, 0x2C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X2C);
    // 0x00265D60: bne         $v0, $zero, L_00265D7C
    if (ctx->r2 != 0) {
        // 0x00265D64: addiu       $v1, $zero, -0x2001
        ctx->r3 = ADD32(0, -0X2001);
            goto L_00265D7C;
    }
    // 0x00265D64: addiu       $v1, $zero, -0x2001
    ctx->r3 = ADD32(0, -0X2001);
    // 0x00265D68: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x00265D6C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00265D70: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x00265D74: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00265D78: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
L_00265D7C:
    // 0x00265D7C: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x00265D80: lw          $v1, 0x7078($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7078);
    // 0x00265D84: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00265D88: bne         $v1, $v0, L_00265E04
    if (ctx->r3 != ctx->r2) {
        // 0x00265D8C: addiu       $s2, $zero, -0x1
        ctx->r18 = ADD32(0, -0X1);
            goto L_00265E04;
    }
    // 0x00265D8C: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x00265D90: lw          $v0, 0x34($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X34);
    // 0x00265D94: beq         $v0, $s2, L_00265DBC
    if (ctx->r2 == ctx->r18) {
        // 0x00265D98: nop
    
            goto L_00265DBC;
    }
    // 0x00265D98: nop

    // 0x00265D9C: lh          $a0, 0x36($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X36);
    // 0x00265DA0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00265DA4: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x00265DA8: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x00265DAC: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x00265DB0: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x00265DB4: jal         0x00275544
    // 0x00265DB8: nop

    func_00275544(rdram, ctx);
        goto after_1;
    // 0x00265DB8: nop

    after_1:
L_00265DBC:
    // 0x00265DBC: lw          $v0, 0x30($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X30);
    // 0x00265DC0: beq         $v0, $s2, L_00265DEC
    if (ctx->r2 == ctx->r18) {
        // 0x00265DC4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00265DEC;
    }
    // 0x00265DC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00265DC8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00265DCC: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x00265DD0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00265DD4: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x00265DD8: lw          $a3, 0x8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X8);
    // 0x00265DDC: lw          $a1, 0x30($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X30);
    // 0x00265DE0: jal         0x00246690
    // 0x00265DE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00246690(rdram, ctx);
        goto after_2;
    // 0x00265DE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00265DE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_00265DEC:
    // 0x00265DEC: lw          $v0, 0x3C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X3C);
    // 0x00265DF0: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00265DF4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00265DF8: lw          $a3, 0x38($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X38);
    // 0x00265DFC: jal         0x0024646C
    // 0x00265E00: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_0024646C(rdram, ctx);
        goto after_3;
    // 0x00265E00: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
L_00265E04:
    // 0x00265E04: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00265E08: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x00265E0C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00265E10: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00265E14: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00265E18: jr          $ra
    // 0x00265E1C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00265E1C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_002603F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002603F0: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x002603F4: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x002603F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002603FC: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x00260400: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00260404: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x00260408: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0026040C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00260410: sw          $ra, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r31;
    // 0x00260414: jal         0x00246108
    // 0x00260418: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x00260418: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x0026041C: lbu         $v0, 0x36($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X36);
    // 0x00260420: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00260424: lwc1        $f0, 0x7984($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7984);
    // 0x00260428: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0026042C: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x00260430: beq         $v0, $zero, L_00260440
    if (ctx->r2 == 0) {
        // 0x00260434: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00260440;
    }
    // 0x00260434: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00260438: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026043C: lwc1        $f0, 0x7988($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7988);
L_00260440:
    // 0x00260440: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x00260444: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x00260448: jal         0x00245BAC
    // 0x0026044C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x0026044C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x00260450: lw          $ra, 0xA8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA8);
    // 0x00260454: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x00260458: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x0026045C: jr          $ra
    // 0x00260460: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x00260460: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_002897E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002897E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002897E4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002897E8: jal         0x00288DD0
    // 0x002897EC: addiu       $a1, $zero, 0x6F
    ctx->r5 = ADD32(0, 0X6F);
    func_00288DD0(rdram, ctx);
        goto after_0;
    // 0x002897EC: addiu       $a1, $zero, 0x6F
    ctx->r5 = ADD32(0, 0X6F);
    after_0:
    // 0x002897F0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002897F4: jr          $ra
    // 0x002897F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002897F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0025247C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025247C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00252480: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00252484: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00252488: addiu       $a0, $zero, 0x27D8
    ctx->r4 = ADD32(0, 0X27D8);
    // 0x0025248C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00252490: lw          $v1, 0x518($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X518);
    // 0x00252494: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00252498: jal         0x00275624
    // 0x0025249C: sb          $v0, 0x3E($v1)
    MEM_B(0X3E, ctx->r3) = ctx->r2;
    func_00275624(rdram, ctx);
        goto after_0;
    // 0x0025249C: sb          $v0, 0x3E($v1)
    MEM_B(0X3E, ctx->r3) = ctx->r2;
    after_0:
    // 0x002524A0: addiu       $a0, $s0, 0x288
    ctx->r4 = ADD32(ctx->r16, 0X288);
    // 0x002524A4: addiu       $a1, $s0, 0x3C8
    ctx->r5 = ADD32(ctx->r16, 0X3C8);
    // 0x002524A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x002524AC: addiu       $v0, $s0, 0xCD0
    ctx->r2 = ADD32(ctx->r16, 0XCD0);
    // 0x002524B0: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x002524B4: sw          $zero, 0xCD0($s0)
    MEM_W(0XCD0, ctx->r16) = 0;
    // 0x002524B8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x002524BC: sw          $v1, 0x37C($v0)
    MEM_W(0X37C, ctx->r2) = ctx->r3;
    // 0x002524C0: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x002524C4: jal         0x00243414
    // 0x002524C8: sw          $zero, 0x1284($s0)
    MEM_W(0X1284, ctx->r16) = 0;
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x002524C8: sw          $zero, 0x1284($s0)
    MEM_W(0X1284, ctx->r16) = 0;
    after_1:
    // 0x002524CC: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x002524D0: lw          $a2, 0x520($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X520);
    // 0x002524D4: lbu         $v1, 0x3E($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X3E);
    // 0x002524D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002524DC: beql        $v1, $v0, L_002524E4
    if (ctx->r3 == ctx->r2) {
        // 0x002524E0: addiu       $a2, $zero, 0xB
        ctx->r6 = ADD32(0, 0XB);
            goto L_002524E4;
    }
    goto skip_0;
    // 0x002524E0: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    skip_0:
L_002524E4:
    // 0x002524E4: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x002524E8: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x002524EC: jal         0x00225EBC
    // 0x002524F0: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_00225EBC(rdram, ctx);
        goto after_2;
    // 0x002524F0: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_2:
    // 0x002524F4: bnel        $v0, $zero, L_00252530
    if (ctx->r2 != 0) {
        // 0x002524F8: sw          $v0, 0x14($s0)
        MEM_W(0X14, ctx->r16) = ctx->r2;
            goto L_00252530;
    }
    goto skip_1;
    // 0x002524F8: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    skip_1:
    // 0x002524FC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00252500: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00252504: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x00252508: jal         0x00225EBC
    // 0x0025250C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_00225EBC(rdram, ctx);
        goto after_3;
    // 0x0025250C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_3:
    // 0x00252510: bnel        $v0, $zero, L_00252530
    if (ctx->r2 != 0) {
        // 0x00252514: sw          $v0, 0x14($s0)
        MEM_W(0X14, ctx->r16) = ctx->r2;
            goto L_00252530;
    }
    goto skip_2;
    // 0x00252514: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    skip_2:
    // 0x00252518: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0025251C: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00252520: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x00252524: jal         0x00225EBC
    // 0x00252528: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    func_00225EBC(rdram, ctx);
        goto after_4;
    // 0x00252528: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_4:
    // 0x0025252C: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
L_00252530:
    // 0x00252530: lwc1        $f0, 0x38($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X38);
    // 0x00252534: swc1        $f0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f0.u32l;
    // 0x00252538: lwc1        $f0, 0x3C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x0025253C: swc1        $f0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f0.u32l;
    // 0x00252540: lwc1        $f0, 0x40($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X40);
    // 0x00252544: swc1        $f0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f0.u32l;
    // 0x00252548: lw          $v0, 0x18($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X18);
    // 0x0025254C: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x00252550: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x00252554: sw          $v0, 0x524($s0)
    MEM_W(0X524, ctx->r16) = ctx->r2;
    // 0x00252558: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
    // 0x0025255C: lw          $v1, 0x520($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X520);
    // 0x00252560: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x00252564: sw          $v0, 0x144($s0)
    MEM_W(0X144, ctx->r16) = ctx->r2;
    // 0x00252568: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x0025256C: bnel        $v1, $v0, L_002525A8
    if (ctx->r3 != ctx->r2) {
        // 0x00252570: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_002525A8;
    }
    goto skip_3;
    // 0x00252570: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    skip_3:
    // 0x00252574: jal         0x002113A4
    // 0x00252578: nop

    func_002113A4(rdram, ctx);
        goto after_5;
    // 0x00252578: nop

    after_5:
    // 0x0025257C: lui         $v1, 0x38E3
    ctx->r3 = S32(0X38E3 << 16);
    // 0x00252580: ori         $v1, $v1, 0x8E39
    ctx->r3 = ctx->r3 | 0X8E39;
    // 0x00252584: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00252588: sra         $v1, $v0, 31
    ctx->r3 = S32(SIGNED(ctx->r2) >> 31);
    // 0x0025258C: mfhi        $a3
    ctx->r7 = hi;
    // 0x00252590: sra         $a0, $a3, 2
    ctx->r4 = S32(SIGNED(ctx->r7) >> 2);
    // 0x00252594: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x00252598: sll         $v1, $a0, 3
    ctx->r3 = S32(ctx->r4 << 3);
    // 0x0025259C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x002525A0: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x002525A4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
L_002525A8:
    // 0x002525A8: sb          $v0, 0x151($s0)
    MEM_B(0X151, ctx->r16) = ctx->r2;
    // 0x002525AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x002525B0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002525B4: jr          $ra
    // 0x002525B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002525B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00422FC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00422FC0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00422FC4: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00422FC8: lw          $v1, 0x990($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X990);
    // 0x00422FCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00422FD0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00422FD4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00422FD8: sw          $zero, 0x9AC($at)
    MEM_W(0X9AC, ctx->r1) = 0;
    // 0x00422FDC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00422FE0: sw          $v0, 0x998($at)
    MEM_W(0X998, ctx->r1) = ctx->r2;
    // 0x00422FE4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00422FE8: sw          $v0, 0x984($at)
    MEM_W(0X984, ctx->r1) = ctx->r2;
    // 0x00422FEC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00422FF0: sw          $zero, 0x9B4($at)
    MEM_W(0X9B4, ctx->r1) = 0;
    // 0x00422FF4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00422FF8: sw          $zero, 0x980($at)
    MEM_W(0X980, ctx->r1) = 0;
    // 0x00422FFC: beq         $v1, $zero, L_00423014
    if (ctx->r3 == 0) {
        // 0x00423000: nop
    
            goto L_00423014;
    }
    // 0x00423000: nop

    // 0x00423004: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00423008: lw          $v0, 0x2028($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2028);
    // 0x0042300C: j           L_00423020
    // 0x00423010: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
        goto L_00423020;
    // 0x00423010: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
L_00423014:
    // 0x00423014: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x00423018: lb          $v0, 0x4($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4);
    // 0x0042301C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
L_00423020:
    // 0x00423020: lw          $a0, 0x10($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X10);
    // 0x00423024: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00423028: sw          $zero, 0x2020($at)
    MEM_W(0X2020, ctx->r1) = 0;
    // 0x0042302C: jal         0x00285A68
    // 0x00423030: nop

    func_00285A68(rdram, ctx);
        goto after_0;
    // 0x00423030: nop

    after_0:
    // 0x00423034: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00423038: jr          $ra
    // 0x0042303C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0042303C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0045B0E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045B0E4: lw          $v1, 0xC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC);
    // 0x0045B0E8: lui         $a1, 0xFE7F
    ctx->r5 = S32(0XFE7F << 16);
    // 0x0045B0EC: lw          $v0, 0xA8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XA8);
    // 0x0045B0F0: ori         $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 | 0XFFFF;
    // 0x0045B0F4: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x0045B0F8: sw          $v0, 0xA8($v1)
    MEM_W(0XA8, ctx->r3) = ctx->r2;
    // 0x0045B0FC: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x0045B100: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045B104: sw          $zero, 0x960($at)
    MEM_W(0X960, ctx->r1) = 0;
    // 0x0045B108: lw          $v0, 0xD0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD0);
    // 0x0045B10C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0045B110: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045B114: sw          $v1, 0x9A8($at)
    MEM_W(0X9A8, ctx->r1) = ctx->r3;
    // 0x0045B118: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x0045B11C: jr          $ra
    // 0x0045B120: sw          $v0, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = ctx->r2;
    return;
    // 0x0045B120: sw          $v0, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_00256AF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00256AF0: beq         $a2, $zero, L_00256B04
    if (ctx->r6 == 0) {
        // 0x00256AF4: addu        $v1, $a0, $a1
        ctx->r3 = ADD32(ctx->r4, ctx->r5);
            goto L_00256B04;
    }
    // 0x00256AF4: addu        $v1, $a0, $a1
    ctx->r3 = ADD32(ctx->r4, ctx->r5);
    // 0x00256AF8: lbu         $v0, 0x52C($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X52C);
    // 0x00256AFC: j           L_00256B0C
    // 0x00256B00: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
        goto L_00256B0C;
    // 0x00256B00: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
L_00256B04:
    // 0x00256B04: lbu         $v0, 0x52C($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X52C);
    // 0x00256B08: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_00256B0C:
    // 0x00256B0C: beq         $a2, $zero, L_00256B24
    if (ctx->r6 == 0) {
            // 0x00256B10: sb          $v0, 0x52C($v1)
    MEM_B(0X52C, ctx->r3) = ctx->r2;
    func_00256B24(rdram, ctx);
    return;
    }
    // 0x00256B10: sb          $v0, 0x52C($v1)
    MEM_B(0X52C, ctx->r3) = ctx->r2;
    // 0x00256B14: addu        $v0, $a0, $a1
    ctx->r2 = ADD32(ctx->r4, ctx->r5);
    // 0x00256B18: lbu         $v0, 0x52C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X52C);
    // 0x00256B1C: jr          $ra
    // 0x00256B20: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    return;
    // 0x00256B20: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
;}
RECOMP_FUNC void func_00452B00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00452B00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00452B04: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x00452B08: lui         $a2, 0x44
    ctx->r6 = S32(0X44 << 16);
    // 0x00452B0C: addiu       $a2, $a2, -0x6D4C
    ctx->r6 = ADD32(ctx->r6, -0X6D4C);
    // 0x00452B10: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00452B14: jal         0x00416894
    // 0x00452B18: nop

    func_00416894(rdram, ctx);
        goto after_0;
    // 0x00452B18: nop

    after_0:
    // 0x00452B1C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00452B20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00452B24: jr          $ra
    // 0x00452B28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00452B28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0027AF4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027AF4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0027AF50: lui         $a3, 0xE300
    ctx->r7 = S32(0XE300 << 16);
    // 0x0027AF54: ori         $a3, $a3, 0xA01
    ctx->r7 = ctx->r7 | 0XA01;
    // 0x0027AF58: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x0027AF5C: addiu       $a1, $a1, -0x71DC
    ctx->r5 = ADD32(ctx->r5, -0X71DC);
    // 0x0027AF60: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    // 0x0027AF64: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0027AF68: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x0027AF6C: lui         $v1, 0xE700
    ctx->r3 = S32(0XE700 << 16);
    // 0x0027AF70: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x0027AF74: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x0027AF78: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0027AF7C: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
    // 0x0027AF80: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x0027AF84: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x0027AF88: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x0027AF8C: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x0027AF90: jal         0x00207FEC
    // 0x0027AF94: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    func_00207FEC(rdram, ctx);
        goto after_0;
    // 0x0027AF94: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    after_0:
    // 0x0027AF98: jal         0x00207A70
    // 0x0027AF9C: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    func_00207A70(rdram, ctx);
        goto after_1;
    // 0x0027AF9C: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    after_1:
    // 0x0027AFA0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0027AFA4: jr          $ra
    // 0x0027AFA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0027AFA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_004037B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004037B0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x004037B4: sw          $fp, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r30;
    // 0x004037B8: addu        $fp, $a0, $zero
    ctx->r30 = ADD32(ctx->r4, 0);
    // 0x004037BC: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x004037C0: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x004037C4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x004037C8: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x004037CC: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x004037D0: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x004037D4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x004037D8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x004037DC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x004037E0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004037E4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x004037E8: lw          $v0, 0x10($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X10);
    // 0x004037EC: beq         $v0, $zero, L_00403AA4
    if (ctx->r2 == 0) {
        // 0x004037F0: addu        $s7, $zero, $zero
        ctx->r23 = ADD32(0, 0);
            goto L_00403AA4;
    }
    // 0x004037F0: addu        $s7, $zero, $zero
    ctx->r23 = ADD32(0, 0);
    // 0x004037F4: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x004037F8: addiu       $v1, $v1, -0x620
    ctx->r3 = ADD32(ctx->r3, -0X620);
    // 0x004037FC: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00403800: beq         $v0, $zero, L_00403AA4
    if (ctx->r2 == 0) {
        // 0x00403804: addu        $s1, $s7, $zero
        ctx->r17 = ADD32(ctx->r23, 0);
            goto L_00403AA4;
    }
    // 0x00403804: addu        $s1, $s7, $zero
    ctx->r17 = ADD32(ctx->r23, 0);
    // 0x00403808: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x0040380C: addiu       $s2, $v1, -0x14
    ctx->r18 = ADD32(ctx->r3, -0X14);
    // 0x00403810: addiu       $s5, $v1, -0x3D8
    ctx->r21 = ADD32(ctx->r3, -0X3D8);
    // 0x00403814: addu        $s3, $s7, $zero
    ctx->r19 = ADD32(ctx->r23, 0);
    // 0x00403818: addiu       $s0, $v1, -0x58
    ctx->r16 = ADD32(ctx->r3, -0X58);
L_0040381C:
    // 0x0040381C: lw          $v0, 0x10($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X10);
    // 0x00403820: lw          $v0, 0x6C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6C);
    // 0x00403824: sllv        $v1, $s6, $s1
    ctx->r3 = S32(ctx->r22 << (ctx->r17 & 31));
    // 0x00403828: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0040382C: beql        $v0, $zero, L_004038D0
    if (ctx->r2 == 0) {
        // 0x00403830: addiu       $s3, $s3, 0x64
        ctx->r19 = ADD32(ctx->r19, 0X64);
            goto L_004038D0;
    }
    goto skip_0;
    // 0x00403830: addiu       $s3, $s3, 0x64
    ctx->r19 = ADD32(ctx->r19, 0X64);
    skip_0:
    // 0x00403834: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00403838: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0040383C: bne         $v0, $zero, L_00403850
    if (ctx->r2 != 0) {
        // 0x00403840: nop
    
            goto L_00403850;
    }
    // 0x00403840: nop

    // 0x00403844: lbu         $v0, 0x5($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X5);
    // 0x00403848: beql        $v0, $zero, L_004038D0
    if (ctx->r2 == 0) {
        // 0x0040384C: addiu       $s3, $s3, 0x64
        ctx->r19 = ADD32(ctx->r19, 0X64);
            goto L_004038D0;
    }
    goto skip_1;
    // 0x0040384C: addiu       $s3, $s3, 0x64
    ctx->r19 = ADD32(ctx->r19, 0X64);
    skip_1:
L_00403850:
    // 0x00403850: lbu         $v0, 0x5($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X5);
    // 0x00403854: bne         $v0, $zero, L_00403878
    if (ctx->r2 != 0) {
        // 0x00403858: nop
    
            goto L_00403878;
    }
    // 0x00403858: nop

    // 0x0040385C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00403860: lw          $v1, 0x4($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X4);
    // 0x00403864: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00403868: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x0040386C: lbu         $v0, 0x5($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X5);
    // 0x00403870: beq         $v0, $zero, L_00403890
    if (ctx->r2 == 0) {
        // 0x00403874: nop
    
            goto L_00403890;
    }
    // 0x00403874: nop

L_00403878:
    // 0x00403878: bnel        $s1, $s6, L_004038D0
    if (ctx->r17 != ctx->r22) {
        // 0x0040387C: addiu       $s3, $s3, 0x64
        ctx->r19 = ADD32(ctx->r19, 0X64);
            goto L_004038D0;
    }
    goto skip_2;
    // 0x0040387C: addiu       $s3, $s3, 0x64
    ctx->r19 = ADD32(ctx->r19, 0X64);
    skip_2:
    // 0x00403880: lw          $v0, 0x20($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X20);
    // 0x00403884: lw          $v1, 0x4($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X4);
    // 0x00403888: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0040388C: sw          $v0, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r2;
L_00403890:
    // 0x00403890: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00403894: bgtz        $v0, L_004038B4
    if (SIGNED(ctx->r2) > 0) {
        // 0x00403898: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_004038B4;
    }
    // 0x00403898: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0040389C: lw          $v1, 0x0($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X0);
    // 0x004038A0: beq         $v1, $v0, L_004038B4
    if (ctx->r3 == ctx->r2) {
        // 0x004038A4: nop
    
            goto L_004038B4;
    }
    // 0x004038A4: nop

    // 0x004038A8: lbu         $v0, 0x3C9($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0X3C9);
    // 0x004038AC: beq         $v0, $zero, L_00403A5C
    if (ctx->r2 == 0) {
        // 0x004038B0: sll         $a0, $s1, 1
        ctx->r4 = S32(ctx->r17 << 1);
            goto L_00403A5C;
    }
    // 0x004038B0: sll         $a0, $s1, 1
    ctx->r4 = S32(ctx->r17 << 1);
L_004038B4:
    // 0x004038B4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x004038B8: addiu       $a0, $a0, -0x9D4
    ctx->r4 = ADD32(ctx->r4, -0X9D4);
    // 0x004038BC: lui         $a1, 0x43
    ctx->r5 = S32(0X43 << 16);
    // 0x004038C0: addiu       $a1, $a1, 0x1A7C
    ctx->r5 = ADD32(ctx->r5, 0X1A7C);
    // 0x004038C4: jal         0x00236314
    // 0x004038C8: addu        $a0, $s3, $a0
    ctx->r4 = ADD32(ctx->r19, ctx->r4);
    func_00236314(rdram, ctx);
        goto after_0;
    // 0x004038C8: addu        $a0, $s3, $a0
    ctx->r4 = ADD32(ctx->r19, ctx->r4);
    after_0:
    // 0x004038CC: addiu       $s3, $s3, 0x64
    ctx->r19 = ADD32(ctx->r19, 0X64);
L_004038D0:
    // 0x004038D0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x004038D4: slti        $v0, $s1, 0x8
    ctx->r2 = SIGNED(ctx->r17) < 0X8 ? 1 : 0;
    // 0x004038D8: bne         $v0, $zero, L_0040381C
    if (ctx->r2 != 0) {
        // 0x004038DC: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_0040381C;
    }
    // 0x004038DC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_004038E0:
    // 0x004038E0: lw          $v0, 0xC($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XC);
    // 0x004038E4: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x004038E8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x004038EC: beq         $v0, $zero, L_0040392C
    if (ctx->r2 == 0) {
        // 0x004038F0: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_0040392C;
    }
    // 0x004038F0: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x004038F4: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x004038F8: lw          $v1, -0x9F8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X9F8);
    // 0x004038FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00403900: bne         $v1, $v0, L_0040392C
    if (ctx->r3 != ctx->r2) {
        // 0x00403904: nop
    
            goto L_0040392C;
    }
    // 0x00403904: nop

    // 0x00403908: lw          $v0, 0x10($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X10);
    // 0x0040390C: lw          $v0, 0x6C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6C);
    // 0x00403910: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x00403914: beq         $v0, $zero, L_0040392C
    if (ctx->r2 == 0) {
        // 0x00403918: nop
    
            goto L_0040392C;
    }
    // 0x00403918: nop

    // 0x0040391C: lw          $v0, 0x4($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X4);
    // 0x00403920: srl         $v1, $v0, 31
    ctx->r3 = S32(U32(ctx->r2) >> 31);
    // 0x00403924: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00403928: sra         $s3, $v0, 1
    ctx->r19 = S32(SIGNED(ctx->r2) >> 1);
L_0040392C:
    // 0x0040392C: beq         $s3, $zero, L_00403994
    if (ctx->r19 == 0) {
        // 0x00403930: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00403994;
    }
    // 0x00403930: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00403934: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x00403938: addiu       $a0, $a0, -0x9F8
    ctx->r4 = ADD32(ctx->r4, -0X9F8);
    // 0x0040393C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00403940: bne         $v1, $v0, L_00403994
    if (ctx->r3 != ctx->r2) {
        // 0x00403944: nop
    
            goto L_00403994;
    }
    // 0x00403944: nop

    // 0x00403948: lbu         $v0, 0x3C9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3C9);
    // 0x0040394C: bne         $v0, $zero, L_00403994
    if (ctx->r2 != 0) {
        // 0x00403950: addiu       $s0, $a0, 0x38C
        ctx->r16 = ADD32(ctx->r4, 0X38C);
            goto L_00403994;
    }
    // 0x00403950: addiu       $s0, $a0, 0x38C
    ctx->r16 = ADD32(ctx->r4, 0X38C);
    // 0x00403954: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x00403958: addiu       $s2, $a0, 0x150
    ctx->r18 = ADD32(ctx->r4, 0X150);
L_0040395C:
    // 0x0040395C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00403960: blez        $v0, L_00403980
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00403964: subu        $v0, $v0, $s3
        ctx->r2 = SUB32(ctx->r2, ctx->r19);
            goto L_00403980;
    }
    // 0x00403964: subu        $v0, $v0, $s3
    ctx->r2 = SUB32(ctx->r2, ctx->r19);
    // 0x00403968: blez        $v0, L_00403A24
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040396C: sw          $v0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r2;
            goto L_00403A24;
    }
    // 0x0040396C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x00403970: lui         $a1, 0x43
    ctx->r5 = S32(0X43 << 16);
    // 0x00403974: addiu       $a1, $a1, 0x1A7C
    ctx->r5 = ADD32(ctx->r5, 0X1A7C);
    // 0x00403978: jal         0x00236314
    // 0x0040397C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00236314(rdram, ctx);
        goto after_1;
    // 0x0040397C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
L_00403980:
    // 0x00403980: addiu       $s2, $s2, 0x64
    ctx->r18 = ADD32(ctx->r18, 0X64);
    // 0x00403984: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00403988: slti        $v0, $s1, 0x7
    ctx->r2 = SIGNED(ctx->r17) < 0X7 ? 1 : 0;
    // 0x0040398C: bne         $v0, $zero, L_0040395C
    if (ctx->r2 != 0) {
        // 0x00403990: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_0040395C;
    }
    // 0x00403990: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_00403994:
    // 0x00403994: beq         $s7, $zero, L_00403AA4
    if (ctx->r23 == 0) {
        // 0x00403998: nop
    
            goto L_00403AA4;
    }
    // 0x00403998: nop

    // 0x0040399C: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x004039A0: addiu       $s0, $s0, -0x62F
    ctx->r16 = ADD32(ctx->r16, -0X62F);
    // 0x004039A4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x004039A8: bne         $v0, $zero, L_00403AA4
    if (ctx->r2 != 0) {
        // 0x004039AC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00403AA4;
    }
    // 0x004039AC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x004039B0: lw          $v1, -0x3C9($s0)
    ctx->r3 = MEM_W(ctx->r16, -0X3C9);
    // 0x004039B4: bne         $v1, $v0, L_004039C4
    if (ctx->r3 != ctx->r2) {
        // 0x004039B8: addiu       $s1, $s0, -0x3C9
        ctx->r17 = ADD32(ctx->r16, -0X3C9);
            goto L_004039C4;
    }
    // 0x004039B8: addiu       $s1, $s0, -0x3C9
    ctx->r17 = ADD32(ctx->r16, -0X3C9);
    // 0x004039BC: jal         0x004070B4
    // 0x004039C0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_004070B4(rdram, ctx);
        goto after_2;
    // 0x004039C0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_2:
L_004039C4:
    // 0x004039C4: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x004039C8: bne         $v0, $zero, L_00403A8C
    if (ctx->r2 != 0) {
        // 0x004039CC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00403A8C;
    }
    // 0x004039CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004039D0: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x004039D4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004039D8: lwc1        $f14, 0x370($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X370);
    // 0x004039DC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004039E0: lwc1        $f0, 0x374($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X374);
    // 0x004039E4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x004039E8: jal         0x002119FC
    // 0x004039EC: swc1        $f0, 0x3E8($s1)
    MEM_W(0X3E8, ctx->r17) = ctx->f0.u32l;
    func_002119FC(rdram, ctx);
        goto after_3;
    // 0x004039EC: swc1        $f0, 0x3E8($s1)
    MEM_W(0X3E8, ctx->r17) = ctx->f0.u32l;
    after_3:
    // 0x004039F0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004039F4: lwc1        $f12, 0x378($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X378);
    // 0x004039F8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004039FC: lwc1        $f14, 0x37C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X37C);
    // 0x00403A00: jal         0x002119FC
    // 0x00403A04: swc1        $f0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f0.u32l;
    func_002119FC(rdram, ctx);
        goto after_4;
    // 0x00403A04: swc1        $f0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f0.u32l;
    after_4:
    // 0x00403A08: addu        $a0, $fp, $zero
    ctx->r4 = ADD32(ctx->r30, 0);
    // 0x00403A0C: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    // 0x00403A10: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x00403A14: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x00403A18: swc1        $f0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->f0.u32l;
    // 0x00403A1C: j           L_00403A9C
    // 0x00403A20: sw          $v0, 0x3D4($s1)
    MEM_W(0X3D4, ctx->r17) = ctx->r2;
        goto L_00403A9C;
    // 0x00403A20: sw          $v0, 0x3D4($s1)
    MEM_W(0X3D4, ctx->r17) = ctx->r2;
L_00403A24:
    // 0x00403A24: sll         $a0, $s1, 1
    ctx->r4 = S32(ctx->r17 << 1);
    // 0x00403A28: addu        $a0, $a0, $s1
    ctx->r4 = ADD32(ctx->r4, ctx->r17);
    // 0x00403A2C: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x00403A30: addu        $a0, $a0, $s1
    ctx->r4 = ADD32(ctx->r4, ctx->r17);
    // 0x00403A34: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x00403A38: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x00403A3C: addiu       $s0, $s0, -0x9D4
    ctx->r16 = ADD32(ctx->r16, -0X9D4);
    // 0x00403A40: lui         $a1, 0x43
    ctx->r5 = S32(0X43 << 16);
    // 0x00403A44: addiu       $a1, $a1, 0x1B0C
    ctx->r5 = ADD32(ctx->r5, 0X1B0C);
    // 0x00403A48: jal         0x00236314
    // 0x00403A4C: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    func_00236314(rdram, ctx);
        goto after_5;
    // 0x00403A4C: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    after_5:
    // 0x00403A50: sw          $s1, 0x39C($s0)
    MEM_W(0X39C, ctx->r16) = ctx->r17;
    // 0x00403A54: j           L_00403994
    // 0x00403A58: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
        goto L_00403994;
    // 0x00403A58: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
L_00403A5C:
    // 0x00403A5C: addu        $a0, $a0, $s1
    ctx->r4 = ADD32(ctx->r4, ctx->r17);
    // 0x00403A60: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x00403A64: addu        $a0, $a0, $s1
    ctx->r4 = ADD32(ctx->r4, ctx->r17);
    // 0x00403A68: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x00403A6C: addiu       $v0, $s5, 0x24
    ctx->r2 = ADD32(ctx->r21, 0X24);
    // 0x00403A70: lui         $a1, 0x43
    ctx->r5 = S32(0X43 << 16);
    // 0x00403A74: addiu       $a1, $a1, 0x1B0C
    ctx->r5 = ADD32(ctx->r5, 0X1B0C);
    // 0x00403A78: jal         0x00236314
    // 0x00403A7C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_00236314(rdram, ctx);
        goto after_6;
    // 0x00403A7C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_6:
    // 0x00403A80: sw          $s1, 0x3C0($s5)
    MEM_W(0X3C0, ctx->r21) = ctx->r17;
    // 0x00403A84: j           L_004038E0
    // 0x00403A88: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
        goto L_004038E0;
    // 0x00403A88: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
L_00403A8C:
    // 0x00403A8C: addu        $a0, $fp, $zero
    ctx->r4 = ADD32(ctx->r30, 0);
    // 0x00403A90: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x00403A94: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x00403A98: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
L_00403A9C:
    // 0x00403A9C: jal         0x00243414
    // 0x00403AA0: nop

    func_00243414(rdram, ctx);
        goto after_7;
    // 0x00403AA0: nop

    after_7:
L_00403AA4:
    // 0x00403AA4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x00403AA8: lw          $fp, 0x30($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X30);
    // 0x00403AAC: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x00403AB0: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x00403AB4: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x00403AB8: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00403ABC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00403AC0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00403AC4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00403AC8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00403ACC: jr          $ra
    // 0x00403AD0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00403AD0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0041BC50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041BC50: lb          $v1, 0x2F($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X2F);
    // 0x0041BC54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041BC58: beq         $v1, $v0, L_0041BCA8
    if (ctx->r3 == ctx->r2) {
            // 0x0041BC5C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    func_0041BCA8(rdram, ctx);
    return;
    }
    // 0x0041BC5C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x0041BC60: bne         $v0, $zero, L_0041BC7C
    if (ctx->r2 != 0) {
        // 0x0041BC64: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_0041BC7C;
    }
    // 0x0041BC64: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0041BC68: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0041BC6C: beq         $v1, $v0, L_0041BCD8
    if (ctx->r3 == ctx->r2) {
            // 0x0041BC70: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    func_0041BCD8(rdram, ctx);
    return;
    }
    // 0x0041BC70: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0041BC74: beq         $v1, $v0, L_0041BD04
    if (ctx->r3 == ctx->r2) {
            // 0x0041BC78: addu        $v1, $a0, $a1
    ctx->r3 = ADD32(ctx->r4, ctx->r5);
    func_0041BD04(rdram, ctx);
    return;
    }
    // 0x0041BC78: addu        $v1, $a0, $a1
    ctx->r3 = ADD32(ctx->r4, ctx->r5);
L_0041BC7C:
    // 0x0041BC7C: addu        $v1, $a0, $a1
    ctx->r3 = ADD32(ctx->r4, ctx->r5);
L_0041BC80:
    // 0x0041BC80: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0041BC84: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x0041BC88: lbu         $v0, 0x5E80($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X5E80);
    // 0x0041BC8C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0041BC90: sb          $v0, 0x33($v1)
    MEM_B(0X33, ctx->r3) = ctx->r2;
    // 0x0041BC94: slti        $v0, $a1, 0x8
    ctx->r2 = SIGNED(ctx->r5) < 0X8 ? 1 : 0;
    // 0x0041BC98: bne         $v0, $zero, L_0041BC80
    if (ctx->r2 != 0) {
        // 0x0041BC9C: addu        $v1, $a0, $a1
        ctx->r3 = ADD32(ctx->r4, ctx->r5);
            goto L_0041BC80;
    }
    // 0x0041BC9C: addu        $v1, $a0, $a1
    ctx->r3 = ADD32(ctx->r4, ctx->r5);
    // 0x0041BCA0: jr          $ra
    // 0x0041BCA4: nop

    return;
    // 0x0041BCA4: nop

;}
RECOMP_FUNC void func_0025756C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025756C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00257570: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00257574: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00257578: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0025757C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00257580: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x00257584: beq         $s0, $zero, L_00257610
    if (ctx->r16 == 0) {
        // 0x00257588: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_00257610;
    }
    // 0x00257588: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0025758C: beq         $s1, $zero, L_00257610
    if (ctx->r17 == 0) {
        // 0x00257590: nop
    
            goto L_00257610;
    }
    // 0x00257590: nop

    // 0x00257594: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x00257598: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x0025759C: beq         $v0, $zero, L_00257610
    if (ctx->r2 == 0) {
        // 0x002575A0: nop
    
            goto L_00257610;
    }
    // 0x002575A0: nop

    // 0x002575A4: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x002575A8: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x002575AC: jal         0x00269C3C
    // 0x002575B0: nop

    func_00269C3C(rdram, ctx);
        goto after_0;
    // 0x002575B0: nop

    after_0:
    // 0x002575B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002575B8: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x002575BC: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x002575C0: jal         0x0026BE60
    // 0x002575C4: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_0026BE60(rdram, ctx);
        goto after_1;
    // 0x002575C4: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_1:
    // 0x002575C8: sub.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f0.fl;
    // 0x002575CC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002575D0: lwc1        $f0, 0x7230($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7230);
    // 0x002575D4: trunc.w.s   $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x002575D8: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x002575DC: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x002575E0: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x002575E4: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x002575E8: nop

    // 0x002575EC: bc1f        L_00257610
    if (!c1cs) {
        // 0x002575F0: nop
    
            goto L_00257610;
    }
    // 0x002575F0: nop

    // 0x002575F4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002575F8: lwc1        $f12, 0x7234($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X7234);
    // 0x002575FC: mul.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f1.fl, ctx->f12.fl);
    // 0x00257600: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00257604: lwc1        $f0, 0x7238($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7238);
    // 0x00257608: j           L_00257614
    // 0x0025760C: sub.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f12.fl;
        goto L_00257614;
    // 0x0025760C: sub.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f12.fl;
L_00257610:
    // 0x00257610: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
L_00257614:
    // 0x00257614: jal         0x00275B30
    // 0x00257618: nop

    func_00275B30(rdram, ctx);
        goto after_2;
    // 0x00257618: nop

    after_2:
    // 0x0025761C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00257620: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00257624: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00257628: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x0025762C: jr          $ra
    // 0x00257630: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00257630: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_004184A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004184A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x004184AC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x004184B0: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x004184B4: addiu       $s1, $s1, -0x5528
    ctx->r17 = ADD32(ctx->r17, -0X5528);
    // 0x004184B8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x004184BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004184C0: lb          $v0, 0x25($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X25);
    // 0x004184C4: beq         $v0, $zero, L_004184F8
    if (ctx->r2 == 0) {
        // 0x004184C8: addu        $s0, $a0, $zero
        ctx->r16 = ADD32(ctx->r4, 0);
            goto L_004184F8;
    }
    // 0x004184C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x004184CC: jal         0x004160F0
    // 0x004184D0: nop

    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x004184D0: nop

    after_0:
    // 0x004184D4: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x004184D8: addiu       $a1, $a1, 0xE84
    ctx->r5 = ADD32(ctx->r5, 0XE84);
    // 0x004184DC: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x004184E0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x004184E4: lb          $a2, 0x25($s1)
    ctx->r6 = MEM_B(ctx->r17, 0X25);
    // 0x004184E8: jal         0x0029E3E0
    // 0x004184EC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_1;
    // 0x004184EC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_1:
    // 0x004184F0: j           L_00418518
    // 0x004184F4: nop

        goto L_00418518;
    // 0x004184F4: nop

L_004184F8:
    // 0x004184F8: jal         0x004160F0
    // 0x004184FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_004160F0(rdram, ctx);
        goto after_2;
    // 0x004184FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00418500: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00418504: addiu       $a1, $a1, 0xE8C
    ctx->r5 = ADD32(ctx->r5, 0XE8C);
    // 0x00418508: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x0041850C: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x00418510: jal         0x0029E3E0
    // 0x00418514: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_3;
    // 0x00418514: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_3:
L_00418518:
    // 0x00418518: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0041851C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00418520: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00418524: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00418528: jr          $ra
    // 0x0041852C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041852C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0021DC84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021DC84: addiu       $sp, $sp, -0xE0
    ctx->r29 = ADD32(ctx->r29, -0XE0);
    // 0x0021DC88: sw          $s2, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r18;
    // 0x0021DC8C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0021DC90: sw          $ra, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r31;
    // 0x0021DC94: sw          $s3, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r19;
    // 0x0021DC98: sw          $s1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r17;
    // 0x0021DC9C: sw          $s0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r16;
    // 0x0021DCA0: sdc1        $f22, 0xD8($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0XD8, ctx->r29);
    // 0x0021DCA4: sdc1        $f21, 0xD0($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0XD0, ctx->r29);
    // 0x0021DCA8: sdc1        $f20, 0xC8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XC8, ctx->r29);
    // 0x0021DCAC: lw          $v0, 0x10($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X10);
    // 0x0021DCB0: beq         $v0, $zero, L_0021E014
    if (ctx->r2 == 0) {
        // 0x0021DCB4: addu        $s3, $a2, $zero
        ctx->r19 = ADD32(ctx->r6, 0);
            goto L_0021E014;
    }
    // 0x0021DCB4: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x0021DCB8: jal         0x00268160
    // 0x0021DCBC: nop

    func_00268160(rdram, ctx);
        goto after_0;
    // 0x0021DCBC: nop

    after_0:
    // 0x0021DCC0: beq         $v0, $zero, L_0021E014
    if (ctx->r2 == 0) {
        // 0x0021DCC4: lui         $v0, 0x20
        ctx->r2 = S32(0X20 << 16);
            goto L_0021E014;
    }
    // 0x0021DCC4: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x0021DCC8: lw          $v1, 0xD4($s2)
    ctx->r3 = MEM_W(ctx->r18, 0XD4);
    // 0x0021DCCC: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x0021DCD0: bne         $v0, $zero, L_0021E014
    if (ctx->r2 != 0) {
        // 0x0021DCD4: lui         $v0, 0x1000
        ctx->r2 = S32(0X1000 << 16);
            goto L_0021E014;
    }
    // 0x0021DCD4: lui         $v0, 0x1000
    ctx->r2 = S32(0X1000 << 16);
    // 0x0021DCD8: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x0021DCDC: beq         $v0, $zero, L_0021E008
    if (ctx->r2 == 0) {
        // 0x0021DCE0: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0021E008;
    }
    // 0x0021DCE0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0021DCE4: lw          $v0, 0xA0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XA0);
    // 0x0021DCE8: bne         $v0, $zero, L_0021DFF0
    if (ctx->r2 != 0) {
        // 0x0021DCEC: nop
    
            goto L_0021DFF0;
    }
    // 0x0021DCEC: nop

    // 0x0021DCF0: jal         0x0026872C
    // 0x0021DCF4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_0026872C(rdram, ctx);
        goto after_1;
    // 0x0021DCF4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x0021DCF8: lwc1        $f1, 0x8($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X8);
    // 0x0021DCFC: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x0021DD00: c.lt.s      $f1, $f22
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f1.fl < ctx->f22.fl;
    // 0x0021DD04: nop

    // 0x0021DD08: bc1t        L_0021E014
    if (c1cs) {
        // 0x0021DD0C: nop
    
            goto L_0021E014;
    }
    // 0x0021DD0C: nop

    // 0x0021DD10: sub.s       $f0, $f1, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f22.fl;
    // 0x0021DD14: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021DD18: lwc1        $f1, 0x5C70($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5C70);
    // 0x0021DD1C: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    // 0x0021DD20: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0021DD24: nop

    // 0x0021DD28: bc1tl       L_0021DD30
    if (c1cs) {
        // 0x0021DD2C: mov.s       $f21, $f1
        CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    ctx->f21.fl = ctx->f1.fl;
            goto L_0021DD30;
    }
    goto skip_0;
    // 0x0021DD2C: mov.s       $f21, $f1
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    ctx->f21.fl = ctx->f1.fl;
    skip_0:
L_0021DD30:
    // 0x0021DD30: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0021DD34: addiu       $a0, $a0, 0x7148
    ctx->r4 = ADD32(ctx->r4, 0X7148);
    // 0x0021DD38: jal         0x00206950
    // 0x0021DD3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    entry_00206950(rdram, ctx);
        goto after_2;
    // 0x0021DD3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x0021DD40: beq         $v0, $zero, L_0021E014
    if (ctx->r2 == 0) {
        // 0x0021DD44: sw          $v0, 0xA0($s2)
        MEM_W(0XA0, ctx->r18) = ctx->r2;
            goto L_0021E014;
    }
    // 0x0021DD44: sw          $v0, 0xA0($s2)
    MEM_W(0XA0, ctx->r18) = ctx->r2;
    // 0x0021DD48: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0021DD4C: lw          $v1, 0x6D1C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6D1C);
    // 0x0021DD50: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x0021DD54: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0021DD58: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0021DD5C: addiu       $v0, $v0, 0x110
    ctx->r2 = ADD32(ctx->r2, 0X110);
    // 0x0021DD60: addu        $v0, $s2, $v0
    ctx->r2 = ADD32(ctx->r18, ctx->r2);
    // 0x0021DD64: lb          $v1, 0x10($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X10);
    // 0x0021DD68: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021DD6C: lwc1        $f1, 0x5C74($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5C74);
    // 0x0021DD70: mtc1        $v1, $f0
    ctx->f0.u32l = ctx->r3;
    // 0x0021DD74: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0021DD78: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021DD7C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x0021DD80: lb          $v1, 0x11($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X11);
    // 0x0021DD84: mtc1        $v1, $f0
    ctx->f0.u32l = ctx->r3;
    // 0x0021DD88: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0021DD8C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021DD90: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x0021DD94: lb          $v1, 0x12($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X12);
    // 0x0021DD98: mtc1        $v1, $f0
    ctx->f0.u32l = ctx->r3;
    // 0x0021DD9C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0021DDA0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021DDA4: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x0021DDA8: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    // 0x0021DDAC: mtc1        $v1, $f0
    ctx->f0.u32l = ctx->r3;
    // 0x0021DDB0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0021DDB4: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0021DDB8: lbu         $v0, 0x9($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X9);
    // 0x0021DDBC: mtc1        $v0, $f12
    ctx->f12.u32l = ctx->r2;
    // 0x0021DDC0: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x0021DDC4: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0021DDC8: add.s       $f0, $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x0021DDCC: jal         0x00298470
    // 0x0021DDD0: add.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_3;
    // 0x0021DDD0: add.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f12.fl;
    after_3:
    // 0x0021DDD4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021DDD8: lwc1        $f1, 0x5C78($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5C78);
    // 0x0021DDDC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021DDE0: addiu       $s0, $sp, 0x18
    ctx->r16 = ADD32(ctx->r29, 0X18);
    // 0x0021DDE4: addiu       $v0, $sp, 0xA8
    ctx->r2 = ADD32(ctx->r29, 0XA8);
    // 0x0021DDE8: swc1        $f0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f0.u32l;
    // 0x0021DDEC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0021DDF0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0021DDF4: lw          $a1, 0x4($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X4);
    // 0x0021DDF8: lw          $a2, 0x8($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X8);
    // 0x0021DDFC: lw          $a3, 0xC($s2)
    ctx->r7 = MEM_W(ctx->r18, 0XC);
    // 0x0021DE00: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x0021DE04: addiu       $a0, $a0, -0xCC
    ctx->r4 = ADD32(ctx->r4, -0XCC);
    // 0x0021DE08: jal         0x00228910
    // 0x0021DE0C: nop

    entry_00228910(rdram, ctx);
        goto after_4;
    // 0x0021DE0C: nop

    after_4:
    // 0x0021DE10: lwc1        $f0, 0xA8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x0021DE14: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021DE18: lwc1        $f1, 0x5C7C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5C7C);
    // 0x0021DE1C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0021DE20: nop

    // 0x0021DE24: bc1tl       L_0021DE2C
    if (c1cs) {
        // 0x0021DE28: swc1        $f1, 0xA8($sp)
        MEM_W(0XA8, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
            goto L_0021DE2C;
    }
    goto skip_1;
    // 0x0021DE28: swc1        $f1, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    skip_1:
L_0021DE2C:
    // 0x0021DE2C: lwc1        $f0, 0xA8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x0021DE30: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021DE34: lwc1        $f1, 0x5C80($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5C80);
    // 0x0021DE38: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021DE3C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021DE40: lwc1        $f1, 0x5C84($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5C84);
    // 0x0021DE44: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0021DE48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0021DE4C: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0021DE50: lw          $v1, -0x4750($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4750);
    // 0x0021DE54: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021DE58: mfc1        $a1, $f3
    ctx->r5 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0021DE5C: bne         $v1, $v0, L_0021DE8C
    if (ctx->r3 != ctx->r2) {
        // 0x0021DE60: nop
    
            goto L_0021DE8C;
    }
    // 0x0021DE60: nop

    // 0x0021DE64: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0021DE68: lwc1        $f1, -0x4740($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X4740);
    // 0x0021DE6C: mtc1        $a1, $f0
    ctx->f0.u32l = ctx->r5;
    // 0x0021DE70: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0021DE74: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021DE78: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021DE7C: lwc1        $f1, 0x5C88($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5C88);
    // 0x0021DE80: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021DE84: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0021DE88: mfc1        $a1, $f3
    ctx->r5 = (int32_t)ctx->f_odd[(3 - 1) * 2];
L_0021DE8C:
    // 0x0021DE8C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021DE90: lwc1        $f0, 0x5C8C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5C8C);
    // 0x0021DE94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0021DE98: sb          $a1, 0x10E($s2)
    MEM_B(0X10E, ctx->r18) = ctx->r5;
    // 0x0021DE9C: jal         0x0020F040
    // 0x0021DEA0: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    func_0020F040(rdram, ctx);
        goto after_5;
    // 0x0021DEA0: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x0021DEA4: lwc1        $f2, 0x1C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x0021DEA8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0021DEAC: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x0021DEB0: nop

    // 0x0021DEB4: bc1f        L_0021DEE0
    if (!c1cs) {
        // 0x0021DEB8: nop
    
            goto L_0021DEE0;
    }
    // 0x0021DEB8: nop

    // 0x0021DEBC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021DEC0: lwc1        $f1, 0x5C90($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5C90);
    // 0x0021DEC4: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x0021DEC8: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0021DECC: nop

    // 0x0021DED0: bc1f        L_0021DF34
    if (!c1cs) {
        // 0x0021DED4: nop
    
            goto L_0021DF34;
    }
    // 0x0021DED4: nop

    // 0x0021DED8: j           L_0021DEF8
    // 0x0021DEDC: nop

        goto L_0021DEF8;
    // 0x0021DEDC: nop

L_0021DEE0:
    // 0x0021DEE0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021DEE4: lwc1        $f0, 0x5C94($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5C94);
    // 0x0021DEE8: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x0021DEEC: nop

    // 0x0021DEF0: bc1f        L_0021DF34
    if (!c1cs) {
        // 0x0021DEF4: nop
    
            goto L_0021DF34;
    }
    // 0x0021DEF4: nop

L_0021DEF8:
    // 0x0021DEF8: lwc1        $f1, 0x1C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X1C);
    // 0x0021DEFC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0021DF00: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0021DF04: nop

    // 0x0021DF08: bc1f        L_0021DF20
    if (!c1cs) {
        // 0x0021DF0C: nop
    
            goto L_0021DF20;
    }
    // 0x0021DF0C: nop

    // 0x0021DF10: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021DF14: lwc1        $f0, 0x5C98($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5C98);
    // 0x0021DF18: j           L_0021DF2C
    // 0x0021DF1C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
        goto L_0021DF2C;
    // 0x0021DF1C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
L_0021DF20:
    // 0x0021DF20: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021DF24: lwc1        $f0, 0x5C9C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5C9C);
    // 0x0021DF28: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
L_0021DF2C:
    // 0x0021DF2C: jal         0x0020F040
    // 0x0021DF30: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    func_0020F040(rdram, ctx);
        goto after_6;
    // 0x0021DF30: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_6:
L_0021DF34:
    // 0x0021DF34: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021DF38: lwc1        $f20, 0x5CA0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X5CA0);
    // 0x0021DF3C: mul.s       $f20, $f21, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f21.fl, ctx->f20.fl);
    // 0x0021DF40: add.s       $f20, $f22, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = ctx->f22.fl + ctx->f20.fl;
    // 0x0021DF44: addiu       $s1, $sp, 0x28
    ctx->r17 = ADD32(ctx->r29, 0X28);
    // 0x0021DF48: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0021DF4C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x0021DF50: jal         0x00210004
    // 0x0021DF54: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_00210004(rdram, ctx);
        goto after_7;
    // 0x0021DF54: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_7:
    // 0x0021DF58: neg.s       $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = -ctx->f20.fl;
    // 0x0021DF5C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x0021DF60: lwc1        $f0, 0x4($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X4);
    // 0x0021DF64: lwc1        $f1, 0xC($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0XC);
    // 0x0021DF68: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0021DF6C: neg.s       $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = -ctx->f1.fl;
    // 0x0021DF70: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x0021DF74: mfc1        $a3, $f1
    ctx->r7 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x0021DF78: jal         0x00210318
    // 0x0021DF7C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00210318(rdram, ctx);
        goto after_8;
    // 0x0021DF7C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_8:
    // 0x0021DF80: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021DF84: lwc1        $f0, 0x5CA4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5CA4);
    // 0x0021DF88: mul.s       $f0, $f21, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x0021DF8C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021DF90: lwc1        $f1, 0x5CA8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5CA8);
    // 0x0021DF94: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0021DF98: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x0021DF9C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0021DFA0: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x0021DFA4: jal         0x00210478
    // 0x0021DFA8: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    func_00210478(rdram, ctx);
        goto after_9;
    // 0x0021DFA8: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    after_9:
    // 0x0021DFAC: addiu       $a0, $s2, 0x40
    ctx->r4 = ADD32(ctx->r18, 0X40);
    // 0x0021DFB0: addiu       $s0, $sp, 0x68
    ctx->r16 = ADD32(ctx->r29, 0X68);
    // 0x0021DFB4: jal         0x00211114
    // 0x0021DFB8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00211114(rdram, ctx);
        goto after_10;
    // 0x0021DFB8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_10:
    // 0x0021DFBC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0021DFC0: lw          $a0, 0xA0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XA0);
    // 0x0021DFC4: jal         0x0020C618
    // 0x0021DFC8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0020C618(rdram, ctx);
        goto after_11;
    // 0x0021DFC8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_11:
    // 0x0021DFCC: lw          $a0, 0xA0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XA0);
    // 0x0021DFD0: lw          $a1, 0x4($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X4);
    // 0x0021DFD4: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x0021DFD8: lw          $a3, 0xC($s2)
    ctx->r7 = MEM_W(ctx->r18, 0XC);
    // 0x0021DFDC: jal         0x00210318
    // 0x0021DFE0: nop

    func_00210318(rdram, ctx);
        goto after_12;
    // 0x0021DFE0: nop

    after_12:
    // 0x0021DFE4: lw          $v0, 0xA0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XA0);
    // 0x0021DFE8: beq         $v0, $zero, L_0021E014
    if (ctx->r2 == 0) {
        // 0x0021DFEC: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0021E014;
    }
    // 0x0021DFEC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_0021DFF0:
    // 0x0021DFF0: lw          $a2, 0xA0($a0)
    ctx->r6 = MEM_W(ctx->r4, 0XA0);
    // 0x0021DFF4: lbu         $a3, 0x10E($a0)
    ctx->r7 = MEM_BU(ctx->r4, 0X10E);
    // 0x0021DFF8: jal         0x0021ED04
    // 0x0021DFFC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_0021ED04(rdram, ctx);
        goto after_13;
    // 0x0021DFFC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_13:
    // 0x0021E000: j           L_0021E014
    // 0x0021E004: nop

        goto L_0021E014;
    // 0x0021E004: nop

L_0021E008:
    // 0x0021E008: lw          $a1, 0x10($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X10);
    // 0x0021E00C: jal         0x0021E03C
    // 0x0021E010: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_0021E03C(rdram, ctx);
        goto after_14;
    // 0x0021E010: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_14:
L_0021E014:
    // 0x0021E014: lw          $ra, 0xC0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XC0);
    // 0x0021E018: lw          $s3, 0xBC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XBC);
    // 0x0021E01C: lw          $s2, 0xB8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XB8);
    // 0x0021E020: lw          $s1, 0xB4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XB4);
    // 0x0021E024: lw          $s0, 0xB0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XB0);
    // 0x0021E028: ldc1        $f22, 0xD8($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0XD8);
    // 0x0021E02C: ldc1        $f21, 0xD0($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0XD0);
    // 0x0021E030: ldc1        $f20, 0xC8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XC8);
    // 0x0021E034: jr          $ra
    // 0x0021E038: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
    return;
    // 0x0021E038: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
;}
RECOMP_FUNC void func_004678C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004678C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004678C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004678CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x004678D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x004678D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x004678D8: lw          $v1, 0x518($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X518);
    // 0x004678DC: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x004678E0: jal         0x0042DB38
    // 0x004678E4: sb          $v0, 0x28($v1)
    MEM_B(0X28, ctx->r3) = ctx->r2;
    func_0042DB38(rdram, ctx);
        goto after_0;
    // 0x004678E4: sb          $v0, 0x28($v1)
    MEM_B(0X28, ctx->r3) = ctx->r2;
    after_0:
    // 0x004678E8: addiu       $a0, $s0, 0x288
    ctx->r4 = ADD32(ctx->r16, 0X288);
    // 0x004678EC: addiu       $a1, $s0, 0x3C8
    ctx->r5 = ADD32(ctx->r16, 0X3C8);
    // 0x004678F0: jal         0x00243414
    // 0x004678F4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x004678F4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_1:
    // 0x004678F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x004678FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00467900: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x00467904: lw          $a1, -0x5358($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X5358);
    // 0x00467908: jal         0x00248BA8
    // 0x0046790C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_00248BA8(rdram, ctx);
        goto after_2;
    // 0x0046790C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x00467910: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00467914: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00467918: jr          $ra
    // 0x0046791C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0046791C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0026F480(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026F480: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0026F484: lwc1        $f5, 0x0($a1)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r5, 0X0);
    // 0x0026F488: lwc1        $f4, 0x4($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X4);
    // 0x0026F48C: lwc1        $f3, 0x8($a1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r5, 0X8);
L_0026F490:
    // 0x0026F490: lwc1        $f1, 0x0($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X0);
    // 0x0026F494: mul.s       $f1, $f1, $f5
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f5.fl);
    // 0x0026F498: lwc1        $f2, 0x4($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X4);
    // 0x0026F49C: mul.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x0026F4A0: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    // 0x0026F4A4: mul.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x0026F4A8: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x0026F4AC: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0026F4B0: lwc1        $f0, 0xC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XC);
    // 0x0026F4B4: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0026F4B8: nop

    // 0x0026F4BC: bc1t        L_0026F4CC
    if (c1cs) {
        // 0x0026F4C0: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_0026F4CC;
    }
    // 0x0026F4C0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0026F4C4: jr          $ra
    // 0x0026F4C8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0026F4C8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0026F4CC:
    // 0x0026F4CC: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x0026F4D0: bne         $v0, $zero, L_0026F490
    if (ctx->r2 != 0) {
        // 0x0026F4D4: addiu       $a0, $a0, 0x10
        ctx->r4 = ADD32(ctx->r4, 0X10);
            goto L_0026F490;
    }
    // 0x0026F4D4: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x0026F4D8: jr          $ra
    // 0x0026F4DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x0026F4DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_0025AAA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025AAA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025AAA8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025AAAC: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025AAB0: lhu         $a3, 0x8A($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X8A);
    // 0x0025AAB4: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025AAB8: addiu       $a2, $a2, 0x3C0
    ctx->r6 = ADD32(ctx->r6, 0X3C0);
    // 0x0025AABC: jal         0x00245A98
    // 0x0025AAC0: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025AAC0: nop

    after_0:
    // 0x0025AAC4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025AAC8: jr          $ra
    // 0x0025AACC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025AACC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00440AC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00440AC8: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x00440ACC: sw          $s2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r18;
    // 0x00440AD0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00440AD4: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x00440AD8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00440ADC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x00440AE0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x00440AE4: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x00440AE8: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x00440AEC: addiu       $s0, $s0, 0x1F50
    ctx->r16 = ADD32(ctx->r16, 0X1F50);
    // 0x00440AF0: sw          $ra, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r31;
    // 0x00440AF4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00440AF8: addu        $v1, $a3, $zero
    ctx->r3 = ADD32(ctx->r7, 0);
    // 0x00440AFC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x00440B00: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x00440B04: jal         0x00246108
    // 0x00440B08: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x00440B08: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x00440B0C: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x00440B10: ori         $v1, $v1, 0x7FFF
    ctx->r3 = ctx->r3 | 0X7FFF;
    // 0x00440B14: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00440B18: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00440B1C: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x00440B20: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x00440B24: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00440B28: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x00440B2C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00440B30: jal         0x00245BAC
    // 0x00440B34: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x00440B34: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    after_1:
    // 0x00440B38: lb          $v0, 0xC7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC7);
    // 0x00440B3C: beq         $v0, $zero, L_00440B68
    if (ctx->r2 == 0) {
        // 0x00440B40: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00440B68;
    }
    // 0x00440B40: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00440B44: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00440B48: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00440B4C: lwc1        $f0, 0x55C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X55C);
    // 0x00440B50: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00440B54: swc1        $f0, 0x1FC($a0)
    MEM_W(0X1FC, ctx->r4) = ctx->f0.u32l;
    // 0x00440B58: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00440B5C: sw          $v0, -0x5FC($at)
    MEM_W(-0X5FC, ctx->r1) = ctx->r2;
    // 0x00440B60: jal         0x00243414
    // 0x00440B64: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x00440B64: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_2:
L_00440B68:
    // 0x00440B68: lw          $ra, 0xAC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XAC);
    // 0x00440B6C: lw          $s2, 0xA8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA8);
    // 0x00440B70: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x00440B74: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x00440B78: jr          $ra
    // 0x00440B7C: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x00440B7C: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_00267EE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00267EE0: jr          $ra
    // 0x00267EE4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00267EE4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00427F80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00427F80: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00427F84: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x00427F88: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00427F8C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x00427F90: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x00427F94: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00427F98: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x00427F9C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00427FA0: jal         0x00428058
    // 0x00427FA4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    func_00428058(rdram, ctx);
        goto after_0;
    // 0x00427FA4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    after_0:
    // 0x00427FA8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x00427FAC: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x00427FB0: addiu       $s1, $s1, 0xE20
    ctx->r17 = ADD32(ctx->r17, 0XE20);
    // 0x00427FB4: jal         0x0029A080
    // 0x00427FB8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0029A080(rdram, ctx);
        goto after_1;
    // 0x00427FB8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x00427FBC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00427FC0: addiu       $s0, $sp, 0x18
    ctx->r16 = ADD32(ctx->r29, 0X18);
    // 0x00427FC4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00427FC8: jal         0x0029B6F0
    // 0x00427FCC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x00427FCC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x00427FD0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00427FD4: jal         0x0029A080
    // 0x00427FD8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0029A080(rdram, ctx);
        goto after_3;
    // 0x00427FD8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x00427FDC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00427FE0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00427FE4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00427FE8: jal         0x0029B6F0
    // 0x00427FEC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    osRecvMesg_recomp(rdram, ctx);
        goto after_4;
    // 0x00427FEC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_4:
    // 0x00427FF0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00427FF4: jal         0x004280E4
    // 0x00427FF8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_004280E4(rdram, ctx);
        goto after_5;
    // 0x00427FF8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_5:
    // 0x00427FFC: lbu         $v1, 0x12($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X12);
    // 0x00428000: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // turok2: reconnected split function: a stray ELF symbol at 0x00428004 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00428004(rdram, ctx);
;}
RECOMP_FUNC void func_00262CE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
RECOMP_FUNC void func_002590CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002590CC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x002590D0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x002590D4: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x002590D8: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x002590DC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x002590E0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x002590E4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x002590E8: lw          $s0, 0x1A8($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X1A8);
    // 0x002590EC: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x002590F0: lw          $v1, 0x51C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X51C);
    // 0x002590F4: lw          $v0, 0xA64($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA64);
    // 0x002590F8: andi        $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 & 0X2000;
    // 0x002590FC: beq         $v0, $zero, L_00259124
    if (ctx->r2 == 0) {
        // 0x00259100: addiu       $s1, $v1, 0x114
        ctx->r17 = ADD32(ctx->r3, 0X114);
            goto L_00259124;
    }
    // 0x00259100: addiu       $s1, $v1, 0x114
    ctx->r17 = ADD32(ctx->r3, 0X114);
    // 0x00259104: lw          $v0, 0x1284($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1284);
    // 0x00259108: bne         $v0, $zero, L_00259128
    if (ctx->r2 != 0) {
        // 0x0025910C: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_00259128;
    }
    // 0x0025910C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00259110: lh          $a1, 0x996($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X996);
    // 0x00259114: jal         0x0024E700
    // 0x00259118: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0024E700(rdram, ctx);
        goto after_0;
    // 0x00259118: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0025911C: bne         $v0, $zero, L_0025916C
    if (ctx->r2 != 0) {
        // 0x00259120: nop
    
            goto L_0025916C;
    }
    // 0x00259120: nop

L_00259124:
    // 0x00259124: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_00259128:
    // 0x00259128: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0025912C: jal         0x00243414
    // 0x00259130: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x00259130: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_1:
    // 0x00259134: jal         0x00253E68
    // 0x00259138: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00253E68(rdram, ctx);
        goto after_2;
    // 0x00259138: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0025913C: jal         0x00253F40
    // 0x00259140: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00253F40(rdram, ctx);
        goto after_3;
    // 0x00259140: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x00259144: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00259148: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x0025914C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00259150: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x00259154: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    // 0x00259158: lw          $a3, 0x8($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X8);
    // 0x0025915C: jal         0x00275544
    // 0x00259160: addiu       $a0, $zero, 0x1A6
    ctx->r4 = ADD32(0, 0X1A6);
    func_00275544(rdram, ctx);
        goto after_4;
    // 0x00259160: addiu       $a0, $zero, 0x1A6
    ctx->r4 = ADD32(0, 0X1A6);
    after_4:
    // 0x00259164: j           L_002591D8
    // 0x00259168: nop

        goto L_002591D8;
    // 0x00259168: nop

L_0025916C:
    // 0x0025916C: lw          $v0, 0x128C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X128C);
    // 0x00259170: bne         $v0, $zero, L_00259180
    if (ctx->r2 != 0) {
        // 0x00259174: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00259180;
    }
    // 0x00259174: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00259178: jal         0x00253EB8
    // 0x0025917C: addiu       $a1, $zero, 0x1A7
    ctx->r5 = ADD32(0, 0X1A7);
    func_00253EB8(rdram, ctx);
        goto after_5;
    // 0x0025917C: addiu       $a1, $zero, 0x1A7
    ctx->r5 = ADD32(0, 0X1A7);
    after_5:
L_00259180:
    // 0x00259180: lui         $a1, 0x3E8E
    ctx->r5 = S32(0X3E8E << 16);
    // 0x00259184: ori         $a1, $a1, 0xFA36
    ctx->r5 = ctx->r5 | 0XFA36;
    // 0x00259188: lui         $a2, 0x3ECC
    ctx->r6 = S32(0X3ECC << 16);
    // 0x0025918C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x00259190: jal         0x002117DC
    // 0x00259194: addiu       $a0, $s2, 0x110
    ctx->r4 = ADD32(ctx->r18, 0X110);
    func_002117DC(rdram, ctx);
        goto after_6;
    // 0x00259194: addiu       $a0, $s2, 0x110
    ctx->r4 = ADD32(ctx->r18, 0X110);
    after_6:
    // 0x00259198: lwc1        $f0, 0x64($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X64);
    // 0x0025919C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002591A0: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x002591A4: sub.s       $f1, $f0, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x002591A8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x002591AC: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x002591B0: nop

    // 0x002591B4: bc1f        L_002591D8
    if (!c1cs) {
        // 0x002591B8: swc1        $f1, 0x64($s2)
        MEM_W(0X64, ctx->r18) = ctx->f_odd[(1 - 1) * 2];
            goto L_002591D8;
    }
    // 0x002591B8: swc1        $f1, 0x64($s2)
    MEM_W(0X64, ctx->r18) = ctx->f_odd[(1 - 1) * 2];
    // 0x002591BC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002591C0: lwc1        $f0, 0x72D0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X72D0);
    // 0x002591C4: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x002591C8: swc1        $f0, 0x64($s2)
    MEM_W(0X64, ctx->r18) = ctx->f0.u32l;
    // 0x002591CC: lw          $a0, 0x1A8($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X1A8);
    // 0x002591D0: jal         0x00248720
    // 0x002591D4: addiu       $a1, $zero, 0x12B
    ctx->r5 = ADD32(0, 0X12B);
    func_00248720(rdram, ctx);
        goto after_7;
    // 0x002591D4: addiu       $a1, $zero, 0x12B
    ctx->r5 = ADD32(0, 0X12B);
    after_7:
L_002591D8:
    // 0x002591D8: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x002591DC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x002591E0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x002591E4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x002591E8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x002591EC: jr          $ra
    // 0x002591F0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x002591F0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00454928(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00454928: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0045492C: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x00454930: xori        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 ^ 0X8000;
    // 0x00454934: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00454938: sw          $v0, -0x5528($at)
    MEM_W(-0X5528, ctx->r1) = ctx->r2;
    // 0x0045493C: jr          $ra
    // 0x00454940: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00454940: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0025883C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025883C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00258840: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x00258844: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00258848: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0025884C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00258850: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x00258854: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x00258858: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x0025885C: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
    // 0x00258860: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x00258864: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x00258868: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0025886C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00258870: lw          $s1, 0x1A8($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X1A8);
    // 0x00258874: beq         $v0, $zero, L_00258890
    if (ctx->r2 == 0) {
        // 0x00258878: addiu       $s3, $zero, -0x1
        ctx->r19 = ADD32(0, -0X1);
            goto L_00258890;
    }
    // 0x00258878: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x0025887C: lw          $a0, 0x51C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X51C);
    // 0x00258880: jal         0x00416AF8
    // 0x00258884: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    func_00416AF8(rdram, ctx);
        goto after_0;
    // 0x00258884: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    after_0:
    // 0x00258888: bne         $v0, $zero, L_00258940
    if (ctx->r2 != 0) {
        // 0x0025888C: nop
    
            goto L_00258940;
    }
    // 0x0025888C: nop

L_00258890:
    // 0x00258890: lw          $s0, 0xBB0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0XBB0);
    // 0x00258894: beq         $s0, $zero, L_002588F0
    if (ctx->r16 == 0) {
        // 0x00258898: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_002588F0;
    }
    // 0x00258898: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025889C: jal         0x0025C018
    // 0x002588A0: addiu       $a1, $s0, 0x140
    ctx->r5 = ADD32(ctx->r16, 0X140);
    func_0025C018(rdram, ctx);
        goto after_1;
    // 0x002588A0: addiu       $a1, $s0, 0x140
    ctx->r5 = ADD32(ctx->r16, 0X140);
    after_1:
    // 0x002588A4: lui         $v0, 0x22
    ctx->r2 = S32(0X22 << 16);
    // 0x002588A8: addiu       $v0, $v0, -0x2844
    ctx->r2 = ADD32(ctx->r2, -0X2844);
    // 0x002588AC: lw          $t0, 0xBC($s2)
    ctx->r8 = MEM_W(ctx->r18, 0XBC);
    // 0x002588B0: lw          $t1, 0xC0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0XC0);
    // 0x002588B4: lw          $t2, 0xC4($s2)
    ctx->r10 = MEM_W(ctx->r18, 0XC4);
    // 0x002588B8: lw          $t3, 0xC8($s2)
    ctx->r11 = MEM_W(ctx->r18, 0XC8);
    // 0x002588BC: sw          $t0, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->r8;
    // 0x002588C0: sw          $t1, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = ctx->r9;
    // 0x002588C4: sw          $t2, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->r10;
    // 0x002588C8: sw          $t3, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = ctx->r11;
    // 0x002588CC: lw          $t0, 0xCC($s2)
    ctx->r8 = MEM_W(ctx->r18, 0XCC);
    // 0x002588D0: lw          $t1, 0xD0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0XD0);
    // 0x002588D4: sw          $t0, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = ctx->r8;
    // 0x002588D8: sw          $t1, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r9;
    // 0x002588DC: sw          $v0, 0x234($s0)
    MEM_W(0X234, ctx->r16) = ctx->r2;
    // 0x002588E0: lw          $a1, 0x8($s5)
    ctx->r5 = MEM_W(ctx->r21, 0X8);
    // 0x002588E4: jal         0x0021D39C
    // 0x002588E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0021D39C(rdram, ctx);
        goto after_2;
    // 0x002588E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x002588EC: sw          $zero, 0x234($s0)
    MEM_W(0X234, ctx->r16) = 0;
L_002588F0:
    // 0x002588F0: lh          $v1, 0x996($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X996);
    // 0x002588F4: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x002588F8: bnel        $v1, $v0, L_00258908
    if (ctx->r3 != ctx->r2) {
        // 0x002588FC: sw          $zero, 0x10($sp)
        MEM_W(0X10, ctx->r29) = 0;
            goto L_00258908;
    }
    goto skip_0;
    // 0x002588FC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    skip_0:
    // 0x00258900: lw          $s3, 0x12C($s4)
    ctx->r19 = MEM_W(ctx->r20, 0X12C);
    // 0x00258904: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
L_00258908:
    // 0x00258908: lw          $v0, 0x128($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X128);
    // 0x0025890C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00258910: sw          $s3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r19;
    // 0x00258914: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00258918: lw          $a0, 0xC($s5)
    ctx->r4 = MEM_W(ctx->r21, 0XC);
    // 0x0025891C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00258920: lw          $v0, 0x6D1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D1C);
    // 0x00258924: lw          $a1, 0x98($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X98);
    // 0x00258928: sll         $a3, $v0, 1
    ctx->r7 = S32(ctx->r2 << 1);
    // 0x0025892C: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x00258930: sll         $a3, $a3, 3
    ctx->r7 = S32(ctx->r7 << 3);
    // 0x00258934: addiu       $a3, $a3, 0x110
    ctx->r7 = ADD32(ctx->r7, 0X110);
    // 0x00258938: jal         0x0020B6A0
    // 0x0025893C: addu        $a3, $s2, $a3
    ctx->r7 = ADD32(ctx->r18, ctx->r7);
    func_0020B6A0(rdram, ctx);
        goto after_3;
    // 0x0025893C: addu        $a3, $s2, $a3
    ctx->r7 = ADD32(ctx->r18, ctx->r7);
    after_3:
L_00258940:
    // 0x00258940: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x00258944: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x00258948: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x0025894C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x00258950: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00258954: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00258958: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0025895C: jr          $ra
    // 0x00258960: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00258960: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_0044C21C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044C21C: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    // 0x0044C220: jr          $ra
    // 0x0044C224: nop

    return;
    // 0x0044C224: nop

;}
RECOMP_FUNC void func_00280E40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00280E40: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x00280E44: lw          $v1, 0x24C($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X24C);
    // 0x00280E48: lw          $a2, 0x250($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X250);
    // 0x00280E4C: lw          $a3, 0x254($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X254);
    // 0x00280E50: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x00280E54: sw          $a2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r6;
    // 0x00280E58: sw          $a3, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r7;
    // 0x00280E5C: jr          $ra
    // 0x00280E60: nop

    return;
    // 0x00280E60: nop

;}
RECOMP_FUNC void func_0040A8A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040A8A0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // turok2: reconnected split function: a stray ELF symbol at 0x0040A8A4 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0040A8A4(rdram, ctx);
;}
RECOMP_FUNC void func_00452AA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00452AA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00452AAC: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x00452AB0: lui         $a2, 0x44
    ctx->r6 = S32(0X44 << 16);
    // 0x00452AB4: addiu       $a2, $a2, -0x640C
    ctx->r6 = ADD32(ctx->r6, -0X640C);
    // 0x00452AB8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00452ABC: jal         0x00416894
    // 0x00452AC0: nop

    func_00416894(rdram, ctx);
        goto after_0;
    // 0x00452AC0: nop

    after_0:
    // 0x00452AC4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00452AC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00452ACC: jr          $ra
    // 0x00452AD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00452AD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0044C13C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044C13C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0044C140: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x0044C144: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0044C148: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0044C14C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0044C150: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0044C154: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x0044C158: jal         0x002017D4
    // 0x0044C15C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x0044C15C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x0044C160: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0044C164: jal         0x002017D4
    // 0x0044C168: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x0044C168: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0044C16C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0044C170: jal         0x002017D4
    // 0x0044C174: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x0044C174: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x0044C178: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0044C17C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0044C180: jr          $ra
    // 0x0044C184: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0044C184: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002066F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002066F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002066FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00206700: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x00206704: lw          $s0, -0x7298($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X7298);
    // 0x00206708: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0020670C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00206710: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00206714: beq         $s0, $zero, L_00206744
    if (ctx->r16 == 0) {
        // 0x00206718: sw          $s2, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r18;
            goto L_00206744;
    }
    // 0x00206718: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0020671C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00206720: addiu       $a0, $a0, -0x7298
    ctx->r4 = ADD32(ctx->r4, -0X7298);
    // 0x00206724: jal         0x00200738
    // 0x00206728: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200738(rdram, ctx);
        goto after_0;
    // 0x00206728: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0020672C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00206730: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x00206734: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00206738: addiu       $a0, $a0, -0x7284
    ctx->r4 = ADD32(ctx->r4, -0X7284);
    // 0x0020673C: jal         0x00200518
    // 0x00206740: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200518(rdram, ctx);
        goto after_1;
    // 0x00206740: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
L_00206744:
    // 0x00206744: bne         $s0, $zero, L_002067AC
    if (ctx->r16 != 0) {
        // 0x00206748: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_002067AC;
    }
    // 0x00206748: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x0020674C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x00206750: andi        $s1, $s1, 0x10
    ctx->r17 = ctx->r17 & 0X10;
    // 0x00206754: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00206758:
    // 0x00206758: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x0020675C: jal         0x00203068
    // 0x00206760: sltiu       $a2, $s1, 0x1
    ctx->r6 = ctx->r17 < 0X1 ? 1 : 0;
    func_00203068(rdram, ctx);
        goto after_2;
    // 0x00206760: sltiu       $a2, $s1, 0x1
    ctx->r6 = ctx->r17 < 0X1 ? 1 : 0;
    after_2:
    // 0x00206764: beq         $v0, $zero, L_002067AC
    if (ctx->r2 == 0) {
        // 0x00206768: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_002067AC;
    }
    // 0x00206768: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x0020676C: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x00206770: lw          $s0, -0x7298($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X7298);
    // 0x00206774: beq         $s0, $zero, L_002067A0
    if (ctx->r16 == 0) {
        // 0x00206778: nop
    
            goto L_002067A0;
    }
    // 0x00206778: nop

    // 0x0020677C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00206780: addiu       $a0, $a0, -0x7298
    ctx->r4 = ADD32(ctx->r4, -0X7298);
    // 0x00206784: jal         0x00200738
    // 0x00206788: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200738(rdram, ctx);
        goto after_3;
    // 0x00206788: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x0020678C: sw          $s2, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r18;
    // 0x00206790: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00206794: addiu       $a0, $a0, -0x7284
    ctx->r4 = ADD32(ctx->r4, -0X7284);
    // 0x00206798: jal         0x00200518
    // 0x0020679C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200518(rdram, ctx);
        goto after_4;
    // 0x0020679C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
L_002067A0:
    // 0x002067A0: beq         $s0, $zero, L_00206758
    if (ctx->r16 == 0) {
        // 0x002067A4: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00206758;
    }
    // 0x002067A4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x002067A8: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_002067AC:
    // 0x002067AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x002067B0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002067B4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002067B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002067BC: jr          $ra
    // 0x002067C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002067C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_0028D380(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028D380: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x0028D384: addiu       $a0, $sp, 0x1F
    ctx->r4 = ADD32(ctx->r29, 0X1F);
    // 0x0028D388: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0028D38C: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x0028D390: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x0028D394: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x0028D398: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x0028D39C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x0028D3A0: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x0028D3A4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0028D3A8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0028D3AC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0028D3B0: lui         $s7, 0x800B
    ctx->r23 = S32(0X800B << 16);
    // 0x0028D3B4: addiu       $s7, $s7, -0x5E00
    ctx->r23 = ADD32(ctx->r23, -0X5E00);
    // 0x0028D3B8: lwl         $s3, 0x0($s7)
    ctx->r19 = do_lwl(rdram, ctx->r19, ctx->r23, 0X0);
    // 0x0028D3BC: lwr         $s3, 0x3($s7)
    ctx->r19 = do_lwr(rdram, ctx->r19, ctx->r23, 0X3);
    // 0x0028D3C0: lwl         $s5, 0x4($s7)
    ctx->r21 = do_lwl(rdram, ctx->r21, ctx->r23, 0X4);
    // 0x0028D3C4: lwr         $s5, 0x7($s7)
    ctx->r21 = do_lwr(rdram, ctx->r21, ctx->r23, 0X7);
    // 0x0028D3C8: lwl         $s6, 0x8($s7)
    ctx->r22 = do_lwl(rdram, ctx->r22, ctx->r23, 0X8);
    // 0x0028D3CC: lwr         $s6, 0xB($s7)
    ctx->r22 = do_lwr(rdram, ctx->r22, ctx->r23, 0XB);
    // 0x0028D3D0: swl         $s3, 0x10($sp)
    do_swl(rdram, 0X10, ctx->r29, ctx->r19);
    // 0x0028D3D4: swr         $s3, 0x13($sp)
    do_swr(rdram, 0X13, ctx->r29, ctx->r19);
    // 0x0028D3D8: swl         $s5, 0x14($sp)
    do_swl(rdram, 0X14, ctx->r29, ctx->r21);
    // 0x0028D3DC: swr         $s5, 0x17($sp)
    do_swr(rdram, 0X17, ctx->r29, ctx->r21);
    // 0x0028D3E0: swl         $s6, 0x18($sp)
    do_swl(rdram, 0X18, ctx->r29, ctx->r22);
    // 0x0028D3E4: swr         $s6, 0x1B($sp)
    do_swr(rdram, 0X1B, ctx->r29, ctx->r22);
    // 0x0028D3E8: lb          $s3, 0xC($s7)
    ctx->r19 = MEM_B(ctx->r23, 0XC);
    // 0x0028D3EC: lb          $s5, 0xD($s7)
    ctx->r21 = MEM_B(ctx->r23, 0XD);
    // 0x0028D3F0: lb          $s6, 0xE($s7)
    ctx->r22 = MEM_B(ctx->r23, 0XE);
    // 0x0028D3F4: sb          $s3, 0x1C($sp)
    MEM_B(0X1C, ctx->r29) = ctx->r19;
    // 0x0028D3F8: sb          $s5, 0x1D($sp)
    MEM_B(0X1D, ctx->r29) = ctx->r21;
    // 0x0028D3FC: sb          $s6, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r22;
    // 0x0028D400: jal         0x00266C5C
    // 0x0028D404: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_00266C5C(rdram, ctx);
        goto after_0;
    // 0x0028D404: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x0028D408: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x0028D40C: addiu       $s1, $s1, 0x75F0
    ctx->r17 = ADD32(ctx->r17, 0X75F0);
    // 0x0028D410: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0028D414: addiu       $s0, $sp, 0x10
    ctx->r16 = ADD32(ctx->r29, 0X10);
    // 0x0028D418: jal         0x00288780
    // 0x0028D41C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00288780(rdram, ctx);
        goto after_1;
    // 0x0028D41C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0028D420: bne         $v0, $zero, L_0028D438
    if (ctx->r2 != 0) {
        // 0x0028D424: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0028D438;
    }
    // 0x0028D424: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0028D428: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028D42C: sw          $zero, 0x690($at)
    MEM_W(0X690, ctx->r1) = 0;
    // 0x0028D430: j           L_0028D44C
    // 0x0028D434: nop

        goto L_0028D44C;
    // 0x0028D434: nop

L_0028D438:
    // 0x0028D438: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028D43C: sw          $v0, 0x690($at)
    MEM_W(0X690, ctx->r1) = ctx->r2;
    // 0x0028D440: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0028D444: jal         0x00288800
    // 0x0028D448: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00288800(rdram, ctx);
        goto after_2;
    // 0x0028D448: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
L_0028D44C:
    // 0x0028D44C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0028D450: lw          $v0, 0x690($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X690);
    // 0x0028D454: bne         $v0, $zero, L_0028D5A8
    if (ctx->r2 != 0) {
        // 0x0028D458: lui         $a3, 0xB000
        ctx->r7 = S32(0XB000 << 16);
            goto L_0028D5A8;
    }
    // 0x0028D458: lui         $a3, 0xB000
    ctx->r7 = S32(0XB000 << 16);
    // 0x0028D45C: ori         $a3, $a3, 0x1000
    ctx->r7 = ctx->r7 | 0X1000;
    // 0x0028D460: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x0028D464: ori         $a1, $a1, 0x400
    ctx->r5 = ctx->r5 | 0X400;
    // 0x0028D468: lui         $t5, 0xA460
    ctx->r13 = S32(0XA460 << 16);
    // 0x0028D46C: ori         $t5, $t5, 0x10
    ctx->r13 = ctx->r13 | 0X10;
    // 0x0028D470: lui         $a2, 0x3
    ctx->r6 = S32(0X3 << 16);
    // 0x0028D474: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x0028D478: lui         $s4, 0x8000
    ctx->r20 = S32(0X8000 << 16);
    // 0x0028D47C: lui         $t4, 0x800B
    ctx->r12 = S32(0X800B << 16);
    // 0x0028D480: addiu       $t4, $t4, 0x75F0
    ctx->r12 = ADD32(ctx->r12, 0X75F0);
    // 0x0028D484: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x0028D488: addiu       $t9, $t9, 0x690
    ctx->r25 = ADD32(ctx->r25, 0X690);
    // 0x0028D48C: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x0028D490: addiu       $t3, $t3, -0xD70
    ctx->r11 = ADD32(ctx->r11, -0XD70);
    // 0x0028D494: addiu       $s2, $t3, 0x1400
    ctx->r18 = ADD32(ctx->r11, 0X1400);
    // 0x0028D498: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x0028D49C: addiu       $t0, $t0, -0x5528
    ctx->r8 = ADD32(ctx->r8, -0X5528);
    // 0x0028D4A0: addiu       $t8, $t0, 0x184
    ctx->r24 = ADD32(ctx->r8, 0X184);
    // 0x0028D4A4: lui         $t2, 0x800F
    ctx->r10 = S32(0X800F << 16);
    // 0x0028D4A8: addiu       $t2, $t2, -0x4540
    ctx->r10 = ADD32(ctx->r10, -0X4540);
    // 0x0028D4AC: addiu       $s1, $t2, 0x5800
    ctx->r17 = ADD32(ctx->r10, 0X5800);
    // 0x0028D4B0: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x0028D4B4: addiu       $t1, $t1, 0x6AC0
    ctx->r9 = ADD32(ctx->r9, 0X6AC0);
    // 0x0028D4B8: addiu       $s0, $t1, 0x5000
    ctx->r16 = ADD32(ctx->r9, 0X5000);
    // 0x0028D4BC: addiu       $t7, $t0, 0x1D8
    ctx->r15 = ADD32(ctx->r8, 0X1D8);
    // 0x0028D4C0: addiu       $t6, $t0, 0x224
    ctx->r14 = ADD32(ctx->r8, 0X224);
L_0028D4C4:
    // 0x0028D4C4: lw          $v0, 0x0($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X0);
    // 0x0028D4C8: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x0028D4CC: beq         $v0, $zero, L_0028D4DC
    if (ctx->r2 == 0) {
        // 0x0028D4D0: or          $a0, $a1, $s4
        ctx->r4 = ctx->r5 | ctx->r20;
            goto L_0028D4DC;
    }
    // 0x0028D4D0: or          $a0, $a1, $s4
    ctx->r4 = ctx->r5 | ctx->r20;
L_0028D4D4:
    // 0x0028D4D4: bne         $v0, $zero, L_0028D4D4
    if (ctx->r2 != 0) {
        // 0x0028D4D8: or          $a0, $a1, $s4
        ctx->r4 = ctx->r5 | ctx->r20;
            goto L_0028D4D4;
    }
    // 0x0028D4D8: or          $a0, $a1, $s4
    ctx->r4 = ctx->r5 | ctx->r20;
L_0028D4DC:
    // 0x0028D4DC: sltu        $v0, $a0, $t4
    ctx->r2 = ctx->r4 < ctx->r12 ? 1 : 0;
    // 0x0028D4E0: bne         $v0, $zero, L_0028D4FC
    if (ctx->r2 != 0) {
        // 0x0028D4E4: nop
    
            goto L_0028D4FC;
    }
    // 0x0028D4E4: nop

    // 0x0028D4E8: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x0028D4EC: addiu       $s3, $s3, 0x7600
    ctx->r19 = ADD32(ctx->r19, 0X7600);
    // 0x0028D4F0: sltu        $v0, $a0, $s3
    ctx->r2 = ctx->r4 < ctx->r19 ? 1 : 0;
    // 0x0028D4F4: bne         $v0, $zero, L_0028D584
    if (ctx->r2 != 0) {
        // 0x0028D4F8: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0028D584;
    }
    // 0x0028D4F8: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_0028D4FC:
    // 0x0028D4FC: beq         $a0, $t9, L_0028D584
    if (ctx->r4 == ctx->r25) {
        // 0x0028D500: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0028D584;
    }
    // 0x0028D500: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0028D504: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0028D508: lw          $v0, 0x690($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X690);
    // 0x0028D50C: bne         $v0, $zero, L_0028D584
    if (ctx->r2 != 0) {
        // 0x0028D510: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_0028D584;
    }
    // 0x0028D510: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0028D514: sltu        $v0, $a0, $t3
    ctx->r2 = ctx->r4 < ctx->r11 ? 1 : 0;
    // 0x0028D518: bne         $v0, $zero, L_0028D530
    if (ctx->r2 != 0) {
        // 0x0028D51C: sltu        $v0, $a0, $t0
        ctx->r2 = ctx->r4 < ctx->r8 ? 1 : 0;
            goto L_0028D530;
    }
    // 0x0028D51C: sltu        $v0, $a0, $t0
    ctx->r2 = ctx->r4 < ctx->r8 ? 1 : 0;
    // 0x0028D520: sltu        $v0, $a0, $s2
    ctx->r2 = ctx->r4 < ctx->r18 ? 1 : 0;
    // 0x0028D524: bne         $v0, $zero, L_0028D584
    if (ctx->r2 != 0) {
        // 0x0028D528: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0028D584;
    }
    // 0x0028D528: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0028D52C: sltu        $v0, $a0, $t0
    ctx->r2 = ctx->r4 < ctx->r8 ? 1 : 0;
L_0028D530:
    // 0x0028D530: bne         $v0, $zero, L_0028D548
    if (ctx->r2 != 0) {
        // 0x0028D534: sltu        $v0, $a0, $t2
        ctx->r2 = ctx->r4 < ctx->r10 ? 1 : 0;
            goto L_0028D548;
    }
    // 0x0028D534: sltu        $v0, $a0, $t2
    ctx->r2 = ctx->r4 < ctx->r10 ? 1 : 0;
    // 0x0028D538: sltu        $v0, $a0, $t8
    ctx->r2 = ctx->r4 < ctx->r24 ? 1 : 0;
    // 0x0028D53C: bne         $v0, $zero, L_0028D584
    if (ctx->r2 != 0) {
        // 0x0028D540: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0028D584;
    }
    // 0x0028D540: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0028D544: sltu        $v0, $a0, $t2
    ctx->r2 = ctx->r4 < ctx->r10 ? 1 : 0;
L_0028D548:
    // 0x0028D548: bne         $v0, $zero, L_0028D560
    if (ctx->r2 != 0) {
        // 0x0028D54C: sltu        $v0, $a0, $t1
        ctx->r2 = ctx->r4 < ctx->r9 ? 1 : 0;
            goto L_0028D560;
    }
    // 0x0028D54C: sltu        $v0, $a0, $t1
    ctx->r2 = ctx->r4 < ctx->r9 ? 1 : 0;
    // 0x0028D550: sltu        $v0, $a0, $s1
    ctx->r2 = ctx->r4 < ctx->r17 ? 1 : 0;
    // 0x0028D554: bne         $v0, $zero, L_0028D584
    if (ctx->r2 != 0) {
        // 0x0028D558: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0028D584;
    }
    // 0x0028D558: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0028D55C: sltu        $v0, $a0, $t1
    ctx->r2 = ctx->r4 < ctx->r9 ? 1 : 0;
L_0028D560:
    // 0x0028D560: bne         $v0, $zero, L_0028D578
    if (ctx->r2 != 0) {
        // 0x0028D564: sltu        $v0, $a0, $t7
        ctx->r2 = ctx->r4 < ctx->r15 ? 1 : 0;
            goto L_0028D578;
    }
    // 0x0028D564: sltu        $v0, $a0, $t7
    ctx->r2 = ctx->r4 < ctx->r15 ? 1 : 0;
    // 0x0028D568: sltu        $v0, $a0, $s0
    ctx->r2 = ctx->r4 < ctx->r16 ? 1 : 0;
    // 0x0028D56C: bne         $v0, $zero, L_0028D584
    if (ctx->r2 != 0) {
        // 0x0028D570: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0028D584;
    }
    // 0x0028D570: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0028D574: sltu        $v0, $a0, $t7
    ctx->r2 = ctx->r4 < ctx->r15 ? 1 : 0;
L_0028D578:
    // 0x0028D578: bne         $v0, $zero, L_0028D584
    if (ctx->r2 != 0) {
        // 0x0028D57C: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_0028D584;
    }
    // 0x0028D57C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0028D580: sltu        $v1, $t6, $a0
    ctx->r3 = ctx->r14 < ctx->r4 ? 1 : 0;
L_0028D584:
    // 0x0028D584: beql        $v1, $zero, L_0028D598
    if (ctx->r3 == 0) {
        // 0x0028D588: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_0028D598;
    }
    goto skip_0;
    // 0x0028D588: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    skip_0:
    // 0x0028D58C: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x0028D590: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0028D594: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_0028D598:
    // 0x0028D598: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x0028D59C: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x0028D5A0: bne         $v0, $zero, L_0028D4C4
    if (ctx->r2 != 0) {
        // 0x0028D5A4: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_0028D4C4;
    }
    // 0x0028D5A4: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
L_0028D5A8:
    // 0x0028D5A8: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0028D5AC: addiu       $a1, $a1, 0x4000
    ctx->r5 = ADD32(ctx->r5, 0X4000);
    // 0x0028D5B0: lui         $v1, 0x8015
    ctx->r3 = S32(0X8015 << 16);
    // 0x0028D5B4: addiu       $v1, $v1, -0x6000
    ctx->r3 = ADD32(ctx->r3, -0X6000);
    // 0x0028D5B8: sltu        $v0, $a1, $v1
    ctx->r2 = ctx->r5 < ctx->r3 ? 1 : 0;
    // 0x0028D5BC: beq         $v0, $zero, L_0028D6CC
    if (ctx->r2 == 0) {
        // 0x0028D5C0: lui         $s2, 0x8000
        ctx->r18 = S32(0X8000 << 16);
            goto L_0028D6CC;
    }
    // 0x0028D5C0: lui         $s2, 0x8000
    ctx->r18 = S32(0X8000 << 16);
    // 0x0028D5C4: lui         $t2, 0x800B
    ctx->r10 = S32(0X800B << 16);
    // 0x0028D5C8: addiu       $t2, $t2, 0x75F0
    ctx->r10 = ADD32(ctx->r10, 0X75F0);
    // 0x0028D5CC: addiu       $t9, $t2, 0x10
    ctx->r25 = ADD32(ctx->r10, 0X10);
    // 0x0028D5D0: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x0028D5D4: addiu       $t8, $t8, 0x690
    ctx->r24 = ADD32(ctx->r24, 0X690);
    // 0x0028D5D8: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x0028D5DC: addiu       $t1, $t1, -0xD70
    ctx->r9 = ADD32(ctx->r9, -0XD70);
    // 0x0028D5E0: addiu       $s1, $t1, 0x1400
    ctx->r17 = ADD32(ctx->r9, 0X1400);
    // 0x0028D5E4: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x0028D5E8: addiu       $a2, $a2, -0x5528
    ctx->r6 = ADD32(ctx->r6, -0X5528);
    // 0x0028D5EC: addiu       $s0, $a2, 0x184
    ctx->r16 = ADD32(ctx->r6, 0X184);
    // 0x0028D5F0: lui         $t0, 0x800F
    ctx->r8 = S32(0X800F << 16);
    // 0x0028D5F4: addiu       $t0, $t0, -0x4540
    ctx->r8 = ADD32(ctx->r8, -0X4540);
    // 0x0028D5F8: addiu       $t7, $t0, 0x5800
    ctx->r15 = ADD32(ctx->r8, 0X5800);
    // 0x0028D5FC: lui         $a3, 0x800E
    ctx->r7 = S32(0X800E << 16);
    // 0x0028D600: addiu       $a3, $a3, 0x6AC0
    ctx->r7 = ADD32(ctx->r7, 0X6AC0);
    // 0x0028D604: addiu       $t6, $a3, 0x5000
    ctx->r14 = ADD32(ctx->r7, 0X5000);
    // 0x0028D608: addiu       $t5, $a2, 0x1D8
    ctx->r13 = ADD32(ctx->r6, 0X1D8);
    // 0x0028D60C: addiu       $t4, $a2, 0x224
    ctx->r12 = ADD32(ctx->r6, 0X224);
    // 0x0028D610: addu        $t3, $v1, $zero
    ctx->r11 = ADD32(ctx->r3, 0);
    // 0x0028D614: or          $a0, $a1, $s2
    ctx->r4 = ctx->r5 | ctx->r18;
L_0028D618:
    // 0x0028D618: sltu        $v0, $a0, $t2
    ctx->r2 = ctx->r4 < ctx->r10 ? 1 : 0;
    // 0x0028D61C: bne         $v0, $zero, L_0028D62C
    if (ctx->r2 != 0) {
        // 0x0028D620: sltu        $v0, $a0, $t9
        ctx->r2 = ctx->r4 < ctx->r25 ? 1 : 0;
            goto L_0028D62C;
    }
    // 0x0028D620: sltu        $v0, $a0, $t9
    ctx->r2 = ctx->r4 < ctx->r25 ? 1 : 0;
    // 0x0028D624: bne         $v0, $zero, L_0028D6B4
    if (ctx->r2 != 0) {
        // 0x0028D628: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0028D6B4;
    }
    // 0x0028D628: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_0028D62C:
    // 0x0028D62C: beq         $a0, $t8, L_0028D6B4
    if (ctx->r4 == ctx->r24) {
        // 0x0028D630: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0028D6B4;
    }
    // 0x0028D630: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0028D634: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0028D638: lw          $v0, 0x690($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X690);
    // 0x0028D63C: bne         $v0, $zero, L_0028D6B4
    if (ctx->r2 != 0) {
        // 0x0028D640: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_0028D6B4;
    }
    // 0x0028D640: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0028D644: sltu        $v0, $a0, $t1
    ctx->r2 = ctx->r4 < ctx->r9 ? 1 : 0;
    // 0x0028D648: bne         $v0, $zero, L_0028D660
    if (ctx->r2 != 0) {
        // 0x0028D64C: sltu        $v0, $a0, $a2
        ctx->r2 = ctx->r4 < ctx->r6 ? 1 : 0;
            goto L_0028D660;
    }
    // 0x0028D64C: sltu        $v0, $a0, $a2
    ctx->r2 = ctx->r4 < ctx->r6 ? 1 : 0;
    // 0x0028D650: sltu        $v0, $a0, $s1
    ctx->r2 = ctx->r4 < ctx->r17 ? 1 : 0;
    // 0x0028D654: bne         $v0, $zero, L_0028D6B4
    if (ctx->r2 != 0) {
        // 0x0028D658: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0028D6B4;
    }
    // 0x0028D658: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0028D65C: sltu        $v0, $a0, $a2
    ctx->r2 = ctx->r4 < ctx->r6 ? 1 : 0;
L_0028D660:
    // 0x0028D660: bne         $v0, $zero, L_0028D678
    if (ctx->r2 != 0) {
        // 0x0028D664: sltu        $v0, $a0, $t0
        ctx->r2 = ctx->r4 < ctx->r8 ? 1 : 0;
            goto L_0028D678;
    }
    // 0x0028D664: sltu        $v0, $a0, $t0
    ctx->r2 = ctx->r4 < ctx->r8 ? 1 : 0;
    // 0x0028D668: sltu        $v0, $a0, $s0
    ctx->r2 = ctx->r4 < ctx->r16 ? 1 : 0;
    // 0x0028D66C: bne         $v0, $zero, L_0028D6B4
    if (ctx->r2 != 0) {
        // 0x0028D670: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0028D6B4;
    }
    // 0x0028D670: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0028D674: sltu        $v0, $a0, $t0
    ctx->r2 = ctx->r4 < ctx->r8 ? 1 : 0;
L_0028D678:
    // 0x0028D678: bne         $v0, $zero, L_0028D690
    if (ctx->r2 != 0) {
        // 0x0028D67C: sltu        $v0, $a0, $a3
        ctx->r2 = ctx->r4 < ctx->r7 ? 1 : 0;
            goto L_0028D690;
    }
    // 0x0028D67C: sltu        $v0, $a0, $a3
    ctx->r2 = ctx->r4 < ctx->r7 ? 1 : 0;
    // 0x0028D680: sltu        $v0, $a0, $t7
    ctx->r2 = ctx->r4 < ctx->r15 ? 1 : 0;
    // 0x0028D684: bne         $v0, $zero, L_0028D6B4
    if (ctx->r2 != 0) {
        // 0x0028D688: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0028D6B4;
    }
    // 0x0028D688: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0028D68C: sltu        $v0, $a0, $a3
    ctx->r2 = ctx->r4 < ctx->r7 ? 1 : 0;
L_0028D690:
    // 0x0028D690: bne         $v0, $zero, L_0028D6A8
    if (ctx->r2 != 0) {
        // 0x0028D694: sltu        $v0, $a0, $t5
        ctx->r2 = ctx->r4 < ctx->r13 ? 1 : 0;
            goto L_0028D6A8;
    }
    // 0x0028D694: sltu        $v0, $a0, $t5
    ctx->r2 = ctx->r4 < ctx->r13 ? 1 : 0;
    // 0x0028D698: sltu        $v0, $a0, $t6
    ctx->r2 = ctx->r4 < ctx->r14 ? 1 : 0;
    // 0x0028D69C: bne         $v0, $zero, L_0028D6B4
    if (ctx->r2 != 0) {
        // 0x0028D6A0: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0028D6B4;
    }
    // 0x0028D6A0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0028D6A4: sltu        $v0, $a0, $t5
    ctx->r2 = ctx->r4 < ctx->r13 ? 1 : 0;
L_0028D6A8:
    // 0x0028D6A8: bne         $v0, $zero, L_0028D6B4
    if (ctx->r2 != 0) {
        // 0x0028D6AC: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_0028D6B4;
    }
    // 0x0028D6AC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0028D6B0: sltu        $v1, $t4, $a0
    ctx->r3 = ctx->r12 < ctx->r4 ? 1 : 0;
L_0028D6B4:
    // 0x0028D6B4: bnel        $v1, $zero, L_0028D6BC
    if (ctx->r3 != 0) {
        // 0x0028D6B8: sw          $zero, 0x0($a1)
        MEM_W(0X0, ctx->r5) = 0;
            goto L_0028D6BC;
    }
    goto skip_1;
    // 0x0028D6B8: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    skip_1:
L_0028D6BC:
    // 0x0028D6BC: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x0028D6C0: sltu        $v0, $a1, $t3
    ctx->r2 = ctx->r5 < ctx->r11 ? 1 : 0;
    // 0x0028D6C4: bne         $v0, $zero, L_0028D618
    if (ctx->r2 != 0) {
        // 0x0028D6C8: or          $a0, $a1, $s2
        ctx->r4 = ctx->r5 | ctx->r18;
            goto L_0028D618;
    }
    // 0x0028D6C8: or          $a0, $a1, $s2
    ctx->r4 = ctx->r5 | ctx->r18;
L_0028D6CC:
    // 0x0028D6CC: jal         0x0029B1F0
    // 0x0028D6D0: nop

    func_0029B1F0(rdram, ctx);
        goto after_3;
    // 0x0028D6D0: nop

    after_3:
    // 0x0028D6D4: jal         0x002881E8
    // 0x0028D6D8: nop

    func_002881E8(rdram, ctx);
        goto after_4;
    // 0x0028D6D8: nop

    after_4:
    // 0x0028D6DC: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x0028D6E0: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x0028D6E4: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x0028D6E8: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x0028D6EC: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x0028D6F0: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0028D6F4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0028D6F8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0028D6FC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0028D700: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0028D704: jr          $ra
    // 0x0028D708: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x0028D708: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void entry_0028E8A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028E8A4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x0028E8A8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0028E8AC: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x0028E8B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0028E8B4: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x0028E8B8: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x0028E8BC: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x0028E8C0: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x0028E8C4: jal         0x0029B030
    // 0x0028E8C8: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x0028E8C8: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    after_0:
    // 0x0028E8CC: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x0028E8D0: addiu       $s1, $s1, 0x1178
    ctx->r17 = ADD32(ctx->r17, 0X1178);
    // 0x0028E8D4: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
    // 0x0028E8D8: addiu       $s2, $zero, -0x2
    ctx->r18 = ADD32(0, -0X2);
    // 0x0028E8DC: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x0028E8E0: addiu       $s0, $s0, 0x2000
    ctx->r16 = ADD32(ctx->r16, 0X2000);
    // 0x0028E8E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_0028E8E8:
    // 0x0028E8E8: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x0028E8EC: jal         0x0029B6F0
    // 0x0028E8F0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x0028E8F0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x0028E8F4: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x0028E8F8: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
    // 0x0028E8FC: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x0028E900: bnel        $v0, $s3, L_0028E970
    if (ctx->r2 != ctx->r19) {
        // 0x0028E904: addiu       $a0, $s1, -0xAB4
        ctx->r4 = ADD32(ctx->r17, -0XAB4);
            goto L_0028E970;
    }
    goto skip_0;
    // 0x0028E904: addiu       $a0, $s1, -0xAB4
    ctx->r4 = ADD32(ctx->r17, -0XAB4);
    skip_0:
    // 0x0028E908: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x0028E90C: addiu       $a0, $a0, 0x1CD8
    ctx->r4 = ADD32(ctx->r4, 0X1CD8);
    // 0x0028E910: lw          $a1, 0x4($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X4);
    // 0x0028E914: lw          $a2, 0x8($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X8);
    // 0x0028E918: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
    // 0x0028E91C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x0028E920: lbu         $a3, 0xA($v0)
    ctx->r7 = MEM_BU(ctx->r2, 0XA);
    // 0x0028E924: and         $a2, $a2, $s2
    ctx->r6 = ctx->r6 & ctx->r18;
    // 0x0028E928: sll         $a3, $a3, 12
    ctx->r7 = S32(ctx->r7 << 12);
    // 0x0028E92C: jal         0x00201DBC
    // 0x0028E930: addu        $a3, $a3, $s0
    ctx->r7 = ADD32(ctx->r7, ctx->r16);
    func_00201DBC(rdram, ctx);
        goto after_2;
    // 0x0028E930: addu        $a3, $a3, $s0
    ctx->r7 = ADD32(ctx->r7, ctx->r16);
    after_2:
    // 0x0028E934: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x0028E938: lw          $v0, 0x10($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X10);
    // 0x0028E93C: lbu         $a0, 0xA($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0XA);
    // 0x0028E940: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    // 0x0028E944: sll         $a0, $a0, 12
    ctx->r4 = S32(ctx->r4 << 12);
    // 0x0028E948: jal         0x0029E030
    // 0x0028E94C: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    func_0029E030(rdram, ctx);
        goto after_3;
    // 0x0028E94C: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    after_3:
    // 0x0028E950: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x0028E954: lw          $v0, 0x10($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X10);
    // 0x0028E958: lbu         $a0, 0xA($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0XA);
    // 0x0028E95C: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    // 0x0028E960: sll         $a0, $a0, 12
    ctx->r4 = S32(ctx->r4 << 12);
    // 0x0028E964: jal         0x0029E0D0
    // 0x0028E968: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    func_0029E0D0(rdram, ctx);
        goto after_4;
    // 0x0028E968: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    after_4:
    // 0x0028E96C: addiu       $a0, $s1, -0xAB4
    ctx->r4 = ADD32(ctx->r17, -0XAB4);
L_0028E970:
    // 0x0028E970: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0028E974: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x0028E978: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x0028E97C: jal         0x0029B820
    // 0x0028E980: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    osSendMesg_recomp(rdram, ctx);
        goto after_5;
    // 0x0028E980: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    after_5:
    // 0x0028E984: j           L_0028E8E8
    // 0x0028E988: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
        goto L_0028E8E8;
    // 0x0028E988: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0028E98C: lw          $v1, 0x4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X4);
    // 0x0028E990: beq         $v1, $zero, L_0028E9A4
    if (ctx->r3 == 0) {
        // 0x0028E994: nop
    
            goto L_0028E9A4;
    }
    // 0x0028E994: nop

    // 0x0028E998: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x0028E99C: j           L_0028E9B4
    // 0x0028E9A0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
        goto L_0028E9B4;
    // 0x0028E9A0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_0028E9A4:
    // 0x0028E9A4: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x0028E9A8: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0028E9AC: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x0028E9B0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
L_0028E9B4:
    // 0x0028E9B4: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x0028E9B8: beq         $v1, $zero, L_0028E9CC
    if (ctx->r3 == 0) {
            // 0x0028E9BC: nop

    func_0028E9CC(rdram, ctx);
    return;
    }
    // 0x0028E9BC: nop

    // 0x0028E9C0: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x0028E9C4: jr          $ra
    // 0x0028E9C8: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    return;
    // 0x0028E9C8: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
;}
RECOMP_FUNC void entry_00200AE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00200AE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00200AE4: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00200AE8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00200AEC: jal         0x00200B00
    // 0x00200AF0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_00200B00(rdram, ctx);
        goto after_0;
    // 0x00200AF0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x00200AF4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00200AF8: jr          $ra
    // 0x00200AFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00200AFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_00206990(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00206990: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00206994: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00206998: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0020699C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002069A0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x002069A4: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x002069A8: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x002069AC: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x002069B0: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x002069B4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x002069B8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x002069BC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x002069C0: jal         0x00200B00
    // 0x002069C4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    func_00200B00(rdram, ctx);
        goto after_0;
    // 0x002069C4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    after_0:
    // 0x002069C8: beq         $v0, $zero, L_00206B04
    if (ctx->r2 == 0) {
        // 0x002069CC: nop
    
            goto L_00206B04;
    }
    // 0x002069CC: nop

    // 0x002069D0: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x002069D4: srl         $v1, $v0, 30
    ctx->r3 = S32(U32(ctx->r2) >> 30);
    // 0x002069D8: beq         $v1, $zero, L_00206B04
    if (ctx->r3 == 0) {
        // 0x002069DC: nop
    
            goto L_00206B04;
    }
    // 0x002069DC: nop

    // 0x002069E0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x002069E4: lw          $s0, 0x0($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X0);
    // 0x002069E8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x002069EC: beq         $v0, $zero, L_00206B04
    if (ctx->r2 == 0) {
        // 0x002069F0: addu        $s1, $v1, $zero
        ctx->r17 = ADD32(ctx->r3, 0);
            goto L_00206B04;
    }
    // 0x002069F0: addu        $s1, $v1, $zero
    ctx->r17 = ADD32(ctx->r3, 0);
    // 0x002069F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002069F8: jal         0x002017D4
    // 0x002069FC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x002069FC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x00206A00: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x00206A04: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x00206A08: beq         $v0, $zero, L_00206B04
    if (ctx->r2 == 0) {
        // 0x00206A0C: nop
    
            goto L_00206B04;
    }
    // 0x00206A0C: nop

    // 0x00206A10: bltz        $v1, L_00206B04
    if (SIGNED(ctx->r3) < 0) {
        // 0x00206A14: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00206B04;
    }
    // 0x00206A14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00206A18: jal         0x002017D4
    // 0x00206A1C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x00206A1C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x00206A20: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x00206A24: lw          $s3, 0x0($s4)
    ctx->r19 = MEM_W(ctx->r20, 0X0);
    // 0x00206A28: blez        $s3, L_00206B04
    if (SIGNED(ctx->r19) <= 0) {
        // 0x00206A2C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00206B04;
    }
    // 0x00206A2C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00206A30: addiu       $s7, $zero, 0x2
    ctx->r23 = ADD32(0, 0X2);
    // 0x00206A34: slti        $s2, $s1, 0x3
    ctx->r18 = SIGNED(ctx->r17) < 0X3 ? 1 : 0;
    // 0x00206A38: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x00206A3C: addiu       $s5, $zero, 0x3
    ctx->r21 = ADD32(0, 0X3);
    // 0x00206A40: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
L_00206A44:
    // 0x00206A44: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00206A48: jal         0x002017E8
    // 0x00206A4C: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    func_002017E8(rdram, ctx);
        goto after_3;
    // 0x00206A4C: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    after_3:
    // 0x00206A50: lw          $v1, 0x10($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X10);
    // 0x00206A54: srl         $t1, $v1, 1
    ctx->r9 = S32(U32(ctx->r3) >> 1);
    // 0x00206A58: beq         $t1, $zero, L_00206AF4
    if (ctx->r9 == 0) {
        // 0x00206A5C: addu        $t0, $zero, $zero
        ctx->r8 = ADD32(0, 0);
            goto L_00206AF4;
    }
    // 0x00206A5C: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x00206A60: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
L_00206A64:
    // 0x00206A64: lhu         $v1, 0x0($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X0);
    // 0x00206A68: lhu         $a0, 0x0($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0X0);
    // 0x00206A6C: srl         $v0, $v1, 8
    ctx->r2 = S32(U32(ctx->r3) >> 8);
    // 0x00206A70: andi        $a1, $v0, 0xF8
    ctx->r5 = ctx->r2 & 0XF8;
    // 0x00206A74: srl         $v1, $v1, 3
    ctx->r3 = S32(U32(ctx->r3) >> 3);
    // 0x00206A78: andi        $v1, $v1, 0xF8
    ctx->r3 = ctx->r3 & 0XF8;
    // 0x00206A7C: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x00206A80: andi        $a3, $v0, 0xF8
    ctx->r7 = ctx->r2 & 0XF8;
    // 0x00206A84: beq         $s1, $s7, L_00206ABC
    if (ctx->r17 == ctx->r23) {
        // 0x00206A88: andi        $a0, $a0, 0x1
        ctx->r4 = ctx->r4 & 0X1;
            goto L_00206ABC;
    }
    // 0x00206A88: andi        $a0, $a0, 0x1
    ctx->r4 = ctx->r4 & 0X1;
    // 0x00206A8C: beq         $s2, $zero, L_00206AA4
    if (ctx->r18 == 0) {
        // 0x00206A90: nop
    
            goto L_00206AA4;
    }
    // 0x00206A90: nop

    // 0x00206A94: beq         $s1, $s6, L_00206AB4
    if (ctx->r17 == ctx->r22) {
        // 0x00206A98: sll         $v0, $v1, 8
        ctx->r2 = S32(ctx->r3 << 8);
            goto L_00206AB4;
    }
    // 0x00206A98: sll         $v0, $v1, 8
    ctx->r2 = S32(ctx->r3 << 8);
    // 0x00206A9C: j           L_00206AE4
    // 0x00206AA0: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
        goto L_00206AE4;
    // 0x00206AA0: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
L_00206AA4:
    // 0x00206AA4: beq         $s1, $s5, L_00206AC8
    if (ctx->r17 == ctx->r21) {
        // 0x00206AA8: sll         $v0, $v1, 8
        ctx->r2 = S32(ctx->r3 << 8);
            goto L_00206AC8;
    }
    // 0x00206AA8: sll         $v0, $v1, 8
    ctx->r2 = S32(ctx->r3 << 8);
    // 0x00206AAC: j           L_00206AE4
    // 0x00206AB0: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
        goto L_00206AE4;
    // 0x00206AB0: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
L_00206AB4:
    // 0x00206AB4: j           L_00206ACC
    // 0x00206AB8: sll         $v1, $a1, 3
    ctx->r3 = S32(ctx->r5 << 3);
        goto L_00206ACC;
    // 0x00206AB8: sll         $v1, $a1, 3
    ctx->r3 = S32(ctx->r5 << 3);
L_00206ABC:
    // 0x00206ABC: sll         $v0, $a1, 8
    ctx->r2 = S32(ctx->r5 << 8);
    // 0x00206AC0: j           L_00206ACC
    // 0x00206AC4: sll         $v1, $a1, 3
    ctx->r3 = S32(ctx->r5 << 3);
        goto L_00206ACC;
    // 0x00206AC4: sll         $v1, $a1, 3
    ctx->r3 = S32(ctx->r5 << 3);
L_00206AC8:
    // 0x00206AC8: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
L_00206ACC:
    // 0x00206ACC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00206AD0: srl         $v1, $a3, 2
    ctx->r3 = S32(U32(ctx->r7) >> 2);
    // 0x00206AD4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00206AD8: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x00206ADC: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
    // 0x00206AE0: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
L_00206AE4:
    // 0x00206AE4: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x00206AE8: slt         $v0, $t0, $t1
    ctx->r2 = SIGNED(ctx->r8) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x00206AEC: bne         $v0, $zero, L_00206A64
    if (ctx->r2 != 0) {
        // 0x00206AF0: nop
    
            goto L_00206A64;
    }
    // 0x00206AF0: nop

L_00206AF4:
    // 0x00206AF4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00206AF8: slt         $v0, $s0, $s3
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x00206AFC: bne         $v0, $zero, L_00206A44
    if (ctx->r2 != 0) {
        // 0x00206B00: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_00206A44;
    }
    // 0x00206B00: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
L_00206B04:
    // 0x00206B04: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x00206B08: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x00206B0C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x00206B10: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x00206B14: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x00206B18: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x00206B1C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00206B20: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00206B24: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00206B28: jr          $ra
    // 0x00206B2C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00206B2C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void entry_00295690(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00295690: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x00295694: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x00295698: lw          $s3, 0x58($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X58);
    // 0x0029569C: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x002956A0: addu        $s6, $a2, $zero
    ctx->r22 = ADD32(ctx->r6, 0);
    // 0x002956A4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x002956A8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002956AC: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x002956B0: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x002956B4: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x002956B8: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x002956BC: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x002956C0: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x002956C4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x002956C8: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x002956CC: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x002956D0: addu        $fp, $a3, $zero
    ctx->r30 = ADD32(ctx->r7, 0);
    // 0x002956D4: sh          $zero, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = 0;
    // 0x002956D8: beq         $v0, $zero, L_00295B70
    if (ctx->r2 == 0) {
        // 0x002956DC: sh          $zero, 0x18($sp)
        MEM_H(0X18, ctx->r29) = 0;
            goto L_00295B70;
    }
    // 0x002956DC: sh          $zero, 0x18($sp)
    MEM_H(0X18, ctx->r29) = 0;
    // 0x002956E0: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x002956E4: lui         $s5, 0x800B
    ctx->r21 = S32(0X800B << 16);
    // 0x002956E8: addiu       $s5, $s5, 0x7900
    ctx->r21 = ADD32(ctx->r21, 0X7900);
    // 0x002956EC: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x002956F0: addu        $v1, $fp, $zero
    ctx->r3 = ADD32(ctx->r30, 0);
L_002956F4:
    // 0x002956F4: lw          $fp, 0x4($v0)
    ctx->r30 = MEM_W(ctx->r2, 0X4);
    // 0x002956F8: subu        $s2, $fp, $v1
    ctx->r18 = SUB32(ctx->r30, ctx->r3);
    // 0x002956FC: slt         $v0, $s6, $s2
    ctx->r2 = SIGNED(ctx->r22) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x00295700: bne         $v0, $zero, L_00295B74
    if (ctx->r2 != 0) {
        // 0x00295704: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00295B74;
    }
    // 0x00295704: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00295708: bgez        $s2, L_0029572C
    if (SIGNED(ctx->r18) >= 0) {
        // 0x0029570C: slti        $v0, $s2, 0xA1
        ctx->r2 = SIGNED(ctx->r18) < 0XA1 ? 1 : 0;
            goto L_0029572C;
    }
    // 0x0029570C: slti        $v0, $s2, 0xA1
    ctx->r2 = SIGNED(ctx->r18) < 0XA1 ? 1 : 0;
    // 0x00295710: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x00295714: addiu       $a0, $a0, -0x5AC0
    ctx->r4 = ADD32(ctx->r4, -0X5AC0);
    // 0x00295718: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0029571C: addiu       $a1, $a1, -0x5ABC
    ctx->r5 = ADD32(ctx->r5, -0X5ABC);
    // 0x00295720: jal         0x0029B020
    // 0x00295724: addiu       $a2, $zero, 0x67
    ctx->r6 = ADD32(0, 0X67);
    func_0029B020(rdram, ctx);
        goto after_0;
    // 0x00295724: addiu       $a2, $zero, 0x67
    ctx->r6 = ADD32(0, 0X67);
    after_0:
    // 0x00295728: slti        $v0, $s2, 0xA1
    ctx->r2 = SIGNED(ctx->r18) < 0XA1 ? 1 : 0;
L_0029572C:
    // 0x0029572C: bne         $v0, $zero, L_0029574C
    if (ctx->r2 != 0) {
        // 0x00295730: nop
    
            goto L_0029574C;
    }
    // 0x00295730: nop

    // 0x00295734: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x00295738: addiu       $a0, $a0, -0x5AC0
    ctx->r4 = ADD32(ctx->r4, -0X5AC0);
    // 0x0029573C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00295740: addiu       $a1, $a1, -0x5ABC
    ctx->r5 = ADD32(ctx->r5, -0X5ABC);
    // 0x00295744: jal         0x0029B020
    // 0x00295748: addiu       $a2, $zero, 0x68
    ctx->r6 = ADD32(0, 0X68);
    func_0029B020(rdram, ctx);
        goto after_1;
    // 0x00295748: addiu       $a2, $zero, 0x68
    ctx->r6 = ADD32(0, 0X68);
    after_1:
L_0029574C:
    // 0x0029574C: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x00295750: lh          $v1, 0x8($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X8);
    // 0x00295754: sltiu       $v0, $v1, 0x11
    ctx->r2 = ctx->r3 < 0X11 ? 1 : 0;
    // 0x00295758: beq         $v0, $zero, L_00295AF4
    if (ctx->r2 == 0) {
        // 0x0029575C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00295AF4;
    }
    // 0x0029575C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00295760: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00295764: addu        $at, $at, $v0
    gpr jr_addend_0029576C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00295768: lw          $v0, -0x5AB0($at)
    ctx->r2 = ADD32(ctx->r1, -0X5AB0);
    // 0x0029576C: jr          $v0
    // 0x00295770: nop

    switch (jr_addend_0029576C >> 2) {
        case 0: goto L_00295ACC; break;
        case 1: goto L_00295AF4; break;
        case 2: goto L_00295AF4; break;
        case 3: goto L_00295AF4; break;
        case 4: goto L_00295AF4; break;
        case 5: goto L_00295AF4; break;
        case 6: goto L_00295AF4; break;
        case 7: goto L_00295AF4; break;
        case 8: goto L_00295AF4; break;
        case 9: goto L_00295AF4; break;
        case 10: goto L_00295AF4; break;
        case 11: goto L_002958A0; break;
        case 12: goto L_002958A0; break;
        case 13: goto L_00295774; break;
        case 14: goto L_00295A4C; break;
        case 15: goto L_00295A94; break;
        case 16: goto L_002958A0; break;
        default: switch_error(__func__, 0x0029576C, 0x800AA550);
    }
    // 0x00295770: nop

L_00295774:
    // 0x00295774: lw          $s1, 0x3C($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X3C);
    // 0x00295778: lh          $v0, 0xA($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XA);
    // 0x0029577C: beq         $v0, $zero, L_00295798
    if (ctx->r2 == 0) {
        // 0x00295780: addu        $s4, $s0, $zero
        ctx->r20 = ADD32(ctx->r16, 0);
            goto L_00295798;
    }
    // 0x00295780: addu        $s4, $s0, $zero
    ctx->r20 = ADD32(ctx->r16, 0);
    // 0x00295784: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00295788: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x0029578C: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00295790: jalr        $v0
    // 0x00295794: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x00295794: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
L_00295798:
    // 0x00295798: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0029579C: lw          $a2, 0x18($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X18);
    // 0x002957A0: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x002957A4: jalr        $v0
    // 0x002957A8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x002957A8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_3:
    // 0x002957AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002957B0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x002957B4: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x002957B8: jalr        $v0
    // 0x002957BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x002957BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x002957C0: sw          $s7, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r23;
    // 0x002957C4: sw          $zero, 0x30($s0)
    MEM_W(0X30, ctx->r16) = 0;
    // 0x002957C8: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x002957CC: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    // 0x002957D0: lh          $v0, 0x10($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X10);
    // 0x002957D4: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002957D8: mflo        $t0
    ctx->r8 = lo;
    // 0x002957DC: sra         $v0, $t0, 15
    ctx->r2 = S32(SIGNED(ctx->r8) >> 15);
    // 0x002957E0: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    // 0x002957E4: lbu         $v0, 0x12($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X12);
    // 0x002957E8: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x002957EC: lbu         $v0, 0x13($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X13);
    // 0x002957F0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x002957F4: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x002957F8: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x002957FC: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
    // 0x00295800: lbu         $v0, 0x13($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X13);
    // 0x00295804: addiu       $t0, $zero, 0x7F
    ctx->r8 = ADD32(0, 0X7F);
    // 0x00295808: subu        $v0, $t0, $v0
    ctx->r2 = SUB32(ctx->r8, ctx->r2);
    // 0x0029580C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00295810: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x00295814: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x00295818: sh          $v0, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r2;
    // 0x0029581C: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x00295820: beq         $v0, $zero, L_00295834
    if (ctx->r2 == 0) {
        // 0x00295824: nop
    
            goto L_00295834;
    }
    // 0x00295824: nop

    // 0x00295828: sh          $s7, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r23;
    // 0x0029582C: j           L_00295884
    // 0x00295830: sh          $s7, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r23;
        goto L_00295884;
    // 0x00295830: sh          $s7, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r23;
L_00295834:
    // 0x00295834: lh          $v0, 0x18($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X18);
    // 0x00295838: lh          $v1, 0x1A($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X1A);
    // 0x0029583C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00295840: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x00295844: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x00295848: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0029584C: lh          $v0, 0x18($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X18);
    // 0x00295850: mflo        $t0
    ctx->r8 = lo;
    // 0x00295854: sra         $v1, $t0, 15
    ctx->r3 = S32(SIGNED(ctx->r8) >> 15);
    // 0x00295858: addiu       $t0, $zero, 0x7F
    ctx->r8 = ADD32(0, 0X7F);
    // 0x0029585C: subu        $v0, $t0, $v0
    ctx->r2 = SUB32(ctx->r8, ctx->r2);
    // 0x00295860: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00295864: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x00295868: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    // 0x0029586C: lh          $v1, 0x1A($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X1A);
    // 0x00295870: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x00295874: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00295878: mflo        $t0
    ctx->r8 = lo;
    // 0x0029587C: sra         $v0, $t0, 15
    ctx->r2 = S32(SIGNED(ctx->r8) >> 15);
    // 0x00295880: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
L_00295884:
    // 0x00295884: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x00295888: beq         $a0, $zero, L_00295B34
    if (ctx->r4 == 0) {
        // 0x0029588C: addiu       $a1, $zero, 0x7
        ctx->r5 = ADD32(0, 0X7);
            goto L_00295B34;
    }
    // 0x0029588C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x00295890: lw          $a2, 0xC($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XC);
    // 0x00295894: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00295898: j           L_00295B2C
    // 0x0029589C: nop

        goto L_00295B2C;
    // 0x0029589C: nop

L_002958A0:
    // 0x002958A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002958A4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x002958A8: addiu       $a2, $sp, 0x1A
    ctx->r6 = ADD32(ctx->r29, 0X1A);
    // 0x002958AC: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x002958B0: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    // 0x002958B4: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x002958B8: jal         0x00295BDC
    // 0x002958BC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_00295BDC(rdram, ctx);
        goto after_5;
    // 0x002958BC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_5:
    // 0x002958C0: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    // 0x002958C4: lw          $v1, 0x34($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X34);
    // 0x002958C8: slt         $v1, $a1, $v1
    ctx->r3 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x002958CC: bne         $v1, $zero, L_00295940
    if (ctx->r3 != 0) {
        // 0x002958D0: addu        $s3, $v0, $zero
        ctx->r19 = ADD32(ctx->r2, 0);
            goto L_00295940;
    }
    // 0x002958D0: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x002958D4: lh          $v0, 0x18($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X18);
    // 0x002958D8: lh          $v1, 0x1A($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X1A);
    // 0x002958DC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x002958E0: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x002958E4: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x002958E8: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002958EC: lh          $v0, 0x18($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X18);
    // 0x002958F0: mflo        $t0
    ctx->r8 = lo;
    // 0x002958F4: sra         $v1, $t0, 15
    ctx->r3 = S32(SIGNED(ctx->r8) >> 15);
    // 0x002958F8: addiu       $t0, $zero, 0x7F
    ctx->r8 = ADD32(0, 0X7F);
    // 0x002958FC: subu        $v0, $t0, $v0
    ctx->r2 = SUB32(ctx->r8, ctx->r2);
    // 0x00295900: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00295904: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x00295908: sh          $v1, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r3;
    // 0x0029590C: lh          $v1, 0x1A($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X1A);
    // 0x00295910: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x00295914: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00295918: lhu         $v1, 0x28($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X28);
    // 0x0029591C: mflo        $t0
    ctx->r8 = lo;
    // 0x00295920: sra         $v0, $t0, 15
    ctx->r2 = S32(SIGNED(ctx->r8) >> 15);
    // 0x00295924: sh          $v0, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r2;
    // 0x00295928: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x0029592C: lhu         $a0, 0x2E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X2E);
    // 0x00295930: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    // 0x00295934: sw          $v0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r2;
    // 0x00295938: j           L_00295990
    // 0x0029593C: sh          $a0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r4;
        goto L_00295990;
    // 0x0029593C: sh          $a0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r4;
L_00295940:
    // 0x00295940: lh          $a2, 0x26($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X26);
    // 0x00295944: lh          $v0, 0x1C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X1C);
    // 0x00295948: lhu         $a3, 0x24($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X24);
    // 0x0029594C: mtc1        $v0, $f12
    ctx->f12.u32l = ctx->r2;
    // 0x00295950: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x00295954: jal         0x002961E8
    // 0x00295958: nop

    func_002961E8(rdram, ctx);
        goto after_6;
    // 0x00295958: nop

    after_6:
    // 0x0029595C: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    // 0x00295960: lh          $a2, 0x2C($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X2C);
    // 0x00295964: lhu         $a3, 0x2A($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X2A);
    // 0x00295968: lh          $v1, 0x1E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X1E);
    // 0x0029596C: trunc.w.s   $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(1 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00295970: mfc1        $v0, $f1
    ctx->r2 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x00295974: mtc1        $v1, $f12
    ctx->f12.u32l = ctx->r3;
    // 0x00295978: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x0029597C: jal         0x002961E8
    // 0x00295980: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    func_002961E8(rdram, ctx);
        goto after_7;
    // 0x00295980: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    after_7:
    // 0x00295984: trunc.w.s   $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(1 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00295988: mfc1        $v0, $f1
    ctx->r2 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x0029598C: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
L_00295990:
    // 0x00295990: lh          $v0, 0x1C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X1C);
    // 0x00295994: beql        $v0, $zero, L_0029599C
    if (ctx->r2 == 0) {
        // 0x00295998: sh          $s7, 0x1C($s0)
        MEM_H(0X1C, ctx->r16) = ctx->r23;
            goto L_0029599C;
    }
    goto skip_0;
    // 0x00295998: sh          $s7, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r23;
    skip_0:
L_0029599C:
    // 0x0029599C: lh          $v0, 0x1E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X1E);
    // 0x002959A0: beql        $v0, $zero, L_002959A8
    if (ctx->r2 == 0) {
        // 0x002959A4: sh          $s7, 0x1E($s0)
        MEM_H(0X1E, ctx->r16) = ctx->r23;
            goto L_002959A8;
    }
    goto skip_1;
    // 0x002959A4: sh          $s7, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r23;
    skip_1:
L_002959A8:
    // 0x002959A8: lw          $a0, 0x3C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X3C);
    // 0x002959AC: lh          $v1, 0x8($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X8);
    // 0x002959B0: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x002959B4: bne         $v1, $v0, L_002959C4
    if (ctx->r3 != ctx->r2) {
        // 0x002959B8: nop
    
            goto L_002959C4;
    }
    // 0x002959B8: nop

    // 0x002959BC: lhu         $v0, 0xE($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XE);
    // 0x002959C0: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
L_002959C4:
    // 0x002959C4: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x002959C8: lh          $v1, 0x8($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X8);
    // 0x002959CC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x002959D0: bne         $v1, $v0, L_002959FC
    if (ctx->r3 != ctx->r2) {
        // 0x002959D4: nop
    
            goto L_002959FC;
    }
    // 0x002959D4: nop

    // 0x002959D8: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x002959DC: sw          $zero, 0x30($s0)
    MEM_W(0X30, ctx->r16) = 0;
    // 0x002959E0: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x002959E4: mult        $v1, $v1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002959E8: mflo        $t0
    ctx->r8 = lo;
    // 0x002959EC: sra         $v1, $t0, 15
    ctx->r3 = S32(SIGNED(ctx->r8) >> 15);
    // 0x002959F0: sh          $v1, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r3;
    // 0x002959F4: lw          $v0, 0x10($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X10);
    // 0x002959F8: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
L_002959FC:
    // 0x002959FC: lw          $a0, 0x3C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X3C);
    // 0x00295A00: lh          $v1, 0x8($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X8);
    // 0x00295A04: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x00295A08: bnel        $v1, $v0, L_00295B34
    if (ctx->r3 != ctx->r2) {
        // 0x00295A0C: sw          $s7, 0x38($s0)
        MEM_W(0X38, ctx->r16) = ctx->r23;
            goto L_00295B34;
    }
    goto skip_2;
    // 0x00295A0C: sw          $s7, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r23;
    skip_2:
    // 0x00295A10: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x00295A14: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00295A18: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x00295A1C: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x00295A20: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x00295A24: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
    // 0x00295A28: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    // 0x00295A2C: addiu       $t0, $zero, 0x7F
    ctx->r8 = ADD32(0, 0X7F);
    // 0x00295A30: subu        $v0, $t0, $v0
    ctx->r2 = SUB32(ctx->r8, ctx->r2);
    // 0x00295A34: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00295A38: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x00295A3C: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x00295A40: sh          $v0, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r2;
    // 0x00295A44: j           L_00295B34
    // 0x00295A48: sw          $s7, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r23;
        goto L_00295B34;
    // 0x00295A48: sw          $s7, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r23;
L_00295A4C:
    // 0x00295A4C: lw          $s1, 0x3C($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X3C);
    // 0x00295A50: lh          $v0, 0xA($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XA);
    // 0x00295A54: beq         $v0, $zero, L_00295A6C
    if (ctx->r2 == 0) {
        // 0x00295A58: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00295A6C;
    }
    // 0x00295A58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00295A5C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x00295A60: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00295A64: jalr        $v0
    // 0x00295A68: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_8;
    // 0x00295A68: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_8:
L_00295A6C:
    // 0x00295A6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00295A70: lw          $a2, 0xC($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XC);
    // 0x00295A74: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00295A78: jalr        $v0
    // 0x00295A7C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_9;
    // 0x00295A7C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_9:
    // 0x00295A80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00295A84: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x00295A88: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00295A8C: j           L_00295B2C
    // 0x00295A90: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
        goto L_00295B2C;
    // 0x00295A90: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_00295A94:
    // 0x00295A94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00295A98: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x00295A9C: addiu       $a2, $sp, 0x1A
    ctx->r6 = ADD32(ctx->r29, 0X1A);
    // 0x00295AA0: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x00295AA4: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    // 0x00295AA8: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x00295AAC: jal         0x00295BDC
    // 0x00295AB0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_00295BDC(rdram, ctx);
        goto after_10;
    // 0x00295AB0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_10:
    // 0x00295AB4: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x00295AB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00295ABC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x00295AC0: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00295AC4: j           L_00295B2C
    // 0x00295AC8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
        goto L_00295B2C;
    // 0x00295AC8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_00295ACC:
    // 0x00295ACC: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x00295AD0: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x00295AD4: lw          $a0, 0x7760($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7760);
    // 0x00295AD8: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x00295ADC: sw          $zero, 0xD8($v1)
    MEM_W(0XD8, ctx->r3) = 0;
    // 0x00295AE0: lw          $a1, 0xC($v0)
    ctx->r5 = MEM_W(ctx->r2, 0XC);
    // 0x00295AE4: jal         0x00294B9C
    // 0x00295AE8: subu        $s6, $s6, $s2
    ctx->r22 = SUB32(ctx->r22, ctx->r18);
    func_00294B9C(rdram, ctx);
        goto after_11;
    // 0x00295AE8: subu        $s6, $s6, $s2
    ctx->r22 = SUB32(ctx->r22, ctx->r18);
    after_11:
    // 0x00295AEC: j           L_00295B3C
    // 0x00295AF0: sll         $v0, $s2, 1
    ctx->r2 = S32(ctx->r18 << 1);
        goto L_00295B3C;
    // 0x00295AF0: sll         $v0, $s2, 1
    ctx->r2 = S32(ctx->r18 << 1);
L_00295AF4:
    // 0x00295AF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00295AF8: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x00295AFC: addiu       $a2, $sp, 0x1A
    ctx->r6 = ADD32(ctx->r29, 0X1A);
    // 0x00295B00: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x00295B04: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    // 0x00295B08: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x00295B0C: jal         0x00295BDC
    // 0x00295B10: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_00295BDC(rdram, ctx);
        goto after_12;
    // 0x00295B10: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_12:
    // 0x00295B14: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x00295B18: lw          $v1, 0x3C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X3C);
    // 0x00295B1C: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00295B20: lh          $a1, 0x8($v1)
    ctx->r5 = MEM_H(ctx->r3, 0X8);
    // 0x00295B24: lw          $a2, 0xC($v1)
    ctx->r6 = MEM_W(ctx->r3, 0XC);
    // 0x00295B28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_00295B2C:
    // 0x00295B2C: jalr        $v0
    // 0x00295B30: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_13;
    // 0x00295B30: nop

    after_13:
L_00295B34:
    // 0x00295B34: subu        $s6, $s6, $s2
    ctx->r22 = SUB32(ctx->r22, ctx->r18);
    // 0x00295B38: sll         $v0, $s2, 1
    ctx->r2 = S32(ctx->r18 << 1);
L_00295B3C:
    // 0x00295B3C: lw          $a1, 0x3C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X3C);
    // 0x00295B40: lhu         $v1, 0x1A($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X1A);
    // 0x00295B44: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x00295B48: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00295B4C: sh          $v1, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r3;
    // 0x00295B50: bne         $a0, $zero, L_00295B5C
    if (ctx->r4 != 0) {
        // 0x00295B54: sw          $a0, 0x3C($s0)
        MEM_W(0X3C, ctx->r16) = ctx->r4;
            goto L_00295B5C;
    }
    // 0x00295B54: sw          $a0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r4;
    // 0x00295B58: sw          $zero, 0x40($s0)
    MEM_W(0X40, ctx->r16) = 0;
L_00295B5C:
    // 0x00295B5C: jal         0x00294B84
    // 0x00295B60: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_00294B84(rdram, ctx);
        goto after_14;
    // 0x00295B60: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_14:
    // 0x00295B64: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x00295B68: bne         $v0, $zero, L_002956F4
    if (ctx->r2 != 0) {
        // 0x00295B6C: addu        $v1, $fp, $zero
        ctx->r3 = ADD32(ctx->r30, 0);
            goto L_002956F4;
    }
    // 0x00295B6C: addu        $v1, $fp, $zero
    ctx->r3 = ADD32(ctx->r30, 0);
L_00295B70:
    // 0x00295B70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_00295B74:
    // 0x00295B74: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x00295B78: addiu       $a2, $sp, 0x1A
    ctx->r6 = ADD32(ctx->r29, 0X1A);
    // 0x00295B7C: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x00295B80: addu        $a3, $s6, $zero
    ctx->r7 = ADD32(ctx->r22, 0);
    // 0x00295B84: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x00295B88: jal         0x00295BDC
    // 0x00295B8C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_00295BDC(rdram, ctx);
        goto after_15;
    // 0x00295B8C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_15:
    // 0x00295B90: lw          $v1, 0x30($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X30);
    // 0x00295B94: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    // 0x00295B98: slt         $v1, $a0, $v1
    ctx->r3 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00295B9C: beq         $v1, $zero, L_00295BA8
    if (ctx->r3 == 0) {
        // 0x00295BA0: addu        $s3, $v0, $zero
        ctx->r19 = ADD32(ctx->r2, 0);
            goto L_00295BA8;
    }
    // 0x00295BA0: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x00295BA4: sw          $a0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r4;
L_00295BA8:
    // 0x00295BA8: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00295BAC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x00295BB0: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x00295BB4: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x00295BB8: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x00295BBC: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x00295BC0: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x00295BC4: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x00295BC8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00295BCC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00295BD0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00295BD4: jr          $ra
    // 0x00295BD8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x00295BD8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void entry_00296360(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00296360: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00296364: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x00296368: addu        $s7, $a2, $zero
    ctx->r23 = ADD32(ctx->r6, 0);
    // 0x0029636C: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x00296370: ori         $v1, $v1, 0x440
    ctx->r3 = ctx->r3 | 0X440;
    // 0x00296374: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x00296378: lui         $a1, 0x200
    ctx->r5 = S32(0X200 << 16);
    // 0x0029637C: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x00296380: ori         $a1, $a1, 0x580
    ctx->r5 = ctx->r5 | 0X580;
    // 0x00296384: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00296388: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0029638C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x00296390: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00296394: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x00296398: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x0029639C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x002963A0: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x002963A4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x002963A8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x002963AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x002963B0: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x002963B4: lw          $a0, 0x1C($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X1C);
    // 0x002963B8: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x002963BC: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x002963C0: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x002963C4: sll         $v1, $s7, 1
    ctx->r3 = S32(ctx->r23 << 1);
    // 0x002963C8: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x002963CC: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x002963D0: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x002963D4: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x002963D8: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x002963DC: blez        $v0, L_0029646C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x002963E0: addiu       $a2, $a2, 0x8
        ctx->r6 = ADD32(ctx->r6, 0X8);
            goto L_0029646C;
    }
    // 0x002963E0: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x002963E4: lui         $fp, 0x800
    ctx->r30 = S32(0X800 << 16);
    // 0x002963E8: andi        $s6, $v1, 0xFFFF
    ctx->r22 = ctx->r3 & 0XFFFF;
    // 0x002963EC: lui         $s2, 0xC00
    ctx->r18 = S32(0XC00 << 16);
    // 0x002963F0: ori         $s2, $s2, 0x7FFF
    ctx->r18 = ctx->r18 | 0X7FFF;
    // 0x002963F4: lui         $s5, 0x6C0
    ctx->r21 = S32(0X6C0 << 16);
    // 0x002963F8: ori         $s5, $s5, 0x440
    ctx->r21 = ctx->r21 | 0X440;
    // 0x002963FC: addu        $s4, $fp, $zero
    ctx->r20 = ADD32(ctx->r30, 0);
    // 0x00296400: ori         $s4, $s4, 0x580
    ctx->r20 = ctx->r20 | 0X580;
    // 0x00296404: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
L_00296408:
    // 0x00296408: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0029640C: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    // 0x00296410: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x00296414: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x00296418: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0029641C: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x00296420: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x00296424: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x00296428: jalr        $v0
    // 0x0029642C: addu        $a2, $s7, $zero
    ctx->r6 = ADD32(ctx->r23, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x0029642C: addu        $a2, $s7, $zero
    ctx->r6 = ADD32(ctx->r23, 0);
    after_0:
    // 0x00296430: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x00296434: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x00296438: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x0029643C: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x00296440: sw          $fp, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r30;
    // 0x00296444: sw          $s6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r22;
    // 0x00296448: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x0029644C: sw          $s2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r18;
    // 0x00296450: sw          $s5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r21;
    // 0x00296454: sw          $s2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r18;
    // 0x00296458: sw          $s4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r20;
    // 0x0029645C: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x00296460: slt         $v0, $s1, $v0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00296464: bne         $v0, $zero, L_00296408
    if (ctx->r2 != 0) {
        // 0x00296468: addiu       $a2, $a2, 0x8
        ctx->r6 = ADD32(ctx->r6, 0X8);
            goto L_00296408;
    }
    // 0x00296468: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
L_0029646C:
    // 0x0029646C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x00296470: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x00296474: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x00296478: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x0029647C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x00296480: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x00296484: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x00296488: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0029648C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00296490: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00296494: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x00296498: jr          $ra
    // 0x0029649C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x0029649C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void entry_002972E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
        goto after_0;
    // 0x00297330: addiu       $a2, $zero, 0x22
    ctx->r6 = ADD32(0, 0X22);
    after_0:
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
        goto after_1;
    // 0x0029734C: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    after_1:
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
RECOMP_FUNC void entry_0029F190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029F190: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x0029F194: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x0029F198: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x0029F19C: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x0029F1A0: addu        $s7, $a1, $zero
    ctx->r23 = ADD32(ctx->r5, 0);
    // 0x0029F1A4: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x0029F1A8: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
    // 0x0029F1AC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x0029F1B0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0029F1B4: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x0029F1B8: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x0029F1BC: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x0029F1C0: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x0029F1C4: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x0029F1C8: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x0029F1CC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x0029F1D0: beq         $s5, $zero, L_0029F5A0
    if (ctx->r21 == 0) {
        // 0x0029F1D4: addu        $s1, $s2, $zero
        ctx->r17 = ADD32(ctx->r18, 0);
            goto L_0029F5A0;
    }
    // 0x0029F1D4: addu        $s1, $s2, $zero
    ctx->r17 = ADD32(ctx->r18, 0);
    // 0x0029F1D8: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x0029F1DC: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    // 0x0029F1E0: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0029F1E4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0029F1E8: lui         $v1, 0xB00
    ctx->r3 = S32(0XB00 << 16);
    // 0x0029F1EC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0029F1F0: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x0029F1F4: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    // 0x0029F1F8: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x0029F1FC: lw          $a0, 0x10($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X10);
    // 0x0029F200: lw          $a1, 0x2C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2C);
    // 0x0029F204: jal         0x0026FFA0
    // 0x0029F208: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    func_0026FFA0(rdram, ctx);
        goto after_0;
    // 0x0029F208: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_0:
    // 0x0029F20C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0029F210: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
    // 0x0029F214: lw          $a1, 0x38($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X38);
    // 0x0029F218: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x0029F21C: addu        $v0, $s5, $a1
    ctx->r2 = ADD32(ctx->r21, ctx->r5);
    // 0x0029F220: sltu        $v0, $v1, $v0
    ctx->r2 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x0029F224: beq         $v0, $zero, L_0029F234
    if (ctx->r2 == 0) {
        // 0x0029F228: addu        $fp, $a0, $zero
        ctx->r30 = ADD32(ctx->r4, 0);
            goto L_0029F234;
    }
    // 0x0029F228: addu        $fp, $a0, $zero
    ctx->r30 = ADD32(ctx->r4, 0);
    // 0x0029F22C: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x0029F230: sltu        $a0, $a0, $v0
    ctx->r4 = ctx->r4 < ctx->r2 ? 1 : 0;
L_0029F234:
    // 0x0029F234: beq         $a0, $zero, L_0029F240
    if (ctx->r4 == 0) {
        // 0x0029F238: addu        $s1, $s5, $zero
        ctx->r17 = ADD32(ctx->r21, 0);
            goto L_0029F240;
    }
    // 0x0029F238: addu        $s1, $s5, $zero
    ctx->r17 = ADD32(ctx->r21, 0);
    // 0x0029F23C: subu        $s1, $v1, $a1
    ctx->r17 = SUB32(ctx->r3, ctx->r5);
L_0029F240:
    // 0x0029F240: lw          $v1, 0x3C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X3C);
    // 0x0029F244: beq         $v1, $zero, L_0029F254
    if (ctx->r3 == 0) {
        // 0x0029F248: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_0029F254;
    }
    // 0x0029F248: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x0029F24C: j           L_0029F258
    // 0x0029F250: subu        $s6, $v0, $v1
    ctx->r22 = SUB32(ctx->r2, ctx->r3);
        goto L_0029F258;
    // 0x0029F250: subu        $s6, $v0, $v1
    ctx->r22 = SUB32(ctx->r2, ctx->r3);
L_0029F254:
    // 0x0029F254: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
L_0029F258:
    // 0x0029F258: subu        $a2, $s1, $s6
    ctx->r6 = SUB32(ctx->r17, ctx->r22);
    // 0x0029F25C: bltzl       $a2, L_0029F264
    if (SIGNED(ctx->r6) < 0) {
        // 0x0029F260: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_0029F264;
    }
    goto skip_0;
    // 0x0029F260: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    skip_0:
L_0029F264:
    // 0x0029F264: addiu       $v0, $a2, 0xF
    ctx->r2 = ADD32(ctx->r6, 0XF);
    // 0x0029F268: sra         $s3, $v0, 4
    ctx->r19 = S32(SIGNED(ctx->r2) >> 4);
    // 0x0029F26C: sll         $a1, $s3, 3
    ctx->r5 = S32(ctx->r19 << 3);
    // 0x0029F270: beq         $a0, $zero, L_0029F438
    if (ctx->r4 == 0) {
        // 0x0029F274: addu        $a3, $a1, $s3
        ctx->r7 = ADD32(ctx->r5, ctx->r19);
            goto L_0029F438;
    }
    // 0x0029F274: addu        $a3, $a1, $s3
    ctx->r7 = ADD32(ctx->r5, ctx->r19);
    // 0x0029F278: lh          $v0, 0x0($s7)
    ctx->r2 = MEM_H(ctx->r23, 0X0);
    // 0x0029F27C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0029F280: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0029F284: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0029F288: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    // 0x0029F28C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0029F290: jal         0x0029FCF4
    // 0x0029F294: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_0029FCF4(rdram, ctx);
        goto after_1;
    // 0x0029F294: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x0029F298: lw          $v1, 0x3C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X3C);
    // 0x0029F29C: beq         $v1, $zero, L_0029F2BC
    if (ctx->r3 == 0) {
        // 0x0029F2A0: addu        $s2, $v0, $zero
        ctx->r18 = ADD32(ctx->r2, 0);
            goto L_0029F2BC;
    }
    // 0x0029F2A0: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x0029F2A4: lhu         $v0, 0x3E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X3E);
    // 0x0029F2A8: lhu         $v1, 0x0($s7)
    ctx->r3 = MEM_HU(ctx->r23, 0X0);
    // 0x0029F2AC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x0029F2B0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0029F2B4: j           L_0029F2C8
    // 0x0029F2B8: sh          $v1, 0x0($s7)
    MEM_H(0X0, ctx->r23) = ctx->r3;
        goto L_0029F2C8;
    // 0x0029F2B8: sh          $v1, 0x0($s7)
    MEM_H(0X0, ctx->r23) = ctx->r3;
L_0029F2BC:
    // 0x0029F2BC: lhu         $v0, 0x0($s7)
    ctx->r2 = MEM_HU(ctx->r23, 0X0);
    // 0x0029F2C0: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x0029F2C4: sh          $v0, 0x0($s7)
    MEM_H(0X0, ctx->r23) = ctx->r2;
L_0029F2C8:
    // 0x0029F2C8: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x0029F2CC: lw          $a1, 0x1C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1C);
    // 0x0029F2D0: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x0029F2D4: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x0029F2D8: srl         $v1, $v1, 4
    ctx->r3 = S32(U32(ctx->r3) >> 4);
    // 0x0029F2DC: sw          $v0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r2;
    // 0x0029F2E0: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    // 0x0029F2E4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0029F2E8: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x0029F2EC: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x0029F2F0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0029F2F4: sw          $a1, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r5;
    // 0x0029F2F8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x0029F2FC: slt         $v0, $s1, $s5
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x0029F300: sw          $a0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r4;
    // 0x0029F304: lh          $s4, 0x0($s7)
    ctx->r20 = MEM_H(ctx->r23, 0X0);
    // 0x0029F308: beq         $v0, $zero, L_0029F400
    if (ctx->r2 == 0) {
        // 0x0029F30C: sll         $v0, $fp, 16
        ctx->r2 = S32(ctx->r30 << 16);
            goto L_0029F400;
    }
    // 0x0029F30C: sll         $v0, $fp, 16
    ctx->r2 = S32(ctx->r30 << 16);
    // 0x0029F310: sra         $s7, $v0, 16
    ctx->r23 = S32(SIGNED(ctx->r2) >> 16);
L_0029F314:
    // 0x0029F314: addiu       $v1, $s3, 0x1
    ctx->r3 = ADD32(ctx->r19, 0X1);
    // 0x0029F318: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x0029F31C: addu        $v1, $s4, $v1
    ctx->r3 = ADD32(ctx->r20, ctx->r3);
    // 0x0029F320: sll         $v0, $s1, 1
    ctx->r2 = S32(ctx->r17 << 1);
    // 0x0029F324: addu        $s4, $s4, $v0
    ctx->r20 = ADD32(ctx->r20, ctx->r2);
    // 0x0029F328: addiu       $v0, $zero, -0x20
    ctx->r2 = ADD32(0, -0X20);
    // 0x0029F32C: and         $s6, $v1, $v0
    ctx->r22 = ctx->r3 & ctx->r2;
    // 0x0029F330: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x0029F334: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0029F338: beq         $v1, $v0, L_0029F34C
    if (ctx->r3 == ctx->r2) {
        // 0x0029F33C: subu        $s5, $s5, $s1
        ctx->r21 = SUB32(ctx->r21, ctx->r17);
            goto L_0029F34C;
    }
    // 0x0029F33C: subu        $s5, $s5, $s1
    ctx->r21 = SUB32(ctx->r21, ctx->r17);
    // 0x0029F340: beq         $v1, $zero, L_0029F34C
    if (ctx->r3 == 0) {
        // 0x0029F344: addu        $v0, $v1, $v0
        ctx->r2 = ADD32(ctx->r3, ctx->r2);
            goto L_0029F34C;
    }
    // 0x0029F344: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x0029F348: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
L_0029F34C:
    // 0x0029F34C: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x0029F350: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x0029F354: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x0029F358: sltu        $v0, $s5, $v1
    ctx->r2 = ctx->r21 < ctx->r3 ? 1 : 0;
    // 0x0029F35C: bne         $v0, $zero, L_0029F368
    if (ctx->r2 != 0) {
        // 0x0029F360: addu        $s1, $s5, $zero
        ctx->r17 = ADD32(ctx->r21, 0);
            goto L_0029F368;
    }
    // 0x0029F360: addu        $s1, $s5, $zero
    ctx->r17 = ADD32(ctx->r21, 0);
    // 0x0029F364: addu        $s1, $v1, $zero
    ctx->r17 = ADD32(ctx->r3, 0);
L_0029F368:
    // 0x0029F368: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x0029F36C: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
    // 0x0029F370: addu        $a2, $s1, $v0
    ctx->r6 = ADD32(ctx->r17, ctx->r2);
    // 0x0029F374: bltzl       $a2, L_0029F37C
    if (SIGNED(ctx->r6) < 0) {
        // 0x0029F378: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_0029F37C;
    }
    goto skip_1;
    // 0x0029F378: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    skip_1:
L_0029F37C:
    // 0x0029F37C: addiu       $v0, $a2, 0xF
    ctx->r2 = ADD32(ctx->r6, 0XF);
    // 0x0029F380: sra         $s3, $v0, 4
    ctx->r19 = S32(SIGNED(ctx->r2) >> 4);
    // 0x0029F384: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0029F388: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0029F38C: sll         $v0, $s6, 16
    ctx->r2 = S32(ctx->r22 << 16);
    // 0x0029F390: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0029F394: sll         $a3, $s3, 3
    ctx->r7 = S32(ctx->r19 << 3);
    // 0x0029F398: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0029F39C: sw          $s7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r23;
    // 0x0029F3A0: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    // 0x0029F3A4: addu        $a3, $a3, $s3
    ctx->r7 = ADD32(ctx->r7, ctx->r19);
    // 0x0029F3A8: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x0029F3AC: jal         0x0029FCF4
    // 0x0029F3B0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_0029FCF4(rdram, ctx);
        goto after_2;
    // 0x0029F3B0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_2:
    // 0x0029F3B4: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x0029F3B8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0029F3BC: lui         $a2, 0xFF
    ctx->r6 = S32(0XFF << 16);
    // 0x0029F3C0: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x0029F3C4: sll         $a0, $s4, 16
    ctx->r4 = S32(ctx->r20 << 16);
    // 0x0029F3C8: sll         $v1, $s1, 1
    ctx->r3 = S32(ctx->r17 << 1);
    // 0x0029F3CC: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
    // 0x0029F3D0: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x0029F3D4: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x0029F3D8: lui         $v1, 0xA00
    ctx->r3 = S32(0XA00 << 16);
    // 0x0029F3DC: sw          $a0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r4;
    // 0x0029F3E0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x0029F3E4: addu        $v0, $s6, $v0
    ctx->r2 = ADD32(ctx->r22, ctx->r2);
    // 0x0029F3E8: and         $v0, $v0, $a2
    ctx->r2 = ctx->r2 & ctx->r6;
    // 0x0029F3EC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0029F3F0: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0029F3F4: slt         $v0, $s1, $s5
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x0029F3F8: bne         $v0, $zero, L_0029F314
    if (ctx->r2 != 0) {
        // 0x0029F3FC: addiu       $s2, $s2, 0x8
        ctx->r18 = ADD32(ctx->r18, 0X8);
            goto L_0029F314;
    }
    // 0x0029F3FC: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
L_0029F400:
    // 0x0029F400: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x0029F404: lw          $v1, 0x3C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X3C);
    // 0x0029F408: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    // 0x0029F40C: addu        $v1, $s5, $v1
    ctx->r3 = ADD32(ctx->r21, ctx->r3);
    // 0x0029F410: andi        $v1, $v1, 0xF
    ctx->r3 = ctx->r3 & 0XF;
    // 0x0029F414: addu        $a0, $a0, $s5
    ctx->r4 = ADD32(ctx->r4, ctx->r21);
    // 0x0029F418: sw          $v1, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r3;
    // 0x0029F41C: sll         $v1, $s3, 3
    ctx->r3 = S32(ctx->r19 << 3);
    // 0x0029F420: sw          $a0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r4;
    // 0x0029F424: lw          $a0, 0x44($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X44);
    // 0x0029F428: addu        $v1, $v1, $s3
    ctx->r3 = ADD32(ctx->r3, ctx->r19);
    // 0x0029F42C: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x0029F430: j           L_0029F5A4
    // 0x0029F434: sw          $a0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r4;
        goto L_0029F5A4;
    // 0x0029F434: sw          $a0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r4;
L_0029F438:
    // 0x0029F438: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    // 0x0029F43C: lw          $v1, 0x44($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X44);
    // 0x0029F440: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0029F444: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    // 0x0029F448: addu        $v1, $v1, $a3
    ctx->r3 = ADD32(ctx->r3, ctx->r7);
    // 0x0029F44C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x0029F450: subu        $a0, $v1, $v0
    ctx->r4 = SUB32(ctx->r3, ctx->r2);
    // 0x0029F454: bgez        $a0, L_0029F460
    if (SIGNED(ctx->r4) >= 0) {
        // 0x0029F458: sll         $s1, $s3, 4
        ctx->r17 = S32(ctx->r19 << 4);
            goto L_0029F460;
    }
    // 0x0029F458: sll         $s1, $s3, 4
    ctx->r17 = S32(ctx->r19 << 4);
    // 0x0029F45C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0029F460:
    // 0x0029F460: lui         $v0, 0x38E3
    ctx->r2 = S32(0X38E3 << 16);
    // 0x0029F464: ori         $v0, $v0, 0x8E39
    ctx->r2 = ctx->r2 | 0X8E39;
    // 0x0029F468: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0029F46C: sra         $v1, $a0, 31
    ctx->r3 = S32(SIGNED(ctx->r4) >> 31);
    // 0x0029F470: mfhi        $t0
    ctx->r8 = hi;
    // 0x0029F474: sra         $v0, $t0, 1
    ctx->r2 = S32(SIGNED(ctx->r8) >> 1);
    // 0x0029F478: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0029F47C: sll         $s4, $v0, 4
    ctx->r20 = S32(ctx->r2 << 4);
    // 0x0029F480: addu        $v1, $s1, $s6
    ctx->r3 = ADD32(ctx->r17, ctx->r22);
    // 0x0029F484: slt         $v0, $v1, $s4
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x0029F488: bnel        $v0, $zero, L_0029F490
    if (ctx->r2 != 0) {
        // 0x0029F48C: addu        $s4, $v1, $zero
        ctx->r20 = ADD32(ctx->r3, 0);
            goto L_0029F490;
    }
    goto skip_2;
    // 0x0029F48C: addu        $s4, $v1, $zero
    ctx->r20 = ADD32(ctx->r3, 0);
    skip_2:
L_0029F490:
    // 0x0029F490: andi        $v0, $s4, 0xF
    ctx->r2 = ctx->r20 & 0XF;
    // 0x0029F494: subu        $v0, $s4, $v0
    ctx->r2 = SUB32(ctx->r20, ctx->r2);
    // 0x0029F498: slt         $v0, $v0, $s5
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x0029F49C: beq         $v0, $zero, L_0029F534
    if (ctx->r2 == 0) {
        // 0x0029F4A0: subu        $a3, $a3, $a0
        ctx->r7 = SUB32(ctx->r7, ctx->r4);
            goto L_0029F534;
    }
    // 0x0029F4A0: subu        $a3, $a3, $a0
    ctx->r7 = SUB32(ctx->r7, ctx->r4);
    // 0x0029F4A4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x0029F4A8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0029F4AC: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x0029F4B0: lh          $v0, 0x0($s7)
    ctx->r2 = MEM_H(ctx->r23, 0X0);
    // 0x0029F4B4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0029F4B8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0029F4BC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0029F4C0: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    // 0x0029F4C4: subu        $a2, $s1, $s4
    ctx->r6 = SUB32(ctx->r17, ctx->r20);
    // 0x0029F4C8: jal         0x0029FCF4
    // 0x0029F4CC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_0029FCF4(rdram, ctx);
        goto after_3;
    // 0x0029F4CC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_3:
    // 0x0029F4D0: lw          $v1, 0x3C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X3C);
    // 0x0029F4D4: beq         $v1, $zero, L_0029F4F4
    if (ctx->r3 == 0) {
        // 0x0029F4D8: addu        $s2, $v0, $zero
        ctx->r18 = ADD32(ctx->r2, 0);
            goto L_0029F4F4;
    }
    // 0x0029F4D8: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x0029F4DC: lhu         $v0, 0x3E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X3E);
    // 0x0029F4E0: lhu         $v1, 0x0($s7)
    ctx->r3 = MEM_HU(ctx->r23, 0X0);
    // 0x0029F4E4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x0029F4E8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0029F4EC: j           L_0029F500
    // 0x0029F4F0: sh          $v1, 0x0($s7)
    MEM_H(0X0, ctx->r23) = ctx->r3;
        goto L_0029F500;
    // 0x0029F4F0: sh          $v1, 0x0($s7)
    MEM_H(0X0, ctx->r23) = ctx->r3;
L_0029F4F4:
    // 0x0029F4F4: lhu         $v0, 0x0($s7)
    ctx->r2 = MEM_HU(ctx->r23, 0X0);
    // 0x0029F4F8: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x0029F4FC: sh          $v0, 0x0($s7)
    MEM_H(0X0, ctx->r23) = ctx->r2;
L_0029F500:
    // 0x0029F500: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x0029F504: lw          $v1, 0x38($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X38);
    // 0x0029F508: addu        $v0, $s5, $v0
    ctx->r2 = ADD32(ctx->r21, ctx->r2);
    // 0x0029F50C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x0029F510: addu        $v1, $v1, $s5
    ctx->r3 = ADD32(ctx->r3, ctx->r21);
    // 0x0029F514: sw          $v0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r2;
    // 0x0029F518: sll         $v0, $s3, 3
    ctx->r2 = S32(ctx->r19 << 3);
    // 0x0029F51C: sw          $v1, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r3;
    // 0x0029F520: lw          $v1, 0x44($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X44);
    // 0x0029F524: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x0029F528: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0029F52C: j           L_0029F548
    // 0x0029F530: sw          $v1, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r3;
        goto L_0029F548;
    // 0x0029F530: sw          $v1, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r3;
L_0029F534:
    // 0x0029F534: lw          $v0, 0x44($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X44);
    // 0x0029F538: addu        $v1, $a1, $s3
    ctx->r3 = ADD32(ctx->r5, ctx->r19);
    // 0x0029F53C: sw          $zero, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = 0;
    // 0x0029F540: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0029F544: sw          $v0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r2;
L_0029F548:
    // 0x0029F548: beq         $s4, $zero, L_0029F5A4
    if (ctx->r20 == 0) {
        // 0x0029F54C: addu        $v0, $s2, $zero
        ctx->r2 = ADD32(ctx->r18, 0);
            goto L_0029F5A4;
    }
    // 0x0029F54C: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x0029F550: sw          $zero, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = 0;
    // 0x0029F554: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x0029F558: beq         $t0, $zero, L_0029F56C
    if (ctx->r8 == 0) {
        // 0x0029F55C: addu        $v0, $s6, $s1
        ctx->r2 = ADD32(ctx->r22, ctx->r17);
            goto L_0029F56C;
    }
    // 0x0029F55C: addu        $v0, $s6, $s1
    ctx->r2 = ADD32(ctx->r22, ctx->r17);
    // 0x0029F560: subu        $v0, $v0, $s4
    ctx->r2 = SUB32(ctx->r2, ctx->r20);
    // 0x0029F564: j           L_0029F570
    // 0x0029F568: sll         $a2, $v0, 1
    ctx->r6 = S32(ctx->r2 << 1);
        goto L_0029F570;
    // 0x0029F568: sll         $a2, $v0, 1
    ctx->r6 = S32(ctx->r2 << 1);
L_0029F56C:
    // 0x0029F56C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_0029F570:
    // 0x0029F570: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0029F574: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x0029F578: lui         $a0, 0xFF
    ctx->r4 = S32(0XFF << 16);
    // 0x0029F57C: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x0029F580: lh          $v0, 0x0($s7)
    ctx->r2 = MEM_H(ctx->r23, 0X0);
    // 0x0029F584: sll         $v1, $s4, 1
    ctx->r3 = S32(ctx->r20 << 1);
    // 0x0029F588: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
    // 0x0029F58C: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x0029F590: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x0029F594: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0029F598: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0029F59C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
L_0029F5A0:
    // 0x0029F5A0: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
L_0029F5A4:
    // 0x0029F5A4: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x0029F5A8: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x0029F5AC: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x0029F5B0: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x0029F5B4: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x0029F5B8: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x0029F5BC: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x0029F5C0: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x0029F5C4: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x0029F5C8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0029F5CC: jr          $ra
    // 0x0029F5D0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x0029F5D0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void entry_00257A40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00257A40: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x00257A44: sw          $s3, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r19;
    // 0x00257A48: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00257A4C: sw          $ra, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r31;
    // 0x00257A50: sw          $s2, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r18;
    // 0x00257A54: sw          $s1, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r17;
    // 0x00257A58: sw          $s0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r16;
    // 0x00257A5C: lw          $s1, 0x1A8($s3)
    ctx->r17 = MEM_W(ctx->r19, 0X1A8);
    // 0x00257A60: lh          $v0, 0x996($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X996);
    // 0x00257A64: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00257A68: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00257A6C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00257A70: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x00257A74: lw          $v1, 0x2C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X2C);
    // 0x00257A78: lw          $t0, 0x30($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X30);
    // 0x00257A7C: lw          $t1, 0x34($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X34);
    // 0x00257A80: sw          $v1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r3;
    // 0x00257A84: sw          $t0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r8;
    // 0x00257A88: sw          $t1, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r9;
    // 0x00257A8C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00257A90: lw          $v0, -0x1C84($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1C84);
    // 0x00257A94: beq         $v0, $zero, L_00257AA8
    if (ctx->r2 == 0) {
        // 0x00257A98: addiu       $s2, $sp, 0x70
        ctx->r18 = ADD32(ctx->r29, 0X70);
            goto L_00257AA8;
    }
    // 0x00257A98: addiu       $s2, $sp, 0x70
    ctx->r18 = ADD32(ctx->r29, 0X70);
    // 0x00257A9C: lwc1        $f0, 0x70($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X70);
    // 0x00257AA0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x00257AA4: swc1        $f0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f0.u32l;
L_00257AA8:
    // 0x00257AA8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00257AAC: lw          $v0, -0x1C80($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1C80);
    // 0x00257AB0: beq         $v0, $zero, L_00257AC4
    if (ctx->r2 == 0) {
        // 0x00257AB4: nop
    
            goto L_00257AC4;
    }
    // 0x00257AB4: nop

    // 0x00257AB8: lwc1        $f0, 0x74($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X74);
    // 0x00257ABC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x00257AC0: swc1        $f0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f0.u32l;
L_00257AC4:
    // 0x00257AC4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00257AC8: lw          $v0, -0x1C7C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1C7C);
    // 0x00257ACC: beq         $v0, $zero, L_00257AE0
    if (ctx->r2 == 0) {
        // 0x00257AD0: addiu       $a0, $sp, 0x60
        ctx->r4 = ADD32(ctx->r29, 0X60);
            goto L_00257AE0;
    }
    // 0x00257AD0: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x00257AD4: lwc1        $f0, 0x78($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X78);
    // 0x00257AD8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x00257ADC: swc1        $f0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f0.u32l;
L_00257AE0:
    // 0x00257AE0: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x00257AE4: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x00257AE8: jal         0x0020EF60
    // 0x00257AEC: addiu       $a1, $s3, 0x34
    ctx->r5 = ADD32(ctx->r19, 0X34);
    func_0020EF60(rdram, ctx);
        goto after_0;
    // 0x00257AEC: addiu       $a1, $s3, 0x34
    ctx->r5 = ADD32(ctx->r19, 0X34);
    after_0:
    // 0x00257AF0: addiu       $s0, $sp, 0x80
    ctx->r16 = ADD32(ctx->r29, 0X80);
    // 0x00257AF4: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x00257AF8: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x00257AFC: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x00257B00: jal         0x0020FC74
    // 0x00257B04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020FC74(rdram, ctx);
        goto after_1;
    // 0x00257B04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00257B08: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00257B0C: lui         $a2, 0xC123
    ctx->r6 = S32(0XC123 << 16);
    // 0x00257B10: ori         $a2, $a2, 0xD70A
    ctx->r6 = ctx->r6 | 0XD70A;
    // 0x00257B14: jal         0x0020EF60
    // 0x00257B18: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_2;
    // 0x00257B18: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_2:
    // 0x00257B1C: lw          $a0, 0x51C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X51C);
    // 0x00257B20: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x00257B24: jal         0x002101A0
    // 0x00257B28: addiu       $a0, $a0, 0x14C
    ctx->r4 = ADD32(ctx->r4, 0X14C);
    func_002101A0(rdram, ctx);
        goto after_3;
    // 0x00257B28: addiu       $a0, $a0, 0x14C
    ctx->r4 = ADD32(ctx->r4, 0X14C);
    after_3:
    // 0x00257B2C: addiu       $s2, $sp, 0x20
    ctx->r18 = ADD32(ctx->r29, 0X20);
    // 0x00257B30: lw          $a0, 0x51C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X51C);
    // 0x00257B34: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00257B38: jal         0x00211114
    // 0x00257B3C: addiu       $a0, $a0, 0x12C
    ctx->r4 = ADD32(ctx->r4, 0X12C);
    func_00211114(rdram, ctx);
        goto after_4;
    // 0x00257B3C: addiu       $a0, $a0, 0x12C
    ctx->r4 = ADD32(ctx->r4, 0X12C);
    after_4:
    // 0x00257B40: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    // 0x00257B44: lw          $a2, 0x74($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X74);
    // 0x00257B48: lw          $a3, 0x78($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X78);
    // 0x00257B4C: jal         0x00210318
    // 0x00257B50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00210318(rdram, ctx);
        goto after_5;
    // 0x00257B50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x00257B54: jal         0x00210C3C
    // 0x00257B58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00210C3C(rdram, ctx);
        goto after_6;
    // 0x00257B58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x00257B5C: addiu       $s1, $s3, 0x58
    ctx->r17 = ADD32(ctx->r19, 0X58);
    // 0x00257B60: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00257B64: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00257B68: jal         0x0020C618
    // 0x00257B6C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_0020C618(rdram, ctx);
        goto after_7;
    // 0x00257B6C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_7:
    // 0x00257B70: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x00257B74: lw          $a2, 0x14($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X14);
    // 0x00257B78: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x00257B7C: jal         0x00210318
    // 0x00257B80: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00210318(rdram, ctx);
        goto after_8;
    // 0x00257B80: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_8:
    // 0x00257B84: lw          $ra, 0xD0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XD0);
    // 0x00257B88: lw          $s3, 0xCC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XCC);
    // 0x00257B8C: lw          $s2, 0xC8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC8);
    // 0x00257B90: lw          $s1, 0xC4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC4);
    // 0x00257B94: lw          $s0, 0xC0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XC0);
    // 0x00257B98: jr          $ra
    // 0x00257B9C: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    return;
    // 0x00257B9C: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
;}
RECOMP_FUNC void entry_00241010(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00241010: addiu       $sp, $sp, -0x108
    ctx->r29 = ADD32(ctx->r29, -0X108);
    // 0x00241014: sw          $s1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r17;
    // 0x00241018: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0024101C: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    // 0x00241020: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00241024: sw          $ra, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r31;
    // 0x00241028: sw          $fp, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r30;
    // 0x0024102C: sw          $s7, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r23;
    // 0x00241030: sw          $s6, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r22;
    // 0x00241034: sw          $s5, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r21;
    // 0x00241038: sw          $s4, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r20;
    // 0x0024103C: sw          $s3, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r19;
    // 0x00241040: sw          $s2, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r18;
    // 0x00241044: sw          $s0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r16;
    // 0x00241048: sdc1        $f25, 0x100($sp)
    CHECK_FR(ctx, 25);
    SD(ctx->f25.u64, 0X100, ctx->r29);
    // 0x0024104C: sdc1        $f24, 0xF8($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0XF8, ctx->r29);
    // 0x00241050: sdc1        $f23, 0xF0($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0XF0, ctx->r29);
    // 0x00241054: sdc1        $f22, 0xE8($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0XE8, ctx->r29);
    // 0x00241058: sdc1        $f21, 0xE0($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0XE0, ctx->r29);
    // 0x0024105C: sdc1        $f20, 0xD8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XD8, ctx->r29);
    // 0x00241060: lui         $t3, 0x800A
    ctx->r11 = S32(0X800A << 16);
    // 0x00241064: addiu       $t3, $t3, 0x6820
    ctx->r11 = ADD32(ctx->r11, 0X6820);
    // 0x00241068: lw          $t0, 0x0($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X0);
    // 0x0024106C: lw          $t1, 0x4($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X4);
    // 0x00241070: lw          $t2, 0x8($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X8);
    // 0x00241074: sw          $t0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r8;
    // 0x00241078: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    // 0x0024107C: sw          $t2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r10;
    // 0x00241080: lui         $t3, 0x800A
    ctx->r11 = S32(0X800A << 16);
    // 0x00241084: addiu       $t3, $t3, 0x682C
    ctx->r11 = ADD32(ctx->r11, 0X682C);
    // 0x00241088: lw          $t0, 0x0($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X0);
    // 0x0024108C: lw          $t1, 0x4($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X4);
    // 0x00241090: lw          $t2, 0x8($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X8);
    // 0x00241094: sw          $t0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r8;
    // 0x00241098: sw          $t1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r9;
    // 0x0024109C: sw          $t2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r10;
    // 0x002410A0: jal         0x00266C5C
    // 0x002410A4: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    func_00266C5C(rdram, ctx);
        goto after_0;
    // 0x002410A4: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_0:
    // 0x002410A8: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x002410AC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x002410B0: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x002410B4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002410B8: bne         $v0, $zero, L_0024180C
    if (ctx->r2 != 0) {
        // 0x002410BC: nop
    
            goto L_0024180C;
    }
    // 0x002410BC: nop

    // 0x002410C0: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x002410C4: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
    // 0x002410C8: beq         $v0, $zero, L_0024180C
    if (ctx->r2 == 0) {
        // 0x002410CC: nop
    
            goto L_0024180C;
    }
    // 0x002410CC: nop

    // 0x002410D0: lb          $v0, 0x5($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X5);
    // 0x002410D4: beq         $v0, $zero, L_0024180C
    if (ctx->r2 == 0) {
        // 0x002410D8: addu        $s7, $a0, $zero
        ctx->r23 = ADD32(ctx->r4, 0);
            goto L_0024180C;
    }
    // 0x002410D8: addu        $s7, $a0, $zero
    ctx->r23 = ADD32(ctx->r4, 0);
    // 0x002410DC: addiu       $s3, $v1, 0x4
    ctx->r19 = ADD32(ctx->r3, 0X4);
    // 0x002410E0: addiu       $s2, $v1, 0x10
    ctx->r18 = ADD32(ctx->r3, 0X10);
    // 0x002410E4: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    // 0x002410E8: addiu       $fp, $zero, 0x2
    ctx->r30 = ADD32(0, 0X2);
    // 0x002410EC: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x002410F0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002410F4: lwc1        $f22, 0x6838($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X6838);
    // 0x002410F8: mtc1        $zero, $f25
    ctx->f_odd[(25 - 1) * 2] = 0;
L_002410FC:
    // 0x002410FC: lw          $v0, 0x98($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X98);
    // 0x00241100: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00241104: lwc1        $f24, 0x683C($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X683C);
    // 0x00241108: beq         $v0, $zero, L_00241128
    if (ctx->r2 == 0) {
        // 0x0024110C: nop
    
            goto L_00241128;
    }
    // 0x0024110C: nop

    // 0x00241110: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00241114: lw          $a1, 0x10($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X10);
    // 0x00241118: jal         0x0023C188
    // 0x0024111C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0023C188(rdram, ctx);
        goto after_1;
    // 0x0024111C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x00241120: j           L_00241130
    // 0x00241124: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
        goto L_00241130;
    // 0x00241124: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_00241128:
    // 0x00241128: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x0024112C: lb          $v1, 0x6($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X6);
L_00241130:
    // 0x00241130: lw          $v0, 0x94($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X94);
    // 0x00241134: bne         $v0, $zero, L_002411E4
    if (ctx->r2 != 0) {
        // 0x00241138: nop
    
            goto L_002411E4;
    }
    // 0x00241138: nop

    // 0x0024113C: beq         $v1, $zero, L_002411E4
    if (ctx->r3 == 0) {
        // 0x00241140: nop
    
            goto L_002411E4;
    }
    // 0x00241140: nop

    // 0x00241144: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x00241148: jal         0x0026BC54
    // 0x0024114C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_0026BC54(rdram, ctx);
        goto after_2;
    // 0x0024114C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_2:
    // 0x00241150: lwc1        $f3, 0x30($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x00241154: lwc1        $f0, 0x58($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X58);
    // 0x00241158: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0024115C: lwc1        $f2, 0x34($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X34);
    // 0x00241160: lwc1        $f0, 0x5C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X5C);
    // 0x00241164: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00241168: lwc1        $f1, 0x38($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x0024116C: lwc1        $f0, 0x60($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X60);
    // 0x00241170: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00241174: add.s       $f3, $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f2.fl;
    // 0x00241178: add.s       $f20, $f3, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = ctx->f3.fl + ctx->f1.fl;
    // 0x0024117C: c.lt.s      $f20, $f25
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 25);
    c1cs = ctx->f20.fl < ctx->f25.fl;
    // 0x00241180: nop

    // 0x00241184: bc1f        L_002411E4
    if (!c1cs) {
        // 0x00241188: addiu       $a0, $sp, 0x80
        ctx->r4 = ADD32(ctx->r29, 0X80);
            goto L_002411E4;
    }
    // 0x00241188: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    // 0x0024118C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00241190: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    // 0x00241194: jal         0x0020EF2C
    // 0x00241198: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_0020EF2C(rdram, ctx);
        goto after_3;
    // 0x00241198: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_3:
    // 0x0024119C: lwc1        $f3, 0x30($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x002411A0: lwc1        $f0, 0x80($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X80);
    // 0x002411A4: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x002411A8: lwc1        $f2, 0x34($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X34);
    // 0x002411AC: lwc1        $f0, 0x84($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X84);
    // 0x002411B0: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x002411B4: lwc1        $f1, 0x38($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x002411B8: lwc1        $f0, 0x88($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X88);
    // 0x002411BC: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x002411C0: add.s       $f3, $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f2.fl;
    // 0x002411C4: add.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f1.fl;
    // 0x002411C8: div.s       $f24, $f3, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f24.fl = DIV_S(ctx->f3.fl, ctx->f20.fl);
    // 0x002411CC: c.lt.s      $f24, $f22
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f24.fl < ctx->f22.fl;
    // 0x002411D0: nop

    // 0x002411D4: bc1f        L_002411E4
    if (!c1cs) {
        // 0x002411D8: nop
    
            goto L_002411E4;
    }
    // 0x002411D8: nop

    // 0x002411DC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002411E0: lwc1        $f24, 0x6840($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X6840);
L_002411E4:
    // 0x002411E4: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x002411E8: lb          $v0, 0x6($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X6);
    // 0x002411EC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002411F0: lwc1        $f23, 0x6844($at)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r1, 0X6844);
    // 0x002411F4: beq         $v0, $zero, L_0024132C
    if (ctx->r2 == 0) {
        // 0x002411F8: nop
    
            goto L_0024132C;
    }
    // 0x002411F8: nop

    // 0x002411FC: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x00241200: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x00241204: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x00241208: beq         $v0, $zero, L_00241330
    if (ctx->r2 == 0) {
        // 0x0024120C: nop
    
            goto L_00241330;
    }
    // 0x0024120C: nop

    // 0x00241210: jal         0x0026BFB4
    // 0x00241214: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    func_0026BFB4(rdram, ctx);
        goto after_4;
    // 0x00241214: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    after_4:
    // 0x00241218: lwc1        $f3, 0x40($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x0024121C: lwc1        $f0, 0x58($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X58);
    // 0x00241220: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x00241224: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
    // 0x00241228: lwc1        $f0, 0x5C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X5C);
    // 0x0024122C: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00241230: lwc1        $f1, 0x48($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X48);
    // 0x00241234: lwc1        $f0, 0x60($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X60);
    // 0x00241238: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0024123C: add.s       $f3, $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f2.fl;
    // 0x00241240: add.s       $f20, $f3, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = ctx->f3.fl + ctx->f1.fl;
    // 0x00241244: c.lt.s      $f20, $f25
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 25);
    c1cs = ctx->f20.fl < ctx->f25.fl;
    // 0x00241248: nop

    // 0x0024124C: bc1f        L_0024132C
    if (!c1cs) {
        // 0x00241250: lui         $v1, 0x40
        ctx->r3 = S32(0X40 << 16);
            goto L_0024132C;
    }
    // 0x00241250: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x00241254: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00241258: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x0024125C: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x00241260: swc1        $f0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f0.u32l;
    // 0x00241264: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00241268: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x0024126C: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x00241270: swc1        $f0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f0.u32l;
    // 0x00241274: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x00241278: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0024127C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00241280: beq         $v0, $zero, L_002412C4
    if (ctx->r2 == 0) {
        // 0x00241284: nop
    
            goto L_002412C4;
    }
    // 0x00241284: nop

    // 0x00241288: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x0024128C: jal         0x002671B4
    // 0x00241290: nop

    func_002671B4(rdram, ctx);
        goto after_5;
    // 0x00241290: nop

    after_5:
    // 0x00241294: lwc1        $f1, 0x94($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X94);
    // 0x00241298: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0024129C: swc1        $f1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x002412A0: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x002412A4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x002412A8: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x002412AC: beq         $v0, $zero, L_002412C4
    if (ctx->r2 == 0) {
        // 0x002412B0: nop
    
            goto L_002412C4;
    }
    // 0x002412B0: nop

    // 0x002412B4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002412B8: lwc1        $f0, 0x6848($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6848);
    // 0x002412BC: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x002412C0: swc1        $f0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f0.u32l;
L_002412C4:
    // 0x002412C4: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x002412C8: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    // 0x002412CC: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x002412D0: addiu       $a1, $sp, 0x90
    ctx->r5 = ADD32(ctx->r29, 0X90);
    // 0x002412D4: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x002412D8: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x002412DC: jal         0x0020EF2C
    // 0x002412E0: swc1        $f0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f0.u32l;
    func_0020EF2C(rdram, ctx);
        goto after_6;
    // 0x002412E0: swc1        $f0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f0.u32l;
    after_6:
    // 0x002412E4: lwc1        $f3, 0x40($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x002412E8: lwc1        $f0, 0x80($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X80);
    // 0x002412EC: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x002412F0: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
    // 0x002412F4: lwc1        $f0, 0x84($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X84);
    // 0x002412F8: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x002412FC: lwc1        $f1, 0x48($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X48);
    // 0x00241300: lwc1        $f0, 0x88($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X88);
    // 0x00241304: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00241308: add.s       $f3, $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f2.fl;
    // 0x0024130C: add.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f1.fl;
    // 0x00241310: div.s       $f23, $f3, $f20
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f23.fl = DIV_S(ctx->f3.fl, ctx->f20.fl);
    // 0x00241314: c.lt.s      $f23, $f22
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f23.fl < ctx->f22.fl;
    // 0x00241318: nop

    // 0x0024131C: bc1f        L_0024132C
    if (!c1cs) {
        // 0x00241320: nop
    
            goto L_0024132C;
    }
    // 0x00241320: nop

    // 0x00241324: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00241328: lwc1        $f23, 0x684C($at)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r1, 0X684C);
L_0024132C:
    // 0x0024132C: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
L_00241330:
    // 0x00241330: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00241334: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00241338: jal         0x0022425C
    // 0x0024133C: nop

    func_0022425C(rdram, ctx);
        goto after_7;
    // 0x0024133C: nop

    after_7:
    // 0x00241340: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x00241344: lhu         $v1, 0x2($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X2);
    // 0x00241348: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024134C: lwc1        $f21, 0x6850($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X6850);
    // 0x00241350: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x00241354: beq         $v1, $zero, L_002413C8
    if (ctx->r3 == 0) {
        // 0x00241358: addu        $s0, $v0, $zero
        ctx->r16 = ADD32(ctx->r2, 0);
            goto L_002413C8;
    }
    // 0x00241358: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0024135C: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x00241360: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00241364: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x00241368: beq         $v0, $zero, L_002413C8
    if (ctx->r2 == 0) {
        // 0x0024136C: nop
    
            goto L_002413C8;
    }
    // 0x0024136C: nop

    // 0x00241370: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00241374: lw          $v0, 0x1ADC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1ADC);
    // 0x00241378: lw          $v0, 0xC4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XC4);
    // 0x0024137C: bne         $v0, $zero, L_002413C8
    if (ctx->r2 != 0) {
        // 0x00241380: nop
    
            goto L_002413C8;
    }
    // 0x00241380: nop

    // 0x00241384: beq         $s0, $zero, L_002413C8
    if (ctx->r16 == 0) {
        // 0x00241388: nop
    
            goto L_002413C8;
    }
    // 0x00241388: nop

    // 0x0024138C: lwc1        $f2, 0x5C($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X5C);
    // 0x00241390: c.eq.s      $f2, $f25
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 25);
    c1cs = ctx->f2.fl == ctx->f25.fl;
    // 0x00241394: nop

    // 0x00241398: bc1t        L_002413C8
    if (c1cs) {
        // 0x0024139C: nop
    
            goto L_002413C8;
    }
    // 0x0024139C: nop

    // 0x002413A0: lwc1        $f0, 0x20($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
    // 0x002413A4: lwc1        $f1, 0x4($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X4);
    // 0x002413A8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x002413AC: div.s       $f21, $f0, $f2
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f21.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x002413B0: c.lt.s      $f21, $f22
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f21.fl < ctx->f22.fl;
    // 0x002413B4: nop

    // 0x002413B8: bc1f        L_002413C8
    if (!c1cs) {
        // 0x002413BC: nop
    
            goto L_002413C8;
    }
    // 0x002413BC: nop

    // 0x002413C0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002413C4: lwc1        $f21, 0x6854($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X6854);
L_002413C8:
    // 0x002413C8: lwc1        $f22, 0x8($s1)
    ctx->f22.u32l = MEM_W(ctx->r17, 0X8);
    // 0x002413CC: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x002413D0: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
L_002413D4:
    // 0x002413D4: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x002413D8: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x002413DC: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x002413E0: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x002413E4: beq         $a1, $fp, L_002413F4
    if (ctx->r5 == ctx->r30) {
        // 0x002413E8: addiu       $v0, $a1, 0x1
        ctx->r2 = ADD32(ctx->r5, 0X1);
            goto L_002413F4;
    }
    // 0x002413E8: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x002413EC: j           L_002413F8
    // 0x002413F0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
        goto L_002413F8;
    // 0x002413F0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_002413F4:
    // 0x002413F4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_002413F8:
    // 0x002413F8: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x002413FC: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x00241400: lwc1        $f3, 0x8($a0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r4, 0X8);
    // 0x00241404: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x00241408: sub.s       $f5, $f0, $f3
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f5.fl = ctx->f0.fl - ctx->f3.fl;
    // 0x0024140C: lwc1        $f1, 0x58($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X58);
    // 0x00241410: mul.s       $f1, $f5, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f5.fl, ctx->f1.fl);
    // 0x00241414: lwc1        $f2, 0x0($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X0);
    // 0x00241418: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x0024141C: sub.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x00241420: lwc1        $f0, 0x60($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X60);
    // 0x00241424: mul.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x00241428: add.s       $f20, $f1, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0024142C: c.lt.s      $f20, $f25
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 25);
    c1cs = ctx->f20.fl < ctx->f25.fl;
    // 0x00241430: nop

    // 0x00241434: bc1fl       L_002414C8
    if (!c1cs) {
        // 0x00241438: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_002414C8;
    }
    goto skip_0;
    // 0x00241438: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    skip_0:
    // 0x0024143C: lwc1        $f1, 0x0($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X0);
    // 0x00241440: sub.s       $f1, $f2, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f2.fl - ctx->f1.fl;
    // 0x00241444: mul.s       $f1, $f5, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f5.fl, ctx->f1.fl);
    // 0x00241448: lwc1        $f0, 0x8($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X8);
    // 0x0024144C: sub.s       $f0, $f3, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f3.fl - ctx->f0.fl;
    // 0x00241450: mul.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x00241454: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00241458: div.s       $f1, $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f1.fl = DIV_S(ctx->f1.fl, ctx->f20.fl);
    // 0x0024145C: c.lt.s      $f1, $f22
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f1.fl < ctx->f22.fl;
    // 0x00241460: nop

    // 0x00241464: bc1fl       L_002414C8
    if (!c1cs) {
        // 0x00241468: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_002414C8;
    }
    goto skip_1;
    // 0x00241468: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    skip_1:
    // 0x0024146C: lw          $v0, 0x84($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X84);
    // 0x00241470: bnel        $v0, $s5, L_002414B8
    if (ctx->r2 != ctx->r21) {
        // 0x00241474: mov.s       $f22, $f1
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    ctx->f22.fl = ctx->f1.fl;
            goto L_002414B8;
    }
    goto skip_2;
    // 0x00241474: mov.s       $f22, $f1
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    ctx->f22.fl = ctx->f1.fl;
    skip_2:
    // 0x00241478: lwc1        $f0, 0x64($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X64);
    // 0x0024147C: c.eq.s      $f0, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    c1cs = ctx->f0.fl == ctx->f5.fl;
    // 0x00241480: nop

    // 0x00241484: bc1fl       L_002414B8
    if (!c1cs) {
        // 0x00241488: mov.s       $f22, $f1
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    ctx->f22.fl = ctx->f1.fl;
            goto L_002414B8;
    }
    goto skip_3;
    // 0x00241488: mov.s       $f22, $f1
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    ctx->f22.fl = ctx->f1.fl;
    skip_3:
    // 0x0024148C: lwc1        $f0, 0x68($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X68);
    // 0x00241490: c.eq.s      $f0, $f25
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 25);
    c1cs = ctx->f0.fl == ctx->f25.fl;
    // 0x00241494: nop

    // 0x00241498: bc1fl       L_002414B8
    if (!c1cs) {
        // 0x0024149C: mov.s       $f22, $f1
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    ctx->f22.fl = ctx->f1.fl;
            goto L_002414B8;
    }
    goto skip_4;
    // 0x0024149C: mov.s       $f22, $f1
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    ctx->f22.fl = ctx->f1.fl;
    skip_4:
    // 0x002414A0: lwc1        $f0, 0x6C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X6C);
    // 0x002414A4: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x002414A8: nop

    // 0x002414AC: bc1tl       L_002414C8
    if (c1cs) {
        // 0x002414B0: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_002414C8;
    }
    goto skip_5;
    // 0x002414B0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    skip_5:
    // 0x002414B4: mov.s       $f22, $f1
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    ctx->f22.fl = ctx->f1.fl;
L_002414B8:
    // 0x002414B8: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x002414BC: swc1        $f5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x002414C0: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x002414C4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_002414C8:
    // 0x002414C8: slti        $v0, $a1, 0x3
    ctx->r2 = SIGNED(ctx->r5) < 0X3 ? 1 : 0;
    // 0x002414CC: bne         $v0, $zero, L_002413D4
    if (ctx->r2 != 0) {
        // 0x002414D0: nop
    
            goto L_002413D4;
    }
    // 0x002414D0: nop

    // 0x002414D4: c.le.s      $f21, $f22
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f21.fl <= ctx->f22.fl;
    // 0x002414D8: nop

    // 0x002414DC: bc1f        L_00241594
    if (!c1cs) {
        // 0x002414E0: nop
    
            goto L_00241594;
    }
    // 0x002414E0: nop

    // 0x002414E4: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x002414E8: c.lt.s      $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f21.fl < ctx->f0.fl;
    // 0x002414EC: nop

    // 0x002414F0: bc1f        L_00241594
    if (!c1cs) {
        // 0x002414F4: nop
    
            goto L_00241594;
    }
    // 0x002414F4: nop

    // 0x002414F8: lwc1        $f0, 0x20($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
    // 0x002414FC: swc1        $f0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f0.u32l;
    // 0x00241500: lwc1        $f1, 0x4($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X4);
    // 0x00241504: lwc1        $f0, 0x20($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
    // 0x00241508: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0024150C: nop

    // 0x00241510: bc1t        L_0024151C
    if (c1cs) {
        // 0x00241514: addiu       $a1, $sp, 0x50
        ctx->r5 = ADD32(ctx->r29, 0X50);
            goto L_0024151C;
    }
    // 0x00241514: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x00241518: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
L_0024151C:
    // 0x0024151C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00241520: addiu       $a2, $sp, 0x70
    ctx->r6 = ADD32(ctx->r29, 0X70);
    // 0x00241524: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x00241528: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x0024152C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00241530: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00241534: jal         0x0023AB18
    // 0x00241538: sw          $s5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r21;
    func_0023AB18(rdram, ctx);
        goto after_8;
    // 0x00241538: sw          $s5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r21;
    after_8:
    // 0x0024153C: beq         $v0, $zero, L_00241594
    if (ctx->r2 == 0) {
        // 0x00241540: lui         $v1, 0x40
        ctx->r3 = S32(0X40 << 16);
            goto L_00241594;
    }
    // 0x00241540: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x00241544: lw          $v0, 0x44($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X44);
    // 0x00241548: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0024154C: bne         $v0, $zero, L_00241568
    if (ctx->r2 != 0) {
        // 0x00241550: addiu       $v1, $zero, 0x7
        ctx->r3 = ADD32(0, 0X7);
            goto L_00241568;
    }
    // 0x00241550: addiu       $v1, $zero, 0x7
    ctx->r3 = ADD32(0, 0X7);
    // 0x00241554: lhu         $v0, 0x52($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X52);
    // 0x00241558: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x0024155C: beq         $v0, $zero, L_00241568
    if (ctx->r2 == 0) {
        // 0x00241560: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_00241568;
    }
    // 0x00241560: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00241564: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
L_00241568:
    // 0x00241568: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0024156C: lw          $v0, 0x1ADC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1ADC);
    // 0x00241570: sw          $v1, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r3;
    // 0x00241574: sw          $zero, 0x44($s1)
    MEM_W(0X44, ctx->r17) = 0;
    // 0x00241578: sw          $zero, 0x48($s1)
    MEM_W(0X48, ctx->r17) = 0;
    // 0x0024157C: addiu       $v1, $v0, 0xC8
    ctx->r3 = ADD32(ctx->r2, 0XC8);
    // 0x00241580: sw          $v1, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->r3;
    // 0x00241584: addiu       $v1, $v0, 0xC4
    ctx->r3 = ADD32(ctx->r2, 0XC4);
    // 0x00241588: addiu       $v0, $v0, 0xD4
    ctx->r2 = ADD32(ctx->r2, 0XD4);
    // 0x0024158C: sw          $v1, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r3;
    // 0x00241590: sw          $v0, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r2;
L_00241594:
    // 0x00241594: c.le.s      $f24, $f22
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f24.fl <= ctx->f22.fl;
    // 0x00241598: nop

    // 0x0024159C: bc1f        L_00241650
    if (!c1cs) {
        // 0x002415A0: nop
    
            goto L_00241650;
    }
    // 0x002415A0: nop

    // 0x002415A4: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x002415A8: c.lt.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl < ctx->f0.fl;
    // 0x002415AC: nop

    // 0x002415B0: bc1f        L_00241650
    if (!c1cs) {
        // 0x002415B4: nop
    
            goto L_00241650;
    }
    // 0x002415B4: nop

    // 0x002415B8: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x002415BC: jal         0x0026AFC0
    // 0x002415C0: nop

    func_0026AFC0(rdram, ctx);
        goto after_9;
    // 0x002415C0: nop

    after_9:
    // 0x002415C4: bne         $v0, $zero, L_002415DC
    if (ctx->r2 != 0) {
        // 0x002415C8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_002415DC;
    }
    // 0x002415C8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002415CC: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x002415D0: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x002415D4: j           L_002415E4
    // 0x002415D8: nop

        goto L_002415E4;
    // 0x002415D8: nop

L_002415DC:
    // 0x002415DC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x002415E0: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
L_002415E4:
    // 0x002415E4: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x002415E8: lb          $v0, 0x6($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X6);
    // 0x002415EC: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x002415F0: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x002415F4: sw          $s5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r21;
    // 0x002415F8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x002415FC: lw          $a2, 0x4($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X4);
    // 0x00241600: jal         0x0023AB18
    // 0x00241604: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_0023AB18(rdram, ctx);
        goto after_10;
    // 0x00241604: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_10:
    // 0x00241608: beq         $v0, $zero, L_00241650
    if (ctx->r2 == 0) {
        // 0x0024160C: nop
    
            goto L_00241650;
    }
    // 0x0024160C: nop

    // 0x00241610: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x00241614: lw          $v1, 0x1ADC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1ADC);
    // 0x00241618: sw          $s5, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r21;
    // 0x0024161C: sw          $zero, 0x44($s1)
    MEM_W(0X44, ctx->r17) = 0;
    // 0x00241620: sw          $zero, 0x48($s1)
    MEM_W(0X48, ctx->r17) = 0;
    // 0x00241624: addiu       $v0, $v1, 0xB8
    ctx->r2 = ADD32(ctx->r3, 0XB8);
    // 0x00241628: sw          $v0, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->r2;
    // 0x0024162C: addiu       $v0, $v1, 0xB4
    ctx->r2 = ADD32(ctx->r3, 0XB4);
    // 0x00241630: addiu       $v1, $v1, 0xB0
    ctx->r3 = ADD32(ctx->r3, 0XB0);
    // 0x00241634: sw          $v0, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r2;
    // 0x00241638: sw          $v1, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r3;
    // 0x0024163C: lw          $v0, 0x0($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X0);
    // 0x00241640: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x00241644: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00241648: bne         $v0, $zero, L_0024180C
    if (ctx->r2 != 0) {
        // 0x0024164C: nop
    
            goto L_0024180C;
    }
    // 0x0024164C: nop

L_00241650:
    // 0x00241650: c.le.s      $f23, $f22
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f23.fl <= ctx->f22.fl;
    // 0x00241654: nop

    // 0x00241658: bc1f        L_002416E0
    if (!c1cs) {
        // 0x0024165C: nop
    
            goto L_002416E0;
    }
    // 0x0024165C: nop

    // 0x00241660: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x00241664: c.lt.s      $f23, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f23.fl < ctx->f0.fl;
    // 0x00241668: nop

    // 0x0024166C: bc1f        L_002416E4
    if (!c1cs) {
        // 0x00241670: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_002416E4;
    }
    // 0x00241670: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00241674: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x00241678: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x0024167C: addiu       $a2, $sp, 0x90
    ctx->r6 = ADD32(ctx->r29, 0X90);
    // 0x00241680: lb          $v0, 0x5($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X5);
    // 0x00241684: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00241688: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0024168C: sw          $s5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r21;
    // 0x00241690: jal         0x0023AB18
    // 0x00241694: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_0023AB18(rdram, ctx);
        goto after_11;
    // 0x00241694: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_11:
    // 0x00241698: beq         $v0, $zero, L_002416E0
    if (ctx->r2 == 0) {
        // 0x0024169C: nop
    
            goto L_002416E0;
    }
    // 0x0024169C: nop

    // 0x002416A0: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x002416A4: lw          $v1, 0x1ADC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1ADC);
    // 0x002416A8: sw          $fp, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r30;
    // 0x002416AC: sw          $zero, 0x44($s1)
    MEM_W(0X44, ctx->r17) = 0;
    // 0x002416B0: sw          $zero, 0x48($s1)
    MEM_W(0X48, ctx->r17) = 0;
    // 0x002416B4: addiu       $v0, $v1, 0xB8
    ctx->r2 = ADD32(ctx->r3, 0XB8);
    // 0x002416B8: sw          $v0, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->r2;
    // 0x002416BC: addiu       $v0, $v1, 0xB4
    ctx->r2 = ADD32(ctx->r3, 0XB4);
    // 0x002416C0: addiu       $v1, $v1, 0xB0
    ctx->r3 = ADD32(ctx->r3, 0XB0);
    // 0x002416C4: sw          $v0, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r2;
    // 0x002416C8: sw          $v1, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r3;
    // 0x002416CC: lw          $v0, 0x0($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X0);
    // 0x002416D0: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x002416D4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002416D8: bne         $v0, $zero, L_0024180C
    if (ctx->r2 != 0) {
        // 0x002416DC: nop
    
            goto L_0024180C;
    }
    // 0x002416DC: nop

L_002416E0:
    // 0x002416E0: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
L_002416E4:
    // 0x002416E4: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
    // 0x002416E8: nop

    // 0x002416EC: bc1f        L_0024180C
    if (!c1cs) {
        // 0x002416F0: addiu       $s0, $sp, 0xA0
        ctx->r16 = ADD32(ctx->r29, 0XA0);
            goto L_0024180C;
    }
    // 0x002416F0: addiu       $s0, $sp, 0xA0
    ctx->r16 = ADD32(ctx->r29, 0XA0);
    // 0x002416F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002416F8: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x002416FC: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x00241700: jal         0x0020EF8C
    // 0x00241704: addiu       $a3, $s1, 0x4C
    ctx->r7 = ADD32(ctx->r17, 0X4C);
    func_0020EF8C(rdram, ctx);
        goto after_12;
    // 0x00241704: addiu       $a3, $s1, 0x4C
    ctx->r7 = ADD32(ctx->r17, 0X4C);
    after_12:
    // 0x00241708: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0024170C: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    // 0x00241710: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x00241714: jal         0x0023B664
    // 0x00241718: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_0023B664(rdram, ctx);
        goto after_13;
    // 0x00241718: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_13:
    // 0x0024171C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00241720: beql        $s0, $zero, L_0024175C
    if (ctx->r16 == 0) {
        // 0x00241724: sw          $zero, 0x24($sp)
        MEM_W(0X24, ctx->r29) = 0;
            goto L_0024175C;
    }
    goto skip_6;
    // 0x00241724: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    skip_6:
    // 0x00241728: lw          $v0, 0x94($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X94);
    // 0x0024172C: bnel        $v0, $zero, L_0024175C
    if (ctx->r2 != 0) {
        // 0x00241730: sw          $zero, 0x24($sp)
        MEM_W(0X24, ctx->r29) = 0;
            goto L_0024175C;
    }
    goto skip_7;
    // 0x00241730: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    skip_7:
    // 0x00241734: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x00241738: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0024173C: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x00241740: beql        $v0, $zero, L_00241800
    if (ctx->r2 == 0) {
        // 0x00241744: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_00241800;
    }
    goto skip_8;
    // 0x00241744: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    skip_8:
    // 0x00241748: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x0024174C: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x00241750: beql        $v0, $zero, L_00241800
    if (ctx->r2 == 0) {
        // 0x00241754: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_00241800;
    }
    goto skip_9;
    // 0x00241754: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    skip_9:
    // 0x00241758: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_0024175C:
    // 0x0024175C: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x00241760: sll         $v0, $s4, 2
    ctx->r2 = S32(ctx->r20 << 2);
    // 0x00241764: bne         $s0, $zero, L_0024177C
    if (ctx->r16 != 0) {
        // 0x00241768: addu        $v1, $v1, $v0
        ctx->r3 = ADD32(ctx->r3, ctx->r2);
            goto L_0024177C;
    }
    // 0x00241768: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0024176C: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x00241770: lb          $v0, 0x5($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X5);
    // 0x00241774: j           L_00241784
    // 0x00241778: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
        goto L_00241784;
    // 0x00241778: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
L_0024177C:
    // 0x0024177C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x00241780: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
L_00241784:
    // 0x00241784: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00241788: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x0024178C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00241790: sw          $s5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r21;
    // 0x00241794: lw          $a2, 0x4($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X4);
    // 0x00241798: jal         0x0023AB18
    // 0x0024179C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_0023AB18(rdram, ctx);
        goto after_14;
    // 0x0024179C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_14:
    // 0x002417A0: beq         $v0, $zero, L_0024180C
    if (ctx->r2 == 0) {
        // 0x002417A4: nop
    
            goto L_0024180C;
    }
    // 0x002417A4: nop

    // 0x002417A8: beq         $s0, $zero, L_002417D0
    if (ctx->r16 == 0) {
        // 0x002417AC: nop
    
            goto L_002417D0;
    }
    // 0x002417AC: nop

    // 0x002417B0: sw          $s0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r16;
    // 0x002417B4: sw          $zero, 0x34($s1)
    MEM_W(0X34, ctx->r17) = 0;
    // 0x002417B8: sw          $zero, 0x38($s1)
    MEM_W(0X38, ctx->r17) = 0;
    // 0x002417BC: sw          $zero, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = 0;
    // 0x002417C0: sw          $zero, 0x40($s1)
    MEM_W(0X40, ctx->r17) = 0;
    // 0x002417C4: sw          $zero, 0x44($s1)
    MEM_W(0X44, ctx->r17) = 0;
    // 0x002417C8: j           L_0024180C
    // 0x002417CC: sw          $zero, 0x48($s1)
    MEM_W(0X48, ctx->r17) = 0;
        goto L_0024180C;
    // 0x002417CC: sw          $zero, 0x48($s1)
    MEM_W(0X48, ctx->r17) = 0;
L_002417D0:
    // 0x002417D0: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x002417D4: lw          $v0, 0x1ADC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1ADC);
    // 0x002417D8: sw          $zero, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = 0;
    // 0x002417DC: sw          $zero, 0x40($s1)
    MEM_W(0X40, ctx->r17) = 0;
    // 0x002417E0: sw          $zero, 0x44($s1)
    MEM_W(0X44, ctx->r17) = 0;
    // 0x002417E4: sw          $zero, 0x48($s1)
    MEM_W(0X48, ctx->r17) = 0;
    // 0x002417E8: addiu       $v1, $v0, 0xA0
    ctx->r3 = ADD32(ctx->r2, 0XA0);
    // 0x002417EC: sw          $v1, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->r3;
    // 0x002417F0: addiu       $v1, $v0, 0x9C
    ctx->r3 = ADD32(ctx->r2, 0X9C);
    // 0x002417F4: sw          $v1, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r3;
    // 0x002417F8: j           L_0024180C
    // 0x002417FC: sw          $s4, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = ctx->r20;
        goto L_0024180C;
    // 0x002417FC: sw          $s4, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = ctx->r20;
L_00241800:
    // 0x00241800: slti        $v0, $s6, 0x64
    ctx->r2 = SIGNED(ctx->r22) < 0X64 ? 1 : 0;
    // 0x00241804: bne         $v0, $zero, L_002410FC
    if (ctx->r2 != 0) {
        // 0x00241808: sw          $s0, 0x0($s2)
        MEM_W(0X0, ctx->r18) = ctx->r16;
            goto L_002410FC;
    }
    // 0x00241808: sw          $s0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r16;
L_0024180C:
    // 0x0024180C: lw          $ra, 0xD4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XD4);
    // 0x00241810: lw          $fp, 0xD0($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XD0);
    // 0x00241814: lw          $s7, 0xCC($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XCC);
    // 0x00241818: lw          $s6, 0xC8($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XC8);
    // 0x0024181C: lw          $s5, 0xC4($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XC4);
    // 0x00241820: lw          $s4, 0xC0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XC0);
    // 0x00241824: lw          $s3, 0xBC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XBC);
    // 0x00241828: lw          $s2, 0xB8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XB8);
    // 0x0024182C: lw          $s1, 0xB4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XB4);
    // 0x00241830: lw          $s0, 0xB0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XB0);
    // 0x00241834: ldc1        $f25, 0x100($sp)
    CHECK_FR(ctx, 25);
    ctx->f25.u64 = LD(ctx->r29, 0X100);
    // 0x00241838: ldc1        $f24, 0xF8($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0XF8);
    // 0x0024183C: ldc1        $f23, 0xF0($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0XF0);
    // 0x00241840: ldc1        $f22, 0xE8($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0XE8);
    // 0x00241844: ldc1        $f21, 0xE0($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0XE0);
    // 0x00241848: ldc1        $f20, 0xD8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XD8);
    // 0x0024184C: jr          $ra
    // 0x00241850: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
    return;
    // 0x00241850: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
;}
RECOMP_FUNC void entry_0028A020(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028A020: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0028A024: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0028A028: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0028A02C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x0028A030: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0028A034: addiu       $a0, $s1, 0x40
    ctx->r4 = ADD32(ctx->r17, 0X40);
L_0028A038:
    // 0x0028A038: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
L_0028A03C:
    // 0x0028A03C: jal         0x0029B6F0
    // 0x0028A040: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x0028A040: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x0028A044: lw          $v1, 0x10($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X10);
    // 0x0028A048: addiu       $v0, $zero, 0x29B
    ctx->r2 = ADD32(0, 0X29B);
    // 0x0028A04C: beq         $v1, $v0, L_0028A0E4
    if (ctx->r3 == ctx->r2) {
        // 0x0028A050: slti        $v0, $v1, 0x29C
        ctx->r2 = SIGNED(ctx->r3) < 0X29C ? 1 : 0;
            goto L_0028A0E4;
    }
    // 0x0028A050: slti        $v0, $v1, 0x29C
    ctx->r2 = SIGNED(ctx->r3) < 0X29C ? 1 : 0;
    // 0x0028A054: beq         $v0, $zero, L_0028A074
    if (ctx->r2 == 0) {
        // 0x0028A058: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_0028A074;
    }
    // 0x0028A058: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x0028A05C: beq         $v1, $v0, L_0028A16C
    if (ctx->r3 == ctx->r2) {
        // 0x0028A060: addiu       $v0, $zero, 0x29A
        ctx->r2 = ADD32(0, 0X29A);
            goto L_0028A16C;
    }
    // 0x0028A060: addiu       $v0, $zero, 0x29A
    ctx->r2 = ADD32(0, 0X29A);
    // 0x0028A064: beq         $v1, $v0, L_0028A090
    if (ctx->r3 == ctx->r2) {
        // 0x0028A068: addiu       $a0, $s1, 0x40
        ctx->r4 = ADD32(ctx->r17, 0X40);
            goto L_0028A090;
    }
    // 0x0028A068: addiu       $a0, $s1, 0x40
    ctx->r4 = ADD32(ctx->r17, 0X40);
    // 0x0028A06C: j           L_0028A03C
    // 0x0028A070: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
        goto L_0028A03C;
    // 0x0028A070: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
L_0028A074:
    // 0x0028A074: addiu       $v0, $zero, 0x29C
    ctx->r2 = ADD32(0, 0X29C);
    // 0x0028A078: beq         $v1, $v0, L_0028A0F4
    if (ctx->r3 == ctx->r2) {
        // 0x0028A07C: addiu       $v0, $zero, 0x29D
        ctx->r2 = ADD32(0, 0X29D);
            goto L_0028A0F4;
    }
    // 0x0028A07C: addiu       $v0, $zero, 0x29D
    ctx->r2 = ADD32(0, 0X29D);
    // 0x0028A080: beq         $v1, $v0, L_0028A104
    if (ctx->r3 == ctx->r2) {
        // 0x0028A084: addiu       $a0, $s1, 0x40
        ctx->r4 = ADD32(ctx->r17, 0X40);
            goto L_0028A104;
    }
    // 0x0028A084: addiu       $a0, $s1, 0x40
    ctx->r4 = ADD32(ctx->r17, 0X40);
    // 0x0028A088: j           L_0028A03C
    // 0x0028A08C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
        goto L_0028A03C;
    // 0x0028A08C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
L_0028A090:
    // 0x0028A090: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0028A094: lw          $v0, 0x6E58($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6E58);
    // 0x0028A098: beq         $v0, $zero, L_0028A0CC
    if (ctx->r2 == 0) {
        // 0x0028A09C: nop
    
            goto L_0028A0CC;
    }
    // 0x0028A09C: nop

    // 0x0028A0A0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0028A0A4: lw          $v0, 0x6E5C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6E5C);
    // 0x0028A0A8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0028A0AC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028A0B0: sw          $v0, 0x6E5C($at)
    MEM_W(0X6E5C, ctx->r1) = ctx->r2;
    // 0x0028A0B4: bgtz        $v0, L_0028A0CC
    if (SIGNED(ctx->r2) > 0) {
        // 0x0028A0B8: nop
    
            goto L_0028A0CC;
    }
    // 0x0028A0B8: nop

    // 0x0028A0BC: jal         0x0029A580
    // 0x0028A0C0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_0029A580(rdram, ctx);
        goto after_1;
    // 0x0028A0C0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
L_0028A0C4:
    // 0x0028A0C4: j           L_0028A0C4
    pause_self(rdram);
    // 0x0028A0C8: nop

L_0028A0CC:
    // 0x0028A0CC: jal         0x0028A17C
    // 0x0028A0D0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0028A17C(rdram, ctx);
        goto after_2;
    // 0x0028A0D0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x0028A0D4: jal         0x0042454C
    // 0x0028A0D8: nop

    func_0042454C(rdram, ctx);
        goto after_3;
    // 0x0028A0D8: nop

    after_3:
    // 0x0028A0DC: j           L_0028A038
    // 0x0028A0E0: addiu       $a0, $s1, 0x40
    ctx->r4 = ADD32(ctx->r17, 0X40);
        goto L_0028A038;
    // 0x0028A0E0: addiu       $a0, $s1, 0x40
    ctx->r4 = ADD32(ctx->r17, 0X40);
L_0028A0E4:
    // 0x0028A0E4: jal         0x0028A43C
    // 0x0028A0E8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0028A43C(rdram, ctx);
        goto after_4;
    // 0x0028A0E8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x0028A0EC: j           L_0028A038
    // 0x0028A0F0: addiu       $a0, $s1, 0x40
    ctx->r4 = ADD32(ctx->r17, 0X40);
        goto L_0028A038;
    // 0x0028A0F0: addiu       $a0, $s1, 0x40
    ctx->r4 = ADD32(ctx->r17, 0X40);
L_0028A0F4:
    // 0x0028A0F4: jal         0x0028A914
    // 0x0028A0F8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0028A914(rdram, ctx);
        goto after_5;
    // 0x0028A0F8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x0028A0FC: j           L_0028A038
    // 0x0028A100: addiu       $a0, $s1, 0x40
    ctx->r4 = ADD32(ctx->r17, 0X40);
        goto L_0028A038;
    // 0x0028A100: addiu       $a0, $s1, 0x40
    ctx->r4 = ADD32(ctx->r17, 0X40);
L_0028A104:
    // 0x0028A104: jal         0x00275A08
    // 0x0028A108: nop

    func_00275A08(rdram, ctx);
        goto after_6;
    // 0x0028A108: nop

    after_6:
    // 0x0028A10C: jal         0x00275904
    // 0x0028A110: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_00275904(rdram, ctx);
        goto after_7;
    // 0x0028A110: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_7:
    // 0x0028A114: jal         0x00275F7C
    // 0x0028A118: nop

    func_00275F7C(rdram, ctx);
        goto after_8;
    // 0x0028A118: nop

    after_8:
    // 0x0028A11C: jal         0x00275EFC
    // 0x0028A120: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_00275EFC(rdram, ctx);
        goto after_9;
    // 0x0028A120: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_9:
    // 0x0028A124: lw          $s0, 0x2E0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X2E0);
    // 0x0028A128: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0028A12C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028A130: sw          $v0, 0x6E58($at)
    MEM_W(0X6E58, ctx->r1) = ctx->r2;
    // 0x0028A134: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x0028A138: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028A13C: sw          $v0, 0x6E5C($at)
    MEM_W(0X6E5C, ctx->r1) = ctx->r2;
    // 0x0028A140: beq         $s0, $zero, L_0028A038
    if (ctx->r16 == 0) {
        // 0x0028A144: addiu       $a0, $s1, 0x40
        ctx->r4 = ADD32(ctx->r17, 0X40);
            goto L_0028A038;
    }
    // 0x0028A144: addiu       $a0, $s1, 0x40
    ctx->r4 = ADD32(ctx->r17, 0X40);
    // 0x0028A148: addiu       $a1, $s1, 0x20
    ctx->r5 = ADD32(ctx->r17, 0X20);
L_0028A14C:
    // 0x0028A14C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x0028A150: jal         0x0029B820
    // 0x0028A154: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    osSendMesg_recomp(rdram, ctx);
        goto after_10;
    // 0x0028A154: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_10:
    // 0x0028A158: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x0028A15C: bne         $s0, $zero, L_0028A14C
    if (ctx->r16 != 0) {
        // 0x0028A160: addiu       $a1, $s1, 0x20
        ctx->r5 = ADD32(ctx->r17, 0X20);
            goto L_0028A14C;
    }
    // 0x0028A160: addiu       $a1, $s1, 0x20
    ctx->r5 = ADD32(ctx->r17, 0X20);
    // 0x0028A164: j           L_0028A038
    // 0x0028A168: addiu       $a0, $s1, 0x40
    ctx->r4 = ADD32(ctx->r17, 0X40);
        goto L_0028A038;
    // 0x0028A168: addiu       $a0, $s1, 0x40
    ctx->r4 = ADD32(ctx->r17, 0X40);
L_0028A16C:
    // 0x0028A16C: jal         0x0028B2AC
    // 0x0028A170: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0028B2AC(rdram, ctx);
        goto after_11;
    // 0x0028A170: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_11:
    // 0x0028A174: j           L_0028A038
    // 0x0028A178: addiu       $a0, $s1, 0x40
    ctx->r4 = ADD32(ctx->r17, 0X40);
        goto L_0028A038;
    // 0x0028A178: addiu       $a0, $s1, 0x40
    ctx->r4 = ADD32(ctx->r17, 0X40);
    // turok2: reconnected split function: a stray ELF symbol at 0x0028A17C ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0028A17C(rdram, ctx);
;}
RECOMP_FUNC void entry_002010C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002010C0: addi        $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x002010C4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x002010C8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x002010CC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x002010D0: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x002010D4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x002010D8: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x002010DC: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x002010E0: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x002010E4: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x002010E8: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x002010EC: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x002010F0: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x002010F4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x002010F8: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x002010FC: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x00201100: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x00201104: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x00201108: lui         $t4, 0x20
    ctx->r12 = S32(0X20 << 16);
    // 0x0020110C: addiu       $t4, $t4, 0x1168
    ctx->r12 = ADD32(ctx->r12, 0X1168);
    // 0x00201110: nop

    // 0x00201114: jalr        $t4
    // 0x00201118: nop

    LOOKUP_FUNC(ctx->r12)(rdram, ctx);
        goto after_0;
    // 0x00201118: nop

    after_0:
    // 0x0020111C: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    // 0x00201120: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x00201124: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    // 0x00201128: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x0020112C: lw          $t0, 0x10($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X10);
    // 0x00201130: lw          $t1, 0x14($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X14);
    // 0x00201134: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x00201138: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x0020113C: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x00201140: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x00201144: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x00201148: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x0020114C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x00201150: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x00201154: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x00201158: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x0020115C: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x00201160: addi        $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x00201164: jr          $ra
    // 0x00201168: addu        $t6, $a0, $zero
    ctx->r14 = ADD32(ctx->r4, 0);
    return;
    // 0x00201168: addu        $t6, $a0, $zero
    ctx->r14 = ADD32(ctx->r4, 0);
    // 0x0020116C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00201170: addiu       $t5, $zero, 0x0
    ctx->r13 = ADD32(0, 0X0);
    // 0x00201174: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x00201178: addiu       $t3, $t3, 0x1CB0
    ctx->r11 = ADD32(ctx->r11, 0X1CB0);
    // 0x0020117C: addiu       $t6, $t6, 0x4
    ctx->r14 = ADD32(ctx->r14, 0X4);
    // 0x00201180: lbu         $t5, 0x0($t6)
    ctx->r13 = MEM_BU(ctx->r14, 0X0);
    // 0x00201184: lbu         $t4, 0x1($t6)
    ctx->r12 = MEM_BU(ctx->r14, 0X1);
    // 0x00201188: lbu         $s2, 0x2($t6)
    ctx->r18 = MEM_BU(ctx->r14, 0X2);
    // 0x0020118C: lbu         $t7, 0x3($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X3);
    // 0x00201190: sll         $t5, $t5, 24
    ctx->r13 = S32(ctx->r13 << 24);
    // 0x00201194: sll         $t4, $t4, 16
    ctx->r12 = S32(ctx->r12 << 16);
    // 0x00201198: sll         $s2, $s2, 8
    ctx->r18 = S32(ctx->r18 << 8);
    // 0x0020119C: or          $t5, $t5, $t4
    ctx->r13 = ctx->r13 | ctx->r12;
    // 0x002011A0: or          $t5, $t5, $s2
    ctx->r13 = ctx->r13 | ctx->r18;
    // 0x002011A4: or          $t5, $t5, $t7
    ctx->r13 = ctx->r13 | ctx->r15;
    // 0x002011A8: addiu       $t6, $t6, 0x4
    ctx->r14 = ADD32(ctx->r14, 0X4);
    // 0x002011AC: sw          $t5, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r13;
    // 0x002011B0: addu        $v1, $t6, $zero
    ctx->r3 = ADD32(ctx->r14, 0);
    // 0x002011B4: addi        $v1, $v1, 0xA
    ctx->r3 = ADD32(ctx->r3, 0XA);
    // 0x002011B8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x002011BC: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x002011C0: addu        $a2, $a2, $t5
    ctx->r6 = ADD32(ctx->r6, ctx->r13);
    // 0x002011C4: lbu         $t5, 0x0($t6)
    ctx->r13 = MEM_BU(ctx->r14, 0X0);
    // 0x002011C8: lbu         $t4, 0x1($t6)
    ctx->r12 = MEM_BU(ctx->r14, 0X1);
    // 0x002011CC: lbu         $s2, 0x2($t6)
    ctx->r18 = MEM_BU(ctx->r14, 0X2);
    // 0x002011D0: lbu         $t7, 0x3($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X3);
    // 0x002011D4: sll         $t5, $t5, 24
    ctx->r13 = S32(ctx->r13 << 24);
    // 0x002011D8: sll         $t4, $t4, 16
    ctx->r12 = S32(ctx->r12 << 16);
    // 0x002011DC: sll         $s2, $s2, 8
    ctx->r18 = S32(ctx->r18 << 8);
    // 0x002011E0: or          $t5, $t5, $t4
    ctx->r13 = ctx->r13 | ctx->r12;
    // 0x002011E4: or          $t5, $t5, $s2
    ctx->r13 = ctx->r13 | ctx->r18;
    // 0x002011E8: or          $t5, $t5, $t7
    ctx->r13 = ctx->r13 | ctx->r15;
    // 0x002011EC: addiu       $t6, $t6, 0x4
    ctx->r14 = ADD32(ctx->r14, 0X4);
    // 0x002011F0: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x002011F4: add         $a0, $a0, $t5
    ctx->r4 = ADD32(ctx->r4, ctx->r13);
    // 0x002011F8: addi        $t3, $t3, -0x2
    ctx->r11 = ADD32(ctx->r11, -0X2);
    // 0x002011FC: sh          $zero, 0x0($t3)
    MEM_H(0X0, ctx->r11) = 0;
    // 0x00201200: lui         $t2, 0xFFFF
    ctx->r10 = S32(0XFFFF << 16);
    // 0x00201204: ori         $t2, $t2, 0xFF00
    ctx->r10 = ctx->r10 | 0XFF00;
    // 0x00201208: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x0020120C: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    // 0x00201210: addi        $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00201214: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x00201218: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x0020121C: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x00201220: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x00201224: j           L_00201580
    // 0x00201228: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
        goto L_00201580;
    // 0x00201228: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
    // 0x0020122C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00201230: jr          $ra
    // 0x00201234: nop

    return;
    // 0x00201234: nop

    // 0x00201238: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    // 0x0020123C: jr          $ra
    // 0x00201240: nop

    return;
    // 0x00201240: nop

L_00201244:
    // 0x00201244: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    // 0x00201248: addi        $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0020124C: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x00201250: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x00201254: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x00201258: j           L_00201340
    // 0x0020125C: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
        goto L_00201340;
    // 0x0020125C: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
L_00201260:
    // 0x00201260: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    // 0x00201264: addi        $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00201268: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x0020126C: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x00201270: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x00201274: j           L_002013B0
    // 0x00201278: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
        goto L_002013B0;
    // 0x00201278: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
L_0020127C:
    // 0x0020127C: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    // 0x00201280: addi        $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00201284: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x00201288: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x0020128C: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x00201290: j           L_002013D0
    // 0x00201294: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
        goto L_002013D0;
    // 0x00201294: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
L_00201298:
    // 0x00201298: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    // 0x0020129C: addi        $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x002012A0: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x002012A4: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x002012A8: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x002012AC: j           L_002013F4
    // 0x002012B0: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
        goto L_002013F4;
    // 0x002012B0: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
L_002012B4:
    // 0x002012B4: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    // 0x002012B8: addi        $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x002012BC: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x002012C0: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x002012C4: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x002012C8: j           L_00201428
    // 0x002012CC: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
        goto L_00201428;
    // 0x002012CC: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
L_002012D0:
    // 0x002012D0: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    // 0x002012D4: addi        $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x002012D8: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x002012DC: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x002012E0: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x002012E4: j           L_00201448
    // 0x002012E8: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
        goto L_00201448;
    // 0x002012E8: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
L_002012EC:
    // 0x002012EC: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    // 0x002012F0: addi        $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x002012F4: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x002012F8: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x002012FC: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x00201300: j           L_00201468
    // 0x00201304: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
        goto L_00201468;
    // 0x00201304: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
L_00201308:
    // 0x00201308: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    // 0x0020130C: addi        $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00201310: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x00201314: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x00201318: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x0020131C: j           L_00201494
    // 0x00201320: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
        goto L_00201494;
    // 0x00201320: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
L_00201324:
    // 0x00201324: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
L_00201328:
    // 0x00201328: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x0020132C: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x00201330: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
    // 0x00201334: andi        $t2, $t2, 0xFF
    ctx->r10 = ctx->r10 & 0XFF;
    // 0x00201338: beq         $zero, $t2, L_00201244
    if (0 == ctx->r10) {
        // 0x0020133C: nop
    
            goto L_00201244;
    }
    // 0x0020133C: nop

L_00201340:
    // 0x00201340: addu        $t1, $t1, $t1
    ctx->r9 = ADD32(ctx->r9, ctx->r9);
    // 0x00201344: addu        $t1, $t1, $t7
    ctx->r9 = ADD32(ctx->r9, ctx->r15);
    // 0x00201348: srl         $t7, $t1, 16
    ctx->r15 = S32(U32(ctx->r9) >> 16);
    // 0x0020134C: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
    // 0x00201350: addi        $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x00201354: bgez        $t0, L_00201328
    if (SIGNED(ctx->r8) >= 0) {
        // 0x00201358: nop
    
            goto L_00201328;
    }
    // 0x00201358: nop

    // 0x0020135C: addi        $t1, $t1, 0x2
    ctx->r9 = ADD32(ctx->r9, 0X2);
L_00201360:
    // 0x00201360: lbu         $t4, 0x0($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X0);
    // 0x00201364: lbu         $s2, 0x1($v1)
    ctx->r18 = MEM_BU(ctx->r3, 0X1);
    // 0x00201368: sb          $t4, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r12;
    // 0x0020136C: sb          $s2, 0x1($a1)
    MEM_B(0X1, ctx->r5) = ctx->r18;
    // 0x00201370: lbu         $t4, 0x2($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X2);
    // 0x00201374: lbu         $s2, 0x3($v1)
    ctx->r18 = MEM_BU(ctx->r3, 0X3);
    // 0x00201378: sb          $t4, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r12;
    // 0x0020137C: sb          $s2, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r18;
    // 0x00201380: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x00201384: addi        $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
    // 0x00201388: bgez        $t1, L_00201360
    if (SIGNED(ctx->r9) >= 0) {
        // 0x0020138C: addi        $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_00201360;
    }
    // 0x0020138C: addi        $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x00201390: j           L_00201580
    // 0x00201394: nop

        goto L_00201580;
    // 0x00201394: nop

L_00201398:
    // 0x00201398: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x0020139C: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x002013A0: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
    // 0x002013A4: andi        $t2, $t2, 0xFF
    ctx->r10 = ctx->r10 & 0XFF;
    // 0x002013A8: beq         $zero, $t2, L_00201260
    if (0 == ctx->r10) {
        // 0x002013AC: nop
    
            goto L_00201260;
    }
    // 0x002013AC: nop

L_002013B0:
    // 0x002013B0: addu        $t0, $t0, $t0
    ctx->r8 = ADD32(ctx->r8, ctx->r8);
    // 0x002013B4: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x002013B8: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x002013BC: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x002013C0: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
    // 0x002013C4: andi        $t2, $t2, 0xFF
    ctx->r10 = ctx->r10 & 0XFF;
    // 0x002013C8: beq         $zero, $t2, L_0020127C
    if (0 == ctx->r10) {
        // 0x002013CC: nop
    
            goto L_0020127C;
    }
    // 0x002013CC: nop

L_002013D0:
    // 0x002013D0: beq         $zero, $t7, L_00201410
    if (0 == ctx->r15) {
        // 0x002013D4: nop
    
            goto L_00201410;
    }
    // 0x002013D4: nop

    // 0x002013D8: addi        $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x002013DC: add         $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x002013E0: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x002013E4: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
    // 0x002013E8: andi        $t2, $t2, 0xFF
    ctx->r10 = ctx->r10 & 0XFF;
    // 0x002013EC: beq         $zero, $t2, L_00201298
    if (0 == ctx->r10) {
        // 0x002013F0: nop
    
            goto L_00201298;
    }
    // 0x002013F0: nop

L_002013F4:
    // 0x002013F4: addu        $t0, $t0, $t0
    ctx->r8 = ADD32(ctx->r8, ctx->r8);
    // 0x002013F8: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x002013FC: srl         $t7, $t0, 16
    ctx->r15 = S32(U32(ctx->r8) >> 16);
    // 0x00201400: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
    // 0x00201404: addi        $t4, $t0, -0x9
    ctx->r12 = ADD32(ctx->r8, -0X9);
    // 0x00201408: beq         $zero, $t4, L_00201324
    if (0 == ctx->r12) {
        // 0x0020140C: nop
    
            goto L_00201324;
    }
    // 0x0020140C: nop

L_00201410:
    // 0x00201410: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x00201414: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x00201418: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
    // 0x0020141C: andi        $t2, $t2, 0xFF
    ctx->r10 = ctx->r10 & 0XFF;
    // 0x00201420: beq         $zero, $t2, L_002012B4
    if (0 == ctx->r10) {
        // 0x00201424: nop
    
            goto L_002012B4;
    }
    // 0x00201424: nop

L_00201428:
    // 0x00201428: beq         $zero, $t7, L_002014B4
    if (0 == ctx->r15) {
        // 0x0020142C: nop
    
            goto L_002014B4;
    }
    // 0x0020142C: nop

    // 0x00201430: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x00201434: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x00201438: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
    // 0x0020143C: andi        $t2, $t2, 0xFF
    ctx->r10 = ctx->r10 & 0XFF;
    // 0x00201440: beq         $zero, $t2, L_002012D0
    if (0 == ctx->r10) {
        // 0x00201444: nop
    
            goto L_002012D0;
    }
    // 0x00201444: nop

L_00201448:
    // 0x00201448: addu        $t1, $t1, $t1
    ctx->r9 = ADD32(ctx->r9, ctx->r9);
    // 0x0020144C: addu        $t1, $t1, $t7
    ctx->r9 = ADD32(ctx->r9, ctx->r15);
    // 0x00201450: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x00201454: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x00201458: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
    // 0x0020145C: andi        $t2, $t2, 0xFF
    ctx->r10 = ctx->r10 & 0XFF;
    // 0x00201460: beq         $zero, $t2, L_002012EC
    if (0 == ctx->r10) {
        // 0x00201464: nop
    
            goto L_002012EC;
    }
    // 0x00201464: nop

L_00201468:
    // 0x00201468: bne         $zero, $t7, L_0020164C
    if (0 != ctx->r15) {
        // 0x0020146C: nop
    
            goto L_0020164C;
    }
    // 0x0020146C: nop

    // 0x00201470: bne         $zero, $t1, L_002014A4
    if (0 != ctx->r9) {
        // 0x00201474: nop
    
            goto L_002014A4;
    }
    // 0x00201474: nop

    // 0x00201478: addi        $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
L_0020147C:
    // 0x0020147C: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x00201480: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x00201484: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
    // 0x00201488: andi        $t2, $t2, 0xFF
    ctx->r10 = ctx->r10 & 0XFF;
    // 0x0020148C: beq         $zero, $t2, L_00201308
    if (0 == ctx->r10) {
        // 0x00201490: nop
    
            goto L_00201308;
    }
    // 0x00201490: nop

L_00201494:
    // 0x00201494: addu        $t1, $t1, $t1
    ctx->r9 = ADD32(ctx->r9, ctx->r9);
    // 0x00201498: addu        $t1, $t1, $t7
    ctx->r9 = ADD32(ctx->r9, ctx->r15);
    // 0x0020149C: srl         $t7, $t1, 16
    ctx->r15 = S32(U32(ctx->r9) >> 16);
    // 0x002014A0: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
L_002014A4:
    // 0x002014A4: sll         $t4, $t1, 8
    ctx->r12 = S32(ctx->r9 << 8);
    // 0x002014A8: andi        $t4, $t4, 0xFF00
    ctx->r12 = ctx->r12 & 0XFF00;
    // 0x002014AC: srl         $t1, $t1, 8
    ctx->r9 = S32(U32(ctx->r9) >> 8);
    // 0x002014B0: or          $t1, $t1, $t4
    ctx->r9 = ctx->r9 | ctx->r12;
L_002014B4:
    // 0x002014B4: andi        $s3, $t1, 0xFF00
    ctx->r19 = ctx->r9 & 0XFF00;
    // 0x002014B8: lbu         $t1, 0x0($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X0);
    // 0x002014BC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x002014C0: or          $t1, $t1, $s3
    ctx->r9 = ctx->r9 | ctx->r19;
    // 0x002014C4: addu        $t6, $a1, $zero
    ctx->r14 = ADD32(ctx->r5, 0);
    // 0x002014C8: sub         $t6, $t6, $t1
    ctx->r14 = SUB32(ctx->r14, ctx->r9);
    // 0x002014CC: addi        $t6, $t6, -0x1
    ctx->r14 = ADD32(ctx->r14, -0X1);
    // 0x002014D0: andi        $t7, $t0, 0x1
    ctx->r15 = ctx->r8 & 0X1;
    // 0x002014D4: srl         $t0, $t0, 1
    ctx->r8 = S32(U32(ctx->r8) >> 1);
    // 0x002014D8: beq         $zero, $t7, L_002014F0
    if (0 == ctx->r15) {
        // 0x002014DC: nop
    
            goto L_002014F0;
    }
    // 0x002014DC: nop

    // 0x002014E0: lbu         $t4, 0x0($t6)
    ctx->r12 = MEM_BU(ctx->r14, 0X0);
    // 0x002014E4: addi        $t6, $t6, 0x1
    ctx->r14 = ADD32(ctx->r14, 0X1);
    // 0x002014E8: sb          $t4, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r12;
    // 0x002014EC: addi        $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_002014F0:
    // 0x002014F0: addi        $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x002014F4: bne         $zero, $t1, L_00201528
    if (0 != ctx->r9) {
        // 0x002014F8: nop
    
            goto L_00201528;
    }
    // 0x002014F8: nop

    // 0x002014FC: andi        $s3, $t1, 0xFF00
    ctx->r19 = ctx->r9 & 0XFF00;
    // 0x00201500: lbu         $t1, 0x0($t6)
    ctx->r9 = MEM_BU(ctx->r14, 0X0);
    // 0x00201504: nop

    // 0x00201508: or          $t1, $t1, $s3
    ctx->r9 = ctx->r9 | ctx->r19;
L_0020150C:
    // 0x0020150C: sb          $t1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r9;
    // 0x00201510: addi        $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x00201514: sb          $t1, 0x1($a1)
    MEM_B(0X1, ctx->r5) = ctx->r9;
    // 0x00201518: bgez        $t0, L_0020150C
    if (SIGNED(ctx->r8) >= 0) {
        // 0x0020151C: addi        $a1, $a1, 0x2
        ctx->r5 = ADD32(ctx->r5, 0X2);
            goto L_0020150C;
    }
    // 0x0020151C: addi        $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x00201520: j           L_00201580
    // 0x00201524: nop

        goto L_00201580;
    // 0x00201524: nop

L_00201528:
    // 0x00201528: lbu         $s2, 0x1($t6)
    ctx->r18 = MEM_BU(ctx->r14, 0X1);
    // 0x0020152C: lbu         $t4, 0x0($t6)
    ctx->r12 = MEM_BU(ctx->r14, 0X0);
    // 0x00201530: sb          $s2, 0x1($a1)
    MEM_B(0X1, ctx->r5) = ctx->r18;
    // 0x00201534: sb          $t4, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r12;
    // 0x00201538: addi        $t6, $t6, 0x2
    ctx->r14 = ADD32(ctx->r14, 0X2);
    // 0x0020153C: addi        $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x00201540: bgez        $t0, L_00201528
    if (SIGNED(ctx->r8) >= 0) {
        // 0x00201544: addi        $a1, $a1, 0x2
        ctx->r5 = ADD32(ctx->r5, 0X2);
            goto L_00201528;
    }
    // 0x00201544: addi        $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x00201548: j           L_00201580
    // 0x0020154C: nop

        goto L_00201580;
    // 0x0020154C: nop

L_00201550:
    // 0x00201550: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    // 0x00201554: addi        $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00201558: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x0020155C: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x00201560: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x00201564: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
    // 0x00201568: bne         $zero, $t7, L_002015C4
    if (0 != ctx->r15) {
        // 0x0020156C: nop
    
            goto L_002015C4;
    }
    // 0x0020156C: nop

L_00201570:
    // 0x00201570: lbu         $t4, 0x0($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X0);
    // 0x00201574: addi        $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00201578: sb          $t4, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r12;
    // 0x0020157C: addi        $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_00201580:
    // 0x00201580: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x00201584: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x00201588: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
    // 0x0020158C: bne         $zero, $t7, L_002015B8
    if (0 != ctx->r15) {
        // 0x00201590: nop
    
            goto L_002015B8;
    }
    // 0x00201590: nop

    // 0x00201594: lbu         $t4, 0x0($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X0);
    // 0x00201598: addi        $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0020159C: sb          $t4, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r12;
    // 0x002015A0: addi        $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x002015A4: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x002015A8: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x002015AC: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
    // 0x002015B0: beq         $zero, $t7, L_00201570
    if (0 == ctx->r15) {
        // 0x002015B4: nop
    
            goto L_00201570;
    }
    // 0x002015B4: nop

L_002015B8:
    // 0x002015B8: andi        $t2, $t2, 0xFF
    ctx->r10 = ctx->r10 & 0XFF;
    // 0x002015BC: beq         $zero, $t2, L_00201550
    if (0 == ctx->r10) {
        // 0x002015C0: nop
    
            goto L_00201550;
    }
    // 0x002015C0: nop

L_002015C4:
    // 0x002015C4: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x002015C8: addiu       $t1, $zero, 0x0
    ctx->r9 = ADD32(0, 0X0);
    // 0x002015CC: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x002015D0: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x002015D4: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
    // 0x002015D8: andi        $t2, $t2, 0xFF
    ctx->r10 = ctx->r10 & 0XFF;
    // 0x002015DC: beq         $zero, $t2, L_002016A0
    if (0 == ctx->r10) {
        // 0x002015E0: nop
    
            goto L_002016A0;
    }
    // 0x002015E0: nop

L_002015E4:
    // 0x002015E4: beq         $zero, $t7, L_00201398
    if (0 == ctx->r15) {
        // 0x002015E8: nop
    
            goto L_00201398;
    }
    // 0x002015E8: nop

    // 0x002015EC: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x002015F0: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x002015F4: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
    // 0x002015F8: andi        $t2, $t2, 0xFF
    ctx->r10 = ctx->r10 & 0XFF;
    // 0x002015FC: beq         $zero, $t2, L_002016BC
    if (0 == ctx->r10) {
        // 0x00201600: nop
    
            goto L_002016BC;
    }
    // 0x00201600: nop

L_00201604:
    // 0x00201604: beq         $zero, $t7, L_002014B4
    if (0 == ctx->r15) {
        // 0x00201608: nop
    
            goto L_002014B4;
    }
    // 0x00201608: nop

    // 0x0020160C: addi        $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x00201610: add         $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x00201614: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x00201618: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
    // 0x0020161C: andi        $t2, $t2, 0xFF
    ctx->r10 = ctx->r10 & 0XFF;
    // 0x00201620: beq         $zero, $t2, L_002016D8
    if (0 == ctx->r10) {
        // 0x00201624: nop
    
            goto L_002016D8;
    }
    // 0x00201624: nop

L_00201628:
    // 0x00201628: beq         $zero, $t7, L_00201410
    if (0 == ctx->r15) {
        // 0x0020162C: nop
    
            goto L_00201410;
    }
    // 0x0020162C: nop

    // 0x00201630: lbu         $t0, 0x0($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X0);
    // 0x00201634: addi        $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00201638: nop

    // 0x0020163C: beq         $zero, $t0, L_0020172C
    if (0 == ctx->r8) {
        // 0x00201640: addi        $t0, $t0, 0x8
        ctx->r8 = ADD32(ctx->r8, 0X8);
            goto L_0020172C;
    }
    // 0x00201640: addi        $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x00201644: j           L_00201410
    // 0x00201648: nop

        goto L_00201410;
    // 0x00201648: nop

L_0020164C:
    // 0x0020164C: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x00201650: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x00201654: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
    // 0x00201658: andi        $t2, $t2, 0xFF
    ctx->r10 = ctx->r10 & 0XFF;
    // 0x0020165C: beq         $zero, $t2, L_002016F4
    if (0 == ctx->r10) {
        // 0x00201660: nop
    
            goto L_002016F4;
    }
    // 0x00201660: nop

L_00201664:
    // 0x00201664: addu        $t1, $t1, $t1
    ctx->r9 = ADD32(ctx->r9, ctx->r9);
    // 0x00201668: addu        $t1, $t1, $t7
    ctx->r9 = ADD32(ctx->r9, ctx->r15);
    // 0x0020166C: srl         $t7, $t1, 16
    ctx->r15 = S32(U32(ctx->r9) >> 16);
    // 0x00201670: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
    // 0x00201674: ori         $t1, $t1, 0x4
    ctx->r9 = ctx->r9 | 0X4;
    // 0x00201678: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x0020167C: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x00201680: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
    // 0x00201684: andi        $t2, $t2, 0xFF
    ctx->r10 = ctx->r10 & 0XFF;
    // 0x00201688: beq         $zero, $t2, L_00201710
    if (0 == ctx->r10) {
        // 0x0020168C: nop
    
            goto L_00201710;
    }
    // 0x0020168C: nop

L_00201690:
    // 0x00201690: bne         $zero, $t7, L_002014A4
    if (0 != ctx->r15) {
        // 0x00201694: nop
    
            goto L_002014A4;
    }
    // 0x00201694: nop

    // 0x00201698: j           L_0020147C
    // 0x0020169C: nop

        goto L_0020147C;
    // 0x0020169C: nop

L_002016A0:
    // 0x002016A0: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    // 0x002016A4: addi        $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x002016A8: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x002016AC: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x002016B0: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x002016B4: j           L_002015E4
    // 0x002016B8: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
        goto L_002015E4;
    // 0x002016B8: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
L_002016BC:
    // 0x002016BC: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    // 0x002016C0: addi        $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x002016C4: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x002016C8: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x002016CC: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x002016D0: j           L_00201604
    // 0x002016D4: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
        goto L_00201604;
    // 0x002016D4: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
L_002016D8:
    // 0x002016D8: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    // 0x002016DC: addi        $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x002016E0: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x002016E4: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x002016E8: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x002016EC: j           L_00201628
    // 0x002016F0: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
        goto L_00201628;
    // 0x002016F0: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
L_002016F4:
    // 0x002016F4: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    // 0x002016F8: addi        $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x002016FC: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x00201700: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x00201704: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x00201708: j           L_00201664
    // 0x0020170C: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
        goto L_00201664;
    // 0x0020170C: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
L_00201710:
    // 0x00201710: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    // 0x00201714: addi        $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00201718: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x0020171C: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x00201720: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x00201724: j           L_00201690
    // 0x00201728: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
        goto L_00201690;
    // 0x00201728: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
L_0020172C:
    // 0x0020172C: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x00201730: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x00201734: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
    // 0x00201738: andi        $t2, $t2, 0xFF
    ctx->r10 = ctx->r10 & 0XFF;
    // 0x0020173C: bne         $zero, $t2, L_0020175C
    if (0 != ctx->r10) {
        // 0x00201740: nop
    
            goto L_0020175C;
    }
    // 0x00201740: nop

    // 0x00201744: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    // 0x00201748: addi        $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0020174C: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x00201750: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x00201754: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x00201758: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
L_0020175C:
    // 0x0020175C: bne         $zero, $t7, L_00201580
    if (0 != ctx->r15) {
        // 0x00201760: nop
    
            goto L_00201580;
    }
    // 0x00201760: nop

    // 0x00201764: lhu         $t5, 0x0($t3)
    ctx->r13 = MEM_HU(ctx->r11, 0X0);
    // 0x00201768: addi        $t3, $t3, 0x2
    ctx->r11 = ADD32(ctx->r11, 0X2);
    // 0x0020176C: beq         $zero, $t5, L_00201790
    if (0 == ctx->r13) {
        // 0x00201770: nop
    
            goto L_00201790;
    }
    // 0x00201770: nop

L_00201774:
    // 0x00201774: lh          $s0, 0x0($t3)
    ctx->r16 = MEM_H(ctx->r11, 0X0);
    // 0x00201778: addi        $t3, $t3, 0x2
    ctx->r11 = ADD32(ctx->r11, 0X2);
    // 0x0020177C: sb          $s0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r16;
    // 0x00201780: addi        $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00201784: addi        $t5, $t5, -0x1
    ctx->r13 = ADD32(ctx->r13, -0X1);
    // 0x00201788: bne         $zero, $t5, L_00201774
    if (0 != ctx->r13) {
        // 0x0020178C: nop
    
            goto L_00201774;
    }
    // 0x0020178C: nop

L_00201790:
    // 0x00201790: j           L_0020179C
    // 0x00201794: nop

        goto L_0020179C;
    // 0x00201794: nop

    // 0x00201798: sw          $s0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r16;
L_0020179C:
    // 0x0020179C: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
    // 0x002017A0: jr          $ra
    // 0x002017A4: nop

    return;
    // 0x002017A4: nop

;}
RECOMP_FUNC void entry_00201168(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00201168: addu        $t6, $a0, $zero
    ctx->r14 = ADD32(ctx->r4, 0);
    // 0x0020116C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00201170: addiu       $t5, $zero, 0x0
    ctx->r13 = ADD32(0, 0X0);
    // 0x00201174: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x00201178: addiu       $t3, $t3, 0x1CB0
    ctx->r11 = ADD32(ctx->r11, 0X1CB0);
    // 0x0020117C: addiu       $t6, $t6, 0x4
    ctx->r14 = ADD32(ctx->r14, 0X4);
    // 0x00201180: lbu         $t5, 0x0($t6)
    ctx->r13 = MEM_BU(ctx->r14, 0X0);
    // 0x00201184: lbu         $t4, 0x1($t6)
    ctx->r12 = MEM_BU(ctx->r14, 0X1);
    // 0x00201188: lbu         $s2, 0x2($t6)
    ctx->r18 = MEM_BU(ctx->r14, 0X2);
    // 0x0020118C: lbu         $t7, 0x3($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X3);
    // 0x00201190: sll         $t5, $t5, 24
    ctx->r13 = S32(ctx->r13 << 24);
    // 0x00201194: sll         $t4, $t4, 16
    ctx->r12 = S32(ctx->r12 << 16);
    // 0x00201198: sll         $s2, $s2, 8
    ctx->r18 = S32(ctx->r18 << 8);
    // 0x0020119C: or          $t5, $t5, $t4
    ctx->r13 = ctx->r13 | ctx->r12;
    // 0x002011A0: or          $t5, $t5, $s2
    ctx->r13 = ctx->r13 | ctx->r18;
    // 0x002011A4: or          $t5, $t5, $t7
    ctx->r13 = ctx->r13 | ctx->r15;
    // 0x002011A8: addiu       $t6, $t6, 0x4
    ctx->r14 = ADD32(ctx->r14, 0X4);
    // 0x002011AC: sw          $t5, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r13;
    // 0x002011B0: addu        $v1, $t6, $zero
    ctx->r3 = ADD32(ctx->r14, 0);
    // 0x002011B4: addi        $v1, $v1, 0xA
    ctx->r3 = ADD32(ctx->r3, 0XA);
    // 0x002011B8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x002011BC: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x002011C0: addu        $a2, $a2, $t5
    ctx->r6 = ADD32(ctx->r6, ctx->r13);
    // 0x002011C4: lbu         $t5, 0x0($t6)
    ctx->r13 = MEM_BU(ctx->r14, 0X0);
    // 0x002011C8: lbu         $t4, 0x1($t6)
    ctx->r12 = MEM_BU(ctx->r14, 0X1);
    // 0x002011CC: lbu         $s2, 0x2($t6)
    ctx->r18 = MEM_BU(ctx->r14, 0X2);
    // 0x002011D0: lbu         $t7, 0x3($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X3);
    // 0x002011D4: sll         $t5, $t5, 24
    ctx->r13 = S32(ctx->r13 << 24);
    // 0x002011D8: sll         $t4, $t4, 16
    ctx->r12 = S32(ctx->r12 << 16);
    // 0x002011DC: sll         $s2, $s2, 8
    ctx->r18 = S32(ctx->r18 << 8);
    // 0x002011E0: or          $t5, $t5, $t4
    ctx->r13 = ctx->r13 | ctx->r12;
    // 0x002011E4: or          $t5, $t5, $s2
    ctx->r13 = ctx->r13 | ctx->r18;
    // 0x002011E8: or          $t5, $t5, $t7
    ctx->r13 = ctx->r13 | ctx->r15;
    // 0x002011EC: addiu       $t6, $t6, 0x4
    ctx->r14 = ADD32(ctx->r14, 0X4);
    // 0x002011F0: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x002011F4: add         $a0, $a0, $t5
    ctx->r4 = ADD32(ctx->r4, ctx->r13);
    // 0x002011F8: addi        $t3, $t3, -0x2
    ctx->r11 = ADD32(ctx->r11, -0X2);
    // 0x002011FC: sh          $zero, 0x0($t3)
    MEM_H(0X0, ctx->r11) = 0;
    // 0x00201200: lui         $t2, 0xFFFF
    ctx->r10 = S32(0XFFFF << 16);
    // 0x00201204: ori         $t2, $t2, 0xFF00
    ctx->r10 = ctx->r10 | 0XFF00;
    // 0x00201208: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x0020120C: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    // 0x00201210: addi        $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00201214: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x00201218: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x0020121C: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x00201220: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x00201224: j           L_00201580
    // 0x00201228: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
        goto L_00201580;
    // 0x00201228: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
    // 0x0020122C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00201230: jr          $ra
    // 0x00201234: nop

    return;
    // 0x00201234: nop

    // 0x00201238: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    // 0x0020123C: jr          $ra
    // 0x00201240: nop

    return;
    // 0x00201240: nop

L_00201244:
    // 0x00201244: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    // 0x00201248: addi        $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0020124C: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x00201250: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x00201254: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x00201258: j           L_00201340
    // 0x0020125C: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
        goto L_00201340;
    // 0x0020125C: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
L_00201260:
    // 0x00201260: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    // 0x00201264: addi        $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00201268: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x0020126C: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x00201270: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x00201274: j           L_002013B0
    // 0x00201278: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
        goto L_002013B0;
    // 0x00201278: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
L_0020127C:
    // 0x0020127C: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    // 0x00201280: addi        $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00201284: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x00201288: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x0020128C: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x00201290: j           L_002013D0
    // 0x00201294: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
        goto L_002013D0;
    // 0x00201294: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
L_00201298:
    // 0x00201298: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    // 0x0020129C: addi        $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x002012A0: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x002012A4: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x002012A8: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x002012AC: j           L_002013F4
    // 0x002012B0: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
        goto L_002013F4;
    // 0x002012B0: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
L_002012B4:
    // 0x002012B4: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    // 0x002012B8: addi        $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x002012BC: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x002012C0: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x002012C4: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x002012C8: j           L_00201428
    // 0x002012CC: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
        goto L_00201428;
    // 0x002012CC: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
L_002012D0:
    // 0x002012D0: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    // 0x002012D4: addi        $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x002012D8: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x002012DC: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x002012E0: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x002012E4: j           L_00201448
    // 0x002012E8: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
        goto L_00201448;
    // 0x002012E8: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
L_002012EC:
    // 0x002012EC: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    // 0x002012F0: addi        $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x002012F4: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x002012F8: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x002012FC: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x00201300: j           L_00201468
    // 0x00201304: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
        goto L_00201468;
    // 0x00201304: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
L_00201308:
    // 0x00201308: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    // 0x0020130C: addi        $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00201310: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x00201314: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x00201318: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x0020131C: j           L_00201494
    // 0x00201320: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
        goto L_00201494;
    // 0x00201320: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
L_00201324:
    // 0x00201324: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
L_00201328:
    // 0x00201328: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x0020132C: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x00201330: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
    // 0x00201334: andi        $t2, $t2, 0xFF
    ctx->r10 = ctx->r10 & 0XFF;
    // 0x00201338: beq         $zero, $t2, L_00201244
    if (0 == ctx->r10) {
        // 0x0020133C: nop
    
            goto L_00201244;
    }
    // 0x0020133C: nop

L_00201340:
    // 0x00201340: addu        $t1, $t1, $t1
    ctx->r9 = ADD32(ctx->r9, ctx->r9);
    // 0x00201344: addu        $t1, $t1, $t7
    ctx->r9 = ADD32(ctx->r9, ctx->r15);
    // 0x00201348: srl         $t7, $t1, 16
    ctx->r15 = S32(U32(ctx->r9) >> 16);
    // 0x0020134C: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
    // 0x00201350: addi        $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x00201354: bgez        $t0, L_00201328
    if (SIGNED(ctx->r8) >= 0) {
        // 0x00201358: nop
    
            goto L_00201328;
    }
    // 0x00201358: nop

    // 0x0020135C: addi        $t1, $t1, 0x2
    ctx->r9 = ADD32(ctx->r9, 0X2);
L_00201360:
    // 0x00201360: lbu         $t4, 0x0($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X0);
    // 0x00201364: lbu         $s2, 0x1($v1)
    ctx->r18 = MEM_BU(ctx->r3, 0X1);
    // 0x00201368: sb          $t4, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r12;
    // 0x0020136C: sb          $s2, 0x1($a1)
    MEM_B(0X1, ctx->r5) = ctx->r18;
    // 0x00201370: lbu         $t4, 0x2($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X2);
    // 0x00201374: lbu         $s2, 0x3($v1)
    ctx->r18 = MEM_BU(ctx->r3, 0X3);
    // 0x00201378: sb          $t4, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r12;
    // 0x0020137C: sb          $s2, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r18;
    // 0x00201380: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x00201384: addi        $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
    // 0x00201388: bgez        $t1, L_00201360
    if (SIGNED(ctx->r9) >= 0) {
        // 0x0020138C: addi        $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_00201360;
    }
    // 0x0020138C: addi        $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x00201390: j           L_00201580
    // 0x00201394: nop

        goto L_00201580;
    // 0x00201394: nop

L_00201398:
    // 0x00201398: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x0020139C: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x002013A0: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
    // 0x002013A4: andi        $t2, $t2, 0xFF
    ctx->r10 = ctx->r10 & 0XFF;
    // 0x002013A8: beq         $zero, $t2, L_00201260
    if (0 == ctx->r10) {
        // 0x002013AC: nop
    
            goto L_00201260;
    }
    // 0x002013AC: nop

L_002013B0:
    // 0x002013B0: addu        $t0, $t0, $t0
    ctx->r8 = ADD32(ctx->r8, ctx->r8);
    // 0x002013B4: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x002013B8: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x002013BC: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x002013C0: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
    // 0x002013C4: andi        $t2, $t2, 0xFF
    ctx->r10 = ctx->r10 & 0XFF;
    // 0x002013C8: beq         $zero, $t2, L_0020127C
    if (0 == ctx->r10) {
        // 0x002013CC: nop
    
            goto L_0020127C;
    }
    // 0x002013CC: nop

L_002013D0:
    // 0x002013D0: beq         $zero, $t7, L_00201410
    if (0 == ctx->r15) {
        // 0x002013D4: nop
    
            goto L_00201410;
    }
    // 0x002013D4: nop

    // 0x002013D8: addi        $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x002013DC: add         $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x002013E0: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x002013E4: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
    // 0x002013E8: andi        $t2, $t2, 0xFF
    ctx->r10 = ctx->r10 & 0XFF;
    // 0x002013EC: beq         $zero, $t2, L_00201298
    if (0 == ctx->r10) {
        // 0x002013F0: nop
    
            goto L_00201298;
    }
    // 0x002013F0: nop

L_002013F4:
    // 0x002013F4: addu        $t0, $t0, $t0
    ctx->r8 = ADD32(ctx->r8, ctx->r8);
    // 0x002013F8: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x002013FC: srl         $t7, $t0, 16
    ctx->r15 = S32(U32(ctx->r8) >> 16);
    // 0x00201400: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
    // 0x00201404: addi        $t4, $t0, -0x9
    ctx->r12 = ADD32(ctx->r8, -0X9);
    // 0x00201408: beq         $zero, $t4, L_00201324
    if (0 == ctx->r12) {
        // 0x0020140C: nop
    
            goto L_00201324;
    }
    // 0x0020140C: nop

L_00201410:
    // 0x00201410: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x00201414: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x00201418: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
    // 0x0020141C: andi        $t2, $t2, 0xFF
    ctx->r10 = ctx->r10 & 0XFF;
    // 0x00201420: beq         $zero, $t2, L_002012B4
    if (0 == ctx->r10) {
        // 0x00201424: nop
    
            goto L_002012B4;
    }
    // 0x00201424: nop

L_00201428:
    // 0x00201428: beq         $zero, $t7, L_002014B4
    if (0 == ctx->r15) {
        // 0x0020142C: nop
    
            goto L_002014B4;
    }
    // 0x0020142C: nop

    // 0x00201430: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x00201434: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x00201438: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
    // 0x0020143C: andi        $t2, $t2, 0xFF
    ctx->r10 = ctx->r10 & 0XFF;
    // 0x00201440: beq         $zero, $t2, L_002012D0
    if (0 == ctx->r10) {
        // 0x00201444: nop
    
            goto L_002012D0;
    }
    // 0x00201444: nop

L_00201448:
    // 0x00201448: addu        $t1, $t1, $t1
    ctx->r9 = ADD32(ctx->r9, ctx->r9);
    // 0x0020144C: addu        $t1, $t1, $t7
    ctx->r9 = ADD32(ctx->r9, ctx->r15);
    // 0x00201450: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x00201454: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x00201458: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
    // 0x0020145C: andi        $t2, $t2, 0xFF
    ctx->r10 = ctx->r10 & 0XFF;
    // 0x00201460: beq         $zero, $t2, L_002012EC
    if (0 == ctx->r10) {
        // 0x00201464: nop
    
            goto L_002012EC;
    }
    // 0x00201464: nop

L_00201468:
    // 0x00201468: bne         $zero, $t7, L_0020164C
    if (0 != ctx->r15) {
        // 0x0020146C: nop
    
            goto L_0020164C;
    }
    // 0x0020146C: nop

    // 0x00201470: bne         $zero, $t1, L_002014A4
    if (0 != ctx->r9) {
        // 0x00201474: nop
    
            goto L_002014A4;
    }
    // 0x00201474: nop

    // 0x00201478: addi        $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
L_0020147C:
    // 0x0020147C: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x00201480: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x00201484: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
    // 0x00201488: andi        $t2, $t2, 0xFF
    ctx->r10 = ctx->r10 & 0XFF;
    // 0x0020148C: beq         $zero, $t2, L_00201308
    if (0 == ctx->r10) {
        // 0x00201490: nop
    
            goto L_00201308;
    }
    // 0x00201490: nop

L_00201494:
    // 0x00201494: addu        $t1, $t1, $t1
    ctx->r9 = ADD32(ctx->r9, ctx->r9);
    // 0x00201498: addu        $t1, $t1, $t7
    ctx->r9 = ADD32(ctx->r9, ctx->r15);
    // 0x0020149C: srl         $t7, $t1, 16
    ctx->r15 = S32(U32(ctx->r9) >> 16);
    // 0x002014A0: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
L_002014A4:
    // 0x002014A4: sll         $t4, $t1, 8
    ctx->r12 = S32(ctx->r9 << 8);
    // 0x002014A8: andi        $t4, $t4, 0xFF00
    ctx->r12 = ctx->r12 & 0XFF00;
    // 0x002014AC: srl         $t1, $t1, 8
    ctx->r9 = S32(U32(ctx->r9) >> 8);
    // 0x002014B0: or          $t1, $t1, $t4
    ctx->r9 = ctx->r9 | ctx->r12;
L_002014B4:
    // 0x002014B4: andi        $s3, $t1, 0xFF00
    ctx->r19 = ctx->r9 & 0XFF00;
    // 0x002014B8: lbu         $t1, 0x0($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X0);
    // 0x002014BC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x002014C0: or          $t1, $t1, $s3
    ctx->r9 = ctx->r9 | ctx->r19;
    // 0x002014C4: addu        $t6, $a1, $zero
    ctx->r14 = ADD32(ctx->r5, 0);
    // 0x002014C8: sub         $t6, $t6, $t1
    ctx->r14 = SUB32(ctx->r14, ctx->r9);
    // 0x002014CC: addi        $t6, $t6, -0x1
    ctx->r14 = ADD32(ctx->r14, -0X1);
    // 0x002014D0: andi        $t7, $t0, 0x1
    ctx->r15 = ctx->r8 & 0X1;
    // 0x002014D4: srl         $t0, $t0, 1
    ctx->r8 = S32(U32(ctx->r8) >> 1);
    // 0x002014D8: beq         $zero, $t7, L_002014F0
    if (0 == ctx->r15) {
        // 0x002014DC: nop
    
            goto L_002014F0;
    }
    // 0x002014DC: nop

    // 0x002014E0: lbu         $t4, 0x0($t6)
    ctx->r12 = MEM_BU(ctx->r14, 0X0);
    // 0x002014E4: addi        $t6, $t6, 0x1
    ctx->r14 = ADD32(ctx->r14, 0X1);
    // 0x002014E8: sb          $t4, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r12;
    // 0x002014EC: addi        $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_002014F0:
    // 0x002014F0: addi        $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x002014F4: bne         $zero, $t1, L_00201528
    if (0 != ctx->r9) {
        // 0x002014F8: nop
    
            goto L_00201528;
    }
    // 0x002014F8: nop

    // 0x002014FC: andi        $s3, $t1, 0xFF00
    ctx->r19 = ctx->r9 & 0XFF00;
    // 0x00201500: lbu         $t1, 0x0($t6)
    ctx->r9 = MEM_BU(ctx->r14, 0X0);
    // 0x00201504: nop

    // 0x00201508: or          $t1, $t1, $s3
    ctx->r9 = ctx->r9 | ctx->r19;
L_0020150C:
    // 0x0020150C: sb          $t1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r9;
    // 0x00201510: addi        $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x00201514: sb          $t1, 0x1($a1)
    MEM_B(0X1, ctx->r5) = ctx->r9;
    // 0x00201518: bgez        $t0, L_0020150C
    if (SIGNED(ctx->r8) >= 0) {
        // 0x0020151C: addi        $a1, $a1, 0x2
        ctx->r5 = ADD32(ctx->r5, 0X2);
            goto L_0020150C;
    }
    // 0x0020151C: addi        $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x00201520: j           L_00201580
    // 0x00201524: nop

        goto L_00201580;
    // 0x00201524: nop

L_00201528:
    // 0x00201528: lbu         $s2, 0x1($t6)
    ctx->r18 = MEM_BU(ctx->r14, 0X1);
    // 0x0020152C: lbu         $t4, 0x0($t6)
    ctx->r12 = MEM_BU(ctx->r14, 0X0);
    // 0x00201530: sb          $s2, 0x1($a1)
    MEM_B(0X1, ctx->r5) = ctx->r18;
    // 0x00201534: sb          $t4, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r12;
    // 0x00201538: addi        $t6, $t6, 0x2
    ctx->r14 = ADD32(ctx->r14, 0X2);
    // 0x0020153C: addi        $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x00201540: bgez        $t0, L_00201528
    if (SIGNED(ctx->r8) >= 0) {
        // 0x00201544: addi        $a1, $a1, 0x2
        ctx->r5 = ADD32(ctx->r5, 0X2);
            goto L_00201528;
    }
    // 0x00201544: addi        $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x00201548: j           L_00201580
    // 0x0020154C: nop

        goto L_00201580;
    // 0x0020154C: nop

L_00201550:
    // 0x00201550: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    // 0x00201554: addi        $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00201558: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x0020155C: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x00201560: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x00201564: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
    // 0x00201568: bne         $zero, $t7, L_002015C4
    if (0 != ctx->r15) {
        // 0x0020156C: nop
    
            goto L_002015C4;
    }
    // 0x0020156C: nop

L_00201570:
    // 0x00201570: lbu         $t4, 0x0($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X0);
    // 0x00201574: addi        $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00201578: sb          $t4, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r12;
    // 0x0020157C: addi        $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_00201580:
    // 0x00201580: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x00201584: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x00201588: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
    // 0x0020158C: bne         $zero, $t7, L_002015B8
    if (0 != ctx->r15) {
        // 0x00201590: nop
    
            goto L_002015B8;
    }
    // 0x00201590: nop

    // 0x00201594: lbu         $t4, 0x0($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X0);
    // 0x00201598: addi        $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0020159C: sb          $t4, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r12;
    // 0x002015A0: addi        $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x002015A4: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x002015A8: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x002015AC: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
    // 0x002015B0: beq         $zero, $t7, L_00201570
    if (0 == ctx->r15) {
        // 0x002015B4: nop
    
            goto L_00201570;
    }
    // 0x002015B4: nop

L_002015B8:
    // 0x002015B8: andi        $t2, $t2, 0xFF
    ctx->r10 = ctx->r10 & 0XFF;
    // 0x002015BC: beq         $zero, $t2, L_00201550
    if (0 == ctx->r10) {
        // 0x002015C0: nop
    
            goto L_00201550;
    }
    // 0x002015C0: nop

L_002015C4:
    // 0x002015C4: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x002015C8: addiu       $t1, $zero, 0x0
    ctx->r9 = ADD32(0, 0X0);
    // 0x002015CC: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x002015D0: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x002015D4: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
    // 0x002015D8: andi        $t2, $t2, 0xFF
    ctx->r10 = ctx->r10 & 0XFF;
    // 0x002015DC: beq         $zero, $t2, L_002016A0
    if (0 == ctx->r10) {
        // 0x002015E0: nop
    
            goto L_002016A0;
    }
    // 0x002015E0: nop

L_002015E4:
    // 0x002015E4: beq         $zero, $t7, L_00201398
    if (0 == ctx->r15) {
        // 0x002015E8: nop
    
            goto L_00201398;
    }
    // 0x002015E8: nop

    // 0x002015EC: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x002015F0: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x002015F4: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
    // 0x002015F8: andi        $t2, $t2, 0xFF
    ctx->r10 = ctx->r10 & 0XFF;
    // 0x002015FC: beq         $zero, $t2, L_002016BC
    if (0 == ctx->r10) {
        // 0x00201600: nop
    
            goto L_002016BC;
    }
    // 0x00201600: nop

L_00201604:
    // 0x00201604: beq         $zero, $t7, L_002014B4
    if (0 == ctx->r15) {
        // 0x00201608: nop
    
            goto L_002014B4;
    }
    // 0x00201608: nop

    // 0x0020160C: addi        $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x00201610: add         $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x00201614: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x00201618: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
    // 0x0020161C: andi        $t2, $t2, 0xFF
    ctx->r10 = ctx->r10 & 0XFF;
    // 0x00201620: beq         $zero, $t2, L_002016D8
    if (0 == ctx->r10) {
        // 0x00201624: nop
    
            goto L_002016D8;
    }
    // 0x00201624: nop

L_00201628:
    // 0x00201628: beq         $zero, $t7, L_00201410
    if (0 == ctx->r15) {
        // 0x0020162C: nop
    
            goto L_00201410;
    }
    // 0x0020162C: nop

    // 0x00201630: lbu         $t0, 0x0($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X0);
    // 0x00201634: addi        $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00201638: nop

    // 0x0020163C: beq         $zero, $t0, L_0020172C
    if (0 == ctx->r8) {
        // 0x00201640: addi        $t0, $t0, 0x8
        ctx->r8 = ADD32(ctx->r8, 0X8);
            goto L_0020172C;
    }
    // 0x00201640: addi        $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x00201644: j           L_00201410
    // 0x00201648: nop

        goto L_00201410;
    // 0x00201648: nop

L_0020164C:
    // 0x0020164C: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x00201650: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x00201654: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
    // 0x00201658: andi        $t2, $t2, 0xFF
    ctx->r10 = ctx->r10 & 0XFF;
    // 0x0020165C: beq         $zero, $t2, L_002016F4
    if (0 == ctx->r10) {
        // 0x00201660: nop
    
            goto L_002016F4;
    }
    // 0x00201660: nop

L_00201664:
    // 0x00201664: addu        $t1, $t1, $t1
    ctx->r9 = ADD32(ctx->r9, ctx->r9);
    // 0x00201668: addu        $t1, $t1, $t7
    ctx->r9 = ADD32(ctx->r9, ctx->r15);
    // 0x0020166C: srl         $t7, $t1, 16
    ctx->r15 = S32(U32(ctx->r9) >> 16);
    // 0x00201670: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
    // 0x00201674: ori         $t1, $t1, 0x4
    ctx->r9 = ctx->r9 | 0X4;
    // 0x00201678: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x0020167C: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x00201680: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
    // 0x00201684: andi        $t2, $t2, 0xFF
    ctx->r10 = ctx->r10 & 0XFF;
    // 0x00201688: beq         $zero, $t2, L_00201710
    if (0 == ctx->r10) {
        // 0x0020168C: nop
    
            goto L_00201710;
    }
    // 0x0020168C: nop

L_00201690:
    // 0x00201690: bne         $zero, $t7, L_002014A4
    if (0 != ctx->r15) {
        // 0x00201694: nop
    
            goto L_002014A4;
    }
    // 0x00201694: nop

    // 0x00201698: j           L_0020147C
    // 0x0020169C: nop

        goto L_0020147C;
    // 0x0020169C: nop

L_002016A0:
    // 0x002016A0: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    // 0x002016A4: addi        $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x002016A8: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x002016AC: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x002016B0: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x002016B4: j           L_002015E4
    // 0x002016B8: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
        goto L_002015E4;
    // 0x002016B8: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
L_002016BC:
    // 0x002016BC: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    // 0x002016C0: addi        $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x002016C4: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x002016C8: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x002016CC: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x002016D0: j           L_00201604
    // 0x002016D4: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
        goto L_00201604;
    // 0x002016D4: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
L_002016D8:
    // 0x002016D8: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    // 0x002016DC: addi        $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x002016E0: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x002016E4: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x002016E8: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x002016EC: j           L_00201628
    // 0x002016F0: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
        goto L_00201628;
    // 0x002016F0: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
L_002016F4:
    // 0x002016F4: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    // 0x002016F8: addi        $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x002016FC: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x00201700: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x00201704: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x00201708: j           L_00201664
    // 0x0020170C: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
        goto L_00201664;
    // 0x0020170C: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
L_00201710:
    // 0x00201710: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    // 0x00201714: addi        $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00201718: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x0020171C: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x00201720: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x00201724: j           L_00201690
    // 0x00201728: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
        goto L_00201690;
    // 0x00201728: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
L_0020172C:
    // 0x0020172C: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x00201730: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x00201734: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
    // 0x00201738: andi        $t2, $t2, 0xFF
    ctx->r10 = ctx->r10 & 0XFF;
    // 0x0020173C: bne         $zero, $t2, L_0020175C
    if (0 != ctx->r10) {
        // 0x00201740: nop
    
            goto L_0020175C;
    }
    // 0x00201740: nop

    // 0x00201744: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    // 0x00201748: addi        $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0020174C: addu        $t2, $t2, $t2
    ctx->r10 = ADD32(ctx->r10, ctx->r10);
    // 0x00201750: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x00201754: srl         $t7, $t2, 8
    ctx->r15 = S32(U32(ctx->r10) >> 8);
    // 0x00201758: andi        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 & 0X1;
L_0020175C:
    // 0x0020175C: bne         $zero, $t7, L_00201580
    if (0 != ctx->r15) {
        // 0x00201760: nop
    
            goto L_00201580;
    }
    // 0x00201760: nop

    // 0x00201764: lhu         $t5, 0x0($t3)
    ctx->r13 = MEM_HU(ctx->r11, 0X0);
    // 0x00201768: addi        $t3, $t3, 0x2
    ctx->r11 = ADD32(ctx->r11, 0X2);
    // 0x0020176C: beq         $zero, $t5, L_00201790
    if (0 == ctx->r13) {
        // 0x00201770: nop
    
            goto L_00201790;
    }
    // 0x00201770: nop

L_00201774:
    // 0x00201774: lh          $s0, 0x0($t3)
    ctx->r16 = MEM_H(ctx->r11, 0X0);
    // 0x00201778: addi        $t3, $t3, 0x2
    ctx->r11 = ADD32(ctx->r11, 0X2);
    // 0x0020177C: sb          $s0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r16;
    // 0x00201780: addi        $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00201784: addi        $t5, $t5, -0x1
    ctx->r13 = ADD32(ctx->r13, -0X1);
    // 0x00201788: bne         $zero, $t5, L_00201774
    if (0 != ctx->r13) {
        // 0x0020178C: nop
    
            goto L_00201774;
    }
    // 0x0020178C: nop

L_00201790:
    // 0x00201790: j           L_0020179C
    // 0x00201794: nop

        goto L_0020179C;
    // 0x00201794: nop

    // 0x00201798: sw          $s0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r16;
L_0020179C:
    // 0x0020179C: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
    // 0x002017A0: jr          $ra
    // 0x002017A4: nop

    return;
    // 0x002017A4: nop

;}
RECOMP_FUNC void entry_00201AA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00201AA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00201AA8: addiu       $a1, $a0, 0x18
    ctx->r5 = ADD32(ctx->r4, 0X18);
    // 0x00201AAC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00201AB0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00201AB4: jal         0x0029B030
    // 0x00201AB8: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x00201AB8: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    after_0:
    // 0x00201ABC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00201AC0: jr          $ra
    // 0x00201AC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00201AC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_002020C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002020C8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002020CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002020D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002020D4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002020D8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x002020DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x002020E0: jal         0x0029DFF0
    // 0x002020E4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    func_0029DFF0(rdram, ctx);
        goto after_0;
    // 0x002020E4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    after_0:
    // 0x002020E8: addiu       $a0, $s0, 0x507C
    ctx->r4 = ADD32(ctx->r16, 0X507C);
    // 0x002020EC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x002020F0: jal         0x00200738
    // 0x002020F4: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    func_00200738(rdram, ctx);
        goto after_1;
    // 0x002020F4: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    after_1:
    // 0x002020F8: addiu       $a0, $s0, 0x5068
    ctx->r4 = ADD32(ctx->r16, 0X5068);
    // 0x002020FC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00202100: jal         0x00200518
    // 0x00202104: sw          $zero, 0x14($s1)
    MEM_W(0X14, ctx->r17) = 0;
    func_00200518(rdram, ctx);
        goto after_2;
    // 0x00202104: sw          $zero, 0x14($s1)
    MEM_W(0X14, ctx->r17) = 0;
    after_2:
    // 0x00202108: jal         0x0029E010
    // 0x0020210C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_0029E010(rdram, ctx);
        goto after_3;
    // 0x0020210C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
    // 0x00202110: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00202114: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00202118: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0020211C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00202120: jr          $ra
    // 0x00202124: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00202124: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
