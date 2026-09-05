#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_0029E384(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_00256738(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00256738: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025673C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00256740: lw          $a2, 0x14($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X14);
    // 0x00256744: lw          $v1, 0x90($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X90);
    // 0x00256748: lb          $v0, 0x18($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X18);
    // 0x0025674C: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00256750: bne         $v0, $zero, L_002567AC
    if (ctx->r2 != 0) {
        // 0x00256754: nop
    
            goto L_002567AC;
    }
    // 0x00256754: nop

    // 0x00256758: lb          $v0, 0x19($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X19);
    // 0x0025675C: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00256760: bne         $v0, $zero, L_002567AC
    if (ctx->r2 != 0) {
        // 0x00256764: nop
    
            goto L_002567AC;
    }
    // 0x00256764: nop

    // 0x00256768: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x0025676C: lw          $v0, 0x1A8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1A8);
    // 0x00256770: lwc1        $f0, 0xAC8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XAC8);
    // 0x00256774: lh          $v1, 0xA08($v0)
    ctx->r3 = MEM_H(ctx->r2, 0XA08);
    // 0x00256778: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x0025677C: bne         $v1, $v0, L_00256790
    if (ctx->r3 != ctx->r2) {
        // 0x00256780: neg.s       $f1, $f0
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = -ctx->f0.fl;
            goto L_00256790;
    }
    // 0x00256780: neg.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = -ctx->f0.fl;
    // 0x00256784: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00256788: lwc1        $f0, 0x71FC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X71FC);
    // 0x0025678C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
L_00256790:
    // 0x00256790: lb          $v0, 0x1A($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X1A);
    // 0x00256794: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00256798: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0025679C: div.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
    // 0x002567A0: mfc1        $a1, $f1
    ctx->r5 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x002567A4: jal         0x00210790
    // 0x002567A8: nop

    func_00210790(rdram, ctx);
        goto after_0;
    // 0x002567A8: nop

    after_0:
L_002567AC:
    // 0x002567AC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002567B0: jr          $ra
    // 0x002567B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002567B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0026F6C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026F6C8: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x0026F6CC: lwc1        $f1, 0x0($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X0);
    // 0x0026F6D0: mul.s       $f2, $f1, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0026F6D4: lwc1        $f1, 0xC($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0XC);
    // 0x0026F6D8: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0026F6DC: c.le.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl <= ctx->f1.fl;
    // 0x0026F6E0: nop

    // 0x0026F6E4: bc1fl       L_0026F6EC
    if (!c1cs) {
        // 0x0026F6E8: mov.s       $f2, $f1
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.fl = ctx->f1.fl;
            goto L_0026F6EC;
    }
    goto skip_0;
    // 0x0026F6E8: mov.s       $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.fl = ctx->f1.fl;
    skip_0:
L_0026F6EC:
    // 0x0026F6EC: lwc1        $f0, 0x4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4);
    // 0x0026F6F0: lwc1        $f1, 0x4($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X4);
    // 0x0026F6F4: mul.s       $f4, $f1, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0026F6F8: lwc1        $f1, 0x10($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X10);
    // 0x0026F6FC: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0026F700: c.le.s      $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f4.fl <= ctx->f1.fl;
    // 0x0026F704: nop

    // 0x0026F708: bc1t        L_0026F714
    if (c1cs) {
        // 0x0026F70C: mov.s       $f3, $f2
        CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    ctx->f3.fl = ctx->f2.fl;
            goto L_0026F714;
    }
    // 0x0026F70C: mov.s       $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    ctx->f3.fl = ctx->f2.fl;
    // 0x0026F710: mov.s       $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.fl = ctx->f1.fl;
L_0026F714:
    // 0x0026F714: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    // 0x0026F718: lwc1        $f1, 0x8($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X8);
    // 0x0026F71C: mul.s       $f2, $f1, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0026F720: lwc1        $f1, 0x14($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X14);
    // 0x0026F724: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0026F728: c.le.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl <= ctx->f1.fl;
    // 0x0026F72C: nop

    // 0x0026F730: bc1t        L_0026F73C
    if (c1cs) {
        // 0x0026F734: add.s       $f3, $f3, $f4
        CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f4.fl;
            goto L_0026F73C;
    }
    // 0x0026F734: add.s       $f3, $f3, $f4
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f4.fl;
    // 0x0026F738: mov.s       $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.fl = ctx->f1.fl;
L_0026F73C:
    // 0x0026F73C: add.s       $f3, $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f2.fl;
    // 0x0026F740: lwc1        $f0, 0xC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XC);
    // 0x0026F744: c.le.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl <= ctx->f0.fl;
    // 0x0026F748: nop

    // 0x0026F74C: bc1t        L_0026F758
    if (c1cs) {
        // 0x0026F750: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0026F758;
    }
    // 0x0026F750: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0026F754: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0026F758:
    // 0x0026F758: jr          $ra
    // 0x0026F75C: nop

    return;
    // 0x0026F75C: nop

;}
RECOMP_FUNC void func_004671BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0042E2A4:
    // 0x004671BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
L_0042E340:
    // 0x004671C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004671C4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x004671C8: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x004671CC: lw          $v1, -0x6788($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6788);
    // 0x004671D0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x004671D4: addiu       $a0, $a0, -0x5528
    ctx->r4 = ADD32(ctx->r4, -0X5528);
    // 0x004671D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x004671DC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x004671E0: slti        $v1, $v1, 0x2
    ctx->r3 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x004671E4: xori        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 ^ 0X1;
    // 0x004671E8: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x004671EC: beq         $v0, $zero, L_00467200
    if (ctx->r2 == 0) {
        // 0x004671F0: sll         $a2, $v1, 1
        ctx->r6 = S32(ctx->r3 << 1);
            goto L_00467200;
    }
    // 0x004671F0: sll         $a2, $v1, 1
    ctx->r6 = S32(ctx->r3 << 1);
    // 0x004671F4: lbu         $v0, 0x19($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X19);
    // 0x004671F8: beq         $v0, $zero, L_0046720C
    if (ctx->r2 == 0) {
        // 0x004671FC: nop
    
            goto L_0046720C;
    }
    // 0x004671FC: nop

L_00467200:
    // 0x00467200: lhu         $v0, 0x52A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X52A);
    // 0x00467204: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00467208: sh          $v0, 0x52A($s0)
    MEM_H(0X52A, ctx->r16) = ctx->r2;
L_0046720C:
    // 0x0046720C: lh          $v0, 0x52A($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X52A);
    // 0x00467210: bgtz        $v0, L_00467254
    if (SIGNED(ctx->r2) > 0) {
        // 0x00467214: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00467254;
    }
    // 0x00467214: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00467218: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0046721C: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x00467220: beq         $v0, $zero, L_00467244
    if (ctx->r2 == 0) {
        // 0x00467224: addu        $a1, $a0, $zero
        ctx->r5 = ADD32(ctx->r4, 0);
            goto L_00467244;
    }
    // 0x00467224: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00467228: lb          $v0, 0xE2($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE2);
    // 0x0046722C: bne         $v0, $zero, L_00467244
    if (ctx->r2 != 0) {
        // 0x00467230: nop
    
            goto L_00467244;
    }
    // 0x00467230: nop

    // 0x00467234: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x00467238: lbu         $v0, 0x3E($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3E);
    // 0x0046723C: beq         $v0, $zero, L_00467340
    if (ctx->r2 == 0) {
        // 0x00467240: nop
    
            goto L_00467340;
    }
    // 0x00467240: nop

L_00467244:
    // 0x00467244: jal         0x0024E5F0
    // 0x00467248: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_0024E5F0(rdram, ctx);
        goto after_0;
    // 0x00467248: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_0:
    // 0x0046724C: j           L_0042E340
    // 0x00467250: nop

    entry_0042E340(rdram, ctx);
    return;
    // 0x00467250: nop

L_00467254:
    // 0x00467254: lw          $a1, 0x92C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X92C);
    // 0x00467258: jal         0x00248BA8
    // 0x0046725C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_00248BA8(rdram, ctx);
        goto after_1;
    // 0x0046725C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x00467260: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00467264: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x00467268: bne         $v0, $zero, L_0046728C
    if (ctx->r2 != 0) {
        // 0x0046726C: nop
    
            goto L_0046728C;
    }
    // 0x0046726C: nop

    // 0x00467270: lw          $a0, 0xA50($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA50);
    // 0x00467274: jal         0x00285BD0
    // 0x00467278: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_00285BD0(rdram, ctx);
        goto after_2;
    // 0x00467278: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x0046727C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00467280: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x00467284: beq         $v0, $zero, L_0046729C
    if (ctx->r2 == 0) {
        // 0x00467288: addiu       $v0, $zero, 0x6400
        ctx->r2 = ADD32(0, 0X6400);
            goto L_0046729C;
    }
    // 0x00467288: addiu       $v0, $zero, 0x6400
    ctx->r2 = ADD32(0, 0X6400);
L_0046728C:
    // 0x0046728C: jal         0x002540E4
    // 0x00467290: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002540E4(rdram, ctx);
        goto after_3;
    // 0x00467290: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x00467294: j           L_0042E2A4
    // 0x00467298: nop

    entry_0042E2A4(rdram, ctx);
    return;
    // 0x00467298: nop

L_0046729C:
    // 0x0046729C: sw          $v0, 0x524($s0)
    MEM_W(0X524, ctx->r16) = ctx->r2;
    // 0x004672A0: sw          $v0, 0x144($s0)
    MEM_W(0X144, ctx->r16) = ctx->r2;
    // 0x004672A4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x004672A8: lwc1        $f0, 0x6AC8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6AC8);
    // 0x004672AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x004672B0: jal         0x00248340
    // 0x004672B4: swc1        $f0, 0xA28($s0)
    MEM_W(0XA28, ctx->r16) = ctx->f0.u32l;
    func_00248340(rdram, ctx);
        goto after_4;
    // 0x004672B4: swc1        $f0, 0xA28($s0)
    MEM_W(0XA28, ctx->r16) = ctx->f0.u32l;
    after_4:
    // 0x004672B8: sw          $zero, 0x1298($s0)
    MEM_W(0X1298, ctx->r16) = 0;
    // 0x004672BC: sw          $zero, 0x12A8($s0)
    MEM_W(0X12A8, ctx->r16) = 0;
    // 0x004672C0: sw          $zero, 0x12AC($s0)
    MEM_W(0X12AC, ctx->r16) = 0;
    // 0x004672C4: sw          $zero, 0x12B0($s0)
    MEM_W(0X12B0, ctx->r16) = 0;
    // 0x004672C8: sw          $zero, 0x12A4($s0)
    MEM_W(0X12A4, ctx->r16) = 0;
    // 0x004672CC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x004672D0: lw          $v1, -0x5378($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5378);
    // 0x004672D4: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x004672D8: bne         $v1, $v0, L_00467328
    if (ctx->r3 != ctx->r2) {
        // 0x004672DC: nop
    
            goto L_00467328;
    }
    // 0x004672DC: nop

    // 0x004672E0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x004672E4: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x004672E8: bne         $v0, $zero, L_00467338
    if (ctx->r2 != 0) {
        // 0x004672EC: nop
    
            goto L_00467338;
    }
    // 0x004672EC: nop

    // 0x004672F0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004672F4: lw          $v0, 0x6D20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D20);
    // 0x004672F8: sltiu       $v0, $v0, 0xB
    ctx->r2 = ctx->r2 < 0XB ? 1 : 0;
    // 0x004672FC: bne         $v0, $zero, L_00467328
    if (ctx->r2 != 0) {
        // 0x00467300: nop
    
            goto L_00467328;
    }
    // 0x00467300: nop

    // 0x00467304: lh          $v1, 0x52A($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X52A);
    // 0x00467308: slti        $v0, $v1, 0xB
    ctx->r2 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
    // 0x0046730C: beq         $v0, $zero, L_00467328
    if (ctx->r2 == 0) {
        // 0x00467310: sll         $v0, $v1, 1
        ctx->r2 = S32(ctx->r3 << 1);
            goto L_00467328;
    }
    // 0x00467310: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x00467314: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00467318: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0046731C: lh          $a0, -0x1D4C($at)
    ctx->r4 = MEM_H(ctx->r1, -0X1D4C);
    // 0x00467320: jal         0x0027580C
    // 0x00467324: nop

    func_0027580C(rdram, ctx);
        goto after_5;
    // 0x00467324: nop

    after_5:
L_00467328:
    // 0x00467328: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0046732C: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x00467330: beq         $v0, $zero, L_00467340
    if (ctx->r2 == 0) {
        // 0x00467334: nop
    
            goto L_00467340;
    }
    // 0x00467334: nop

L_00467338:
    // 0x00467338: jal         0x00248A8C
    // 0x0046733C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00248A8C(rdram, ctx);
        goto after_6;
    // 0x0046733C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_00467340:
    // 0x00467340: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00467344: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00467348: jr          $ra
    // 0x0046734C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0046734C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00294B84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00294B84: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00294B88: lw          $v1, 0x7760($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7760);
    // 0x00294B8C: lw          $v0, 0x2C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X2C);
    // 0x00294B90: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00294B94: jr          $ra
    // 0x00294B98: sw          $a0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r4;
    return;
    // 0x00294B98: sw          $a0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r4;
;}
RECOMP_FUNC void func_00468D6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00468D6C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00468D70: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00468D74: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00468D78: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00468D7C: addiu       $a2, $zero, 0x11F0
    ctx->r6 = ADD32(0, 0X11F0);
    // 0x00468D80: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00468D84: jal         0x00266C5C
    // 0x00468D88: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_00266C5C(rdram, ctx);
        goto after_0;
    // 0x00468D88: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x00468D8C: addiu       $a0, $s0, 0xC
    ctx->r4 = ADD32(ctx->r16, 0XC);
    // 0x00468D90: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00468D94: jal         0x00200500
    // 0x00468D98: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00200500(rdram, ctx);
        goto after_1;
    // 0x00468D98: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_1:
    // 0x00468D9C: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
    // 0x00468DA0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00468DA4: jal         0x00200500
    // 0x00468DA8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00200500(rdram, ctx);
        goto after_2;
    // 0x00468DA8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_2:
    // 0x00468DAC: addiu       $a0, $s0, 0xF0C
    ctx->r4 = ADD32(ctx->r16, 0XF0C);
    // 0x00468DB0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00468DB4: jal         0x00200500
    // 0x00468DB8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00200500(rdram, ctx);
        goto after_3;
    // 0x00468DB8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_3:
    // 0x00468DBC: addiu       $s1, $s0, 0x40
    ctx->r17 = ADD32(ctx->r16, 0X40);
    // 0x00468DC0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00468DC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00468DC8: sw          $v0, 0x11E8($s0)
    MEM_W(0X11E8, ctx->r16) = ctx->r2;
    // 0x00468DCC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00468DD0: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x00468DD4: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x00468DD8: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x00468DDC: sw          $zero, 0xF00($s0)
    MEM_W(0XF00, ctx->r16) = 0;
    // 0x00468DE0: sw          $zero, 0xF04($s0)
    MEM_W(0XF04, ctx->r16) = 0;
    // 0x00468DE4: sw          $zero, 0xF08($s0)
    MEM_W(0XF08, ctx->r16) = 0;
    // 0x00468DE8: jal         0x0042F8D0
    // 0x00468DEC: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
    entry_0042F8D0(rdram, ctx);
        goto after_4;
    // 0x00468DEC: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
    after_4:
    // 0x00468DF0: jal         0x0027D160
    // 0x00468DF4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0027D160(rdram, ctx);
        goto after_5;
    // 0x00468DF4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x00468DF8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00468DFC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00468E00: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00468E04: jr          $ra
    // 0x00468E08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00468E08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00402658(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00402658: addiu       $sp, $sp, -0x110
    ctx->r29 = ADD32(ctx->r29, -0X110);
    // 0x0040265C: sw          $s0, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r16;
    // 0x00402660: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00402664: sw          $s1, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r17;
    // 0x00402668: sw          $s2, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r18;
    // 0x0040266C: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x00402670: addiu       $s2, $s2, -0xC60
    ctx->r18 = ADD32(ctx->r18, -0XC60);
    // 0x00402674: sw          $ra, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r31;
    // 0x00402678: sw          $s3, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r19;
    // 0x0040267C: sdc1        $f20, 0x108($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X108, ctx->r29);
    // 0x00402680: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x00402684: lw          $s3, 0x214($s2)
    ctx->r19 = MEM_W(ctx->r18, 0X214);
    // 0x00402688: ori         $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 | 0X2000;
    // 0x0040268C: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x00402690: lw          $v0, 0x250($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X250);
    // 0x00402694: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00402698: lwc1        $f20, 0x338($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X338);
    // 0x0040269C: beq         $v0, $zero, L_004026AC
    if (ctx->r2 == 0) {
        // 0x004026A0: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_004026AC;
    }
    // 0x004026A0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x004026A4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004026A8: lwc1        $f20, 0x33C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X33C);
L_004026AC:
    // 0x004026AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x004026B0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x004026B4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x004026B8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x004026BC: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
    // 0x004026C0: jal         0x00246108
    // 0x004026C4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x004026C4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x004026C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x004026CC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x004026D0: jal         0x0024599C
    // 0x004026D4: addiu       $a2, $sp, 0xA0
    ctx->r6 = ADD32(ctx->r29, 0XA0);
    func_0024599C(rdram, ctx);
        goto after_1;
    // 0x004026D4: addiu       $a2, $sp, 0xA0
    ctx->r6 = ADD32(ctx->r29, 0XA0);
    after_1:
    // 0x004026D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x004026DC: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x004026E0: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x004026E4: jal         0x00245BAC
    // 0x004026E8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00245BAC(rdram, ctx);
        goto after_2;
    // 0x004026E8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x004026EC: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004026F0: lw          $v0, -0xA0C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XA0C);
    // 0x004026F4: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x004026F8: bne         $v0, $zero, L_00402708
    if (ctx->r2 != 0) {
        // 0x004026FC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00402708;
    }
    // 0x004026FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00402700: j           L_0040271C
    // 0x00402704: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
        goto L_0040271C;
    // 0x00402704: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_00402708:
    // 0x00402708: lui         $a3, 0x3F49
    ctx->r7 = S32(0X3F49 << 16);
    // 0x0040270C: ori         $a3, $a3, 0xFDC
    ctx->r7 = ctx->r7 | 0XFDC;
    // 0x00402710: jal         0x002451AC
    // 0x00402714: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002451AC(rdram, ctx);
        goto after_3;
    // 0x00402714: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x00402718: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_0040271C:
    // 0x0040271C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00402720: bne         $v1, $v0, L_00402738
    if (ctx->r3 != ctx->r2) {
        // 0x00402724: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00402738;
    }
    // 0x00402724: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00402728: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0040272C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00402730: j           L_00402860
    // 0x00402734: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
        goto L_00402860;
    // 0x00402734: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
L_00402738:
    // 0x00402738: bne         $v1, $v0, L_0040274C
    if (ctx->r3 != ctx->r2) {
        // 0x0040273C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0040274C;
    }
    // 0x0040273C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00402740: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00402744: j           L_00402860
    // 0x00402748: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
        goto L_00402860;
    // 0x00402748: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
L_0040274C:
    // 0x0040274C: lw          $v0, 0x250($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X250);
    // 0x00402750: beq         $v0, $zero, L_004027A0
    if (ctx->r2 == 0) {
        // 0x00402754: nop
    
            goto L_004027A0;
    }
    // 0x00402754: nop

    // 0x00402758: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x0040275C: mul.s       $f1, $f0, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00402760: sw          $zero, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = 0;
    // 0x00402764: swc1        $f0, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f0.u32l;
    // 0x00402768: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x0040276C: mul.s       $f12, $f0, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00402770: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    // 0x00402774: jal         0x00298470
    // 0x00402778: swc1        $f0, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f0.u32l;
    func_00298470(rdram, ctx);
        goto after_4;
    // 0x00402778: swc1        $f0, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x0040277C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00402780: lwc1        $f1, 0x340($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X340);
    // 0x00402784: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00402788: nop

    // 0x0040278C: bc1f        L_00402868
    if (!c1cs) {
        // 0x00402790: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00402868;
    }
    // 0x00402790: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00402794: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00402798: j           L_00402860
    // 0x0040279C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
        goto L_00402860;
    // 0x0040279C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
L_004027A0:
    // 0x004027A0: lw          $v0, 0x60($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X60);
    // 0x004027A4: beq         $v0, $zero, L_00402868
    if (ctx->r2 == 0) {
        // 0x004027A8: nop
    
            goto L_00402868;
    }
    // 0x004027A8: nop

    // 0x004027AC: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x004027B0: beq         $v0, $zero, L_00402868
    if (ctx->r2 == 0) {
        // 0x004027B4: nop
    
            goto L_00402868;
    }
    // 0x004027B4: nop

    // 0x004027B8: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x004027BC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x004027C0: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x004027C4: nop

    // 0x004027C8: bc1f        L_004027F4
    if (!c1cs) {
        // 0x004027CC: nop
    
            goto L_004027F4;
    }
    // 0x004027CC: nop

    // 0x004027D0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004027D4: lwc1        $f1, 0x344($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X344);
    // 0x004027D8: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x004027DC: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x004027E0: nop

    // 0x004027E4: bc1f        L_00402868
    if (!c1cs) {
        // 0x004027E8: nop
    
            goto L_00402868;
    }
    // 0x004027E8: nop

    // 0x004027EC: j           L_0040280C
    // 0x004027F0: nop

        goto L_0040280C;
    // 0x004027F0: nop

L_004027F4:
    // 0x004027F4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004027F8: lwc1        $f0, 0x348($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X348);
    // 0x004027FC: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x00402800: nop

    // 0x00402804: bc1f        L_00402868
    if (!c1cs) {
        // 0x00402808: nop
    
            goto L_00402868;
    }
    // 0x00402808: nop

L_0040280C:
    // 0x0040280C: lwc1        $f1, 0x80($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X80);
    // 0x00402810: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00402814: lwc1        $f0, 0x34C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X34C);
    // 0x00402818: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0040281C: nop

    // 0x00402820: bc1f        L_00402840
    if (!c1cs) {
        // 0x00402824: nop
    
            goto L_00402840;
    }
    // 0x00402824: nop

    // 0x00402828: lw          $v0, 0xC($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XC);
    // 0x0040282C: beq         $v0, $zero, L_00402840
    if (ctx->r2 == 0) {
        // 0x00402830: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00402840;
    }
    // 0x00402830: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00402834: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00402838: j           L_00402860
    // 0x0040283C: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
        goto L_00402860;
    // 0x0040283C: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
L_00402840:
    // 0x00402840: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00402844: lwc1        $f0, 0x350($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X350);
    // 0x00402848: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0040284C: nop

    // 0x00402850: bc1f        L_00402868
    if (!c1cs) {
        // 0x00402854: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00402868;
    }
    // 0x00402854: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00402858: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0040285C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
L_00402860:
    // 0x00402860: jal         0x00243414
    // 0x00402864: nop

    func_00243414(rdram, ctx);
        goto after_5;
    // 0x00402864: nop

    after_5:
L_00402868:
    // 0x00402868: lw          $ra, 0x100($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X100);
    // 0x0040286C: lw          $s3, 0xFC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XFC);
    // 0x00402870: lw          $s2, 0xF8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XF8);
    // 0x00402874: lw          $s1, 0xF4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XF4);
    // 0x00402878: lw          $s0, 0xF0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XF0);
    // 0x0040287C: ldc1        $f20, 0x108($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X108);
    // 0x00402880: jr          $ra
    // 0x00402884: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
    return;
    // 0x00402884: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
;}
RECOMP_FUNC void func_0044480C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0040B904:
    // 0x0044480C: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x00444810: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x00444814: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00444818: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x0044481C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00444820: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x00444824: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x00444828: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
    // 0x0044482C: sw          $ra, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r31;
    // 0x00444830: jal         0x00246108
    // 0x00444834: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x00444834: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x00444838: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0044483C: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x00444840: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x00444844: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x00444848: jal         0x00245BAC
    // 0x0044484C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x0044484C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x00444850: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00444854: addiu       $v1, $v1, -0x490
    ctx->r3 = ADD32(ctx->r3, -0X490);
    // 0x00444858: lw          $v0, 0x67C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X67C);
    // 0x0044485C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00444860: sw          $v0, 0x67C($v1)
    MEM_W(0X67C, ctx->r3) = ctx->r2;
    // 0x00444864: slti        $v0, $v0, 0x65
    ctx->r2 = SIGNED(ctx->r2) < 0X65 ? 1 : 0;
    // 0x00444868: beq         $v0, $zero, L_004448F8
    if (ctx->r2 == 0) {
        // 0x0044486C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_004448F8;
    }
    // 0x0044486C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00444870: lw          $v0, 0x60($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X60);
    // 0x00444874: beq         $v0, $zero, L_00444904
    if (ctx->r2 == 0) {
        // 0x00444878: nop
    
            goto L_00444904;
    }
    // 0x00444878: nop

    // 0x0044487C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x00444880: beq         $v0, $zero, L_00444904
    if (ctx->r2 == 0) {
        // 0x00444884: nop
    
            goto L_00444904;
    }
    // 0x00444884: nop

    // 0x00444888: lwc1        $f1, 0x9C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X9C);
    // 0x0044488C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00444890: lwc1        $f0, 0x87C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X87C);
    // 0x00444894: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00444898: nop

    // 0x0044489C: bc1f        L_00444904
    if (!c1cs) {
        // 0x004448A0: nop
    
            goto L_00444904;
    }
    // 0x004448A0: nop

    // 0x004448A4: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x004448A8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x004448AC: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x004448B0: nop

    // 0x004448B4: bc1f        L_004448E0
    if (!c1cs) {
        // 0x004448B8: nop
    
            goto L_004448E0;
    }
    // 0x004448B8: nop

    // 0x004448BC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004448C0: lwc1        $f1, 0x880($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X880);
    // 0x004448C4: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x004448C8: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x004448CC: nop

    // 0x004448D0: bc1t        L_004448FC
    if (c1cs) {
        // 0x004448D4: addu        $a1, $s1, $zero
        ctx->r5 = ADD32(ctx->r17, 0);
            goto L_004448FC;
    }
    // 0x004448D4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x004448D8: j           L_0040B904
    // 0x004448DC: nop

    entry_0040B904(rdram, ctx);
    return;
    // 0x004448DC: nop

L_004448E0:
    // 0x004448E0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004448E4: lwc1        $f0, 0x884($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X884);
    // 0x004448E8: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x004448EC: nop

    // 0x004448F0: bc1f        L_00444904
    if (!c1cs) {
        // 0x004448F4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00444904;
    }
    // 0x004448F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_004448F8:
    // 0x004448F8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
L_004448FC:
    // 0x004448FC: jal         0x00243414
    // 0x00444900: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x00444900: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    after_2:
L_00444904:
    // 0x00444904: lw          $ra, 0xA8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA8);
    // 0x00444908: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x0044490C: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x00444910: jr          $ra
    // 0x00444914: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x00444914: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_00281194(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00281194: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00281198: lw          $v1, -0x6770($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6770);
    // 0x0028119C: beq         $v1, $zero, L_002811BC
    if (ctx->r3 == 0) {
        // 0x002811A0: nop
    
            goto L_002811BC;
    }
    // 0x002811A0: nop

L_002811A4:
    // 0x002811A4: lw          $v0, 0x51C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X51C);
    // 0x002811A8: beq         $v0, $a0, L_002811C4
    if (ctx->r2 == ctx->r4) {
            // 0x002811AC: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    func_002811C4(rdram, ctx);
    return;
    }
    // 0x002811AC: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x002811B0: lw          $v1, 0x1320($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1320);
    // 0x002811B4: bne         $v1, $zero, L_002811A4
    if (ctx->r3 != 0) {
        // 0x002811B8: nop
    
            goto L_002811A4;
    }
    // 0x002811B8: nop

L_002811BC:
    // 0x002811BC: jr          $ra
    // 0x002811C0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x002811C0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00455B94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00455B94: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00455B98: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00455B9C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00455BA0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00455BA4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00455BA8: lw          $a1, 0x1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1C);
    // 0x00455BAC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00455BB0: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x00455BB4: jal         0x0025340C
    // 0x00455BB8: nop

    func_0025340C(rdram, ctx);
        goto after_0;
    // 0x00455BB8: nop

    after_0:
    // 0x00455BBC: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x00455BC0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00455BC4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00455BC8: lhu         $s1, -0x54A8($at)
    ctx->r17 = MEM_HU(ctx->r1, -0X54A8);
    // 0x00455BCC: jal         0x004160F0
    // 0x00455BD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_004160F0(rdram, ctx);
        goto after_1;
    // 0x00455BD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00455BD4: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00455BD8: addiu       $a1, $a1, 0x1330
    ctx->r5 = ADD32(ctx->r5, 0X1330);
    // 0x00455BDC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x00455BE0: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x00455BE4: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00455BE8: jal         0x0029E3E0
    // 0x00455BEC: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0029E3E0(rdram, ctx);
        goto after_2;
    // 0x00455BEC: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_2:
    // 0x00455BF0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00455BF4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00455BF8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00455BFC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00455C00: jr          $ra
    // 0x00455C04: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00455C04: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00291BF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00291BF4: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x00291BF8: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x00291BFC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00291C00: sw          $ra, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r31;
    // 0x00291C04: sw          $s7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r23;
    // 0x00291C08: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x00291C0C: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x00291C10: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x00291C14: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x00291C18: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x00291C1C: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x00291C20: sdc1        $f20, 0x68($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X68, ctx->r29);
    // 0x00291C24: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x00291C28: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00291C2C: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x00291C30: bne         $v0, $zero, L_00291C50
    if (ctx->r2 != 0) {
        // 0x00291C34: addu        $s2, $a0, $zero
        ctx->r18 = ADD32(ctx->r4, 0);
            goto L_00291C50;
    }
    // 0x00291C34: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00291C38: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x00291C3C: addiu       $a0, $a0, -0x5C80
    ctx->r4 = ADD32(ctx->r4, -0X5C80);
    // 0x00291C40: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00291C44: addiu       $a1, $a1, -0x5C7C
    ctx->r5 = ADD32(ctx->r5, -0X5C7C);
    // 0x00291C48: jal         0x0029B020
    // 0x00291C4C: addiu       $a2, $zero, 0x1B4
    ctx->r6 = ADD32(0, 0X1B4);
    func_0029B020(rdram, ctx);
        goto after_0;
    // 0x00291C4C: addiu       $a2, $zero, 0x1B4
    ctx->r6 = ADD32(0, 0X1B4);
    after_0:
L_00291C50:
    // 0x00291C50: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x00291C54: lbu         $s4, 0x9($s0)
    ctx->r20 = MEM_BU(ctx->r16, 0X9);
    // 0x00291C58: lbu         $s0, 0xA($s0)
    ctx->r16 = MEM_BU(ctx->r16, 0XA);
    // 0x00291C5C: andi        $s5, $v0, 0xF
    ctx->r21 = ctx->r2 & 0XF;
    // 0x00291C60: andi        $v1, $v0, 0xF0
    ctx->r3 = ctx->r2 & 0XF0;
    // 0x00291C64: addu        $s6, $s4, $zero
    ctx->r22 = ADD32(ctx->r20, 0);
    // 0x00291C68: addiu       $v0, $zero, 0xB0
    ctx->r2 = ADD32(0, 0XB0);
    // 0x00291C6C: beq         $v1, $v0, L_0029211C
    if (ctx->r3 == ctx->r2) {
        // 0x00291C70: addu        $s3, $s0, $zero
        ctx->r19 = ADD32(ctx->r16, 0);
            goto L_0029211C;
    }
    // 0x00291C70: addu        $s3, $s0, $zero
    ctx->r19 = ADD32(ctx->r16, 0);
    // 0x00291C74: slti        $v0, $v1, 0xB1
    ctx->r2 = SIGNED(ctx->r3) < 0XB1 ? 1 : 0;
    // 0x00291C78: beq         $v0, $zero, L_00291CB4
    if (ctx->r2 == 0) {
        // 0x00291C7C: addiu       $v0, $zero, 0x90
        ctx->r2 = ADD32(0, 0X90);
            goto L_00291CB4;
    }
    // 0x00291C7C: addiu       $v0, $zero, 0x90
    ctx->r2 = ADD32(0, 0X90);
    // 0x00291C80: beq         $v1, $v0, L_00291CEC
    if (ctx->r3 == ctx->r2) {
        // 0x00291C84: slti        $v0, $v1, 0x91
        ctx->r2 = SIGNED(ctx->r3) < 0X91 ? 1 : 0;
            goto L_00291CEC;
    }
    // 0x00291C84: slti        $v0, $v1, 0x91
    ctx->r2 = SIGNED(ctx->r3) < 0X91 ? 1 : 0;
    // 0x00291C88: beq         $v0, $zero, L_00291CA0
    if (ctx->r2 == 0) {
        // 0x00291C8C: addiu       $v0, $zero, 0x80
        ctx->r2 = ADD32(0, 0X80);
            goto L_00291CA0;
    }
    // 0x00291C8C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x00291C90: beq         $v1, $v0, L_00292014
    if (ctx->r3 == ctx->r2) {
        // 0x00291C94: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00292014;
    }
    // 0x00291C94: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00291C98: j           L_0029244C
    // 0x00291C9C: nop

        goto L_0029244C;
    // 0x00291C9C: nop

L_00291CA0:
    // 0x00291CA0: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x00291CA4: beq         $v1, $v0, L_00292068
    if (ctx->r3 == ctx->r2) {
        // 0x00291CA8: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00292068;
    }
    // 0x00291CA8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00291CAC: j           L_0029244C
    // 0x00291CB0: nop

        goto L_0029244C;
    // 0x00291CB0: nop

L_00291CB4:
    // 0x00291CB4: addiu       $v0, $zero, 0xD0
    ctx->r2 = ADD32(0, 0XD0);
    // 0x00291CB8: beq         $v1, $v0, L_002920BC
    if (ctx->r3 == ctx->r2) {
        // 0x00291CBC: slti        $v0, $v1, 0xD1
        ctx->r2 = SIGNED(ctx->r3) < 0XD1 ? 1 : 0;
            goto L_002920BC;
    }
    // 0x00291CBC: slti        $v0, $v1, 0xD1
    ctx->r2 = SIGNED(ctx->r3) < 0XD1 ? 1 : 0;
    // 0x00291CC0: beq         $v0, $zero, L_00291CD8
    if (ctx->r2 == 0) {
        // 0x00291CC4: addiu       $v0, $zero, 0xC0
        ctx->r2 = ADD32(0, 0XC0);
            goto L_00291CD8;
    }
    // 0x00291CC4: addiu       $v0, $zero, 0xC0
    ctx->r2 = ADD32(0, 0XC0);
    // 0x00291CC8: beq         $v1, $v0, L_00292364
    if (ctx->r3 == ctx->r2) {
        // 0x00291CCC: nop
    
            goto L_00292364;
    }
    // 0x00291CCC: nop

    // 0x00291CD0: j           L_0029244C
    // 0x00291CD4: nop

        goto L_0029244C;
    // 0x00291CD4: nop

L_00291CD8:
    // 0x00291CD8: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x00291CDC: beq         $v1, $v0, L_002923BC
    if (ctx->r3 == ctx->r2) {
        // 0x00291CE0: andi        $v1, $s0, 0xFF
        ctx->r3 = ctx->r16 & 0XFF;
            goto L_002923BC;
    }
    // 0x00291CE0: andi        $v1, $s0, 0xFF
    ctx->r3 = ctx->r16 & 0XFF;
    // 0x00291CE4: j           L_0029244C
    // 0x00291CE8: nop

        goto L_0029244C;
    // 0x00291CE8: nop

L_00291CEC:
    // 0x00291CEC: andi        $s1, $s0, 0xFF
    ctx->r17 = ctx->r16 & 0XFF;
    // 0x00291CF0: beq         $s1, $zero, L_00292010
    if (ctx->r17 == 0) {
        // 0x00291CF4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00292010;
    }
    // 0x00291CF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00291CF8: lw          $v1, 0x2C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X2C);
    // 0x00291CFC: bne         $v1, $v0, L_0029244C
    if (ctx->r3 != ctx->r2) {
        // 0x00291D00: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0029244C;
    }
    // 0x00291D00: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00291D04: andi        $s3, $s4, 0xFF
    ctx->r19 = ctx->r20 & 0XFF;
    // 0x00291D08: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00291D0C: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x00291D10: andi        $s0, $s5, 0xFF
    ctx->r16 = ctx->r21 & 0XFF;
    // 0x00291D14: jal         0x00292640
    // 0x00291D18: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00292640(rdram, ctx);
        goto after_1;
    // 0x00291D18: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00291D1C: addu        $s6, $v0, $zero
    ctx->r22 = ADD32(ctx->r2, 0);
    // 0x00291D20: beq         $s6, $zero, L_0029244C
    if (ctx->r22 == 0) {
        // 0x00291D24: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0029244C;
    }
    // 0x00291D24: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00291D28: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00291D2C: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x00291D30: lw          $v0, 0x60($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X60);
    // 0x00291D34: sll         $s3, $s0, 4
    ctx->r19 = S32(ctx->r16 << 4);
    // 0x00291D38: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x00291D3C: lbu         $v0, 0x8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X8);
    // 0x00291D40: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x00291D44: sh          $zero, 0x32($sp)
    MEM_H(0X32, ctx->r29) = 0;
    // 0x00291D48: sb          $zero, 0x34($sp)
    MEM_B(0X34, ctx->r29) = 0;
    // 0x00291D4C: jal         0x0029247C
    // 0x00291D50: sh          $v0, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r2;
    func_0029247C(rdram, ctx);
        goto after_2;
    // 0x00291D50: sh          $v0, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r2;
    after_2:
    // 0x00291D54: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x00291D58: beq         $s1, $zero, L_0029244C
    if (ctx->r17 == 0) {
        // 0x00291D5C: addiu       $s7, $s1, 0x4
        ctx->r23 = ADD32(ctx->r17, 0X4);
            goto L_0029244C;
    }
    // 0x00291D5C: addiu       $s7, $s1, 0x4
    ctx->r23 = ADD32(ctx->r17, 0X4);
    // 0x00291D60: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    // 0x00291D64: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x00291D68: jal         0x00293F60
    // 0x00291D6C: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    func_00293F60(rdram, ctx);
        goto after_3;
    // 0x00291D6C: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_3:
    // 0x00291D70: sw          $s6, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r22;
    // 0x00291D74: sb          $zero, 0x34($s1)
    MEM_B(0X34, ctx->r17) = 0;
    // 0x00291D78: lw          $v0, 0x60($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X60);
    // 0x00291D7C: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x00291D80: lbu         $v0, 0xB($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XB);
    // 0x00291D84: sltiu       $v0, $v0, 0x40
    ctx->r2 = ctx->r2 < 0X40 ? 1 : 0;
    // 0x00291D88: bnel        $v0, $zero, L_00291D98
    if (ctx->r2 != 0) {
        // 0x00291D8C: sb          $zero, 0x35($s1)
        MEM_B(0X35, ctx->r17) = 0;
            goto L_00291D98;
    }
    goto skip_0;
    // 0x00291D8C: sb          $zero, 0x35($s1)
    MEM_B(0X35, ctx->r17) = 0;
    skip_0:
    // 0x00291D90: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00291D94: sb          $v0, 0x35($s1)
    MEM_B(0X35, ctx->r17) = ctx->r2;
L_00291D98:
    // 0x00291D98: lw          $v0, 0x4($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X4);
    // 0x00291D9C: andi        $v1, $s4, 0xFF
    ctx->r3 = ctx->r20 & 0XFF;
    // 0x00291DA0: lbu         $a0, 0x5($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X5);
    // 0x00291DA4: lbu         $v0, 0x4($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4);
    // 0x00291DA8: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x00291DAC: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x00291DB0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x00291DB4: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x00291DB8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00291DBC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00291DC0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00291DC4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00291DC8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00291DCC: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x00291DD0: jal         0x00290D90
    // 0x00291DD4: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    func_00290D90(rdram, ctx);
        goto after_4;
    // 0x00291DD4: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    after_4:
    // 0x00291DD8: swc1        $f0, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->f0.u32l;
    // 0x00291DDC: lw          $v0, 0x0($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X0);
    // 0x00291DE0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00291DE4: lwc1        $f0, -0x5C00($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5C00);
    // 0x00291DE8: lbu         $v0, 0xC($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XC);
    // 0x00291DEC: sb          $v0, 0x30($s1)
    MEM_B(0X30, ctx->r17) = ctx->r2;
    // 0x00291DF0: lw          $v1, 0x0($s6)
    ctx->r3 = MEM_W(ctx->r22, 0X0);
    // 0x00291DF4: lw          $v0, 0x1C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1C);
    // 0x00291DF8: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x00291DFC: sb          $zero, 0x37($s1)
    MEM_B(0X37, ctx->r17) = 0;
    // 0x00291E00: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00291E04: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    // 0x00291E08: lw          $v1, 0x60($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X60);
    // 0x00291E0C: sll         $v0, $s5, 4
    ctx->r2 = S32(ctx->r21 << 4);
    // 0x00291E10: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00291E14: lw          $s0, 0x0($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X0);
    // 0x00291E18: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x00291E1C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x00291E20: beq         $v0, $zero, L_00291E8C
    if (ctx->r2 == 0) {
        // 0x00291E24: nop
    
            goto L_00291E8C;
    }
    // 0x00291E24: nop

    // 0x00291E28: lw          $v0, 0x70($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X70);
    // 0x00291E2C: beq         $v0, $zero, L_00291E8C
    if (ctx->r2 == 0) {
        // 0x00291E30: addiu       $a0, $sp, 0x38
        ctx->r4 = ADD32(ctx->r29, 0X38);
            goto L_00291E8C;
    }
    // 0x00291E30: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x00291E34: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x00291E38: lbu         $a2, 0x4($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X4);
    // 0x00291E3C: lbu         $a3, 0x5($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X5);
    // 0x00291E40: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00291E44: lbu         $v0, 0x7($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X7);
    // 0x00291E48: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00291E4C: lw          $v0, 0x70($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X70);
    // 0x00291E50: jalr        $v0
    // 0x00291E54: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x00291E54: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_5:
    // 0x00291E58: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x00291E5C: beq         $a2, $zero, L_00291E8C
    if (ctx->r6 == 0) {
        // 0x00291E60: addiu       $a0, $s2, 0x48
        ctx->r4 = ADD32(ctx->r18, 0X48);
            goto L_00291E8C;
    }
    // 0x00291E60: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
    // 0x00291E64: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x00291E68: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x00291E6C: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x00291E70: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x00291E74: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00291E78: jal         0x00291034
    // 0x00291E7C: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    func_00291034(rdram, ctx);
        goto after_6;
    // 0x00291E7C: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_6:
    // 0x00291E80: lbu         $v0, 0x37($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X37);
    // 0x00291E84: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x00291E88: sb          $v0, 0x37($s1)
    MEM_B(0X37, ctx->r17) = ctx->r2;
L_00291E8C:
    // 0x00291E8C: lwc1        $f0, 0x3C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x00291E90: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00291E94: lwc1        $f1, -0x5BFC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X5BFC);
    // 0x00291E98: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00291E9C: nop

    // 0x00291EA0: bc1t        L_00291EB8
    if (c1cs) {
        // 0x00291EA4: addiu       $a0, $s1, 0x36
        ctx->r4 = ADD32(ctx->r17, 0X36);
            goto L_00291EB8;
    }
    // 0x00291EA4: addiu       $a0, $s1, 0x36
    ctx->r4 = ADD32(ctx->r17, 0X36);
    // 0x00291EA8: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00291EAC: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00291EB0: j           L_00291ECC
    // 0x00291EB4: nop

        goto L_00291ECC;
    // 0x00291EB4: nop

L_00291EB8:
    // 0x00291EB8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00291EBC: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00291EC0: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00291EC4: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00291EC8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
L_00291ECC:
    // 0x00291ECC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00291ED0: lwc1        $f0, -0x5BF8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5BF8);
    // 0x00291ED4: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x00291ED8: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x00291EDC: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x00291EE0: beq         $v0, $zero, L_00291F50
    if (ctx->r2 == 0) {
        // 0x00291EE4: nop
    
            goto L_00291F50;
    }
    // 0x00291EE4: nop

    // 0x00291EE8: lw          $v0, 0x70($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X70);
    // 0x00291EEC: beq         $v0, $zero, L_00291F50
    if (ctx->r2 == 0) {
        // 0x00291EF0: addiu       $a0, $sp, 0x38
        ctx->r4 = ADD32(ctx->r29, 0X38);
            goto L_00291F50;
    }
    // 0x00291EF0: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x00291EF4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x00291EF8: lbu         $a2, 0x8($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X8);
    // 0x00291EFC: lbu         $a3, 0x9($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X9);
    // 0x00291F00: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00291F04: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x00291F08: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00291F0C: lw          $v0, 0x70($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X70);
    // 0x00291F10: jalr        $v0
    // 0x00291F14: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_7;
    // 0x00291F14: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_7:
    // 0x00291F18: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x00291F1C: beq         $a2, $zero, L_00291F50
    if (ctx->r6 == 0) {
        // 0x00291F20: addiu       $a0, $s2, 0x48
        ctx->r4 = ADD32(ctx->r18, 0X48);
            goto L_00291F50;
    }
    // 0x00291F20: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
    // 0x00291F24: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x00291F28: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x00291F2C: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
    // 0x00291F30: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x00291F34: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00291F38: sb          $s5, 0x2C($sp)
    MEM_B(0X2C, ctx->r29) = ctx->r21;
    // 0x00291F3C: jal         0x00291034
    // 0x00291F40: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    func_00291034(rdram, ctx);
        goto after_8;
    // 0x00291F40: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_8:
    // 0x00291F44: lbu         $v0, 0x37($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X37);
    // 0x00291F48: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x00291F4C: sb          $v0, 0x37($s1)
    MEM_B(0X37, ctx->r17) = ctx->r2;
L_00291F50:
    // 0x00291F50: lwc1        $f1, 0x3C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X3C);
    // 0x00291F54: sll         $v0, $s5, 4
    ctx->r2 = S32(ctx->r21 << 4);
    // 0x00291F58: swc1        $f1, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    // 0x00291F5C: lw          $v1, 0x60($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X60);
    // 0x00291F60: lwc1        $f20, 0x28($s1)
    ctx->f20.u32l = MEM_W(ctx->r17, 0X28);
    // 0x00291F64: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00291F68: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x00291F6C: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00291F70: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00291F74: lbu         $s0, 0xA($v0)
    ctx->r16 = MEM_BU(ctx->r2, 0XA);
    // 0x00291F78: mul.s       $f20, $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f1.fl);
    // 0x00291F7C: jal         0x00292804
    // 0x00291F80: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_00292804(rdram, ctx);
        goto after_9;
    // 0x00291F80: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_9:
    // 0x00291F84: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00291F88: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00291F8C: jal         0x00292774
    // 0x00291F90: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    func_00292774(rdram, ctx);
        goto after_10;
    // 0x00291F90: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_10:
    // 0x00291F94: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x00291F98: lw          $v1, 0x0($s6)
    ctx->r3 = MEM_W(ctx->r22, 0X0);
    // 0x00291F9C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x00291FA0: lw          $a2, 0x0($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X0);
    // 0x00291FA4: andi        $s0, $s0, 0xFF
    ctx->r16 = ctx->r16 & 0XFF;
    // 0x00291FA8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00291FAC: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x00291FB0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00291FB4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00291FB8: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x00291FBC: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x00291FC0: lw          $a2, 0x8($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X8);
    // 0x00291FC4: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x00291FC8: jal         0x00294540
    // 0x00291FCC: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    func_00294540(rdram, ctx);
        goto after_11;
    // 0x00291FCC: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    after_11:
    // 0x00291FD0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x00291FD4: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x00291FD8: sw          $s7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r23;
    // 0x00291FDC: lw          $v0, 0x0($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X0);
    // 0x00291FE0: lbu         $v0, 0xD($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XD);
    // 0x00291FE4: sb          $v0, 0x2C($sp)
    MEM_B(0X2C, ctx->r29) = ctx->r2;
    // 0x00291FE8: lw          $v0, 0x0($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X0);
    // 0x00291FEC: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x00291FF0: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x00291FF4: lw          $v0, 0x0($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X0);
    // 0x00291FF8: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
    // 0x00291FFC: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x00292000: jal         0x00291034
    // 0x00292004: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_00291034(rdram, ctx);
        goto after_12;
    // 0x00292004: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_12:
    // 0x00292008: j           L_0029244C
    // 0x0029200C: nop

        goto L_0029244C;
    // 0x0029200C: nop

L_00292010:
    // 0x00292010: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00292014:
    // 0x00292014: andi        $a1, $s4, 0xFF
    ctx->r5 = ctx->r20 & 0XFF;
    // 0x00292018: jal         0x002925E0
    // 0x0029201C: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    func_002925E0(rdram, ctx);
        goto after_13;
    // 0x0029201C: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    after_13:
    // 0x00292020: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x00292024: beq         $s1, $zero, L_0029244C
    if (ctx->r17 == 0) {
        // 0x00292028: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0029244C;
    }
    // 0x00292028: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0029202C: lbu         $v1, 0x35($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X35);
    // 0x00292030: bne         $v1, $v0, L_00292044
    if (ctx->r3 != ctx->r2) {
        // 0x00292034: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_00292044;
    }
    // 0x00292034: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x00292038: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0029203C: j           L_0029244C
    // 0x00292040: sb          $v0, 0x35($s1)
    MEM_B(0X35, ctx->r17) = ctx->r2;
        goto L_0029244C;
    // 0x00292040: sb          $v0, 0x35($s1)
    MEM_B(0X35, ctx->r17) = ctx->r2;
L_00292044:
    // 0x00292044: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x00292048: sb          $v1, 0x35($s1)
    MEM_B(0X35, ctx->r17) = ctx->r3;
    // 0x0029204C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00292050: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00292054: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    // 0x00292058: jal         0x00292A74
    // 0x0029205C: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    func_00292A74(rdram, ctx);
        goto after_14;
    // 0x0029205C: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    after_14:
    // 0x00292060: j           L_0029244C
    // 0x00292064: nop

        goto L_0029244C;
    // 0x00292064: nop

L_00292068:
    // 0x00292068: andi        $a1, $s4, 0xFF
    ctx->r5 = ctx->r20 & 0XFF;
    // 0x0029206C: jal         0x002925E0
    // 0x00292070: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    func_002925E0(rdram, ctx);
        goto after_15;
    // 0x00292070: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    after_15:
    // 0x00292074: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x00292078: beq         $s1, $zero, L_0029244C
    if (ctx->r17 == 0) {
        // 0x0029207C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0029244C;
    }
    // 0x0029207C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00292080: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00292084: jal         0x00292774
    // 0x00292088: sb          $s0, 0x33($s1)
    MEM_B(0X33, ctx->r17) = ctx->r16;
    func_00292774(rdram, ctx);
        goto after_16;
    // 0x00292088: sb          $s0, 0x33($s1)
    MEM_B(0X33, ctx->r17) = ctx->r16;
    after_16:
    // 0x0029208C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00292090: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x00292094: lw          $a1, 0x1C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X1C);
    // 0x00292098: jal         0x002927E8
    // 0x0029209C: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    func_002927E8(rdram, ctx);
        goto after_17;
    // 0x0029209C: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    after_17:
    // 0x002920A0: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    // 0x002920A4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x002920A8: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x002920AC: jal         0x002943E0
    // 0x002920B0: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    func_002943E0(rdram, ctx);
        goto after_18;
    // 0x002920B0: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    after_18:
    // 0x002920B4: j           L_0029244C
    // 0x002920B8: nop

        goto L_0029244C;
    // 0x002920B8: nop

L_002920BC:
    // 0x002920BC: lw          $s1, 0x64($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X64);
    // 0x002920C0: beq         $s1, $zero, L_0029244C
    if (ctx->r17 == 0) {
        // 0x002920C4: andi        $s3, $s5, 0xFF
        ctx->r19 = ctx->r21 & 0XFF;
            goto L_0029244C;
    }
    // 0x002920C4: andi        $s3, $s5, 0xFF
    ctx->r19 = ctx->r21 & 0XFF;
L_002920C8:
    // 0x002920C8: lbu         $v0, 0x31($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X31);
    // 0x002920CC: bne         $v0, $s3, L_00292108
    if (ctx->r2 != ctx->r19) {
        // 0x002920D0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00292108;
    }
    // 0x002920D0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002920D4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x002920D8: jal         0x00292774
    // 0x002920DC: sb          $s6, 0x33($s1)
    MEM_B(0X33, ctx->r17) = ctx->r22;
    func_00292774(rdram, ctx);
        goto after_19;
    // 0x002920DC: sb          $s6, 0x33($s1)
    MEM_B(0X33, ctx->r17) = ctx->r22;
    after_19:
    // 0x002920E0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002920E4: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x002920E8: lw          $a1, 0x1C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X1C);
    // 0x002920EC: jal         0x002927E8
    // 0x002920F0: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    func_002927E8(rdram, ctx);
        goto after_20;
    // 0x002920F0: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    after_20:
    // 0x002920F4: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    // 0x002920F8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x002920FC: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x00292100: jal         0x002943E0
    // 0x00292104: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    func_002943E0(rdram, ctx);
        goto after_21;
    // 0x00292104: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    after_21:
L_00292108:
    // 0x00292108: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x0029210C: beq         $s1, $zero, L_0029244C
    if (ctx->r17 == 0) {
        // 0x00292110: nop
    
            goto L_0029244C;
    }
    // 0x00292110: nop

    // 0x00292114: j           L_002920C8
    // 0x00292118: nop

        goto L_002920C8;
    // 0x00292118: nop

L_0029211C:
    // 0x0029211C: andi        $v1, $s4, 0xFF
    ctx->r3 = ctx->r20 & 0XFF;
    // 0x00292120: slti        $v0, $v1, 0x1C
    ctx->r2 = SIGNED(ctx->r3) < 0X1C ? 1 : 0;
    // 0x00292124: beq         $v0, $zero, L_00292168
    if (ctx->r2 == 0) {
        // 0x00292128: slti        $v0, $v1, 0x14
        ctx->r2 = SIGNED(ctx->r3) < 0X14 ? 1 : 0;
            goto L_00292168;
    }
    // 0x00292128: slti        $v0, $v1, 0x14
    ctx->r2 = SIGNED(ctx->r3) < 0X14 ? 1 : 0;
    // 0x0029212C: beq         $v0, $zero, L_0029244C
    if (ctx->r2 == 0) {
        // 0x00292130: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_0029244C;
    }
    // 0x00292130: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x00292134: beq         $v1, $v0, L_0029218C
    if (ctx->r3 == ctx->r2) {
        // 0x00292138: slti        $v0, $v1, 0xB
        ctx->r2 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
            goto L_0029218C;
    }
    // 0x00292138: slti        $v0, $v1, 0xB
    ctx->r2 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
    // 0x0029213C: beq         $v0, $zero, L_00292154
    if (ctx->r2 == 0) {
        // 0x00292140: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_00292154;
    }
    // 0x00292140: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x00292144: beq         $v1, $v0, L_002921E4
    if (ctx->r3 == ctx->r2) {
        // 0x00292148: andi        $a2, $s5, 0xFF
        ctx->r6 = ctx->r21 & 0XFF;
            goto L_002921E4;
    }
    // 0x00292148: andi        $a2, $s5, 0xFF
    ctx->r6 = ctx->r21 & 0XFF;
    // 0x0029214C: j           L_0029244C
    // 0x00292150: nop

        goto L_0029244C;
    // 0x00292150: nop

L_00292154:
    // 0x00292154: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x00292158: beq         $v1, $v0, L_00292260
    if (ctx->r3 == ctx->r2) {
        // 0x0029215C: sll         $v0, $s5, 4
        ctx->r2 = S32(ctx->r21 << 4);
            goto L_00292260;
    }
    // 0x0029215C: sll         $v0, $s5, 4
    ctx->r2 = S32(ctx->r21 << 4);
    // 0x00292160: j           L_0029244C
    // 0x00292164: nop

        goto L_0029244C;
    // 0x00292164: nop

L_00292168:
    // 0x00292168: addiu       $v0, $zero, 0x5B
    ctx->r2 = ADD32(0, 0X5B);
    // 0x0029216C: beq         $v1, $v0, L_00292318
    if (ctx->r3 == ctx->r2) {
        // 0x00292170: slti        $v0, $v1, 0x5C
        ctx->r2 = SIGNED(ctx->r3) < 0X5C ? 1 : 0;
            goto L_00292318;
    }
    // 0x00292170: slti        $v0, $v1, 0x5C
    ctx->r2 = SIGNED(ctx->r3) < 0X5C ? 1 : 0;
    // 0x00292174: beq         $v0, $zero, L_0029244C
    if (ctx->r2 == 0) {
        // 0x00292178: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_0029244C;
    }
    // 0x00292178: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x0029217C: beq         $v1, $v0, L_00292270
    if (ctx->r3 == ctx->r2) {
        // 0x00292180: andi        $a2, $s5, 0xFF
        ctx->r6 = ctx->r21 & 0XFF;
            goto L_00292270;
    }
    // 0x00292180: andi        $a2, $s5, 0xFF
    ctx->r6 = ctx->r21 & 0XFF;
    // 0x00292184: j           L_0029244C
    // 0x00292188: nop

        goto L_0029244C;
    // 0x00292188: nop

L_0029218C:
    // 0x0029218C: andi        $a2, $s5, 0xFF
    ctx->r6 = ctx->r21 & 0XFF;
    // 0x00292190: lw          $v1, 0x60($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X60);
    // 0x00292194: sll         $v0, $a2, 4
    ctx->r2 = S32(ctx->r6 << 4);
    // 0x00292198: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0029219C: sb          $s0, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r16;
    // 0x002921A0: lw          $s1, 0x64($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X64);
    // 0x002921A4: beq         $s1, $zero, L_0029244C
    if (ctx->r17 == 0) {
        // 0x002921A8: addu        $s0, $a2, $zero
        ctx->r16 = ADD32(ctx->r6, 0);
            goto L_0029244C;
    }
    // 0x002921A8: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
L_002921AC:
    // 0x002921AC: lbu         $v0, 0x31($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X31);
    // 0x002921B0: bne         $v0, $s0, L_002921D0
    if (ctx->r2 != ctx->r16) {
        // 0x002921B4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_002921D0;
    }
    // 0x002921B4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002921B8: jal         0x00292804
    // 0x002921BC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_00292804(rdram, ctx);
        goto after_22;
    // 0x002921BC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_22:
    // 0x002921C0: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x002921C4: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    // 0x002921C8: jal         0x002942B0
    // 0x002921CC: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    func_002942B0(rdram, ctx);
        goto after_23;
    // 0x002921CC: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    after_23:
L_002921D0:
    // 0x002921D0: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x002921D4: beq         $s1, $zero, L_0029244C
    if (ctx->r17 == 0) {
        // 0x002921D8: nop
    
            goto L_0029244C;
    }
    // 0x002921D8: nop

    // 0x002921DC: j           L_002921AC
    // 0x002921E0: nop

        goto L_002921AC;
    // 0x002921E0: nop

L_002921E4:
    // 0x002921E4: lw          $v1, 0x60($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X60);
    // 0x002921E8: sll         $v0, $a2, 4
    ctx->r2 = S32(ctx->r6 << 4);
    // 0x002921EC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x002921F0: sb          $s0, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r16;
    // 0x002921F4: lw          $s1, 0x64($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X64);
    // 0x002921F8: beq         $s1, $zero, L_0029244C
    if (ctx->r17 == 0) {
        // 0x002921FC: addu        $s3, $a2, $zero
        ctx->r19 = ADD32(ctx->r6, 0);
            goto L_0029244C;
    }
    // 0x002921FC: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x00292200: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
L_00292204:
    // 0x00292204: lbu         $v0, 0x31($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X31);
    // 0x00292208: bne         $v0, $s3, L_0029224C
    if (ctx->r2 != ctx->r19) {
        // 0x0029220C: nop
    
            goto L_0029224C;
    }
    // 0x0029220C: nop

    // 0x00292210: lbu         $v0, 0x34($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X34);
    // 0x00292214: beq         $v0, $s4, L_0029224C
    if (ctx->r2 == ctx->r20) {
        // 0x00292218: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0029224C;
    }
    // 0x00292218: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0029221C: jal         0x00292774
    // 0x00292220: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_00292774(rdram, ctx);
        goto after_24;
    // 0x00292220: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_24:
    // 0x00292224: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00292228: lw          $a1, 0x1C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X1C);
    // 0x0029222C: jal         0x002927E8
    // 0x00292230: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_002927E8(rdram, ctx);
        goto after_25;
    // 0x00292230: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_25:
    // 0x00292234: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    // 0x00292238: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x0029223C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x00292240: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x00292244: jal         0x002943E0
    // 0x00292248: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    func_002943E0(rdram, ctx);
        goto after_26;
    // 0x00292248: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    after_26:
L_0029224C:
    // 0x0029224C: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x00292250: beq         $s1, $zero, L_0029244C
    if (ctx->r17 == 0) {
        // 0x00292254: nop
    
            goto L_0029244C;
    }
    // 0x00292254: nop

    // 0x00292258: j           L_00292204
    // 0x0029225C: nop

        goto L_00292204;
    // 0x0029225C: nop

L_00292260:
    // 0x00292260: lw          $v1, 0x60($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X60);
    // 0x00292264: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00292268: j           L_0029244C
    // 0x0029226C: sb          $s0, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r16;
        goto L_0029244C;
    // 0x0029226C: sb          $s0, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r16;
L_00292270:
    // 0x00292270: lw          $v1, 0x60($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X60);
    // 0x00292274: sll         $v0, $a2, 4
    ctx->r2 = S32(ctx->r6 << 4);
    // 0x00292278: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0029227C: sb          $s0, 0xB($v0)
    MEM_B(0XB, ctx->r2) = ctx->r16;
    // 0x00292280: lw          $s1, 0x64($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X64);
    // 0x00292284: beq         $s1, $zero, L_0029244C
    if (ctx->r17 == 0) {
        // 0x00292288: addu        $s4, $a2, $zero
        ctx->r20 = ADD32(ctx->r6, 0);
            goto L_0029244C;
    }
    // 0x00292288: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x0029228C: addiu       $s3, $zero, 0x3
    ctx->r19 = ADD32(0, 0X3);
    // 0x00292290: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x00292294: sltiu       $s0, $v0, 0x40
    ctx->r16 = ctx->r2 < 0X40 ? 1 : 0;
    // 0x00292298: addiu       $s7, $zero, 0x2
    ctx->r23 = ADD32(0, 0X2);
    // 0x0029229C: addiu       $s6, $zero, 0x2
    ctx->r22 = ADD32(0, 0X2);
    // 0x002922A0: addiu       $s5, $zero, 0x4
    ctx->r21 = ADD32(0, 0X4);
L_002922A4:
    // 0x002922A4: lbu         $v0, 0x31($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X31);
    // 0x002922A8: bne         $v0, $s4, L_00292304
    if (ctx->r2 != ctx->r20) {
        // 0x002922AC: nop
    
            goto L_00292304;
    }
    // 0x002922AC: nop

    // 0x002922B0: lbu         $v0, 0x35($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X35);
    // 0x002922B4: beq         $v0, $s3, L_00292304
    if (ctx->r2 == ctx->r19) {
        // 0x002922B8: nop
    
            goto L_00292304;
    }
    // 0x002922B8: nop

    // 0x002922BC: bne         $s0, $zero, L_002922D4
    if (ctx->r16 != 0) {
        // 0x002922C0: nop
    
            goto L_002922D4;
    }
    // 0x002922C0: nop

    // 0x002922C4: beql        $v0, $zero, L_00292304
    if (ctx->r2 == 0) {
        // 0x002922C8: sb          $s7, 0x35($s1)
        MEM_B(0X35, ctx->r17) = ctx->r23;
            goto L_00292304;
    }
    goto skip_1;
    // 0x002922C8: sb          $s7, 0x35($s1)
    MEM_B(0X35, ctx->r17) = ctx->r23;
    skip_1:
    // 0x002922CC: j           L_00292304
    // 0x002922D0: nop

        goto L_00292304;
    // 0x002922D0: nop

L_002922D4:
    // 0x002922D4: bne         $v0, $s6, L_002922E4
    if (ctx->r2 != ctx->r22) {
        // 0x002922D8: nop
    
            goto L_002922E4;
    }
    // 0x002922D8: nop

    // 0x002922DC: j           L_00292304
    // 0x002922E0: sb          $zero, 0x35($s1)
    MEM_B(0X35, ctx->r17) = 0;
        goto L_00292304;
    // 0x002922E0: sb          $zero, 0x35($s1)
    MEM_B(0X35, ctx->r17) = 0;
L_002922E4:
    // 0x002922E4: bne         $v0, $s5, L_00292304
    if (ctx->r2 != ctx->r21) {
        // 0x002922E8: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00292304;
    }
    // 0x002922E8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x002922EC: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x002922F0: sb          $s3, 0x35($s1)
    MEM_B(0X35, ctx->r17) = ctx->r19;
    // 0x002922F4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x002922F8: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    // 0x002922FC: jal         0x00292A74
    // 0x00292300: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    func_00292A74(rdram, ctx);
        goto after_27;
    // 0x00292300: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    after_27:
L_00292304:
    // 0x00292304: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x00292308: beq         $s1, $zero, L_0029244C
    if (ctx->r17 == 0) {
        // 0x0029230C: nop
    
            goto L_0029244C;
    }
    // 0x0029230C: nop

    // 0x00292310: j           L_002922A4
    // 0x00292314: nop

        goto L_002922A4;
    // 0x00292314: nop

L_00292318:
    // 0x00292318: andi        $a2, $s5, 0xFF
    ctx->r6 = ctx->r21 & 0XFF;
    // 0x0029231C: lw          $v1, 0x60($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X60);
    // 0x00292320: sll         $v0, $a2, 4
    ctx->r2 = S32(ctx->r6 << 4);
    // 0x00292324: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00292328: sb          $s0, 0xA($v0)
    MEM_B(0XA, ctx->r2) = ctx->r16;
    // 0x0029232C: lw          $s1, 0x64($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X64);
    // 0x00292330: beq         $s1, $zero, L_0029244C
    if (ctx->r17 == 0) {
        // 0x00292334: addu        $s0, $a2, $zero
        ctx->r16 = ADD32(ctx->r6, 0);
            goto L_0029244C;
    }
    // 0x00292334: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
L_00292338:
    // 0x00292338: lbu         $v0, 0x31($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X31);
    // 0x0029233C: bne         $v0, $s0, L_00292350
    if (ctx->r2 != ctx->r16) {
        // 0x00292340: addiu       $a1, $s1, 0x4
        ctx->r5 = ADD32(ctx->r17, 0X4);
            goto L_00292350;
    }
    // 0x00292340: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    // 0x00292344: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x00292348: jal         0x00294200
    // 0x0029234C: andi        $a2, $s3, 0xFF
    ctx->r6 = ctx->r19 & 0XFF;
    func_00294200(rdram, ctx);
        goto after_28;
    // 0x0029234C: andi        $a2, $s3, 0xFF
    ctx->r6 = ctx->r19 & 0XFF;
    after_28:
L_00292350:
    // 0x00292350: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x00292354: beq         $s1, $zero, L_0029244C
    if (ctx->r17 == 0) {
        // 0x00292358: nop
    
            goto L_0029244C;
    }
    // 0x00292358: nop

    // 0x0029235C: j           L_00292338
    // 0x00292360: nop

        goto L_00292338;
    // 0x00292360: nop

L_00292364:
    // 0x00292364: lw          $v0, 0x20($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X20);
    // 0x00292368: bne         $v0, $zero, L_00292388
    if (ctx->r2 != 0) {
        // 0x0029236C: nop
    
            goto L_00292388;
    }
    // 0x0029236C: nop

    // 0x00292370: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x00292374: addiu       $a0, $a0, -0x5C80
    ctx->r4 = ADD32(ctx->r4, -0X5C80);
    // 0x00292378: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0029237C: addiu       $a1, $a1, -0x5C7C
    ctx->r5 = ADD32(ctx->r5, -0X5C7C);
    // 0x00292380: jal         0x0029B020
    // 0x00292384: addiu       $a2, $zero, 0x2CA
    ctx->r6 = ADD32(0, 0X2CA);
    func_0029B020(rdram, ctx);
        goto after_29;
    // 0x00292384: addiu       $a2, $zero, 0x2CA
    ctx->r6 = ADD32(0, 0X2CA);
    after_29:
L_00292388:
    // 0x00292388: lw          $a1, 0x20($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X20);
    // 0x0029238C: lh          $v0, 0x0($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X0);
    // 0x00292390: andi        $v1, $s4, 0xFF
    ctx->r3 = ctx->r20 & 0XFF;
    // 0x00292394: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00292398: beq         $v0, $zero, L_0029244C
    if (ctx->r2 == 0) {
        // 0x0029239C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0029244C;
    }
    // 0x0029239C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x002923A0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x002923A4: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x002923A8: lw          $a1, 0xC($v0)
    ctx->r5 = MEM_W(ctx->r2, 0XC);
    // 0x002923AC: jal         0x00292A20
    // 0x002923B0: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    func_00292A20(rdram, ctx);
        goto after_30;
    // 0x002923B0: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    after_30:
    // 0x002923B4: j           L_0029244C
    // 0x002923B8: nop

        goto L_0029244C;
    // 0x002923B8: nop

L_002923BC:
    // 0x002923BC: sll         $v1, $v1, 7
    ctx->r3 = S32(ctx->r3 << 7);
    // 0x002923C0: andi        $v0, $s4, 0xFF
    ctx->r2 = ctx->r20 & 0XFF;
    // 0x002923C4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x002923C8: andi        $s3, $s5, 0xFF
    ctx->r19 = ctx->r21 & 0XFF;
    // 0x002923CC: lw          $v0, 0x60($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X60);
    // 0x002923D0: sll         $s0, $s3, 4
    ctx->r16 = S32(ctx->r19 << 4);
    // 0x002923D4: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x002923D8: lh          $v0, 0x4($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4);
    // 0x002923DC: addiu       $v1, $v1, -0x2000
    ctx->r3 = ADD32(ctx->r3, -0X2000);
    // 0x002923E0: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002923E4: mflo        $v0
    ctx->r2 = lo;
    // 0x002923E8: bltzl       $v0, L_002923F0
    if (SIGNED(ctx->r2) < 0) {
        // 0x002923EC: addiu       $v0, $v0, 0x1FFF
        ctx->r2 = ADD32(ctx->r2, 0X1FFF);
            goto L_002923F0;
    }
    goto skip_2;
    // 0x002923EC: addiu       $v0, $v0, 0x1FFF
    ctx->r2 = ADD32(ctx->r2, 0X1FFF);
    skip_2:
L_002923F0:
    // 0x002923F0: jal         0x00290D90
    // 0x002923F4: sra         $a0, $v0, 13
    ctx->r4 = S32(SIGNED(ctx->r2) >> 13);
    func_00290D90(rdram, ctx);
        goto after_31;
    // 0x002923F4: sra         $a0, $v0, 13
    ctx->r4 = S32(SIGNED(ctx->r2) >> 13);
    after_31:
    // 0x002923F8: lw          $v0, 0x60($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X60);
    // 0x002923FC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x00292400: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x00292404: swc1        $f20, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f20.u32l;
    // 0x00292408: lw          $s1, 0x64($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X64);
    // 0x0029240C: beq         $s1, $zero, L_0029244C
    if (ctx->r17 == 0) {
        // 0x00292410: addu        $s0, $s3, $zero
        ctx->r16 = ADD32(ctx->r19, 0);
            goto L_0029244C;
    }
    // 0x00292410: addu        $s0, $s3, $zero
    ctx->r16 = ADD32(ctx->r19, 0);
L_00292414:
    // 0x00292414: lbu         $v0, 0x31($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X31);
    // 0x00292418: bne         $v0, $s0, L_00292440
    if (ctx->r2 != ctx->r16) {
        // 0x0029241C: nop
    
            goto L_00292440;
    }
    // 0x0029241C: nop

    // 0x00292420: lwc1        $f0, 0x28($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X28);
    // 0x00292424: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x00292428: lwc1        $f1, 0x2C($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X2C);
    // 0x0029242C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00292430: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x00292434: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x00292438: jal         0x00294340
    // 0x0029243C: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    func_00294340(rdram, ctx);
        goto after_32;
    // 0x0029243C: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    after_32:
L_00292440:
    // 0x00292440: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x00292444: bne         $s1, $zero, L_00292414
    if (ctx->r17 != 0) {
        // 0x00292448: nop
    
            goto L_00292414;
    }
    // 0x00292448: nop

L_0029244C:
    // 0x0029244C: lw          $ra, 0x60($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X60);
    // 0x00292450: lw          $s7, 0x5C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X5C);
    // 0x00292454: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x00292458: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x0029245C: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x00292460: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x00292464: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x00292468: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x0029246C: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x00292470: ldc1        $f20, 0x68($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X68);
    // 0x00292474: jr          $ra
    // 0x00292478: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x00292478: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_00283770(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00283770: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00283774: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00283778: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0028377C: jr          $ra
    // 0x00283780: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    return;
    // 0x00283780: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
;}
RECOMP_FUNC void func_0027314C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027314C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00273150: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00273154: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00273158: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0027315C: addiu       $a0, $a0, -0x6750
    ctx->r4 = ADD32(ctx->r4, -0X6750);
    // 0x00273160: addiu       $a1, $s1, 0x44
    ctx->r5 = ADD32(ctx->r17, 0X44);
    // 0x00273164: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00273168: jal         0x00281444
    // 0x0027316C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_00281444(rdram, ctx);
        goto after_0;
    // 0x0027316C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x00273170: lw          $v1, 0xB0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XB0);
    // 0x00273174: sw          $v0, 0x2B98($v1)
    MEM_W(0X2B98, ctx->r3) = ctx->r2;
    // 0x00273178: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x0027317C: lw          $s0, 0xB0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0XB0);
    // 0x00273180: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00273184: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x00273188: addiu       $s0, $s0, 0x84
    ctx->r16 = ADD32(ctx->r16, 0X84);
    // 0x0027318C: lh          $a1, 0xDC($v0)
    ctx->r5 = MEM_H(ctx->r2, 0XDC);
    // 0x00273190: jal         0x00293E60
    // 0x00273194: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00293E60(rdram, ctx);
        goto after_1;
    // 0x00273194: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00273198: jal         0x00293580
    // 0x0027319C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00293580(rdram, ctx);
        goto after_2;
    // 0x0027319C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x002731A0: lwc1        $f1, 0x2C($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X2C);
    // 0x002731A4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002731A8: lwc1        $f0, -0x7EA4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7EA4);
    // 0x002731AC: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x002731B0: nop

    // 0x002731B4: bc1f        L_002731CC
    if (!c1cs) {
        // 0x002731B8: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_002731CC;
    }
    // 0x002731B8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x002731BC: lw          $v1, 0xA8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XA8);
    // 0x002731C0: addiu       $v0, $zero, 0x228
    ctx->r2 = ADD32(0, 0X228);
    // 0x002731C4: bne         $v1, $v0, L_002731E8
    if (ctx->r3 != ctx->r2) {
        // 0x002731C8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002731E8;
    }
    // 0x002731C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_002731CC:
    // 0x002731CC: lw          $v0, 0xA4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XA4);
    // 0x002731D0: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x002731D4: beq         $v0, $zero, L_002731EC
    if (ctx->r2 == 0) {
        // 0x002731D8: nop
    
            goto L_002731EC;
    }
    // 0x002731D8: nop

    // 0x002731DC: lw          $v0, 0x18($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X18);
    // 0x002731E0: bne         $v0, $zero, L_002731EC
    if (ctx->r2 != 0) {
        // 0x002731E4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002731EC;
    }
    // 0x002731E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_002731E8:
    // 0x002731E8: sw          $v0, 0xAC($s1)
    MEM_W(0XAC, ctx->r17) = ctx->r2;
L_002731EC:
    // 0x002731EC: lw          $v0, 0xBC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XBC);
    // 0x002731F0: beq         $v0, $zero, L_00273210
    if (ctx->r2 == 0) {
        // 0x002731F4: nop
    
            goto L_00273210;
    }
    // 0x002731F4: nop

    // 0x002731F8: lw          $v0, 0xB0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XB0);
    // 0x002731FC: lw          $v1, 0x134($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X134);
    // 0x00273200: lw          $v0, 0xA8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XA8);
    // 0x00273204: beq         $v1, $v0, L_00273210
    if (ctx->r3 == ctx->r2) {
        // 0x00273208: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00273210;
    }
    // 0x00273208: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0027320C: sw          $v0, 0xAC($s1)
    MEM_W(0XAC, ctx->r17) = ctx->r2;
L_00273210:
    // 0x00273210: beq         $a0, $zero, L_0027327C
    if (ctx->r4 == 0) {
        // 0x00273214: nop
    
            goto L_0027327C;
    }
    // 0x00273214: nop

    // 0x00273218: lw          $v0, 0xAC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XAC);
    // 0x0027321C: beq         $v0, $zero, L_0027329C
    if (ctx->r2 == 0) {
        // 0x00273220: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0027329C;
    }
    // 0x00273220: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00273224: lw          $a0, 0xB0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XB0);
    // 0x00273228: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x0027322C: sw          $v0, 0xAC($s1)
    MEM_W(0XAC, ctx->r17) = ctx->r2;
    // 0x00273230: sw          $zero, 0x50($s1)
    MEM_W(0X50, ctx->r17) = 0;
    // 0x00273234: lw          $v0, 0x104($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X104);
    // 0x00273238: beq         $v1, $v0, L_0027335C
    if (ctx->r3 == ctx->r2) {
        // 0x0027323C: addiu       $s0, $a0, 0x84
        ctx->r16 = ADD32(ctx->r4, 0X84);
            goto L_0027335C;
    }
    // 0x0027323C: addiu       $s0, $a0, 0x84
    ctx->r16 = ADD32(ctx->r4, 0X84);
    // 0x00273240: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00273244: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00273248: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x0027324C: lh          $a1, 0xDC($v0)
    ctx->r5 = MEM_H(ctx->r2, 0XDC);
    // 0x00273250: jal         0x00293E60
    // 0x00273254: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00293E60(rdram, ctx);
        goto after_3;
    // 0x00273254: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x00273258: jal         0x00293580
    // 0x0027325C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00293580(rdram, ctx);
        goto after_4;
    // 0x0027325C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x00273260: beq         $v0, $zero, L_00273274
    if (ctx->r2 == 0) {
        // 0x00273264: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00273274;
    }
    // 0x00273264: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00273268: jal         0x00293EC0
    // 0x0027326C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00293EC0(rdram, ctx);
        goto after_5;
    // 0x0027326C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x00273270: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_00273274:
    // 0x00273274: j           L_0027335C
    // 0x00273278: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
        goto L_0027335C;
    // 0x00273278: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
L_0027327C:
    // 0x0027327C: lw          $v1, 0xA0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XA0);
    // 0x00273280: blez        $v1, L_0027329C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x00273284: addiu       $v1, $v1, -0x1
        ctx->r3 = ADD32(ctx->r3, -0X1);
            goto L_0027329C;
    }
    // 0x00273284: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00273288: lw          $v0, 0xA4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XA4);
    // 0x0027328C: sw          $v1, 0xA0($s1)
    MEM_W(0XA0, ctx->r17) = ctx->r3;
    // 0x00273290: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x00273294: j           L_0027335C
    // 0x00273298: sw          $v0, 0xA4($s1)
    MEM_W(0XA4, ctx->r17) = ctx->r2;
        goto L_0027335C;
    // 0x00273298: sw          $v0, 0xA4($s1)
    MEM_W(0XA4, ctx->r17) = ctx->r2;
L_0027329C:
    // 0x0027329C: lw          $v0, 0xA4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XA4);
    // 0x002732A0: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x002732A4: andi        $v0, $v0, 0x18
    ctx->r2 = ctx->r2 & 0X18;
    // 0x002732A8: bne         $v0, $v1, L_002732C4
    if (ctx->r2 != ctx->r3) {
        // 0x002732AC: nop
    
            goto L_002732C4;
    }
    // 0x002732AC: nop

    // 0x002732B0: lw          $a0, 0xB0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XB0);
    // 0x002732B4: jal         0x00293CE0
    // 0x002732B8: addiu       $a0, $a0, 0x84
    ctx->r4 = ADD32(ctx->r4, 0X84);
    func_00293CE0(rdram, ctx);
        goto after_6;
    // 0x002732B8: addiu       $a0, $a0, 0x84
    ctx->r4 = ADD32(ctx->r4, 0X84);
    after_6:
    // 0x002732BC: j           L_0027335C
    // 0x002732C0: nop

        goto L_0027335C;
    // 0x002732C0: nop

L_002732C4:
    // 0x002732C4: bne         $a0, $zero, L_00273320
    if (ctx->r4 != 0) {
        // 0x002732C8: nop
    
            goto L_00273320;
    }
    // 0x002732C8: nop

    // 0x002732CC: lw          $a0, 0xB0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XB0);
    // 0x002732D0: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x002732D4: addiu       $s0, $a0, 0x7C
    ctx->r16 = ADD32(ctx->r4, 0X7C);
    // 0x002732D8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x002732DC: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x002732E0: lh          $a1, 0x60($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X60);
    // 0x002732E4: jal         0x00293530
    // 0x002732E8: addiu       $a0, $a0, 0x84
    ctx->r4 = ADD32(ctx->r4, 0X84);
    func_00293530(rdram, ctx);
        goto after_7;
    // 0x002732E8: addiu       $a0, $a0, 0x84
    ctx->r4 = ADD32(ctx->r4, 0X84);
    after_7:
    // 0x002732EC: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x002732F0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x002732F4: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x002732F8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x002732FC: sh          $v0, 0x60($s0)
    MEM_H(0X60, ctx->r16) = ctx->r2;
    // 0x00273300: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00273304: sh          $zero, 0x38($s1)
    MEM_H(0X38, ctx->r17) = 0;
    // 0x00273308: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
    // 0x0027330C: sw          $v0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r2;
    // 0x00273310: sw          $v0, 0xA8($s1)
    MEM_W(0XA8, ctx->r17) = ctx->r2;
    // 0x00273314: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    // 0x00273318: j           L_0027335C
    // 0x0027331C: sw          $v0, 0xB4($s1)
    MEM_W(0XB4, ctx->r17) = ctx->r2;
        goto L_0027335C;
    // 0x0027331C: sw          $v0, 0xB4($s1)
    MEM_W(0XB4, ctx->r17) = ctx->r2;
L_00273320:
    // 0x00273320: lw          $v0, 0x50($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X50);
    // 0x00273324: beq         $v0, $zero, L_00273344
    if (ctx->r2 == 0) {
        // 0x00273328: nop
    
            goto L_00273344;
    }
    // 0x00273328: nop

    // 0x0027332C: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x00273330: lw          $a3, 0x4($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X4);
    // 0x00273334: lw          $t0, 0x8($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X8);
    // 0x00273338: sw          $a2, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->r6;
    // 0x0027333C: sw          $a3, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r7;
    // 0x00273340: sw          $t0, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->r8;
L_00273344:
    // 0x00273344: jal         0x002726DC
    // 0x00273348: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002726DC(rdram, ctx);
        goto after_8;
    // 0x00273348: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_8:
    // 0x0027334C: jal         0x00272B54
    // 0x00273350: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00272B54(rdram, ctx);
        goto after_9;
    // 0x00273350: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_9:
    // 0x00273354: jal         0x00272EC4
    // 0x00273358: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00272EC4(rdram, ctx);
        goto after_10;
    // 0x00273358: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_10:
L_0027335C:
    // 0x0027335C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00273360: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00273364: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00273368: jr          $ra
    // 0x0027336C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0027336C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00440BE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00440BE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00440BEC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00440BF0: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x00440BF4: beq         $v0, $zero, L_00440C0C
    if (ctx->r2 == 0) {
        // 0x00440BF8: nop
    
            goto L_00440C0C;
    }
    // 0x00440BF8: nop

    // 0x00440BFC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00440C00: sb          $zero, -0x630($at)
    MEM_B(-0X630, ctx->r1) = 0;
    // 0x00440C04: jal         0x00243414
    // 0x00440C08: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00440C08: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
L_00440C0C:
    // 0x00440C0C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00440C10: jr          $ra
    // 0x00440C14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00440C14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00451D00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_00298364(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00298364: jr          $ra
    // 0x00298368: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    return;
    // 0x00298368: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
;}
RECOMP_FUNC void func_0027B0FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027B0FC: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x0027B100: mtc1        $a1, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r5;
    // 0x0027B104: mtc1        $a2, $f6
    ctx->f6.u32l = ctx->r6;
    // 0x0027B108: mtc1        $a3, $f2
    ctx->f2.u32l = ctx->r7;
    // 0x0027B10C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x0027B110: lwc1        $f3, 0x10($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x0027B114: c.eq.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl == ctx->f4.fl;
    // 0x0027B118: nop

    // 0x0027B11C: bc1t        L_0027B144
    if (c1cs) {
        // 0x0027B120: addiu       $t2, $zero, 0x400
        ctx->r10 = ADD32(0, 0X400);
            goto L_0027B144;
    }
    // 0x0027B120: addiu       $t2, $zero, 0x400
    ctx->r10 = ADD32(0, 0X400);
    // 0x0027B124: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027B128: lwc1        $f0, -0x7BE0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7BE0);
    // 0x0027B12C: mtc1        $t2, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r10;
    // 0x0027B130: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0027B134: div.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0027B138: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0027B13C: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0027B140: mfc1        $t2, $f7
    ctx->r10 = (int32_t)ctx->f_odd[(7 - 1) * 2];
L_0027B144:
    // 0x0027B144: c.eq.s      $f3, $f4
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f3.fl == ctx->f4.fl;
    // 0x0027B148: nop

    // 0x0027B14C: bc1t        L_0027B174
    if (c1cs) {
        // 0x0027B150: addiu       $t1, $zero, 0x400
        ctx->r9 = ADD32(0, 0X400);
            goto L_0027B174;
    }
    // 0x0027B150: addiu       $t1, $zero, 0x400
    ctx->r9 = ADD32(0, 0X400);
    // 0x0027B154: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027B158: lwc1        $f0, -0x7BDC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7BDC);
    // 0x0027B15C: mtc1        $t1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r9;
    // 0x0027B160: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0027B164: div.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f3.fl);
    // 0x0027B168: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0027B16C: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0027B170: mfc1        $t1, $f7
    ctx->r9 = (int32_t)ctx->f_odd[(7 - 1) * 2];
L_0027B174:
    // 0x0027B174: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x0027B178: addiu       $v1, $v1, -0x71DC
    ctx->r3 = ADD32(ctx->r3, -0X71DC);
    // 0x0027B17C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027B180: lwc1        $f0, -0x7BD8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7BD8);
    // 0x0027B184: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x0027B188: mul.s       $f1, $f2, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0027B18C: lui         $v0, 0xFD90
    ctx->r2 = S32(0XFD90 << 16);
    // 0x0027B190: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x0027B194: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x0027B198: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027B19C: lwc1        $f2, -0x7BD4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X7BD4);
    // 0x0027B1A0: mul.s       $f0, $f3, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0027B1A4: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x0027B1A8: sw          $t0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r8;
    // 0x0027B1AC: addiu       $t0, $a1, 0x8
    ctx->r8 = ADD32(ctx->r5, 0X8);
    // 0x0027B1B0: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0027B1B4: add.s       $f1, $f5, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f5.fl + ctx->f1.fl;
    // 0x0027B1B8: lui         $v0, 0xDE00
    ctx->r2 = S32(0XDE00 << 16);
    // 0x0027B1BC: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x0027B1C0: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0027B1C4: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0027B1C8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0027B1CC: addiu       $v0, $v0, 0x2C90
    ctx->r2 = ADD32(ctx->r2, 0X2C90);
    // 0x0027B1D0: addiu       $a2, $a1, 0x10
    ctx->r6 = ADD32(ctx->r5, 0X10);
    // 0x0027B1D4: addiu       $a3, $a1, 0x18
    ctx->r7 = ADD32(ctx->r5, 0X18);
    // 0x0027B1D8: add.s       $f0, $f6, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x0027B1DC: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x0027B1E0: addiu       $v0, $a1, 0x20
    ctx->r2 = ADD32(ctx->r5, 0X20);
    // 0x0027B1E4: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0027B1E8: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x0027B1EC: sw          $a3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r7;
    // 0x0027B1F0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0027B1F4: trunc.w.s   $f7, $f1
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 1);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f1.fl);
    // 0x0027B1F8: mfc1        $v0, $f7
    ctx->r2 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0027B1FC: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0027B200: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0027B204: mul.s       $f0, $f5, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f5.fl, ctx->f2.fl);
    // 0x0027B208: lui         $a0, 0xE400
    ctx->r4 = S32(0XE400 << 16);
    // 0x0027B20C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x0027B210: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x0027B214: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x0027B218: mul.s       $f2, $f6, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x0027B21C: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x0027B220: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0027B224: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    // 0x0027B228: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0027B22C: mfc1        $v0, $f7
    ctx->r2 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0027B230: trunc.w.s   $f7, $f2
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 2);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f2.fl);
    // 0x0027B234: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0027B238: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x0027B23C: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x0027B240: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x0027B244: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0027B248: sw          $v0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r2;
    // 0x0027B24C: lui         $v0, 0xE100
    ctx->r2 = S32(0XE100 << 16);
    // 0x0027B250: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
    // 0x0027B254: lui         $v0, 0xF100
    ctx->r2 = S32(0XF100 << 16);
    // 0x0027B258: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x0027B25C: sw          $v0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r2;
    // 0x0027B260: sll         $v0, $t2, 16
    ctx->r2 = S32(ctx->r10 << 16);
    // 0x0027B264: andi        $v1, $t1, 0xFFFF
    ctx->r3 = ctx->r9 & 0XFFFF;
    // 0x0027B268: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0027B26C: jr          $ra
    // 0x0027B270: sw          $v0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r2;
    return;
    // 0x0027B270: sw          $v0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r2;
;}
RECOMP_FUNC void func_00211F64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00211F64: addiu       $sp, $sp, -0xE8
    ctx->r29 = ADD32(ctx->r29, -0XE8);
    // 0x00211F68: sw          $s2, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r18;
    // 0x00211F6C: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00211F70: sw          $ra, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r31;
    // 0x00211F74: sw          $s3, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r19;
    // 0x00211F78: sw          $s1, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r17;
    // 0x00211F7C: sw          $s0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r16;
    // 0x00211F80: lbu         $v0, 0x2F($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X2F);
    // 0x00211F84: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00211F88: lwc1        $f1, 0x56F0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X56F0);
    // 0x00211F8C: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00211F90: sb          $v0, 0xBB($s3)
    MEM_B(0XBB, ctx->r19) = ctx->r2;
    // 0x00211F94: lwc1        $f0, 0x0($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X0);
    // 0x00211F98: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00211F9C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00211FA0: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x00211FA4: lwc1        $f0, 0x4($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X4);
    // 0x00211FA8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00211FAC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00211FB0: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x00211FB4: lwc1        $f0, 0x8($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X8);
    // 0x00211FB8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00211FBC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00211FC0: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x00211FC4: lbu         $v1, 0xBB($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0XBB);
    // 0x00211FC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00211FCC: beql        $v1, $v0, L_00212010
    if (ctx->r3 == ctx->r2) {
        // 0x00211FD0: sw          $zero, 0xA0($sp)
        MEM_W(0XA0, ctx->r29) = 0;
            goto L_00212010;
    }
    goto skip_0;
    // 0x00211FD0: sw          $zero, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = 0;
    skip_0:
    // 0x00211FD4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00211FD8: lwc1        $f1, 0x56F4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X56F4);
    // 0x00211FDC: lwc1        $f0, 0xC($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0XC);
    // 0x00211FE0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00211FE4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00211FE8: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x00211FEC: lwc1        $f0, 0x10($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X10);
    // 0x00211FF0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00211FF4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00211FF8: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x00211FFC: lwc1        $f0, 0x14($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X14);
    // 0x00212000: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00212004: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00212008: j           L_00212098
    // 0x0021200C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
        goto L_00212098;
    // 0x0021200C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
L_00212010:
    // 0x00212010: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00212014: lwc1        $f0, 0x56F8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X56F8);
    // 0x00212018: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021201C: lwc1        $f1, 0x56FC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X56FC);
    // 0x00212020: sw          $zero, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = 0;
    // 0x00212024: swc1        $f0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f0.u32l;
    // 0x00212028: lwc1        $f0, 0xC($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0XC);
    // 0x0021202C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00212030: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00212034: swc1        $f0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f0.u32l;
    // 0x00212038: lwc1        $f0, 0x10($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X10);
    // 0x0021203C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00212040: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00212044: swc1        $f0, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f0.u32l;
    // 0x00212048: lwc1        $f0, 0x14($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X14);
    // 0x0021204C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00212050: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00212054: addiu       $s0, $s3, 0x60
    ctx->r16 = ADD32(ctx->r19, 0X60);
    // 0x00212058: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0021205C: jal         0x0020F79C
    // 0x00212060: swc1        $f0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f0.u32l;
    func_0020F79C(rdram, ctx);
        goto after_0;
    // 0x00212060: swc1        $f0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x00212064: lw          $a1, 0xB0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB0);
    // 0x00212068: jal         0x00210B38
    // 0x0021206C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00210B38(rdram, ctx);
        goto after_1;
    // 0x0021206C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00212070: lw          $a1, 0xB4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB4);
    // 0x00212074: jal         0x00210968
    // 0x00212078: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00210968(rdram, ctx);
        goto after_2;
    // 0x00212078: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0021207C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00212080: addiu       $a1, $sp, 0xA0
    ctx->r5 = ADD32(ctx->r29, 0XA0);
    // 0x00212084: jal         0x0020F9D4
    // 0x00212088: addiu       $a2, $s3, 0x14
    ctx->r6 = ADD32(ctx->r19, 0X14);
    func_0020F9D4(rdram, ctx);
        goto after_3;
    // 0x00212088: addiu       $a2, $s3, 0x14
    ctx->r6 = ADD32(ctx->r19, 0X14);
    after_3:
    // 0x0021208C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x00212090: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x00212094: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
L_00212098:
    // 0x00212098: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x0021209C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x002120A0: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x002120A4: nop

    // 0x002120A8: bc1f        L_002120D4
    if (!c1cs) {
        // 0x002120AC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002120D4;
    }
    // 0x002120AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002120B0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002120B4: lwc1        $f1, 0x5700($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5700);
    // 0x002120B8: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x002120BC: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x002120C0: nop

    // 0x002120C4: bc1tl       L_002120EC
    if (c1cs) {
        // 0x002120C8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002120EC;
    }
    goto skip_1;
    // 0x002120C8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_1:
    // 0x002120CC: j           L_002120EC
    // 0x002120D0: nop

        goto L_002120EC;
    // 0x002120D0: nop

L_002120D4:
    // 0x002120D4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002120D8: lwc1        $f0, 0x5704($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5704);
    // 0x002120DC: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x002120E0: nop

    // 0x002120E4: bc1tl       L_002120EC
    if (c1cs) {
        // 0x002120E8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002120EC;
    }
    goto skip_2;
    // 0x002120E8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_2:
L_002120EC:
    // 0x002120EC: lwc1        $f2, 0x24($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
    // 0x002120F0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x002120F4: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x002120F8: nop

    // 0x002120FC: bc1f        L_00212128
    if (!c1cs) {
        // 0x00212100: nop
    
            goto L_00212128;
    }
    // 0x00212100: nop

    // 0x00212104: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00212108: lwc1        $f1, 0x5708($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5708);
    // 0x0021210C: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x00212110: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00212114: nop

    // 0x00212118: bc1tl       L_00212140
    if (c1cs) {
        // 0x0021211C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00212140;
    }
    goto skip_3;
    // 0x0021211C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_3:
    // 0x00212120: j           L_00212140
    // 0x00212124: nop

        goto L_00212140;
    // 0x00212124: nop

L_00212128:
    // 0x00212128: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021212C: lwc1        $f0, 0x570C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X570C);
    // 0x00212130: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x00212134: nop

    // 0x00212138: bc1tl       L_00212140
    if (c1cs) {
        // 0x0021213C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00212140;
    }
    goto skip_4;
    // 0x0021213C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_4:
L_00212140:
    // 0x00212140: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
    // 0x00212144: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00212148: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x0021214C: nop

    // 0x00212150: bc1f        L_0021217C
    if (!c1cs) {
        // 0x00212154: nop
    
            goto L_0021217C;
    }
    // 0x00212154: nop

    // 0x00212158: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021215C: lwc1        $f1, 0x5710($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5710);
    // 0x00212160: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x00212164: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00212168: nop

    // 0x0021216C: bc1tl       L_00212198
    if (c1cs) {
        // 0x00212170: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00212198;
    }
    goto skip_5;
    // 0x00212170: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_5:
    // 0x00212174: j           L_0021219C
    // 0x00212178: sb          $zero, 0xB9($s3)
    MEM_B(0XB9, ctx->r19) = 0;
        goto L_0021219C;
    // 0x00212178: sb          $zero, 0xB9($s3)
    MEM_B(0XB9, ctx->r19) = 0;
L_0021217C:
    // 0x0021217C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00212180: lwc1        $f0, 0x5714($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5714);
    // 0x00212184: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x00212188: nop

    // 0x0021218C: bc1fl       L_0021219C
    if (!c1cs) {
        // 0x00212190: sb          $zero, 0xB9($s3)
        MEM_B(0XB9, ctx->r19) = 0;
            goto L_0021219C;
    }
    goto skip_6;
    // 0x00212190: sb          $zero, 0xB9($s3)
    MEM_B(0XB9, ctx->r19) = 0;
    skip_6:
    // 0x00212194: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00212198:
    // 0x00212198: sb          $zero, 0xB9($s3)
    MEM_B(0XB9, ctx->r19) = 0;
L_0021219C:
    // 0x0021219C: beq         $v0, $zero, L_002121A8
    if (ctx->r2 == 0) {
        // 0x002121A0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002121A8;
    }
    // 0x002121A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002121A4: sb          $v0, 0xB9($s3)
    MEM_B(0XB9, ctx->r19) = ctx->r2;
L_002121A8:
    // 0x002121A8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002121AC: lwc1        $f1, 0x5718($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5718);
    // 0x002121B0: lwc1        $f0, 0x18($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X18);
    // 0x002121B4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002121B8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002121BC: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x002121C0: lwc1        $f0, 0x1C($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x002121C4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002121C8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002121CC: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x002121D0: lwc1        $f0, 0x20($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X20);
    // 0x002121D4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002121D8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002121DC: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x002121E0: lwc1        $f0, 0x24($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X24);
    // 0x002121E4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002121E8: add.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x002121EC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002121F0: lwc1        $f1, 0x571C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X571C);
    // 0x002121F4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002121F8: swc1        $f0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->f0.u32l;
    // 0x002121FC: lwc1        $f0, 0x28($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X28);
    // 0x00212200: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00212204: add.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x00212208: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021220C: swc1        $f0, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->f0.u32l;
    // 0x00212210: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00212214: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x00212218: andi        $v0, $v0, 0x4000
    ctx->r2 = ctx->r2 & 0X4000;
    // 0x0021221C: beq         $v0, $zero, L_00212234
    if (ctx->r2 == 0) {
        // 0x00212220: nop
    
            goto L_00212234;
    }
    // 0x00212220: nop

    // 0x00212224: sw          $zero, 0x8($s3)
    MEM_W(0X8, ctx->r19) = 0;
    // 0x00212228: sw          $zero, 0xC($s3)
    MEM_W(0XC, ctx->r19) = 0;
    // 0x0021222C: j           L_002122C0
    // 0x00212230: sw          $zero, 0x10($s3)
    MEM_W(0X10, ctx->r19) = 0;
        goto L_002122C0;
    // 0x00212230: sw          $zero, 0x10($s3)
    MEM_W(0X10, ctx->r19) = 0;
L_00212234:
    // 0x00212234: lw          $v0, 0x3C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X3C);
    // 0x00212238: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0021223C: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00212240: bgez        $v0, L_00212254
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00212244: nop
    
            goto L_00212254;
    }
    // 0x00212244: nop

    // 0x00212248: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021224C: ldc1        $f0, 0x5720($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X5720);
    // 0x00212250: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
L_00212254:
    // 0x00212254: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00212258: lwc1        $f2, 0x5728($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X5728);
    // 0x0021225C: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    // 0x00212260: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00212264: swc1        $f0, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->f0.u32l;
    // 0x00212268: lw          $v0, 0x40($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X40);
    // 0x0021226C: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00212270: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00212274: bgezl       $v0, L_0021228C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00212278: cvt.s.d     $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
            goto L_0021228C;
    }
    goto skip_7;
    // 0x00212278: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    skip_7:
    // 0x0021227C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00212280: ldc1        $f0, 0x5730($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X5730);
    // 0x00212284: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x00212288: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
L_0021228C:
    // 0x0021228C: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00212290: swc1        $f0, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->f0.u32l;
    // 0x00212294: lw          $v0, 0x44($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X44);
    // 0x00212298: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0021229C: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x002122A0: bgezl       $v0, L_002122B8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x002122A4: cvt.s.d     $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
            goto L_002122B8;
    }
    goto skip_8;
    // 0x002122A4: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    skip_8:
    // 0x002122A8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002122AC: ldc1        $f0, 0x5738($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X5738);
    // 0x002122B0: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x002122B4: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
L_002122B8:
    // 0x002122B8: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x002122BC: swc1        $f0, 0x10($s3)
    MEM_W(0X10, ctx->r19) = ctx->f0.u32l;
L_002122C0:
    // 0x002122C0: addiu       $s0, $s3, 0x60
    ctx->r16 = ADD32(ctx->r19, 0X60);
    // 0x002122C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002122C8: lbu         $v0, 0x37($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X37);
    // 0x002122CC: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x002122D0: sb          $v0, 0xB8($s3)
    MEM_B(0XB8, ctx->r19) = ctx->r2;
    // 0x002122D4: lbu         $v0, 0x3B($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X3B);
    // 0x002122D8: addiu       $s2, $sp, 0x40
    ctx->r18 = ADD32(ctx->r29, 0X40);
    // 0x002122DC: jal         0x0020F79C
    // 0x002122E0: sb          $v0, 0xBA($s3)
    MEM_B(0XBA, ctx->r19) = ctx->r2;
    func_0020F79C(rdram, ctx);
        goto after_4;
    // 0x002122E0: sb          $v0, 0xBA($s3)
    MEM_B(0XBA, ctx->r19) = ctx->r2;
    after_4:
    // 0x002122E4: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x002122E8: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x002122EC: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x002122F0: jal         0x00210478
    // 0x002122F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00210478(rdram, ctx);
        goto after_5;
    // 0x002122F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x002122F8: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x002122FC: jal         0x00210B38
    // 0x00212300: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00210B38(rdram, ctx);
        goto after_6;
    // 0x00212300: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x00212304: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x00212308: jal         0x00210968
    // 0x0021230C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00210968(rdram, ctx);
        goto after_7;
    // 0x0021230C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x00212310: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x00212314: jal         0x00210790
    // 0x00212318: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00210790(rdram, ctx);
        goto after_8;
    // 0x00212318: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x0021231C: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x00212320: lw          $a2, 0x14($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X14);
    // 0x00212324: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x00212328: jal         0x00210318
    // 0x0021232C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00210318(rdram, ctx);
        goto after_9;
    // 0x0021232C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x00212330: addiu       $a0, $s3, 0x20
    ctx->r4 = ADD32(ctx->r19, 0X20);
    // 0x00212334: jal         0x0020C208
    // 0x00212338: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0020C208(rdram, ctx);
        goto after_10;
    // 0x00212338: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_10:
L_0021233C:
    // 0x0021233C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00212340: lwc1        $f0, 0x5740($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5740);
    // 0x00212344: andi        $v0, $s1, 0x1
    ctx->r2 = ctx->r17 & 0X1;
    // 0x00212348: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    // 0x0021234C: beq         $v0, $zero, L_0021235C
    if (ctx->r2 == 0) {
        // 0x00212350: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_0021235C;
    }
    // 0x00212350: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x00212354: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00212358: lwc1        $f1, 0x5744($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5744);
L_0021235C:
    // 0x0021235C: andi        $v0, $s1, 0x2
    ctx->r2 = ctx->r17 & 0X2;
    // 0x00212360: beq         $v0, $zero, L_00212370
    if (ctx->r2 == 0) {
        // 0x00212364: andi        $v0, $s1, 0x4
        ctx->r2 = ctx->r17 & 0X4;
            goto L_00212370;
    }
    // 0x00212364: andi        $v0, $s1, 0x4
    ctx->r2 = ctx->r17 & 0X4;
    // 0x00212368: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021236C: lwc1        $f0, 0x5748($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5748);
L_00212370:
    // 0x00212370: beq         $v0, $zero, L_00212380
    if (ctx->r2 == 0) {
        // 0x00212374: addiu       $a0, $s3, 0x60
        ctx->r4 = ADD32(ctx->r19, 0X60);
            goto L_00212380;
    }
    // 0x00212374: addiu       $a0, $s3, 0x60
    ctx->r4 = ADD32(ctx->r19, 0X60);
    // 0x00212378: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021237C: lwc1        $f2, 0x574C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X574C);
L_00212380:
    // 0x00212380: addiu       $a1, $sp, 0xC0
    ctx->r5 = ADD32(ctx->r29, 0XC0);
    // 0x00212384: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x00212388: swc1        $f1, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0021238C: swc1        $f0, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f0.u32l;
    // 0x00212390: jal         0x0020F9D4
    // 0x00212394: swc1        $f2, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f2.u32l;
    func_0020F9D4(rdram, ctx);
        goto after_11;
    // 0x00212394: swc1        $f2, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f2.u32l;
    after_11:
    // 0x00212398: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0021239C: slti        $v0, $s1, 0x8
    ctx->r2 = SIGNED(ctx->r17) < 0X8 ? 1 : 0;
    // 0x002123A0: bne         $v0, $zero, L_0021233C
    if (ctx->r2 != 0) {
        // 0x002123A4: addiu       $s2, $s2, 0xC
        ctx->r18 = ADD32(ctx->r18, 0XC);
            goto L_0021233C;
    }
    // 0x002123A4: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
    // 0x002123A8: addiu       $a0, $s3, 0xA0
    ctx->r4 = ADD32(ctx->r19, 0XA0);
    // 0x002123AC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x002123B0: jal         0x0026B9E0
    // 0x002123B4: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    func_0026B9E0(rdram, ctx);
        goto after_12;
    // 0x002123B4: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_12:
    // 0x002123B8: lw          $ra, 0xE0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XE0);
    // 0x002123BC: lw          $s3, 0xDC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XDC);
    // 0x002123C0: lw          $s2, 0xD8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XD8);
    // 0x002123C4: lw          $s1, 0xD4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XD4);
    // 0x002123C8: lw          $s0, 0xD0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XD0);
    // 0x002123CC: jr          $ra
    // 0x002123D0: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    return;
    // 0x002123D0: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
;}
RECOMP_FUNC void func_004650B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004650B4: addiu       $sp, $sp, -0x370
    ctx->r29 = ADD32(ctx->r29, -0X370);
    // 0x004650B8: sw          $s1, 0x34C($sp)
    MEM_W(0X34C, ctx->r29) = ctx->r17;
    // 0x004650BC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x004650C0: sw          $s6, 0x360($sp)
    MEM_W(0X360, ctx->r29) = ctx->r22;
    // 0x004650C4: addu        $s6, $a1, $zero
    ctx->r22 = ADD32(ctx->r5, 0);
    // 0x004650C8: sw          $s2, 0x350($sp)
    MEM_W(0X350, ctx->r29) = ctx->r18;
    // 0x004650CC: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x004650D0: sw          $s4, 0x358($sp)
    MEM_W(0X358, ctx->r29) = ctx->r20;
    // 0x004650D4: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x004650D8: sw          $s0, 0x348($sp)
    MEM_W(0X348, ctx->r29) = ctx->r16;
    // 0x004650DC: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x004650E0: lw          $s0, 0x7074($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X7074);
    // 0x004650E4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x004650E8: sw          $s3, 0x354($sp)
    MEM_W(0X354, ctx->r29) = ctx->r19;
    // 0x004650EC: lw          $s3, 0x380($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X380);
    // 0x004650F0: addiu       $a1, $sp, 0x338
    ctx->r5 = ADD32(ctx->r29, 0X338);
    // 0x004650F4: sw          $a3, 0x37C($sp)
    MEM_W(0X37C, ctx->r29) = ctx->r7;
    // 0x004650F8: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x004650FC: addiu       $a3, $a3, 0x5D8C
    ctx->r7 = ADD32(ctx->r7, 0X5D8C);
    // 0x00465100: sw          $ra, 0x36C($sp)
    MEM_W(0X36C, ctx->r29) = ctx->r31;
    // 0x00465104: sw          $fp, 0x368($sp)
    MEM_W(0X368, ctx->r29) = ctx->r30;
    // 0x00465108: sw          $s7, 0x364($sp)
    MEM_W(0X364, ctx->r29) = ctx->r23;
    // 0x0046510C: sw          $s5, 0x35C($sp)
    MEM_W(0X35C, ctx->r29) = ctx->r21;
    // 0x00465110: jal         0x00205B94
    // 0x00465114: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00205B94(rdram, ctx);
        goto after_0;
    // 0x00465114: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00465118: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x0046511C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x00465120: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x00465124: lw          $a1, 0x338($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X338);
    // 0x00465128: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0046512C: addiu       $v0, $v0, 0x5FC4
    ctx->r2 = ADD32(ctx->r2, 0X5FC4);
    // 0x00465130: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x00465134: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00465138: jal         0x00205D0C
    // 0x0046513C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_00205D0C(rdram, ctx);
        goto after_1;
    // 0x0046513C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x00465140: addu        $fp, $v0, $zero
    ctx->r30 = ADD32(ctx->r2, 0);
    // 0x00465144: lw          $s0, 0x0($fp)
    ctx->r16 = MEM_W(ctx->r30, 0X0);
    // 0x00465148: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x0046514C: jal         0x002017D4
    // 0x00465150: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x00465150: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00465154: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00465158: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0046515C: lw          $s1, 0x4($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X4);
    // 0x00465160: jal         0x002017D4
    // 0x00465164: addiu       $s0, $v0, 0x8
    ctx->r16 = ADD32(ctx->r2, 0X8);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x00465164: addiu       $s0, $v0, 0x8
    ctx->r16 = ADD32(ctx->r2, 0X8);
    after_3:
    // 0x00465168: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0046516C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x00465170: addiu       $a3, $sp, 0x33C
    ctx->r7 = ADD32(ctx->r29, 0X33C);
    // 0x00465174: addiu       $v1, $sp, 0x340
    ctx->r3 = ADD32(ctx->r29, 0X340);
    // 0x00465178: addiu       $s5, $v0, 0x8
    ctx->r21 = ADD32(ctx->r2, 0X8);
    // 0x0046517C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x00465180: jal         0x00266D8C
    // 0x00465184: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00266D8C(rdram, ctx);
        goto after_4;
    // 0x00465184: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_4:
    // 0x00465188: beq         $v0, $zero, L_0046529C
    if (ctx->r2 == 0) {
        // 0x0046518C: addiu       $a0, $sp, 0x20
        ctx->r4 = ADD32(ctx->r29, 0X20);
            goto L_0046529C;
    }
    // 0x0046518C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x00465190: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x00465194: jal         0x00200500
    // 0x00465198: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_00200500(rdram, ctx);
        goto after_5;
    // 0x00465198: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x0046519C: lw          $s1, 0x33C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X33C);
    // 0x004651A0: lw          $v0, 0x340($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X340);
    // 0x004651A4: slt         $v0, $v0, $s1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x004651A8: bne         $v0, $zero, L_00465204
    if (ctx->r2 != 0) {
        // 0x004651AC: addiu       $s0, $sp, 0x38
        ctx->r16 = ADD32(ctx->r29, 0X38);
            goto L_00465204;
    }
    // 0x004651AC: addiu       $s0, $sp, 0x38
    ctx->r16 = ADD32(ctx->r29, 0X38);
    // 0x004651B0: addiu       $s7, $zero, -0x1
    ctx->r23 = ADD32(0, -0X1);
    // 0x004651B4: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x004651B8: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x004651BC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x004651C0: addu        $s2, $v0, $s5
    ctx->r18 = ADD32(ctx->r2, ctx->r21);
L_004651C4:
    // 0x004651C4: beq         $s6, $s7, L_004651D8
    if (ctx->r22 == ctx->r23) {
        // 0x004651C8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_004651D8;
    }
    // 0x004651C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004651CC: lh          $v0, 0x10($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X10);
    // 0x004651D0: xor         $v0, $v0, $s6
    ctx->r2 = ctx->r2 ^ ctx->r22;
    // 0x004651D4: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
L_004651D8:
    // 0x004651D8: beq         $v0, $zero, L_004651F0
    if (ctx->r2 == 0) {
        // 0x004651DC: addiu       $a0, $sp, 0x20
        ctx->r4 = ADD32(ctx->r29, 0X20);
            goto L_004651F0;
    }
    // 0x004651DC: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x004651E0: sw          $s1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r17;
    // 0x004651E4: jal         0x00200518
    // 0x004651E8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200518(rdram, ctx);
        goto after_6;
    // 0x004651E8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_6:
    // 0x004651EC: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
L_004651F0:
    // 0x004651F0: lw          $v0, 0x340($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X340);
    // 0x004651F4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x004651F8: slt         $v0, $v0, $s1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x004651FC: beq         $v0, $zero, L_004651C4
    if (ctx->r2 == 0) {
        // 0x00465200: addiu       $s2, $s2, 0x14
        ctx->r18 = ADD32(ctx->r18, 0X14);
            goto L_004651C4;
    }
    // 0x00465200: addiu       $s2, $s2, 0x14
    ctx->r18 = ADD32(ctx->r18, 0X14);
L_00465204:
    // 0x00465204: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x00465208: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0046520C: beq         $s3, $v0, L_0046529C
    if (ctx->r19 == ctx->r2) {
        // 0x00465210: addu        $s2, $v0, $zero
        ctx->r18 = ADD32(ctx->r2, 0);
            goto L_0046529C;
    }
    // 0x00465210: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x00465214: sll         $v0, $s4, 2
    ctx->r2 = S32(ctx->r20 << 2);
    // 0x00465218: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x0046521C: lw          $t0, 0x37C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X37C);
    // 0x00465220: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00465224: addu        $s1, $v0, $t0
    ctx->r17 = ADD32(ctx->r2, ctx->r8);
L_00465228:
    // 0x00465228: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x0046522C: beq         $v0, $zero, L_004652A0
    if (ctx->r2 == 0) {
        // 0x00465230: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_004652A0;
    }
    // 0x00465230: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00465234: jal         0x002009F0
    // 0x00465238: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    func_002009F0(rdram, ctx);
        goto after_7;
    // 0x00465238: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_7:
    // 0x0046523C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00465240: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x00465244: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x00465248: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x0046524C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00465250: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00465254: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00465258: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0046525C: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x00465260: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x00465264: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x00465268: lw          $t3, 0x8($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X8);
    // 0x0046526C: lw          $t0, 0xC($v0)
    ctx->r8 = MEM_W(ctx->r2, 0XC);
    // 0x00465270: sw          $t1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r9;
    // 0x00465274: sw          $t2, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r10;
    // 0x00465278: sw          $t3, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r11;
    // 0x0046527C: sw          $t0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r8;
    // 0x00465280: lw          $t1, 0x10($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X10);
    // 0x00465284: sw          $t1, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r9;
    // 0x00465288: jal         0x00200738
    // 0x0046528C: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    func_00200738(rdram, ctx);
        goto after_8;
    // 0x0046528C: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    after_8:
    // 0x00465290: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x00465294: bne         $s3, $s2, L_00465228
    if (ctx->r19 != ctx->r18) {
        // 0x00465298: nop
    
            goto L_00465228;
    }
    // 0x00465298: nop

L_0046529C:
    // 0x0046529C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_004652A0:
    // 0x004652A0: jal         0x002052D8
    // 0x004652A4: addu        $a1, $fp, $zero
    ctx->r5 = ADD32(ctx->r30, 0);
    func_002052D8(rdram, ctx);
        goto after_9;
    // 0x004652A4: addu        $a1, $fp, $zero
    ctx->r5 = ADD32(ctx->r30, 0);
    after_9:
    // 0x004652A8: addu        $v0, $s4, $zero
    ctx->r2 = ADD32(ctx->r20, 0);
    // 0x004652AC: lw          $ra, 0x36C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X36C);
    // 0x004652B0: lw          $fp, 0x368($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X368);
    // 0x004652B4: lw          $s7, 0x364($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X364);
    // 0x004652B8: lw          $s6, 0x360($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X360);
    // 0x004652BC: lw          $s5, 0x35C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X35C);
    // 0x004652C0: lw          $s4, 0x358($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X358);
    // 0x004652C4: lw          $s3, 0x354($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X354);
    // 0x004652C8: lw          $s2, 0x350($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X350);
    // 0x004652CC: lw          $s1, 0x34C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34C);
    // 0x004652D0: lw          $s0, 0x348($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X348);
    // 0x004652D4: jr          $ra
    // 0x004652D8: addiu       $sp, $sp, 0x370
    ctx->r29 = ADD32(ctx->r29, 0X370);
    return;
    // 0x004652D8: addiu       $sp, $sp, 0x370
    ctx->r29 = ADD32(ctx->r29, 0X370);
;}
RECOMP_FUNC void func_0025C1B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025C1B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0025C1B4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0025C1B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0025C1BC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0025C1C0: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x0025C1C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0025C1C8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0025C1CC: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x0025C1D0: lb          $s1, 0x133($s0)
    ctx->r17 = MEM_B(ctx->r16, 0X133);
    // 0x0025C1D4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025C1D8: bne         $v0, $zero, L_0025C1F0
    if (ctx->r2 != 0) {
        // 0x0025C1DC: addu        $s2, $a0, $zero
        ctx->r18 = ADD32(ctx->r4, 0);
            goto L_0025C1F0;
    }
    // 0x0025C1DC: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0025C1E0: lw          $v0, 0xD4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XD4);
    // 0x0025C1E4: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x0025C1E8: bne         $v0, $zero, L_0025C320
    if (ctx->r2 != 0) {
        // 0x0025C1EC: nop
    
            goto L_0025C320;
    }
    // 0x0025C1EC: nop

L_0025C1F0:
    // 0x0025C1F0: lwc1        $f2, 0x60($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X60);
    // 0x0025C1F4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0025C1F8: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x0025C1FC: nop

    // 0x0025C200: bc1f        L_0025C22C
    if (!c1cs) {
        // 0x0025C204: nop
    
            goto L_0025C22C;
    }
    // 0x0025C204: nop

    // 0x0025C208: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025C20C: lwc1        $f1, 0x75BC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X75BC);
    // 0x0025C210: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x0025C214: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0025C218: nop

    // 0x0025C21C: bc1f        L_0025C26C
    if (!c1cs) {
        // 0x0025C220: nop
    
            goto L_0025C26C;
    }
    // 0x0025C220: nop

    // 0x0025C224: j           L_0025C244
    // 0x0025C228: nop

        goto L_0025C244;
    // 0x0025C228: nop

L_0025C22C:
    // 0x0025C22C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025C230: lwc1        $f0, 0x75C0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X75C0);
    // 0x0025C234: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x0025C238: nop

    // 0x0025C23C: bc1f        L_0025C26C
    if (!c1cs) {
        // 0x0025C240: nop
    
            goto L_0025C26C;
    }
    // 0x0025C240: nop

L_0025C244:
    // 0x0025C244: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025C248: lwc1        $f0, 0x75C4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X75C4);
    // 0x0025C24C: lb          $v0, 0x131($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X131);
    // 0x0025C250: beq         $v0, $zero, L_0025C320
    if (ctx->r2 == 0) {
        // 0x0025C254: swc1        $f0, 0x12C($s0)
        MEM_W(0X12C, ctx->r16) = ctx->f0.u32l;
            goto L_0025C320;
    }
    // 0x0025C254: swc1        $f0, 0x12C($s0)
    MEM_W(0X12C, ctx->r16) = ctx->f0.u32l;
    // 0x0025C258: bne         $s1, $zero, L_0025C320
    if (ctx->r17 != 0) {
        // 0x0025C25C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0025C320;
    }
    // 0x0025C25C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0025C260: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0025C264: j           L_0025C318
    // 0x0025C268: addiu       $a2, $zero, 0x26
    ctx->r6 = ADD32(0, 0X26);
        goto L_0025C318;
    // 0x0025C268: addiu       $a2, $zero, 0x26
    ctx->r6 = ADD32(0, 0X26);
L_0025C26C:
    // 0x0025C26C: lwc1        $f0, 0x12C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X12C);
    // 0x0025C270: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0025C274: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x0025C278: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0025C27C: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0025C280: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0025C284: nop

    // 0x0025C288: bc1f        L_0025C294
    if (!c1cs) {
        // 0x0025C28C: swc1        $f0, 0x12C($s0)
        MEM_W(0X12C, ctx->r16) = ctx->f0.u32l;
            goto L_0025C294;
    }
    // 0x0025C28C: swc1        $f0, 0x12C($s0)
    MEM_W(0X12C, ctx->r16) = ctx->f0.u32l;
    // 0x0025C290: swc1        $f1, 0x12C($s0)
    MEM_W(0X12C, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
L_0025C294:
    // 0x0025C294: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0025C298: beq         $v0, $zero, L_0025C320
    if (ctx->r2 == 0) {
        // 0x0025C29C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_0025C320;
    }
    // 0x0025C29C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0025C2A0: lb          $v1, 0x34($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X34);
    // 0x0025C2A4: bne         $v1, $v0, L_0025C320
    if (ctx->r3 != ctx->r2) {
        // 0x0025C2A8: nop
    
            goto L_0025C320;
    }
    // 0x0025C2A8: nop

    // 0x0025C2AC: lwc1        $f0, 0x12C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X12C);
    // 0x0025C2B0: c.eq.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl == ctx->f1.fl;
    // 0x0025C2B4: nop

    // 0x0025C2B8: bc1f        L_0025C320
    if (!c1cs) {
        // 0x0025C2BC: nop
    
            goto L_0025C320;
    }
    // 0x0025C2BC: nop

    // 0x0025C2C0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025C2C4: lwc1        $f12, 0x75C8($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X75C8);
    // 0x0025C2C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025C2CC: lwc1        $f14, 0x75CC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X75CC);
    // 0x0025C2D0: jal         0x002119FC
    // 0x0025C2D4: nop

    func_002119FC(rdram, ctx);
        goto after_0;
    // 0x0025C2D4: nop

    after_0:
    // 0x0025C2D8: bne         $s1, $zero, L_0025C2F8
    if (ctx->r17 != 0) {
        // 0x0025C2DC: swc1        $f0, 0x12C($s0)
        MEM_W(0X12C, ctx->r16) = ctx->f0.u32l;
            goto L_0025C2F8;
    }
    // 0x0025C2DC: swc1        $f0, 0x12C($s0)
    MEM_W(0X12C, ctx->r16) = ctx->f0.u32l;
    // 0x0025C2E0: lb          $v0, 0x131($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X131);
    // 0x0025C2E4: beq         $v0, $zero, L_0025C320
    if (ctx->r2 == 0) {
        // 0x0025C2E8: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0025C320;
    }
    // 0x0025C2E8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0025C2EC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0025C2F0: j           L_0025C318
    // 0x0025C2F4: addiu       $a2, $zero, 0x26
    ctx->r6 = ADD32(0, 0X26);
        goto L_0025C318;
    // 0x0025C2F4: addiu       $a2, $zero, 0x26
    ctx->r6 = ADD32(0, 0X26);
L_0025C2F8:
    // 0x0025C2F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0025C2FC: bne         $s1, $v0, L_0025C320
    if (ctx->r17 != ctx->r2) {
        // 0x0025C300: nop
    
            goto L_0025C320;
    }
    // 0x0025C300: nop

    // 0x0025C304: lb          $v0, 0x130($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X130);
    // 0x0025C308: beq         $v0, $zero, L_0025C320
    if (ctx->r2 == 0) {
        // 0x0025C30C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0025C320;
    }
    // 0x0025C30C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0025C310: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0025C314: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
L_0025C318:
    // 0x0025C318: jal         0x00243414
    // 0x0025C31C: nop

    func_00243414(rdram, ctx);
        goto after_1;
    // 0x0025C31C: nop

    after_1:
L_0025C320:
    // 0x0025C320: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0025C324: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0025C328: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0025C32C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0025C330: jr          $ra
    // 0x0025C334: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0025C334: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002842E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002842E8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x002842EC: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x002842F0: jr          $ra
    // 0x002842F4: sw          $zero, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = 0;
    return;
    // 0x002842F4: sw          $zero, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = 0;
;}
RECOMP_FUNC void func_004181F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004181F4: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x004181F8: addiu       $v1, $v1, -0x5350
    ctx->r3 = ADD32(ctx->r3, -0X5350);
    // 0x004181FC: lw          $v0, 0x28($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X28);
    // 0x00418200: bne         $v0, $zero, L_00418220
    if (ctx->r2 != 0) {
        // 0x00418204: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00418220;
    }
    // 0x00418204: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00418208: lw          $v0, 0x1C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1C);
    // 0x0041820C: bnel        $v0, $zero, L_00418224
    if (ctx->r2 != 0) {
        // 0x00418210: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_00418224;
    }
    goto skip_0;
    // 0x00418210: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_0:
    // 0x00418214: lw          $v0, 0x20($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X20);
    // 0x00418218: beq         $v0, $zero, L_00418224
    if (ctx->r2 == 0) {
        // 0x0041821C: nop
    
            goto L_00418224;
    }
    // 0x0041821C: nop

L_00418220:
    // 0x00418220: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_00418224:
    // 0x00418224: jr          $ra
    // 0x00418228: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    return;
    // 0x00418228: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
;}
RECOMP_FUNC void func_002539DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_002539D4:
    // 0x002539DC: addu        $a2, $a3, $zero
    ctx->r6 = ADD32(ctx->r7, 0);
L_002539E0:
    // 0x002539E0: lw          $v1, 0x20($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X20);
    // 0x002539E4: beq         $v1, $zero, L_00253A14
    if (ctx->r3 == 0) {
        // 0x002539E8: nop
    
            goto L_00253A14;
    }
    // 0x002539E8: nop

    // 0x002539EC: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
    // 0x002539F0: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x002539F4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x002539F8: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x002539FC: lh          $v0, 0x934($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X934);
    // 0x00253A00: bgtz        $v0, L_002539D4
    if (SIGNED(ctx->r2) > 0) {
            // 0x00253A04: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    func_002539D4(rdram, ctx);
    return;
    }
    // 0x00253A04: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x00253A08: slti        $v0, $a2, 0x3
    ctx->r2 = SIGNED(ctx->r6) < 0X3 ? 1 : 0;
    // 0x00253A0C: bne         $v0, $zero, L_002539E0
    if (ctx->r2 != 0) {
        // 0x00253A10: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_002539E0;
    }
    // 0x00253A10: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_00253A14:
    // 0x00253A14: jr          $ra
    // 0x00253A18: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
    return;
    // 0x00253A18: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
;}
RECOMP_FUNC void func_004408B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004408B0: jr          $ra
    // 0x004408B4: nop

    return;
    // 0x004408B4: nop

;}
RECOMP_FUNC void func_0025E248(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025E248: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0025E24C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x0025E250: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0025E254: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0025E258: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0025E25C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0025E260: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0025E264: lw          $v0, 0x14($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14);
    // 0x0025E268: lb          $v1, 0x133($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X133);
    // 0x0025E26C: addiu       $s0, $v0, 0x14
    ctx->r16 = ADD32(ctx->r2, 0X14);
    // 0x0025E270: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0025E274: bne         $v1, $v0, L_0025E314
    if (ctx->r3 != ctx->r2) {
        // 0x0025E278: nop
    
            goto L_0025E314;
    }
    // 0x0025E278: nop

    // 0x0025E27C: lhu         $v0, 0xC4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XC4);
    // 0x0025E280: addiu       $v0, $v0, -0x1B6C
    ctx->r2 = ADD32(ctx->r2, -0X1B6C);
    // 0x0025E284: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0025E288: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0025E28C: sltiu       $v0, $v1, 0x16
    ctx->r2 = ctx->r3 < 0X16 ? 1 : 0;
    // 0x0025E290: beq         $v0, $zero, L_0025E314
    if (ctx->r2 == 0) {
        // 0x0025E294: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_0025E314;
    }
    // 0x0025E294: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0025E298: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025E29C: addu        $at, $at, $v0
    gpr jr_addend_0025E2A4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0025E2A0: lw          $v0, 0x76C0($at)
    ctx->r2 = ADD32(ctx->r1, 0X76C0);
    // 0x0025E2A4: jr          $v0
    // 0x0025E2A8: nop

    switch (jr_addend_0025E2A4 >> 2) {
        case 0: goto L_0025E2AC; break;
        case 1: goto L_0025E2C8; break;
        case 2: goto L_0025E314; break;
        case 3: goto L_0025E314; break;
        case 4: goto L_0025E314; break;
        case 5: goto L_0025E2AC; break;
        case 6: goto L_0025E2C8; break;
        case 7: goto L_0025E314; break;
        case 8: goto L_0025E314; break;
        case 9: goto L_0025E314; break;
        case 10: goto L_0025E2AC; break;
        case 11: goto L_0025E2C8; break;
        case 12: goto L_0025E314; break;
        case 13: goto L_0025E314; break;
        case 14: goto L_0025E314; break;
        case 15: goto L_0025E2AC; break;
        case 16: goto L_0025E2C8; break;
        case 17: goto L_0025E314; break;
        case 18: goto L_0025E314; break;
        case 19: goto L_0025E314; break;
        case 20: goto L_0025E2AC; break;
        case 21: goto L_0025E2C8; break;
        default: switch_error(__func__, 0x0025E2A4, 0x800A76C0);
    }
    // 0x0025E2A8: nop

L_0025E2AC:
    // 0x0025E2AC: lb          $v0, 0xC7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC7);
    // 0x0025E2B0: beq         $v0, $zero, L_0025E410
    if (ctx->r2 == 0) {
        // 0x0025E2B4: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0025E410;
    }
    // 0x0025E2B4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0025E2B8: jal         0x0025AA78
    // 0x0025E2BC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0025AA78(rdram, ctx);
        goto after_0;
    // 0x0025E2BC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
    // 0x0025E2C0: j           L_0025E2E4
    // 0x0025E2C4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
        goto L_0025E2E4;
    // 0x0025E2C4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
L_0025E2C8:
    // 0x0025E2C8: jal         0x002685F0
    // 0x0025E2CC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_002685F0(rdram, ctx);
        goto after_1;
    // 0x0025E2CC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x0025E2D0: beq         $v0, $zero, L_0025E410
    if (ctx->r2 == 0) {
        // 0x0025E2D4: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0025E410;
    }
    // 0x0025E2D4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0025E2D8: jal         0x0025AAA4
    // 0x0025E2DC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0025AAA4(rdram, ctx);
        goto after_2;
    // 0x0025E2DC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x0025E2E0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
L_0025E2E4:
    // 0x0025E2E4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0025E2E8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0025E2EC: jal         0x00219F74
    // 0x0025E2F0: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_00219F74(rdram, ctx);
        goto after_3;
    // 0x0025E2F0: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_3:
    // 0x0025E2F4: sb          $v0, 0xC6($s1)
    MEM_B(0XC6, ctx->r17) = ctx->r2;
    // 0x0025E2F8: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x0025E2FC: addiu       $v1, $zero, -0x2
    ctx->r3 = ADD32(0, -0X2);
    // 0x0025E300: sh          $s0, 0xC4($s1)
    MEM_H(0XC4, ctx->r17) = ctx->r16;
    // 0x0025E304: sb          $zero, 0xC7($s1)
    MEM_B(0XC7, ctx->r17) = 0;
    // 0x0025E308: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025E30C: j           L_0025E410
    // 0x0025E310: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
        goto L_0025E410;
    // 0x0025E310: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
L_0025E314:
    // 0x0025E314: lb          $v0, 0xC7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC7);
    // 0x0025E318: beq         $v0, $zero, L_0025E40C
    if (ctx->r2 == 0) {
        // 0x0025E31C: addiu       $v0, $zero, 0x35
        ctx->r2 = ADD32(0, 0X35);
            goto L_0025E40C;
    }
    // 0x0025E31C: addiu       $v0, $zero, 0x35
    ctx->r2 = ADD32(0, 0X35);
    // 0x0025E320: lb          $v1, 0x34($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X34);
    // 0x0025E324: bne         $v1, $v0, L_0025E33C
    if (ctx->r3 != ctx->r2) {
        // 0x0025E328: lui         $v1, 0xFEFF
        ctx->r3 = S32(0XFEFF << 16);
            goto L_0025E33C;
    }
    // 0x0025E328: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x0025E32C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0025E330: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0025E334: j           L_0025E3AC
    // 0x0025E338: addiu       $a2, $zero, 0x36
    ctx->r6 = ADD32(0, 0X36);
        goto L_0025E3AC;
    // 0x0025E338: addiu       $a2, $zero, 0x36
    ctx->r6 = ADD32(0, 0X36);
L_0025E33C:
    // 0x0025E33C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x0025E340: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0025E344: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x0025E348: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x0025E34C: lw          $v0, 0xD4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XD4);
    // 0x0025E350: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0025E354: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025E358: sw          $v0, 0xD4($s2)
    MEM_W(0XD4, ctx->r18) = ctx->r2;
    // 0x0025E35C: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x0025E360: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0025E364: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0025E368: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x0025E36C: jal         0x0024646C
    // 0x0025E370: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_0024646C(rdram, ctx);
        goto after_4;
    // 0x0025E370: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_4:
    // 0x0025E374: lui         $v1, 0xFFFD
    ctx->r3 = S32(0XFFFD << 16);
    // 0x0025E378: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0025E37C: lw          $v0, 0xD4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XD4);
    // 0x0025E380: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025E384: lwc1        $f0, 0x7718($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7718);
    // 0x0025E388: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025E38C: sw          $v0, 0xD4($s2)
    MEM_W(0XD4, ctx->r18) = ctx->r2;
    // 0x0025E390: lwc1        $f1, 0x40($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X40);
    // 0x0025E394: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0025E398: nop

    // 0x0025E39C: bc1f        L_0025E3B4
    if (!c1cs) {
        // 0x0025E3A0: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0025E3B4;
    }
    // 0x0025E3A0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0025E3A4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0025E3A8: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
L_0025E3AC:
    // 0x0025E3AC: jal         0x00243414
    // 0x0025E3B0: nop

    func_00243414(rdram, ctx);
        goto after_5;
    // 0x0025E3B0: nop

    after_5:
L_0025E3B4:
    // 0x0025E3B4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0025E3B8: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x0025E3BC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025E3C0: beq         $v0, $zero, L_0025E410
    if (ctx->r2 == 0) {
        // 0x0025E3C4: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0025E410;
    }
    // 0x0025E3C4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0025E3C8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0025E3CC: lw          $v0, 0xD4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XD4);
    // 0x0025E3D0: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x0025E3D4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025E3D8: addiu       $v1, $zero, -0x2001
    ctx->r3 = ADD32(0, -0X2001);
    // 0x0025E3DC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025E3E0: jal         0x00246918
    // 0x0025E3E4: sw          $v0, 0xD4($s2)
    MEM_W(0XD4, ctx->r18) = ctx->r2;
    func_00246918(rdram, ctx);
        goto after_6;
    // 0x0025E3E4: sw          $v0, 0xD4($s2)
    MEM_W(0XD4, ctx->r18) = ctx->r2;
    after_6:
    // 0x0025E3E8: lw          $v0, 0xD4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XD4);
    // 0x0025E3EC: lui         $v1, 0x8
    ctx->r3 = S32(0X8 << 16);
    // 0x0025E3F0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025E3F4: beq         $v0, $zero, L_0025E410
    if (ctx->r2 == 0) {
        // 0x0025E3F8: nop
    
            goto L_0025E410;
    }
    // 0x0025E3F8: nop

    // 0x0025E3FC: jal         0x002280B0
    // 0x0025E400: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_002280B0(rdram, ctx);
        goto after_7;
    // 0x0025E400: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_7:
    // 0x0025E404: j           L_0025E410
    // 0x0025E408: nop

        goto L_0025E410;
    // 0x0025E408: nop

L_0025E40C:
    // 0x0025E40C: sw          $zero, 0x40($s1)
    MEM_W(0X40, ctx->r17) = 0;
L_0025E410:
    // 0x0025E410: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0025E414: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0025E418: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0025E41C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0025E420: jr          $ra
    // 0x0025E424: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0025E424: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0027AE44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027AE44: beq         $a0, $zero, L_0027AEA0
    if (ctx->r4 == 0) {
        // 0x0027AE48: sw          $zero, 0x0($a2)
        MEM_W(0X0, ctx->r6) = 0;
            goto L_0027AEA0;
    }
    // 0x0027AE48: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x0027AE4C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x0027AE50: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x0027AE54: div         $zero, $a1, $v0
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r2)));
    // 0x0027AE58: bne         $v0, $zero, L_0027AE64
    if (ctx->r2 != 0) {
        // 0x0027AE5C: nop
    
            goto L_0027AE64;
    }
    // 0x0027AE5C: nop

    // 0x0027AE60: break       7
    do_break(2600544);
L_0027AE64:
    // 0x0027AE64: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x0027AE68: bne         $v0, $at, L_0027AE7C
    if (ctx->r2 != ctx->r1) {
        // 0x0027AE6C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_0027AE7C;
    }
    // 0x0027AE6C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x0027AE70: bne         $a1, $at, L_0027AE7C
    if (ctx->r5 != ctx->r1) {
        // 0x0027AE74: nop
    
            goto L_0027AE7C;
    }
    // 0x0027AE74: nop

    // 0x0027AE78: break       6
    do_break(2600568);
L_0027AE7C:
    // 0x0027AE7C: mfhi        $v1
    ctx->r3 = hi;
    // 0x0027AE80: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x0027AE84: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x0027AE88: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0027AE8C: lbu         $v0, 0x4($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X4);
    // 0x0027AE90: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x0027AE94: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x0027AE98: sb          $v0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r2;
    // 0x0027AE9C: sw          $a0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r4;
L_0027AEA0:
    // 0x0027AEA0: jr          $ra
    // 0x0027AEA4: nop

    return;
    // 0x0027AEA4: nop

;}
RECOMP_FUNC void func_00453A08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041AAC8:
    // 0x00453A08: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00453A0C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00453A10: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x00453A14: addiu       $s0, $s0, 0x1F84
    ctx->r16 = ADD32(ctx->r16, 0X1F84);
    // 0x00453A18: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00453A1C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00453A20: lwc1        $f1, 0x0($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X0);
    // 0x00453A24: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00453A28: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00453A2C: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00453A30: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00453A34: lwc1        $f1, 0x1278($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X1278);
    // 0x00453A38: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00453A3C: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00453A40: nop

    // 0x00453A44: bc1f        L_00453A54
    if (!c1cs) {
        // 0x00453A48: swc1        $f0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
            goto L_00453A54;
    }
    // 0x00453A48: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    // 0x00453A4C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00453A50: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
L_00453A54:
    // 0x00453A54: lh          $v1, 0x0($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X0);
    // 0x00453A58: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00453A5C: bne         $v1, $v0, L_00453AC8
    if (ctx->r3 != ctx->r2) {
        // 0x00453A60: nop
    
            goto L_00453AC8;
    }
    // 0x00453A60: nop

    // 0x00453A64: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x00453A68: jal         0x00285628
    // 0x00453A6C: nop

    func_00285628(rdram, ctx);
        goto after_0;
    // 0x00453A6C: nop

    after_0:
    // 0x00453A70: beq         $v0, $zero, L_00453A90
    if (ctx->r2 == 0) {
        // 0x00453A74: nop
    
            goto L_00453A90;
    }
    // 0x00453A74: nop

    // 0x00453A78: lw          $v0, -0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, -0X4);
    // 0x00453A7C: blez        $v0, L_00453A90
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00453A80: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_00453A90;
    }
    // 0x00453A80: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00453A84: sw          $v0, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->r2;
    // 0x00453A88: j           L_0041AAC8
    // 0x00453A8C: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    entry_0041AAC8(rdram, ctx);
    return;
    // 0x00453A8C: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
L_00453A90:
    // 0x00453A90: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x00453A94: jal         0x00285670
    // 0x00453A98: nop

    func_00285670(rdram, ctx);
        goto after_1;
    // 0x00453A98: nop

    after_1:
    // 0x00453A9C: beq         $v0, $zero, L_00453AC8
    if (ctx->r2 == 0) {
        // 0x00453AA0: nop
    
            goto L_00453AC8;
    }
    // 0x00453AA0: nop

    // 0x00453AA4: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00453AA8: addiu       $v1, $v1, 0x1F80
    ctx->r3 = ADD32(ctx->r3, 0X1F80);
    // 0x00453AAC: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x00453AB0: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
    // 0x00453AB4: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00453AB8: beq         $v0, $zero, L_00453AC8
    if (ctx->r2 == 0) {
        // 0x00453ABC: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_00453AC8;
    }
    // 0x00453ABC: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x00453AC0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00453AC4: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
L_00453AC8:
    // 0x00453AC8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00453ACC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00453AD0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00453AD4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00453AD8: jr          $ra
    // 0x00453ADC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00453ADC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_004478BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004478BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004478C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004478C4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x004478C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x004478CC: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x004478D0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x004478D4: jal         0x00243414
    // 0x004478D8: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x004478D8: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_0:
    // 0x004478DC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x004478E0: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x004478E4: lw          $v0, 0x4F8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4F8);
    // 0x004478E8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004478EC: lwc1        $f0, 0x938($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X938);
    // 0x004478F0: lwc1        $f1, 0x4($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X4);
    // 0x004478F4: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x004478F8: addiu       $v0, $v0, 0x2414
    ctx->r2 = ADD32(ctx->r2, 0X2414);
    // 0x004478FC: sw          $v0, 0x548($s0)
    MEM_W(0X548, ctx->r16) = ctx->r2;
    // 0x00447900: addiu       $s0, $s0, 0x548
    ctx->r16 = ADD32(ctx->r16, 0X548);
    // 0x00447904: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00447908: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x0044790C: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x00447910: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x00447914: sw          $zero, 0x14($s0)
    MEM_W(0X14, ctx->r16) = 0;
    // 0x00447918: jal         0x00225C84
    // 0x0044791C: swc1        $f1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    func_00225C84(rdram, ctx);
        goto after_1;
    // 0x0044791C: swc1        $f1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    after_1:
    // 0x00447920: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00447924: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00447928: jr          $ra
    // 0x0044792C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0044792C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00428A18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00428A18: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00428A1C: addu        $v1, $s0, $zero
    ctx->r3 = ADD32(ctx->r16, 0);
    // 0x00428A20: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x00428A24: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x00428A28: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x00428A2C: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x00428A30: addu        $s7, $a1, $zero
    ctx->r23 = ADD32(ctx->r5, 0);
    // 0x00428A34: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x00428A38: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x00428A3C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x00428A40: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
    // 0x00428A44: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x00428A48: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x00428A4C: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x00428A50: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x00428A54: jal         0x00299FE4
    // 0x00428A58: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    func_00299FE4(rdram, ctx);
        goto after_0;
    // 0x00428A58: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    after_0:
    // 0x00428A5C: lui         $s3, 0x8013
    ctx->r19 = S32(0X8013 << 16);
    // 0x00428A60: addiu       $s3, $s3, 0xE20
    ctx->r19 = ADD32(ctx->r19, 0XE20);
    // 0x00428A64: addiu       $s1, $sp, 0x20
    ctx->r17 = ADD32(ctx->r29, 0X20);
    // 0x00428A68: addiu       $s5, $sp, 0x10
    ctx->r21 = ADD32(ctx->r29, 0X10);
L_00428A6C:
    // 0x00428A6C: jal         0x00428B9C
    // 0x00428A70: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_00428B9C(rdram, ctx);
        goto after_1;
    // 0x00428A70: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
    // 0x00428A74: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x00428A78: jal         0x0029A080
    // 0x00428A7C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_0029A080(rdram, ctx);
        goto after_2;
    // 0x00428A7C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_2:
    // 0x00428A80: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00428A84: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00428A88: jal         0x0029B6F0
    // 0x00428A8C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x00428A8C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x00428A90: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00428A94: jal         0x0029A080
    // 0x00428A98: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_0029A080(rdram, ctx);
        goto after_4;
    // 0x00428A98: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_4:
    // 0x00428A9C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00428AA0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00428AA4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00428AA8: jal         0x0029B6F0
    // 0x00428AAC: addu        $s6, $v0, $zero
    ctx->r22 = ADD32(ctx->r2, 0);
    osRecvMesg_recomp(rdram, ctx);
        goto after_5;
    // 0x00428AAC: addu        $s6, $v0, $zero
    ctx->r22 = ADD32(ctx->r2, 0);
    after_5:
    // 0x00428AB0: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x00428AB4: jal         0x00428C38
    // 0x00428AB8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_00428C38(rdram, ctx);
        goto after_6;
    // 0x00428AB8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_6:
    // 0x00428ABC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00428AC0: lbu         $v0, 0x13DC($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X13DC);
    // 0x00428AC4: beq         $v0, $zero, L_00428B00
    if (ctx->r2 == 0) {
        // 0x00428AC8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00428B00;
    }
    // 0x00428AC8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00428ACC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00428AD0: addu        $v1, $s5, $zero
    ctx->r3 = ADD32(ctx->r21, 0);
L_00428AD4:
    // 0x00428AD4: lbu         $v0, 0x2($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X2);
    // 0x00428AD8: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x00428ADC: bnel        $v0, $zero, L_00428AEC
    if (ctx->r2 != 0) {
        // 0x00428AE0: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_00428AEC;
    }
    goto skip_0;
    // 0x00428AE0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_0:
    // 0x00428AE4: j           L_00428AF8
    // 0x00428AE8: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
        goto L_00428AF8;
    // 0x00428AE8: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
L_00428AEC:
    // 0x00428AEC: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x00428AF0: bne         $v0, $zero, L_00428AD4
    if (ctx->r2 != 0) {
        // 0x00428AF4: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_00428AD4;
    }
    // 0x00428AF4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_00428AF8:
    // 0x00428AF8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00428AFC: lbu         $v0, 0x13DC($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X13DC);
L_00428B00:
    // 0x00428B00: beql        $a0, $v0, L_00428B08
    if (ctx->r4 == ctx->r2) {
        // 0x00428B04: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00428B08;
    }
    goto skip_1;
    // 0x00428B04: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_1:
L_00428B08:
    // 0x00428B08: bgtz        $s0, L_00428A6C
    if (SIGNED(ctx->r16) > 0) {
        // 0x00428B0C: nop
    
            goto L_00428A6C;
    }
    // 0x00428B0C: nop

    // 0x00428B10: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00428B14: lbu         $v0, 0x13DC($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X13DC);
    // 0x00428B18: beq         $v0, $zero, L_00428B60
    if (ctx->r2 == 0) {
        // 0x00428B1C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00428B60;
    }
    // 0x00428B1C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00428B20: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00428B24: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00428B28: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
L_00428B2C:
    // 0x00428B2C: lbu         $v0, 0x3($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X3);
    // 0x00428B30: bnel        $v0, $zero, L_00428B54
    if (ctx->r2 != 0) {
        // 0x00428B34: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_00428B54;
    }
    goto skip_2;
    // 0x00428B34: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_2:
    // 0x00428B38: lbu         $v0, 0x2($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X2);
    // 0x00428B3C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00428B40: beql        $v0, $zero, L_00428B54
    if (ctx->r2 == 0) {
        // 0x00428B44: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_00428B54;
    }
    goto skip_3;
    // 0x00428B44: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_3:
    // 0x00428B48: sllv        $v0, $a2, $a0
    ctx->r2 = S32(ctx->r6 << (ctx->r4 & 31));
    // 0x00428B4C: or          $s2, $s2, $v0
    ctx->r18 = ctx->r18 | ctx->r2;
    // 0x00428B50: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_00428B54:
    // 0x00428B54: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x00428B58: bne         $v0, $zero, L_00428B2C
    if (ctx->r2 != 0) {
        // 0x00428B5C: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_00428B2C;
    }
    // 0x00428B5C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_00428B60:
    // 0x00428B60: jal         0x0029A050
    // 0x00428B64: nop

    func_0029A050(rdram, ctx);
        goto after_7;
    // 0x00428B64: nop

    after_7:
    // 0x00428B68: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
    // 0x00428B6C: sb          $s2, 0x0($s7)
    MEM_B(0X0, ctx->r23) = ctx->r18;
    // 0x00428B70: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x00428B74: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x00428B78: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x00428B7C: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x00428B80: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x00428B84: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x00428B88: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x00428B8C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x00428B90: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x00428B94: jr          $ra
    // 0x00428B98: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x00428B98: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_0045DC74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_0025A9C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025A9C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025A9CC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025A9D0: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025A9D4: lhu         $a3, 0x90($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X90);
    // 0x0025A9D8: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025A9DC: addiu       $a2, $a2, 0x2D0
    ctx->r6 = ADD32(ctx->r6, 0X2D0);
    // 0x0025A9E0: jal         0x00245A98
    // 0x0025A9E4: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025A9E4: nop

    after_0:
    // 0x0025A9E8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025A9EC: jr          $ra
    // 0x0025A9F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025A9F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002366C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002366C8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002366CC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002366D0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x002366D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x002366D8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002366DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002366E0: lw          $s0, 0x7520($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X7520);
    // 0x002366E4: beq         $s0, $zero, L_00236788
    if (ctx->r16 == 0) {
        // 0x002366E8: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00236788;
    }
    // 0x002366E8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_002366EC:
    // 0x002366EC: lw          $s1, 0x4($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X4);
    // 0x002366F0: jal         0x00233BD4
    // 0x002366F4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00233BD4(rdram, ctx);
        goto after_0;
    // 0x002366F4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x002366F8: bnel        $v0, $zero, L_00236780
    if (ctx->r2 != 0) {
        // 0x002366FC: addu        $s0, $s1, $zero
        ctx->r16 = ADD32(ctx->r17, 0);
            goto L_00236780;
    }
    goto skip_0;
    // 0x002366FC: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
    skip_0:
    // 0x00236700: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x00236704: beq         $v1, $zero, L_00236750
    if (ctx->r3 == 0) {
        // 0x00236708: nop
    
            goto L_00236750;
    }
    // 0x00236708: nop

    // 0x0023670C: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x00236710: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00236714: beq         $v0, $zero, L_0023672C
    if (ctx->r2 == 0) {
        // 0x00236718: nop
    
            goto L_0023672C;
    }
    // 0x00236718: nop

    // 0x0023671C: lbu         $v0, 0x10F($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X10F);
    // 0x00236720: beq         $v0, $zero, L_0023672C
    if (ctx->r2 == 0) {
        // 0x00236724: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_0023672C;
    }
    // 0x00236724: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00236728: sb          $v0, 0x10F($v1)
    MEM_B(0X10F, ctx->r3) = ctx->r2;
L_0023672C:
    // 0x0023672C: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x00236730: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x00236734: beq         $v0, $zero, L_00236750
    if (ctx->r2 == 0) {
        // 0x00236738: nop
    
            goto L_00236750;
    }
    // 0x00236738: nop

    // 0x0023673C: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x00236740: lbu         $v0, 0x1B5($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X1B5);
    // 0x00236744: beq         $v0, $zero, L_00236750
    if (ctx->r2 == 0) {
        // 0x00236748: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_00236750;
    }
    // 0x00236748: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0023674C: sb          $v0, 0x1B5($v1)
    MEM_B(0X1B5, ctx->r3) = ctx->r2;
L_00236750:
    // 0x00236750: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00236754: lwc1        $f0, 0x24($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X24);
    // 0x00236758: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
    // 0x0023675C: lwc1        $f1, 0x4($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X4);
    // 0x00236760: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00236764: nop

    // 0x00236768: bc1tl       L_00236770
    if (c1cs) {
        // 0x0023676C: swc1        $f1, 0x24($s0)
        MEM_W(0X24, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
            goto L_00236770;
    }
    goto skip_1;
    // 0x0023676C: swc1        $f1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    skip_1:
L_00236770:
    // 0x00236770: addiu       $a0, $s2, 0x7514
    ctx->r4 = ADD32(ctx->r18, 0X7514);
    // 0x00236774: jal         0x0026D474
    // 0x00236778: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0026D474(rdram, ctx);
        goto after_1;
    // 0x00236778: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0023677C: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
L_00236780:
    // 0x00236780: bne         $s0, $zero, L_002366EC
    if (ctx->r16 != 0) {
        // 0x00236784: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_002366EC;
    }
    // 0x00236784: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00236788:
    // 0x00236788: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0023678C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00236790: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00236794: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00236798: jr          $ra
    // 0x0023679C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0023679C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0029DF28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029DF28: lb          $v1, 0x174($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X174);
    // 0x0029DF2C: beq         $v1, $v0, L_0029DF40
    if (ctx->r3 == ctx->r2) {
        // 0x0029DF30: addiu       $sp, $sp, -0x18
        ctx->r29 = ADD32(ctx->r29, -0X18);
            goto L_0029DF40;
    }
    // 0x0029DF30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0029DF34: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0029DF38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0029DF3C: jal         0x0029DFF0
    // 0x0029DF40: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_0029DFF0(rdram, ctx);
        goto after_0;
L_0029DF40:
    // 0x0029DF40: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x0029DF44: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0029DF48: addiu       $a0, $a0, -0x76F8
    ctx->r4 = ADD32(ctx->r4, -0X76F8);
    // 0x0029DF4C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x0029DF50: or          $v1, $v1, $s0
    ctx->r3 = ctx->r3 | ctx->r16;
    // 0x0029DF54: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x0029DF58: jal         0x0029E010
    // 0x0029DF5C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_1;
    // 0x0029DF5C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_1:
    // 0x0029DF60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0029DF64: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0029DF68: jr          $ra
    // 0x0029DF6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0029DF6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002955EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002955EC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x002955F0: addiu       $a2, $a0, 0xE
    ctx->r6 = ADD32(ctx->r4, 0XE);
    // 0x002955F4: lh          $v1, 0x0($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X0);
    // 0x002955F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002955FC: sw          $v0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r2;
    // 0x00295600: srav        $v1, $v1, $v0
    ctx->r3 = S32(SIGNED(ctx->r3) >> (ctx->r2 & 31));
    // 0x00295604: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
    // 0x00295608: addiu       $v0, $zero, 0x4000
    ctx->r2 = ADD32(0, 0X4000);
    // 0x0029560C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00295610: sh          $v0, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r2;
L_00295614:
    // 0x00295614: sh          $zero, 0x8($a2)
    MEM_H(0X8, ctx->r6) = 0;
    // 0x00295618: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x0029561C: bgez        $a1, L_00295614
    if (SIGNED(ctx->r5) >= 0) {
        // 0x00295620: addiu       $a2, $a2, -0x2
        ctx->r6 = ADD32(ctx->r6, -0X2);
            goto L_00295614;
    }
    // 0x00295620: addiu       $a2, $a2, -0x2
    ctx->r6 = ADD32(ctx->r6, -0X2);
    // 0x00295624: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x00295628: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0029562C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00295630: ldc1        $f1, -0x5AD8($at)
    CHECK_FR(ctx, 1);
    ctx->f1.u64 = LD(ctx->r1, -0X5AD8);
    // 0x00295634: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00295638: cvt.d.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.d = CVT_D_W(ctx->f0.u32l);
    // 0x0029563C: mul.d       $f1, $f0, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f1.d); 
    ctx->f1.d = MUL_D(ctx->f0.d, ctx->f1.d);
    // 0x00295640: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x00295644: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00295648: ldc1        $f3, -0x5AD0($at)
    CHECK_FR(ctx, 3);
    ctx->f3.u64 = LD(ctx->r1, -0X5AD0);
    // 0x0029564C: addiu       $v1, $a0, 0x12
    ctx->r3 = ADD32(ctx->r4, 0X12);
    // 0x00295650: sh          $a3, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r7;
    // 0x00295654: mov.d       $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.d = ctx->f1.d;
L_00295658:
    // 0x00295658: mul.d       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f2.d); 
    ctx->f1.d = MUL_D(ctx->f1.d, ctx->f2.d);
    // 0x0029565C: nop

    // 0x00295660: mul.d       $f0, $f1, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f3.d); 
    ctx->f0.d = MUL_D(ctx->f1.d, ctx->f3.d);
    // 0x00295664: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00295668: trunc.w.d   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_D(ctx->f0.d);
    // 0x0029566C: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x00295670: sh          $v0, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r2;
    // 0x00295674: slti        $v0, $a1, 0x10
    ctx->r2 = SIGNED(ctx->r5) < 0X10 ? 1 : 0;
    // 0x00295678: bne         $v0, $zero, L_00295658
    if (ctx->r2 != 0) {
        // 0x0029567C: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_00295658;
    }
    // 0x0029567C: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x00295680: jr          $ra
    // 0x00295684: nop

    return;
    // 0x00295684: nop

;}
RECOMP_FUNC void func_0026E2FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026E2FC: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x0026E300: addiu       $v1, $zero, -0x2001
    ctx->r3 = ADD32(0, -0X2001);
    // 0x0026E304: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0026E308: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x0026E30C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0026E310: jr          $ra
    // 0x0026E314: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
    return;
    // 0x0026E314: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_00426730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00426730: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // turok2: reconnected split function: a stray ELF symbol at 0x00426734 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00426734(rdram, ctx);
;}
RECOMP_FUNC void func_00201FBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00201FBC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00201FC0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00201FC4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00201FC8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00201FCC: addiu       $a0, $s0, 0x230
    ctx->r4 = ADD32(ctx->r16, 0X230);
L_00201FD0:
    // 0x00201FD0: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x00201FD4: jal         0x0029B6F0
    // 0x00201FD8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x00201FD8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x00201FDC: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x00201FE0: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x00201FE4: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x00201FE8: jal         0x0029E340
    // 0x00201FEC: nop

    func_0029E340(rdram, ctx);
        goto after_1;
    // 0x00201FEC: nop

    after_1:
    // 0x00201FF0: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x00201FF4: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x00201FF8: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x00201FFC: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    // 0x00202000: jal         0x00299EB0
    // 0x00202004: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    osPiRawStartDma_recomp(rdram, ctx);
        goto after_2;
    // 0x00202004: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_2:
    // 0x00202008: addiu       $a0, $s0, 0xA48
    ctx->r4 = ADD32(ctx->r16, 0XA48);
    // 0x0020200C: addiu       $a1, $sp, 0x14
    ctx->r5 = ADD32(ctx->r29, 0X14);
    // 0x00202010: jal         0x0029B6F0
    // 0x00202014: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x00202014: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x00202018: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x0020201C: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x00202020: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x00202024: jal         0x0029E030
    // 0x00202028: nop

    func_0029E030(rdram, ctx);
        goto after_4;
    // 0x00202028: nop

    after_4:
    // 0x0020202C: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x00202030: lw          $a0, 0xC($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XC);
    // 0x00202034: beq         $a0, $zero, L_00202048
    if (ctx->r4 == 0) {
        // 0x00202038: nop
    
            goto L_00202048;
    }
    // 0x00202038: nop

    // 0x0020203C: lw          $a1, 0x10($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X10);
    // 0x00202040: jal         0x0029B820
    // 0x00202044: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_5;
    // 0x00202044: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
L_00202048:
    // 0x00202048: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x0020204C: jal         0x002020C8
    // 0x00202050: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    entry_002020C8(rdram, ctx);
        goto after_6;
    // 0x00202050: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x00202054: j           L_00201FD0
    // 0x00202058: addiu       $a0, $s0, 0x230
    ctx->r4 = ADD32(ctx->r16, 0X230);
        goto L_00201FD0;
    // 0x00202058: addiu       $a0, $s0, 0x230
    ctx->r4 = ADD32(ctx->r16, 0X230);
;}
RECOMP_FUNC void func_00266854(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00266854: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00266858: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0026685C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00266860: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00266864: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00266868: lhu         $v0, 0xC4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XC4);
    // 0x0026686C: addiu       $v0, $v0, -0xFA0
    ctx->r2 = ADD32(ctx->r2, -0XFA0);
    // 0x00266870: sltiu       $v0, $v0, 0x401
    ctx->r2 = ctx->r2 < 0X401 ? 1 : 0;
    // 0x00266874: beq         $v0, $zero, L_002668C0
    if (ctx->r2 == 0) {
        // 0x00266878: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_002668C0;
    }
    // 0x00266878: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0026687C: lb          $v0, 0xC7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC7);
    // 0x00266880: beq         $v0, $zero, L_002668C0
    if (ctx->r2 == 0) {
        // 0x00266884: nop
    
            goto L_002668C0;
    }
    // 0x00266884: nop

    // 0x00266888: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0026688C: addiu       $a2, $a2, -0x910
    ctx->r6 = ADD32(ctx->r6, -0X910);
    // 0x00266890: jal         0x00245A98
    // 0x00266894: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x00266894: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_0:
    // 0x00266898: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0026689C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x002668A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x002668A4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x002668A8: sb          $v0, 0x35($s0)
    MEM_B(0X35, ctx->r16) = ctx->r2;
    // 0x002668AC: sb          $zero, 0xC7($s0)
    MEM_B(0XC7, ctx->r16) = 0;
    // 0x002668B0: jal         0x0021E9A4
    // 0x002668B4: sw          $a1, 0x10C($s0)
    MEM_W(0X10C, ctx->r16) = ctx->r5;
    func_0021E9A4(rdram, ctx);
        goto after_1;
    // 0x002668B4: sw          $a1, 0x10C($s0)
    MEM_W(0X10C, ctx->r16) = ctx->r5;
    after_1:
    // 0x002668B8: jal         0x0021A7EC
    // 0x002668BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0021A7EC(rdram, ctx);
        goto after_2;
    // 0x002668BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
L_002668C0:
    // 0x002668C0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x002668C4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002668C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002668CC: jr          $ra
    // 0x002668D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002668D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00402D50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00402D50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00402D54: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00402D58: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00402D5C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x00402D60: lw          $a0, -0xA40($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XA40);
    // 0x00402D64: addiu       $a2, $zero, 0x5AB4
    ctx->r6 = ADD32(0, 0X5AB4);
    // 0x00402D68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00402D6C: jal         0x002666B0
    // 0x00402D70: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_002666B0(rdram, ctx);
        goto after_0;
    // 0x00402D70: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_0:
    // 0x00402D74: lui         $v1, 0xFFFE
    ctx->r3 = S32(0XFFFE << 16);
    // 0x00402D78: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x00402D7C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00402D80: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00402D84: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x00402D88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00402D8C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00402D90: jr          $ra
    // 0x00402D94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00402D94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002265E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002265E8: lw          $v0, 0xD4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XD4);
    // 0x002265EC: lui         $v1, 0x8
    ctx->r3 = S32(0X8 << 16);
    // 0x002265F0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002265F4: bne         $v0, $zero, L_00226658
    if (ctx->r2 != 0) {
            // 0x002265F8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    func_00226658(rdram, ctx);
    return;
    }
    // 0x002265F8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x002265FC: lw          $a2, 0xE0($a0)
    ctx->r6 = MEM_W(ctx->r4, 0XE0);
    // 0x00226600: sltu        $v0, $a1, $a2
    ctx->r2 = ctx->r5 < ctx->r6 ? 1 : 0;
    // 0x00226604: bne         $v0, $zero, L_00226650
    if (ctx->r2 != 0) {
            // 0x00226608: nop

    func_00226650(rdram, ctx);
    return;
    }
    // 0x00226608: nop

    // 0x0022660C: lw          $v1, 0xE8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XE8);
    // 0x00226610: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00226614: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00226618: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x0022661C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00226620: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00226624: addiu       $v0, $v0, -0x288
    ctx->r2 = ADD32(ctx->r2, -0X288);
    // 0x00226628: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x0022662C: sltu        $v0, $v0, $a1
    ctx->r2 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x00226630: bne         $v0, $zero, L_00226650
    if (ctx->r2 != 0) {
            // 0x00226634: subu        $v1, $a1, $a2
    ctx->r3 = SUB32(ctx->r5, ctx->r6);
    func_00226650(rdram, ctx);
    return;
    }
    // 0x00226634: subu        $v1, $a1, $a2
    ctx->r3 = SUB32(ctx->r5, ctx->r6);
    // 0x00226638: lui         $v0, 0xCA45
    ctx->r2 = S32(0XCA45 << 16);
    // 0x0022663C: ori         $v0, $v0, 0x87E7
    ctx->r2 = ctx->r2 | 0X87E7;
    // 0x00226640: multu       $v1, $v0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00226644: mfhi        $a3
    ctx->r7 = hi;
    // 0x00226648: jr          $ra
    // 0x0022664C: srl         $v0, $a3, 9
    ctx->r2 = S32(U32(ctx->r7) >> 9);
    return;
    // 0x0022664C: srl         $v0, $a3, 9
    ctx->r2 = S32(U32(ctx->r7) >> 9);
;}
RECOMP_FUNC void func_0022450C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0022450C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00224510: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x00224514: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00224518: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0022451C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00224520: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00224524: lw          $a0, 0x70($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X70);
    // 0x00224528: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0022452C: addu        $at, $v0, $at
    ctx->r1 = ADD32(ctx->r2, ctx->r1);
    // 0x00224530: lw          $s0, -0x7058($at)
    ctx->r16 = MEM_W(ctx->r1, -0X7058);
    // 0x00224534: jal         0x002017D4
    // 0x00224538: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00224538: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x0022453C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00224540: jal         0x002017D4
    // 0x00224544: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00224544: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00224548: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0022454C: jal         0x002017D4
    // 0x00224550: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x00224550: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_2:
    // 0x00224554: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00224558: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022455C: jal         0x002017D4
    // 0x00224560: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x00224560: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x00224564: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00224568: jal         0x00201818
    // 0x0022456C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_00201818(rdram, ctx);
        goto after_4;
    // 0x0022456C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x00224570: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00224574: jal         0x002017D4
    // 0x00224578: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x00224578: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x0022457C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00224580: andi        $v1, $s1, 0x7
    ctx->r3 = ctx->r17 & 0X7;
    // 0x00224584: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00224588: bgez        $s1, L_00224594
    if (SIGNED(ctx->r17) >= 0) {
        // 0x0022458C: sllv        $v1, $v0, $v1
        ctx->r3 = S32(ctx->r2 << (ctx->r3 & 31));
            goto L_00224594;
    }
    // 0x0022458C: sllv        $v1, $v0, $v1
    ctx->r3 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x00224590: addiu       $s1, $s1, 0x7
    ctx->r17 = ADD32(ctx->r17, 0X7);
L_00224594:
    // 0x00224594: sra         $v0, $s1, 3
    ctx->r2 = S32(SIGNED(ctx->r17) >> 3);
    // 0x00224598: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x0022459C: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x002245A0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x002245A4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002245A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002245AC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002245B0: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x002245B4: jr          $ra
    // 0x002245B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002245B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00266A98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00266A98: lw          $v1, 0x14($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X14);
    // 0x00266A9C: lbu         $v0, 0x7($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X7);
    // 0x00266AA0: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x00266AA4: lw          $v1, 0x14($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X14);
    // 0x00266AA8: lbu         $v0, 0x7($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X7);
    // 0x00266AAC: jr          $ra
    // 0x00266AB0: sb          $v0, 0x10($v1)
    MEM_B(0X10, ctx->r3) = ctx->r2;
    return;
    // 0x00266AB0: sb          $v0, 0x10($v1)
    MEM_B(0X10, ctx->r3) = ctx->r2;
;}
RECOMP_FUNC void func_004001D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004001D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x004001D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004001D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x004001DC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x004001E0: addiu       $a0, $a0, -0x5528
    ctx->r4 = ADD32(ctx->r4, -0X5528);
    // 0x004001E4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x004001E8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x004001EC: lbu         $v0, 0x19($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X19);
    // 0x004001F0: bne         $v0, $zero, L_004004C4
    if (ctx->r2 != 0) {
        // 0x004001F4: nop
    
            goto L_004004C4;
    }
    // 0x004001F4: nop

    // 0x004001F8: jal         0x002532A8
    // 0x004001FC: addiu       $a0, $a0, -0x1268
    ctx->r4 = ADD32(ctx->r4, -0X1268);
    func_002532A8(rdram, ctx);
        goto after_0;
    // 0x004001FC: addiu       $a0, $a0, -0x1268
    ctx->r4 = ADD32(ctx->r4, -0X1268);
    after_0:
    // 0x00400200: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x00400204: beq         $s1, $zero, L_004004C4
    if (ctx->r17 == 0) {
        // 0x00400208: nop
    
            goto L_004004C4;
    }
    // 0x00400208: nop

    // 0x0040020C: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x00400210: bne         $v1, $zero, L_00400250
    if (ctx->r3 != 0) {
        // 0x00400214: nop
    
            goto L_00400250;
    }
    // 0x00400214: nop

    // 0x00400218: lw          $a0, 0x51C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X51C);
    // 0x0040021C: jal         0x00416AF8
    // 0x00400220: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    func_00416AF8(rdram, ctx);
        goto after_1;
    // 0x00400220: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    after_1:
    // 0x00400224: bne         $v0, $zero, L_004002A0
    if (ctx->r2 != 0) {
        // 0x00400228: nop
    
            goto L_004002A0;
    }
    // 0x00400228: nop

    // 0x0040022C: lw          $v0, 0xA68($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XA68);
    // 0x00400230: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x00400234: beq         $v0, $zero, L_004002A0
    if (ctx->r2 == 0) {
        // 0x00400238: nop
    
            goto L_004002A0;
    }
    // 0x00400238: nop

    // 0x0040023C: lw          $v0, 0xB8C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XB8C);
    // 0x00400240: bne         $v0, $zero, L_004002A0
    if (ctx->r2 != 0) {
        // 0x00400244: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_004002A0;
    }
    // 0x00400244: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00400248: j           L_004002A0
    // 0x0040024C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
        goto L_004002A0;
    // 0x0040024C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
L_00400250:
    // 0x00400250: lw          $v0, 0xB8C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XB8C);
    // 0x00400254: bnel        $v0, $zero, L_004002A0
    if (ctx->r2 != 0) {
        // 0x00400258: sw          $zero, 0x0($s0)
        MEM_W(0X0, ctx->r16) = 0;
            goto L_004002A0;
    }
    goto skip_0;
    // 0x00400258: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    skip_0:
    // 0x0040025C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00400260: bne         $v1, $v0, L_00400290
    if (ctx->r3 != ctx->r2) {
        // 0x00400264: nop
    
            goto L_00400290;
    }
    // 0x00400264: nop

    // 0x00400268: lw          $v0, 0xA6C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XA6C);
    // 0x0040026C: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x00400270: bne         $v0, $zero, L_00400288
    if (ctx->r2 != 0) {
        // 0x00400274: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00400288;
    }
    // 0x00400274: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00400278: lw          $v0, 0xA64($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XA64);
    // 0x0040027C: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x00400280: bne         $v0, $zero, L_004002A0
    if (ctx->r2 != 0) {
        // 0x00400284: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_004002A0;
    }
    // 0x00400284: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_00400288:
    // 0x00400288: j           L_004002A0
    // 0x0040028C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
        goto L_004002A0;
    // 0x0040028C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
L_00400290:
    // 0x00400290: lw          $v0, 0xA6C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XA6C);
    // 0x00400294: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x00400298: bnel        $v0, $zero, L_004002A0
    if (ctx->r2 != 0) {
        // 0x0040029C: sw          $zero, 0x0($s0)
        MEM_W(0X0, ctx->r16) = 0;
            goto L_004002A0;
    }
    goto skip_1;
    // 0x0040029C: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    skip_1:
L_004002A0:
    // 0x004002A0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x004002A4: beq         $v0, $zero, L_004002E8
    if (ctx->r2 == 0) {
        // 0x004002A8: addiu       $v0, $zero, 0xD
        ctx->r2 = ADD32(0, 0XD);
            goto L_004002E8;
    }
    // 0x004002A8: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x004002AC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x004002B0: addiu       $a0, $a0, -0x5378
    ctx->r4 = ADD32(ctx->r4, -0X5378);
    // 0x004002B4: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x004002B8: bne         $v1, $v0, L_004002E8
    if (ctx->r3 != ctx->r2) {
        // 0x004002BC: nop
    
            goto L_004002E8;
    }
    // 0x004002BC: nop

    // 0x004002C0: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x004002C4: bne         $v0, $zero, L_004002E8
    if (ctx->r2 != 0) {
        // 0x004002C8: nop
    
            goto L_004002E8;
    }
    // 0x004002C8: nop

    // 0x004002CC: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x004002D0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x004002D4: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x004002D8: bne         $v0, $zero, L_004002FC
    if (ctx->r2 != 0) {
        // 0x004002DC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_004002FC;
    }
    // 0x004002DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004002E0: j           L_004002FC
    // 0x004002E4: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
        goto L_004002FC;
    // 0x004002E4: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
L_004002E8:
    // 0x004002E8: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x004002EC: beq         $v0, $zero, L_004003F8
    if (ctx->r2 == 0) {
        // 0x004002F0: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_004003F8;
    }
    // 0x004002F0: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x004002F4: bnel        $v0, $v1, L_004002FC
    if (ctx->r2 != ctx->r3) {
        // 0x004002F8: sw          $v1, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r3;
            goto L_004002FC;
    }
    goto skip_2;
    // 0x004002F8: sw          $v1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r3;
    skip_2:
L_004002FC:
    // 0x004002FC: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x00400300: beq         $v0, $zero, L_004003F8
    if (ctx->r2 == 0) {
        // 0x00400304: nop
    
            goto L_004003F8;
    }
    // 0x00400304: nop

    // 0x00400308: lw          $v1, 0xA64($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XA64);
    // 0x0040030C: andi        $v0, $v1, 0x20
    ctx->r2 = ctx->r3 & 0X20;
    // 0x00400310: beq         $v0, $zero, L_004003C8
    if (ctx->r2 == 0) {
        // 0x00400314: andi        $v0, $v1, 0x200
        ctx->r2 = ctx->r3 & 0X200;
            goto L_004003C8;
    }
    // 0x00400314: andi        $v0, $v1, 0x200
    ctx->r2 = ctx->r3 & 0X200;
    // 0x00400318: beq         $v0, $zero, L_00400340
    if (ctx->r2 == 0) {
        // 0x0040031C: andi        $v0, $v1, 0x100
        ctx->r2 = ctx->r3 & 0X100;
            goto L_00400340;
    }
    // 0x0040031C: andi        $v0, $v1, 0x100
    ctx->r2 = ctx->r3 & 0X100;
    // 0x00400320: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00400324: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00400328: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040032C: lwc1        $f1, 0x214($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X214);
    // 0x00400330: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00400334: lwc1        $f1, 0x2C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X2C);
    // 0x00400338: j           L_00400364
    // 0x0040033C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
        goto L_00400364;
    // 0x0040033C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
L_00400340:
    // 0x00400340: beq         $v0, $zero, L_00400368
    if (ctx->r2 == 0) {
        // 0x00400344: nop
    
            goto L_00400368;
    }
    // 0x00400344: nop

    // 0x00400348: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0040034C: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00400350: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00400354: lwc1        $f1, 0x218($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X218);
    // 0x00400358: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0040035C: lwc1        $f1, 0x2C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X2C);
    // 0x00400360: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
L_00400364:
    // 0x00400364: swc1        $f1, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
L_00400368:
    // 0x00400368: lw          $v1, 0xA64($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XA64);
    // 0x0040036C: andi        $v0, $v1, 0x800
    ctx->r2 = ctx->r3 & 0X800;
    // 0x00400370: beq         $v0, $zero, L_0040039C
    if (ctx->r2 == 0) {
        // 0x00400374: andi        $v0, $v1, 0x400
        ctx->r2 = ctx->r3 & 0X400;
            goto L_0040039C;
    }
    // 0x00400374: andi        $v0, $v1, 0x400
    ctx->r2 = ctx->r3 & 0X400;
    // 0x00400378: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0040037C: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00400380: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00400384: lwc1        $f1, 0x21C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X21C);
    // 0x00400388: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0040038C: lwc1        $f1, 0x34($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X34);
    // 0x00400390: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00400394: j           L_004003D4
    // 0x00400398: swc1        $f1, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
        goto L_004003D4;
    // 0x00400398: swc1        $f1, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
L_0040039C:
    // 0x0040039C: beq         $v0, $zero, L_004003D4
    if (ctx->r2 == 0) {
        // 0x004003A0: nop
    
            goto L_004003D4;
    }
    // 0x004003A0: nop

    // 0x004003A4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x004003A8: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x004003AC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004003B0: lwc1        $f1, 0x220($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X220);
    // 0x004003B4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x004003B8: lwc1        $f1, 0x34($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X34);
    // 0x004003BC: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x004003C0: j           L_004003D4
    // 0x004003C4: swc1        $f1, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
        goto L_004003D4;
    // 0x004003C4: swc1        $f1, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
L_004003C8:
    // 0x004003C8: sw          $zero, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = 0;
    // 0x004003CC: sw          $zero, 0x30($s0)
    MEM_W(0X30, ctx->r16) = 0;
    // 0x004003D0: sw          $zero, 0x34($s0)
    MEM_W(0X34, ctx->r16) = 0;
L_004003D4:
    // 0x004003D4: lw          $a1, 0x2C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2C);
    // 0x004003D8: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x004003DC: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x004003E0: jal         0x002117DC
    // 0x004003E4: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
    func_002117DC(rdram, ctx);
        goto after_2;
    // 0x004003E4: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
    after_2:
    // 0x004003E8: lw          $a1, 0x34($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X34);
    // 0x004003EC: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x004003F0: jal         0x002117DC
    // 0x004003F4: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    func_002117DC(rdram, ctx);
        goto after_3;
    // 0x004003F4: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    after_3:
L_004003F8:
    // 0x004003F8: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x004003FC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x00400400: beq         $v1, $a0, L_004004C4
    if (ctx->r3 == ctx->r4) {
        // 0x00400404: slti        $v0, $v1, 0x3
        ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
            goto L_004004C4;
    }
    // 0x00400404: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x00400408: beq         $v0, $zero, L_00400420
    if (ctx->r2 == 0) {
        // 0x0040040C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00400420;
    }
    // 0x0040040C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00400410: beq         $v1, $v0, L_00400434
    if (ctx->r3 == ctx->r2) {
        // 0x00400414: nop
    
            goto L_00400434;
    }
    // 0x00400414: nop

    // 0x00400418: j           L_004004C4
    // 0x0040041C: nop

        goto L_004004C4;
    // 0x0040041C: nop

L_00400420:
    // 0x00400420: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00400424: beq         $v1, $v0, L_00400474
    if (ctx->r3 == ctx->r2) {
        // 0x00400428: nop
    
            goto L_00400474;
    }
    // 0x00400428: nop

    // 0x0040042C: j           L_004004C4
    // 0x00400430: nop

        goto L_004004C4;
    // 0x00400430: nop

L_00400434:
    // 0x00400434: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00400438: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0040043C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00400440: lwc1        $f1, 0x224($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X224);
    // 0x00400444: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00400448: lwc1        $f1, 0x8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X8);
    // 0x0040044C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00400450: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00400454: lwc1        $f0, 0x228($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X228);
    // 0x00400458: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0040045C: nop

    // 0x00400460: bc1f        L_004004C4
    if (!c1cs) {
        // 0x00400464: swc1        $f1, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
            goto L_004004C4;
    }
    // 0x00400464: swc1        $f1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x00400468: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x0040046C: j           L_004004C4
    // 0x00400470: sw          $a0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r4;
        goto L_004004C4;
    // 0x00400470: sw          $a0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r4;
L_00400474:
    // 0x00400474: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00400478: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0040047C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00400480: lwc1        $f1, 0x22C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X22C);
    // 0x00400484: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00400488: lwc1        $f1, 0x8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X8);
    // 0x0040048C: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00400490: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00400494: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00400498: nop

    // 0x0040049C: bc1f        L_004004C4
    if (!c1cs) {
        // 0x004004A0: swc1        $f1, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
            goto L_004004C4;
    }
    // 0x004004A0: swc1        $f1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x004004A4: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x004004A8: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x004004AC: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x004004B0: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x004004B4: swc1        $f0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f0.u32l;
    // 0x004004B8: swc1        $f0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f0.u32l;
    // 0x004004BC: swc1        $f0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f0.u32l;
    // 0x004004C0: swc1        $f0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f0.u32l;
L_004004C4:
    // 0x004004C4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x004004C8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x004004CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004004D0: jr          $ra
    // 0x004004D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x004004D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002A5104(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A5104: bne         $v0, $zero, L_002A5120
    if (ctx->r2 != 0) {
            // 0x002A5108: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    func_002A5120(rdram, ctx);
    return;
    }
    // 0x002A5108: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x002A510C: sltu        $v1, $a3, $a1
    ctx->r3 = ctx->r7 < ctx->r5 ? 1 : 0;
    // 0x002A5110: bne         $v1, $zero, L_002A5120
    if (ctx->r3 != 0) {
            // 0x002A5114: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    func_002A5120(rdram, ctx);
    return;
    }
    // 0x002A5114: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x002A5118: jr          $ra
    // 0x002A511C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x002A511C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_00410B5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00410B5C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00410B60: lwc1        $f1, 0x1BC8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X1BC8);
    // 0x00410B64: add.s       $f0, $f1, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f1.fl;
    // 0x00410B68: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00410B6C: lwc1        $f3, 0x990($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X990);
    // 0x00410B70: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x00410B74: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00410B78: sub.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f1.fl;
    // 0x00410B7C: c.lt.s      $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f3.fl < ctx->f2.fl;
    // 0x00410B80: nop

    // 0x00410B84: bc1tl       L_00410B8C
    if (c1cs) {
        // 0x00410B88: mov.s       $f2, $f3
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    ctx->f2.fl = ctx->f3.fl;
            goto L_00410B8C;
    }
    goto skip_0;
    // 0x00410B88: mov.s       $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    ctx->f2.fl = ctx->f3.fl;
    skip_0:
L_00410B8C:
    // 0x00410B8C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00410B90: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x00410B94: nop

    // 0x00410B98: bc1tl       L_00410BA0
    if (c1cs) {
        // 0x00410B9C: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_00410BA0;
    }
    goto skip_1;
    // 0x00410B9C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_1:
L_00410BA0:
    // 0x00410BA0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00410BA4: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x00410BA8: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x00410BAC: jr          $ra
    // 0x00410BB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00410BB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00425F84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00425F84: addu        $s0, $s2, $v0
    ctx->r16 = ADD32(ctx->r18, ctx->r2);
    // 0x00425F88: addiu       $s0, $s0, 0x12
    ctx->r16 = ADD32(ctx->r16, 0X12);
L_00425F8C:
    // 0x00425F8C: addu        $v1, $s0, $a0
    ctx->r3 = ADD32(ctx->r16, ctx->r4);
    // 0x00425F90: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00425F94: sltiu       $v0, $v0, 0x42
    ctx->r2 = ctx->r2 < 0X42 ? 1 : 0;
    // 0x00425F98: beql        $v0, $zero, L_00425FB4
    if (ctx->r2 == 0) {
        // 0x00425F9C: sb          $a1, 0x0($a3)
        MEM_B(0X0, ctx->r7) = ctx->r5;
            goto L_00425FB4;
    }
    goto skip_0;
    // 0x00425F9C: sb          $a1, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r5;
    skip_0:
    // 0x00425FA0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00425FA4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00425FA8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00425FAC: lbu         $v0, 0x222C($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X222C);
    // 0x00425FB0: sb          $v0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r2;
L_00425FB4:
    // 0x00425FB4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00425FB8: slti        $v0, $a0, 0x10
    ctx->r2 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x00425FBC: bne         $v0, $zero, L_00425F8C
    if (ctx->r2 != 0) {
        // 0x00425FC0: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_00425F8C;
    }
    // 0x00425FC0: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x00425FC4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00425FC8: addiu       $a3, $zero, 0x7E
    ctx->r7 = ADD32(0, 0X7E);
    // 0x00425FCC: sll         $v0, $s4, 5
    ctx->r2 = S32(ctx->r20 << 5);
    // 0x00425FD0: sll         $v1, $s3, 7
    ctx->r3 = S32(ctx->r19 << 7);
    // 0x00425FD4: addu        $v1, $v1, $s3
    ctx->r3 = ADD32(ctx->r3, ctx->r19);
    // 0x00425FD8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00425FDC: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x00425FE0: lw          $a0, 0x2224($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2224);
    // 0x00425FE4: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x00425FE8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x00425FEC: addu        $a0, $v0, $v1
    ctx->r4 = ADD32(ctx->r2, ctx->r3);
    // 0x00425FF0: addiu       $a0, $a0, 0xE
    ctx->r4 = ADD32(ctx->r4, 0XE);
L_00425FF4:
    // 0x00425FF4: addu        $v1, $a0, $a2
    ctx->r3 = ADD32(ctx->r4, ctx->r6);
    // 0x00425FF8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00425FFC: sltiu       $v0, $v0, 0x42
    ctx->r2 = ctx->r2 < 0X42 ? 1 : 0;
    // 0x00426000: beql        $v0, $zero, L_0042601C
    if (ctx->r2 == 0) {
        // 0x00426004: sb          $a3, 0x0($a1)
        MEM_B(0X0, ctx->r5) = ctx->r7;
            goto L_0042601C;
    }
    goto skip_1;
    // 0x00426004: sb          $a3, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r7;
    skip_1:
    // 0x00426008: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x0042600C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00426010: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00426014: lbu         $v0, 0x222C($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X222C);
    // 0x00426018: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
L_0042601C:
    // 0x0042601C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x00426020: slti        $v0, $a2, 0x4
    ctx->r2 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    // 0x00426024: bne         $v0, $zero, L_00425FF4
    if (ctx->r2 != 0) {
        // 0x00426028: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_00425FF4;
    }
    // 0x00426028: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0042602C: sb          $zero, 0x4($s6)
    MEM_B(0X4, ctx->r22) = 0;
    // 0x00426030: sb          $zero, 0x2($s7)
    MEM_B(0X2, ctx->r23) = 0;
    // 0x00426034: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00426038: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x0042603C: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x00426040: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x00426044: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x00426048: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0042604C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00426050: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00426054: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00426058: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042605C: jr          $ra
    // 0x00426060: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00426060: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0029B028(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029B028: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0029B02C: jal         0x0024599C
    // 0x0029B030: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    func_0024599C(rdram, ctx);
        goto after_0;
    // 0x0029B030: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    after_0:
    // 0x0029B034: addiu       $v0, $v0, -0x76F0
    ctx->r2 = ADD32(ctx->r2, -0X76F0);
    // 0x0029B038: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0029B03C: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x0029B040: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x0029B044: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x0029B048: sw          $a2, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r6;
    // 0x0029B04C: jr          $ra
    // 0x0029B050: sw          $a1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r5;
    return;
    // 0x0029B050: sw          $a1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_00298718(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00298718: sb          $zero, 0x133($a1)
    MEM_B(0X133, ctx->r5) = 0;
    // 0x0029871C: jal         0x00243414
    // 0x00298720: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00298720: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    after_0:
    // 0x00298724: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00298728: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0029872C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00298730: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00298734: jal         0x00299FE4
    // 0x00298738: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_00299FE4(rdram, ctx);
        goto after_1;
    // 0x00298738: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_1:
    // 0x0029873C: lui         $s2, 0x8012
    ctx->r18 = S32(0X8012 << 16);
    // 0x00298740: addiu       $s2, $s2, 0x1420
    ctx->r18 = ADD32(ctx->r18, 0X1420);
    // 0x00298744: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x00298748: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x0029874C: beq         $v0, $s0, L_0029877C
    if (ctx->r2 == ctx->r16) {
        // 0x00298750: nop
    
            goto L_0029877C;
    }
    // 0x00298750: nop

    // 0x00298754: jal         0x0029884C
    // 0x00298758: nop

    func_0029884C(rdram, ctx);
        goto after_2;
    // 0x00298758: nop

    after_2:
    // 0x0029875C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x00298760: addiu       $a1, $a1, 0x13E0
    ctx->r5 = ADD32(ctx->r5, 0X13E0);
    // 0x00298764: jal         0x0029A080
    // 0x00298768: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0029A080(rdram, ctx);
        goto after_3;
    // 0x00298768: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x0029876C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00298770: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00298774: jal         0x0029B6F0
    // 0x00298778: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    osRecvMesg_recomp(rdram, ctx);
        goto after_4;
    // 0x00298778: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_4:
L_0029877C:
    // 0x0029877C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x00298780: addiu       $a1, $a1, 0x13E0
    ctx->r5 = ADD32(ctx->r5, 0X13E0);
    // 0x00298784: jal         0x0029A080
    // 0x00298788: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_0029A080(rdram, ctx);
        goto after_5;
    // 0x00298788: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_5:
    // 0x0029878C: sb          $s0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r16;
    // 0x00298790: jal         0x0029A050
    // 0x00298794: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_0029A050(rdram, ctx);
        goto after_6;
    // 0x00298794: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_6:
    // 0x00298798: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x0029879C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x002987A0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002987A4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002987A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002987AC: jr          $ra
    // 0x002987B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002987B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_004004D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004004D8: addiu       $sp, $sp, -0x1D0
    ctx->r29 = ADD32(ctx->r29, -0X1D0);
    // 0x004004DC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004004E0: lw          $v0, 0x6D1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D1C);
    // 0x004004E4: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x004004E8: addiu       $v1, $v1, -0x4F58
    ctx->r3 = ADD32(ctx->r3, -0X4F58);
    // 0x004004EC: sw          $fp, 0x198($sp)
    MEM_W(0X198, ctx->r29) = ctx->r30;
    // 0x004004F0: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x004004F4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x004004F8: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x004004FC: lw          $v1, -0x5374($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5374);
    // 0x00400500: sw          $ra, 0x19C($sp)
    MEM_W(0X19C, ctx->r29) = ctx->r31;
    // 0x00400504: sw          $s7, 0x194($sp)
    MEM_W(0X194, ctx->r29) = ctx->r23;
    // 0x00400508: sw          $s6, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->r22;
    // 0x0040050C: sw          $s5, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r21;
    // 0x00400510: sw          $s4, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->r20;
    // 0x00400514: sw          $s3, 0x184($sp)
    MEM_W(0X184, ctx->r29) = ctx->r19;
    // 0x00400518: sw          $s2, 0x180($sp)
    MEM_W(0X180, ctx->r29) = ctx->r18;
    // 0x0040051C: sw          $s1, 0x17C($sp)
    MEM_W(0X17C, ctx->r29) = ctx->r17;
    // 0x00400520: sw          $s0, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->r16;
    // 0x00400524: sdc1        $f25, 0x1C8($sp)
    CHECK_FR(ctx, 25);
    SD(ctx->f25.u64, 0X1C8, ctx->r29);
    // 0x00400528: sdc1        $f24, 0x1C0($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X1C0, ctx->r29);
    // 0x0040052C: sdc1        $f23, 0x1B8($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X1B8, ctx->r29);
    // 0x00400530: sdc1        $f22, 0x1B0($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X1B0, ctx->r29);
    // 0x00400534: sdc1        $f21, 0x1A8($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X1A8, ctx->r29);
    // 0x00400538: sdc1        $f20, 0x1A0($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X1A0, ctx->r29);
    // 0x0040053C: sw          $v0, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r2;
    // 0x00400540: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00400544: beq         $v1, $v0, L_00401AE8
    if (ctx->r3 == ctx->r2) {
        // 0x00400548: addu        $fp, $a0, $zero
        ctx->r30 = ADD32(ctx->r4, 0);
            goto L_00401AE8;
    }
    // 0x00400548: addu        $fp, $a0, $zero
    ctx->r30 = ADD32(ctx->r4, 0);
    // 0x0040054C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00400550: lw          $v0, 0x2030($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2030);
    // 0x00400554: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00400558: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040055C: lwc1        $f1, 0x230($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X230);
    // 0x00400560: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00400564: lwc1        $f2, 0x234($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X234);
    // 0x00400568: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040056C: lwc1        $f3, 0x238($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X238);
    // 0x00400570: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00400574: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x00400578: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x0040057C: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x00400580: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x00400584: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00400588: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x0040058C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x00400590: addiu       $a0, $a0, -0x6600
    ctx->r4 = ADD32(ctx->r4, -0X6600);
    // 0x00400594: swc1        $f1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00400598: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    // 0x0040059C: swc1        $f3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x004005A0: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    // 0x004005A4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x004005A8: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x004005AC: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x004005B0: jal         0x00297D50
    // 0x004005B4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_00297D50(rdram, ctx);
        goto after_0;
    // 0x004005B4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x004005B8: lw          $v0, 0xC($fp)
    ctx->r2 = MEM_W(ctx->r30, 0XC);
    // 0x004005BC: beq         $v0, $zero, L_00401AE8
    if (ctx->r2 == 0) {
        // 0x004005C0: nop
    
            goto L_00401AE8;
    }
    // 0x004005C0: nop

    // 0x004005C4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004005C8: lw          $v0, 0x6D54($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D54);
    // 0x004005CC: beq         $v0, $zero, L_00401AE8
    if (ctx->r2 == 0) {
        // 0x004005D0: lui         $t5, 0xDC08
        ctx->r13 = S32(0XDC08 << 16);
            goto L_00401AE8;
    }
    // 0x004005D0: lui         $t5, 0xDC08
    ctx->r13 = S32(0XDC08 << 16);
    // 0x004005D4: ori         $t5, $t5, 0x8
    ctx->r13 = ctx->r13 | 0X8;
    // 0x004005D8: lui         $s3, 0xE300
    ctx->r19 = S32(0XE300 << 16);
    // 0x004005DC: ori         $s3, $s3, 0xA01
    ctx->r19 = ctx->r19 | 0XA01;
    // 0x004005E0: lui         $s4, 0xE200
    ctx->r20 = S32(0XE200 << 16);
    // 0x004005E4: ori         $s4, $s4, 0x1C
    ctx->r20 = ctx->r20 | 0X1C;
    // 0x004005E8: lui         $s0, 0x50
    ctx->r16 = S32(0X50 << 16);
    // 0x004005EC: ori         $s0, $s0, 0x7048
    ctx->r16 = ctx->r16 | 0X7048;
    // 0x004005F0: lui         $t7, 0xFCFF
    ctx->r15 = S32(0XFCFF << 16);
    // 0x004005F4: ori         $t7, $t7, 0xFFFF
    ctx->r15 = ctx->r15 | 0XFFFF;
    // 0x004005F8: lui         $t6, 0xFFFE
    ctx->r14 = S32(0XFFFE << 16);
    // 0x004005FC: ori         $t6, $t6, 0x793C
    ctx->r14 = ctx->r14 | 0X793C;
    // 0x00400600: lui         $s1, 0xD9FF
    ctx->r17 = S32(0XD9FF << 16);
    // 0x00400604: ori         $s1, $s1, 0xFFFF
    ctx->r17 = ctx->r17 | 0XFFFF;
    // 0x00400608: lui         $s2, 0x20
    ctx->r18 = S32(0X20 << 16);
    // 0x0040060C: ori         $s2, $s2, 0x4
    ctx->r18 = ctx->r18 | 0X4;
    // 0x00400610: lui         $s5, 0xDB04
    ctx->r21 = S32(0XDB04 << 16);
    // 0x00400614: ori         $s5, $s5, 0x4
    ctx->r21 = ctx->r21 | 0X4;
    // 0x00400618: lui         $s6, 0xDB04
    ctx->r22 = S32(0XDB04 << 16);
    // 0x0040061C: ori         $s6, $s6, 0xC
    ctx->r22 = ctx->r22 | 0XC;
    // 0x00400620: lui         $s7, 0xDB04
    ctx->r23 = S32(0XDB04 << 16);
    // 0x00400624: ori         $s7, $s7, 0x14
    ctx->r23 = ctx->r23 | 0X14;
    // 0x00400628: lui         $t8, 0xDB04
    ctx->r24 = S32(0XDB04 << 16);
    // 0x0040062C: ori         $t8, $t8, 0x1C
    ctx->r24 = ctx->r24 | 0X1C;
    // 0x00400630: lui         $t9, 0xDA38
    ctx->r25 = S32(0XDA38 << 16);
    // 0x00400634: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x00400638: addiu       $a2, $a2, -0x71DC
    ctx->r6 = ADD32(ctx->r6, -0X71DC);
    // 0x0040063C: ori         $t9, $t9, 0x7
    ctx->r25 = ctx->r25 | 0X7;
    // 0x00400640: lui         $v0, 0xDB06
    ctx->r2 = S32(0XDB06 << 16);
    // 0x00400644: sw          $t8, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->r24;
    // 0x00400648: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x0040064C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00400650: lwc1        $f2, 0x23C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X23C);
    // 0x00400654: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x00400658: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x0040065C: addiu       $a1, $a0, 0x8
    ctx->r5 = ADD32(ctx->r4, 0X8);
    // 0x00400660: sw          $a0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r4;
    // 0x00400664: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00400668: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x0040066C: lui         $v1, 0xDE00
    ctx->r3 = S32(0XDE00 << 16);
    // 0x00400670: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00400674: addiu       $v0, $v0, -0x4F00
    ctx->r2 = ADD32(ctx->r2, -0X4F00);
    // 0x00400678: addiu       $t0, $a0, 0x10
    ctx->r8 = ADD32(ctx->r4, 0X10);
    // 0x0040067C: sw          $a1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r5;
    // 0x00400680: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x00400684: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00400688: addiu       $v0, $v0, -0x4ED0
    ctx->r2 = ADD32(ctx->r2, -0X4ED0);
    // 0x0040068C: addiu       $t4, $a0, 0x18
    ctx->r12 = ADD32(ctx->r4, 0X18);
    // 0x00400690: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x00400694: sw          $t0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r8;
    // 0x00400698: sw          $v1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r3;
    // 0x0040069C: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x004006A0: lui         $v0, 0xED00
    ctx->r2 = S32(0XED00 << 16);
    // 0x004006A4: addiu       $t2, $a0, 0x20
    ctx->r10 = ADD32(ctx->r4, 0X20);
    // 0x004006A8: addiu       $t3, $a0, 0x28
    ctx->r11 = ADD32(ctx->r4, 0X28);
    // 0x004006AC: addiu       $t1, $a0, 0x30
    ctx->r9 = ADD32(ctx->r4, 0X30);
    // 0x004006B0: sw          $t4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r12;
    // 0x004006B4: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
    // 0x004006B8: sw          $t2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r10;
    // 0x004006BC: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x004006C0: lw          $a1, 0x2030($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2030);
    // 0x004006C4: addiu       $a3, $a0, 0x38
    ctx->r7 = ADD32(ctx->r4, 0X38);
    // 0x004006C8: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
    // 0x004006CC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x004006D0: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x004006D4: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x004006D8: mtc1        $a1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r5;
    // 0x004006DC: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x004006E0: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x004006E4: sw          $t1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r9;
    // 0x004006E8: sw          $a3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r7;
    // 0x004006EC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x004006F0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x004006F4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x004006F8: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x004006FC: andi        $a1, $a1, 0xFFF
    ctx->r5 = ctx->r5 & 0XFFF;
    // 0x00400700: trunc.w.s   $f8, $f1
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 1);
    ctx->f8.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00400704: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x00400708: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x0040070C: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x00400710: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00400714: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x00400718: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x0040071C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00400720: sw          $v0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r2;
    // 0x00400724: lui         $v0, 0xFF10
    ctx->r2 = S32(0XFF10 << 16);
    // 0x00400728: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x0040072C: addiu       $v1, $a0, 0x40
    ctx->r3 = ADD32(ctx->r4, 0X40);
    // 0x00400730: sw          $a1, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r5;
    // 0x00400734: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00400738: lw          $v0, 0x7070($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7070);
    // 0x0040073C: addiu       $a1, $a0, 0x48
    ctx->r5 = ADD32(ctx->r4, 0X48);
    // 0x00400740: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
    // 0x00400744: lw          $v0, 0x110($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X110);
    // 0x00400748: addiu       $t0, $a0, 0x60
    ctx->r8 = ADD32(ctx->r4, 0X60);
    // 0x0040074C: sw          $a1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r5;
    // 0x00400750: sw          $v0, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r2;
    // 0x00400754: sw          $t5, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r13;
    // 0x00400758: lw          $t8, 0x168($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X168);
    // 0x0040075C: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x00400760: sw          $t8, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r24;
    // 0x00400764: sw          $v0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r2;
    // 0x00400768: lui         $v0, 0xD900
    ctx->r2 = S32(0XD900 << 16);
    // 0x0040076C: addiu       $t2, $a0, 0x50
    ctx->r10 = ADD32(ctx->r4, 0X50);
    // 0x00400770: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
    // 0x00400774: sw          $s3, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r19;
    // 0x00400778: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x0040077C: sw          $s4, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->r20;
    // 0x00400780: sw          $s0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r16;
    // 0x00400784: sw          $t7, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r15;
    // 0x00400788: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x0040078C: sw          $v0, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->r2;
    // 0x00400790: lui         $v0, 0xD700
    ctx->r2 = S32(0XD700 << 16);
    // 0x00400794: addiu       $t1, $a0, 0x58
    ctx->r9 = ADD32(ctx->r4, 0X58);
    // 0x00400798: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x0040079C: sw          $s1, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->r17;
    // 0x004007A0: sw          $s2, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r18;
    // 0x004007A4: sw          $v0, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->r2;
    // 0x004007A8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x004007AC: addiu       $a3, $a0, 0x68
    ctx->r7 = ADD32(ctx->r4, 0X68);
    // 0x004007B0: addiu       $a1, $a0, 0x70
    ctx->r5 = ADD32(ctx->r4, 0X70);
    // 0x004007B4: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x004007B8: sw          $s5, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r21;
    // 0x004007BC: sw          $v0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r2;
    // 0x004007C0: sw          $s6, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r22;
    // 0x004007C4: sw          $v0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r2;
    // 0x004007C8: ori         $v0, $zero, 0xFFFA
    ctx->r2 = 0 | 0XFFFA;
    // 0x004007CC: sw          $s7, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->r23;
    // 0x004007D0: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x004007D4: lw          $t8, 0x170($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X170);
    // 0x004007D8: addiu       $v1, $a0, 0x78
    ctx->r3 = ADD32(ctx->r4, 0X78);
    // 0x004007DC: sw          $t8, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->r24;
    // 0x004007E0: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x004007E4: addiu       $v0, $a0, 0x80
    ctx->r2 = ADD32(ctx->r4, 0X80);
    // 0x004007E8: sw          $t9, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r25;
    // 0x004007EC: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x004007F0: addiu       $t8, $t8, -0x6600
    ctx->r24 = ADD32(ctx->r24, -0X6600);
    // 0x004007F4: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x004007F8: lwc1        $f21, 0x14($fp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r30, 0X14);
    // 0x004007FC: lwc1        $f20, 0x1C($fp)
    ctx->f20.u32l = MEM_W(ctx->r30, 0X1C);
    // 0x00400800: lwc1        $f12, 0x10($fp)
    ctx->f12.u32l = MEM_W(ctx->r30, 0X10);
    // 0x00400804: addiu       $a0, $a0, 0x88
    ctx->r4 = ADD32(ctx->r4, 0X88);
    // 0x00400808: sw          $t2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r10;
    // 0x0040080C: sw          $t1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r9;
    // 0x00400810: sw          $t0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r8;
    // 0x00400814: sw          $a3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r7;
    // 0x00400818: sw          $a1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r5;
    // 0x0040081C: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
    // 0x00400820: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x00400824: jal         0x002982F0
    // 0x00400828: sw          $a0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r4;
    func_002982F0(rdram, ctx);
        goto after_1;
    // 0x00400828: sw          $a0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r4;
    after_1:
    // 0x0040082C: lwc1        $f12, 0x10($fp)
    ctx->f12.u32l = MEM_W(ctx->r30, 0X10);
    // 0x00400830: jal         0x002974C0
    // 0x00400834: mov.s       $f25, $f0
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 0);
    ctx->f25.fl = ctx->f0.fl;
    func_002974C0(rdram, ctx);
        goto after_2;
    // 0x00400834: mov.s       $f25, $f0
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 0);
    ctx->f25.fl = ctx->f0.fl;
    after_2:
    // 0x00400838: lwc1        $f2, 0x28($fp)
    ctx->f2.u32l = MEM_W(ctx->r30, 0X28);
    // 0x0040083C: mul.s       $f3, $f2, $f25
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f3.fl = MUL_S(ctx->f2.fl, ctx->f25.fl);
    // 0x00400840: lwc1        $f1, 0x20($fp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r30, 0X20);
    // 0x00400844: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x00400848: mul.s       $f0, $f1, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f24.fl);
    // 0x0040084C: nop

    // 0x00400850: mul.s       $f2, $f2, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f24.fl);
    // 0x00400854: nop

    // 0x00400858: mul.s       $f1, $f1, $f25
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f25.fl);
    // 0x0040085C: sub.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f3.fl - ctx->f0.fl;
    // 0x00400860: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x00400864: add.s       $f21, $f21, $f3
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f21.fl = ctx->f21.fl + ctx->f3.fl;
    // 0x00400868: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040086C: lwc1        $f22, 0x240($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X240);
    // 0x00400870: add.s       $f20, $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f2.fl;
    // 0x00400874: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00400878: lwc1        $f1, 0x244($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X244);
    // 0x0040087C: c.lt.s      $f1, $f21
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f1.fl < ctx->f21.fl;
    // 0x00400880: nop

    // 0x00400884: bc1t        L_004008A4
    if (c1cs) {
        // 0x00400888: mov.s       $f23, $f22
        CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 22);
    ctx->f23.fl = ctx->f22.fl;
            goto L_004008A4;
    }
    // 0x00400888: mov.s       $f23, $f22
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 22);
    ctx->f23.fl = ctx->f22.fl;
    // 0x0040088C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00400890: lwc1        $f0, 0x248($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X248);
    // 0x00400894: c.lt.s      $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f21.fl < ctx->f0.fl;
    // 0x00400898: nop

    // 0x0040089C: bc1t        L_004008C0
    if (c1cs) {
        // 0x004008A0: nop
    
            goto L_004008C0;
    }
    // 0x004008A0: nop

L_004008A4:
    // 0x004008A4: mov.s       $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    ctx->f0.fl = ctx->f21.fl;
    // 0x004008A8: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x004008AC: nop

    // 0x004008B0: bc1tl       L_004008B8
    if (c1cs) {
        // 0x004008B4: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_004008B8;
    }
    goto skip_0;
    // 0x004008B4: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_0:
L_004008B8:
    // 0x004008B8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004008BC: lwc1        $f1, 0x24C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X24C);
L_004008C0:
    // 0x004008C0: c.lt.s      $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f1.fl < ctx->f20.fl;
    // 0x004008C4: nop

    // 0x004008C8: bc1t        L_004008E8
    if (c1cs) {
        // 0x004008CC: mov.s       $f21, $f0
        CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
            goto L_004008E8;
    }
    // 0x004008CC: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    // 0x004008D0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004008D4: lwc1        $f0, 0x250($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X250);
    // 0x004008D8: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x004008DC: nop

    // 0x004008E0: bc1t        L_00400900
    if (c1cs) {
        // 0x004008E4: addiu       $s0, $sp, 0x30
        ctx->r16 = ADD32(ctx->r29, 0X30);
            goto L_00400900;
    }
    // 0x004008E4: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
L_004008E8:
    // 0x004008E8: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
    // 0x004008EC: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x004008F0: nop

    // 0x004008F4: bc1tl       L_004008FC
    if (c1cs) {
        // 0x004008F8: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_004008FC;
    }
    goto skip_1;
    // 0x004008F8: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_1:
L_004008FC:
    // 0x004008FC: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
L_00400900:
    // 0x00400900: neg.s       $f21, $f21
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f21.fl); 
    ctx->f21.fl = -ctx->f21.fl;
    // 0x00400904: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x00400908: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x0040090C: mfc1        $a1, $f21
    ctx->r5 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x00400910: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x00400914: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x00400918: jal         0x0020FC24
    // 0x0040091C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020FC24(rdram, ctx);
        goto after_3;
    // 0x0040091C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x00400920: mfc1        $a1, $f23
    ctx->r5 = (int32_t)ctx->f_odd[(23 - 1) * 2];
    // 0x00400924: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x00400928: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x0040092C: jal         0x00210478
    // 0x00400930: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00210478(rdram, ctx);
        goto after_4;
    // 0x00400930: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x00400934: lwc1        $f1, 0x10($fp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r30, 0X10);
    // 0x00400938: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040093C: lwc1        $f0, 0x254($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X254);
    // 0x00400940: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00400944: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00400948: addiu       $s3, $sp, 0x130
    ctx->r19 = ADD32(ctx->r29, 0X130);
    // 0x0040094C: addiu       $s2, $sp, 0x100
    ctx->r18 = ADD32(ctx->r29, 0X100);
    // 0x00400950: mfc1        $a1, $f1
    ctx->r5 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x00400954: jal         0x00210B38
    // 0x00400958: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00210B38(rdram, ctx);
        goto after_5;
    // 0x00400958: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x0040095C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00400960: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x00400964: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x00400968: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040096C: lwc1        $f1, 0x258($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X258);
    // 0x00400970: srl         $v1, $v0, 31
    ctx->r3 = S32(U32(ctx->r2) >> 31);
    // 0x00400974: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00400978: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x0040097C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00400980: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00400984: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00400988: lw          $v0, 0x2030($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2030);
    // 0x0040098C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00400990: srl         $v1, $v0, 31
    ctx->r3 = S32(U32(ctx->r2) >> 31);
    // 0x00400994: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00400998: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x0040099C: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x004009A0: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x004009A4: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x004009A8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x004009AC: jal         0x00210318
    // 0x004009B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00210318(rdram, ctx);
        goto after_6;
    // 0x004009B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x004009B4: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    // 0x004009B8: jal         0x0020C208
    // 0x004009BC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0020C208(rdram, ctx);
        goto after_7;
    // 0x004009BC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_7:
    // 0x004009C0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004009C4: lwc1        $f0, 0x2030($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2030);
    // 0x004009C8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x004009CC: swc1        $f0, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f0.u32l;
    // 0x004009D0: swc1        $f0, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f0.u32l;
    // 0x004009D4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004009D8: lwc1        $f0, 0x2034($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x004009DC: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x004009E0: swc1        $f20, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f20.u32l;
    // 0x004009E4: swc1        $f20, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f20.u32l;
    // 0x004009E8: swc1        $f20, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f20.u32l;
    // 0x004009EC: swc1        $f20, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f20.u32l;
    // 0x004009F0: swc1        $f20, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f20.u32l;
    // 0x004009F4: swc1        $f0, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f0.u32l;
    // 0x004009F8: swc1        $f20, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f20.u32l;
    // 0x004009FC: swc1        $f20, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f20.u32l;
    // 0x00400A00: swc1        $f0, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f0.u32l;
    // 0x00400A04: swc1        $f20, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f20.u32l;
L_00400A08:
    // 0x00400A08: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    // 0x00400A0C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00400A10: jal         0x0020F85C
    // 0x00400A14: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_0020F85C(rdram, ctx);
        goto after_8;
    // 0x00400A14: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_8:
    // 0x00400A18: addiu       $s3, $s3, 0xC
    ctx->r19 = ADD32(ctx->r19, 0XC);
    // 0x00400A1C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00400A20: slti        $v0, $s1, 0x4
    ctx->r2 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x00400A24: bne         $v0, $zero, L_00400A08
    if (ctx->r2 != 0) {
        // 0x00400A28: addiu       $s2, $s2, 0xC
        ctx->r18 = ADD32(ctx->r18, 0XC);
            goto L_00400A08;
    }
    // 0x00400A28: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
    // 0x00400A2C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x00400A30: lwc1        $f0, 0x130($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X130);
    // 0x00400A34: lwc1        $f1, 0x134($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X134);
    // 0x00400A38: addiu       $v1, $sp, 0x13C
    ctx->r3 = ADD32(ctx->r29, 0X13C);
    // 0x00400A3C: swc1        $f0, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f0.u32l;
    // 0x00400A40: swc1        $f0, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f0.u32l;
    // 0x00400A44: swc1        $f1, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00400A48: swc1        $f1, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
L_00400A4C:
    // 0x00400A4C: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x00400A50: lwc1        $f1, 0xF0($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0XF0);
    // 0x00400A54: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00400A58: nop

    // 0x00400A5C: bc1fl       L_00400A64
    if (!c1cs) {
        // 0x00400A60: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_00400A64;
    }
    goto skip_2;
    // 0x00400A60: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_2:
L_00400A64:
    // 0x00400A64: swc1        $f0, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f0.u32l;
    // 0x00400A68: lwc1        $f0, 0x4($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X4);
    // 0x00400A6C: lwc1        $f1, 0xF4($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0XF4);
    // 0x00400A70: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00400A74: nop

    // 0x00400A78: bc1fl       L_00400A80
    if (!c1cs) {
        // 0x00400A7C: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_00400A80;
    }
    goto skip_3;
    // 0x00400A7C: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_3:
L_00400A80:
    // 0x00400A80: swc1        $f0, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f0.u32l;
    // 0x00400A84: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x00400A88: lwc1        $f1, 0xF8($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0XF8);
    // 0x00400A8C: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00400A90: nop

    // 0x00400A94: bc1fl       L_00400A9C
    if (!c1cs) {
        // 0x00400A98: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_00400A9C;
    }
    goto skip_4;
    // 0x00400A98: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_4:
L_00400A9C:
    // 0x00400A9C: swc1        $f0, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f0.u32l;
    // 0x00400AA0: lwc1        $f0, 0x4($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X4);
    // 0x00400AA4: lwc1        $f1, 0xFC($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0XFC);
    // 0x00400AA8: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00400AAC: nop

    // 0x00400AB0: bc1fl       L_00400AB8
    if (!c1cs) {
        // 0x00400AB4: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_00400AB8;
    }
    goto skip_5;
    // 0x00400AB4: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_5:
L_00400AB8:
    // 0x00400AB8: swc1        $f0, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f0.u32l;
    // 0x00400ABC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00400AC0: slti        $v0, $s1, 0x4
    ctx->r2 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x00400AC4: bne         $v0, $zero, L_00400A4C
    if (ctx->r2 != 0) {
        // 0x00400AC8: addiu       $v1, $v1, 0xC
        ctx->r3 = ADD32(ctx->r3, 0XC);
            goto L_00400A4C;
    }
    // 0x00400AC8: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
    // 0x00400ACC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00400AD0: lw          $a1, 0x6D1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6D1C);
    // 0x00400AD4: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x00400AD8: addiu       $s0, $s0, -0x6F00
    ctx->r16 = ADD32(ctx->r16, -0X6F00);
    // 0x00400ADC: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x00400AE0: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    // 0x00400AE4: jal         0x0020D274
    // 0x00400AE8: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    func_0020D274(rdram, ctx);
        goto after_9;
    // 0x00400AE8: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    after_9:
    // 0x00400AEC: lui         $v0, 0xDA38
    ctx->r2 = S32(0XDA38 << 16);
    // 0x00400AF0: ori         $v0, $v0, 0x3
    ctx->r2 = ctx->r2 | 0X3;
    // 0x00400AF4: lui         $a3, 0x800E
    ctx->r7 = S32(0X800E << 16);
    // 0x00400AF8: addiu       $a3, $a3, -0x71DC
    ctx->r7 = ADD32(ctx->r7, -0X71DC);
    // 0x00400AFC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x00400B00: lw          $a2, 0x0($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X0);
    // 0x00400B04: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00400B08: lw          $v1, 0x6D1C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6D1C);
    // 0x00400B0C: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x00400B10: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x00400B14: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00400B18: sll         $v0, $v1, 6
    ctx->r2 = S32(ctx->r3 << 6);
    // 0x00400B1C: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x00400B20: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x00400B24: addiu       $s0, $s0, 0x7078
    ctx->r16 = ADD32(ctx->r16, 0X7078);
    // 0x00400B28: sll         $v1, $v1, 13
    ctx->r3 = S32(ctx->r3 << 13);
    // 0x00400B2C: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x00400B30: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00400B34: addiu       $v0, $v0, -0x65C0
    ctx->r2 = ADD32(ctx->r2, -0X65C0);
    // 0x00400B38: lw          $a0, 0x58($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X58);
    // 0x00400B3C: addu        $s2, $v1, $v0
    ctx->r18 = ADD32(ctx->r3, ctx->r2);
    // 0x00400B40: jal         0x002017D4
    // 0x00400B44: sw          $a2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r6;
    func_002017D4(rdram, ctx);
        goto after_10;
    // 0x00400B44: sw          $a2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r6;
    after_10:
    // 0x00400B48: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x00400B4C: lw          $a0, 0x58($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X58);
    // 0x00400B50: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x00400B54: jal         0x002017D4
    // 0x00400B58: sw          $v0, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->r2;
    func_002017D4(rdram, ctx);
        goto after_11;
    // 0x00400B58: sw          $v0, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->r2;
    after_11:
    // 0x00400B5C: lw          $a0, 0x58($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X58);
    // 0x00400B60: addiu       $s0, $v0, 0x8
    ctx->r16 = ADD32(ctx->r2, 0X8);
    // 0x00400B64: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x00400B68: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00400B6C: jal         0x002017D4
    // 0x00400B70: sw          $v0, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->r2;
    func_002017D4(rdram, ctx);
        goto after_12;
    // 0x00400B70: sw          $v0, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->r2;
    after_12:
    // 0x00400B74: addu        $t6, $zero, $zero
    ctx->r14 = ADD32(0, 0);
    // 0x00400B78: addu        $s5, $t6, $zero
    ctx->r21 = ADD32(ctx->r14, 0);
    // 0x00400B7C: addu        $s7, $t6, $zero
    ctx->r23 = ADD32(ctx->r14, 0);
    // 0x00400B80: addu        $t1, $t6, $zero
    ctx->r9 = ADD32(ctx->r14, 0);
    // 0x00400B84: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x00400B88: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00400B8C: lw          $v1, -0x5528($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5528);
    // 0x00400B90: lw          $t8, 0x164($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X164);
    // 0x00400B94: andi        $v1, $v1, 0x2000
    ctx->r3 = ctx->r3 & 0X2000;
    // 0x00400B98: sltu        $v1, $t6, $v1
    ctx->r3 = ctx->r14 < ctx->r3 ? 1 : 0;
    // 0x00400B9C: blez        $t8, L_004012C0
    if (SIGNED(ctx->r24) <= 0) {
        // 0x00400BA0: sw          $v1, 0x170($sp)
        MEM_W(0X170, ctx->r29) = ctx->r3;
            goto L_004012C0;
    }
    // 0x00400BA0: sw          $v1, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->r3;
    // 0x00400BA4: addiu       $s6, $sp, 0x20
    ctx->r22 = ADD32(ctx->r29, 0X20);
    // 0x00400BA8: mtc1        $zero, $f7
    ctx->f_odd[(7 - 1) * 2] = 0;
    // 0x00400BAC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00400BB0: lwc1        $f6, 0x25C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X25C);
L_00400BB4:
    // 0x00400BB4: lwc1        $f1, 0x8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X8);
    // 0x00400BB8: lwc1        $f0, 0xF0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x00400BBC: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00400BC0: nop

    // 0x00400BC4: bc1f        L_004012A0
    if (!c1cs) {
        // 0x00400BC8: nop
    
            goto L_004012A0;
    }
    // 0x00400BC8: nop

    // 0x00400BCC: lwc1        $f1, 0x0($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X0);
    // 0x00400BD0: lwc1        $f0, 0xF8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x00400BD4: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00400BD8: nop

    // 0x00400BDC: bc1f        L_004012A0
    if (!c1cs) {
        // 0x00400BE0: nop
    
            goto L_004012A0;
    }
    // 0x00400BE0: nop

    // 0x00400BE4: lwc1        $f1, 0xC($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XC);
    // 0x00400BE8: lwc1        $f0, 0xF4($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x00400BEC: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00400BF0: nop

    // 0x00400BF4: bc1f        L_004012A0
    if (!c1cs) {
        // 0x00400BF8: nop
    
            goto L_004012A0;
    }
    // 0x00400BF8: nop

    // 0x00400BFC: lwc1        $f1, 0x4($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X4);
    // 0x00400C00: lwc1        $f0, 0xFC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x00400C04: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00400C08: nop

    // 0x00400C0C: bc1f        L_004012A0
    if (!c1cs) {
        // 0x00400C10: nop
    
            goto L_004012A0;
    }
    // 0x00400C10: nop

    // 0x00400C14: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x00400C18: beq         $v0, $zero, L_004012A8
    if (ctx->r2 == 0) {
        // 0x00400C1C: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_004012A8;
    }
    // 0x00400C1C: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00400C20: lw          $t8, 0x160($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X160);
    // 0x00400C24: sll         $v0, $s5, 5
    ctx->r2 = S32(ctx->r21 << 5);
    // 0x00400C28: addu        $t4, $v0, $t8
    ctx->r12 = ADD32(ctx->r2, ctx->r24);
L_00400C2C:
    // 0x00400C2C: lhu         $v0, 0x0($t4)
    ctx->r2 = MEM_HU(ctx->r12, 0X0);
    // 0x00400C30: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x00400C34: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00400C38: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x00400C3C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00400C40: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00400C44: addu        $s4, $t9, $v1
    ctx->r20 = ADD32(ctx->r25, ctx->r3);
    // 0x00400C48: lw          $v0, 0x44($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X44);
    // 0x00400C4C: andi        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 & 0X200;
    // 0x00400C50: bnel        $v0, $zero, L_00401284
    if (ctx->r2 != 0) {
        // 0x00400C54: addiu       $t4, $t4, 0x20
        ctx->r12 = ADD32(ctx->r12, 0X20);
            goto L_00401284;
    }
    goto skip_6;
    // 0x00400C54: addiu       $t4, $t4, 0x20
    ctx->r12 = ADD32(ctx->r12, 0X20);
    skip_6:
    // 0x00400C58: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00400C5C: addu        $v1, $s6, $zero
    ctx->r3 = ADD32(ctx->r22, 0);
    // 0x00400C60: addu        $a0, $t4, $zero
    ctx->r4 = ADD32(ctx->r12, 0);
L_00400C64:
    // 0x00400C64: lw          $t0, 0x4($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X4);
    // 0x00400C68: lwc1        $f0, 0xF0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x00400C6C: lwc1        $f1, 0x0($t0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r8, 0X0);
    // 0x00400C70: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00400C74: nop

    // 0x00400C78: bc1f        L_00400C88
    if (!c1cs) {
        // 0x00400C7C: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_00400C88;
    }
    // 0x00400C7C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x00400C80: j           L_00400CA8
    // 0x00400C84: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
        goto L_00400CA8;
    // 0x00400C84: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
L_00400C88:
    // 0x00400C88: lwc1        $f0, 0xF8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x00400C8C: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00400C90: nop

    // 0x00400C94: bc1f        L_00400CA4
    if (!c1cs) {
        // 0x00400C98: addiu       $t8, $zero, 0x4
        ctx->r24 = ADD32(0, 0X4);
            goto L_00400CA4;
    }
    // 0x00400C98: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x00400C9C: j           L_00400CA8
    // 0x00400CA0: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
        goto L_00400CA8;
    // 0x00400CA0: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
L_00400CA4:
    // 0x00400CA4: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
L_00400CA8:
    // 0x00400CA8: lwc1        $f1, 0x8($t0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r8, 0X8);
    // 0x00400CAC: lwc1        $f0, 0xF4($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x00400CB0: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00400CB4: nop

    // 0x00400CB8: bc1f        L_00400CCC
    if (!c1cs) {
        // 0x00400CBC: nop
    
            goto L_00400CCC;
    }
    // 0x00400CBC: nop

    // 0x00400CC0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00400CC4: j           L_00400CE8
    // 0x00400CC8: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
        goto L_00400CE8;
    // 0x00400CC8: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
L_00400CCC:
    // 0x00400CCC: lwc1        $f0, 0xFC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x00400CD0: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00400CD4: nop

    // 0x00400CD8: bc1fl       L_00400CF0
    if (!c1cs) {
        // 0x00400CDC: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_00400CF0;
    }
    goto skip_7;
    // 0x00400CDC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    skip_7:
    // 0x00400CE0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00400CE4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
L_00400CE8:
    // 0x00400CE8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00400CEC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_00400CF0:
    // 0x00400CF0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00400CF4: slti        $v0, $a1, 0x3
    ctx->r2 = SIGNED(ctx->r5) < 0X3 ? 1 : 0;
    // 0x00400CF8: bne         $v0, $zero, L_00400C64
    if (ctx->r2 != 0) {
        // 0x00400CFC: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_00400C64;
    }
    // 0x00400CFC: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x00400D00: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x00400D04: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x00400D08: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x00400D0C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00400D10: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x00400D14: bnel        $v0, $zero, L_00401284
    if (ctx->r2 != 0) {
        // 0x00400D18: addiu       $t4, $t4, 0x20
        ctx->r12 = ADD32(ctx->r12, 0X20);
            goto L_00401284;
    }
    goto skip_8;
    // 0x00400D18: addiu       $t4, $t4, 0x20
    ctx->r12 = ADD32(ctx->r12, 0X20);
    skip_8:
    // 0x00400D1C: lw          $t8, 0x170($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X170);
    // 0x00400D20: bne         $t8, $zero, L_00400D38
    if (ctx->r24 != 0) {
        // 0x00400D24: addu        $t5, $zero, $zero
        ctx->r13 = ADD32(0, 0);
            goto L_00400D38;
    }
    // 0x00400D24: addu        $t5, $zero, $zero
    ctx->r13 = ADD32(0, 0);
    // 0x00400D28: lhu         $v0, 0x2($t4)
    ctx->r2 = MEM_HU(ctx->r12, 0X2);
    // 0x00400D2C: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x00400D30: beql        $v0, $zero, L_00401284
    if (ctx->r2 == 0) {
        // 0x00400D34: addiu       $t4, $t4, 0x20
        ctx->r12 = ADD32(ctx->r12, 0X20);
            goto L_00401284;
    }
    goto skip_9;
    // 0x00400D34: addiu       $t4, $t4, 0x20
    ctx->r12 = ADD32(ctx->r12, 0X20);
    skip_9:
L_00400D38:
    // 0x00400D38: addu        $t7, $t4, $zero
    ctx->r15 = ADD32(ctx->r12, 0);
    // 0x00400D3C: addu        $s3, $t5, $zero
    ctx->r19 = ADD32(ctx->r13, 0);
    // 0x00400D40: sll         $v0, $t1, 4
    ctx->r2 = S32(ctx->r9 << 4);
    // 0x00400D44: addu        $a1, $v0, $s2
    ctx->r5 = ADD32(ctx->r2, ctx->r18);
    // 0x00400D48: sll         $v1, $t6, 1
    ctx->r3 = S32(ctx->r14 << 1);
    // 0x00400D4C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00400D50: addiu       $v0, $v0, -0x6E00
    ctx->r2 = ADD32(ctx->r2, -0X6E00);
    // 0x00400D54: addu        $t2, $v1, $v0
    ctx->r10 = ADD32(ctx->r3, ctx->r2);
L_00400D58:
    // 0x00400D58: lw          $v0, 0x10($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X10);
    // 0x00400D5C: bne         $v0, $zero, L_00400D6C
    if (ctx->r2 != 0) {
        // 0x00400D60: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00400D6C;
    }
    // 0x00400D60: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00400D64: j           L_00400D80
    // 0x00400D68: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_00400D80;
    // 0x00400D68: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_00400D6C:
    // 0x00400D6C: lhu         $v1, 0x0($t4)
    ctx->r3 = MEM_HU(ctx->r12, 0X0);
    // 0x00400D70: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x00400D74: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x00400D78: bnel        $v1, $zero, L_00400D80
    if (ctx->r3 != 0) {
        // 0x00400D7C: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_00400D80;
    }
    goto skip_10;
    // 0x00400D7C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_10:
L_00400D80:
    // 0x00400D80: beql        $a0, $zero, L_00401270
    if (ctx->r4 == 0) {
        // 0x00400D84: addiu       $t7, $t7, 0x4
        ctx->r15 = ADD32(ctx->r15, 0X4);
            goto L_00401270;
    }
    goto skip_11;
    // 0x00400D84: addiu       $t7, $t7, 0x4
    ctx->r15 = ADD32(ctx->r15, 0X4);
    skip_11:
    // 0x00400D88: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00400D8C: beq         $t5, $v0, L_00400D98
    if (ctx->r13 == ctx->r2) {
        // 0x00400D90: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00400D98;
    }
    // 0x00400D90: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00400D94: addiu       $a0, $t5, 0x1
    ctx->r4 = ADD32(ctx->r13, 0X1);
L_00400D98:
    // 0x00400D98: addu        $v1, $s6, $s3
    ctx->r3 = ADD32(ctx->r22, ctx->r19);
    // 0x00400D9C: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x00400DA0: addu        $v0, $s6, $a0
    ctx->r2 = ADD32(ctx->r22, ctx->r4);
    // 0x00400DA4: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x00400DA8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00400DAC: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x00400DB0: bnel        $v1, $zero, L_00401270
    if (ctx->r3 != 0) {
        // 0x00400DB4: addiu       $t7, $t7, 0x4
        ctx->r15 = ADD32(ctx->r15, 0X4);
            goto L_00401270;
    }
    goto skip_12;
    // 0x00400DB4: addiu       $t7, $t7, 0x4
    ctx->r15 = ADD32(ctx->r15, 0X4);
    skip_12:
    // 0x00400DB8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00400DBC: addiu       $v1, $sp, 0x130
    ctx->r3 = ADD32(ctx->r29, 0X130);
    // 0x00400DC0: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    // 0x00400DC4: addu        $v0, $t4, $a0
    ctx->r2 = ADD32(ctx->r12, ctx->r4);
    // 0x00400DC8: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x00400DCC: lw          $t3, 0x4($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X4);
L_00400DD0:
    // 0x00400DD0: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x00400DD4: beq         $a2, $t8, L_00400DE0
    if (ctx->r6 == ctx->r24) {
        // 0x00400DD8: addiu       $v0, $sp, 0x130
        ctx->r2 = ADD32(ctx->r29, 0X130);
            goto L_00400DE0;
    }
    // 0x00400DD8: addiu       $v0, $sp, 0x130
    ctx->r2 = ADD32(ctx->r29, 0X130);
    // 0x00400DDC: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
L_00400DE0:
    // 0x00400DE0: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x00400DE4: lwc1        $f3, 0x4($v1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r3, 0X4);
    // 0x00400DE8: lwc1        $f2, 0x0($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X0);
    // 0x00400DEC: sub.s       $f5, $f0, $f3
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f5.fl = ctx->f0.fl - ctx->f3.fl;
    // 0x00400DF0: lwc1        $f1, 0x0($t0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r8, 0X0);
    // 0x00400DF4: sub.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f2.fl;
    // 0x00400DF8: mul.s       $f1, $f5, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f5.fl, ctx->f1.fl);
    // 0x00400DFC: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x00400E00: sub.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x00400E04: lwc1        $f0, 0x8($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X8);
    // 0x00400E08: sub.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f3.fl;
    // 0x00400E0C: mul.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x00400E10: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00400E14: c.lt.s      $f7, $f1
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f7.fl < ctx->f1.fl;
    // 0x00400E18: nop

    // 0x00400E1C: bc1f        L_00400E50
    if (!c1cs) {
        // 0x00400E20: addiu       $v1, $v1, 0xC
        ctx->r3 = ADD32(ctx->r3, 0XC);
            goto L_00400E50;
    }
    // 0x00400E20: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
    // 0x00400E24: lwc1        $f1, 0x0($t3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r11, 0X0);
    // 0x00400E28: sub.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f2.fl;
    // 0x00400E2C: mul.s       $f1, $f5, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f5.fl, ctx->f1.fl);
    // 0x00400E30: lwc1        $f0, 0x8($t3)
    ctx->f0.u32l = MEM_W(ctx->r11, 0X8);
    // 0x00400E34: sub.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f3.fl;
    // 0x00400E38: mul.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x00400E3C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00400E40: c.lt.s      $f7, $f1
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f7.fl < ctx->f1.fl;
    // 0x00400E44: nop

    // 0x00400E48: bc1t        L_00400E64
    if (c1cs) {
        // 0x00400E4C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00400E64;
    }
    // 0x00400E4C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00400E50:
    // 0x00400E50: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x00400E54: slti        $v0, $a2, 0x4
    ctx->r2 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    // 0x00400E58: bne         $v0, $zero, L_00400DD0
    if (ctx->r2 != 0) {
        // 0x00400E5C: addiu       $a3, $a3, 0xC
        ctx->r7 = ADD32(ctx->r7, 0XC);
            goto L_00400DD0;
    }
    // 0x00400E5C: addiu       $a3, $a3, 0xC
    ctx->r7 = ADD32(ctx->r7, 0XC);
    // 0x00400E60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00400E64:
    // 0x00400E64: beql        $v0, $zero, L_00401270
    if (ctx->r2 == 0) {
        // 0x00400E68: addiu       $t7, $t7, 0x4
        ctx->r15 = ADD32(ctx->r15, 0X4);
            goto L_00401270;
    }
    goto skip_13;
    // 0x00400E68: addiu       $t7, $t7, 0x4
    ctx->r15 = ADD32(ctx->r15, 0X4);
    skip_13:
    // 0x00400E6C: beq         $t1, $zero, L_00400EB4
    if (ctx->r9 == 0) {
        // 0x00400E70: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_00400EB4;
    }
    // 0x00400E70: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x00400E74: lwc1        $f0, 0x0($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X0);
    // 0x00400E78: lh          $v1, -0x10($a1)
    ctx->r3 = MEM_H(ctx->r5, -0X10);
    // 0x00400E7C: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00400E80: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x00400E84: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x00400E88: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x00400E8C: bne         $v1, $v0, L_00400EB4
    if (ctx->r3 != ctx->r2) {
        // 0x00400E90: addiu       $a2, $a1, -0x10
        ctx->r6 = ADD32(ctx->r5, -0X10);
            goto L_00400EB4;
    }
    // 0x00400E90: addiu       $a2, $a1, -0x10
    ctx->r6 = ADD32(ctx->r5, -0X10);
    // 0x00400E94: lwc1        $f0, 0x8($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X8);
    // 0x00400E98: lh          $v1, 0x2($a2)
    ctx->r3 = MEM_H(ctx->r6, 0X2);
    // 0x00400E9C: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00400EA0: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x00400EA4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x00400EA8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x00400EAC: xor         $v1, $v1, $v0
    ctx->r3 = ctx->r3 ^ ctx->r2;
    // 0x00400EB0: sltu        $a0, $zero, $v1
    ctx->r4 = 0 < ctx->r3 ? 1 : 0;
L_00400EB4:
    // 0x00400EB4: beq         $a0, $zero, L_0040108C
    if (ctx->r4 == 0) {
        // 0x00400EB8: addiu       $v0, $t1, -0x1
        ctx->r2 = ADD32(ctx->r9, -0X1);
            goto L_0040108C;
    }
    // 0x00400EB8: addiu       $v0, $t1, -0x1
    ctx->r2 = ADD32(ctx->r9, -0X1);
    // 0x00400EBC: sh          $t1, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r9;
    // 0x00400EC0: lwc1        $f0, 0x0($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X0);
    // 0x00400EC4: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00400EC8: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x00400ECC: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x00400ED0: lwc1        $f0, 0x8($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X8);
    // 0x00400ED4: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00400ED8: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x00400EDC: sh          $v0, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r2;
    // 0x00400EE0: lwc1        $f1, 0x4($t0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r8, 0X4);
    // 0x00400EE4: lwc1        $f0, 0x18($fp)
    ctx->f0.u32l = MEM_W(ctx->r30, 0X18);
    // 0x00400EE8: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00400EEC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00400EF0: lwc1        $f0, 0x260($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X260);
    // 0x00400EF4: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00400EF8: addiu       $t2, $t2, 0x2
    ctx->r10 = ADD32(ctx->r10, 0X2);
    // 0x00400EFC: addiu       $t6, $t6, 0x1
    ctx->r14 = ADD32(ctx->r14, 0X1);
    // 0x00400F00: trunc.w.s   $f8, $f1
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 1);
    ctx->f8.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00400F04: mfc1        $a0, $f8
    ctx->r4 = (int32_t)ctx->f8.u32l;
    // 0x00400F08: addiu       $v1, $a0, 0xC8
    ctx->r3 = ADD32(ctx->r4, 0XC8);
    // 0x00400F0C: slti        $v0, $v1, 0x96
    ctx->r2 = SIGNED(ctx->r3) < 0X96 ? 1 : 0;
    // 0x00400F10: beq         $v0, $zero, L_00400F20
    if (ctx->r2 == 0) {
        // 0x00400F14: addiu       $a2, $zero, 0xFF
        ctx->r6 = ADD32(0, 0XFF);
            goto L_00400F20;
    }
    // 0x00400F14: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x00400F18: j           L_00400F2C
    // 0x00400F1C: addiu       $v1, $zero, 0x96
    ctx->r3 = ADD32(0, 0X96);
        goto L_00400F2C;
    // 0x00400F1C: addiu       $v1, $zero, 0x96
    ctx->r3 = ADD32(0, 0X96);
L_00400F20:
    // 0x00400F20: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x00400F24: beql        $v0, $zero, L_00400F2C
    if (ctx->r2 == 0) {
        // 0x00400F28: addiu       $v1, $zero, 0xFF
        ctx->r3 = ADD32(0, 0XFF);
            goto L_00400F2C;
    }
    goto skip_14;
    // 0x00400F28: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    skip_14:
L_00400F2C:
    // 0x00400F2C: slti        $v0, $a0, 0x33
    ctx->r2 = SIGNED(ctx->r4) < 0X33 ? 1 : 0;
    // 0x00400F30: bne         $v0, $zero, L_00400F44
    if (ctx->r2 != 0) {
        // 0x00400F34: slti        $v0, $a0, -0x32
        ctx->r2 = SIGNED(ctx->r4) < -0X32 ? 1 : 0;
            goto L_00400F44;
    }
    // 0x00400F34: slti        $v0, $a0, -0x32
    ctx->r2 = SIGNED(ctx->r4) < -0X32 ? 1 : 0;
    // 0x00400F38: addiu       $v0, $a2, 0x32
    ctx->r2 = ADD32(ctx->r6, 0X32);
    // 0x00400F3C: j           L_00400F50
    // 0x00400F40: subu        $a2, $v0, $a0
    ctx->r6 = SUB32(ctx->r2, ctx->r4);
        goto L_00400F50;
    // 0x00400F40: subu        $a2, $v0, $a0
    ctx->r6 = SUB32(ctx->r2, ctx->r4);
L_00400F44:
    // 0x00400F44: beq         $v0, $zero, L_00400F5C
    if (ctx->r2 == 0) {
        // 0x00400F48: addiu       $v0, $a2, -0x32
        ctx->r2 = ADD32(ctx->r6, -0X32);
            goto L_00400F5C;
    }
    // 0x00400F48: addiu       $v0, $a2, -0x32
    ctx->r2 = ADD32(ctx->r6, -0X32);
    // 0x00400F4C: addu        $a2, $v0, $a0
    ctx->r6 = ADD32(ctx->r2, ctx->r4);
L_00400F50:
    // 0x00400F50: slti        $v0, $a2, 0x4B
    ctx->r2 = SIGNED(ctx->r6) < 0X4B ? 1 : 0;
    // 0x00400F54: bnel        $v0, $zero, L_00400F5C
    if (ctx->r2 != 0) {
        // 0x00400F58: addiu       $a2, $zero, 0x4B
        ctx->r6 = ADD32(0, 0X4B);
            goto L_00400F5C;
    }
    goto skip_15;
    // 0x00400F58: addiu       $a2, $zero, 0x4B
    ctx->r6 = ADD32(0, 0X4B);
    skip_15:
L_00400F5C:
    // 0x00400F5C: lbu         $a0, 0x5C($s4)
    ctx->r4 = MEM_BU(ctx->r20, 0X5C);
    // 0x00400F60: sltiu       $v0, $a0, 0xB
    ctx->r2 = ctx->r4 < 0XB ? 1 : 0;
    // 0x00400F64: beq         $v0, $zero, L_00401038
    if (ctx->r2 == 0) {
        // 0x00400F68: sll         $v0, $a0, 2
        ctx->r2 = S32(ctx->r4 << 2);
            goto L_00401038;
    }
    // 0x00400F68: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x00400F6C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00400F70: addu        $at, $at, $v0
    gpr jr_addend_00400F78 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00400F74: lw          $v0, 0x268($at)
    ctx->r2 = ADD32(ctx->r1, 0X268);
    // 0x00400F78: jr          $v0
    // 0x00400F7C: nop

    switch (jr_addend_00400F78 >> 2) {
        case 0: goto L_00400F80; break;
        case 1: goto L_00400F88; break;
        case 2: goto L_00400F94; break;
        case 3: goto L_00400F9C; break;
        case 4: goto L_00400FA4; break;
        case 5: goto L_00400FC0; break;
        case 6: goto L_00400FD0; break;
        case 7: goto L_00400FF8; break;
        case 8: goto L_00401008; break;
        case 9: goto L_00401014; break;
        case 10: goto L_0040102C; break;
        default: switch_error(__func__, 0x00400F78, 0x800C0268);
    }
    // 0x00400F7C: nop

L_00400F80:
    // 0x00400F80: j           L_00400FFC
    // 0x00400F84: sb          $v1, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r3;
        goto L_00400FFC;
    // 0x00400F84: sb          $v1, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r3;
L_00400F88:
    // 0x00400F88: sb          $zero, 0xC($a1)
    MEM_B(0XC, ctx->r5) = 0;
    // 0x00400F8C: j           L_00401034
    // 0x00400F90: sb          $v1, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r3;
        goto L_00401034;
    // 0x00400F90: sb          $v1, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r3;
L_00400F94:
    // 0x00400F94: j           L_00400FC4
    // 0x00400F98: sb          $zero, 0xC($a1)
    MEM_B(0XC, ctx->r5) = 0;
        goto L_00400FC4;
    // 0x00400F98: sb          $zero, 0xC($a1)
    MEM_B(0XC, ctx->r5) = 0;
L_00400F9C:
    // 0x00400F9C: j           L_00401030
    // 0x00400FA0: sb          $v1, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r3;
        goto L_00401030;
    // 0x00400FA0: sb          $v1, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r3;
L_00400FA4:
    // 0x00400FA4: srl         $v0, $v1, 31
    ctx->r2 = S32(U32(ctx->r3) >> 31);
    // 0x00400FA8: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x00400FAC: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x00400FB0: sb          $v1, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r3;
    // 0x00400FB4: sb          $zero, 0xD($a1)
    MEM_B(0XD, ctx->r5) = 0;
    // 0x00400FB8: j           L_00401038
    // 0x00400FBC: sb          $v0, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r2;
        goto L_00401038;
    // 0x00400FBC: sb          $v0, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r2;
L_00400FC0:
    // 0x00400FC0: sb          $v1, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r3;
L_00400FC4:
    // 0x00400FC4: sb          $zero, 0xD($a1)
    MEM_B(0XD, ctx->r5) = 0;
    // 0x00400FC8: j           L_00401038
    // 0x00400FCC: sb          $v1, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r3;
        goto L_00401038;
    // 0x00400FCC: sb          $v1, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r3;
L_00400FD0:
    // 0x00400FD0: srl         $v0, $v1, 31
    ctx->r2 = S32(U32(ctx->r3) >> 31);
    // 0x00400FD4: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x00400FD8: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x00400FDC: sb          $v0, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r2;
    // 0x00400FE0: bgez        $v1, L_00400FEC
    if (SIGNED(ctx->r3) >= 0) {
        // 0x00400FE4: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_00400FEC;
    }
    // 0x00400FE4: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x00400FE8: addiu       $v0, $v1, 0x3
    ctx->r2 = ADD32(ctx->r3, 0X3);
L_00400FEC:
    // 0x00400FEC: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x00400FF0: j           L_00401034
    // 0x00400FF4: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
        goto L_00401034;
    // 0x00400FF4: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
L_00400FF8:
    // 0x00400FF8: sb          $zero, 0xC($a1)
    MEM_B(0XC, ctx->r5) = 0;
L_00400FFC:
    // 0x00400FFC: sb          $v1, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r3;
    // 0x00401000: j           L_00401038
    // 0x00401004: sb          $v1, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r3;
        goto L_00401038;
    // 0x00401004: sb          $v1, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r3;
L_00401008:
    // 0x00401008: sb          $v1, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r3;
    // 0x0040100C: j           L_00401034
    // 0x00401010: sb          $v1, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r3;
        goto L_00401034;
    // 0x00401010: sb          $v1, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r3;
L_00401014:
    // 0x00401014: srl         $v0, $v1, 31
    ctx->r2 = S32(U32(ctx->r3) >> 31);
    // 0x00401018: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x0040101C: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x00401020: sb          $v1, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r3;
    // 0x00401024: j           L_00401034
    // 0x00401028: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
        goto L_00401034;
    // 0x00401028: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
L_0040102C:
    // 0x0040102C: sb          $zero, 0xC($a1)
    MEM_B(0XC, ctx->r5) = 0;
L_00401030:
    // 0x00401030: sb          $zero, 0xD($a1)
    MEM_B(0XD, ctx->r5) = 0;
L_00401034:
    // 0x00401034: sb          $zero, 0xE($a1)
    MEM_B(0XE, ctx->r5) = 0;
L_00401038:
    // 0x00401038: lwc1        $f1, 0x8($fp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r30, 0X8);
    // 0x0040103C: mtc1        $a2, $f0
    ctx->f0.u32l = ctx->r6;
    // 0x00401040: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00401044: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00401048: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x0040104C: nop

    // 0x00401050: bc1t        L_00401068
    if (c1cs) {
        // 0x00401054: addu        $a0, $a1, $zero
        ctx->r4 = ADD32(ctx->r5, 0);
            goto L_00401068;
    }
    // 0x00401054: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00401058: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0040105C: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x00401060: j           L_00401080
    // 0x00401064: sb          $v1, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r3;
        goto L_00401080;
    // 0x00401064: sb          $v1, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r3;
L_00401068:
    // 0x00401068: sub.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x0040106C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00401070: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00401074: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x00401078: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0040107C: sb          $v1, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r3;
L_00401080:
    // 0x00401080: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x00401084: j           L_00401098
    // 0x00401088: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
        goto L_00401098;
    // 0x00401088: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
L_0040108C:
    // 0x0040108C: sh          $v0, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r2;
    // 0x00401090: addiu       $t2, $t2, 0x2
    ctx->r10 = ADD32(ctx->r10, 0X2);
    // 0x00401094: addiu       $t6, $t6, 0x1
    ctx->r14 = ADD32(ctx->r14, 0X1);
L_00401098:
    // 0x00401098: sh          $t1, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r9;
    // 0x0040109C: lwc1        $f0, 0x0($t3)
    ctx->f0.u32l = MEM_W(ctx->r11, 0X0);
    // 0x004010A0: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x004010A4: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x004010A8: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x004010AC: lwc1        $f0, 0x8($t3)
    ctx->f0.u32l = MEM_W(ctx->r11, 0X8);
    // 0x004010B0: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x004010B4: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x004010B8: sh          $v0, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r2;
    // 0x004010BC: lwc1        $f1, 0x4($t0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r8, 0X4);
    // 0x004010C0: lwc1        $f0, 0x18($fp)
    ctx->f0.u32l = MEM_W(ctx->r30, 0X18);
    // 0x004010C4: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x004010C8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004010CC: lwc1        $f0, 0x294($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X294);
    // 0x004010D0: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x004010D4: addiu       $t2, $t2, 0x2
    ctx->r10 = ADD32(ctx->r10, 0X2);
    // 0x004010D8: addiu       $t6, $t6, 0x1
    ctx->r14 = ADD32(ctx->r14, 0X1);
    // 0x004010DC: trunc.w.s   $f8, $f1
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 1);
    ctx->f8.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x004010E0: mfc1        $a0, $f8
    ctx->r4 = (int32_t)ctx->f8.u32l;
    // 0x004010E4: addiu       $v1, $a0, 0xC8
    ctx->r3 = ADD32(ctx->r4, 0XC8);
    // 0x004010E8: slti        $v0, $v1, 0x96
    ctx->r2 = SIGNED(ctx->r3) < 0X96 ? 1 : 0;
    // 0x004010EC: beq         $v0, $zero, L_004010FC
    if (ctx->r2 == 0) {
        // 0x004010F0: addiu       $a2, $zero, 0xFF
        ctx->r6 = ADD32(0, 0XFF);
            goto L_004010FC;
    }
    // 0x004010F0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x004010F4: j           L_00401108
    // 0x004010F8: addiu       $v1, $zero, 0x96
    ctx->r3 = ADD32(0, 0X96);
        goto L_00401108;
    // 0x004010F8: addiu       $v1, $zero, 0x96
    ctx->r3 = ADD32(0, 0X96);
L_004010FC:
    // 0x004010FC: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x00401100: beql        $v0, $zero, L_00401108
    if (ctx->r2 == 0) {
        // 0x00401104: addiu       $v1, $zero, 0xFF
        ctx->r3 = ADD32(0, 0XFF);
            goto L_00401108;
    }
    goto skip_16;
    // 0x00401104: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    skip_16:
L_00401108:
    // 0x00401108: slti        $v0, $a0, 0x33
    ctx->r2 = SIGNED(ctx->r4) < 0X33 ? 1 : 0;
    // 0x0040110C: bne         $v0, $zero, L_00401120
    if (ctx->r2 != 0) {
        // 0x00401110: slti        $v0, $a0, -0x32
        ctx->r2 = SIGNED(ctx->r4) < -0X32 ? 1 : 0;
            goto L_00401120;
    }
    // 0x00401110: slti        $v0, $a0, -0x32
    ctx->r2 = SIGNED(ctx->r4) < -0X32 ? 1 : 0;
    // 0x00401114: addiu       $v0, $a2, 0x32
    ctx->r2 = ADD32(ctx->r6, 0X32);
    // 0x00401118: j           L_0040112C
    // 0x0040111C: subu        $a2, $v0, $a0
    ctx->r6 = SUB32(ctx->r2, ctx->r4);
        goto L_0040112C;
    // 0x0040111C: subu        $a2, $v0, $a0
    ctx->r6 = SUB32(ctx->r2, ctx->r4);
L_00401120:
    // 0x00401120: beq         $v0, $zero, L_00401138
    if (ctx->r2 == 0) {
        // 0x00401124: addiu       $v0, $a2, -0x32
        ctx->r2 = ADD32(ctx->r6, -0X32);
            goto L_00401138;
    }
    // 0x00401124: addiu       $v0, $a2, -0x32
    ctx->r2 = ADD32(ctx->r6, -0X32);
    // 0x00401128: addu        $a2, $v0, $a0
    ctx->r6 = ADD32(ctx->r2, ctx->r4);
L_0040112C:
    // 0x0040112C: slti        $v0, $a2, 0x4B
    ctx->r2 = SIGNED(ctx->r6) < 0X4B ? 1 : 0;
    // 0x00401130: bnel        $v0, $zero, L_00401138
    if (ctx->r2 != 0) {
        // 0x00401134: addiu       $a2, $zero, 0x4B
        ctx->r6 = ADD32(0, 0X4B);
            goto L_00401138;
    }
    goto skip_17;
    // 0x00401134: addiu       $a2, $zero, 0x4B
    ctx->r6 = ADD32(0, 0X4B);
    skip_17:
L_00401138:
    // 0x00401138: lbu         $a0, 0x5C($s4)
    ctx->r4 = MEM_BU(ctx->r20, 0X5C);
    // 0x0040113C: sltiu       $v0, $a0, 0xB
    ctx->r2 = ctx->r4 < 0XB ? 1 : 0;
    // 0x00401140: beq         $v0, $zero, L_00401214
    if (ctx->r2 == 0) {
        // 0x00401144: sll         $v0, $a0, 2
        ctx->r2 = S32(ctx->r4 << 2);
            goto L_00401214;
    }
    // 0x00401144: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x00401148: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040114C: addu        $at, $at, $v0
    gpr jr_addend_00401154 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00401150: lw          $v0, 0x298($at)
    ctx->r2 = ADD32(ctx->r1, 0X298);
    // 0x00401154: jr          $v0
    // 0x00401158: nop

    switch (jr_addend_00401154 >> 2) {
        case 0: goto L_0040115C; break;
        case 1: goto L_00401164; break;
        case 2: goto L_00401170; break;
        case 3: goto L_00401178; break;
        case 4: goto L_00401180; break;
        case 5: goto L_0040119C; break;
        case 6: goto L_004011AC; break;
        case 7: goto L_004011D4; break;
        case 8: goto L_004011E4; break;
        case 9: goto L_004011F0; break;
        case 10: goto L_00401208; break;
        default: switch_error(__func__, 0x00401154, 0x800C0298);
    }
    // 0x00401158: nop

L_0040115C:
    // 0x0040115C: j           L_004011D8
    // 0x00401160: sb          $v1, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r3;
        goto L_004011D8;
    // 0x00401160: sb          $v1, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r3;
L_00401164:
    // 0x00401164: sb          $zero, 0xC($a1)
    MEM_B(0XC, ctx->r5) = 0;
    // 0x00401168: j           L_00401210
    // 0x0040116C: sb          $v1, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r3;
        goto L_00401210;
    // 0x0040116C: sb          $v1, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r3;
L_00401170:
    // 0x00401170: j           L_004011A0
    // 0x00401174: sb          $zero, 0xC($a1)
    MEM_B(0XC, ctx->r5) = 0;
        goto L_004011A0;
    // 0x00401174: sb          $zero, 0xC($a1)
    MEM_B(0XC, ctx->r5) = 0;
L_00401178:
    // 0x00401178: j           L_0040120C
    // 0x0040117C: sb          $v1, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r3;
        goto L_0040120C;
    // 0x0040117C: sb          $v1, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r3;
L_00401180:
    // 0x00401180: srl         $v0, $v1, 31
    ctx->r2 = S32(U32(ctx->r3) >> 31);
    // 0x00401184: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x00401188: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x0040118C: sb          $v1, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r3;
    // 0x00401190: sb          $zero, 0xD($a1)
    MEM_B(0XD, ctx->r5) = 0;
    // 0x00401194: j           L_00401214
    // 0x00401198: sb          $v0, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r2;
        goto L_00401214;
    // 0x00401198: sb          $v0, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r2;
L_0040119C:
    // 0x0040119C: sb          $v1, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r3;
L_004011A0:
    // 0x004011A0: sb          $zero, 0xD($a1)
    MEM_B(0XD, ctx->r5) = 0;
    // 0x004011A4: j           L_00401214
    // 0x004011A8: sb          $v1, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r3;
        goto L_00401214;
    // 0x004011A8: sb          $v1, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r3;
L_004011AC:
    // 0x004011AC: srl         $v0, $v1, 31
    ctx->r2 = S32(U32(ctx->r3) >> 31);
    // 0x004011B0: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x004011B4: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x004011B8: sb          $v0, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r2;
    // 0x004011BC: bgez        $v1, L_004011C8
    if (SIGNED(ctx->r3) >= 0) {
        // 0x004011C0: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_004011C8;
    }
    // 0x004011C0: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x004011C4: addiu       $v0, $v1, 0x3
    ctx->r2 = ADD32(ctx->r3, 0X3);
L_004011C8:
    // 0x004011C8: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x004011CC: j           L_00401210
    // 0x004011D0: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
        goto L_00401210;
    // 0x004011D0: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
L_004011D4:
    // 0x004011D4: sb          $zero, 0xC($a1)
    MEM_B(0XC, ctx->r5) = 0;
L_004011D8:
    // 0x004011D8: sb          $v1, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r3;
    // 0x004011DC: j           L_00401214
    // 0x004011E0: sb          $v1, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r3;
        goto L_00401214;
    // 0x004011E0: sb          $v1, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r3;
L_004011E4:
    // 0x004011E4: sb          $v1, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r3;
    // 0x004011E8: j           L_00401210
    // 0x004011EC: sb          $v1, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r3;
        goto L_00401210;
    // 0x004011EC: sb          $v1, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r3;
L_004011F0:
    // 0x004011F0: srl         $v0, $v1, 31
    ctx->r2 = S32(U32(ctx->r3) >> 31);
    // 0x004011F4: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x004011F8: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x004011FC: sb          $v1, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r3;
    // 0x00401200: j           L_00401210
    // 0x00401204: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
        goto L_00401210;
    // 0x00401204: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
L_00401208:
    // 0x00401208: sb          $zero, 0xC($a1)
    MEM_B(0XC, ctx->r5) = 0;
L_0040120C:
    // 0x0040120C: sb          $zero, 0xD($a1)
    MEM_B(0XD, ctx->r5) = 0;
L_00401210:
    // 0x00401210: sb          $zero, 0xE($a1)
    MEM_B(0XE, ctx->r5) = 0;
L_00401214:
    // 0x00401214: lwc1        $f1, 0x8($fp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r30, 0X8);
    // 0x00401218: mtc1        $a2, $f0
    ctx->f0.u32l = ctx->r6;
    // 0x0040121C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00401220: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00401224: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x00401228: nop

    // 0x0040122C: bc1t        L_00401244
    if (c1cs) {
        // 0x00401230: addu        $a0, $a1, $zero
        ctx->r4 = ADD32(ctx->r5, 0);
            goto L_00401244;
    }
    // 0x00401230: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00401234: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00401238: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x0040123C: j           L_0040125C
    // 0x00401240: sb          $v1, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r3;
        goto L_0040125C;
    // 0x00401240: sb          $v1, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r3;
L_00401244:
    // 0x00401244: sub.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x00401248: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0040124C: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00401250: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x00401254: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00401258: sb          $v1, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r3;
L_0040125C:
    // 0x0040125C: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x00401260: slti        $v0, $t1, 0x1FF
    ctx->r2 = SIGNED(ctx->r9) < 0X1FF ? 1 : 0;
    // 0x00401264: beq         $v0, $zero, L_004012C0
    if (ctx->r2 == 0) {
        // 0x00401268: addiu       $a1, $a1, 0x10
        ctx->r5 = ADD32(ctx->r5, 0X10);
            goto L_004012C0;
    }
    // 0x00401268: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x0040126C: addiu       $t7, $t7, 0x4
    ctx->r15 = ADD32(ctx->r15, 0X4);
L_00401270:
    // 0x00401270: addiu       $t5, $t5, 0x1
    ctx->r13 = ADD32(ctx->r13, 0X1);
    // 0x00401274: slti        $v0, $t5, 0x3
    ctx->r2 = SIGNED(ctx->r13) < 0X3 ? 1 : 0;
    // 0x00401278: bne         $v0, $zero, L_00400D58
    if (ctx->r2 != 0) {
        // 0x0040127C: addiu       $s3, $s3, 0x4
        ctx->r19 = ADD32(ctx->r19, 0X4);
            goto L_00400D58;
    }
    // 0x0040127C: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x00401280: addiu       $t4, $t4, 0x20
    ctx->r12 = ADD32(ctx->r12, 0X20);
L_00401284:
    // 0x00401284: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x00401288: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0040128C: sltu        $v0, $s1, $v0
    ctx->r2 = ctx->r17 < ctx->r2 ? 1 : 0;
    // 0x00401290: bne         $v0, $zero, L_00400C2C
    if (ctx->r2 != 0) {
        // 0x00401294: addiu       $s5, $s5, 0x1
        ctx->r21 = ADD32(ctx->r21, 0X1);
            goto L_00400C2C;
    }
    // 0x00401294: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x00401298: j           L_004012AC
    // 0x0040129C: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
        goto L_004012AC;
    // 0x0040129C: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
L_004012A0:
    // 0x004012A0: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x004012A4: addu        $s5, $s5, $v0
    ctx->r21 = ADD32(ctx->r21, ctx->r2);
L_004012A8:
    // 0x004012A8: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
L_004012AC:
    // 0x004012AC: lw          $t8, 0x164($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X164);
    // 0x004012B0: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x004012B4: slt         $v0, $s7, $t8
    ctx->r2 = SIGNED(ctx->r23) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x004012B8: bne         $v0, $zero, L_00400BB4
    if (ctx->r2 != 0) {
        // 0x004012BC: nop
    
            goto L_00400BB4;
    }
    // 0x004012BC: nop

L_004012C0:
    // 0x004012C0: addu        $t2, $t1, $zero
    ctx->r10 = ADD32(ctx->r9, 0);
    // 0x004012C4: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
    // 0x004012C8: slti        $v0, $t2, 0x2
    ctx->r2 = SIGNED(ctx->r10) < 0X2 ? 1 : 0;
    // 0x004012CC: bne         $v0, $zero, L_00401404
    if (ctx->r2 != 0) {
        // 0x004012D0: addu        $s1, $t1, $zero
        ctx->r17 = ADD32(ctx->r9, 0);
            goto L_00401404;
    }
    // 0x004012D0: addu        $s1, $t1, $zero
    ctx->r17 = ADD32(ctx->r9, 0);
    // 0x004012D4: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x004012D8: addiu       $t5, $t5, -0x71DC
    ctx->r13 = ADD32(ctx->r13, -0X71DC);
    // 0x004012DC: lui         $s0, 0x100
    ctx->r16 = S32(0X100 << 16);
    // 0x004012E0: addiu       $t6, $t6, -0x1
    ctx->r14 = ADD32(ctx->r14, -0X1);
    // 0x004012E4: lui         $t7, 0x800
    ctx->r15 = S32(0X800 << 16);
    // 0x004012E8: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x004012EC: addiu       $t0, $t0, -0x6DFE
    ctx->r8 = ADD32(ctx->r8, -0X6DFE);
    // 0x004012F0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
L_004012F4:
    // 0x004012F4: slti        $v0, $t2, 0x21
    ctx->r2 = SIGNED(ctx->r10) < 0X21 ? 1 : 0;
    // 0x004012F8: beq         $v0, $zero, L_00401304
    if (ctx->r2 == 0) {
        // 0x004012FC: addiu       $a2, $zero, 0x20
        ctx->r6 = ADD32(0, 0X20);
            goto L_00401304;
    }
    // 0x004012FC: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x00401300: addu        $a2, $t2, $zero
    ctx->r6 = ADD32(ctx->r10, 0);
L_00401304:
    // 0x00401304: addu        $t3, $t4, $zero
    ctx->r11 = ADD32(ctx->r12, 0);
    // 0x00401308: andi        $v1, $a2, 0xFF
    ctx->r3 = ctx->r6 & 0XFF;
    // 0x0040130C: sll         $v1, $v1, 12
    ctx->r3 = S32(ctx->r3 << 12);
    // 0x00401310: andi        $v0, $a2, 0x7F
    ctx->r2 = ctx->r6 & 0X7F;
    // 0x00401314: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00401318: or          $v0, $v0, $s0
    ctx->r2 = ctx->r2 | ctx->r16;
    // 0x0040131C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00401320: sll         $v0, $t1, 4
    ctx->r2 = S32(ctx->r9 << 4);
    // 0x00401324: lw          $a0, 0x0($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X0);
    // 0x00401328: addu        $v0, $s2, $v0
    ctx->r2 = ADD32(ctx->r18, ctx->r2);
    // 0x0040132C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00401330: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x00401334: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x00401338: lhu         $v0, 0x0($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X0);
    // 0x0040133C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x00401340: subu        $v0, $v0, $t1
    ctx->r2 = SUB32(ctx->r2, ctx->r9);
    // 0x00401344: slt         $v0, $v0, $a2
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x00401348: beq         $v0, $zero, L_004013E4
    if (ctx->r2 == 0) {
        // 0x0040134C: sw          $a0, 0x0($t5)
        MEM_W(0X0, ctx->r13) = ctx->r4;
            goto L_004013E4;
    }
    // 0x0040134C: sw          $a0, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r4;
    // 0x00401350: sll         $v0, $s1, 1
    ctx->r2 = S32(ctx->r17 << 1);
    // 0x00401354: addiu       $a3, $v0, 0x2
    ctx->r7 = ADD32(ctx->r2, 0X2);
L_00401358:
    // 0x00401358: slt         $v0, $s1, $t6
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x0040135C: beq         $v0, $zero, L_004013E4
    if (ctx->r2 == 0) {
        // 0x00401360: sll         $v0, $t3, 1
        ctx->r2 = S32(ctx->r11 << 1);
            goto L_004013E4;
    }
    // 0x00401360: sll         $v0, $t3, 1
    ctx->r2 = S32(ctx->r11 << 1);
    // 0x00401364: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00401368: addu        $at, $at, $a3
    ctx->r1 = ADD32(ctx->r1, ctx->r7);
    // 0x0040136C: lhu         $v1, -0x6E02($at)
    ctx->r3 = MEM_HU(ctx->r1, -0X6E02);
    // 0x00401370: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x00401374: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x00401378: addiu       $t4, $t4, 0x2
    ctx->r12 = ADD32(ctx->r12, 0X2);
    // 0x0040137C: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x00401380: addiu       $t3, $s1, 0x1
    ctx->r11 = ADD32(ctx->r17, 0X1);
    // 0x00401384: lw          $a0, 0x0($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X0);
    // 0x00401388: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0040138C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00401390: lhu         $v0, -0x6E00($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X6E00);
    // 0x00401394: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00401398: subu        $v1, $v1, $t1
    ctx->r3 = SUB32(ctx->r3, ctx->r9);
    // 0x0040139C: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x004013A0: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x004013A4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x004013A8: subu        $v0, $v0, $t1
    ctx->r2 = SUB32(ctx->r2, ctx->r9);
    // 0x004013AC: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x004013B0: andi        $v0, $v0, 0xFE00
    ctx->r2 = ctx->r2 & 0XFE00;
    // 0x004013B4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x004013B8: or          $v1, $v1, $t7
    ctx->r3 = ctx->r3 | ctx->r15;
    // 0x004013BC: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x004013C0: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x004013C4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004013C8: addu        $at, $at, $a3
    ctx->r1 = ADD32(ctx->r1, ctx->r7);
    // 0x004013CC: lhu         $v0, -0x6E00($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X6E00);
    // 0x004013D0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x004013D4: subu        $v0, $v0, $t1
    ctx->r2 = SUB32(ctx->r2, ctx->r9);
    // 0x004013D8: slt         $v0, $v0, $a2
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x004013DC: bne         $v0, $zero, L_00401358
    if (ctx->r2 != 0) {
        // 0x004013E0: sw          $a0, 0x0($t5)
        MEM_W(0X0, ctx->r13) = ctx->r4;
            goto L_00401358;
    }
    // 0x004013E0: sw          $a0, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r4;
L_004013E4:
    // 0x004013E4: lhu         $v0, 0x0($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X0);
    // 0x004013E8: subu        $v0, $v0, $t1
    ctx->r2 = SUB32(ctx->r2, ctx->r9);
    // 0x004013EC: beql        $v0, $a2, L_004013F4
    if (ctx->r2 == ctx->r6) {
        // 0x004013F0: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_004013F4;
    }
    goto skip_18;
    // 0x004013F0: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    skip_18:
L_004013F4:
    // 0x004013F4: subu        $t2, $t2, $a2
    ctx->r10 = SUB32(ctx->r10, ctx->r6);
    // 0x004013F8: slti        $v0, $t2, 0x2
    ctx->r2 = SIGNED(ctx->r10) < 0X2 ? 1 : 0;
    // 0x004013FC: beq         $v0, $zero, L_004012F4
    if (ctx->r2 == 0) {
        // 0x00401400: addu        $t1, $t1, $a2
        ctx->r9 = ADD32(ctx->r9, ctx->r6);
            goto L_004012F4;
    }
    // 0x00401400: addu        $t1, $t1, $a2
    ctx->r9 = ADD32(ctx->r9, ctx->r6);
L_00401404:
    // 0x00401404: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00401408: lw          $v1, 0x6D1C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6D1C);
    // 0x0040140C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00401410: lwc1        $f3, 0x2C4($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X2C4);
    // 0x00401414: lwc1        $f0, 0x14($fp)
    ctx->f0.u32l = MEM_W(ctx->r30, 0X14);
    // 0x00401418: mul.s       $f1, $f25, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f25.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = MUL_S(ctx->f25.fl, ctx->f3.fl);
    // 0x0040141C: lwc1        $f5, 0x8($fp)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r30, 0X8);
    // 0x00401420: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x00401424: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00401428: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x0040142C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00401430: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00401434: addiu       $v1, $v1, -0xCC0
    ctx->r3 = ADD32(ctx->r3, -0XCC0);
    // 0x00401438: addu        $s2, $v0, $v1
    ctx->r18 = ADD32(ctx->r2, ctx->r3);
    // 0x0040143C: mul.s       $f3, $f24, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = MUL_S(ctx->f24.fl, ctx->f3.fl);
    // 0x00401440: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00401444: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x00401448: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
    // 0x0040144C: lwc1        $f0, 0x1C($fp)
    ctx->f0.u32l = MEM_W(ctx->r30, 0X1C);
    // 0x00401450: sub.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f3.fl;
    // 0x00401454: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00401458: lwc1        $f2, 0x2C8($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X2C8);
    // 0x0040145C: mul.s       $f4, $f24, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f24.fl, ctx->f2.fl);
    // 0x00401460: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00401464: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x00401468: sh          $v0, 0x2($s2)
    MEM_H(0X2, ctx->r18) = ctx->r2;
    // 0x0040146C: lwc1        $f0, 0x14($fp)
    ctx->f0.u32l = MEM_W(ctx->r30, 0X14);
    // 0x00401470: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x00401474: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00401478: mul.s       $f2, $f25, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f25.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f25.fl, ctx->f2.fl);
    // 0x0040147C: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00401480: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x00401484: sh          $v0, 0x10($s2)
    MEM_H(0X10, ctx->r18) = ctx->r2;
    // 0x00401488: lwc1        $f0, 0x1C($fp)
    ctx->f0.u32l = MEM_W(ctx->r30, 0X1C);
    // 0x0040148C: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x00401490: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x00401494: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00401498: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x0040149C: sh          $v0, 0x12($s2)
    MEM_H(0X12, ctx->r18) = ctx->r2;
    // 0x004014A0: lwc1        $f0, 0x14($fp)
    ctx->f0.u32l = MEM_W(ctx->r30, 0X14);
    // 0x004014A4: sub.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x004014A8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x004014AC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004014B0: lwc1        $f1, 0x2CC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X2CC);
    // 0x004014B4: mul.s       $f22, $f5, $f1
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f22.fl = MUL_S(ctx->f5.fl, ctx->f1.fl);
    // 0x004014B8: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x004014BC: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x004014C0: sh          $v0, 0x20($s2)
    MEM_H(0X20, ctx->r18) = ctx->r2;
    // 0x004014C4: lwc1        $f0, 0x1C($fp)
    ctx->f0.u32l = MEM_W(ctx->r30, 0X1C);
    // 0x004014C8: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x004014CC: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x004014D0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004014D4: lwc1        $f1, 0x2D0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X2D0);
    // 0x004014D8: c.le.s      $f1, $f22
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f1.fl <= ctx->f22.fl;
    // 0x004014DC: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x004014E0: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x004014E4: bc1t        L_004014FC
    if (c1cs) {
        // 0x004014E8: sh          $v0, 0x22($s2)
        MEM_H(0X22, ctx->r18) = ctx->r2;
            goto L_004014FC;
    }
    // 0x004014E8: sh          $v0, 0x22($s2)
    MEM_H(0X22, ctx->r18) = ctx->r2;
    // 0x004014EC: trunc.w.s   $f8, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    ctx->f8.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x004014F0: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x004014F4: j           L_00401510
    // 0x004014F8: nop

        goto L_00401510;
    // 0x004014F8: nop

L_004014FC:
    // 0x004014FC: sub.s       $f0, $f22, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f22.fl - ctx->f1.fl;
    // 0x00401500: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00401504: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00401508: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x0040150C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
L_00401510:
    // 0x00401510: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00401514: lwc1        $f0, 0x2D4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2D4);
    // 0x00401518: c.le.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl <= ctx->f22.fl;
    // 0x0040151C: nop

    // 0x00401520: bc1t        L_00401538
    if (c1cs) {
        // 0x00401524: sb          $v1, 0xF($s2)
        MEM_B(0XF, ctx->r18) = ctx->r3;
            goto L_00401538;
    }
    // 0x00401524: sb          $v1, 0xF($s2)
    MEM_B(0XF, ctx->r18) = ctx->r3;
    // 0x00401528: trunc.w.s   $f8, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    ctx->f8.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x0040152C: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x00401530: j           L_0040155C
    // 0x00401534: sb          $v1, 0x1F($s2)
    MEM_B(0X1F, ctx->r18) = ctx->r3;
        goto L_0040155C;
    // 0x00401534: sb          $v1, 0x1F($s2)
    MEM_B(0X1F, ctx->r18) = ctx->r3;
L_00401538:
    // 0x00401538: sub.s       $f0, $f22, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f22.fl - ctx->f0.fl;
    // 0x0040153C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00401540: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00401544: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x00401548: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0040154C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00401550: lwc1        $f0, 0x2D8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2D8);
    // 0x00401554: sb          $v1, 0x1F($s2)
    MEM_B(0X1F, ctx->r18) = ctx->r3;
    // 0x00401558: c.le.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl <= ctx->f22.fl;
L_0040155C:
    // 0x0040155C: nop

    // 0x00401560: bc1tl       L_00401578
    if (c1cs) {
        // 0x00401564: sub.s       $f0, $f22, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f22.fl - ctx->f0.fl;
            goto L_00401578;
    }
    goto skip_19;
    // 0x00401564: sub.s       $f0, $f22, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f22.fl - ctx->f0.fl;
    skip_19:
    // 0x00401568: trunc.w.s   $f8, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    ctx->f8.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x0040156C: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x00401570: j           L_0040158C
    // 0x00401574: lui         $t2, 0x100
    ctx->r10 = S32(0X100 << 16);
        goto L_0040158C;
    // 0x00401574: lui         $t2, 0x100
    ctx->r10 = S32(0X100 << 16);
L_00401578:
    // 0x00401578: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0040157C: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00401580: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x00401584: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00401588: lui         $t2, 0x100
    ctx->r10 = S32(0X100 << 16);
L_0040158C:
    // 0x0040158C: ori         $t2, $t2, 0x3006
    ctx->r10 = ctx->r10 | 0X3006;
    // 0x00401590: lui         $t3, 0x800
    ctx->r11 = S32(0X800 << 16);
    // 0x00401594: ori         $t3, $t3, 0x200
    ctx->r11 = ctx->r11 | 0X200;
    // 0x00401598: lui         $t4, 0x800
    ctx->r12 = S32(0X800 << 16);
    // 0x0040159C: ori         $t4, $t4, 0x400
    ctx->r12 = ctx->r12 | 0X400;
    // 0x004015A0: addiu       $s0, $sp, 0xB0
    ctx->r16 = ADD32(ctx->r29, 0XB0);
    // 0x004015A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x004015A8: lui         $s1, 0x800E
    ctx->r17 = S32(0X800E << 16);
    // 0x004015AC: addiu       $s1, $s1, -0x71DC
    ctx->r17 = ADD32(ctx->r17, -0X71DC);
    // 0x004015B0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004015B4: addiu       $v0, $v0, -0x25C0
    ctx->r2 = ADD32(ctx->r2, -0X25C0);
    // 0x004015B8: sb          $v1, 0x2F($s2)
    MEM_B(0X2F, ctx->r18) = ctx->r3;
    // 0x004015BC: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x004015C0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004015C4: lwc1        $f0, 0x2DC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2DC);
    // 0x004015C8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x004015CC: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x004015D0: lw          $v1, 0x6D1C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6D1C);
    // 0x004015D4: addu        $t1, $t0, $zero
    ctx->r9 = ADD32(ctx->r8, 0);
    // 0x004015D8: addiu       $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x004015DC: sll         $v1, $v1, 7
    ctx->r3 = S32(ctx->r3 << 7);
    // 0x004015E0: sw          $s2, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r18;
    // 0x004015E4: addu        $s2, $v1, $v0
    ctx->r18 = ADD32(ctx->r3, ctx->r2);
    // 0x004015E8: addiu       $v1, $t0, 0x8
    ctx->r3 = ADD32(ctx->r8, 0X8);
    // 0x004015EC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x004015F0: addiu       $v0, $t0, 0x10
    ctx->r2 = ADD32(ctx->r8, 0X10);
    // 0x004015F4: sw          $t0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r8;
    // 0x004015F8: sw          $t2, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r10;
    // 0x004015FC: sw          $v1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r3;
    // 0x00401600: sw          $t3, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r11;
    // 0x00401604: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x00401608: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x0040160C: sw          $t4, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r12;
    // 0x00401610: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x00401614: jal         0x0020FC74
    // 0x00401618: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    func_0020FC74(rdram, ctx);
        goto after_13;
    // 0x00401618: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_13:
    // 0x0040161C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00401620: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00401624: lw          $v0, 0x2030($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2030);
    // 0x00401628: lui         $a2, 0x4200
    ctx->r6 = S32(0X4200 << 16);
    // 0x0040162C: srl         $v1, $v0, 31
    ctx->r3 = S32(U32(ctx->r2) >> 31);
    // 0x00401630: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00401634: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x00401638: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x0040163C: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x00401640: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x00401644: jal         0x00210318
    // 0x00401648: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_00210318(rdram, ctx);
        goto after_14;
    // 0x00401648: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_14:
    // 0x0040164C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00401650: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00401654: lw          $a1, 0x6D1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6D1C);
    // 0x00401658: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x0040165C: addiu       $s0, $s0, -0x6E80
    ctx->r16 = ADD32(ctx->r16, -0X6E80);
    // 0x00401660: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    // 0x00401664: jal         0x0020D274
    // 0x00401668: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    func_0020D274(rdram, ctx);
        goto after_15;
    // 0x00401668: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    after_15:
    // 0x0040166C: lui         $a1, 0xDA38
    ctx->r5 = S32(0XDA38 << 16);
    // 0x00401670: ori         $a1, $a1, 0x3
    ctx->r5 = ctx->r5 | 0X3;
    // 0x00401674: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x00401678: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0040167C: lw          $v0, 0x6D1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D1C);
    // 0x00401680: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00401684: lwc1        $f0, 0x2E0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2E0);
    // 0x00401688: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x0040168C: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x00401690: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x00401694: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x00401698: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x0040169C: lwc1        $f1, 0x8($fp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r30, 0X8);
    // 0x004016A0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004016A4: lwc1        $f21, 0x2E4($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X2E4);
    // 0x004016A8: mul.s       $f22, $f1, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x004016AC: lwc1        $f12, 0x10($fp)
    ctx->f12.u32l = MEM_W(ctx->r30, 0X10);
    // 0x004016B0: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x004016B4: jal         0x002982F0
    // 0x004016B8: sw          $v1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r3;
    func_002982F0(rdram, ctx);
        goto after_16;
    // 0x004016B8: sw          $v1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r3;
    after_16:
    // 0x004016BC: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x004016C0: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x004016C4: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x004016C8: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
    // 0x004016CC: lwc1        $f12, 0x10($fp)
    ctx->f12.u32l = MEM_W(ctx->r30, 0X10);
    // 0x004016D0: jal         0x002974C0
    // 0x004016D4: nop

    func_002974C0(rdram, ctx);
        goto after_17;
    // 0x004016D4: nop

    after_17:
    // 0x004016D8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004016DC: lwc1        $f1, 0x2E8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X2E8);
    // 0x004016E0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x004016E4: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x004016E8: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x004016EC: sh          $v0, 0x2($s2)
    MEM_H(0X2, ctx->r18) = ctx->r2;
    // 0x004016F0: lwc1        $f12, 0x10($fp)
    ctx->f12.u32l = MEM_W(ctx->r30, 0X10);
    // 0x004016F4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004016F8: lwc1        $f20, 0x2EC($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X2EC);
    // 0x004016FC: jal         0x002982F0
    // 0x00401700: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    func_002982F0(rdram, ctx);
        goto after_18;
    // 0x00401700: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    after_18:
    // 0x00401704: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x00401708: lh          $v0, 0x0($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X0);
    // 0x0040170C: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00401710: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00401714: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00401718: trunc.w.s   $f8, $f1
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 1);
    ctx->f8.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x0040171C: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x00401720: sh          $v0, 0x10($s2)
    MEM_H(0X10, ctx->r18) = ctx->r2;
    // 0x00401724: lwc1        $f12, 0x10($fp)
    ctx->f12.u32l = MEM_W(ctx->r30, 0X10);
    // 0x00401728: jal         0x002974C0
    // 0x0040172C: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    func_002974C0(rdram, ctx);
        goto after_19;
    // 0x0040172C: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    after_19:
    // 0x00401730: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x00401734: lh          $v0, 0x2($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X2);
    // 0x00401738: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0040173C: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00401740: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00401744: trunc.w.s   $f8, $f1
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 1);
    ctx->f8.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00401748: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x0040174C: sh          $v0, 0x12($s2)
    MEM_H(0X12, ctx->r18) = ctx->r2;
    // 0x00401750: lwc1        $f12, 0x10($fp)
    ctx->f12.u32l = MEM_W(ctx->r30, 0X10);
    // 0x00401754: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00401758: lwc1        $f20, 0x2F0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X2F0);
    // 0x0040175C: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    // 0x00401760: jal         0x002982F0
    // 0x00401764: sub.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f20.fl;
    func_002982F0(rdram, ctx);
        goto after_20;
    // 0x00401764: sub.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f20.fl;
    after_20:
    // 0x00401768: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x0040176C: lh          $v0, 0x10($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X10);
    // 0x00401770: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00401774: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00401778: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0040177C: trunc.w.s   $f8, $f1
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 1);
    ctx->f8.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00401780: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x00401784: sh          $v0, 0x20($s2)
    MEM_H(0X20, ctx->r18) = ctx->r2;
    // 0x00401788: lwc1        $f12, 0x10($fp)
    ctx->f12.u32l = MEM_W(ctx->r30, 0X10);
    // 0x0040178C: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    // 0x00401790: jal         0x002974C0
    // 0x00401794: sub.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f20.fl;
    func_002974C0(rdram, ctx);
        goto after_21;
    // 0x00401794: sub.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f20.fl;
    after_21:
    // 0x00401798: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x0040179C: lh          $v0, 0x12($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X12);
    // 0x004017A0: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x004017A4: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x004017A8: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x004017AC: trunc.w.s   $f8, $f1
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 1);
    ctx->f8.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x004017B0: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x004017B4: sh          $v0, 0x22($s2)
    MEM_H(0X22, ctx->r18) = ctx->r2;
    // 0x004017B8: lwc1        $f12, 0x10($fp)
    ctx->f12.u32l = MEM_W(ctx->r30, 0X10);
    // 0x004017BC: jal         0x002982F0
    // 0x004017C0: sub.s       $f12, $f20, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f20.fl - ctx->f12.fl;
    func_002982F0(rdram, ctx);
        goto after_22;
    // 0x004017C0: sub.s       $f12, $f20, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f20.fl - ctx->f12.fl;
    after_22:
    // 0x004017C4: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x004017C8: lh          $v0, 0x10($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X10);
    // 0x004017CC: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x004017D0: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x004017D4: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x004017D8: trunc.w.s   $f8, $f1
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 1);
    ctx->f8.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x004017DC: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x004017E0: sh          $v0, 0x30($s2)
    MEM_H(0X30, ctx->r18) = ctx->r2;
    // 0x004017E4: lwc1        $f12, 0x10($fp)
    ctx->f12.u32l = MEM_W(ctx->r30, 0X10);
    // 0x004017E8: jal         0x002974C0
    // 0x004017EC: sub.s       $f12, $f20, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f20.fl - ctx->f12.fl;
    func_002974C0(rdram, ctx);
        goto after_23;
    // 0x004017EC: sub.s       $f12, $f20, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f20.fl - ctx->f12.fl;
    after_23:
    // 0x004017F0: addiu       $v0, $zero, -0x7
    ctx->r2 = ADD32(0, -0X7);
    // 0x004017F4: sh          $v0, 0x40($s2)
    MEM_H(0X40, ctx->r18) = ctx->r2;
    // 0x004017F8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x004017FC: sh          $v0, 0x42($s2)
    MEM_H(0X42, ctx->r18) = ctx->r2;
    // 0x00401800: addiu       $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
    // 0x00401804: sh          $v1, 0x50($s2)
    MEM_H(0X50, ctx->r18) = ctx->r3;
    // 0x00401808: sh          $v0, 0x52($s2)
    MEM_H(0X52, ctx->r18) = ctx->r2;
    // 0x0040180C: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x00401810: addiu       $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
    // 0x00401814: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00401818: lwc1        $f2, 0x2F4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X2F4);
    // 0x0040181C: lhu         $v1, 0x52($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X52);
    // 0x00401820: lh          $a0, 0x12($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X12);
    // 0x00401824: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x00401828: sh          $v0, 0x60($s2)
    MEM_H(0X60, ctx->r18) = ctx->r2;
    // 0x0040182C: sh          $v0, 0x70($s2)
    MEM_H(0X70, ctx->r18) = ctx->r2;
    // 0x00401830: addiu       $v1, $v1, -0xF
    ctx->r3 = ADD32(ctx->r3, -0XF);
    // 0x00401834: mtc1        $a0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r4;
    // 0x00401838: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0040183C: sh          $v1, 0x62($s2)
    MEM_H(0X62, ctx->r18) = ctx->r3;
    // 0x00401840: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00401844: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x00401848: addiu       $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
    // 0x0040184C: c.le.s      $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f2.fl <= ctx->f22.fl;
    // 0x00401850: sh          $v0, 0x72($s2)
    MEM_H(0X72, ctx->r18) = ctx->r2;
    // 0x00401854: trunc.w.s   $f8, $f1
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 1);
    ctx->f8.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00401858: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x0040185C: bc1t        L_00401874
    if (c1cs) {
        // 0x00401860: sh          $v0, 0x32($s2)
        MEM_H(0X32, ctx->r18) = ctx->r2;
            goto L_00401874;
    }
    // 0x00401860: sh          $v0, 0x32($s2)
    MEM_H(0X32, ctx->r18) = ctx->r2;
    // 0x00401864: trunc.w.s   $f8, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    ctx->f8.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x00401868: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x0040186C: j           L_00401888
    // 0x00401870: nop

        goto L_00401888;
    // 0x00401870: nop

L_00401874:
    // 0x00401874: sub.s       $f0, $f22, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f22.fl - ctx->f2.fl;
    // 0x00401878: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0040187C: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00401880: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x00401884: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
L_00401888:
    // 0x00401888: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040188C: lwc1        $f0, 0x2F8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2F8);
    // 0x00401890: c.le.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl <= ctx->f22.fl;
    // 0x00401894: nop

    // 0x00401898: bc1t        L_004018B0
    if (c1cs) {
        // 0x0040189C: sb          $v1, 0xF($s2)
        MEM_B(0XF, ctx->r18) = ctx->r3;
            goto L_004018B0;
    }
    // 0x0040189C: sb          $v1, 0xF($s2)
    MEM_B(0XF, ctx->r18) = ctx->r3;
    // 0x004018A0: trunc.w.s   $f8, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    ctx->f8.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x004018A4: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x004018A8: j           L_004018D4
    // 0x004018AC: sb          $v1, 0x1F($s2)
    MEM_B(0X1F, ctx->r18) = ctx->r3;
        goto L_004018D4;
    // 0x004018AC: sb          $v1, 0x1F($s2)
    MEM_B(0X1F, ctx->r18) = ctx->r3;
L_004018B0:
    // 0x004018B0: sub.s       $f0, $f22, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f22.fl - ctx->f0.fl;
    // 0x004018B4: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x004018B8: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x004018BC: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x004018C0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x004018C4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004018C8: lwc1        $f0, 0x2FC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2FC);
    // 0x004018CC: sb          $v1, 0x1F($s2)
    MEM_B(0X1F, ctx->r18) = ctx->r3;
    // 0x004018D0: c.le.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl <= ctx->f22.fl;
L_004018D4:
    // 0x004018D4: nop

    // 0x004018D8: bc1tl       L_004018F0
    if (c1cs) {
        // 0x004018DC: sub.s       $f0, $f22, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f22.fl - ctx->f0.fl;
            goto L_004018F0;
    }
    goto skip_20;
    // 0x004018DC: sub.s       $f0, $f22, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f22.fl - ctx->f0.fl;
    skip_20:
    // 0x004018E0: trunc.w.s   $f8, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    ctx->f8.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x004018E4: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x004018E8: j           L_00401900
    // 0x004018EC: nop

        goto L_00401900;
    // 0x004018EC: nop

L_004018F0:
    // 0x004018F0: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x004018F4: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x004018F8: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x004018FC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
L_00401900:
    // 0x00401900: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00401904: lwc1        $f0, 0x300($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X300);
    // 0x00401908: c.le.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl <= ctx->f22.fl;
    // 0x0040190C: nop

    // 0x00401910: bc1t        L_00401928
    if (c1cs) {
        // 0x00401914: sb          $v1, 0x2F($s2)
        MEM_B(0X2F, ctx->r18) = ctx->r3;
            goto L_00401928;
    }
    // 0x00401914: sb          $v1, 0x2F($s2)
    MEM_B(0X2F, ctx->r18) = ctx->r3;
    // 0x00401918: trunc.w.s   $f8, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    ctx->f8.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x0040191C: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x00401920: j           L_0040194C
    // 0x00401924: sb          $v1, 0x3F($s2)
    MEM_B(0X3F, ctx->r18) = ctx->r3;
        goto L_0040194C;
    // 0x00401924: sb          $v1, 0x3F($s2)
    MEM_B(0X3F, ctx->r18) = ctx->r3;
L_00401928:
    // 0x00401928: sub.s       $f0, $f22, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f22.fl - ctx->f0.fl;
    // 0x0040192C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00401930: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00401934: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x00401938: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0040193C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00401940: lwc1        $f0, 0x304($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X304);
    // 0x00401944: sb          $v1, 0x3F($s2)
    MEM_B(0X3F, ctx->r18) = ctx->r3;
    // 0x00401948: c.le.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl <= ctx->f22.fl;
L_0040194C:
    // 0x0040194C: nop

    // 0x00401950: bc1tl       L_00401968
    if (c1cs) {
        // 0x00401954: sub.s       $f0, $f22, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f22.fl - ctx->f0.fl;
            goto L_00401968;
    }
    goto skip_21;
    // 0x00401954: sub.s       $f0, $f22, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f22.fl - ctx->f0.fl;
    skip_21:
    // 0x00401958: trunc.w.s   $f8, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    ctx->f8.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x0040195C: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x00401960: j           L_00401978
    // 0x00401964: nop

        goto L_00401978;
    // 0x00401964: nop

L_00401968:
    // 0x00401968: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0040196C: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00401970: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x00401974: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
L_00401978:
    // 0x00401978: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040197C: lwc1        $f0, 0x308($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X308);
    // 0x00401980: c.le.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl <= ctx->f22.fl;
    // 0x00401984: nop

    // 0x00401988: bc1t        L_004019A0
    if (c1cs) {
        // 0x0040198C: sb          $v1, 0x4F($s2)
        MEM_B(0X4F, ctx->r18) = ctx->r3;
            goto L_004019A0;
    }
    // 0x0040198C: sb          $v1, 0x4F($s2)
    MEM_B(0X4F, ctx->r18) = ctx->r3;
    // 0x00401990: trunc.w.s   $f8, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    ctx->f8.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x00401994: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x00401998: j           L_004019C4
    // 0x0040199C: sb          $v1, 0x5F($s2)
    MEM_B(0X5F, ctx->r18) = ctx->r3;
        goto L_004019C4;
    // 0x0040199C: sb          $v1, 0x5F($s2)
    MEM_B(0X5F, ctx->r18) = ctx->r3;
L_004019A0:
    // 0x004019A0: sub.s       $f0, $f22, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f22.fl - ctx->f0.fl;
    // 0x004019A4: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x004019A8: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x004019AC: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x004019B0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x004019B4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004019B8: lwc1        $f0, 0x30C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X30C);
    // 0x004019BC: sb          $v1, 0x5F($s2)
    MEM_B(0X5F, ctx->r18) = ctx->r3;
    // 0x004019C0: c.le.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl <= ctx->f22.fl;
L_004019C4:
    // 0x004019C4: nop

    // 0x004019C8: bc1tl       L_004019E0
    if (c1cs) {
        // 0x004019CC: sub.s       $f0, $f22, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f22.fl - ctx->f0.fl;
            goto L_004019E0;
    }
    goto skip_22;
    // 0x004019CC: sub.s       $f0, $f22, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f22.fl - ctx->f0.fl;
    skip_22:
    // 0x004019D0: trunc.w.s   $f8, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    ctx->f8.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x004019D4: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x004019D8: j           L_004019F0
    // 0x004019DC: nop

        goto L_004019F0;
    // 0x004019DC: nop

L_004019E0:
    // 0x004019E0: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x004019E4: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x004019E8: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x004019EC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
L_004019F0:
    // 0x004019F0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004019F4: lwc1        $f0, 0x310($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X310);
    // 0x004019F8: c.le.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl <= ctx->f22.fl;
    // 0x004019FC: nop

    // 0x00401A00: bc1t        L_00401A18
    if (c1cs) {
        // 0x00401A04: sb          $v1, 0x6F($s2)
        MEM_B(0X6F, ctx->r18) = ctx->r3;
            goto L_00401A18;
    }
    // 0x00401A04: sb          $v1, 0x6F($s2)
    MEM_B(0X6F, ctx->r18) = ctx->r3;
    // 0x00401A08: trunc.w.s   $f8, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    ctx->f8.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x00401A0C: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x00401A10: j           L_00401A30
    // 0x00401A14: lui         $a1, 0x100
    ctx->r5 = S32(0X100 << 16);
        goto L_00401A30;
    // 0x00401A14: lui         $a1, 0x100
    ctx->r5 = S32(0X100 << 16);
L_00401A18:
    // 0x00401A18: sub.s       $f0, $f22, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f22.fl - ctx->f0.fl;
    // 0x00401A1C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00401A20: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00401A24: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x00401A28: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00401A2C: lui         $a1, 0x100
    ctx->r5 = S32(0X100 << 16);
L_00401A30:
    // 0x00401A30: ori         $a1, $a1, 0x8010
    ctx->r5 = ctx->r5 | 0X8010;
    // 0x00401A34: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x00401A38: ori         $a2, $a2, 0x200
    ctx->r6 = ctx->r6 | 0X200;
    // 0x00401A3C: lui         $a3, 0x802
    ctx->r7 = S32(0X802 << 16);
    // 0x00401A40: ori         $a3, $a3, 0x400
    ctx->r7 = ctx->r7 | 0X400;
    // 0x00401A44: lui         $t0, 0x802
    ctx->r8 = S32(0X802 << 16);
    // 0x00401A48: ori         $t0, $t0, 0x600
    ctx->r8 = ctx->r8 | 0X600;
    // 0x00401A4C: lui         $t1, 0x808
    ctx->r9 = S32(0X808 << 16);
    // 0x00401A50: ori         $t1, $t1, 0xA00
    ctx->r9 = ctx->r9 | 0XA00;
    // 0x00401A54: lui         $t2, 0x80A
    ctx->r10 = S32(0X80A << 16);
    // 0x00401A58: ori         $t2, $t2, 0xC00
    ctx->r10 = ctx->r10 | 0XC00;
    // 0x00401A5C: lui         $t3, 0x80C
    ctx->r11 = S32(0X80C << 16);
    // 0x00401A60: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00401A64: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00401A68: sb          $v1, 0x7F($s2)
    MEM_B(0X7F, ctx->r18) = ctx->r3;
    // 0x00401A6C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00401A70: ori         $t3, $t3, 0xE00
    ctx->r11 = ctx->r11 | 0XE00;
    // 0x00401A74: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00401A78: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x00401A7C: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00401A80: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x00401A84: sw          $s2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r18;
    // 0x00401A88: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x00401A8C: addiu       $a1, $v0, 0x10
    ctx->r5 = ADD32(ctx->r2, 0X10);
    // 0x00401A90: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x00401A94: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x00401A98: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x00401A9C: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x00401AA0: sw          $a3, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r7;
    // 0x00401AA4: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x00401AA8: addiu       $v1, $v0, 0x18
    ctx->r3 = ADD32(ctx->r2, 0X18);
    // 0x00401AAC: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x00401AB0: sw          $t0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r8;
    // 0x00401AB4: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x00401AB8: addiu       $a1, $v0, 0x20
    ctx->r5 = ADD32(ctx->r2, 0X20);
    // 0x00401ABC: addiu       $a2, $v0, 0x28
    ctx->r6 = ADD32(ctx->r2, 0X28);
    // 0x00401AC0: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x00401AC4: sw          $t1, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r9;
    // 0x00401AC8: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x00401ACC: addiu       $v1, $v0, 0x30
    ctx->r3 = ADD32(ctx->r2, 0X30);
    // 0x00401AD0: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    // 0x00401AD4: sw          $t2, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r10;
    // 0x00401AD8: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x00401ADC: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x00401AE0: sw          $t3, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r11;
    // 0x00401AE4: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
L_00401AE8:
    // 0x00401AE8: lw          $ra, 0x19C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X19C);
    // 0x00401AEC: lw          $fp, 0x198($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X198);
    // 0x00401AF0: lw          $s7, 0x194($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X194);
    // 0x00401AF4: lw          $s6, 0x190($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X190);
    // 0x00401AF8: lw          $s5, 0x18C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X18C);
    // 0x00401AFC: lw          $s4, 0x188($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X188);
    // 0x00401B00: lw          $s3, 0x184($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X184);
    // 0x00401B04: lw          $s2, 0x180($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X180);
    // 0x00401B08: lw          $s1, 0x17C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X17C);
    // 0x00401B0C: lw          $s0, 0x178($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X178);
    // 0x00401B10: ldc1        $f25, 0x1C8($sp)
    CHECK_FR(ctx, 25);
    ctx->f25.u64 = LD(ctx->r29, 0X1C8);
    // 0x00401B14: ldc1        $f24, 0x1C0($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X1C0);
    // 0x00401B18: ldc1        $f23, 0x1B8($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X1B8);
    // 0x00401B1C: ldc1        $f22, 0x1B0($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X1B0);
    // 0x00401B20: ldc1        $f21, 0x1A8($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X1A8);
    // 0x00401B24: ldc1        $f20, 0x1A0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X1A0);
    // 0x00401B28: jr          $ra
    // 0x00401B2C: addiu       $sp, $sp, 0x1D0
    ctx->r29 = ADD32(ctx->r29, 0X1D0);
    return;
    // 0x00401B2C: addiu       $sp, $sp, 0x1D0
    ctx->r29 = ADD32(ctx->r29, 0X1D0);
;}
RECOMP_FUNC void func_00269050(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00269050: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x00269054: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x00269058: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0026905C: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x00269060: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00269064: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x00269068: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x0026906C: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x00269070: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x00269074: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x00269078: sdc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X50, ctx->r29);
    // 0x0026907C: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x00269080: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00269084: bne         $v1, $v0, L_002690CC
    if (ctx->r3 != ctx->r2) {
        // 0x00269088: addu        $s3, $a3, $zero
        ctx->r19 = ADD32(ctx->r7, 0);
            goto L_002690CC;
    }
    // 0x00269088: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    // 0x0026908C: lw          $v1, 0x140($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X140);
    // 0x00269090: andi        $v0, $v1, 0x280
    ctx->r2 = ctx->r3 & 0X280;
    // 0x00269094: beq         $v0, $zero, L_002690A4
    if (ctx->r2 == 0) {
        // 0x00269098: addu        $s2, $s0, $zero
        ctx->r18 = ADD32(ctx->r16, 0);
            goto L_002690A4;
    }
    // 0x00269098: addu        $s2, $s0, $zero
    ctx->r18 = ADD32(ctx->r16, 0);
    // 0x0026909C: j           L_002690BC
    // 0x002690A0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_002690BC;
    // 0x002690A0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_002690A4:
    // 0x002690A4: andi        $v0, $v1, 0x400
    ctx->r2 = ctx->r3 & 0X400;
    // 0x002690A8: beq         $v0, $zero, L_002690BC
    if (ctx->r2 == 0) {
        // 0x002690AC: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_002690BC;
    }
    // 0x002690AC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x002690B0: jal         0x002685F0
    // 0x002690B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002685F0(rdram, ctx);
        goto after_0;
    // 0x002690B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x002690B8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
L_002690BC:
    // 0x002690BC: lw          $v1, 0x140($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X140);
    // 0x002690C0: lui         $v0, 0xC
    ctx->r2 = S32(0XC << 16);
    // 0x002690C4: j           L_002690D4
    // 0x002690C8: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
        goto L_002690D4;
    // 0x002690C8: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
L_002690CC:
    // 0x002690CC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x002690D0: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
L_002690D4:
    // 0x002690D4: bnel        $v1, $zero, L_002690F8
    if (ctx->r3 != 0) {
        // 0x002690D8: sw          $zero, 0x24($s0)
        MEM_W(0X24, ctx->r16) = 0;
            goto L_002690F8;
    }
    goto skip_0;
    // 0x002690D8: sw          $zero, 0x24($s0)
    MEM_W(0X24, ctx->r16) = 0;
    skip_0:
    // 0x002690DC: bne         $a0, $zero, L_00269104
    if (ctx->r4 != 0) {
        // 0x002690E0: nop
    
            goto L_00269104;
    }
    // 0x002690E0: nop

    // 0x002690E4: lhu         $v0, 0x52($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X52);
    // 0x002690E8: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x002690EC: bne         $v0, $zero, L_00269104
    if (ctx->r2 != 0) {
        // 0x002690F0: nop
    
            goto L_00269104;
    }
    // 0x002690F0: nop

    // 0x002690F4: sw          $zero, 0x24($s0)
    MEM_W(0X24, ctx->r16) = 0;
L_002690F8:
    // 0x002690F8: sw          $zero, 0x28($s0)
    MEM_W(0X28, ctx->r16) = 0;
    // 0x002690FC: j           L_00269484
    // 0x00269100: sw          $zero, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = 0;
        goto L_00269484;
    // 0x00269100: sw          $zero, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = 0;
L_00269104:
    // 0x00269104: lhu         $v0, 0x52($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X52);
    // 0x00269108: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x0026910C: beql        $v0, $zero, L_00269344
    if (ctx->r2 == 0) {
        // 0x00269110: sw          $zero, 0x10($sp)
        MEM_W(0X10, ctx->r29) = 0;
            goto L_00269344;
    }
    goto skip_1;
    // 0x00269110: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    skip_1:
    // 0x00269114: beq         $s3, $zero, L_00269340
    if (ctx->r19 == 0) {
        // 0x00269118: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_00269340;
    }
    // 0x00269118: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0026911C: lb          $v0, 0x5F($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X5F);
    // 0x00269120: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00269124: lwc1        $f1, 0x7EF0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7EF0);
    // 0x00269128: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0026912C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00269130: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00269134: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x00269138: lb          $v0, 0x60($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X60);
    // 0x0026913C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00269140: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00269144: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00269148: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x0026914C: lb          $v0, 0x61($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X61);
    // 0x00269150: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00269154: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00269158: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0026915C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x00269160: lbu         $v0, 0x5D($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5D);
    // 0x00269164: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00269168: lwc1        $f1, 0x7EF4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7EF4);
    // 0x0026916C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00269170: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00269174: mul.s       $f1, $f0, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00269178: mfc1        $a2, $f1
    ctx->r6 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x0026917C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00269180: lwc1        $f1, 0x7EF8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7EF8);
    // 0x00269184: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00269188: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026918C: lwc1        $f1, 0x7EFC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7EFC);
    // 0x00269190: mul.s       $f20, $f0, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00269194: jal         0x0020EF60
    // 0x00269198: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_1;
    // 0x00269198: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_1:
    // 0x0026919C: lhu         $v1, 0x52($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X52);
    // 0x002691A0: andi        $v0, $v1, 0x600
    ctx->r2 = ctx->r3 & 0X600;
    // 0x002691A4: beq         $v0, $zero, L_002691D0
    if (ctx->r2 == 0) {
        // 0x002691A8: andi        $v0, $v1, 0x400
        ctx->r2 = ctx->r3 & 0X400;
            goto L_002691D0;
    }
    // 0x002691A8: andi        $v0, $v1, 0x400
    ctx->r2 = ctx->r3 & 0X400;
    // 0x002691AC: bnel        $v0, $zero, L_002691B4
    if (ctx->r2 != 0) {
        // 0x002691B0: neg.s       $f20, $f20
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = -ctx->f20.fl;
            goto L_002691B4;
    }
    goto skip_2;
    // 0x002691B0: neg.s       $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = -ctx->f20.fl;
    skip_2:
L_002691B4:
    // 0x002691B4: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x002691B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002691BC: bne         $v1, $v0, L_002691D0
    if (ctx->r3 != ctx->r2) {
        // 0x002691C0: nop
    
            goto L_002691D0;
    }
    // 0x002691C0: nop

    // 0x002691C4: lwc1        $f0, 0x50($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X50);
    // 0x002691C8: add.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f20.fl;
    // 0x002691CC: swc1        $f0, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f0.u32l;
L_002691D0:
    // 0x002691D0: lhu         $v0, 0x52($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X52);
    // 0x002691D4: andi        $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 & 0X2000;
    // 0x002691D8: beq         $v0, $zero, L_0026934C
    if (ctx->r2 == 0) {
        // 0x002691DC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0026934C;
    }
    // 0x002691DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002691E0: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x002691E4: bne         $v1, $v0, L_0026934C
    if (ctx->r3 != ctx->r2) {
        // 0x002691E8: addu        $s2, $s0, $zero
        ctx->r18 = ADD32(ctx->r16, 0);
            goto L_0026934C;
    }
    // 0x002691E8: addu        $s2, $s0, $zero
    ctx->r18 = ADD32(ctx->r16, 0);
    // 0x002691EC: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x002691F0: lw          $t0, 0x10($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X10);
    // 0x002691F4: lw          $t1, 0x14($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X14);
    // 0x002691F8: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x002691FC: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x00269200: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x00269204: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x00269208: jal         0x0020EAA0
    // 0x0026920C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_0020EAA0(rdram, ctx);
        goto after_2;
    // 0x0026920C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_2:
    // 0x00269210: lwc1        $f1, 0x50($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X50);
    // 0x00269214: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x00269218: c.eq.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl == ctx->f1.fl;
    // 0x0026921C: nop

    // 0x00269220: bc1t        L_00269334
    if (c1cs) {
        // 0x00269224: swc1        $f1, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
            goto L_00269334;
    }
    // 0x00269224: swc1        $f1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00269228: jal         0x00210EF0
    // 0x0026922C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_00210EF0(rdram, ctx);
        goto after_3;
    // 0x0026922C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_3:
    // 0x00269230: jal         0x00210EF0
    // 0x00269234: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    func_00210EF0(rdram, ctx);
        goto after_4;
    // 0x00269234: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    after_4:
    // 0x00269238: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x0026923C: lwc1        $f2, 0x34($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X34);
    // 0x00269240: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x00269244: nop

    // 0x00269248: bc1f        L_00269268
    if (!c1cs) {
        // 0x0026924C: nop
    
            goto L_00269268;
    }
    // 0x0026924C: nop

    // 0x00269250: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00269254: lwc1        $f0, 0x7F00($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7F00);
    // 0x00269258: add.s       $f3, $f2, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x0026925C: sub.s       $f0, $f4, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x00269260: j           L_0026927C
    // 0x00269264: sub.s       $f1, $f3, $f4
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f1.fl = ctx->f3.fl - ctx->f4.fl;
        goto L_0026927C;
    // 0x00269264: sub.s       $f1, $f3, $f4
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f1.fl = ctx->f3.fl - ctx->f4.fl;
L_00269268:
    // 0x00269268: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026926C: lwc1        $f0, 0x7F04($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7F04);
    // 0x00269270: sub.s       $f3, $f2, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x00269274: sub.s       $f0, $f2, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f4.fl;
    // 0x00269278: sub.s       $f1, $f4, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = ctx->f4.fl - ctx->f3.fl;
L_0026927C:
    // 0x0026927C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00269280: nop

    // 0x00269284: bc1tl       L_0026928C
    if (c1cs) {
        // 0x00269288: swc1        $f3, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
            goto L_0026928C;
    }
    goto skip_3;
    // 0x00269288: swc1        $f3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    skip_3:
L_0026928C:
    // 0x0026928C: lwc1        $f2, 0x34($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X34);
    // 0x00269290: lwc1        $f3, 0x30($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x00269294: c.lt.s      $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f3.fl < ctx->f2.fl;
    // 0x00269298: nop

    // 0x0026929C: bc1f        L_002692E4
    if (!c1cs) {
        // 0x002692A0: nop
    
            goto L_002692E4;
    }
    // 0x002692A0: nop

    // 0x002692A4: lbu         $v0, 0x5D($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5D);
    // 0x002692A8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002692AC: lwc1        $f1, 0x25F4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X25F4);
    // 0x002692B0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002692B4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002692B8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002692BC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002692C0: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x002692C4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002692C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002692CC: lwc1        $f1, 0x7F08($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7F08);
    // 0x002692D0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002692D4: add.s       $f0, $f3, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f3.fl + ctx->f0.fl;
    // 0x002692D8: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x002692DC: j           L_00269320
    // 0x002692E0: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
        goto L_00269320;
    // 0x002692E0: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
L_002692E4:
    // 0x002692E4: lbu         $v0, 0x5D($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5D);
    // 0x002692E8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002692EC: lwc1        $f1, 0x25F4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X25F4);
    // 0x002692F0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002692F4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002692F8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002692FC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00269300: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x00269304: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00269308: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026930C: lwc1        $f1, 0x7F0C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7F0C);
    // 0x00269310: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00269314: sub.s       $f0, $f3, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f3.fl - ctx->f0.fl;
    // 0x00269318: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x0026931C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
L_00269320:
    // 0x00269320: nop

    // 0x00269324: bc1tl       L_0026932C
    if (c1cs) {
        // 0x00269328: swc1        $f2, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
            goto L_0026932C;
    }
    goto skip_4;
    // 0x00269328: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    skip_4:
L_0026932C:
    // 0x0026932C: jal         0x00210EF0
    // 0x00269330: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_00210EF0(rdram, ctx);
        goto after_5;
    // 0x00269330: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_5:
L_00269334:
    // 0x00269334: lwc1        $f0, 0x30($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X30);
    // 0x00269338: j           L_0026934C
    // 0x0026933C: swc1        $f0, 0x50($s2)
    MEM_W(0X50, ctx->r18) = ctx->f0.u32l;
        goto L_0026934C;
    // 0x0026933C: swc1        $f0, 0x50($s2)
    MEM_W(0X50, ctx->r18) = ctx->f0.u32l;
L_00269340:
    // 0x00269340: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
L_00269344:
    // 0x00269344: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00269348: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
L_0026934C:
    // 0x0026934C: lbu         $v0, 0x5D($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5D);
    // 0x00269350: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00269354: lwc1        $f1, 0x25F0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X25F0);
    // 0x00269358: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0026935C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00269360: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00269364: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00269368: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x0026936C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00269370: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00269374: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00269378: nop

    // 0x0026937C: bc1tl       L_002693B4
    if (c1cs) {
        // 0x00269380: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_002693B4;
    }
    goto skip_5;
    // 0x00269380: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_5:
    // 0x00269384: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00269388: lwc1        $f2, 0x7F10($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X7F10);
    // 0x0026938C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x00269390: nop

    // 0x00269394: bc1tl       L_002693B4
    if (c1cs) {
        // 0x00269398: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_002693B4;
    }
    goto skip_6;
    // 0x00269398: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_6:
    // 0x0026939C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x002693A0: nop

    // 0x002693A4: bc1tl       L_002693B4
    if (c1cs) {
        // 0x002693A8: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_002693B4;
    }
    goto skip_7;
    // 0x002693A8: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_7:
    // 0x002693AC: j           L_002693B8
    // 0x002693B0: addiu       $a0, $s0, 0x24
    ctx->r4 = ADD32(ctx->r16, 0X24);
        goto L_002693B8;
    // 0x002693B0: addiu       $a0, $s0, 0x24
    ctx->r4 = ADD32(ctx->r16, 0X24);
L_002693B4:
    // 0x002693B4: addiu       $a0, $s0, 0x24
    ctx->r4 = ADD32(ctx->r16, 0X24);
L_002693B8:
    // 0x002693B8: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x002693BC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x002693C0: jal         0x0020EF8C
    // 0x002693C4: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    func_0020EF8C(rdram, ctx);
        goto after_6;
    // 0x002693C4: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    after_6:
    // 0x002693C8: lwc1        $f0, 0x0($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X0);
    // 0x002693CC: lwc1        $f1, 0x24($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X24);
    // 0x002693D0: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x002693D4: swc1        $f0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->f0.u32l;
    // 0x002693D8: lwc1        $f0, 0x8($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X8);
    // 0x002693DC: lwc1        $f1, 0x2C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X2C);
    // 0x002693E0: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x002693E4: swc1        $f0, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->f0.u32l;
    // 0x002693E8: lhu         $v0, 0x52($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X52);
    // 0x002693EC: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x002693F0: beq         $v0, $zero, L_00269464
    if (ctx->r2 == 0) {
        // 0x002693F4: nop
    
            goto L_00269464;
    }
    // 0x002693F4: nop

    // 0x002693F8: lwc1        $f1, 0x14($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X14);
    // 0x002693FC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00269400: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x00269404: nop

    // 0x00269408: bc1t        L_00269418
    if (c1cs) {
        // 0x0026940C: nop
    
            goto L_00269418;
    }
    // 0x0026940C: nop

    // 0x00269410: j           L_00269434
    // 0x00269414: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
        goto L_00269434;
    // 0x00269414: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
L_00269418:
    // 0x00269418: lwc1        $f0, 0x28($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X28);
    // 0x0026941C: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00269420: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00269424: lwc1        $f2, 0x7F14($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X7F14);
    // 0x00269428: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0026942C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00269430: swc1        $f0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f0.u32l;
L_00269434:
    // 0x00269434: lwc1        $f1, 0x28($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X28);
    // 0x00269438: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026943C: lwc1        $f0, 0x7F18($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7F18);
    // 0x00269440: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00269444: add.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f1.fl;
    // 0x00269448: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026944C: lwc1        $f0, 0x7F1C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7F1C);
    // 0x00269450: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00269454: lwc1        $f0, 0x1C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x00269458: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0026945C: j           L_00269484
    // 0x00269460: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
        goto L_00269484;
    // 0x00269460: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
L_00269464:
    // 0x00269464: lwc1        $f0, 0x14($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X14);
    // 0x00269468: lwc1        $f1, 0x28($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X28);
    // 0x0026946C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00269470: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00269474: lwc1        $f2, 0x7F20($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X7F20);
    // 0x00269478: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0026947C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00269480: swc1        $f1, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
L_00269484:
    // 0x00269484: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x00269488: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x0026948C: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x00269490: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x00269494: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x00269498: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x0026949C: ldc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X50);
    // 0x002694A0: jr          $ra
    // 0x002694A4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x002694A4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
