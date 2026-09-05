#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_00276814(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00276814: bne         $v1, $zero, L_0027682C
    if (ctx->r3 != 0) {
            // 0x00276818: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_0027682C(rdram, ctx);
    return;
    }
    // 0x00276818: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x0027681C: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // turok2: reconnected split function: a stray ELF symbol at 0x00276820 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00276820(rdram, ctx);
;}
RECOMP_FUNC void func_004302CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004302CC: sh          $zero, 0xA($a1)
    MEM_H(0XA, ctx->r5) = 0;
    // 0x004302D0: sh          $v0, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r2;
    // 0x004302D4: sh          $v0, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r2;
    // 0x004302D8: sh          $v1, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r3;
    // 0x004302DC: sh          $zero, 0x1A($a1)
    MEM_H(0X1A, ctx->r5) = 0;
    // 0x004302E0: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
    // 0x004302E4: sh          $a0, 0x24($a1)
    MEM_H(0X24, ctx->r5) = ctx->r4;
    // 0x004302E8: sh          $v1, 0x28($a1)
    MEM_H(0X28, ctx->r5) = ctx->r3;
    // 0x004302EC: sh          $v1, 0x2A($a1)
    MEM_H(0X2A, ctx->r5) = ctx->r3;
    // 0x004302F0: sh          $a0, 0x30($a1)
    MEM_H(0X30, ctx->r5) = ctx->r4;
    // 0x004302F4: sh          $a0, 0x34($a1)
    MEM_H(0X34, ctx->r5) = ctx->r4;
    // 0x004302F8: sh          $zero, 0x38($a1)
    MEM_H(0X38, ctx->r5) = 0;
    // 0x004302FC: sh          $v1, 0x3A($a1)
    MEM_H(0X3A, ctx->r5) = ctx->r3;
L_00430300:
    // 0x00430300: sh          $zero, 0x2($a1)
    MEM_H(0X2, ctx->r5) = 0;
    // 0x00430304: sh          $zero, 0x6($a1)
    MEM_H(0X6, ctx->r5) = 0;
    // 0x00430308: sb          $a3, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r7;
    // 0x0043030C: sb          $a3, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r7;
    // 0x00430310: sb          $a3, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r7;
    // 0x00430314: sb          $a3, 0xF($a1)
    MEM_B(0XF, ctx->r5) = ctx->r7;
    // 0x00430318: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x0043031C: slti        $v0, $a2, 0x4
    ctx->r2 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    // 0x00430320: bne         $v0, $zero, L_00430300
    if (ctx->r2 != 0) {
        // 0x00430324: addiu       $a1, $a1, 0x10
        ctx->r5 = ADD32(ctx->r5, 0X10);
            goto L_00430300;
    }
    // 0x00430324: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x00430328: jr          $ra
    // 0x0043032C: nop

    return;
    // 0x0043032C: nop

;}
RECOMP_FUNC void func_00412B9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00412B9C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00412BA0: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x00412BA4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00412BA8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x00412BAC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x00412BB0: lw          $v0, 0x38($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X38);
    // 0x00412BB4: bne         $v0, $zero, L_00412BE8
    if (ctx->r2 != 0) {
        // 0x00412BB8: addu        $s0, $a0, $zero
        ctx->r16 = ADD32(ctx->r4, 0);
            goto L_00412BE8;
    }
    // 0x00412BB8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00412BBC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x00412BC0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x00412BC4: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x00412BC8: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x00412BCC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x00412BD0: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x00412BD4: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
    // 0x00412BD8: sw          $t1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r9;
    // 0x00412BDC: sw          $t2, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r10;
    // 0x00412BE0: j           L_00412C3C
    // 0x00412BE4: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
        goto L_00412C3C;
    // 0x00412BE4: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_00412BE8:
    // 0x00412BE8: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    // 0x00412BEC: jal         0x002017D4
    // 0x00412BF0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00412BF0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x00412BF4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00412BF8: jal         0x002017D4
    // 0x00412BFC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00412BFC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x00412C00: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00412C04: jal         0x002017D4
    // 0x00412C08: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x00412C08: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_2:
    // 0x00412C0C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00412C10: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    // 0x00412C14: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x00412C18: jal         0x004101B8
    // 0x00412C1C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_004101B8(rdram, ctx);
        goto after_3;
    // 0x00412C1C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x00412C20: lw          $t0, 0x10($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X10);
    // 0x00412C24: lw          $t1, 0x14($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X14);
    // 0x00412C28: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x00412C2C: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
    // 0x00412C30: sw          $t1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r9;
    // 0x00412C34: sw          $t2, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r10;
    // 0x00412C38: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_00412C3C:
    // 0x00412C3C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x00412C40: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x00412C44: jr          $ra
    // 0x00412C48: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00412C48: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00454C9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00454C9C: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x00454CA0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00454CA4: addiu       $v0, $v0, -0x54E8
    ctx->r2 = ADD32(ctx->r2, -0X54E8);
    // 0x00454CA8: beq         $v1, $zero, L_00454CBC
    if (ctx->r3 == 0) {
        // 0x00454CAC: nop
    
            goto L_00454CBC;
    }
    // 0x00454CAC: nop

    // 0x00454CB0: lw          $v1, 0x518($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X518);
    // 0x00454CB4: bnel        $v1, $zero, L_00454CBC
    if (ctx->r3 != 0) {
        // 0x00454CB8: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_00454CBC;
    }
    goto skip_0;
    // 0x00454CB8: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    skip_0:
L_00454CBC:
    // 0x00454CBC: jr          $ra
    // 0x00454CC0: nop

    return;
    // 0x00454CC0: nop

;}
RECOMP_FUNC void func_0021B59C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021B59C: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x0021B5A0: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    // 0x0021B5A4: sw          $s2, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r18;
    // 0x0021B5A8: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x0021B5AC: lui         $v1, 0x21FB
    ctx->r3 = S32(0X21FB << 16);
    // 0x0021B5B0: ori         $v1, $v1, 0x7813
    ctx->r3 = ctx->r3 | 0X7813;
    // 0x0021B5B4: andi        $a1, $a3, 0x38
    ctx->r5 = ctx->r7 & 0X38;
    // 0x0021B5B8: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x0021B5BC: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x0021B5C0: andi        $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 & 0XFFFF;
    // 0x0021B5C4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0021B5C8: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x0021B5CC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x0021B5D0: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x0021B5D4: lw          $t0, 0x6D18($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X6D18);
        turok2_patch_scale_frame_t0(rdram, ctx);

    // 0x0021B5D8: multu       $a0, $v1
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0021B5DC: sw          $ra, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r31;
    // 0x0021B5E0: sw          $s1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r17;
    // 0x0021B5E4: sw          $s0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r16;
    // 0x0021B5E8: sdc1        $f21, 0xD0($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0XD0, ctx->r29);
    // 0x0021B5EC: sdc1        $f20, 0xC8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XC8, ctx->r29);
    // 0x0021B5F0: addu        $t0, $t0, $v0
    ctx->r8 = ADD32(ctx->r8, ctx->r2);
    // 0x0021B5F4: andi        $v0, $a3, 0x4
    ctx->r2 = ctx->r7 & 0X4;
    // 0x0021B5F8: mfhi        $v1
    ctx->r3 = hi;
    // 0x0021B5FC: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x0021B600: srl         $a0, $a0, 1
    ctx->r4 = S32(U32(ctx->r4) >> 1);
    // 0x0021B604: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0021B608: srl         $v1, $v1, 6
    ctx->r3 = S32(U32(ctx->r3) >> 6);
    // 0x0021B60C: bne         $v0, $zero, L_0021B618
    if (ctx->r2 != 0) {
        // 0x0021B610: addu        $t0, $t0, $v1
        ctx->r8 = ADD32(ctx->r8, ctx->r3);
            goto L_0021B618;
    }
    // 0x0021B610: addu        $t0, $t0, $v1
    ctx->r8 = ADD32(ctx->r8, ctx->r3);
    // 0x0021B614: addiu       $t0, $t0, 0x28
    ctx->r8 = ADD32(ctx->r8, 0X28);
L_0021B618:
    // 0x0021B618: andi        $a1, $a3, 0xC3
    ctx->r5 = ctx->r7 & 0XC3;
    // 0x0021B61C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021B620: lwc1        $f0, 0x5B48($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5B48);
    // 0x0021B624: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0021B628: sw          $zero, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = 0;
    // 0x0021B62C: sw          $zero, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = 0;
    // 0x0021B630: bne         $a1, $v0, L_0021B6B8
    if (ctx->r5 != ctx->r2) {
        // 0x0021B634: swc1        $f0, 0xAC($sp)
        MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
            goto L_0021B6B8;
    }
    // 0x0021B634: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    // 0x0021B638: lui         $a0, 0x8888
    ctx->r4 = S32(0X8888 << 16);
    // 0x0021B63C: ori         $a0, $a0, 0x8889
    ctx->r4 = ctx->r4 | 0X8889;
    // 0x0021B640: multu       $t0, $a0
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0021B644: swc1        $f0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f0.u32l;
    // 0x0021B648: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021B64C: lwc1        $f0, 0x5B4C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5B4C);
    // 0x0021B650: addiu       $a1, $t0, 0xC
    ctx->r5 = ADD32(ctx->r8, 0XC);
    // 0x0021B654: sw          $zero, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = 0;
    // 0x0021B658: mfhi        $t1
    ctx->r9 = hi;
    // 0x0021B65C: srl         $v0, $t1, 6
    ctx->r2 = S32(U32(ctx->r9) >> 6);
    // 0x0021B660: sll         $v1, $v0, 4
    ctx->r3 = S32(ctx->r2 << 4);
    // 0x0021B664: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x0021B668: multu       $a1, $a0
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0021B66C: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x0021B670: subu        $v1, $t0, $v1
    ctx->r3 = SUB32(ctx->r8, ctx->r3);
    // 0x0021B674: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0021B678: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0021B67C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0021B680: lwc1        $f2, -0x3404($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X3404);
    // 0x0021B684: mfhi        $t1
    ctx->r9 = hi;
    // 0x0021B688: srl         $a0, $t1, 6
    ctx->r4 = S32(U32(ctx->r9) >> 6);
    // 0x0021B68C: sll         $v0, $a0, 4
    ctx->r2 = S32(ctx->r4 << 4);
    // 0x0021B690: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x0021B694: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0021B698: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x0021B69C: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x0021B6A0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0021B6A4: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x0021B6A8: lwc1        $f1, -0x3404($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X3404);
    // 0x0021B6AC: sub.s       $f21, $f2, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x0021B6B0: j           L_0021B88C
    // 0x0021B6B4: swc1        $f1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
        goto L_0021B88C;
    // 0x0021B6B4: swc1        $f1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
L_0021B6B8:
    // 0x0021B6B8: addiu       $v0, $zero, 0x82
    ctx->r2 = ADD32(0, 0X82);
    // 0x0021B6BC: bne         $a1, $v0, L_0021B748
    if (ctx->r5 != ctx->r2) {
        // 0x0021B6C0: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_0021B748;
    }
    // 0x0021B6C0: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x0021B6C4: lui         $a0, 0x8888
    ctx->r4 = S32(0X8888 << 16);
    // 0x0021B6C8: ori         $a0, $a0, 0x8889
    ctx->r4 = ctx->r4 | 0X8889;
    // 0x0021B6CC: multu       $t0, $a0
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0021B6D0: addiu       $a1, $t0, 0xC
    ctx->r5 = ADD32(ctx->r8, 0XC);
    // 0x0021B6D4: swc1        $f0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f0.u32l;
    // 0x0021B6D8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021B6DC: lwc1        $f0, 0x5B50($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5B50);
    // 0x0021B6E0: mfhi        $t1
    ctx->r9 = hi;
    // 0x0021B6E4: srl         $v0, $t1, 6
    ctx->r2 = S32(U32(ctx->r9) >> 6);
    // 0x0021B6E8: sll         $v1, $v0, 4
    ctx->r3 = S32(ctx->r2 << 4);
    // 0x0021B6EC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x0021B6F0: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x0021B6F4: multu       $a1, $a0
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0021B6F8: subu        $v1, $t0, $v1
    ctx->r3 = SUB32(ctx->r8, ctx->r3);
    // 0x0021B6FC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0021B700: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0021B704: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0021B708: lwc1        $f1, -0x3404($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X3404);
    // 0x0021B70C: sub.s       $f21, $f1, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0021B710: sw          $zero, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = 0;
    // 0x0021B714: mfhi        $t1
    ctx->r9 = hi;
    // 0x0021B718: srl         $a0, $t1, 6
    ctx->r4 = S32(U32(ctx->r9) >> 6);
    // 0x0021B71C: sll         $v0, $a0, 4
    ctx->r2 = S32(ctx->r4 << 4);
    // 0x0021B720: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x0021B724: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0021B728: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x0021B72C: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x0021B730: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0021B734: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x0021B738: lwc1        $f2, -0x3404($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X3404);
    // 0x0021B73C: add.s       $f21, $f21, $f21
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f21.fl = ctx->f21.fl + ctx->f21.fl;
    // 0x0021B740: j           L_0021B88C
    // 0x0021B744: swc1        $f2, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f2.u32l;
        goto L_0021B88C;
    // 0x0021B744: swc1        $f2, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f2.u32l;
L_0021B748:
    // 0x0021B748: bne         $a1, $v0, L_0021B838
    if (ctx->r5 != ctx->r2) {
        // 0x0021B74C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0021B838;
    }
    // 0x0021B74C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0021B750: lui         $a3, 0x8888
    ctx->r7 = S32(0X8888 << 16);
    // 0x0021B754: ori         $a3, $a3, 0x8889
    ctx->r7 = ctx->r7 | 0X8889;
    // 0x0021B758: addiu       $a0, $t0, 0xC
    ctx->r4 = ADD32(ctx->r8, 0XC);
    // 0x0021B75C: multu       $a0, $a3
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0021B760: addiu       $a2, $t0, 0x1E
    ctx->r6 = ADD32(ctx->r8, 0X1E);
    // 0x0021B764: mfhi        $t1
    ctx->r9 = hi;
    // 0x0021B768: srl         $v1, $t1, 6
    ctx->r3 = S32(U32(ctx->r9) >> 6);
    // 0x0021B76C: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x0021B770: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0021B774: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0021B778: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x0021B77C: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x0021B780: multu       $a2, $a3
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0021B784: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0021B788: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x0021B78C: lwc1        $f0, -0x3404($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X3404);
    // 0x0021B790: addiu       $a1, $t0, 0x2A
    ctx->r5 = ADD32(ctx->r8, 0X2A);
    // 0x0021B794: swc1        $f0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f0.u32l;
    // 0x0021B798: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021B79C: lwc1        $f0, 0x5B54($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5B54);
    // 0x0021B7A0: mfhi        $t1
    ctx->r9 = hi;
    // 0x0021B7A4: srl         $v1, $t1, 6
    ctx->r3 = S32(U32(ctx->r9) >> 6);
    // 0x0021B7A8: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x0021B7AC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0021B7B0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0021B7B4: multu       $a1, $a3
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0021B7B8: subu        $a2, $a2, $v0
    ctx->r6 = SUB32(ctx->r6, ctx->r2);
    // 0x0021B7BC: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x0021B7C0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0021B7C4: addu        $at, $at, $a2
    ctx->r1 = ADD32(ctx->r1, ctx->r6);
    // 0x0021B7C8: lwc1        $f3, -0x3404($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X3404);
    // 0x0021B7CC: sub.s       $f21, $f3, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f3.fl - ctx->f0.fl;
    // 0x0021B7D0: addiu       $a0, $t0, 0x6E
    ctx->r4 = ADD32(ctx->r8, 0X6E);
    // 0x0021B7D4: mfhi        $t1
    ctx->r9 = hi;
    // 0x0021B7D8: srl         $v1, $t1, 6
    ctx->r3 = S32(U32(ctx->r9) >> 6);
    // 0x0021B7DC: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x0021B7E0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0021B7E4: multu       $a0, $a3
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0021B7E8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0021B7EC: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x0021B7F0: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x0021B7F4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0021B7F8: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x0021B7FC: lwc1        $f1, -0x3404($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X3404);
    // 0x0021B800: mfhi        $t1
    ctx->r9 = hi;
    // 0x0021B804: srl         $v1, $t1, 6
    ctx->r3 = S32(U32(ctx->r9) >> 6);
    // 0x0021B808: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x0021B80C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0021B810: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0021B814: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x0021B818: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x0021B81C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0021B820: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x0021B824: lwc1        $f2, -0x3404($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X3404);
    // 0x0021B828: add.s       $f21, $f21, $f21
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f21.fl = ctx->f21.fl + ctx->f21.fl;
    // 0x0021B82C: swc1        $f1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0021B830: j           L_0021B88C
    // 0x0021B834: swc1        $f2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f2.u32l;
        goto L_0021B88C;
    // 0x0021B834: swc1        $f2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f2.u32l;
L_0021B838:
    // 0x0021B838: bne         $a1, $v0, L_0021B93C
    if (ctx->r5 != ctx->r2) {
        // 0x0021B83C: addiu       $v1, $t0, 0x46
        ctx->r3 = ADD32(ctx->r8, 0X46);
            goto L_0021B93C;
    }
    // 0x0021B83C: addiu       $v1, $t0, 0x46
    ctx->r3 = ADD32(ctx->r8, 0X46);
    // 0x0021B840: lui         $v0, 0x8888
    ctx->r2 = S32(0X8888 << 16);
    // 0x0021B844: ori         $v0, $v0, 0x8889
    ctx->r2 = ctx->r2 | 0X8889;
    // 0x0021B848: multu       $v1, $v0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0021B84C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021B850: lwc1        $f0, 0x5B58($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5B58);
    // 0x0021B854: mfhi        $t1
    ctx->r9 = hi;
    // 0x0021B858: srl         $a0, $t1, 6
    ctx->r4 = S32(U32(ctx->r9) >> 6);
    // 0x0021B85C: sll         $v0, $a0, 4
    ctx->r2 = S32(ctx->r4 << 4);
    // 0x0021B860: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x0021B864: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0021B868: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x0021B86C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0021B870: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0021B874: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0021B878: lwc1        $f1, -0x3404($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X3404);
    // 0x0021B87C: sub.s       $f21, $f1, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0021B880: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021B884: lwc1        $f0, 0x5B5C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5B5C);
    // 0x0021B888: mul.s       $f21, $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
L_0021B88C:
    // 0x0021B88C: jal         0x0020F040
    // 0x0021B890: addiu       $a0, $sp, 0xA8
    ctx->r4 = ADD32(ctx->r29, 0XA8);
    func_0020F040(rdram, ctx);
        goto after_0;
    // 0x0021B890: addiu       $a0, $sp, 0xA8
    ctx->r4 = ADD32(ctx->r29, 0XA8);
    after_0:
    // 0x0021B894: lwc1        $f0, 0x30($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X30);
    // 0x0021B898: addiu       $s1, $sp, 0x58
    ctx->r17 = ADD32(ctx->r29, 0X58);
    // 0x0021B89C: swc1        $f0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f0.u32l;
    // 0x0021B8A0: lwc1        $f0, 0x34($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X34);
    // 0x0021B8A4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0021B8A8: swc1        $f0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f0.u32l;
    // 0x0021B8AC: lwc1        $f0, 0x38($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X38);
    // 0x0021B8B0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0021B8B4: jal         0x0020FF80
    // 0x0021B8B8: swc1        $f0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f0.u32l;
    func_0020FF80(rdram, ctx);
        goto after_1;
    // 0x0021B8B8: swc1        $f0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x0021B8BC: addiu       $s0, $sp, 0x98
    ctx->r16 = ADD32(ctx->r29, 0X98);
    // 0x0021B8C0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021B8C4: lwc1        $f20, 0x5B60($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X5B60);
    // 0x0021B8C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0021B8CC: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x0021B8D0: jal         0x0020EF60
    // 0x0021B8D4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0020EF60(rdram, ctx);
        goto after_2;
    // 0x0021B8D4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0021B8D8: lw          $a1, 0x98($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X98);
    // 0x0021B8DC: lw          $a2, 0x9C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X9C);
    // 0x0021B8E0: lw          $a3, 0xA0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA0);
    // 0x0021B8E4: jal         0x00210318
    // 0x0021B8E8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00210318(rdram, ctx);
        goto after_3;
    // 0x0021B8E8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x0021B8EC: lwc1        $f0, 0xB0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x0021B8F0: mfc1        $a1, $f21
    ctx->r5 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x0021B8F4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x0021B8F8: lw          $a2, 0xA8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA8);
    // 0x0021B8FC: lw          $a3, 0xAC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XAC);
    // 0x0021B900: jal         0x0020FCC4
    // 0x0021B904: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    func_0020FCC4(rdram, ctx);
        goto after_4;
    // 0x0021B904: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_4:
    // 0x0021B908: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0021B90C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0021B910: jal         0x0020C618
    // 0x0021B914: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    func_0020C618(rdram, ctx);
        goto after_5;
    // 0x0021B914: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_5:
    // 0x0021B918: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0021B91C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x0021B920: jal         0x0020EF60
    // 0x0021B924: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_6;
    // 0x0021B924: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_6:
    // 0x0021B928: lw          $a1, 0x98($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X98);
    // 0x0021B92C: lw          $a2, 0x9C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X9C);
    // 0x0021B930: lw          $a3, 0xA0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA0);
    // 0x0021B934: jal         0x00210318
    // 0x0021B938: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00210318(rdram, ctx);
        goto after_7;
    // 0x0021B938: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_7:
L_0021B93C:
    // 0x0021B93C: lw          $ra, 0xC4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XC4);
    // 0x0021B940: lw          $s2, 0xC0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC0);
    // 0x0021B944: lw          $s1, 0xBC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XBC);
    // 0x0021B948: lw          $s0, 0xB8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XB8);
    // 0x0021B94C: ldc1        $f21, 0xD0($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0XD0);
    // 0x0021B950: ldc1        $f20, 0xC8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XC8);
    // 0x0021B954: jr          $ra
    // 0x0021B958: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    return;
    // 0x0021B958: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
;}
RECOMP_FUNC void func_0045353C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_0027F64C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027F64C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0027F650: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0027F654: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0027F658: jal         0x0020B5B8
    // 0x0027F65C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_0020B5B8(rdram, ctx);
        goto after_0;
    // 0x0027F65C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x0027F660: lui         $a2, 0xE300
    ctx->r6 = S32(0XE300 << 16);
    // 0x0027F664: ori         $a2, $a2, 0xA01
    ctx->r6 = ctx->r6 | 0XA01;
    // 0x0027F668: lui         $t0, 0xFCFF
    ctx->r8 = S32(0XFCFF << 16);
    // 0x0027F66C: ori         $t0, $t0, 0xFFFF
    ctx->r8 = ctx->r8 | 0XFFFF;
    // 0x0027F670: lui         $a3, 0xFFFE
    ctx->r7 = S32(0XFFFE << 16);
    // 0x0027F674: ori         $a3, $a3, 0x793C
    ctx->r7 = ctx->r7 | 0X793C;
    // 0x0027F678: lui         $t1, 0xE200
    ctx->r9 = S32(0XE200 << 16);
    // 0x0027F67C: ori         $t1, $t1, 0x1C
    ctx->r9 = ctx->r9 | 0X1C;
    // 0x0027F680: lui         $t2, 0x1
    ctx->r10 = S32(0X1 << 16);
    // 0x0027F684: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x0027F688: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x0027F68C: ori         $t2, $t2, 0x1
    ctx->r10 = ctx->r10 | 0X1;
    // 0x0027F690: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x0027F694: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027F698: lwc1        $f1, -0x65A8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X65A8);
    // 0x0027F69C: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x0027F6A0: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x0027F6A4: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x0027F6A8: lwc1        $f2, 0x290($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X290);
    // 0x0027F6AC: lwc1        $f3, 0x294($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0X294);
    // 0x0027F6B0: lwc1        $f6, 0x288($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X288);
    // 0x0027F6B4: lwc1        $f5, 0x28C($s0)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r16, 0X28C);
    // 0x0027F6B8: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x0027F6BC: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0027F6C0: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x0027F6C4: addiu       $a1, $v1, 0x8
    ctx->r5 = ADD32(ctx->r3, 0X8);
    // 0x0027F6C8: lui         $v0, 0x30
    ctx->r2 = S32(0X30 << 16);
    // 0x0027F6CC: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x0027F6D0: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x0027F6D4: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x0027F6D8: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x0027F6DC: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0027F6E0: sw          $t0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r8;
    // 0x0027F6E4: sw          $a3, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r7;
    // 0x0027F6E8: addiu       $a1, $v1, 0x18
    ctx->r5 = ADD32(ctx->r3, 0X18);
    // 0x0027F6EC: addiu       $a2, $v1, 0x20
    ctx->r6 = ADD32(ctx->r3, 0X20);
    // 0x0027F6F0: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x0027F6F4: sw          $t1, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r9;
    // 0x0027F6F8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x0027F6FC: lui         $v0, 0xF700
    ctx->r2 = S32(0XF700 << 16);
    // 0x0027F700: add.s       $f0, $f2, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x0027F704: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    // 0x0027F708: sw          $v0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r2;
    // 0x0027F70C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0027F710: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027F714: lwc1        $f1, -0x65A4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X65A4);
    // 0x0027F718: addiu       $v1, $v1, 0x28
    ctx->r3 = ADD32(ctx->r3, 0X28);
    // 0x0027F71C: sw          $t2, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r10;
    // 0x0027F720: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0027F724: nop

    // 0x0027F728: bc1t        L_0027F740
    if (c1cs) {
        // 0x0027F72C: sw          $v1, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r3;
            goto L_0027F740;
    }
    // 0x0027F72C: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x0027F730: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0027F734: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0027F738: j           L_0027F754
    // 0x0027F73C: nop

        goto L_0027F754;
    // 0x0027F73C: nop

L_0027F740:
    // 0x0027F740: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0027F744: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0027F748: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0027F74C: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0027F750: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
L_0027F754:
    // 0x0027F754: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027F758: lwc1        $f0, -0x65A0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X65A0);
    // 0x0027F75C: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x0027F760: c.le.s      $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f0.fl <= ctx->f3.fl;
    // 0x0027F764: nop

    // 0x0027F768: bc1t        L_0027F780
    if (c1cs) {
        // 0x0027F76C: sll         $a0, $v0, 14
        ctx->r4 = S32(ctx->r2 << 14);
            goto L_0027F780;
    }
    // 0x0027F76C: sll         $a0, $v0, 14
    ctx->r4 = S32(ctx->r2 << 14);
    // 0x0027F770: trunc.w.s   $f7, $f3
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 3);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f3.fl);
    // 0x0027F774: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0027F778: j           L_0027F798
    // 0x0027F77C: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
        goto L_0027F798;
    // 0x0027F77C: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_0027F780:
    // 0x0027F780: sub.s       $f0, $f3, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f3.fl - ctx->f0.fl;
    // 0x0027F784: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0027F788: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0027F78C: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0027F790: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0027F794: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_0027F798:
    // 0x0027F798: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0027F79C: lui         $v1, 0xF600
    ctx->r3 = S32(0XF600 << 16);
    // 0x0027F7A0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0027F7A4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027F7A8: lwc1        $f0, -0x659C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X659C);
    // 0x0027F7AC: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x0027F7B0: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x0027F7B4: nop

    // 0x0027F7B8: bc1t        L_0027F7D0
    if (c1cs) {
        // 0x0027F7BC: sw          $v0, 0x0($a2)
        MEM_W(0X0, ctx->r6) = ctx->r2;
            goto L_0027F7D0;
    }
    // 0x0027F7BC: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x0027F7C0: trunc.w.s   $f7, $f2
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 2);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f2.fl);
    // 0x0027F7C4: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0027F7C8: j           L_0027F7F0
    // 0x0027F7CC: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
        goto L_0027F7F0;
    // 0x0027F7CC: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_0027F7D0:
    // 0x0027F7D0: sub.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x0027F7D4: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0027F7D8: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0027F7DC: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0027F7E0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0027F7E4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027F7E8: lwc1        $f0, -0x6598($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6598);
    // 0x0027F7EC: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_0027F7F0:
    // 0x0027F7F0: c.le.s      $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f0.fl <= ctx->f3.fl;
    // 0x0027F7F4: nop

    // 0x0027F7F8: bc1t        L_0027F810
    if (c1cs) {
        // 0x0027F7FC: sll         $a0, $v0, 14
        ctx->r4 = S32(ctx->r2 << 14);
            goto L_0027F810;
    }
    // 0x0027F7FC: sll         $a0, $v0, 14
    ctx->r4 = S32(ctx->r2 << 14);
    // 0x0027F800: trunc.w.s   $f7, $f3
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 3);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f3.fl);
    // 0x0027F804: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0027F808: j           L_0027F828
    // 0x0027F80C: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
        goto L_0027F828;
    // 0x0027F80C: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_0027F810:
    // 0x0027F810: sub.s       $f0, $f3, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f3.fl - ctx->f0.fl;
    // 0x0027F814: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0027F818: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0027F81C: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0027F820: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0027F824: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_0027F828:
    // 0x0027F828: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0027F82C: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x0027F830: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x0027F834: addiu       $v1, $v1, -0x71DC
    ctx->r3 = ADD32(ctx->r3, -0X71DC);
    // 0x0027F838: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    // 0x0027F83C: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x0027F840: add.s       $f1, $f2, $f6
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f1.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x0027F844: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027F848: lwc1        $f0, -0x6594($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6594);
    // 0x0027F84C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027F850: lwc1        $f4, -0x6590($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6590);
    // 0x0027F854: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0027F858: addiu       $v0, $a1, 0x8
    ctx->r2 = ADD32(ctx->r5, 0X8);
    // 0x0027F85C: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x0027F860: nop

    // 0x0027F864: bc1t        L_0027F87C
    if (c1cs) {
        // 0x0027F868: sw          $v0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r2;
            goto L_0027F87C;
    }
    // 0x0027F868: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0027F86C: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0027F870: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0027F874: j           L_0027F894
    // 0x0027F878: add.s       $f0, $f3, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f3.fl + ctx->f5.fl;
        goto L_0027F894;
    // 0x0027F878: add.s       $f0, $f3, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f3.fl + ctx->f5.fl;
L_0027F87C:
    // 0x0027F87C: sub.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x0027F880: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0027F884: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0027F888: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0027F88C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0027F890: add.s       $f0, $f3, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f3.fl + ctx->f5.fl;
L_0027F894:
    // 0x0027F894: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027F898: lwc1        $f1, -0x658C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X658C);
    // 0x0027F89C: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x0027F8A0: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0027F8A4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027F8A8: lwc1        $f1, -0x6588($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X6588);
    // 0x0027F8AC: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0027F8B0: nop

    // 0x0027F8B4: bc1t        L_0027F8CC
    if (c1cs) {
        // 0x0027F8B8: sll         $a0, $v0, 14
        ctx->r4 = S32(ctx->r2 << 14);
            goto L_0027F8CC;
    }
    // 0x0027F8B8: sll         $a0, $v0, 14
    ctx->r4 = S32(ctx->r2 << 14);
    // 0x0027F8BC: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0027F8C0: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0027F8C4: j           L_0027F8E4
    // 0x0027F8C8: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
        goto L_0027F8E4;
    // 0x0027F8C8: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_0027F8CC:
    // 0x0027F8CC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0027F8D0: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0027F8D4: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0027F8D8: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0027F8DC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0027F8E0: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_0027F8E4:
    // 0x0027F8E4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0027F8E8: lui         $v1, 0xF600
    ctx->r3 = S32(0XF600 << 16);
    // 0x0027F8EC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0027F8F0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027F8F4: lwc1        $f0, -0x6584($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6584);
    // 0x0027F8F8: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x0027F8FC: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x0027F900: nop

    // 0x0027F904: bc1t        L_0027F91C
    if (c1cs) {
        // 0x0027F908: sw          $v0, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r2;
            goto L_0027F91C;
    }
    // 0x0027F908: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0027F90C: trunc.w.s   $f7, $f2
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 2);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f2.fl);
    // 0x0027F910: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0027F914: j           L_0027F934
    // 0x0027F918: add.s       $f0, $f3, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f3.fl + ctx->f5.fl;
        goto L_0027F934;
    // 0x0027F918: add.s       $f0, $f3, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f3.fl + ctx->f5.fl;
L_0027F91C:
    // 0x0027F91C: sub.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x0027F920: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0027F924: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0027F928: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0027F92C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0027F930: add.s       $f0, $f3, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f3.fl + ctx->f5.fl;
L_0027F934:
    // 0x0027F934: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027F938: lwc1        $f1, -0x6580($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X6580);
    // 0x0027F93C: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x0027F940: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0027F944: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027F948: lwc1        $f1, -0x657C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X657C);
    // 0x0027F94C: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0027F950: nop

    // 0x0027F954: bc1t        L_0027F96C
    if (c1cs) {
        // 0x0027F958: sll         $a0, $v0, 14
        ctx->r4 = S32(ctx->r2 << 14);
            goto L_0027F96C;
    }
    // 0x0027F958: sll         $a0, $v0, 14
    ctx->r4 = S32(ctx->r2 << 14);
    // 0x0027F95C: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0027F960: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0027F964: j           L_0027F984
    // 0x0027F968: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
        goto L_0027F984;
    // 0x0027F968: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_0027F96C:
    // 0x0027F96C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0027F970: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0027F974: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0027F978: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0027F97C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0027F980: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_0027F984:
    // 0x0027F984: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0027F988: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x0027F98C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x0027F990: addiu       $v1, $v1, -0x71DC
    ctx->r3 = ADD32(ctx->r3, -0X71DC);
    // 0x0027F994: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x0027F998: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x0027F99C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027F9A0: lwc1        $f0, -0x6578($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6578);
    // 0x0027F9A4: addiu       $v0, $a1, 0x8
    ctx->r2 = ADD32(ctx->r5, 0X8);
    // 0x0027F9A8: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x0027F9AC: nop

    // 0x0027F9B0: bc1t        L_0027F9C8
    if (c1cs) {
        // 0x0027F9B4: sw          $v0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r2;
            goto L_0027F9C8;
    }
    // 0x0027F9B4: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0027F9B8: trunc.w.s   $f7, $f2
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 2);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f2.fl);
    // 0x0027F9BC: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0027F9C0: j           L_0027F9E0
    // 0x0027F9C4: add.s       $f0, $f3, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f3.fl + ctx->f5.fl;
        goto L_0027F9E0;
    // 0x0027F9C4: add.s       $f0, $f3, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f3.fl + ctx->f5.fl;
L_0027F9C8:
    // 0x0027F9C8: sub.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x0027F9CC: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0027F9D0: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0027F9D4: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0027F9D8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0027F9DC: add.s       $f0, $f3, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f3.fl + ctx->f5.fl;
L_0027F9E0:
    // 0x0027F9E0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027F9E4: lwc1        $f1, -0x6574($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X6574);
    // 0x0027F9E8: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x0027F9EC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0027F9F0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027F9F4: lwc1        $f1, -0x6570($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X6570);
    // 0x0027F9F8: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0027F9FC: nop

    // 0x0027FA00: bc1t        L_0027FA18
    if (c1cs) {
        // 0x0027FA04: sll         $a0, $v0, 14
        ctx->r4 = S32(ctx->r2 << 14);
            goto L_0027FA18;
    }
    // 0x0027FA04: sll         $a0, $v0, 14
    ctx->r4 = S32(ctx->r2 << 14);
    // 0x0027FA08: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0027FA0C: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0027FA10: j           L_0027FA30
    // 0x0027FA14: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
        goto L_0027FA30;
    // 0x0027FA14: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_0027FA18:
    // 0x0027FA18: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0027FA1C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0027FA20: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0027FA24: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0027FA28: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0027FA2C: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_0027FA30:
    // 0x0027FA30: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0027FA34: lui         $v1, 0xF600
    ctx->r3 = S32(0XF600 << 16);
    // 0x0027FA38: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0027FA3C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027FA40: lwc1        $f0, -0x656C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X656C);
    // 0x0027FA44: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x0027FA48: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x0027FA4C: nop

    // 0x0027FA50: bc1t        L_0027FA68
    if (c1cs) {
        // 0x0027FA54: sw          $v0, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r2;
            goto L_0027FA68;
    }
    // 0x0027FA54: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0027FA58: trunc.w.s   $f7, $f2
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 2);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f2.fl);
    // 0x0027FA5C: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0027FA60: j           L_0027FA88
    // 0x0027FA64: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
        goto L_0027FA88;
    // 0x0027FA64: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_0027FA68:
    // 0x0027FA68: sub.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x0027FA6C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0027FA70: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0027FA74: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0027FA78: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0027FA7C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027FA80: lwc1        $f0, -0x6568($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6568);
    // 0x0027FA84: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_0027FA88:
    // 0x0027FA88: c.le.s      $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f0.fl <= ctx->f3.fl;
    // 0x0027FA8C: nop

    // 0x0027FA90: bc1t        L_0027FAA8
    if (c1cs) {
        // 0x0027FA94: sll         $a0, $v0, 14
        ctx->r4 = S32(ctx->r2 << 14);
            goto L_0027FAA8;
    }
    // 0x0027FA94: sll         $a0, $v0, 14
    ctx->r4 = S32(ctx->r2 << 14);
    // 0x0027FA98: trunc.w.s   $f7, $f3
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 3);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f3.fl);
    // 0x0027FA9C: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0027FAA0: j           L_0027FAC0
    // 0x0027FAA4: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
        goto L_0027FAC0;
    // 0x0027FAA4: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_0027FAA8:
    // 0x0027FAA8: sub.s       $f0, $f3, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f3.fl - ctx->f0.fl;
    // 0x0027FAAC: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0027FAB0: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0027FAB4: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0027FAB8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0027FABC: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_0027FAC0:
    // 0x0027FAC0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0027FAC4: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x0027FAC8: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x0027FACC: addiu       $v1, $v1, -0x71DC
    ctx->r3 = ADD32(ctx->r3, -0X71DC);
    // 0x0027FAD0: add.s       $f0, $f2, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x0027FAD4: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x0027FAD8: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x0027FADC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027FAE0: lwc1        $f1, -0x6564($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X6564);
    // 0x0027FAE4: addiu       $v0, $a1, 0x8
    ctx->r2 = ADD32(ctx->r5, 0X8);
    // 0x0027FAE8: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0027FAEC: nop

    // 0x0027FAF0: bc1t        L_0027FB08
    if (c1cs) {
        // 0x0027FAF4: sw          $v0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r2;
            goto L_0027FB08;
    }
    // 0x0027FAF4: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0027FAF8: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0027FAFC: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0027FB00: j           L_0027FB20
    // 0x0027FB04: add.s       $f0, $f3, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f3.fl + ctx->f5.fl;
        goto L_0027FB20;
    // 0x0027FB04: add.s       $f0, $f3, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f3.fl + ctx->f5.fl;
L_0027FB08:
    // 0x0027FB08: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0027FB0C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0027FB10: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0027FB14: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0027FB18: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0027FB1C: add.s       $f0, $f3, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f3.fl + ctx->f5.fl;
L_0027FB20:
    // 0x0027FB20: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027FB24: lwc1        $f1, -0x6560($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X6560);
    // 0x0027FB28: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x0027FB2C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0027FB30: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027FB34: lwc1        $f1, -0x655C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X655C);
    // 0x0027FB38: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0027FB3C: nop

    // 0x0027FB40: bc1t        L_0027FB58
    if (c1cs) {
        // 0x0027FB44: sll         $a0, $v0, 14
        ctx->r4 = S32(ctx->r2 << 14);
            goto L_0027FB58;
    }
    // 0x0027FB44: sll         $a0, $v0, 14
    ctx->r4 = S32(ctx->r2 << 14);
    // 0x0027FB48: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0027FB4C: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0027FB50: j           L_0027FB70
    // 0x0027FB54: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
        goto L_0027FB70;
    // 0x0027FB54: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_0027FB58:
    // 0x0027FB58: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0027FB5C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0027FB60: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0027FB64: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0027FB68: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0027FB6C: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_0027FB70:
    // 0x0027FB70: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0027FB74: lui         $v1, 0xF600
    ctx->r3 = S32(0XF600 << 16);
    // 0x0027FB78: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0027FB7C: add.s       $f1, $f2, $f6
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f1.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x0027FB80: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027FB84: lwc1        $f0, -0x6558($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6558);
    // 0x0027FB88: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027FB8C: lwc1        $f2, -0x6554($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X6554);
    // 0x0027FB90: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0027FB94: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x0027FB98: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x0027FB9C: nop

    // 0x0027FBA0: bc1t        L_0027FBB8
    if (c1cs) {
        // 0x0027FBA4: sw          $v0, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r2;
            goto L_0027FBB8;
    }
    // 0x0027FBA4: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0027FBA8: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0027FBAC: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0027FBB0: j           L_0027FBCC
    // 0x0027FBB4: nop

        goto L_0027FBCC;
    // 0x0027FBB4: nop

L_0027FBB8:
    // 0x0027FBB8: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x0027FBBC: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0027FBC0: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0027FBC4: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0027FBC8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
L_0027FBCC:
    // 0x0027FBCC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027FBD0: lwc1        $f0, -0x6550($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6550);
    // 0x0027FBD4: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x0027FBD8: c.le.s      $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f0.fl <= ctx->f3.fl;
    // 0x0027FBDC: nop

    // 0x0027FBE0: bc1t        L_0027FBF8
    if (c1cs) {
        // 0x0027FBE4: sll         $a0, $v0, 14
        ctx->r4 = S32(ctx->r2 << 14);
            goto L_0027FBF8;
    }
    // 0x0027FBE4: sll         $a0, $v0, 14
    ctx->r4 = S32(ctx->r2 << 14);
    // 0x0027FBE8: trunc.w.s   $f7, $f3
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 3);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f3.fl);
    // 0x0027FBEC: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0027FBF0: j           L_0027FC10
    // 0x0027FBF4: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
        goto L_0027FC10;
    // 0x0027FBF4: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_0027FBF8:
    // 0x0027FBF8: sub.s       $f0, $f3, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f3.fl - ctx->f0.fl;
    // 0x0027FBFC: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0027FC00: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0027FC04: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0027FC08: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0027FC0C: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_0027FC10:
    // 0x0027FC10: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0027FC14: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x0027FC18: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x0027FC1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0027FC20: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0027FC24: jr          $ra
    // 0x0027FC28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0027FC28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00267DB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00267DB0: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00267DB4: jr          $ra
    // 0x00267DB8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    return;
    // 0x00267DB8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
;}
RECOMP_FUNC void func_0040DE68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040DE68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0040DE6C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0040DE70: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0040DE74: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0040DE78: addiu       $v0, $v0, 0x1A90
    ctx->r2 = ADD32(ctx->r2, 0X1A90);
    // 0x0040DE7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0040DE80: sw          $v0, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r2;
    // 0x0040DE84: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x0040DE88: addiu       $v0, $v0, -0x2090
    ctx->r2 = ADD32(ctx->r2, -0X2090);
    // 0x0040DE8C: sw          $v0, 0xF0($a1)
    MEM_W(0XF0, ctx->r5) = ctx->r2;
    // 0x0040DE90: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x0040DE94: addiu       $v0, $v0, -0x224C
    ctx->r2 = ADD32(ctx->r2, -0X224C);
    // 0x0040DE98: sw          $v0, 0xF8($a1)
    MEM_W(0XF8, ctx->r5) = ctx->r2;
    // 0x0040DE9C: lui         $v0, 0x26
    ctx->r2 = S32(0X26 << 16);
    // 0x0040DEA0: addiu       $v0, $v0, -0x1B48
    ctx->r2 = ADD32(ctx->r2, -0X1B48);
    // 0x0040DEA4: sw          $v0, 0x108($a1)
    MEM_W(0X108, ctx->r5) = ctx->r2;
    // 0x0040DEA8: lhu         $v1, 0xB8($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XB8);
    // 0x0040DEAC: addiu       $v0, $zero, 0x456
    ctx->r2 = ADD32(0, 0X456);
    // 0x0040DEB0: bne         $v1, $v0, L_0040DEC8
    if (ctx->r3 != ctx->r2) {
        // 0x0040DEB4: nop
    
            goto L_0040DEC8;
    }
    // 0x0040DEB4: nop

    // 0x0040DEB8: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x0040DEBC: addiu       $v0, $v0, -0x1160
    ctx->r2 = ADD32(ctx->r2, -0X1160);
    // 0x0040DEC0: j           L_0040DED4
    // 0x0040DEC4: sw          $v0, 0xF4($a1)
    MEM_W(0XF4, ctx->r5) = ctx->r2;
        goto L_0040DED4;
    // 0x0040DEC4: sw          $v0, 0xF4($a1)
    MEM_W(0XF4, ctx->r5) = ctx->r2;
L_0040DEC8:
    // 0x0040DEC8: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x0040DECC: addiu       $v0, $v0, -0x1250
    ctx->r2 = ADD32(ctx->r2, -0X1250);
    // 0x0040DED0: sw          $v0, 0xF4($a1)
    MEM_W(0XF4, ctx->r5) = ctx->r2;
L_0040DED4:
    // 0x0040DED4: lui         $v1, 0xEFFF
    ctx->r3 = S32(0XEFFF << 16);
    // 0x0040DED8: sw          $zero, 0x10C($a1)
    MEM_W(0X10C, ctx->r5) = 0;
    // 0x0040DEDC: sw          $zero, 0x118($a1)
    MEM_W(0X118, ctx->r5) = 0;
    // 0x0040DEE0: sw          $zero, 0x11C($a1)
    MEM_W(0X11C, ctx->r5) = 0;
    // 0x0040DEE4: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x0040DEE8: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0040DEEC: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0040DEF0: and         $a0, $v0, $v1
    ctx->r4 = ctx->r2 & ctx->r3;
    // 0x0040DEF4: lhu         $v1, 0xB8($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XB8);
    // 0x0040DEF8: addiu       $v0, $zero, 0x456
    ctx->r2 = ADD32(0, 0X456);
    // 0x0040DEFC: bne         $v1, $v0, L_0040DF10
    if (ctx->r3 != ctx->r2) {
        // 0x0040DF00: sw          $a0, 0xD4($s0)
        MEM_W(0XD4, ctx->r16) = ctx->r4;
            goto L_0040DF10;
    }
    // 0x0040DF00: sw          $a0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r4;
    // 0x0040DF04: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x0040DF08: j           L_0040DF1C
    // 0x0040DF0C: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
        goto L_0040DF1C;
    // 0x0040DF0C: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
L_0040DF10:
    // 0x0040DF10: lui         $v0, 0xFFFD
    ctx->r2 = S32(0XFFFD << 16);
    // 0x0040DF14: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x0040DF18: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
L_0040DF1C:
    // 0x0040DF1C: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x0040DF20: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0040DF24: lw          $v0, -0x6770($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6770);
    // 0x0040DF28: beq         $v0, $zero, L_0040DF44
    if (ctx->r2 == 0) {
        // 0x0040DF2C: lui         $v1, 0x6000
        ctx->r3 = S32(0X6000 << 16);
            goto L_0040DF44;
    }
    // 0x0040DF2C: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x0040DF30: sw          $v0, 0x80($a1)
    MEM_W(0X80, ctx->r5) = ctx->r2;
    // 0x0040DF34: sw          $v0, 0x88($a1)
    MEM_W(0X88, ctx->r5) = ctx->r2;
    // 0x0040DF38: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x0040DF3C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0040DF40: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
L_0040DF44:
    // 0x0040DF44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0040DF48: jal         0x00243414
    // 0x0040DF4C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0040DF4C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x0040DF50: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0040DF54: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x0040DF58: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0040DF5C: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x0040DF60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0040DF64: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0040DF68: jr          $ra
    // 0x0040DF6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040DF6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00297BCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00297BCC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00297BD0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00297BD4: lwc1        $f0, -0x5838($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5838);
    // 0x00297BD8: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
L_00297BDC:
    // 0x00297BDC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00297BE0: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_00297BE4:
    // 0x00297BE4: bnel        $a2, $v1, L_00297BF0
    if (ctx->r6 != ctx->r3) {
        // 0x00297BE8: sw          $zero, 0x0($a1)
        MEM_W(0X0, ctx->r5) = 0;
            goto L_00297BF0;
    }
    goto skip_0;
    // 0x00297BE8: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    skip_0:
    // 0x00297BEC: swc1        $f0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f0.u32l;
L_00297BF0:
    // 0x00297BF0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00297BF4: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x00297BF8: bne         $v0, $zero, L_00297BE4
    if (ctx->r2 != 0) {
        // 0x00297BFC: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_00297BE4;
    }
    // 0x00297BFC: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x00297C00: addiu       $a3, $a3, 0x14
    ctx->r7 = ADD32(ctx->r7, 0X14);
    // 0x00297C04: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x00297C08: slti        $v0, $a2, 0x4
    ctx->r2 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    // 0x00297C0C: bne         $v0, $zero, L_00297BDC
    if (ctx->r2 != 0) {
        // 0x00297C10: addiu       $a0, $a0, 0x10
        ctx->r4 = ADD32(ctx->r4, 0X10);
            goto L_00297BDC;
    }
    // 0x00297C10: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x00297C14: jr          $ra
    // 0x00297C18: nop

    return;
    // 0x00297C18: nop

;}
RECOMP_FUNC void func_0041778C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041778C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00417790: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00417794: addiu       $a0, $a0, -0x5528
    ctx->r4 = ADD32(ctx->r4, -0X5528);
    // 0x00417798: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041779C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x004177A0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x004177A4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x004177A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004177AC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x004177B0: sw          $zero, -0x531C($at)
    MEM_W(-0X531C, ctx->r1) = 0;
    // 0x004177B4: lb          $v1, 0x2A($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X2A);
    // 0x004177B8: addiu       $a1, $a0, 0x1D8
    ctx->r5 = ADD32(ctx->r4, 0X1D8);
    // 0x004177BC: sw          $v0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r2;
    // 0x004177C0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x004177C4: sw          $zero, -0x5334($at)
    MEM_W(-0X5334, ctx->r1) = 0;
    // 0x004177C8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x004177CC: sw          $zero, -0x5324($at)
    MEM_W(-0X5324, ctx->r1) = 0;
    // 0x004177D0: lb          $v0, 0x2B($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X2B);
    // 0x004177D4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004177D8: lwc1        $f1, 0xEA8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XEA8);
    // 0x004177DC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x004177E0: mtc1        $v1, $f0
    ctx->f0.u32l = ctx->r3;
    // 0x004177E4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x004177E8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x004177EC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x004177F0: sw          $zero, -0x5320($at)
    MEM_W(-0X5320, ctx->r1) = 0;
    // 0x004177F4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x004177F8: sw          $zero, -0x5328($at)
    MEM_W(-0X5328, ctx->r1) = 0;
    // 0x004177FC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00417800: sw          $zero, -0x5330($at)
    MEM_W(-0X5330, ctx->r1) = 0;
    // 0x00417804: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00417808: sw          $v0, -0x5338($at)
    MEM_W(-0X5338, ctx->r1) = ctx->r2;
    // 0x0041780C: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x00417810: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00417814: swc1        $f0, -0x533C($at)
    MEM_W(-0X533C, ctx->r1) = ctx->f0.u32l;
    // 0x00417818: lb          $s2, 0x2C($a0)
    ctx->r18 = MEM_B(ctx->r4, 0X2C);
    // 0x0041781C: bc1f        L_00417830
    if (!c1cs) {
        // 0x00417820: addiu       $s0, $zero, 0x3
        ctx->r16 = ADD32(0, 0X3);
            goto L_00417830;
    }
    // 0x00417820: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
    // 0x00417824: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00417828: lwc1        $f0, 0xEAC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XEAC);
    // 0x0041782C: swc1        $f0, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->f0.u32l;
L_00417830:
    // 0x00417830: addiu       $v0, $a0, 0xC0
    ctx->r2 = ADD32(ctx->r4, 0XC0);
L_00417834:
    // 0x00417834: sb          $zero, 0xB0($v0)
    MEM_B(0XB0, ctx->r2) = 0;
    // 0x00417838: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x0041783C: bgez        $s0, L_00417834
    if (SIGNED(ctx->r16) >= 0) {
        // 0x00417840: addiu       $v0, $v0, -0x40
        ctx->r2 = ADD32(ctx->r2, -0X40);
            goto L_00417834;
    }
    // 0x00417840: addiu       $v0, $v0, -0x40
    ctx->r2 = ADD32(ctx->r2, -0X40);
    // 0x00417844: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00417848: lui         $s1, 0x800F
    ctx->r17 = S32(0X800F << 16);
    // 0x0041784C: addiu       $s1, $s1, 0x5EC0
    ctx->r17 = ADD32(ctx->r17, 0X5EC0);
L_00417850:
    // 0x00417850: jal         0x002855E8
    // 0x00417854: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002855E8(rdram, ctx);
        goto after_0;
    // 0x00417854: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x00417858: bne         $v0, $zero, L_0041788C
    if (ctx->r2 != 0) {
        // 0x0041785C: sll         $v0, $s0, 6
        ctx->r2 = S32(ctx->r16 << 6);
            goto L_0041788C;
    }
    // 0x0041785C: sll         $v0, $s0, 6
    ctx->r2 = S32(ctx->r16 << 6);
    // 0x00417860: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00417864: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x00417868: bne         $v0, $zero, L_00417850
    if (ctx->r2 != 0) {
        // 0x0041786C: addiu       $s1, $s1, 0x224
        ctx->r17 = ADD32(ctx->r17, 0X224);
            goto L_00417850;
    }
    // 0x0041786C: addiu       $s1, $s1, 0x224
    ctx->r17 = ADD32(ctx->r17, 0X224);
L_00417870:
    // 0x00417870: beq         $s2, $zero, L_004178A8
    if (ctx->r18 == 0) {
        // 0x00417874: addiu       $v0, $s2, -0x1
        ctx->r2 = ADD32(ctx->r18, -0X1);
            goto L_004178A8;
    }
    // 0x00417874: addiu       $v0, $s2, -0x1
    ctx->r2 = ADD32(ctx->r18, -0X1);
    // 0x00417878: sltiu       $v0, $v0, 0xD
    ctx->r2 = ctx->r2 < 0XD ? 1 : 0;
    // 0x0041787C: beq         $v0, $zero, L_004178A8
    if (ctx->r2 == 0) {
        // 0x00417880: addiu       $a1, $s2, 0x2328
        ctx->r5 = ADD32(ctx->r18, 0X2328);
            goto L_004178A8;
    }
    // 0x00417880: addiu       $a1, $s2, 0x2328
    ctx->r5 = ADD32(ctx->r18, 0X2328);
    // 0x00417884: j           L_004178E4
    // 0x00417888: nop

        goto L_004178E4;
    // 0x00417888: nop

L_0041788C:
    // 0x0041788C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00417890: addiu       $v1, $v1, -0x54A8
    ctx->r3 = ADD32(ctx->r3, -0X54A8);
    // 0x00417894: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00417898: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0041789C: sb          $v1, 0x28($v0)
    MEM_B(0X28, ctx->r2) = ctx->r3;
    // 0x004178A0: j           L_00417870
    // 0x004178A4: sb          $s0, 0x2F($v0)
    MEM_B(0X2F, ctx->r2) = ctx->r16;
        goto L_00417870;
    // 0x004178A4: sb          $s0, 0x2F($v0)
    MEM_B(0X2F, ctx->r2) = ctx->r16;
L_004178A8:
    // 0x004178A8: jal         0x002113A4
    // 0x004178AC: nop

    func_002113A4(rdram, ctx);
        goto after_1;
    // 0x004178AC: nop

    after_1:
    // 0x004178B0: lui         $v1, 0x4EC4
    ctx->r3 = S32(0X4EC4 << 16);
    // 0x004178B4: ori         $v1, $v1, 0xEC4F
    ctx->r3 = ctx->r3 | 0XEC4F;
    // 0x004178B8: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x004178BC: sra         $v1, $v0, 31
    ctx->r3 = S32(SIGNED(ctx->r2) >> 31);
    // 0x004178C0: mfhi        $a2
    ctx->r6 = hi;
    // 0x004178C4: sra         $a0, $a2, 2
    ctx->r4 = S32(SIGNED(ctx->r6) >> 2);
    // 0x004178C8: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x004178CC: sll         $v1, $a0, 1
    ctx->r3 = S32(ctx->r4 << 1);
    // 0x004178D0: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x004178D4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x004178D8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x004178DC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x004178E0: addiu       $a1, $v0, 0x2329
    ctx->r5 = ADD32(ctx->r2, 0X2329);
L_004178E4:
    // 0x004178E4: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x004178E8: addiu       $a0, $a0, 0x6CB0
    ctx->r4 = ADD32(ctx->r4, 0X6CB0);
    // 0x004178EC: jal         0x00430454
    // 0x004178F0: nop

    func_00430454(rdram, ctx);
        goto after_2;
    // 0x004178F0: nop

    after_2:
    // 0x004178F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x004178F8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x004178FC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00417900: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00417904: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00417908: jr          $ra
    // 0x0041790C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041790C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002717A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002717A8: sll         $v1, $a1, 1
    ctx->r3 = S32(ctx->r5 << 1);
    // 0x002717AC: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x002717B0: lw          $v0, 0x2B78($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2B78);
    // 0x002717B4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x002717B8: jr          $ra
    // 0x002717BC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    return;
    // 0x002717BC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
;}
RECOMP_FUNC void func_0044C188(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044C188: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0044C18C: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x0044C190: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0044C194: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0044C198: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x0044C19C: jal         0x002017D4
    // 0x0044C1A0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x0044C1A0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x0044C1A4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0044C1A8: jr          $ra
    // 0x0044C1AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0044C1AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00253740(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00253740: jr          $ra
    // 0x00253744: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x00253744: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_00453524(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00453524: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x00453528: lw          $v0, 0x2D8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2D8);
    // 0x0045352C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00453530: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00453534: jr          $ra
    // 0x00453538: sw          $v0, 0x2D8($a0)
    MEM_W(0X2D8, ctx->r4) = ctx->r2;
    return;
    // 0x00453538: sw          $v0, 0x2D8($a0)
    MEM_W(0X2D8, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_00416C6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00416C6C: jr          $ra
    // 0x00416C70: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    return;
    // 0x00416C70: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
;}
RECOMP_FUNC void func_0020B5B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020B5B8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0020B5BC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0020B5C0: sw          $v0, -0x477C($at)
    MEM_W(-0X477C, ctx->r1) = ctx->r2;
    // 0x0020B5C4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0020B5C8: sw          $v0, -0x4780($at)
    MEM_W(-0X4780, ctx->r1) = ctx->r2;
    // 0x0020B5CC: jr          $ra
    // 0x0020B5D0: nop

    return;
    // 0x0020B5D0: nop

;}
RECOMP_FUNC void func_00272EC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00272EC4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00272EC8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00272ECC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00272ED0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00272ED4: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x00272ED8: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00272EDC: addiu       $s4, $s1, 0x10
    ctx->r20 = ADD32(ctx->r17, 0X10);
    // 0x00272EE0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00272EE4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x00272EE8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00272EEC: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x00272EF0: lw          $v0, 0xA4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XA4);
    // 0x00272EF4: lw          $v1, 0xB0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XB0);
    // 0x00272EF8: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x00272EFC: beq         $v0, $zero, L_00272F1C
    if (ctx->r2 == 0) {
        // 0x00272F00: addiu       $s2, $s1, 0x60
        ctx->r18 = ADD32(ctx->r17, 0X60);
            goto L_00272F1C;
    }
    // 0x00272F00: addiu       $s2, $s1, 0x60
    ctx->r18 = ADD32(ctx->r17, 0X60);
    // 0x00272F04: lw          $v0, 0x104($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X104);
    // 0x00272F08: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x00272F0C: bne         $v0, $zero, L_00272F1C
    if (ctx->r2 != 0) {
        // 0x00272F10: nop
    
            goto L_00272F1C;
    }
    // 0x00272F10: nop

    // 0x00272F14: jal         0x00272D3C
    // 0x00272F18: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    func_00272D3C(rdram, ctx);
        goto after_0;
    // 0x00272F18: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    after_0:
L_00272F1C:
    // 0x00272F1C: lw          $v0, 0xA4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XA4);
    // 0x00272F20: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    // 0x00272F24: andi        $v0, $v0, 0xA
    ctx->r2 = ctx->r2 & 0XA;
    // 0x00272F28: bne         $v0, $v1, L_002730E0
    if (ctx->r2 != ctx->r3) {
        // 0x00272F2C: nop
    
            goto L_002730E0;
    }
    // 0x00272F2C: nop

    // 0x00272F30: lh          $v0, 0x68($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X68);
    // 0x00272F34: lhu         $v1, 0x68($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X68);
    // 0x00272F38: blez        $v0, L_00272F48
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00272F3C: addiu       $v0, $v1, -0x1
        ctx->r2 = ADD32(ctx->r3, -0X1);
            goto L_00272F48;
    }
    // 0x00272F3C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x00272F40: j           L_002730E0
        turok2_patch_scale_hud_timer(rdram, ctx);

    // 0x00272F44: sh          $v0, 0x68($s1)
    MEM_H(0X68, ctx->r17) = ctx->r2;
        goto L_002730E0;
        turok2_patch_scale_hud_timer(rdram, ctx);

    // 0x00272F44: sh          $v0, 0x68($s1)
    MEM_H(0X68, ctx->r17) = ctx->r2;
L_00272F48:
    // 0x00272F48: lwc1        $f1, 0x70($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X70);
    // 0x00272F4C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00272F50: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00272F54: nop

    // 0x00272F58: bc1f        L_00272F64
    if (!c1cs) {
        // 0x00272F5C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00272F64;
    }
    // 0x00272F5C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00272F60: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_00272F64:
    // 0x00272F64: beq         $s0, $zero, L_00272F94
    if (ctx->r16 == 0) {
        // 0x00272F68: nop
    
            goto L_00272F94;
    }
    // 0x00272F68: nop

    // 0x00272F6C: lhu         $a0, 0x4($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X4);
    // 0x00272F70: jal         0x0026D210
    // 0x00272F74: nop

    func_0026D210(rdram, ctx);
        goto after_1;
    // 0x00272F74: nop

    after_1:
    // 0x00272F78: lwc1        $f1, 0x6C($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X6C);
    // 0x00272F7C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00272F80: nop

    // 0x00272F84: bc1f        L_002730E0
    if (!c1cs) {
        // 0x00272F88: nop
    
            goto L_002730E0;
    }
    // 0x00272F88: nop

    // 0x00272F8C: j           L_00272FB4
    // 0x00272F90: nop

        goto L_00272FB4;
    // 0x00272F90: nop

L_00272F94:
    // 0x00272F94: lhu         $a0, 0x4($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X4);
    // 0x00272F98: jal         0x0026D210
    // 0x00272F9C: nop

    func_0026D210(rdram, ctx);
        goto after_2;
    // 0x00272F9C: nop

    after_2:
    // 0x00272FA0: lwc1        $f1, 0x6C($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X6C);
    // 0x00272FA4: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00272FA8: nop

    // 0x00272FAC: bc1f        L_002730E0
    if (!c1cs) {
        // 0x00272FB0: nop
    
            goto L_002730E0;
    }
    // 0x00272FB0: nop

L_00272FB4:
    // 0x00272FB4: lwc1        $f0, 0x6C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X6C);
    // 0x00272FB8: lwc1        $f1, 0x70($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X70);
    // 0x00272FBC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00272FC0: beq         $s0, $zero, L_00272FE4
    if (ctx->r16 == 0) {
        // 0x00272FC4: swc1        $f0, 0x6C($s1)
        MEM_W(0X6C, ctx->r17) = ctx->f0.u32l;
            goto L_00272FE4;
    }
    // 0x00272FC4: swc1        $f0, 0x6C($s1)
    MEM_W(0X6C, ctx->r17) = ctx->f0.u32l;
    // 0x00272FC8: lhu         $a0, 0x4($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X4);
    // 0x00272FCC: jal         0x0026D210
    // 0x00272FD0: nop

    func_0026D210(rdram, ctx);
        goto after_3;
    // 0x00272FD0: nop

    after_3:
    // 0x00272FD4: lwc1        $f1, 0x6C($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X6C);
    // 0x00272FD8: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00272FDC: j           L_00272FF8
    // 0x00272FE0: nop

        goto L_00272FF8;
    // 0x00272FE0: nop

L_00272FE4:
    // 0x00272FE4: lhu         $a0, 0x4($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X4);
    // 0x00272FE8: jal         0x0026D210
    // 0x00272FEC: nop

    func_0026D210(rdram, ctx);
        goto after_4;
    // 0x00272FEC: nop

    after_4:
    // 0x00272FF0: lwc1        $f1, 0x6C($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X6C);
    // 0x00272FF4: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
L_00272FF8:
    // 0x00272FF8: nop

    // 0x00272FFC: bc1f        L_00273014
    if (!c1cs) {
        // 0x00273000: nop
    
            goto L_00273014;
    }
    // 0x00273000: nop

    // 0x00273004: lhu         $a0, 0x4($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X4);
    // 0x00273008: jal         0x0026D210
    // 0x0027300C: nop

    func_0026D210(rdram, ctx);
        goto after_5;
    // 0x0027300C: nop

    after_5:
    // 0x00273010: swc1        $f0, 0x6C($s1)
    MEM_W(0X6C, ctx->r17) = ctx->f0.u32l;
L_00273014:
    // 0x00273014: lwc1        $f0, 0x6C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X6C);
    // 0x00273018: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027301C: lwc1        $f1, -0x7EAC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7EAC);
    // 0x00273020: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00273024: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00273028: lwc1        $f1, -0x7EA8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7EA8);
    // 0x0027302C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00273030: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00273034: mfc1        $a0, $f3
    ctx->r4 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00273038: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x0027303C: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x00273040: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x00273044: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00273048: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x0027304C: nop

    // 0x00273050: bc1t        L_00273094
    if (c1cs) {
        // 0x00273054: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00273094;
    }
    // 0x00273054: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00273058: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x0027305C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00273060: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x00273064: sra         $v0, $v0, 14
    ctx->r2 = S32(SIGNED(ctx->r2) >> 14);
    // 0x00273068: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027306C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x00273070: lwc1        $f2, 0x284C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X284C);
    // 0x00273074: sub.s       $f1, $f0, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00273078: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027307C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00273080: lwc1        $f0, 0x284C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X284C);
    // 0x00273084: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x00273088: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0027308C: j           L_002730A0
    // 0x00273090: add.s       $f20, $f2, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = ctx->f2.fl + ctx->f1.fl;
        goto L_002730A0;
    // 0x00273090: add.s       $f20, $f2, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = ctx->f2.fl + ctx->f1.fl;
L_00273094:
    // 0x00273094: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00273098: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0027309C: lwc1        $f20, 0x284C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X284C);
L_002730A0:
    // 0x002730A0: swc1        $f20, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->f20.u32l;
    // 0x002730A4: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x002730A8: lw          $s0, 0xB0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0XB0);
    // 0x002730AC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x002730B0: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x002730B4: addiu       $s0, $s0, 0x84
    ctx->r16 = ADD32(ctx->r16, 0X84);
    // 0x002730B8: lh          $a1, 0xDC($v0)
    ctx->r5 = MEM_H(ctx->r2, 0XDC);
    // 0x002730BC: jal         0x00293E60
    // 0x002730C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00293E60(rdram, ctx);
        goto after_6;
    // 0x002730C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x002730C4: lwc1        $f0, 0x34($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X34);
    // 0x002730C8: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x002730CC: lwc1        $f1, 0xB8($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XB8);
    // 0x002730D0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002730D4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x002730D8: j           L_00273120
    // 0x002730DC: nop

        goto L_00273120;
    // 0x002730DC: nop

L_002730E0:
    // 0x002730E0: beq         $s3, $zero, L_00273128
    if (ctx->r19 == 0) {
        // 0x002730E4: nop
    
            goto L_00273128;
    }
    // 0x002730E4: nop

    // 0x002730E8: lw          $v1, 0xB0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XB0);
    // 0x002730EC: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x002730F0: lwc1        $f20, 0x14($s4)
    ctx->f20.u32l = MEM_W(ctx->r20, 0X14);
    // 0x002730F4: addiu       $s0, $v1, 0x84
    ctx->r16 = ADD32(ctx->r3, 0X84);
    // 0x002730F8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x002730FC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00273100: lh          $a1, 0xDC($v1)
    ctx->r5 = MEM_H(ctx->r3, 0XDC);
    // 0x00273104: jal         0x00293E60
    // 0x00273108: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00293E60(rdram, ctx);
        goto after_7;
    // 0x00273108: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x0027310C: lwc1        $f0, 0x34($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X34);
    // 0x00273110: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00273114: lwc1        $f0, 0xB8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XB8);
    // 0x00273118: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x0027311C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
L_00273120:
    // 0x00273120: jal         0x00293DE0
    // 0x00273124: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00293DE0(rdram, ctx);
        goto after_8;
    // 0x00273124: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
L_00273128:
    // 0x00273128: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0027312C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00273130: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00273134: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00273138: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0027313C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00273140: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x00273144: jr          $ra
    // 0x00273148: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00273148: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0028E60C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028E60C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x0028E610: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x0028E614: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0028E618: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x0028E61C: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x0028E620: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0028E624: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x0028E628: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0028E62C: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x0028E630: addiu       $s1, $s2, 0xFFF
    ctx->r17 = ADD32(ctx->r18, 0XFFF);
    // 0x0028E634: srl         $s1, $s1, 12
    ctx->r17 = S32(U32(ctx->r17) >> 12);
    // 0x0028E638: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x0028E63C: addu        $s0, $s1, $a2
    ctx->r16 = ADD32(ctx->r17, ctx->r6);
    // 0x0028E640: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    // 0x0028E644: sw          $ra, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r31;
    // 0x0028E648: jal         0x0029B030
    // 0x0028E64C: and         $s0, $s0, $v0
    ctx->r16 = ctx->r16 & ctx->r2;
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x0028E64C: and         $s0, $s0, $v0
    ctx->r16 = ctx->r16 & ctx->r2;
    after_0:
    // 0x0028E650: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0028E654: sll         $s1, $s1, 2
    ctx->r17 = S32(ctx->r17 << 2);
    // 0x0028E658: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    // 0x0028E65C: addu        $a1, $s1, $s0
    ctx->r5 = ADD32(ctx->r17, ctx->r16);
    // 0x0028E660: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x0028E664: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x0028E668: addiu       $s0, $sp, 0x10
    ctx->r16 = ADD32(ctx->r29, 0X10);
    // 0x0028E66C: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x0028E670: addiu       $a3, $a3, -0x5DF0
    ctx->r7 = ADD32(ctx->r7, -0X5DF0);
    // 0x0028E674: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x0028E678: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x0028E67C: jal         0x00204EDC
    // 0x0028E680: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    func_00204EDC(rdram, ctx);
        goto after_1;
    // 0x0028E680: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    after_1:
    // 0x0028E684: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0028E688: addiu       $a0, $a0, 0x6C4
    ctx->r4 = ADD32(ctx->r4, 0X6C4);
    // 0x0028E68C: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x0028E690: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x0028E694: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x0028E698: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
    // 0x0028E69C: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x0028E6A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0028E6A4: jal         0x0029B820
    // 0x0028E6A8: sw          $s3, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r19;
    osSendMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x0028E6A8: sw          $s3, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r19;
    after_2:
    // 0x0028E6AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0028E6B0: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x0028E6B4: jal         0x0029B6F0
    // 0x0028E6B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x0028E6B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x0028E6BC: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x0028E6C0: lw          $ra, 0x50($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X50);
    // 0x0028E6C4: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x0028E6C8: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x0028E6CC: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x0028E6D0: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x0028E6D4: jr          $ra
    // 0x0028E6D8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x0028E6D8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_0040DD68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040DD68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0040DD6C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0040DD70: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x0040DD74: beq         $v0, $zero, L_0040DD84
    if (ctx->r2 == 0) {
        // 0x0040DD78: nop
    
            goto L_0040DD84;
    }
    // 0x0040DD78: nop

    // 0x0040DD7C: jal         0x00243414
    // 0x0040DD80: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0040DD80: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_0:
L_0040DD84:
    // 0x0040DD84: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0040DD88: jr          $ra
    // 0x0040DD8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040DD8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002060C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002060C8: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x002060CC: lw          $v0, -0x7E10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7E10);
    // 0x002060D0: jr          $ra
    // 0x002060D4: nop

    return;
    // 0x002060D4: nop

;}
RECOMP_FUNC void func_0041C1BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041C1BC: lw          $v0, 0x1C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1C);
    // 0x0041C1C0: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0041C1C4: addiu       $v1, $v1, -0x54E8
    ctx->r3 = ADD32(ctx->r3, -0X54E8);
    // 0x0041C1C8: beq         $v0, $zero, L_0041C1DC
    if (ctx->r2 == 0) {
        // 0x0041C1CC: nop
    
            goto L_0041C1DC;
    }
    // 0x0041C1CC: nop

    // 0x0041C1D0: lw          $v0, 0x518($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X518);
    // 0x0041C1D4: bnel        $v0, $zero, L_0041C1DC
    if (ctx->r2 != 0) {
        // 0x0041C1D8: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_0041C1DC;
    }
    goto skip_0;
    // 0x0041C1D8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    skip_0:
L_0041C1DC:
    // 0x0041C1DC: lbu         $v1, 0x2E($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X2E);
    // 0x0041C1E0: beq         $v1, $zero, L_0041C1F8
    if (ctx->r3 == 0) {
        // 0x0041C1E4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0041C1F8;
    }
    // 0x0041C1E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041C1E8: beq         $v1, $v0, L_0041C208
    if (ctx->r3 == ctx->r2) {
        // 0x0041C1EC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0041C208;
    }
    // 0x0041C1EC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041C1F0: j           L_0041C218
    // 0x0041C1F4: nop

        goto L_0041C218;
    // 0x0041C1F4: nop

L_0041C1F8:
    // 0x0041C1F8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041C1FC: addiu       $v0, $v0, 0x3F78
    ctx->r2 = ADD32(ctx->r2, 0X3F78);
    // 0x0041C200: j           L_0041C214
    // 0x0041C204: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041C214;
    // 0x0041C204: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041C208:
    // 0x0041C208: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041C20C: addiu       $v0, $v0, 0x3F60
    ctx->r2 = ADD32(ctx->r2, 0X3F60);
    // 0x0041C210: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041C214:
    // 0x0041C214: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0041C218:
    // 0x0041C218: jr          $ra
    // 0x0041C21C: nop

    return;
    // 0x0041C21C: nop

;}
RECOMP_FUNC void func_0025FAD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025FAD0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x0025FAD4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x0025FAD8: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0025FADC: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x0025FAE0: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x0025FAE4: lwc1        $f0, 0x64($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X64);
    // 0x0025FAE8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025FAEC: lwc1        $f1, 0x794C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X794C);
    // 0x0025FAF0: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0025FAF4: nop

    // 0x0025FAF8: bc1f        L_0025FB04
    if (!c1cs) {
        // 0x0025FAFC: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_0025FB04;
    }
    // 0x0025FAFC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0025FB00: swc1        $f1, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
L_0025FB04:
    // 0x0025FB04: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x0025FB08: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0025FB0C: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0025FB10: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025FB14: lwc1        $f1, 0x7950($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7950);
    // 0x0025FB18: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0025FB1C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0025FB20: lui         $a3, 0x424C
    ctx->r7 = S32(0X424C << 16);
    // 0x0025FB24: ori         $a3, $a3, 0xCCCC
    ctx->r7 = ctx->r7 | 0XCCCC;
    // 0x0025FB28: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
    // 0x0025FB2C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0025FB30: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0025FB34: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x0025FB38: jal         0x00245828
    // 0x0025FB3C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_00245828(rdram, ctx);
        goto after_0;
    // 0x0025FB3C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_0:
    // 0x0025FB40: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0025FB44: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0025FB48: jal         0x002465C8
    // 0x0025FB4C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    func_002465C8(rdram, ctx);
        goto after_1;
    // 0x0025FB4C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x0025FB50: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0025FB54: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0025FB58: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0025FB5C: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x0025FB60: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x0025FB64: lw          $a3, 0xC($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XC);
    // 0x0025FB68: jal         0x00275544
    // 0x0025FB6C: addiu       $a0, $zero, 0x227
    ctx->r4 = ADD32(0, 0X227);
    func_00275544(rdram, ctx);
        goto after_2;
    // 0x0025FB6C: addiu       $a0, $zero, 0x227
    ctx->r4 = ADD32(0, 0X227);
    after_2:
    // 0x0025FB70: lwc1        $f0, 0x64($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X64);
    // 0x0025FB74: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0025FB78: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x0025FB7C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0025FB80: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0025FB84: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0025FB88: nop

    // 0x0025FB8C: bc1f        L_0025FBA4
    if (!c1cs) {
        // 0x0025FB90: swc1        $f0, 0x64($s0)
        MEM_W(0X64, ctx->r16) = ctx->f0.u32l;
            goto L_0025FBA4;
    }
    // 0x0025FB90: swc1        $f0, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f0.u32l;
    // 0x0025FB94: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0025FB98: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0025FB9C: jal         0x00243414
    // 0x0025FBA0: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_00243414(rdram, ctx);
        goto after_3;
    // 0x0025FBA0: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_3:
L_0025FBA4:
    // 0x0025FBA4: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x0025FBA8: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x0025FBAC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0025FBB0: jr          $ra
    // 0x0025FBB4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x0025FBB4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00423DA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00423DA4: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00423DA8: lw          $v1, 0x9B0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X9B0);
    // 0x00423DAC: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x00423DB0: beq         $v0, $zero, L_00423DCC
    if (ctx->r2 == 0) {
        // 0x00423DB4: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00423DCC;
    }
    // 0x00423DB4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00423DB8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00423DBC: addu        $at, $at, $v0
    gpr jr_addend_00423DC4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00423DC0: lw          $v0, 0x1700($at)
    ctx->r2 = ADD32(ctx->r1, 0X1700);
    // 0x00423DC4: jr          $v0
    // 0x00423DC8: nop

    switch (jr_addend_00423DC4 >> 2) {
        case 0: goto L_00423DCC; break;
        case 1: goto L_00423DFC; break;
        case 2: goto L_00423DFC; break;
        case 3: goto L_00423DDC; break;
        case 4: goto L_00423DEC; break;
        default: switch_error(__func__, 0x00423DC4, 0x800C1700);
    }
    // 0x00423DC8: nop

L_00423DCC:
    // 0x00423DCC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423DD0: addiu       $v0, $v0, 0x5314
    ctx->r2 = ADD32(ctx->r2, 0X5314);
    // 0x00423DD4: j           L_00423E08
    // 0x00423DD8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00423E08;
    // 0x00423DD8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00423DDC:
    // 0x00423DDC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423DE0: addiu       $v0, $v0, 0x5314
    ctx->r2 = ADD32(ctx->r2, 0X5314);
    // 0x00423DE4: j           L_00423E08
    // 0x00423DE8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00423E08;
    // 0x00423DE8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00423DEC:
    // 0x00423DEC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423DF0: addiu       $v0, $v0, 0x5314
    ctx->r2 = ADD32(ctx->r2, 0X5314);
    // 0x00423DF4: j           L_00423E08
    // 0x00423DF8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00423E08;
    // 0x00423DF8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00423DFC:
    // 0x00423DFC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423E00: addiu       $v0, $v0, 0x52F8
    ctx->r2 = ADD32(ctx->r2, 0X52F8);
    // 0x00423E04: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00423E08:
    // 0x00423E08: jr          $ra
    // 0x00423E0C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00423E0C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0044519C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044519C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x004451A0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x004451A4: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x004451A8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x004451AC: lw          $a0, -0x490($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X490);
    // 0x004451B0: sdc1        $f21, 0x38($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X38, ctx->r29);
    // 0x004451B4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004451B8: lwc1        $f21, 0x8A8($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X8A8);
    // 0x004451BC: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x004451C0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004451C4: lwc1        $f20, 0x8AC($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X8AC);
    // 0x004451C8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x004451CC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x004451D0: lui         $s3, 0x43
    ctx->r19 = S32(0X43 << 16);
    // 0x004451D4: addiu       $s3, $s3, 0x1C40
    ctx->r19 = ADD32(ctx->r19, 0X1C40);
    // 0x004451D8: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x004451DC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x004451E0: jal         0x0040BD60
    // 0x004451E4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_0040BD60(rdram, ctx);
        goto after_0;
    // 0x004451E4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
L_004451E8:
    // 0x004451E8: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x004451EC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004451F0: lwc1        $f14, 0x8B0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X8B0);
    // 0x004451F4: jal         0x002119FC
    // 0x004451F8: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    func_002119FC(rdram, ctx);
        goto after_1;
    // 0x004451F8: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    after_1:
    // 0x004451FC: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x00445200: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x00445204: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00445208: mfc1        $s0, $f2
    ctx->r16 = (int32_t)ctx->f2.u32l;
    // 0x0044520C: beq         $a1, $zero, L_00445260
    if (ctx->r5 == 0) {
        // 0x00445210: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00445260;
    }
    // 0x00445210: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00445214: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x00445218: sll         $a2, $s0, 2
    ctx->r6 = S32(ctx->r16 << 2);
    // 0x0044521C: addu        $a2, $a2, $s0
    ctx->r6 = ADD32(ctx->r6, ctx->r16);
    // 0x00445220: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x00445224: jal         0x0020EF2C
    // 0x00445228: addu        $a2, $a2, $s3
    ctx->r6 = ADD32(ctx->r6, ctx->r19);
    func_0020EF2C(rdram, ctx);
        goto after_2;
    // 0x00445228: addu        $a2, $a2, $s3
    ctx->r6 = ADD32(ctx->r6, ctx->r19);
    after_2:
    // 0x0044522C: lwc1        $f1, 0x0($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X0);
    // 0x00445230: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x00445234: lwc1        $f0, 0x4($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X4);
    // 0x00445238: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0044523C: lwc1        $f12, 0x8($s2)
    ctx->f12.u32l = MEM_W(ctx->r18, 0X8);
    // 0x00445240: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x00445244: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00445248: jal         0x00298470
    // 0x0044524C: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_3;
    // 0x0044524C: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_3:
    // 0x00445250: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x00445254: nop

    // 0x00445258: bc1tl       L_00445260
    if (c1cs) {
        // 0x0044525C: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_00445260;
    }
    goto skip_0;
    // 0x0044525C: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    skip_0:
L_00445260:
    // 0x00445260: beq         $s1, $zero, L_004451E8
    if (ctx->r17 == 0) {
        // 0x00445264: sll         $v0, $s0, 2
        ctx->r2 = S32(ctx->r16 << 2);
            goto L_004451E8;
    }
    // 0x00445264: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x00445268: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x0044526C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00445270: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x00445274: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00445278: lw          $v1, 0x1C40($at)
    ctx->r3 = MEM_W(ctx->r1, 0X1C40);
    // 0x0044527C: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x00445280: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00445284: lw          $a3, 0x1C44($at)
    ctx->r7 = MEM_W(ctx->r1, 0X1C44);
    // 0x00445288: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x0044528C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00445290: lw          $t0, 0x1C48($at)
    ctx->r8 = MEM_W(ctx->r1, 0X1C48);
    // 0x00445294: sw          $v1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r3;
    // 0x00445298: sw          $a3, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r7;
    // 0x0044529C: sw          $t0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r8;
    // 0x004452A0: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x004452A4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x004452A8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x004452AC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x004452B0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x004452B4: ldc1        $f21, 0x38($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X38);
    // 0x004452B8: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x004452BC: jr          $ra
    // 0x004452C0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x004452C0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_004608CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00427944:
    // 0x004608CC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x004608D0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x004608D4: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x004608D8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x004608DC: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x004608E0: andi        $v0, $a2, 0xFF
    ctx->r2 = ctx->r6 & 0XFF;
    // 0x004608E4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x004608E8: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x004608EC: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x004608F0: addu        $s5, $a3, $zero
    ctx->r21 = ADD32(ctx->r7, 0);
    // 0x004608F4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x004608F8: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x004608FC: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00460900: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00460904: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00460908: lhu         $s0, 0x0($v0)
    ctx->r16 = MEM_HU(ctx->r2, 0X0);
    // 0x0046090C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00460910: lw          $s6, 0x44($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X44);
    // 0x00460914: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x00460918: lbu         $a3, 0x43($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X43);
    // 0x0046091C: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    // 0x00460920: beq         $a0, $v0, L_0046093C
    if (ctx->r4 == ctx->r2) {
        // 0x00460924: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_0046093C;
    }
    // 0x00460924: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00460928: srl         $v0, $a0, 8
    ctx->r2 = S32(U32(ctx->r4) >> 8);
    // 0x0046092C: bne         $v0, $zero, L_0046094C
    if (ctx->r2 != 0) {
        // 0x00460930: andi        $v0, $s0, 0xFF
        ctx->r2 = ctx->r16 & 0XFF;
            goto L_0046094C;
    }
    // 0x00460930: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x00460934: j           L_00427944
    // 0x00460938: nop

    entry_00427944(rdram, ctx);
    return;
    // 0x00460938: nop

L_0046093C:
    // 0x0046093C: bne         $a3, $zero, L_00460948
    if (ctx->r7 != 0) {
        // 0x00460940: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_00460948;
    }
    // 0x00460940: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00460944: lw          $v1, 0x60($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X60);
L_00460948:
    // 0x00460948: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
L_0046094C:
    // 0x0046094C: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00460950: beq         $v0, $zero, L_00460960
    if (ctx->r2 == 0) {
        // 0x00460954: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00460960;
    }
    // 0x00460954: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00460958: bne         $s0, $v0, L_00460A44
    if (ctx->r16 != ctx->r2) {
        // 0x0046095C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00460A44;
    }
    // 0x0046095C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_00460960:
    // 0x00460960: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x00460964: bne         $a1, $s4, L_00460980
    if (ctx->r5 != ctx->r20) {
        // 0x00460968: sh          $s0, 0x0($s6)
        MEM_H(0X0, ctx->r22) = ctx->r16;
            goto L_00460980;
    }
    // 0x00460968: sh          $s0, 0x0($s6)
    MEM_H(0X0, ctx->r22) = ctx->r16;
    // 0x0046096C: andi        $v0, $a2, 0xFF
    ctx->r2 = ctx->r6 & 0XFF;
    // 0x00460970: sllv        $v0, $v0, $s4
    ctx->r2 = S32(ctx->r2 << (ctx->r20 & 31));
    // 0x00460974: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x00460978: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x0046097C: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
L_00460980:
    // 0x00460980: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00460984: andi        $a1, $a2, 0xFF
    ctx->r5 = ctx->r6 & 0XFF;
    // 0x00460988: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x0046098C: andi        $s1, $a3, 0xFF
    ctx->r17 = ctx->r7 & 0XFF;
    // 0x00460990: jal         0x00427A6C
    // 0x00460994: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    entry_00427A6C(rdram, ctx);
        goto after_0;
    // 0x00460994: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    after_0:
    // 0x00460998: bne         $v0, $zero, L_00460A44
    if (ctx->r2 != 0) {
        // 0x0046099C: andi        $v1, $s0, 0xFFFF
        ctx->r3 = ctx->r16 & 0XFFFF;
            goto L_00460A44;
    }
    // 0x0046099C: andi        $v1, $s0, 0xFFFF
    ctx->r3 = ctx->r16 & 0XFFFF;
    // 0x004609A0: beq         $v1, $s4, L_00460A44
    if (ctx->r3 == ctx->r20) {
        // 0x004609A4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00460A44;
    }
    // 0x004609A4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x004609A8: lw          $v0, 0x60($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X60);
    // 0x004609AC: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x004609B0: bnel        $v0, $zero, L_00460A40
    if (ctx->r2 != 0) {
        // 0x004609B4: sh          $s0, 0x0($s6)
        MEM_H(0X0, ctx->r22) = ctx->r16;
            goto L_00460A40;
    }
    goto skip_0;
    // 0x004609B4: sh          $s0, 0x0($s6)
    MEM_H(0X0, ctx->r22) = ctx->r16;
    skip_0:
    // 0x004609B8: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
    // 0x004609BC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_004609C0:
    // 0x004609C0: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x004609C4: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x004609C8: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x004609CC: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    // 0x004609D0: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    // 0x004609D4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x004609D8: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x004609DC: lhu         $s0, 0x0($v0)
    ctx->r16 = MEM_HU(ctx->r2, 0X0);
    // 0x004609E0: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x004609E4: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x004609E8: jal         0x00427A6C
    // 0x004609EC: sh          $s4, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r20;
    entry_00427A6C(rdram, ctx);
        goto after_1;
    // 0x004609EC: sh          $s4, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r20;
    after_1:
    // 0x004609F0: bne         $v0, $zero, L_00460A44
    if (ctx->r2 != 0) {
        // 0x004609F4: andi        $v1, $s0, 0xFFFF
        ctx->r3 = ctx->r16 & 0XFFFF;
            goto L_00460A44;
    }
    // 0x004609F4: andi        $v1, $s0, 0xFFFF
    ctx->r3 = ctx->r16 & 0XFFFF;
    // 0x004609F8: srl         $a0, $v1, 8
    ctx->r4 = S32(U32(ctx->r3) >> 8);
    // 0x004609FC: bne         $a0, $s1, L_00460A14
    if (ctx->r4 != ctx->r17) {
        // 0x00460A00: nop
    
            goto L_00460A14;
    }
    // 0x00460A00: nop

    // 0x00460A04: lw          $v0, 0x60($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X60);
    // 0x00460A08: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00460A0C: beql        $v0, $zero, L_004609C0
    if (ctx->r2 == 0) {
        // 0x00460A10: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_004609C0;
    }
    goto skip_1;
    // 0x00460A10: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    skip_1:
L_00460A14:
    // 0x00460A14: lw          $v0, 0x60($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X60);
    // 0x00460A18: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00460A1C: bnel        $v0, $zero, L_00460A40
    if (ctx->r2 != 0) {
        // 0x00460A20: sh          $s0, 0x0($s6)
        MEM_H(0X0, ctx->r22) = ctx->r16;
            goto L_00460A40;
    }
    goto skip_2;
    // 0x00460A20: sh          $s0, 0x0($s6)
    MEM_H(0X0, ctx->r22) = ctx->r16;
    skip_2:
    // 0x00460A24: bnel        $a0, $s1, L_00460A40
    if (ctx->r4 != ctx->r17) {
        // 0x00460A28: sh          $s0, 0x0($s6)
        MEM_H(0X0, ctx->r22) = ctx->r16;
            goto L_00460A40;
    }
    goto skip_3;
    // 0x00460A28: sh          $s0, 0x0($s6)
    MEM_H(0X0, ctx->r22) = ctx->r16;
    skip_3:
    // 0x00460A2C: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x00460A30: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00460A34: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x00460A38: sh          $s4, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r20;
    // 0x00460A3C: sh          $s0, 0x0($s6)
    MEM_H(0X0, ctx->r22) = ctx->r16;
L_00460A40:
    // 0x00460A40: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00460A44:
    // 0x00460A44: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x00460A48: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x00460A4C: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x00460A50: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00460A54: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00460A58: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00460A5C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00460A60: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00460A64: jr          $ra
    // 0x00460A68: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00460A68: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00416C54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00416C54: lw          $v1, 0x1C8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C8);
    // 0x00416C58: slti        $v0, $v1, 0x18
    ctx->r2 = SIGNED(ctx->r3) < 0X18 ? 1 : 0;
    // 0x00416C5C: bne         $v0, $zero, L_00416C6C
    if (ctx->r2 != 0) {
            // 0x00416C60: addiu       $v0, $zero, 0x2F
    ctx->r2 = ADD32(0, 0X2F);
    func_00416C6C(rdram, ctx);
    return;
    }
    // 0x00416C60: addiu       $v0, $zero, 0x2F
    ctx->r2 = ADD32(0, 0X2F);
    // 0x00416C64: jr          $ra
    // 0x00416C68: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    return;
    // 0x00416C68: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
;}
RECOMP_FUNC void func_00293238(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00293238: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0029323C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x00293240: lhu         $v0, 0x1A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X1A);
    // 0x00293244: sh          $v0, 0xC($a1)
    MEM_H(0XC, ctx->r5) = ctx->r2;
    // 0x00293248: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x0029324C: jr          $ra
    // 0x00293250: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    return;
    // 0x00293250: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_00421AEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00421AEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00421AF0: beq         $a1, $v0, L_00421B20
    if (ctx->r5 == ctx->r2) {
            // 0x00421AF4: slti        $v0, $a1, 0x2
    ctx->r2 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    func_00421B20(rdram, ctx);
    return;
    }
    // 0x00421AF4: slti        $v0, $a1, 0x2
    ctx->r2 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x00421AF8: bne         $v0, $zero, L_00421B10
    if (ctx->r2 != 0) {
        // 0x00421AFC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00421B10;
    }
    // 0x00421AFC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00421B00: beq         $a1, $v0, L_00421B30
    if (ctx->r5 == ctx->r2) {
            // 0x00421B04: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    func_00421B30(rdram, ctx);
    return;
    }
    // 0x00421B04: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00421B08: beq         $a1, $v0, L_00421B40
    if (ctx->r5 == ctx->r2) {
            // 0x00421B0C: nop

    func_00421B40(rdram, ctx);
    return;
    }
    // 0x00421B0C: nop

L_00421B10:
    // 0x00421B10: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x00421B14: addiu       $v0, $v0, -0x5380
    ctx->r2 = ADD32(ctx->r2, -0X5380);
    // 0x00421B18: jr          $ra
    // 0x00421B1C: nop

    return;
    // 0x00421B1C: nop

;}
RECOMP_FUNC void func_0026CF34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026CF34: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0026CF38: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x0026CF3C: lwc1        $f1, 0x0($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X0);
    // 0x0026CF40: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x0026CF44: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0026CF48: nop

    // 0x0026CF4C: bc1fl       L_0026CF54
    if (!c1cs) {
        // 0x0026CF50: mov.s       $f1, $f0
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
            goto L_0026CF54;
    }
    goto skip_0;
    // 0x0026CF50: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    skip_0:
L_0026CF54:
    // 0x0026CF54: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x0026CF58: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x0026CF5C: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0026CF60: nop

    // 0x0026CF64: bc1fl       L_0026CF6C
    if (!c1cs) {
        // 0x0026CF68: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0026CF6C;
    }
    goto skip_1;
    // 0x0026CF68: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_1:
L_0026CF6C:
    // 0x0026CF6C: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
    // 0x0026CF70: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0026CF74: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x0026CF78: lwc1        $f1, 0x0($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X0);
    // 0x0026CF7C: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x0026CF80: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0026CF84: nop

    // 0x0026CF88: bc1fl       L_0026CF90
    if (!c1cs) {
        // 0x0026CF8C: mov.s       $f1, $f0
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
            goto L_0026CF90;
    }
    goto skip_2;
    // 0x0026CF8C: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    skip_2:
L_0026CF90:
    // 0x0026CF90: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x0026CF94: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x0026CF98: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0026CF9C: nop

    // 0x0026CFA0: bc1fl       L_0026CFA8
    if (!c1cs) {
        // 0x0026CFA4: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0026CFA8;
    }
    goto skip_3;
    // 0x0026CFA4: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_3:
L_0026CFA8:
    // 0x0026CFA8: swc1        $f0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f0.u32l;
    // 0x0026CFAC: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0026CFB0: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x0026CFB4: lwc1        $f1, 0x8($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X8);
    // 0x0026CFB8: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x0026CFBC: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0026CFC0: nop

    // 0x0026CFC4: bc1fl       L_0026CFCC
    if (!c1cs) {
        // 0x0026CFC8: mov.s       $f1, $f0
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
            goto L_0026CFCC;
    }
    goto skip_4;
    // 0x0026CFC8: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    skip_4:
L_0026CFCC:
    // 0x0026CFCC: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x0026CFD0: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x0026CFD4: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0026CFD8: nop

    // 0x0026CFDC: bc1fl       L_0026CFE4
    if (!c1cs) {
        // 0x0026CFE0: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0026CFE4;
    }
    goto skip_5;
    // 0x0026CFE0: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_5:
L_0026CFE4:
    // 0x0026CFE4: swc1        $f0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f0.u32l;
    // 0x0026CFE8: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0026CFEC: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x0026CFF0: lwc1        $f1, 0x8($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X8);
    // 0x0026CFF4: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x0026CFF8: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0026CFFC: nop

    // 0x0026D000: bc1fl       L_0026D008
    if (!c1cs) {
        // 0x0026D004: mov.s       $f1, $f0
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
            goto L_0026D008;
    }
    goto skip_6;
    // 0x0026D004: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    skip_6:
L_0026D008:
    // 0x0026D008: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x0026D00C: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x0026D010: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0026D014: nop

    // 0x0026D018: bc1fl       L_0026D020
    if (!c1cs) {
        // 0x0026D01C: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0026D020;
    }
    goto skip_7;
    // 0x0026D01C: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_7:
L_0026D020:
    // 0x0026D020: jr          $ra
    // 0x0026D024: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
    return;
    // 0x0026D024: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_00425D94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00425D94: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x00425D98: lbu         $a2, 0x1($s2)
    ctx->r6 = MEM_BU(ctx->r18, 0X1);
    // 0x00425D9C: lbu         $t0, 0x2($s2)
    ctx->r8 = MEM_BU(ctx->r18, 0X2);
    // 0x00425DA0: lbu         $t1, 0x3($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X3);
    // 0x00425DA4: addiu       $s4, $sp, 0x30
    ctx->r20 = ADD32(ctx->r29, 0X30);
    // 0x00425DA8: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x00425DAC: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x00425DB0: sw          $s7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r23;
    // 0x00425DB4: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x00425DB8: or          $s3, $a1, $v1
    ctx->r19 = ctx->r5 | ctx->r3;
    // 0x00425DBC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00425DC0: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x00425DC4: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x00425DC8: or          $v0, $v0, $a2
    ctx->r2 = ctx->r2 | ctx->r6;
    // 0x00425DCC: sll         $t0, $t0, 8
    ctx->r8 = S32(ctx->r8 << 8);
    // 0x00425DD0: or          $v0, $v0, $t0
    ctx->r2 = ctx->r2 | ctx->r8;
    // 0x00425DD4: or          $s2, $v0, $t1
    ctx->r18 = ctx->r2 | ctx->r9;
    // 0x00425DD8: jal         0x00427180
    // 0x00425DDC: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_00427180(rdram, ctx);
        goto after_0;
    // 0x00425DDC: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_0:
    // 0x00425DE0: beq         $v0, $zero, L_00425DF0
    if (ctx->r2 == 0) {
        // 0x00425DE4: addiu       $s0, $zero, -0x1
        ctx->r16 = ADD32(0, -0X1);
            goto L_00425DF0;
    }
    // 0x00425DE4: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x00425DE8: bne         $s0, $zero, L_00425E30
    if (ctx->r16 != 0) {
        // 0x00425DEC: nop
    
            goto L_00425E30;
    }
    // 0x00425DEC: nop

L_00425DF0:
    // 0x00425DF0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00425DF4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00425DF8: sw          $s5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r21;
    // 0x00425DFC: sw          $fp, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r30;
    // 0x00425E00: lw          $a1, 0x0($s7)
    ctx->r5 = MEM_W(ctx->r23, 0X0);
    // 0x00425E04: jal         0x00428CF0
    // 0x00425E08: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_00428CF0(rdram, ctx);
        goto after_1;
    // 0x00425E08: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x00425E0C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00425E10: beq         $s0, $zero, L_00425E30
    if (ctx->r16 == 0) {
        // 0x00425E14: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00425E30;
    }
    // 0x00425E14: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00425E18: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x00425E1C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00425E20: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x00425E24: jal         0x00427780
    // 0x00425E28: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    func_00427780(rdram, ctx);
        goto after_2;
    // 0x00425E28: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    after_2:
    // 0x00425E2C: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
L_00425E30:
    // 0x00425E30: jal         0x004258E8
    // 0x00425E34: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    func_004258E8(rdram, ctx);
        goto after_3;
    // 0x00425E34: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    after_3:
    // 0x00425E38: jal         0x002858A4
    // 0x00425E3C: nop

    func_002858A4(rdram, ctx);
        goto after_4;
    // 0x00425E3C: nop

    after_4:
    // 0x00425E40: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x00425E44: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x00425E48: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x00425E4C: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x00425E50: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x00425E54: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x00425E58: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x00425E5C: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x00425E60: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x00425E64: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x00425E68: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x00425E6C: jr          $ra
    // 0x00425E70: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x00425E70: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_00454CC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041BD34:
    // 0x00454CC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
L_0041BDA8:
    // 0x00454CC8: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00454CCC: addiu       $a0, $a0, 0x5C78
    ctx->r4 = ADD32(ctx->r4, 0X5C78);
    // 0x00454CD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00454CD4: jal         0x00285628
    // 0x00454CD8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_00285628(rdram, ctx);
        goto after_0;
    // 0x00454CD8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x00454CDC: beq         $v0, $zero, L_00454D34
    if (ctx->r2 == 0) {
        // 0x00454CE0: addiu       $a1, $zero, 0x10
        ctx->r5 = ADD32(0, 0X10);
            goto L_00454D34;
    }
    // 0x00454CE0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x00454CE4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00454CE8: addiu       $a0, $a0, -0x5520
    ctx->r4 = ADD32(ctx->r4, -0X5520);
    // 0x00454CEC: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00454CF0: beq         $v1, $a1, L_00454D2C
    if (ctx->r3 == ctx->r5) {
        // 0x00454CF4: sltiu       $v0, $v1, 0x11
        ctx->r2 = ctx->r3 < 0X11 ? 1 : 0;
            goto L_00454D2C;
    }
    // 0x00454CF4: sltiu       $v0, $v1, 0x11
    ctx->r2 = ctx->r3 < 0X11 ? 1 : 0;
    // 0x00454CF8: beq         $v0, $zero, L_00454D10
    if (ctx->r2 == 0) {
        // 0x00454CFC: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_00454D10;
    }
    // 0x00454CFC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x00454D00: beq         $v1, $v0, L_00454D24
    if (ctx->r3 == ctx->r2) {
        // 0x00454D04: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_00454D24;
    }
    // 0x00454D04: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x00454D08: j           L_0041BD34
    // 0x00454D0C: nop

    entry_0041BD34(rdram, ctx);
    return;
    // 0x00454D0C: nop

L_00454D10:
    // 0x00454D10: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x00454D14: beql        $v1, $v0, L_00454D34
    if (ctx->r3 == ctx->r2) {
        // 0x00454D18: sw          $a1, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r5;
            goto L_00454D34;
    }
    goto skip_0;
    // 0x00454D18: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    skip_0:
    // 0x00454D1C: j           L_0041BD34
    // 0x00454D20: nop

    entry_0041BD34(rdram, ctx);
    return;
    // 0x00454D20: nop

L_00454D24:
    // 0x00454D24: j           L_0041BD34
    // 0x00454D28: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    entry_0041BD34(rdram, ctx);
    return;
    // 0x00454D28: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
L_00454D2C:
    // 0x00454D2C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x00454D30: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
L_00454D34:
    // 0x00454D34: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x00454D38: addiu       $s0, $s0, 0x5C78
    ctx->r16 = ADD32(ctx->r16, 0X5C78);
    // 0x00454D3C: jal         0x00285670
    // 0x00454D40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00285670(rdram, ctx);
        goto after_1;
    // 0x00454D40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00454D44: bne         $v0, $zero, L_00454D5C
    if (ctx->r2 != 0) {
        // 0x00454D48: nop
    
            goto L_00454D5C;
    }
    // 0x00454D48: nop

    // 0x00454D4C: jal         0x002855E8
    // 0x00454D50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002855E8(rdram, ctx);
        goto after_2;
    // 0x00454D50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00454D54: beq         $v0, $zero, L_00454DA8
    if (ctx->r2 == 0) {
        // 0x00454D58: nop
    
            goto L_00454DA8;
    }
    // 0x00454D58: nop

L_00454D5C:
    // 0x00454D5C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00454D60: addiu       $a0, $a0, -0x5520
    ctx->r4 = ADD32(ctx->r4, -0X5520);
    // 0x00454D64: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00454D68: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x00454D6C: beq         $v1, $a1, L_00454DA0
    if (ctx->r3 == ctx->r5) {
        // 0x00454D70: sltiu       $v0, $v1, 0x11
        ctx->r2 = ctx->r3 < 0X11 ? 1 : 0;
            goto L_00454DA0;
    }
    // 0x00454D70: sltiu       $v0, $v1, 0x11
    ctx->r2 = ctx->r3 < 0X11 ? 1 : 0;
    // 0x00454D74: beq         $v0, $zero, L_00454D8C
    if (ctx->r2 == 0) {
        // 0x00454D78: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_00454D8C;
    }
    // 0x00454D78: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x00454D7C: beql        $v1, $v0, L_00454DA8
    if (ctx->r3 == ctx->r2) {
        // 0x00454D80: sw          $a1, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r5;
            goto L_00454DA8;
    }
    goto skip_1;
    // 0x00454D80: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    skip_1:
    // 0x00454D84: j           L_0041BDA8
    // 0x00454D88: nop

    entry_0041BDA8(rdram, ctx);
    return;
    // 0x00454D88: nop

L_00454D8C:
    // 0x00454D8C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x00454D90: beq         $v1, $v0, L_00454DA4
    if (ctx->r3 == ctx->r2) {
        // 0x00454D94: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_00454DA4;
    }
    // 0x00454D94: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x00454D98: j           L_0041BDA8
    // 0x00454D9C: nop

    entry_0041BDA8(rdram, ctx);
    return;
    // 0x00454D9C: nop

L_00454DA0:
    // 0x00454DA0: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
L_00454DA4:
    // 0x00454DA4: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
L_00454DA8:
    // 0x00454DA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00454DAC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00454DB0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00454DB4: jr          $ra
    // 0x00454DB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00454DB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002A40CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A40CC: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
;}
RECOMP_FUNC void func_0025F9FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025F9FC: lbu         $v1, 0xC8($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0XC8);
    // 0x0025FA00: addiu       $v1, $v1, 0xA
    ctx->r3 = ADD32(ctx->r3, 0XA);
    // 0x0025FA04: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x0025FA08: beql        $v0, $zero, L_0025FA10
    if (ctx->r2 == 0) {
        // 0x0025FA0C: addiu       $v1, $zero, 0xFF
        ctx->r3 = ADD32(0, 0XFF);
            goto L_0025FA10;
    }
    goto skip_0;
    // 0x0025FA0C: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    skip_0:
L_0025FA10:
    // 0x0025FA10: sb          $v1, 0xC8($a1)
    MEM_B(0XC8, ctx->r5) = ctx->r3;
    // 0x0025FA14: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x0025FA18: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025FA1C: lwc1        $f0, 0x793C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X793C);
    // 0x0025FA20: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0025FA24: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0025FA28: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0025FA2C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025FA30: lwc1        $f0, 0x7940($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7940);
    // 0x0025FA34: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0025FA38: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025FA3C: lwc1        $f1, 0x7944($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7944);
    // 0x0025FA40: add.s       $f1, $f0, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0025FA44: lwc1        $f0, 0x64($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X64);
    // 0x0025FA48: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0025FA4C: jr          $ra
    // 0x0025FA50: swc1        $f0, 0x64($a1)
    MEM_W(0X64, ctx->r5) = ctx->f0.u32l;
    return;
    // 0x0025FA50: swc1        $f0, 0x64($a1)
    MEM_W(0X64, ctx->r5) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_002465F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002465F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002465F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002465F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002465FC: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x00246600: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x00246604: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00246608: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x0024660C: addiu       $a2, $s0, 0x4
    ctx->r6 = ADD32(ctx->r16, 0X4);
    // 0x00246610: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00246614: jal         0x0020EF2C
    // 0x00246618: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_0020EF2C(rdram, ctx);
        goto after_0;
    // 0x00246618: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x0024661C: lwc1        $f2, 0x1C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x00246620: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x00246624: lwc1        $f1, 0x20($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x00246628: lwc1        $f0, 0x54($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X54);
    // 0x0024662C: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00246630: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x00246634: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00246638: nop

    // 0x0024663C: mul.s       $f3, $f1, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x00246640: add.s       $f2, $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f3.fl;
    // 0x00246644: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00246648: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0024664C: add.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x00246650: swc1        $f1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00246654: jr          $ra
    // 0x00246658: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00246658: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0028DAEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028DAEC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0028DAF0: addiu       $v1, $v1, 0x1390
    ctx->r3 = ADD32(ctx->r3, 0X1390);
    // 0x0028DAF4: lhu         $a0, 0x0($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X0);
    // 0x0028DAF8: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x0028DAFC: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x0028DB00: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0028DB04: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0028DB08: slti        $v0, $v0, 0x18
    ctx->r2 = SIGNED(ctx->r2) < 0X18 ? 1 : 0;
    // 0x0028DB0C: bne         $v0, $zero, L_0028DB20
    if (ctx->r2 != 0) {
        // 0x0028DB10: sll         $v0, $a0, 16
        ctx->r2 = S32(ctx->r4 << 16);
            goto L_0028DB20;
    }
    // 0x0028DB10: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x0028DB14: lhu         $v0, 0x2($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X2);
    // 0x0028DB18: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x0028DB1C: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
L_0028DB20:
    // 0x0028DB20: sra         $a1, $v0, 16
    ctx->r5 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0028DB24: sll         $v1, $a1, 2
    ctx->r3 = S32(ctx->r5 << 2);
    // 0x0028DB28: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028DB2C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0028DB30: lbu         $v0, 0x131A($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X131A);
    // 0x0028DB34: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x0028DB38: beq         $v0, $a0, L_0028DB68
    if (ctx->r2 == ctx->r4) {
        // 0x0028DB3C: nop
    
            goto L_0028DB68;
    }
    // 0x0028DB3C: nop

    // 0x0028DB40: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028DB44: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0028DB48: lbu         $v0, 0x131A($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X131A);
    // 0x0028DB4C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x0028DB50: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028DB54: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0028DB58: sb          $a0, 0xFCB($at)
    MEM_B(0XFCB, ctx->r1) = ctx->r4;
    // 0x0028DB5C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028DB60: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0028DB64: sb          $a0, 0x131A($at)
    MEM_B(0X131A, ctx->r1) = ctx->r4;
L_0028DB68:
    // 0x0028DB68: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028DB6C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0028DB70: lbu         $v0, 0x131B($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X131B);
    // 0x0028DB74: beq         $v0, $a0, L_0028DBA4
    if (ctx->r2 == ctx->r4) {
        // 0x0028DB78: nop
    
            goto L_0028DBA4;
    }
    // 0x0028DB78: nop

    // 0x0028DB7C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028DB80: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0028DB84: lbu         $v0, 0x131B($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X131B);
    // 0x0028DB88: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x0028DB8C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028DB90: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0028DB94: sb          $a0, 0xFCB($at)
    MEM_B(0XFCB, ctx->r1) = ctx->r4;
    // 0x0028DB98: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028DB9C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0028DBA0: sb          $a0, 0x131B($at)
    MEM_B(0X131B, ctx->r1) = ctx->r4;
L_0028DBA4:
    // 0x0028DBA4: jr          $ra
    // 0x0028DBA8: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    return;
    // 0x0028DBA8: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
;}
RECOMP_FUNC void func_004269C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004269C4: jr          $ra
    // 0x004269C8: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    return;
    // 0x004269C8: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
;}
RECOMP_FUNC void func_0045C494(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045C494: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045C498: sw          $zero, 0x99C($at)
    MEM_W(0X99C, ctx->r1) = 0;
    // 0x0045C49C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045C4A0: sw          $zero, 0x964($at)
    MEM_W(0X964, ctx->r1) = 0;
    // 0x0045C4A4: jr          $ra
    // 0x0045C4A8: nop

    return;
    // 0x0045C4A8: nop

;}
RECOMP_FUNC void func_00213A70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00213A70: addiu       $sp, $sp, -0x150
    ctx->r29 = ADD32(ctx->r29, -0X150);
    // 0x00213A74: sw          $a0, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->r4;
    // 0x00213A78: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00213A7C: sw          $s1, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r17;
    // 0x00213A80: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x00213A84: sw          $s7, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r23;
    // 0x00213A88: addu        $s7, $a3, $zero
    ctx->r23 = ADD32(ctx->r7, 0);
    // 0x00213A8C: sw          $s0, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r16;
    // 0x00213A90: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00213A94: sw          $s2, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->r18;
    // 0x00213A98: addu        $s2, $s0, $zero
    ctx->r18 = ADD32(ctx->r16, 0);
    // 0x00213A9C: sw          $fp, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->r30;
    // 0x00213AA0: lw          $fp, 0x160($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X160);
    // 0x00213AA4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x00213AA8: sw          $s3, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->r19;
    // 0x00213AAC: addiu       $s3, $sp, 0x118
    ctx->r19 = ADD32(ctx->r29, 0X118);
    // 0x00213AB0: sw          $ra, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->r31;
    // 0x00213AB4: sw          $s6, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r22;
    // 0x00213AB8: sw          $s5, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->r21;
    // 0x00213ABC: sw          $s4, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->r20;
    // 0x00213AC0: bne         $a0, $zero, L_00213ADC
    if (ctx->r4 != 0) {
        // 0x00213AC4: sw          $zero, 0x120($sp)
        MEM_W(0X120, ctx->r29) = 0;
            goto L_00213ADC;
    }
    // 0x00213AC4: sw          $zero, 0x120($sp)
    MEM_W(0X120, ctx->r29) = 0;
    // 0x00213AC8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00213ACC: jal         0x002132B8
    // 0x00213AD0: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_002132B8(rdram, ctx);
        goto after_0;
    // 0x00213AD0: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_0:
    // 0x00213AD4: j           L_00213BD0
    // 0x00213AD8: addu        $s6, $v0, $zero
    ctx->r22 = ADD32(ctx->r2, 0);
        goto L_00213BD0;
    // 0x00213AD8: addu        $s6, $v0, $zero
    ctx->r22 = ADD32(ctx->r2, 0);
L_00213ADC:
    // 0x00213ADC: jal         0x002017D4
    // 0x00213AE0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00213AE0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x00213AE4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00213AE8: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    // 0x00213AEC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00213AF0: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x00213AF4: beq         $a0, $v0, L_00213BC8
    if (ctx->r4 == ctx->r2) {
        // 0x00213AF8: addiu       $a2, $v1, 0x8
        ctx->r6 = ADD32(ctx->r3, 0X8);
            goto L_00213BC8;
    }
    // 0x00213AF8: addiu       $a2, $v1, 0x8
    ctx->r6 = ADD32(ctx->r3, 0X8);
    // 0x00213AFC: addiu       $t0, $zero, 0x40
    ctx->r8 = ADD32(0, 0X40);
    // 0x00213B00: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x00213B04: addiu       $v1, $v1, 0xC2
    ctx->r3 = ADD32(ctx->r3, 0XC2);
    // 0x00213B08: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
L_00213B0C:
    // 0x00213B0C: lwc1        $f1, 0xC($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XC);
    // 0x00213B10: lwc1        $f0, -0x1A($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, -0X1A);
    // 0x00213B14: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00213B18: nop

    // 0x00213B1C: bc1fl       L_00213BBC
    if (!c1cs) {
        // 0x00213B20: addiu       $v1, $v1, 0xC0
        ctx->r3 = ADD32(ctx->r3, 0XC0);
            goto L_00213BBC;
    }
    goto skip_0;
    // 0x00213B20: addiu       $v1, $v1, 0xC0
    ctx->r3 = ADD32(ctx->r3, 0XC0);
    skip_0:
    // 0x00213B24: lwc1        $f1, 0x0($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X0);
    // 0x00213B28: lwc1        $f0, -0xE($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, -0XE);
    // 0x00213B2C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00213B30: nop

    // 0x00213B34: bc1fl       L_00213BBC
    if (!c1cs) {
        // 0x00213B38: addiu       $v1, $v1, 0xC0
        ctx->r3 = ADD32(ctx->r3, 0XC0);
            goto L_00213BBC;
    }
    goto skip_1;
    // 0x00213B38: addiu       $v1, $v1, 0xC0
    ctx->r3 = ADD32(ctx->r3, 0XC0);
    skip_1:
    // 0x00213B3C: lwc1        $f1, 0x14($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X14);
    // 0x00213B40: lwc1        $f0, -0x12($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, -0X12);
    // 0x00213B44: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00213B48: nop

    // 0x00213B4C: bc1fl       L_00213BBC
    if (!c1cs) {
        // 0x00213B50: addiu       $v1, $v1, 0xC0
        ctx->r3 = ADD32(ctx->r3, 0XC0);
            goto L_00213BBC;
    }
    goto skip_2;
    // 0x00213B50: addiu       $v1, $v1, 0xC0
    ctx->r3 = ADD32(ctx->r3, 0XC0);
    skip_2:
    // 0x00213B54: lwc1        $f1, 0x8($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X8);
    // 0x00213B58: lwc1        $f0, -0x6($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, -0X6);
    // 0x00213B5C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00213B60: nop

    // 0x00213B64: bc1fl       L_00213BBC
    if (!c1cs) {
        // 0x00213B68: addiu       $v1, $v1, 0xC0
        ctx->r3 = ADD32(ctx->r3, 0XC0);
            goto L_00213BBC;
    }
    goto skip_3;
    // 0x00213B68: addiu       $v1, $v1, 0xC0
    ctx->r3 = ADD32(ctx->r3, 0XC0);
    skip_3:
    // 0x00213B6C: lwc1        $f1, 0x10($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X10);
    // 0x00213B70: lwc1        $f0, -0x16($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, -0X16);
    // 0x00213B74: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00213B78: nop

    // 0x00213B7C: bc1fl       L_00213BBC
    if (!c1cs) {
        // 0x00213B80: addiu       $v1, $v1, 0xC0
        ctx->r3 = ADD32(ctx->r3, 0XC0);
            goto L_00213BBC;
    }
    goto skip_4;
    // 0x00213B80: addiu       $v1, $v1, 0xC0
    ctx->r3 = ADD32(ctx->r3, 0XC0);
    skip_4:
    // 0x00213B84: lwc1        $f1, 0x4($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X4);
    // 0x00213B88: lwc1        $f0, -0xA($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, -0XA);
    // 0x00213B8C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00213B90: nop

    // 0x00213B94: bc1fl       L_00213BBC
    if (!c1cs) {
        // 0x00213B98: addiu       $v1, $v1, 0xC0
        ctx->r3 = ADD32(ctx->r3, 0XC0);
            goto L_00213BBC;
    }
    goto skip_5;
    // 0x00213B98: addiu       $v1, $v1, 0xC0
    ctx->r3 = ADD32(ctx->r3, 0XC0);
    skip_5:
    // 0x00213B9C: sw          $a2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r6;
    // 0x00213BA0: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x00213BA4: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00213BA8: beq         $v0, $zero, L_00213BB4
    if (ctx->r2 == 0) {
        // 0x00213BAC: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00213BB4;
    }
    // 0x00213BAC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00213BB0: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_00213BB4:
    // 0x00213BB4: beq         $s0, $t0, L_00213BC8
    if (ctx->r16 == ctx->r8) {
        // 0x00213BB8: addiu       $v1, $v1, 0xC0
        ctx->r3 = ADD32(ctx->r3, 0XC0);
            goto L_00213BC8;
    }
    // 0x00213BB8: addiu       $v1, $v1, 0xC0
    ctx->r3 = ADD32(ctx->r3, 0XC0);
L_00213BBC:
    // 0x00213BBC: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x00213BC0: bne         $a0, $a3, L_00213B0C
    if (ctx->r4 != ctx->r7) {
        // 0x00213BC4: addiu       $a2, $a2, 0xC0
        ctx->r6 = ADD32(ctx->r6, 0XC0);
            goto L_00213B0C;
    }
    // 0x00213BC4: addiu       $a2, $a2, 0xC0
    ctx->r6 = ADD32(ctx->r6, 0XC0);
L_00213BC8:
    // 0x00213BC8: sw          $s0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r16;
    // 0x00213BCC: addu        $s6, $s2, $zero
    ctx->r22 = ADD32(ctx->r18, 0);
L_00213BD0:
    // 0x00213BD0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00213BD4: lw          $a0, 0x150($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X150);
    // 0x00213BD8: jal         0x002017E8
    // 0x00213BDC: addiu       $a2, $sp, 0x11C
    ctx->r6 = ADD32(ctx->r29, 0X11C);
    func_002017E8(rdram, ctx);
        goto after_2;
    // 0x00213BDC: addiu       $a2, $sp, 0x11C
    ctx->r6 = ADD32(ctx->r29, 0X11C);
    after_2:
    // 0x00213BE0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00213BE4: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x00213BE8: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00213BEC: blez        $v0, L_00213C18
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00213BF0: addu        $s1, $s0, $zero
        ctx->r17 = ADD32(ctx->r16, 0);
            goto L_00213C18;
    }
    // 0x00213BF0: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
L_00213BF4:
    // 0x00213BF4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00213BF8: jal         0x002017D4
    // 0x00213BFC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x00213BFC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x00213C00: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00213C04: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x00213C08: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00213C0C: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00213C10: bne         $v0, $zero, L_00213BF4
    if (ctx->r2 != 0) {
        // 0x00213C14: addu        $s1, $s1, $v1
        ctx->r17 = ADD32(ctx->r17, ctx->r3);
            goto L_00213BF4;
    }
    // 0x00213C14: addu        $s1, $s1, $v1
    ctx->r17 = ADD32(ctx->r17, ctx->r3);
L_00213C18:
    // 0x00213C18: addu        $s4, $s1, $zero
    ctx->r20 = ADD32(ctx->r17, 0);
    // 0x00213C1C: blez        $s4, L_00213C5C
    if (SIGNED(ctx->r20) <= 0) {
        // 0x00213C20: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00213C5C;
    }
    // 0x00213C20: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00213C24: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
L_00213C28:
    // 0x00213C28: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00213C2C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x00213C30: sw          $zero, -0x2870($at)
    MEM_W(-0X2870, ctx->r1) = 0;
    // 0x00213C34: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00213C38: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x00213C3C: sw          $zero, -0x286C($at)
    MEM_W(-0X286C, ctx->r1) = 0;
    // 0x00213C40: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00213C44: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x00213C48: sw          $zero, -0x2868($at)
    MEM_W(-0X2868, ctx->r1) = 0;
    // 0x00213C4C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00213C50: slt         $v0, $a0, $s4
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x00213C54: bne         $v0, $zero, L_00213C28
    if (ctx->r2 != 0) {
        // 0x00213C58: addiu       $v1, $v1, 0xC
        ctx->r3 = ADD32(ctx->r3, 0XC);
            goto L_00213C28;
    }
    // 0x00213C58: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
L_00213C5C:
    // 0x00213C5C: beq         $s6, $zero, L_00213D0C
    if (ctx->r22 == 0) {
        // 0x00213C60: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00213D0C;
    }
    // 0x00213C60: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00213C64: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00213C68: blez        $v0, L_00213C94
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00213C6C: addu        $s1, $s0, $zero
        ctx->r17 = ADD32(ctx->r16, 0);
            goto L_00213C94;
    }
    // 0x00213C6C: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
L_00213C70:
    // 0x00213C70: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00213C74: jal         0x002017D4
    // 0x00213C78: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_4;
    // 0x00213C78: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x00213C7C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00213C80: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x00213C84: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00213C88: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00213C8C: bne         $v0, $zero, L_00213C70
    if (ctx->r2 != 0) {
        // 0x00213C90: addu        $s1, $s1, $v1
        ctx->r17 = ADD32(ctx->r17, ctx->r3);
            goto L_00213C70;
    }
    // 0x00213C90: addu        $s1, $s1, $v1
    ctx->r17 = ADD32(ctx->r17, ctx->r3);
L_00213C94:
    // 0x00213C94: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00213C98: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x00213C9C: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x00213CA0: addiu       $a3, $a3, 0x57BC
    ctx->r7 = ADD32(ctx->r7, 0X57BC);
    // 0x00213CA4: sll         $a1, $s1, 2
    ctx->r5 = S32(ctx->r17 << 2);
    // 0x00213CA8: lw          $v0, 0x11C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X11C);
    // 0x00213CAC: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x00213CB0: jal         0x00204EDC
    // 0x00213CB4: addu        $a1, $v0, $a1
    ctx->r5 = ADD32(ctx->r2, ctx->r5);
    func_00204EDC(rdram, ctx);
        goto after_5;
    // 0x00213CB4: addu        $a1, $v0, $a1
    ctx->r5 = ADD32(ctx->r2, ctx->r5);
    after_5:
    // 0x00213CB8: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    // 0x00213CBC: beq         $s5, $zero, L_00213D34
    if (ctx->r21 == 0) {
        // 0x00213CC0: lui         $a0, 0xDEAD
        ctx->r4 = S32(0XDEAD << 16);
            goto L_00213D34;
    }
    // 0x00213CC0: lui         $a0, 0xDEAD
    ctx->r4 = S32(0XDEAD << 16);
    // 0x00213CC4: ori         $a0, $a0, 0xBEEF
    ctx->r4 = ctx->r4 | 0XBEEF;
    // 0x00213CC8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00213CCC: lw          $v1, 0x0($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X0);
    // 0x00213CD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00213CD4: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00213CD8: lw          $a2, 0x11C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X11C);
    // 0x00213CDC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x00213CE0: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x00213CE4: sw          $a0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r4;
    // 0x00213CE8: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x00213CEC: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
    // 0x00213CF0: lw          $a0, 0x0($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X0);
    // 0x00213CF4: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x00213CF8: lw          $v1, 0x8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X8);
    // 0x00213CFC: addu        $s3, $a0, $v0
    ctx->r19 = ADD32(ctx->r4, ctx->r2);
    // 0x00213D00: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x00213D04: j           L_00213D50
    // 0x00213D08: sw          $a0, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r4;
        goto L_00213D50;
    // 0x00213D08: sw          $a0, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r4;
L_00213D0C:
    // 0x00213D0C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00213D10: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x00213D14: lw          $a1, 0x11C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X11C);
    // 0x00213D18: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x00213D1C: addiu       $a3, $a3, 0x57BC
    ctx->r7 = ADD32(ctx->r7, 0X57BC);
    // 0x00213D20: jal         0x00204EDC
    // 0x00213D24: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    func_00204EDC(rdram, ctx);
        goto after_6;
    // 0x00213D24: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    after_6:
    // 0x00213D28: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    // 0x00213D2C: bne         $s5, $zero, L_00213D3C
    if (ctx->r21 != 0) {
        // 0x00213D30: addu        $a1, $s2, $zero
        ctx->r5 = ADD32(ctx->r18, 0);
            goto L_00213D3C;
    }
    // 0x00213D30: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
L_00213D34:
    // 0x00213D34: j           L_00213E60
    // 0x00213D38: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_00213E60;
    // 0x00213D38: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00213D3C:
    // 0x00213D3C: lw          $v0, 0x0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X0);
    // 0x00213D40: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x00213D44: lw          $v0, 0x0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X0);
    // 0x00213D48: lw          $a2, 0x11C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X11C);
    // 0x00213D4C: addiu       $s3, $v0, 0x8
    ctx->r19 = ADD32(ctx->r2, 0X8);
L_00213D50:
    // 0x00213D50: jal         0x0029E460
    // 0x00213D54: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_0029E460(rdram, ctx);
        goto after_7;
    // 0x00213D54: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_7:
    // 0x00213D58: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00213D5C: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x00213D60: addiu       $s0, $s0, -0x2870
    ctx->r16 = ADD32(ctx->r16, -0X2870);
    // 0x00213D64: lw          $a0, 0x150($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X150);
    // 0x00213D68: jal         0x00213684
    // 0x00213D6C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00213684(rdram, ctx);
        goto after_8;
    // 0x00213D6C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_8:
    // 0x00213D70: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00213D74: lw          $v0, -0x3520($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3520);
    // 0x00213D78: beq         $v0, $zero, L_00213E08
    if (ctx->r2 == 0) {
        // 0x00213D7C: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_00213E08;
    }
    // 0x00213D7C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00213D80: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00213D84: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x00213D88: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x00213D8C: beq         $v0, $zero, L_00213DA8
    if (ctx->r2 == 0) {
        // 0x00213D90: addu        $a1, $s7, $zero
        ctx->r5 = ADD32(ctx->r23, 0);
            goto L_00213DA8;
    }
    // 0x00213D90: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    // 0x00213D94: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x00213D98: jal         0x00212DA4
    // 0x00213D9C: addu        $a3, $fp, $zero
    ctx->r7 = ADD32(ctx->r30, 0);
    func_00212DA4(rdram, ctx);
        goto after_9;
    // 0x00213D9C: addu        $a3, $fp, $zero
    ctx->r7 = ADD32(ctx->r30, 0);
    after_9:
    // 0x00213DA0: j           L_00213E38
    // 0x00213DA4: nop

        goto L_00213E38;
    // 0x00213DA4: nop

L_00213DA8:
    // 0x00213DA8: lw          $a1, 0x118($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X118);
    // 0x00213DAC: bne         $a1, $zero, L_00213E24
    if (ctx->r5 != 0) {
        // 0x00213DB0: addiu       $a0, $sp, 0x18
        ctx->r4 = ADD32(ctx->r29, 0X18);
            goto L_00213E24;
    }
    // 0x00213DB0: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x00213DB4: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x00213DB8: lui         $s4, 0x800F
    ctx->r20 = S32(0X800F << 16);
    // 0x00213DBC: addiu       $s4, $s4, 0x7078
    ctx->r20 = ADD32(ctx->r20, 0X7078);
    // 0x00213DC0: lw          $v0, 0x14A8($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X14A8);
    // 0x00213DC4: slt         $v0, $a1, $v0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00213DC8: beq         $v0, $zero, L_00213E00
    if (ctx->r2 == 0) {
        // 0x00213DCC: addu        $s1, $s2, $zero
        ctx->r17 = ADD32(ctx->r18, 0);
            goto L_00213E00;
    }
    // 0x00213DCC: addu        $s1, $s2, $zero
    ctx->r17 = ADD32(ctx->r18, 0);
    // 0x00213DD0: addu        $s0, $s4, $zero
    ctx->r16 = ADD32(ctx->r20, 0);
L_00213DD4:
    // 0x00213DD4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x00213DD8: lw          $v0, 0x14AC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14AC);
    // 0x00213DDC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x00213DE0: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x00213DE4: jal         0x002017D4
    // 0x00213DE8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    func_002017D4(rdram, ctx);
        goto after_10;
    // 0x00213DE8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    after_10:
    // 0x00213DEC: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x00213DF0: lw          $v0, 0x14A8($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X14A8);
    // 0x00213DF4: slt         $v0, $s1, $v0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00213DF8: bne         $v0, $zero, L_00213DD4
    if (ctx->r2 != 0) {
        // 0x00213DFC: addu        $s2, $s2, $v1
        ctx->r18 = ADD32(ctx->r18, ctx->r3);
            goto L_00213DD4;
    }
    // 0x00213DFC: addu        $s2, $s2, $v1
    ctx->r18 = ADD32(ctx->r18, ctx->r3);
L_00213E00:
    // 0x00213E00: bne         $s2, $zero, L_00213E38
    if (ctx->r18 != 0) {
        // 0x00213E04: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_00213E38;
    }
    // 0x00213E04: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_00213E08:
    // 0x00213E08: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    // 0x00213E0C: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x00213E10: addiu       $a2, $a2, -0x2870
    ctx->r6 = ADD32(ctx->r6, -0X2870);
    // 0x00213E14: jal         0x002130A8
    // 0x00213E18: addu        $a3, $fp, $zero
    ctx->r7 = ADD32(ctx->r30, 0);
    func_002130A8(rdram, ctx);
        goto after_11;
    // 0x00213E18: addu        $a3, $fp, $zero
    ctx->r7 = ADD32(ctx->r30, 0);
    after_11:
    // 0x00213E1C: j           L_00213E38
    // 0x00213E20: nop

        goto L_00213E38;
    // 0x00213E20: nop

L_00213E24:
    // 0x00213E24: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x00213E28: addu        $a3, $s7, $zero
    ctx->r7 = ADD32(ctx->r23, 0);
    // 0x00213E2C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00213E30: jal         0x0021285C
    // 0x00213E34: sw          $fp, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r30;
    func_0021285C(rdram, ctx);
        goto after_12;
    // 0x00213E34: sw          $fp, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r30;
    after_12:
L_00213E38:
    // 0x00213E38: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x00213E3C: addiu       $a1, $a1, -0x2870
    ctx->r5 = ADD32(ctx->r5, -0X2870);
    // 0x00213E40: jal         0x0021375C
    // 0x00213E44: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_0021375C(rdram, ctx);
        goto after_13;
    // 0x00213E44: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_13:
    // 0x00213E48: beq         $s6, $zero, L_00213E60
    if (ctx->r22 == 0) {
        // 0x00213E4C: addu        $v0, $s5, $zero
        ctx->r2 = ADD32(ctx->r21, 0);
            goto L_00213E60;
    }
    // 0x00213E4C: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x00213E50: lw          $a1, 0x120($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X120);
    // 0x00213E54: jal         0x00212F98
    // 0x00213E58: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00212F98(rdram, ctx);
        goto after_14;
    // 0x00213E58: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_14:
    // 0x00213E5C: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
L_00213E60:
    // 0x00213E60: lw          $ra, 0x14C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14C);
    // 0x00213E64: lw          $fp, 0x148($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X148);
    // 0x00213E68: lw          $s7, 0x144($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X144);
    // 0x00213E6C: lw          $s6, 0x140($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X140);
    // 0x00213E70: lw          $s5, 0x13C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X13C);
    // 0x00213E74: lw          $s4, 0x138($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X138);
    // 0x00213E78: lw          $s3, 0x134($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X134);
    // 0x00213E7C: lw          $s2, 0x130($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X130);
    // 0x00213E80: lw          $s1, 0x12C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X12C);
    // 0x00213E84: lw          $s0, 0x128($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X128);
    // 0x00213E88: jr          $ra
    // 0x00213E8C: addiu       $sp, $sp, 0x150
    ctx->r29 = ADD32(ctx->r29, 0X150);
    return;
    // 0x00213E8C: addiu       $sp, $sp, 0x150
    ctx->r29 = ADD32(ctx->r29, 0X150);
;}
RECOMP_FUNC void func_0028EA40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028EA40: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0028EA44: addiu       $v1, $v1, 0x1378
    ctx->r3 = ADD32(ctx->r3, 0X1378);
    // 0x0028EA48: beq         $v1, $zero, L_0028EA80
    if (ctx->r3 == 0) {
        // 0x0028EA4C: nop
    
            goto L_0028EA80;
    }
    // 0x0028EA4C: nop

L_0028EA50:
    // 0x0028EA50: lhu         $a1, 0x4($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X4);
    // 0x0028EA54: sltu        $v0, $a0, $a1
    ctx->r2 = ctx->r4 < ctx->r5 ? 1 : 0;
    // 0x0028EA58: bne         $v0, $zero, L_0028EA74
    if (ctx->r2 != 0) {
        // 0x0028EA5C: nop
    
            goto L_0028EA74;
    }
    // 0x0028EA5C: nop

    // 0x0028EA60: lhu         $v0, 0x6($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X6);
    // 0x0028EA64: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x0028EA68: sltu        $v0, $a0, $v0
    ctx->r2 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x0028EA6C: bne         $v0, $zero, L_0028EA80
    if (ctx->r2 != 0) {
        // 0x0028EA70: nop
    
            goto L_0028EA80;
    }
    // 0x0028EA70: nop

L_0028EA74:
    // 0x0028EA74: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x0028EA78: bne         $v1, $zero, L_0028EA50
    if (ctx->r3 != 0) {
        // 0x0028EA7C: nop
    
            goto L_0028EA50;
    }
    // 0x0028EA7C: nop

L_0028EA80:
    // 0x0028EA80: jr          $ra
    // 0x0028EA84: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    return;
    // 0x0028EA84: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
;}
RECOMP_FUNC void func_0040B180(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040B180: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0040B184: lui         $a3, 0x8013
    ctx->r7 = S32(0X8013 << 16);
    // 0x0040B188: addiu       $a3, $a3, -0x490
    ctx->r7 = ADD32(ctx->r7, -0X490);
    // 0x0040B18C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0040B190: lw          $v0, 0x4($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X4);
    // 0x0040B194: blez        $v0, L_0040B1C0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040B198: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0040B1C0;
    }
    // 0x0040B198: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0040B19C: addu        $a2, $a3, $zero
    ctx->r6 = ADD32(ctx->r7, 0);
L_0040B1A0:
    // 0x0040B1A0: lw          $v0, 0x8($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X8);
    // 0x0040B1A4: sw          $zero, 0x254($v0)
    MEM_W(0X254, ctx->r2) = 0;
    // 0x0040B1A8: sw          $zero, 0x250($v0)
    MEM_W(0X250, ctx->r2) = 0;
    // 0x0040B1AC: lw          $v0, 0x4($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X4);
    // 0x0040B1B0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0040B1B4: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0040B1B8: bne         $v0, $zero, L_0040B1A0
    if (ctx->r2 != 0) {
        // 0x0040B1BC: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_0040B1A0;
    }
    // 0x0040B1BC: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
L_0040B1C0:
    // 0x0040B1C0: jal         0x0040A5B4
    // 0x0040B1C4: nop

    func_0040A5B4(rdram, ctx);
        goto after_0;
    // 0x0040B1C4: nop

    after_0:
    // 0x0040B1C8: addiu       $a0, $zero, 0xD2
    ctx->r4 = ADD32(0, 0XD2);
    // 0x0040B1CC: lui         $a1, 0x41
    ctx->r5 = S32(0X41 << 16);
    // 0x0040B1D0: addiu       $a1, $a1, -0x390C
    ctx->r5 = ADD32(ctx->r5, -0X390C);
    // 0x0040B1D4: jal         0x00283FF8
    // 0x0040B1D8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_00283FF8(rdram, ctx);
        goto after_1;
    // 0x0040B1D8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x0040B1DC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0040B1E0: jr          $ra
    // 0x0040B1E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040B1E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002233A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002233A8: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x002233AC: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x002233B0: addu        $s7, $a2, $zero
    ctx->r23 = ADD32(ctx->r6, 0);
    // 0x002233B4: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x002233B8: addu        $fp, $a3, $zero
    ctx->r30 = ADD32(ctx->r7, 0);
    // 0x002233BC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x002233C0: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x002233C4: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x002233C8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x002233CC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x002233D0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x002233D4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x002233D8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x002233DC: sdc1        $f24, 0x60($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X60, ctx->r29);
    // 0x002233E0: sdc1        $f23, 0x58($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X58, ctx->r29);
    // 0x002233E4: sdc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X50, ctx->r29);
    // 0x002233E8: sdc1        $f21, 0x48($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X48, ctx->r29);
    // 0x002233EC: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x002233F0: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x002233F4: lwc1        $f1, 0x0($s7)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r23, 0X0);
    // 0x002233F8: lwc1        $f0, 0x0($fp)
    ctx->f0.u32l = MEM_W(ctx->r30, 0X0);
    // 0x002233FC: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x00223400: nop

    // 0x00223404: bc1f        L_0022343C
    if (!c1cs) {
        // 0x00223408: addu        $s6, $a1, $zero
        ctx->r22 = ADD32(ctx->r5, 0);
            goto L_0022343C;
    }
    // 0x00223408: addu        $s6, $a1, $zero
    ctx->r22 = ADD32(ctx->r5, 0);
    // 0x0022340C: lwc1        $f1, 0x4($s7)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r23, 0X4);
    // 0x00223410: lwc1        $f0, 0x4($fp)
    ctx->f0.u32l = MEM_W(ctx->r30, 0X4);
    // 0x00223414: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x00223418: nop

    // 0x0022341C: bc1f        L_0022343C
    if (!c1cs) {
        // 0x00223420: nop
    
            goto L_0022343C;
    }
    // 0x00223420: nop

    // 0x00223424: lwc1        $f1, 0x8($s7)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r23, 0X8);
    // 0x00223428: lwc1        $f0, 0x8($fp)
    ctx->f0.u32l = MEM_W(ctx->r30, 0X8);
    // 0x0022342C: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x00223430: nop

    // 0x00223434: bc1t        L_00223780
    if (c1cs) {
        // 0x00223438: nop
    
            goto L_00223780;
    }
    // 0x00223438: nop

L_0022343C:
    // 0x0022343C: lw          $v0, 0x14($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X14);
    // 0x00223440: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00223444: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x00223448: xori        $v1, $v0, 0xB
    ctx->r3 = ctx->r2 ^ 0XB;
    // 0x0022344C: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x00223450: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x00223454: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x00223458: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x0022345C: jal         0x0026841C
    // 0x00223460: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_0026841C(rdram, ctx);
        goto after_0;
    // 0x00223460: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_0:
    // 0x00223464: lwc1        $f1, 0x8($s6)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r22, 0X8);
    // 0x00223468: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x0022346C: jal         0x002671B4
    // 0x00223470: add.s       $f23, $f1, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f23.fl = ctx->f1.fl + ctx->f0.fl;
    func_002671B4(rdram, ctx);
        goto after_1;
    // 0x00223470: add.s       $f23, $f1, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f23.fl = ctx->f1.fl + ctx->f0.fl;
    after_1:
    // 0x00223474: lw          $t0, 0x68($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X68);
    // 0x00223478: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
    // 0x0022347C: lw          $v0, 0xF84($t0)
    ctx->r2 = MEM_W(ctx->r8, 0XF84);
    // 0x00223480: blez        $v0, L_00223780
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00223484: add.s       $f24, $f23, $f0
        CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = ctx->f23.fl + ctx->f0.fl;
            goto L_00223780;
    }
    // 0x00223484: add.s       $f24, $f23, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = ctx->f23.fl + ctx->f0.fl;
L_00223488:
    // 0x00223488: lw          $t0, 0x68($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X68);
    // 0x0022348C: sll         $v0, $s5, 2
    ctx->r2 = S32(ctx->r21 << 2);
    // 0x00223490: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x00223494: lw          $s0, 0xF04($v0)
    ctx->r16 = MEM_W(ctx->r2, 0XF04);
    // 0x00223498: beq         $s0, $s6, L_0022376C
    if (ctx->r16 == ctx->r22) {
        // 0x0022349C: addu        $s4, $zero, $zero
        ctx->r20 = ADD32(0, 0);
            goto L_0022376C;
    }
    // 0x0022349C: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x002234A0: addu        $s1, $s4, $zero
    ctx->r17 = ADD32(ctx->r20, 0);
    // 0x002234A4: jal         0x0026841C
    // 0x002234A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0026841C(rdram, ctx);
        goto after_2;
    // 0x002234A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x002234AC: lwc1        $f1, 0x8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X8);
    // 0x002234B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002234B4: jal         0x002671B4
    // 0x002234B8: add.s       $f21, $f1, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f1.fl + ctx->f0.fl;
    func_002671B4(rdram, ctx);
        goto after_3;
    // 0x002234B8: add.s       $f21, $f1, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f1.fl + ctx->f0.fl;
    after_3:
    // 0x002234BC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x002234C0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x002234C4: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x002234C8: beq         $v1, $v0, L_00223554
    if (ctx->r3 == ctx->r2) {
        // 0x002234CC: add.s       $f0, $f21, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f21.fl + ctx->f0.fl;
            goto L_00223554;
    }
    // 0x002234CC: add.s       $f0, $f21, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f21.fl + ctx->f0.fl;
    // 0x002234D0: slti        $v0, $v1, 0x8
    ctx->r2 = SIGNED(ctx->r3) < 0X8 ? 1 : 0;
    // 0x002234D4: beq         $v0, $zero, L_002234EC
    if (ctx->r2 == 0) {
        // 0x002234D8: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_002234EC;
    }
    // 0x002234D8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x002234DC: beq         $v1, $v0, L_00223500
    if (ctx->r3 == ctx->r2) {
        // 0x002234E0: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_00223500;
    }
    // 0x002234E0: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x002234E4: j           L_00223580
    // 0x002234E8: nop

        goto L_00223580;
    // 0x002234E8: nop

L_002234EC:
    // 0x002234EC: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x002234F0: beq         $v1, $t0, L_00223528
    if (ctx->r3 == ctx->r8) {
        // 0x002234F4: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_00223528;
    }
    // 0x002234F4: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x002234F8: j           L_00223580
    // 0x002234FC: nop

        goto L_00223580;
    // 0x002234FC: nop

L_00223500:
    // 0x00223500: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x00223504: addu        $s3, $s4, $zero
    ctx->r19 = ADD32(ctx->r20, 0);
    // 0x00223508: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0022350C: lwc1        $f5, 0x20($a0)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r4, 0X20);
    // 0x00223510: lwc1        $f20, 0x24($a0)
    ctx->f20.u32l = MEM_W(ctx->r4, 0X24);
    // 0x00223514: andi        $a0, $v0, 0x4
    ctx->r4 = ctx->r2 & 0X4;
    // 0x00223518: andi        $v1, $v0, 0x8
    ctx->r3 = ctx->r2 & 0X8;
    // 0x0022351C: andi        $a2, $v0, 0x10
    ctx->r6 = ctx->r2 & 0X10;
    // 0x00223520: j           L_0022359C
    // 0x00223524: andi        $a1, $v0, 0x20
    ctx->r5 = ctx->r2 & 0X20;
        goto L_0022359C;
    // 0x00223524: andi        $a1, $v0, 0x20
    ctx->r5 = ctx->r2 & 0X20;
L_00223528:
    // 0x00223528: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x0022352C: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x00223530: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x00223534: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00223538: addu        $s1, $s2, $zero
    ctx->r17 = ADD32(ctx->r18, 0);
    // 0x0022353C: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00223540: lwc1        $f5, 0x24($a0)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r4, 0X24);
    // 0x00223544: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x00223548: andi        $a0, $v0, 0x4
    ctx->r4 = ctx->r2 & 0X4;
    // 0x0022354C: j           L_0022359C
    // 0x00223550: andi        $v1, $v0, 0x8
    ctx->r3 = ctx->r2 & 0X8;
        goto L_0022359C;
    // 0x00223550: andi        $v1, $v0, 0x8
    ctx->r3 = ctx->r2 & 0X8;
L_00223554:
    // 0x00223554: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x00223558: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x0022355C: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x00223560: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00223564: addu        $s1, $s2, $zero
    ctx->r17 = ADD32(ctx->r18, 0);
    // 0x00223568: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0022356C: lwc1        $f5, 0x28($a0)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r4, 0X28);
    // 0x00223570: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x00223574: andi        $a0, $v0, 0x8
    ctx->r4 = ctx->r2 & 0X8;
    // 0x00223578: j           L_0022359C
    // 0x0022357C: andi        $v1, $v0, 0x10
    ctx->r3 = ctx->r2 & 0X10;
        goto L_0022359C;
    // 0x0022357C: andi        $v1, $v0, 0x10
    ctx->r3 = ctx->r2 & 0X10;
L_00223580:
    // 0x00223580: mtc1        $zero, $f5
    ctx->f_odd[(5 - 1) * 2] = 0;
    // 0x00223584: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00223588: addu        $v1, $s2, $zero
    ctx->r3 = ADD32(ctx->r18, 0);
    // 0x0022358C: addu        $s3, $s2, $zero
    ctx->r19 = ADD32(ctx->r18, 0);
    // 0x00223590: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x00223594: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00223598: mov.s       $f20, $f5
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 5);
    ctx->f20.fl = ctx->f5.fl;
L_0022359C:
    // 0x0022359C: beq         $s1, $zero, L_002235CC
    if (ctx->r17 == 0) {
        // 0x002235A0: nop
    
            goto L_002235CC;
    }
    // 0x002235A0: nop

    // 0x002235A4: c.lt.s      $f24, $f21
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f24.fl < ctx->f21.fl;
    // 0x002235A8: nop

    // 0x002235AC: bc1t        L_002235C4
    if (c1cs) {
        // 0x002235B0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002235C4;
    }
    // 0x002235B0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x002235B4: c.lt.s      $f0, $f23
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 23);
    c1cs = ctx->f0.fl < ctx->f23.fl;
    // 0x002235B8: nop

    // 0x002235BC: bc1f        L_002235CC
    if (!c1cs) {
        // 0x002235C0: nop
    
            goto L_002235CC;
    }
    // 0x002235C0: nop

L_002235C4:
    // 0x002235C4: j           L_0022361C
    // 0x002235C8: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
        goto L_0022361C;
    // 0x002235C8: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
L_002235CC:
    // 0x002235CC: lw          $t0, 0x10($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X10);
    // 0x002235D0: beq         $t0, $zero, L_002235E0
    if (ctx->r8 == 0) {
        // 0x002235D4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002235E0;
    }
    // 0x002235D4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x002235D8: bnel        $a0, $zero, L_002235F8
    if (ctx->r4 != 0) {
        // 0x002235DC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002235F8;
    }
    goto skip_0;
    // 0x002235DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
L_002235E0:
    // 0x002235E0: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x002235E4: beq         $t0, $zero, L_002235F4
    if (ctx->r8 == 0) {
        // 0x002235E8: nop
    
            goto L_002235F4;
    }
    // 0x002235E8: nop

    // 0x002235EC: bnel        $v1, $zero, L_002235F4
    if (ctx->r3 != 0) {
        // 0x002235F0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002235F4;
    }
    goto skip_1;
    // 0x002235F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_1:
L_002235F4:
    // 0x002235F4: lw          $t0, 0x10($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X10);
L_002235F8:
    // 0x002235F8: beq         $t0, $zero, L_00223608
    if (ctx->r8 == 0) {
        // 0x002235FC: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_00223608;
    }
    // 0x002235FC: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00223600: bnel        $a2, $zero, L_0022361C
    if (ctx->r6 != 0) {
        // 0x00223604: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_0022361C;
    }
    goto skip_2;
    // 0x00223604: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    skip_2:
L_00223608:
    // 0x00223608: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x0022360C: beq         $t0, $zero, L_0022361C
    if (ctx->r8 == 0) {
        // 0x00223610: nop
    
            goto L_0022361C;
    }
    // 0x00223610: nop

    // 0x00223614: bnel        $a1, $zero, L_0022361C
    if (ctx->r5 != 0) {
        // 0x00223618: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_0022361C;
    }
    goto skip_3;
    // 0x00223618: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    skip_3:
L_0022361C:
    // 0x0022361C: bne         $v0, $zero, L_0022362C
    if (ctx->r2 != 0) {
        // 0x00223620: nop
    
            goto L_0022362C;
    }
    // 0x00223620: nop

    // 0x00223624: beq         $s1, $zero, L_00223768
    if (ctx->r17 == 0) {
        // 0x00223628: nop
    
            goto L_00223768;
    }
    // 0x00223628: nop

L_0022362C:
    // 0x0022362C: lwc1        $f3, 0x0($s7)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r23, 0X0);
    // 0x00223630: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x00223634: sub.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f3.fl - ctx->f0.fl;
    // 0x00223638: mul.s       $f3, $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f3.fl);
    // 0x0022363C: lwc1        $f2, 0x8($s7)
    ctx->f2.u32l = MEM_W(ctx->r23, 0X8);
    // 0x00223640: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x00223644: sub.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f4.fl;
    // 0x00223648: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x0022364C: lwc1        $f1, 0x0($fp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r30, 0X0);
    // 0x00223650: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00223654: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x00223658: lwc1        $f0, 0x8($fp)
    ctx->f0.u32l = MEM_W(ctx->r30, 0X8);
    // 0x0022365C: sub.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x00223660: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00223664: add.s       $f22, $f3, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = ctx->f3.fl + ctx->f2.fl;
    // 0x00223668: beq         $v0, $zero, L_00223700
    if (ctx->r2 == 0) {
        // 0x0022366C: add.s       $f21, $f1, $f0
        CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f1.fl + ctx->f0.fl;
            goto L_00223700;
    }
    // 0x0022366C: add.s       $f21, $f1, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00223670: beq         $s4, $zero, L_002236A4
    if (ctx->r20 == 0) {
        // 0x00223674: nop
    
            goto L_002236A4;
    }
    // 0x00223674: nop

    // 0x00223678: mul.s       $f0, $f5, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = MUL_S(ctx->f5.fl, ctx->f5.fl);
    // 0x0022367C: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x00223680: nop

    // 0x00223684: bc1f        L_002236BC
    if (!c1cs) {
        // 0x00223688: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_002236BC;
    }
    // 0x00223688: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0022368C: c.le.s      $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f21.fl <= ctx->f0.fl;
    // 0x00223690: nop

    // 0x00223694: bc1tl       L_002236BC
    if (c1cs) {
        // 0x00223698: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_002236BC;
    }
    goto skip_4;
    // 0x00223698: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    skip_4:
    // 0x0022369C: j           L_002236BC
    // 0x002236A0: nop

        goto L_002236BC;
    // 0x002236A0: nop

L_002236A4:
    // 0x002236A4: mul.s       $f0, $f5, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = MUL_S(ctx->f5.fl, ctx->f5.fl);
    // 0x002236A8: c.le.s      $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f21.fl <= ctx->f0.fl;
    // 0x002236AC: nop

    // 0x002236B0: bc1t        L_002236BC
    if (c1cs) {
        // 0x002236B4: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_002236BC;
    }
    // 0x002236B4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x002236B8: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_002236BC:
    // 0x002236BC: beq         $v1, $zero, L_00223700
    if (ctx->r3 == 0) {
        // 0x002236C0: addiu       $t0, $zero, 0xA
        ctx->r8 = ADD32(0, 0XA);
            goto L_00223700;
    }
    // 0x002236C0: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x002236C4: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x002236C8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x002236CC: bne         $v0, $t0, L_002236EC
    if (ctx->r2 != ctx->r8) {
        // 0x002236D0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002236EC;
    }
    // 0x002236D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002236D4: bne         $s2, $v0, L_002236EC
    if (ctx->r18 != ctx->r2) {
        // 0x002236D8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_002236EC;
    }
    // 0x002236D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002236DC: addiu       $a1, $s0, 0x140
    ctx->r5 = ADD32(ctx->r16, 0X140);
    // 0x002236E0: jal         0x00265F90
    // 0x002236E4: addu        $a2, $s6, $zero
    ctx->r6 = ADD32(ctx->r22, 0);
    func_00265F90(rdram, ctx);
        goto after_4;
    // 0x002236E4: addu        $a2, $s6, $zero
    ctx->r6 = ADD32(ctx->r22, 0);
    after_4:
    // 0x002236E8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_002236EC:
    // 0x002236EC: beq         $v1, $zero, L_00223700
    if (ctx->r3 == 0) {
        // 0x002236F0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00223700;
    }
    // 0x002236F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002236F4: addiu       $a1, $s0, 0x140
    ctx->r5 = ADD32(ctx->r16, 0X140);
    // 0x002236F8: jal         0x00243414
    // 0x002236FC: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_00243414(rdram, ctx);
        goto after_5;
    // 0x002236FC: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_5:
L_00223700:
    // 0x00223700: beq         $s1, $zero, L_00223768
    if (ctx->r17 == 0) {
        // 0x00223704: nop
    
            goto L_00223768;
    }
    // 0x00223704: nop

    // 0x00223708: beq         $s4, $zero, L_0022373C
    if (ctx->r20 == 0) {
        // 0x0022370C: nop
    
            goto L_0022373C;
    }
    // 0x0022370C: nop

    // 0x00223710: mul.s       $f0, $f20, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x00223714: c.le.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl <= ctx->f0.fl;
    // 0x00223718: nop

    // 0x0022371C: bc1f        L_00223754
    if (!c1cs) {
        // 0x00223720: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00223754;
    }
    // 0x00223720: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00223724: c.lt.s      $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f0.fl < ctx->f21.fl;
    // 0x00223728: nop

    // 0x0022372C: bc1tl       L_00223754
    if (c1cs) {
        // 0x00223730: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_00223754;
    }
    goto skip_5;
    // 0x00223730: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    skip_5:
    // 0x00223734: j           L_00223754
    // 0x00223738: nop

        goto L_00223754;
    // 0x00223738: nop

L_0022373C:
    // 0x0022373C: mul.s       $f0, $f20, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x00223740: c.lt.s      $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f0.fl < ctx->f21.fl;
    // 0x00223744: nop

    // 0x00223748: bc1t        L_00223754
    if (c1cs) {
        // 0x0022374C: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_00223754;
    }
    // 0x0022374C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00223750: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_00223754:
    // 0x00223754: beq         $v1, $zero, L_00223768
    if (ctx->r3 == 0) {
        // 0x00223758: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00223768;
    }
    // 0x00223758: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022375C: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // 0x00223760: jal         0x00243414
    // 0x00223764: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_00243414(rdram, ctx);
        goto after_6;
    // 0x00223764: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_6:
L_00223768:
    // 0x00223768: lw          $t0, 0x68($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X68);
L_0022376C:
    // 0x0022376C: lw          $v0, 0xF84($t0)
    ctx->r2 = MEM_W(ctx->r8, 0XF84);
    // 0x00223770: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x00223774: slt         $v0, $s5, $v0
    ctx->r2 = SIGNED(ctx->r21) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00223778: bne         $v0, $zero, L_00223488
    if (ctx->r2 != 0) {
        // 0x0022377C: nop
    
            goto L_00223488;
    }
    // 0x0022377C: nop

L_00223780:
    // 0x00223780: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x00223784: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x00223788: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x0022378C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x00223790: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x00223794: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x00223798: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x0022379C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x002237A0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x002237A4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x002237A8: ldc1        $f24, 0x60($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X60);
    // 0x002237AC: ldc1        $f23, 0x58($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X58);
    // 0x002237B0: ldc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X50);
    // 0x002237B4: ldc1        $f21, 0x48($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X48);
    // 0x002237B8: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x002237BC: jr          $ra
    // 0x002237C0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x002237C0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_00260038(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00260038: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0026003C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00260040: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x00260044: beq         $v0, $zero, L_00260054
    if (ctx->r2 == 0) {
        // 0x00260048: nop
    
            goto L_00260054;
    }
    // 0x00260048: nop

    // 0x0026004C: jal         0x00243414
    // 0x00260050: addiu       $a2, $zero, 0x31
    ctx->r6 = ADD32(0, 0X31);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00260050: addiu       $a2, $zero, 0x31
    ctx->r6 = ADD32(0, 0X31);
    after_0:
L_00260054:
    // 0x00260054: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00260058: jr          $ra
    // 0x0026005C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0026005C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0045E630(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_0027CAB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027CAB0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0027CAB4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0027CAB8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0027CABC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0027CAC0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x0027CAC4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0027CAC8: lw          $s2, 0x58($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X58);
    // 0x0027CACC: beq         $s2, $zero, L_0027D148
    if (ctx->r18 == 0) {
        // 0x0027CAD0: nop
    
            goto L_0027D148;
    }
    // 0x0027CAD0: nop

    // 0x0027CAD4: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0027CAD8: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0027CADC: jal         0x0022425C
    // 0x0027CAE0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_0022425C(rdram, ctx);
        goto after_0;
    // 0x0027CAE0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_0:
    // 0x0027CAE4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0027CAE8: beq         $s0, $zero, L_0027D148
    if (ctx->r16 == 0) {
        // 0x0027CAEC: nop
    
            goto L_0027D148;
    }
    // 0x0027CAEC: nop

    // 0x0027CAF0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0027CAF4: lw          $v0, -0x535C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X535C);
    // 0x0027CAF8: bne         $v0, $zero, L_0027CB6C
    if (ctx->r2 != 0) {
        // 0x0027CAFC: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_0027CB6C;
    }
    // 0x0027CAFC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0027CB00: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0027CB04: lw          $v0, -0x674C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X674C);
    // 0x0027CB08: bne         $s1, $v0, L_0027CB6C
    if (ctx->r17 != ctx->r2) {
        // 0x0027CB0C: addiu       $v0, $zero, 0xD
        ctx->r2 = ADD32(0, 0XD);
            goto L_0027CB6C;
    }
    // 0x0027CB0C: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x0027CB10: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0027CB14: lw          $v1, -0x5378($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5378);
    // 0x0027CB18: bne         $v1, $v0, L_0027CB6C
    if (ctx->r3 != ctx->r2) {
        // 0x0027CB1C: nop
    
            goto L_0027CB6C;
    }
    // 0x0027CB1C: nop

    // 0x0027CB20: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0027CB24: lw          $v0, -0x5374($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5374);
    // 0x0027CB28: bne         $v0, $v1, L_0027CB6C
    if (ctx->r2 != ctx->r3) {
        // 0x0027CB2C: nop
    
            goto L_0027CB6C;
    }
    // 0x0027CB2C: nop

    // 0x0027CB30: jal         0x00284358
    // 0x0027CB34: nop

    func_00284358(rdram, ctx);
        goto after_1;
    // 0x0027CB34: nop

    after_1:
    // 0x0027CB38: bne         $v0, $zero, L_0027CB4C
    if (ctx->r2 != 0) {
        // 0x0027CB3C: nop
    
            goto L_0027CB4C;
    }
    // 0x0027CB3C: nop

    // 0x0027CB40: lbu         $a0, 0x5B($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X5B);
    // 0x0027CB44: jal         0x00275950
    // 0x0027CB48: nop

    func_00275950(rdram, ctx);
        goto after_2;
    // 0x0027CB48: nop

    after_2:
L_0027CB4C:
    // 0x0027CB4C: jal         0x00284330
    // 0x0027CB50: nop

    func_00284330(rdram, ctx);
        goto after_3;
    // 0x0027CB50: nop

    after_3:
    // 0x0027CB54: bne         $v0, $zero, L_0027CB6C
    if (ctx->r2 != 0) {
        // 0x0027CB58: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_0027CB6C;
    }
    // 0x0027CB58: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0027CB5C: lbu         $a0, 0x5A($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X5A);
    // 0x0027CB60: jal         0x002759C4
    // 0x0027CB64: nop

    func_002759C4(rdram, ctx);
        goto after_4;
    // 0x0027CB64: nop

    after_4:
    // 0x0027CB68: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_0027CB6C:
    // 0x0027CB6C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0027CB70: lw          $a0, -0x6770($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X6770);
    // 0x0027CB74: beq         $a0, $zero, L_0027CB94
    if (ctx->r4 == 0) {
        // 0x0027CB78: addu        $a3, $a2, $zero
        ctx->r7 = ADD32(ctx->r6, 0);
            goto L_0027CB94;
    }
    // 0x0027CB78: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
L_0027CB7C:
    // 0x0027CB7C: lw          $v0, 0x51C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X51C);
    // 0x0027CB80: beq         $v0, $s1, L_0027CB98
    if (ctx->r2 == ctx->r17) {
        // 0x0027CB84: nop
    
            goto L_0027CB98;
    }
    // 0x0027CB84: nop

    // 0x0027CB88: lw          $a0, 0x1320($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1320);
    // 0x0027CB8C: bne         $a0, $zero, L_0027CB7C
    if (ctx->r4 != 0) {
        // 0x0027CB90: nop
    
            goto L_0027CB7C;
    }
    // 0x0027CB90: nop

L_0027CB94:
    // 0x0027CB94: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0027CB98:
    // 0x0027CB98: beql        $a0, $zero, L_0027CBB8
    if (ctx->r4 == 0) {
        // 0x0027CB9C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0027CBB8;
    }
    goto skip_0;
    // 0x0027CB9C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    skip_0:
    // 0x0027CBA0: lw          $v0, 0xA1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA1C);
    // 0x0027CBA4: lw          $v1, 0x140($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X140);
    // 0x0027CBA8: andi        $a2, $v0, 0x40
    ctx->r6 = ctx->r2 & 0X40;
    // 0x0027CBAC: andi        $v0, $v1, 0x80
    ctx->r2 = ctx->r3 & 0X80;
    // 0x0027CBB0: or          $a2, $a2, $v0
    ctx->r6 = ctx->r6 | ctx->r2;
    // 0x0027CBB4: andi        $a3, $v1, 0x800
    ctx->r7 = ctx->r3 & 0X800;
L_0027CBB8:
    // 0x0027CBB8: lhu         $v1, 0x0($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X0);
    // 0x0027CBBC: lw          $v0, 0x500($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X500);
    // 0x0027CBC0: bne         $v1, $v0, L_0027CBD8
    if (ctx->r3 != ctx->r2) {
        // 0x0027CBC4: nop
    
            goto L_0027CBD8;
    }
    // 0x0027CBC4: nop

    // 0x0027CBC8: bne         $a2, $zero, L_0027CBD8
    if (ctx->r6 != 0) {
        // 0x0027CBCC: nop
    
            goto L_0027CBD8;
    }
    // 0x0027CBCC: nop

    // 0x0027CBD0: beq         $a3, $zero, L_0027CC44
    if (ctx->r7 == 0) {
        // 0x0027CBD4: nop
    
            goto L_0027CC44;
    }
    // 0x0027CBD4: nop

L_0027CBD8:
    // 0x0027CBD8: lw          $v1, 0x500($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X500);
    // 0x0027CBDC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0027CBE0: beq         $v1, $v0, L_0027CBF8
    if (ctx->r3 == ctx->r2) {
        // 0x0027CBE4: nop
    
            goto L_0027CBF8;
    }
    // 0x0027CBE4: nop

    // 0x0027CBE8: bne         $a2, $zero, L_0027CBF8
    if (ctx->r6 != 0) {
        // 0x0027CBEC: nop
    
            goto L_0027CBF8;
    }
    // 0x0027CBEC: nop

    // 0x0027CBF0: beql        $a3, $zero, L_0027CC04
    if (ctx->r7 == 0) {
        // 0x0027CBF4: sw          $zero, 0x504($s1)
        MEM_W(0X504, ctx->r17) = 0;
            goto L_0027CC04;
    }
    goto skip_1;
    // 0x0027CBF4: sw          $zero, 0x504($s1)
    MEM_W(0X504, ctx->r17) = 0;
    skip_1:
L_0027CBF8:
    // 0x0027CBF8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027CBFC: lwc1        $f0, -0x6750($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6750);
    // 0x0027CC00: swc1        $f0, 0x504($s1)
    MEM_W(0X504, ctx->r17) = ctx->f0.u32l;
L_0027CC04:
    // 0x0027CC04: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x0027CC08: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0027CC0C: sw          $v0, 0x500($s1)
    MEM_W(0X500, ctx->r17) = ctx->r2;
    // 0x0027CC10: addu        $v0, $s1, $a1
    ctx->r2 = ADD32(ctx->r17, ctx->r5);
L_0027CC14:
    // 0x0027CC14: lbu         $v1, 0x508($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X508);
    // 0x0027CC18: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0027CC1C: sb          $v1, 0x50C($v0)
    MEM_B(0X50C, ctx->r2) = ctx->r3;
    // 0x0027CC20: slti        $v0, $a1, 0x4
    ctx->r2 = SIGNED(ctx->r5) < 0X4 ? 1 : 0;
    // 0x0027CC24: bne         $v0, $zero, L_0027CC14
    if (ctx->r2 != 0) {
        // 0x0027CC28: addu        $v0, $s1, $a1
        ctx->r2 = ADD32(ctx->r17, ctx->r5);
            goto L_0027CC14;
    }
    // 0x0027CC28: addu        $v0, $s1, $a1
    ctx->r2 = ADD32(ctx->r17, ctx->r5);
    // 0x0027CC2C: lwc1        $f0, 0x510($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X510);
    // 0x0027CC30: lw          $v0, 0x524($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X524);
    // 0x0027CC34: lwc1        $f1, 0x518($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X518);
    // 0x0027CC38: swc1        $f0, 0x514($s1)
    MEM_W(0X514, ctx->r17) = ctx->f0.u32l;
    // 0x0027CC3C: sw          $v0, 0x528($s1)
    MEM_W(0X528, ctx->r17) = ctx->r2;
    // 0x0027CC40: swc1        $f1, 0x51C($s1)
    MEM_W(0X51C, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
L_0027CC44:
    // 0x0027CC44: bne         $a2, $zero, L_0027CC54
    if (ctx->r6 != 0) {
        // 0x0027CC48: nop
    
            goto L_0027CC54;
    }
    // 0x0027CC48: nop

    // 0x0027CC4C: beq         $a3, $zero, L_0027CD1C
    if (ctx->r7 == 0) {
        // 0x0027CC50: nop
    
            goto L_0027CD1C;
    }
    // 0x0027CC50: nop

L_0027CC54:
    // 0x0027CC54: beq         $a3, $zero, L_0027CC88
    if (ctx->r7 == 0) {
        // 0x0027CC58: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_0027CC88;
    }
    // 0x0027CC58: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0027CC5C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0027CC60: addu        $v1, $a0, $a1
    ctx->r3 = ADD32(ctx->r4, ctx->r5);
L_0027CC64:
    // 0x0027CC64: addu        $v0, $s0, $a1
    ctx->r2 = ADD32(ctx->r16, ctx->r5);
    // 0x0027CC68: lbu         $v0, 0x4($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4);
    // 0x0027CC6C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0027CC70: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x0027CC74: slti        $v0, $a1, 0x3
    ctx->r2 = SIGNED(ctx->r5) < 0X3 ? 1 : 0;
    // 0x0027CC78: bne         $v0, $zero, L_0027CC64
    if (ctx->r2 != 0) {
        // 0x0027CC7C: addu        $v1, $a0, $a1
        ctx->r3 = ADD32(ctx->r4, ctx->r5);
            goto L_0027CC64;
    }
    // 0x0027CC7C: addu        $v1, $a0, $a1
    ctx->r3 = ADD32(ctx->r4, ctx->r5);
    // 0x0027CC80: j           L_0027CD08
    // 0x0027CC84: sb          $zero, 0x13($sp)
    MEM_B(0X13, ctx->r29) = 0;
        goto L_0027CD08;
    // 0x0027CC84: sb          $zero, 0x13($sp)
    MEM_B(0X13, ctx->r29) = 0;
L_0027CC88:
    // 0x0027CC88: beq         $a0, $zero, L_0027CCA0
    if (ctx->r4 == 0) {
        // 0x0027CC8C: nop
    
            goto L_0027CCA0;
    }
    // 0x0027CC8C: nop

    // 0x0027CC90: jal         0x00268AB4
    // 0x0027CC94: nop

    func_00268AB4(rdram, ctx);
        goto after_5;
    // 0x0027CC94: nop

    after_5:
    // 0x0027CC98: j           L_0027CCA4
    // 0x0027CC9C: nop

        goto L_0027CCA4;
    // 0x0027CC9C: nop

L_0027CCA0:
    // 0x0027CCA0: lwc1        $f0, 0x20($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
L_0027CCA4:
    // 0x0027CCA4: trunc.w.s   $f9, $f0
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(9 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0027CCA8: mfc1        $v0, $f9
    ctx->r2 = (int32_t)ctx->f_odd[(9 - 1) * 2];
    // 0x0027CCAC: bltzl       $v0, L_0027CCB4
    if (SIGNED(ctx->r2) < 0) {
        // 0x0027CCB0: addiu       $v0, $v0, 0xF
        ctx->r2 = ADD32(ctx->r2, 0XF);
            goto L_0027CCB4;
    }
    goto skip_2;
    // 0x0027CCB0: addiu       $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
    skip_2:
L_0027CCB4:
    // 0x0027CCB4: sra         $a2, $v0, 4
    ctx->r6 = S32(SIGNED(ctx->r2) >> 4);
    // 0x0027CCB8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0027CCBC: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
L_0027CCC0:
    // 0x0027CCC0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0027CCC4: addu        $v0, $s0, $a1
    ctx->r2 = ADD32(ctx->r16, ctx->r5);
    // 0x0027CCC8: lbu         $v0, 0x4($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4);
    // 0x0027CCCC: subu        $v0, $v0, $a2
    ctx->r2 = SUB32(ctx->r2, ctx->r6);
    // 0x0027CCD0: bltz        $v0, L_0027CCDC
    if (SIGNED(ctx->r2) < 0) {
        // 0x0027CCD4: addu        $v1, $a3, $a1
        ctx->r3 = ADD32(ctx->r7, ctx->r5);
            goto L_0027CCDC;
    }
    // 0x0027CCD4: addu        $v1, $a3, $a1
    ctx->r3 = ADD32(ctx->r7, ctx->r5);
    // 0x0027CCD8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
L_0027CCDC:
    // 0x0027CCDC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0027CCE0: slti        $v0, $a1, 0x3
    ctx->r2 = SIGNED(ctx->r5) < 0X3 ? 1 : 0;
    // 0x0027CCE4: bne         $v0, $zero, L_0027CCC0
    if (ctx->r2 != 0) {
        // 0x0027CCE8: sb          $a0, 0x0($v1)
        MEM_B(0X0, ctx->r3) = ctx->r4;
            goto L_0027CCC0;
    }
    // 0x0027CCE8: sb          $a0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r4;
    // 0x0027CCEC: lbu         $v0, 0x7($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X7);
    // 0x0027CCF0: addu        $v1, $v0, $a2
    ctx->r3 = ADD32(ctx->r2, ctx->r6);
    // 0x0027CCF4: slti        $v0, $v1, 0xC1
    ctx->r2 = SIGNED(ctx->r3) < 0XC1 ? 1 : 0;
    // 0x0027CCF8: beq         $v0, $zero, L_0027CD04
    if (ctx->r2 == 0) {
        // 0x0027CCFC: addiu       $a0, $zero, 0xC0
        ctx->r4 = ADD32(0, 0XC0);
            goto L_0027CD04;
    }
    // 0x0027CCFC: addiu       $a0, $zero, 0xC0
    ctx->r4 = ADD32(0, 0XC0);
    // 0x0027CD00: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
L_0027CD04:
    // 0x0027CD04: sb          $a0, 0x13($sp)
    MEM_B(0X13, ctx->r29) = ctx->r4;
L_0027CD08:
    // 0x0027CD08: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    // 0x0027CD0C: lwc1        $f6, 0x18($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
    // 0x0027CD10: lwc1        $f7, 0x1C($s0)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r16, 0X1C);
    // 0x0027CD14: j           L_0027CD80
    // 0x0027CD18: nop

        goto L_0027CD80;
    // 0x0027CD18: nop

L_0027CD1C:
    // 0x0027CD1C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0027CD20: lw          $v0, 0x940($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X940);
    // 0x0027CD24: beq         $v0, $zero, L_0027CD48
    if (ctx->r2 == 0) {
        // 0x0027CD28: addiu       $a1, $zero, 0x3
        ctx->r5 = ADD32(0, 0X3);
            goto L_0027CD48;
    }
    // 0x0027CD28: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x0027CD2C: addiu       $v0, $sp, 0x13
    ctx->r2 = ADD32(ctx->r29, 0X13);
L_0027CD30:
    // 0x0027CD30: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x0027CD34: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x0027CD38: bgez        $a1, L_0027CD30
    if (SIGNED(ctx->r5) >= 0) {
        // 0x0027CD3C: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_0027CD30;
    }
    // 0x0027CD3C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0027CD40: j           L_0027CD74
    // 0x0027CD44: nop

        goto L_0027CD74;
    // 0x0027CD44: nop

L_0027CD48:
    // 0x0027CD48: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0027CD4C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0027CD50: addu        $v1, $a0, $a1
    ctx->r3 = ADD32(ctx->r4, ctx->r5);
L_0027CD54:
    // 0x0027CD54: addu        $v0, $s0, $a1
    ctx->r2 = ADD32(ctx->r16, ctx->r5);
    // 0x0027CD58: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x0027CD5C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0027CD60: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x0027CD64: slti        $v0, $a1, 0x3
    ctx->r2 = SIGNED(ctx->r5) < 0X3 ? 1 : 0;
    // 0x0027CD68: bne         $v0, $zero, L_0027CD54
    if (ctx->r2 != 0) {
        // 0x0027CD6C: addu        $v1, $a0, $a1
        ctx->r3 = ADD32(ctx->r4, ctx->r5);
            goto L_0027CD54;
    }
    // 0x0027CD6C: addu        $v1, $a0, $a1
    ctx->r3 = ADD32(ctx->r4, ctx->r5);
    // 0x0027CD70: sb          $zero, 0x13($sp)
    MEM_B(0X13, ctx->r29) = 0;
L_0027CD74:
    // 0x0027CD74: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x0027CD78: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x0027CD7C: lwc1        $f7, 0x14($s0)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r16, 0X14);
L_0027CD80:
    // 0x0027CD80: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0027CD84: lw          $v0, 0x6D20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D20);
    // 0x0027CD88: beq         $v0, $zero, L_0027CDA8
    if (ctx->r2 == 0) {
        // 0x0027CD8C: nop
    
            goto L_0027CDA8;
    }
    // 0x0027CD8C: nop

    // 0x0027CD90: lwc1        $f1, 0x24($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X24);
    // 0x0027CD94: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0027CD98: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x0027CD9C: nop

    // 0x0027CDA0: bc1f        L_0027CDB8
    if (!c1cs) {
        // 0x0027CDA4: nop
    
            goto L_0027CDB8;
    }
    // 0x0027CDA4: nop

L_0027CDA8:
    // 0x0027CDA8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027CDAC: lwc1        $f0, -0x674C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X674C);
    // 0x0027CDB0: j           L_0027CDF4
    // 0x0027CDB4: swc1        $f0, 0x504($s1)
    MEM_W(0X504, ctx->r17) = ctx->f0.u32l;
        goto L_0027CDF4;
    // 0x0027CDB4: swc1        $f0, 0x504($s1)
    MEM_W(0X504, ctx->r17) = ctx->f0.u32l;
L_0027CDB8:
    // 0x0027CDB8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027CDBC: lwc1        $f0, -0x6748($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6748);
    // 0x0027CDC0: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0027CDC4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027CDC8: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x0027CDCC: lwc1        $f2, 0x504($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X504);
    // 0x0027CDD0: div.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0027CDD4: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x0027CDD8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027CDDC: lwc1        $f0, -0x6744($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6744);
    // 0x0027CDE0: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x0027CDE4: nop

    // 0x0027CDE8: bc1tl       L_0027CDF0
    if (c1cs) {
        // 0x0027CDEC: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_0027CDF0;
    }
    goto skip_3;
    // 0x0027CDEC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_3:
L_0027CDF0:
    // 0x0027CDF0: swc1        $f2, 0x504($s1)
    MEM_W(0X504, ctx->r17) = ctx->f2.u32l;
L_0027CDF4:
    // 0x0027CDF4: lwc1        $f2, 0x504($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X504);
    // 0x0027CDF8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027CDFC: lwc1        $f1, -0x6740($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X6740);
    // 0x0027CE00: mul.s       $f1, $f2, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0027CE04: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027CE08: lwc1        $f0, -0x673C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X673C);
    // 0x0027CE0C: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0027CE10: nop

    // 0x0027CE14: mul.s       $f1, $f2, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0027CE18: nop

    // 0x0027CE1C: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0027CE20: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0027CE24: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    // 0x0027CE28: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0027CE2C: lui         $t0, 0x8000
    ctx->r8 = S32(0X8000 << 16);
    // 0x0027CE30: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027CE34: lwc1        $f5, -0x6738($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X6738);
    // 0x0027CE38: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x0027CE3C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027CE40: lwc1        $f3, -0x6734($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X6734);
    // 0x0027CE44: add.s       $f4, $f1, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x0027CE48: addu        $a0, $s1, $a1
    ctx->r4 = ADD32(ctx->r17, ctx->r5);
L_0027CE4C:
    // 0x0027CE4C: addu        $v0, $a3, $a1
    ctx->r2 = ADD32(ctx->r7, ctx->r5);
    // 0x0027CE50: lbu         $v1, 0x50C($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X50C);
    // 0x0027CE54: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x0027CE58: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x0027CE5C: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0027CE60: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0027CE64: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0027CE68: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0027CE6C: mul.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x0027CE70: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0027CE74: c.lt.s      $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f5.fl < ctx->f0.fl;
    // 0x0027CE78: nop

    // 0x0027CE7C: bc1tl       L_0027CED0
    if (c1cs) {
        // 0x0027CE80: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_0027CED0;
    }
    goto skip_4;
    // 0x0027CE80: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    skip_4:
    // 0x0027CE84: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x0027CE88: nop

    // 0x0027CE8C: bc1t        L_0027CED0
    if (c1cs) {
        // 0x0027CE90: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0027CED0;
    }
    // 0x0027CE90: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0027CE94: c.lt.s      $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f5.fl < ctx->f0.fl;
    // 0x0027CE98: nop

    // 0x0027CE9C: bc1t        L_0027CED0
    if (c1cs) {
        // 0x0027CEA0: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_0027CED0;
    }
    // 0x0027CEA0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x0027CEA4: c.le.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl <= ctx->f0.fl;
    // 0x0027CEA8: nop

    // 0x0027CEAC: bc1tl       L_0027CEC4
    if (c1cs) {
        // 0x0027CEB0: sub.s       $f0, $f0, $f3
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f3.fl;
            goto L_0027CEC4;
    }
    goto skip_5;
    // 0x0027CEB0: sub.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f3.fl;
    skip_5:
    // 0x0027CEB4: trunc.w.s   $f9, $f0
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(9 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0027CEB8: mfc1        $v0, $f9
    ctx->r2 = (int32_t)ctx->f_odd[(9 - 1) * 2];
    // 0x0027CEBC: j           L_0027CED4
    // 0x0027CEC0: sb          $v0, 0x508($a0)
    MEM_B(0X508, ctx->r4) = ctx->r2;
        goto L_0027CED4;
    // 0x0027CEC0: sb          $v0, 0x508($a0)
    MEM_B(0X508, ctx->r4) = ctx->r2;
L_0027CEC4:
    // 0x0027CEC4: trunc.w.s   $f9, $f0
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(9 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0027CEC8: mfc1        $v0, $f9
    ctx->r2 = (int32_t)ctx->f_odd[(9 - 1) * 2];
    // 0x0027CECC: or          $v0, $v0, $t0
    ctx->r2 = ctx->r2 | ctx->r8;
L_0027CED0:
    // 0x0027CED0: sb          $v0, 0x508($a0)
    MEM_B(0X508, ctx->r4) = ctx->r2;
L_0027CED4:
    // 0x0027CED4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0027CED8: slti        $v0, $a1, 0x4
    ctx->r2 = SIGNED(ctx->r5) < 0X4 ? 1 : 0;
    // 0x0027CEDC: bne         $v0, $zero, L_0027CE4C
    if (ctx->r2 != 0) {
        // 0x0027CEE0: addu        $a0, $s1, $a1
        ctx->r4 = ADD32(ctx->r17, ctx->r5);
            goto L_0027CE4C;
    }
    // 0x0027CEE0: addu        $a0, $s1, $a1
    ctx->r4 = ADD32(ctx->r17, ctx->r5);
    // 0x0027CEE4: lw          $v0, 0x528($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X528);
    // 0x0027CEE8: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0027CEEC: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0027CEF0: bgez        $v0, L_0027CF04
    if (SIGNED(ctx->r2) >= 0) {
        // 0x0027CEF4: nop
    
            goto L_0027CF04;
    }
    // 0x0027CEF4: nop

    // 0x0027CEF8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027CEFC: ldc1        $f0, -0x6730($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X6730);
    // 0x0027CF00: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
L_0027CF04:
    // 0x0027CF04: mtc1        $a2, $f2
    ctx->f2.u32l = ctx->r6;
    // 0x0027CF08: cvt.d.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.d = CVT_D_W(ctx->f2.u32l);
    // 0x0027CF0C: bgez        $a2, L_0027CF20
    if (SIGNED(ctx->r6) >= 0) {
        // 0x0027CF10: cvt.s.d     $f3, $f1
        CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f3.fl = CVT_S_D(ctx->f1.d);
            goto L_0027CF20;
    }
    // 0x0027CF10: cvt.s.d     $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f3.fl = CVT_S_D(ctx->f1.d);
    // 0x0027CF14: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027CF18: ldc1        $f0, -0x6728($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X6728);
    // 0x0027CF1C: add.d       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = ctx->f2.d + ctx->f0.d;
L_0027CF20:
    // 0x0027CF20: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0027CF24: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0027CF28: bgez        $v0, L_0027CF3C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x0027CF2C: cvt.s.d     $f2, $f2
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f2.fl = CVT_S_D(ctx->f2.d);
            goto L_0027CF3C;
    }
    // 0x0027CF2C: cvt.s.d     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f2.fl = CVT_S_D(ctx->f2.d);
    // 0x0027CF30: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027CF34: ldc1        $f0, -0x6720($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X6720);
    // 0x0027CF38: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
L_0027CF3C:
    // 0x0027CF3C: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    // 0x0027CF40: sub.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x0027CF44: mul.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x0027CF48: add.s       $f0, $f3, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f3.fl + ctx->f0.fl;
    // 0x0027CF4C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027CF50: lwc1        $f1, -0x6718($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X6718);
    // 0x0027CF54: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0027CF58: nop

    // 0x0027CF5C: bc1t        L_0027CFDC
    if (c1cs) {
        // 0x0027CF60: nop
    
            goto L_0027CFDC;
    }
    // 0x0027CF60: nop

    // 0x0027CF64: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0027CF68: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0027CF6C: bgez        $v0, L_0027CF80
    if (SIGNED(ctx->r2) >= 0) {
        // 0x0027CF70: nop
    
            goto L_0027CF80;
    }
    // 0x0027CF70: nop

    // 0x0027CF74: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027CF78: ldc1        $f0, -0x6710($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X6710);
    // 0x0027CF7C: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
L_0027CF80:
    // 0x0027CF80: mtc1        $a2, $f2
    ctx->f2.u32l = ctx->r6;
    // 0x0027CF84: cvt.d.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.d = CVT_D_W(ctx->f2.u32l);
    // 0x0027CF88: bgez        $a2, L_0027CF9C
    if (SIGNED(ctx->r6) >= 0) {
        // 0x0027CF8C: cvt.s.d     $f3, $f1
        CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f3.fl = CVT_S_D(ctx->f1.d);
            goto L_0027CF9C;
    }
    // 0x0027CF8C: cvt.s.d     $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f3.fl = CVT_S_D(ctx->f1.d);
    // 0x0027CF90: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027CF94: ldc1        $f0, -0x6708($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X6708);
    // 0x0027CF98: add.d       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = ctx->f2.d + ctx->f0.d;
L_0027CF9C:
    // 0x0027CF9C: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0027CFA0: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0027CFA4: bgez        $v0, L_0027CFB8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x0027CFA8: cvt.s.d     $f2, $f2
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f2.fl = CVT_S_D(ctx->f2.d);
            goto L_0027CFB8;
    }
    // 0x0027CFA8: cvt.s.d     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f2.fl = CVT_S_D(ctx->f2.d);
    // 0x0027CFAC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027CFB0: ldc1        $f0, -0x6700($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X6700);
    // 0x0027CFB4: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
L_0027CFB8:
    // 0x0027CFB8: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    // 0x0027CFBC: sub.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x0027CFC0: mul.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x0027CFC4: add.s       $f0, $f3, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f3.fl + ctx->f0.fl;
    // 0x0027CFC8: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0027CFCC: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0027CFD0: nop

    // 0x0027CFD4: bc1t        L_0027D0F8
    if (c1cs) {
        // 0x0027CFD8: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0027D0F8;
    }
    // 0x0027CFD8: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_0027CFDC:
    // 0x0027CFDC: lw          $v0, 0x528($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X528);
    // 0x0027CFE0: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0027CFE4: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0027CFE8: bgez        $v0, L_0027CFFC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x0027CFEC: nop
    
            goto L_0027CFFC;
    }
    // 0x0027CFEC: nop

    // 0x0027CFF0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027CFF4: ldc1        $f0, -0x66F8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X66F8);
    // 0x0027CFF8: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
L_0027CFFC:
    // 0x0027CFFC: mtc1        $a2, $f2
    ctx->f2.u32l = ctx->r6;
    // 0x0027D000: cvt.d.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.d = CVT_D_W(ctx->f2.u32l);
    // 0x0027D004: bgez        $a2, L_0027D018
    if (SIGNED(ctx->r6) >= 0) {
        // 0x0027D008: cvt.s.d     $f3, $f1
        CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f3.fl = CVT_S_D(ctx->f1.d);
            goto L_0027D018;
    }
    // 0x0027D008: cvt.s.d     $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f3.fl = CVT_S_D(ctx->f1.d);
    // 0x0027D00C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027D010: ldc1        $f0, -0x66F0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X66F0);
    // 0x0027D014: add.d       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = ctx->f2.d + ctx->f0.d;
L_0027D018:
    // 0x0027D018: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0027D01C: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0027D020: bgez        $v0, L_0027D034
    if (SIGNED(ctx->r2) >= 0) {
        // 0x0027D024: cvt.s.d     $f2, $f2
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f2.fl = CVT_S_D(ctx->f2.d);
            goto L_0027D034;
    }
    // 0x0027D024: cvt.s.d     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f2.fl = CVT_S_D(ctx->f2.d);
    // 0x0027D028: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027D02C: ldc1        $f0, -0x66E8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X66E8);
    // 0x0027D030: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
L_0027D034:
    // 0x0027D034: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    // 0x0027D038: sub.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x0027D03C: mul.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x0027D040: add.s       $f0, $f3, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f3.fl + ctx->f0.fl;
    // 0x0027D044: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027D048: lwc1        $f1, -0x66E0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X66E0);
    // 0x0027D04C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0027D050: nop

    // 0x0027D054: bc1t        L_0027D0F8
    if (c1cs) {
        // 0x0027D058: addiu       $v1, $zero, 0x3E3
        ctx->r3 = ADD32(0, 0X3E3);
            goto L_0027D0F8;
    }
    // 0x0027D058: addiu       $v1, $zero, 0x3E3
    ctx->r3 = ADD32(0, 0X3E3);
    // 0x0027D05C: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0027D060: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0027D064: bgez        $v0, L_0027D078
    if (SIGNED(ctx->r2) >= 0) {
        // 0x0027D068: nop
    
            goto L_0027D078;
    }
    // 0x0027D068: nop

    // 0x0027D06C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027D070: ldc1        $f0, -0x66D8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X66D8);
    // 0x0027D074: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
L_0027D078:
    // 0x0027D078: mtc1        $a2, $f2
    ctx->f2.u32l = ctx->r6;
    // 0x0027D07C: cvt.d.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.d = CVT_D_W(ctx->f2.u32l);
    // 0x0027D080: bgez        $a2, L_0027D094
    if (SIGNED(ctx->r6) >= 0) {
        // 0x0027D084: cvt.s.d     $f3, $f1
        CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f3.fl = CVT_S_D(ctx->f1.d);
            goto L_0027D094;
    }
    // 0x0027D084: cvt.s.d     $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f3.fl = CVT_S_D(ctx->f1.d);
    // 0x0027D088: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027D08C: ldc1        $f0, -0x66D0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X66D0);
    // 0x0027D090: add.d       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = ctx->f2.d + ctx->f0.d;
L_0027D094:
    // 0x0027D094: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0027D098: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0027D09C: bgez        $v0, L_0027D0B0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x0027D0A0: cvt.s.d     $f2, $f2
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f2.fl = CVT_S_D(ctx->f2.d);
            goto L_0027D0B0;
    }
    // 0x0027D0A0: cvt.s.d     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f2.fl = CVT_S_D(ctx->f2.d);
    // 0x0027D0A4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027D0A8: ldc1        $f0, -0x66C8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X66C8);
    // 0x0027D0AC: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
L_0027D0B0:
    // 0x0027D0B0: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    // 0x0027D0B4: sub.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x0027D0B8: mul.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x0027D0BC: add.s       $f0, $f3, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f3.fl + ctx->f0.fl;
    // 0x0027D0C0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027D0C4: lwc1        $f1, -0x66C0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X66C0);
    // 0x0027D0C8: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0027D0CC: nop

    // 0x0027D0D0: bc1tl       L_0027D0E8
    if (c1cs) {
        // 0x0027D0D4: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_0027D0E8;
    }
    goto skip_6;
    // 0x0027D0D4: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_6:
    // 0x0027D0D8: trunc.w.s   $f9, $f0
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(9 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0027D0DC: mfc1        $v1, $f9
    ctx->r3 = (int32_t)ctx->f_odd[(9 - 1) * 2];
    // 0x0027D0E0: j           L_0027D0F8
    // 0x0027D0E4: nop

        goto L_0027D0F8;
    // 0x0027D0E4: nop

L_0027D0E8:
    // 0x0027D0E8: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0027D0EC: trunc.w.s   $f9, $f0
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(9 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0027D0F0: mfc1        $v1, $f9
    ctx->r3 = (int32_t)ctx->f_odd[(9 - 1) * 2];
    // 0x0027D0F4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
L_0027D0F8:
    // 0x0027D0F8: lwc1        $f1, 0x5C($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X5C);
    // 0x0027D0FC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0027D100: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0027D104: nop

    // 0x0027D108: bc1f        L_0027D120
    if (!c1cs) {
        // 0x0027D10C: sw          $v1, 0x524($s1)
        MEM_W(0X524, ctx->r17) = ctx->r3;
            goto L_0027D120;
    }
    // 0x0027D10C: sw          $v1, 0x524($s1)
    MEM_W(0X524, ctx->r17) = ctx->r3;
    // 0x0027D110: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027D114: lwc1        $f0, -0x66BC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X66BC);
    // 0x0027D118: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0027D11C: add.s       $f6, $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f0.fl;
L_0027D120:
    // 0x0027D120: lwc1        $f3, 0x514($s1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r17, 0X514);
    // 0x0027D124: sub.s       $f2, $f6, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f3.fl;
    // 0x0027D128: mul.s       $f2, $f4, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x0027D12C: lwc1        $f1, 0x51C($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X51C);
    // 0x0027D130: sub.s       $f0, $f7, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f7.fl - ctx->f1.fl;
    // 0x0027D134: mul.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x0027D138: add.s       $f3, $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f2.fl;
    // 0x0027D13C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0027D140: swc1        $f3, 0x510($s1)
    MEM_W(0X510, ctx->r17) = ctx->f_odd[(3 - 1) * 2];
    // 0x0027D144: swc1        $f1, 0x518($s1)
    MEM_W(0X518, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
L_0027D148:
    // 0x0027D148: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0027D14C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0027D150: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0027D154: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0027D158: jr          $ra
    // 0x0027D15C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0027D15C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00268688(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00268688: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0026868C: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x00268690: mtc1        $a1, $f0
    ctx->f0.u32l = ctx->r5;
    // 0x00268694: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00268698: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0026869C: lbu         $v1, 0x0($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X0);
    // 0x002686A0: mtc1        $a2, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r6;
    // 0x002686A4: bne         $v1, $v0, L_0026871C
    if (ctx->r3 != ctx->r2) {
        // 0x002686A8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0026871C;
    }
    // 0x002686A8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x002686AC: lw          $a1, 0x14($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X14);
    // 0x002686B0: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x002686B4: bne         $v1, $v0, L_0026871C
    if (ctx->r3 != ctx->r2) {
        // 0x002686B8: nop
    
            goto L_0026871C;
    }
    // 0x002686B8: nop

    // 0x002686BC: lhu         $v0, 0x18($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X18);
    // 0x002686C0: beq         $v0, $zero, L_002686E0
    if (ctx->r2 == 0) {
        // 0x002686C4: nop
    
            goto L_002686E0;
    }
    // 0x002686C4: nop

    // 0x002686C8: bltz        $v0, L_0026871C
    if (SIGNED(ctx->r2) < 0) {
        // 0x002686CC: slti        $v0, $v0, 0x3
        ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
            goto L_0026871C;
    }
    // 0x002686CC: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x002686D0: beq         $v0, $zero, L_0026871C
    if (ctx->r2 == 0) {
        // 0x002686D4: nop
    
            goto L_0026871C;
    }
    // 0x002686D4: nop

    // 0x002686D8: j           L_00268704
    // 0x002686DC: nop

        goto L_00268704;
    // 0x002686DC: nop

L_002686E0:
    // 0x002686E0: lw          $a0, 0x10($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X10);
    // 0x002686E4: beq         $a0, $zero, L_0026871C
    if (ctx->r4 == 0) {
        // 0x002686E8: nop
    
            goto L_0026871C;
    }
    // 0x002686E8: nop

    // 0x002686EC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x002686F0: mfc1        $a2, $f1
    ctx->r6 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x002686F4: jal         0x0026BE60
    // 0x002686F8: nop

    func_0026BE60(rdram, ctx);
        goto after_0;
    // 0x002686F8: nop

    after_0:
    // 0x002686FC: j           L_00268720
    // 0x00268700: nop

        goto L_00268720;
    // 0x00268700: nop

L_00268704:
    // 0x00268704: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x00268708: mfc1        $a2, $f1
    ctx->r6 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x0026870C: jal         0x002425A4
    // 0x00268710: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    func_002425A4(rdram, ctx);
        goto after_1;
    // 0x00268710: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    after_1:
    // 0x00268714: j           L_00268720
    // 0x00268718: nop

        goto L_00268720;
    // 0x00268718: nop

L_0026871C:
    // 0x0026871C: lwc1        $f0, 0x8($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X8);
L_00268720:
    // 0x00268720: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00268724: jr          $ra
    // 0x00268728: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00268728: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002836E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002836E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002836E8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002836EC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x002836F0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x002836F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002836F8: lw          $s0, 0x8A0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X8A0);
    // 0x002836FC: beq         $s0, $zero, L_00283718
    if (ctx->r16 == 0) {
        // 0x00283700: addiu       $a0, $s1, 0x8A0
        ctx->r4 = ADD32(ctx->r17, 0X8A0);
            goto L_00283718;
    }
    // 0x00283700: addiu       $a0, $s1, 0x8A0
    ctx->r4 = ADD32(ctx->r17, 0X8A0);
    // 0x00283704: jal         0x00200738
    // 0x00283708: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200738(rdram, ctx);
        goto after_0;
    // 0x00283708: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0028370C: addiu       $a0, $s1, 0x8B4
    ctx->r4 = ADD32(ctx->r17, 0X8B4);
    // 0x00283710: jal         0x00200574
    // 0x00283714: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200574(rdram, ctx);
        goto after_1;
    // 0x00283714: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
L_00283718:
    // 0x00283718: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x0028371C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00283720: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00283724: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00283728: jr          $ra
    // 0x0028372C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0028372C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0022A4C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0022A4C8: addiu       $sp, $sp, -0x128
    ctx->r29 = ADD32(ctx->r29, -0X128);
    // 0x0022A4CC: sw          $s1, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r17;
    // 0x0022A4D0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0022A4D4: sw          $ra, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->r31;
    // 0x0022A4D8: sw          $s4, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r20;
    // 0x0022A4DC: sw          $s3, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r19;
    // 0x0022A4E0: sw          $s2, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r18;
    // 0x0022A4E4: sw          $s0, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r16;
    // 0x0022A4E8: sdc1        $f22, 0x120($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X120, ctx->r29);
    // 0x0022A4EC: sdc1        $f21, 0x118($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X118, ctx->r29);
    // 0x0022A4F0: sdc1        $f20, 0x110($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X110, ctx->r29);
    // 0x0022A4F4: lhu         $v1, 0x2($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X2);
    // 0x0022A4F8: slti        $v0, $v1, 0x61
    ctx->r2 = SIGNED(ctx->r3) < 0X61 ? 1 : 0;
    // 0x0022A4FC: beq         $v0, $zero, L_0022A540
    if (ctx->r2 == 0) {
        // 0x0022A500: slti        $v0, $v1, 0x5F
        ctx->r2 = SIGNED(ctx->r3) < 0X5F ? 1 : 0;
            goto L_0022A540;
    }
    // 0x0022A500: slti        $v0, $v1, 0x5F
    ctx->r2 = SIGNED(ctx->r3) < 0X5F ? 1 : 0;
    // 0x0022A504: beq         $v0, $zero, L_0022A798
    if (ctx->r2 == 0) {
        // 0x0022A508: addiu       $v0, $zero, 0xE
        ctx->r2 = ADD32(0, 0XE);
            goto L_0022A798;
    }
    // 0x0022A508: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x0022A50C: beq         $v1, $v0, L_0022A768
    if (ctx->r3 == ctx->r2) {
        // 0x0022A510: slti        $v0, $v1, 0xF
        ctx->r2 = SIGNED(ctx->r3) < 0XF ? 1 : 0;
            goto L_0022A768;
    }
    // 0x0022A510: slti        $v0, $v1, 0xF
    ctx->r2 = SIGNED(ctx->r3) < 0XF ? 1 : 0;
    // 0x0022A514: beq         $v0, $zero, L_0022A52C
    if (ctx->r2 == 0) {
        // 0x0022A518: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_0022A52C;
    }
    // 0x0022A518: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x0022A51C: beq         $v1, $v0, L_0022A778
    if (ctx->r3 == ctx->r2) {
        // 0x0022A520: nop
    
            goto L_0022A778;
    }
    // 0x0022A520: nop

    // 0x0022A524: j           L_0022A7EC
    // 0x0022A528: nop

        goto L_0022A7EC;
    // 0x0022A528: nop

L_0022A52C:
    // 0x0022A52C: addiu       $v0, $zero, 0x2E
    ctx->r2 = ADD32(0, 0X2E);
    // 0x0022A530: beq         $v1, $v0, L_0022A55C
    if (ctx->r3 == ctx->r2) {
        // 0x0022A534: nop
    
            goto L_0022A55C;
    }
    // 0x0022A534: nop

    // 0x0022A538: j           L_0022A7EC
    // 0x0022A53C: nop

        goto L_0022A7EC;
    // 0x0022A53C: nop

L_0022A540:
    // 0x0022A540: addiu       $v0, $zero, 0x68
    ctx->r2 = ADD32(0, 0X68);
    // 0x0022A544: beq         $v1, $v0, L_0022A788
    if (ctx->r3 == ctx->r2) {
        // 0x0022A548: addiu       $v0, $zero, 0x129
        ctx->r2 = ADD32(0, 0X129);
            goto L_0022A788;
    }
    // 0x0022A548: addiu       $v0, $zero, 0x129
    ctx->r2 = ADD32(0, 0X129);
    // 0x0022A54C: beq         $v1, $v0, L_0022A778
    if (ctx->r3 == ctx->r2) {
        // 0x0022A550: nop
    
            goto L_0022A778;
    }
    // 0x0022A550: nop

    // 0x0022A554: j           L_0022A7EC
    // 0x0022A558: nop

        goto L_0022A7EC;
    // 0x0022A558: nop

L_0022A55C:
    // 0x0022A55C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0022A560: lw          $a0, -0x6770($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X6770);
    // 0x0022A564: beq         $a0, $zero, L_0022A694
    if (ctx->r4 == 0) {
        // 0x0022A568: addiu       $s3, $sp, 0x28
        ctx->r19 = ADD32(ctx->r29, 0X28);
            goto L_0022A694;
    }
    // 0x0022A568: addiu       $s3, $sp, 0x28
    ctx->r19 = ADD32(ctx->r29, 0X28);
    // 0x0022A56C: addiu       $s2, $s1, 0x18
    ctx->r18 = ADD32(ctx->r17, 0X18);
    // 0x0022A570: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022A574: lwc1        $f21, 0x61B4($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X61B4);
    // 0x0022A578: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022A57C: lwc1        $f22, 0x61B8($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X61B8);
    // 0x0022A580: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
L_0022A584:
    // 0x0022A584: lwc1        $f1, 0x54($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X54);
    // 0x0022A588: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x0022A58C: lw          $t1, 0x8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8);
    // 0x0022A590: lw          $t2, 0xC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC);
    // 0x0022A594: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x0022A598: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x0022A59C: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x0022A5A0: lwc1        $f0, 0x2C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x0022A5A4: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0022A5A8: jal         0x002671B4
    // 0x0022A5AC: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    func_002671B4(rdram, ctx);
        goto after_0;
    // 0x0022A5AC: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x0022A5B0: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x0022A5B4: lwc1        $f1, 0x2C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X2C);
    // 0x0022A5B8: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x0022A5BC: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0022A5C0: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0022A5C4: addiu       $a2, $s1, 0x4
    ctx->r6 = ADD32(ctx->r17, 0X4);
    // 0x0022A5C8: jal         0x0020EF2C
    // 0x0022A5CC: swc1        $f1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    func_0020EF2C(rdram, ctx);
        goto after_1;
    // 0x0022A5CC: swc1        $f1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    after_1:
    // 0x0022A5D0: lwc1        $f1, 0x18($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x0022A5D4: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0022A5D8: lwc1        $f0, 0x1C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x0022A5DC: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0022A5E0: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x0022A5E4: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0022A5E8: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0022A5EC: jal         0x00298470
    // 0x0022A5F0: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_2;
    // 0x0022A5F0: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_2:
    // 0x0022A5F4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022A5F8: lwc1        $f1, 0x61BC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X61BC);
    // 0x0022A5FC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x0022A600: c.lt.s      $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f20.fl < ctx->f1.fl;
    // 0x0022A604: nop

    // 0x0022A608: bc1f        L_0022A688
    if (!c1cs) {
        // 0x0022A60C: mov.s       $f12, $f21
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
            goto L_0022A688;
    }
    // 0x0022A60C: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    // 0x0022A610: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022A614: lwc1        $f0, 0x61C0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X61C0);
    // 0x0022A618: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x0022A61C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022A620: lwc1        $f1, 0x61C4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X61C4);
    // 0x0022A624: sub.s       $f20, $f1, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0022A628: jal         0x002119FC
    // 0x0022A62C: mov.s       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.fl = ctx->f22.fl;
    func_002119FC(rdram, ctx);
        goto after_3;
    // 0x0022A62C: mov.s       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.fl = ctx->f22.fl;
    after_3:
    // 0x0022A630: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x0022A634: lwc1        $f1, 0x18($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x0022A638: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0022A63C: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    // 0x0022A640: mov.s       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.fl = ctx->f22.fl;
    // 0x0022A644: jal         0x002119FC
    // 0x0022A648: swc1        $f1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    func_002119FC(rdram, ctx);
        goto after_4;
    // 0x0022A648: swc1        $f1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    after_4:
    // 0x0022A64C: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x0022A650: lwc1        $f1, 0x1C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X1C);
    // 0x0022A654: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0022A658: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    // 0x0022A65C: mov.s       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.fl = ctx->f22.fl;
    // 0x0022A660: jal         0x002119FC
    // 0x0022A664: swc1        $f1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    func_002119FC(rdram, ctx);
        goto after_5;
    // 0x0022A664: swc1        $f1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    after_5:
    // 0x0022A668: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x0022A66C: lwc1        $f1, 0x20($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x0022A670: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0022A674: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0022A678: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0022A67C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x0022A680: jal         0x0020EF2C
    // 0x0022A684: swc1        $f1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    func_0020EF2C(rdram, ctx);
        goto after_6;
    // 0x0022A684: swc1        $f1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    after_6:
L_0022A688:
    // 0x0022A688: lw          $a0, 0x1320($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1320);
    // 0x0022A68C: bne         $a0, $zero, L_0022A584
    if (ctx->r4 != 0) {
        // 0x0022A690: addu        $s0, $a0, $zero
        ctx->r16 = ADD32(ctx->r4, 0);
            goto L_0022A584;
    }
    // 0x0022A690: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
L_0022A694:
    // 0x0022A694: lw          $s0, 0x114($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X114);
    // 0x0022A698: jal         0x0026841C
    // 0x0022A69C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0026841C(rdram, ctx);
        goto after_7;
    // 0x0022A69C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x0022A6A0: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x0022A6A4: lw          $t1, 0x8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8);
    // 0x0022A6A8: lw          $t2, 0xC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC);
    // 0x0022A6AC: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x0022A6B0: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x0022A6B4: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x0022A6B8: lwc1        $f1, 0x2C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X2C);
    // 0x0022A6BC: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x0022A6C0: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0022A6C4: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x0022A6C8: addiu       $a2, $s1, 0x4
    ctx->r6 = ADD32(ctx->r17, 0X4);
    // 0x0022A6CC: jal         0x0020EF2C
    // 0x0022A6D0: swc1        $f1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    func_0020EF2C(rdram, ctx);
        goto after_8;
    // 0x0022A6D0: swc1        $f1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    after_8:
    // 0x0022A6D4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022A6D8: lwc1        $f20, 0x61C8($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X61C8);
    // 0x0022A6DC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022A6E0: lwc1        $f21, 0x61CC($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X61CC);
    // 0x0022A6E4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x0022A6E8: jal         0x002119FC
    // 0x0022A6EC: mov.s       $f14, $f21
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 21);
    ctx->f14.fl = ctx->f21.fl;
    func_002119FC(rdram, ctx);
        goto after_9;
    // 0x0022A6EC: mov.s       $f14, $f21
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 21);
    ctx->f14.fl = ctx->f21.fl;
    after_9:
    // 0x0022A6F0: lwc1        $f1, 0x18($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x0022A6F4: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0022A6F8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x0022A6FC: mov.s       $f14, $f21
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 21);
    ctx->f14.fl = ctx->f21.fl;
    // 0x0022A700: jal         0x002119FC
    // 0x0022A704: swc1        $f1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    func_002119FC(rdram, ctx);
        goto after_10;
    // 0x0022A704: swc1        $f1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    after_10:
    // 0x0022A708: lwc1        $f1, 0x1C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X1C);
    // 0x0022A70C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0022A710: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x0022A714: mov.s       $f14, $f21
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 21);
    ctx->f14.fl = ctx->f21.fl;
    // 0x0022A718: jal         0x002119FC
    // 0x0022A71C: swc1        $f1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    func_002119FC(rdram, ctx);
        goto after_11;
    // 0x0022A71C: swc1        $f1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    after_11:
    // 0x0022A720: lwc1        $f1, 0x20($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x0022A724: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0022A728: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x0022A72C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022A730: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0022A734: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x0022A738: jal         0x0020EEF8
    // 0x0022A73C: swc1        $f1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    func_0020EEF8(rdram, ctx);
        goto after_12;
    // 0x0022A73C: swc1        $f1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    after_12:
    // 0x0022A740: lw          $v0, 0xF8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XF8);
    // 0x0022A744: lw          $v0, 0x30($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X30);
    // 0x0022A748: lhu         $a0, 0x12($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X12);
    // 0x0022A74C: jal         0x0026D210
    // 0x0022A750: nop

    func_0026D210(rdram, ctx);
        goto after_13;
    // 0x0022A750: nop

    after_13:
    // 0x0022A754: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x0022A758: jal         0x0020F70C
    // 0x0022A75C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020F70C(rdram, ctx);
        goto after_14;
    // 0x0022A75C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_14:
    // 0x0022A760: j           L_0022AAB4
    // 0x0022A764: nop

        goto L_0022AAB4;
    // 0x0022A764: nop

L_0022A768:
    // 0x0022A768: jal         0x0022A1A4
    // 0x0022A76C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0022A1A4(rdram, ctx);
        goto after_15;
    // 0x0022A76C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_15:
    // 0x0022A770: j           L_0022AAB4
    // 0x0022A774: nop

        goto L_0022AAB4;
    // 0x0022A774: nop

L_0022A778:
    // 0x0022A778: jal         0x002298C4
    // 0x0022A77C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002298C4(rdram, ctx);
        goto after_16;
    // 0x0022A77C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_16:
    // 0x0022A780: j           L_0022AAB4
    // 0x0022A784: nop

        goto L_0022AAB4;
    // 0x0022A784: nop

L_0022A788:
    // 0x0022A788: jal         0x00229D10
    // 0x0022A78C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00229D10(rdram, ctx);
        goto after_17;
    // 0x0022A78C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_17:
    // 0x0022A790: j           L_0022AAB4
    // 0x0022A794: nop

        goto L_0022AAB4;
    // 0x0022A794: nop

L_0022A798:
    // 0x0022A798: lw          $v1, 0x1B8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X1B8);
    // 0x0022A79C: beq         $v1, $zero, L_0022A7C4
    if (ctx->r3 == 0) {
        // 0x0022A7A0: addiu       $a0, $zero, 0x228
        ctx->r4 = ADD32(0, 0X228);
            goto L_0022A7C4;
    }
    // 0x0022A7A0: addiu       $a0, $zero, 0x228
    ctx->r4 = ADD32(0, 0X228);
    // 0x0022A7A4: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    // 0x0022A7A8: bne         $v0, $a0, L_0022A7BC
    if (ctx->r2 != ctx->r4) {
        // 0x0022A7AC: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0022A7BC;
    }
    // 0x0022A7AC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0022A7B0: lw          $v1, 0x8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X8);
    // 0x0022A7B4: bne         $v1, $v0, L_0022A7EC
    if (ctx->r3 != ctx->r2) {
        // 0x0022A7B8: nop
    
            goto L_0022A7EC;
    }
    // 0x0022A7B8: nop

L_0022A7BC:
    // 0x0022A7BC: jal         0x00232B40
    // 0x0022A7C0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00232B40(rdram, ctx);
        goto after_18;
    // 0x0022A7C0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_18:
L_0022A7C4:
    // 0x0022A7C4: jal         0x00275F7C
    // 0x0022A7C8: nop

    func_00275F7C(rdram, ctx);
        goto after_19;
    // 0x0022A7C8: nop

    after_19:
    // 0x0022A7CC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0022A7D0: addiu       $a1, $zero, 0x228
    ctx->r5 = ADD32(0, 0X228);
    // 0x0022A7D4: addiu       $a2, $s1, 0x4
    ctx->r6 = ADD32(ctx->r17, 0X4);
    // 0x0022A7D8: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    // 0x0022A7DC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0022A7E0: jal         0x00275C6C
    // 0x0022A7E4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00275C6C(rdram, ctx);
        goto after_20;
    // 0x0022A7E4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_20:
    // 0x0022A7E8: sw          $v0, 0x1B8($s1)
    MEM_W(0X1B8, ctx->r17) = ctx->r2;
L_0022A7EC:
    // 0x0022A7EC: lw          $s0, 0x114($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X114);
    // 0x0022A7F0: beq         $s0, $zero, L_0022A9AC
    if (ctx->r16 == 0) {
        // 0x0022A7F4: lui         $v1, 0x4
        ctx->r3 = S32(0X4 << 16);
            goto L_0022A9AC;
    }
    // 0x0022A7F4: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
    // 0x0022A7F8: lw          $a0, 0xF8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XF8);
    // 0x0022A7FC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0022A800: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0022A804: beq         $v0, $zero, L_0022A9AC
    if (ctx->r2 == 0) {
        // 0x0022A808: nop
    
            goto L_0022A9AC;
    }
    // 0x0022A808: nop

    // 0x0022A80C: lh          $v0, 0xE($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XE);
    // 0x0022A810: beq         $v0, $zero, L_0022A9AC
    if (ctx->r2 == 0) {
        // 0x0022A814: nop
    
            goto L_0022A9AC;
    }
    // 0x0022A814: nop

    // 0x0022A818: jal         0x0026841C
    // 0x0022A81C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0026841C(rdram, ctx);
        goto after_21;
    // 0x0022A81C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_21:
    // 0x0022A820: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x0022A824: lw          $t1, 0x8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8);
    // 0x0022A828: lw          $t2, 0xC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC);
    // 0x0022A82C: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x0022A830: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x0022A834: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x0022A838: lwc1        $f1, 0x2C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X2C);
    // 0x0022A83C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0022A840: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022A844: jal         0x002671B4
    // 0x0022A848: swc1        $f1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    func_002671B4(rdram, ctx);
        goto after_22;
    // 0x0022A848: swc1        $f1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    after_22:
    // 0x0022A84C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022A850: lwc1        $f1, 0x61D0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X61D0);
    // 0x0022A854: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0022A858: addiu       $s0, $sp, 0x48
    ctx->r16 = ADD32(ctx->r29, 0X48);
    // 0x0022A85C: lwc1        $f1, 0x2C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X2C);
    // 0x0022A860: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022A864: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0022A868: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x0022A86C: addiu       $a2, $s1, 0x4
    ctx->r6 = ADD32(ctx->r17, 0X4);
    // 0x0022A870: jal         0x0020EF2C
    // 0x0022A874: swc1        $f1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    func_0020EF2C(rdram, ctx);
        goto after_23;
    // 0x0022A874: swc1        $f1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    after_23:
    // 0x0022A878: jal         0x0020F040
    // 0x0022A87C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020F040(rdram, ctx);
        goto after_24;
    // 0x0022A87C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_24:
    // 0x0022A880: addiu       $s4, $sp, 0x78
    ctx->r20 = ADD32(ctx->r29, 0X78);
    // 0x0022A884: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x0022A888: jal         0x0020E810
    // 0x0022A88C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0020E810(rdram, ctx);
        goto after_25;
    // 0x0022A88C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_25:
    // 0x0022A890: addiu       $s3, $sp, 0x68
    ctx->r19 = ADD32(ctx->r29, 0X68);
    // 0x0022A894: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0022A898: addiu       $s2, $s1, 0x150
    ctx->r18 = ADD32(ctx->r17, 0X150);
    // 0x0022A89C: jal         0x0020E810
    // 0x0022A8A0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_0020E810(rdram, ctx);
        goto after_26;
    // 0x0022A8A0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_26:
    // 0x0022A8A4: lw          $t0, 0x150($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X150);
    // 0x0022A8A8: lw          $t1, 0x154($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X154);
    // 0x0022A8AC: lw          $t2, 0x158($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X158);
    // 0x0022A8B0: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x0022A8B4: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x0022A8B8: sw          $t2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r10;
    // 0x0022A8BC: jal         0x0020F040
    // 0x0022A8C0: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    func_0020F040(rdram, ctx);
        goto after_27;
    // 0x0022A8C0: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    after_27:
    // 0x0022A8C4: lwc1        $f1, 0x18($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X18);
    // 0x0022A8C8: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0022A8CC: lwc1        $f0, 0x1C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x0022A8D0: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0022A8D4: lwc1        $f12, 0x20($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X20);
    // 0x0022A8D8: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0022A8DC: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0022A8E0: jal         0x00298470
    // 0x0022A8E4: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_28;
    // 0x0022A8E4: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_28:
    // 0x0022A8E8: lwc1        $f3, 0x38($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x0022A8EC: lwc1        $f1, 0x48($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X48);
    // 0x0022A8F0: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0022A8F4: lwc1        $f2, 0x3C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x0022A8F8: lwc1        $f1, 0x4C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X4C);
    // 0x0022A8FC: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0022A900: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x0022A904: lwc1        $f1, 0x50($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X50);
    // 0x0022A908: mul.s       $f12, $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f1.fl);
    // 0x0022A90C: add.s       $f3, $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f2.fl;
    // 0x0022A910: add.s       $f12, $f3, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f3.fl + ctx->f12.fl;
    // 0x0022A914: jal         0x0021153C
    // 0x0022A918: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_0021153C(rdram, ctx);
        goto after_29;
    // 0x0022A918: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_29:
    // 0x0022A91C: lw          $v0, 0xF8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XF8);
    // 0x0022A920: lh          $v0, 0xE($v0)
    ctx->r2 = MEM_H(ctx->r2, 0XE);
    // 0x0022A924: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022A928: lwc1        $f2, 0x61D4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X61D4);
    // 0x0022A92C: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0022A930: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0022A934: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0022A938: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022A93C: lwc1        $f2, 0x61D8($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X61D8);
    // 0x0022A940: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0022A944: nop

    // 0x0022A948: bc1tl       L_0022A950
    if (c1cs) {
        // 0x0022A94C: div.s       $f2, $f1, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
            goto L_0022A950;
    }
    goto skip_0;
    // 0x0022A94C: div.s       $f2, $f1, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
    skip_0:
L_0022A950:
    // 0x0022A950: addiu       $s0, $sp, 0x88
    ctx->r16 = ADD32(ctx->r29, 0X88);
    // 0x0022A954: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022A958: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x0022A95C: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x0022A960: jal         0x0020DCC8
    // 0x0022A964: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    func_0020DCC8(rdram, ctx);
        goto after_30;
    // 0x0022A964: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    after_30:
    // 0x0022A968: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022A96C: addiu       $s0, $sp, 0x98
    ctx->r16 = ADD32(ctx->r29, 0X98);
    // 0x0022A970: jal         0x00211114
    // 0x0022A974: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00211114(rdram, ctx);
        goto after_31;
    // 0x0022A974: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_31:
    // 0x0022A978: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022A97C: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x0022A980: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022A984: lwc1        $f0, 0x61DC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X61DC);
    // 0x0022A988: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0022A98C: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x0022A990: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x0022A994: jal         0x0020F85C
    // 0x0022A998: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    func_0020F85C(rdram, ctx);
        goto after_32;
    // 0x0022A998: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    after_32:
    // 0x0022A99C: addiu       $a0, $s1, 0x18
    ctx->r4 = ADD32(ctx->r17, 0X18);
    // 0x0022A9A0: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x0022A9A4: jal         0x0020EF60
    // 0x0022A9A8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_0020EF60(rdram, ctx);
        goto after_33;
    // 0x0022A9A8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_33:
L_0022A9AC:
    // 0x0022A9AC: lw          $v0, 0x40($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X40);
    // 0x0022A9B0: lui         $v1, 0x7
    ctx->r3 = S32(0X7 << 16);
    // 0x0022A9B4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0022A9B8: bne         $v0, $zero, L_0022AA94
    if (ctx->r2 != 0) {
        // 0x0022A9BC: nop
    
            goto L_0022AA94;
    }
    // 0x0022A9BC: nop

    // 0x0022A9C0: lw          $v0, 0xF8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XF8);
    // 0x0022A9C4: lw          $v0, 0x30($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X30);
    // 0x0022A9C8: lhu         $a0, 0x10($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X10);
    // 0x0022A9CC: jal         0x0026D210
    // 0x0022A9D0: nop

    func_0026D210(rdram, ctx);
        goto after_34;
    // 0x0022A9D0: nop

    after_34:
    // 0x0022A9D4: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x0022A9D8: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    // 0x0022A9DC: c.eq.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl == ctx->f22.fl;
    // 0x0022A9E0: nop

    // 0x0022A9E4: bc1t        L_0022AA94
    if (c1cs) {
        // 0x0022A9E8: addiu       $a0, $sp, 0xD8
        ctx->r4 = ADD32(ctx->r29, 0XD8);
            goto L_0022AA94;
    }
    // 0x0022A9E8: addiu       $a0, $sp, 0xD8
    ctx->r4 = ADD32(ctx->r29, 0XD8);
    // 0x0022A9EC: mfc1        $a2, $f21
    ctx->r6 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x0022A9F0: lw          $t0, 0x150($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X150);
    // 0x0022A9F4: lw          $t1, 0x154($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X154);
    // 0x0022A9F8: lw          $t2, 0x158($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X158);
    // 0x0022A9FC: sw          $t0, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r8;
    // 0x0022AA00: sw          $t1, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r9;
    // 0x0022AA04: sw          $t2, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r10;
    // 0x0022AA08: jal         0x0020EF60
    // 0x0022AA0C: addiu       $a1, $sp, 0xE8
    ctx->r5 = ADD32(ctx->r29, 0XE8);
    func_0020EF60(rdram, ctx);
        goto after_35;
    // 0x0022AA0C: addiu       $a1, $sp, 0xE8
    ctx->r5 = ADD32(ctx->r29, 0XE8);
    after_35:
    // 0x0022AA10: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x0022AA14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022AA18: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0022AA1C: jal         0x0020EEF8
    // 0x0022AA20: addiu       $a2, $sp, 0xD8
    ctx->r6 = ADD32(ctx->r29, 0XD8);
    func_0020EEF8(rdram, ctx);
        goto after_36;
    // 0x0022AA20: addiu       $a2, $sp, 0xD8
    ctx->r6 = ADD32(ctx->r29, 0XD8);
    after_36:
    // 0x0022AA24: lwc1        $f1, 0x18($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X18);
    // 0x0022AA28: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0022AA2C: lwc1        $f0, 0x1C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x0022AA30: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0022AA34: lwc1        $f12, 0x20($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X20);
    // 0x0022AA38: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0022AA3C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0022AA40: jal         0x00298470
    // 0x0022AA44: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_37;
    // 0x0022AA44: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_37:
    // 0x0022AA48: lw          $v0, 0xF8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XF8);
    // 0x0022AA4C: lw          $v0, 0x30($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X30);
    // 0x0022AA50: lhu         $a0, 0x12($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X12);
    // 0x0022AA54: jal         0x0026D210
    // 0x0022AA58: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_0026D210(rdram, ctx);
        goto after_38;
    // 0x0022AA58: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_38:
    // 0x0022AA5C: c.lt.s      $f22, $f21
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f22.fl < ctx->f21.fl;
    // 0x0022AA60: nop

    // 0x0022AA64: bc1f        L_0022AA78
    if (!c1cs) {
        // 0x0022AA68: nop
    
            goto L_0022AA78;
    }
    // 0x0022AA68: nop

    // 0x0022AA6C: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x0022AA70: j           L_0022AA7C
    // 0x0022AA74: nop

        goto L_0022AA7C;
    // 0x0022AA74: nop

L_0022AA78:
    // 0x0022AA78: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
L_0022AA7C:
    // 0x0022AA7C: nop

    // 0x0022AA80: bc1f        L_0022AA94
    if (!c1cs) {
        // 0x0022AA84: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0022AA94;
    }
    // 0x0022AA84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022AA88: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x0022AA8C: jal         0x0020EF60
    // 0x0022AA90: addiu       $a1, $sp, 0xE8
    ctx->r5 = ADD32(ctx->r29, 0XE8);
    func_0020EF60(rdram, ctx);
        goto after_39;
    // 0x0022AA90: addiu       $a1, $sp, 0xE8
    ctx->r5 = ADD32(ctx->r29, 0XE8);
    after_39:
L_0022AA94:
    // 0x0022AA94: lw          $v0, 0x40($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X40);
    // 0x0022AA98: lui         $v1, 0x3
    ctx->r3 = S32(0X3 << 16);
    // 0x0022AA9C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0022AAA0: bne         $v0, $zero, L_0022AAB4
    if (ctx->r2 != 0) {
        // 0x0022AAA4: nop
    
            goto L_0022AAB4;
    }
    // 0x0022AAA4: nop

    // 0x0022AAA8: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x0022AAAC: jal         0x00229618
    // 0x0022AAB0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00229618(rdram, ctx);
        goto after_40;
    // 0x0022AAB0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_40:
L_0022AAB4:
    // 0x0022AAB4: lw          $ra, 0x10C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10C);
    // 0x0022AAB8: lw          $s4, 0x108($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X108);
    // 0x0022AABC: lw          $s3, 0x104($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X104);
    // 0x0022AAC0: lw          $s2, 0x100($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X100);
    // 0x0022AAC4: lw          $s1, 0xFC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XFC);
    // 0x0022AAC8: lw          $s0, 0xF8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XF8);
    // 0x0022AACC: ldc1        $f22, 0x120($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X120);
    // 0x0022AAD0: ldc1        $f21, 0x118($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X118);
    // 0x0022AAD4: ldc1        $f20, 0x110($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X110);
    // 0x0022AAD8: jr          $ra
    // 0x0022AADC: addiu       $sp, $sp, 0x128
    ctx->r29 = ADD32(ctx->r29, 0X128);
    return;
    // 0x0022AADC: addiu       $sp, $sp, 0x128
    ctx->r29 = ADD32(ctx->r29, 0X128);
;}
RECOMP_FUNC void func_0024D344(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0024D344: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x0024D348: sw          $s1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r17;
    // 0x0024D34C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0024D350: sw          $fp, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r30;
    // 0x0024D354: addu        $fp, $zero, $zero
    ctx->r30 = ADD32(0, 0);
    // 0x0024D358: sw          $ra, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r31;
    // 0x0024D35C: sw          $s7, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r23;
    // 0x0024D360: sw          $s6, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r22;
    // 0x0024D364: sw          $s5, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r21;
    // 0x0024D368: sw          $s4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r20;
    // 0x0024D36C: sw          $s3, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r19;
    // 0x0024D370: sw          $s2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r18;
    // 0x0024D374: sw          $s0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r16;
    // 0x0024D378: sdc1        $f24, 0xD0($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0XD0, ctx->r29);
    // 0x0024D37C: sdc1        $f23, 0xC8($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0XC8, ctx->r29);
    // 0x0024D380: sdc1        $f22, 0xC0($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0XC0, ctx->r29);
    // 0x0024D384: sdc1        $f21, 0xB8($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0XB8, ctx->r29);
    // 0x0024D388: sdc1        $f20, 0xB0($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XB0, ctx->r29);
    // 0x0024D38C: lw          $v0, 0x510($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X510);
    // 0x0024D390: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024D394: lwc1        $f24, 0x6D28($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0024D398: addu        $s2, $s1, $zero
    ctx->r18 = ADD32(ctx->r17, 0);
    // 0x0024D39C: sw          $zero, 0x78($sp)
    MEM_W(0X78, ctx->r29) = 0;
    // 0x0024D3A0: xori        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 ^ 0X2;
    // 0x0024D3A4: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x0024D3A8: jal         0x00284188
    // 0x0024D3AC: sw          $v0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r2;
    func_00284188(rdram, ctx);
        goto after_0;
    // 0x0024D3AC: sw          $v0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r2;
    after_0:
    // 0x0024D3B0: beq         $v0, $zero, L_0024D3BC
    if (ctx->r2 == 0) {
        // 0x0024D3B4: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_0024D3BC;
    }
    // 0x0024D3B4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x0024D3B8: sw          $t2, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r10;
L_0024D3BC:
    // 0x0024D3BC: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x0024D3C0: addiu       $s0, $s0, -0x5528
    ctx->r16 = ADD32(ctx->r16, -0X5528);
    // 0x0024D3C4: lbu         $v0, 0x19($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X19);
    // 0x0024D3C8: beq         $v0, $zero, L_0024D3DC
    if (ctx->r2 == 0) {
        // 0x0024D3CC: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_0024D3DC;
    }
    // 0x0024D3CC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x0024D3D0: sw          $t3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r11;
    // 0x0024D3D4: jal         0x00206068
    // 0x0024D3D8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_00206068(rdram, ctx);
        goto after_1;
    // 0x0024D3D8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_1:
L_0024D3DC:
    // 0x0024D3DC: lw          $v0, 0x140($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X140);
    // 0x0024D3E0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0024D3E4: sw          $s1, 0x1A8($s1)
    MEM_W(0X1A8, ctx->r17) = ctx->r17;
    // 0x0024D3E8: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x0024D3EC: beq         $v0, $zero, L_0024D408
    if (ctx->r2 == 0) {
        // 0x0024D3F0: sw          $s1, 0x430($s1)
        MEM_W(0X430, ctx->r17) = ctx->r17;
            goto L_0024D408;
    }
    // 0x0024D3F0: sw          $s1, 0x430($s1)
    MEM_W(0X430, ctx->r17) = ctx->r17;
    // 0x0024D3F4: lbu         $v0, 0x19($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X19);
    // 0x0024D3F8: bne         $v0, $zero, L_0024D408
    if (ctx->r2 != 0) {
        // 0x0024D3FC: nop
    
            goto L_0024D408;
    }
    // 0x0024D3FC: nop

    // 0x0024D400: lw          $v0, -0xCAC($s0)
    ctx->r2 = MEM_W(ctx->r16, -0XCAC);
    // 0x0024D404: sltiu       $a0, $v0, 0x1
    ctx->r4 = ctx->r2 < 0X1 ? 1 : 0;
L_0024D408:
    // 0x0024D408: jal         0x00275B08
    // 0x0024D40C: nop

    func_00275B08(rdram, ctx);
        goto after_2;
    // 0x0024D40C: nop

    after_2:
    // 0x0024D410: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0024D414: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0024D418: bne         $v0, $zero, L_0024D4F8
    if (ctx->r2 != 0) {
        // 0x0024D41C: nop
    
            goto L_0024D4F8;
    }
    // 0x0024D41C: nop

    // 0x0024D420: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0024D424: lw          $v0, -0x5560($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5560);
    // 0x0024D428: beq         $v0, $zero, L_0024D440
    if (ctx->r2 == 0) {
        // 0x0024D42C: nop
    
            goto L_0024D440;
    }
    // 0x0024D42C: nop

    // 0x0024D430: lw          $v0, 0xA64($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XA64);
    // 0x0024D434: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x0024D438: bne         $v0, $zero, L_0024D468
    if (ctx->r2 != 0) {
        // 0x0024D43C: nop
    
            goto L_0024D468;
    }
    // 0x0024D43C: nop

L_0024D440:
    // 0x0024D440: lw          $v0, 0xA68($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XA68);
    // 0x0024D444: andi        $v0, $v0, 0x800
    ctx->r2 = ctx->r2 & 0X800;
    // 0x0024D448: beq         $v0, $zero, L_0024D468
    if (ctx->r2 == 0) {
        // 0x0024D44C: nop
    
            goto L_0024D468;
    }
    // 0x0024D44C: nop

    // 0x0024D450: lw          $v0, 0x12A4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X12A4);
    // 0x0024D454: beq         $v0, $zero, L_0024D464
    if (ctx->r2 == 0) {
        // 0x0024D458: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0024D464;
    }
    // 0x0024D458: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0024D45C: j           L_0024D468
    // 0x0024D460: sw          $zero, 0x12A4($s1)
    MEM_W(0X12A4, ctx->r17) = 0;
        goto L_0024D468;
    // 0x0024D460: sw          $zero, 0x12A4($s1)
    MEM_W(0X12A4, ctx->r17) = 0;
L_0024D464:
    // 0x0024D464: sw          $v0, 0x12A4($s1)
    MEM_W(0X12A4, ctx->r17) = ctx->r2;
L_0024D468:
    // 0x0024D468: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0024D46C: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0024D470: bne         $v0, $zero, L_0024D4F8
    if (ctx->r2 != 0) {
        // 0x0024D474: nop
    
            goto L_0024D4F8;
    }
    // 0x0024D474: nop

    // 0x0024D478: lw          $v0, 0x1050($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1050);
    // 0x0024D47C: beq         $v0, $zero, L_0024D490
    if (ctx->r2 == 0) {
        // 0x0024D480: nop
    
            goto L_0024D490;
    }
    // 0x0024D480: nop

    // 0x0024D484: lw          $v0, 0xCD0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XCD0);
    // 0x0024D488: bne         $v0, $zero, L_0024D4F0
    if (ctx->r2 != 0) {
        // 0x0024D48C: nop
    
            goto L_0024D4F0;
    }
    // 0x0024D48C: nop

L_0024D490:
    // 0x0024D490: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0024D494: lw          $v0, -0x5560($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5560);
    // 0x0024D498: beq         $v0, $zero, L_0024D4B0
    if (ctx->r2 == 0) {
        // 0x0024D49C: nop
    
            goto L_0024D4B0;
    }
    // 0x0024D49C: nop

    // 0x0024D4A0: lw          $v0, 0xA64($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XA64);
    // 0x0024D4A4: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x0024D4A8: bne         $v0, $zero, L_0024D4F0
    if (ctx->r2 != 0) {
        // 0x0024D4AC: nop
    
            goto L_0024D4F0;
    }
    // 0x0024D4AC: nop

L_0024D4B0:
    // 0x0024D4B0: lw          $v0, 0xA68($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XA68);
    // 0x0024D4B4: andi        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 & 0X200;
    // 0x0024D4B8: beq         $v0, $zero, L_0024D4F0
    if (ctx->r2 == 0) {
        // 0x0024D4BC: addiu       $v1, $zero, -0x1
        ctx->r3 = ADD32(0, -0X1);
            goto L_0024D4F0;
    }
    // 0x0024D4BC: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x0024D4C0: lh          $v0, 0xB14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XB14);
    // 0x0024D4C4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0024D4C8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024D4CC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0024D4D0: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x0024D4D4: lh          $a0, 0xC($v0)
    ctx->r4 = MEM_H(ctx->r2, 0XC);
    // 0x0024D4D8: lhu         $a1, 0xC($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0XC);
    // 0x0024D4DC: beq         $a0, $v1, L_0024D4F0
    if (ctx->r4 == ctx->r3) {
        // 0x0024D4E0: addu        $v0, $s1, $a0
        ctx->r2 = ADD32(ctx->r17, ctx->r4);
            goto L_0024D4F0;
    }
    // 0x0024D4E0: addu        $v0, $s1, $a0
    ctx->r2 = ADD32(ctx->r17, ctx->r4);
    // 0x0024D4E4: lb          $v0, 0x972($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X972);
    // 0x0024D4E8: bnel        $v0, $zero, L_0024D4F0
    if (ctx->r2 != 0) {
        // 0x0024D4EC: sh          $a1, 0xB14($s1)
        MEM_H(0XB14, ctx->r17) = ctx->r5;
            goto L_0024D4F0;
    }
    goto skip_0;
    // 0x0024D4EC: sh          $a1, 0xB14($s1)
    MEM_H(0XB14, ctx->r17) = ctx->r5;
    skip_0:
L_0024D4F0:
    // 0x0024D4F0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0024D4F4: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
L_0024D4F8:
    // 0x0024D4F8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x0024D4FC: beq         $v0, $zero, L_0024D5CC
    if (ctx->r2 == 0) {
        // 0x0024D500: lui         $v1, 0xFFFD
        ctx->r3 = S32(0XFFFD << 16);
            goto L_0024D5CC;
    }
    // 0x0024D500: lui         $v1, 0xFFFD
    ctx->r3 = S32(0XFFFD << 16);
    // 0x0024D504: lw          $v0, 0x520($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X520);
    // 0x0024D508: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0024D50C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024D510: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0024D514: lwc1        $f0, -0x2278($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X2278);
    // 0x0024D518: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x0024D51C: nop

    // 0x0024D520: bc1t        L_0024D5D0
    if (c1cs) {
        // 0x0024D524: ori         $v1, $v1, 0xFFFF
        ctx->r3 = ctx->r3 | 0XFFFF;
            goto L_0024D5D0;
    }
    // 0x0024D524: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0024D528: lwc1        $f3, 0x524($s1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r17, 0X524);
    // 0x0024D52C: cvt.s.w     $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    ctx->f3.fl = CVT_S_W(ctx->f_odd[(3 - 1) * 2]);
    // 0x0024D530: c.eq.s      $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f3.fl == ctx->f2.fl;
    // 0x0024D534: nop

    // 0x0024D538: bc1tl       L_0024D5CC
    if (c1cs) {
        // 0x0024D53C: lui         $v1, 0xFFFD
        ctx->r3 = S32(0XFFFD << 16);
            goto L_0024D5CC;
    }
    goto skip_1;
    // 0x0024D53C: lui         $v1, 0xFFFD
    ctx->r3 = S32(0XFFFD << 16);
    skip_1:
    // 0x0024D540: lw          $v0, 0x518($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X518);
    // 0x0024D544: lbu         $v0, 0x3E($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3E);
    // 0x0024D548: bnel        $v0, $zero, L_0024D5CC
    if (ctx->r2 != 0) {
        // 0x0024D54C: lui         $v1, 0xFFFD
        ctx->r3 = S32(0XFFFD << 16);
            goto L_0024D5CC;
    }
    goto skip_2;
    // 0x0024D54C: lui         $v1, 0xFFFD
    ctx->r3 = S32(0XFFFD << 16);
    skip_2:
    // 0x0024D550: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024D554: lwc1        $f1, 0x6CFC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6CFC);
    // 0x0024D558: mul.s       $f1, $f0, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0024D55C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024D560: lwc1        $f2, 0x6D28($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0024D564: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024D568: lwc1        $f0, 0x6D00($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D00);
    // 0x0024D56C: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0024D570: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x0024D574: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x0024D578: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0024D57C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0024D580: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x0024D584: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0024D588: lw          $v0, 0x18($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X18);
    // 0x0024D58C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x0024D590: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0024D594: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0024D598: bgez        $v0, L_0024D5AC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x0024D59C: add.s       $f2, $f3, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f3.fl + ctx->f0.fl;
            goto L_0024D5AC;
    }
    // 0x0024D59C: add.s       $f2, $f3, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f3.fl + ctx->f0.fl;
    // 0x0024D5A0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024D5A4: ldc1        $f0, 0x6D08($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X6D08);
    // 0x0024D5A8: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
L_0024D5AC:
    // 0x0024D5AC: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    // 0x0024D5B0: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x0024D5B4: nop

    // 0x0024D5B8: bc1fl       L_0024D5C0
    if (!c1cs) {
        // 0x0024D5BC: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_0024D5C0;
    }
    goto skip_3;
    // 0x0024D5BC: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_3:
L_0024D5C0:
    // 0x0024D5C0: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0024D5C4: swc1        $f4, 0x524($s1)
    MEM_W(0X524, ctx->r17) = ctx->f4.u32l;
    // 0x0024D5C8: lui         $v1, 0xFFFD
    ctx->r3 = S32(0XFFFD << 16);
L_0024D5CC:
    // 0x0024D5CC: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
L_0024D5D0:
    // 0x0024D5D0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0024D5D4: addiu       $s0, $s2, 0x140
    ctx->r16 = ADD32(ctx->r18, 0X140);
    // 0x0024D5D8: lw          $v0, 0xD4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XD4);
    // 0x0024D5DC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0024D5E0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0024D5E4: jal         0x00242E34
    // 0x0024D5E8: sw          $v0, 0xD4($s2)
    MEM_W(0XD4, ctx->r18) = ctx->r2;
    func_00242E34(rdram, ctx);
        goto after_3;
    // 0x0024D5E8: sw          $v0, 0xD4($s2)
    MEM_W(0XD4, ctx->r18) = ctx->r2;
    after_3:
    // 0x0024D5EC: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x0024D5F0: beq         $t2, $zero, L_0024D604
    if (ctx->r10 == 0) {
        // 0x0024D5F4: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0024D604;
    }
    // 0x0024D5F4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0024D5F8: jal         0x0021A344
    // 0x0024D5FC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_0021A344(rdram, ctx);
        goto after_4;
    // 0x0024D5FC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_4:
    // 0x0024D600: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_0024D604:
    // 0x0024D604: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024D608: swc1        $f24, 0x6D28($at)
    MEM_W(0X6D28, ctx->r1) = ctx->f24.u32l;
    // 0x0024D60C: jal         0x00242C00
    // 0x0024D610: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00242C00(rdram, ctx);
        goto after_5;
    // 0x0024D610: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x0024D614: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0024D618: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0024D61C: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x0024D620: bne         $v0, $zero, L_0024D630
    if (ctx->r2 != 0) {
        // 0x0024D624: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0024D630;
    }
    // 0x0024D624: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0024D628: lbu         $v0, 0x6A9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6A9);
    // 0x0024D62C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
L_0024D630:
    // 0x0024D630: bnel        $v0, $zero, L_0024D638
    if (ctx->r2 != 0) {
        // 0x0024D634: ori         $fp, $fp, 0x800
        ctx->r30 = ctx->r30 | 0X800;
            goto L_0024D638;
    }
    goto skip_4;
    // 0x0024D634: ori         $fp, $fp, 0x800
    ctx->r30 = ctx->r30 | 0X800;
    skip_4:
L_0024D638:
    // 0x0024D638: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0024D63C: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0024D640: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x0024D644: bne         $v0, $zero, L_0024D654
    if (ctx->r2 != 0) {
        // 0x0024D648: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0024D654;
    }
    // 0x0024D648: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0024D64C: lbu         $v0, 0x6AB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6AB);
    // 0x0024D650: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
L_0024D654:
    // 0x0024D654: bnel        $v0, $zero, L_0024D65C
    if (ctx->r2 != 0) {
        // 0x0024D658: ori         $fp, $fp, 0x1000
        ctx->r30 = ctx->r30 | 0X1000;
            goto L_0024D65C;
    }
    goto skip_5;
    // 0x0024D658: ori         $fp, $fp, 0x1000
    ctx->r30 = ctx->r30 | 0X1000;
    skip_5:
L_0024D65C:
    // 0x0024D65C: lw          $v0, 0x518($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X518);
    // 0x0024D660: lbu         $v1, 0x3E($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X3E);
    // 0x0024D664: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0024D668: bne         $v1, $v0, L_0024D680
    if (ctx->r3 != ctx->r2) {
        // 0x0024D66C: lui         $v0, 0x40
        ctx->r2 = S32(0X40 << 16);
            goto L_0024D680;
    }
    // 0x0024D66C: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
    // 0x0024D670: ori         $fp, $fp, 0x2000
    ctx->r30 = ctx->r30 | 0X2000;
    // 0x0024D674: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x0024D678: or          $t3, $t3, $v0
    ctx->r11 = ctx->r11 | ctx->r2;
    // 0x0024D67C: sw          $t3, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r11;
L_0024D680:
    // 0x0024D680: jal         0x00284188
    // 0x0024D684: nop

    func_00284188(rdram, ctx);
        goto after_6;
    // 0x0024D684: nop

    after_6:
    // 0x0024D688: lwc1        $f1, 0xAAC($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XAAC);
    // 0x0024D68C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x0024D690: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x0024D694: nop

    // 0x0024D698: bc1f        L_0024D6C0
    if (!c1cs) {
        // 0x0024D69C: nop
    
            goto L_0024D6C0;
    }
    // 0x0024D69C: nop

    // 0x0024D6A0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024D6A4: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0024D6A8: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0024D6AC: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x0024D6B0: nop

    // 0x0024D6B4: bc1tl       L_0024D6BC
    if (c1cs) {
        // 0x0024D6B8: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_0024D6BC;
    }
    goto skip_6;
    // 0x0024D6B8: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_6:
L_0024D6BC:
    // 0x0024D6BC: swc1        $f0, 0xAAC($s1)
    MEM_W(0XAAC, ctx->r17) = ctx->f0.u32l;
L_0024D6C0:
    // 0x0024D6C0: lwc1        $f1, 0xA28($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XA28);
    // 0x0024D6C4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x0024D6C8: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x0024D6CC: nop

    // 0x0024D6D0: bc1f        L_0024D6FC
    if (!c1cs) {
        // 0x0024D6D4: addiu       $v1, $sp, 0x28
        ctx->r3 = ADD32(ctx->r29, 0X28);
            goto L_0024D6FC;
    }
    // 0x0024D6D4: addiu       $v1, $sp, 0x28
    ctx->r3 = ADD32(ctx->r29, 0X28);
    // 0x0024D6D8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024D6DC: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0024D6E0: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0024D6E4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x0024D6E8: nop

    // 0x0024D6EC: bc1tl       L_0024D6F4
    if (c1cs) {
        // 0x0024D6F0: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_0024D6F4;
    }
    goto skip_7;
    // 0x0024D6F0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_7:
L_0024D6F4:
    // 0x0024D6F4: swc1        $f0, 0xA28($s1)
    MEM_W(0XA28, ctx->r17) = ctx->f0.u32l;
    // 0x0024D6F8: addiu       $v1, $sp, 0x28
    ctx->r3 = ADD32(ctx->r29, 0X28);
L_0024D6FC:
    // 0x0024D6FC: addiu       $v0, $s1, 0xA40
    ctx->r2 = ADD32(ctx->r17, 0XA40);
    // 0x0024D700: addiu       $a0, $s1, 0xA70
    ctx->r4 = ADD32(ctx->r17, 0XA70);
L_0024D704:
    // 0x0024D704: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x0024D708: lw          $t5, 0x4($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X4);
    // 0x0024D70C: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x0024D710: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x0024D714: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x0024D718: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
    // 0x0024D71C: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x0024D720: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x0024D724: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x0024D728: bne         $v0, $a0, L_0024D704
    if (ctx->r2 != ctx->r4) {
        // 0x0024D72C: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_0024D704;
    }
    // 0x0024D72C: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x0024D730: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024D734: lwc1        $f21, 0x6D28($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x0024D738: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0024D73C: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x0024D740: lw          $t5, 0x4($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X4);
    // 0x0024D744: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x0024D748: c.lt.s      $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f0.fl < ctx->f21.fl;
    // 0x0024D74C: nop

    // 0x0024D750: bc1f        L_0024E0C0
    if (!c1cs) {
        // 0x0024D754: sw          $t5, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->r13;
            goto L_0024E0C0;
    }
    // 0x0024D754: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
    // 0x0024D758: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    // 0x0024D75C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024D760: lwc1        $f23, 0x6D10($at)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r1, 0X6D10);
    // 0x0024D764: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024D768: lwc1        $f22, 0x6D14($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X6D14);
    // 0x0024D76C: addiu       $t4, $sp, 0x60
    ctx->r12 = ADD32(ctx->r29, 0X60);
    // 0x0024D770: sw          $t4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r12;
L_0024D774:
    // 0x0024D774: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0024D778: jal         0x00242E34
    // 0x0024D77C: addiu       $a1, $s2, 0x140
    ctx->r5 = ADD32(ctx->r18, 0X140);
    func_00242E34(rdram, ctx);
        goto after_7;
    // 0x0024D77C: addiu       $a1, $s2, 0x140
    ctx->r5 = ADD32(ctx->r18, 0X140);
    after_7:
    // 0x0024D780: lhu         $v0, 0xA08($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA08);
    // 0x0024D784: lw          $v1, 0xA1C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XA1C);
    // 0x0024D788: sh          $v0, 0xA0C($s1)
    MEM_H(0XA0C, ctx->r17) = ctx->r2;
    // 0x0024D78C: sw          $v1, 0xA14($s1)
    MEM_W(0XA14, ctx->r17) = ctx->r3;
    // 0x0024D790: lw          $s4, 0x10($s2)
    ctx->r20 = MEM_W(ctx->r18, 0X10);
    // 0x0024D794: jal         0x00268A2C
    // 0x0024D798: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00268A2C(rdram, ctx);
        goto after_8;
    // 0x0024D798: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_8:
    // 0x0024D79C: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x0024D7A0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0024D7A4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0024D7A8: jal         0x00254640
    // 0x0024D7AC: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_00254640(rdram, ctx);
        goto after_9;
    // 0x0024D7AC: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_9:
    // 0x0024D7B0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0024D7B4: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0024D7B8: bne         $v0, $zero, L_0024D858
    if (ctx->r2 != 0) {
        // 0x0024D7BC: nop
    
            goto L_0024D858;
    }
    // 0x0024D7BC: nop

    // 0x0024D7C0: beq         $s4, $zero, L_0024D84C
    if (ctx->r20 == 0) {
        // 0x0024D7C4: addiu       $s0, $s1, 0x4
        ctx->r16 = ADD32(ctx->r17, 0X4);
            goto L_0024D84C;
    }
    // 0x0024D7C4: addiu       $s0, $s1, 0x4
    ctx->r16 = ADD32(ctx->r17, 0X4);
    // 0x0024D7C8: beq         $s0, $zero, L_0024D84C
    if (ctx->r16 == 0) {
        // 0x0024D7CC: nop
    
            goto L_0024D84C;
    }
    // 0x0024D7CC: nop

    // 0x0024D7D0: lhu         $v0, 0x2($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X2);
    // 0x0024D7D4: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x0024D7D8: beq         $v0, $zero, L_0024D84C
    if (ctx->r2 == 0) {
        // 0x0024D7DC: nop
    
            goto L_0024D84C;
    }
    // 0x0024D7DC: nop

    // 0x0024D7E0: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x0024D7E4: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x0024D7E8: jal         0x00269C3C
    // 0x0024D7EC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_00269C3C(rdram, ctx);
        goto after_10;
    // 0x0024D7EC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_10:
    // 0x0024D7F0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x0024D7F4: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x0024D7F8: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x0024D7FC: jal         0x0026BE60
    // 0x0024D800: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_0026BE60(rdram, ctx);
        goto after_11;
    // 0x0024D800: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_11:
    // 0x0024D804: sub.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f0.fl;
    // 0x0024D808: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024D80C: lwc1        $f0, 0x6D18($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D18);
    // 0x0024D810: trunc.w.s   $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    ctx->f4.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x0024D814: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x0024D818: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0024D81C: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0024D820: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0024D824: nop

    // 0x0024D828: bc1f        L_0024D84C
    if (!c1cs) {
        // 0x0024D82C: nop
    
            goto L_0024D84C;
    }
    // 0x0024D82C: nop

    // 0x0024D830: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024D834: lwc1        $f12, 0x6D1C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X6D1C);
    // 0x0024D838: mul.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f1.fl, ctx->f12.fl);
    // 0x0024D83C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024D840: lwc1        $f0, 0x6D20($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D20);
    // 0x0024D844: j           L_0024D850
    // 0x0024D848: sub.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f12.fl;
        goto L_0024D850;
    // 0x0024D848: sub.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f12.fl;
L_0024D84C:
    // 0x0024D84C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
L_0024D850:
    // 0x0024D850: jal         0x00275B30
    // 0x0024D854: nop

    func_00275B30(rdram, ctx);
        goto after_12;
    // 0x0024D854: nop

    after_12:
L_0024D858:
    // 0x0024D858: beq         $s3, $zero, L_0024D878
    if (ctx->r19 == 0) {
        // 0x0024D85C: nop
    
            goto L_0024D878;
    }
    // 0x0024D85C: nop

    // 0x0024D860: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024D864: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0024D868: lwc1        $f1, 0xB28($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XB28);
    // 0x0024D86C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0024D870: j           L_0024D884
    // 0x0024D874: swc1        $f0, 0xA24($s1)
    MEM_W(0XA24, ctx->r17) = ctx->f0.u32l;
        goto L_0024D884;
    // 0x0024D874: swc1        $f0, 0xA24($s1)
    MEM_W(0XA24, ctx->r17) = ctx->f0.u32l;
L_0024D878:
    // 0x0024D878: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024D87C: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0024D880: swc1        $f0, 0xA24($s1)
    MEM_W(0XA24, ctx->r17) = ctx->f0.u32l;
L_0024D884:
    // 0x0024D884: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0024D888: jal         0x002545F0
    // 0x0024D88C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_002545F0(rdram, ctx);
        goto after_13;
    // 0x0024D88C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_13:
    // 0x0024D890: lwc1        $f0, 0xA78($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XA78);
    // 0x0024D894: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0024D898: lwc1        $f12, 0xA7C($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0XA7C);
    // 0x0024D89C: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0024D8A0: jal         0x00298470
    // 0x0024D8A4: add.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_14;
    // 0x0024D8A4: add.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f12.fl;
    after_14:
    // 0x0024D8A8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024D8AC: lwc1        $f3, 0x6D24($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X6D24);
    // 0x0024D8B0: mul.s       $f3, $f0, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x0024D8B4: swc1        $f0, 0xA80($s1)
    MEM_W(0XA80, ctx->r17) = ctx->f0.u32l;
    // 0x0024D8B8: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x0024D8BC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024D8C0: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0024D8C4: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0024D8C8: lwc1        $f1, 0xB00($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XB00);
    // 0x0024D8CC: add.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f3.fl;
    // 0x0024D8D0: lwc1        $f0, 0xAFC($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XAFC);
    // 0x0024D8D4: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0024D8D8: swc1        $f1, 0xB00($s1)
    MEM_W(0XB00, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    // 0x0024D8DC: swc1        $f0, 0xAFC($s1)
    MEM_W(0XAFC, ctx->r17) = ctx->f0.u32l;
    // 0x0024D8E0: lw          $t2, 0x4($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X4);
    // 0x0024D8E4: lw          $t3, 0x8($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X8);
    // 0x0024D8E8: lw          $t4, 0xC($s2)
    ctx->r12 = MEM_W(ctx->r18, 0XC);
    // 0x0024D8EC: sw          $t2, 0xAA0($s1)
    MEM_W(0XAA0, ctx->r17) = ctx->r10;
    // 0x0024D8F0: sw          $t3, 0xAA4($s1)
    MEM_W(0XAA4, ctx->r17) = ctx->r11;
    // 0x0024D8F4: sw          $t4, 0xAA8($s1)
    MEM_W(0XAA8, ctx->r17) = ctx->r12;
    // 0x0024D8F8: lwc1        $f0, 0x1298($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X1298);
    // 0x0024D8FC: c.lt.s      $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f21.fl < ctx->f0.fl;
    // 0x0024D900: nop

    // 0x0024D904: bc1f        L_0024DA38
    if (!c1cs) {
        // 0x0024D908: nop
    
            goto L_0024DA38;
    }
    // 0x0024D908: nop

    // 0x0024D90C: lw          $v0, 0x524($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X524);
    // 0x0024D910: beq         $v0, $zero, L_0024DA38
    if (ctx->r2 == 0) {
        // 0x0024D914: nop
    
            goto L_0024DA38;
    }
    // 0x0024D914: nop

    // 0x0024D918: jal         0x002548FC
    // 0x0024D91C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002548FC(rdram, ctx);
        goto after_15;
    // 0x0024D91C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_15:
    // 0x0024D920: bne         $v0, $zero, L_0024DA38
    if (ctx->r2 != 0) {
        // 0x0024D924: nop
    
            goto L_0024DA38;
    }
    // 0x0024D924: nop

    // 0x0024D928: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024D92C: lwc1        $f20, 0x6D2C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6D2C);
    // 0x0024D930: jal         0x0021149C
    // 0x0024D934: mov.s       $f12, $f23
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 23);
    ctx->f12.fl = ctx->f23.fl;
    func_0021149C(rdram, ctx);
        goto after_16;
    // 0x0024D934: mov.s       $f12, $f23
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 23);
    ctx->f12.fl = ctx->f23.fl;
    after_16:
    // 0x0024D938: sub.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x0024D93C: mul.s       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x0024D940: lwc1        $f1, 0xAA0($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XAA0);
    // 0x0024D944: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0024D948: mov.s       $f12, $f23
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 23);
    ctx->f12.fl = ctx->f23.fl;
    // 0x0024D94C: jal         0x0021149C
    // 0x0024D950: swc1        $f1, 0xAA0($s1)
    MEM_W(0XAA0, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    func_0021149C(rdram, ctx);
        goto after_17;
    // 0x0024D950: swc1        $f1, 0xAA0($s1)
    MEM_W(0XAA0, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    after_17:
    // 0x0024D954: sub.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x0024D958: mul.s       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x0024D95C: lwc1        $f1, 0xAA8($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XAA8);
    // 0x0024D960: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0024D964: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024D968: lwc1        $f12, 0x6D30($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X6D30);
    // 0x0024D96C: jal         0x0021149C
    // 0x0024D970: swc1        $f1, 0xAA8($s1)
    MEM_W(0XAA8, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    func_0021149C(rdram, ctx);
        goto after_18;
    // 0x0024D970: swc1        $f1, 0xAA8($s1)
    MEM_W(0XAA8, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    after_18:
    // 0x0024D974: mul.s       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x0024D978: lwc1        $f1, 0xAA4($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XAA4);
    // 0x0024D97C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0024D980: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024D984: lwc1        $f12, 0x6D34($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X6D34);
    // 0x0024D988: jal         0x0021149C
    // 0x0024D98C: swc1        $f1, 0xAA4($s1)
    MEM_W(0XAA4, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    func_0021149C(rdram, ctx);
        goto after_19;
    // 0x0024D98C: swc1        $f1, 0xAA4($s1)
    MEM_W(0XAA4, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    after_19:
    // 0x0024D990: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024D994: lwc1        $f1, 0x6D38($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D38);
    // 0x0024D998: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0024D99C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024D9A0: lwc1        $f1, 0x6D3C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D3C);
    // 0x0024D9A4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0024D9A8: lwc1        $f1, 0x50($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X50);
    // 0x0024D9AC: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0024D9B0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024D9B4: lwc1        $f12, 0x6D40($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X6D40);
    // 0x0024D9B8: jal         0x0021149C
    // 0x0024D9BC: swc1        $f1, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    func_0021149C(rdram, ctx);
        goto after_20;
    // 0x0024D9BC: swc1        $f1, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    after_20:
    // 0x0024D9C0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024D9C4: lwc1        $f1, 0x6D44($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D44);
    // 0x0024D9C8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0024D9CC: lwc1        $f1, 0xAC8($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XAC8);
    // 0x0024D9D0: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0024D9D4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0024D9D8: lw          $v0, 0x6D1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D1C);
    // 0x0024D9DC: beq         $v0, $zero, L_0024DA18
    if (ctx->r2 == 0) {
        // 0x0024D9E0: swc1        $f1, 0xAC8($s1)
        MEM_W(0XAC8, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
            goto L_0024DA18;
    }
    // 0x0024D9E0: swc1        $f1, 0xAC8($s1)
    MEM_W(0XAC8, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    // 0x0024D9E4: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x0024D9E8: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
    // 0x0024D9EC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0024D9F0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0024D9F4: lw          $a1, 0x12AC($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X12AC);
    // 0x0024D9F8: lui         $a3, 0x41CC
    ctx->r7 = S32(0X41CC << 16);
    // 0x0024D9FC: ori         $a3, $a3, 0xCCCC
    ctx->r7 = ctx->r7 | 0XCCCC;
    // 0x0024DA00: jal         0x00245828
    // 0x0024DA04: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    func_00245828(rdram, ctx);
        goto after_21;
    // 0x0024DA04: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    after_21:
    // 0x0024DA08: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0024DA0C: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    // 0x0024DA10: jal         0x00247C10
    // 0x0024DA14: addiu       $a1, $s1, 0x140
    ctx->r5 = ADD32(ctx->r17, 0X140);
    func_00247C10(rdram, ctx);
        goto after_22;
    // 0x0024DA14: addiu       $a1, $s1, 0x140
    ctx->r5 = ADD32(ctx->r17, 0X140);
    after_22:
L_0024DA18:
    // 0x0024DA18: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0024DA1C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0024DA20: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0024DA24: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x0024DA28: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x0024DA2C: lw          $a3, 0xC($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XC);
    // 0x0024DA30: jal         0x00275544
    // 0x0024DA34: addiu       $a0, $zero, 0x227
    ctx->r4 = ADD32(0, 0X227);
    func_00275544(rdram, ctx);
        goto after_23;
    // 0x0024DA34: addiu       $a0, $zero, 0x227
    ctx->r4 = ADD32(0, 0X227);
    after_23:
L_0024DA38:
    // 0x0024DA38: lwc1        $f1, 0xA10($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XA10);
    // 0x0024DA3C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024DA40: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0024DA44: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0024DA48: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0024DA4C: jal         0x002685F0
    // 0x0024DA50: swc1        $f1, 0xA10($s1)
    MEM_W(0XA10, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    func_002685F0(rdram, ctx);
        goto after_24;
    // 0x0024DA50: swc1        $f1, 0xA10($s1)
    MEM_W(0XA10, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    after_24:
    // 0x0024DA54: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0024DA58: beql        $s0, $zero, L_0024DA94
    if (ctx->r16 == 0) {
        // 0x0024DA5C: sw          $s0, 0xA88($s1)
        MEM_W(0XA88, ctx->r17) = ctx->r16;
            goto L_0024DA94;
    }
    goto skip_8;
    // 0x0024DA5C: sw          $s0, 0xA88($s1)
    MEM_W(0XA88, ctx->r17) = ctx->r16;
    skip_8:
    // 0x0024DA60: lw          $v0, 0xA88($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XA88);
    // 0x0024DA64: bnel        $v0, $zero, L_0024DA94
    if (ctx->r2 != 0) {
        // 0x0024DA68: sw          $s0, 0xA88($s1)
        MEM_W(0XA88, ctx->r17) = ctx->r16;
            goto L_0024DA94;
    }
    goto skip_9;
    // 0x0024DA68: sw          $s0, 0xA88($s1)
    MEM_W(0XA88, ctx->r17) = ctx->r16;
    skip_9:
    // 0x0024DA6C: lwc1        $f1, 0xA84($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XA84);
    // 0x0024DA70: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024DA74: lwc1        $f0, 0x6D48($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D48);
    // 0x0024DA78: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0024DA7C: nop

    // 0x0024DA80: bc1fl       L_0024DA94
    if (!c1cs) {
        // 0x0024DA84: sw          $s0, 0xA88($s1)
        MEM_W(0XA88, ctx->r17) = ctx->r16;
            goto L_0024DA94;
    }
    goto skip_10;
    // 0x0024DA84: sw          $s0, 0xA88($s1)
    MEM_W(0XA88, ctx->r17) = ctx->r16;
    skip_10:
    // 0x0024DA88: jal         0x002699E4
    // 0x0024DA8C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_002699E4(rdram, ctx);
        goto after_25;
    // 0x0024DA8C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_25:
    // 0x0024DA90: sw          $s0, 0xA88($s1)
    MEM_W(0XA88, ctx->r17) = ctx->r16;
L_0024DA94:
    // 0x0024DA94: lwc1        $f0, 0x1C($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x0024DA98: bne         $s0, $zero, L_0024DAD8
    if (ctx->r16 != 0) {
        // 0x0024DA9C: swc1        $f0, 0xA84($s1)
        MEM_W(0XA84, ctx->r17) = ctx->f0.u32l;
            goto L_0024DAD8;
    }
    // 0x0024DA9C: swc1        $f0, 0xA84($s1)
    MEM_W(0XA84, ctx->r17) = ctx->f0.u32l;
    // 0x0024DAA0: lh          $v1, 0xA08($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XA08);
    // 0x0024DAA4: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x0024DAA8: beql        $v1, $v0, L_0024DADC
    if (ctx->r3 == ctx->r2) {
        // 0x0024DAAC: sw          $zero, 0xA9C($s1)
        MEM_W(0XA9C, ctx->r17) = 0;
            goto L_0024DADC;
    }
    goto skip_11;
    // 0x0024DAAC: sw          $zero, 0xA9C($s1)
    MEM_W(0XA9C, ctx->r17) = 0;
    skip_11:
    // 0x0024DAB0: lw          $v0, 0x140($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X140);
    // 0x0024DAB4: andi        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 & 0X200;
    // 0x0024DAB8: bnel        $v0, $zero, L_0024DADC
    if (ctx->r2 != 0) {
        // 0x0024DABC: sw          $zero, 0xA9C($s1)
        MEM_W(0XA9C, ctx->r17) = 0;
            goto L_0024DADC;
    }
    goto skip_12;
    // 0x0024DABC: sw          $zero, 0xA9C($s1)
    MEM_W(0XA9C, ctx->r17) = 0;
    skip_12:
    // 0x0024DAC0: lwc1        $f0, 0xA9C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XA9C);
    // 0x0024DAC4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024DAC8: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x0024DACC: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0024DAD0: j           L_0024DADC
    // 0x0024DAD4: swc1        $f0, 0xA9C($s1)
    MEM_W(0XA9C, ctx->r17) = ctx->f0.u32l;
        goto L_0024DADC;
    // 0x0024DAD4: swc1        $f0, 0xA9C($s1)
    MEM_W(0XA9C, ctx->r17) = ctx->f0.u32l;
L_0024DAD8:
    // 0x0024DAD8: sw          $zero, 0xA9C($s1)
    MEM_W(0XA9C, ctx->r17) = 0;
L_0024DADC:
    // 0x0024DADC: lhu         $v0, 0xA08($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA08);
    // 0x0024DAE0: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x0024DAE4: bne         $v0, $zero, L_0024DB2C
    if (ctx->r2 != 0) {
        // 0x0024DAE8: nop
    
            goto L_0024DB2C;
    }
    // 0x0024DAE8: nop

    // 0x0024DAEC: lw          $v0, 0x524($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X524);
    // 0x0024DAF0: beq         $v0, $zero, L_0024DB2C
    if (ctx->r2 == 0) {
        // 0x0024DAF4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0024DB2C;
    }
    // 0x0024DAF4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0024DAF8: jal         0x0024E9D0
    // 0x0024DAFC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_0024E9D0(rdram, ctx);
        goto after_26;
    // 0x0024DAFC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_26:
    // 0x0024DB00: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0024DB04: jal         0x0024E88C
    // 0x0024DB08: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_0024E88C(rdram, ctx);
        goto after_27;
    // 0x0024DB08: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_27:
    // 0x0024DB0C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0024DB10: jal         0x00255220
    // 0x0024DB14: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_00255220(rdram, ctx);
        goto after_28;
    // 0x0024DB14: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_28:
    // 0x0024DB18: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0024DB1C: jal         0x00255298
    // 0x0024DB20: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_00255298(rdram, ctx);
        goto after_29;
    // 0x0024DB20: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_29:
    // 0x0024DB24: jal         0x00247660
    // 0x0024DB28: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00247660(rdram, ctx);
        goto after_30;
    // 0x0024DB28: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_30:
L_0024DB2C:
    // 0x0024DB2C: jal         0x00284188
    // 0x0024DB30: nop

    func_00284188(rdram, ctx);
        goto after_31;
    // 0x0024DB30: nop

    after_31:
    // 0x0024DB34: beq         $v0, $zero, L_0024DB50
    if (ctx->r2 == 0) {
        // 0x0024DB38: nop
    
            goto L_0024DB50;
    }
    // 0x0024DB38: nop

    // 0x0024DB3C: lhu         $v0, 0xA08($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA08);
    // 0x0024DB40: addiu       $v0, $v0, -0x13
    ctx->r2 = ADD32(ctx->r2, -0X13);
    // 0x0024DB44: sltiu       $v0, $v0, 0xC
    ctx->r2 = ctx->r2 < 0XC ? 1 : 0;
    // 0x0024DB48: beq         $v0, $zero, L_0024DB7C
    if (ctx->r2 == 0) {
        // 0x0024DB4C: nop
    
            goto L_0024DB7C;
    }
    // 0x0024DB4C: nop

L_0024DB50:
    // 0x0024DB50: lh          $v1, 0xA08($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XA08);
    // 0x0024DB54: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x0024DB58: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0024DB5C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0024DB60: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024DB64: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0024DB68: lw          $v0, -0x20A8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X20A8);
    // 0x0024DB6C: beq         $v0, $zero, L_0024DB7C
    if (ctx->r2 == 0) {
        // 0x0024DB70: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0024DB7C;
    }
    // 0x0024DB70: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0024DB74: jalr        $v0
    // 0x0024DB78: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_32;
    // 0x0024DB78: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_32:
L_0024DB7C:
    // 0x0024DB7C: jal         0x00268A2C
    // 0x0024DB80: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00268A2C(rdram, ctx);
        goto after_33;
    // 0x0024DB80: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_33:
    // 0x0024DB84: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x0024DB88: beq         $s3, $zero, L_0024DBF4
    if (ctx->r19 == 0) {
        // 0x0024DB8C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0024DBF4;
    }
    // 0x0024DB8C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0024DB90: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0024DB94: addiu       $a2, $s1, 0xAA0
    ctx->r6 = ADD32(ctx->r17, 0XAA0);
    // 0x0024DB98: jal         0x00269050
    // 0x0024DB9C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_00269050(rdram, ctx);
        goto after_34;
    // 0x0024DB9C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_34:
    // 0x0024DBA0: lw          $v0, 0x44($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X44);
    // 0x0024DBA4: andi        $v0, $v0, 0x4000
    ctx->r2 = ctx->r2 & 0X4000;
    // 0x0024DBA8: beq         $v0, $zero, L_0024DBF4
    if (ctx->r2 == 0) {
        // 0x0024DBAC: nop
    
            goto L_0024DBF4;
    }
    // 0x0024DBAC: nop

    // 0x0024DBB0: lw          $a0, 0x10($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X10);
    // 0x0024DBB4: lw          $a1, 0x4($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X4);
    // 0x0024DBB8: lw          $a2, 0xC($s2)
    ctx->r6 = MEM_W(ctx->r18, 0XC);
    // 0x0024DBBC: jal         0x0026BE60
    // 0x0024DBC0: nop

    func_0026BE60(rdram, ctx);
        goto after_35;
    // 0x0024DBC0: nop

    after_35:
    // 0x0024DBC4: lwc1        $f1, 0x8($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X8);
    // 0x0024DBC8: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0024DBCC: nop

    // 0x0024DBD0: bc1f        L_0024DBF4
    if (!c1cs) {
        // 0x0024DBD4: addiu       $v0, $zero, 0x1D
        ctx->r2 = ADD32(0, 0X1D);
            goto L_0024DBF4;
    }
    // 0x0024DBD4: addiu       $v0, $zero, 0x1D
    ctx->r2 = ADD32(0, 0X1D);
    // 0x0024DBD8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0024DBDC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0024DBE0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0024DBE4: lui         $a2, 0x3
    ctx->r6 = S32(0X3 << 16);
    // 0x0024DBE8: ori         $a2, $a2, 0xE700
    ctx->r6 = ctx->r6 | 0XE700;
    // 0x0024DBEC: jal         0x00249358
    // 0x0024DBF0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_00249358(rdram, ctx);
        goto after_36;
    // 0x0024DBF0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_36:
L_0024DBF4:
    // 0x0024DBF4: lh          $v0, 0xA08($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XA08);
    // 0x0024DBF8: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x0024DBFC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0024DC00: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x0024DC04: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024DC08: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0024DC0C: lw          $s0, -0x20A4($at)
    ctx->r16 = MEM_W(ctx->r1, -0X20A4);
    // 0x0024DC10: addiu       $v1, $zero, 0xE
    ctx->r3 = ADD32(0, 0XE);
    // 0x0024DC14: bne         $v0, $v1, L_0024DC40
    if (ctx->r2 != ctx->r3) {
        // 0x0024DC18: nop
    
            goto L_0024DC40;
    }
    // 0x0024DC18: nop

    // 0x0024DC1C: lwc1        $f0, 0xA78($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XA78);
    // 0x0024DC20: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x0024DC24: addiu       $s0, $s0, 0x1E30
    ctx->r16 = ADD32(ctx->r16, 0X1E30);
    // 0x0024DC28: c.le.s      $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f21.fl <= ctx->f0.fl;
    // 0x0024DC2C: nop

    // 0x0024DC30: bc1f        L_0024DC40
    if (!c1cs) {
        // 0x0024DC34: nop
    
            goto L_0024DC40;
    }
    // 0x0024DC34: nop

    // 0x0024DC38: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x0024DC3C: addiu       $s0, $s0, 0x1F10
    ctx->r16 = ADD32(ctx->r16, 0X1F10);
L_0024DC40:
    // 0x0024DC40: lw          $v0, 0x140($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X140);
    // 0x0024DC44: andi        $v0, $v0, 0x6000
    ctx->r2 = ctx->r2 & 0X6000;
    // 0x0024DC48: beq         $v0, $zero, L_0024DC58
    if (ctx->r2 == 0) {
        // 0x0024DC4C: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0024DC58;
    }
    // 0x0024DC4C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0024DC50: j           L_0024DCB8
    // 0x0024DC54: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_0024DCB8;
    // 0x0024DC54: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_0024DC58:
    // 0x0024DC58: lhu         $v0, 0xA08($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA08);
    // 0x0024DC5C: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x0024DC60: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x0024DC64: beql        $v0, $zero, L_0024DCB8
    if (ctx->r2 == 0) {
        // 0x0024DC68: sw          $zero, 0xAC4($s1)
        MEM_W(0XAC4, ctx->r17) = 0;
            goto L_0024DCB8;
    }
    goto skip_13;
    // 0x0024DC68: sw          $zero, 0xAC4($s1)
    MEM_W(0XAC4, ctx->r17) = 0;
    skip_13:
    // 0x0024DC6C: lw          $v0, 0xA68($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XA68);
    // 0x0024DC70: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x0024DC74: beq         $v0, $zero, L_0024DCB8
    if (ctx->r2 == 0) {
        // 0x0024DC78: nop
    
            goto L_0024DCB8;
    }
    // 0x0024DC78: nop

    // 0x0024DC7C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0024DC80: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0024DC84: bne         $v0, $zero, L_0024DCB8
    if (ctx->r2 != 0) {
        // 0x0024DC88: nop
    
            goto L_0024DCB8;
    }
    // 0x0024DC88: nop

    // 0x0024DC8C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0024DC90: lw          $v0, -0x5560($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5560);
    // 0x0024DC94: beq         $v0, $zero, L_0024DCAC
    if (ctx->r2 == 0) {
        // 0x0024DC98: nop
    
            goto L_0024DCAC;
    }
    // 0x0024DC98: nop

    // 0x0024DC9C: lw          $v0, 0xA64($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XA64);
    // 0x0024DCA0: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x0024DCA4: bne         $v0, $zero, L_0024DCB8
    if (ctx->r2 != 0) {
        // 0x0024DCA8: nop
    
            goto L_0024DCB8;
    }
    // 0x0024DCA8: nop

L_0024DCAC:
    // 0x0024DCAC: lw          $v0, 0xAC4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XAC4);
    // 0x0024DCB0: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x0024DCB4: sw          $v0, 0xAC4($s1)
    MEM_W(0XAC4, ctx->r17) = ctx->r2;
L_0024DCB8:
    // 0x0024DCB8: lw          $v0, 0xAC4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XAC4);
    // 0x0024DCBC: bnel        $v0, $zero, L_0024DCC4
    if (ctx->r2 != 0) {
        // 0x0024DCC0: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_0024DCC4;
    }
    goto skip_14;
    // 0x0024DCC0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    skip_14:
L_0024DCC4:
    // 0x0024DCC4: beq         $v1, $zero, L_0024DCEC
    if (ctx->r3 == 0) {
        // 0x0024DCC8: nop
    
            goto L_0024DCEC;
    }
    // 0x0024DCC8: nop

    // 0x0024DCCC: lwc1        $f0, 0xAC0($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XAC0);
    // 0x0024DCD0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024DCD4: lwc1        $f1, 0x6D4C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D4C);
    // 0x0024DCD8: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0024DCDC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024DCE0: lwc1        $f0, 0x6D50($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D50);
    // 0x0024DCE4: j           L_0024DCFC
    // 0x0024DCE8: nop

        goto L_0024DCFC;
    // 0x0024DCE8: nop

L_0024DCEC:
    // 0x0024DCEC: lwc1        $f0, 0xAC0($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XAC0);
    // 0x0024DCF0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024DCF4: lwc1        $f1, 0x6D54($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D54);
    // 0x0024DCF8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_0024DCFC:
    // 0x0024DCFC: mul.s       $f2, $f0, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0024DD00: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024DD04: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0024DD08: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0024DD0C: lwc1        $f1, 0xAC0($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XAC0);
    // 0x0024DD10: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0024DD14: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024DD18: lwc1        $f0, 0x6D58($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D58);
    // 0x0024DD1C: sub.s       $f2, $f0, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0024DD20: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024DD24: lwc1        $f0, 0x6D5C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D5C);
    // 0x0024DD28: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x0024DD2C: nop

    // 0x0024DD30: bc1f        L_0024DD54
    if (!c1cs) {
        // 0x0024DD34: swc1        $f1, 0xAC0($s1)
        MEM_W(0XAC0, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
            goto L_0024DD54;
    }
    // 0x0024DD34: swc1        $f1, 0xAC0($s1)
    MEM_W(0XAC0, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    // 0x0024DD38: c.le.s      $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f2.fl <= ctx->f22.fl;
    // 0x0024DD3C: nop

    // 0x0024DD40: bc1f        L_0024DD54
    if (!c1cs) {
        // 0x0024DD44: nop
    
            goto L_0024DD54;
    }
    // 0x0024DD44: nop

    // 0x0024DD48: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0024DD4C: j           L_0024DD60
    // 0x0024DD50: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
        goto L_0024DD60;
    // 0x0024DD50: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
L_0024DD54:
    // 0x0024DD54: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0024DD58: addiu       $v1, $zero, -0x81
    ctx->r3 = ADD32(0, -0X81);
    // 0x0024DD5C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
L_0024DD60:
    // 0x0024DD60: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x0024DD64: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0024DD68: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0024DD6C: jal         0x002543A4
    // 0x0024DD70: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_002543A4(rdram, ctx);
        goto after_37;
    // 0x0024DD70: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_37:
    // 0x0024DD74: lwc1        $f1, 0xA30($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XA30);
    // 0x0024DD78: c.lt.s      $f21, $f1
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f21.fl < ctx->f1.fl;
    // 0x0024DD7C: nop

    // 0x0024DD80: bc1f        L_0024DDAC
    if (!c1cs) {
        // 0x0024DD84: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0024DDAC;
    }
    // 0x0024DD84: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0024DD88: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024DD8C: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0024DD90: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0024DD94: c.lt.s      $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f0.fl < ctx->f21.fl;
    // 0x0024DD98: nop

    // 0x0024DD9C: bc1f        L_0024DDAC
    if (!c1cs) {
        // 0x0024DDA0: swc1        $f0, 0xA30($s1)
        MEM_W(0XA30, ctx->r17) = ctx->f0.u32l;
            goto L_0024DDAC;
    }
    // 0x0024DDA0: swc1        $f0, 0xA30($s1)
    MEM_W(0XA30, ctx->r17) = ctx->f0.u32l;
    // 0x0024DDA4: swc1        $f21, 0xA30($s1)
    MEM_W(0XA30, ctx->r17) = ctx->f_odd[(21 - 1) * 2];
    // 0x0024DDA8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_0024DDAC:
    // 0x0024DDAC: jal         0x0024AB0C
    // 0x0024DDB0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_0024AB0C(rdram, ctx);
        goto after_38;
    // 0x0024DDB0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_38:
    // 0x0024DDB4: lw          $s6, 0x10($s2)
    ctx->r22 = MEM_W(ctx->r18, 0X10);
    // 0x0024DDB8: lw          $t2, 0x4($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X4);
    // 0x0024DDBC: lw          $t3, 0x8($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X8);
    // 0x0024DDC0: lw          $t4, 0xC($s2)
    ctx->r12 = MEM_W(ctx->r18, 0XC);
    // 0x0024DDC4: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x0024DDC8: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x0024DDCC: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x0024DDD0: jal         0x00268A2C
    // 0x0024DDD4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00268A2C(rdram, ctx);
        goto after_39;
    // 0x0024DDD4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_39:
    // 0x0024DDD8: lh          $v1, 0x52A($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X52A);
    // 0x0024DDDC: beq         $v1, $zero, L_0024DE28
    if (ctx->r3 == 0) {
        // 0x0024DDE0: addu        $s7, $v0, $zero
        ctx->r23 = ADD32(ctx->r2, 0);
            goto L_0024DE28;
    }
    // 0x0024DDE0: addu        $s7, $v0, $zero
    ctx->r23 = ADD32(ctx->r2, 0);
    // 0x0024DDE4: lw          $v0, 0xD4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XD4);
    // 0x0024DDE8: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x0024DDEC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0024DDF0: sw          $v0, 0xD4($s2)
    MEM_W(0XD4, ctx->r18) = ctx->r2;
    // 0x0024DDF4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0024DDF8: lw          $a1, 0xAA0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XAA0);
    // 0x0024DDFC: lw          $a2, 0xAA4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XAA4);
    // 0x0024DE00: lw          $a3, 0xAA8($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XAA8);
    // 0x0024DE04: jal         0x00239F00
    // 0x0024DE08: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00239F00(rdram, ctx);
        goto after_40;
    // 0x0024DE08: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_40:
    // 0x0024DE0C: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    // 0x0024DE10: lui         $v1, 0xFFFE
    ctx->r3 = S32(0XFFFE << 16);
    // 0x0024DE14: lw          $v0, 0xD4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XD4);
    // 0x0024DE18: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0024DE1C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0024DE20: j           L_0024DE2C
    // 0x0024DE24: sw          $v0, 0xD4($s2)
    MEM_W(0XD4, ctx->r18) = ctx->r2;
        goto L_0024DE2C;
    // 0x0024DE24: sw          $v0, 0xD4($s2)
    MEM_W(0XD4, ctx->r18) = ctx->r2;
L_0024DE28:
    // 0x0024DE28: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
L_0024DE2C:
    // 0x0024DE2C: lw          $s4, 0x10($s2)
    ctx->r20 = MEM_W(ctx->r18, 0X10);
    // 0x0024DE30: jal         0x00268A2C
    // 0x0024DE34: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00268A2C(rdram, ctx);
        goto after_41;
    // 0x0024DE34: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_41:
    // 0x0024DE38: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x0024DE3C: beq         $s7, $s3, L_0024DE60
    if (ctx->r23 == ctx->r19) {
        // 0x0024DE40: addu        $a0, $s6, $zero
        ctx->r4 = ADD32(ctx->r22, 0);
            goto L_0024DE60;
    }
    // 0x0024DE40: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x0024DE44: ori         $a1, $fp, 0x2
    ctx->r5 = ctx->r30 | 0X2;
    // 0x0024DE48: jal         0x0026E19C
    // 0x0024DE4C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_0026E19C(rdram, ctx);
        goto after_42;
    // 0x0024DE4C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_42:
    // 0x0024DE50: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x0024DE54: ori         $a1, $fp, 0x1
    ctx->r5 = ctx->r30 | 0X1;
    // 0x0024DE58: jal         0x0026E19C
    // 0x0024DE5C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_0026E19C(rdram, ctx);
        goto after_43;
    // 0x0024DE5C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_43:
L_0024DE60:
    // 0x0024DE60: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0024DE64: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0024DE68: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0024DE6C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x0024DE70: jal         0x002233A8
    // 0x0024DE74: addiu       $a3, $s2, 0x4
    ctx->r7 = ADD32(ctx->r18, 0X4);
    func_002233A8(rdram, ctx);
        goto after_44;
    // 0x0024DE74: addiu       $a3, $s2, 0x4
    ctx->r7 = ADD32(ctx->r18, 0X4);
    after_44:
    // 0x0024DE78: beq         $s5, $zero, L_0024DF48
    if (ctx->r21 == 0) {
        // 0x0024DE7C: addu        $s6, $zero, $zero
        ctx->r22 = ADD32(0, 0);
            goto L_0024DF48;
    }
    // 0x0024DE7C: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    // 0x0024DE80: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0024DE84: lw          $a0, 0x1CE0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CE0);
    // 0x0024DE88: beq         $a0, $zero, L_0024DEA8
    if (ctx->r4 == 0) {
        // 0x0024DE8C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0024DEA8;
    }
    // 0x0024DE8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0024DE90: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x0024DE94: bne         $v1, $v0, L_0024DEA8
    if (ctx->r3 != ctx->r2) {
        // 0x0024DE98: addu        $a2, $s2, $zero
        ctx->r6 = ADD32(ctx->r18, 0);
            goto L_0024DEA8;
    }
    // 0x0024DE98: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0024DE9C: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
    // 0x0024DEA0: jal         0x0026E110
    // 0x0024DEA4: ori         $a1, $t2, 0x2
    ctx->r5 = ctx->r10 | 0X2;
    func_0026E110(rdram, ctx);
        goto after_45;
    // 0x0024DEA4: ori         $a1, $t2, 0x2
    ctx->r5 = ctx->r10 | 0X2;
    after_45:
L_0024DEA8:
    // 0x0024DEA8: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0024DEAC: lw          $a0, 0x1D7C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1D7C);
    // 0x0024DEB0: beq         $a0, $zero, L_0024DEC0
    if (ctx->r4 == 0) {
        // 0x0024DEB4: ori         $a1, $fp, 0x4
        ctx->r5 = ctx->r30 | 0X4;
            goto L_0024DEC0;
    }
    // 0x0024DEB4: ori         $a1, $fp, 0x4
    ctx->r5 = ctx->r30 | 0X4;
    // 0x0024DEB8: jal         0x0026E19C
    // 0x0024DEBC: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_0026E19C(rdram, ctx);
        goto after_46;
    // 0x0024DEBC: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_46:
L_0024DEC0:
    // 0x0024DEC0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0024DEC4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0024DEC8: jal         0x0024ED54
    // 0x0024DECC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0024ED54(rdram, ctx);
        goto after_47;
    // 0x0024DECC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_47:
    // 0x0024DED0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0024DED4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0024DED8: jal         0x0024EAF8
    // 0x0024DEDC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0024EAF8(rdram, ctx);
        goto after_48;
    // 0x0024DEDC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_48:
    // 0x0024DEE0: addu        $s6, $v0, $zero
    ctx->r22 = ADD32(ctx->r2, 0);
    // 0x0024DEE4: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0024DEE8: lw          $v1, 0x1D90($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1D90);
    // 0x0024DEEC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0024DEF0: bne         $v1, $v0, L_0024DF48
    if (ctx->r3 != ctx->r2) {
        // 0x0024DEF4: nop
    
            goto L_0024DF48;
    }
    // 0x0024DEF4: nop

    // 0x0024DEF8: lhu         $v0, 0xA08($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA08);
    // 0x0024DEFC: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x0024DF00: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x0024DF04: beq         $v0, $zero, L_0024DF48
    if (ctx->r2 == 0) {
        // 0x0024DF08: nop
    
            goto L_0024DF48;
    }
    // 0x0024DF08: nop

    // 0x0024DF0C: lwc1        $f0, 0x1C($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x0024DF10: c.lt.s      $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f21.fl < ctx->f0.fl;
    // 0x0024DF14: nop

    // 0x0024DF18: bc1tl       L_0024DF20
    if (c1cs) {
        // 0x0024DF1C: swc1        $f21, 0x1C($s2)
        MEM_W(0X1C, ctx->r18) = ctx->f_odd[(21 - 1) * 2];
            goto L_0024DF20;
    }
    goto skip_15;
    // 0x0024DF1C: swc1        $f21, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f_odd[(21 - 1) * 2];
    skip_15:
L_0024DF20:
    // 0x0024DF20: lwc1        $f2, 0xA7C($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0XA7C);
    // 0x0024DF24: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024DF28: lwc1        $f1, 0x6D60($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D60);
    // 0x0024DF2C: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0024DF30: lwc1        $f0, 0xA78($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XA78);
    // 0x0024DF34: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0024DF38: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x0024DF3C: sh          $v0, 0xA08($s1)
    MEM_H(0XA08, ctx->r17) = ctx->r2;
    // 0x0024DF40: swc1        $f2, 0xA7C($s1)
    MEM_W(0XA7C, ctx->r17) = ctx->f2.u32l;
    // 0x0024DF44: swc1        $f0, 0xA78($s1)
    MEM_W(0XA78, ctx->r17) = ctx->f0.u32l;
L_0024DF48:
    // 0x0024DF48: lui         $a1, 0x800F
    ctx->r5 = S32(0X800F << 16);
    // 0x0024DF4C: lw          $a1, 0x1CE0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1CE0);
    // 0x0024DF50: beq         $a1, $zero, L_0024DF6C
    if (ctx->r5 == 0) {
        // 0x0024DF54: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_0024DF6C;
    }
    // 0x0024DF54: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0024DF58: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x0024DF5C: bne         $v1, $v0, L_0024DF6C
    if (ctx->r3 != ctx->r2) {
        // 0x0024DF60: nop
    
            goto L_0024DF6C;
    }
    // 0x0024DF60: nop

    // 0x0024DF64: jal         0x0023F05C
    // 0x0024DF68: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0023F05C(rdram, ctx);
        goto after_49;
    // 0x0024DF68: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_49:
L_0024DF6C:
    // 0x0024DF6C: beq         $s7, $zero, L_0024E0A0
    if (ctx->r23 == 0) {
        // 0x0024DF70: nop
    
            goto L_0024E0A0;
    }
    // 0x0024DF70: nop

    // 0x0024DF74: beq         $s3, $zero, L_0024E0A0
    if (ctx->r19 == 0) {
        // 0x0024DF78: nop
    
            goto L_0024E0A0;
    }
    // 0x0024DF78: nop

    // 0x0024DF7C: lw          $v0, 0xA1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XA1C);
    // 0x0024DF80: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x0024DF84: beq         $v0, $zero, L_0024DFBC
    if (ctx->r2 == 0) {
        // 0x0024DF88: nop
    
            goto L_0024DFBC;
    }
    // 0x0024DF88: nop

    // 0x0024DF8C: bne         $s6, $zero, L_0024DFBC
    if (ctx->r22 != 0) {
        // 0x0024DF90: nop
    
            goto L_0024DFBC;
    }
    // 0x0024DF90: nop

    // 0x0024DF94: lhu         $v0, 0x54($s7)
    ctx->r2 = MEM_HU(ctx->r23, 0X54);
    // 0x0024DF98: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x0024DF9C: bne         $v0, $zero, L_0024DFBC
    if (ctx->r2 != 0) {
        // 0x0024DFA0: nop
    
            goto L_0024DFBC;
    }
    // 0x0024DFA0: nop

    // 0x0024DFA4: lhu         $v0, 0x54($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X54);
    // 0x0024DFA8: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x0024DFAC: beq         $v0, $zero, L_0024DFBC
    if (ctx->r2 == 0) {
        // 0x0024DFB0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0024DFBC;
    }
    // 0x0024DFB0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0024DFB4: jal         0x002553BC
    // 0x0024DFB8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_002553BC(rdram, ctx);
        goto after_50;
    // 0x0024DFB8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_50:
L_0024DFBC:
    // 0x0024DFBC: lw          $v0, 0x44($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X44);
    // 0x0024DFC0: lui         $v1, 0x400
    ctx->r3 = S32(0X400 << 16);
    // 0x0024DFC4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0024DFC8: beq         $v0, $zero, L_0024DFE0
    if (ctx->r2 == 0) {
        // 0x0024DFCC: nop
    
            goto L_0024DFE0;
    }
    // 0x0024DFCC: nop

    // 0x0024DFD0: lhu         $v1, 0x4C($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X4C);
    // 0x0024DFD4: lw          $v0, 0x92C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X92C);
    // 0x0024DFD8: bnel        $v1, $v0, L_0024DFE0
    if (ctx->r3 != ctx->r2) {
        // 0x0024DFDC: sw          $v1, 0x92C($s1)
        MEM_W(0X92C, ctx->r17) = ctx->r3;
            goto L_0024DFE0;
    }
    goto skip_16;
    // 0x0024DFDC: sw          $v1, 0x92C($s1)
    MEM_W(0X92C, ctx->r17) = ctx->r3;
    skip_16:
L_0024DFE0:
    // 0x0024DFE0: lw          $v0, 0x44($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X44);
    // 0x0024DFE4: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x0024DFE8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0024DFEC: beq         $v0, $zero, L_0024E010
    if (ctx->r2 == 0) {
        // 0x0024DFF0: nop
    
            goto L_0024E010;
    }
    // 0x0024DFF0: nop

    // 0x0024DFF4: lhu         $v0, 0x4C($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X4C);
    // 0x0024DFF8: sw          $v0, 0x92C($s1)
    MEM_W(0X92C, ctx->r17) = ctx->r2;
    // 0x0024DFFC: lhu         $v0, 0x4C($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X4C);
    // 0x0024E000: sw          $v0, 0x930($s1)
    MEM_W(0X930, ctx->r17) = ctx->r2;
    // 0x0024E004: lhu         $v0, 0x4C($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X4C);
    // 0x0024E008: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x0024E00C: sw          $v0, 0x54($at)
    MEM_W(0X54, ctx->r1) = ctx->r2;
L_0024E010:
    // 0x0024E010: lw          $v0, 0xA1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XA1C);
    // 0x0024E014: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x0024E018: bne         $v0, $zero, L_0024E0A0
    if (ctx->r2 != 0) {
        // 0x0024E01C: lui         $a0, 0x4
        ctx->r4 = S32(0X4 << 16);
            goto L_0024E0A0;
    }
    // 0x0024E01C: lui         $a0, 0x4
    ctx->r4 = S32(0X4 << 16);
    // 0x0024E020: lw          $v1, 0x44($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X44);
    // 0x0024E024: and         $v0, $v1, $a0
    ctx->r2 = ctx->r3 & ctx->r4;
    // 0x0024E028: beq         $v0, $zero, L_0024E0A0
    if (ctx->r2 == 0) {
        // 0x0024E02C: lui         $v0, 0x20
        ctx->r2 = S32(0X20 << 16);
            goto L_0024E0A0;
    }
    // 0x0024E02C: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x0024E030: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x0024E034: beq         $v0, $zero, L_0024E04C
    if (ctx->r2 == 0) {
        // 0x0024E038: nop
    
            goto L_0024E04C;
    }
    // 0x0024E038: nop

    // 0x0024E03C: lw          $v0, 0x44($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X44);
    // 0x0024E040: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0024E044: j           L_0024E074
    // 0x0024E048: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
        goto L_0024E074;
    // 0x0024E048: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
L_0024E04C:
    // 0x0024E04C: lw          $a1, 0x4($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X4);
    // 0x0024E050: lw          $a2, 0xC($s2)
    ctx->r6 = MEM_W(ctx->r18, 0XC);
    // 0x0024E054: jal         0x0026BE60
    // 0x0024E058: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_0026BE60(rdram, ctx);
        goto after_51;
    // 0x0024E058: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_51:
    // 0x0024E05C: lwc1        $f1, 0x8($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X8);
    // 0x0024E060: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0024E064: nop

    // 0x0024E068: bc1f        L_0024E074
    if (!c1cs) {
        // 0x0024E06C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0024E074;
    }
    // 0x0024E06C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0024E070: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0024E074:
    // 0x0024E074: beq         $v0, $zero, L_0024E0A0
    if (ctx->r2 == 0) {
        // 0x0024E078: nop
    
            goto L_0024E0A0;
    }
    // 0x0024E078: nop

    // 0x0024E07C: lhu         $v0, 0x54($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X54);
    // 0x0024E080: lhu         $a1, 0x48($s3)
    ctx->r5 = MEM_HU(ctx->r19, 0X48);
    // 0x0024E084: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0024E088: beq         $v0, $zero, L_0024E094
    if (ctx->r2 == 0) {
        // 0x0024E08C: addiu       $a2, $zero, 0x2
        ctx->r6 = ADD32(0, 0X2);
            goto L_0024E094;
    }
    // 0x0024E08C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x0024E090: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_0024E094:
    // 0x0024E094: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0024E098: jal         0x00248BA8
    // 0x0024E09C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_00248BA8(rdram, ctx);
        goto after_52;
    // 0x0024E09C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_52:
L_0024E0A0:
    // 0x0024E0A0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0024E0A4: sw          $zero, 0xA68($s1)
    MEM_W(0XA68, ctx->r17) = 0;
    // 0x0024E0A8: sw          $zero, 0xA6C($s1)
    MEM_W(0XA6C, ctx->r17) = 0;
    // 0x0024E0AC: sw          $zero, 0xA70($s1)
    MEM_W(0XA70, ctx->r17) = 0;
    // 0x0024E0B0: c.lt.s      $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f0.fl < ctx->f21.fl;
    // 0x0024E0B4: nop

    // 0x0024E0B8: bc1t        L_0024D774
    if (c1cs) {
        // 0x0024E0BC: sw          $zero, 0xA74($s1)
        MEM_W(0XA74, ctx->r17) = 0;
            goto L_0024D774;
    }
    // 0x0024E0BC: sw          $zero, 0xA74($s1)
    MEM_W(0XA74, ctx->r17) = 0;
L_0024E0C0:
    // 0x0024E0C0: addiu       $v1, $s1, 0xA40
    ctx->r3 = ADD32(ctx->r17, 0XA40);
    // 0x0024E0C4: addiu       $v0, $sp, 0x28
    ctx->r2 = ADD32(ctx->r29, 0X28);
    // 0x0024E0C8: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
L_0024E0CC:
    // 0x0024E0CC: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x0024E0D0: lw          $t4, 0x4($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X4);
    // 0x0024E0D4: lw          $t5, 0x8($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X8);
    // 0x0024E0D8: lw          $t2, 0xC($v0)
    ctx->r10 = MEM_W(ctx->r2, 0XC);
    // 0x0024E0DC: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x0024E0E0: sw          $t4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r12;
    // 0x0024E0E4: sw          $t5, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r13;
    // 0x0024E0E8: sw          $t2, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r10;
    // 0x0024E0EC: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x0024E0F0: bne         $v0, $a0, L_0024E0CC
    if (ctx->r2 != ctx->r4) {
        // 0x0024E0F4: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_0024E0CC;
    }
    // 0x0024E0F4: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x0024E0F8: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x0024E0FC: lw          $t4, 0x4($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X4);
    // 0x0024E100: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x0024E104: sw          $t4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r12;
    // 0x0024E108: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024E10C: swc1        $f24, 0x6D28($at)
    MEM_W(0X6D28, ctx->r1) = ctx->f24.u32l;
    // 0x0024E110: jal         0x00268A2C
    // 0x0024E114: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00268A2C(rdram, ctx);
        goto after_53;
    // 0x0024E114: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_53:
    // 0x0024E118: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0024E11C: beq         $s0, $zero, L_0024E1D0
    if (ctx->r16 == 0) {
        // 0x0024E120: nop
    
            goto L_0024E1D0;
    }
    // 0x0024E120: nop

    // 0x0024E124: lw          $v0, 0x44($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X44);
    // 0x0024E128: andi        $v0, $v0, 0x4000
    ctx->r2 = ctx->r2 & 0X4000;
    // 0x0024E12C: beq         $v0, $zero, L_0024E1D0
    if (ctx->r2 == 0) {
        // 0x0024E130: nop
    
            goto L_0024E1D0;
    }
    // 0x0024E130: nop

    // 0x0024E134: lwc1        $f0, 0x4($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X4);
    // 0x0024E138: mul.s       $f3, $f0, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0024E13C: lwc1        $f1, 0xC($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0XC);
    // 0x0024E140: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0024E144: lwc1        $f0, 0x8($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X8);
    // 0x0024E148: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0024E14C: add.s       $f0, $f3, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f3.fl + ctx->f0.fl;
    // 0x0024E150: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0024E154: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024E158: lwc1        $f2, 0x6D64($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X6D64);
    // 0x0024E15C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x0024E160: nop

    // 0x0024E164: bc1f        L_0024E1D0
    if (!c1cs) {
        // 0x0024E168: nop
    
            goto L_0024E1D0;
    }
    // 0x0024E168: nop

    // 0x0024E16C: sub.s       $f0, $f2, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f3.fl;
    // 0x0024E170: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0024E174: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x0024E178: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x0024E17C: nop

    // 0x0024E180: bc1tl       L_0024E188
    if (c1cs) {
        // 0x0024E184: mov.s       $f0, $f20
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
            goto L_0024E188;
    }
    goto skip_17;
    // 0x0024E184: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
    skip_17:
L_0024E188:
    // 0x0024E188: jal         0x00298470
    // 0x0024E18C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_00298470(rdram, ctx);
        goto after_54;
    // 0x0024E18C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_54:
    // 0x0024E190: lwc1        $f1, 0x8($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X8);
    // 0x0024E194: c.lt.s      $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f1.fl < ctx->f20.fl;
    // 0x0024E198: nop

    // 0x0024E19C: bc1tl       L_0024E1A4
    if (c1cs) {
        // 0x0024E1A0: neg.s       $f0, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
            goto L_0024E1A4;
    }
    goto skip_18;
    // 0x0024E1A0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    skip_18:
L_0024E1A4:
    // 0x0024E1A4: swc1        $f0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f0.u32l;
    // 0x0024E1A8: lw          $v0, 0x44($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X44);
    // 0x0024E1AC: andi        $v0, $v0, 0x4000
    ctx->r2 = ctx->r2 & 0X4000;
    // 0x0024E1B0: beq         $v0, $zero, L_0024E1D0
    if (ctx->r2 == 0) {
        // 0x0024E1B4: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0024E1D0;
    }
    // 0x0024E1B4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0024E1B8: jal         0x0026872C
    // 0x0024E1BC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_0026872C(rdram, ctx);
        goto after_55;
    // 0x0024E1BC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_55:
    // 0x0024E1C0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024E1C4: lwc1        $f1, 0x6D68($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D68);
    // 0x0024E1C8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0024E1CC: swc1        $f0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f0.u32l;
L_0024E1D0:
    // 0x0024E1D0: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x0024E1D4: beq         $t3, $zero, L_0024E328
    if (ctx->r11 == 0) {
        // 0x0024E1D8: nop
    
            goto L_0024E328;
    }
    // 0x0024E1D8: nop

    // 0x0024E1DC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0024E1E0: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0024E1E4: beq         $v0, $zero, L_0024E234
    if (ctx->r2 == 0) {
        // 0x0024E1E8: addiu       $a2, $zero, 0x66
        ctx->r6 = ADD32(0, 0X66);
            goto L_0024E234;
    }
    // 0x0024E1E8: addiu       $a2, $zero, 0x66
    ctx->r6 = ADD32(0, 0X66);
    // 0x0024E1EC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0024E1F0: lw          $v0, -0x531C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X531C);
    // 0x0024E1F4: beq         $v0, $zero, L_0024E21C
    if (ctx->r2 == 0) {
        // 0x0024E1F8: nop
    
            goto L_0024E21C;
    }
    // 0x0024E1F8: nop

    // 0x0024E1FC: lw          $v0, 0x518($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X518);
    // 0x0024E200: lbu         $v0, 0x3E($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3E);
    // 0x0024E204: beq         $v0, $zero, L_0024E21C
    if (ctx->r2 == 0) {
        // 0x0024E208: nop
    
            goto L_0024E21C;
    }
    // 0x0024E208: nop

    // 0x0024E20C: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0024E210: lw          $a2, -0x24A4($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X24A4);
    // 0x0024E214: j           L_0024E234
    // 0x0024E218: nop

        goto L_0024E234;
    // 0x0024E218: nop

L_0024E21C:
    // 0x0024E21C: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x0024E220: lh          $v0, 0xC($v0)
    ctx->r2 = MEM_H(ctx->r2, 0XC);
    // 0x0024E224: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0024E228: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024E22C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0024E230: lw          $a2, -0x24D0($at)
    ctx->r6 = MEM_W(ctx->r1, -0X24D0);
L_0024E234:
    // 0x0024E234: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0024E238: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0024E23C: lw          $a3, 0xC04($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XC04);
    // 0x0024E240: jal         0x002241D8
    // 0x0024E244: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002241D8(rdram, ctx);
        goto after_56;
    // 0x0024E244: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_56:
    // 0x0024E248: lw          $v0, 0xC08($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC08);
    // 0x0024E24C: lw          $a1, 0xC04($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XC04);
    // 0x0024E250: beq         $v0, $a1, L_0024E284
    if (ctx->r2 == ctx->r5) {
        // 0x0024E254: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0024E284;
    }
    // 0x0024E254: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0024E258: jal         0x0021E9A4
    // 0x0024E25C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_0021E9A4(rdram, ctx);
        goto after_57;
    // 0x0024E25C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_57:
    // 0x0024E260: bne         $v0, $zero, L_0024E288
    if (ctx->r2 != 0) {
        // 0x0024E264: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0024E288;
    }
    // 0x0024E264: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0024E268: jal         0x00284188
    // 0x0024E26C: nop

    func_00284188(rdram, ctx);
        goto after_58;
    // 0x0024E26C: nop

    after_58:
    // 0x0024E270: beq         $v0, $zero, L_0024E284
    if (ctx->r2 == 0) {
        // 0x0024E274: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0024E284;
    }
    // 0x0024E274: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0024E278: addiu       $a1, $zero, 0x1B58
    ctx->r5 = ADD32(0, 0X1B58);
    // 0x0024E27C: jal         0x0021E9A4
    // 0x0024E280: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_0021E9A4(rdram, ctx);
        goto after_59;
    // 0x0024E280: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_59:
L_0024E284:
    // 0x0024E284: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_0024E288:
    // 0x0024E288: lw          $a1, 0xC04($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XC04);
    // 0x0024E28C: jal         0x00219F74
    // 0x0024E290: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_00219F74(rdram, ctx);
        goto after_60;
    // 0x0024E290: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_60:
    // 0x0024E294: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0024E298: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0024E29C: lw          $a1, 0xC04($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XC04);
    // 0x0024E2A0: jal         0x00219F74
    // 0x0024E2A4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00219F74(rdram, ctx);
        goto after_61;
    // 0x0024E2A4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_61:
    // 0x0024E2A8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0024E2AC: slt         $v0, $s0, $a1
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x0024E2B0: beq         $v0, $zero, L_0024E2BC
    if (ctx->r2 == 0) {
        // 0x0024E2B4: addu        $v1, $a1, $zero
        ctx->r3 = ADD32(ctx->r5, 0);
            goto L_0024E2BC;
    }
    // 0x0024E2B4: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x0024E2B8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
L_0024E2BC:
    // 0x0024E2BC: addu        $s3, $v1, $zero
    ctx->r19 = ADD32(ctx->r3, 0);
    // 0x0024E2C0: slt         $v0, $s3, $s0
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x0024E2C4: bnel        $v0, $zero, L_0024E2CC
    if (ctx->r2 != 0) {
        // 0x0024E2C8: addu        $s3, $s0, $zero
        ctx->r19 = ADD32(ctx->r16, 0);
            goto L_0024E2CC;
    }
    goto skip_19;
    // 0x0024E2C8: addu        $s3, $s0, $zero
    ctx->r19 = ADD32(ctx->r16, 0);
    skip_19:
L_0024E2CC:
    // 0x0024E2CC: lb          $v0, 0xE2($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XE2);
    // 0x0024E2D0: beq         $v0, $zero, L_0024E31C
    if (ctx->r2 == 0) {
        // 0x0024E2D4: nop
    
            goto L_0024E31C;
    }
    // 0x0024E2D4: nop

    // 0x0024E2D8: lh          $v0, 0xDC($s2)
    ctx->r2 = MEM_H(ctx->r18, 0XDC);
    // 0x0024E2DC: bne         $v0, $a1, L_0024E310
    if (ctx->r2 != ctx->r5) {
        // 0x0024E2E0: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0024E310;
    }
    // 0x0024E2E0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0024E2E4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024E2E8: lwc1        $f12, 0x6D6C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X6D6C);
    // 0x0024E2EC: jal         0x0021149C
    // 0x0024E2F0: nop

    func_0021149C(rdram, ctx);
        goto after_62;
    // 0x0024E2F0: nop

    after_62:
    // 0x0024E2F4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024E2F8: lwc1        $f1, 0x6D70($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D70);
    // 0x0024E2FC: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0024E300: nop

    // 0x0024E304: bc1f        L_0024E31C
    if (!c1cs) {
        // 0x0024E308: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0024E31C;
    }
    // 0x0024E308: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0024E30C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
L_0024E310:
    // 0x0024E310: jal         0x0021E9F8
    // 0x0024E314: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_0021E9F8(rdram, ctx);
        goto after_63;
    // 0x0024E314: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_63:
    // 0x0024E318: sb          $zero, 0xE2($s2)
    MEM_B(0XE2, ctx->r18) = 0;
L_0024E31C:
    // 0x0024E31C: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    // 0x0024E320: bne         $t4, $zero, L_0024E330
    if (ctx->r12 != 0) {
        // 0x0024E324: nop
    
            goto L_0024E330;
    }
    // 0x0024E324: nop

L_0024E328:
    // 0x0024E328: jal         0x0021A500
    // 0x0024E32C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_0021A500(rdram, ctx);
        goto after_64;
    // 0x0024E32C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_64:
L_0024E330:
    // 0x0024E330: lw          $t5, 0x4($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X4);
    // 0x0024E334: lw          $t2, 0x8($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X8);
    // 0x0024E338: lw          $t3, 0xC($s1)
    ctx->r11 = MEM_W(ctx->r17, 0XC);
    // 0x0024E33C: sw          $t5, 0x28C($s1)
    MEM_W(0X28C, ctx->r17) = ctx->r13;
    // 0x0024E340: sw          $t2, 0x290($s1)
    MEM_W(0X290, ctx->r17) = ctx->r10;
    // 0x0024E344: sw          $t3, 0x294($s1)
    MEM_W(0X294, ctx->r17) = ctx->r11;
    // 0x0024E348: lwc1        $f0, 0x50($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X50);
    // 0x0024E34C: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x0024E350: swc1        $f0, 0x2D8($s1)
    MEM_W(0X2D8, ctx->r17) = ctx->f0.u32l;
    // 0x0024E354: sw          $v0, 0x298($s1)
    MEM_W(0X298, ctx->r17) = ctx->r2;
    // 0x0024E358: lw          $t5, 0x40($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X40);
    // 0x0024E35C: lw          $t2, 0x44($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X44);
    // 0x0024E360: lw          $t3, 0x48($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X48);
    // 0x0024E364: lw          $t4, 0x4C($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X4C);
    // 0x0024E368: sw          $t5, 0x2C8($s1)
    MEM_W(0X2C8, ctx->r17) = ctx->r13;
    // 0x0024E36C: sw          $t2, 0x2CC($s1)
    MEM_W(0X2CC, ctx->r17) = ctx->r10;
    // 0x0024E370: sw          $t3, 0x2D0($s1)
    MEM_W(0X2D0, ctx->r17) = ctx->r11;
    // 0x0024E374: sw          $t4, 0x2D4($s1)
    MEM_W(0X2D4, ctx->r17) = ctx->r12;
    // 0x0024E378: lw          $t5, 0x4($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X4);
    // 0x0024E37C: lw          $t2, 0x8($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X8);
    // 0x0024E380: lw          $t3, 0xC($s1)
    ctx->r11 = MEM_W(ctx->r17, 0XC);
    // 0x0024E384: sw          $t5, 0xB18($s1)
    MEM_W(0XB18, ctx->r17) = ctx->r13;
    // 0x0024E388: sw          $t2, 0xB1C($s1)
    MEM_W(0XB1C, ctx->r17) = ctx->r10;
    // 0x0024E38C: sw          $t3, 0xB20($s1)
    MEM_W(0XB20, ctx->r17) = ctx->r11;
    // 0x0024E390: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0024E394: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0024E398: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x0024E39C: beq         $v0, $zero, L_0024E444
    if (ctx->r2 == 0) {
        // 0x0024E3A0: addiu       $a0, $zero, 0x15
        ctx->r4 = ADD32(0, 0X15);
            goto L_0024E444;
    }
    // 0x0024E3A0: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    // 0x0024E3A4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0024E3A8: addu        $v1, $s1, $zero
    ctx->r3 = ADD32(ctx->r17, 0);
L_0024E3AC:
    // 0x0024E3AC: bnel        $a2, $a0, L_0024E3B4
    if (ctx->r6 != ctx->r4) {
        // 0x0024E3B0: sh          $zero, 0x934($v1)
        MEM_H(0X934, ctx->r3) = 0;
            goto L_0024E3B4;
    }
    goto skip_20;
    // 0x0024E3B0: sh          $zero, 0x934($v1)
    MEM_H(0X934, ctx->r3) = 0;
    skip_20:
L_0024E3B4:
    // 0x0024E3B4: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x0024E3B8: slti        $v0, $a2, 0x1F
    ctx->r2 = SIGNED(ctx->r6) < 0X1F ? 1 : 0;
    // 0x0024E3BC: bne         $v0, $zero, L_0024E3AC
    if (ctx->r2 != 0) {
        // 0x0024E3C0: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_0024E3AC;
    }
    // 0x0024E3C0: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x0024E3C4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0024E3C8: addiu       $t1, $zero, 0x15
    ctx->r9 = ADD32(0, 0X15);
L_0024E3CC:
    // 0x0024E3CC: beql        $a2, $t1, L_0024E438
    if (ctx->r6 == ctx->r9) {
        // 0x0024E3D0: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_0024E438;
    }
    goto skip_21;
    // 0x0024E3D0: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    skip_21:
    // 0x0024E3D4: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x0024E3D8: sll         $v0, $a2, 2
    ctx->r2 = S32(ctx->r6 << 2);
    // 0x0024E3DC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024E3E0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0024E3E4: lw          $a3, -0x9E8($at)
    ctx->r7 = MEM_W(ctx->r1, -0X9E8);
L_0024E3E8:
    // 0x0024E3E8: lw          $a0, 0x20($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X20);
    // 0x0024E3EC: beql        $a0, $zero, L_0024E438
    if (ctx->r4 == 0) {
        // 0x0024E3F0: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_0024E438;
    }
    goto skip_22;
    // 0x0024E3F0: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    skip_22:
    // 0x0024E3F4: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x0024E3F8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x0024E3FC: addiu       $v0, $v0, 0x934
    ctx->r2 = ADD32(ctx->r2, 0X934);
    // 0x0024E400: addu        $a1, $s1, $v0
    ctx->r5 = ADD32(ctx->r17, ctx->r2);
    // 0x0024E404: lh          $v0, 0x2($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2);
    // 0x0024E408: lh          $v1, 0x0($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X0);
    // 0x0024E40C: lhu         $a0, 0x2($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X2);
    // 0x0024E410: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x0024E414: lhu         $v1, 0x0($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X0);
    // 0x0024E418: bnel        $v0, $zero, L_0024E420
    if (ctx->r2 != 0) {
        // 0x0024E41C: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_0024E420;
    }
    goto skip_23;
    // 0x0024E41C: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    skip_23:
L_0024E420:
    // 0x0024E420: sh          $a0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r4;
    // 0x0024E424: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x0024E428: slti        $v0, $t0, 0x3
    ctx->r2 = SIGNED(ctx->r8) < 0X3 ? 1 : 0;
    // 0x0024E42C: bne         $v0, $zero, L_0024E3E8
    if (ctx->r2 != 0) {
        // 0x0024E430: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_0024E3E8;
    }
    // 0x0024E430: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x0024E434: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_0024E438:
    // 0x0024E438: slti        $v0, $a2, 0x23
    ctx->r2 = SIGNED(ctx->r6) < 0X23 ? 1 : 0;
    // 0x0024E43C: bne         $v0, $zero, L_0024E3CC
    if (ctx->r2 != 0) {
        // 0x0024E440: nop
    
            goto L_0024E3CC;
    }
    // 0x0024E440: nop

L_0024E444:
    // 0x0024E444: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0024E448: addiu       $v1, $v1, -0x5528
    ctx->r3 = ADD32(ctx->r3, -0X5528);
    // 0x0024E44C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0024E450: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x0024E454: beq         $v0, $zero, L_0024E4E0
    if (ctx->r2 == 0) {
        // 0x0024E458: nop
    
            goto L_0024E4E0;
    }
    // 0x0024E458: nop

    // 0x0024E45C: lbu         $v0, 0x19($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X19);
    // 0x0024E460: bne         $v0, $zero, L_0024E494
    if (ctx->r2 != 0) {
        // 0x0024E464: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_0024E494;
    }
    // 0x0024E464: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0024E468: lb          $v0, 0x987($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X987);
    // 0x0024E46C: bne         $v0, $zero, L_0024E494
    if (ctx->r2 != 0) {
        // 0x0024E470: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0024E494;
    }
    // 0x0024E470: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0024E474: jal         0x0025398C
    // 0x0024E478: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    func_0025398C(rdram, ctx);
        goto after_65;
    // 0x0024E478: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    after_65:
    // 0x0024E47C: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x0024E480: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0024E484: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x0024E488: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x0024E48C: sh          $v1, 0x934($v0)
    MEM_H(0X934, ctx->r2) = ctx->r3;
    // 0x0024E490: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_0024E494:
    // 0x0024E494: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x0024E498: addiu       $a3, $a3, -0x550F
    ctx->r7 = ADD32(ctx->r7, -0X550F);
    // 0x0024E49C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0024E4A0: slti        $a0, $a2, 0x18
    ctx->r4 = SIGNED(ctx->r6) < 0X18 ? 1 : 0;
L_0024E4A4:
    // 0x0024E4A4: lbu         $v0, 0x0($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X0);
    // 0x0024E4A8: bne         $v0, $zero, L_0024E4C0
    if (ctx->r2 != 0) {
        // 0x0024E4AC: xori        $v1, $a0, 0x1
        ctx->r3 = ctx->r4 ^ 0X1;
            goto L_0024E4C0;
    }
    // 0x0024E4AC: xori        $v1, $a0, 0x1
    ctx->r3 = ctx->r4 ^ 0X1;
    // 0x0024E4B0: bne         $a0, $zero, L_0024E4CC
    if (ctx->r4 != 0) {
        // 0x0024E4B4: addu        $v0, $s1, $a2
        ctx->r2 = ADD32(ctx->r17, ctx->r6);
            goto L_0024E4CC;
    }
    // 0x0024E4B4: addu        $v0, $s1, $a2
    ctx->r2 = ADD32(ctx->r17, ctx->r6);
    // 0x0024E4B8: j           L_0024E4D4
    // 0x0024E4BC: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
        goto L_0024E4D4;
    // 0x0024E4BC: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_0024E4C0:
    // 0x0024E4C0: beql        $v1, $zero, L_0024E4D4
    if (ctx->r3 == 0) {
        // 0x0024E4C4: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_0024E4D4;
    }
    goto skip_24;
    // 0x0024E4C4: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    skip_24:
    // 0x0024E4C8: addu        $v0, $s1, $a2
    ctx->r2 = ADD32(ctx->r17, ctx->r6);
L_0024E4CC:
    // 0x0024E4CC: sb          $a1, 0x972($v0)
    MEM_B(0X972, ctx->r2) = ctx->r5;
    // 0x0024E4D0: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_0024E4D4:
    // 0x0024E4D4: slti        $v0, $a2, 0x23
    ctx->r2 = SIGNED(ctx->r6) < 0X23 ? 1 : 0;
    // 0x0024E4D8: bne         $v0, $zero, L_0024E4A4
    if (ctx->r2 != 0) {
        // 0x0024E4DC: slti        $a0, $a2, 0x18
        ctx->r4 = SIGNED(ctx->r6) < 0X18 ? 1 : 0;
            goto L_0024E4A4;
    }
    // 0x0024E4DC: slti        $a0, $a2, 0x18
    ctx->r4 = SIGNED(ctx->r6) < 0X18 ? 1 : 0;
L_0024E4E0:
    // 0x0024E4E0: jal         0x0024D1F8
    // 0x0024E4E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0024D1F8(rdram, ctx);
        goto after_66;
    // 0x0024E4E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_66:
    // 0x0024E4E8: addiu       $a0, $s1, 0xCD0
    ctx->r4 = ADD32(ctx->r17, 0XCD0);
    // 0x0024E4EC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0024E4F0: jal         0x0024BD18
    // 0x0024E4F4: addiu       $a2, $s1, 0x3C8
    ctx->r6 = ADD32(ctx->r17, 0X3C8);
    func_0024BD18(rdram, ctx);
        goto after_67;
    // 0x0024E4F4: addiu       $a2, $s1, 0x3C8
    ctx->r6 = ADD32(ctx->r17, 0X3C8);
    after_67:
    // 0x0024E4F8: lwc1        $f1, 0x1298($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X1298);
    // 0x0024E4FC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x0024E500: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x0024E504: nop

    // 0x0024E508: bc1f        L_0024E550
    if (!c1cs) {
        // 0x0024E50C: nop
    
            goto L_0024E550;
    }
    // 0x0024E50C: nop

    // 0x0024E510: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024E514: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0024E518: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0024E51C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x0024E520: nop

    // 0x0024E524: bc1f        L_0024E53C
    if (!c1cs) {
        // 0x0024E528: swc1        $f0, 0x1298($s1)
        MEM_W(0X1298, ctx->r17) = ctx->f0.u32l;
            goto L_0024E53C;
    }
    // 0x0024E528: swc1        $f0, 0x1298($s1)
    MEM_W(0X1298, ctx->r17) = ctx->f0.u32l;
    // 0x0024E52C: lw          $v0, 0xD4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XD4);
    // 0x0024E530: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x0024E534: j           L_0024E54C
    // 0x0024E538: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
        goto L_0024E54C;
    // 0x0024E538: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
L_0024E53C:
    // 0x0024E53C: lui         $v1, 0xFF7F
    ctx->r3 = S32(0XFF7F << 16);
    // 0x0024E540: lw          $v0, 0xD4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XD4);
    // 0x0024E544: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0024E548: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
L_0024E54C:
    // 0x0024E54C: sw          $v0, 0xD4($s1)
    MEM_W(0XD4, ctx->r17) = ctx->r2;
L_0024E550:
    // 0x0024E550: jal         0x0024A0DC
    // 0x0024E554: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0024A0DC(rdram, ctx);
        goto after_68;
    // 0x0024E554: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_68:
    // 0x0024E558: lw          $v0, 0xA50($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XA50);
    // 0x0024E55C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0024E560: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0024E564: lw          $t5, 0x4($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X4);
    // 0x0024E568: lw          $t2, 0x8($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X8);
    // 0x0024E56C: lw          $t3, 0xC($s1)
    ctx->r11 = MEM_W(ctx->r17, 0XC);
    // 0x0024E570: sw          $t5, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r13;
    // 0x0024E574: sw          $t2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r10;
    // 0x0024E578: sw          $t3, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r11;
    // 0x0024E57C: lh          $v0, 0x996($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X996);
    // 0x0024E580: lw          $v1, 0x3F4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X3F4);
    // 0x0024E584: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0024E588: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024E58C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0024E590: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x0024E594: lw          $a3, 0x10($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X10);
    // 0x0024E598: lhu         $a2, 0x4($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X4);
    // 0x0024E59C: jal         0x002241D8
    // 0x0024E5A0: addiu       $a1, $s1, 0x288
    ctx->r5 = ADD32(ctx->r17, 0X288);
    func_002241D8(rdram, ctx);
        goto after_69;
    // 0x0024E5A0: addiu       $a1, $s1, 0x288
    ctx->r5 = ADD32(ctx->r17, 0X288);
    after_69:
    // 0x0024E5A4: lw          $v0, 0xC04($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC04);
    // 0x0024E5A8: sw          $v0, 0xC08($s1)
    MEM_W(0XC08, ctx->r17) = ctx->r2;
    // 0x0024E5AC: lw          $ra, 0xAC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XAC);
    // 0x0024E5B0: lw          $fp, 0xA8($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XA8);
    // 0x0024E5B4: lw          $s7, 0xA4($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XA4);
    // 0x0024E5B8: lw          $s6, 0xA0($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XA0);
    // 0x0024E5BC: lw          $s5, 0x9C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X9C);
    // 0x0024E5C0: lw          $s4, 0x98($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X98);
    // 0x0024E5C4: lw          $s3, 0x94($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X94);
    // 0x0024E5C8: lw          $s2, 0x90($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X90);
    // 0x0024E5CC: lw          $s1, 0x8C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X8C);
    // 0x0024E5D0: lw          $s0, 0x88($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X88);
    // 0x0024E5D4: ldc1        $f24, 0xD0($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0XD0);
    // 0x0024E5D8: ldc1        $f23, 0xC8($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0XC8);
    // 0x0024E5DC: ldc1        $f22, 0xC0($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0XC0);
    // 0x0024E5E0: ldc1        $f21, 0xB8($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0XB8);
    // 0x0024E5E4: ldc1        $f20, 0xB0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XB0);
    // 0x0024E5E8: jr          $ra
    // 0x0024E5EC: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    return;
    // 0x0024E5EC: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
;}
RECOMP_FUNC void func_002567B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002567B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002567BC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002567C0: lw          $a1, 0x10($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X10);
    // 0x002567C4: beq         $a1, $zero, L_002567F8
    if (ctx->r5 == 0) {
        // 0x002567C8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002567F8;
    }
    // 0x002567C8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x002567CC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x002567D0: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x002567D4: jal         0x0022425C
    // 0x002567D8: nop

    func_0022425C(rdram, ctx);
        goto after_0;
    // 0x002567D8: nop

    after_0:
    // 0x002567DC: beql        $v0, $zero, L_002567F8
    if (ctx->r2 == 0) {
        // 0x002567E0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002567F8;
    }
    goto skip_0;
    // 0x002567E0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x002567E4: lhu         $v1, 0x52($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X52);
    // 0x002567E8: andi        $v1, $v1, 0x40
    ctx->r3 = ctx->r3 & 0X40;
    // 0x002567EC: bne         $v1, $zero, L_002567F8
    if (ctx->r3 != 0) {
        // 0x002567F0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002567F8;
    }
    // 0x002567F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002567F4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_002567F8:
    // 0x002567F8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002567FC: jr          $ra
    // 0x00256800: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00256800: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
