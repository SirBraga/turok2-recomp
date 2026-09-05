#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_00268114(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00268114: lw          $v0, 0x48($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X48);
    // 0x00268118: jr          $ra
    // 0x0026811C: andi        $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 & 0X2000;
    return;
    // 0x0026811C: andi        $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 & 0X2000;
;}
RECOMP_FUNC void func_0028F61C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028F61C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0028F620: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0028F624: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0028F628: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0028F62C: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x0028F630: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0028F634: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x0028F638: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0028F63C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x0028F640: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0028F644: lw          $a2, 0x10($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X10);
L_0028F648:
    // 0x0028F648: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x0028F64C: srlv        $v0, $v0, $a1
    ctx->r2 = S32(U32(ctx->r2) >> (ctx->r5 & 31));
    // 0x0028F650: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0028F654: beql        $v0, $zero, L_0028F690
    if (ctx->r2 == 0) {
        // 0x0028F658: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_0028F690;
    }
    goto skip_0;
    // 0x0028F658: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    skip_0:
    // 0x0028F65C: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x0028F660: beq         $v0, $zero, L_0028F674
    if (ctx->r2 == 0) {
        // 0x0028F664: nop
    
            goto L_0028F674;
    }
    // 0x0028F664: nop

    // 0x0028F668: lw          $v0, 0xB8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB8);
    // 0x0028F66C: subu        $v0, $v0, $a2
    ctx->r2 = SUB32(ctx->r2, ctx->r6);
    // 0x0028F670: sw          $v0, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->r2;
L_0028F674:
    // 0x0028F674: lw          $v1, 0xB8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XB8);
    // 0x0028F678: sltu        $v0, $v1, $s0
    ctx->r2 = ctx->r3 < ctx->r16 ? 1 : 0;
    // 0x0028F67C: beql        $v0, $zero, L_0028F690
    if (ctx->r2 == 0) {
        // 0x0028F680: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_0028F690;
    }
    goto skip_1;
    // 0x0028F680: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    skip_1:
    // 0x0028F684: addu        $s0, $v1, $zero
    ctx->r16 = ADD32(ctx->r3, 0);
    // 0x0028F688: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0028F68C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_0028F690:
    // 0x0028F690: sltiu       $v0, $a1, 0x10
    ctx->r2 = ctx->r5 < 0X10 ? 1 : 0;
    // 0x0028F694: bne         $v0, $zero, L_0028F648
    if (ctx->r2 != 0) {
        // 0x0028F698: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_0028F648;
    }
    // 0x0028F698: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x0028F69C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0028F6A0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0028F6A4: jal         0x0028EF90
    // 0x0028F6A8: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_0028EF90(rdram, ctx);
        goto after_0;
    // 0x0028F6A8: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_0:
    // 0x0028F6AC: sw          $s0, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r16;
    // 0x0028F6B0: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x0028F6B4: sw          $s0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r16;
    // 0x0028F6B8: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x0028F6BC: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
    // 0x0028F6C0: lh          $v1, 0x0($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X0);
    // 0x0028F6C4: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x0028F6C8: beq         $v1, $v0, L_0028F6EC
    if (ctx->r3 == ctx->r2) {
        // 0x0028F6CC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0028F6EC;
    }
    // 0x0028F6CC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0028F6D0: jal         0x0028F98C
    // 0x0028F6D4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_0028F98C(rdram, ctx);
        goto after_1;
    // 0x0028F6D4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_1:
    // 0x0028F6D8: sll         $a0, $s2, 2
    ctx->r4 = S32(ctx->r18 << 2);
    // 0x0028F6DC: addu        $a0, $s1, $a0
    ctx->r4 = ADD32(ctx->r17, ctx->r4);
    // 0x0028F6E0: lw          $v1, 0xB8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XB8);
    // 0x0028F6E4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0028F6E8: sw          $v1, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->r3;
L_0028F6EC:
    // 0x0028F6EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0028F6F0: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    // 0x0028F6F4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x0028F6F8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0028F6FC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0028F700: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0028F704: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0028F708: jr          $ra
    // 0x0028F70C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0028F70C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0026376C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026376C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00263770: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x00263774: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00263778: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0026377C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00263780: lhu         $a1, 0xA($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0XA);
    // 0x00263784: lhu         $a2, 0x4($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X4);
    // 0x00263788: jal         0x002245BC
    // 0x0026378C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_002245BC(rdram, ctx);
        goto after_0;
    // 0x0026378C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x00263790: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00263794: jr          $ra
    // 0x00263798: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00263798: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00229618(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00229618: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x0022961C: sw          $s4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r20;
    // 0x00229620: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x00229624: sw          $ra, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r31;
    // 0x00229628: sw          $s3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r19;
    // 0x0022962C: sw          $s2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r18;
    // 0x00229630: sw          $s1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r17;
    // 0x00229634: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    // 0x00229638: sdc1        $f20, 0x88($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X88, ctx->r29);
    // 0x0022963C: lw          $v0, 0xF8($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XF8);
    // 0x00229640: mtc1        $a1, $f2
    ctx->f2.u32l = ctx->r5;
    // 0x00229644: lw          $v0, 0x2C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2C);
    // 0x00229648: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022964C: lwc1        $f20, 0x6120($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6120);
    // 0x00229650: lb          $v0, 0x18($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X18);
    // 0x00229654: lwc1        $f1, 0x11C($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X11C);
    // 0x00229658: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0022965C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00229660: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00229664: nop

    // 0x00229668: bc1tl       L_00229670
    if (c1cs) {
        // 0x0022966C: div.s       $f20, $f1, $f0
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
            goto L_00229670;
    }
    goto skip_0;
    // 0x0022966C: div.s       $f20, $f1, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
    skip_0:
L_00229670:
    // 0x00229670: mul.s       $f20, $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f2.fl);
    // 0x00229674: lw          $v1, 0x150($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X150);
    // 0x00229678: lw          $a3, 0x154($s4)
    ctx->r7 = MEM_W(ctx->r20, 0X154);
    // 0x0022967C: lw          $t0, 0x158($s4)
    ctx->r8 = MEM_W(ctx->r20, 0X158);
    // 0x00229680: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x00229684: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x00229688: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x0022968C: lwc1        $f0, 0x188($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X188);
    // 0x00229690: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00229694: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00229698: nop

    // 0x0022969C: bc1f        L_0022976C
    if (!c1cs) {
        // 0x002296A0: addiu       $a2, $sp, 0x30
        ctx->r6 = ADD32(ctx->r29, 0X30);
            goto L_0022976C;
    }
    // 0x002296A0: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x002296A4: addiu       $s0, $sp, 0x20
    ctx->r16 = ADD32(ctx->r29, 0X20);
    // 0x002296A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002296AC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002296B0: lwc1        $f0, 0x6124($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6124);
    // 0x002296B4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x002296B8: swc1        $f1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x002296BC: swc1        $f1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x002296C0: jal         0x0020EFDC
    // 0x002296C4: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    func_0020EFDC(rdram, ctx);
        goto after_0;
    // 0x002296C4: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x002296C8: lwc1        $f12, 0x178($s4)
    ctx->f12.u32l = MEM_W(ctx->r20, 0X178);
    // 0x002296CC: jal         0x002982F0
    // 0x002296D0: nop

    func_002982F0(rdram, ctx);
        goto after_1;
    // 0x002296D0: nop

    after_1:
    // 0x002296D4: lwc1        $f1, 0x188($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X188);
    // 0x002296D8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002296DC: nop

    // 0x002296E0: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x002296E4: addiu       $s2, $sp, 0x40
    ctx->r18 = ADD32(ctx->r29, 0X40);
    // 0x002296E8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x002296EC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x002296F0: jal         0x0020EF60
    // 0x002296F4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0020EF60(rdram, ctx);
        goto after_2;
    // 0x002296F4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x002296F8: lwc1        $f0, 0x180($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X180);
    // 0x002296FC: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x00229700: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00229704: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x00229708: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0022970C: lwc1        $f12, 0x178($s4)
    ctx->f12.u32l = MEM_W(ctx->r20, 0X178);
    // 0x00229710: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x00229714: jal         0x002982F0
    // 0x00229718: swc1        $f12, 0x178($s4)
    MEM_W(0X178, ctx->r20) = ctx->f12.u32l;
    func_002982F0(rdram, ctx);
        goto after_3;
    // 0x00229718: swc1        $f12, 0x178($s4)
    MEM_W(0X178, ctx->r20) = ctx->f12.u32l;
    after_3:
    // 0x0022971C: lwc1        $f1, 0x188($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X188);
    // 0x00229720: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00229724: nop

    // 0x00229728: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x0022972C: addiu       $s1, $sp, 0x50
    ctx->r17 = ADD32(ctx->r29, 0X50);
    // 0x00229730: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00229734: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x00229738: jal         0x0020EF60
    // 0x0022973C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0020EF60(rdram, ctx);
        goto after_4;
    // 0x0022973C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x00229740: addiu       $s0, $s4, 0x18
    ctx->r16 = ADD32(ctx->r20, 0X18);
    // 0x00229744: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00229748: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0022974C: jal         0x0020EF2C
    // 0x00229750: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_0020EF2C(rdram, ctx);
        goto after_5;
    // 0x00229750: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_5:
    // 0x00229754: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00229758: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0022975C: jal         0x0020EEF8
    // 0x00229760: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0020EEF8(rdram, ctx);
        goto after_6;
    // 0x00229760: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_6:
    // 0x00229764: j           L_0022978C
    // 0x00229768: nop

        goto L_0022978C;
    // 0x00229768: nop

L_0022976C:
    // 0x0022976C: lwc1        $f0, 0x180($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X180);
    // 0x00229770: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x00229774: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00229778: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x0022977C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00229780: lwc1        $f1, 0x178($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X178);
    // 0x00229784: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00229788: swc1        $f1, 0x178($s4)
    MEM_W(0X178, ctx->r20) = ctx->f_odd[(1 - 1) * 2];
L_0022978C:
    // 0x0022978C: lwc1        $f0, 0x18C($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X18C);
    // 0x00229790: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00229794: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00229798: nop

    // 0x0022979C: bc1f        L_00229880
    if (!c1cs) {
        // 0x002297A0: addiu       $s2, $sp, 0x60
        ctx->r18 = ADD32(ctx->r29, 0X60);
            goto L_00229880;
    }
    // 0x002297A0: addiu       $s2, $sp, 0x60
    ctx->r18 = ADD32(ctx->r29, 0X60);
    // 0x002297A4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x002297A8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x002297AC: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x002297B0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002297B4: lwc1        $f0, 0x6128($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6128);
    // 0x002297B8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x002297BC: swc1        $f1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x002297C0: swc1        $f1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x002297C4: jal         0x0020EFDC
    // 0x002297C8: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    func_0020EFDC(rdram, ctx);
        goto after_7;
    // 0x002297C8: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_7:
    // 0x002297CC: addiu       $s1, $sp, 0x20
    ctx->r17 = ADD32(ctx->r29, 0X20);
    // 0x002297D0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002297D4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x002297D8: jal         0x0020EFDC
    // 0x002297DC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0020EFDC(rdram, ctx);
        goto after_8;
    // 0x002297DC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_8:
    // 0x002297E0: lwc1        $f12, 0x17C($s4)
    ctx->f12.u32l = MEM_W(ctx->r20, 0X17C);
    // 0x002297E4: jal         0x002982F0
    // 0x002297E8: addiu       $s0, $s4, 0x18
    ctx->r16 = ADD32(ctx->r20, 0X18);
    func_002982F0(rdram, ctx);
        goto after_9;
    // 0x002297E8: addiu       $s0, $s4, 0x18
    ctx->r16 = ADD32(ctx->r20, 0X18);
    after_9:
    // 0x002297EC: lwc1        $f1, 0x18C($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X18C);
    // 0x002297F0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002297F4: nop

    // 0x002297F8: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x002297FC: addiu       $s3, $sp, 0x40
    ctx->r19 = ADD32(ctx->r29, 0X40);
    // 0x00229800: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00229804: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x00229808: jal         0x0020EF60
    // 0x0022980C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0020EF60(rdram, ctx);
        goto after_10;
    // 0x0022980C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_10:
    // 0x00229810: lwc1        $f0, 0x184($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X184);
    // 0x00229814: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x00229818: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0022981C: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x00229820: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00229824: lwc1        $f12, 0x17C($s4)
    ctx->f12.u32l = MEM_W(ctx->r20, 0X17C);
    // 0x00229828: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x0022982C: jal         0x002982F0
    // 0x00229830: swc1        $f12, 0x17C($s4)
    MEM_W(0X17C, ctx->r20) = ctx->f12.u32l;
    func_002982F0(rdram, ctx);
        goto after_11;
    // 0x00229830: swc1        $f12, 0x17C($s4)
    MEM_W(0X17C, ctx->r20) = ctx->f12.u32l;
    after_11:
    // 0x00229834: lwc1        $f1, 0x18C($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X18C);
    // 0x00229838: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0022983C: nop

    // 0x00229840: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x00229844: addiu       $s2, $sp, 0x50
    ctx->r18 = ADD32(ctx->r29, 0X50);
    // 0x00229848: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0022984C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x00229850: jal         0x0020EF60
    // 0x00229854: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0020EF60(rdram, ctx);
        goto after_12;
    // 0x00229854: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_12:
    // 0x00229858: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022985C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00229860: jal         0x0020EF2C
    // 0x00229864: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_0020EF2C(rdram, ctx);
        goto after_13;
    // 0x00229864: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_13:
    // 0x00229868: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022986C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00229870: jal         0x0020EEF8
    // 0x00229874: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_0020EEF8(rdram, ctx);
        goto after_14;
    // 0x00229874: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_14:
    // 0x00229878: j           L_002298A0
    // 0x0022987C: nop

        goto L_002298A0;
    // 0x0022987C: nop

L_00229880:
    // 0x00229880: lwc1        $f0, 0x184($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X184);
    // 0x00229884: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x00229888: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0022988C: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x00229890: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00229894: lwc1        $f1, 0x17C($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X17C);
    // 0x00229898: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0022989C: swc1        $f1, 0x17C($s4)
    MEM_W(0X17C, ctx->r20) = ctx->f_odd[(1 - 1) * 2];
L_002298A0:
    // 0x002298A0: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    // 0x002298A4: lw          $s4, 0x80($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X80);
    // 0x002298A8: lw          $s3, 0x7C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X7C);
    // 0x002298AC: lw          $s2, 0x78($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X78);
    // 0x002298B0: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x002298B4: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x002298B8: ldc1        $f20, 0x88($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X88);
    // 0x002298BC: jr          $ra
    // 0x002298C0: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x002298C0: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_00226DCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00226DCC: lw          $v1, 0x8C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8C);
    // 0x00226DD0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00226DD4: mult        $a1, $v0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00226DD8: mflo        $a2
    ctx->r6 = lo;
    // 0x00226DDC: addiu       $v0, $a2, 0x8
    ctx->r2 = ADD32(ctx->r6, 0X8);
    // 0x00226DE0: jr          $ra
    // 0x00226DE4: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    return;
    // 0x00226DE4: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
;}
RECOMP_FUNC void func_00446C00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00446C00: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00446C04: lwc1        $f12, 0x900($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X900);
    // 0x00446C08: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00446C0C: lwc1        $f14, 0x904($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X904);
    // 0x00446C10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00446C14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00446C18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00446C1C: jal         0x002119FC
    // 0x00446C20: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_002119FC(rdram, ctx);
        goto after_0;
    // 0x00446C20: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x00446C24: swc1        $f0, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f0.u32l;
    // 0x00446C28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00446C2C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00446C30: jr          $ra
    // 0x00446C34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00446C34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00403518(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00403518: jr          $ra
    // 0x0040351C: sw          $zero, 0x250($a0)
    MEM_W(0X250, ctx->r4) = 0;
    return;
    // 0x0040351C: sw          $zero, 0x250($a0)
    MEM_W(0X250, ctx->r4) = 0;
;}
RECOMP_FUNC void func_00294D54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00294D54: addiu       $v0, $v0, -0x3538
    ctx->r2 = ADD32(ctx->r2, -0X3538);
    // 0x00294D58: sw          $v0, 0x100($s0)
    MEM_W(0X100, ctx->r16) = ctx->r2;
    // 0x00294D5C: lui         $v0, 0x26
    ctx->r2 = S32(0X26 << 16);
    // 0x00294D60: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00294D64: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x00294D68: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x00294D6C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x00294D70: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x00294D74: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x00294D78: addu        $s5, $a3, $zero
    ctx->r21 = ADD32(ctx->r7, 0);
    // 0x00294D7C: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x00294D80: ori         $v1, $v1, 0x6C0
    ctx->r3 = ctx->r3 | 0X6C0;
    // 0x00294D84: lui         $a1, 0x200
    ctx->r5 = S32(0X200 << 16);
    // 0x00294D88: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x00294D8C: ori         $a1, $a1, 0x800
    ctx->r5 = ctx->r5 | 0X800;
    // 0x00294D90: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00294D94: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00294D98: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x00294D9C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00294DA0: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x00294DA4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00294DA8: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x00294DAC: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x00294DB0: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x00294DB4: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x00294DB8: sll         $v1, $s3, 1
    ctx->r3 = S32(ctx->r19 << 1);
    // 0x00294DBC: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x00294DC0: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x00294DC4: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x00294DC8: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x00294DCC: lw          $v0, 0x14($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14);
    // 0x00294DD0: blez        $v0, L_00294E14
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00294DD4: addiu       $a2, $a2, 0x8
        ctx->r6 = ADD32(ctx->r6, 0X8);
            goto L_00294E14;
    }
    // 0x00294DD4: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x00294DD8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
L_00294DDC:
    // 0x00294DDC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00294DE0: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    // 0x00294DE4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x00294DE8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x00294DEC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00294DF0: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00294DF4: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x00294DF8: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x00294DFC: jalr        $v0
    // 0x00294E00: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x00294E00: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    after_0:
    // 0x00294E04: lw          $v1, 0x14($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X14);
    // 0x00294E08: slt         $v1, $s1, $v1
    ctx->r3 = SIGNED(ctx->r17) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00294E0C: bne         $v1, $zero, L_00294DDC
    if (ctx->r3 != 0) {
        // 0x00294E10: addu        $a2, $v0, $zero
        ctx->r6 = ADD32(ctx->r2, 0);
            goto L_00294DDC;
    }
    // 0x00294E10: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
L_00294E14:
    // 0x00294E14: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x00294E18: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x00294E1C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x00294E20: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x00294E24: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00294E28: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00294E2C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00294E30: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x00294E34: jr          $ra
    // 0x00294E38: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00294E38: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0029AC34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029AC34: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x0029AC38: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0029AC3C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
;}
RECOMP_FUNC void func_004544E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004544E8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x004544EC: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x004544F0: xori        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 ^ 0X80;
    // 0x004544F4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x004544F8: sw          $v0, -0x5528($at)
    MEM_W(-0X5528, ctx->r1) = ctx->r2;
    // 0x004544FC: jr          $ra
    // 0x00454500: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00454500: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00217C58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00217C58: lui         $v1, 0xFFF
    ctx->r3 = S32(0XFFF << 16);
    // 0x00217C5C: ori         $v1, $v1, 0xFFE0
    ctx->r3 = ctx->r3 | 0XFFE0;
    // 0x00217C60: lw          $t0, 0x0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X0);
    // 0x00217C64: lui         $v0, 0xF000
    ctx->r2 = S32(0XF000 << 16);
    // 0x00217C68: and         $v0, $t0, $v0
    ctx->r2 = ctx->r8 & ctx->r2;
    // 0x00217C6C: and         $v1, $t0, $v1
    ctx->r3 = ctx->r8 & ctx->r3;
    // 0x00217C70: srl         $v1, $v1, 3
    ctx->r3 = S32(U32(ctx->r3) >> 3);
    // 0x00217C74: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00217C78: andi        $v1, $t0, 0x1F
    ctx->r3 = ctx->r8 & 0X1F;
    // 0x00217C7C: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x00217C80: lw          $a3, 0x4($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X4);
    // 0x00217C84: beq         $v1, $zero, L_00217C9C
    if (ctx->r3 == 0) {
        // 0x00217C88: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_00217C9C;
    }
    // 0x00217C88: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x00217C8C: srlv        $a2, $a2, $v1
    ctx->r6 = S32(U32(ctx->r6) >> (ctx->r3 & 31));
    // 0x00217C90: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00217C94: sllv        $a3, $a3, $v0
    ctx->r7 = S32(ctx->r7 << (ctx->r2 & 31));
    // 0x00217C98: or          $a2, $a2, $a3
    ctx->r6 = ctx->r6 | ctx->r7;
L_00217C9C:
    // 0x00217C9C: sltiu       $v0, $a1, 0x20
    ctx->r2 = ctx->r5 < 0X20 ? 1 : 0;
    // 0x00217CA0: beql        $v0, $zero, L_00217CBC
    if (ctx->r2 == 0) {
        // 0x00217CA4: addu        $v0, $t0, $a1
        ctx->r2 = ADD32(ctx->r8, ctx->r5);
            goto L_00217CBC;
    }
    goto skip_0;
    // 0x00217CA4: addu        $v0, $t0, $a1
    ctx->r2 = ADD32(ctx->r8, ctx->r5);
    skip_0:
    // 0x00217CA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00217CAC: sllv        $v0, $v0, $a1
    ctx->r2 = S32(ctx->r2 << (ctx->r5 & 31));
    // 0x00217CB0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00217CB4: and         $a2, $a2, $v0
    ctx->r6 = ctx->r6 & ctx->r2;
    // 0x00217CB8: addu        $v0, $t0, $a1
    ctx->r2 = ADD32(ctx->r8, ctx->r5);
L_00217CBC:
    // 0x00217CBC: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00217CC0: jr          $ra
    // 0x00217CC4: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    return;
    // 0x00217CC4: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
;}
RECOMP_FUNC void func_00465480(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00465480: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x00465484: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x00465488: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0046548C: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x00465490: addu        $s7, $a1, $zero
    ctx->r23 = ADD32(ctx->r5, 0);
    // 0x00465494: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x00465498: addu        $fp, $a2, $zero
    ctx->r30 = ADD32(ctx->r6, 0);
    // 0x0046549C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004654A0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x004654A4: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x004654A8: lw          $s0, 0x7074($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X7074);
    // 0x004654AC: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x004654B0: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x004654B4: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x004654B8: addiu       $a3, $a3, 0x5D8C
    ctx->r7 = ADD32(ctx->r7, 0X5D8C);
    // 0x004654BC: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x004654C0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x004654C4: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x004654C8: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x004654CC: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x004654D0: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x004654D4: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x004654D8: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x004654DC: sdc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X50, ctx->r29);
    // 0x004654E0: jal         0x00205B94
    // 0x004654E4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00205B94(rdram, ctx);
        goto after_0;
    // 0x004654E4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_0:
    // 0x004654E8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004654EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x004654F0: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x004654F4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x004654F8: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x004654FC: addiu       $v0, $v0, 0x5FC4
    ctx->r2 = ADD32(ctx->r2, 0X5FC4);
    // 0x00465500: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x00465504: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00465508: jal         0x00205D0C
    // 0x0046550C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_00205D0C(rdram, ctx);
        goto after_1;
    // 0x0046550C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x00465510: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    // 0x00465514: lw          $s0, 0x0($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X0);
    // 0x00465518: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0046551C: jal         0x002017D4
    // 0x00465520: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x00465520: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00465524: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00465528: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0046552C: lw          $s1, 0x4($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X4);
    // 0x00465530: jal         0x002017D4
    // 0x00465534: addiu       $s6, $v0, 0x8
    ctx->r22 = ADD32(ctx->r2, 0X8);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x00465534: addiu       $s6, $v0, 0x8
    ctx->r22 = ADD32(ctx->r2, 0X8);
    after_3:
    // 0x00465538: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0046553C: lwc1        $f20, 0x600C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X600C);
    // 0x00465540: blez        $s1, L_0046558C
    if (SIGNED(ctx->r17) <= 0) {
        // 0x00465544: addiu       $s4, $v0, 0x8
        ctx->r20 = ADD32(ctx->r2, 0X8);
            goto L_0046558C;
    }
    // 0x00465544: addiu       $s4, $v0, 0x8
    ctx->r20 = ADD32(ctx->r2, 0X8);
    // 0x00465548: addu        $s0, $s4, $zero
    ctx->r16 = ADD32(ctx->r20, 0);
L_0046554C:
    // 0x0046554C: lh          $v0, 0x10($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X10);
    // 0x00465550: bnel        $v0, $fp, L_00465580
    if (ctx->r2 != ctx->r30) {
        // 0x00465554: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_00465580;
    }
    goto skip_0;
    // 0x00465554: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
    // 0x00465558: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0046555C: jal         0x0020F6BC
    // 0x00465560: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    func_0020F6BC(rdram, ctx);
        goto after_4;
    // 0x00465560: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    after_4:
    // 0x00465564: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x00465568: nop

    // 0x0046556C: bc1fl       L_00465580
    if (!c1cs) {
        // 0x00465570: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_00465580;
    }
    goto skip_1;
    // 0x00465570: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_1:
    // 0x00465574: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x00465578: addu        $s3, $s2, $zero
    ctx->r19 = ADD32(ctx->r18, 0);
    // 0x0046557C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_00465580:
    // 0x00465580: slt         $v0, $s2, $s1
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x00465584: bne         $v0, $zero, L_0046554C
    if (ctx->r2 != 0) {
        // 0x00465588: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_0046554C;
    }
    // 0x00465588: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
L_0046558C:
    // 0x0046558C: beq         $s3, $zero, L_004655CC
    if (ctx->r19 == 0) {
        // 0x00465590: sll         $v0, $s3, 2
        ctx->r2 = S32(ctx->r19 << 2);
            goto L_004655CC;
    }
    // 0x00465590: sll         $v0, $s3, 2
    ctx->r2 = S32(ctx->r19 << 2);
    // 0x00465594: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x00465598: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0046559C: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x004655A0: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x004655A4: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x004655A8: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x004655AC: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x004655B0: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x004655B4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x004655B8: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x004655BC: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x004655C0: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x004655C4: lw          $t0, 0x10($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X10);
    // 0x004655C8: sw          $t0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r8;
L_004655CC:
    // 0x004655CC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004655D0: jal         0x002052D8
    // 0x004655D4: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    func_002052D8(rdram, ctx);
        goto after_5;
    // 0x004655D4: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    after_5:
    // 0x004655D8: beq         $s3, $zero, L_004655EC
    if (ctx->r19 == 0) {
        // 0x004655DC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_004655EC;
    }
    // 0x004655DC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x004655E0: sll         $v0, $s3, 2
    ctx->r2 = S32(ctx->r19 << 2);
    // 0x004655E4: addu        $v0, $v0, $s6
    ctx->r2 = ADD32(ctx->r2, ctx->r22);
    // 0x004655E8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
L_004655EC:
    // 0x004655EC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x004655F0: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x004655F4: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x004655F8: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x004655FC: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x00465600: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x00465604: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x00465608: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x0046560C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x00465610: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x00465614: ldc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X50);
    // 0x00465618: jr          $ra
    // 0x0046561C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x0046561C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_00259F68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00259F68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00259F6C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00259F70: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00259F74: lhu         $a3, 0x94($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X94);
    // 0x00259F78: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x00259F7C: addiu       $a2, $a2, -0x760
    ctx->r6 = ADD32(ctx->r6, -0X760);
    // 0x00259F80: jal         0x00245A98
    // 0x00259F84: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x00259F84: nop

    after_0:
    // 0x00259F88: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00259F8C: jr          $ra
    // 0x00259F90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00259F90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002A05D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A05D4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x002A05D8: sdc1        $f23, 0x40($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X40, ctx->r29);
    // 0x002A05DC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002A05E0: lwc1        $f23, -0x53E0($at)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r1, -0X53E0);
    // 0x002A05E4: sdc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X38, ctx->r29);
    // 0x002A05E8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002A05EC: lwc1        $f22, -0x53DC($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X53DC);
    // 0x002A05F0: sdc1        $f21, 0x30($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X30, ctx->r29);
    // 0x002A05F4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002A05F8: lwc1        $f21, -0x53D8($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, -0X53D8);
    // 0x002A05FC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002A0600: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x002A0604: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x002A0608: lui         $s4, 0x8012
    ctx->r20 = S32(0X8012 << 16);
    // 0x002A060C: addiu       $s4, $s4, 0x5030
    ctx->r20 = ADD32(ctx->r20, 0X5030);
    // 0x002A0610: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x002A0614: lui         $s3, 0x8012
    ctx->r19 = S32(0X8012 << 16);
    // 0x002A0618: addiu       $s3, $s3, 0x5230
    ctx->r19 = ADD32(ctx->r19, 0X5230);
    // 0x002A061C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002A0620: lui         $s2, 0x8012
    ctx->r18 = S32(0X8012 << 16);
    // 0x002A0624: addiu       $s2, $s2, 0x5830
    ctx->r18 = ADD32(ctx->r18, 0X5830);
    // 0x002A0628: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x002A062C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002A0630: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
L_002A0634:
    // 0x002A0634: sll         $s0, $s1, 16
    ctx->r16 = S32(ctx->r17 << 16);
    // 0x002A0638: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    // 0x002A063C: mtc1        $s0, $f0
    ctx->f0.u32l = ctx->r16;
    // 0x002A0640: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002A0644: mul.s       $f0, $f0, $f23
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f23.fl);
    // 0x002A0648: add.s       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f22.fl;
    // 0x002A064C: mul.s       $f20, $f0, $f21
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f20.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x002A0650: jal         0x002974C0
    // 0x002A0654: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_002974C0(rdram, ctx);
        goto after_0;
    // 0x002A0654: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_0:
    // 0x002A0658: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x002A065C: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x002A0660: addu        $v0, $s0, $s4
    ctx->r2 = ADD32(ctx->r16, ctx->r20);
    // 0x002A0664: jal         0x002982F0
    // 0x002A0668: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    func_002982F0(rdram, ctx);
        goto after_1;
    // 0x002A0668: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    after_1:
    // 0x002A066C: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
    // 0x002A0670: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x002A0674: addu        $v1, $s0, $s3
    ctx->r3 = ADD32(ctx->r16, ctx->r19);
    // 0x002A0678: addu        $s0, $s0, $s2
    ctx->r16 = ADD32(ctx->r16, ctx->r18);
    // 0x002A067C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x002A0680: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x002A0684: slti        $v0, $v0, 0x80
    ctx->r2 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x002A0688: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
    // 0x002A068C: bne         $v0, $zero, L_002A0634
    if (ctx->r2 != 0) {
        // 0x002A0690: sw          $zero, 0x0($s0)
        MEM_W(0X0, ctx->r16) = 0;
            goto L_002A0634;
    }
    // 0x002A0690: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x002A0694: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x002A0698: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002A069C: lwc1        $f21, -0x53D4($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, -0X53D4);
    // 0x002A06A0: lui         $s3, 0x8012
    ctx->r19 = S32(0X8012 << 16);
    // 0x002A06A4: addiu       $s3, $s3, 0x5430
    ctx->r19 = ADD32(ctx->r19, 0X5430);
    // 0x002A06A8: lui         $s2, 0x8012
    ctx->r18 = S32(0X8012 << 16);
    // 0x002A06AC: addiu       $s2, $s2, 0x5630
    ctx->r18 = ADD32(ctx->r18, 0X5630);
L_002A06B0:
    // 0x002A06B0: sll         $s0, $s1, 16
    ctx->r16 = S32(ctx->r17 << 16);
    // 0x002A06B4: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    // 0x002A06B8: mtc1        $s0, $f0
    ctx->f0.u32l = ctx->r16;
    // 0x002A06BC: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002A06C0: mul.s       $f20, $f0, $f21
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f20.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x002A06C4: jal         0x002974C0
    // 0x002A06C8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_002974C0(rdram, ctx);
        goto after_2;
    // 0x002A06C8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_2:
    // 0x002A06CC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x002A06D0: jal         0x002982F0
    // 0x002A06D4: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_002982F0(rdram, ctx);
        goto after_3;
    // 0x002A06D4: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_3:
    // 0x002A06D8: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
    // 0x002A06DC: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x002A06E0: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x002A06E4: addu        $v1, $s0, $s3
    ctx->r3 = ADD32(ctx->r16, ctx->r19);
    // 0x002A06E8: addu        $s0, $s0, $s2
    ctx->r16 = ADD32(ctx->r16, ctx->r18);
    // 0x002A06EC: add.s       $f1, $f20, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x002A06F0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x002A06F4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x002A06F8: sub.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x002A06FC: slti        $v0, $v0, 0x80
    ctx->r2 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x002A0700: swc1        $f1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f_odd[(1 - 1) * 2];
    // 0x002A0704: bne         $v0, $zero, L_002A06B0
    if (ctx->r2 != 0) {
        // 0x002A0708: swc1        $f0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
            goto L_002A06B0;
    }
    // 0x002A0708: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    // 0x002A070C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x002A0710: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x002A0714: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x002A0718: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002A071C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002A0720: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002A0724: ldc1        $f23, 0x40($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X40);
    // 0x002A0728: ldc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X38);
    // 0x002A072C: ldc1        $f21, 0x30($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X30);
    // 0x002A0730: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x002A0734: jr          $ra
    // 0x002A0738: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x002A0738: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_00454108(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00454108: jr          $ra
    // 0x0045410C: addiu       $v0, $zero, 0x1CE9
    ctx->r2 = ADD32(0, 0X1CE9);
    return;
    // 0x0045410C: addiu       $v0, $zero, 0x1CE9
    ctx->r2 = ADD32(0, 0X1CE9);
;}
RECOMP_FUNC void func_004685C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004685C4: srl         $v0, $a1, 3
    ctx->r2 = S32(U32(ctx->r5) >> 3);
    // 0x004685C8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x004685CC: andi        $a1, $a1, 0x7
    ctx->r5 = ctx->r5 & 0X7;
    // 0x004685D0: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x004685D4: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x004685D8: srav        $v1, $v1, $a1
    ctx->r3 = S32(SIGNED(ctx->r3) >> (ctx->r5 & 31));
    // 0x004685DC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x004685E0: jr          $ra
    // 0x004685E4: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    return;
    // 0x004685E4: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
;}
RECOMP_FUNC void func_0025E7E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025E7E0: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x0025E7E4: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x0025E7E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0025E7EC: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x0025E7F0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0025E7F4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x0025E7F8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0025E7FC: sw          $ra, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r31;
    // 0x0025E800: sw          $s2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r18;
    // 0x0025E804: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x0025E808: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0025E80C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0025E810: jal         0x00246108
    // 0x0025E814: addiu       $s2, $v1, 0x14
    ctx->r18 = ADD32(ctx->r3, 0X14);
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x0025E814: addiu       $s2, $v1, 0x14
    ctx->r18 = ADD32(ctx->r3, 0X14);
    after_0:
    // 0x0025E818: lbu         $v0, 0x36($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X36);
    // 0x0025E81C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025E820: lwc1        $f0, 0x77D4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X77D4);
    // 0x0025E824: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0025E828: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x0025E82C: beq         $v0, $zero, L_0025E83C
    if (ctx->r2 == 0) {
        // 0x0025E830: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0025E83C;
    }
    // 0x0025E830: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025E834: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025E838: lwc1        $f0, 0x77D8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X77D8);
L_0025E83C:
    // 0x0025E83C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x0025E840: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x0025E844: jal         0x00245BAC
    // 0x0025E848: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x0025E848: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x0025E84C: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x0025E850: beq         $v0, $zero, L_0025E864
    if (ctx->r2 == 0) {
        // 0x0025E854: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0025E864;
    }
    // 0x0025E854: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025E858: lb          $v0, 0xC7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC7);
    // 0x0025E85C: beq         $v0, $zero, L_0025E870
    if (ctx->r2 == 0) {
        // 0x0025E860: nop
    
            goto L_0025E870;
    }
    // 0x0025E860: nop

L_0025E864:
    // 0x0025E864: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0025E868: jal         0x00243414
    // 0x0025E86C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x0025E86C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_2:
L_0025E870:
    // 0x0025E870: lw          $ra, 0xAC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XAC);
    // 0x0025E874: lw          $s2, 0xA8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA8);
    // 0x0025E878: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x0025E87C: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x0025E880: jr          $ra
    // 0x0025E884: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x0025E884: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_00281974(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00281974: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00281978: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0028197C: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00281980: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00281984: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00281988: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0028198C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00281990: lw          $s1, 0xE2C($s2)
    ctx->r17 = MEM_W(ctx->r18, 0XE2C);
    // 0x00281994: beq         $s1, $zero, L_002819C4
    if (ctx->r17 == 0) {
        // 0x00281998: addu        $s3, $a0, $zero
        ctx->r19 = ADD32(ctx->r4, 0);
            goto L_002819C4;
    }
    // 0x00281998: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0028199C: addiu       $a0, $s2, 0xE28
    ctx->r4 = ADD32(ctx->r18, 0XE28);
L_002819A0:
    // 0x002819A0: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x002819A4: jal         0x00200738
    // 0x002819A8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00200738(rdram, ctx);
        goto after_0;
    // 0x002819A8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
    // 0x002819AC: addiu       $a0, $s3, 0xF0C
    ctx->r4 = ADD32(ctx->r19, 0XF0C);
    // 0x002819B0: jal         0x00200518
    // 0x002819B4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00200518(rdram, ctx);
        goto after_1;
    // 0x002819B4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x002819B8: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
    // 0x002819BC: bne         $s1, $zero, L_002819A0
    if (ctx->r17 != 0) {
        // 0x002819C0: addiu       $a0, $s2, 0xE28
        ctx->r4 = ADD32(ctx->r18, 0XE28);
            goto L_002819A0;
    }
    // 0x002819C0: addiu       $a0, $s2, 0xE28
    ctx->r4 = ADD32(ctx->r18, 0XE28);
L_002819C4:
    // 0x002819C4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x002819C8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x002819CC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002819D0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002819D4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002819D8: jr          $ra
    // 0x002819DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x002819DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00218A1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00218A1C: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x00218A20: nop

    // 0x00218A24: bc1f        L_00218A4C
    if (!c1cs) {
        // 0x00218A28: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_00218A4C;
    }
    // 0x00218A28: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x00218A2C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_00218A30:
    // 0x00218A30: sllv        $v0, $a0, $v1
    ctx->r2 = S32(ctx->r4 << (ctx->r3 & 31));
    // 0x00218A34: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00218A38: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00218A3C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00218A40: nop

    // 0x00218A44: bc1tl       L_00218A30
    if (c1cs) {
        // 0x00218A48: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_00218A30;
    }
    goto skip_0;
    // 0x00218A48: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_0:
L_00218A4C:
    // 0x00218A4C: jr          $ra
    // 0x00218A50: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    return;
    // 0x00218A50: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
;}
RECOMP_FUNC void func_0029F5D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029F5D4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0029F5D8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0029F5DC: lw          $s3, 0x40($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X40);
    // 0x0029F5E0: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x0029F5E4: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x0029F5E8: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x0029F5EC: addu        $s6, $a2, $zero
    ctx->r22 = ADD32(ctx->r6, 0);
    // 0x0029F5F0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0029F5F4: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0029F5F8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x0029F5FC: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0029F600: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0029F604: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0029F608: beq         $s6, $zero, L_0029F92C
    if (ctx->r22 == 0) {
        // 0x0029F60C: addu        $s1, $s3, $zero
        ctx->r17 = ADD32(ctx->r19, 0);
            goto L_0029F92C;
    }
    // 0x0029F60C: addu        $s1, $s3, $zero
    ctx->r17 = ADD32(ctx->r19, 0);
    // 0x0029F610: lw          $a0, 0x38($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X38);
    // 0x0029F614: lw          $v1, 0x20($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X20);
    // 0x0029F618: addu        $v0, $s6, $a0
    ctx->r2 = ADD32(ctx->r22, ctx->r4);
    // 0x0029F61C: sltu        $v0, $v1, $v0
    ctx->r2 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x0029F620: beq         $v0, $zero, L_0029F818
    if (ctx->r2 == 0) {
        // 0x0029F624: sll         $s0, $s6, 1
        ctx->r16 = S32(ctx->r22 << 1);
            goto L_0029F818;
    }
    // 0x0029F624: sll         $s0, $s6, 1
    ctx->r16 = S32(ctx->r22 << 1);
    // 0x0029F628: lw          $v0, 0x24($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X24);
    // 0x0029F62C: beq         $v0, $zero, L_0029F818
    if (ctx->r2 == 0) {
        // 0x0029F630: subu        $s4, $v1, $a0
        ctx->r20 = SUB32(ctx->r3, ctx->r4);
            goto L_0029F818;
    }
    // 0x0029F630: subu        $s4, $v1, $a0
    ctx->r20 = SUB32(ctx->r3, ctx->r4);
    // 0x0029F634: blez        $s4, L_0029F6A0
    if (SIGNED(ctx->r20) <= 0) {
        // 0x0029F638: sll         $s0, $s4, 1
        ctx->r16 = S32(ctx->r20 << 1);
            goto L_0029F6A0;
    }
    // 0x0029F638: sll         $s0, $s4, 1
    ctx->r16 = S32(ctx->r20 << 1);
    // 0x0029F63C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0029F640: lw          $a0, 0x44($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X44);
    // 0x0029F644: lw          $a2, 0x34($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X34);
    // 0x0029F648: lw          $v0, 0x30($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X30);
    // 0x0029F64C: jalr        $v0
    // 0x0029F650: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x0029F650: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    after_0:
    // 0x0029F654: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x0029F658: andi        $a2, $a3, 0x7
    ctx->r6 = ctx->r7 & 0X7;
    // 0x0029F65C: addu        $s0, $s0, $a2
    ctx->r16 = ADD32(ctx->r16, ctx->r6);
    // 0x0029F660: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0029F664: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x0029F668: andi        $v0, $s0, 0x7
    ctx->r2 = ctx->r16 & 0X7;
    // 0x0029F66C: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x0029F670: subu        $v0, $s0, $v0
    ctx->r2 = SUB32(ctx->r16, ctx->r2);
    // 0x0029F674: lhu         $v1, 0x0($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X0);
    // 0x0029F678: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x0029F67C: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
    // 0x0029F680: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x0029F684: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0029F688: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x0029F68C: sw          $v1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r3;
    // 0x0029F690: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0029F694: subu        $v0, $a3, $a2
    ctx->r2 = SUB32(ctx->r7, ctx->r6);
    // 0x0029F698: j           L_0029F6A4
    // 0x0029F69C: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
        goto L_0029F6A4;
    // 0x0029F69C: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
L_0029F6A0:
    // 0x0029F6A0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_0029F6A4:
    // 0x0029F6A4: lhu         $v0, 0x0($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X0);
    // 0x0029F6A8: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x0029F6AC: sh          $v0, 0x0($s5)
    MEM_H(0X0, ctx->r21) = ctx->r2;
    // 0x0029F6B0: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x0029F6B4: lw          $v1, 0x28($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X28);
    // 0x0029F6B8: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x0029F6BC: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x0029F6C0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x0029F6C4: sw          $a0, 0x38($s2)
    MEM_W(0X38, ctx->r18) = ctx->r4;
    // 0x0029F6C8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0029F6CC: slt         $v0, $s4, $s6
    ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x0029F6D0: sw          $v1, 0x44($s2)
    MEM_W(0X44, ctx->r18) = ctx->r3;
    // 0x0029F6D4: lh          $s5, 0x0($s5)
    ctx->r21 = MEM_H(ctx->r21, 0X0);
    // 0x0029F6D8: beq         $v0, $zero, L_0029F7F4
    if (ctx->r2 == 0) {
        // 0x0029F6DC: addiu       $s1, $s3, -0x4
        ctx->r17 = ADD32(ctx->r19, -0X4);
            goto L_0029F7F4;
    }
    // 0x0029F6DC: addiu       $s1, $s3, -0x4
    ctx->r17 = ADD32(ctx->r19, -0X4);
    // 0x0029F6E0: sll         $v0, $s4, 1
    ctx->r2 = S32(ctx->r20 << 1);
L_0029F6E4:
    // 0x0029F6E4: addu        $s5, $s5, $v0
    ctx->r21 = ADD32(ctx->r21, ctx->r2);
    // 0x0029F6E8: lw          $v1, 0x24($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X24);
    // 0x0029F6EC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0029F6F0: beq         $v1, $v0, L_0029F704
    if (ctx->r3 == ctx->r2) {
        // 0x0029F6F4: subu        $s6, $s6, $s4
        ctx->r22 = SUB32(ctx->r22, ctx->r20);
            goto L_0029F704;
    }
    // 0x0029F6F4: subu        $s6, $s6, $s4
    ctx->r22 = SUB32(ctx->r22, ctx->r20);
    // 0x0029F6F8: beq         $v1, $zero, L_0029F704
    if (ctx->r3 == 0) {
        // 0x0029F6FC: addu        $v0, $v1, $v0
        ctx->r2 = ADD32(ctx->r3, ctx->r2);
            goto L_0029F704;
    }
    // 0x0029F6FC: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x0029F700: sw          $v0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r2;
L_0029F704:
    // 0x0029F704: lw          $v1, 0x20($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X20);
    // 0x0029F708: lw          $v0, 0x1C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1C);
    // 0x0029F70C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x0029F710: sltu        $v0, $s6, $v1
    ctx->r2 = ctx->r22 < ctx->r3 ? 1 : 0;
    // 0x0029F714: bne         $v0, $zero, L_0029F720
    if (ctx->r2 != 0) {
        // 0x0029F718: addu        $s4, $s6, $zero
        ctx->r20 = ADD32(ctx->r22, 0);
            goto L_0029F720;
    }
    // 0x0029F718: addu        $s4, $s6, $zero
    ctx->r20 = ADD32(ctx->r22, 0);
    // 0x0029F71C: addu        $s4, $v1, $zero
    ctx->r20 = ADD32(ctx->r3, 0);
L_0029F720:
    // 0x0029F720: sll         $s0, $s4, 1
    ctx->r16 = S32(ctx->r20 << 1);
    // 0x0029F724: lw          $a0, 0x44($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X44);
    // 0x0029F728: lw          $a2, 0x34($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X34);
    // 0x0029F72C: lw          $v0, 0x30($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X30);
    // 0x0029F730: jalr        $v0
    // 0x0029F734: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x0029F734: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0029F738: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x0029F73C: andi        $a2, $a3, 0x7
    ctx->r6 = ctx->r7 & 0X7;
    // 0x0029F740: andi        $v1, $s5, 0x7
    ctx->r3 = ctx->r21 & 0X7;
    // 0x0029F744: beq         $v1, $zero, L_0029F758
    if (ctx->r3 == 0) {
        // 0x0029F748: addu        $s0, $s0, $a2
        ctx->r16 = ADD32(ctx->r16, ctx->r6);
            goto L_0029F758;
    }
    // 0x0029F748: addu        $s0, $s0, $a2
    ctx->r16 = ADD32(ctx->r16, ctx->r6);
    // 0x0029F74C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x0029F750: j           L_0029F75C
    // 0x0029F754: subu        $a0, $v0, $v1
    ctx->r4 = SUB32(ctx->r2, ctx->r3);
        goto L_0029F75C;
    // 0x0029F754: subu        $a0, $v0, $v1
    ctx->r4 = SUB32(ctx->r2, ctx->r3);
L_0029F758:
    // 0x0029F758: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0029F75C:
    // 0x0029F75C: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x0029F760: addu        $v0, $s5, $a0
    ctx->r2 = ADD32(ctx->r21, ctx->r4);
    // 0x0029F764: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x0029F768: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x0029F76C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0029F770: sw          $v0, -0x4($s1)
    MEM_W(-0X4, ctx->r17) = ctx->r2;
    // 0x0029F774: andi        $v0, $s0, 0x7
    ctx->r2 = ctx->r16 & 0X7;
    // 0x0029F778: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x0029F77C: subu        $v0, $s0, $v0
    ctx->r2 = SUB32(ctx->r16, ctx->r2);
    // 0x0029F780: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x0029F784: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x0029F788: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x0029F78C: addiu       $s3, $s3, 0x10
    ctx->r19 = ADD32(ctx->r19, 0X10);
    // 0x0029F790: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x0029F794: sw          $v0, -0x4($s1)
    MEM_W(-0X4, ctx->r17) = ctx->r2;
    // 0x0029F798: subu        $v0, $a3, $a2
    ctx->r2 = SUB32(ctx->r7, ctx->r6);
    // 0x0029F79C: bne         $a2, $zero, L_0029F7AC
    if (ctx->r6 != 0) {
        // 0x0029F7A0: sw          $v0, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r2;
            goto L_0029F7AC;
    }
    // 0x0029F7A0: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x0029F7A4: beq         $a0, $zero, L_0029F7EC
    if (ctx->r4 == 0) {
        // 0x0029F7A8: slt         $v0, $s4, $s6
        ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r22) ? 1 : 0;
            goto L_0029F7EC;
    }
    // 0x0029F7A8: slt         $v0, $s4, $s6
    ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r22) ? 1 : 0;
L_0029F7AC:
    // 0x0029F7AC: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x0029F7B0: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x0029F7B4: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x0029F7B8: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0029F7BC: addu        $v0, $s5, $a2
    ctx->r2 = ADD32(ctx->r21, ctx->r6);
    // 0x0029F7C0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x0029F7C4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0029F7C8: lui         $v1, 0xA00
    ctx->r3 = S32(0XA00 << 16);
    // 0x0029F7CC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0029F7D0: sll         $v1, $s5, 16
    ctx->r3 = S32(ctx->r21 << 16);
    // 0x0029F7D4: sw          $v0, -0x4($s1)
    MEM_W(-0X4, ctx->r17) = ctx->r2;
    // 0x0029F7D8: sll         $v0, $s4, 1
    ctx->r2 = S32(ctx->r20 << 1);
    // 0x0029F7DC: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x0029F7E0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0029F7E4: sw          $v1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r3;
    // 0x0029F7E8: slt         $v0, $s4, $s6
    ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r22) ? 1 : 0;
L_0029F7EC:
    // 0x0029F7EC: bne         $v0, $zero, L_0029F6E4
    if (ctx->r2 != 0) {
        // 0x0029F7F0: sll         $v0, $s4, 1
        ctx->r2 = S32(ctx->r20 << 1);
            goto L_0029F6E4;
    }
    // 0x0029F7F0: sll         $v0, $s4, 1
    ctx->r2 = S32(ctx->r20 << 1);
L_0029F7F4:
    // 0x0029F7F4: lw          $v1, 0x38($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X38);
    // 0x0029F7F8: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x0029F7FC: addu        $v1, $v1, $s6
    ctx->r3 = ADD32(ctx->r3, ctx->r22);
    // 0x0029F800: sw          $v1, 0x38($s2)
    MEM_W(0X38, ctx->r18) = ctx->r3;
    // 0x0029F804: lw          $v1, 0x44($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X44);
    // 0x0029F808: sll         $a0, $s6, 1
    ctx->r4 = S32(ctx->r22 << 1);
    // 0x0029F80C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0029F810: j           L_0029F930
    // 0x0029F814: sw          $v1, 0x44($s2)
    MEM_W(0X44, ctx->r18) = ctx->r3;
        goto L_0029F930;
    // 0x0029F814: sw          $v1, 0x44($s2)
    MEM_W(0X44, ctx->r18) = ctx->r3;
L_0029F818:
    // 0x0029F818: lw          $v0, 0x28($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X28);
    // 0x0029F81C: lw          $a0, 0x44($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X44);
    // 0x0029F820: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x0029F824: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x0029F828: addu        $a1, $a0, $s0
    ctx->r5 = ADD32(ctx->r4, ctx->r16);
    // 0x0029F82C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0029F830: subu        $s1, $a1, $v1
    ctx->r17 = SUB32(ctx->r5, ctx->r3);
    // 0x0029F834: bltzl       $s1, L_0029F83C
    if (SIGNED(ctx->r17) < 0) {
        // 0x0029F838: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_0029F83C;
    }
    goto skip_0;
    // 0x0029F838: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    skip_0:
L_0029F83C:
    // 0x0029F83C: slt         $v0, $s0, $s1
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x0029F840: bnel        $v0, $zero, L_0029F848
    if (ctx->r2 != 0) {
        // 0x0029F844: addu        $s1, $s0, $zero
        ctx->r17 = ADD32(ctx->r16, 0);
            goto L_0029F848;
    }
    goto skip_1;
    // 0x0029F844: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
    skip_1:
L_0029F848:
    // 0x0029F848: slt         $v0, $s1, $s0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x0029F84C: beql        $v0, $zero, L_0029F8EC
    if (ctx->r2 == 0) {
        // 0x0029F850: sw          $a1, 0x44($s2)
        MEM_W(0X44, ctx->r18) = ctx->r5;
            goto L_0029F8EC;
    }
    goto skip_2;
    // 0x0029F850: sw          $a1, 0x44($s2)
    MEM_W(0X44, ctx->r18) = ctx->r5;
    skip_2:
    // 0x0029F854: blez        $s6, L_0029F8C0
    if (SIGNED(ctx->r22) <= 0) {
        // 0x0029F858: subu        $s0, $s0, $s1
        ctx->r16 = SUB32(ctx->r16, ctx->r17);
            goto L_0029F8C0;
    }
    // 0x0029F858: subu        $s0, $s0, $s1
    ctx->r16 = SUB32(ctx->r16, ctx->r17);
    // 0x0029F85C: lw          $a2, 0x34($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X34);
    // 0x0029F860: lw          $v0, 0x30($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X30);
    // 0x0029F864: jalr        $v0
    // 0x0029F868: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x0029F868: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0029F86C: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x0029F870: andi        $a2, $a3, 0x7
    ctx->r6 = ctx->r7 & 0X7;
    // 0x0029F874: addu        $s0, $s0, $a2
    ctx->r16 = ADD32(ctx->r16, ctx->r6);
    // 0x0029F878: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0029F87C: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x0029F880: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0029F884: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x0029F888: andi        $v0, $s0, 0x7
    ctx->r2 = ctx->r16 & 0X7;
    // 0x0029F88C: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x0029F890: subu        $v0, $s0, $v0
    ctx->r2 = SUB32(ctx->r16, ctx->r2);
    // 0x0029F894: lhu         $v1, 0x0($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X0);
    // 0x0029F898: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x0029F89C: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x0029F8A0: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x0029F8A4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0029F8A8: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x0029F8AC: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x0029F8B0: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0029F8B4: subu        $v0, $a3, $a2
    ctx->r2 = SUB32(ctx->r7, ctx->r6);
    // 0x0029F8B8: j           L_0029F8C4
    // 0x0029F8BC: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
        goto L_0029F8C4;
    // 0x0029F8BC: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
L_0029F8C0:
    // 0x0029F8C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_0029F8C4:
    // 0x0029F8C4: lhu         $v0, 0x0($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X0);
    // 0x0029F8C8: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x0029F8CC: sh          $v0, 0x0($s5)
    MEM_H(0X0, ctx->r21) = ctx->r2;
    // 0x0029F8D0: lw          $v0, 0x38($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X38);
    // 0x0029F8D4: addu        $v0, $v0, $s6
    ctx->r2 = ADD32(ctx->r2, ctx->r22);
    // 0x0029F8D8: sw          $v0, 0x38($s2)
    MEM_W(0X38, ctx->r18) = ctx->r2;
    // 0x0029F8DC: lw          $v0, 0x44($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X44);
    // 0x0029F8E0: sll         $v1, $s6, 1
    ctx->r3 = S32(ctx->r22 << 1);
    // 0x0029F8E4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0029F8E8: sw          $v0, 0x44($s2)
    MEM_W(0X44, ctx->r18) = ctx->r2;
L_0029F8EC:
    // 0x0029F8EC: beq         $s1, $zero, L_0029F92C
    if (ctx->r17 == 0) {
        // 0x0029F8F0: sll         $v0, $s6, 1
        ctx->r2 = S32(ctx->r22 << 1);
            goto L_0029F92C;
    }
    // 0x0029F8F0: sll         $v0, $s6, 1
    ctx->r2 = S32(ctx->r22 << 1);
    // 0x0029F8F4: subu        $a1, $v0, $s1
    ctx->r5 = SUB32(ctx->r2, ctx->r17);
    // 0x0029F8F8: bltzl       $a1, L_0029F900
    if (SIGNED(ctx->r5) < 0) {
        // 0x0029F8FC: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_0029F900;
    }
    goto skip_3;
    // 0x0029F8FC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    skip_3:
L_0029F900:
    // 0x0029F900: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0029F904: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x0029F908: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x0029F90C: lh          $v0, 0x0($s5)
    ctx->r2 = MEM_H(ctx->r21, 0X0);
    // 0x0029F910: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0029F914: sw          $s1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r17;
    // 0x0029F918: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x0029F91C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0029F920: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x0029F924: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0029F928: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
L_0029F92C:
    // 0x0029F92C: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
L_0029F930:
    // 0x0029F930: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x0029F934: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x0029F938: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0029F93C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0029F940: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0029F944: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0029F948: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0029F94C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0029F950: jr          $ra
    // 0x0029F954: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0029F954: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_002933E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002933E0: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x002933E4: sw          $a1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r5;
    // 0x002933E8: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x002933EC: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x002933F0: bnel        $v0, $zero, L_002933F8
    if (ctx->r2 != 0) {
        // 0x002933F4: sw          $a0, 0x4($v0)
        MEM_W(0X4, ctx->r2) = ctx->r4;
            goto L_002933F8;
    }
    goto skip_0;
    // 0x002933F4: sw          $a0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r4;
    skip_0:
L_002933F8:
    // 0x002933F8: jr          $ra
    // 0x002933FC: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
    return;
    // 0x002933FC: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
;}
RECOMP_FUNC void func_0042C9DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042C9DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0042C9E0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0042C9E4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0042C9E8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0042C9EC: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x0042C9F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0042C9F4: jal         0x002532A8
    // 0x0042C9F8: nop

    func_002532A8(rdram, ctx);
        goto after_0;
    // 0x0042C9F8: nop

    after_0:
    // 0x0042C9FC: beq         $v0, $zero, L_0042CA0C
    if (ctx->r2 == 0) {
        // 0x0042CA00: nop
    
            goto L_0042CA0C;
    }
    // 0x0042CA00: nop

    // 0x0042CA04: jal         0x0042EB04
    // 0x0042CA08: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0042EB04(rdram, ctx);
        goto after_1;
    // 0x0042CA08: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_1:
L_0042CA0C:
    // 0x0042CA0C: jal         0x00275F7C
    // 0x0042CA10: nop

    func_00275F7C(rdram, ctx);
        goto after_2;
    // 0x0042CA10: nop

    after_2:
    // 0x0042CA14: jal         0x00275EFC
    // 0x0042CA18: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_00275EFC(rdram, ctx);
        goto after_3;
    // 0x0042CA18: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_3:
    // 0x0042CA1C: jal         0x00275B58
    // 0x0042CA20: nop

    func_00275B58(rdram, ctx);
        goto after_4;
    // 0x0042CA20: nop

    after_4:
    // 0x0042CA24: jal         0x002758DC
    // 0x0042CA28: addiu       $a0, $zero, 0x1000
    ctx->r4 = ADD32(0, 0X1000);
    func_002758DC(rdram, ctx);
        goto after_5;
    // 0x0042CA28: addiu       $a0, $zero, 0x1000
    ctx->r4 = ADD32(0, 0X1000);
    after_5:
    // 0x0042CA2C: lw          $a1, 0x98($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X98);
    // 0x0042CA30: jal         0x002052D8
    // 0x0042CA34: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_6;
    // 0x0042CA34: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_6:
    // 0x0042CA38: lw          $a1, 0x9C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X9C);
    // 0x0042CA3C: jal         0x002052D8
    // 0x0042CA40: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_7;
    // 0x0042CA40: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_7:
    // 0x0042CA44: lw          $a1, 0xA0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XA0);
    // 0x0042CA48: jal         0x002052D8
    // 0x0042CA4C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_8;
    // 0x0042CA4C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_8:
    // 0x0042CA50: lw          $a1, 0xA4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XA4);
    // 0x0042CA54: jal         0x002052D8
    // 0x0042CA58: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_9;
    // 0x0042CA58: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_9:
    // 0x0042CA5C: lw          $a1, 0xA8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XA8);
    // 0x0042CA60: jal         0x002052D8
    // 0x0042CA64: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_10;
    // 0x0042CA64: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_10:
    // 0x0042CA68: lw          $a1, 0xB0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XB0);
    // 0x0042CA6C: jal         0x002052D8
    // 0x0042CA70: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_11;
    // 0x0042CA70: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_11:
    // 0x0042CA74: lw          $a1, 0xB4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XB4);
    // 0x0042CA78: jal         0x002052D8
    // 0x0042CA7C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_12;
    // 0x0042CA7C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_12:
    // 0x0042CA80: lw          $a1, 0xCC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XCC);
    // 0x0042CA84: jal         0x002052D8
    // 0x0042CA88: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_13;
    // 0x0042CA88: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_13:
    // 0x0042CA8C: lw          $a1, 0xAC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XAC);
    // 0x0042CA90: jal         0x002052D8
    // 0x0042CA94: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_14;
    // 0x0042CA94: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_14:
    // 0x0042CA98: lw          $a1, 0xC8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC8);
    // 0x0042CA9C: jal         0x002052D8
    // 0x0042CAA0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_15;
    // 0x0042CAA0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_15:
    // 0x0042CAA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0042CAA8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042CAAC: jr          $ra
    // 0x0042CAB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0042CAB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0028D81C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028D81C: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
;}
RECOMP_FUNC void func_00246A74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00246A74: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00246A78: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00246A7C: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x00246A80: lw          $a1, 0x8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X8);
    // 0x00246A84: lw          $a3, 0xC($a0)
    ctx->r7 = MEM_W(ctx->r4, 0XC);
    // 0x00246A88: sw          $v1, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r3;
    // 0x00246A8C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x00246A90: sw          $a3, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r7;
    // 0x00246A94: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00246A98: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00246A9C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x00246AA0: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x00246AA4: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x00246AA8: sw          $zero, 0x8($a2)
    MEM_W(0X8, ctx->r6) = 0;
    // 0x00246AAC: lw          $v1, 0x0($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X0);
    // 0x00246AB0: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x00246AB4: lw          $a3, 0x8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X8);
    // 0x00246AB8: sw          $v1, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r3;
    // 0x00246ABC: sw          $a1, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->r5;
    // 0x00246AC0: sw          $a3, 0x14($a2)
    MEM_W(0X14, ctx->r6) = ctx->r7;
    // 0x00246AC4: lw          $v1, 0x10($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X10);
    // 0x00246AC8: lw          $a1, 0x14($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X14);
    // 0x00246ACC: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x00246AD0: sw          $v1, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->r3;
    // 0x00246AD4: sw          $a1, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->r5;
    // 0x00246AD8: sw          $a3, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->r7;
    // 0x00246ADC: sw          $zero, 0x24($a2)
    MEM_W(0X24, ctx->r6) = 0;
    // 0x00246AE0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00246AE4: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
    // 0x00246AE8: lw          $v1, 0x0($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X0);
    // 0x00246AEC: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x00246AF0: lw          $a3, 0x8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X8);
    // 0x00246AF4: sw          $v1, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->r3;
    // 0x00246AF8: sw          $a1, 0x2C($a2)
    MEM_W(0X2C, ctx->r6) = ctx->r5;
    // 0x00246AFC: sw          $a3, 0x30($a2)
    MEM_W(0X30, ctx->r6) = ctx->r7;
    // 0x00246B00: lw          $v1, 0x10($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X10);
    // 0x00246B04: lw          $a1, 0x14($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X14);
    // 0x00246B08: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x00246B0C: sw          $v1, 0x34($a2)
    MEM_W(0X34, ctx->r6) = ctx->r3;
    // 0x00246B10: sw          $a1, 0x38($a2)
    MEM_W(0X38, ctx->r6) = ctx->r5;
    // 0x00246B14: sw          $a3, 0x3C($a2)
    MEM_W(0X3C, ctx->r6) = ctx->r7;
    // 0x00246B18: sw          $zero, 0x40($a2)
    MEM_W(0X40, ctx->r6) = 0;
    // 0x00246B1C: jr          $ra
    // 0x00246B20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00246B20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00416168(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00416168: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0041616C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00416170: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00416174: jal         0x00413F74
    // 0x00416178: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00413F74(rdram, ctx);
        goto after_0;
    // 0x00416178: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x0041617C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00416180: jr          $ra
    // 0x00416184: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00416184: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002897FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002897FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00289800: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x00289804: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00289808: jal         0x00288E58
    // 0x0028980C: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    func_00288E58(rdram, ctx);
        goto after_0;
    // 0x0028980C: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_0:
    // 0x00289810: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00289814: jr          $ra
    // 0x00289818: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00289818: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0028F784(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028F784: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0028F788: lw          $v0, 0x40($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X40);
    // 0x0028F78C: mtc1        $a1, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r5;
    // 0x0028F790: mtc1        $v0, $f2
    ctx->f2.u32l = ctx->r2;
    // 0x0028F794: cvt.d.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.d = CVT_D_W(ctx->f2.u32l);
    // 0x0028F798: bgez        $v0, L_0028F7AC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x0028F79C: nop
    
            goto L_0028F7AC;
    }
    // 0x0028F79C: nop

    // 0x0028F7A0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028F7A4: ldc1        $f0, -0x5D98($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X5D98);
    // 0x0028F7A8: add.d       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = ctx->f2.d + ctx->f0.d;
L_0028F7AC:
    // 0x0028F7AC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028F7B0: lwc1        $f1, -0x5D90($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X5D90);
    // 0x0028F7B4: cvt.s.d     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f0.fl = CVT_S_D(ctx->f2.d);
    // 0x0028F7B8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0028F7BC: mtc1        $a2, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r6;
    // 0x0028F7C0: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0028F7C4: mul.s       $f2, $f3, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0028F7C8: bgezl       $a2, L_0028F7E0
    if (SIGNED(ctx->r6) >= 0) {
        // 0x0028F7CC: cvt.s.d     $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
            goto L_0028F7E0;
    }
    goto skip_0;
    // 0x0028F7CC: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    skip_0:
    // 0x0028F7D0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028F7D4: ldc1        $f0, -0x5D88($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X5D88);
    // 0x0028F7D8: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x0028F7DC: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
L_0028F7E0:
    // 0x0028F7E0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028F7E4: lwc1        $f1, -0x5D80($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X5D80);
    // 0x0028F7E8: div.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0028F7EC: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0028F7F0: nop

    // 0x0028F7F4: bc1tl       L_0028F80C
    if (c1cs) {
            // 0x0028F7F8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    func_0028F80C(rdram, ctx);
    return;
    }
    goto skip_1;
    // 0x0028F7F8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_1:
    // 0x0028F7FC: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0028F800: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x0028F804: jr          $ra
    // 0x0028F808: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    return;
    // 0x0028F808: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
;}
RECOMP_FUNC void func_002A31C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_00408C10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00408C10: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x00408C14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00408C18: beq         $v1, $v0, L_00408CEC
    if (ctx->r3 == ctx->r2) {
        // 0x00408C1C: nop
    
            goto L_00408CEC;
    }
    // 0x00408C1C: nop

    // 0x00408C20: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x00408C24: lw          $a2, -0x14C($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X14C);
    // 0x00408C28: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x00408C2C: lw          $a3, -0x6770($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X6770);
    // 0x00408C30: beq         $a2, $zero, L_00408CEC
    if (ctx->r6 == 0) {
        // 0x00408C34: addu        $t0, $zero, $zero
        ctx->r8 = ADD32(0, 0);
            goto L_00408CEC;
    }
    // 0x00408C34: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x00408C38: addu        $t3, $v0, $zero
    ctx->r11 = ADD32(ctx->r2, 0);
    // 0x00408C3C: lui         $t2, 0x2000
    ctx->r10 = S32(0X2000 << 16);
    // 0x00408C40: lui         $t1, 0x4000
    ctx->r9 = S32(0X4000 << 16);
L_00408C44:
    // 0x00408C44: lw          $v0, 0x14($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X14);
    // 0x00408C48: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00408C4C: bne         $v0, $t3, L_00408CE0
    if (ctx->r2 != ctx->r11) {
        // 0x00408C50: nop
    
            goto L_00408CE0;
    }
    // 0x00408C50: nop

    // 0x00408C54: lw          $v0, 0x1B8($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X1B8);
    // 0x00408C58: bne         $v0, $zero, L_00408CE0
    if (ctx->r2 != 0) {
        // 0x00408C5C: nop
    
            goto L_00408CE0;
    }
    // 0x00408C5C: nop

    // 0x00408C60: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00408C64: bne         $v0, $zero, L_00408CB8
    if (ctx->r2 != 0) {
        // 0x00408C68: nop
    
            goto L_00408CB8;
    }
    // 0x00408C68: nop

    // 0x00408C6C: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00408C70: lh          $v0, 0x44($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X44);
    // 0x00408C74: slt         $v0, $t0, $v0
    ctx->r2 = SIGNED(ctx->r8) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00408C78: bne         $v0, $zero, L_00408C88
    if (ctx->r2 != 0) {
        // 0x00408C7C: nop
    
            goto L_00408C88;
    }
    // 0x00408C7C: nop

    // 0x00408C80: beq         $a1, $zero, L_00408C94
    if (ctx->r5 == 0) {
        // 0x00408C84: nop
    
            goto L_00408C94;
    }
    // 0x00408C84: nop

L_00408C88:
    // 0x00408C88: lw          $v0, 0x140($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X140);
    // 0x00408C8C: j           L_00408CCC
    // 0x00408C90: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
        goto L_00408CCC;
    // 0x00408C90: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
L_00408C94:
    // 0x00408C94: lw          $v1, 0x140($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X140);
    // 0x00408C98: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00408C9C: or          $v1, $v1, $t2
    ctx->r3 = ctx->r3 | ctx->r10;
    // 0x00408CA0: sw          $v0, 0x1C0($a2)
    MEM_W(0X1C0, ctx->r6) = ctx->r2;
    // 0x00408CA4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00408CA8: or          $v1, $v1, $t1
    ctx->r3 = ctx->r3 | ctx->r9;
    // 0x00408CAC: sw          $v1, 0x140($a2)
    MEM_W(0X140, ctx->r6) = ctx->r3;
    // 0x00408CB0: j           L_00408CE0
    // 0x00408CB4: sw          $v0, 0x1C8($a2)
    MEM_W(0X1C8, ctx->r6) = ctx->r2;
        goto L_00408CE0;
    // 0x00408CB4: sw          $v0, 0x1C8($a2)
    MEM_W(0X1C8, ctx->r6) = ctx->r2;
L_00408CB8:
    // 0x00408CB8: lw          $v1, 0x1C0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X1C0);
    // 0x00408CBC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00408CC0: bne         $v1, $v0, L_00408CE0
    if (ctx->r3 != ctx->r2) {
        // 0x00408CC4: nop
    
            goto L_00408CE0;
    }
    // 0x00408CC4: nop

    // 0x00408CC8: lw          $v0, 0x140($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X140);
L_00408CCC:
    // 0x00408CCC: sw          $a3, 0x1C8($a2)
    MEM_W(0X1C8, ctx->r6) = ctx->r7;
    // 0x00408CD0: sw          $a3, 0x1C0($a2)
    MEM_W(0X1C0, ctx->r6) = ctx->r7;
    // 0x00408CD4: or          $v0, $v0, $t2
    ctx->r2 = ctx->r2 | ctx->r10;
    // 0x00408CD8: or          $v0, $v0, $t1
    ctx->r2 = ctx->r2 | ctx->r9;
    // 0x00408CDC: sw          $v0, 0x140($a2)
    MEM_W(0X140, ctx->r6) = ctx->r2;
L_00408CE0:
    // 0x00408CE0: lw          $a2, 0x28C($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X28C);
    // 0x00408CE4: bne         $a2, $zero, L_00408C44
    if (ctx->r6 != 0) {
        // 0x00408CE8: nop
    
            goto L_00408C44;
    }
    // 0x00408CE8: nop

L_00408CEC:
    // 0x00408CEC: jr          $ra
    // 0x00408CF0: nop

    return;
    // 0x00408CF0: nop

;}
RECOMP_FUNC void func_0040E2E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040E2E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0040E2E8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0040E2EC: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x0040E2F0: beq         $v0, $zero, L_0040E300
    if (ctx->r2 == 0) {
        // 0x0040E2F4: nop
    
            goto L_0040E300;
    }
    // 0x0040E2F4: nop

    // 0x0040E2F8: jal         0x00243414
    // 0x0040E2FC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0040E2FC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
L_0040E300:
    // 0x0040E300: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0040E304: jr          $ra
    // 0x0040E308: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040E308: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002699E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002699E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002699E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x002699EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x002699F0: jal         0x00268E60
    // 0x002699F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_00268E60(rdram, ctx);
        goto after_0;
    // 0x002699F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x002699F8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x002699FC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00269A00: beq         $v1, $v0, L_00269A7C
    if (ctx->r3 == ctx->r2) {
        // 0x00269A04: sltiu       $v0, $v1, 0xB
        ctx->r2 = ctx->r3 < 0XB ? 1 : 0;
            goto L_00269A7C;
    }
    // 0x00269A04: sltiu       $v0, $v1, 0xB
    ctx->r2 = ctx->r3 < 0XB ? 1 : 0;
    // 0x00269A08: beq         $v0, $zero, L_00269A24
    if (ctx->r2 == 0) {
        // 0x00269A0C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00269A24;
    }
    // 0x00269A0C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00269A10: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00269A14: addu        $at, $at, $v0
    gpr jr_addend_00269A1C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00269A18: lw          $v0, 0x7F28($at)
    ctx->r2 = ADD32(ctx->r1, 0X7F28);
    // 0x00269A1C: jr          $v0
    // 0x00269A20: nop

    switch (jr_addend_00269A1C >> 2) {
        case 0: goto L_00269A24; break;
        case 1: goto L_00269A2C; break;
        case 2: goto L_00269A34; break;
        case 3: goto L_00269A3C; break;
        case 4: goto L_00269A24; break;
        case 5: goto L_00269A2C; break;
        case 6: goto L_00269A2C; break;
        case 7: goto L_00269A2C; break;
        case 8: goto L_00269A2C; break;
        case 9: goto L_00269A24; break;
        case 10: goto L_00269A44; break;
        default: switch_error(__func__, 0x00269A1C, 0x800A7F28);
    }
    // 0x00269A20: nop

L_00269A24:
    // 0x00269A24: j           L_00269A48
    // 0x00269A28: addiu       $a0, $zero, 0x39F
    ctx->r4 = ADD32(0, 0X39F);
        goto L_00269A48;
    // 0x00269A28: addiu       $a0, $zero, 0x39F
    ctx->r4 = ADD32(0, 0X39F);
L_00269A2C:
    // 0x00269A2C: j           L_00269A48
    // 0x00269A30: addiu       $a0, $zero, 0x3A1
    ctx->r4 = ADD32(0, 0X3A1);
        goto L_00269A48;
    // 0x00269A30: addiu       $a0, $zero, 0x3A1
    ctx->r4 = ADD32(0, 0X3A1);
L_00269A34:
    // 0x00269A34: j           L_00269A48
    // 0x00269A38: addiu       $a0, $zero, 0x39E
    ctx->r4 = ADD32(0, 0X39E);
        goto L_00269A48;
    // 0x00269A38: addiu       $a0, $zero, 0x39E
    ctx->r4 = ADD32(0, 0X39E);
L_00269A3C:
    // 0x00269A3C: j           L_00269A48
    // 0x00269A40: addiu       $a0, $zero, 0x39D
    ctx->r4 = ADD32(0, 0X39D);
        goto L_00269A48;
    // 0x00269A40: addiu       $a0, $zero, 0x39D
    ctx->r4 = ADD32(0, 0X39D);
L_00269A44:
    // 0x00269A44: addiu       $a0, $zero, 0x3A0
    ctx->r4 = ADD32(0, 0X3A0);
L_00269A48:
    // 0x00269A48: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00269A4C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00269A50: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00269A54: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x00269A58: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x00269A5C: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x00269A60: jal         0x00275544
    // 0x00269A64: nop

    func_00275544(rdram, ctx);
        goto after_1;
    // 0x00269A64: nop

    after_1:
    // 0x00269A68: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00269A6C: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00269A70: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00269A74: jal         0x00225C08
    // 0x00269A78: addiu       $a2, $s0, 0x4
    ctx->r6 = ADD32(ctx->r16, 0X4);
    func_00225C08(rdram, ctx);
        goto after_2;
    // 0x00269A78: addiu       $a2, $s0, 0x4
    ctx->r6 = ADD32(ctx->r16, 0X4);
    after_2:
L_00269A7C:
    // 0x00269A7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00269A80: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00269A84: jr          $ra
    // 0x00269A88: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00269A88: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002820FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002820FC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00282100: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x00282104: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x00282108: sdc1        $f21, 0x20($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X20, ctx->r29);
    // 0x0028210C: mtc1        $a2, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r6;
    // 0x00282110: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x00282114: mtc1        $a3, $f22
    ctx->f22.u32l = ctx->r7;
    // 0x00282118: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0028211C: jal         0x0028D0E0
    // 0x00282120: nop

    func_0028D0E0(rdram, ctx);
        goto after_0;
    // 0x00282120: nop

    after_0:
    // 0x00282124: bnel        $v0, $zero, L_0028212C
    if (ctx->r2 != 0) {
        // 0x00282128: mov.s       $f20, $f21
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    ctx->f20.fl = ctx->f21.fl;
            goto L_0028212C;
    }
    goto skip_0;
    // 0x00282128: mov.s       $f20, $f21
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    ctx->f20.fl = ctx->f21.fl;
    skip_0:
L_0028212C:
    // 0x0028212C: c.lt.s      $f20, $f21
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f20.fl < ctx->f21.fl;
    // 0x00282130: nop

    // 0x00282134: bc1f        L_0028215C
    if (!c1cs) {
        // 0x00282138: nop
    
            goto L_0028215C;
    }
    // 0x00282138: nop

    // 0x0028213C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00282140: lwc1        $f0, -0x63A4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X63A4);
    // 0x00282144: add.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f22.fl;
    // 0x00282148: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0028214C: swc1        $f0, 0x5A44($at)
    MEM_W(0X5A44, ctx->r1) = ctx->f0.u32l;
    // 0x00282150: c.lt.s      $f21, $f20
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f21.fl < ctx->f20.fl;
    // 0x00282154: j           L_00282184
    // 0x00282158: nop

        goto L_00282184;
    // 0x00282158: nop

L_0028215C:
    // 0x0028215C: c.lt.s      $f21, $f20
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f21.fl < ctx->f20.fl;
    // 0x00282160: nop

    // 0x00282164: bc1f        L_00282194
    if (!c1cs) {
        // 0x00282168: mov.s       $f0, $f20
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
            goto L_00282194;
    }
    // 0x00282168: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
    // 0x0028216C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00282170: lwc1        $f0, -0x63A0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X63A0);
    // 0x00282174: sub.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f22.fl;
    // 0x00282178: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0028217C: swc1        $f0, 0x5A44($at)
    MEM_W(0X5A44, ctx->r1) = ctx->f0.u32l;
    // 0x00282180: c.lt.s      $f20, $f21
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f20.fl < ctx->f21.fl;
L_00282184:
    // 0x00282184: nop

    // 0x00282188: bc1tl       L_00282190
    if (c1cs) {
        // 0x0028218C: mov.s       $f20, $f21
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    ctx->f20.fl = ctx->f21.fl;
            goto L_00282190;
    }
    goto skip_1;
    // 0x0028218C: mov.s       $f20, $f21
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    ctx->f20.fl = ctx->f21.fl;
    skip_1:
L_00282190:
    // 0x00282190: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
L_00282194:
    // 0x00282194: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00282198: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x0028219C: ldc1        $f21, 0x20($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X20);
    // 0x002821A0: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x002821A4: jr          $ra
    // 0x002821A8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x002821A8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0040D5C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040D5C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0040D5C8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0040D5CC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0040D5D0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0040D5D4: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0040D5D8: addiu       $v0, $zero, 0x1CE9
    ctx->r2 = ADD32(0, 0X1CE9);
    // 0x0040D5DC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x0040D5E0: sw          $v0, 0x48($at)
    MEM_W(0X48, ctx->r1) = ctx->r2;
    // 0x0040D5E4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0040D5E8: addiu       $v0, $v0, 0x1910
    ctx->r2 = ADD32(ctx->r2, 0X1910);
    // 0x0040D5EC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0040D5F0: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x0040D5F4: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x0040D5F8: addiu       $v0, $v0, -0x2570
    ctx->r2 = ADD32(ctx->r2, -0X2570);
    // 0x0040D5FC: sw          $v0, 0xF0($s0)
    MEM_W(0XF0, ctx->r16) = ctx->r2;
    // 0x0040D600: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x0040D604: addiu       $v0, $v0, -0x2648
    ctx->r2 = ADD32(ctx->r2, -0X2648);
    // 0x0040D608: sw          $v0, 0xF8($s0)
    MEM_W(0XF8, ctx->r16) = ctx->r2;
    // 0x0040D60C: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x0040D610: addiu       $v0, $v0, -0x1250
    ctx->r2 = ADD32(ctx->r2, -0X1250);
    // 0x0040D614: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x0040D618: addiu       $a0, $a0, 0x200
    ctx->r4 = ADD32(ctx->r4, 0X200);
    // 0x0040D61C: sw          $v0, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->r2;
    // 0x0040D620: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x0040D624: addiu       $v0, $v0, 0x2340
    ctx->r2 = ADD32(ctx->r2, 0X2340);
    // 0x0040D628: sw          $v0, 0x4F8($a0)
    MEM_W(0X4F8, ctx->r4) = ctx->r2;
    // 0x0040D62C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0040D630: lw          $v0, 0x6F8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6F8);
    // 0x0040D634: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0040D638: sw          $s1, 0x200($at)
    MEM_W(0X200, ctx->r1) = ctx->r17;
    // 0x0040D63C: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x0040D640: jal         0x0040EC14
    // 0x0040D644: nop

    func_0040EC14(rdram, ctx);
        goto after_0;
    // 0x0040D644: nop

    after_0:
    // 0x0040D648: lui         $v1, 0xEFFF
    ctx->r3 = S32(0XEFFF << 16);
    // 0x0040D64C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0040D650: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040D654: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0040D658: lw          $v0, 0xD4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XD4);
    // 0x0040D65C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0040D660: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0040D664: sw          $v0, 0xD4($s1)
    MEM_W(0XD4, ctx->r17) = ctx->r2;
    // 0x0040D668: sw          $zero, 0x10C($a1)
    MEM_W(0X10C, ctx->r5) = 0;
    // 0x0040D66C: jal         0x00243414
    // 0x0040D670: sw          $zero, 0x118($a1)
    MEM_W(0X118, ctx->r5) = 0;
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x0040D670: sw          $zero, 0x118($a1)
    MEM_W(0X118, ctx->r5) = 0;
    after_1:
    // 0x0040D674: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x0040D678: addiu       $a0, $a0, 0xF0
    ctx->r4 = ADD32(ctx->r4, 0XF0);
    // 0x0040D67C: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x0040D680: addiu       $a2, $a2, 0x8F4
    ctx->r6 = ADD32(ctx->r6, 0X8F4);
    // 0x0040D684: jal         0x0027AD24
    // 0x0040D688: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0027AD24(rdram, ctx);
        goto after_2;
    // 0x0040D688: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x0040D68C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0040D690: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0040D694: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0040D698: jr          $ra
    // 0x0040D69C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0040D69C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_004190AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004190AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x004190B0: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x004190B4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x004190B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004190BC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x004190C0: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x004190C4: addiu       $s0, $s0, -0x5528
    ctx->r16 = ADD32(ctx->r16, -0X5528);
    // 0x004190C8: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x004190CC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x004190D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x004190D4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x004190D8: lb          $v0, 0x2C($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2C);
    // 0x004190DC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x004190E0: jal         0x0041648C
    // 0x004190E4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x004190E4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x004190E8: sb          $v0, 0x2C($s0)
    MEM_B(0X2C, ctx->r16) = ctx->r2;
    // 0x004190EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x004190F0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x004190F4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x004190F8: jr          $ra
    // 0x004190FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x004190FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00256834(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00256834: addiu       $a3, $a3, 0x2C
    ctx->r7 = ADD32(ctx->r7, 0X2C);
    // 0x00256838: beq         $a2, $v0, L_00256878
    if (ctx->r6 == ctx->r2) {
            // 0x0025683C: slti        $v0, $a2, 0x2
    ctx->r2 = SIGNED(ctx->r6) < 0X2 ? 1 : 0;
    func_00256878(rdram, ctx);
    return;
    }
    // 0x0025683C: slti        $v0, $a2, 0x2
    ctx->r2 = SIGNED(ctx->r6) < 0X2 ? 1 : 0;
    // 0x00256840: beql        $v0, $zero, L_00256858
    if (ctx->r2 == 0) {
            // 0x00256844: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    func_00256858(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x00256844: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x00256848: beq         $a2, $zero, L_00256868
    if (ctx->r6 == 0) {
            // 0x0025684C: nop

    func_00256868(rdram, ctx);
    return;
    }
    // 0x0025684C: nop

    // 0x00256850: jr          $ra
    // 0x00256854: nop

    return;
    // 0x00256854: nop

;}
RECOMP_FUNC void func_0042C760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042C760: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0042C764: jal         0x0042AA80
    // 0x0042C768: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_0042AA80(rdram, ctx);
        goto after_0;
    // 0x0042C768: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x0042C76C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042C770: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x0042C774: lw          $v0, -0x71B0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X71B0);
    // 0x0042C778: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0042C77C: lbu         $v0, 0x10($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X10);
    // 0x0042C780: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042C784: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
    // 0x0042C788: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0042C78C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0042C790: sw          $v0, -0x4760($at)
    MEM_W(-0X4760, ctx->r1) = ctx->r2;
    // 0x0042C794: jr          $ra
    // 0x0042C798: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0042C798: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0041AEB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041AEB0: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0041AEB4: lw          $v1, 0x920($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X920);
    // 0x0041AEB8: sltiu       $v0, $v1, 0xC
    ctx->r2 = ctx->r3 < 0XC ? 1 : 0;
    // 0x0041AEBC: beq         $v0, $zero, L_0041AEDC
    if (ctx->r2 == 0) {
        // 0x0041AEC0: nop
    
            goto L_0041AEDC;
    }
    // 0x0041AEC0: nop

    // 0x0041AEC4: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x0041AEC8: lui         $at, 0x44
    ctx->r1 = S32(0X44 << 16);
    // 0x0041AECC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0041AED0: lw          $v0, -0x688C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X688C);
    // 0x0041AED4: j           L_0041AEE8
    // 0x0041AED8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041AEE8;
    // 0x0041AED8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041AEDC:
    // 0x0041AEDC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041AEE0: addiu       $v0, $v0, 0x1144
    ctx->r2 = ADD32(ctx->r2, 0X1144);
    // 0x0041AEE4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041AEE8:
    // 0x0041AEE8: jr          $ra
    // 0x0041AEEC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041AEEC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00440F14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00408120:
    // 0x00440F14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00408124:
    // 0x00440F18: sh          $v0, 0xA08($s2)
    MEM_H(0XA08, ctx->r18) = ctx->r2;
    // 0x00440F1C: lw          $v0, 0xA50($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XA50);
    // 0x00440F20: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00440F24: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00440F28: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00440F2C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00440F30: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00440F34: addiu       $s0, $s0, -0x6790
    ctx->r16 = ADD32(ctx->r16, -0X6790);
    // 0x00440F38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00440F3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00440F40: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00440F44: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00440F48: jal         0x002532A8
    // 0x00440F4C: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
    func_002532A8(rdram, ctx);
        goto after_0;
    // 0x00440F4C: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
    after_0:
    // 0x00440F50: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x00440F54: lw          $a1, 0x51C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X51C);
    // 0x00440F58: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x00440F5C: addiu       $a2, $a2, 0x6660
    ctx->r6 = ADD32(ctx->r6, 0X6660);
    // 0x00440F60: jal         0x0027FC2C
    // 0x00440F64: addiu       $a0, $s0, 0x40
    ctx->r4 = ADD32(ctx->r16, 0X40);
    func_0027FC2C(rdram, ctx);
        goto after_1;
    // 0x00440F64: addiu       $a0, $s0, 0x40
    ctx->r4 = ADD32(ctx->r16, 0X40);
    after_1:
    // 0x00440F68: jal         0x0027580C
    // 0x00440F6C: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    func_0027580C(rdram, ctx);
        goto after_2;
    // 0x00440F6C: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    after_2:
    // 0x00440F70: lui         $a1, 0x4461
    ctx->r5 = S32(0X4461 << 16);
    // 0x00440F74: jal         0x002535E4
    // 0x00440F78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002535E4(rdram, ctx);
        goto after_3;
    // 0x00440F78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x00440F7C: addiu       $a1, $zero, 0x5337
    ctx->r5 = ADD32(0, 0X5337);
    // 0x00440F80: lw          $s0, 0x0($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X0);
    // 0x00440F84: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x00440F88: jal         0x00219F74
    // 0x00440F8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00219F74(rdram, ctx);
        goto after_4;
    // 0x00440F8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x00440F90: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00440F94: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00440F98: addiu       $a1, $s0, 0x140
    ctx->r5 = ADD32(ctx->r16, 0X140);
    // 0x00440F9C: sb          $v0, 0xC6($a1)
    MEM_B(0XC6, ctx->r5) = ctx->r2;
    // 0x00440FA0: addiu       $v0, $zero, 0x5337
    ctx->r2 = ADD32(0, 0X5337);
    // 0x00440FA4: sh          $v0, 0xC4($a1)
    MEM_H(0XC4, ctx->r5) = ctx->r2;
    // 0x00440FA8: lw          $v0, 0x140($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X140);
    // 0x00440FAC: addiu       $v1, $zero, -0x2
    ctx->r3 = ADD32(0, -0X2);
    // 0x00440FB0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00440FB4: sw          $v0, 0x140($s0)
    MEM_W(0X140, ctx->r16) = ctx->r2;
    // 0x00440FB8: jal         0x00225D0C
    // 0x00440FBC: sb          $zero, 0xC7($a1)
    MEM_B(0XC7, ctx->r5) = 0;
    func_00225D0C(rdram, ctx);
        goto after_5;
    // 0x00440FBC: sb          $zero, 0xC7($a1)
    MEM_B(0XC7, ctx->r5) = 0;
    after_5:
    // 0x00440FC0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00440FC4: lw          $v0, -0x6770($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6770);
    // 0x00440FC8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00440FCC: lwc1        $f0, 0x580($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X580);
    // 0x00440FD0: swc1        $f0, 0xAAC($v0)
    MEM_W(0XAAC, ctx->r2) = ctx->f0.u32l;
    // 0x00440FD4: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x00440FD8: lw          $v1, -0x14C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X14C);
    // 0x00440FDC: beq         $v1, $zero, L_0044102C
    if (ctx->r3 == 0) {
        // 0x00440FE0: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_0044102C;
    }
    // 0x00440FE0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00440FE4: lui         $a1, 0x2000
    ctx->r5 = S32(0X2000 << 16);
    // 0x00440FE8: lui         $a0, 0x4000
    ctx->r4 = S32(0X4000 << 16);
L_00440FEC:
    // 0x00440FEC: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x00440FF0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00440FF4: bne         $v0, $a2, L_00441020
    if (ctx->r2 != ctx->r6) {
        // 0x00440FF8: nop
    
            goto L_00441020;
    }
    // 0x00440FF8: nop

    // 0x00440FFC: lw          $v0, 0x144($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X144);
    // 0x00441000: beq         $v0, $zero, L_00441020
    if (ctx->r2 == 0) {
        // 0x00441004: nop
    
            goto L_00441020;
    }
    // 0x00441004: nop

    // 0x00441008: lw          $v0, 0x140($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X140);
    // 0x0044100C: sw          $zero, 0x1C8($v1)
    MEM_W(0X1C8, ctx->r3) = 0;
    // 0x00441010: sw          $zero, 0x1C0($v1)
    MEM_W(0X1C0, ctx->r3) = 0;
    // 0x00441014: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
    // 0x00441018: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x0044101C: sw          $v0, 0x140($v1)
    MEM_W(0X140, ctx->r3) = ctx->r2;
L_00441020:
    // 0x00441020: lw          $v1, 0x28C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X28C);
    // 0x00441024: bne         $v1, $zero, L_00440FEC
    if (ctx->r3 != 0) {
        // 0x00441028: nop
    
            goto L_00440FEC;
    }
    // 0x00441028: nop

L_0044102C:
    // 0x0044102C: lui         $s0, 0x8011
    ctx->r16 = S32(0X8011 << 16);
    // 0x00441030: addiu       $s0, $s0, 0xF0
    ctx->r16 = ADD32(ctx->r16, 0XF0);
    // 0x00441034: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00441038: lwc1        $f0, 0x584($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X584);
    // 0x0044103C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00441040: jal         0x0027AD98
    // 0x00441044: swc1        $f0, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->f0.u32l;
    func_0027AD98(rdram, ctx);
        goto after_6;
    // 0x00441044: swc1        $f0, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->f0.u32l;
    after_6:
    // 0x00441048: jal         0x0027ADA0
    // 0x0044104C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0027ADA0(rdram, ctx);
        goto after_7;
    // 0x0044104C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x00441050: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x00441054: lw          $v1, 0x48($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X48);
    // 0x00441058: addiu       $v0, $zero, 0x1C84
    ctx->r2 = ADD32(0, 0X1C84);
    // 0x0044105C: beq         $v1, $v0, L_004410DC
    if (ctx->r3 == ctx->r2) {
        // 0x00441060: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_004410DC;
    }
    // 0x00441060: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00441064: slti        $v0, $v1, 0x1C85
    ctx->r2 = SIGNED(ctx->r3) < 0X1C85 ? 1 : 0;
    // 0x00441068: beq         $v0, $zero, L_0044108C
    if (ctx->r2 == 0) {
        // 0x0044106C: addiu       $v0, $zero, 0x1BBC
        ctx->r2 = ADD32(0, 0X1BBC);
            goto L_0044108C;
    }
    // 0x0044106C: addiu       $v0, $zero, 0x1BBC
    ctx->r2 = ADD32(0, 0X1BBC);
    // 0x00441070: beq         $v1, $v0, L_004410AC
    if (ctx->r3 == ctx->r2) {
        // 0x00441074: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_004410AC;
    }
    // 0x00441074: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00441078: addiu       $v0, $zero, 0x1C20
    ctx->r2 = ADD32(0, 0X1C20);
    // 0x0044107C: beq         $v1, $v0, L_004410C4
    if (ctx->r3 == ctx->r2) {
        // 0x00441080: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_004410C4;
    }
    // 0x00441080: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00441084: j           L_00408124
    // 0x00441088: nop

    entry_00408124(rdram, ctx);
    return;
    // 0x00441088: nop

L_0044108C:
    // 0x0044108C: addiu       $v0, $zero, 0x1CE8
    ctx->r2 = ADD32(0, 0X1CE8);
    // 0x00441090: beq         $v1, $v0, L_004410F4
    if (ctx->r3 == ctx->r2) {
        // 0x00441094: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_004410F4;
    }
    // 0x00441094: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00441098: addiu       $v0, $zero, 0x1D4C
    ctx->r2 = ADD32(0, 0X1D4C);
    // 0x0044109C: beq         $v1, $v0, L_0044110C
    if (ctx->r3 == ctx->r2) {
        // 0x004410A0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0044110C;
    }
    // 0x004410A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004410A4: j           L_00408124
    // 0x004410A8: nop

    entry_00408124(rdram, ctx);
    return;
    // 0x004410A8: nop

L_004410AC:
    // 0x004410AC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x004410B0: addiu       $v1, $v1, -0x5528
    ctx->r3 = ADD32(ctx->r3, -0X5528);
    // 0x004410B4: sw          $v0, 0x9D0($s1)
    MEM_W(0X9D0, ctx->r17) = ctx->r2;
    // 0x004410B8: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x004410BC: j           L_00408120
    // 0x004410C0: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    entry_00408120(rdram, ctx);
    return;
    // 0x004410C0: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
L_004410C4:
    // 0x004410C4: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x004410C8: addiu       $v1, $v1, -0x5528
    ctx->r3 = ADD32(ctx->r3, -0X5528);
    // 0x004410CC: sw          $v0, 0x9D4($s1)
    MEM_W(0X9D4, ctx->r17) = ctx->r2;
    // 0x004410D0: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x004410D4: j           L_00408120
    // 0x004410D8: ori         $v0, $v0, 0x200
    ctx->r2 = ctx->r2 | 0X200;
    entry_00408120(rdram, ctx);
    return;
    // 0x004410D8: ori         $v0, $v0, 0x200
    ctx->r2 = ctx->r2 | 0X200;
L_004410DC:
    // 0x004410DC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x004410E0: addiu       $v1, $v1, -0x5528
    ctx->r3 = ADD32(ctx->r3, -0X5528);
    // 0x004410E4: sw          $v0, 0x9D8($s1)
    MEM_W(0X9D8, ctx->r17) = ctx->r2;
    // 0x004410E8: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x004410EC: j           L_00408120
    // 0x004410F0: ori         $v0, $v0, 0x400
    ctx->r2 = ctx->r2 | 0X400;
    entry_00408120(rdram, ctx);
    return;
    // 0x004410F0: ori         $v0, $v0, 0x400
    ctx->r2 = ctx->r2 | 0X400;
L_004410F4:
    // 0x004410F4: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x004410F8: addiu       $v1, $v1, -0x5528
    ctx->r3 = ADD32(ctx->r3, -0X5528);
    // 0x004410FC: sw          $v0, 0x9DC($s1)
    MEM_W(0X9DC, ctx->r17) = ctx->r2;
    // 0x00441100: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x00441104: j           L_00408120
    // 0x00441108: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    entry_00408120(rdram, ctx);
    return;
    // 0x00441108: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
L_0044110C:
    // 0x0044110C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00441110: addiu       $v1, $v1, -0x5528
    ctx->r3 = ADD32(ctx->r3, -0X5528);
    // 0x00441114: sw          $v0, 0x9E0($s1)
    MEM_W(0X9E0, ctx->r17) = ctx->r2;
    // 0x00441118: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x0044111C: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x00441120: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x00441124: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00441128: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0044112C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00441130: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00441134: jr          $ra
    // 0x00441138: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00441138: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002943CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0025B4CC:
    // 0x002943CC: j           L_0025B4CC
    entry_0025B4CC(rdram, ctx);
    return;
;}
RECOMP_FUNC void func_004085A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004085A0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x004085A4: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x004085A8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x004085AC: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x004085B0: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x004085B4: addiu       $s2, $s2, -0x4B0
    ctx->r18 = ADD32(ctx->r18, -0X4B0);
    // 0x004085B8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x004085BC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x004085C0: lw          $v0, 0xF4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XF4);
    // 0x004085C4: lui         $v1, 0x41
    ctx->r3 = S32(0X41 << 16);
    // 0x004085C8: addiu       $v1, $v1, -0x7620
    ctx->r3 = ADD32(ctx->r3, -0X7620);
    // 0x004085CC: bnel        $v0, $v1, L_004085D4
    if (ctx->r2 != ctx->r3) {
        // 0x004085D0: sw          $v1, 0xF4($s1)
        MEM_W(0XF4, ctx->r17) = ctx->r3;
            goto L_004085D4;
    }
    goto skip_0;
    // 0x004085D0: sw          $v1, 0xF4($s1)
    MEM_W(0XF4, ctx->r17) = ctx->r3;
    skip_0:
L_004085D4:
    // 0x004085D4: lw          $v1, 0x8($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X8);
    // 0x004085D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004085DC: beq         $v1, $v0, L_0040861C
    if (ctx->r3 == ctx->r2) {
        // 0x004085E0: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_0040861C;
    }
    // 0x004085E0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x004085E4: beql        $v0, $zero, L_004085FC
    if (ctx->r2 == 0) {
        // 0x004085E8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_004085FC;
    }
    goto skip_1;
    // 0x004085E8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_1:
    // 0x004085EC: beq         $v1, $zero, L_0040860C
    if (ctx->r3 == 0) {
        // 0x004085F0: nop
    
            goto L_0040860C;
    }
    // 0x004085F0: nop

    // 0x004085F4: j           L_00408750
    // 0x004085F8: nop

        goto L_00408750;
    // 0x004085F8: nop

L_004085FC:
    // 0x004085FC: beq         $v1, $v0, L_00408718
    if (ctx->r3 == ctx->r2) {
        // 0x00408600: nop
    
            goto L_00408718;
    }
    // 0x00408600: nop

    // 0x00408604: j           L_00408750
    // 0x00408608: nop

        goto L_00408750;
    // 0x00408608: nop

L_0040860C:
    // 0x0040860C: jal         0x004082A0
    // 0x00408610: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_004082A0(rdram, ctx);
        goto after_0;
    // 0x00408610: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_0:
    // 0x00408614: j           L_00408750
    // 0x00408618: nop

        goto L_00408750;
    // 0x00408618: nop

L_0040861C:
    // 0x0040861C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00408620: lwc1        $f1, -0x4A4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X4A4);
    // 0x00408624: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00408628: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0040862C: nop

    // 0x00408630: bc1f        L_00408654
    if (!c1cs) {
        // 0x00408634: nop
    
            goto L_00408654;
    }
    // 0x00408634: nop

    // 0x00408638: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0040863C: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00408640: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00408644: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00408648: swc1        $f0, -0x4A4($at)
    MEM_W(-0X4A4, ctx->r1) = ctx->f0.u32l;
    // 0x0040864C: j           L_00408750
    // 0x00408650: nop

        goto L_00408750;
    // 0x00408650: nop

L_00408654:
    // 0x00408654: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00408658: lwc1        $f12, 0x598($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X598);
    // 0x0040865C: jal         0x0021149C
    // 0x00408660: nop

    func_0021149C(rdram, ctx);
        goto after_1;
    // 0x00408660: nop

    after_1:
    // 0x00408664: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00408668: lwc1        $f1, 0x59C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X59C);
    // 0x0040866C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00408670: nop

    // 0x00408674: bc1t        L_00408750
    if (c1cs) {
        // 0x00408678: nop
    
            goto L_00408750;
    }
    // 0x00408678: nop

    // 0x0040867C: lui         $s0, 0x8011
    ctx->r16 = S32(0X8011 << 16);
    // 0x00408680: lw          $s0, -0x14C($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X14C);
    // 0x00408684: beq         $s0, $zero, L_00408750
    if (ctx->r16 == 0) {
        // 0x00408688: nop
    
            goto L_00408750;
    }
    // 0x00408688: nop

    // 0x0040868C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_00408690:
    // 0x00408690: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x00408694: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00408698: bne         $v0, $v1, L_004086AC
    if (ctx->r2 != ctx->r3) {
        // 0x0040869C: nop
    
            goto L_004086AC;
    }
    // 0x0040869C: nop

    // 0x004086A0: lw          $v0, 0x144($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X144);
    // 0x004086A4: bnel        $v0, $zero, L_004086C0
    if (ctx->r2 != 0) {
        // 0x004086A8: sw          $zero, 0x14($sp)
        MEM_W(0X14, ctx->r29) = 0;
            goto L_004086C0;
    }
    goto skip_2;
    // 0x004086A8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    skip_2:
L_004086AC:
    // 0x004086AC: lw          $s0, 0x28C($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X28C);
    // 0x004086B0: beq         $s0, $zero, L_00408750
    if (ctx->r16 == 0) {
        // 0x004086B4: nop
    
            goto L_00408750;
    }
    // 0x004086B4: nop

    // 0x004086B8: j           L_00408690
    // 0x004086BC: nop

        goto L_00408690;
    // 0x004086BC: nop

L_004086C0:
    // 0x004086C0: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x004086C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x004086C8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x004086CC: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x004086D0: lw          $a3, 0x8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X8);
    // 0x004086D4: jal         0x00246690
    // 0x004086D8: addiu       $a1, $zero, 0x17C
    ctx->r5 = ADD32(0, 0X17C);
    func_00246690(rdram, ctx);
        goto after_2;
    // 0x004086D8: addiu       $a1, $zero, 0x17C
    ctx->r5 = ADD32(0, 0X17C);
    after_2:
    // 0x004086DC: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x004086E0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x004086E4: ori         $a2, $zero, 0xFF00
    ctx->r6 = 0 | 0XFF00;
    // 0x004086E8: lui         $a3, 0x424C
    ctx->r7 = S32(0X424C << 16);
    // 0x004086EC: ori         $a3, $a3, 0xCCCC
    ctx->r7 = ctx->r7 | 0XCCCC;
    // 0x004086F0: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
    // 0x004086F4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x004086F8: jal         0x00245828
    // 0x004086FC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_00245828(rdram, ctx);
        goto after_3;
    // 0x004086FC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_3:
    // 0x00408700: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00408704: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // 0x00408708: jal         0x0025B2D4
    // 0x0040870C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    func_0025B2D4(rdram, ctx);
        goto after_4;
    // 0x0040870C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_4:
    // 0x00408710: j           L_00408750
    // 0x00408714: nop

        goto L_00408750;
    // 0x00408714: nop

L_00408718:
    // 0x00408718: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x0040871C: lw          $v1, -0x14C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X14C);
    // 0x00408720: beq         $v1, $zero, L_00408750
    if (ctx->r3 == 0) {
        // 0x00408724: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_00408750;
    }
    // 0x00408724: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_00408728:
    // 0x00408728: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x0040872C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00408730: bne         $v0, $a0, L_00408744
    if (ctx->r2 != ctx->r4) {
        // 0x00408734: nop
    
            goto L_00408744;
    }
    // 0x00408734: nop

    // 0x00408738: lw          $v0, 0x144($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X144);
    // 0x0040873C: bne         $v0, $zero, L_00408750
    if (ctx->r2 != 0) {
        // 0x00408740: nop
    
            goto L_00408750;
    }
    // 0x00408740: nop

L_00408744:
    // 0x00408744: lw          $v1, 0x28C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X28C);
    // 0x00408748: bne         $v1, $zero, L_00408728
    if (ctx->r3 != 0) {
        // 0x0040874C: nop
    
            goto L_00408728;
    }
    // 0x0040874C: nop

L_00408750:
    // 0x00408750: lw          $a0, 0x8($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X8);
    // 0x00408754: bne         $a0, $zero, L_00408764
    if (ctx->r4 != 0) {
        // 0x00408758: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00408764;
    }
    // 0x00408758: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0040875C: j           L_00408898
    // 0x00408760: sw          $zero, 0x40($s1)
    MEM_W(0X40, ctx->r17) = 0;
        goto L_00408898;
    // 0x00408760: sw          $zero, 0x40($s1)
    MEM_W(0X40, ctx->r17) = 0;
L_00408764:
    // 0x00408764: bne         $a0, $v0, L_004087C4
    if (ctx->r4 != ctx->r2) {
        // 0x00408768: nop
    
            goto L_004087C4;
    }
    // 0x00408768: nop

    // 0x0040876C: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x00408770: lw          $v1, -0x14C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X14C);
    // 0x00408774: beql        $v1, $zero, L_004087A8
    if (ctx->r3 == 0) {
        // 0x00408778: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_004087A8;
    }
    goto skip_3;
    // 0x00408778: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_3:
    // 0x0040877C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
L_00408780:
    // 0x00408780: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x00408784: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00408788: bne         $v0, $a0, L_0040879C
    if (ctx->r2 != ctx->r4) {
        // 0x0040878C: nop
    
            goto L_0040879C;
    }
    // 0x0040878C: nop

    // 0x00408790: lw          $v0, 0x144($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X144);
    // 0x00408794: bne         $v0, $zero, L_004087A8
    if (ctx->r2 != 0) {
        // 0x00408798: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_004087A8;
    }
    // 0x00408798: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0040879C:
    // 0x0040879C: lw          $v1, 0x28C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X28C);
    // 0x004087A0: bne         $v1, $zero, L_00408780
    if (ctx->r3 != 0) {
        // 0x004087A4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00408780;
    }
    // 0x004087A4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_004087A8:
    // 0x004087A8: bnel        $v0, $zero, L_00408898
    if (ctx->r2 != 0) {
        // 0x004087AC: sw          $zero, 0x40($s1)
        MEM_W(0X40, ctx->r17) = 0;
            goto L_00408898;
    }
    goto skip_4;
    // 0x004087AC: sw          $zero, 0x40($s1)
    MEM_W(0X40, ctx->r17) = 0;
    skip_4:
    // 0x004087B0: lwc1        $f1, 0x40($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X40);
    // 0x004087B4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004087B8: lwc1        $f0, 0x5A0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5A0);
    // 0x004087BC: j           L_004087D0
    // 0x004087C0: nop

        goto L_004087D0;
    // 0x004087C0: nop

L_004087C4:
    // 0x004087C4: lwc1        $f1, 0x40($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X40);
    // 0x004087C8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004087CC: lwc1        $f0, 0x5A4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5A4);
L_004087D0:
    // 0x004087D0: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x004087D4: nop

    // 0x004087D8: bc1t        L_00408898
    if (c1cs) {
        // 0x004087DC: nop
    
            goto L_00408898;
    }
    // 0x004087DC: nop

    // 0x004087E0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x004087E4: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x004087E8: jal         0x002532A8
    // 0x004087EC: nop

    func_002532A8(rdram, ctx);
        goto after_5;
    // 0x004087EC: nop

    after_5:
    // 0x004087F0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x004087F4: beq         $a0, $zero, L_00408898
    if (ctx->r4 == 0) {
        // 0x004087F8: addiu       $v0, $zero, 0x1C84
        ctx->r2 = ADD32(0, 0X1C84);
            goto L_00408898;
    }
    // 0x004087F8: addiu       $v0, $zero, 0x1C84
    ctx->r2 = ADD32(0, 0X1C84);
    // 0x004087FC: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x00408800: lw          $v1, 0x48($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X48);
    // 0x00408804: beq         $v1, $v0, L_00408850
    if (ctx->r3 == ctx->r2) {
        // 0x00408808: slti        $v0, $v1, 0x1C85
        ctx->r2 = SIGNED(ctx->r3) < 0X1C85 ? 1 : 0;
            goto L_00408850;
    }
    // 0x00408808: slti        $v0, $v1, 0x1C85
    ctx->r2 = SIGNED(ctx->r3) < 0X1C85 ? 1 : 0;
    // 0x0040880C: beq         $v0, $zero, L_0040882C
    if (ctx->r2 == 0) {
        // 0x00408810: addiu       $v0, $zero, 0x1BBC
        ctx->r2 = ADD32(0, 0X1BBC);
            goto L_0040882C;
    }
    // 0x00408810: addiu       $v0, $zero, 0x1BBC
    ctx->r2 = ADD32(0, 0X1BBC);
    // 0x00408814: beq         $v1, $v0, L_00408848
    if (ctx->r3 == ctx->r2) {
        // 0x00408818: addiu       $v0, $zero, 0x1C20
        ctx->r2 = ADD32(0, 0X1C20);
            goto L_00408848;
    }
    // 0x00408818: addiu       $v0, $zero, 0x1C20
    ctx->r2 = ADD32(0, 0X1C20);
    // 0x0040881C: beq         $v1, $v0, L_00408888
    if (ctx->r3 == ctx->r2) {
        // 0x00408820: addiu       $a1, $zero, 0xBB7
        ctx->r5 = ADD32(0, 0XBB7);
            goto L_00408888;
    }
    // 0x00408820: addiu       $a1, $zero, 0xBB7
    ctx->r5 = ADD32(0, 0XBB7);
    // 0x00408824: j           L_00408880
    // 0x00408828: nop

        goto L_00408880;
    // 0x00408828: nop

L_0040882C:
    // 0x0040882C: addiu       $v0, $zero, 0x1CE8
    ctx->r2 = ADD32(0, 0X1CE8);
    // 0x00408830: beq         $v1, $v0, L_00408858
    if (ctx->r3 == ctx->r2) {
        // 0x00408834: addiu       $v0, $zero, 0x1D4C
        ctx->r2 = ADD32(0, 0X1D4C);
            goto L_00408858;
    }
    // 0x00408834: addiu       $v0, $zero, 0x1D4C
    ctx->r2 = ADD32(0, 0X1D4C);
    // 0x00408838: beq         $v1, $v0, L_0040886C
    if (ctx->r3 == ctx->r2) {
        // 0x0040883C: nop
    
            goto L_0040886C;
    }
    // 0x0040883C: nop

    // 0x00408840: j           L_00408880
    // 0x00408844: nop

        goto L_00408880;
    // 0x00408844: nop

L_00408848:
    // 0x00408848: j           L_00408888
    // 0x0040884C: addiu       $a1, $zero, 0x7CF
    ctx->r5 = ADD32(0, 0X7CF);
        goto L_00408888;
    // 0x0040884C: addiu       $a1, $zero, 0x7CF
    ctx->r5 = ADD32(0, 0X7CF);
L_00408850:
    // 0x00408850: j           L_00408888
    // 0x00408854: addiu       $a1, $zero, 0xF9F
    ctx->r5 = ADD32(0, 0XF9F);
        goto L_00408888;
    // 0x00408854: addiu       $a1, $zero, 0xF9F
    ctx->r5 = ADD32(0, 0XF9F);
L_00408858:
    // 0x00408858: lw          $v0, 0x9E4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X9E4);
    // 0x0040885C: beq         $v0, $zero, L_00408888
    if (ctx->r2 == 0) {
        // 0x00408860: addiu       $a1, $zero, 0x1CE9
        ctx->r5 = ADD32(0, 0X1CE9);
            goto L_00408888;
    }
    // 0x00408860: addiu       $a1, $zero, 0x1CE9
    ctx->r5 = ADD32(0, 0X1CE9);
    // 0x00408864: j           L_00408888
    // 0x00408868: addiu       $a1, $zero, 0x1387
    ctx->r5 = ADD32(0, 0X1387);
        goto L_00408888;
    // 0x00408868: addiu       $a1, $zero, 0x1387
    ctx->r5 = ADD32(0, 0X1387);
L_0040886C:
    // 0x0040886C: lw          $v0, 0x9E8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X9E8);
    // 0x00408870: beq         $v0, $zero, L_00408888
    if (ctx->r2 == 0) {
        // 0x00408874: addiu       $a1, $zero, 0x1D4D
        ctx->r5 = ADD32(0, 0X1D4D);
            goto L_00408888;
    }
    // 0x00408874: addiu       $a1, $zero, 0x1D4D
    ctx->r5 = ADD32(0, 0X1D4D);
    // 0x00408878: j           L_00408888
    // 0x0040887C: addiu       $a1, $zero, 0x176F
    ctx->r5 = ADD32(0, 0X176F);
        goto L_00408888;
    // 0x0040887C: addiu       $a1, $zero, 0x176F
    ctx->r5 = ADD32(0, 0X176F);
L_00408880:
    // 0x00408880: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x00408884: lw          $a1, 0x48($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X48);
L_00408888:
    // 0x00408888: sw          $zero, 0xA28($a0)
    MEM_W(0XA28, ctx->r4) = 0;
    // 0x0040888C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x00408890: jal         0x00248BA8
    // 0x00408894: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_00248BA8(rdram, ctx);
        goto after_6;
    // 0x00408894: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_6:
L_00408898:
    // 0x00408898: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x0040889C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x004088A0: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x004088A4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x004088A8: jr          $ra
    // 0x004088AC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x004088AC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_0021EE44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021EE44: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x0021EE48: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x0021EE4C: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x0021EE50: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x0021EE54: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x0021EE58: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x0021EE5C: addu        $fp, $a2, $zero
    ctx->r30 = ADD32(ctx->r6, 0);
    // 0x0021EE60: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x0021EE64: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x0021EE68: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x0021EE6C: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x0021EE70: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x0021EE74: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x0021EE78: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x0021EE7C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0021EE80: jal         0x002017D4
    // 0x0021EE84: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x0021EE84: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x0021EE88: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x0021EE8C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x0021EE90: jal         0x002017D4
    // 0x0021EE94: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x0021EE94: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_1:
    // 0x0021EE98: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x0021EE9C: lw          $s3, 0x0($s0)
    ctx->r19 = MEM_W(ctx->r16, 0X0);
    // 0x0021EEA0: blez        $s3, L_0021EF10
    if (SIGNED(ctx->r19) <= 0) {
        // 0x0021EEA4: addu        $s6, $v0, $zero
        ctx->r22 = ADD32(ctx->r2, 0);
            goto L_0021EF10;
    }
    // 0x0021EEA4: addu        $s6, $v0, $zero
    ctx->r22 = ADD32(ctx->r2, 0);
    // 0x0021EEA8: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
L_0021EEAC:
    // 0x0021EEAC: lw          $v0, 0x14C($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X14C);
    // 0x0021EEB0: sllv        $v1, $s7, $s2
    ctx->r3 = S32(ctx->r23 << (ctx->r18 & 31));
    // 0x0021EEB4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0021EEB8: beql        $v0, $zero, L_0021EF04
    if (ctx->r2 == 0) {
        // 0x0021EEBC: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_0021EF04;
    }
    goto skip_0;
    // 0x0021EEBC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
    // 0x0021EEC0: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x0021EEC4: jal         0x002017D4
    // 0x0021EEC8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x0021EEC8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_2:
    // 0x0021EECC: lw          $s1, 0x4($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X4);
    // 0x0021EED0: beql        $s1, $zero, L_0021EF04
    if (ctx->r17 == 0) {
        // 0x0021EED4: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_0021EF04;
    }
    goto skip_1;
    // 0x0021EED4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_1:
    // 0x0021EED8: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x0021EEDC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x0021EEE0: jal         0x002017D4
    // 0x0021EEE4: addiu       $s0, $v0, 0x8
    ctx->r16 = ADD32(ctx->r2, 0X8);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x0021EEE4: addiu       $s0, $v0, 0x8
    ctx->r16 = ADD32(ctx->r2, 0X8);
    after_3:
    // 0x0021EEE8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0021EEEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0021EEF0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0021EEF4: addu        $a2, $fp, $zero
    ctx->r6 = ADD32(ctx->r30, 0);
    // 0x0021EEF8: jal         0x0026D710
    // 0x0021EEFC: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    func_0026D710(rdram, ctx);
        goto after_4;
    // 0x0021EEFC: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    after_4:
    // 0x0021EF00: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_0021EF04:
    // 0x0021EF04: slt         $v0, $s2, $s3
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x0021EF08: bne         $v0, $zero, L_0021EEAC
    if (ctx->r2 != 0) {
        // 0x0021EF0C: nop
    
            goto L_0021EEAC;
    }
    // 0x0021EF0C: nop

L_0021EF10:
    // 0x0021EF10: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x0021EF14: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x0021EF18: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x0021EF1C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x0021EF20: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x0021EF24: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x0021EF28: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x0021EF2C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0021EF30: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0021EF34: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0021EF38: jr          $ra
    // 0x0021EF3C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x0021EF3C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00468758(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00468758: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0046875C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00468760: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x00468764: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
        turok2_patch_scale_overlay_wait(rdram, ctx);

    // 0x00468768: bgtz        $v0, L_0046877C
    if (SIGNED(ctx->r2) > 0) {
        // 0x0046876C: sw          $v0, 0xC($a0)
        MEM_W(0XC, ctx->r4) = ctx->r2;
            goto L_0046877C;
    }
    // 0x0046876C: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
    // 0x00468770: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00468774: jalr        $v0
    // 0x00468778: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x00468778: nop

    after_0:
L_0046877C:
    // 0x0046877C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00468780: jr          $ra
    // 0x00468784: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00468784: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0025A5A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025A5A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025A5AC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025A5B0: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025A5B4: lhu         $a3, 0x7E($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X7E);
    // 0x0025A5B8: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025A5BC: addiu       $a2, $a2, -0x1D8
    ctx->r6 = ADD32(ctx->r6, -0X1D8);
    // 0x0025A5C0: jal         0x00245A98
    // 0x0025A5C4: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025A5C4: nop

    after_0:
    // 0x0025A5C8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025A5CC: jr          $ra
    // 0x0025A5D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025A5D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00450B74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00417BA4:
    // 0x00450B74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00450B78: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00450B7C: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x00450B80: lb          $a0, 0x4($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X4);
    // 0x00450B84: beq         $a1, $zero, L_00450B9C
    if (ctx->r5 == 0) {
        // 0x00450B88: nop
    
            goto L_00450B9C;
    }
    // 0x00450B88: nop

    // 0x00450B8C: jal         0x00285A68
    // 0x00450B90: nop

    func_00285A68(rdram, ctx);
        goto after_0;
    // 0x00450B90: nop

    after_0:
    // 0x00450B94: j           L_00417BA4
    // 0x00450B98: nop

    entry_00417BA4(rdram, ctx);
    return;
    // 0x00450B98: nop

L_00450B9C:
    // 0x00450B9C: jal         0x00285A80
    // 0x00450BA0: nop

    func_00285A80(rdram, ctx);
        goto after_1;
    // 0x00450BA0: nop

    after_1:
    // 0x00450BA4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00450BA8: jr          $ra
    // 0x00450BAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00450BAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00275ABC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00275ABC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00275AC0: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00275AC4: addiu       $a0, $a0, 0x2A00
    ctx->r4 = ADD32(ctx->r4, 0X2A00);
    // 0x00275AC8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00275ACC: jal         0x002718D0
    // 0x00275AD0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002718D0(rdram, ctx);
        goto after_0;
    // 0x00275AD0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x00275AD4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00275AD8: jr          $ra
    // 0x00275ADC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00275ADC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00210318(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00210318: lwc1        $f2, 0x30($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X30);
    // 0x0021031C: mtc1        $a1, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r5;
    // 0x00210320: lwc1        $f1, 0x34($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X34);
    // 0x00210324: add.s       $f2, $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f3.fl;
    // 0x00210328: mtc1        $a2, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r6;
    // 0x0021032C: lwc1        $f0, 0x38($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X38);
    // 0x00210330: add.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f3.fl;
    // 0x00210334: mtc1        $a3, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r7;
    // 0x00210338: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0021033C: swc1        $f2, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f2.u32l;
    // 0x00210340: swc1        $f1, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x00210344: jr          $ra
    // 0x00210348: swc1        $f0, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x00210348: swc1        $f0, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_00450E84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00450E84: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00450E88: lw          $v0, -0x5334($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5334);
    // 0x00450E8C: jr          $ra
    // 0x00450E90: nop

    return;
    // 0x00450E90: nop

;}
RECOMP_FUNC void func_00264C94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00264C94: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00264C98: addiu       $v0, $v0, 0x21E0
    ctx->r2 = ADD32(ctx->r2, 0X21E0);
    // 0x00264C9C: sw          $v0, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r2;
    // 0x00264CA0: lui         $v0, 0x26
    ctx->r2 = S32(0X26 << 16);
    // 0x00264CA4: addiu       $v0, $v0, 0x4D98
    ctx->r2 = ADD32(ctx->r2, 0X4D98);
    // 0x00264CA8: sw          $v0, 0xF0($a1)
    MEM_W(0XF0, ctx->r5) = ctx->r2;
    // 0x00264CAC: lui         $v0, 0x26
    ctx->r2 = S32(0X26 << 16);
    // 0x00264CB0: addiu       $v0, $v0, 0x4CEC
    ctx->r2 = ADD32(ctx->r2, 0X4CEC);
    // 0x00264CB4: sw          $v0, 0xFC($a1)
    MEM_W(0XFC, ctx->r5) = ctx->r2;
    // 0x00264CB8: lui         $v0, 0x26
    ctx->r2 = S32(0X26 << 16);
    // 0x00264CBC: addiu       $v0, $v0, 0x49A0
    ctx->r2 = ADD32(ctx->r2, 0X49A0);
    // 0x00264CC0: jr          $ra
    // 0x00264CC4: sw          $v0, 0x104($a1)
    MEM_W(0X104, ctx->r5) = ctx->r2;
    return;
    // 0x00264CC4: sw          $v0, 0x104($a1)
    MEM_W(0X104, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_00403144(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00403144: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x00403148: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x0040314C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00403150: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x00403154: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00403158: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x0040315C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x00403160: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
    // 0x00403164: sw          $ra, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r31;
    // 0x00403168: jal         0x00246108
    // 0x0040316C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x0040316C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x00403170: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00403174: lui         $a2, 0x3E32
    ctx->r6 = S32(0X3E32 << 16);
    // 0x00403178: ori         $a2, $a2, 0xB8C4
    ctx->r6 = ctx->r6 | 0XB8C4;
    // 0x0040317C: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x00403180: jal         0x00245BAC
    // 0x00403184: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x00403184: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00403188: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0040318C: lw          $v0, -0xA0C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XA0C);
    // 0x00403190: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x00403194: bne         $v0, $zero, L_004031A4
    if (ctx->r2 != 0) {
        // 0x00403198: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_004031A4;
    }
    // 0x00403198: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040319C: j           L_004031B8
    // 0x004031A0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
        goto L_004031B8;
    // 0x004031A0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_004031A4:
    // 0x004031A4: lui         $a3, 0x3F49
    ctx->r7 = S32(0X3F49 << 16);
    // 0x004031A8: ori         $a3, $a3, 0xFDC
    ctx->r7 = ctx->r7 | 0XFDC;
    // 0x004031AC: jal         0x002451AC
    // 0x004031B0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002451AC(rdram, ctx);
        goto after_2;
    // 0x004031B0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x004031B4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_004031B8:
    // 0x004031B8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x004031BC: bne         $v1, $v0, L_004031D4
    if (ctx->r3 != ctx->r2) {
        // 0x004031C0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_004031D4;
    }
    // 0x004031C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004031C4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x004031C8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x004031CC: j           L_004031FC
    // 0x004031D0: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
        goto L_004031FC;
    // 0x004031D0: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
L_004031D4:
    // 0x004031D4: bne         $v1, $v0, L_004031E8
    if (ctx->r3 != ctx->r2) {
        // 0x004031D8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_004031E8;
    }
    // 0x004031D8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x004031DC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x004031E0: j           L_004031FC
    // 0x004031E4: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
        goto L_004031FC;
    // 0x004031E4: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
L_004031E8:
    // 0x004031E8: lb          $v0, 0xC7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC7);
    // 0x004031EC: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x004031F0: bne         $v0, $zero, L_00403204
    if (ctx->r2 != 0) {
        // 0x004031F4: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_00403204;
    }
    // 0x004031F4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x004031F8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
L_004031FC:
    // 0x004031FC: jal         0x00243414
    // 0x00403200: nop

    func_00243414(rdram, ctx);
        goto after_3;
    // 0x00403200: nop

    after_3:
L_00403204:
    // 0x00403204: lw          $ra, 0xA8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA8);
    // 0x00403208: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x0040320C: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x00403210: jr          $ra
    // 0x00403214: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x00403214: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_0029A890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029A890: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x0029A894: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0029A898: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0029A89C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0029A8A0: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0029A8A4: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x0029A8A8: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x0029A8AC: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x0029A8B0: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x0029A8B4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x0029A8B8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x0029A8BC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x0029A8C0: jal         0x0029AA10
    // 0x0029A8C4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_0029AA10(rdram, ctx);
        goto after_0;
    // 0x0029A8C4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x0029A8C8: lhu         $v0, 0x2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2);
    // 0x0029A8CC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0029A8D0: addiu       $v1, $v1, 0x16D0
    ctx->r3 = ADD32(ctx->r3, 0X16D0);
    // 0x0029A8D4: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x0029A8D8: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x0029A8DC: bne         $v0, $zero, L_0029A8EC
    if (ctx->r2 != 0) {
        // 0x0029A8E0: addu        $s6, $s0, $zero
        ctx->r22 = ADD32(ctx->r16, 0);
            goto L_0029A8EC;
    }
    // 0x0029A8E0: addu        $s6, $s0, $zero
    ctx->r22 = ADD32(ctx->r16, 0);
    // 0x0029A8E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0029A8E8: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
L_0029A8EC:
    // 0x0029A8EC: addiu       $s7, $zero, 0xD
    ctx->r23 = ADD32(0, 0XD);
    // 0x0029A8F0: addu        $s2, $v1, $zero
    ctx->r18 = ADD32(ctx->r3, 0);
    // 0x0029A8F4: lui         $s5, 0x8012
    ctx->r21 = S32(0X8012 << 16);
    // 0x0029A8F8: addiu       $s5, $s5, 0x2A24
    ctx->r21 = ADD32(ctx->r21, 0X2A24);
    // 0x0029A8FC: lui         $s4, 0x8012
    ctx->r20 = S32(0X8012 << 16);
    // 0x0029A900: addiu       $s4, $s4, 0x2A20
    ctx->r20 = ADD32(ctx->r20, 0X2A20);
    // 0x0029A904: lui         $s3, 0x8012
    ctx->r19 = S32(0X8012 << 16);
    // 0x0029A908: addiu       $s3, $s3, 0x2A28
    ctx->r19 = ADD32(ctx->r19, 0X2A28);
    // 0x0029A90C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
L_0029A910:
    // 0x0029A910: lw          $a0, 0xC($s6)
    ctx->r4 = MEM_W(ctx->r22, 0XC);
    // 0x0029A914: jal         0x0029B6F0
    // 0x0029A918: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x0029A918: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x0029A91C: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x0029A920: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x0029A924: beq         $v1, $s7, L_0029A93C
    if (ctx->r3 == ctx->r23) {
        // 0x0029A928: addiu       $v0, $zero, 0xE
        ctx->r2 = ADD32(0, 0XE);
            goto L_0029A93C;
    }
    // 0x0029A928: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x0029A92C: beq         $v1, $v0, L_0029AA00
    if (ctx->r3 == ctx->r2) {
        // 0x0029A930: addiu       $a1, $sp, 0x10
        ctx->r5 = ADD32(ctx->r29, 0X10);
            goto L_0029AA00;
    }
    // 0x0029A930: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x0029A934: j           L_0029A910
    // 0x0029A938: nop

        goto L_0029A910;
    // 0x0029A938: nop

L_0029A93C:
    // 0x0029A93C: jal         0x0029ACE0
    // 0x0029A940: nop

    func_0029ACE0(rdram, ctx);
        goto after_2;
    // 0x0029A940: nop

    after_2:
    // 0x0029A944: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x0029A948: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0029A94C: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
    // 0x0029A950: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x0029A954: bne         $v0, $zero, L_0029A984
    if (ctx->r2 != 0) {
        // 0x0029A958: nop
    
            goto L_0029A984;
    }
    // 0x0029A958: nop

    // 0x0029A95C: jal         0x0029AA10
    // 0x0029A960: nop

    func_0029AA10(rdram, ctx);
        goto after_3;
    // 0x0029A960: nop

    after_3:
    // 0x0029A964: lw          $a0, 0x10($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X10);
    // 0x0029A968: beq         $a0, $zero, L_0029A97C
    if (ctx->r4 == 0) {
        // 0x0029A96C: addu        $s0, $v0, $zero
        ctx->r16 = ADD32(ctx->r2, 0);
            goto L_0029A97C;
    }
    // 0x0029A96C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0029A970: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    // 0x0029A974: jal         0x0029B820
    // 0x0029A978: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    osSendMesg_recomp(rdram, ctx);
        goto after_4;
    // 0x0029A978: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
L_0029A97C:
    // 0x0029A97C: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x0029A980: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_0029A984:
    // 0x0029A984: lw          $v0, 0x0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X0);
    // 0x0029A988: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0029A98C: beq         $s1, $zero, L_0029A9BC
    if (ctx->r17 == 0) {
        // 0x0029A990: sw          $v0, 0x0($s5)
        MEM_W(0X0, ctx->r21) = ctx->r2;
            goto L_0029A9BC;
    }
    // 0x0029A990: sw          $v0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r2;
    // 0x0029A994: jal         0x0029DFC0
    // 0x0029A998: nop

    func_0029DFC0(rdram, ctx);
        goto after_5;
    // 0x0029A998: nop

    after_5:
    // 0x0029A99C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0029A9A0: addu        $v1, $s0, $zero
    ctx->r3 = ADD32(ctx->r16, 0);
    // 0x0029A9A4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0029A9A8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0029A9AC: sw          $v0, 0x2A28($at)
    MEM_W(0X2A28, ctx->r1) = ctx->r2;
    // 0x0029A9B0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0029A9B4: sw          $v1, 0x2A2C($at)
    MEM_W(0X2A2C, ctx->r1) = ctx->r3;
    // 0x0029A9B8: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
L_0029A9BC:
    // 0x0029A9BC: lw          $s0, 0x0($s4)
    ctx->r16 = MEM_W(ctx->r20, 0X0);
    // 0x0029A9C0: jal         0x0029DFC0
    // 0x0029A9C4: nop

    func_0029DFC0(rdram, ctx);
        goto after_6;
    // 0x0029A9C4: nop

    after_6:
    // 0x0029A9C8: sw          $v0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r2;
    // 0x0029A9CC: subu        $s0, $v0, $s0
    ctx->r16 = SUB32(ctx->r2, ctx->r16);
    // 0x0029A9D0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0029A9D4: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x0029A9D8: lw          $v1, 0x4($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X4);
    // 0x0029A9DC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0029A9E0: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x0029A9E4: sltu        $a2, $v1, $a1
    ctx->r6 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x0029A9E8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x0029A9EC: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x0029A9F0: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x0029A9F4: sw          $v1, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r3;
    // 0x0029A9F8: j           L_0029A910
    // 0x0029A9FC: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
        goto L_0029A910;
    // 0x0029A9FC: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
L_0029AA00:
    // 0x0029AA00: jal         0x0029BC70
    // 0x0029AA04: nop

    func_0029BC70(rdram, ctx);
        goto after_7;
    // 0x0029AA04: nop

    after_7:
    // 0x0029AA08: j           L_0029A910
    // 0x0029AA0C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
        goto L_0029A910;
    // 0x0029AA0C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // turok2: reconnected split function: a stray ELF symbol at 0x0029AA10 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0029AA10(rdram, ctx);
;}
