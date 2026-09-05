#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_0043E0E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_0045283C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045283C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00452840: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00452844: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00452848: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0045284C: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x00452850: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00452854: jal         0x00275904
    // 0x00452858: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_00275904(rdram, ctx);
        goto after_0;
    // 0x00452858: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_0:
    // 0x0045285C: jal         0x002759B4
    // 0x00452860: nop

    func_002759B4(rdram, ctx);
        goto after_1;
    // 0x00452860: nop

    after_1:
    // 0x00452864: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x00452868: lw          $a0, 0x1F78($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F78);
    // 0x0045286C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00452870: sw          $v0, 0x1F70($at)
    MEM_W(0X1F70, ctx->r1) = ctx->r2;
    // 0x00452874: jal         0x002759C4
    // 0x00452878: nop

    func_002759C4(rdram, ctx);
        goto after_2;
    // 0x00452878: nop

    after_2:
    // 0x0045287C: jal         0x0027598C
    // 0x00452880: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_0027598C(rdram, ctx);
        goto after_3;
    // 0x00452880: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x00452884: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00452888: sw          $zero, 0x1F74($at)
    MEM_W(0X1F74, ctx->r1) = 0;
    // 0x0045288C: jal         0x00285CC4
    // 0x00452890: nop

    func_00285CC4(rdram, ctx);
        goto after_4;
    // 0x00452890: nop

    after_4:
    // 0x00452894: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00452898: lui         $a2, 0x44
    ctx->r6 = S32(0X44 << 16);
    // 0x0045289C: addiu       $a2, $a2, -0x6C2C
    ctx->r6 = ADD32(ctx->r6, -0X6C2C);
    // 0x004528A0: jal         0x00416894
    // 0x004528A4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00416894(rdram, ctx);
        goto after_5;
    // 0x004528A4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_5:
    // 0x004528A8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x004528AC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x004528B0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004528B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004528B8: jr          $ra
    // 0x004528BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x004528BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002640DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002640DC: lb          $v1, 0x37($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X37);
    // 0x002640E0: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x002640E4: beq         $v0, $zero, L_00264150
    if (ctx->r2 == 0) {
        // 0x002640E8: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00264150;
    }
    // 0x002640E8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x002640EC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002640F0: addu        $at, $at, $v0
    gpr jr_addend_002640F8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x002640F4: lw          $v0, 0x7C18($at)
    ctx->r2 = ADD32(ctx->r1, 0X7C18);
    // 0x002640F8: jr          $v0
    // 0x002640FC: nop

    switch (jr_addend_002640F8 >> 2) {
        case 0: goto L_00264110; break;
        case 1: goto L_00264108; break;
        case 2: goto L_00264108; break;
        case 3: goto L_00264100; break;
        case 4: goto L_00264160; break;
        default: switch_error(__func__, 0x002640F8, 0x800A7C18);
    }
    // 0x002640FC: nop

L_00264100:
    // 0x00264100: jr          $ra
    // 0x00264104: addiu       $v0, $zero, 0x5280
    ctx->r2 = ADD32(0, 0X5280);
    return;
    // 0x00264104: addiu       $v0, $zero, 0x5280
    ctx->r2 = ADD32(0, 0X5280);
L_00264108:
    // 0x00264108: jr          $ra
    // 0x0026410C: addiu       $v0, $zero, 0x5294
    ctx->r2 = ADD32(0, 0X5294);
    return;
    // 0x0026410C: addiu       $v0, $zero, 0x5294
    ctx->r2 = ADD32(0, 0X5294);
L_00264110:
    // 0x00264110: lb          $a1, 0x34($a1)
    ctx->r5 = MEM_B(ctx->r5, 0X34);
    // 0x00264114: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00264118: beq         $a1, $v0, L_00264158
    if (ctx->r5 == ctx->r2) {
        // 0x0026411C: slti        $v0, $a1, 0x2
        ctx->r2 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
            goto L_00264158;
    }
    // 0x0026411C: slti        $v0, $a1, 0x2
    ctx->r2 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x00264120: beq         $v0, $zero, L_00264138
    if (ctx->r2 == 0) {
        // 0x00264124: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00264138;
    }
    // 0x00264124: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00264128: beq         $a1, $zero, L_00264150
    if (ctx->r5 == 0) {
        // 0x0026412C: addiu       $v0, $zero, 0x526C
        ctx->r2 = ADD32(0, 0X526C);
            goto L_00264150;
    }
    // 0x0026412C: addiu       $v0, $zero, 0x526C
    ctx->r2 = ADD32(0, 0X526C);
    // 0x00264130: j           L_00264168
    // 0x00264134: nop

    func_00264168(rdram, ctx);
    return;
    // 0x00264134: nop

L_00264138:
    // 0x00264138: beq         $a1, $v0, L_00264150
    if (ctx->r5 == ctx->r2) {
        // 0x0026413C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00264150;
    }
    // 0x0026413C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00264140: beq         $a1, $v0, L_00264158
    if (ctx->r5 == ctx->r2) {
        // 0x00264144: addiu       $v0, $zero, 0x526C
        ctx->r2 = ADD32(0, 0X526C);
            goto L_00264158;
    }
    // 0x00264144: addiu       $v0, $zero, 0x526C
    ctx->r2 = ADD32(0, 0X526C);
    // 0x00264148: j           L_00264168
    // 0x0026414C: nop

    func_00264168(rdram, ctx);
    return;
    // 0x0026414C: nop

L_00264150:
    // 0x00264150: jr          $ra
    // 0x00264154: addiu       $v0, $zero, 0x526C
    ctx->r2 = ADD32(0, 0X526C);
    return;
    // 0x00264154: addiu       $v0, $zero, 0x526C
    ctx->r2 = ADD32(0, 0X526C);
L_00264158:
    // 0x00264158: jr          $ra
    // 0x0026415C: addiu       $v0, $zero, 0x5276
    ctx->r2 = ADD32(0, 0X5276);
    return;
    // 0x0026415C: addiu       $v0, $zero, 0x5276
    ctx->r2 = ADD32(0, 0X5276);
L_00264160:
    // 0x00264160: jr          $ra
    // 0x00264164: addiu       $v0, $zero, 0x528A
    ctx->r2 = ADD32(0, 0X528A);
    return;
    // 0x00264164: addiu       $v0, $zero, 0x528A
    ctx->r2 = ADD32(0, 0X528A);
;}
RECOMP_FUNC void func_0026007C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026007C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00260080: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00260084: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00260088: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0026008C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00260090: lwc1        $f1, 0xD0($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XD0);
    // 0x00260094: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00260098: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0026009C: nop

    // 0x002600A0: bc1f        L_002600B0
    if (!c1cs) {
        // 0x002600A4: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_002600B0;
    }
    // 0x002600A4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x002600A8: jal         0x00246918
    // 0x002600AC: nop

    func_00246918(rdram, ctx);
        goto after_0;
    // 0x002600AC: nop

    after_0:
L_002600B0:
    // 0x002600B0: lwc1        $f1, 0x40($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X40);
    // 0x002600B4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002600B8: lwc1        $f0, 0x7978($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7978);
    // 0x002600BC: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x002600C0: nop

    // 0x002600C4: bc1f        L_002600D4
    if (!c1cs) {
        // 0x002600C8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_002600D4;
    }
    // 0x002600C8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002600CC: jal         0x002600E8
    // 0x002600D0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002600E8(rdram, ctx);
        goto after_1;
    // 0x002600D0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
L_002600D4:
    // 0x002600D4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x002600D8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002600DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002600E0: jr          $ra
    // 0x002600E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002600E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00297E8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00297E8C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x00297E90: sdc1        $f23, 0x30($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X30, ctx->r29);
    // 0x00297E94: mtc1        $a1, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r5;
    // 0x00297E98: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x00297E9C: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x00297EA0: sdc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X38, ctx->r29);
    // 0x00297EA4: mtc1        $a3, $f24
    ctx->f24.u32l = ctx->r7;
    // 0x00297EA8: sdc1        $f21, 0x20($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X20, ctx->r29);
    // 0x00297EAC: lwc1        $f21, 0x60($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X60);
    // 0x00297EB0: sdc1        $f25, 0x40($sp)
    CHECK_FR(ctx, 25);
    SD(ctx->f25.u64, 0X40, ctx->r29);
    // 0x00297EB4: lwc1        $f25, 0x64($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X64);
    // 0x00297EB8: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x00297EBC: lwc1        $f22, 0x68($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X68);
    // 0x00297EC0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00297EC4: sdc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X48, ctx->r29);
    // 0x00297EC8: lwc1        $f26, 0x6C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x00297ECC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00297ED0: jal         0x00297BCC
    // 0x00297ED4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_00297BCC(rdram, ctx);
        goto after_0;
    // 0x00297ED4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x00297ED8: sub.s       $f2, $f20, $f23
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f2.fl = ctx->f20.fl - ctx->f23.fl;
    // 0x00297EDC: sub.s       $f4, $f21, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = ctx->f21.fl - ctx->f24.fl;
    // 0x00297EE0: sub.s       $f3, $f22, $f25
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f3.fl = ctx->f22.fl - ctx->f25.fl;
    // 0x00297EE4: add.s       $f20, $f20, $f23
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f23.fl;
    // 0x00297EE8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00297EEC: add.s       $f21, $f21, $f24
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f21.fl = ctx->f21.fl + ctx->f24.fl;
    // 0x00297EF0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00297EF4: lwc1        $f0, -0x5814($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5814);
    // 0x00297EF8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00297EFC: lwc1        $f1, -0x5810($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X5810);
    // 0x00297F00: add.s       $f22, $f22, $f25
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f25.fl;
    // 0x00297F04: swc1        $f0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f0.u32l;
    // 0x00297F08: div.s       $f0, $f1, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f1.fl, ctx->f2.fl);
    // 0x00297F0C: div.s       $f1, $f1, $f4
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f1.fl = DIV_S(ctx->f1.fl, ctx->f4.fl);
    // 0x00297F10: neg.s       $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = -ctx->f20.fl;
    // 0x00297F14: div.s       $f20, $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = DIV_S(ctx->f20.fl, ctx->f2.fl);
    // 0x00297F18: neg.s       $f21, $f21
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f21.fl); 
    ctx->f21.fl = -ctx->f21.fl;
    // 0x00297F1C: div.s       $f21, $f21, $f4
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f21.fl = DIV_S(ctx->f21.fl, ctx->f4.fl);
    // 0x00297F20: neg.s       $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = -ctx->f22.fl;
    // 0x00297F24: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    // 0x00297F28: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00297F2C: lwc1        $f0, -0x580C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X580C);
    // 0x00297F30: div.s       $f22, $f22, $f3
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f22.fl = DIV_S(ctx->f22.fl, ctx->f3.fl);
    // 0x00297F34: swc1        $f1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x00297F38: swc1        $f20, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f20.u32l;
    // 0x00297F3C: swc1        $f21, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f_odd[(21 - 1) * 2];
    // 0x00297F40: swc1        $f22, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f22.u32l;
    // 0x00297F44: div.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f3.fl);
    // 0x00297F48: swc1        $f0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f0.u32l;
L_00297F4C:
    // 0x00297F4C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00297F50: addu        $v1, $s0, $zero
    ctx->r3 = ADD32(ctx->r16, 0);
L_00297F54:
    // 0x00297F54: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x00297F58: mul.s       $f0, $f0, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f26.fl);
    // 0x00297F5C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00297F60: slti        $v0, $a0, 0x4
    ctx->r2 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
    // 0x00297F64: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
    // 0x00297F68: bne         $v0, $zero, L_00297F54
    if (ctx->r2 != 0) {
        // 0x00297F6C: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_00297F54;
    }
    // 0x00297F6C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x00297F70: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00297F74: slti        $v0, $a1, 0x4
    ctx->r2 = SIGNED(ctx->r5) < 0X4 ? 1 : 0;
    // 0x00297F78: bne         $v0, $zero, L_00297F4C
    if (ctx->r2 != 0) {
        // 0x00297F7C: addiu       $s0, $s0, 0x10
        ctx->r16 = ADD32(ctx->r16, 0X10);
            goto L_00297F4C;
    }
    // 0x00297F7C: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x00297F80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00297F84: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00297F88: ldc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X48);
    // 0x00297F8C: ldc1        $f25, 0x40($sp)
    CHECK_FR(ctx, 25);
    ctx->f25.u64 = LD(ctx->r29, 0X40);
    // 0x00297F90: ldc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X38);
    // 0x00297F94: ldc1        $f23, 0x30($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X30);
    // 0x00297F98: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x00297F9C: ldc1        $f21, 0x20($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X20);
    // 0x00297FA0: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x00297FA4: jr          $ra
    // 0x00297FA8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x00297FA8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_00256450(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00256450: addiu       $v0, $a0, 0xCD0
    ctx->r2 = ADD32(ctx->r4, 0XCD0);
    // 0x00256454: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x00256458: sw          $zero, 0xCD0($a0)
    MEM_W(0XCD0, ctx->r4) = 0;
    // 0x0025645C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x00256460: sw          $v1, 0x37C($v0)
    MEM_W(0X37C, ctx->r2) = ctx->r3;
    // 0x00256464: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x00256468: jr          $ra
    // 0x0025646C: sw          $zero, 0x1284($a0)
    MEM_W(0X1284, ctx->r4) = 0;
    return;
    // 0x0025646C: sw          $zero, 0x1284($a0)
    MEM_W(0X1284, ctx->r4) = 0;
;}
RECOMP_FUNC void func_0044FDC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044FDC0: lh          $v1, 0x0($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X0);
    // 0x0044FDC4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0044FDC8: bne         $v1, $v0, L_0044FDD4
    if (ctx->r3 != ctx->r2) {
        // 0x0044FDCC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0044FDD4;
    }
    // 0x0044FDCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0044FDD0: sw          $v0, 0x328($a1)
    MEM_W(0X328, ctx->r5) = ctx->r2;
L_0044FDD4:
    // 0x0044FDD4: jr          $ra
    // 0x0044FDD8: nop

    return;
    // 0x0044FDD8: nop

;}
RECOMP_FUNC void func_00273BF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00273BF8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00273BFC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00273C00: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00273C04: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x00273C08: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x00273C0C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00273C10: sll         $s0, $a1, 1
    ctx->r16 = S32(ctx->r5 << 1);
    // 0x00273C14: addu        $s0, $s0, $a1
    ctx->r16 = ADD32(ctx->r16, ctx->r5);
    // 0x00273C18: sll         $v0, $s0, 4
    ctx->r2 = S32(ctx->r16 << 4);
    // 0x00273C1C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x00273C20: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x00273C24: addu        $v0, $s0, $s1
    ctx->r2 = ADD32(ctx->r16, ctx->r17);
    // 0x00273C28: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00273C2C: lw          $a0, 0xB4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XB4);
    // 0x00273C30: jal         0x00293CE0
    // 0x00273C34: addiu       $a0, $a0, 0x84
    ctx->r4 = ADD32(ctx->r4, 0X84);
    func_00293CE0(rdram, ctx);
        goto after_0;
    // 0x00273C34: addiu       $a0, $a0, 0x84
    ctx->r4 = ADD32(ctx->r4, 0X84);
    after_0:
    // 0x00273C38: addu        $s1, $s1, $s0
    ctx->r17 = ADD32(ctx->r17, ctx->r16);
    // 0x00273C3C: lw          $v0, 0xA8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XA8);
    // 0x00273C40: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x00273C44: sw          $v0, 0xA8($s1)
    MEM_W(0XA8, ctx->r17) = ctx->r2;
    // 0x00273C48: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00273C4C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00273C50: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00273C54: jr          $ra
    // 0x00273C58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00273C58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0026ECF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026ECF0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0026ECF4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0026ECF8: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0026ECFC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0026ED00: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0026ED04: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0026ED08: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0026ED0C: jal         0x0029DFF0
    // 0x0026ED10: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_0029DFF0(rdram, ctx);
        goto after_0;
    // 0x0026ED10: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x0026ED14: lw          $s0, 0x14($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X14);
    // 0x0026ED18: beq         $s0, $zero, L_0026ED80
    if (ctx->r16 == 0) {
        // 0x0026ED1C: addu        $s4, $v0, $zero
        ctx->r20 = ADD32(ctx->r2, 0);
            goto L_0026ED80;
    }
    // 0x0026ED1C: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x0026ED20: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
L_0026ED24:
    // 0x0026ED24: lw          $s2, 0x4($s0)
    ctx->r18 = MEM_W(ctx->r16, 0X4);
    // 0x0026ED28: jal         0x0026EE40
    // 0x0026ED2C: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
    func_0026EE40(rdram, ctx);
        goto after_1;
    // 0x0026ED2C: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
    after_1:
    // 0x0026ED30: bnel        $v0, $zero, L_0026ED48
    if (ctx->r2 != 0) {
        // 0x0026ED34: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_0026ED48;
    }
    goto skip_0;
    // 0x0026ED34: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    skip_0:
    // 0x0026ED38: jal         0x0026EE40
    // 0x0026ED3C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    func_0026EE40(rdram, ctx);
        goto after_2;
    // 0x0026ED3C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    after_2:
    // 0x0026ED40: bnel        $v0, $zero, L_0026ED48
    if (ctx->r2 != 0) {
        // 0x0026ED44: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_0026ED48;
    }
    goto skip_1;
    // 0x0026ED44: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    skip_1:
L_0026ED48:
    // 0x0026ED48: beql        $s1, $zero, L_0026ED78
    if (ctx->r17 == 0) {
        // 0x0026ED4C: addu        $s0, $s2, $zero
        ctx->r16 = ADD32(ctx->r18, 0);
            goto L_0026ED78;
    }
    goto skip_2;
    // 0x0026ED4C: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
    skip_2:
    // 0x0026ED50: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
    // 0x0026ED54: bnel        $v0, $zero, L_0026ED5C
    if (ctx->r2 != 0) {
        // 0x0026ED58: sw          $zero, 0x0($v0)
        MEM_W(0X0, ctx->r2) = 0;
            goto L_0026ED5C;
    }
    goto skip_3;
    // 0x0026ED58: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    skip_3:
L_0026ED5C:
    // 0x0026ED5C: addiu       $a0, $s3, 0x14
    ctx->r4 = ADD32(ctx->r19, 0X14);
    // 0x0026ED60: jal         0x00200738
    // 0x0026ED64: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200738(rdram, ctx);
        goto after_3;
    // 0x0026ED64: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x0026ED68: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0026ED6C: jal         0x00200574
    // 0x0026ED70: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200574(rdram, ctx);
        goto after_4;
    // 0x0026ED70: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x0026ED74: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
L_0026ED78:
    // 0x0026ED78: bne         $s0, $zero, L_0026ED24
    if (ctx->r16 != 0) {
        // 0x0026ED7C: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_0026ED24;
    }
    // 0x0026ED7C: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
L_0026ED80:
    // 0x0026ED80: jal         0x0029E010
    // 0x0026ED84: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_0029E010(rdram, ctx);
        goto after_5;
    // 0x0026ED84: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_5:
    // 0x0026ED88: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0026ED8C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0026ED90: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0026ED94: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0026ED98: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0026ED9C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0026EDA0: jr          $ra
    // 0x0026EDA4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0026EDA4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00277668(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00277668: addu        $t6, $a0, $zero
    ctx->r14 = ADD32(ctx->r4, 0);
    // 0x0027766C: addu        $t8, $a1, $zero
    ctx->r24 = ADD32(ctx->r5, 0);
    // 0x00277670: addu        $t5, $a2, $zero
    ctx->r13 = ADD32(ctx->r6, 0);
    // 0x00277674: addu        $t7, $a3, $zero
    ctx->r15 = ADD32(ctx->r7, 0);
    // 0x00277678: lui         $t0, 0xFA00
    ctx->r8 = S32(0XFA00 << 16);
    // 0x0027767C: ori         $t0, $t0, 0xFFFF
    ctx->r8 = ctx->r8 | 0XFFFF;
    // 0x00277680: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x00277684: addiu       $t3, $t3, -0x71DC
    ctx->r11 = ADD32(ctx->r11, -0X71DC);
    // 0x00277688: addu        $t4, $t5, $zero
    ctx->r12 = ADD32(ctx->r13, 0);
    // 0x0027768C: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x00277690: lw          $t1, 0x0($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X0);
    // 0x00277694: lw          $t2, 0x10($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X10);
    // 0x00277698: lbu         $v1, 0x17($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X17);
    // 0x0027769C: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    // 0x002776A0: lbu         $a1, 0x1F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1F);
    // 0x002776A4: lbu         $a2, 0x23($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X23);
    // 0x002776A8: addu        $a3, $t1, $zero
    ctx->r7 = ADD32(ctx->r9, 0);
    // 0x002776AC: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x002776B0: sw          $t1, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r9;
    // 0x002776B4: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x002776B8: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x002776BC: addiu       $a3, $t1, 0x8
    ctx->r7 = ADD32(ctx->r9, 0X8);
    // 0x002776C0: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x002776C4: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x002776C8: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x002776CC: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x002776D0: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x002776D4: sll         $a1, $a1, 8
    ctx->r5 = S32(ctx->r5 << 8);
    // 0x002776D8: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    // 0x002776DC: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    // 0x002776E0: or          $v1, $v1, $a2
    ctx->r3 = ctx->r3 | ctx->r6;
    // 0x002776E4: sw          $a3, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r7;
    // 0x002776E8: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x002776EC: addiu       $t0, $t1, 0x10
    ctx->r8 = ADD32(ctx->r9, 0X10);
    // 0x002776F0: sw          $v1, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r3;
    // 0x002776F4: bgez        $t5, L_00277700
    if (SIGNED(ctx->r13) >= 0) {
        // 0x002776F8: sw          $t0, 0x0($t3)
        MEM_W(0X0, ctx->r11) = ctx->r8;
            goto L_00277700;
    }
    // 0x002776F8: sw          $t0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r8;
    // 0x002776FC: addu        $t4, $zero, $zero
    ctx->r12 = ADD32(0, 0);
L_00277700:
    // 0x00277700: addu        $v1, $t8, $t2
    ctx->r3 = ADD32(ctx->r24, ctx->r10);
    // 0x00277704: andi        $v0, $t4, 0x3FF
    ctx->r2 = ctx->r12 & 0X3FF;
    // 0x00277708: bgez        $v1, L_00277714
    if (SIGNED(ctx->r3) >= 0) {
        // 0x0027770C: sll         $a0, $v0, 14
        ctx->r4 = S32(ctx->r2 << 14);
            goto L_00277714;
    }
    // 0x0027770C: sll         $a0, $v0, 14
    ctx->r4 = S32(ctx->r2 << 14);
    // 0x00277710: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_00277714:
    // 0x00277714: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x00277718: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0027771C: lui         $v1, 0xF600
    ctx->r3 = S32(0XF600 << 16);
    // 0x00277720: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00277724: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x00277728: sw          $v0, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r2;
    // 0x0027772C: bgez        $t6, L_00277738
    if (SIGNED(ctx->r14) >= 0) {
        // 0x00277730: addu        $v0, $t6, $zero
        ctx->r2 = ADD32(ctx->r14, 0);
            goto L_00277738;
    }
    // 0x00277730: addu        $v0, $t6, $zero
    ctx->r2 = ADD32(ctx->r14, 0);
    // 0x00277734: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00277738:
    // 0x00277738: addu        $v1, $t8, $zero
    ctx->r3 = ADD32(ctx->r24, 0);
    // 0x0027773C: andi        $v0, $v0, 0x3FF
    ctx->r2 = ctx->r2 & 0X3FF;
    // 0x00277740: bgez        $t8, L_0027774C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x00277744: sll         $a0, $v0, 14
        ctx->r4 = S32(ctx->r2 << 14);
            goto L_0027774C;
    }
    // 0x00277744: sll         $a0, $v0, 14
    ctx->r4 = S32(ctx->r2 << 14);
    // 0x00277748: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_0027774C:
    // 0x0027774C: addu        $a1, $t5, $zero
    ctx->r5 = ADD32(ctx->r13, 0);
    // 0x00277750: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x00277754: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00277758: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x0027775C: sw          $v0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r2;
    // 0x00277760: addiu       $a3, $t1, 0x18
    ctx->r7 = ADD32(ctx->r9, 0X18);
    // 0x00277764: bgez        $t5, L_00277770
    if (SIGNED(ctx->r13) >= 0) {
        // 0x00277768: sw          $a3, 0x0($t3)
        MEM_W(0X0, ctx->r11) = ctx->r7;
            goto L_00277770;
    }
    // 0x00277768: sw          $a3, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r7;
    // 0x0027776C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_00277770:
    // 0x00277770: addu        $v1, $t7, $zero
    ctx->r3 = ADD32(ctx->r15, 0);
    // 0x00277774: andi        $v0, $a1, 0x3FF
    ctx->r2 = ctx->r5 & 0X3FF;
    // 0x00277778: bgez        $t7, L_00277784
    if (SIGNED(ctx->r15) >= 0) {
        // 0x0027777C: sll         $a0, $v0, 14
        ctx->r4 = S32(ctx->r2 << 14);
            goto L_00277784;
    }
    // 0x0027777C: sll         $a0, $v0, 14
    ctx->r4 = S32(ctx->r2 << 14);
    // 0x00277780: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_00277784:
    // 0x00277784: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x00277788: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0027778C: lui         $a2, 0xF600
    ctx->r6 = S32(0XF600 << 16);
    // 0x00277790: or          $v0, $v0, $a2
    ctx->r2 = ctx->r2 | ctx->r6;
    // 0x00277794: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x00277798: sw          $v0, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->r2;
    // 0x0027779C: bgez        $t6, L_002777A8
    if (SIGNED(ctx->r14) >= 0) {
        // 0x002777A0: addu        $v0, $t6, $zero
        ctx->r2 = ADD32(ctx->r14, 0);
            goto L_002777A8;
    }
    // 0x002777A0: addu        $v0, $t6, $zero
    ctx->r2 = ADD32(ctx->r14, 0);
    // 0x002777A4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_002777A8:
    // 0x002777A8: subu        $v1, $t7, $t2
    ctx->r3 = SUB32(ctx->r15, ctx->r10);
    // 0x002777AC: andi        $v0, $v0, 0x3FF
    ctx->r2 = ctx->r2 & 0X3FF;
    // 0x002777B0: bgez        $v1, L_002777BC
    if (SIGNED(ctx->r3) >= 0) {
        // 0x002777B4: sll         $a1, $v0, 14
        ctx->r5 = S32(ctx->r2 << 14);
            goto L_002777BC;
    }
    // 0x002777B4: sll         $a1, $v0, 14
    ctx->r5 = S32(ctx->r2 << 14);
    // 0x002777B8: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_002777BC:
    // 0x002777BC: addu        $a0, $t6, $t2
    ctx->r4 = ADD32(ctx->r14, ctx->r10);
    // 0x002777C0: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x002777C4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002777C8: or          $v0, $a1, $v0
    ctx->r2 = ctx->r5 | ctx->r2;
    // 0x002777CC: sw          $v0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r2;
    // 0x002777D0: addiu       $t0, $t1, 0x20
    ctx->r8 = ADD32(ctx->r9, 0X20);
    // 0x002777D4: bgez        $a0, L_002777E0
    if (SIGNED(ctx->r4) >= 0) {
        // 0x002777D8: sw          $t0, 0x0($t3)
        MEM_W(0X0, ctx->r11) = ctx->r8;
            goto L_002777E0;
    }
    // 0x002777D8: sw          $t0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r8;
    // 0x002777DC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_002777E0:
    // 0x002777E0: subu        $v1, $t7, $t2
    ctx->r3 = SUB32(ctx->r15, ctx->r10);
    // 0x002777E4: andi        $v0, $a0, 0x3FF
    ctx->r2 = ctx->r4 & 0X3FF;
    // 0x002777E8: bgez        $v1, L_002777F4
    if (SIGNED(ctx->r3) >= 0) {
        // 0x002777EC: sll         $a0, $v0, 14
        ctx->r4 = S32(ctx->r2 << 14);
            goto L_002777F4;
    }
    // 0x002777EC: sll         $a0, $v0, 14
    ctx->r4 = S32(ctx->r2 << 14);
    // 0x002777F0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_002777F4:
    // 0x002777F4: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x002777F8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002777FC: or          $v0, $v0, $a2
    ctx->r2 = ctx->r2 | ctx->r6;
    // 0x00277800: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x00277804: addu        $a0, $t6, $zero
    ctx->r4 = ADD32(ctx->r14, 0);
    // 0x00277808: bgez        $a0, L_00277814
    if (SIGNED(ctx->r4) >= 0) {
        // 0x0027780C: sw          $v0, 0x18($t1)
        MEM_W(0X18, ctx->r9) = ctx->r2;
            goto L_00277814;
    }
    // 0x0027780C: sw          $v0, 0x18($t1)
    MEM_W(0X18, ctx->r9) = ctx->r2;
    // 0x00277810: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00277814:
    // 0x00277814: addu        $v1, $t8, $t2
    ctx->r3 = ADD32(ctx->r24, ctx->r10);
    // 0x00277818: andi        $v0, $a0, 0x3FF
    ctx->r2 = ctx->r4 & 0X3FF;
    // 0x0027781C: bgez        $v1, L_00277828
    if (SIGNED(ctx->r3) >= 0) {
        // 0x00277820: sll         $a0, $v0, 14
        ctx->r4 = S32(ctx->r2 << 14);
            goto L_00277828;
    }
    // 0x00277820: sll         $a0, $v0, 14
    ctx->r4 = S32(ctx->r2 << 14);
    // 0x00277824: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_00277828:
    // 0x00277828: addu        $a1, $t5, $zero
    ctx->r5 = ADD32(ctx->r13, 0);
    // 0x0027782C: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x00277830: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00277834: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x00277838: sw          $v0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r2;
    // 0x0027783C: addiu       $v0, $t1, 0x28
    ctx->r2 = ADD32(ctx->r9, 0X28);
    // 0x00277840: bgez        $t5, L_0027784C
    if (SIGNED(ctx->r13) >= 0) {
        // 0x00277844: sw          $v0, 0x0($t3)
        MEM_W(0X0, ctx->r11) = ctx->r2;
            goto L_0027784C;
    }
    // 0x00277844: sw          $v0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r2;
    // 0x00277848: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_0027784C:
    // 0x0027784C: subu        $a3, $t7, $t2
    ctx->r7 = SUB32(ctx->r15, ctx->r10);
    // 0x00277850: andi        $v0, $a1, 0x3FF
    ctx->r2 = ctx->r5 & 0X3FF;
    // 0x00277854: bgez        $a3, L_00277860
    if (SIGNED(ctx->r7) >= 0) {
        // 0x00277858: sll         $v1, $v0, 14
        ctx->r3 = S32(ctx->r2 << 14);
            goto L_00277860;
    }
    // 0x00277858: sll         $v1, $v0, 14
    ctx->r3 = S32(ctx->r2 << 14);
    // 0x0027785C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
L_00277860:
    // 0x00277860: andi        $v0, $a3, 0x3FF
    ctx->r2 = ctx->r7 & 0X3FF;
    // 0x00277864: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00277868: or          $v0, $v0, $a2
    ctx->r2 = ctx->r2 | ctx->r6;
    // 0x0027786C: or          $v0, $v1, $v0
    ctx->r2 = ctx->r3 | ctx->r2;
    // 0x00277870: sw          $v0, 0x20($t1)
    MEM_W(0X20, ctx->r9) = ctx->r2;
    // 0x00277874: subu        $v0, $t5, $t2
    ctx->r2 = SUB32(ctx->r13, ctx->r10);
    // 0x00277878: bltzl       $v0, L_00277880
    if (SIGNED(ctx->r2) < 0) {
        // 0x0027787C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00277880;
    }
    goto skip_0;
    // 0x0027787C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
L_00277880:
    // 0x00277880: addu        $a1, $t8, $t2
    ctx->r5 = ADD32(ctx->r24, ctx->r10);
    // 0x00277884: andi        $v0, $v0, 0x3FF
    ctx->r2 = ctx->r2 & 0X3FF;
    // 0x00277888: bgez        $a1, L_00277894
    if (SIGNED(ctx->r5) >= 0) {
        // 0x0027788C: sll         $v1, $v0, 14
        ctx->r3 = S32(ctx->r2 << 14);
            goto L_00277894;
    }
    // 0x0027788C: sll         $v1, $v0, 14
    ctx->r3 = S32(ctx->r2 << 14);
    // 0x00277890: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_00277894:
    // 0x00277894: andi        $v0, $a1, 0x3FF
    ctx->r2 = ctx->r5 & 0X3FF;
    // 0x00277898: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0027789C: or          $v0, $v1, $v0
    ctx->r2 = ctx->r3 | ctx->r2;
    // 0x002778A0: jr          $ra
    // 0x002778A4: sw          $v0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r2;
    return;
    // 0x002778A4: sw          $v0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r2;
;}
RECOMP_FUNC void func_00264900(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00264900: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00264904: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x00264908: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0026490C: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00264910: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00264914: lhu         $a1, 0xA($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0XA);
    // 0x00264918: lhu         $a2, 0x4($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X4);
    // 0x0026491C: jal         0x002245BC
    // 0x00264920: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_002245BC(rdram, ctx);
        goto after_0;
    // 0x00264920: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x00264924: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00264928: jr          $ra
    // 0x0026492C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0026492C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0021F4E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021F4E8: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x0021F4EC: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x0021F4F0: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0021F4F4: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x0021F4F8: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0021F4FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0021F500: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x0021F504: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x0021F508: jal         0x002199C8
    // 0x0021F50C: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    func_002199C8(rdram, ctx);
        goto after_0;
    // 0x0021F50C: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    after_0:
    // 0x0021F510: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0021F514: jal         0x002199F4
    // 0x0021F518: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_002199F4(rdram, ctx);
        goto after_1;
    // 0x0021F518: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_1:
    // 0x0021F51C: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x0021F520: blez        $s2, L_0021F59C
    if (SIGNED(ctx->r18) <= 0) {
        // 0x0021F524: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_0021F59C;
    }
    // 0x0021F524: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
L_0021F528:
    // 0x0021F528: lhu         $v1, 0x2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2);
    // 0x0021F52C: slti        $v0, $v1, 0x8
    ctx->r2 = SIGNED(ctx->r3) < 0X8 ? 1 : 0;
    // 0x0021F530: beq         $v0, $zero, L_0021F58C
    if (ctx->r2 == 0) {
        // 0x0021F534: slti        $v0, $v1, 0x6
        ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
            goto L_0021F58C;
    }
    // 0x0021F534: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x0021F538: bnel        $v0, $zero, L_0021F590
    if (ctx->r2 != 0) {
        // 0x0021F53C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_0021F590;
    }
    goto skip_0;
    // 0x0021F53C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x0021F540: addiu       $a0, $s3, 0x58
    ctx->r4 = ADD32(ctx->r19, 0X58);
    // 0x0021F544: addiu       $a1, $s0, 0x8
    ctx->r5 = ADD32(ctx->r16, 0X8);
    // 0x0021F548: jal         0x0020F85C
    // 0x0021F54C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    func_0020F85C(rdram, ctx);
        goto after_2;
    // 0x0021F54C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_2:
    // 0x0021F550: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0021F554: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0021F558: lhu         $a2, 0x2($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X2);
    // 0x0021F55C: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x0021F560: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x0021F564: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x0021F568: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x0021F56C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x0021F570: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x0021F574: lw          $t0, 0x14($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X14);
    // 0x0021F578: lw          $t1, 0x18($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X18);
    // 0x0021F57C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x0021F580: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x0021F584: jal         0x00236EA0
    // 0x0021F588: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_00236EA0(rdram, ctx);
        goto after_3;
    // 0x0021F588: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_3:
L_0021F58C:
    // 0x0021F58C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_0021F590:
    // 0x0021F590: slt         $v0, $s1, $s2
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x0021F594: bne         $v0, $zero, L_0021F528
    if (ctx->r2 != 0) {
        // 0x0021F598: addiu       $s0, $s0, 0x1C
        ctx->r16 = ADD32(ctx->r16, 0X1C);
            goto L_0021F528;
    }
    // 0x0021F598: addiu       $s0, $s0, 0x1C
    ctx->r16 = ADD32(ctx->r16, 0X1C);
L_0021F59C:
    // 0x0021F59C: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x0021F5A0: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x0021F5A4: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x0021F5A8: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x0021F5AC: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x0021F5B0: jr          $ra
    // 0x0021F5B4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x0021F5B4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_00293E2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00293E2C: beql        $v0, $a0, L_0029403C
    if (ctx->r2 == ctx->r4) {
        // 0x00293E30: sll         $a1, $a1, 16
        ctx->r5 = S32(ctx->r5 << 16);
            goto L_0029403C;
    }
    goto skip_0;
    // 0x00293E30: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    skip_0:
    // 0x00293E34: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x00293E38: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x00293E3C: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x00293E40: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x00293E44: lw          $v1, 0x40($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X40);
    // 0x00293E48: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    // 0x00293E4C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00293E50: jr          $ra
    // 0x00293E54: sh          $a2, 0x20($v0)
    MEM_H(0X20, ctx->r2) = ctx->r6;
    return;
    // 0x00293E54: sh          $a2, 0x20($v0)
    MEM_H(0X20, ctx->r2) = ctx->r6;
    // 0x00293E58: nop

    // 0x00293E5C: lw          $v0, 0x80($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X80);
    // 0x00293E60: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x00293E64: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x00293E68: jr          $ra
    // 0x00293E6C: sw          $a1, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r5;
    return;
    // 0x00293E6C: sw          $a1, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r5;
    // 0x00293E70: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00293E74: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00293E78: lw          $a2, 0x40($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X40);
    // 0x00293E7C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00293E80: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x00293E84: lw          $v1, 0x3C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X3C);
    // 0x00293E88: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x00293E8C: sh          $a1, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r5;
    // 0x00293E90: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x00293E94: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x00293E98: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00293E9C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x00293EA0: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x00293EA4: sw          $a2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r6;
    // 0x00293EA8: jal         0x00291034
    // 0x00293EAC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_00291034(rdram, ctx);
        goto after_0;
    // 0x00293EAC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x00293EB0: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00293EB4: jr          $ra
    // 0x00293EB8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00293EB8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x00293EBC: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x00293EC0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00293EC4: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00293EC8: lw          $a1, 0x40($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X40);
    // 0x00293ECC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00293ED0: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x00293ED4: lw          $v1, 0x3C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X3C);
    // 0x00293ED8: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x00293EDC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00293EE0: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x00293EE4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00293EE8: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x00293EEC: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x00293EF0: sw          $a1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r5;
    // 0x00293EF4: jal         0x00291034
    // 0x00293EF8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_00291034(rdram, ctx);
        goto after_1;
    // 0x00293EF8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_1:
    // 0x00293EFC: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00293F00: jr          $ra
    // 0x00293F04: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00293F04: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x00293F08: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00293F0C: swc1        $f1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00293F10: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00293F14: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00293F18: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00293F1C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00293F20: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00293F24: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00293F28: jal         0x0029E230
    // 0x00293F2C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_0029E230(rdram, ctx);
        goto after_2;
    // 0x00293F2C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x00293F30: lw          $v1, 0x20($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X20);
    // 0x00293F34: sw          $v1, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r3;
    // 0x00293F38: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x00293F3C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00293F40: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x00293F44: jal         0x0029E230
    // 0x00293F48: sw          $s0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r16;
    func_0029E230(rdram, ctx);
        goto after_3;
    // 0x00293F48: sw          $s0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r16;
    after_3:
    // 0x00293F4C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00293F50: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00293F54: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00293F58: jr          $ra
    // 0x00293F5C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00293F5C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x00293F60: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00293F64: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x00293F68: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x00293F6C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00293F70: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00293F74: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x00293F78: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00293F7C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00293F80: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x00293F84: lbu         $v0, 0x4($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X4);
    // 0x00293F88: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00293F8C: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
    // 0x00293F90: sh          $v0, 0x1A($s1)
    MEM_H(0X1A, ctx->r17) = ctx->r2;
    // 0x00293F94: lhu         $v0, 0x2($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X2);
    // 0x00293F98: sh          $zero, 0x14($s1)
    MEM_H(0X14, ctx->r17) = 0;
    // 0x00293F9C: sw          $zero, 0x8($s1)
    MEM_W(0X8, ctx->r17) = 0;
    // 0x00293FA0: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    // 0x00293FA4: lh          $a2, 0x0($a2)
    ctx->r6 = MEM_H(ctx->r6, 0X0);
    // 0x00293FA8: jal         0x00294090
    // 0x00293FAC: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_00294090(rdram, ctx);
        goto after_4;
    // 0x00293FAC: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_4:
    // 0x00293FB0: lw          $a0, 0x10($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X10);
    // 0x00293FB4: beq         $a0, $zero, L_00294070
    if (ctx->r4 == 0) {
        // 0x00293FB8: nop
    
            goto L_00294070;
    }
    // 0x00293FB8: nop

    // 0x00293FBC: lw          $s0, 0xC($a0)
    ctx->r16 = MEM_W(ctx->r4, 0XC);
    // 0x00293FC0: beq         $v0, $zero, L_00294060
    if (ctx->r2 == 0) {
        // 0x00293FC4: addiu       $v0, $zero, 0x200
        ctx->r2 = ADD32(0, 0X200);
            goto L_00294060;
    }
    // 0x00293FC4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x00293FC8: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x00293FCC: sw          $v0, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->r2;
    // 0x00293FD0: jal         0x00294B58
    // 0x00293FD4: sw          $zero, 0x8($v1)
    MEM_W(0X8, ctx->r3) = 0;
    func_00294B58(rdram, ctx);
        goto after_5;
    // 0x00293FD4: sw          $zero, 0x8($v1)
    MEM_W(0X8, ctx->r3) = 0;
    after_5:
    // 0x00293FD8: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x00293FDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00293FE0: lw          $v1, 0x1C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X1C);
    // 0x00293FE4: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x00293FE8: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x00293FEC: sh          $v0, 0x8($a3)
    MEM_H(0X8, ctx->r7) = ctx->r2;
    // 0x00293FF0: sw          $zero, 0xC($a3)
    MEM_W(0XC, ctx->r7) = 0;
    // 0x00293FF4: sw          $v1, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r3;
    // 0x00293FF8: lw          $v0, 0xD8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XD8);
    // 0x00293FFC: addu        $a2, $a3, $zero
    ctx->r6 = ADD32(ctx->r7, 0);
    // 0x00294000: addiu       $v0, $v0, -0x40
    ctx->r2 = ADD32(ctx->r2, -0X40);
    // 0x00294004: sw          $v0, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->r2;
    // 0x00294008: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x0029400C: jalr        $v0
    // 0x00294010: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x00294010: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_6:
    // 0x00294014: jal         0x00294B58
    // 0x00294018: nop

    func_00294B58(rdram, ctx);
        goto after_7;
    // 0x00294018: nop

    after_7:
    // 0x0029401C: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x00294020: beq         $a3, $zero, L_00294064
    if (ctx->r7 == 0) {
        // 0x00294024: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00294064;
    }
    // 0x00294024: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00294028: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x0029402C: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x00294030: lw          $v1, 0x1C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X1C);
    // 0x00294034: lw          $a2, 0xD8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XD8);
    // 0x00294038: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
L_0029403C:
    // 0x0029403C: sh          $v0, 0x8($a3)
    MEM_H(0X8, ctx->r7) = ctx->r2;
    // 0x00294040: sw          $zero, 0x0($a3)
    MEM_W(0X0, ctx->r7) = 0;
    // 0x00294044: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x00294048: sw          $v1, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r3;
    // 0x0029404C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00294050: jalr        $v0
    // 0x00294054: addu        $a2, $a3, $zero
    ctx->r6 = ADD32(ctx->r7, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_8;
    // 0x00294054: addu        $a2, $a3, $zero
    ctx->r6 = ADD32(ctx->r7, 0);
    after_8:
    // 0x00294058: j           L_00294064
    // 0x0029405C: nop

        goto L_00294064;
    // 0x0029405C: nop

L_00294060:
    // 0x00294060: sw          $zero, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = 0;
L_00294064:
    // 0x00294064: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x00294068: sw          $s1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r17;
    // 0x0029406C: sw          $v0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r2;
L_00294070:
    // 0x00294070: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x00294074: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00294078: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0029407C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00294080: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00294084: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x00294088: jr          $ra
    // 0x0029408C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0029408C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00226928(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00226928: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0022692C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00226930: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x00226934: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00226938: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x0022693C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00226940: addu        $s0, $a3, $zero
    ctx->r16 = ADD32(ctx->r7, 0);
    // 0x00226944: beq         $a1, $zero, L_00226958
    if (ctx->r5 == 0) {
        // 0x00226948: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_00226958;
    }
    // 0x00226948: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0022694C: lw          $a0, 0x6C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6C);
    // 0x00226950: j           L_0022695C
    // 0x00226954: nop

        goto L_0022695C;
    // 0x00226954: nop

L_00226958:
    // 0x00226958: lw          $a0, 0x70($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X70);
L_0022695C:
    // 0x0022695C: jal         0x002017D4
    // 0x00226960: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00226960: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x00226964: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00226968: jal         0x002017D4
    // 0x0022696C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x0022696C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00226970: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00226974: jal         0x002017D4
    // 0x00226978: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x00226978: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x0022697C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00226980: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00226984: jal         0x002017D4
    // 0x00226988: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x00226988: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x0022698C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00226990: jal         0x00201818
    // 0x00226994: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_00201818(rdram, ctx);
        goto after_4;
    // 0x00226994: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x00226998: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022699C: jal         0x002017D4
    // 0x002269A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x002269A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x002269A4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x002269A8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x002269AC: andi        $v1, $a0, 0x7
    ctx->r3 = ctx->r4 & 0X7;
    // 0x002269B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002269B4: bgez        $a0, L_002269C0
    if (SIGNED(ctx->r4) >= 0) {
        // 0x002269B8: sllv        $v1, $v0, $v1
        ctx->r3 = S32(ctx->r2 << (ctx->r3 & 31));
            goto L_002269C0;
    }
    // 0x002269B8: sllv        $v1, $v0, $v1
    ctx->r3 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x002269BC: addiu       $a0, $a0, 0x7
    ctx->r4 = ADD32(ctx->r4, 0X7);
L_002269C0:
    // 0x002269C0: sra         $v0, $a0, 3
    ctx->r2 = S32(SIGNED(ctx->r4) >> 3);
    // 0x002269C4: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x002269C8: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x002269CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x002269D0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002269D4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002269D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002269DC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002269E0: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x002269E4: jr          $ra
    // 0x002269E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002269E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00249358(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00249358: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x0024935C: sdc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X50, ctx->r29);
    // 0x00249360: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00249364: lwc1        $f20, 0x6AD4($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6AD4);
    // 0x00249368: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x0024936C: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x00249370: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x00249374: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00249378: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x0024937C: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x00249380: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x00249384: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x00249388: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x0024938C: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x00249390: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x00249394: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x00249398: lw          $s6, 0x524($s0)
    ctx->r22 = MEM_W(ctx->r16, 0X524);
    // 0x0024939C: jal         0x00284174
    // 0x002493A0: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    func_00284174(rdram, ctx);
        goto after_0;
    // 0x002493A0: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    after_0:
    // 0x002493A4: bne         $v0, $zero, L_00249700
    if (ctx->r2 != 0) {
        // 0x002493A8: nop
    
            goto L_00249700;
    }
    // 0x002493A8: nop

    // 0x002493AC: jal         0x002548FC
    // 0x002493B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002548FC(rdram, ctx);
        goto after_1;
    // 0x002493B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x002493B4: bne         $v0, $zero, L_00249700
    if (ctx->r2 != 0) {
        // 0x002493B8: nop
    
            goto L_00249700;
    }
    // 0x002493B8: nop

    // 0x002493BC: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x002493C0: lw          $v0, 0x28($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X28);
    // 0x002493C4: bne         $v0, $zero, L_00249700
    if (ctx->r2 != 0) {
        // 0x002493C8: nop
    
            goto L_00249700;
    }
    // 0x002493C8: nop

    // 0x002493CC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x002493D0: addiu       $a0, $a0, -0x5528
    ctx->r4 = ADD32(ctx->r4, -0X5528);
    // 0x002493D4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x002493D8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x002493DC: beq         $v0, $zero, L_002493EC
    if (ctx->r2 == 0) {
        // 0x002493E0: addiu       $v0, $zero, 0x1D
        ctx->r2 = ADD32(0, 0X1D);
            goto L_002493EC;
    }
    // 0x002493E0: addiu       $v0, $zero, 0x1D
    ctx->r2 = ADD32(0, 0X1D);
    // 0x002493E4: bne         $s2, $v0, L_00249700
    if (ctx->r18 != ctx->r2) {
        // 0x002493E8: nop
    
            goto L_00249700;
    }
    // 0x002493E8: nop

L_002493EC:
    // 0x002493EC: lhu         $v0, 0xA08($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA08);
    // 0x002493F0: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x002493F4: bne         $v0, $zero, L_00249700
    if (ctx->r2 != 0) {
        // 0x002493F8: nop
    
            goto L_00249700;
    }
    // 0x002493F8: nop

    // 0x002493FC: lw          $v0, 0xBB0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XBB0);
    // 0x00249400: beq         $v0, $zero, L_00249420
    if (ctx->r2 == 0) {
        // 0x00249404: lui         $v0, 0x6666
        ctx->r2 = S32(0X6666 << 16);
            goto L_00249420;
    }
    // 0x00249404: lui         $v0, 0x6666
    ctx->r2 = S32(0X6666 << 16);
    // 0x00249408: ori         $v0, $v0, 0x6667
    ctx->r2 = ctx->r2 | 0X6667;
    // 0x0024940C: mult        $s1, $v0
    result = S64(S32(ctx->r17)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00249410: sra         $v0, $s1, 31
    ctx->r2 = S32(SIGNED(ctx->r17) >> 31);
    // 0x00249414: mfhi        $t0
    ctx->r8 = hi;
    // 0x00249418: sra         $v1, $t0, 1
    ctx->r3 = S32(SIGNED(ctx->r8) >> 1);
    // 0x0024941C: subu        $s1, $v1, $v0
    ctx->r17 = SUB32(ctx->r3, ctx->r2);
L_00249420:
    // 0x00249420: lbu         $v0, 0x19($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X19);
    // 0x00249424: beq         $v0, $zero, L_00249480
    if (ctx->r2 == 0) {
        // 0x00249428: nop
    
            goto L_00249480;
    }
    // 0x00249428: nop

    // 0x0024942C: lw          $v1, 0x518($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X518);
    // 0x00249430: lbu         $v0, 0x32($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X32);
    // 0x00249434: beq         $v0, $zero, L_00249480
    if (ctx->r2 == 0) {
        // 0x00249438: nop
    
            goto L_00249480;
    }
    // 0x00249438: nop

    // 0x0024943C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00249440: lwc1        $f1, 0x6AD8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6AD8);
    // 0x00249444: mtc1        $s1, $f0
    ctx->f0.u32l = ctx->r17;
    // 0x00249448: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0024944C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00249450: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00249454: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00249458: add.s       $f1, $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f20.fl;
    // 0x0024945C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00249460: lwc1        $f2, 0x6ADC($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X6ADC);
    // 0x00249464: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x00249468: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024946C: lwc1        $f2, 0x6AE0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X6AE0);
    // 0x00249470: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00249474: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00249478: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0024947C: mfc1        $s1, $f3
    ctx->r17 = (int32_t)ctx->f_odd[(3 - 1) * 2];
L_00249480:
    // 0x00249480: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00249484: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x00249488: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x0024948C: bne         $v0, $zero, L_0024949C
    if (ctx->r2 != 0) {
        // 0x00249490: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0024949C;
    }
    // 0x00249490: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00249494: lbu         $v0, 0x6AC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6AC);
    // 0x00249498: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
L_0024949C:
    // 0x0024949C: beq         $v0, $zero, L_002494D8
    if (ctx->r2 == 0) {
        // 0x002494A0: nop
    
            goto L_002494D8;
    }
    // 0x002494A0: nop

    // 0x002494A4: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    // 0x002494A8: beq         $a1, $zero, L_002494D8
    if (ctx->r5 == 0) {
        // 0x002494AC: nop
    
            goto L_002494D8;
    }
    // 0x002494AC: nop

    // 0x002494B0: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x002494B4: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x002494B8: jal         0x0022425C
    // 0x002494BC: nop

    func_0022425C(rdram, ctx);
        goto after_2;
    // 0x002494BC: nop

    after_2:
    // 0x002494C0: beq         $v0, $zero, L_002494D8
    if (ctx->r2 == 0) {
        // 0x002494C4: lui         $v1, 0x40
        ctx->r3 = S32(0X40 << 16);
            goto L_002494D8;
    }
    // 0x002494C4: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x002494C8: lw          $v0, 0x44($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X44);
    // 0x002494CC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002494D0: bne         $v0, $zero, L_00249700
    if (ctx->r2 != 0) {
        // 0x002494D4: nop
    
            goto L_00249700;
    }
    // 0x002494D4: nop

L_002494D8:
    // 0x002494D8: lwc1        $f1, 0xA28($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA28);
    // 0x002494DC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x002494E0: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x002494E4: nop

    // 0x002494E8: bc1f        L_002494F8
    if (!c1cs) {
        // 0x002494EC: addiu       $v0, $zero, 0x1D
        ctx->r2 = ADD32(0, 0X1D);
            goto L_002494F8;
    }
    // 0x002494EC: addiu       $v0, $zero, 0x1D
    ctx->r2 = ADD32(0, 0X1D);
    // 0x002494F0: bne         $s2, $v0, L_00249700
    if (ctx->r18 != ctx->r2) {
        // 0x002494F4: nop
    
            goto L_00249700;
    }
    // 0x002494F4: nop

L_002494F8:
    // 0x002494F8: lw          $v0, 0x524($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X524);
    // 0x002494FC: subu        $a0, $v0, $s1
    ctx->r4 = SUB32(ctx->r2, ctx->r17);
    // 0x00249500: bgez        $a0, L_0024950C
    if (SIGNED(ctx->r4) >= 0) {
        // 0x00249504: sltiu       $a1, $v0, 0x1
        ctx->r5 = ctx->r2 < 0X1 ? 1 : 0;
            goto L_0024950C;
    }
    // 0x00249504: sltiu       $a1, $v0, 0x1
    ctx->r5 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x00249508: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0024950C:
    // 0x0024950C: sw          $a0, 0x524($s0)
    MEM_W(0X524, ctx->r16) = ctx->r4;
    // 0x00249510: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x00249514: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00249518: sltiu       $s4, $v1, 0x1
    ctx->r20 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x0024951C: sw          $a0, 0x144($s0)
    MEM_W(0X144, ctx->r16) = ctx->r4;
    // 0x00249520: beq         $s4, $zero, L_00249550
    if (ctx->r20 == 0) {
        // 0x00249524: sw          $v0, 0x3CC($s0)
        MEM_W(0X3CC, ctx->r16) = ctx->r2;
            goto L_00249550;
    }
    // 0x00249524: sw          $v0, 0x3CC($s0)
    MEM_W(0X3CC, ctx->r16) = ctx->r2;
    // 0x00249528: bnel        $a1, $zero, L_00249548
    if (ctx->r5 != 0) {
        // 0x0024952C: addiu       $s2, $zero, 0xFF
        ctx->r18 = ADD32(0, 0XFF);
            goto L_00249548;
    }
    goto skip_0;
    // 0x0024952C: addiu       $s2, $zero, 0xFF
    ctx->r18 = ADD32(0, 0XFF);
    skip_0:
    // 0x00249530: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00249534: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x00249538: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x0024953C: jal         0x00249118
    // 0x00249540: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    func_00249118(rdram, ctx);
        goto after_3;
    // 0x00249540: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    after_3:
    // 0x00249544: addiu       $s2, $zero, 0xFF
    ctx->r18 = ADD32(0, 0XFF);
L_00249548:
    // 0x00249548: j           L_0024966C
    // 0x0024954C: addiu       $s3, $zero, 0xC
    ctx->r19 = ADD32(0, 0XC);
        goto L_0024966C;
    // 0x0024954C: addiu       $s3, $zero, 0xC
    ctx->r19 = ADD32(0, 0XC);
L_00249550:
    // 0x00249550: lui         $a0, 0x6666
    ctx->r4 = S32(0X6666 << 16);
    // 0x00249554: ori         $a0, $a0, 0x6667
    ctx->r4 = ctx->r4 | 0X6667;
    // 0x00249558: sra         $v1, $s1, 8
    ctx->r3 = S32(SIGNED(ctx->r17) >> 8);
    // 0x0024955C: sll         $v0, $v1, 8
    ctx->r2 = S32(ctx->r3 << 8);
    // 0x00249560: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00249564: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00249568: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x0024956C: mfhi        $t0
    ctx->r8 = hi;
    // 0x00249570: sra         $v1, $t0, 3
    ctx->r3 = S32(SIGNED(ctx->r8) >> 3);
    // 0x00249574: subu        $s2, $v1, $v0
    ctx->r18 = SUB32(ctx->r3, ctx->r2);
    // 0x00249578: slti        $v1, $s2, 0x100
    ctx->r3 = SIGNED(ctx->r18) < 0X100 ? 1 : 0;
    // 0x0024957C: beq         $v1, $zero, L_0024958C
    if (ctx->r3 == 0) {
        // 0x00249580: slti        $v0, $s2, 0x80
        ctx->r2 = SIGNED(ctx->r18) < 0X80 ? 1 : 0;
            goto L_0024958C;
    }
    // 0x00249580: slti        $v0, $s2, 0x80
    ctx->r2 = SIGNED(ctx->r18) < 0X80 ? 1 : 0;
    // 0x00249584: bne         $v0, $zero, L_00249598
    if (ctx->r2 != 0) {
        // 0x00249588: addiu       $v0, $zero, 0x80
        ctx->r2 = ADD32(0, 0X80);
            goto L_00249598;
    }
    // 0x00249588: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_0024958C:
    // 0x0024958C: beq         $v1, $zero, L_00249598
    if (ctx->r3 == 0) {
        // 0x00249590: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_00249598;
    }
    // 0x00249590: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x00249594: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
L_00249598:
    // 0x00249598: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x0024959C: slti        $v0, $s6, 0xF01
    ctx->r2 = SIGNED(ctx->r22) < 0XF01 ? 1 : 0;
    // 0x002495A0: bne         $v0, $zero, L_002495E8
    if (ctx->r2 != 0) {
        // 0x002495A4: addiu       $s3, $zero, 0x1E
        ctx->r19 = ADD32(0, 0X1E);
            goto L_002495E8;
    }
    // 0x002495A4: addiu       $s3, $zero, 0x1E
    ctx->r19 = ADD32(0, 0X1E);
    // 0x002495A8: lw          $v0, 0x524($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X524);
    // 0x002495AC: slti        $v0, $v0, 0xF01
    ctx->r2 = SIGNED(ctx->r2) < 0XF01 ? 1 : 0;
    // 0x002495B0: beq         $v0, $zero, L_002495EC
    if (ctx->r2 == 0) {
        // 0x002495B4: sra         $v0, $s1, 8
        ctx->r2 = S32(SIGNED(ctx->r17) >> 8);
            goto L_002495EC;
    }
    // 0x002495B4: sra         $v0, $s1, 8
    ctx->r2 = S32(SIGNED(ctx->r17) >> 8);
    // 0x002495B8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x002495BC: addiu       $a0, $a0, -0x550F
    ctx->r4 = ADD32(ctx->r4, -0X550F);
    // 0x002495C0: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x002495C4: bne         $v0, $zero, L_002495EC
    if (ctx->r2 != 0) {
        // 0x002495C8: sra         $v0, $s1, 8
        ctx->r2 = S32(SIGNED(ctx->r17) >> 8);
            goto L_002495EC;
    }
    // 0x002495C8: sra         $v0, $s1, 8
    ctx->r2 = S32(SIGNED(ctx->r17) >> 8);
    // 0x002495CC: lw          $a1, 0x51C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X51C);
    // 0x002495D0: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x002495D4: addiu       $a2, $a2, 0x66D0
    ctx->r6 = ADD32(ctx->r6, 0X66D0);
    // 0x002495D8: jal         0x0027FC2C
    // 0x002495DC: addiu       $a0, $a0, -0x1241
    ctx->r4 = ADD32(ctx->r4, -0X1241);
    func_0027FC2C(rdram, ctx);
        goto after_4;
    // 0x002495DC: addiu       $a0, $a0, -0x1241
    ctx->r4 = ADD32(ctx->r4, -0X1241);
    after_4:
    // 0x002495E0: jal         0x0027580C
    // 0x002495E4: addiu       $a0, $zero, 0x156
    ctx->r4 = ADD32(0, 0X156);
    func_0027580C(rdram, ctx);
        goto after_5;
    // 0x002495E4: addiu       $a0, $zero, 0x156
    ctx->r4 = ADD32(0, 0X156);
    after_5:
L_002495E8:
    // 0x002495E8: sra         $v0, $s1, 8
    ctx->r2 = S32(SIGNED(ctx->r17) >> 8);
L_002495EC:
    // 0x002495EC: beq         $v0, $zero, L_0024966C
    if (ctx->r2 == 0) {
        // 0x002495F0: nop
    
            goto L_0024966C;
    }
    // 0x002495F0: nop

    // 0x002495F4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002495F8: lwc1        $f1, 0x6AE4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6AE4);
    // 0x002495FC: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00249600: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00249604: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00249608: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024960C: lwc1        $f1, 0x6AE8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6AE8);
    // 0x00249610: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x00249614: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00249618: nop

    // 0x0024961C: bc1tl       L_00249624
    if (c1cs) {
        // 0x00249620: mov.s       $f20, $f1
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    ctx->f20.fl = ctx->f1.fl;
            goto L_00249624;
    }
    goto skip_1;
    // 0x00249620: mov.s       $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    ctx->f20.fl = ctx->f1.fl;
    skip_1:
L_00249624:
    // 0x00249624: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00249628: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0024962C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x00249630: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x00249634: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x00249638: lw          $a1, 0xA50($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XA50);
    // 0x0024963C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00249640: lwc1        $f0, 0x6AEC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6AEC);
    // 0x00249644: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    // 0x00249648: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x0024964C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x00249650: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x00249654: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x00249658: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x0024965C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x00249660: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x00249664: jal         0x00225DB0
    // 0x00249668: addiu       $a1, $a1, 0x140
    ctx->r5 = ADD32(ctx->r5, 0X140);
    func_00225DB0(rdram, ctx);
        goto after_6;
    // 0x00249668: addiu       $a1, $a1, 0x140
    ctx->r5 = ADD32(ctx->r5, 0X140);
    after_6:
L_0024966C:
    // 0x0024966C: bne         $s4, $zero, L_0024968C
    if (ctx->r20 != 0) {
        // 0x00249670: addiu       $v0, $zero, 0xF
        ctx->r2 = ADD32(0, 0XF);
            goto L_0024968C;
    }
    // 0x00249670: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x00249674: lh          $v1, 0xA08($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XA08);
    // 0x00249678: beq         $v1, $v0, L_0024968C
    if (ctx->r3 == ctx->r2) {
        // 0x0024967C: andi        $a1, $s2, 0xFF
        ctx->r5 = ctx->r18 & 0XFF;
            goto L_0024968C;
    }
    // 0x0024967C: andi        $a1, $s2, 0xFF
    ctx->r5 = ctx->r18 & 0XFF;
    // 0x00249680: lw          $a0, 0x51C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X51C);
    // 0x00249684: jal         0x00281054
    // 0x00249688: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_00281054(rdram, ctx);
        goto after_7;
    // 0x00249688: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_7:
L_0024968C:
    // 0x0024968C: lw          $v0, 0x524($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X524);
    // 0x00249690: sra         $v1, $s6, 8
    ctx->r3 = S32(SIGNED(ctx->r22) >> 8);
    // 0x00249694: sra         $v0, $v0, 8
    ctx->r2 = S32(SIGNED(ctx->r2) >> 8);
    // 0x00249698: beq         $v1, $v0, L_00249700
    if (ctx->r3 == ctx->r2) {
        // 0x0024969C: nop
    
            goto L_00249700;
    }
    // 0x0024969C: nop

    // 0x002496A0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x002496A4: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x002496A8: beq         $v0, $zero, L_002496D4
    if (ctx->r2 == 0) {
        // 0x002496AC: nop
    
            goto L_002496D4;
    }
    // 0x002496AC: nop

    // 0x002496B0: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x002496B4: lbu         $v1, 0x3E($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X3E);
    // 0x002496B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002496BC: bne         $v1, $v0, L_00249700
    if (ctx->r3 != ctx->r2) {
        // 0x002496C0: nop
    
            goto L_00249700;
    }
    // 0x002496C0: nop

    // 0x002496C4: jal         0x00275624
    // 0x002496C8: addiu       $a0, $zero, 0x27DA
    ctx->r4 = ADD32(0, 0X27DA);
    func_00275624(rdram, ctx);
        goto after_8;
    // 0x002496C8: addiu       $a0, $zero, 0x27DA
    ctx->r4 = ADD32(0, 0X27DA);
    after_8:
    // 0x002496CC: j           L_00249700
    // 0x002496D0: nop

        goto L_00249700;
    // 0x002496D0: nop

L_002496D4:
    // 0x002496D4: lw          $v0, 0x140($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X140);
    // 0x002496D8: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x002496DC: bne         $v0, $zero, L_00249700
    if (ctx->r2 != 0) {
        // 0x002496E0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00249700;
    }
    // 0x002496E0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x002496E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x002496E8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x002496EC: lw          $a1, 0x4($s5)
    ctx->r5 = MEM_W(ctx->r21, 0X4);
    // 0x002496F0: lw          $a2, 0x8($s5)
    ctx->r6 = MEM_W(ctx->r21, 0X8);
    // 0x002496F4: lw          $a3, 0xC($s5)
    ctx->r7 = MEM_W(ctx->r21, 0XC);
    // 0x002496F8: jal         0x00275544
    // 0x002496FC: addiu       $a0, $zero, 0x3AC0
    ctx->r4 = ADD32(0, 0X3AC0);
    func_00275544(rdram, ctx);
        goto after_9;
    // 0x002496FC: addiu       $a0, $zero, 0x3AC0
    ctx->r4 = ADD32(0, 0X3AC0);
    after_9:
L_00249700:
    // 0x00249700: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x00249704: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x00249708: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x0024970C: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x00249710: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x00249714: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x00249718: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x0024971C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x00249720: ldc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X50);
    // 0x00249724: jr          $ra
    // 0x00249728: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x00249728: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_0045ABC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00421C28:
    // 0x0045ABC0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045ABC4: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x0045ABC8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0045ABCC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0045ABD0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0045ABD4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0045ABD8: beq         $v0, $zero, L_0045ABF0
    if (ctx->r2 == 0) {
        // 0x0045ABDC: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_0045ABF0;
    }
    // 0x0045ABDC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0045ABE0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0045ABE4: addiu       $v0, $v0, 0x140C
    ctx->r2 = ADD32(ctx->r2, 0X140C);
    // 0x0045ABE8: j           L_00421C28
    // 0x0045ABEC: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    entry_00421C28(rdram, ctx);
    return;
    // 0x0045ABEC: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_0045ABF0:
    // 0x0045ABF0: lw          $v0, 0x20($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X20);
    // 0x0045ABF4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0045ABF8: lb          $s0, 0x4($v0)
    ctx->r16 = MEM_B(ctx->r2, 0X4);
    // 0x0045ABFC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045AC00: addiu       $v0, $v0, 0x45E0
    ctx->r2 = ADD32(ctx->r2, 0X45E0);
    // 0x0045AC04: jal         0x004160F0
    // 0x0045AC08: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x0045AC08: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    after_0:
    // 0x0045AC0C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0045AC10: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x0045AC14: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0045AC18: addiu       $a1, $a1, 0x1410
    ctx->r5 = ADD32(ctx->r5, 0X1410);
    // 0x0045AC1C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x0045AC20: jal         0x0029E3E0
    // 0x0045AC24: addiu       $a2, $s0, 0x1
    ctx->r6 = ADD32(ctx->r16, 0X1);
    func_0029E3E0(rdram, ctx);
        goto after_1;
    // 0x0045AC24: addiu       $a2, $s0, 0x1
    ctx->r6 = ADD32(ctx->r16, 0X1);
    after_1:
    // 0x0045AC28: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0045AC2C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0045AC30: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0045AC34: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0045AC38: jr          $ra
    // 0x0045AC3C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0045AC3C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00265E5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00265E5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00265E60: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00265E64: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00265E68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00265E6C: jal         0x00243414
    // 0x00265E70: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00265E70: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x00265E74: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00265E78: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00265E7C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00265E80: jal         0x00220260
    // 0x00265E84: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_00220260(rdram, ctx);
        goto after_1;
    // 0x00265E84: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x00265E88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00265E8C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00265E90: jr          $ra
    // 0x00265E94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00265E94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0028D70C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028D70C: jr          $ra
    // 0x0028D710: nop

    return;
    // 0x0028D710: nop

;}
RECOMP_FUNC void func_00440410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00440410: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00440414: ori         $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 | 0X2000;
    // 0x00440418: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
    // 0x0044041C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00440420: sw          $zero, -0x628($at)
    MEM_W(-0X628, ctx->r1) = 0;
    // 0x00440424: jr          $ra
    // 0x00440428: nop

    return;
    // 0x00440428: nop

;}
RECOMP_FUNC void func_0041C034(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041C034: lw          $v0, 0x1C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1C);
    // 0x0041C038: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0041C03C: addiu       $v1, $v1, -0x54E8
    ctx->r3 = ADD32(ctx->r3, -0X54E8);
    // 0x0041C040: beq         $v0, $zero, L_0041C054
    if (ctx->r2 == 0) {
        // 0x0041C044: nop
    
            goto L_0041C054;
    }
    // 0x0041C044: nop

    // 0x0041C048: lw          $v0, 0x518($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X518);
    // 0x0041C04C: bnel        $v0, $zero, L_0041C054
    if (ctx->r2 != 0) {
        // 0x0041C050: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_0041C054;
    }
    goto skip_0;
    // 0x0041C050: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    skip_0:
L_0041C054:
    // 0x0041C054: lbu         $v1, 0x2C($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X2C);
    // 0x0041C058: beq         $v1, $zero, L_0041C07C
    if (ctx->r3 == 0) {
        // 0x0041C05C: nop
    
            goto L_0041C07C;
    }
    // 0x0041C05C: nop

    // 0x0041C060: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041C064: bne         $v1, $v0, L_0041C088
    if (ctx->r3 != ctx->r2) {
        // 0x0041C068: nop
    
            goto L_0041C088;
    }
    // 0x0041C068: nop

    // 0x0041C06C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041C070: addiu       $v0, $v0, 0x3F00
    ctx->r2 = ADD32(ctx->r2, 0X3F00);
    // 0x0041C074: j           L_0041C088
    // 0x0041C078: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041C088;
    // 0x0041C078: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041C07C:
    // 0x0041C07C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041C080: addiu       $v0, $v0, 0x3F18
    ctx->r2 = ADD32(ctx->r2, 0X3F18);
    // 0x0041C084: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041C088:
    // 0x0041C088: jr          $ra
    // 0x0041C08C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041C08C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00404450(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00404450: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00404454: addu        $t3, $a0, $zero
    ctx->r11 = ADD32(ctx->r4, 0);
    // 0x00404458: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x0040445C: addu        $a2, $t0, $zero
    ctx->r6 = ADD32(ctx->r8, 0);
    // 0x00404460: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x00404464: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00404468: addiu       $v0, $v0, -0x9F0
    ctx->r2 = ADD32(ctx->r2, -0X9F0);
    // 0x0040446C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00404470: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00404474: lw          $t1, 0x3BC($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X3BC);
    // 0x00404478: addiu       $a3, $v0, 0x3BC
    ctx->r7 = ADD32(ctx->r2, 0X3BC);
    // 0x0040447C: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x00404480: sw          $zero, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = 0;
    // 0x00404484: sllv        $v0, $t2, $a2
    ctx->r2 = S32(ctx->r10 << (ctx->r6 & 31));
L_00404488:
    // 0x00404488: and         $v0, $t1, $v0
    ctx->r2 = ctx->r9 & ctx->r2;
    // 0x0040448C: beql        $v0, $zero, L_004044D4
    if (ctx->r2 == 0) {
        // 0x00404490: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_004044D4;
    }
    goto skip_0;
    // 0x00404490: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    skip_0:
    // 0x00404494: sll         $v0, $a2, 2
    ctx->r2 = S32(ctx->r6 << 2);
    // 0x00404498: lw          $v1, -0x3BC($a3)
    ctx->r3 = MEM_W(ctx->r7, -0X3BC);
    // 0x0040449C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004044A0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x004044A4: lw          $a0, -0x658($at)
    ctx->r4 = MEM_W(ctx->r1, -0X658);
    // 0x004044A8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x004044AC: sw          $v1, -0x3BC($a3)
    MEM_W(-0X3BC, ctx->r7) = ctx->r3;
    // 0x004044B0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004044B4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x004044B8: lw          $v1, -0x678($at)
    ctx->r3 = MEM_W(ctx->r1, -0X678);
    // 0x004044BC: blez        $v1, L_004044D4
    if (SIGNED(ctx->r3) <= 0) {
        // 0x004044C0: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_004044D4;
    }
    // 0x004044C0: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x004044C4: lw          $v0, -0x3C0($a3)
    ctx->r2 = MEM_W(ctx->r7, -0X3C0);
    // 0x004044C8: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x004044CC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x004044D0: sw          $v0, -0x3C0($a3)
    MEM_W(-0X3C0, ctx->r7) = ctx->r2;
L_004044D4:
    // 0x004044D4: slti        $v0, $a2, 0x8
    ctx->r2 = SIGNED(ctx->r6) < 0X8 ? 1 : 0;
    // 0x004044D8: bne         $v0, $zero, L_00404488
    if (ctx->r2 != 0) {
        // 0x004044DC: sllv        $v0, $t2, $a2
        ctx->r2 = S32(ctx->r10 << (ctx->r6 & 31));
            goto L_00404488;
    }
    // 0x004044DC: sllv        $v0, $t2, $a2
    ctx->r2 = S32(ctx->r10 << (ctx->r6 & 31));
    // 0x004044E0: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x004044E4: addiu       $s0, $s0, -0x62F
    ctx->r16 = ADD32(ctx->r16, -0X62F);
    // 0x004044E8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x004044EC: bne         $v0, $zero, L_0040456C
    if (ctx->r2 != 0) {
        // 0x004044F0: addiu       $a3, $zero, 0x3
        ctx->r7 = ADD32(0, 0X3);
            goto L_0040456C;
    }
    // 0x004044F0: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x004044F4: lw          $v0, -0x3C9($s0)
    ctx->r2 = MEM_W(ctx->r16, -0X3C9);
    // 0x004044F8: bne         $v0, $a3, L_00404518
    if (ctx->r2 != ctx->r7) {
        // 0x004044FC: addiu       $v1, $s0, -0x3C9
        ctx->r3 = ADD32(ctx->r16, -0X3C9);
            goto L_00404518;
    }
    // 0x004044FC: addiu       $v1, $s0, -0x3C9
    ctx->r3 = ADD32(ctx->r16, -0X3C9);
    // 0x00404500: bne         $t0, $zero, L_0040456C
    if (ctx->r8 != 0) {
        // 0x00404504: addu        $a0, $t3, $zero
        ctx->r4 = ADD32(ctx->r11, 0);
            goto L_0040456C;
    }
    // 0x00404504: addu        $a0, $t3, $zero
    ctx->r4 = ADD32(ctx->r11, 0);
    // 0x00404508: jal         0x00243414
    // 0x0040450C: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0040450C: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    after_0:
    // 0x00404510: j           L_0040456C
    // 0x00404514: nop

        goto L_0040456C;
    // 0x00404514: nop

L_00404518:
    // 0x00404518: bne         $t0, $zero, L_0040456C
    if (ctx->r8 != 0) {
        // 0x0040451C: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_0040456C;
    }
    // 0x0040451C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00404520: sw          $v0, -0x3C9($s0)
    MEM_W(-0X3C9, ctx->r16) = ctx->r2;
    // 0x00404524: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x00404528: bne         $v0, $zero, L_00404560
    if (ctx->r2 != 0) {
        // 0x0040452C: addu        $a0, $t3, $zero
        ctx->r4 = ADD32(ctx->r11, 0);
            goto L_00404560;
    }
    // 0x0040452C: addu        $a0, $t3, $zero
    ctx->r4 = ADD32(ctx->r11, 0);
    // 0x00404530: lwc1        $f0, 0x434($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X434);
    // 0x00404534: lwc1        $f1, 0x438($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X438);
    // 0x00404538: lwc1        $f2, 0x43C($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X43C);
    // 0x0040453C: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    // 0x00404540: sw          $a3, 0x3D4($v1)
    MEM_W(0X3D4, ctx->r3) = ctx->r7;
    // 0x00404544: sw          $a3, 0x3D0($v1)
    MEM_W(0X3D0, ctx->r3) = ctx->r7;
    // 0x00404548: sb          $zero, 0x3D8($v1)
    MEM_B(0X3D8, ctx->r3) = 0;
    // 0x0040454C: sb          $zero, 0x3D9($v1)
    MEM_B(0X3D9, ctx->r3) = 0;
    // 0x00404550: swc1        $f0, 0x428($v1)
    MEM_W(0X428, ctx->r3) = ctx->f0.u32l;
    // 0x00404554: swc1        $f1, 0x42C($v1)
    MEM_W(0X42C, ctx->r3) = ctx->f_odd[(1 - 1) * 2];
    // 0x00404558: jal         0x00243414
    // 0x0040455C: swc1        $f2, 0x430($v1)
    MEM_W(0X430, ctx->r3) = ctx->f2.u32l;
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x0040455C: swc1        $f2, 0x430($v1)
    MEM_W(0X430, ctx->r3) = ctx->f2.u32l;
    after_1:
L_00404560:
    // 0x00404560: lw          $a0, -0x3C9($s0)
    ctx->r4 = MEM_W(ctx->r16, -0X3C9);
    // 0x00404564: jal         0x00403C14
    // 0x00404568: nop

    func_00403C14(rdram, ctx);
        goto after_2;
    // 0x00404568: nop

    after_2:
L_0040456C:
    // 0x0040456C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00404570: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00404574: jr          $ra
    // 0x00404578: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00404578: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00256724(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00256724: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x00256728: addiu       $v1, $zero, -0x81
    ctx->r3 = ADD32(0, -0X81);
    // 0x0025672C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00256730: jr          $ra
    // 0x00256734: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    return;
    // 0x00256734: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
;}
RECOMP_FUNC void func_002767F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002767F8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x002767FC: sw          $a0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r4;
    // 0x00276800: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x00276804: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00276808: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
    // 0x0027680C: jr          $ra
    // 0x00276810: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    return;
    // 0x00276810: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_00210518(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00210518: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0021051C: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x00210520: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x00210524: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00210528: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0021052C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00210530: jal         0x002982F0
    // 0x00210534: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_002982F0(rdram, ctx);
        goto after_0;
    // 0x00210534: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_0:
    // 0x00210538: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x0021053C: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00210540: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00210544: lwc1        $f3, 0x561C($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X561C);
    // 0x00210548: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x0021054C: swc1        $f2, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f2.u32l;
    // 0x00210550: swc1        $f0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f0.u32l;
    // 0x00210554: swc1        $f1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x00210558: swc1        $f1, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0021055C: swc1        $f1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x00210560: swc1        $f1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x00210564: swc1        $f1, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x00210568: swc1        $f1, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0021056C: swc1        $f1, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x00210570: swc1        $f1, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x00210574: swc1        $f1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x00210578: swc1        $f1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0021057C: swc1        $f3, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f_odd[(3 - 1) * 2];
    // 0x00210580: jal         0x002974C0
    // 0x00210584: swc1        $f3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f_odd[(3 - 1) * 2];
    func_002974C0(rdram, ctx);
        goto after_1;
    // 0x00210584: swc1        $f3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f_odd[(3 - 1) * 2];
    after_1:
    // 0x00210588: swc1        $f0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f0.u32l;
    // 0x0021058C: swc1        $f0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f0.u32l;
    // 0x00210590: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00210594: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00210598: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x0021059C: jr          $ra
    // 0x002105A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002105A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0028CF38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028CF38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0028CF3C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0028CF40: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0028CF44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0028CF48: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028CF4C: beq         $v0, $zero, L_0028CF6C
    if (ctx->r2 == 0) {
        // 0x0028CF50: nop
    
            goto L_0028CF6C;
    }
    // 0x0028CF50: nop

L_0028CF54:
    // 0x0028CF54: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028CF58: jal         0x0028B430
    // 0x0028CF5C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_0;
    // 0x0028CF5C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_0:
    // 0x0028CF60: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028CF64: bne         $v0, $zero, L_0028CF54
    if (ctx->r2 != 0) {
        // 0x0028CF68: nop
    
            goto L_0028CF54;
    }
    // 0x0028CF68: nop

L_0028CF6C:
    // 0x0028CF6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0028CF70: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0028CF74: jr          $ra
    // 0x0028CF78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0028CF78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002718E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002718E0: lw          $v0, 0x2BB0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2BB0);
    // 0x002718E4: jr          $ra
    // 0x002718E8: nop

    return;
    // 0x002718E8: nop

;}
RECOMP_FUNC void func_00257A3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00257A3C: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
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
RECOMP_FUNC void func_002714B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002714B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002714B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002714B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x002714BC: jal         0x0029DFF0
    // 0x002714C0: addiu       $s0, $a0, 0x110
    ctx->r16 = ADD32(ctx->r4, 0X110);
    func_0029DFF0(rdram, ctx);
        goto after_0;
    // 0x002714C0: addiu       $s0, $a0, 0x110
    ctx->r16 = ADD32(ctx->r4, 0X110);
    after_0:
    // 0x002714C4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x002714C8: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x002714CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002714D0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x002714D4: beq         $v1, $v0, L_002714FC
    if (ctx->r3 == ctx->r2) {
        // 0x002714D8: sw          $v1, 0x1C($s0)
        MEM_W(0X1C, ctx->r16) = ctx->r3;
            goto L_002714FC;
    }
    // 0x002714D8: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x002714DC: jal         0x0029E010
    // 0x002714E0: nop

    func_0029E010(rdram, ctx);
        goto after_1;
    // 0x002714E0: nop

    after_1:
    // 0x002714E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002714E8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x002714EC: jal         0x0029B6F0
    // 0x002714F0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x002714F0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x002714F4: j           L_00271504
    // 0x002714F8: nop

        goto L_00271504;
    // 0x002714F8: nop

L_002714FC:
    // 0x002714FC: jal         0x0029E010
    // 0x00271500: nop

    func_0029E010(rdram, ctx);
        goto after_3;
    // 0x00271500: nop

    after_3:
L_00271504:
    // 0x00271504: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00271508: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0027150C: jr          $ra
    // 0x00271510: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00271510: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00447450(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00447450: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00447454: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00447458: jal         0x00412438
    // 0x0044745C: addiu       $a0, $zero, 0x15E
    ctx->r4 = ADD32(0, 0X15E);
    func_00412438(rdram, ctx);
        goto after_0;
    // 0x0044745C: addiu       $a0, $zero, 0x15E
    ctx->r4 = ADD32(0, 0X15E);
    after_0:
    // 0x00447460: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00447464: jr          $ra
    // 0x00447468: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00447468: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00288E58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00288E58: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00288E5C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00288E60: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00288E64: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00288E68: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00288E6C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00288E70: addiu       $a0, $a0, 0x5D2C
    ctx->r4 = ADD32(ctx->r4, 0X5D2C);
    // 0x00288E74: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00288E78: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00288E7C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00288E80: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00288E84: lw          $v0, 0x3FD8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X3FD8);
    // 0x00288E88: addiu       $v0, $v0, -0xB
    ctx->r2 = ADD32(ctx->r2, -0XB);
    // 0x00288E8C: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x00288E90: beq         $v0, $zero, L_00288E9C
    if (ctx->r2 == 0) {
        // 0x00288E94: andi        $v1, $v1, 0x1000
        ctx->r3 = ctx->r3 & 0X1000;
            goto L_00288E9C;
    }
    // 0x00288E94: andi        $v1, $v1, 0x1000
    ctx->r3 = ctx->r3 & 0X1000;
    // 0x00288E98: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_00288E9C:
    // 0x00288E9C: beq         $v1, $zero, L_00288ECC
    if (ctx->r3 == 0) {
        // 0x00288EA0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00288ECC;
    }
    // 0x00288EA0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00288EA4: beq         $a2, $v0, L_00288ECC
    if (ctx->r6 == ctx->r2) {
        // 0x00288EA8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00288ECC;
    }
    // 0x00288EA8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00288EAC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00288EB0: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00288EB4: sb          $v0, 0x3FE1($at)
    MEM_B(0X3FE1, ctx->r1) = ctx->r2;
    // 0x00288EB8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00288EBC: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00288EC0: sw          $a2, 0x3FDC($at)
    MEM_W(0X3FDC, ctx->r1) = ctx->r6;
    // 0x00288EC4: j           L_00288F4C
    // 0x00288EC8: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
        goto L_00288F4C;
    // 0x00288EC8: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
L_00288ECC:
    // 0x00288ECC: jal         0x00284204
    // 0x00288ED0: nop

    func_00284204(rdram, ctx);
        goto after_0;
    // 0x00288ED0: nop

    after_0:
    // 0x00288ED4: beq         $v0, $zero, L_00288F4C
    if (ctx->r2 == 0) {
        // 0x00288ED8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00288F4C;
    }
    // 0x00288ED8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00288EDC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00288EE0: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00288EE4: lw          $v1, 0x3FD8($at)
    ctx->r3 = MEM_W(ctx->r1, 0X3FD8);
    // 0x00288EE8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00288EEC: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00288EF0: sb          $v0, 0x3FE1($at)
    MEM_B(0X3FE1, ctx->r1) = ctx->r2;
    // 0x00288EF4: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x00288EF8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00288EFC: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00288F00: sw          $zero, 0x3FE4($at)
    MEM_W(0X3FE4, ctx->r1) = 0;
    // 0x00288F04: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00288F08: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00288F0C: sw          $v0, 0x3FD8($at)
    MEM_W(0X3FD8, ctx->r1) = ctx->r2;
    // 0x00288F10: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00288F14: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00288F18: sw          $s1, 0x3FDC($at)
    MEM_W(0X3FDC, ctx->r1) = ctx->r17;
    // 0x00288F1C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00288F20: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00288F24: sw          $v1, 0x3FD4($at)
    MEM_W(0X3FD4, ctx->r1) = ctx->r3;
    // 0x00288F28: jal         0x0028D0E0
    // 0x00288F2C: nop

    func_0028D0E0(rdram, ctx);
        goto after_1;
    // 0x00288F2C: nop

    after_1:
    // 0x00288F30: beq         $v0, $zero, L_00288F4C
    if (ctx->r2 == 0) {
        // 0x00288F34: nop
    
            goto L_00288F4C;
    }
    // 0x00288F34: nop

    // 0x00288F38: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00288F3C: lwc1        $f0, -0x6218($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6218);
    // 0x00288F40: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00288F44: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00288F48: swc1        $f0, 0x3FE4($at)
    MEM_W(0X3FE4, ctx->r1) = ctx->f0.u32l;
L_00288F4C:
    // 0x00288F4C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00288F50: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00288F54: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00288F58: jr          $ra
    // 0x00288F5C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00288F5C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0045A5D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045A5D0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0045A5D4: lw          $v0, 0x2028($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2028);
    // 0x0045A5D8: jr          $ra
    // 0x0045A5DC: nop

    return;
    // 0x0045A5DC: nop

;}
RECOMP_FUNC void func_0025FEB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025FEB0: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x0025FEB4: sw          $s0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r16;
    // 0x0025FEB8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0025FEBC: sw          $ra, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r31;
    // 0x0025FEC0: sw          $s2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r18;
    // 0x0025FEC4: sw          $s1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r17;
    // 0x0025FEC8: sdc1        $f20, 0x90($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X90, ctx->r29);
    // 0x0025FECC: lw          $s1, 0x114($a1)
    ctx->r17 = MEM_W(ctx->r5, 0X114);
    // 0x0025FED0: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x0025FED4: lw          $s2, 0x1A8($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X1A8);
    // 0x0025FED8: lui         $a2, 0x3E9D
    ctx->r6 = S32(0X3E9D << 16);
    // 0x0025FEDC: ori         $a2, $a2, 0x4951
    ctx->r6 = ctx->r6 | 0X4951;
    // 0x0025FEE0: jal         0x0020EF60
    // 0x0025FEE4: addiu       $a1, $s2, 0xBB8
    ctx->r5 = ADD32(ctx->r18, 0XBB8);
    func_0020EF60(rdram, ctx);
        goto after_0;
    // 0x0025FEE4: addiu       $a1, $s2, 0xBB8
    ctx->r5 = ADD32(ctx->r18, 0XBB8);
    after_0:
    // 0x0025FEE8: lwc1        $f0, 0x50($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X50);
    // 0x0025FEEC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025FEF0: lwc1        $f20, 0x7970($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X7970);
    // 0x0025FEF4: swc1        $f0, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f0.u32l;
    // 0x0025FEF8: lw          $v1, 0x40($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X40);
    // 0x0025FEFC: lw          $a3, 0x44($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X44);
    // 0x0025FF00: lw          $t0, 0x48($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X48);
    // 0x0025FF04: lw          $t1, 0x4C($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X4C);
    // 0x0025FF08: sw          $v1, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r3;
    // 0x0025FF0C: sw          $a3, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r7;
    // 0x0025FF10: sw          $t0, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r8;
    // 0x0025FF14: sw          $t1, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r9;
    // 0x0025FF18: lw          $v0, 0x51C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X51C);
    // 0x0025FF1C: lw          $v1, 0x114($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X114);
    // 0x0025FF20: lw          $a3, 0x118($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X118);
    // 0x0025FF24: lw          $t0, 0x11C($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X11C);
    // 0x0025FF28: sw          $v1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r3;
    // 0x0025FF2C: sw          $a3, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r7;
    // 0x0025FF30: sw          $t0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r8;
    // 0x0025FF34: lwc1        $f12, 0x50($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X50);
    // 0x0025FF38: mul.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f20.fl);
    // 0x0025FF3C: addiu       $s2, $s0, 0x4
    ctx->r18 = ADD32(ctx->r16, 0X4);
    // 0x0025FF40: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x0025FF44: addiu       $s1, $s0, 0x40
    ctx->r17 = ADD32(ctx->r16, 0X40);
    // 0x0025FF48: jal         0x002982F0
    // 0x0025FF4C: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    func_002982F0(rdram, ctx);
        goto after_1;
    // 0x0025FF4C: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    after_1:
    // 0x0025FF50: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x0025FF54: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x0025FF58: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
    // 0x0025FF5C: lwc1        $f12, 0x50($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X50);
    // 0x0025FF60: mul.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f20.fl);
    // 0x0025FF64: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0025FF68: swc1        $f0, -0x2874($at)
    MEM_W(-0X2874, ctx->r1) = ctx->f0.u32l;
    // 0x0025FF6C: jal         0x002974C0
    // 0x0025FF70: nop

    func_002974C0(rdram, ctx);
        goto after_2;
    // 0x0025FF70: nop

    after_2:
    // 0x0025FF74: addiu       $s0, $sp, 0x70
    ctx->r16 = ADD32(ctx->r29, 0X70);
    // 0x0025FF78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025FF7C: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x0025FF80: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x0025FF84: jal         0x00210F68
    // 0x0025FF88: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    func_00210F68(rdram, ctx);
        goto after_3;
    // 0x0025FF88: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x0025FF8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025FF90: jal         0x00211114
    // 0x0025FF94: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_00211114(rdram, ctx);
        goto after_4;
    // 0x0025FF94: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_4:
    // 0x0025FF98: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0025FF9C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0025FFA0: addiu       $a1, $a1, 0x17B0
    ctx->r5 = ADD32(ctx->r5, 0X17B0);
    // 0x0025FFA4: addiu       $s0, $sp, 0x50
    ctx->r16 = ADD32(ctx->r29, 0X50);
    // 0x0025FFA8: jal         0x0020F85C
    // 0x0025FFAC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0020F85C(rdram, ctx);
        goto after_5;
    // 0x0025FFAC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_5:
    // 0x0025FFB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025FFB4: lui         $a2, 0x4123
    ctx->r6 = S32(0X4123 << 16);
    // 0x0025FFB8: ori         $a2, $a2, 0xD70A
    ctx->r6 = ctx->r6 | 0XD70A;
    // 0x0025FFBC: jal         0x0020EF60
    // 0x0025FFC0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0020EF60(rdram, ctx);
        goto after_6;
    // 0x0025FFC0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_6:
    // 0x0025FFC4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0025FFC8: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0025FFCC: jal         0x0020EEF8
    // 0x0025FFD0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0020EEF8(rdram, ctx);
        goto after_7;
    // 0x0025FFD0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_7:
    // 0x0025FFD4: lw          $ra, 0x8C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X8C);
    // 0x0025FFD8: lw          $s2, 0x88($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X88);
    // 0x0025FFDC: lw          $s1, 0x84($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X84);
    // 0x0025FFE0: lw          $s0, 0x80($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X80);
    // 0x0025FFE4: ldc1        $f20, 0x90($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X90);
    // 0x0025FFE8: jr          $ra
    // 0x0025FFEC: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x0025FFEC: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_00274560(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00274560: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00274564: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x00274568: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027456C: lwc1        $f1, -0x7E78($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7E78);
    // 0x00274570: mtc1        $a0, $f0
    ctx->f0.u32l = ctx->r4;
    // 0x00274574: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00274578: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x0027457C: mul.s       $f20, $f0, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00274580: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x00274584: mtc1        $a1, $f0
    ctx->f0.u32l = ctx->r5;
    // 0x00274588: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0027458C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00274590: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00274594: lwc1        $f2, -0x7E74($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X7E74);
    // 0x00274598: c.eq.s      $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl == ctx->f2.fl;
    // 0x0027459C: nop

    // 0x002745A0: bc1f        L_002745B0
    if (!c1cs) {
        // 0x002745A4: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_002745B0;
    }
    // 0x002745A4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002745A8: j           L_002745CC
    // 0x002745AC: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
        goto L_002745CC;
    // 0x002745AC: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_002745B0:
    // 0x002745B0: c.eq.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl == ctx->f20.fl;
    // 0x002745B4: nop

    // 0x002745B8: bc1tl       L_002745CC
    if (c1cs) {
        // 0x002745BC: mov.s       $f0, $f20
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
            goto L_002745CC;
    }
    goto skip_0;
    // 0x002745BC: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
    skip_0:
    // 0x002745C0: jal         0x0021149C
    // 0x002745C4: sub.s       $f12, $f0, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f20.fl;
    func_0021149C(rdram, ctx);
        goto after_0;
    // 0x002745C4: sub.s       $f12, $f0, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f20.fl;
    after_0:
    // 0x002745C8: add.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f20.fl + ctx->f0.fl;
L_002745CC:
    // 0x002745CC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002745D0: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x002745D4: jr          $ra
    // 0x002745D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002745D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0042265C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042265C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00422660: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00422664: lw          $v0, 0x960($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X960);
    // 0x00422668: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x0042266C: beq         $v0, $zero, L_00422698
    if (ctx->r2 == 0) {
        // 0x00422670: sw          $ra, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r31;
            goto L_00422698;
    }
    // 0x00422670: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00422674: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00422678: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0042267C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00422680: lw          $a2, 0x1C($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X1C);
    // 0x00422684: lw          $a3, 0x20($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X20);
    // 0x00422688: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0042268C: addiu       $a1, $a1, -0x4958
    ctx->r5 = ADD32(ctx->r5, -0X4958);
    // 0x00422690: j           L_004226B0
    // 0x00422694: nop

        goto L_004226B0;
    // 0x00422694: nop

L_00422698:
    // 0x00422698: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0042269C: lw          $a1, 0x24($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X24);
    // 0x004226A0: lw          $a2, 0x1C($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X1C);
    // 0x004226A4: lw          $a3, 0x20($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X20);
    // 0x004226A8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x004226AC: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
L_004226B0:
    // 0x004226B0: jal         0x00416644
    // 0x004226B4: nop

    func_00416644(rdram, ctx);
        goto after_0;
    // 0x004226B4: nop

    after_0:
    // 0x004226B8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x004226BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004226C0: jr          $ra
    // 0x004226C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x004226C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0028F928(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028F928: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0028F92C: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
L_0028F930:
    // 0x0028F930: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0028F934: srlv        $v0, $v0, $a3
    ctx->r2 = S32(U32(ctx->r2) >> (ctx->r7 & 31));
    // 0x0028F938: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0028F93C: beql        $v0, $zero, L_0028F970
    if (ctx->r2 == 0) {
        // 0x0028F940: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_0028F970;
    }
    goto skip_0;
    // 0x0028F940: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    skip_0:
    // 0x0028F944: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0028F948: beq         $v0, $zero, L_0028F95C
    if (ctx->r2 == 0) {
        // 0x0028F94C: nop
    
            goto L_0028F95C;
    }
    // 0x0028F94C: nop

    // 0x0028F950: lw          $v0, 0xB8($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XB8);
    // 0x0028F954: subu        $v0, $v0, $t1
    ctx->r2 = SUB32(ctx->r2, ctx->r9);
    // 0x0028F958: sw          $v0, 0xB8($a2)
    MEM_W(0XB8, ctx->r6) = ctx->r2;
L_0028F95C:
    // 0x0028F95C: lw          $v1, 0xB8($a2)
    ctx->r3 = MEM_W(ctx->r6, 0XB8);
    // 0x0028F960: sltu        $v0, $v1, $t0
    ctx->r2 = ctx->r3 < ctx->r8 ? 1 : 0;
    // 0x0028F964: bnel        $v0, $zero, L_0028F96C
    if (ctx->r2 != 0) {
        // 0x0028F968: addu        $t0, $v1, $zero
        ctx->r8 = ADD32(ctx->r3, 0);
            goto L_0028F96C;
    }
    goto skip_1;
    // 0x0028F968: addu        $t0, $v1, $zero
    ctx->r8 = ADD32(ctx->r3, 0);
    skip_1:
L_0028F96C:
    // 0x0028F96C: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
L_0028F970:
    // 0x0028F970: sltiu       $v0, $a3, 0x10
    ctx->r2 = ctx->r7 < 0X10 ? 1 : 0;
    // 0x0028F974: bne         $v0, $zero, L_0028F930
    if (ctx->r2 != 0) {
        // 0x0028F978: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_0028F930;
    }
    // 0x0028F978: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x0028F97C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0028F980: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    // 0x0028F984: jr          $ra
    // 0x0028F988: sw          $t0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r8;
    return;
    // 0x0028F988: sw          $t0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r8;
;}
RECOMP_FUNC void func_00226160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00226160: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00226164: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00226168: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0022616C: lw          $a0, 0x68($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X68);
    // 0x00226170: jal         0x002017D4
    // 0x00226174: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00226174: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    after_0:
    // 0x00226178: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0022617C: jal         0x002017D4
    // 0x00226180: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00226180: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x00226184: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x00226188: mult        $s0, $v1
    result = S64(S32(ctx->r16)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0022618C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00226190: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00226194: mflo        $a3
    ctx->r7 = lo;
    // 0x00226198: addiu       $v1, $a3, 0x8
    ctx->r3 = ADD32(ctx->r7, 0X8);
    // 0x0022619C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x002261A0: jr          $ra
    // 0x002261A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002261A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00256EB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00256EB0: lbu         $v0, 0xB($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XB);
    // 0x00256EB4: jr          $ra
    // 0x00256EB8: nop

    return;
    // 0x00256EB8: nop

;}
RECOMP_FUNC void func_00423A5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00423A5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00423A60: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00423A64: sw          $v0, 0x9B0($at)
    MEM_W(0X9B0, ctx->r1) = ctx->r2;
    // 0x00423A68: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00423A6C: sw          $zero, 0x9A4($at)
    MEM_W(0X9A4, ctx->r1) = 0;
    // 0x00423A70: jr          $ra
    // 0x00423A74: nop

    return;
    // 0x00423A74: nop

;}
RECOMP_FUNC void func_00262C64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00262C64: addiu       $v0, $zero, 0x5F0
    ctx->r2 = ADD32(0, 0X5F0);
    // 0x00262C68: beq         $a0, $v0, L_00262D3C
    if (ctx->r4 == ctx->r2) {
        // 0x00262C6C: slt         $v0, $a0, $v0
        ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_00262D3C;
    }
    // 0x00262C6C: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00262C70: bne         $v0, $zero, L_00262D2C
    if (ctx->r2 != 0) {
        // 0x00262C74: addiu       $v0, $zero, 0x5F1
        ctx->r2 = ADD32(0, 0X5F1);
            goto L_00262D2C;
    }
    // 0x00262C74: addiu       $v0, $zero, 0x5F1
    ctx->r2 = ADD32(0, 0X5F1);
    // 0x00262C78: beq         $a0, $v0, L_00262D4C
    if (ctx->r4 == ctx->r2) {
        // 0x00262C7C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00262D4C;
    }
    // 0x00262C7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00262C80: j           L_00262D6C
    // 0x00262C84: nop

        goto L_00262D6C;
    // 0x00262C84: nop

    // 0x00262C88: addiu       $v0, $zero, 0x845
    ctx->r2 = ADD32(0, 0X845);
    // 0x00262C8C: beq         $a0, $v0, L_00262D1C
    if (ctx->r4 == ctx->r2) {
        // 0x00262C90: slti        $v0, $a0, 0x846
        ctx->r2 = SIGNED(ctx->r4) < 0X846 ? 1 : 0;
            goto L_00262D1C;
    }
    // 0x00262C90: slti        $v0, $a0, 0x846
    ctx->r2 = SIGNED(ctx->r4) < 0X846 ? 1 : 0;
    // 0x00262C94: beq         $v0, $zero, L_00262CBC
    if (ctx->r2 == 0) {
        // 0x00262C98: addiu       $v0, $zero, 0x843
        ctx->r2 = ADD32(0, 0X843);
            goto L_00262CBC;
    }
    // 0x00262C98: addiu       $v0, $zero, 0x843
    ctx->r2 = ADD32(0, 0X843);
    // 0x00262C9C: beq         $a0, $v0, L_00262CFC
    if (ctx->r4 == ctx->r2) {
        // 0x00262CA0: slti        $v0, $a0, 0x844
        ctx->r2 = SIGNED(ctx->r4) < 0X844 ? 1 : 0;
            goto L_00262CFC;
    }
    // 0x00262CA0: slti        $v0, $a0, 0x844
    ctx->r2 = SIGNED(ctx->r4) < 0X844 ? 1 : 0;
    // 0x00262CA4: beq         $v0, $zero, L_00262D0C
    if (ctx->r2 == 0) {
        // 0x00262CA8: addiu       $v0, $zero, 0x842
        ctx->r2 = ADD32(0, 0X842);
            goto L_00262D0C;
    }
    // 0x00262CA8: addiu       $v0, $zero, 0x842
    ctx->r2 = ADD32(0, 0X842);
    // 0x00262CAC: beq         $a0, $v0, L_00262CE8
    if (ctx->r4 == ctx->r2) {
        // 0x00262CB0: nop
    
            goto L_00262CE8;
    }
    // 0x00262CB0: nop

    // 0x00262CB4: jr          $ra
    // 0x00262CB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x00262CB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00262CBC:
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

L_00262CE8:
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
L_00262CFC:
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
L_00262D0C:
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
L_00262D1C:
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
L_00262D6C:
    // 0x00262D6C: jr          $ra
    // 0x00262D70: nop

    return;
    // 0x00262D70: nop

;}
RECOMP_FUNC void func_0025AB80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025AB80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025AB84: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025AB88: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025AB8C: lhu         $a3, 0x7C($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X7C);
    // 0x0025AB90: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025AB94: addiu       $a2, $a2, 0x4B0
    ctx->r6 = ADD32(ctx->r6, 0X4B0);
    // 0x0025AB98: jal         0x00245A98
    // 0x0025AB9C: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025AB9C: nop

    after_0:
    // 0x0025ABA0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025ABA4: jr          $ra
    // 0x0025ABA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025ABA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00444DD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00444DD0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00444DD4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00444DD8: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00444DDC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00444DE0: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x00444DE4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00444DE8: lui         $s4, 0x8013
    ctx->r20 = S32(0X8013 << 16);
    // 0x00444DEC: addiu       $s4, $s4, -0x490
    ctx->r20 = ADD32(ctx->r20, -0X490);
    // 0x00444DF0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00444DF4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00444DF8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00444DFC: addiu       $s1, $zero, 0x18
    ctx->r17 = ADD32(0, 0X18);
    // 0x00444E00: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
L_00444E04:
    // 0x00444E04: srav        $v0, $s3, $s0
    ctx->r2 = S32(SIGNED(ctx->r19) >> (ctx->r16 & 31));
    // 0x00444E08: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00444E0C: beq         $v0, $zero, L_00444E20
    if (ctx->r2 == 0) {
        // 0x00444E10: addu        $a0, $s4, $s1
        ctx->r4 = ADD32(ctx->r20, ctx->r17);
            goto L_00444E20;
    }
    // 0x00444E10: addu        $a0, $s4, $s1
    ctx->r4 = ADD32(ctx->r20, ctx->r17);
    // 0x00444E14: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x00444E18: jal         0x00236314
    // 0x00444E1C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_00236314(rdram, ctx);
        goto after_0;
    // 0x00444E1C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_0:
L_00444E20:
    // 0x00444E20: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00444E24: slti        $v0, $s0, 0xF
    ctx->r2 = SIGNED(ctx->r16) < 0XF ? 1 : 0;
    // 0x00444E28: bne         $v0, $zero, L_00444E04
    if (ctx->r2 != 0) {
        // 0x00444E2C: addiu       $s1, $s1, 0x68
        ctx->r17 = ADD32(ctx->r17, 0X68);
            goto L_00444E04;
    }
    // 0x00444E2C: addiu       $s1, $s1, 0x68
    ctx->r17 = ADD32(ctx->r17, 0X68);
    // 0x00444E30: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00444E34: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00444E38: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00444E3C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00444E40: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00444E44: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00444E48: jr          $ra
    // 0x00444E4C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00444E4C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_002532EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002532EC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x002532F0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x002532F4: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x002532F8: lw          $v1, 0x20($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X20);
    // 0x002532FC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00253300: lwc1        $f3, 0x70D0($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X70D0);
    // 0x00253304: beq         $v1, $zero, L_00253368
    if (ctx->r3 == 0) {
        // 0x00253308: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00253368;
    }
    // 0x00253308: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0025330C: lwc1        $f6, 0x4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4);
    // 0x00253310: lwc1        $f5, 0x8($sp)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r29, 0X8);
    // 0x00253314: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
L_00253318:
    // 0x00253318: lwc1        $f0, 0x4($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X4);
    // 0x0025331C: sub.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x00253320: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00253324: lwc1        $f2, 0x8($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X8);
    // 0x00253328: sub.s       $f2, $f2, $f5
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f5.fl;
    // 0x0025332C: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x00253330: lwc1        $f1, 0xC($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0XC);
    // 0x00253334: sub.s       $f1, $f1, $f4
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f4.fl;
    // 0x00253338: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0025333C: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x00253340: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00253344: c.lt.s      $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f0.fl < ctx->f3.fl;
    // 0x00253348: nop

    // 0x0025334C: bc1f        L_0025335C
    if (!c1cs) {
        // 0x00253350: nop
    
            goto L_0025335C;
    }
    // 0x00253350: nop

    // 0x00253354: mov.s       $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f3.fl = ctx->f0.fl;
    // 0x00253358: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_0025335C:
    // 0x0025335C: lw          $v1, 0x1320($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1320);
    // 0x00253360: bne         $v1, $zero, L_00253318
    if (ctx->r3 != 0) {
        // 0x00253364: nop
    
            goto L_00253318;
    }
    // 0x00253364: nop

L_00253368:
    // 0x00253368: jr          $ra
    // 0x0025336C: nop

    return;
    // 0x0025336C: nop

;}
RECOMP_FUNC void func_0029A49C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029A49C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // turok2: reconnected split function: a stray ELF symbol at 0x0029A4A0 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0029A4A0(rdram, ctx);
;}
RECOMP_FUNC void func_0044F558(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044F558: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0044F55C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0044F560: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0044F564: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0044F568: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0044F56C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0044F570: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x0044F574: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0044F578: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x0044F57C: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x0044F580: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0044F584: lw          $a0, 0x20($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X20);
    // 0x0044F588: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x0044F58C: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x0044F590: jal         0x00285628
    // 0x0044F594: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    func_00285628(rdram, ctx);
        goto after_0;
    // 0x0044F594: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    after_0:
    // 0x0044F598: beq         $v0, $zero, L_0044F5BC
    if (ctx->r2 == 0) {
        // 0x0044F59C: nop
    
            goto L_0044F5BC;
    }
    // 0x0044F59C: nop

    // 0x0044F5A0: subu        $s0, $s0, $s4
    ctx->r16 = SUB32(ctx->r16, ctx->r20);
    // 0x0044F5A4: slt         $v0, $s0, $s2
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x0044F5A8: beq         $v0, $zero, L_0044F5BC
    if (ctx->r2 == 0) {
        // 0x0044F5AC: nop
    
            goto L_0044F5BC;
    }
    // 0x0044F5AC: nop

    // 0x0044F5B0: beq         $s5, $zero, L_0044F5BC
    if (ctx->r21 == 0) {
        // 0x0044F5B4: addu        $s0, $s2, $zero
        ctx->r16 = ADD32(ctx->r18, 0);
            goto L_0044F5BC;
    }
    // 0x0044F5B4: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
    // 0x0044F5B8: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
L_0044F5BC:
    // 0x0044F5BC: lw          $a0, 0x20($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X20);
    // 0x0044F5C0: jal         0x00285670
    // 0x0044F5C4: nop

    func_00285670(rdram, ctx);
        goto after_1;
    // 0x0044F5C4: nop

    after_1:
    // 0x0044F5C8: beq         $v0, $zero, L_0044F5F0
    if (ctx->r2 == 0) {
        // 0x0044F5CC: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_0044F5F0;
    }
    // 0x0044F5CC: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x0044F5D0: addu        $s0, $s0, $s4
    ctx->r16 = ADD32(ctx->r16, ctx->r20);
    // 0x0044F5D4: slt         $v0, $s1, $s0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x0044F5D8: beq         $v0, $zero, L_0044F5F0
    if (ctx->r2 == 0) {
        // 0x0044F5DC: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_0044F5F0;
    }
    // 0x0044F5DC: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x0044F5E0: beq         $s5, $zero, L_0044F5EC
    if (ctx->r21 == 0) {
        // 0x0044F5E4: addu        $s0, $s1, $zero
        ctx->r16 = ADD32(ctx->r17, 0);
            goto L_0044F5EC;
    }
    // 0x0044F5E4: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
    // 0x0044F5E8: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
L_0044F5EC:
    // 0x0044F5EC: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_0044F5F0:
    // 0x0044F5F0: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x0044F5F4: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0044F5F8: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0044F5FC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0044F600: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0044F604: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0044F608: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0044F60C: jr          $ra
    // 0x0044F610: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0044F610: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0041C828(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041C828: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041C82C: lwc1        $f1, 0x930($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X930);
    // 0x0041C830: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0041C834: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0041C838: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x0041C83C: nop

    // 0x0041C840: bc1f        L_0041C870
    if (!c1cs) {
        // 0x0041C844: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_0041C870;
    }
    // 0x0041C844: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0041C848: jal         0x0042452C
    // 0x0041C84C: nop

    func_0042452C(rdram, ctx);
        goto after_0;
    // 0x0041C84C: nop

    after_0:
    // 0x0041C850: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041C854: lwc1        $f0, 0x132C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X132C);
    // 0x0041C858: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041C85C: lbu         $v0, 0x203B($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X203B);
    // 0x0041C860: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041C864: swc1        $f0, 0x930($at)
    MEM_W(0X930, ctx->r1) = ctx->f0.u32l;
    // 0x0041C868: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041C86C: sb          $v0, -0x53A8($at)
    MEM_B(-0X53A8, ctx->r1) = ctx->r2;
L_0041C870:
    // 0x0041C870: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0041C874: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041C878: jr          $ra
    // 0x0041C87C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0041C87C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00293354(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00293354: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x00293358: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x0029335C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00293360: sw          $v1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r3;
    // 0x00293364: lbu         $a3, 0x0($v1)
    ctx->r7 = MEM_BU(ctx->r3, 0X0);
    // 0x00293368: addiu       $a1, $v1, 0x1
    ctx->r5 = ADD32(ctx->r3, 0X1);
    // 0x0029336C: sw          $a1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r5;
    // 0x00293370: lbu         $a2, 0x1($v1)
    ctx->r6 = MEM_BU(ctx->r3, 0X1);
    // 0x00293374: addiu       $a1, $v1, 0x2
    ctx->r5 = ADD32(ctx->r3, 0X2);
    // 0x00293378: sw          $a1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r5;
    // 0x0029337C: lbu         $a1, 0x2($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X2);
    // 0x00293380: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    // 0x00293384: sw          $v1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r3;
    // 0x00293388: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x0029338C: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x00293390: or          $v0, $v0, $a3
    ctx->r2 = ctx->r2 | ctx->r7;
    // 0x00293394: sll         $a2, $a2, 8
    ctx->r6 = S32(ctx->r6 << 8);
    // 0x00293398: or          $v0, $v0, $a2
    ctx->r2 = ctx->r2 | ctx->r6;
    // 0x0029339C: jr          $ra
    // 0x002933A0: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
    return;
    // 0x002933A0: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
;}
RECOMP_FUNC void func_0028A018(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028A018: lwc1        $f0, 0x6F98($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6F98);
    // 0x0028A01C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
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
RECOMP_FUNC void func_002768B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002768B0: lh          $v0, 0x14($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X14);
    // 0x002768B4: jr          $ra
    // 0x002768B8: nop

    return;
    // 0x002768B8: nop

;}
RECOMP_FUNC void func_00256084(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00256084: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00256088: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025608C: jal         0x00251698
    // 0x00256090: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_00251698(rdram, ctx);
        goto after_0;
    // 0x00256090: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_0:
    // 0x00256094: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00256098: jr          $ra
    // 0x0025609C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025609C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00293430(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00293430: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00293434: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00293438: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0029343C: addiu       $s0, $s0, 0x7760
    ctx->r16 = ADD32(ctx->r16, 0X7760);
    // 0x00293440: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00293444: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00293448: beq         $v0, $zero, L_0029345C
    if (ctx->r2 == 0) {
        // 0x0029344C: nop
    
            goto L_0029345C;
    }
    // 0x0029344C: nop

    // 0x00293450: jal         0x00294150
    // 0x00293454: nop

    func_00294150(rdram, ctx);
        goto after_0;
    // 0x00293454: nop

    after_0:
    // 0x00293458: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
L_0029345C:
    // 0x0029345C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00293460: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00293464: jr          $ra
    // 0x00293468: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00293468: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
