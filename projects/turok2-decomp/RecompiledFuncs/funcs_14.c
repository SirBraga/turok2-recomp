#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_00232018(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00232018: lhu         $v1, 0x2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X2);
    // 0x0023201C: addiu       $v0, $zero, 0x56
    ctx->r2 = ADD32(0, 0X56);
    // 0x00232020: bne         $v1, $v0, L_0023203C
    if (ctx->r3 != ctx->r2) {
        // 0x00232024: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0023203C;
    }
    // 0x00232024: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00232028: bne         $a1, $v0, L_0023203C
    if (ctx->r5 != ctx->r2) {
        // 0x0023202C: lui         $v1, 0x400
        ctx->r3 = S32(0X400 << 16);
            goto L_0023203C;
    }
    // 0x0023202C: lui         $v1, 0x400
    ctx->r3 = S32(0X400 << 16);
    // 0x00232030: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x00232034: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00232038: sw          $v0, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r2;
L_0023203C:
    // 0x0023203C: jr          $ra
    // 0x00232040: nop

    return;
    // 0x00232040: nop

;}
RECOMP_FUNC void func_0025F75C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025F75C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025F760: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025F764: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x0025F768: beq         $v0, $zero, L_0025F778
    if (ctx->r2 == 0) {
        // 0x0025F76C: sb          $zero, 0x133($a1)
        MEM_B(0X133, ctx->r5) = 0;
            goto L_0025F778;
    }
    // 0x0025F76C: sb          $zero, 0x133($a1)
    MEM_B(0X133, ctx->r5) = 0;
    // 0x0025F770: jal         0x00243414
    // 0x0025F774: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0025F774: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_0:
L_0025F778:
    // 0x0025F778: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025F77C: jr          $ra
    // 0x0025F780: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025F780: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0021813C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021813C: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x00218140: lui         $v1, 0xFFF
    ctx->r3 = S32(0XFFF << 16);
    // 0x00218144: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00218148: ori         $v1, $v1, 0xFFE0
    ctx->r3 = ctx->r3 | 0XFFE0;
    // 0x0021814C: mult        $v0, $a1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00218150: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
    // 0x00218154: lui         $v0, 0xF000
    ctx->r2 = S32(0XF000 << 16);
    // 0x00218158: lw          $a3, 0x4($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X4);
    // 0x0021815C: lw          $t0, 0x8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X8);
    // 0x00218160: lw          $t1, 0xC($a0)
    ctx->r9 = MEM_W(ctx->r4, 0XC);
    // 0x00218164: sw          $a3, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r7;
    // 0x00218168: sw          $t0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r8;
    // 0x0021816C: sw          $t1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r9;
    // 0x00218170: lw          $a2, 0x4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4);
    // 0x00218174: mflo        $a3
    ctx->r7 = lo;
    // 0x00218178: addu        $a1, $a1, $a3
    ctx->r5 = ADD32(ctx->r5, ctx->r7);
    // 0x0021817C: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
    // 0x00218180: and         $v1, $a1, $v1
    ctx->r3 = ctx->r5 & ctx->r3;
    // 0x00218184: srl         $v1, $v1, 3
    ctx->r3 = S32(U32(ctx->r3) >> 3);
    // 0x00218188: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0021818C: andi        $a1, $a1, 0x1F
    ctx->r5 = ctx->r5 & 0X1F;
    // 0x00218190: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x00218194: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x00218198: beq         $a1, $zero, L_002181B0
    if (ctx->r5 == 0) {
        // 0x0021819C: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_002181B0;
    }
    // 0x0021819C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x002181A0: srlv        $v1, $v1, $a1
    ctx->r3 = S32(U32(ctx->r3) >> (ctx->r5 & 31));
    // 0x002181A4: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x002181A8: sllv        $a0, $a0, $v0
    ctx->r4 = S32(ctx->r4 << (ctx->r2 & 31));
    // 0x002181AC: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
L_002181B0:
    // 0x002181B0: sltiu       $v0, $a2, 0x20
    ctx->r2 = ctx->r6 < 0X20 ? 1 : 0;
    // 0x002181B4: beq         $v0, $zero, L_002181C8
    if (ctx->r2 == 0) {
        // 0x002181B8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002181C8;
    }
    // 0x002181B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002181BC: sllv        $v0, $v0, $a2
    ctx->r2 = S32(ctx->r2 << (ctx->r6 & 31));
    // 0x002181C0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x002181C4: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
L_002181C8:
    // 0x002181C8: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x002181CC: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x002181D0: bgezl       $v1, L_002181E8
    if (SIGNED(ctx->r3) >= 0) {
        // 0x002181D4: cvt.s.d     $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
            goto L_002181E8;
    }
    goto skip_0;
    // 0x002181D4: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    skip_0:
    // 0x002181D8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002181DC: ldc1        $f0, 0x59E8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X59E8);
    // 0x002181E0: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x002181E4: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
L_002181E8:
    // 0x002181E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002181EC: sllv        $v0, $v0, $a2
    ctx->r2 = S32(ctx->r2 << (ctx->r6 & 31));
    // 0x002181F0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x002181F4: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x002181F8: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x002181FC: lwc1        $f2, 0xC($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XC);
    // 0x00218200: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00218204: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00218208: lwc1        $f1, 0x8($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X8);
    // 0x0021820C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00218210: jr          $ra
    // 0x00218214: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x00218214: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_004232FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004232FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00423300: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00423304: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00423308: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0042330C: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x00423310: lw          $a2, 0x92C($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X92C);
    // 0x00423314: jal         0x00253640
    // 0x00423318: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_00253640(rdram, ctx);
        goto after_0;
    // 0x00423318: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x0042331C: beq         $v0, $zero, L_00423338
    if (ctx->r2 == 0) {
        // 0x00423320: lui         $a0, 0x100
        ctx->r4 = S32(0X100 << 16);
            goto L_00423338;
    }
    // 0x00423320: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x00423324: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x00423328: lw          $v1, 0x58($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X58);
    // 0x0042332C: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x00423330: j           L_00423350
    // 0x00423334: sw          $v1, 0x58($v0)
    MEM_W(0X58, ctx->r2) = ctx->r3;
        goto L_00423350;
    // 0x00423334: sw          $v1, 0x58($v0)
    MEM_W(0X58, ctx->r2) = ctx->r3;
L_00423338:
    // 0x00423338: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x0042333C: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x00423340: lw          $v0, 0x58($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X58);
    // 0x00423344: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00423348: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0042334C: sw          $v0, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->r2;
L_00423350:
    // 0x00423350: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00423354: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00423358: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0042335C: jr          $ra
    // 0x00423360: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00423360: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_004690E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004690E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004690EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004690F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x004690F4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004690F8: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    // 0x004690FC: addu        $v1, $s0, $zero
    ctx->r3 = ADD32(ctx->r16, 0);
    // 0x00469100: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00469104: sb          $a1, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r5;
    // 0x00469108: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x0046910C: sw          $zero, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = 0;
    // 0x00469110: sw          $zero, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = 0;
    // 0x00469114: sw          $zero, 0x220($s0)
    MEM_W(0X220, ctx->r16) = 0;
    // 0x00469118: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x0046911C: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x00469120: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x00469124: sb          $zero, 0xC4($s0)
    MEM_B(0XC4, ctx->r16) = 0;
    // 0x00469128: sb          $zero, 0xC5($s0)
    MEM_B(0XC5, ctx->r16) = 0;
    // 0x0046912C: sb          $zero, 0xC6($s0)
    MEM_B(0XC6, ctx->r16) = 0;
    // 0x00469130: sb          $zero, 0xC7($s0)
    MEM_B(0XC7, ctx->r16) = 0;
    // 0x00469134: sw          $zero, 0x14($s0)
    MEM_W(0X14, ctx->r16) = 0;
    // 0x00469138: sw          $zero, 0x18($s0)
    MEM_W(0X18, ctx->r16) = 0;
    // 0x0046913C: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
    // 0x00469140: sw          $zero, 0x20($s0)
    MEM_W(0X20, ctx->r16) = 0;
    // 0x00469144: sw          $zero, 0x24($s0)
    MEM_W(0X24, ctx->r16) = 0;
    // 0x00469148: sw          $zero, 0x28($s0)
    MEM_W(0X28, ctx->r16) = 0;
L_0046914C:
    // 0x0046914C: sb          $zero, 0x2C($v1)
    MEM_B(0X2C, ctx->r3) = 0;
    // 0x00469150: sb          $zero, 0x2D($v1)
    MEM_B(0X2D, ctx->r3) = 0;
    // 0x00469154: sb          $a2, 0x2E($v1)
    MEM_B(0X2E, ctx->r3) = ctx->r6;
    // 0x00469158: sb          $zero, 0x2F($v1)
    MEM_B(0X2F, ctx->r3) = 0;
    // 0x0046915C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00469160: slti        $v0, $a0, 0x20
    ctx->r2 = SIGNED(ctx->r4) < 0X20 ? 1 : 0;
    // 0x00469164: bne         $v0, $zero, L_0046914C
    if (ctx->r2 != 0) {
        // 0x00469168: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_0046914C;
    }
    // 0x00469168: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x0046916C: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x00469170: addiu       $a0, $s0, 0x140
    ctx->r4 = ADD32(ctx->r16, 0X140);
    // 0x00469174: addiu       $a1, $s0, 0x16C
    ctx->r5 = ADD32(ctx->r16, 0X16C);
    // 0x00469178: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0046917C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00469180: lbu         $v0, 0x677B($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X677B);
    // 0x00469184: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x00469188: sw          $zero, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = 0;
    // 0x0046918C: sw          $zero, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = 0;
    // 0x00469190: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x00469194: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x00469198: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0046919C: jal         0x0026EB3C
    // 0x004691A0: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    func_0026EB3C(rdram, ctx);
        goto after_0;
    // 0x004691A0: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x004691A4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x004691A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x004691AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004691B0: jr          $ra
    // 0x004691B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004691B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0041BA50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041BA50: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0041BA54: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0041BA58: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0041BA5C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0041BA60: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0041BA64: addiu       $s0, $zero, 0x9
    ctx->r16 = ADD32(0, 0X9);
    // 0x0041BA68: addu        $a1, $s1, $s0
    ctx->r5 = ADD32(ctx->r17, ctx->r16);
    // 0x0041BA6C: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x0041BA70: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x0041BA74: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x0041BA78: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0041BA7C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0041BA80: sb          $v0, 0x14($s1)
    MEM_B(0X14, ctx->r17) = ctx->r2;
    // 0x0041BA84: addiu       $v0, $zero, 0xFA
    ctx->r2 = ADD32(0, 0XFA);
    // 0x0041BA88: sb          $v0, 0x15($s1)
    MEM_B(0X15, ctx->r17) = ctx->r2;
    // 0x0041BA8C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x0041BA90: sb          $v0, 0x16($s1)
    MEM_B(0X16, ctx->r17) = ctx->r2;
    // 0x0041BA94: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x0041BA98: sh          $v0, 0x10($s1)
    MEM_H(0X10, ctx->r17) = ctx->r2;
    // 0x0041BA9C: lbu         $a0, 0x11($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X11);
    // 0x0041BAA0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041BAA4: lwc1        $f0, 0x1328($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X1328);
    // 0x0041BAA8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x0041BAAC: sw          $v0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r2;
    // 0x0041BAB0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x0041BAB4: sb          $v1, 0x13($s1)
    MEM_B(0X13, ctx->r17) = ctx->r3;
    // 0x0041BAB8: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
    // 0x0041BABC: sb          $v1, 0x17($s1)
    MEM_B(0X17, ctx->r17) = ctx->r3;
    // 0x0041BAC0: sb          $zero, 0x18($s1)
    MEM_B(0X18, ctx->r17) = 0;
    // 0x0041BAC4: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    // 0x0041BAC8: sw          $zero, 0x4($s1)
    MEM_W(0X4, ctx->r17) = 0;
    // 0x0041BACC: sb          $zero, 0x1B($s1)
    MEM_B(0X1B, ctx->r17) = 0;
    // 0x0041BAD0: sb          $zero, 0x180($s1)
    MEM_B(0X180, ctx->r17) = 0;
    // 0x0041BAD4: sb          $v0, 0x20($s1)
    MEM_B(0X20, ctx->r17) = ctx->r2;
    // 0x0041BAD8: sb          $zero, 0x21($s1)
    MEM_B(0X21, ctx->r17) = 0;
    // 0x0041BADC: sb          $zero, 0x22($s1)
    MEM_B(0X22, ctx->r17) = 0;
    // 0x0041BAE0: sb          $zero, 0x23($s1)
    MEM_B(0X23, ctx->r17) = 0;
    // 0x0041BAE4: sb          $v1, 0x24($s1)
    MEM_B(0X24, ctx->r17) = ctx->r3;
    // 0x0041BAE8: sb          $zero, 0x25($s1)
    MEM_B(0X25, ctx->r17) = 0;
    // 0x0041BAEC: sb          $zero, 0x26($s1)
    MEM_B(0X26, ctx->r17) = 0;
    // 0x0041BAF0: sb          $zero, 0x27($s1)
    MEM_B(0X27, ctx->r17) = 0;
    // 0x0041BAF4: sb          $zero, 0x28($s1)
    MEM_B(0X28, ctx->r17) = 0;
    // 0x0041BAF8: sb          $v1, 0x29($s1)
    MEM_B(0X29, ctx->r17) = ctx->r3;
    // 0x0041BAFC: sb          $v0, 0x2A($s1)
    MEM_B(0X2A, ctx->r17) = ctx->r2;
    // 0x0041BB00: sb          $zero, 0x2B($s1)
    MEM_B(0X2B, ctx->r17) = 0;
    // 0x0041BB04: sb          $zero, 0x2C($s1)
    MEM_B(0X2C, ctx->r17) = 0;
    // 0x0041BB08: sb          $zero, 0x2D($s1)
    MEM_B(0X2D, ctx->r17) = 0;
    // 0x0041BB0C: sb          $v1, 0x2E($s1)
    MEM_B(0X2E, ctx->r17) = ctx->r3;
    // 0x0041BB10: sb          $a0, 0x12($s1)
    MEM_B(0X12, ctx->r17) = ctx->r4;
    // 0x0041BB14: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
L_0041BB18:
    // 0x0041BB18: sb          $a2, 0x30($a1)
    MEM_B(0X30, ctx->r5) = ctx->r6;
    // 0x0041BB1C: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x0041BB20: bgez        $s0, L_0041BB18
    if (SIGNED(ctx->r16) >= 0) {
        // 0x0041BB24: addiu       $a1, $a1, -0x1
        ctx->r5 = ADD32(ctx->r5, -0X1);
            goto L_0041BB18;
    }
    // 0x0041BB24: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x0041BB28: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0041BB2C: addiu       $s3, $zero, 0x80
    ctx->r19 = ADD32(0, 0X80);
    // 0x0041BB30: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x0041BB34: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0041BB38: sb          $zero, 0x3C($s1)
    MEM_B(0X3C, ctx->r17) = 0;
    // 0x0041BB3C: sb          $v0, 0x3D($s1)
    MEM_B(0X3D, ctx->r17) = ctx->r2;
    // 0x0041BB40: sb          $zero, 0x3E($s1)
    MEM_B(0X3E, ctx->r17) = 0;
    // 0x0041BB44: sb          $v0, 0x3F($s1)
    MEM_B(0X3F, ctx->r17) = ctx->r2;
    // 0x0041BB48: sll         $a0, $s0, 6
    ctx->r4 = S32(ctx->r16 << 6);
L_0041BB4C:
    // 0x0041BB4C: addu        $a0, $a0, $s1
    ctx->r4 = ADD32(ctx->r4, ctx->r17);
    // 0x0041BB50: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    // 0x0041BB54: sb          $zero, 0x28($a0)
    MEM_B(0X28, ctx->r4) = 0;
    // 0x0041BB58: sb          $s3, 0x29($a0)
    MEM_B(0X29, ctx->r4) = ctx->r19;
    // 0x0041BB5C: sb          $s3, 0x2A($a0)
    MEM_B(0X2A, ctx->r4) = ctx->r19;
    // 0x0041BB60: sb          $zero, 0x2C($a0)
    MEM_B(0X2C, ctx->r4) = 0;
    // 0x0041BB64: sb          $zero, 0x2B($a0)
    MEM_B(0X2B, ctx->r4) = 0;
    // 0x0041BB68: sb          $s2, 0x2D($a0)
    MEM_B(0X2D, ctx->r4) = ctx->r18;
    // 0x0041BB6C: sb          $zero, 0x2E($a0)
    MEM_B(0X2E, ctx->r4) = 0;
    // 0x0041BB70: sb          $s0, 0x2F($a0)
    MEM_B(0X2F, ctx->r4) = ctx->r16;
    // 0x0041BB74: sb          $zero, 0x30($a0)
    MEM_B(0X30, ctx->r4) = 0;
    // 0x0041BB78: sb          $s2, 0x31($a0)
    MEM_B(0X31, ctx->r4) = ctx->r18;
    // 0x0041BB7C: jal         0x0041BC50
    // 0x0041BB80: sb          $zero, 0x32($a0)
    MEM_B(0X32, ctx->r4) = 0;
    func_0041BC50(rdram, ctx);
        goto after_0;
    // 0x0041BB80: sb          $zero, 0x32($a0)
    MEM_B(0X32, ctx->r4) = 0;
    after_0:
    // 0x0041BB84: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0041BB88: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x0041BB8C: bne         $v0, $zero, L_0041BB4C
    if (ctx->r2 != 0) {
        // 0x0041BB90: sll         $a0, $s0, 6
        ctx->r4 = S32(ctx->r16 << 6);
            goto L_0041BB4C;
    }
    // 0x0041BB90: sll         $a0, $s0, 6
    ctx->r4 = S32(ctx->r16 << 6);
    // 0x0041BB94: addiu       $a0, $s1, 0x40
    ctx->r4 = ADD32(ctx->r17, 0X40);
    // 0x0041BB98: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x0041BB9C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x0041BBA0: sb          $zero, 0x28($a0)
    MEM_B(0X28, ctx->r4) = 0;
    // 0x0041BBA4: sb          $v0, 0x29($a0)
    MEM_B(0X29, ctx->r4) = ctx->r2;
    // 0x0041BBA8: sb          $v0, 0x2A($a0)
    MEM_B(0X2A, ctx->r4) = ctx->r2;
    // 0x0041BBAC: sb          $zero, 0x2C($a0)
    MEM_B(0X2C, ctx->r4) = 0;
    // turok2: reconnected split function: a stray ELF symbol at 0x0041BBB0 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0041BBB0(rdram, ctx);
;}
RECOMP_FUNC void func_00267E44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00267E44: jr          $ra
    // 0x00267E48: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00267E48: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00275018(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00275018: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0027501C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00275020: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00275024: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00275028: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x0027502C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x00275030: beq         $v0, $zero, L_00275084
    if (ctx->r2 == 0) {
        // 0x00275034: nop
    
            goto L_00275084;
    }
    // 0x00275034: nop

    // 0x00275038: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x0027503C: lh          $a1, 0x22($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X22);
    // 0x00275040: jal         0x00290EC0
    // 0x00275044: nop

    func_00290EC0(rdram, ctx);
        goto after_0;
    // 0x00275044: nop

    after_0:
    // 0x00275048: lwc1        $f1, 0x34($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X34);
    // 0x0027504C: lwc1        $f0, 0x20($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
    // 0x00275050: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00275054: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00275058: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0027505C: mfc1        $v0, $f3
    ctx->r2 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00275060: bgtz        $v0, L_002750F0
    if (SIGNED(ctx->r2) > 0) {
        // 0x00275064: sw          $v0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r2;
            goto L_002750F0;
    }
    // 0x00275064: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x00275068: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x0027506C: jal         0x00290EF0
    // 0x00275070: sw          $zero, 0x20($s0)
    MEM_W(0X20, ctx->r16) = 0;
    func_00290EF0(rdram, ctx);
        goto after_1;
    // 0x00275070: sw          $zero, 0x20($s0)
    MEM_W(0X20, ctx->r16) = 0;
    after_1:
    // 0x00275074: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x00275078: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x0027507C: j           L_002750F0
    // 0x00275080: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
        goto L_002750F0;
    // 0x00275080: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
L_00275084:
    // 0x00275084: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
    // 0x00275088: beq         $v0, $zero, L_002750F0
    if (ctx->r2 == 0) {
        // 0x0027508C: nop
    
            goto L_002750F0;
    }
    // 0x0027508C: nop

    // 0x00275090: lwc1        $f1, 0x3C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X3C);
    // 0x00275094: lwc1        $f2, 0x40($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X40);
    // 0x00275098: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x0027509C: nop

    // 0x002750A0: bc1f        L_002750C0
    if (!c1cs) {
        // 0x002750A4: nop
    
            goto L_002750C0;
    }
    // 0x002750A4: nop

    // 0x002750A8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002750AC: lwc1        $f0, -0x7E30($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7E30);
    // 0x002750B0: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x002750B4: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x002750B8: j           L_002750E0
    // 0x002750BC: nop

        goto L_002750E0;
    // 0x002750BC: nop

L_002750C0:
    // 0x002750C0: c.lt.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl < ctx->f2.fl;
    // 0x002750C4: nop

    // 0x002750C8: bc1f        L_002750F0
    if (!c1cs) {
        // 0x002750CC: nop
    
            goto L_002750F0;
    }
    // 0x002750CC: nop

    // 0x002750D0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002750D4: lwc1        $f0, -0x7E2C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7E2C);
    // 0x002750D8: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x002750DC: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
L_002750E0:
    // 0x002750E0: nop

    // 0x002750E4: bc1fl       L_002750EC
    if (!c1cs) {
        // 0x002750E8: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_002750EC;
    }
    goto skip_0;
    // 0x002750E8: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_0:
L_002750EC:
    // 0x002750EC: swc1        $f0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f0.u32l;
L_002750F0:
    // 0x002750F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x002750F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002750F8: jr          $ra
    // 0x002750FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002750FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00253AC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00253AC0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00253AC4: bne         $a1, $v0, L_00253AD4
    if (ctx->r5 != ctx->r2) {
            // 0x00253AC8: addu        $t2, $zero, $zero
    ctx->r10 = ADD32(0, 0);
    func_00253AD4(rdram, ctx);
    return;
    }
    // 0x00253AC8: addu        $t2, $zero, $zero
    ctx->r10 = ADD32(0, 0);
    // 0x00253ACC: jr          $ra
    // 0x00253AD0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00253AD0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00446B98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00446B98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00446B9C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00446BA0: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x00446BA4: beq         $v0, $zero, L_00446BB4
    if (ctx->r2 == 0) {
        // 0x00446BA8: nop
    
            goto L_00446BB4;
    }
    // 0x00446BA8: nop

    // 0x00446BAC: jal         0x00243414
    // 0x00446BB0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00446BB0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_0:
L_00446BB4:
    // 0x00446BB4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00446BB8: jr          $ra
    // 0x00446BBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00446BBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00412998(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00412998: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0041299C: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x004129A0: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x004129A4: sw          $ra, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r31;
    // 0x004129A8: sw          $s1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r17;
    // 0x004129AC: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    // 0x004129B0: lw          $v0, 0x38($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X38);
    // 0x004129B4: bne         $v0, $zero, L_004129C8
    if (ctx->r2 != 0) {
        // 0x004129B8: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_004129C8;
    }
    // 0x004129B8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x004129BC: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x004129C0: j           L_00412AE0
    // 0x004129C4: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
        goto L_00412AE0;
    // 0x004129C4: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
L_004129C8:
    // 0x004129C8: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    // 0x004129CC: jal         0x002017D4
    // 0x004129D0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x004129D0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x004129D4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x004129D8: jal         0x002017D4
    // 0x004129DC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x004129DC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x004129E0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x004129E4: jal         0x002017D4
    // 0x004129E8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x004129E8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_2:
    // 0x004129EC: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x004129F0: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    // 0x004129F4: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x004129F8: jal         0x004101B8
    // 0x004129FC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_004101B8(rdram, ctx);
        goto after_3;
    // 0x004129FC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x00412A00: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00412A04: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x00412A08: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x00412A0C: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x00412A10: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x00412A14: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x00412A18: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x00412A1C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x00412A20: lw          $v0, 0x38($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X38);
    // 0x00412A24: bne         $v0, $zero, L_00412A60
    if (ctx->r2 != 0) {
        // 0x00412A28: addiu       $s0, $sp, 0x50
        ctx->r16 = ADD32(ctx->r29, 0X50);
            goto L_00412A60;
    }
    // 0x00412A28: addiu       $s0, $sp, 0x50
    ctx->r16 = ADD32(ctx->r29, 0X50);
    // 0x00412A2C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00412A30: lwc1        $f0, 0xAD8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XAD8);
    // 0x00412A34: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x00412A38: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
    // 0x00412A3C: swc1        $f0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f0.u32l;
    // 0x00412A40: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x00412A44: lw          $t1, 0x64($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X64);
    // 0x00412A48: lw          $t2, 0x68($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X68);
    // 0x00412A4C: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x00412A50: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x00412A54: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x00412A58: j           L_00412AB4
    // 0x00412A5C: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
        goto L_00412AB4;
    // 0x00412A5C: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
L_00412A60:
    // 0x00412A60: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    // 0x00412A64: jal         0x002017D4
    // 0x00412A68: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_4;
    // 0x00412A68: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_4:
    // 0x00412A6C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00412A70: jal         0x002017D4
    // 0x00412A74: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x00412A74: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_5:
    // 0x00412A78: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00412A7C: jal         0x002017D4
    // 0x00412A80: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_6;
    // 0x00412A80: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x00412A84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00412A88: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    // 0x00412A8C: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x00412A90: jal         0x004101B8
    // 0x00412A94: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_004101B8(rdram, ctx);
        goto after_7;
    // 0x00412A94: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_7:
    // 0x00412A98: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x00412A9C: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x00412AA0: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x00412AA4: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x00412AA8: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x00412AAC: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x00412AB0: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
L_00412AB4:
    // 0x00412AB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00412AB8: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x00412ABC: jal         0x0020EF2C
    // 0x00412AC0: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    func_0020EF2C(rdram, ctx);
        goto after_8;
    // 0x00412AC0: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    after_8:
    // 0x00412AC4: jal         0x0020F5C0
    // 0x00412AC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020F5C0(rdram, ctx);
        goto after_9;
    // 0x00412AC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x00412ACC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00412AD0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x00412AD4: jal         0x0020EAA0
    // 0x00412AD8: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    func_0020EAA0(rdram, ctx);
        goto after_10;
    // 0x00412AD8: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    after_10:
    // 0x00412ADC: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
L_00412AE0:
    // 0x00412AE0: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x00412AE4: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x00412AE8: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x00412AEC: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x00412AF0: sw          $t0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r8;
    // 0x00412AF4: sw          $t1, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r9;
    // 0x00412AF8: sw          $t2, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r10;
    // 0x00412AFC: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x00412B00: lw          $ra, 0x78($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X78);
    // 0x00412B04: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x00412B08: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x00412B0C: jr          $ra
    // 0x00412B10: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x00412B10: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_0042454C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042454C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00424550: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00424554: lw          $v1, 0x2038($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2038);
    // 0x00424558: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0042455C: bne         $v1, $v0, L_00424590
    if (ctx->r3 != ctx->r2) {
        // 0x00424560: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_00424590;
    }
    // 0x00424560: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00424564: jal         0x00266B80
    // 0x00424568: nop

    func_00266B80(rdram, ctx);
        goto after_0;
    // 0x00424568: nop

    after_0:
    // 0x0042456C: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x00424570: beq         $v0, $v1, L_00424588
    if (ctx->r2 == ctx->r3) {
        // 0x00424574: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00424588;
    }
    // 0x00424574: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00424578: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0042457C: sw          $v0, 0x2038($at)
    MEM_W(0X2038, ctx->r1) = ctx->r2;
    // 0x00424580: j           L_00424590
    // 0x00424584: nop

        goto L_00424590;
    // 0x00424584: nop

L_00424588:
    // 0x00424588: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0042458C: sw          $zero, 0x2038($at)
    MEM_W(0X2038, ctx->r1) = 0;
L_00424590:
    // 0x00424590: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00424594: lw          $v0, 0x2040($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2040);
    // 0x00424598: slti        $v0, $v0, 0x5
    ctx->r2 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x0042459C: beq         $v0, $zero, L_004245D4
    if (ctx->r2 == 0) {
        // 0x004245A0: nop
    
            goto L_004245D4;
    }
    // 0x004245A0: nop

    // 0x004245A4: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x004245A8: lw          $v1, 0x203C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X203C);
    // 0x004245AC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x004245B0: lw          $v0, 0x2038($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2038);
    // 0x004245B4: beq         $v1, $v0, L_004245D4
    if (ctx->r3 == ctx->r2) {
        // 0x004245B8: nop
    
            goto L_004245D4;
    }
    // 0x004245B8: nop

    // 0x004245BC: jal         0x00423E10
    // 0x004245C0: nop

    func_00423E10(rdram, ctx);
        goto after_1;
    // 0x004245C0: nop

    after_1:
    // 0x004245C4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x004245C8: lw          $v0, 0x2038($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2038);
    // 0x004245CC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004245D0: sw          $v0, 0x203C($at)
    MEM_W(0X203C, ctx->r1) = ctx->r2;
L_004245D4:
    // 0x004245D4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x004245D8: jr          $ra
    // 0x004245DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004245DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00239F00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00239F00: addiu       $sp, $sp, -0x100
    ctx->r29 = ADD32(ctx->r29, -0X100);
    // 0x00239F04: sw          $s1, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r17;
    // 0x00239F08: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00239F0C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00239F10: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00239F14: sw          $ra, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r31;
    // 0x00239F18: sw          $s6, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r22;
    // 0x00239F1C: sw          $s5, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r21;
    // 0x00239F20: sw          $s4, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r20;
    // 0x00239F24: sw          $s3, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r19;
    // 0x00239F28: sw          $s2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r18;
    // 0x00239F2C: sw          $s0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r16;
    // 0x00239F30: sdc1        $f22, 0xF8($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0XF8, ctx->r29);
    // 0x00239F34: sdc1        $f21, 0xF0($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0XF0, ctx->r29);
    // 0x00239F38: sdc1        $f20, 0xE8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XE8, ctx->r29);
    // 0x00239F3C: sw          $a1, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r5;
    // 0x00239F40: sw          $a2, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r6;
    // 0x00239F44: sw          $a3, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->r7;
    // 0x00239F48: lw          $a1, 0x10($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X10);
    // 0x00239F4C: lw          $s2, 0x110($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X110);
    // 0x00239F50: jal         0x0022425C
    // 0x00239F54: nop

    func_0022425C(rdram, ctx);
        goto after_0;
    // 0x00239F54: nop

    after_0:
    // 0x00239F58: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00239F5C: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00239F60: addiu       $v0, $v0, 0x1E10
    ctx->r2 = ADD32(ctx->r2, 0X1E10);
    // 0x00239F64: beq         $s2, $v0, L_00239FBC
    if (ctx->r18 == ctx->r2) {
        // 0x00239F68: nop
    
            goto L_00239FBC;
    }
    // 0x00239F68: nop

    // 0x00239F6C: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00239F70: addiu       $v0, $v0, 0x1CC0
    ctx->r2 = ADD32(ctx->r2, 0X1CC0);
    // 0x00239F74: beq         $s2, $v0, L_00239FBC
    if (ctx->r18 == ctx->r2) {
        // 0x00239F78: nop
    
            goto L_00239FBC;
    }
    // 0x00239F78: nop

    // 0x00239F7C: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00239F80: addiu       $v0, $v0, 0x1AE0
    ctx->r2 = ADD32(ctx->r2, 0X1AE0);
    // 0x00239F84: beq         $s2, $v0, L_00239FBC
    if (ctx->r18 == ctx->r2) {
        // 0x00239F88: nop
    
            goto L_00239FBC;
    }
    // 0x00239F88: nop

    // 0x00239F8C: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00239F90: addiu       $v0, $v0, 0x1C60
    ctx->r2 = ADD32(ctx->r2, 0X1C60);
    // 0x00239F94: beq         $s2, $v0, L_00239FBC
    if (ctx->r18 == ctx->r2) {
        // 0x00239F98: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00239FBC;
    }
    // 0x00239F98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00239F9C: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x00239FA0: bne         $v1, $v0, L_00239FBC
    if (ctx->r3 != ctx->r2) {
        // 0x00239FA4: sw          $zero, 0x30($s1)
        MEM_W(0X30, ctx->r17) = 0;
            goto L_00239FBC;
    }
    // 0x00239FA4: sw          $zero, 0x30($s1)
    MEM_W(0X30, ctx->r17) = 0;
    // 0x00239FA8: lui         $v1, 0xFFFC
    ctx->r3 = S32(0XFFFC << 16);
    // 0x00239FAC: lw          $v0, 0x140($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X140);
    // 0x00239FB0: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00239FB4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00239FB8: sw          $v0, 0x140($s1)
    MEM_W(0X140, ctx->r17) = ctx->r2;
L_00239FBC:
    // 0x00239FBC: jal         0x00241894
    // 0x00239FC0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00241894(rdram, ctx);
        goto after_1;
    // 0x00239FC0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x00239FC4: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    // 0x00239FC8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00239FCC: lwc1        $f21, 0x6610($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X6610);
    // 0x00239FD0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00239FD4: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x00239FD8: addu        $s3, $s6, $zero
    ctx->r19 = ADD32(ctx->r22, 0);
    // 0x00239FDC: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x00239FE0: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x00239FE4: lw          $t0, 0x104($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X104);
    // 0x00239FE8: lw          $t1, 0x108($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X108);
    // 0x00239FEC: lw          $t2, 0x10C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X10C);
    // 0x00239FF0: sw          $t0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r8;
    // 0x00239FF4: sw          $t1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r9;
    // 0x00239FF8: sw          $t2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r10;
    // 0x00239FFC: sw          $zero, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = 0;
    // 0x0023A000: sw          $zero, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = 0;
    // 0x0023A004: sw          $zero, 0x94($sp)
    MEM_W(0X94, ctx->r29) = 0;
    // 0x0023A008: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x0023A00C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023A010: lwc1        $f0, 0x6614($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6614);
    // 0x0023A014: andi        $v0, $v1, 0x4
    ctx->r2 = ctx->r3 & 0X4;
    // 0x0023A018: mul.s       $f20, $f1, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0023A01C: bne         $v0, $zero, L_0023A038
    if (ctx->r2 != 0) {
        // 0x0023A020: addiu       $s4, $zero, 0x1
        ctx->r20 = ADD32(0, 0X1);
            goto L_0023A038;
    }
    // 0x0023A020: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x0023A024: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x0023A028: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x0023A02C: beq         $v0, $zero, L_0023A038
    if (ctx->r2 == 0) {
        // 0x0023A030: addiu       $s4, $zero, 0x2
        ctx->r20 = ADD32(0, 0X2);
            goto L_0023A038;
    }
    // 0x0023A030: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
    // 0x0023A034: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
L_0023A038:
    // 0x0023A038: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x0023A03C: andi        $v0, $v0, 0x4000
    ctx->r2 = ctx->r2 & 0X4000;
    // 0x0023A040: beq         $v0, $zero, L_0023A05C
    if (ctx->r2 == 0) {
        // 0x0023A044: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0023A05C;
    }
    // 0x0023A044: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0023A048: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0023A04C: c.eq.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl == ctx->f0.fl;
    // 0x0023A050: nop

    // 0x0023A054: bc1fl       L_0023A05C
    if (!c1cs) {
        // 0x0023A058: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_0023A05C;
    }
    goto skip_0;
    // 0x0023A058: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    skip_0:
L_0023A05C:
    // 0x0023A05C: sw          $v1, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r3;
    // 0x0023A060: lwc1        $f22, 0x8($s1)
    ctx->f22.u32l = MEM_W(ctx->r17, 0X8);
    // 0x0023A064: beq         $v1, $zero, L_0023A208
    if (ctx->r3 == 0) {
        // 0x0023A068: nop
    
            goto L_0023A208;
    }
    // 0x0023A068: nop

    // 0x0023A06C: lwc1        $f2, 0x14($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X14);
    // 0x0023A070: lwc1        $f1, 0x18($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X18);
    // 0x0023A074: c.eq.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl == ctx->f2.fl;
    // 0x0023A078: nop

    // 0x0023A07C: bc1t        L_0023A0BC
    if (c1cs) {
        // 0x0023A080: nop
    
            goto L_0023A0BC;
    }
    // 0x0023A080: nop

    // 0x0023A084: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x0023A088: beq         $v0, $zero, L_0023A0BC
    if (ctx->r2 == 0) {
        // 0x0023A08C: nop
    
            goto L_0023A0BC;
    }
    // 0x0023A08C: nop

    // 0x0023A090: lhu         $v0, 0x2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2);
    // 0x0023A094: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0023A098: beq         $v0, $zero, L_0023A0BC
    if (ctx->r2 == 0) {
        // 0x0023A09C: nop
    
            goto L_0023A0BC;
    }
    // 0x0023A09C: nop

    // 0x0023A0A0: beq         $s0, $zero, L_0023A0BC
    if (ctx->r16 == 0) {
        // 0x0023A0A4: nop
    
            goto L_0023A0BC;
    }
    // 0x0023A0A4: nop

    // 0x0023A0A8: lwc1        $f0, 0x20($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
    // 0x0023A0AC: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
    // 0x0023A0B0: nop

    // 0x0023A0B4: bc1tl       L_0023A0BC
    if (c1cs) {
        // 0x0023A0B8: mov.s       $f2, $f1
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.fl = ctx->f1.fl;
            goto L_0023A0BC;
    }
    goto skip_1;
    // 0x0023A0B8: mov.s       $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.fl = ctx->f1.fl;
    skip_1:
L_0023A0BC:
    // 0x0023A0BC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023A0C0: lwc1        $f0, 0x6618($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6618);
    // 0x0023A0C4: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0023A0C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023A0CC: lwc1        $f0, 0x661C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X661C);
    // 0x0023A0D0: div.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f20.fl);
    // 0x0023A0D4: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x0023A0D8: nop

    // 0x0023A0DC: bc1fl       L_0023A0E4
    if (!c1cs) {
        // 0x0023A0E0: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_0023A0E4;
    }
    goto skip_2;
    // 0x0023A0E0: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_2:
L_0023A0E4:
    // 0x0023A0E4: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0023A0E8: c.eq.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl == ctx->f1.fl;
    // 0x0023A0EC: nop

    // 0x0023A0F0: bc1f        L_0023A10C
    if (!c1cs) {
        // 0x0023A0F4: nop
    
            goto L_0023A10C;
    }
    // 0x0023A0F4: nop

    // 0x0023A0F8: swc1        $f1, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0023A0FC: lwc1        $f0, 0x8($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X8);
    // 0x0023A100: swc1        $f1, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0023A104: j           L_0023A144
    // 0x0023A108: swc1        $f0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f0.u32l;
        goto L_0023A144;
    // 0x0023A108: swc1        $f0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f0.u32l;
L_0023A10C:
    // 0x0023A10C: lwc1        $f0, 0x18($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X18);
    // 0x0023A110: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0023A114: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0023A118: swc1        $f0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f0.u32l;
    // 0x0023A11C: lwc1        $f0, 0x1C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x0023A120: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0023A124: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0023A128: lwc1        $f1, 0x8($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X8);
    // 0x0023A12C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0023A130: swc1        $f0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f0.u32l;
    // 0x0023A134: lwc1        $f0, 0x20($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X20);
    // 0x0023A138: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0023A13C: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0023A140: swc1        $f0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f0.u32l;
L_0023A144:
    // 0x0023A144: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023A148: lwc1        $f3, 0x6620($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X6620);
    // 0x0023A14C: mul.s       $f3, $f20, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = MUL_S(ctx->f20.fl, ctx->f3.fl);
    // 0x0023A150: lwc1        $f4, 0xB8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x0023A154: mul.s       $f1, $f4, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = MUL_S(ctx->f4.fl, ctx->f3.fl);
    // 0x0023A158: lwc1        $f0, 0x18($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X18);
    // 0x0023A15C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0023A160: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x0023A164: lwc1        $f1, 0x5C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X5C);
    // 0x0023A168: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0023A16C: lwc1        $f2, 0xBC($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x0023A170: mul.s       $f2, $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f3.fl);
    // 0x0023A174: swc1        $f1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0023A178: lwc1        $f0, 0x1C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x0023A17C: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0023A180: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x0023A184: lwc1        $f1, 0x60($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X60);
    // 0x0023A188: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0023A18C: lwc1        $f2, 0xC0($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x0023A190: mul.s       $f2, $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f3.fl);
    // 0x0023A194: swc1        $f1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0023A198: lwc1        $f0, 0x20($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X20);
    // 0x0023A19C: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0023A1A0: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x0023A1A4: lwc1        $f1, 0x64($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X64);
    // 0x0023A1A8: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0023A1AC: mul.s       $f4, $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x0023A1B0: swc1        $f1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0023A1B4: lwc1        $f0, 0x18($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X18);
    // 0x0023A1B8: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x0023A1BC: swc1        $f0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f0.u32l;
    // 0x0023A1C0: lwc1        $f1, 0xBC($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0XBC);
    // 0x0023A1C4: mul.s       $f1, $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f20.fl);
    // 0x0023A1C8: lwc1        $f0, 0x1C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x0023A1CC: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0023A1D0: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    // 0x0023A1D4: lwc1        $f0, 0xC0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x0023A1D8: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x0023A1DC: lwc1        $f1, 0x20($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X20);
    // 0x0023A1E0: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0023A1E4: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0023A1E8: lw          $v0, 0x1ADC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1ADC);
    // 0x0023A1EC: swc1        $f1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    // 0x0023A1F0: lw          $t0, 0x18($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X18);
    // 0x0023A1F4: lw          $t1, 0x1C($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X1C);
    // 0x0023A1F8: lw          $t2, 0x20($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X20);
    // 0x0023A1FC: sw          $t0, 0xD8($v0)
    MEM_W(0XD8, ctx->r2) = ctx->r8;
    // 0x0023A200: sw          $t1, 0xDC($v0)
    MEM_W(0XDC, ctx->r2) = ctx->r9;
    // 0x0023A204: sw          $t2, 0xE0($v0)
    MEM_W(0XE0, ctx->r2) = ctx->r10;
L_0023A208:
    // 0x0023A208: lwc1        $f1, 0x4($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X4);
    // 0x0023A20C: lwc1        $f0, 0x5C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x0023A210: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x0023A214: nop

    // 0x0023A218: bc1f        L_0023A250
    if (!c1cs) {
        // 0x0023A21C: nop
    
            goto L_0023A250;
    }
    // 0x0023A21C: nop

    // 0x0023A220: lwc1        $f1, 0x8($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X8);
    // 0x0023A224: lwc1        $f0, 0x60($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X60);
    // 0x0023A228: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x0023A22C: nop

    // 0x0023A230: bc1f        L_0023A250
    if (!c1cs) {
        // 0x0023A234: nop
    
            goto L_0023A250;
    }
    // 0x0023A234: nop

    // 0x0023A238: lwc1        $f1, 0xC($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XC);
    // 0x0023A23C: lwc1        $f0, 0x64($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X64);
    // 0x0023A240: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x0023A244: nop

    // 0x0023A248: bc1t        L_0023A60C
    if (c1cs) {
        // 0x0023A24C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0023A60C;
    }
    // 0x0023A24C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0023A250:
    // 0x0023A250: beql        $s0, $zero, L_0023A264
    if (ctx->r16 == 0) {
        // 0x0023A254: sw          $zero, 0xA8($sp)
        MEM_W(0XA8, ctx->r29) = 0;
            goto L_0023A264;
    }
    goto skip_3;
    // 0x0023A254: sw          $zero, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = 0;
    skip_3:
    // 0x0023A258: lw          $v0, 0x44($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X44);
    // 0x0023A25C: andi        $v0, $v0, 0x4000
    ctx->r2 = ctx->r2 & 0X4000;
    // 0x0023A260: sw          $v0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r2;
L_0023A264:
    // 0x0023A264: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0023A268: addiu       $v0, $s3, 0x1
    ctx->r2 = ADD32(ctx->r19, 0X1);
    // 0x0023A26C: slt         $v0, $v0, $s4
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x0023A270: jal         0x0023BE24
    // 0x0023A274: sw          $v0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r2;
    func_0023BE24(rdram, ctx);
        goto after_2;
    // 0x0023A274: sw          $v0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r2;
    after_2:
    // 0x0023A278: lw          $v0, 0xA4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XA4);
    // 0x0023A27C: beq         $v0, $zero, L_0023A2C4
    if (ctx->r2 == 0) {
        // 0x0023A280: addiu       $s5, $zero, 0x1
        ctx->r21 = ADD32(0, 0X1);
            goto L_0023A2C4;
    }
    // 0x0023A280: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x0023A284: lw          $v0, 0xA0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XA0);
    // 0x0023A288: beq         $v0, $zero, L_0023A2C4
    if (ctx->r2 == 0) {
        // 0x0023A28C: nop
    
            goto L_0023A2C4;
    }
    // 0x0023A28C: nop

    // 0x0023A290: lwc1        $f1, 0x10($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X10);
    // 0x0023A294: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023A298: lwc1        $f2, 0x6624($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X6624);
    // 0x0023A29C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0023A2A0: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x0023A2A4: nop

    // 0x0023A2A8: bc1t        L_0023A2B4
    if (c1cs) {
        // 0x0023A2AC: addiu       $a0, $s1, 0x18
        ctx->r4 = ADD32(ctx->r17, 0X18);
            goto L_0023A2B4;
    }
    // 0x0023A2AC: addiu       $a0, $s1, 0x18
    ctx->r4 = ADD32(ctx->r17, 0X18);
    // 0x0023A2B0: sub.s       $f0, $f2, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f1.fl;
L_0023A2B4:
    // 0x0023A2B4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x0023A2B8: jal         0x0020EF60
    // 0x0023A2BC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_3;
    // 0x0023A2BC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_3:
    // 0x0023A2C0: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
L_0023A2C4:
    // 0x0023A2C4: jal         0x0023C0FC
    // 0x0023A2C8: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    func_0023C0FC(rdram, ctx);
        goto after_4;
    // 0x0023A2C8: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_4:
    // 0x0023A2CC: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x0023A2D0: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x0023A2D4: jal         0x0020EF2C
    // 0x0023A2D8: addiu       $a2, $s1, 0x4
    ctx->r6 = ADD32(ctx->r17, 0X4);
    func_0020EF2C(rdram, ctx);
        goto after_5;
    // 0x0023A2D8: addiu       $a2, $s1, 0x4
    ctx->r6 = ADD32(ctx->r17, 0X4);
    after_5:
    // 0x0023A2DC: lw          $v0, 0xA0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XA0);
    // 0x0023A2E0: beq         $v0, $zero, L_0023A300
    if (ctx->r2 == 0) {
        // 0x0023A2E4: nop
    
            goto L_0023A300;
    }
    // 0x0023A2E4: nop

    // 0x0023A2E8: lw          $t0, 0x18($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X18);
    // 0x0023A2EC: lw          $t1, 0x1C($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X1C);
    // 0x0023A2F0: lw          $t2, 0x20($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X20);
    // 0x0023A2F4: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x0023A2F8: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x0023A2FC: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
L_0023A300:
    // 0x0023A300: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0023A304: lw          $v0, -0x2E70($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2E70);
    // 0x0023A308: beq         $v0, $zero, L_0023A348
    if (ctx->r2 == 0) {
        // 0x0023A30C: nop
    
            goto L_0023A348;
    }
    // 0x0023A30C: nop

    // 0x0023A310: lw          $v0, 0xAC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XAC);
    // 0x0023A314: bne         $v0, $zero, L_0023A348
    if (ctx->r2 != 0) {
        // 0x0023A318: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_0023A348;
    }
    // 0x0023A318: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0023A31C: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0023A320: addiu       $s0, $s0, -0x2E70
    ctx->r16 = ADD32(ctx->r16, -0X2E70);
L_0023A324:
    // 0x0023A324: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0023A328: jalr        $v0
    // 0x0023A32C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x0023A32C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    after_6:
    // 0x0023A330: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0023A334: beq         $v0, $zero, L_0023A348
    if (ctx->r2 == 0) {
        // 0x0023A338: nop
    
            goto L_0023A348;
    }
    // 0x0023A338: nop

    // 0x0023A33C: lw          $v0, 0xAC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XAC);
    // 0x0023A340: beq         $v0, $zero, L_0023A324
    if (ctx->r2 == 0) {
        // 0x0023A344: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_0023A324;
    }
    // 0x0023A344: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
L_0023A348:
    // 0x0023A348: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x0023A34C: beq         $v0, $s5, L_0023A368
    if (ctx->r2 == ctx->r21) {
        // 0x0023A350: addiu       $a0, $sp, 0x18
        ctx->r4 = ADD32(ctx->r29, 0X18);
            goto L_0023A368;
    }
    // 0x0023A350: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x0023A354: beq         $v0, $zero, L_0023A3D8
    if (ctx->r2 == 0) {
        // 0x0023A358: sltiu       $v0, $v0, 0x4
        ctx->r2 = ctx->r2 < 0X4 ? 1 : 0;
            goto L_0023A3D8;
    }
    // 0x0023A358: sltiu       $v0, $v0, 0x4
    ctx->r2 = ctx->r2 < 0X4 ? 1 : 0;
    // 0x0023A35C: beq         $v0, $zero, L_0023A3F0
    if (ctx->r2 == 0) {
        // 0x0023A360: nop
    
            goto L_0023A3F0;
    }
    // 0x0023A360: nop

    // 0x0023A364: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_0023A368:
    // 0x0023A368: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x0023A36C: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x0023A370: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x0023A374: sw          $t0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r8;
    // 0x0023A378: sw          $t1, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r9;
    // 0x0023A37C: sw          $t2, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r10;
    // 0x0023A380: jal         0x0023C120
    // 0x0023A384: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0023C120(rdram, ctx);
        goto after_7;
    // 0x0023A384: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_7:
    // 0x0023A388: lw          $v0, 0xA0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XA0);
    // 0x0023A38C: beq         $v0, $zero, L_0023A3AC
    if (ctx->r2 == 0) {
        // 0x0023A390: nop
    
            goto L_0023A3AC;
    }
    // 0x0023A390: nop

    // 0x0023A394: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x0023A398: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x0023A39C: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x0023A3A0: sw          $t0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r8;
    // 0x0023A3A4: sw          $t1, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r9;
    // 0x0023A3A8: sw          $t2, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r10;
L_0023A3AC:
    // 0x0023A3AC: lw          $v0, 0x98($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X98);
    // 0x0023A3B0: sw          $v0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r2;
    // 0x0023A3B4: lw          $t0, 0x80($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X80);
    // 0x0023A3B8: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x0023A3BC: lw          $t2, 0x88($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X88);
    // 0x0023A3C0: sw          $t0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r8;
    // 0x0023A3C4: sw          $t1, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r9;
    // 0x0023A3C8: sw          $t2, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r10;
    // 0x0023A3CC: lwc1        $f0, 0x90($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X90);
    // 0x0023A3D0: j           L_0023A3F0
    // 0x0023A3D4: swc1        $f0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f0.u32l;
        goto L_0023A3F0;
    // 0x0023A3D4: swc1        $f0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f0.u32l;
L_0023A3D8:
    // 0x0023A3D8: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x0023A3DC: lw          $t1, 0x60($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X60);
    // 0x0023A3E0: lw          $t2, 0x64($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X64);
    // 0x0023A3E4: sw          $t0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r8;
    // 0x0023A3E8: sw          $t1, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r9;
    // 0x0023A3EC: sw          $t2, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r10;
L_0023A3F0:
    // 0x0023A3F0: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x0023A3F4: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x0023A3F8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0023A3FC: beq         $v0, $zero, L_0023A418
    if (ctx->r2 == 0) {
        // 0x0023A400: nop
    
            goto L_0023A418;
    }
    // 0x0023A400: nop

    // 0x0023A404: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0023A408: lw          $v0, 0x1ADC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1ADC);
    // 0x0023A40C: lw          $v0, 0x9C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9C);
    // 0x0023A410: bne         $v0, $zero, L_0023A60C
    if (ctx->r2 != 0) {
        // 0x0023A414: addu        $v0, $s3, $zero
        ctx->r2 = ADD32(ctx->r19, 0);
            goto L_0023A60C;
    }
    // 0x0023A414: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
L_0023A418:
    // 0x0023A418: lwc1        $f0, 0x18($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X18);
    // 0x0023A41C: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x0023A420: lw          $v0, 0xA4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XA4);
    // 0x0023A424: beq         $v0, $zero, L_0023A454
    if (ctx->r2 == 0) {
        // 0x0023A428: sub.s       $f21, $f21, $f0
        CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f21.fl - ctx->f0.fl;
            goto L_0023A454;
    }
    // 0x0023A428: sub.s       $f21, $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f21.fl - ctx->f0.fl;
    // 0x0023A42C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0023A430: jal         0x0026872C
    // 0x0023A434: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_0026872C(rdram, ctx);
        goto after_8;
    // 0x0023A434: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_8:
    // 0x0023A438: lwc1        $f1, 0x8($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X8);
    // 0x0023A43C: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0023A440: nop

    // 0x0023A444: bc1t        L_0023A450
    if (c1cs) {
        // 0x0023A448: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_0023A450;
    }
    // 0x0023A448: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x0023A44C: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
L_0023A450:
    // 0x0023A450: swc1        $f0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f0.u32l;
L_0023A454:
    // 0x0023A454: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x0023A458: beq         $v1, $s5, L_0023A46C
    if (ctx->r3 == ctx->r21) {
        // 0x0023A45C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0023A46C;
    }
    // 0x0023A45C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0023A460: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0023A464: bne         $v1, $v0, L_0023A470
    if (ctx->r3 != ctx->r2) {
        // 0x0023A468: nop
    
            goto L_0023A470;
    }
    // 0x0023A468: nop

L_0023A46C:
    // 0x0023A46C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_0023A470:
    // 0x0023A470: beq         $s0, $zero, L_0023A4A0
    if (ctx->r16 == 0) {
        // 0x0023A474: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_0023A4A0;
    }
    // 0x0023A474: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0023A478: addiu       $v0, $s3, 0x1
    ctx->r2 = ADD32(ctx->r19, 0X1);
    // 0x0023A47C: slt         $v0, $v0, $s4
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x0023A480: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x0023A484: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x0023A488: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x0023A48C: sw          $t0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r8;
    // 0x0023A490: sw          $t1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r9;
    // 0x0023A494: sw          $t2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r10;
    // 0x0023A498: jal         0x0023BE24
    // 0x0023A49C: sw          $v0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r2;
    func_0023BE24(rdram, ctx);
        goto after_9;
    // 0x0023A49C: sw          $v0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r2;
    after_9:
L_0023A4A0:
    // 0x0023A4A0: beq         $s0, $zero, L_0023A4BC
    if (ctx->r16 == 0) {
        // 0x0023A4A4: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_0023A4BC;
    }
    // 0x0023A4A4: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x0023A4A8: slti        $v0, $s6, 0x64
    ctx->r2 = SIGNED(ctx->r22) < 0X64 ? 1 : 0;
    // 0x0023A4AC: beq         $v0, $zero, L_0023A4BC
    if (ctx->r2 == 0) {
        // 0x0023A4B0: slt         $v0, $s3, $s4
        ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r20) ? 1 : 0;
            goto L_0023A4BC;
    }
    // 0x0023A4B0: slt         $v0, $s3, $s4
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x0023A4B4: bne         $v0, $zero, L_0023A2C4
    if (ctx->r2 != 0) {
        // 0x0023A4B8: nop
    
            goto L_0023A2C4;
    }
    // 0x0023A4B8: nop

L_0023A4BC:
    // 0x0023A4BC: lb          $v0, 0x5($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X5);
    // 0x0023A4C0: beq         $v0, $zero, L_0023A5A4
    if (ctx->r2 == 0) {
        // 0x0023A4C4: lui         $v1, 0x100
        ctx->r3 = S32(0X100 << 16);
            goto L_0023A5A4;
    }
    // 0x0023A4C4: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x0023A4C8: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x0023A4CC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0023A4D0: bne         $v0, $zero, L_0023A5A4
    if (ctx->r2 != 0) {
        // 0x0023A4D4: nop
    
            goto L_0023A5A4;
    }
    // 0x0023A4D4: nop

    // 0x0023A4D8: lw          $a1, 0x10($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X10);
    // 0x0023A4DC: jal         0x0023C188
    // 0x0023A4E0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_0023C188(rdram, ctx);
        goto after_10;
    // 0x0023A4E0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_10:
    // 0x0023A4E4: beq         $v0, $zero, L_0023A5A4
    if (ctx->r2 == 0) {
        // 0x0023A4E8: nop
    
            goto L_0023A5A4;
    }
    // 0x0023A4E8: nop

    // 0x0023A4EC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023A4F0: lwc1        $f0, 0x6628($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6628);
    // 0x0023A4F4: c.lt.s      $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f0.fl < ctx->f21.fl;
    // 0x0023A4F8: nop

    // 0x0023A4FC: bc1f        L_0023A53C
    if (!c1cs) {
        // 0x0023A500: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0023A53C;
    }
    // 0x0023A500: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0023A504: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0023A508: lw          $v1, 0x1ADC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1ADC);
    // 0x0023A50C: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x0023A510: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x0023A514: bne         $a0, $v0, L_0023A528
    if (ctx->r4 != ctx->r2) {
        // 0x0023A518: addiu       $v0, $v1, 0xA0
        ctx->r2 = ADD32(ctx->r3, 0XA0);
            goto L_0023A528;
    }
    // 0x0023A518: addiu       $v0, $v1, 0xA0
    ctx->r2 = ADD32(ctx->r3, 0XA0);
    // 0x0023A51C: lb          $v0, 0x4($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X4);
    // 0x0023A520: j           L_0023A538
    // 0x0023A524: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
        goto L_0023A538;
    // 0x0023A524: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
L_0023A528:
    // 0x0023A528: bne         $a0, $v0, L_0023A53C
    if (ctx->r4 != ctx->r2) {
        // 0x0023A52C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0023A53C;
    }
    // 0x0023A52C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0023A530: lb          $v0, 0x5($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X5);
    // 0x0023A534: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
L_0023A538:
    // 0x0023A538: sltu        $s0, $zero, $v0
    ctx->r16 = 0 < ctx->r2 ? 1 : 0;
L_0023A53C:
    // 0x0023A53C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0023A540: jal         0x0026872C
    // 0x0023A544: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_0026872C(rdram, ctx);
        goto after_11;
    // 0x0023A544: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_11:
    // 0x0023A548: beq         $s0, $zero, L_0023A56C
    if (ctx->r16 == 0) {
        // 0x0023A54C: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_0023A56C;
    }
    // 0x0023A54C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x0023A550: lwc1        $f0, 0x60($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X60);
    // 0x0023A554: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x0023A558: nop

    // 0x0023A55C: bc1t        L_0023A580
    if (c1cs) {
        // 0x0023A560: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_0023A580;
    }
    // 0x0023A560: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x0023A564: j           L_0023A5A4
    // 0x0023A568: swc1        $f0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f0.u32l;
        goto L_0023A5A4;
    // 0x0023A568: swc1        $f0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f0.u32l;
L_0023A56C:
    // 0x0023A56C: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x0023A570: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x0023A574: nop

    // 0x0023A578: bc1f        L_0023A5A0
    if (!c1cs) {
        // 0x0023A57C: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_0023A5A0;
    }
    // 0x0023A57C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_0023A580:
    // 0x0023A580: beq         $s0, $zero, L_0023A594
    if (ctx->r16 == 0) {
        // 0x0023A584: nop
    
            goto L_0023A594;
    }
    // 0x0023A584: nop

    // 0x0023A588: lwc1        $f0, 0x60($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X60);
    // 0x0023A58C: j           L_0023A5A4
    // 0x0023A590: swc1        $f0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f0.u32l;
        goto L_0023A5A4;
    // 0x0023A590: swc1        $f0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f0.u32l;
L_0023A594:
    // 0x0023A594: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x0023A598: j           L_0023A5A4
    // 0x0023A59C: swc1        $f0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f0.u32l;
        goto L_0023A5A4;
    // 0x0023A59C: swc1        $f0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f0.u32l;
L_0023A5A0:
    // 0x0023A5A0: swc1        $f0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f0.u32l;
L_0023A5A4:
    // 0x0023A5A4: lw          $v0, 0xA4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XA4);
    // 0x0023A5A8: beq         $v0, $zero, L_0023A60C
    if (ctx->r2 == 0) {
        // 0x0023A5AC: addu        $v0, $s3, $zero
        ctx->r2 = ADD32(ctx->r19, 0);
            goto L_0023A60C;
    }
    // 0x0023A5AC: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x0023A5B0: lw          $v0, 0xA0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XA0);
    // 0x0023A5B4: beq         $v0, $zero, L_0023A60C
    if (ctx->r2 == 0) {
        // 0x0023A5B8: addu        $v0, $s3, $zero
        ctx->r2 = ADD32(ctx->r19, 0);
            goto L_0023A60C;
    }
    // 0x0023A5B8: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x0023A5BC: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0023A5C0: c.eq.s      $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f20.fl == ctx->f1.fl;
    // 0x0023A5C4: nop

    // 0x0023A5C8: bc1t        L_0023A60C
    if (c1cs) {
        // 0x0023A5CC: nop
    
            goto L_0023A60C;
    }
    // 0x0023A5CC: nop

    // 0x0023A5D0: lwc1        $f0, 0x8($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X8);
    // 0x0023A5D4: c.eq.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl == ctx->f1.fl;
    // 0x0023A5D8: nop

    // 0x0023A5DC: bc1t        L_0023A60C
    if (c1cs) {
        // 0x0023A5E0: nop
    
            goto L_0023A60C;
    }
    // 0x0023A5E0: nop

    // 0x0023A5E4: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x0023A5E8: sub.s       $f1, $f0, $f22
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f1.fl = ctx->f0.fl - ctx->f22.fl;
    // 0x0023A5EC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023A5F0: lwc1        $f0, 0x662C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X662C);
    // 0x0023A5F4: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0023A5F8: nop

    // 0x0023A5FC: bc1f        L_0023A60C
    if (!c1cs) {
        // 0x0023A600: nop
    
            goto L_0023A60C;
    }
    // 0x0023A600: nop

    // 0x0023A604: div.s       $f0, $f1, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = DIV_S(ctx->f1.fl, ctx->f20.fl);
    // 0x0023A608: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
L_0023A60C:
    // 0x0023A60C: lw          $ra, 0xE4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XE4);
    // 0x0023A610: lw          $s6, 0xE0($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XE0);
    // 0x0023A614: lw          $s5, 0xDC($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XDC);
    // 0x0023A618: lw          $s4, 0xD8($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XD8);
    // 0x0023A61C: lw          $s3, 0xD4($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XD4);
    // 0x0023A620: lw          $s2, 0xD0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XD0);
    // 0x0023A624: lw          $s1, 0xCC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XCC);
    // 0x0023A628: lw          $s0, 0xC8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XC8);
    // 0x0023A62C: ldc1        $f22, 0xF8($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0XF8);
    // 0x0023A630: ldc1        $f21, 0xF0($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0XF0);
    // 0x0023A634: ldc1        $f20, 0xE8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XE8);
    // 0x0023A638: jr          $ra
    // 0x0023A63C: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
    return;
    // 0x0023A63C: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
;}
RECOMP_FUNC void func_0042EE4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042EE4C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x0042EE50: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x0042EE54: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x0042EE58: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x0042EE5C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0042EE60: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x0042EE64: addu        $v0, $t0, $zero
    ctx->r2 = ADD32(ctx->r8, 0);
    // 0x0042EE68: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x0042EE6C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0042EE70: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0042EE74: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0042EE78: srl         $v1, $a2, 3
    ctx->r3 = S32(U32(ctx->r6) >> 3);
    // 0x0042EE7C: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    // 0x0042EE80: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0042EE84: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0042EE88: andi        $a2, $a2, 0x7
    ctx->r6 = ctx->r6 & 0X7;
    // 0x0042EE8C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0042EE90: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x0042EE94: srav        $a2, $t1, $a2
    ctx->r6 = S32(SIGNED(ctx->r9) >> (ctx->r6 & 31));
    // 0x0042EE98: sw          $a1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r5;
    // 0x0042EE9C: addu        $t0, $a1, $zero
    ctx->r8 = ADD32(ctx->r5, 0);
    // 0x0042EEA0: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x0042EEA4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0042EEA8: and         $v1, $v1, $a2
    ctx->r3 = ctx->r3 & ctx->r6;
    // 0x0042EEAC: sltu        $v1, $zero, $v1
    ctx->r3 = 0 < ctx->r3 ? 1 : 0;
    // 0x0042EEB0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0042EEB4: srl         $v1, $a3, 3
    ctx->r3 = S32(U32(ctx->r7) >> 3);
    // 0x0042EEB8: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0042EEBC: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0042EEC0: andi        $a3, $a3, 0x7
    ctx->r7 = ctx->r7 & 0X7;
    // 0x0042EEC4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0042EEC8: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x0042EECC: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x0042EED0: srav        $a3, $t1, $a3
    ctx->r7 = S32(SIGNED(ctx->r9) >> (ctx->r7 & 31));
    // 0x0042EED4: sw          $t0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r8;
    // 0x0042EED8: and         $v0, $v0, $a3
    ctx->r2 = ctx->r2 & ctx->r7;
    // 0x0042EEDC: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x0042EEE0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0042EEE4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0042EEE8: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x0042EEEC: srl         $v1, $a1, 3
    ctx->r3 = S32(U32(ctx->r5) >> 3);
    // 0x0042EEF0: andi        $a1, $a1, 0x7
    ctx->r5 = ctx->r5 & 0X7;
    // 0x0042EEF4: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0042EEF8: srav        $t1, $t1, $a1
    ctx->r9 = S32(SIGNED(ctx->r9) >> (ctx->r5 & 31));
    // 0x0042EEFC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0042EF00: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x0042EF04: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x0042EF08: and         $v0, $v0, $t1
    ctx->r2 = ctx->r2 & ctx->r9;
    // 0x0042EF0C: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x0042EF10: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x0042EF14: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0042EF18: jal         0x0042EC30
    // 0x0042EF1C: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    func_0042EC30(rdram, ctx);
        goto after_0;
    // 0x0042EF1C: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    after_0:
    // 0x0042EF20: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0042EF24: jr          $ra
    // 0x0042EF28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0042EF28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00460018(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00460018: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x0046001C: beq         $v0, $zero, L_0046004C
    if (ctx->r2 == 0) {
        // 0x00460020: nop
    
            goto L_0046004C;
    }
    // 0x00460020: nop

L_00460024:
    // 0x00460024: lbu         $a1, 0x0($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X0);
    // 0x00460028: addiu       $v0, $a1, -0x41
    ctx->r2 = ADD32(ctx->r5, -0X41);
    // 0x0046002C: sltiu       $v0, $v0, 0x1A
    ctx->r2 = ctx->r2 < 0X1A ? 1 : 0;
    // 0x00460030: beq         $v0, $zero, L_0046003C
    if (ctx->r2 == 0) {
        // 0x00460034: addiu       $v0, $a1, 0x20
        ctx->r2 = ADD32(ctx->r5, 0X20);
            goto L_0046003C;
    }
    // 0x00460034: addiu       $v0, $a1, 0x20
    ctx->r2 = ADD32(ctx->r5, 0X20);
    // 0x00460038: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_0046003C:
    // 0x0046003C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00460040: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00460044: bne         $v0, $zero, L_00460024
    if (ctx->r2 != 0) {
        // 0x00460048: nop
    
            goto L_00460024;
    }
    // 0x00460048: nop

L_0046004C:
    // 0x0046004C: jr          $ra
    // 0x00460050: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    return;
    // 0x00460050: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
;}
RECOMP_FUNC void func_00289888(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00289888: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0028988C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00289890: jal         0x00288F60
    // 0x00289894: nop

    func_00288F60(rdram, ctx);
        goto after_0;
    // 0x00289894: nop

    after_0:
    // 0x00289898: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0028989C: jr          $ra
    // 0x002898A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002898A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0025E698(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025E698: jr          $ra
    // 0x0025E69C: nop

    return;
    // 0x0025E69C: nop

;}
RECOMP_FUNC void func_00259DD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00259DD0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00259DD4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00259DD8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00259DDC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00259DE0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00259DE4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00259DE8: lw          $a0, 0x1A8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1A8);
    // 0x00259DEC: jal         0x0024E700
    // 0x00259DF0: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    func_0024E700(rdram, ctx);
        goto after_0;
    // 0x00259DF0: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    after_0:
    // 0x00259DF4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00259DF8: bne         $v0, $v1, L_00259E0C
    if (ctx->r2 != ctx->r3) {
        // 0x00259DFC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00259E0C;
    }
    // 0x00259DFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00259E00: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00259E04: j           L_00259E14
    // 0x00259E08: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
        goto L_00259E14;
    // 0x00259E08: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
L_00259E0C:
    // 0x00259E0C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00259E10: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
L_00259E14:
    // 0x00259E14: jal         0x00243414
    // 0x00259E18: nop

    func_00243414(rdram, ctx);
        goto after_1;
    // 0x00259E18: nop

    after_1:
    // 0x00259E1C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00259E20: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00259E24: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00259E28: jr          $ra
    // 0x00259E2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00259E2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00268210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00268210: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00268214: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00268218: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0026821C: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x00268220: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00268224: beq         $v1, $v0, L_00268294
    if (ctx->r3 == ctx->r2) {
        // 0x00268228: slti        $v0, $v1, 0x6
        ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
            goto L_00268294;
    }
    // 0x00268228: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x0026822C: beq         $v0, $zero, L_00268244
    if (ctx->r2 == 0) {
        // 0x00268230: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00268244;
    }
    // 0x00268230: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00268234: beq         $v1, $v0, L_00268294
    if (ctx->r3 == ctx->r2) {
        // 0x00268238: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00268294;
    }
    // 0x00268238: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0026823C: j           L_00268298
    // 0x00268240: nop

        goto L_00268298;
    // 0x00268240: nop

L_00268244:
    // 0x00268244: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x00268248: bne         $v1, $v0, L_00268298
    if (ctx->r3 != ctx->r2) {
        // 0x0026824C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00268298;
    }
    // 0x0026824C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00268250: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x00268254: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00268258: bne         $v1, $v0, L_00268298
    if (ctx->r3 != ctx->r2) {
        // 0x0026825C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00268298;
    }
    // 0x0026825C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00268260: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00268264: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x00268268: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0026826C: beq         $v0, $zero, L_00268298
    if (ctx->r2 == 0) {
        // 0x00268270: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00268298;
    }
    // 0x00268270: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00268274: lw          $v0, 0x1A8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1A8);
    // 0x00268278: lw          $v0, 0xBB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XBB0);
    // 0x0026827C: bne         $v0, $zero, L_00268298
    if (ctx->r2 != 0) {
        // 0x00268280: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00268298;
    }
    // 0x00268280: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00268284: jal         0x00284188
    // 0x00268288: nop

    func_00284188(rdram, ctx);
        goto after_0;
    // 0x00268288: nop

    after_0:
    // 0x0026828C: beq         $v0, $zero, L_00268298
    if (ctx->r2 == 0) {
        // 0x00268290: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00268298;
    }
    // 0x00268290: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00268294:
    // 0x00268294: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00268298:
    // 0x00268298: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0026829C: jr          $ra
    // 0x002682A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002682A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0029BC70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029BC70: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0029BC74: lw          $v1, -0x76D0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X76D0);
    // 0x0029BC78: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0029BC7C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x0029BC80: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0029BC84: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0029BC88: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0029BC8C: beq         $v0, $v1, L_0029BDA4
    if (ctx->r2 == ctx->r3) {
        // 0x0029BC90: nop
    
            goto L_0029BDA4;
    }
    // 0x0029BC90: nop

    // 0x0029BC94: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x0029BC98: addiu       $s1, $s1, 0x2A30
    ctx->r17 = ADD32(ctx->r17, 0X2A30);
L_0029BC9C:
    // 0x0029BC9C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0029BCA0: lw          $v0, -0x76D0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X76D0);
    // 0x0029BCA4: lw          $s0, 0x0($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X0);
    // 0x0029BCA8: bne         $s0, $v0, L_0029BCC8
    if (ctx->r16 != ctx->r2) {
        // 0x0029BCAC: nop
    
            goto L_0029BCC8;
    }
    // 0x0029BCAC: nop

    // 0x0029BCB0: jal         0x0029E210
    // 0x0029BCB4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_0029E210(rdram, ctx);
        goto after_0;
    // 0x0029BCB4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
    // 0x0029BCB8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0029BCBC: sw          $zero, 0x2A30($at)
    MEM_W(0X2A30, ctx->r1) = 0;
    // 0x0029BCC0: j           L_0029BDA4
    // 0x0029BCC4: nop

        goto L_0029BDA4;
    // 0x0029BCC4: nop

L_0029BCC8:
    // 0x0029BCC8: jal         0x0029DFC0
    // 0x0029BCCC: nop

    func_0029DFC0(rdram, ctx);
        goto after_1;
    // 0x0029BCCC: nop

    after_1:
    // 0x0029BCD0: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x0029BCD4: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x0029BCD8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0029BCDC: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x0029BCE0: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x0029BCE4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0029BCE8: sltu        $v0, $a2, $v1
    ctx->r2 = ctx->r6 < ctx->r3 ? 1 : 0;
    // 0x0029BCEC: bne         $v0, $zero, L_0029BD0C
    if (ctx->r2 != 0) {
        // 0x0029BCF0: nop
    
            goto L_0029BD0C;
    }
    // 0x0029BCF0: nop

    // 0x0029BCF4: bne         $v1, $a2, L_0029BD3C
    if (ctx->r3 != ctx->r6) {
        // 0x0029BCF8: nop
    
            goto L_0029BD3C;
    }
    // 0x0029BCF8: nop

    // 0x0029BCFC: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x0029BD00: sltu        $v0, $a3, $v0
    ctx->r2 = ctx->r7 < ctx->r2 ? 1 : 0;
    // 0x0029BD04: beq         $v0, $zero, L_0029BD3C
    if (ctx->r2 == 0) {
        // 0x0029BD08: nop
    
            goto L_0029BD3C;
    }
    // 0x0029BD08: nop

L_0029BD0C:
    // 0x0029BD0C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x0029BD10: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    // 0x0029BD14: sltu        $v0, $a1, $a3
    ctx->r2 = ctx->r5 < ctx->r7 ? 1 : 0;
    // 0x0029BD18: subu        $a1, $a1, $a3
    ctx->r5 = SUB32(ctx->r5, ctx->r7);
    // 0x0029BD1C: subu        $a0, $a0, $a2
    ctx->r4 = SUB32(ctx->r4, ctx->r6);
    // 0x0029BD20: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x0029BD24: sw          $a0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r4;
    // 0x0029BD28: sw          $a1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r5;
    // 0x0029BD2C: jal         0x0029BE0C
    // 0x0029BD30: nop

    func_0029BE0C(rdram, ctx);
        goto after_2;
    // 0x0029BD30: nop

    after_2:
    // 0x0029BD34: j           L_0029BDA4
    // 0x0029BD38: nop

        goto L_0029BDA4;
    // 0x0029BD38: nop

L_0029BD3C:
    // 0x0029BD3C: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x0029BD40: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0029BD44: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0029BD48: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x0029BD4C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0029BD50: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x0029BD54: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x0029BD58: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x0029BD5C: beq         $a0, $zero, L_0029BD70
    if (ctx->r4 == 0) {
        // 0x0029BD60: sw          $zero, 0x4($s0)
        MEM_W(0X4, ctx->r16) = 0;
            goto L_0029BD70;
    }
    // 0x0029BD60: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x0029BD64: lw          $a1, 0x1C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1C);
    // 0x0029BD68: jal         0x0029B820
    // 0x0029BD6C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    osSendMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x0029BD6C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
L_0029BD70:
    // 0x0029BD70: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x0029BD74: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0029BD78: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0029BD7C: beq         $v0, $zero, L_0029BC9C
    if (ctx->r2 == 0) {
        // 0x0029BD80: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0029BC9C;
    }
    // 0x0029BD80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0029BD84: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x0029BD88: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0029BD8C: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
    // 0x0029BD90: sw          $v1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r3;
    // 0x0029BD94: jal         0x0029BE6C
    // 0x0029BD98: nop

    func_0029BE6C(rdram, ctx);
        goto after_4;
    // 0x0029BD98: nop

    after_4:
    // 0x0029BD9C: j           L_0029BC9C
    // 0x0029BDA0: nop

        goto L_0029BC9C;
    // 0x0029BDA0: nop

L_0029BDA4:
    // 0x0029BDA4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x0029BDA8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0029BDAC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0029BDB0: jr          $ra
    // 0x0029BDB4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0029BDB4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0042F590(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042F590: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0042F594: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0042F598: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x0042F59C: addiu       $s0, $s0, 0x56B0
    ctx->r16 = ADD32(ctx->r16, 0X56B0);
    // 0x0042F5A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0042F5A4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0042F5A8: beq         $v0, $zero, L_0042F5F0
    if (ctx->r2 == 0) {
        // 0x0042F5AC: nop
    
            goto L_0042F5F0;
    }
    // 0x0042F5AC: nop

    // 0x0042F5B0: lw          $v0, 0x350($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X350);
    // 0x0042F5B4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0042F5B8: lui         $at, 0x44
    ctx->r1 = S32(0X44 << 16);
    // 0x0042F5BC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0042F5C0: lw          $a0, -0x7B18($at)
    ctx->r4 = MEM_W(ctx->r1, -0X7B18);
    // 0x0042F5C4: jal         0x0042EF2C
    // 0x0042F5C8: nop

    func_0042EF2C(rdram, ctx);
        goto after_0;
    // 0x0042F5C8: nop

    after_0:
    // 0x0042F5CC: lw          $v0, 0x350($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X350);
    // 0x0042F5D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0042F5D4: sw          $v0, 0x350($s0)
    MEM_W(0X350, ctx->r16) = ctx->r2;
    // 0x0042F5D8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0042F5DC: lui         $at, 0x44
    ctx->r1 = S32(0X44 << 16);
    // 0x0042F5E0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0042F5E4: lw          $v0, -0x7B18($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7B18);
    // 0x0042F5E8: beql        $v0, $zero, L_0042F5F0
    if (ctx->r2 == 0) {
        // 0x0042F5EC: sw          $zero, 0x350($s0)
        MEM_W(0X350, ctx->r16) = 0;
            goto L_0042F5F0;
    }
    goto skip_0;
    // 0x0042F5EC: sw          $zero, 0x350($s0)
    MEM_W(0X350, ctx->r16) = 0;
    skip_0:
L_0042F5F0:
    // 0x0042F5F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0042F5F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042F5F8: jr          $ra
    // 0x0042F5FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0042F5FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00444370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00444370: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00444374: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00444378: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x0044437C: beq         $v0, $zero, L_0044439C
    if (ctx->r2 == 0) {
        // 0x00444380: lui         $v1, 0xEFFF
        ctx->r3 = S32(0XEFFF << 16);
            goto L_0044439C;
    }
    // 0x00444380: lui         $v1, 0xEFFF
    ctx->r3 = S32(0XEFFF << 16);
    // 0x00444384: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00444388: lw          $v0, 0x27C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X27C);
    // 0x0044438C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x00444390: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00444394: jal         0x00243414
    // 0x00444398: sw          $v0, 0x27C($a0)
    MEM_W(0X27C, ctx->r4) = ctx->r2;
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00444398: sw          $v0, 0x27C($a0)
    MEM_W(0X27C, ctx->r4) = ctx->r2;
    after_0:
L_0044439C:
    // 0x0044439C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x004443A0: jr          $ra
    // 0x004443A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004443A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_004077E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004077E8: jr          $ra
    // 0x004077EC: sw          $zero, 0x50($a0)
    MEM_W(0X50, ctx->r4) = 0;
    return;
    // 0x004077EC: sw          $zero, 0x50($a0)
    MEM_W(0X50, ctx->r4) = 0;
;}
RECOMP_FUNC void func_00462044(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004291EC:
    // 0x00462044: lw          $s4, 0x4($s3)
    ctx->r20 = MEM_W(ctx->r19, 0X4);
    // 0x00462048: beq         $s4, $zero, L_004620F0
    if (ctx->r20 == 0) {
        // 0x0046204C: addiu       $s1, $zero, -0x1
        ctx->r17 = ADD32(0, -0X1);
            goto L_004620F0;
    }
    // 0x0046204C: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x00462050: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x00462054: sw          $s1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r17;
    // 0x00462058: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0046205C: sw          $ra, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r31;
    // 0x00462060: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    // 0x00462064: lbu         $v0, 0x65($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X65);
    // 0x00462068: beq         $v0, $zero, L_00462084
    if (ctx->r2 == 0) {
        // 0x0046206C: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_00462084;
    }
    // 0x0046206C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00462070: jal         0x00429DE4
    // 0x00462074: sb          $zero, 0x65($s1)
    MEM_B(0X65, ctx->r17) = 0;
    entry_00429DE4(rdram, ctx);
        goto after_0;
    // 0x00462074: sb          $zero, 0x65($s1)
    MEM_B(0X65, ctx->r17) = 0;
    after_0:
    // 0x00462078: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0046207C: bne         $v1, $zero, L_004621EC
    if (ctx->r3 != 0) {
        // 0x00462080: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_004621EC;
    }
    // 0x00462080: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_00462084:
    // 0x00462084: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x00462088: lw          $a1, 0x8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X8);
    // 0x0046208C: jal         0x00299680
    // 0x00462090: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    func_00299680(rdram, ctx);
        goto after_1;
    // 0x00462090: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    after_1:
    // 0x00462094: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00462098: bne         $v1, $zero, L_004621EC
    if (ctx->r3 != 0) {
        // 0x0046209C: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_004621EC;
    }
    // 0x0046209C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x004620A0: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x004620A4: jal         0x00429CD4
    // 0x004620A8: addiu       $a2, $sp, 0x52
    ctx->r6 = ADD32(ctx->r29, 0X52);
    entry_00429CD4(rdram, ctx);
        goto after_2;
    // 0x004620A8: addiu       $a2, $sp, 0x52
    ctx->r6 = ADD32(ctx->r29, 0X52);
    after_2:
    // 0x004620AC: lhu         $v1, 0x2C($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X2C);
    // 0x004620B0: lhu         $v0, 0x50($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X50);
    // 0x004620B4: bne         $v1, $v0, L_004620CC
    if (ctx->r3 != ctx->r2) {
        // 0x004620B8: addiu       $s0, $sp, 0x10
        ctx->r16 = ADD32(ctx->r29, 0X10);
            goto L_004620CC;
    }
    // 0x004620B8: addiu       $s0, $sp, 0x10
    ctx->r16 = ADD32(ctx->r29, 0X10);
    // 0x004620BC: lhu         $v1, 0x2E($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X2E);
    // 0x004620C0: lhu         $v0, 0x52($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X52);
    // 0x004620C4: beq         $v1, $v0, L_00462114
    if (ctx->r3 == ctx->r2) {
        // 0x004620C8: nop
    
            goto L_00462114;
    }
    // 0x004620C8: nop

L_004620CC:
    // 0x004620CC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x004620D0: jal         0x00429668
    // 0x004620D4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    entry_00429668(rdram, ctx);
        goto after_3;
    // 0x004620D4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x004620D8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x004620DC: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x004620E0: bne         $v1, $v0, L_0046210C
    if (ctx->r3 != ctx->r2) {
        // 0x004620E4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0046210C;
    }
    // 0x004620E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x004620E8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x004620EC: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
L_004620F0:
    // 0x004620F0: jal         0x00429380
    // 0x004620F4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    entry_00429380(rdram, ctx);
        goto after_4;
    // 0x004620F4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_4:
    // 0x004620F8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x004620FC: beq         $v1, $zero, L_00462114
    if (ctx->r3 == 0) {
        // 0x00462100: nop
    
            goto L_00462114;
    }
    // 0x00462100: nop

    // 0x00462104: j           L_004291EC
    // 0x00462108: nop

    entry_004291EC(rdram, ctx);
    return;
    // 0x00462108: nop

L_0046210C:
    // 0x0046210C: bne         $v1, $zero, L_004621EC
    if (ctx->r3 != 0) {
        // 0x00462110: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_004621EC;
    }
    // 0x00462110: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_00462114:
    // 0x00462114: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x00462118: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0046211C: bne         $v0, $zero, L_0046215C
    if (ctx->r2 != 0) {
        // 0x00462120: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0046215C;
    }
    // 0x00462120: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00462124: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00462128: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0046212C: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x00462130: jal         0x00429380
    // 0x00462134: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    entry_00429380(rdram, ctx);
        goto after_5;
    // 0x00462134: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_5:
    // 0x00462138: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0046213C: bne         $v1, $zero, L_004621EC
    if (ctx->r3 != 0) {
        // 0x00462140: nop
    
            goto L_004621EC;
    }
    // 0x00462140: nop

    // 0x00462144: lhu         $v0, 0x48($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X48);
    // 0x00462148: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0046214C: bne         $v0, $zero, L_0046215C
    if (ctx->r2 != 0) {
        // 0x00462150: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0046215C;
    }
    // 0x00462150: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00462154: j           L_004291EC
    // 0x00462158: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    entry_004291EC(rdram, ctx);
    return;
    // 0x00462158: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_0046215C:
    // 0x0046215C: addu        $v1, $s1, $a0
    ctx->r3 = ADD32(ctx->r17, ctx->r4);
L_00462160:
    // 0x00462160: addu        $v0, $s0, $a0
    ctx->r2 = ADD32(ctx->r16, ctx->r4);
    // 0x00462164: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x00462168: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0046216C: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x00462170: slti        $v0, $a0, 0x20
    ctx->r2 = SIGNED(ctx->r4) < 0X20 ? 1 : 0;
    // 0x00462174: bne         $v0, $zero, L_00462160
    if (ctx->r2 != 0) {
        // 0x00462178: addu        $v1, $s1, $a0
        ctx->r3 = ADD32(ctx->r17, ctx->r4);
            goto L_00462160;
    }
    // 0x00462178: addu        $v1, $s1, $a0
    ctx->r3 = ADD32(ctx->r17, ctx->r4);
    // 0x0046217C: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x00462180: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x00462184: lw          $a1, 0x8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X8);
    // 0x00462188: lbu         $v0, 0x1B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1B);
    // 0x0046218C: addiu       $a3, $s1, 0x2C
    ctx->r7 = ADD32(ctx->r17, 0X2C);
    // 0x00462190: sw          $v0, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->r2;
    // 0x00462194: lbu         $v1, 0x1A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1A);
    // 0x00462198: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x0046219C: sw          $v0, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->r2;
    // 0x004621A0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x004621A4: sw          $v0, 0x54($s1)
    MEM_W(0X54, ctx->r17) = ctx->r2;
    // 0x004621A8: sb          $v1, 0x64($s1)
    MEM_B(0X64, ctx->r17) = ctx->r3;
    // 0x004621AC: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x004621B0: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x004621B4: lbu         $v0, 0x64($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X64);
    // 0x004621B8: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    // 0x004621BC: sw          $v1, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->r3;
    // 0x004621C0: lbu         $v1, 0x64($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X64);
    // 0x004621C4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x004621C8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x004621CC: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x004621D0: sw          $v0, 0x58($s1)
    MEM_W(0X58, ctx->r17) = ctx->r2;
    // 0x004621D4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x004621D8: jal         0x00299680
    // 0x004621DC: sw          $v0, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->r2;
    func_00299680(rdram, ctx);
        goto after_6;
    // 0x004621DC: sw          $v0, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->r2;
    after_6:
    // 0x004621E0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x004621E4: beql        $v1, $zero, L_004621EC
    if (ctx->r3 == 0) {
        // 0x004621E8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_004621EC;
    }
    goto skip_0;
    // 0x004621E8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
L_004621EC:
    // 0x004621EC: lw          $ra, 0x60($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X60);
    // 0x004621F0: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x004621F4: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x004621F8: jr          $ra
    // 0x004621FC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x004621FC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_0044BB28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044BB28: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x0044BB2C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0044BB30: lw          $v0, 0x1BB8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB8);
    // 0x0044BB34: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0044BB38: lw          $a0, -0x6770($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X6770);
    // 0x0044BB3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0044BB40: beq         $v0, $zero, L_0044BB90
    if (ctx->r2 == 0) {
        // 0x0044BB44: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_0044BB90;
    }
    // 0x0044BB44: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0044BB48: addiu       $a1, $a3, -0x8D
    ctx->r5 = ADD32(ctx->r7, -0X8D);
    // 0x0044BB4C: sltiu       $v0, $a1, 0x6
    ctx->r2 = ctx->r5 < 0X6 ? 1 : 0;
    // 0x0044BB50: beq         $v0, $zero, L_0044BB88
    if (ctx->r2 == 0) {
        // 0x0044BB54: nop
    
            goto L_0044BB88;
    }
    // 0x0044BB54: nop

    // 0x0044BB58: beq         $a0, $zero, L_0044BB88
    if (ctx->r4 == 0) {
        // 0x0044BB5C: addiu       $a0, $a0, 0x9F4
        ctx->r4 = ADD32(ctx->r4, 0X9F4);
            goto L_0044BB88;
    }
    // 0x0044BB5C: addiu       $a0, $a0, 0x9F4
    ctx->r4 = ADD32(ctx->r4, 0X9F4);
    // 0x0044BB60: sra         $v0, $a1, 3
    ctx->r2 = S32(SIGNED(ctx->r5) >> 3);
    // 0x0044BB64: andi        $a1, $a1, 0x7
    ctx->r5 = ctx->r5 & 0X7;
    // 0x0044BB68: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0044BB6C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x0044BB70: lbu         $a2, 0x0($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0X0);
    // 0x0044BB74: sllv        $v1, $v1, $a1
    ctx->r3 = S32(ctx->r3 << (ctx->r5 & 31));
    // 0x0044BB78: and         $v0, $a2, $v1
    ctx->r2 = ctx->r6 & ctx->r3;
    // 0x0044BB7C: bne         $v0, $zero, L_0044BB90
    if (ctx->r2 != 0) {
        // 0x0044BB80: or          $v0, $a2, $v1
        ctx->r2 = ctx->r6 | ctx->r3;
            goto L_0044BB90;
    }
    // 0x0044BB80: or          $v0, $a2, $v1
    ctx->r2 = ctx->r6 | ctx->r3;
    // 0x0044BB84: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
L_0044BB88:
    // 0x0044BB88: jal         0x00412438
    // 0x0044BB8C: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    func_00412438(rdram, ctx);
        goto after_0;
    // 0x0044BB8C: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    after_0:
L_0044BB90:
    // 0x0044BB90: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0044BB94: jr          $ra
    // 0x0044BB98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0044BB98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0025340C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025340C: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00253410: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x00253414: lui         $v0, 0xD5D2
    ctx->r2 = S32(0XD5D2 << 16);
    // 0x00253418: ori         $v0, $v0, 0xFDF
    ctx->r2 = ctx->r2 | 0XFDF;
    // 0x0025341C: multu       $a1, $v0
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00253420: mfhi        $v1
    ctx->r3 = hi;
    // 0x00253424: jr          $ra
    // 0x00253428: srl         $v0, $v1, 12
    ctx->r2 = S32(U32(ctx->r3) >> 12);
    return;
    // 0x00253428: srl         $v0, $v1, 12
    ctx->r2 = S32(U32(ctx->r3) >> 12);
;}
RECOMP_FUNC void func_00454120(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00454120: jr          $ra
    // 0x00454124: addiu       $v0, $zero, 0x1DB2
    ctx->r2 = ADD32(0, 0X1DB2);
    return;
    // 0x00454124: addiu       $v0, $zero, 0x1DB2
    ctx->r2 = ADD32(0, 0X1DB2);
;}
RECOMP_FUNC void func_00202934(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00202934: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x00202938: sll         $v0, $t0, 5
    ctx->r2 = S32(ctx->r8 << 5);
    // 0x0020293C: srl         $v1, $t0, 1
    ctx->r3 = S32(U32(ctx->r8) >> 1);
    // 0x00202940: xor         $v0, $v0, $v1
    ctx->r2 = ctx->r2 ^ ctx->r3;
    // 0x00202944: srl         $v1, $t0, 9
    ctx->r3 = S32(U32(ctx->r8) >> 9);
    // 0x00202948: xor         $v0, $v0, $v1
    ctx->r2 = ctx->r2 ^ ctx->r3;
    // 0x0020294C: srl         $v1, $t0, 17
    ctx->r3 = S32(U32(ctx->r8) >> 17);
    // 0x00202950: xor         $v0, $v0, $v1
    ctx->r2 = ctx->r2 ^ ctx->r3;
    // 0x00202954: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00202958: lw          $a0, -0x7E40($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7E40);
    // 0x0020295C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00202960: lw          $v1, -0x7E3C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7E3C);
    // 0x00202964: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x00202968: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x0020296C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00202970: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x00202974: bne         $v0, $zero, L_00202988
    if (ctx->r2 != 0) {
        // 0x00202978: nop
    
            goto L_00202988;
    }
    // 0x00202978: nop

    // 0x0020297C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
L_00202980:
    // 0x00202980: jr          $ra
    // 0x00202984: sw          $a1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r5;
    return;
    // 0x00202984: sw          $a1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r5;
L_00202988:
    // 0x00202988: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0020298C: beq         $v0, $t0, L_00202980
    if (ctx->r2 == ctx->r8) {
        // 0x00202990: addu        $a2, $v1, $zero
        ctx->r6 = ADD32(ctx->r3, 0);
            goto L_00202980;
    }
    // 0x00202990: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x00202994: lw          $v1, 0xC($a2)
    ctx->r3 = MEM_W(ctx->r6, 0XC);
    // 0x00202998: bne         $v1, $zero, L_00202988
    if (ctx->r3 != 0) {
        // 0x0020299C: nop
    
            goto L_00202988;
    }
    // 0x0020299C: nop

    // 0x002029A0: lw          $v0, 0x8($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X8);
    // 0x002029A4: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x002029A8: lw          $v1, -0x7E3C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7E3C);
    // 0x002029AC: ori         $a0, $v0, 0x1
    ctx->r4 = ctx->r2 | 0X1;
    // 0x002029B0: sll         $v0, $a0, 4
    ctx->r2 = S32(ctx->r4 << 4);
    // 0x002029B4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x002029B8: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x002029BC: beq         $v0, $zero, L_002029F4
    if (ctx->r2 == 0) {
        // 0x002029C0: sll         $v0, $a0, 4
        ctx->r2 = S32(ctx->r4 << 4);
            goto L_002029F4;
    }
    // 0x002029C0: sll         $v0, $a0, 4
    ctx->r2 = S32(ctx->r4 << 4);
    // 0x002029C4: lui         $a3, 0x800E
    ctx->r7 = S32(0X800E << 16);
    // 0x002029C8: lw          $a3, -0x7E38($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X7E38);
    // 0x002029CC: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
L_002029D0:
    // 0x002029D0: and         $a0, $a0, $a3
    ctx->r4 = ctx->r4 & ctx->r7;
    // 0x002029D4: sll         $v0, $a0, 4
    ctx->r2 = S32(ctx->r4 << 4);
    // 0x002029D8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x002029DC: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x002029E0: bnel        $v0, $zero, L_002029D0
    if (ctx->r2 != 0) {
        // 0x002029E4: addiu       $a0, $a0, 0x2
        ctx->r4 = ADD32(ctx->r4, 0X2);
            goto L_002029D0;
    }
    goto skip_0;
    // 0x002029E4: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    skip_0:
    // 0x002029E8: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x002029EC: lw          $v1, -0x7E3C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7E3C);
    // 0x002029F0: sll         $v0, $a0, 4
    ctx->r2 = S32(ctx->r4 << 4);
L_002029F4:
    // 0x002029F4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x002029F8: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x002029FC: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
    // 0x00202A00: jr          $ra
    // 0x00202A04: sw          $v0, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r2;
    return;
    // 0x00202A04: sw          $v0, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r2;
;}
RECOMP_FUNC void func_004540F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004540F0: jr          $ra
    // 0x004540F4: addiu       $v0, $zero, 0xFA0
    ctx->r2 = ADD32(0, 0XFA0);
    return;
    // 0x004540F4: addiu       $v0, $zero, 0xFA0
    ctx->r2 = ADD32(0, 0XFA0);
;}
RECOMP_FUNC void func_002684E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002684E4: lwc1        $f0, 0x2C($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X2C);
    // 0x002684E8: jr          $ra
    // 0x002684EC: nop

    return;
    // 0x002684EC: nop

;}
RECOMP_FUNC void func_0040B918(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040B918: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0040B91C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0040B920: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0040B924: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0040B928: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x0040B92C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0040B930: lw          $a2, 0x14($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X14);
    // 0x0040B934: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040B938: lwc1        $f0, 0x888($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X888);
    // 0x0040B93C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0040B940: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x0040B944: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x0040B948: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x0040B94C: jal         0x00246310
    // 0x0040B950: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_00246310(rdram, ctx);
        goto after_0;
    // 0x0040B950: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x0040B954: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0040B958: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x0040B95C: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x0040B960: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x0040B964: jal         0x00245BAC
    // 0x0040B968: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x0040B968: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x0040B96C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0040B970: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0040B974: jal         0x0020EF2C
    // 0x0040B978: addiu       $a2, $s0, 0x4
    ctx->r6 = ADD32(ctx->r16, 0X4);
    func_0020EF2C(rdram, ctx);
        goto after_2;
    // 0x0040B978: addiu       $a2, $s0, 0x4
    ctx->r6 = ADD32(ctx->r16, 0X4);
    after_2:
    // 0x0040B97C: lwc1        $f1, 0x10($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x0040B980: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0040B984: lwc1        $f0, 0x14($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X14);
    // 0x0040B988: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0040B98C: lwc1        $f12, 0x18($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
    // 0x0040B990: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0040B994: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0040B998: jal         0x00298470
    // 0x0040B99C: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_3;
    // 0x0040B99C: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_3:
    // 0x0040B9A0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040B9A4: lwc1        $f1, 0x88C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X88C);
    // 0x0040B9A8: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0040B9AC: nop

    // 0x0040B9B0: bc1f        L_0040B9C4
    if (!c1cs) {
        // 0x0040B9B4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0040B9C4;
    }
    // 0x0040B9B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0040B9B8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0040B9BC: jal         0x00243414
    // 0x0040B9C0: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    func_00243414(rdram, ctx);
        goto after_4;
    // 0x0040B9C0: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    after_4:
L_0040B9C4:
    // 0x0040B9C4: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x0040B9C8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0040B9CC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0040B9D0: jr          $ra
    // 0x0040B9D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0040B9D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0044325C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_0023B664(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023B664: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x0023B668: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x0023B66C: addu        $s6, $a1, $zero
    ctx->r22 = ADD32(ctx->r5, 0);
    // 0x0023B670: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x0023B674: sll         $v0, $a2, 2
    ctx->r2 = S32(ctx->r6 << 2);
    // 0x0023B678: addu        $v0, $s6, $v0
    ctx->r2 = ADD32(ctx->r22, ctx->r2);
    // 0x0023B67C: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x0023B680: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x0023B684: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x0023B688: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x0023B68C: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x0023B690: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x0023B694: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x0023B698: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x0023B69C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x0023B6A0: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x0023B6A4: lw          $s2, 0x10($v0)
    ctx->r18 = MEM_W(ctx->r2, 0X10);
    // 0x0023B6A8: bne         $s2, $zero, L_0023B6C0
    if (ctx->r18 != 0) {
        // 0x0023B6AC: addu        $s7, $a3, $zero
        ctx->r23 = ADD32(ctx->r7, 0);
            goto L_0023B6C0;
    }
    // 0x0023B6AC: addu        $s7, $a3, $zero
    ctx->r23 = ADD32(ctx->r7, 0);
    // 0x0023B6B0: j           L_0023BDF4
    // 0x0023B6B4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_0023BDF4;
    // 0x0023B6B4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0023B6B8:
    // 0x0023B6B8: j           L_0023B6FC
    // 0x0023B6BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_0023B6FC;
    // 0x0023B6BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_0023B6C0:
    // 0x0023B6C0: lhu         $v0, 0x2($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X2);
    // 0x0023B6C4: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x0023B6C8: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x0023B6CC: lw          $s3, 0x0($t0)
    ctx->r19 = MEM_W(ctx->r8, 0X0);
    // 0x0023B6D0: lw          $s4, 0x4($t0)
    ctx->r20 = MEM_W(ctx->r8, 0X4);
    // 0x0023B6D4: beq         $v0, $zero, L_0023B780
    if (ctx->r2 == 0) {
        // 0x0023B6D8: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_0023B780;
    }
    // 0x0023B6D8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0023B6DC: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x0023B6E0: addu        $v1, $s2, $zero
    ctx->r3 = ADD32(ctx->r18, 0);
L_0023B6E4:
    // 0x0023B6E4: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
    // 0x0023B6E8: beq         $v0, $s6, L_0023B6B8
    if (ctx->r2 == ctx->r22) {
        // 0x0023B6EC: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_0023B6B8;
    }
    // 0x0023B6EC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0023B6F0: slti        $v0, $a0, 0x3
    ctx->r2 = SIGNED(ctx->r4) < 0X3 ? 1 : 0;
    // 0x0023B6F4: bne         $v0, $zero, L_0023B6E4
    if (ctx->r2 != 0) {
        // 0x0023B6F8: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_0023B6E4;
    }
    // 0x0023B6F8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_0023B6FC:
    // 0x0023B6FC: bne         $a1, $zero, L_0023B780
    if (ctx->r5 != 0) {
        // 0x0023B700: lui         $v1, 0x2
        ctx->r3 = S32(0X2 << 16);
            goto L_0023B780;
    }
    // 0x0023B700: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x0023B704: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x0023B708: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0023B70C: bne         $v0, $zero, L_0023B724
    if (ctx->r2 != 0) {
        // 0x0023B710: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_0023B724;
    }
    // 0x0023B710: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0023B714: jal         0x00267F10
    // 0x0023B718: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00267F10(rdram, ctx);
        goto after_0;
    // 0x0023B718: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_0:
    // 0x0023B71C: beq         $v0, $zero, L_0023B728
    if (ctx->r2 == 0) {
        // 0x0023B720: nop
    
            goto L_0023B728;
    }
    // 0x0023B720: nop

L_0023B724:
    // 0x0023B724: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_0023B728:
    // 0x0023B728: beq         $s1, $zero, L_0023BDF4
    if (ctx->r17 == 0) {
        // 0x0023B72C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0023BDF4;
    }
    // 0x0023B72C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0023B730: lw          $a1, 0x0($s7)
    ctx->r5 = MEM_W(ctx->r23, 0X0);
    // 0x0023B734: lw          $a2, 0x8($s7)
    ctx->r6 = MEM_W(ctx->r23, 0X8);
    // 0x0023B738: jal         0x0026BB9C
    // 0x0023B73C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_0026BB9C(rdram, ctx);
        goto after_1;
    // 0x0023B73C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x0023B740: bne         $v0, $zero, L_0023B780
    if (ctx->r2 != 0) {
        // 0x0023B744: nop
    
            goto L_0023B780;
    }
    // 0x0023B744: nop

    // 0x0023B748: lwc1        $f0, 0x0($s7)
    ctx->f0.u32l = MEM_W(ctx->r23, 0X0);
    // 0x0023B74C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x0023B750: lwc1        $f0, 0x8($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X8);
    // 0x0023B754: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x0023B758: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x0023B75C: lwc1        $f0, 0x8($s7)
    ctx->f0.u32l = MEM_W(ctx->r23, 0X8);
    // 0x0023B760: lw          $a2, 0x14($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X14);
    // 0x0023B764: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x0023B768: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x0023B76C: jal         0x0026B4A4
    // 0x0023B770: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    func_0026B4A4(rdram, ctx);
        goto after_2;
    // 0x0023B770: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    after_2:
    // 0x0023B774: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x0023B778: beq         $s2, $zero, L_0023BDF4
    if (ctx->r18 == 0) {
        // 0x0023B77C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0023BDF4;
    }
    // 0x0023B77C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0023B780:
    // 0x0023B780: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x0023B784: addiu       $s0, $s0, 0x7078
    ctx->r16 = ADD32(ctx->r16, 0X7078);
    // 0x0023B788: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0023B78C: jal         0x0022425C
    // 0x0023B790: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    func_0022425C(rdram, ctx);
        goto after_3;
    // 0x0023B790: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    after_3:
    // 0x0023B794: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0023B798: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0023B79C: jal         0x0022425C
    // 0x0023B7A0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_0022425C(rdram, ctx);
        goto after_4;
    // 0x0023B7A0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_4:
    // 0x0023B7A4: lw          $v1, 0x0($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X0);
    // 0x0023B7A8: andi        $v1, $v1, 0x10
    ctx->r3 = ctx->r3 & 0X10;
    // 0x0023B7AC: bne         $v1, $zero, L_0023B7C8
    if (ctx->r3 != 0) {
        // 0x0023B7B0: addu        $s5, $v0, $zero
        ctx->r21 = ADD32(ctx->r2, 0);
            goto L_0023B7C8;
    }
    // 0x0023B7B0: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    // 0x0023B7B4: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x0023B7B8: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x0023B7BC: andi        $v0, $v0, 0x6
    ctx->r2 = ctx->r2 & 0X6;
    // 0x0023B7C0: beq         $v0, $v1, L_0023BDF4
    if (ctx->r2 == ctx->r3) {
        // 0x0023B7C4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0023BDF4;
    }
    // 0x0023B7C4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0023B7C8:
    // 0x0023B7C8: lhu         $v0, 0x2($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X2);
    // 0x0023B7CC: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x0023B7D0: bne         $v0, $zero, L_0023B818
    if (ctx->r2 != 0) {
        // 0x0023B7D4: nop
    
            goto L_0023B818;
    }
    // 0x0023B7D4: nop

    // 0x0023B7D8: lhu         $v0, 0x2($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X2);
    // 0x0023B7DC: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x0023B7E0: beq         $v0, $zero, L_0023B808
    if (ctx->r2 == 0) {
        // 0x0023B7E4: nop
    
            goto L_0023B808;
    }
    // 0x0023B7E4: nop

    // 0x0023B7E8: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x0023B7EC: andi        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 & 0X200;
    // 0x0023B7F0: bne         $v0, $zero, L_0023B808
    if (ctx->r2 != 0) {
        // 0x0023B7F4: nop
    
            goto L_0023B808;
    }
    // 0x0023B7F4: nop

    // 0x0023B7F8: jal         0x002680D0
    // 0x0023B7FC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_002680D0(rdram, ctx);
        goto after_5;
    // 0x0023B7FC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_5:
    // 0x0023B800: beq         $v0, $zero, L_0023BDF4
    if (ctx->r2 == 0) {
        // 0x0023B804: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0023BDF4;
    }
    // 0x0023B804: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0023B808:
    // 0x0023B808: lhu         $v0, 0x2($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X2);
    // 0x0023B80C: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x0023B810: beq         $v0, $zero, L_0023B848
    if (ctx->r2 == 0) {
        // 0x0023B814: nop
    
            goto L_0023B848;
    }
    // 0x0023B814: nop

L_0023B818:
    // 0x0023B818: lhu         $v0, 0x2($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X2);
    // 0x0023B81C: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x0023B820: bne         $v0, $zero, L_0023B848
    if (ctx->r2 != 0) {
        // 0x0023B824: nop
    
            goto L_0023B848;
    }
    // 0x0023B824: nop

    // 0x0023B828: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x0023B82C: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x0023B830: bne         $v0, $zero, L_0023B848
    if (ctx->r2 != 0) {
        // 0x0023B834: nop
    
            goto L_0023B848;
    }
    // 0x0023B834: nop

    // 0x0023B838: jal         0x002680A8
    // 0x0023B83C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_002680A8(rdram, ctx);
        goto after_6;
    // 0x0023B83C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_6:
    // 0x0023B840: beq         $v0, $zero, L_0023BDF4
    if (ctx->r2 == 0) {
        // 0x0023B844: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0023BDF4;
    }
    // 0x0023B844: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0023B848:
    // 0x0023B848: lhu         $v0, 0x54($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X54);
    // 0x0023B84C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x0023B850: bne         $v0, $zero, L_0023B888
    if (ctx->r2 != 0) {
        // 0x0023B854: nop
    
            goto L_0023B888;
    }
    // 0x0023B854: nop

    // 0x0023B858: lhu         $v0, 0x54($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X54);
    // 0x0023B85C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x0023B860: beq         $v0, $zero, L_0023B878
    if (ctx->r2 == 0) {
        // 0x0023B864: nop
    
            goto L_0023B878;
    }
    // 0x0023B864: nop

    // 0x0023B868: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x0023B86C: andi        $v0, $v0, 0x800
    ctx->r2 = ctx->r2 & 0X800;
    // 0x0023B870: beq         $v0, $zero, L_0023BDF4
    if (ctx->r2 == 0) {
        // 0x0023B874: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0023BDF4;
    }
    // 0x0023B874: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0023B878:
    // 0x0023B878: lhu         $v0, 0x54($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X54);
    // 0x0023B87C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x0023B880: beq         $v0, $zero, L_0023B8A8
    if (ctx->r2 == 0) {
        // 0x0023B884: nop
    
            goto L_0023B8A8;
    }
    // 0x0023B884: nop

L_0023B888:
    // 0x0023B888: lhu         $v0, 0x54($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X54);
    // 0x0023B88C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x0023B890: bne         $v0, $zero, L_0023B8A8
    if (ctx->r2 != 0) {
        // 0x0023B894: nop
    
            goto L_0023B8A8;
    }
    // 0x0023B894: nop

    // 0x0023B898: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x0023B89C: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x0023B8A0: beq         $v0, $zero, L_0023BDF4
    if (ctx->r2 == 0) {
        // 0x0023B8A4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0023BDF4;
    }
    // 0x0023B8A4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0023B8A8:
    // 0x0023B8A8: lhu         $v0, 0x2($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X2);
    // 0x0023B8AC: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x0023B8B0: beq         $v0, $zero, L_0023B8EC
    if (ctx->r2 == 0) {
        // 0x0023B8B4: nop
    
            goto L_0023B8EC;
    }
    // 0x0023B8B4: nop

    // 0x0023B8B8: lhu         $v0, 0x2($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X2);
    // 0x0023B8BC: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x0023B8C0: bne         $v0, $zero, L_0023B8EC
    if (ctx->r2 != 0) {
        // 0x0023B8C4: nop
    
            goto L_0023B8EC;
    }
    // 0x0023B8C4: nop

    // 0x0023B8C8: lw          $a1, 0x0($s7)
    ctx->r5 = MEM_W(ctx->r23, 0X0);
    // 0x0023B8CC: lw          $a2, 0x8($s7)
    ctx->r6 = MEM_W(ctx->r23, 0X8);
    // 0x0023B8D0: jal         0x00269C3C
    // 0x0023B8D4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00269C3C(rdram, ctx);
        goto after_7;
    // 0x0023B8D4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_7:
    // 0x0023B8D8: lwc1        $f1, 0x4($s7)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r23, 0X4);
    // 0x0023B8DC: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0023B8E0: nop

    // 0x0023B8E4: bc1t        L_0023BDF4
    if (c1cs) {
        // 0x0023B8E8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0023BDF4;
    }
    // 0x0023B8E8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0023B8EC:
    // 0x0023B8EC: lbu         $v1, 0x0($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X0);
    // 0x0023B8F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0023B8F4: bne         $v1, $v0, L_0023B90C
    if (ctx->r3 != ctx->r2) {
        // 0x0023B8F8: lui         $v1, 0xC
        ctx->r3 = S32(0XC << 16);
            goto L_0023B90C;
    }
    // 0x0023B8F8: lui         $v1, 0xC
    ctx->r3 = S32(0XC << 16);
    // 0x0023B8FC: lw          $v0, 0x140($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X140);
    // 0x0023B900: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0023B904: bne         $v0, $zero, L_0023BDF4
    if (ctx->r2 != 0) {
        // 0x0023B908: addu        $v0, $s2, $zero
        ctx->r2 = ADD32(ctx->r18, 0);
            goto L_0023BDF4;
    }
    // 0x0023B908: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
L_0023B90C:
    // 0x0023B90C: lw          $v0, 0x44($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X44);
    // 0x0023B910: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x0023B914: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0023B918: bne         $v0, $zero, L_0023B964
    if (ctx->r2 != 0) {
        // 0x0023B91C: nop
    
            goto L_0023B964;
    }
    // 0x0023B91C: nop

    // 0x0023B920: lw          $v0, 0x44($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X44);
    // 0x0023B924: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0023B928: beq         $v0, $zero, L_0023B950
    if (ctx->r2 == 0) {
        // 0x0023B92C: lui         $v1, 0x400
        ctx->r3 = S32(0X400 << 16);
            goto L_0023B950;
    }
    // 0x0023B92C: lui         $v1, 0x400
    ctx->r3 = S32(0X400 << 16);
    // 0x0023B930: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x0023B934: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0023B938: bne         $v0, $zero, L_0023B950
    if (ctx->r2 != 0) {
        // 0x0023B93C: nop
    
            goto L_0023B950;
    }
    // 0x0023B93C: nop

    // 0x0023B940: jal         0x00268080
    // 0x0023B944: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00268080(rdram, ctx);
        goto after_8;
    // 0x0023B944: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_8:
    // 0x0023B948: beq         $v0, $zero, L_0023BDF4
    if (ctx->r2 == 0) {
        // 0x0023B94C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0023BDF4;
    }
    // 0x0023B94C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0023B950:
    // 0x0023B950: lw          $v0, 0x44($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X44);
    // 0x0023B954: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x0023B958: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0023B95C: beq         $v0, $zero, L_0023B998
    if (ctx->r2 == 0) {
        // 0x0023B960: nop
    
            goto L_0023B998;
    }
    // 0x0023B960: nop

L_0023B964:
    // 0x0023B964: lw          $v0, 0x44($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X44);
    // 0x0023B968: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x0023B96C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0023B970: bne         $v0, $zero, L_0023B998
    if (ctx->r2 != 0) {
        // 0x0023B974: lui         $v1, 0x200
        ctx->r3 = S32(0X200 << 16);
            goto L_0023B998;
    }
    // 0x0023B974: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x0023B978: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x0023B97C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0023B980: bne         $v0, $zero, L_0023B998
    if (ctx->r2 != 0) {
        // 0x0023B984: nop
    
            goto L_0023B998;
    }
    // 0x0023B984: nop

    // 0x0023B988: jal         0x0026803C
    // 0x0023B98C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_0026803C(rdram, ctx);
        goto after_9;
    // 0x0023B98C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_9:
    // 0x0023B990: beq         $v0, $zero, L_0023BDF4
    if (ctx->r2 == 0) {
        // 0x0023B994: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0023BDF4;
    }
    // 0x0023B994: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0023B998:
    // 0x0023B998: lhu         $v0, 0x52($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X52);
    // 0x0023B99C: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x0023B9A0: bne         $v0, $zero, L_0023B9E8
    if (ctx->r2 != 0) {
        // 0x0023B9A4: nop
    
            goto L_0023B9E8;
    }
    // 0x0023B9A4: nop

    // 0x0023B9A8: lhu         $v0, 0x52($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X52);
    // 0x0023B9AC: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x0023B9B0: beq         $v0, $zero, L_0023B9D8
    if (ctx->r2 == 0) {
        // 0x0023B9B4: lui         $v1, 0x1000
        ctx->r3 = S32(0X1000 << 16);
            goto L_0023B9D8;
    }
    // 0x0023B9B4: lui         $v1, 0x1000
    ctx->r3 = S32(0X1000 << 16);
    // 0x0023B9B8: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x0023B9BC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0023B9C0: bne         $v0, $zero, L_0023B9D8
    if (ctx->r2 != 0) {
        // 0x0023B9C4: nop
    
            goto L_0023B9D8;
    }
    // 0x0023B9C4: nop

    // 0x0023B9C8: jal         0x00268014
    // 0x0023B9CC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00268014(rdram, ctx);
        goto after_10;
    // 0x0023B9CC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_10:
    // 0x0023B9D0: beq         $v0, $zero, L_0023BDF4
    if (ctx->r2 == 0) {
        // 0x0023B9D4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0023BDF4;
    }
    // 0x0023B9D4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0023B9D8:
    // 0x0023B9D8: lhu         $v0, 0x52($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X52);
    // 0x0023B9DC: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x0023B9E0: beq         $v0, $zero, L_0023BA18
    if (ctx->r2 == 0) {
        // 0x0023B9E4: nop
    
            goto L_0023BA18;
    }
    // 0x0023B9E4: nop

L_0023B9E8:
    // 0x0023B9E8: lhu         $v0, 0x52($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X52);
    // 0x0023B9EC: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x0023B9F0: bne         $v0, $zero, L_0023BA18
    if (ctx->r2 != 0) {
        // 0x0023B9F4: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_0023BA18;
    }
    // 0x0023B9F4: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x0023B9F8: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x0023B9FC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0023BA00: bne         $v0, $zero, L_0023BA18
    if (ctx->r2 != 0) {
        // 0x0023BA04: nop
    
            goto L_0023BA18;
    }
    // 0x0023BA04: nop

    // 0x0023BA08: jal         0x00267FD0
    // 0x0023BA0C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00267FD0(rdram, ctx);
        goto after_11;
    // 0x0023BA0C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_11:
    // 0x0023BA10: beq         $v0, $zero, L_0023BDF4
    if (ctx->r2 == 0) {
        // 0x0023BA14: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0023BDF4;
    }
    // 0x0023BA14: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0023BA18:
    // 0x0023BA18: lw          $v1, 0x0($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X0);
    // 0x0023BA1C: andi        $v0, $v1, 0x80
    ctx->r2 = ctx->r3 & 0X80;
    // 0x0023BA20: bne         $v0, $zero, L_0023BAA0
    if (ctx->r2 != 0) {
        // 0x0023BA24: nop
    
            goto L_0023BAA0;
    }
    // 0x0023BA24: nop

    // 0x0023BA28: lhu         $v0, 0x2($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X2);
    // 0x0023BA2C: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x0023BA30: bne         $v0, $zero, L_0023BA70
    if (ctx->r2 != 0) {
        // 0x0023BA34: nop
    
            goto L_0023BA70;
    }
    // 0x0023BA34: nop

    // 0x0023BA38: lhu         $v0, 0x2($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X2);
    // 0x0023BA3C: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x0023BA40: beq         $v0, $zero, L_0023BA60
    if (ctx->r2 == 0) {
        // 0x0023BA44: andi        $v0, $v1, 0x2000
        ctx->r2 = ctx->r3 & 0X2000;
            goto L_0023BA60;
    }
    // 0x0023BA44: andi        $v0, $v1, 0x2000
    ctx->r2 = ctx->r3 & 0X2000;
    // 0x0023BA48: bne         $v0, $zero, L_0023BA60
    if (ctx->r2 != 0) {
        // 0x0023BA4C: nop
    
            goto L_0023BA60;
    }
    // 0x0023BA4C: nop

    // 0x0023BA50: jal         0x00268120
    // 0x0023BA54: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00268120(rdram, ctx);
        goto after_12;
    // 0x0023BA54: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_12:
    // 0x0023BA58: beq         $v0, $zero, L_0023BDF4
    if (ctx->r2 == 0) {
        // 0x0023BA5C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0023BDF4;
    }
    // 0x0023BA5C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0023BA60:
    // 0x0023BA60: lhu         $v0, 0x2($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X2);
    // 0x0023BA64: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x0023BA68: beq         $v0, $zero, L_0023BAA0
    if (ctx->r2 == 0) {
        // 0x0023BA6C: nop
    
            goto L_0023BAA0;
    }
    // 0x0023BA6C: nop

L_0023BA70:
    // 0x0023BA70: lhu         $v0, 0x2($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X2);
    // 0x0023BA74: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x0023BA78: bne         $v0, $zero, L_0023BAA0
    if (ctx->r2 != 0) {
        // 0x0023BA7C: nop
    
            goto L_0023BAA0;
    }
    // 0x0023BA7C: nop

    // 0x0023BA80: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x0023BA84: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x0023BA88: bne         $v0, $zero, L_0023BAA0
    if (ctx->r2 != 0) {
        // 0x0023BA8C: nop
    
            goto L_0023BAA0;
    }
    // 0x0023BA8C: nop

    // 0x0023BA90: jal         0x002680F8
    // 0x0023BA94: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_002680F8(rdram, ctx);
        goto after_13;
    // 0x0023BA94: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_13:
    // 0x0023BA98: beq         $v0, $zero, L_0023BDF4
    if (ctx->r2 == 0) {
        // 0x0023BA9C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0023BDF4;
    }
    // 0x0023BA9C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0023BAA0:
    // 0x0023BAA0: lhu         $v0, 0x2($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X2);
    // 0x0023BAA4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0023BAA8: beq         $v0, $zero, L_0023BAC0
    if (ctx->r2 == 0) {
        // 0x0023BAAC: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_0023BAC0;
    }
    // 0x0023BAAC: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0023BAB0: lw          $v0, 0x44($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X44);
    // 0x0023BAB4: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x0023BAB8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0023BABC: sltiu       $s1, $v0, 0x1
    ctx->r17 = ctx->r2 < 0X1 ? 1 : 0;
L_0023BAC0:
    // 0x0023BAC0: lhu         $v0, 0x2($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X2);
    // 0x0023BAC4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0023BAC8: beq         $v0, $zero, L_0023BAE0
    if (ctx->r2 == 0) {
        // 0x0023BACC: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0023BAE0;
    }
    // 0x0023BACC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0023BAD0: lw          $v0, 0x44($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X44);
    // 0x0023BAD4: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x0023BAD8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0023BADC: sltiu       $s0, $v0, 0x1
    ctx->r16 = ctx->r2 < 0X1 ? 1 : 0;
L_0023BAE0:
    // 0x0023BAE0: bne         $s0, $zero, L_0023BB18
    if (ctx->r16 != 0) {
        // 0x0023BAE4: nop
    
            goto L_0023BB18;
    }
    // 0x0023BAE4: nop

    // 0x0023BAE8: beq         $s1, $zero, L_0023BB10
    if (ctx->r17 == 0) {
        // 0x0023BAEC: lui         $v1, 0x8
        ctx->r3 = S32(0X8 << 16);
            goto L_0023BB10;
    }
    // 0x0023BAEC: lui         $v1, 0x8
    ctx->r3 = S32(0X8 << 16);
    // 0x0023BAF0: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x0023BAF4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0023BAF8: bne         $v0, $zero, L_0023BB10
    if (ctx->r2 != 0) {
        // 0x0023BAFC: nop
    
            goto L_0023BB10;
    }
    // 0x0023BAFC: nop

    // 0x0023BB00: jal         0x00267FA8
    // 0x0023BB04: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00267FA8(rdram, ctx);
        goto after_14;
    // 0x0023BB04: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_14:
    // 0x0023BB08: beq         $v0, $zero, L_0023BDF4
    if (ctx->r2 == 0) {
        // 0x0023BB0C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0023BDF4;
    }
    // 0x0023BB0C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0023BB10:
    // 0x0023BB10: beq         $s0, $zero, L_0023BB40
    if (ctx->r16 == 0) {
        // 0x0023BB14: nop
    
            goto L_0023BB40;
    }
    // 0x0023BB14: nop

L_0023BB18:
    // 0x0023BB18: bne         $s1, $zero, L_0023BB40
    if (ctx->r17 != 0) {
        // 0x0023BB1C: lui         $v1, 0x4
        ctx->r3 = S32(0X4 << 16);
            goto L_0023BB40;
    }
    // 0x0023BB1C: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
    // 0x0023BB20: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x0023BB24: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0023BB28: bne         $v0, $zero, L_0023BB40
    if (ctx->r2 != 0) {
        // 0x0023BB2C: nop
    
            goto L_0023BB40;
    }
    // 0x0023BB2C: nop

    // 0x0023BB30: jal         0x00267F64
    // 0x0023BB34: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00267F64(rdram, ctx);
        goto after_15;
    // 0x0023BB34: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_15:
    // 0x0023BB38: beq         $v0, $zero, L_0023BDF4
    if (ctx->r2 == 0) {
        // 0x0023BB3C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0023BDF4;
    }
    // 0x0023BB3C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0023BB40:
    // 0x0023BB40: lhu         $v0, 0x2($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X2);
    // 0x0023BB44: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x0023BB48: beq         $v0, $zero, L_0023BB84
    if (ctx->r2 == 0) {
        // 0x0023BB4C: nop
    
            goto L_0023BB84;
    }
    // 0x0023BB4C: nop

    // 0x0023BB50: lhu         $v0, 0x2($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X2);
    // 0x0023BB54: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x0023BB58: bne         $v0, $zero, L_0023BB84
    if (ctx->r2 != 0) {
        // 0x0023BB5C: nop
    
            goto L_0023BB84;
    }
    // 0x0023BB5C: nop

    // 0x0023BB60: lw          $a1, 0x0($s7)
    ctx->r5 = MEM_W(ctx->r23, 0X0);
    // 0x0023BB64: lw          $a2, 0x8($s7)
    ctx->r6 = MEM_W(ctx->r23, 0X8);
    // 0x0023BB68: jal         0x00269C3C
    // 0x0023BB6C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00269C3C(rdram, ctx);
        goto after_16;
    // 0x0023BB6C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_16:
    // 0x0023BB70: lwc1        $f1, 0x4($s7)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r23, 0X4);
    // 0x0023BB74: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0023BB78: nop

    // 0x0023BB7C: bc1t        L_0023BDF4
    if (c1cs) {
        // 0x0023BB80: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0023BDF4;
    }
    // 0x0023BB80: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0023BB84:
    // 0x0023BB84: jal         0x0026AFC0
    // 0x0023BB88: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    func_0026AFC0(rdram, ctx);
        goto after_17;
    // 0x0023BB88: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    after_17:
    // 0x0023BB8C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0023BB90: jal         0x0026AFC0
    // 0x0023BB94: addu        $fp, $v0, $zero
    ctx->r30 = ADD32(ctx->r2, 0);
    func_0026AFC0(rdram, ctx);
        goto after_18;
    // 0x0023BB94: addu        $fp, $v0, $zero
    ctx->r30 = ADD32(ctx->r2, 0);
    after_18:
    // 0x0023BB98: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x0023BB9C: lw          $v1, 0x4($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X4);
    // 0x0023BBA0: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x0023BBA4: andi        $v1, $v1, 0x40
    ctx->r3 = ctx->r3 & 0X40;
    // 0x0023BBA8: beq         $v1, $zero, L_0023BBC0
    if (ctx->r3 == 0) {
        // 0x0023BBAC: addu        $s0, $v0, $zero
        ctx->r16 = ADD32(ctx->r2, 0);
            goto L_0023BBC0;
    }
    // 0x0023BBAC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0023BBB0: bne         $s0, $zero, L_0023BDF4
    if (ctx->r16 != 0) {
        // 0x0023BBB4: addu        $v0, $s2, $zero
        ctx->r2 = ADD32(ctx->r18, 0);
            goto L_0023BDF4;
    }
    // 0x0023BBB4: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x0023BBB8: j           L_0023BDF4
    // 0x0023BBBC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_0023BDF4;
    // 0x0023BBBC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0023BBC0:
    // 0x0023BBC0: jal         0x00267EA8
    // 0x0023BBC4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00267EA8(rdram, ctx);
        goto after_19;
    // 0x0023BBC4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_19:
    // 0x0023BBC8: addu        $s7, $v0, $zero
    ctx->r23 = ADD32(ctx->r2, 0);
    // 0x0023BBCC: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x0023BBD0: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x0023BBD4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0023BBD8: bne         $v0, $zero, L_0023BBF0
    if (ctx->r2 != 0) {
        // 0x0023BBDC: addu        $s5, $zero, $zero
        ctx->r21 = ADD32(0, 0);
            goto L_0023BBF0;
    }
    // 0x0023BBDC: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
    // 0x0023BBE0: jal         0x00267EE8
    // 0x0023BBE4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00267EE8(rdram, ctx);
        goto after_20;
    // 0x0023BBE4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_20:
    // 0x0023BBE8: beq         $v0, $zero, L_0023BBF4
    if (ctx->r2 == 0) {
        // 0x0023BBEC: nop
    
            goto L_0023BBF4;
    }
    // 0x0023BBEC: nop

L_0023BBF0:
    // 0x0023BBF0: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
L_0023BBF4:
    // 0x0023BBF4: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x0023BBF8: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x0023BBFC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0023BC00: bne         $v0, $zero, L_0023BC18
    if (ctx->r2 != 0) {
        // 0x0023BC04: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_0023BC18;
    }
    // 0x0023BC04: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0023BC08: jal         0x00267F10
    // 0x0023BC0C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00267F10(rdram, ctx);
        goto after_21;
    // 0x0023BC0C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_21:
    // 0x0023BC10: beq         $v0, $zero, L_0023BC1C
    if (ctx->r2 == 0) {
        // 0x0023BC14: nop
    
            goto L_0023BC1C;
    }
    // 0x0023BC14: nop

L_0023BC18:
    // 0x0023BC18: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_0023BC1C:
    // 0x0023BC1C: beq         $s7, $zero, L_0023BC84
    if (ctx->r23 == 0) {
        // 0x0023BC20: nop
    
            goto L_0023BC84;
    }
    // 0x0023BC20: nop

    // 0x0023BC24: beq         $fp, $zero, L_0023BC84
    if (ctx->r30 == 0) {
        // 0x0023BC28: nop
    
            goto L_0023BC84;
    }
    // 0x0023BC28: nop

    // 0x0023BC2C: beq         $s0, $zero, L_0023BDF4
    if (ctx->r16 == 0) {
        // 0x0023BC30: addu        $v0, $s2, $zero
        ctx->r2 = ADD32(ctx->r18, 0);
            goto L_0023BDF4;
    }
    // 0x0023BC30: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x0023BC34: lhu         $v0, 0x2($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X2);
    // 0x0023BC38: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x0023BC3C: beq         $v0, $zero, L_0023BC84
    if (ctx->r2 == 0) {
        // 0x0023BC40: nop
    
            goto L_0023BC84;
    }
    // 0x0023BC40: nop

    // 0x0023BC44: lhu         $v0, 0x2($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X2);
    // 0x0023BC48: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x0023BC4C: bne         $v0, $zero, L_0023BC84
    if (ctx->r2 != 0) {
        // 0x0023BC50: nop
    
            goto L_0023BC84;
    }
    // 0x0023BC50: nop

    // 0x0023BC54: lw          $a1, 0x4($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4);
    // 0x0023BC58: lw          $a2, 0xC($s3)
    ctx->r6 = MEM_W(ctx->r19, 0XC);
    // 0x0023BC5C: jal         0x0026BE60
    // 0x0023BC60: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    func_0026BE60(rdram, ctx);
        goto after_22;
    // 0x0023BC60: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    after_22:
    // 0x0023BC64: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023BC68: lwc1        $f1, 0x668C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X668C);
    // 0x0023BC6C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0023BC70: lwc1        $f1, 0x8($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X8);
    // 0x0023BC74: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0023BC78: nop

    // 0x0023BC7C: bc1t        L_0023BDF4
    if (c1cs) {
        // 0x0023BC80: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0023BDF4;
    }
    // 0x0023BC80: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0023BC84:
    // 0x0023BC84: beq         $s0, $zero, L_0023BDF4
    if (ctx->r16 == 0) {
        // 0x0023BC88: addu        $v0, $s2, $zero
        ctx->r2 = ADD32(ctx->r18, 0);
            goto L_0023BDF4;
    }
    // 0x0023BC88: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x0023BC8C: bne         $fp, $zero, L_0023BDF4
    if (ctx->r30 != 0) {
        // 0x0023BC90: nop
    
            goto L_0023BDF4;
    }
    // 0x0023BC90: nop

    // 0x0023BC94: lhu         $v0, 0x2($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X2);
    // 0x0023BC98: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x0023BC9C: beq         $v0, $zero, L_0023BD34
    if (ctx->r2 == 0) {
        // 0x0023BCA0: nop
    
            goto L_0023BD34;
    }
    // 0x0023BCA0: nop

    // 0x0023BCA4: beq         $s7, $zero, L_0023BD34
    if (ctx->r23 == 0) {
        // 0x0023BCA8: nop
    
            goto L_0023BD34;
    }
    // 0x0023BCA8: nop

    // 0x0023BCAC: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x0023BCB0: jal         0x0026C240
    // 0x0023BCB4: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    func_0026C240(rdram, ctx);
        goto after_23;
    // 0x0023BCB4: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    after_23:
    // 0x0023BCB8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023BCBC: lwc1        $f1, 0x6690($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6690);
    // 0x0023BCC0: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0023BCC4: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0023BCC8: jal         0x00210EF0
    // 0x0023BCCC: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    func_00210EF0(rdram, ctx);
        goto after_24;
    // 0x0023BCCC: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    after_24:
    // 0x0023BCD0: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x0023BCD4: lwc1        $f14, 0x50($s3)
    ctx->f14.u32l = MEM_W(ctx->r19, 0X50);
    // 0x0023BCD8: jal         0x00210E64
    // 0x0023BCDC: nop

    func_00210E64(rdram, ctx);
        goto after_25;
    // 0x0023BCDC: nop

    after_25:
    // 0x0023BCE0: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0023BCE4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x0023BCE8: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x0023BCEC: nop

    // 0x0023BCF0: bc1f        L_0023BD1C
    if (!c1cs) {
        // 0x0023BCF4: nop
    
            goto L_0023BD1C;
    }
    // 0x0023BCF4: nop

    // 0x0023BCF8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023BCFC: lwc1        $f1, 0x6694($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6694);
    // 0x0023BD00: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x0023BD04: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0023BD08: nop

    // 0x0023BD0C: bc1tl       L_0023BD34
    if (c1cs) {
        // 0x0023BD10: addiu       $s5, $zero, 0x1
        ctx->r21 = ADD32(0, 0X1);
            goto L_0023BD34;
    }
    goto skip_0;
    // 0x0023BD10: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    skip_0:
    // 0x0023BD14: j           L_0023BD34
    // 0x0023BD18: nop

        goto L_0023BD34;
    // 0x0023BD18: nop

L_0023BD1C:
    // 0x0023BD1C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023BD20: lwc1        $f0, 0x6698($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6698);
    // 0x0023BD24: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x0023BD28: nop

    // 0x0023BD2C: bc1tl       L_0023BD34
    if (c1cs) {
        // 0x0023BD30: addiu       $s5, $zero, 0x1
        ctx->r21 = ADD32(0, 0X1);
            goto L_0023BD34;
    }
    goto skip_1;
    // 0x0023BD30: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    skip_1:
L_0023BD34:
    // 0x0023BD34: beq         $s5, $zero, L_0023BD44
    if (ctx->r21 == 0) {
        // 0x0023BD38: nop
    
            goto L_0023BD44;
    }
    // 0x0023BD38: nop

    // 0x0023BD3C: bne         $s1, $zero, L_0023BDF4
    if (ctx->r17 != 0) {
        // 0x0023BD40: addu        $v0, $s2, $zero
        ctx->r2 = ADD32(ctx->r18, 0);
            goto L_0023BDF4;
    }
    // 0x0023BD40: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
L_0023BD44:
    // 0x0023BD44: lw          $v0, 0x4($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X4);
    // 0x0023BD48: lw          $v1, 0x8($s6)
    ctx->r3 = MEM_W(ctx->r22, 0X8);
    // 0x0023BD4C: lwc1        $f1, 0x4($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X4);
    // 0x0023BD50: lwc1        $f0, 0x4($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X4);
    // 0x0023BD54: lw          $v0, 0xC($s6)
    ctx->r2 = MEM_W(ctx->r22, 0XC);
    // 0x0023BD58: lw          $v1, 0x8($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X8);
    // 0x0023BD5C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0023BD60: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x0023BD64: lw          $v0, 0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4);
    // 0x0023BD68: lwc1        $f2, 0x4($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X4);
    // 0x0023BD6C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0023BD70: lwc1        $f3, 0x4($v0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r2, 0X4);
    // 0x0023BD74: lw          $v0, 0xC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC);
    // 0x0023BD78: add.s       $f0, $f3, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f3.fl + ctx->f2.fl;
    // 0x0023BD7C: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x0023BD80: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x0023BD84: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0023BD88: nop

    // 0x0023BD8C: bc1f        L_0023BDE8
    if (!c1cs) {
        // 0x0023BD90: nop
    
            goto L_0023BDE8;
    }
    // 0x0023BD90: nop

    // 0x0023BD94: bnel        $s5, $zero, L_0023BDF4
    if (ctx->r21 != 0) {
        // 0x0023BD98: addu        $v0, $s2, $zero
        ctx->r2 = ADD32(ctx->r18, 0);
            goto L_0023BDF4;
    }
    goto skip_2;
    // 0x0023BD98: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    skip_2:
    // 0x0023BD9C: lwc1        $f1, 0x8($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X8);
    // 0x0023BDA0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023BDA4: lwc1        $f0, 0x669C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X669C);
    // 0x0023BDA8: c.le.s      $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f3.fl <= ctx->f2.fl;
    // 0x0023BDAC: nop

    // 0x0023BDB0: bc1t        L_0023BDBC
    if (c1cs) {
        // 0x0023BDB4: sub.s       $f1, $f1, $f0
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
            goto L_0023BDBC;
    }
    // 0x0023BDB4: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0023BDB8: mov.s       $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    ctx->f2.fl = ctx->f3.fl;
L_0023BDBC:
    // 0x0023BDBC: mov.s       $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = ctx->f4.fl;
    // 0x0023BDC0: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x0023BDC4: nop

    // 0x0023BDC8: bc1fl       L_0023BDD0
    if (!c1cs) {
        // 0x0023BDCC: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_0023BDD0;
    }
    goto skip_3;
    // 0x0023BDCC: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_3:
L_0023BDD0:
    // 0x0023BDD0: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0023BDD4: nop

    // 0x0023BDD8: bc1t        L_0023BDF4
    if (c1cs) {
        // 0x0023BDDC: addu        $v0, $s2, $zero
        ctx->r2 = ADD32(ctx->r18, 0);
            goto L_0023BDF4;
    }
    // 0x0023BDDC: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x0023BDE0: j           L_0023BDF4
    // 0x0023BDE4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_0023BDF4;
    // 0x0023BDE4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0023BDE8:
    // 0x0023BDE8: bne         $s1, $zero, L_0023BDF4
    if (ctx->r17 != 0) {
        // 0x0023BDEC: addu        $v0, $s2, $zero
        ctx->r2 = ADD32(ctx->r18, 0);
            goto L_0023BDF4;
    }
    // 0x0023BDEC: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x0023BDF0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0023BDF4:
    // 0x0023BDF4: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x0023BDF8: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x0023BDFC: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x0023BE00: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x0023BE04: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x0023BE08: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x0023BE0C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x0023BE10: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x0023BE14: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x0023BE18: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x0023BE1C: jr          $ra
    // 0x0023BE20: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x0023BE20: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_0044755C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044755C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00447560: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00447564: lw          $v0, 0x4F8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4F8);
    // 0x00447568: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x0044756C: trunc.w.s   $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(1 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00447570: swc1        $f1, 0x500($a0)
    MEM_W(0X500, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x00447574: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x00447578: trunc.w.s   $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(1 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0044757C: swc1        $f1, 0x508($a0)
    MEM_W(0X508, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x00447580: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00447584: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00447588: jal         0x00225C84
    // 0x0044758C: nop

    func_00225C84(rdram, ctx);
        goto after_0;
    // 0x0044758C: nop

    after_0:
    // 0x00447590: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00447594: jr          $ra
    // 0x00447598: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00447598: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00228FF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00228FF8: addu        $t0, $a1, $zero
    ctx->r8 = ADD32(ctx->r5, 0);
    // 0x00228FFC: addu        $t1, $a2, $zero
    ctx->r9 = ADD32(ctx->r6, 0);
    // 0x00229000: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x00229004: lw          $t3, 0x10($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X10);
    // 0x00229008: lw          $t4, 0x14($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X14);
    // 0x0022900C: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x00229010: beq         $v1, $zero, L_002291C0
    if (ctx->r3 == 0) {
            // 0x00229014: addu        $t2, $a3, $zero
    ctx->r10 = ADD32(ctx->r7, 0);
    func_002291C0(rdram, ctx);
    return;
    }
    // 0x00229014: addu        $t2, $a3, $zero
    ctx->r10 = ADD32(ctx->r7, 0);
    // 0x00229018: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x0022901C: subu        $a3, $v0, $v1
    ctx->r7 = SUB32(ctx->r2, ctx->r3);
    // 0x00229020: andi        $a1, $t1, 0xFF
    ctx->r5 = ctx->r9 & 0XFF;
    // 0x00229024: andi        $v1, $t2, 0xFF
    ctx->r3 = ctx->r10 & 0XFF;
    // 0x00229028: sltu        $v0, $v1, $a1
    ctx->r2 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x0022902C: beq         $v0, $zero, L_00229048
    if (ctx->r2 == 0) {
        // 0x00229030: andi        $a2, $t0, 0xFF
        ctx->r6 = ctx->r8 & 0XFF;
            goto L_00229048;
    }
    // 0x00229030: andi        $a2, $t0, 0xFF
    ctx->r6 = ctx->r8 & 0XFF;
    // 0x00229034: slt         $v0, $a1, $a2
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x00229038: bne         $v0, $zero, L_0022906C
    if (ctx->r2 != 0) {
        // 0x0022903C: andi        $v0, $t2, 0xFF
        ctx->r2 = ctx->r10 & 0XFF;
            goto L_0022906C;
    }
    // 0x0022903C: andi        $v0, $t2, 0xFF
    ctx->r2 = ctx->r10 & 0XFF;
    // 0x00229040: j           L_0022905C
    // 0x00229044: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
        goto L_0022905C;
    // 0x00229044: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
L_00229048:
    // 0x00229048: slt         $v0, $v1, $a2
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x0022904C: bne         $v0, $zero, L_0022906C
    if (ctx->r2 != 0) {
        // 0x00229050: andi        $a2, $t0, 0xFF
        ctx->r6 = ctx->r8 & 0XFF;
            goto L_0022906C;
    }
    // 0x00229050: andi        $a2, $t0, 0xFF
    ctx->r6 = ctx->r8 & 0XFF;
    // 0x00229054: andi        $v0, $t2, 0xFF
    ctx->r2 = ctx->r10 & 0XFF;
    // 0x00229058: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
L_0022905C:
    // 0x0022905C: andi        $v1, $t1, 0xFF
    ctx->r3 = ctx->r9 & 0XFF;
    // 0x00229060: sltu        $v0, $a2, $v1
    ctx->r2 = ctx->r6 < ctx->r3 ? 1 : 0;
    // 0x00229064: bnel        $v0, $zero, L_0022906C
    if (ctx->r2 != 0) {
        // 0x00229068: addu        $a2, $v1, $zero
        ctx->r6 = ADD32(ctx->r3, 0);
            goto L_0022906C;
    }
    goto skip_0;
    // 0x00229068: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    skip_0:
L_0022906C:
    // 0x0022906C: andi        $v0, $t0, 0xFF
    ctx->r2 = ctx->r8 & 0XFF;
    // 0x00229070: mult        $v0, $a3
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00229074: mflo        $v1
    ctx->r3 = lo;
    // 0x00229078: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x0022907C: nop

    // 0x00229080: mult        $a2, $v0
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00229084: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00229088: lwc1        $f1, 0x60E8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X60E8);
    // 0x0022908C: mflo        $v0
    ctx->r2 = lo;
    // 0x00229090: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x00229094: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00229098: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0022909C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002290A0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002290A4: lwc1        $f1, 0x60EC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X60EC);
    // 0x002290A8: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x002290AC: nop

    // 0x002290B0: bc1tl       L_002290C8
    if (c1cs) {
        // 0x002290B4: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_002290C8;
    }
    goto skip_1;
    // 0x002290B4: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_1:
    // 0x002290B8: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x002290BC: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x002290C0: j           L_002290DC
    // 0x002290C4: andi        $v0, $t1, 0xFF
    ctx->r2 = ctx->r9 & 0XFF;
        goto L_002290DC;
    // 0x002290C4: andi        $v0, $t1, 0xFF
    ctx->r2 = ctx->r9 & 0XFF;
L_002290C8:
    // 0x002290C8: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x002290CC: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x002290D0: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x002290D4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002290D8: andi        $v0, $t1, 0xFF
    ctx->r2 = ctx->r9 & 0XFF;
L_002290DC:
    // 0x002290DC: mult        $v0, $a3
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002290E0: mflo        $a1
    ctx->r5 = lo;
    // 0x002290E4: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x002290E8: nop

    // 0x002290EC: mult        $a2, $v0
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002290F0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002290F4: lwc1        $f1, 0x60F0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X60F0);
    // 0x002290F8: mflo        $v0
    ctx->r2 = lo;
    // 0x002290FC: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x00229100: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00229104: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00229108: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0022910C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00229110: lwc1        $f1, 0x60F4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X60F4);
    // 0x00229114: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00229118: nop

    // 0x0022911C: bc1t        L_00229134
    if (c1cs) {
        // 0x00229120: sb          $v1, 0x0($t3)
        MEM_B(0X0, ctx->r11) = ctx->r3;
            goto L_00229134;
    }
    // 0x00229120: sb          $v1, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r3;
    // 0x00229124: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00229128: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x0022912C: j           L_0022914C
    // 0x00229130: andi        $v0, $t2, 0xFF
    ctx->r2 = ctx->r10 & 0XFF;
        goto L_0022914C;
    // 0x00229130: andi        $v0, $t2, 0xFF
    ctx->r2 = ctx->r10 & 0XFF;
L_00229134:
    // 0x00229134: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00229138: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0022913C: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00229140: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00229144: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00229148: andi        $v0, $t2, 0xFF
    ctx->r2 = ctx->r10 & 0XFF;
L_0022914C:
    // 0x0022914C: mult        $v0, $a3
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00229150: mflo        $a1
    ctx->r5 = lo;
    // 0x00229154: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x00229158: nop

    // 0x0022915C: mult        $a2, $v0
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00229160: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00229164: lwc1        $f1, 0x60F8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X60F8);
    // 0x00229168: mflo        $v0
    ctx->r2 = lo;
    // 0x0022916C: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x00229170: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00229174: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00229178: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0022917C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00229180: lwc1        $f1, 0x60FC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X60FC);
    // 0x00229184: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00229188: nop

    // 0x0022918C: bc1t        L_002291A4
    if (c1cs) {
            // 0x00229190: sb          $v1, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r3;
    func_002291A4(rdram, ctx);
    return;
    }
    // 0x00229190: sb          $v1, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r3;
    // 0x00229194: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00229198: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x0022919C: jr          $ra
    // 0x002291A0: sb          $v1, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r3;
    return;
    // 0x002291A0: sb          $v1, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r3;
;}
RECOMP_FUNC void func_0025FDC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025FDC8: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025FDCC: lh          $v0, 0x6C($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X6C);
    // 0x0025FDD0: jr          $ra
    // 0x0025FDD4: nop

    return;
    // 0x0025FDD4: nop

;}
RECOMP_FUNC void func_0042E834(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042E834: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0042E838: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0042E83C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0042E840: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042E844: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0042E848: jal         0x00266C5C
    // 0x0042E84C: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    func_00266C5C(rdram, ctx);
        goto after_0;
    // 0x0042E84C: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    after_0:
    // 0x0042E850: addiu       $a0, $s0, 0xC
    ctx->r4 = ADD32(ctx->r16, 0XC);
    // 0x0042E854: addiu       $a1, $zero, 0x131C
    ctx->r5 = ADD32(0, 0X131C);
    // 0x0042E858: jal         0x00200500
    // 0x0042E85C: addiu       $a2, $zero, 0x1320
    ctx->r6 = ADD32(0, 0X1320);
    func_00200500(rdram, ctx);
        goto after_1;
    // 0x0042E85C: addiu       $a2, $zero, 0x1320
    ctx->r6 = ADD32(0, 0X1320);
    after_1:
    // 0x0042E860: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
    // 0x0042E864: addiu       $a1, $zero, 0x131C
    ctx->r5 = ADD32(0, 0X131C);
    // 0x0042E868: jal         0x00200500
    // 0x0042E86C: addiu       $a2, $zero, 0x1320
    ctx->r6 = ADD32(0, 0X1320);
    func_00200500(rdram, ctx);
        goto after_2;
    // 0x0042E86C: addiu       $a2, $zero, 0x1320
    ctx->r6 = ADD32(0, 0X1320);
    after_2:
    // 0x0042E870: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x0042E874: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x0042E878: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x0042E87C: sw          $zero, 0x34($s0)
    MEM_W(0X34, ctx->r16) = 0;
    // 0x0042E880: sw          $zero, 0x38($s0)
    MEM_W(0X38, ctx->r16) = 0;
    // 0x0042E884: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0042E888: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042E88C: jr          $ra
    // 0x0042E890: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0042E890: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0040A8A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040A8A4: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x0040A8A8: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x0040A8AC: addu        $v1, $a0, $v0
    ctx->r3 = ADD32(ctx->r4, ctx->r2);
    // 0x0040A8B0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0040A8B4: jal         0x0026D518
    // 0x0040A8B8: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    func_0026D518(rdram, ctx);
        goto after_0;
    // 0x0040A8B8: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    after_0:
    // 0x0040A8BC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0040A8C0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0040A8C4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0040A8C8: sw          $v0, 0x66C($s1)
    MEM_W(0X66C, ctx->r17) = ctx->r2;
    // 0x0040A8CC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x0040A8D0: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0040A8D4: jal         0x00243414
    // 0x0040A8D8: sw          $zero, 0x67C($s1)
    MEM_W(0X67C, ctx->r17) = 0;
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x0040A8D8: sw          $zero, 0x67C($s1)
    MEM_W(0X67C, ctx->r17) = 0;
    after_1:
    // 0x0040A8DC: lw          $ra, 0xD8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XD8);
    // 0x0040A8E0: lw          $s3, 0xD4($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XD4);
    // 0x0040A8E4: lw          $s2, 0xD0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XD0);
    // 0x0040A8E8: lw          $s1, 0xCC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XCC);
    // 0x0040A8EC: lw          $s0, 0xC8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XC8);
    // 0x0040A8F0: ldc1        $f20, 0xE0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XE0);
    // 0x0040A8F4: jr          $ra
    // 0x0040A8F8: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    return;
    // 0x0040A8F8: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
;}
RECOMP_FUNC void func_0028D374(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028D374: jal         0x0021E03C
    // 0x0028D378: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    func_0021E03C(rdram, ctx);
        goto after_0;
    // 0x0028D378: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x0028D37C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
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
        goto after_1;
    // 0x0028D404: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
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
        goto after_2;
    // 0x0028D41C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
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
        goto after_3;
    // 0x0028D448: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
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
        goto after_4;
    // 0x0028D6D0: nop

    after_4:
    // 0x0028D6D4: jal         0x002881E8
    // 0x0028D6D8: nop

    func_002881E8(rdram, ctx);
        goto after_5;
    // 0x0028D6D8: nop

    after_5:
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
RECOMP_FUNC void func_00454F30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00454F30: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00454F34: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00454F38: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00454F3C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00454F40: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x00454F44: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00454F48: addiu       $s0, $s0, -0x54E8
    ctx->r16 = ADD32(ctx->r16, -0X54E8);
    // 0x00454F4C: beql        $v0, $zero, L_00454F64
    if (ctx->r2 == 0) {
        // 0x00454F50: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00454F64;
    }
    goto skip_0;
    // 0x00454F50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x00454F54: lw          $v0, 0x518($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X518);
    // 0x00454F58: bnel        $v0, $zero, L_00454F60
    if (ctx->r2 != 0) {
        // 0x00454F5C: addu        $s0, $v0, $zero
        ctx->r16 = ADD32(ctx->r2, 0);
            goto L_00454F60;
    }
    goto skip_1;
    // 0x00454F5C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    skip_1:
L_00454F60:
    // 0x00454F60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00454F64:
    // 0x00454F64: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x00454F68: lbu         $a1, 0x2C($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X2C);
    // 0x00454F6C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00454F70: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00454F74: jal         0x0041648C
    // 0x00454F78: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x00454F78: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_0:
    // 0x00454F7C: sb          $v0, 0x2C($s0)
    MEM_B(0X2C, ctx->r16) = ctx->r2;
    // 0x00454F80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00454F84: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00454F88: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00454F8C: jr          $ra
    // 0x00454F90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00454F90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0041B178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B178: jr          $ra
    // 0x0041B17C: addiu       $v0, $zero, 0x7D0
    ctx->r2 = ADD32(0, 0X7D0);
    return;
    // 0x0041B17C: addiu       $v0, $zero, 0x7D0
    ctx->r2 = ADD32(0, 0X7D0);
;}
RECOMP_FUNC void func_0025A2AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025A2AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025A2B0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025A2B4: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025A2B8: lhu         $a3, 0x9A($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X9A);
    // 0x0025A2BC: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025A2C0: addiu       $a2, $a2, -0x2C8
    ctx->r6 = ADD32(ctx->r6, -0X2C8);
    // 0x0025A2C4: jal         0x00245A98
    // 0x0025A2C8: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025A2C8: nop

    after_0:
    // 0x0025A2CC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025A2D0: jr          $ra
    // 0x0025A2D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025A2D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0040EA48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040EA48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0040EA4C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0040EA50: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0040EA54: lw          $v0, 0x144($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X144);
    // 0x0040EA58: bne         $v0, $zero, L_0040EB24
    if (ctx->r2 != 0) {
        // 0x0040EA5C: nop
    
            goto L_0040EB24;
    }
    // 0x0040EA5C: nop

    // 0x0040EA60: lw          $v0, 0x4F8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4F8);
    // 0x0040EA64: addiu       $v1, $v0, 0xC
    ctx->r3 = ADD32(ctx->r2, 0XC);
    // 0x0040EA68: sw          $v1, 0x4F8($a0)
    MEM_W(0X4F8, ctx->r4) = ctx->r3;
    // 0x0040EA6C: lw          $a2, 0xC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XC);
    // 0x0040EA70: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0040EA74: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0040EA78: sw          $zero, 0x518($a0)
    MEM_W(0X518, ctx->r4) = 0;
    // 0x0040EA7C: sw          $zero, 0x530($a0)
    MEM_W(0X530, ctx->r4) = 0;
    // 0x0040EA80: blez        $v0, L_0040EAA8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040EA84: sw          $zero, 0x548($a0)
        MEM_W(0X548, ctx->r4) = 0;
            goto L_0040EAA8;
    }
    // 0x0040EA84: sw          $zero, 0x548($a0)
    MEM_W(0X548, ctx->r4) = 0;
    // 0x0040EA88: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_0040EA8C:
    // 0x0040EA8C: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x0040EA90: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x0040EA94: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0040EA98: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0040EA9C: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0040EAA0: bne         $v0, $zero, L_0040EA8C
    if (ctx->r2 != 0) {
        // 0x0040EAA4: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_0040EA8C;
    }
    // 0x0040EAA4: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_0040EAA8:
    // 0x0040EAA8: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x0040EAAC: blez        $v0, L_0040EAD4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040EAB0: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0040EAD4;
    }
    // 0x0040EAB0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0040EAB4: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_0040EAB8:
    // 0x0040EAB8: lw          $v0, 0x1C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1C);
    // 0x0040EABC: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x0040EAC0: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x0040EAC4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0040EAC8: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0040EACC: bne         $v0, $zero, L_0040EAB8
    if (ctx->r2 != 0) {
        // 0x0040EAD0: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_0040EAB8;
    }
    // 0x0040EAD0: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_0040EAD4:
    // 0x0040EAD4: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    // 0x0040EAD8: blez        $v0, L_0040EB00
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040EADC: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0040EB00;
    }
    // 0x0040EADC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0040EAE0: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_0040EAE4:
    // 0x0040EAE4: lw          $v0, 0x30($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X30);
    // 0x0040EAE8: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x0040EAEC: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    // 0x0040EAF0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0040EAF4: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0040EAF8: bne         $v0, $zero, L_0040EAE4
    if (ctx->r2 != 0) {
        // 0x0040EAFC: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_0040EAE4;
    }
    // 0x0040EAFC: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_0040EB00:
    // 0x0040EB00: sll         $v0, $a2, 3
    ctx->r2 = S32(ctx->r6 << 3);
    // 0x0040EB04: sw          $a2, 0x4FC($a0)
    MEM_W(0X4FC, ctx->r4) = ctx->r6;
    // 0x0040EB08: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x0040EB0C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0040EB10: lw          $v0, 0x240C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X240C);
    // 0x0040EB14: beq         $v0, $zero, L_0040EB24
    if (ctx->r2 == 0) {
        // 0x0040EB18: nop
    
            goto L_0040EB24;
    }
    // 0x0040EB18: nop

    // 0x0040EB1C: jalr        $v0
    // 0x0040EB20: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x0040EB20: nop

    after_0:
L_0040EB24:
    // 0x0040EB24: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0040EB28: jr          $ra
    // 0x0040EB2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040EB2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00288284(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00288284: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00288288: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x0028828C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00288290: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00288294: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00288298: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0028829C: addiu       $a0, $a0, 0x7C80
    ctx->r4 = ADD32(ctx->r4, 0X7C80);
    // 0x002882A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x002882A4: ori         $a2, $zero, 0x8000
    ctx->r6 = 0 | 0X8000;
    // 0x002882A8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x002882AC: jal         0x00266C5C
    // 0x002882B0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_00266C5C(rdram, ctx);
        goto after_0;
    // 0x002882B0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x002882B4: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x002882B8: addiu       $s0, $s0, 0x6A70
    ctx->r16 = ADD32(ctx->r16, 0X6A70);
    // 0x002882BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002882C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x002882C4: lui         $a2, 0x29
    ctx->r6 = S32(0X29 << 16);
    // 0x002882C8: addiu       $a2, $a2, -0x77A0
    ctx->r6 = ADD32(ctx->r6, -0X77A0);
    // 0x002882CC: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x002882D0: addiu       $v0, $v0, -0x380
    ctx->r2 = ADD32(ctx->r2, -0X380);
    // 0x002882D4: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x002882D8: lw          $v1, 0x6E84($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6E84);
    // 0x002882DC: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    // 0x002882E0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x002882E4: jal         0x0029B060
    // 0x002882E8: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    osCreateThread_recomp(rdram, ctx);
        goto after_1;
    // 0x002882E8: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    after_1:
    // 0x002882EC: jal         0x0029BB10
    // 0x002882F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    osStartThread_recomp(rdram, ctx);
        goto after_2;
    // 0x002882F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x002882F4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x002882F8: lw          $a1, 0x6E70($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6E70);
    // 0x002882FC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00288300: addu        $at, $s2, $at
    ctx->r1 = ADD32(ctx->r18, ctx->r1);
    // 0x00288304: sw          $zero, 0x3FE8($at)
    MEM_W(0X3FE8, ctx->r1) = 0;
    // 0x00288308: jal         0x0029B9B0
    // 0x0028830C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_0029B9B0(rdram, ctx);
        goto after_3;
    // 0x0028830C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_3:
L_00288310:
    // 0x00288310: j           L_00288310
    pause_self(rdram);
    // 0x00288314: nop

;}
RECOMP_FUNC void func_00284330(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00284330: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00284334: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x00284338: lw          $v0, 0x38($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X38);
    // 0x0028433C: beq         $v0, $zero, L_00284350
    if (ctx->r2 == 0) {
            // 0x00284340: nop

    func_00284350(rdram, ctx);
    return;
    }
    // 0x00284340: nop

    // 0x00284344: lw          $v0, 0xAC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XAC);
    // 0x00284348: jr          $ra
    // 0x0028434C: nop

    return;
    // 0x0028434C: nop

;}
RECOMP_FUNC void func_004553B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004553B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x004553BC: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x004553C0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x004553C4: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x004553C8: addiu       $s0, $s0, -0x5518
    ctx->r16 = ADD32(ctx->r16, -0X5518);
    // 0x004553CC: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x004553D0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x004553D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x004553D8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x004553DC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x004553E0: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x004553E4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x004553E8: jal         0x0041648C
    // 0x004553EC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x004553EC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x004553F0: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x004553F4: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x004553F8: sltiu       $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 < 0XFF ? 1 : 0;
    // 0x004553FC: beq         $v0, $zero, L_00455408
    if (ctx->r2 == 0) {
        // 0x00455400: addiu       $v1, $zero, 0xFF
        ctx->r3 = ADD32(0, 0XFF);
            goto L_00455408;
    }
    // 0x00455400: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x00455404: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
L_00455408:
    // 0x00455408: sb          $v1, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r3;
    // 0x0045540C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00455410: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00455414: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00455418: jr          $ra
    // 0x0045541C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0045541C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0045C478(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045C478: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045C47C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045C480: sw          $zero, 0x99C($at)
    MEM_W(0X99C, ctx->r1) = 0;
    // 0x0045C484: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045C488: sw          $v0, 0x964($at)
    MEM_W(0X964, ctx->r1) = ctx->r2;
    // 0x0045C48C: jr          $ra
    // 0x0045C490: nop

    return;
    // 0x0045C490: nop

;}
RECOMP_FUNC void func_0044F0F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00416120:
    // 0x0044F0F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0044F0F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0044F0F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0044F0FC: lh          $v1, 0x4($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4);
    // 0x0044F100: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x0044F104: bne         $v1, $v0, L_0044F11C
    if (ctx->r3 != ctx->r2) {
        // 0x0044F108: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0044F11C;
    }
    // 0x0044F108: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0044F10C: jal         0x00413230
    // 0x0044F110: nop

    func_00413230(rdram, ctx);
        goto after_0;
    // 0x0044F110: nop

    after_0:
    // 0x0044F114: j           L_00416120
    // 0x0044F118: nop

    entry_00416120(rdram, ctx);
    return;
    // 0x0044F118: nop

L_0044F11C:
    // 0x0044F11C: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0044F120: beql        $v0, $zero, L_0044F158
    if (ctx->r2 == 0) {
        // 0x0044F124: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_0044F158;
    }
    goto skip_0;
    // 0x0044F124: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x0044F128: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x0044F12C: beql        $v1, $zero, L_0044F158
    if (ctx->r3 == 0) {
        // 0x0044F130: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_0044F158;
    }
    goto skip_1;
    // 0x0044F130: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    skip_1:
    // 0x0044F134: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
L_0044F138:
    // 0x0044F138: beq         $v1, $a0, L_0044F154
    if (ctx->r3 == ctx->r4) {
        // 0x0044F13C: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_0044F154;
    }
    // 0x0044F13C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0044F140: beq         $v0, $zero, L_0044F154
    if (ctx->r2 == 0) {
        // 0x0044F144: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_0044F154;
    }
    // 0x0044F144: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0044F148: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x0044F14C: bne         $v1, $zero, L_0044F138
    if (ctx->r3 != 0) {
        // 0x0044F150: nop
    
            goto L_0044F138;
    }
    // 0x0044F150: nop

L_0044F154:
    // 0x0044F154: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_0044F158:
    // 0x0044F158: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0044F15C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0044F160: jr          $ra
    // 0x0044F164: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0044F164: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00241CB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00241CB0: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x00241CB4: sw          $s4, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r20;
    // 0x00241CB8: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x00241CBC: sw          $ra, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r31;
    // 0x00241CC0: sw          $s3, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r19;
    // 0x00241CC4: sw          $s2, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r18;
    // 0x00241CC8: sw          $s1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r17;
    // 0x00241CCC: sw          $s0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r16;
    // 0x00241CD0: sdc1        $f20, 0xC8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XC8, ctx->r29);
    // 0x00241CD4: lw          $s1, 0x0($s4)
    ctx->r17 = MEM_W(ctx->r20, 0X0);
    // 0x00241CD8: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x00241CDC: addiu       $s3, $v0, 0x14
    ctx->r19 = ADD32(ctx->r2, 0X14);
    // 0x00241CE0: lhu         $v0, 0x4($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X4);
    // 0x00241CE4: bne         $v0, $zero, L_00241D0C
    if (ctx->r2 != 0) {
        // 0x00241CE8: addu        $s2, $a1, $zero
        ctx->r18 = ADD32(ctx->r5, 0);
            goto L_00241D0C;
    }
    // 0x00241CE8: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00241CEC: lw          $a0, 0x10($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X10);
    // 0x00241CF0: beql        $a0, $zero, L_00241D10
    if (ctx->r4 == 0) {
        // 0x00241CF4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00241D10;
    }
    goto skip_0;
    // 0x00241CF4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    skip_0:
    // 0x00241CF8: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x00241CFC: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x00241D00: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x00241D04: bne         $v1, $v0, L_00241E0C
    if (ctx->r3 != ctx->r2) {
        // 0x00241D08: nop
    
            goto L_00241E0C;
    }
    // 0x00241D08: nop

L_00241D0C:
    // 0x00241D0C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_00241D10:
    // 0x00241D10: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x00241D14: jal         0x00241960
    // 0x00241D18: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    entry_00241960(rdram, ctx);
        goto after_0;
    // 0x00241D18: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_0:
    // 0x00241D1C: lwc1        $f0, 0x5C($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X5C);
    // 0x00241D20: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x00241D24: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x00241D28: nop

    // 0x00241D2C: bc1f        L_00241E0C
    if (!c1cs) {
        // 0x00241D30: addiu       $s0, $sp, 0x70
        ctx->r16 = ADD32(ctx->r29, 0X70);
            goto L_00241E0C;
    }
    // 0x00241D30: addiu       $s0, $sp, 0x70
    ctx->r16 = ADD32(ctx->r29, 0X70);
    // 0x00241D34: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00241D38: jal         0x0023C9CC
    // 0x00241D3C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_0023C9CC(rdram, ctx);
        goto after_1;
    // 0x00241D3C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_1:
    // 0x00241D40: lhu         $v0, 0x4($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X4);
    // 0x00241D44: beq         $v0, $zero, L_00241D64
    if (ctx->r2 == 0) {
        // 0x00241D48: nop
    
            goto L_00241D64;
    }
    // 0x00241D48: nop

    // 0x00241D4C: lw          $a1, 0x4($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X4);
    // 0x00241D50: lw          $a2, 0xC($s2)
    ctx->r6 = MEM_W(ctx->r18, 0XC);
    // 0x00241D54: jal         0x0023C730
    // 0x00241D58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0023C730(rdram, ctx);
        goto after_2;
    // 0x00241D58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00241D5C: beq         $v0, $zero, L_00241E0C
    if (ctx->r2 == 0) {
        // 0x00241D60: nop
    
            goto L_00241E0C;
    }
    // 0x00241D60: nop

L_00241D64:
    // 0x00241D64: lw          $a1, 0x4($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X4);
    // 0x00241D68: lw          $a2, 0xC($s2)
    ctx->r6 = MEM_W(ctx->r18, 0XC);
    // 0x00241D6C: jal         0x0023C8A0
    // 0x00241D70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0023C8A0(rdram, ctx);
        goto after_3;
    // 0x00241D70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x00241D74: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    // 0x00241D78: lwc1        $f2, 0x8($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X8);
    // 0x00241D7C: lwc1        $f0, 0x5C($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X5C);
    // 0x00241D80: c.le.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl <= ctx->f2.fl;
    // 0x00241D84: nop

    // 0x00241D88: bc1t        L_00241D9C
    if (c1cs) {
        // 0x00241D8C: add.s       $f0, $f1, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
            goto L_00241D9C;
    }
    // 0x00241D8C: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00241D90: lhu         $v0, 0x4($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X4);
    // 0x00241D94: bne         $v0, $zero, L_00241E0C
    if (ctx->r2 != 0) {
        // 0x00241D98: nop
    
            goto L_00241E0C;
    }
    // 0x00241D98: nop

L_00241D9C:
    // 0x00241D9C: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x00241DA0: nop

    // 0x00241DA4: bc1f        L_00241E0C
    if (!c1cs) {
        // 0x00241DA8: nop
    
            goto L_00241E0C;
    }
    // 0x00241DA8: nop

    // 0x00241DAC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00241DB0: lwc1        $f0, 0x6874($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6874);
    // 0x00241DB4: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00241DB8: lwc1        $f1, 0x1C($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X1C);
    // 0x00241DBC: sw          $s1, 0x30($s2)
    MEM_W(0X30, ctx->r18) = ctx->r17;
    // 0x00241DC0: c.lt.s      $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f1.fl < ctx->f20.fl;
    // 0x00241DC4: nop

    // 0x00241DC8: bc1f        L_00241DD4
    if (!c1cs) {
        // 0x00241DCC: swc1        $f0, 0x8($s2)
        MEM_W(0X8, ctx->r18) = ctx->f0.u32l;
            goto L_00241DD4;
    }
    // 0x00241DCC: swc1        $f0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f0.u32l;
    // 0x00241DD0: swc1        $f20, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f20.u32l;
L_00241DD4:
    // 0x00241DD4: lw          $v1, 0x140($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X140);
    // 0x00241DD8: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x00241DDC: or          $a0, $v1, $v0
    ctx->r4 = ctx->r3 | ctx->r2;
    // 0x00241DE0: sw          $a0, 0x140($s1)
    MEM_W(0X140, ctx->r17) = ctx->r4;
    // 0x00241DE4: lbu         $v1, 0x0($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X0);
    // 0x00241DE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00241DEC: bne         $v1, $v0, L_00241E0C
    if (ctx->r3 != ctx->r2) {
        // 0x00241DF0: lui         $v1, 0x30
        ctx->r3 = S32(0X30 << 16);
            goto L_00241E0C;
    }
    // 0x00241DF0: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x00241DF4: lw          $v0, 0xD4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XD4);
    // 0x00241DF8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00241DFC: beq         $v0, $zero, L_00241E0C
    if (ctx->r2 == 0) {
        // 0x00241E00: lui         $v0, 0x2
        ctx->r2 = S32(0X2 << 16);
            goto L_00241E0C;
    }
    // 0x00241E00: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x00241E04: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x00241E08: sw          $v0, 0x140($s1)
    MEM_W(0X140, ctx->r17) = ctx->r2;
L_00241E0C:
    // 0x00241E0C: lw          $ra, 0xC4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XC4);
    // 0x00241E10: lw          $s4, 0xC0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XC0);
    // 0x00241E14: lw          $s3, 0xBC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XBC);
    // 0x00241E18: lw          $s2, 0xB8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XB8);
    // 0x00241E1C: lw          $s1, 0xB4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XB4);
    // 0x00241E20: lw          $s0, 0xB0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XB0);
    // 0x00241E24: ldc1        $f20, 0xC8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XC8);
    // 0x00241E28: jr          $ra
    // 0x00241E2C: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x00241E2C: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void func_00294158(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00294158: jal         0x002113A4
    // 0x0029415C: nop

    func_002113A4(rdram, ctx);
        goto after_0;
    // 0x0029415C: nop

    after_0:
;}
