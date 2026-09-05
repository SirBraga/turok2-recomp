#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_002A5128(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A5128: jal         0x0022425C
    // 0x002A512C: nop

    func_0022425C(rdram, ctx);
        goto after_0;
    // 0x002A512C: nop

    after_0:
    // turok2: reconnected split function: a stray ELF symbol at 0x002A5130 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_002A5130(rdram, ctx);
;}
RECOMP_FUNC void func_0040B488(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040B488: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0040B48C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0040B490: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0040B494: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0040B498: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0040B49C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0040B4A0: lb          $v0, 0xC7($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XC7);
    // 0x0040B4A4: beq         $v0, $zero, L_0040B50C
    if (ctx->r2 == 0) {
        // 0x0040B4A8: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_0040B50C;
    }
    // 0x0040B4A8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0040B4AC: lui         $v0, 0x5555
    ctx->r2 = S32(0X5555 << 16);
    // 0x0040B4B0: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x0040B4B4: addiu       $s0, $s0, -0x490
    ctx->r16 = ADD32(ctx->r16, -0X490);
    // 0x0040B4B8: lw          $a1, 0x67C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X67C);
    // 0x0040B4BC: ori         $v0, $v0, 0x5556
    ctx->r2 = ctx->r2 | 0X5556;
    // 0x0040B4C0: mult        $a1, $v0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0040B4C4: sra         $v1, $a1, 31
    ctx->r3 = S32(SIGNED(ctx->r5) >> 31);
    // 0x0040B4C8: mfhi        $a3
    ctx->r7 = hi;
    // 0x0040B4CC: subu        $v1, $a3, $v1
    ctx->r3 = SUB32(ctx->r7, ctx->r3);
    // 0x0040B4D0: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x0040B4D4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0040B4D8: bne         $a1, $v0, L_0040B4E8
    if (ctx->r5 != ctx->r2) {
        // 0x0040B4DC: nop
    
            goto L_0040B4E8;
    }
    // 0x0040B4DC: nop

    // 0x0040B4E0: jal         0x00409A64
    // 0x0040B4E4: sltiu       $a1, $a1, 0x1
    ctx->r5 = ctx->r5 < 0X1 ? 1 : 0;
    func_00409A64(rdram, ctx);
        goto after_0;
    // 0x0040B4E4: sltiu       $a1, $a1, 0x1
    ctx->r5 = ctx->r5 < 0X1 ? 1 : 0;
    after_0:
L_0040B4E8:
    // 0x0040B4E8: lw          $v0, 0x67C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X67C);
    // 0x0040B4EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0040B4F0: sw          $v0, 0x67C($s0)
    MEM_W(0X67C, ctx->r16) = ctx->r2;
    // 0x0040B4F4: slti        $v0, $v0, 0x1F
    ctx->r2 = SIGNED(ctx->r2) < 0X1F ? 1 : 0;
    // 0x0040B4F8: bne         $v0, $zero, L_0040B50C
    if (ctx->r2 != 0) {
        // 0x0040B4FC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0040B50C;
    }
    // 0x0040B4FC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040B500: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0040B504: jal         0x00243414
    // 0x0040B508: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x0040B508: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    after_1:
L_0040B50C:
    // 0x0040B50C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0040B510: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0040B514: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0040B518: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0040B51C: jr          $ra
    // 0x0040B520: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0040B520: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00419100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00419100: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00419104: lb          $v1, -0x54FC($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X54FC);
    // 0x00419108: sltiu       $v0, $v1, 0xE
    ctx->r2 = ctx->r3 < 0XE ? 1 : 0;
    // 0x0041910C: beq         $v0, $zero, L_00419204
    if (ctx->r2 == 0) {
        // 0x00419110: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00419204;
    }
    // 0x00419110: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00419114: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00419118: addu        $at, $at, $v0
    gpr jr_addend_00419120 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0041911C: lw          $v0, 0xFA8($at)
    ctx->r2 = ADD32(ctx->r1, 0XFA8);
    // 0x00419120: jr          $v0
    // 0x00419124: nop

    switch (jr_addend_00419120 >> 2) {
        case 0: goto L_00419128; break;
        case 1: goto L_00419138; break;
        case 2: goto L_00419148; break;
        case 3: goto L_00419158; break;
        case 4: goto L_00419168; break;
        case 5: goto L_00419178; break;
        case 6: goto L_00419188; break;
        case 7: goto L_00419198; break;
        case 8: goto L_004191A8; break;
        case 9: goto L_004191B8; break;
        case 10: goto L_004191C8; break;
        case 11: goto L_004191D8; break;
        case 12: goto L_004191E8; break;
        case 13: goto L_004191F8; break;
        default: switch_error(__func__, 0x00419120, 0x800C0FA8);
    }
    // 0x00419124: nop

L_00419128:
    // 0x00419128: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041912C: addiu       $v0, $v0, 0x5F3C
    ctx->r2 = ADD32(ctx->r2, 0X5F3C);
    // 0x00419130: j           L_00419204
    // 0x00419134: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00419204;
    // 0x00419134: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00419138:
    // 0x00419138: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041913C: addiu       $v0, $v0, 0x5F54
    ctx->r2 = ADD32(ctx->r2, 0X5F54);
    // 0x00419140: j           L_00419204
    // 0x00419144: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00419204;
    // 0x00419144: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00419148:
    // 0x00419148: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041914C: addiu       $v0, $v0, 0x5F6C
    ctx->r2 = ADD32(ctx->r2, 0X5F6C);
    // 0x00419150: j           L_00419204
    // 0x00419154: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00419204;
    // 0x00419154: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00419158:
    // 0x00419158: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041915C: addiu       $v0, $v0, 0x5F84
    ctx->r2 = ADD32(ctx->r2, 0X5F84);
    // 0x00419160: j           L_00419204
    // 0x00419164: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00419204;
    // 0x00419164: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00419168:
    // 0x00419168: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041916C: addiu       $v0, $v0, 0x5F9C
    ctx->r2 = ADD32(ctx->r2, 0X5F9C);
    // 0x00419170: j           L_00419204
    // 0x00419174: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00419204;
    // 0x00419174: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00419178:
    // 0x00419178: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041917C: addiu       $v0, $v0, 0x5FB4
    ctx->r2 = ADD32(ctx->r2, 0X5FB4);
    // 0x00419180: j           L_00419204
    // 0x00419184: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00419204;
    // 0x00419184: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00419188:
    // 0x00419188: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041918C: addiu       $v0, $v0, 0x5FCC
    ctx->r2 = ADD32(ctx->r2, 0X5FCC);
    // 0x00419190: j           L_00419204
    // 0x00419194: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00419204;
    // 0x00419194: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00419198:
    // 0x00419198: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041919C: addiu       $v0, $v0, 0x5FE4
    ctx->r2 = ADD32(ctx->r2, 0X5FE4);
    // 0x004191A0: j           L_00419204
    // 0x004191A4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00419204;
    // 0x004191A4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004191A8:
    // 0x004191A8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004191AC: addiu       $v0, $v0, 0x5FFC
    ctx->r2 = ADD32(ctx->r2, 0X5FFC);
    // 0x004191B0: j           L_00419204
    // 0x004191B4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00419204;
    // 0x004191B4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004191B8:
    // 0x004191B8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004191BC: addiu       $v0, $v0, 0x6014
    ctx->r2 = ADD32(ctx->r2, 0X6014);
    // 0x004191C0: j           L_00419204
    // 0x004191C4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00419204;
    // 0x004191C4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004191C8:
    // 0x004191C8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004191CC: addiu       $v0, $v0, 0x602C
    ctx->r2 = ADD32(ctx->r2, 0X602C);
    // 0x004191D0: j           L_00419204
    // 0x004191D4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00419204;
    // 0x004191D4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004191D8:
    // 0x004191D8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004191DC: addiu       $v0, $v0, 0x6044
    ctx->r2 = ADD32(ctx->r2, 0X6044);
    // 0x004191E0: j           L_00419204
    // 0x004191E4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00419204;
    // 0x004191E4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004191E8:
    // 0x004191E8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004191EC: addiu       $v0, $v0, 0x605C
    ctx->r2 = ADD32(ctx->r2, 0X605C);
    // 0x004191F0: j           L_00419204
    // 0x004191F4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00419204;
    // 0x004191F4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004191F8:
    // 0x004191F8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004191FC: addiu       $v0, $v0, 0x6074
    ctx->r2 = ADD32(ctx->r2, 0X6074);
    // 0x00419200: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00419204:
    // 0x00419204: jr          $ra
    // 0x00419208: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00419208: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0042AB2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042AB2C: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x0042AB30: swc1        $f12, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f12.u32l;
    // 0x0042AB34: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042AB38: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x0042AB3C: lw          $v0, -0x71B0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X71B0);
    // 0x0042AB40: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0042AB44: lb          $v0, 0x12($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X12);
    // 0x0042AB48: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0042AB4C: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0042AB50: swc1        $f1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0042AB54: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042AB58: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x0042AB5C: lw          $v0, -0x71B0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X71B0);
    // 0x0042AB60: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0042AB64: lb          $v0, 0x13($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X13);
    // 0x0042AB68: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0042AB6C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0042AB70: mul.s       $f2, $f0, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0042AB74: add.s       $f12, $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f1.fl;
    // 0x0042AB78: add.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f2.fl;
    // 0x0042AB7C: jal         0x00298470
    // 0x0042AB80: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_00298470(rdram, ctx);
        goto after_0;
    // 0x0042AB80: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x0042AB84: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0042AB88: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x0042AB8C: c.eq.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl == ctx->f1.fl;
    // 0x0042AB90: nop

    // 0x0042AB94: bc1t        L_0042ABFC
    if (c1cs) {
        // 0x0042AB98: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_0042ABFC;
    }
    // 0x0042AB98: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0042AB9C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0042ABA0: lwc1        $f0, 0x5EB0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5EB0);
    // 0x0042ABA4: div.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0042ABA8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x0042ABAC: jal         0x0020EF60
    // 0x0042ABB0: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_1;
    // 0x0042ABB0: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_1:
    // 0x0042ABB4: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x0042ABB8: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0042ABBC: mfc1        $v0, $f3
    ctx->r2 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0042ABC0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042ABC4: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x0042ABC8: sh          $v0, -0x71AC($at)
    MEM_H(-0X71AC, ctx->r1) = ctx->r2;
    // 0x0042ABCC: lwc1        $f0, 0x14($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X14);
    // 0x0042ABD0: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0042ABD4: mfc1        $v0, $f3
    ctx->r2 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0042ABD8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042ABDC: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x0042ABE0: sh          $v0, -0x71AA($at)
    MEM_H(-0X71AA, ctx->r1) = ctx->r2;
    // 0x0042ABE4: lwc1        $f0, 0x18($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X18);
    // 0x0042ABE8: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0042ABEC: mfc1        $v0, $f3
    ctx->r2 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0042ABF0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0042ABF4: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x0042ABF8: sh          $v0, -0x71A8($at)
    MEM_H(-0X71A8, ctx->r1) = ctx->r2;
L_0042ABFC:
    // 0x0042ABFC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0042AC00: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0042AC04: jr          $ra
    // 0x0042AC08: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0042AC08: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0020CC94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020CC94: lwc1        $f1, 0x0($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X0);
    // 0x0020CC98: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020CC9C: lwc1        $f0, 0x5414($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5414);
    // 0x0020CCA0: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0020CCA4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020CCA8: lwc1        $f1, 0x5418($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5418);
    // 0x0020CCAC: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0020CCB0: nop

    // 0x0020CCB4: bc1t        L_0020CCCC
    if (c1cs) {
        // 0x0020CCB8: addiu       $t0, $a1, 0x20
        ctx->r8 = ADD32(ctx->r5, 0X20);
            goto L_0020CCCC;
    }
    // 0x0020CCB8: addiu       $t0, $a1, 0x20
    ctx->r8 = ADD32(ctx->r5, 0X20);
    // 0x0020CCBC: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020CCC0: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x0020CCC4: j           L_0020CCE0
    // 0x0020CCC8: nop

        goto L_0020CCE0;
    // 0x0020CCC8: nop

L_0020CCCC:
    // 0x0020CCCC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0020CCD0: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0020CCD4: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020CCD8: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x0020CCDC: or          $a3, $a3, $v0
    ctx->r7 = ctx->r7 | ctx->r2;
L_0020CCE0:
    // 0x0020CCE0: lwc1        $f1, 0x4($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X4);
    // 0x0020CCE4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020CCE8: lwc1        $f0, 0x541C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X541C);
    // 0x0020CCEC: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0020CCF0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020CCF4: lwc1        $f1, 0x5420($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5420);
    // 0x0020CCF8: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0020CCFC: nop

    // 0x0020CD00: bc1tl       L_0020CD18
    if (c1cs) {
        // 0x0020CD04: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_0020CD18;
    }
    goto skip_0;
    // 0x0020CD04: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_0:
    // 0x0020CD08: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020CD0C: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x0020CD10: j           L_0020CD2C
    // 0x0020CD14: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
        goto L_0020CD2C;
    // 0x0020CD14: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0020CD18:
    // 0x0020CD18: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0020CD1C: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020CD20: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x0020CD24: or          $a2, $a2, $v0
    ctx->r6 = ctx->r6 | ctx->r2;
    // 0x0020CD28: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0020CD2C:
    // 0x0020CD2C: and         $v0, $a3, $v0
    ctx->r2 = ctx->r7 & ctx->r2;
    // 0x0020CD30: srl         $v1, $a2, 16
    ctx->r3 = S32(U32(ctx->r6) >> 16);
    // 0x0020CD34: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0020CD38: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0020CD3C: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x0020CD40: andi        $v1, $a2, 0xFFFF
    ctx->r3 = ctx->r6 & 0XFFFF;
    // 0x0020CD44: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0020CD48: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x0020CD4C: lwc1        $f1, 0x8($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X8);
    // 0x0020CD50: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020CD54: lwc1        $f0, 0x5424($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5424);
    // 0x0020CD58: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0020CD5C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x0020CD60: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020CD64: lwc1        $f1, 0x5428($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5428);
    // 0x0020CD68: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0020CD6C: nop

    // 0x0020CD70: bc1t        L_0020CD88
    if (c1cs) {
        // 0x0020CD74: addiu       $t0, $t0, 0x4
        ctx->r8 = ADD32(ctx->r8, 0X4);
            goto L_0020CD88;
    }
    // 0x0020CD74: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x0020CD78: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020CD7C: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x0020CD80: j           L_0020CD9C
    // 0x0020CD84: nop

        goto L_0020CD9C;
    // 0x0020CD84: nop

L_0020CD88:
    // 0x0020CD88: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0020CD8C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0020CD90: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020CD94: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x0020CD98: or          $a3, $a3, $v0
    ctx->r7 = ctx->r7 | ctx->r2;
L_0020CD9C:
    // 0x0020CD9C: lwc1        $f1, 0xC($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0XC);
    // 0x0020CDA0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020CDA4: lwc1        $f0, 0x542C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X542C);
    // 0x0020CDA8: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0020CDAC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020CDB0: lwc1        $f1, 0x5430($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5430);
    // 0x0020CDB4: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0020CDB8: nop

    // 0x0020CDBC: bc1tl       L_0020CDD4
    if (c1cs) {
        // 0x0020CDC0: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_0020CDD4;
    }
    goto skip_1;
    // 0x0020CDC0: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_1:
    // 0x0020CDC4: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020CDC8: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x0020CDCC: j           L_0020CDE8
    // 0x0020CDD0: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
        goto L_0020CDE8;
    // 0x0020CDD0: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0020CDD4:
    // 0x0020CDD4: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0020CDD8: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020CDDC: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x0020CDE0: or          $a2, $a2, $v0
    ctx->r6 = ctx->r6 | ctx->r2;
    // 0x0020CDE4: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0020CDE8:
    // 0x0020CDE8: and         $v0, $a3, $v0
    ctx->r2 = ctx->r7 & ctx->r2;
    // 0x0020CDEC: srl         $v1, $a2, 16
    ctx->r3 = S32(U32(ctx->r6) >> 16);
    // 0x0020CDF0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0020CDF4: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0020CDF8: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x0020CDFC: andi        $v1, $a2, 0xFFFF
    ctx->r3 = ctx->r6 & 0XFFFF;
    // 0x0020CE00: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0020CE04: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x0020CE08: lwc1        $f1, 0x10($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X10);
    // 0x0020CE0C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020CE10: lwc1        $f0, 0x5434($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5434);
    // 0x0020CE14: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0020CE18: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x0020CE1C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020CE20: lwc1        $f1, 0x5438($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5438);
    // 0x0020CE24: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0020CE28: nop

    // 0x0020CE2C: bc1t        L_0020CE44
    if (c1cs) {
        // 0x0020CE30: addiu       $t0, $t0, 0x4
        ctx->r8 = ADD32(ctx->r8, 0X4);
            goto L_0020CE44;
    }
    // 0x0020CE30: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x0020CE34: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020CE38: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x0020CE3C: j           L_0020CE58
    // 0x0020CE40: nop

        goto L_0020CE58;
    // 0x0020CE40: nop

L_0020CE44:
    // 0x0020CE44: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0020CE48: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0020CE4C: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020CE50: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x0020CE54: or          $a3, $a3, $v0
    ctx->r7 = ctx->r7 | ctx->r2;
L_0020CE58:
    // 0x0020CE58: lwc1        $f1, 0x14($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X14);
    // 0x0020CE5C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020CE60: lwc1        $f0, 0x543C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X543C);
    // 0x0020CE64: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0020CE68: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020CE6C: lwc1        $f1, 0x5440($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5440);
    // 0x0020CE70: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0020CE74: nop

    // 0x0020CE78: bc1tl       L_0020CE90
    if (c1cs) {
        // 0x0020CE7C: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_0020CE90;
    }
    goto skip_2;
    // 0x0020CE7C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_2:
    // 0x0020CE80: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020CE84: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x0020CE88: j           L_0020CEA4
    // 0x0020CE8C: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
        goto L_0020CEA4;
    // 0x0020CE8C: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0020CE90:
    // 0x0020CE90: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0020CE94: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020CE98: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x0020CE9C: or          $a2, $a2, $v0
    ctx->r6 = ctx->r6 | ctx->r2;
    // 0x0020CEA0: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0020CEA4:
    // 0x0020CEA4: and         $v0, $a3, $v0
    ctx->r2 = ctx->r7 & ctx->r2;
    // 0x0020CEA8: srl         $v1, $a2, 16
    ctx->r3 = S32(U32(ctx->r6) >> 16);
    // 0x0020CEAC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0020CEB0: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0020CEB4: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x0020CEB8: andi        $v1, $a2, 0xFFFF
    ctx->r3 = ctx->r6 & 0XFFFF;
    // 0x0020CEBC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0020CEC0: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x0020CEC4: lwc1        $f1, 0x18($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X18);
    // 0x0020CEC8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020CECC: lwc1        $f0, 0x5444($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5444);
    // 0x0020CED0: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0020CED4: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x0020CED8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020CEDC: lwc1        $f1, 0x5448($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5448);
    // 0x0020CEE0: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0020CEE4: nop

    // 0x0020CEE8: bc1t        L_0020CF00
    if (c1cs) {
        // 0x0020CEEC: addiu       $t0, $t0, 0x4
        ctx->r8 = ADD32(ctx->r8, 0X4);
            goto L_0020CF00;
    }
    // 0x0020CEEC: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x0020CEF0: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020CEF4: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x0020CEF8: j           L_0020CF14
    // 0x0020CEFC: nop

        goto L_0020CF14;
    // 0x0020CEFC: nop

L_0020CF00:
    // 0x0020CF00: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0020CF04: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0020CF08: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020CF0C: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x0020CF10: or          $a3, $a3, $v0
    ctx->r7 = ctx->r7 | ctx->r2;
L_0020CF14:
    // 0x0020CF14: lwc1        $f1, 0x1C($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X1C);
    // 0x0020CF18: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020CF1C: lwc1        $f0, 0x544C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X544C);
    // 0x0020CF20: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0020CF24: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020CF28: lwc1        $f1, 0x5450($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5450);
    // 0x0020CF2C: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0020CF30: nop

    // 0x0020CF34: bc1tl       L_0020CF4C
    if (c1cs) {
        // 0x0020CF38: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_0020CF4C;
    }
    goto skip_3;
    // 0x0020CF38: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_3:
    // 0x0020CF3C: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020CF40: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x0020CF44: j           L_0020CF60
    // 0x0020CF48: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
        goto L_0020CF60;
    // 0x0020CF48: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0020CF4C:
    // 0x0020CF4C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0020CF50: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020CF54: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x0020CF58: or          $a2, $a2, $v0
    ctx->r6 = ctx->r6 | ctx->r2;
    // 0x0020CF5C: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0020CF60:
    // 0x0020CF60: and         $v0, $a3, $v0
    ctx->r2 = ctx->r7 & ctx->r2;
    // 0x0020CF64: srl         $v1, $a2, 16
    ctx->r3 = S32(U32(ctx->r6) >> 16);
    // 0x0020CF68: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0020CF6C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0020CF70: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x0020CF74: andi        $v1, $a2, 0xFFFF
    ctx->r3 = ctx->r6 & 0XFFFF;
    // 0x0020CF78: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0020CF7C: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x0020CF80: lwc1        $f1, 0x20($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X20);
    // 0x0020CF84: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020CF88: lwc1        $f0, 0x5454($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5454);
    // 0x0020CF8C: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0020CF90: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x0020CF94: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020CF98: lwc1        $f1, 0x5458($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5458);
    // 0x0020CF9C: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0020CFA0: nop

    // 0x0020CFA4: bc1t        L_0020CFBC
    if (c1cs) {
        // 0x0020CFA8: addiu       $t0, $t0, 0x4
        ctx->r8 = ADD32(ctx->r8, 0X4);
            goto L_0020CFBC;
    }
    // 0x0020CFA8: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x0020CFAC: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020CFB0: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x0020CFB4: j           L_0020CFD0
    // 0x0020CFB8: nop

        goto L_0020CFD0;
    // 0x0020CFB8: nop

L_0020CFBC:
    // 0x0020CFBC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0020CFC0: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0020CFC4: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020CFC8: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x0020CFCC: or          $a3, $a3, $v0
    ctx->r7 = ctx->r7 | ctx->r2;
L_0020CFD0:
    // 0x0020CFD0: lwc1        $f1, 0x24($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X24);
    // 0x0020CFD4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020CFD8: lwc1        $f0, 0x545C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X545C);
    // 0x0020CFDC: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0020CFE0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020CFE4: lwc1        $f1, 0x5460($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5460);
    // 0x0020CFE8: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0020CFEC: nop

    // 0x0020CFF0: bc1tl       L_0020D008
    if (c1cs) {
        // 0x0020CFF4: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_0020D008;
    }
    goto skip_4;
    // 0x0020CFF4: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_4:
    // 0x0020CFF8: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020CFFC: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x0020D000: j           L_0020D01C
    // 0x0020D004: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
        goto L_0020D01C;
    // 0x0020D004: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0020D008:
    // 0x0020D008: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0020D00C: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020D010: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x0020D014: or          $a2, $a2, $v0
    ctx->r6 = ctx->r6 | ctx->r2;
    // 0x0020D018: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0020D01C:
    // 0x0020D01C: and         $v0, $a3, $v0
    ctx->r2 = ctx->r7 & ctx->r2;
    // 0x0020D020: srl         $v1, $a2, 16
    ctx->r3 = S32(U32(ctx->r6) >> 16);
    // 0x0020D024: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0020D028: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0020D02C: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x0020D030: andi        $v1, $a2, 0xFFFF
    ctx->r3 = ctx->r6 & 0XFFFF;
    // 0x0020D034: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0020D038: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x0020D03C: lwc1        $f1, 0x28($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X28);
    // 0x0020D040: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020D044: lwc1        $f0, 0x5464($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5464);
    // 0x0020D048: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0020D04C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x0020D050: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020D054: lwc1        $f1, 0x5468($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5468);
    // 0x0020D058: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0020D05C: nop

    // 0x0020D060: bc1t        L_0020D078
    if (c1cs) {
        // 0x0020D064: addiu       $t0, $t0, 0x4
        ctx->r8 = ADD32(ctx->r8, 0X4);
            goto L_0020D078;
    }
    // 0x0020D064: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x0020D068: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020D06C: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x0020D070: j           L_0020D08C
    // 0x0020D074: nop

        goto L_0020D08C;
    // 0x0020D074: nop

L_0020D078:
    // 0x0020D078: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0020D07C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0020D080: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020D084: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x0020D088: or          $a3, $a3, $v0
    ctx->r7 = ctx->r7 | ctx->r2;
L_0020D08C:
    // 0x0020D08C: lwc1        $f1, 0x2C($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X2C);
    // 0x0020D090: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020D094: lwc1        $f0, 0x546C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X546C);
    // 0x0020D098: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0020D09C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020D0A0: lwc1        $f1, 0x5470($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5470);
    // 0x0020D0A4: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0020D0A8: nop

    // 0x0020D0AC: bc1tl       L_0020D0C4
    if (c1cs) {
        // 0x0020D0B0: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_0020D0C4;
    }
    goto skip_5;
    // 0x0020D0B0: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_5:
    // 0x0020D0B4: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020D0B8: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x0020D0BC: j           L_0020D0D8
    // 0x0020D0C0: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
        goto L_0020D0D8;
    // 0x0020D0C0: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0020D0C4:
    // 0x0020D0C4: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0020D0C8: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020D0CC: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x0020D0D0: or          $a2, $a2, $v0
    ctx->r6 = ctx->r6 | ctx->r2;
    // 0x0020D0D4: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0020D0D8:
    // 0x0020D0D8: and         $v0, $a3, $v0
    ctx->r2 = ctx->r7 & ctx->r2;
    // 0x0020D0DC: srl         $v1, $a2, 16
    ctx->r3 = S32(U32(ctx->r6) >> 16);
    // 0x0020D0E0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0020D0E4: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0020D0E8: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x0020D0EC: andi        $v1, $a2, 0xFFFF
    ctx->r3 = ctx->r6 & 0XFFFF;
    // 0x0020D0F0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0020D0F4: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x0020D0F8: lwc1        $f1, 0x30($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X30);
    // 0x0020D0FC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020D100: lwc1        $f0, 0x5474($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5474);
    // 0x0020D104: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0020D108: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x0020D10C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020D110: lwc1        $f1, 0x5478($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5478);
    // 0x0020D114: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0020D118: nop

    // 0x0020D11C: bc1t        L_0020D134
    if (c1cs) {
        // 0x0020D120: addiu       $t0, $t0, 0x4
        ctx->r8 = ADD32(ctx->r8, 0X4);
            goto L_0020D134;
    }
    // 0x0020D120: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x0020D124: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020D128: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x0020D12C: j           L_0020D148
    // 0x0020D130: nop

        goto L_0020D148;
    // 0x0020D130: nop

L_0020D134:
    // 0x0020D134: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0020D138: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0020D13C: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020D140: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x0020D144: or          $a3, $a3, $v0
    ctx->r7 = ctx->r7 | ctx->r2;
L_0020D148:
    // 0x0020D148: lwc1        $f1, 0x34($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X34);
    // 0x0020D14C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020D150: lwc1        $f0, 0x547C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X547C);
    // 0x0020D154: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0020D158: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020D15C: lwc1        $f1, 0x5480($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5480);
    // 0x0020D160: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0020D164: nop

    // 0x0020D168: bc1tl       L_0020D180
    if (c1cs) {
        // 0x0020D16C: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_0020D180;
    }
    goto skip_6;
    // 0x0020D16C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_6:
    // 0x0020D170: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020D174: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x0020D178: j           L_0020D194
    // 0x0020D17C: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
        goto L_0020D194;
    // 0x0020D17C: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0020D180:
    // 0x0020D180: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0020D184: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020D188: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x0020D18C: or          $a2, $a2, $v0
    ctx->r6 = ctx->r6 | ctx->r2;
    // 0x0020D190: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0020D194:
    // 0x0020D194: and         $v0, $a3, $v0
    ctx->r2 = ctx->r7 & ctx->r2;
    // 0x0020D198: srl         $v1, $a2, 16
    ctx->r3 = S32(U32(ctx->r6) >> 16);
    // 0x0020D19C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0020D1A0: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0020D1A4: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x0020D1A8: andi        $v1, $a2, 0xFFFF
    ctx->r3 = ctx->r6 & 0XFFFF;
    // 0x0020D1AC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0020D1B0: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x0020D1B4: lwc1        $f1, 0x38($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X38);
    // 0x0020D1B8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020D1BC: lwc1        $f0, 0x5484($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5484);
    // 0x0020D1C0: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0020D1C4: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x0020D1C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020D1CC: lwc1        $f1, 0x5488($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5488);
    // 0x0020D1D0: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0020D1D4: nop

    // 0x0020D1D8: bc1t        L_0020D1F0
    if (c1cs) {
        // 0x0020D1DC: addiu       $t0, $t0, 0x4
        ctx->r8 = ADD32(ctx->r8, 0X4);
            goto L_0020D1F0;
    }
    // 0x0020D1DC: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x0020D1E0: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020D1E4: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x0020D1E8: j           L_0020D204
    // 0x0020D1EC: nop

        goto L_0020D204;
    // 0x0020D1EC: nop

L_0020D1F0:
    // 0x0020D1F0: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0020D1F4: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0020D1F8: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020D1FC: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x0020D200: or          $a3, $a3, $v0
    ctx->r7 = ctx->r7 | ctx->r2;
L_0020D204:
    // 0x0020D204: lwc1        $f1, 0x3C($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X3C);
    // 0x0020D208: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020D20C: lwc1        $f0, 0x548C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X548C);
    // 0x0020D210: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0020D214: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020D218: lwc1        $f1, 0x5490($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5490);
    // 0x0020D21C: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0020D220: nop

    // 0x0020D224: bc1tl       L_0020D23C
    if (c1cs) {
        // 0x0020D228: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_0020D23C;
    }
    goto skip_7;
    // 0x0020D228: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_7:
    // 0x0020D22C: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020D230: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x0020D234: j           L_0020D250
    // 0x0020D238: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
        goto L_0020D250;
    // 0x0020D238: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0020D23C:
    // 0x0020D23C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0020D240: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0020D244: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x0020D248: or          $a2, $a2, $v0
    ctx->r6 = ctx->r6 | ctx->r2;
    // 0x0020D24C: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0020D250:
    // 0x0020D250: and         $v0, $a3, $v0
    ctx->r2 = ctx->r7 & ctx->r2;
    // 0x0020D254: srl         $v1, $a2, 16
    ctx->r3 = S32(U32(ctx->r6) >> 16);
    // 0x0020D258: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0020D25C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0020D260: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x0020D264: andi        $v1, $a2, 0xFFFF
    ctx->r3 = ctx->r6 & 0XFFFF;
    // 0x0020D268: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0020D26C: jr          $ra
    // 0x0020D270: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    return;
    // 0x0020D270: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
;}
RECOMP_FUNC void func_004485B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0040F9C0:
    // 0x004485B8: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x004485BC: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x004485C0: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x004485C4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x004485C8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x004485CC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x004485D0: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x004485D4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x004485D8: addu        $s0, $a3, $zero
    ctx->r16 = ADD32(ctx->r7, 0);
    // 0x004485DC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004485E0: sll         $a1, $s3, 2
    ctx->r5 = S32(ctx->r19 << 2);
    // 0x004485E4: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x004485E8: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x004485EC: addiu       $a3, $a3, 0x950
    ctx->r7 = ADD32(ctx->r7, 0X950);
    // 0x004485F0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x004485F4: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x004485F8: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x004485FC: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x00448600: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x00448604: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x00448608: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x0044860C: jal         0x00204EDC
    // 0x00448610: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    func_00204EDC(rdram, ctx);
        goto after_0;
    // 0x00448610: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    after_0:
    // 0x00448614: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00448618: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x0044861C: beq         $v1, $zero, L_00448630
    if (ctx->r3 == 0) {
        // 0x00448620: addu        $s7, $zero, $zero
        ctx->r23 = ADD32(0, 0);
            goto L_00448630;
    }
    // 0x00448620: addu        $s7, $zero, $zero
    ctx->r23 = ADD32(0, 0);
    // 0x00448624: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00448628: addiu       $s7, $v0, 0x10
    ctx->r23 = ADD32(ctx->r2, 0X10);
    // 0x0044862C: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
L_00448630:
    // 0x00448630: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00448634: sll         $a1, $s3, 2
    ctx->r5 = S32(ctx->r19 << 2);
    // 0x00448638: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x0044863C: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x00448640: addiu       $a3, $a3, 0x950
    ctx->r7 = ADD32(ctx->r7, 0X950);
    // 0x00448644: jal         0x00204EDC
    // 0x00448648: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    func_00204EDC(rdram, ctx);
        goto after_1;
    // 0x00448648: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    after_1:
    // 0x0044864C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00448650: beq         $v1, $zero, L_00448664
    if (ctx->r3 == 0) {
        // 0x00448654: addu        $s6, $zero, $zero
        ctx->r22 = ADD32(0, 0);
            goto L_00448664;
    }
    // 0x00448654: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    // 0x00448658: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0044865C: addiu       $s6, $v0, 0x10
    ctx->r22 = ADD32(ctx->r2, 0X10);
    // 0x00448660: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
L_00448664:
    // 0x00448664: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00448668: sll         $a1, $s3, 2
    ctx->r5 = S32(ctx->r19 << 2);
    // 0x0044866C: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x00448670: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x00448674: addiu       $a3, $a3, 0x950
    ctx->r7 = ADD32(ctx->r7, 0X950);
    // 0x00448678: jal         0x00204EDC
    // 0x0044867C: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    func_00204EDC(rdram, ctx);
        goto after_2;
    // 0x0044867C: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    after_2:
    // 0x00448680: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00448684: beq         $v1, $zero, L_00448698
    if (ctx->r3 == 0) {
        // 0x00448688: addu        $s5, $zero, $zero
        ctx->r21 = ADD32(0, 0);
            goto L_00448698;
    }
    // 0x00448688: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
    // 0x0044868C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00448690: addiu       $s5, $v0, 0x10
    ctx->r21 = ADD32(ctx->r2, 0X10);
    // 0x00448694: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
L_00448698:
    // 0x00448698: addiu       $v0, $zero, 0x24
    ctx->r2 = ADD32(0, 0X24);
    // 0x0044869C: addiu       $s4, $s0, 0x8
    ctx->r20 = ADD32(ctx->r16, 0X8);
    // 0x004486A0: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x004486A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004486A8: bne         $s3, $v0, L_004486E0
    if (ctx->r19 != ctx->r2) {
        // 0x004486AC: sw          $s3, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r19;
            goto L_004486E0;
    }
    // 0x004486AC: sw          $s3, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r19;
    // 0x004486B0: lwc1        $f0, 0x0($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X0);
    // 0x004486B4: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x004486B8: lwc1        $f0, 0x4($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X4);
    // 0x004486BC: swc1        $f0, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->f0.u32l;
    // 0x004486C0: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x004486C4: sw          $zero, 0xC($s4)
    MEM_W(0XC, ctx->r20) = 0;
    // 0x004486C8: sw          $zero, 0x10($s4)
    MEM_W(0X10, ctx->r20) = 0;
    // 0x004486CC: sw          $zero, 0x14($s4)
    MEM_W(0X14, ctx->r20) = 0;
    // 0x004486D0: sw          $zero, 0x20($s4)
    MEM_W(0X20, ctx->r20) = 0;
    // 0x004486D4: sw          $zero, 0x1C($s4)
    MEM_W(0X1C, ctx->r20) = 0;
    // 0x004486D8: j           L_0040F9C0
    // 0x004486DC: swc1        $f0, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->f0.u32l;
    entry_0040F9C0(rdram, ctx);
    return;
    // 0x004486DC: swc1        $f0, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->f0.u32l;
L_004486E0:
    // 0x004486E0: blez        $s3, L_0044872C
    if (SIGNED(ctx->r19) <= 0) {
        // 0x004486E4: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0044872C;
    }
    // 0x004486E4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x004486E8: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x004486EC: addu        $v1, $s4, $zero
    ctx->r3 = ADD32(ctx->r20, 0);
    // 0x004486F0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
L_004486F4:
    // 0x004486F4: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x004486F8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x004486FC: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
    // 0x00448700: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    // 0x00448704: slt         $v0, $s0, $s3
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x00448708: swc1        $f0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f0.u32l;
    // 0x0044870C: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x00448710: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    // 0x00448714: swc1        $f0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f0.u32l;
    // 0x00448718: lwc1        $f0, 0x0($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X0);
    // 0x0044871C: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x00448720: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x00448724: bne         $v0, $zero, L_004486F4
    if (ctx->r2 != 0) {
        // 0x00448728: addiu       $v1, $v1, 0x24
        ctx->r3 = ADD32(ctx->r3, 0X24);
            goto L_004486F4;
    }
    // 0x00448728: addiu       $v1, $v1, 0x24
    ctx->r3 = ADD32(ctx->r3, 0X24);
L_0044872C:
    // 0x0044872C: blez        $s3, L_00448794
    if (SIGNED(ctx->r19) <= 0) {
        // 0x00448730: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00448794;
    }
    // 0x00448730: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00448734: addiu       $fp, $s3, -0x1
    ctx->r30 = ADD32(ctx->r19, -0X1);
    // 0x00448738: addiu       $s2, $zero, 0x24
    ctx->r18 = ADD32(0, 0X24);
    // 0x0044873C: addu        $s1, $s4, $zero
    ctx->r17 = ADD32(ctx->r20, 0);
L_00448740:
    // 0x00448740: beq         $s0, $fp, L_00448794
    if (ctx->r16 == ctx->r30) {
        // 0x00448744: swc1        $f20, 0x18($s1)
        MEM_W(0X18, ctx->r17) = ctx->f20.u32l;
            goto L_00448794;
    }
    // 0x00448744: swc1        $f20, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f20.u32l;
    // 0x00448748: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0044874C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00448750: jal         0x0020EF2C
    // 0x00448754: addu        $a2, $s4, $s2
    ctx->r6 = ADD32(ctx->r20, ctx->r18);
    func_0020EF2C(rdram, ctx);
        goto after_3;
    // 0x00448754: addu        $a2, $s4, $s2
    ctx->r6 = ADD32(ctx->r20, ctx->r18);
    after_3:
    // 0x00448758: lwc1        $f1, 0x10($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x0044875C: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x00448760: lwc1        $f0, 0x14($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X14);
    // 0x00448764: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00448768: lwc1        $f12, 0x18($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
    // 0x0044876C: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x00448770: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00448774: addiu       $s2, $s2, 0x24
    ctx->r18 = ADD32(ctx->r18, 0X24);
    // 0x00448778: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    // 0x0044877C: addiu       $s1, $s1, 0x24
    ctx->r17 = ADD32(ctx->r17, 0X24);
    // 0x00448780: jal         0x00298470
    // 0x00448784: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_00298470(rdram, ctx);
        goto after_4;
    // 0x00448784: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_4:
    // 0x00448788: slt         $v0, $s0, $s3
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x0044878C: bne         $v0, $zero, L_00448740
    if (ctx->r2 != 0) {
        // 0x00448790: add.s       $f20, $f20, $f0
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
            goto L_00448740;
    }
    // 0x00448790: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
L_00448794:
    // 0x00448794: blez        $s3, L_004487D0
    if (SIGNED(ctx->r19) <= 0) {
        // 0x00448798: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_004487D0;
    }
    // 0x00448798: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0044879C: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x004487A0: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x004487A4: addu        $v1, $s4, $zero
    ctx->r3 = ADD32(ctx->r20, 0);
L_004487A8:
    // 0x004487A8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x004487AC: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x004487B0: slt         $v0, $s0, $s3
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x004487B4: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x004487B8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x004487BC: lwc1        $f0, 0x18($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X18);
    // 0x004487C0: addiu       $v1, $v1, 0x24
    ctx->r3 = ADD32(ctx->r3, 0X24);
    // 0x004487C4: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
    // 0x004487C8: bne         $v0, $zero, L_004487A8
    if (ctx->r2 != 0) {
        // 0x004487CC: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_004487A8;
    }
    // 0x004487CC: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_004487D0:
    // 0x004487D0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x004487D4: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    // 0x004487D8: addu        $a2, $s6, $zero
    ctx->r6 = ADD32(ctx->r22, 0);
    // 0x004487DC: jal         0x0040F240
    // 0x004487E0: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    func_0040F240(rdram, ctx);
        goto after_5;
    // 0x004487E0: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    after_5:
    // 0x004487E4: blez        $s3, L_00448810
    if (SIGNED(ctx->r19) <= 0) {
        // 0x004487E8: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00448810;
    }
    // 0x004487E8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x004487EC: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x004487F0: addu        $v1, $s4, $zero
    ctx->r3 = ADD32(ctx->r20, 0);
L_004487F4:
    // 0x004487F4: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x004487F8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x004487FC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00448800: slt         $v0, $s0, $s3
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x00448804: swc1        $f0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f0.u32l;
    // 0x00448808: bne         $v0, $zero, L_004487F4
    if (ctx->r2 != 0) {
        // 0x0044880C: addiu       $v1, $v1, 0x24
        ctx->r3 = ADD32(ctx->r3, 0X24);
            goto L_004487F4;
    }
    // 0x0044880C: addiu       $v1, $v1, 0x24
    ctx->r3 = ADD32(ctx->r3, 0X24);
L_00448810:
    // 0x00448810: blez        $s3, L_0044884C
    if (SIGNED(ctx->r19) <= 0) {
        // 0x00448814: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0044884C;
    }
    // 0x00448814: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00448818: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x0044881C: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x00448820: addu        $v1, $s4, $zero
    ctx->r3 = ADD32(ctx->r20, 0);
L_00448824:
    // 0x00448824: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00448828: lwc1        $f0, 0x4($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X4);
    // 0x0044882C: slt         $v0, $s0, $s3
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x00448830: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x00448834: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x00448838: lwc1        $f0, 0x18($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X18);
    // 0x0044883C: addiu       $v1, $v1, 0x24
    ctx->r3 = ADD32(ctx->r3, 0X24);
    // 0x00448840: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
    // 0x00448844: bne         $v0, $zero, L_00448824
    if (ctx->r2 != 0) {
        // 0x00448848: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_00448824;
    }
    // 0x00448848: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_0044884C:
    // 0x0044884C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00448850: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    // 0x00448854: addu        $a2, $s6, $zero
    ctx->r6 = ADD32(ctx->r22, 0);
    // 0x00448858: jal         0x0040F240
    // 0x0044885C: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    func_0040F240(rdram, ctx);
        goto after_6;
    // 0x0044885C: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    after_6:
    // 0x00448860: blez        $s3, L_0044888C
    if (SIGNED(ctx->r19) <= 0) {
        // 0x00448864: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0044888C;
    }
    // 0x00448864: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00448868: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x0044886C: addu        $v1, $s4, $zero
    ctx->r3 = ADD32(ctx->r20, 0);
L_00448870:
    // 0x00448870: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x00448874: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x00448878: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0044887C: slt         $v0, $s0, $s3
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x00448880: swc1        $f0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f0.u32l;
    // 0x00448884: bne         $v0, $zero, L_00448870
    if (ctx->r2 != 0) {
        // 0x00448888: addiu       $v1, $v1, 0x24
        ctx->r3 = ADD32(ctx->r3, 0X24);
            goto L_00448870;
    }
    // 0x00448888: addiu       $v1, $v1, 0x24
    ctx->r3 = ADD32(ctx->r3, 0X24);
L_0044888C:
    // 0x0044888C: blez        $s3, L_004488C8
    if (SIGNED(ctx->r19) <= 0) {
        // 0x00448890: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_004488C8;
    }
    // 0x00448890: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00448894: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x00448898: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x0044889C: addu        $v1, $s4, $zero
    ctx->r3 = ADD32(ctx->r20, 0);
L_004488A0:
    // 0x004488A0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x004488A4: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x004488A8: slt         $v0, $s0, $s3
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x004488AC: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x004488B0: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x004488B4: lwc1        $f0, 0x18($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X18);
    // 0x004488B8: addiu       $v1, $v1, 0x24
    ctx->r3 = ADD32(ctx->r3, 0X24);
    // 0x004488BC: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
    // 0x004488C0: bne         $v0, $zero, L_004488A0
    if (ctx->r2 != 0) {
        // 0x004488C4: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_004488A0;
    }
    // 0x004488C4: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_004488C8:
    // 0x004488C8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x004488CC: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    // 0x004488D0: addu        $a2, $s6, $zero
    ctx->r6 = ADD32(ctx->r22, 0);
    // 0x004488D4: jal         0x0040F240
    // 0x004488D8: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    func_0040F240(rdram, ctx);
        goto after_7;
    // 0x004488D8: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    after_7:
    // 0x004488DC: blez        $s3, L_00448908
    if (SIGNED(ctx->r19) <= 0) {
        // 0x004488E0: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00448908;
    }
    // 0x004488E0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x004488E4: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x004488E8: addu        $v1, $s4, $zero
    ctx->r3 = ADD32(ctx->r20, 0);
L_004488EC:
    // 0x004488EC: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x004488F0: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x004488F4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x004488F8: slt         $v0, $s0, $s3
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x004488FC: swc1        $f0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f0.u32l;
    // 0x00448900: bne         $v0, $zero, L_004488EC
    if (ctx->r2 != 0) {
        // 0x00448904: addiu       $v1, $v1, 0x24
        ctx->r3 = ADD32(ctx->r3, 0X24);
            goto L_004488EC;
    }
    // 0x00448904: addiu       $v1, $v1, 0x24
    ctx->r3 = ADD32(ctx->r3, 0X24);
L_00448908:
    // 0x00448908: blez        $s3, L_00448944
    if (SIGNED(ctx->r19) <= 0) {
        // 0x0044890C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00448944;
    }
    // 0x0044890C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00448910: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x00448914: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x00448918: addu        $v1, $s4, $zero
    ctx->r3 = ADD32(ctx->r20, 0);
L_0044891C:
    // 0x0044891C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00448920: lwc1        $f0, 0x18($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X18);
    // 0x00448924: slt         $v0, $s0, $s3
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x00448928: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x0044892C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x00448930: lwc1        $f0, 0x1C($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x00448934: addiu       $v1, $v1, 0x24
    ctx->r3 = ADD32(ctx->r3, 0X24);
    // 0x00448938: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
    // 0x0044893C: bne         $v0, $zero, L_0044891C
    if (ctx->r2 != 0) {
        // 0x00448940: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_0044891C;
    }
    // 0x00448940: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_00448944:
    // 0x00448944: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00448948: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    // 0x0044894C: addu        $a2, $s6, $zero
    ctx->r6 = ADD32(ctx->r22, 0);
    // 0x00448950: jal         0x0040F240
    // 0x00448954: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    func_0040F240(rdram, ctx);
        goto after_8;
    // 0x00448954: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    after_8:
    // 0x00448958: blez        $s3, L_00448984
    if (SIGNED(ctx->r19) <= 0) {
        // 0x0044895C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00448984;
    }
    // 0x0044895C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00448960: addu        $v1, $s5, $zero
    ctx->r3 = ADD32(ctx->r21, 0);
    // 0x00448964: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
L_00448968:
    // 0x00448968: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x0044896C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x00448970: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00448974: slt         $v0, $s0, $s3
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x00448978: swc1        $f0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f0.u32l;
    // 0x0044897C: bne         $v0, $zero, L_00448968
    if (ctx->r2 != 0) {
        // 0x00448980: addiu       $a2, $a2, 0x24
        ctx->r6 = ADD32(ctx->r6, 0X24);
            goto L_00448968;
    }
    // 0x00448980: addiu       $a2, $a2, 0x24
    ctx->r6 = ADD32(ctx->r6, 0X24);
L_00448984:
    // 0x00448984: beq         $s7, $zero, L_00448998
    if (ctx->r23 == 0) {
        // 0x00448988: nop
    
            goto L_00448998;
    }
    // 0x00448988: nop

    // 0x0044898C: lw          $a1, -0x10($s7)
    ctx->r5 = MEM_W(ctx->r23, -0X10);
    // 0x00448990: jal         0x002052D8
    // 0x00448994: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_9;
    // 0x00448994: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_9:
L_00448998:
    // 0x00448998: beq         $s6, $zero, L_004489AC
    if (ctx->r22 == 0) {
        // 0x0044899C: nop
    
            goto L_004489AC;
    }
    // 0x0044899C: nop

    // 0x004489A0: lw          $a1, -0x10($s6)
    ctx->r5 = MEM_W(ctx->r22, -0X10);
    // 0x004489A4: jal         0x002052D8
    // 0x004489A8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_10;
    // 0x004489A8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_10:
L_004489AC:
    // 0x004489AC: beq         $s5, $zero, L_004489C0
    if (ctx->r21 == 0) {
        // 0x004489B0: nop
    
            goto L_004489C0;
    }
    // 0x004489B0: nop

    // 0x004489B4: lw          $a1, -0x10($s5)
    ctx->r5 = MEM_W(ctx->r21, -0X10);
    // 0x004489B8: jal         0x002052D8
    // 0x004489BC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_11;
    // 0x004489BC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_11:
L_004489C0:
    // 0x004489C0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x004489C4: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x004489C8: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x004489CC: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x004489D0: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x004489D4: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x004489D8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x004489DC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x004489E0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x004489E4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x004489E8: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x004489EC: jr          $ra
    // 0x004489F0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x004489F0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_00401E30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00401E30: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00401E34: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x00401E38: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00401E3C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x00401E40: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x00401E44: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00401E48: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00401E4C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x00401E50: addiu       $s5, $zero, 0x1900
    ctx->r21 = ADD32(0, 0X1900);
    // 0x00401E54: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x00401E58: addiu       $s2, $zero, 0x8
    ctx->r18 = ADD32(0, 0X8);
    // 0x00401E5C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00401E60: addu        $s1, $s3, $zero
    ctx->r17 = ADD32(ctx->r19, 0);
    // 0x00401E64: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x00401E68: sw          $s4, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r20;
L_00401E6C:
    // 0x00401E6C: sw          $s5, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r21;
    // 0x00401E70: addu        $a0, $s3, $s2
    ctx->r4 = ADD32(ctx->r19, ctx->r18);
    // 0x00401E74: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x00401E78: jal         0x002362E4
    // 0x00401E7C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_002362E4(rdram, ctx);
        goto after_0;
    // 0x00401E7C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_0:
    // 0x00401E80: addiu       $s2, $s2, 0x68
    ctx->r18 = ADD32(ctx->r18, 0X68);
    // 0x00401E84: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00401E88: slti        $v0, $s0, 0x5
    ctx->r2 = SIGNED(ctx->r16) < 0X5 ? 1 : 0;
    // 0x00401E8C: bne         $v0, $zero, L_00401E6C
    if (ctx->r2 != 0) {
        // 0x00401E90: addiu       $s1, $s1, 0x68
        ctx->r17 = ADD32(ctx->r17, 0X68);
            goto L_00401E6C;
    }
    // 0x00401E90: addiu       $s1, $s1, 0x68
    ctx->r17 = ADD32(ctx->r17, 0X68);
    // 0x00401E94: ori         $v0, $zero, 0xFF00
    ctx->r2 = 0 | 0XFF00;
    // 0x00401E98: sw          $v0, 0x70($s3)
    MEM_W(0X70, ctx->r19) = ctx->r2;
    // 0x00401E9C: ori         $v0, $zero, 0x9600
    ctx->r2 = 0 | 0X9600;
    // 0x00401EA0: sw          $v0, 0xD8($s3)
    MEM_W(0XD8, ctx->r19) = ctx->r2;
    // 0x00401EA4: addiu       $v0, $zero, 0x1E00
    ctx->r2 = ADD32(0, 0X1E00);
    // 0x00401EA8: sw          $v0, 0x140($s3)
    MEM_W(0X140, ctx->r19) = ctx->r2;
    // 0x00401EAC: addiu       $v0, $zero, 0x1900
    ctx->r2 = ADD32(0, 0X1900);
    // 0x00401EB0: sw          $v0, 0x1A8($s3)
    MEM_W(0X1A8, ctx->r19) = ctx->r2;
    // 0x00401EB4: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x00401EB8: addiu       $v0, $v0, 0x824
    ctx->r2 = ADD32(ctx->r2, 0X824);
    // 0x00401EBC: sw          $zero, 0x218($s3)
    MEM_W(0X218, ctx->r19) = 0;
    // 0x00401EC0: sw          $v0, 0x214($s3)
    MEM_W(0X214, ctx->r19) = ctx->r2;
    // 0x00401EC4: lw          $v0, 0x218($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X218);
    // 0x00401EC8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x00401ECC: sw          $zero, 0x8($s3)
    MEM_W(0X8, ctx->r19) = 0;
    // 0x00401ED0: sw          $a0, 0x210($s3)
    MEM_W(0X210, ctx->r19) = ctx->r4;
    // 0x00401ED4: lui         $v1, 0x43
    ctx->r3 = S32(0X43 << 16);
    // 0x00401ED8: lw          $v1, 0x828($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X828);
    // 0x00401EDC: sw          $zero, 0x21C($s3)
    MEM_W(0X21C, ctx->r19) = 0;
    // 0x00401EE0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00401EE4: sw          $v0, 0x218($s3)
    MEM_W(0X218, ctx->r19) = ctx->r2;
    // 0x00401EE8: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x00401EEC: lw          $v0, 0x824($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X824);
    // 0x00401EF0: beql        $v0, $zero, L_00401F0C
    if (ctx->r2 == 0) {
        // 0x00401EF4: sw          $zero, 0x250($s3)
        MEM_W(0X250, ctx->r19) = 0;
            goto L_00401F0C;
    }
    goto skip_0;
    // 0x00401EF4: sw          $zero, 0x250($s3)
    MEM_W(0X250, ctx->r19) = 0;
    skip_0:
    // 0x00401EF8: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x00401EFC: lw          $v0, 0x828($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X828);
    // 0x00401F00: beql        $v0, $zero, L_00401F0C
    if (ctx->r2 == 0) {
        // 0x00401F04: sw          $zero, 0x250($s3)
        MEM_W(0X250, ctx->r19) = 0;
            goto L_00401F0C;
    }
    goto skip_1;
    // 0x00401F04: sw          $zero, 0x250($s3)
    MEM_W(0X250, ctx->r19) = 0;
    skip_1:
    // 0x00401F08: sw          $a0, 0x250($s3)
    MEM_W(0X250, ctx->r19) = ctx->r4;
L_00401F0C:
    // 0x00401F0C: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x00401F10: addiu       $s0, $s0, 0x7078
    ctx->r16 = ADD32(ctx->r16, 0X7078);
    // 0x00401F14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00401F18: addiu       $a1, $zero, 0x457
    ctx->r5 = ADD32(0, 0X457);
    // 0x00401F1C: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x00401F20: addiu       $a3, $zero, 0x1D4D
    ctx->r7 = ADD32(0, 0X1D4D);
    // 0x00401F24: addiu       $v0, $s3, 0x220
    ctx->r2 = ADD32(ctx->r19, 0X220);
    // 0x00401F28: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00401F2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00401F30: jal         0x00225F6C
    // 0x00401F34: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_00225F6C(rdram, ctx);
        goto after_1;
    // 0x00401F34: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_1:
    // 0x00401F38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00401F3C: addiu       $a1, $zero, 0x651
    ctx->r5 = ADD32(0, 0X651);
    // 0x00401F40: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x00401F44: addiu       $a3, $zero, 0x1D4D
    ctx->r7 = ADD32(0, 0X1D4D);
    // 0x00401F48: addiu       $v0, $s3, 0x224
    ctx->r2 = ADD32(ctx->r19, 0X224);
    // 0x00401F4C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00401F50: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x00401F54: jal         0x00225F6C
    // 0x00401F58: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_00225F6C(rdram, ctx);
        goto after_2;
    // 0x00401F58: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_2:
    // 0x00401F5C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00401F60: addu        $s2, $s3, $zero
    ctx->r18 = ADD32(ctx->r19, 0);
    // 0x00401F64: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
    // 0x00401F68: sw          $v0, 0x244($s3)
    MEM_W(0X244, ctx->r19) = ctx->r2;
L_00401F6C:
    // 0x00401F6C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00401F70: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00401F74: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00401F78: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x00401F7C: addu        $at, $at, $s1
    ctx->r1 = ADD32(ctx->r1, ctx->r17);
    // 0x00401F80: lw          $a2, 0x7B0($at)
    ctx->r6 = MEM_W(ctx->r1, 0X7B0);
    // 0x00401F84: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    // 0x00401F88: jal         0x00225EBC
    // 0x00401F8C: addu        $s0, $s0, $a1
    ctx->r16 = ADD32(ctx->r16, ctx->r5);
    func_00225EBC(rdram, ctx);
        goto after_3;
    // 0x00401F8C: addu        $s0, $s0, $a1
    ctx->r16 = ADD32(ctx->r16, ctx->r5);
    after_3:
    // 0x00401F90: sw          $v0, 0x248($s2)
    MEM_W(0X248, ctx->r18) = ctx->r2;
    // 0x00401F94: slti        $v0, $s0, 0x2
    ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x00401F98: bne         $v0, $zero, L_00401F6C
    if (ctx->r2 != 0) {
        // 0x00401F9C: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_00401F6C;
    }
    // 0x00401F9C: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x00401FA0: sw          $zero, 0x254($s3)
    MEM_W(0X254, ctx->r19) = 0;
    // 0x00401FA4: sw          $zero, 0x258($s3)
    MEM_W(0X258, ctx->r19) = 0;
    // 0x00401FA8: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x00401FAC: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x00401FB0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x00401FB4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x00401FB8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00401FBC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00401FC0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00401FC4: jr          $ra
    // 0x00401FC8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00401FC8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00271778(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00271778: sll         $v1, $a1, 1
    ctx->r3 = S32(ctx->r5 << 1);
    // 0x0027177C: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x00271780: lw          $v0, 0x2B70($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2B70);
    // 0x00271784: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00271788: jr          $ra
    // 0x0027178C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    return;
    // 0x0027178C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
;}
RECOMP_FUNC void func_00253768(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00253768: jr          $ra
    // 0x0025376C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x0025376C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_00424780(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00424780: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00424784: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x00424788: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x0042478C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x00424790: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x00424794: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x00424798: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    // 0x0042479C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x004247A0: addiu       $v1, $zero, 0x10FE
    ctx->r3 = ADD32(0, 0X10FE);
    // 0x004247A4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x004247A8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x004247AC: lw          $v0, 0x18($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X18);
    // 0x004247B0: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x004247B4: lh          $a1, 0x20($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X20);
    // 0x004247B8: lh          $s0, 0x22($v0)
    ctx->r16 = MEM_H(ctx->r2, 0X22);
    // 0x004247BC: beq         $a1, $v1, L_004247E0
    if (ctx->r5 == ctx->r3) {
        // 0x004247C0: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_004247E0;
    }
    // 0x004247C0: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x004247C4: addiu       $v0, $zero, 0x1194
    ctx->r2 = ADD32(0, 0X1194);
    // 0x004247C8: beq         $a1, $v0, L_00424818
    if (ctx->r5 == ctx->r2) {
        // 0x004247CC: addu        $v0, $a0, $s0
        ctx->r2 = ADD32(ctx->r4, ctx->r16);
            goto L_00424818;
    }
    // 0x004247CC: addu        $v0, $a0, $s0
    ctx->r2 = ADD32(ctx->r4, ctx->r16);
    // 0x004247D0: jal         0x00253748
    // 0x004247D4: nop

    func_00253748(rdram, ctx);
        goto after_0;
    // 0x004247D4: nop

    after_0:
    // 0x004247D8: j           L_00424820
    // 0x004247DC: slt         $s1, $s0, $v0
    ctx->r17 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
        goto L_00424820;
    // 0x004247DC: slt         $s1, $s0, $v0
    ctx->r17 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
L_004247E0:
    // 0x004247E0: bltz        $s0, L_00424820
    if (SIGNED(ctx->r16) < 0) {
        // 0x004247E4: slti        $v0, $s0, 0x3
        ctx->r2 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
            goto L_00424820;
    }
    // 0x004247E4: slti        $v0, $s0, 0x3
    ctx->r2 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
    // 0x004247E8: bne         $v0, $zero, L_00424800
    if (ctx->r2 != 0) {
        // 0x004247EC: slti        $v0, $s0, 0x6
        ctx->r2 = SIGNED(ctx->r16) < 0X6 ? 1 : 0;
            goto L_00424800;
    }
    // 0x004247EC: slti        $v0, $s0, 0x6
    ctx->r2 = SIGNED(ctx->r16) < 0X6 ? 1 : 0;
    // 0x004247F0: bnel        $v0, $zero, L_0042480C
    if (ctx->r2 != 0) {
        // 0x004247F4: addiu       $s1, $s0, -0x3
        ctx->r17 = ADD32(ctx->r16, -0X3);
            goto L_0042480C;
    }
    goto skip_0;
    // 0x004247F4: addiu       $s1, $s0, -0x3
    ctx->r17 = ADD32(ctx->r16, -0X3);
    skip_0:
    // 0x004247F8: j           L_00424820
    // 0x004247FC: nop

        goto L_00424820;
    // 0x004247FC: nop

L_00424800:
    // 0x00424800: lbu         $v0, 0xA05($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA05);
    // 0x00424804: j           L_00424820
    // 0x00424808: slt         $s1, $s0, $v0
    ctx->r17 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
        goto L_00424820;
    // 0x00424808: slt         $s1, $s0, $v0
    ctx->r17 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
L_0042480C:
    // 0x0042480C: lbu         $v0, 0xA06($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA06);
    // 0x00424810: j           L_00424820
    // 0x00424814: slt         $s1, $s1, $v0
    ctx->r17 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
        goto L_00424820;
    // 0x00424814: slt         $s1, $s1, $v0
    ctx->r17 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
L_00424818:
    // 0x00424818: lbu         $v0, 0x9FC($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X9FC);
    // 0x0042481C: sltu        $s1, $zero, $v0
    ctx->r17 = 0 < ctx->r2 ? 1 : 0;
L_00424820:
    // 0x00424820: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00424824: lw          $v0, 0x1BD0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BD0);
    // 0x00424828: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
    // 0x0042482C: beq         $v0, $v1, L_00424868
    if (ctx->r2 == ctx->r3) {
        // 0x00424830: lui         $a0, 0xE300
        ctx->r4 = S32(0XE300 << 16);
            goto L_00424868;
    }
    // 0x00424830: lui         $a0, 0xE300
    ctx->r4 = S32(0XE300 << 16);
    // 0x00424834: lwc1        $f1, 0x34($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X34);
    // 0x00424838: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0042483C: lwc1        $f0, 0x1720($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X1720);
    // 0x00424840: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00424844: lwc1        $f0, 0x30($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X30);
    // 0x00424848: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0042484C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00424850: sw          $v1, 0x1BD0($at)
    MEM_W(0X1BD0, ctx->r1) = ctx->r3;
    // 0x00424854: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00424858: mfc1        $a0, $f2
    ctx->r4 = (int32_t)ctx->f2.u32l;
    // 0x0042485C: jal         0x00279028
    // 0x00424860: nop

    func_00279028(rdram, ctx);
        goto after_1;
    // 0x00424860: nop

    after_1:
    // 0x00424864: lui         $a0, 0xE300
    ctx->r4 = S32(0XE300 << 16);
L_00424868:
    // 0x00424868: lui         $a3, 0x800E
    ctx->r7 = S32(0X800E << 16);
    // 0x0042486C: addiu       $a3, $a3, -0x71DC
    ctx->r7 = ADD32(ctx->r7, -0X71DC);
    // 0x00424870: ori         $a0, $a0, 0xA01
    ctx->r4 = ctx->r4 | 0XA01;
    // 0x00424874: lw          $a1, 0x0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X0);
    // 0x00424878: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x0042487C: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x00424880: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x00424884: addiu       $a2, $a1, 0x8
    ctx->r6 = ADD32(ctx->r5, 0X8);
    // 0x00424888: sw          $a1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r5;
    // 0x0042488C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00424890: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
    // 0x00424894: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x00424898: sw          $a2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r6;
    // 0x0042489C: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
    // 0x004248A0: beq         $s1, $zero, L_004248E0
    if (ctx->r17 == 0) {
        // 0x004248A4: sw          $v0, 0x4($a1)
        MEM_W(0X4, ctx->r5) = ctx->r2;
            goto L_004248E0;
    }
    // 0x004248A4: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x004248A8: lui         $v0, 0xFB00
    ctx->r2 = S32(0XFB00 << 16);
    // 0x004248AC: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    // 0x004248B0: lwc1        $f0, 0x34($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X34);
    // 0x004248B4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004248B8: lwc1        $f1, 0x1724($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X1724);
    // 0x004248BC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x004248C0: lwc1        $f1, 0x30($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X30);
    // 0x004248C4: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x004248C8: addiu       $v0, $a1, 0x10
    ctx->r2 = ADD32(ctx->r5, 0X10);
    // 0x004248CC: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x004248D0: trunc.w.s   $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x004248D4: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x004248D8: j           L_0042491C
    // 0x004248DC: addiu       $v1, $zero, -0x100
    ctx->r3 = ADD32(0, -0X100);
        goto L_0042491C;
    // 0x004248DC: addiu       $v1, $zero, -0x100
    ctx->r3 = ADD32(0, -0X100);
L_004248E0:
    // 0x004248E0: lui         $v0, 0xFB00
    ctx->r2 = S32(0XFB00 << 16);
    // 0x004248E4: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    // 0x004248E8: lwc1        $f0, 0x34($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X34);
    // 0x004248EC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004248F0: lwc1        $f1, 0x1728($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X1728);
    // 0x004248F4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x004248F8: lwc1        $f1, 0x30($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X30);
    // 0x004248FC: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00424900: lui         $v1, 0x3232
    ctx->r3 = S32(0X3232 << 16);
    // 0x00424904: ori         $v1, $v1, 0x3200
    ctx->r3 = ctx->r3 | 0X3200;
    // 0x00424908: addiu       $v0, $a1, 0x10
    ctx->r2 = ADD32(ctx->r5, 0X10);
    // 0x0042490C: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x00424910: trunc.w.s   $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00424914: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x00424918: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
L_0042491C:
    // 0x0042491C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00424920: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    // 0x00424924: lwc1        $f0, 0xC($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0XC);
    // 0x00424928: lh          $a2, 0x16($s3)
    ctx->r6 = MEM_H(ctx->r19, 0X16);
    // 0x0042492C: lh          $a3, 0x1E($s3)
    ctx->r7 = MEM_H(ctx->r19, 0X1E);
    // 0x00424930: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x00424934: lwc1        $f0, 0x10($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X10);
    // 0x00424938: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042493C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00424940: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x00424944: lw          $a0, 0x14($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X14);
    // 0x00424948: jal         0x0027B320
    // 0x0042494C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_0027B320(rdram, ctx);
        goto after_2;
    // 0x0042494C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_2:
    // 0x00424950: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x00424954: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x00424958: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0042495C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00424960: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00424964: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00424968: jr          $ra
    // 0x0042496C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0042496C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00453E18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041AE50:
    // 0x00453E18: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00453E1C: lw          $v1, 0x920($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X920);
    // 0x00453E20: sltiu       $v0, $v1, 0xC
    ctx->r2 = ctx->r3 < 0XC ? 1 : 0;
    // 0x00453E24: beq         $v0, $zero, L_00453E44
    if (ctx->r2 == 0) {
        // 0x00453E28: nop
    
            goto L_00453E44;
    }
    // 0x00453E28: nop

    // 0x00453E2C: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x00453E30: lui         $at, 0x44
    ctx->r1 = S32(0X44 << 16);
    // 0x00453E34: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00453E38: lw          $v0, -0x696C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X696C);
    // 0x00453E3C: j           L_0041AE50
    // 0x00453E40: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_0041AE50(rdram, ctx);
    return;
    // 0x00453E40: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00453E44:
    // 0x00453E44: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00453E48: addiu       $v0, $v0, 0x1144
    ctx->r2 = ADD32(ctx->r2, 0X1144);
    // 0x00453E4C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00453E50: jr          $ra
    // 0x00453E54: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00453E54: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_002657BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002657BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002657C0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002657C4: jal         0x00243414
    // 0x002657C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x002657C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x002657CC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002657D0: jr          $ra
    // 0x002657D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002657D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0045FD84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045FD84: jr          $ra
    // 0x0045FD88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x0045FD88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_00423BC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00423BC4: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00423BC8: lw          $v1, 0x9B0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X9B0);
    // 0x00423BCC: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x00423BD0: beq         $v0, $zero, L_00423BEC
    if (ctx->r2 == 0) {
        // 0x00423BD4: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00423BEC;
    }
    // 0x00423BD4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00423BD8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00423BDC: addu        $at, $at, $v0
    gpr jr_addend_00423BE4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00423BE0: lw          $v0, 0x16A0($at)
    ctx->r2 = ADD32(ctx->r1, 0X16A0);
    // 0x00423BE4: jr          $v0
    // 0x00423BE8: nop

    switch (jr_addend_00423BE4 >> 2) {
        case 0: goto L_00423BEC; break;
        case 1: goto L_00423BFC; break;
        case 2: goto L_00423C0C; break;
        case 3: goto L_00423C1C; break;
        case 4: goto L_00423C2C; break;
        default: switch_error(__func__, 0x00423BE4, 0x800C16A0);
    }
    // 0x00423BE8: nop

L_00423BEC:
    // 0x00423BEC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423BF0: addiu       $v0, $v0, 0x5154
    ctx->r2 = ADD32(ctx->r2, 0X5154);
    // 0x00423BF4: j           L_00423C38
    // 0x00423BF8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00423C38;
    // 0x00423BF8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00423BFC:
    // 0x00423BFC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423C00: addiu       $v0, $v0, 0x51B0
    ctx->r2 = ADD32(ctx->r2, 0X51B0);
    // 0x00423C04: j           L_00423C38
    // 0x00423C08: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00423C38;
    // 0x00423C08: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00423C0C:
    // 0x00423C0C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423C10: addiu       $v0, $v0, 0x51EC
    ctx->r2 = ADD32(ctx->r2, 0X51EC);
    // 0x00423C14: j           L_00423C38
    // 0x00423C18: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00423C38;
    // 0x00423C18: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00423C1C:
    // 0x00423C1C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423C20: addiu       $v0, $v0, 0x5240
    ctx->r2 = ADD32(ctx->r2, 0X5240);
    // 0x00423C24: j           L_00423C38
    // 0x00423C28: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00423C38;
    // 0x00423C28: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00423C2C:
    // 0x00423C2C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423C30: addiu       $v0, $v0, 0x529C
    ctx->r2 = ADD32(ctx->r2, 0X529C);
    // 0x00423C34: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00423C38:
    // 0x00423C38: jr          $ra
    // 0x00423C3C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00423C3C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_002982F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002982F0: swc1        $f12, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f12.u32l;
    // 0x002982F4: lw          $v0, 0x0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X0);
    // 0x002982F8: sra         $v1, $v0, 22
    ctx->r3 = S32(SIGNED(ctx->r2) >> 22);
    // 0x002982FC: andi        $v1, $v1, 0x1FF
    ctx->r3 = ctx->r3 & 0X1FF;
    // 0x00298300: slti        $v0, $v1, 0xFF
    ctx->r2 = SIGNED(ctx->r3) < 0XFF ? 1 : 0;
    // 0x00298304: beq         $v0, $zero, L_0029836C
    if (ctx->r2 == 0) {
            // 0x00298308: slti        $v0, $v1, 0xE6
    ctx->r2 = SIGNED(ctx->r3) < 0XE6 ? 1 : 0;
    func_0029836C(rdram, ctx);
    return;
    }
    // 0x00298308: slti        $v0, $v1, 0xE6
    ctx->r2 = SIGNED(ctx->r3) < 0XE6 ? 1 : 0;
    // 0x0029830C: bne         $v0, $zero, L_00298364
    if (ctx->r2 != 0) {
            // 0x00298310: nop

    func_00298364(rdram, ctx);
    return;
    }
    // 0x00298310: nop

    // 0x00298314: mul.s       $f3, $f12, $f12
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f3.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x00298318: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0029831C: addiu       $v0, $v0, -0x57D0
    ctx->r2 = ADD32(ctx->r2, -0X57D0);
    // 0x00298320: ldc1        $f1, 0x20($v0)
    CHECK_FR(ctx, 1);
    ctx->f1.u64 = LD(ctx->r2, 0X20);
    // 0x00298324: cvt.d.s     $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f3.fl); 
    ctx->f2.d = CVT_D_S(ctx->f3.fl);
    // 0x00298328: mul.d       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f2.d); 
    ctx->f1.d = MUL_D(ctx->f1.d, ctx->f2.d);
    // 0x0029832C: ldc1        $f0, 0x18($v0)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r2, 0X18);
    // 0x00298330: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x00298334: mul.d       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f2.d); 
    ctx->f1.d = MUL_D(ctx->f1.d, ctx->f2.d);
    // 0x00298338: ldc1        $f0, 0x10($v0)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r2, 0X10);
    // 0x0029833C: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x00298340: mul.d       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f2.d); 
    ctx->f1.d = MUL_D(ctx->f1.d, ctx->f2.d);
    // 0x00298344: nop

    // 0x00298348: mul.s       $f0, $f12, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f3.fl);
    // 0x0029834C: ldc1        $f2, 0x8($v0)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r2, 0X8);
    // 0x00298350: add.d       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f2.d); 
    ctx->f1.d = ctx->f1.d + ctx->f2.d;
    // 0x00298354: cvt.s.d     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f1.fl = CVT_S_D(ctx->f1.d);
    // 0x00298358: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0029835C: jr          $ra
    // 0x00298360: add.s       $f0, $f12, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f0.fl;
    return;
    // 0x00298360: add.s       $f0, $f12, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f0.fl;
;}
RECOMP_FUNC void func_0024C2A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0024C2A0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0024C2A4: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x0024C2A8: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x0024C2AC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0024C2B0: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x0024C2B4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x0024C2B8: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x0024C2BC: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0024C2C0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0024C2C4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0024C2C8: beq         $a1, $zero, L_0024C2F8
    if (ctx->r5 == 0) {
        // 0x0024C2CC: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_0024C2F8;
    }
    // 0x0024C2CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0024C2D0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0024C2D4: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0024C2D8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0024C2DC: addiu       $v1, $v1, -0x2338
    ctx->r3 = ADD32(ctx->r3, -0X2338);
    // 0x0024C2E0: beq         $v0, $zero, L_0024C318
    if (ctx->r2 == 0) {
        // 0x0024C2E4: sw          $zero, 0x38C($s5)
        MEM_W(0X38C, ctx->r21) = 0;
            goto L_0024C318;
    }
    // 0x0024C2E4: sw          $zero, 0x38C($s5)
    MEM_W(0X38C, ctx->r21) = 0;
    // 0x0024C2E8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0024C2EC: addiu       $v1, $v1, -0x22D8
    ctx->r3 = ADD32(ctx->r3, -0X22D8);
    // 0x0024C2F0: j           L_0024C318
    // 0x0024C2F4: nop

        goto L_0024C318;
    // 0x0024C2F4: nop

L_0024C2F8:
    // 0x0024C2F8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0024C2FC: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0024C300: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0024C304: addiu       $v1, $v1, -0x2318
    ctx->r3 = ADD32(ctx->r3, -0X2318);
    // 0x0024C308: beq         $v0, $zero, L_0024C318
    if (ctx->r2 == 0) {
        // 0x0024C30C: sw          $zero, 0x38C($s5)
        MEM_W(0X38C, ctx->r21) = 0;
            goto L_0024C318;
    }
    // 0x0024C30C: sw          $zero, 0x38C($s5)
    MEM_W(0X38C, ctx->r21) = 0;
    // 0x0024C310: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0024C314: addiu       $v1, $v1, -0x22B8
    ctx->r3 = ADD32(ctx->r3, -0X22B8);
L_0024C318:
    // 0x0024C318: lw          $v0, 0x140($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X140);
    // 0x0024C31C: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x0024C320: beq         $v0, $zero, L_0024C350
    if (ctx->r2 == 0) {
        // 0x0024C324: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_0024C350;
    }
    // 0x0024C324: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x0024C328: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0024C32C: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0024C330: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0024C334: addiu       $v1, $v1, -0x22F8
    ctx->r3 = ADD32(ctx->r3, -0X22F8);
    // 0x0024C338: beq         $v0, $zero, L_0024C348
    if (ctx->r2 == 0) {
        // 0x0024C33C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0024C348;
    }
    // 0x0024C33C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0024C340: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0024C344: addiu       $v1, $v1, -0x2298
    ctx->r3 = ADD32(ctx->r3, -0X2298);
L_0024C348:
    // 0x0024C348: sw          $v0, 0x38C($s5)
    MEM_W(0X38C, ctx->r21) = ctx->r2;
    // 0x0024C34C: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
L_0024C350:
    // 0x0024C350: addiu       $s6, $zero, -0x1
    ctx->r22 = ADD32(0, -0X1);
    // 0x0024C354: addu        $s1, $s5, $zero
    ctx->r17 = ADD32(ctx->r21, 0);
    // 0x0024C358: addu        $s4, $v1, $zero
    ctx->r20 = ADD32(ctx->r3, 0);
    // 0x0024C35C: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
    // 0x0024C360: sw          $a1, 0x384($s5)
    MEM_W(0X384, ctx->r21) = ctx->r5;
    // 0x0024C364: sw          $v0, 0x37C($s5)
    MEM_W(0X37C, ctx->r21) = ctx->r2;
L_0024C368:
    // 0x0024C368: lw          $s0, 0x0($s4)
    ctx->r16 = MEM_W(ctx->r20, 0X0);
    // 0x0024C36C: bne         $s0, $s6, L_0024C380
    if (ctx->r16 != ctx->r22) {
        // 0x0024C370: nop
    
            goto L_0024C380;
    }
    // 0x0024C370: nop

    // 0x0024C374: sw          $s0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r16;
    // 0x0024C378: j           L_0024C438
    // 0x0024C37C: sw          $zero, 0x24($s1)
    MEM_W(0X24, ctx->r17) = 0;
        goto L_0024C438;
    // 0x0024C37C: sw          $zero, 0x24($s1)
    MEM_W(0X24, ctx->r17) = 0;
L_0024C380:
    // 0x0024C380: lw          $v0, 0x140($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X140);
    // 0x0024C384: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x0024C388: bnel        $v0, $zero, L_0024C3C8
    if (ctx->r2 != 0) {
        // 0x0024C38C: sw          $s0, 0x1C($s1)
        MEM_W(0X1C, ctx->r17) = ctx->r16;
            goto L_0024C3C8;
    }
    goto skip_0;
    // 0x0024C38C: sw          $s0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r16;
    skip_0:
    // 0x0024C390: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x0024C394: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024C398: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0024C39C: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x0024C3A0: lh          $v1, 0xC($v0)
    ctx->r3 = MEM_H(ctx->r2, 0XC);
    // 0x0024C3A4: beq         $v1, $s6, L_0024C3C4
    if (ctx->r3 == ctx->r22) {
        // 0x0024C3A8: addu        $v0, $s3, $v1
        ctx->r2 = ADD32(ctx->r19, ctx->r3);
            goto L_0024C3C4;
    }
    // 0x0024C3A8: addu        $v0, $s3, $v1
    ctx->r2 = ADD32(ctx->r19, ctx->r3);
    // 0x0024C3AC: lb          $v0, 0x972($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X972);
    // 0x0024C3B0: beql        $v0, $zero, L_0024C3C8
    if (ctx->r2 == 0) {
        // 0x0024C3B4: sw          $s0, 0x1C($s1)
        MEM_W(0X1C, ctx->r17) = ctx->r16;
            goto L_0024C3C8;
    }
    goto skip_1;
    // 0x0024C3B4: sw          $s0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r16;
    skip_1:
    // 0x0024C3B8: lh          $v0, 0x996($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X996);
    // 0x0024C3BC: bnel        $v0, $v1, L_0024C3C4
    if (ctx->r2 != ctx->r3) {
        // 0x0024C3C0: addu        $s0, $v1, $zero
        ctx->r16 = ADD32(ctx->r3, 0);
            goto L_0024C3C4;
    }
    goto skip_2;
    // 0x0024C3C0: addu        $s0, $v1, $zero
    ctx->r16 = ADD32(ctx->r3, 0);
    skip_2:
L_0024C3C4:
    // 0x0024C3C4: sw          $s0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r16;
L_0024C3C8:
    // 0x0024C3C8: lh          $v0, 0x996($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X996);
    // 0x0024C3CC: beql        $v0, $s0, L_0024C3D4
    if (ctx->r2 == ctx->r16) {
        // 0x0024C3D0: sw          $s2, 0x37C($s5)
        MEM_W(0X37C, ctx->r21) = ctx->r18;
            goto L_0024C3D4;
    }
    goto skip_3;
    // 0x0024C3D0: sw          $s2, 0x37C($s5)
    MEM_W(0X37C, ctx->r21) = ctx->r18;
    skip_3:
L_0024C3D4:
    // 0x0024C3D4: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x0024C3D8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0024C3DC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024C3E0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0024C3E4: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x0024C3E8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0024C3EC: jal         0x0024E700
    // 0x0024C3F0: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    func_0024E700(rdram, ctx);
        goto after_0;
    // 0x0024C3F0: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    after_0:
    // 0x0024C3F4: beq         $v0, $zero, L_0024C408
    if (ctx->r2 == 0) {
        // 0x0024C3F8: addu        $v0, $s3, $s0
        ctx->r2 = ADD32(ctx->r19, ctx->r16);
            goto L_0024C408;
    }
    // 0x0024C3F8: addu        $v0, $s3, $s0
    ctx->r2 = ADD32(ctx->r19, ctx->r16);
    // 0x0024C3FC: lb          $v0, 0x972($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X972);
    // 0x0024C400: bne         $v0, $zero, L_0024C40C
    if (ctx->r2 != 0) {
        // 0x0024C404: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0024C40C;
    }
    // 0x0024C404: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0024C408:
    // 0x0024C408: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0024C40C:
    // 0x0024C40C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024C410: lwc1        $f0, 0x6C6C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6C6C);
    // 0x0024C414: mtc1        $s2, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r18;
    // 0x0024C418: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0024C41C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0024C420: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024C424: lwc1        $f0, -0x1D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X1D28);
    // 0x0024C428: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    // 0x0024C42C: sw          $zero, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = 0;
    // 0x0024C430: swc1        $f0, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->f0.u32l;
    // 0x0024C434: swc1        $f1, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
L_0024C438:
    // 0x0024C438: addiu       $s1, $s1, 0x18
    ctx->r17 = ADD32(ctx->r17, 0X18);
    // 0x0024C43C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x0024C440: slti        $v0, $s2, 0x8
    ctx->r2 = SIGNED(ctx->r18) < 0X8 ? 1 : 0;
    // 0x0024C444: bne         $v0, $zero, L_0024C368
    if (ctx->r2 != 0) {
        // 0x0024C448: addiu       $s4, $s4, 0x4
        ctx->r20 = ADD32(ctx->r20, 0X4);
            goto L_0024C368;
    }
    // 0x0024C448: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x0024C44C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0024C450: sw          $v0, 0x380($s5)
    MEM_W(0X380, ctx->r21) = ctx->r2;
    // 0x0024C454: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x0024C458: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x0024C45C: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0024C460: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0024C464: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0024C468: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0024C46C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0024C470: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0024C474: jr          $ra
    // 0x0024C478: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0024C478: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00421260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00421260: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00421264: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00421268: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0042126C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00421270: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00421274: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00421278: jal         0x00426D8C
    // 0x0042127C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426D8C(rdram, ctx);
        goto after_0;
    // 0x0042127C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00421280: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x00421284: bne         $v0, $v1, L_004212D8
    if (ctx->r2 != ctx->r3) {
        // 0x00421288: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_004212D8;
    }
    // 0x00421288: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0042128C: jal         0x00426D8C
    // 0x00421290: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00426D8C(rdram, ctx);
        goto after_1;
    // 0x00421290: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x00421294: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x00421298: bne         $v0, $v1, L_004212D8
    if (ctx->r2 != ctx->r3) {
        // 0x0042129C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_004212D8;
    }
    // 0x0042129C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x004212A0: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x004212A4: addiu       $a1, $a1, 0x45D8
    ctx->r5 = ADD32(ctx->r5, 0X45D8);
    // 0x004212A8: jal         0x00426D54
    // 0x004212AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426D54(rdram, ctx);
        goto after_2;
    // 0x004212AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x004212B0: bnel        $v0, $zero, L_004212D8
    if (ctx->r2 != 0) {
        // 0x004212B4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_004212D8;
    }
    goto skip_0;
    // 0x004212B4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x004212B8: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x004212BC: addiu       $a1, $a1, 0x45D4
    ctx->r5 = ADD32(ctx->r5, 0X45D4);
    // 0x004212C0: jal         0x00426D54
    // 0x004212C4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00426D54(rdram, ctx);
        goto after_3;
    // 0x004212C4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x004212C8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x004212CC: beq         $v1, $zero, L_004212D8
    if (ctx->r3 == 0) {
        // 0x004212D0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_004212D8;
    }
    // 0x004212D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004212D4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_004212D8:
    // 0x004212D8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x004212DC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x004212E0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004212E4: jr          $ra
    // 0x004212E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x004212E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00264994(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00264994: lw          $v0, 0x1CE0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1CE0);
    // 0x00264998: beq         $v0, $zero, L_002649DC
    if (ctx->r2 == 0) {
        // 0x0026499C: lui         $v1, 0x100
        ctx->r3 = S32(0X100 << 16);
            goto L_002649DC;
    }
    // 0x0026499C: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x002649A0: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x002649A4: sw          $s0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r16;
    // 0x002649A8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002649AC: sw          $s1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r17;
    // 0x002649B0: sw          $ra, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r31;
    // 0x002649B4: sw          $s2, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r18;
    // 0x002649B8: sdc1        $f21, 0xC8($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0XC8, ctx->r29);
    // 0x002649BC: sdc1        $f20, 0xC0($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XC0, ctx->r29);
    // 0x002649C0: jal         0x002671B4
    // 0x002649C4: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    func_002671B4(rdram, ctx);
        goto after_0;
    // 0x002649C4: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    after_0:
    // 0x002649C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002649CC: lwc1        $f21, 0x7C40($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X7C40);
    // 0x002649D0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x002649D4: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x002649D8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
L_002649DC:
    // 0x002649DC: addiu       $s2, $sp, 0x50
    ctx->r18 = ADD32(ctx->r29, 0X50);
    // 0x002649E0: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x002649E4: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x002649E8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x002649EC: jal         0x0020FC24
    // 0x002649F0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_0020FC24(rdram, ctx);
        goto after_1;
    // 0x002649F0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x002649F4: lwc1        $f0, 0x114($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X114);
    // 0x002649F8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x002649FC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x00264A00: jal         0x00210968
    // 0x00264A04: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00210968(rdram, ctx);
        goto after_2;
    // 0x00264A04: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_2:
    // 0x00264A08: lw          $a1, 0x110($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X110);
    // 0x00264A0C: jal         0x00210790
    // 0x00264A10: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00210790(rdram, ctx);
        goto after_3;
    // 0x00264A10: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
    // 0x00264A14: lw          $a1, 0x114($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X114);
    // 0x00264A18: jal         0x00210968
    // 0x00264A1C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00210968(rdram, ctx);
        goto after_4;
    // 0x00264A1C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_4:
    // 0x00264A20: jal         0x002671B4
    // 0x00264A24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002671B4(rdram, ctx);
        goto after_5;
    // 0x00264A24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x00264A28: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x00264A2C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x00264A30: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x00264A34: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x00264A38: jal         0x00210318
    // 0x00264A3C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00210318(rdram, ctx);
        goto after_6;
    // 0x00264A3C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_6:
    // 0x00264A40: lwc1        $f12, 0x50($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X50);
    // 0x00264A44: mul.s       $f12, $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f21.fl);
    // 0x00264A48: jal         0x002982F0
    // 0x00264A4C: nop

    func_002982F0(rdram, ctx);
        goto after_7;
    // 0x00264A4C: nop

    after_7:
    // 0x00264A50: swc1        $f20, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f20.u32l;
    // 0x00264A54: swc1        $f0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f0.u32l;
    // 0x00264A58: swc1        $f20, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f20.u32l;
    // 0x00264A5C: lwc1        $f12, 0x50($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X50);
    // 0x00264A60: mul.s       $f12, $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f21.fl);
    // 0x00264A64: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00264A68: swc1        $f0, -0x2874($at)
    MEM_W(-0X2874, ctx->r1) = ctx->f0.u32l;
    // 0x00264A6C: jal         0x002974C0
    // 0x00264A70: nop

    func_002974C0(rdram, ctx);
        goto after_8;
    // 0x00264A70: nop

    after_8:
    // 0x00264A74: addiu       $s1, $sp, 0xA0
    ctx->r17 = ADD32(ctx->r29, 0XA0);
    // 0x00264A78: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00264A7C: addiu       $a1, $sp, 0x90
    ctx->r5 = ADD32(ctx->r29, 0X90);
    // 0x00264A80: addiu       $a2, $s0, 0x40
    ctx->r6 = ADD32(ctx->r16, 0X40);
    // 0x00264A84: jal         0x00210F68
    // 0x00264A88: swc1        $f0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f0.u32l;
    func_00210F68(rdram, ctx);
        goto after_9;
    // 0x00264A88: swc1        $f0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f0.u32l;
    after_9:
    // 0x00264A8C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00264A90: jal         0x00211114
    // 0x00264A94: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_00211114(rdram, ctx);
        goto after_10;
    // 0x00264A94: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_10:
    // 0x00264A98: addiu       $s1, $s0, 0x58
    ctx->r17 = ADD32(ctx->r16, 0X58);
    // 0x00264A9C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00264AA0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00264AA4: jal         0x0020C618
    // 0x00264AA8: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    func_0020C618(rdram, ctx);
        goto after_11;
    // 0x00264AA8: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    after_11:
    // 0x00264AAC: lw          $a1, 0x34($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X34);
    // 0x00264AB0: lw          $a2, 0x38($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X38);
    // 0x00264AB4: lw          $a3, 0x3C($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X3C);
    // 0x00264AB8: jal         0x0021034C
    // 0x00264ABC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0021034C(rdram, ctx);
        goto after_12;
    // 0x00264ABC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_12:
    // 0x00264AC0: lui         $a1, 0x469C
    ctx->r5 = S32(0X469C << 16);
    // 0x00264AC4: ori         $a1, $a1, 0x4000
    ctx->r5 = ctx->r5 | 0X4000;
    // 0x00264AC8: jal         0x0020F510
    // 0x00264ACC: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    func_0020F510(rdram, ctx);
        goto after_13;
    // 0x00264ACC: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    after_13:
    // 0x00264AD0: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x00264AD4: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x00264AD8: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x00264ADC: jal         0x00210318
    // 0x00264AE0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00210318(rdram, ctx);
        goto after_14;
    // 0x00264AE0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_14:
    // 0x00264AE4: jal         0x00210C3C
    // 0x00264AE8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00210C3C(rdram, ctx);
        goto after_15;
    // 0x00264AE8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_15:
    // 0x00264AEC: lw          $ra, 0xBC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XBC);
    // 0x00264AF0: lw          $s2, 0xB8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XB8);
    // 0x00264AF4: lw          $s1, 0xB4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XB4);
    // 0x00264AF8: lw          $s0, 0xB0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XB0);
    // 0x00264AFC: ldc1        $f21, 0xC8($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0XC8);
    // 0x00264B00: ldc1        $f20, 0xC0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XC0);
    // 0x00264B04: jr          $ra
    // 0x00264B08: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x00264B08: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void func_0041C090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041C090: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0041C094: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x0041C098: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0041C09C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0041C0A0: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x0041C0A4: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x0041C0A8: addiu       $s0, $s0, -0x54E8
    ctx->r16 = ADD32(ctx->r16, -0X54E8);
    // 0x0041C0AC: beql        $v0, $zero, L_0041C0C4
    if (ctx->r2 == 0) {
        // 0x0041C0B0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0041C0C4;
    }
    goto skip_0;
    // 0x0041C0B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x0041C0B4: lw          $v0, 0x518($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X518);
    // 0x0041C0B8: bnel        $v0, $zero, L_0041C0C0
    if (ctx->r2 != 0) {
        // 0x0041C0BC: addu        $s0, $v0, $zero
        ctx->r16 = ADD32(ctx->r2, 0);
            goto L_0041C0C0;
    }
    goto skip_1;
    // 0x0041C0BC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    skip_1:
L_0041C0C0:
    // 0x0041C0C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0041C0C4:
    // 0x0041C0C4: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x0041C0C8: lbu         $a1, 0x2D($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X2D);
    // 0x0041C0CC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0041C0D0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041C0D4: jal         0x0041648C
    // 0x0041C0D8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x0041C0D8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_0:
    // 0x0041C0DC: sb          $v0, 0x2D($s0)
    MEM_B(0X2D, ctx->r16) = ctx->r2;
    // 0x0041C0E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0041C0E4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0041C0E8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041C0EC: jr          $ra
    // 0x0041C0F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041C0F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00421880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00421880: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x00421884: lw          $v0, 0xB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XB0);
    // 0x00421888: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x0042188C: beq         $v0, $zero, L_004218B4
    if (ctx->r2 == 0) {
        // 0x00421890: nop
    
            goto L_004218B4;
    }
    // 0x00421890: nop

    // 0x00421894: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00421898: lw          $v0, 0x202C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X202C);
    // 0x0042189C: bne         $v0, $zero, L_004218B4
    if (ctx->r2 != 0) {
        // 0x004218A0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_004218B4;
    }
    // 0x004218A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004218A4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x004218A8: sw          $v0, -0x4EF8($at)
    MEM_W(-0X4EF8, ctx->r1) = ctx->r2;
    // 0x004218AC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004218B0: sw          $v0, 0x202C($at)
    MEM_W(0X202C, ctx->r1) = ctx->r2;
L_004218B4:
    // 0x004218B4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x004218B8: lw          $v0, -0x4EF8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4EF8);
    // 0x004218BC: jr          $ra
    // 0x004218C0: nop

    return;
    // 0x004218C0: nop

;}
RECOMP_FUNC void func_00408FF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00408FF8: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x00408FFC: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    // 0x00409000: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00409004: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x00409008: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x0040900C: addu        $t1, $a2, $zero
    ctx->r9 = ADD32(ctx->r6, 0);
    // 0x00409010: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x00409014: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00409018: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0040901C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00409020: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00409024: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00409028: lw          $v0, 0x10($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X10);
    // 0x0040902C: beq         $v0, $zero, L_0040931C
    if (ctx->r2 == 0) {
        // 0x00409030: addu        $s4, $a1, $zero
        ctx->r20 = ADD32(ctx->r5, 0);
            goto L_0040931C;
    }
    // 0x00409030: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x00409034: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00409038: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x0040903C: lui         $s3, 0x8013
    ctx->r19 = S32(0X8013 << 16);
    // 0x00409040: addiu       $s3, $s3, -0x490
    ctx->r19 = ADD32(ctx->r19, -0X490);
    // 0x00409044: lw          $v1, 0x660($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X660);
    // 0x00409048: lw          $v0, 0x6C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6C);
    // 0x0040904C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x00409050: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
L_00409054:
    // 0x00409054: bgez        $a3, L_00409078
    if (SIGNED(ctx->r7) >= 0) {
        // 0x00409058: sllv        $a1, $t0, $a0
        ctx->r5 = S32(ctx->r8 << (ctx->r4 & 31));
            goto L_00409078;
    }
    // 0x00409058: sllv        $a1, $t0, $a0
    ctx->r5 = S32(ctx->r8 << (ctx->r4 & 31));
    // 0x0040905C: and         $v0, $a1, $v1
    ctx->r2 = ctx->r5 & ctx->r3;
    // 0x00409060: bnel        $v0, $zero, L_00409068
    if (ctx->r2 != 0) {
        // 0x00409064: addu        $a3, $a0, $zero
        ctx->r7 = ADD32(ctx->r4, 0);
            goto L_00409068;
    }
    goto skip_0;
    // 0x00409064: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    skip_0:
L_00409068:
    // 0x00409068: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0040906C: slti        $v0, $a0, 0xF
    ctx->r2 = SIGNED(ctx->r4) < 0XF ? 1 : 0;
    // 0x00409070: bne         $v0, $zero, L_00409054
    if (ctx->r2 != 0) {
        // 0x00409074: nop
    
            goto L_00409054;
    }
    // 0x00409074: nop

L_00409078:
    // 0x00409078: addiu       $v1, $a3, -0xA
    ctx->r3 = ADD32(ctx->r7, -0XA);
    // 0x0040907C: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x00409080: beq         $v0, $zero, L_0040931C
    if (ctx->r2 == 0) {
        // 0x00409084: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_0040931C;
    }
    // 0x00409084: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00409088: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040908C: addu        $at, $at, $v0
    gpr jr_addend_00409094 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00409090: lw          $v0, 0x5C0($at)
    ctx->r2 = ADD32(ctx->r1, 0X5C0);
    // 0x00409094: jr          $v0
    // 0x00409098: nop

    switch (jr_addend_00409094 >> 2) {
        case 0: goto L_0040909C; break;
        case 1: goto L_0040909C; break;
        case 2: goto L_004090A8; break;
        case 3: goto L_004090B4; break;
        case 4: goto L_004090A8; break;
        default: switch_error(__func__, 0x00409094, 0x800C05C0);
    }
    // 0x00409098: nop

L_0040909C:
    // 0x0040909C: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x004090A0: j           L_004090BC
    // 0x004090A4: addiu       $a2, $zero, 0xC00
    ctx->r6 = ADD32(0, 0XC00);
        goto L_004090BC;
    // 0x004090A4: addiu       $a2, $zero, 0xC00
    ctx->r6 = ADD32(0, 0XC00);
L_004090A8:
    // 0x004090A8: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x004090AC: j           L_004090BC
    // 0x004090B0: addiu       $a2, $zero, 0x5000
    ctx->r6 = ADD32(0, 0X5000);
        goto L_004090BC;
    // 0x004090B0: addiu       $a2, $zero, 0x5000
    ctx->r6 = ADD32(0, 0X5000);
L_004090B4:
    // 0x004090B4: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
    // 0x004090B8: addiu       $a2, $zero, 0x2000
    ctx->r6 = ADD32(0, 0X2000);
L_004090BC:
    // 0x004090BC: lw          $v1, 0x65C($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X65C);
    // 0x004090C0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x004090C4: beq         $v1, $a0, L_00409180
    if (ctx->r3 == ctx->r4) {
        // 0x004090C8: addiu       $s1, $zero, -0x1
        ctx->r17 = ADD32(0, -0X1);
            goto L_00409180;
    }
    // 0x004090C8: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x004090CC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x004090D0: beq         $v0, $zero, L_004090E8
    if (ctx->r2 == 0) {
        // 0x004090D4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_004090E8;
    }
    // 0x004090D4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x004090D8: beq         $v1, $zero, L_004090F8
    if (ctx->r3 == 0) {
        // 0x004090DC: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_004090F8;
    }
    // 0x004090DC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x004090E0: j           L_004091D0
    // 0x004090E4: nop

        goto L_004091D0;
    // 0x004090E4: nop

L_004090E8:
    // 0x004090E8: beq         $v1, $v0, L_004091B8
    if (ctx->r3 == ctx->r2) {
        // 0x004090EC: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_004091B8;
    }
    // 0x004090EC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x004090F0: j           L_004091D0
    // 0x004090F4: nop

        goto L_004091D0;
    // 0x004090F4: nop

L_004090F8:
    // 0x004090F8: bne         $s2, $zero, L_0040913C
    if (ctx->r18 != 0) {
        // 0x004090FC: nop
    
            goto L_0040913C;
    }
    // 0x004090FC: nop

    // 0x00409100: lw          $v0, 0xE8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XE8);
    // 0x00409104: blez        $v0, L_00409114
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00409108: nop
    
            goto L_00409114;
    }
    // 0x00409108: nop

    // 0x0040910C: j           L_004091CC
    // 0x00409110: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_004091CC;
    // 0x00409110: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_00409114:
    // 0x00409114: lw          $v0, 0x150($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X150);
    // 0x00409118: blez        $v0, L_00409128
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040911C: nop
    
            goto L_00409128;
    }
    // 0x0040911C: nop

    // 0x00409120: j           L_004091CC
    // 0x00409124: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
        goto L_004091CC;
    // 0x00409124: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
L_00409128:
    // 0x00409128: lw          $v0, 0x1B8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X1B8);
    // 0x0040912C: bgtzl       $v0, L_004091CC
    if (SIGNED(ctx->r2) > 0) {
        // 0x00409130: addiu       $s1, $zero, 0x4
        ctx->r17 = ADD32(0, 0X4);
            goto L_004091CC;
    }
    goto skip_1;
    // 0x00409130: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
    skip_1:
    // 0x00409134: j           L_004091D0
    // 0x00409138: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_004091D0;
    // 0x00409138: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_0040913C:
    // 0x0040913C: bne         $s2, $a0, L_004091D0
    if (ctx->r18 != ctx->r4) {
        // 0x00409140: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_004091D0;
    }
    // 0x00409140: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00409144: lw          $v0, 0x288($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X288);
    // 0x00409148: blez        $v0, L_00409158
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040914C: nop
    
            goto L_00409158;
    }
    // 0x0040914C: nop

    // 0x00409150: j           L_004091CC
    // 0x00409154: addiu       $s1, $zero, 0x6
    ctx->r17 = ADD32(0, 0X6);
        goto L_004091CC;
    // 0x00409154: addiu       $s1, $zero, 0x6
    ctx->r17 = ADD32(0, 0X6);
L_00409158:
    // 0x00409158: lw          $v0, 0x2F0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X2F0);
    // 0x0040915C: blez        $v0, L_0040916C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00409160: nop
    
            goto L_0040916C;
    }
    // 0x00409160: nop

    // 0x00409164: j           L_004091CC
    // 0x00409168: addiu       $s1, $zero, 0x7
    ctx->r17 = ADD32(0, 0X7);
        goto L_004091CC;
    // 0x00409168: addiu       $s1, $zero, 0x7
    ctx->r17 = ADD32(0, 0X7);
L_0040916C:
    // 0x0040916C: lw          $v0, 0x358($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X358);
    // 0x00409170: bgtzl       $v0, L_004091CC
    if (SIGNED(ctx->r2) > 0) {
        // 0x00409174: addiu       $s1, $zero, 0x8
        ctx->r17 = ADD32(0, 0X8);
            goto L_004091CC;
    }
    goto skip_2;
    // 0x00409174: addiu       $s1, $zero, 0x8
    ctx->r17 = ADD32(0, 0X8);
    skip_2:
    // 0x00409178: j           L_004091D0
    // 0x0040917C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_004091D0;
    // 0x0040917C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_00409180:
    // 0x00409180: bne         $s2, $zero, L_0040919C
    if (ctx->r18 != 0) {
        // 0x00409184: nop
    
            goto L_0040919C;
    }
    // 0x00409184: nop

    // 0x00409188: lw          $v0, 0x80($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X80);
    // 0x0040918C: bgtzl       $v0, L_004091CC
    if (SIGNED(ctx->r2) > 0) {
        // 0x00409190: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_004091CC;
    }
    goto skip_3;
    // 0x00409190: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    skip_3:
    // 0x00409194: j           L_004091D0
    // 0x00409198: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_004091D0;
    // 0x00409198: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_0040919C:
    // 0x0040919C: bne         $s2, $v1, L_004091D0
    if (ctx->r18 != ctx->r3) {
        // 0x004091A0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_004091D0;
    }
    // 0x004091A0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x004091A4: lw          $v0, 0x220($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X220);
    // 0x004091A8: bgtzl       $v0, L_004091CC
    if (SIGNED(ctx->r2) > 0) {
        // 0x004091AC: addiu       $s1, $zero, 0x5
        ctx->r17 = ADD32(0, 0X5);
            goto L_004091CC;
    }
    goto skip_4;
    // 0x004091AC: addiu       $s1, $zero, 0x5
    ctx->r17 = ADD32(0, 0X5);
    skip_4:
    // 0x004091B0: j           L_004091D0
    // 0x004091B4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_004091D0;
    // 0x004091B4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_004091B8:
    // 0x004091B8: bne         $s2, $v1, L_004091D0
    if (ctx->r18 != ctx->r3) {
        // 0x004091BC: nop
    
            goto L_004091D0;
    }
    // 0x004091BC: nop

    // 0x004091C0: lw          $v0, 0x560($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X560);
    // 0x004091C4: bgtzl       $v0, L_004091CC
    if (SIGNED(ctx->r2) > 0) {
        // 0x004091C8: addiu       $s1, $zero, 0xD
        ctx->r17 = ADD32(0, 0XD);
            goto L_004091CC;
    }
    goto skip_5;
    // 0x004091C8: addiu       $s1, $zero, 0xD
    ctx->r17 = ADD32(0, 0XD);
    skip_5:
L_004091CC:
    // 0x004091CC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_004091D0:
    // 0x004091D0: beq         $s1, $v0, L_0040931C
    if (ctx->r17 == ctx->r2) {
        // 0x004091D4: sll         $v0, $s1, 1
        ctx->r2 = S32(ctx->r17 << 1);
            goto L_0040931C;
    }
    // 0x004091D4: sll         $v0, $s1, 1
    ctx->r2 = S32(ctx->r17 << 1);
    // 0x004091D8: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x004091DC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x004091E0: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x004091E4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x004091E8: addu        $s0, $s3, $v0
    ctx->r16 = ADD32(ctx->r19, ctx->r2);
    // 0x004091EC: lw          $v0, 0x4($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X4);
    // 0x004091F0: lw          $v1, 0x18($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X18);
    // 0x004091F4: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x004091F8: slt         $v0, $v1, $a3
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x004091FC: bnel        $v0, $zero, L_00409204
    if (ctx->r2 != 0) {
        // 0x00409200: addu        $a3, $v1, $zero
        ctx->r7 = ADD32(ctx->r3, 0);
            goto L_00409204;
    }
    goto skip_6;
    // 0x00409200: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
    skip_6:
L_00409204:
    // 0x00409204: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x00409208: subu        $v0, $v1, $a3
    ctx->r2 = SUB32(ctx->r3, ctx->r7);
    // 0x0040920C: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x00409210: lw          $v0, 0x678($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X678);
    // 0x00409214: lui         $a1, 0x43
    ctx->r5 = S32(0X43 << 16);
    // 0x00409218: addiu       $a1, $a1, 0x1E54
    ctx->r5 = ADD32(ctx->r5, 0X1E54);
    // 0x0040921C: subu        $v0, $v0, $a3
    ctx->r2 = SUB32(ctx->r2, ctx->r7);
    // 0x00409220: jal         0x0040BDD0
    // 0x00409224: sw          $v0, 0x678($s3)
    MEM_W(0X678, ctx->r19) = ctx->r2;
    func_0040BDD0(rdram, ctx);
        goto after_0;
    // 0x00409224: sw          $v0, 0x678($s3)
    MEM_W(0X678, ctx->r19) = ctx->r2;
    after_0:
    // 0x00409228: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x0040922C: bgtz        $v0, L_0040931C
    if (SIGNED(ctx->r2) > 0) {
        // 0x00409230: nop
    
            goto L_0040931C;
    }
    // 0x00409230: nop

    // 0x00409234: lw          $v0, 0x65C($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X65C);
    // 0x00409238: bne         $v0, $zero, L_0040928C
    if (ctx->r2 != 0) {
        // 0x0040923C: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_0040928C;
    }
    // 0x0040923C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x00409240: lw          $v0, 0x670($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X670);
    // 0x00409244: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00409248: beq         $s2, $zero, L_00409264
    if (ctx->r18 == 0) {
        // 0x0040924C: sw          $v0, 0x670($s3)
        MEM_W(0X670, ctx->r19) = ctx->r2;
            goto L_00409264;
    }
    // 0x0040924C: sw          $v0, 0x670($s3)
    MEM_W(0X670, ctx->r19) = ctx->r2;
    // 0x00409250: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00409254: beql        $s2, $v0, L_00409274
    if (ctx->r18 == ctx->r2) {
        // 0x00409258: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_00409274;
    }
    goto skip_7;
    // 0x00409258: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    skip_7:
    // 0x0040925C: j           L_00409288
    // 0x00409260: nop

        goto L_00409288;
    // 0x00409260: nop

L_00409264:
    // 0x00409264: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x00409268: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x0040926C: j           L_0040927C
    // 0x00409270: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
        goto L_0040927C;
    // 0x00409270: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
L_00409274:
    // 0x00409274: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00409278: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
L_0040927C:
    // 0x0040927C: jal         0x00243414
    // 0x00409280: nop

    func_00243414(rdram, ctx);
        goto after_1;
    // 0x00409280: nop

    after_1:
    // 0x00409284: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_00409288:
    // 0x00409288: lw          $v0, 0x65C($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X65C);
L_0040928C:
    // 0x0040928C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x00409290: beq         $v0, $a2, L_004092A8
    if (ctx->r2 == ctx->r6) {
        // 0x00409294: sllv        $a1, $a0, $s1
        ctx->r5 = S32(ctx->r4 << (ctx->r17 & 31));
            goto L_004092A8;
    }
    // 0x00409294: sllv        $a1, $a0, $s1
    ctx->r5 = S32(ctx->r4 << (ctx->r17 & 31));
    // 0x00409298: lw          $v0, 0xC($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XC);
    // 0x0040929C: nor         $v1, $zero, $a1
    ctx->r3 = ~(0 | ctx->r5);
    // 0x004092A0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x004092A4: sw          $v0, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r2;
L_004092A8:
    // 0x004092A8: lw          $v0, 0x664($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X664);
    // 0x004092AC: nor         $v1, $zero, $a1
    ctx->r3 = ~(0 | ctx->r5);
    // 0x004092B0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x004092B4: bne         $v0, $zero, L_0040931C
    if (ctx->r2 != 0) {
        // 0x004092B8: sw          $v0, 0x664($s3)
        MEM_W(0X664, ctx->r19) = ctx->r2;
            goto L_0040931C;
    }
    // 0x004092B8: sw          $v0, 0x664($s3)
    MEM_W(0X664, ctx->r19) = ctx->r2;
    // 0x004092BC: lw          $v1, 0x65C($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X65C);
    // 0x004092C0: beq         $v1, $a0, L_004092FC
    if (ctx->r3 == ctx->r4) {
        // 0x004092C4: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_004092FC;
    }
    // 0x004092C4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x004092C8: beq         $v0, $zero, L_004092E0
    if (ctx->r2 == 0) {
        // 0x004092CC: nop
    
            goto L_004092E0;
    }
    // 0x004092CC: nop

    // 0x004092D0: beq         $v1, $zero, L_004092F0
    if (ctx->r3 == 0) {
        // 0x004092D4: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_004092F0;
    }
    // 0x004092D4: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x004092D8: j           L_0040931C
    // 0x004092DC: nop

        goto L_0040931C;
    // 0x004092DC: nop

L_004092E0:
    // 0x004092E0: beq         $v1, $a2, L_0040930C
    if (ctx->r3 == ctx->r6) {
        // 0x004092E4: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_0040930C;
    }
    // 0x004092E4: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x004092E8: j           L_0040931C
    // 0x004092EC: nop

        goto L_0040931C;
    // 0x004092EC: nop

L_004092F0:
    // 0x004092F0: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x004092F4: j           L_00409314
    // 0x004092F8: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
        goto L_00409314;
    // 0x004092F8: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
L_004092FC:
    // 0x004092FC: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x00409300: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00409304: j           L_00409314
    // 0x00409308: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
        goto L_00409314;
    // 0x00409308: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
L_0040930C:
    // 0x0040930C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00409310: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
L_00409314:
    // 0x00409314: jal         0x00243414
    // 0x00409318: nop

    func_00243414(rdram, ctx);
        goto after_2;
    // 0x00409318: nop

    after_2:
L_0040931C:
    // 0x0040931C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00409320: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x00409324: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00409328: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0040932C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00409330: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00409334: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00409338: jr          $ra
    // 0x0040933C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0040933C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00275A08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00275A08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00275A0C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00275A10: addiu       $a0, $a0, 0x2A00
    ctx->r4 = ADD32(ctx->r4, 0X2A00);
    // 0x00275A14: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00275A18: jal         0x002718A0
    // 0x00275A1C: nop

    func_002718A0(rdram, ctx);
        goto after_0;
    // 0x00275A1C: nop

    after_0:
    // 0x00275A20: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00275A24: jr          $ra
    // 0x00275A28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00275A28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00200818(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00200818: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0020081C: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x00200820: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x00200824: beq         $a2, $zero, L_00200840
    if (ctx->r6 == 0) {
        // 0x00200828: nop
    
            goto L_00200840;
    }
    // 0x00200828: nop

    // 0x0020082C: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x00200830: addu        $v1, $a1, $v0
    ctx->r3 = ADD32(ctx->r5, ctx->r2);
    // 0x00200834: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x00200838: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x0020083C: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
L_00200840:
    // 0x00200840: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x00200844: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x00200848: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x0020084C: beq         $a2, $zero, L_00200868
    if (ctx->r6 == 0) {
        // 0x00200850: nop
    
            goto L_00200868;
    }
    // 0x00200850: nop

    // 0x00200854: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00200858: addu        $v1, $a1, $v0
    ctx->r3 = ADD32(ctx->r5, ctx->r2);
    // 0x0020085C: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x00200860: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x00200864: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
L_00200868:
    // 0x00200868: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0020086C: bne         $v0, $a1, L_00200884
    if (ctx->r2 != ctx->r5) {
        // 0x00200870: nop
    
            goto L_00200884;
    }
    // 0x00200870: nop

    // 0x00200874: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x00200878: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x0020087C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00200880: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
L_00200884:
    // 0x00200884: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00200888: bne         $v0, $a1, L_002008A0
    if (ctx->r2 != ctx->r5) {
        // 0x0020088C: nop
    
            goto L_002008A0;
    }
    // 0x0020088C: nop

    // 0x00200890: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00200894: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x00200898: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0020089C: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
L_002008A0:
    // 0x002008A0: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x002008A4: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x002008A8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x002008AC: beq         $v1, $zero, L_002008D4
    if (ctx->r3 == 0) {
        // 0x002008B0: sw          $v0, 0x10($a0)
        MEM_W(0X10, ctx->r4) = ctx->r2;
            goto L_002008D4;
    }
    // 0x002008B0: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
    // 0x002008B4: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x002008B8: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x002008BC: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x002008C0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x002008C4: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x002008C8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x002008CC: j           L_002008E4
    // 0x002008D0: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
        goto L_002008E4;
    // 0x002008D0: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
L_002008D4:
    // 0x002008D4: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x002008D8: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x002008DC: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x002008E0: sw          $a1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r5;
L_002008E4:
    // 0x002008E4: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x002008E8: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x002008EC: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x002008F0: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x002008F4: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x002008F8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x002008FC: jr          $ra
    // 0x00200900: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
    return;
    // 0x00200900: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_004543F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041B424:
    // 0x004543F4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
L_0041B458:
    // 0x004543F8: lw          $v0, -0x5524($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5524);
    // 0x004543FC: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x00454400: beq         $v0, $zero, L_00454414
    if (ctx->r2 == 0) {
        // 0x00454404: lui         $v1, 0x100
        ctx->r3 = S32(0X100 << 16);
            goto L_00454414;
    }
    // 0x00454404: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x00454408: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0045440C: j           L_0041B424
    // 0x00454410: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    entry_0041B424(rdram, ctx);
    return;
    // 0x00454410: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
L_00454414:
    // 0x00454414: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x00454418: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0045441C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00454420: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00454424: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x00454428: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0045442C: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x00454430: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x00454434: beq         $v0, $zero, L_0045444C
    if (ctx->r2 == 0) {
        // 0x00454438: nop
    
            goto L_0045444C;
    }
    // 0x00454438: nop

    // 0x0045443C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00454440: addiu       $v0, $v0, 0x58C4
    ctx->r2 = ADD32(ctx->r2, 0X58C4);
    // 0x00454444: j           L_0041B458
    // 0x00454448: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_0041B458(rdram, ctx);
    return;
    // 0x00454448: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0045444C:
    // 0x0045444C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00454450: addiu       $v0, $v0, 0x58E0
    ctx->r2 = ADD32(ctx->r2, 0X58E0);
    // 0x00454454: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00454458: jr          $ra
    // 0x0045445C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0045445C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0021F358(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021F358: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0021F35C: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x0021F360: lui         $v1, 0x21
    ctx->r3 = S32(0X21 << 16);
    // 0x0021F364: addiu       $v1, $v1, -0x4B30
    ctx->r3 = ADD32(ctx->r3, -0X4B30);
    // 0x0021F368: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x0021F36C: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x0021F370: addiu       $v1, $v1, 0x5CE0
    ctx->r3 = ADD32(ctx->r3, 0X5CE0);
    // 0x0021F374: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0021F378: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x0021F37C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0021F380: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x0021F384: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x0021F388: lw          $a1, 0xAC($v0)
    ctx->r5 = MEM_W(ctx->r2, 0XAC);
    // 0x0021F38C: lw          $a2, 0xB4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XB4);
    // 0x0021F390: jal         0x0020367C
    // 0x0021F394: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    func_0020367C(rdram, ctx);
        goto after_0;
    // 0x0021F394: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    after_0:
    // 0x0021F398: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x0021F39C: jr          $ra
    // 0x0021F3A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0021F3A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0025BA80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025BA80: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x0025BA84: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x0025BA88: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0025BA8C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x0025BA90: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x0025BA94: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x0025BA98: lb          $v1, 0x34($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X34);
    // 0x0025BA9C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x0025BAA0: bne         $v1, $v0, L_0025BAF8
    if (ctx->r3 != ctx->r2) {
        // 0x0025BAA4: addu        $s2, $a2, $zero
        ctx->r18 = ADD32(ctx->r6, 0);
            goto L_0025BAF8;
    }
    // 0x0025BAA4: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x0025BAA8: jal         0x0021D928
    // 0x0025BAAC: nop

    func_0021D928(rdram, ctx);
        goto after_0;
    // 0x0025BAAC: nop

    after_0:
    // 0x0025BAB0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0025BAB4: lb          $v1, 0x1B($s2)
    ctx->r3 = MEM_B(ctx->r18, 0X1B);
    // 0x0025BAB8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0025BABC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0025BAC0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0025BAC4: lw          $v0, 0x6D1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D1C);
    // 0x0025BAC8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0025BACC: sllv        $a3, $v0, $a2
    ctx->r7 = S32(ctx->r2 << (ctx->r6 & 31));
    // 0x0025BAD0: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x0025BAD4: sll         $a3, $a3, 3
    ctx->r7 = S32(ctx->r7 << 3);
    // 0x0025BAD8: addiu       $a3, $a3, 0x110
    ctx->r7 = ADD32(ctx->r7, 0X110);
    // 0x0025BADC: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x0025BAE0: lw          $a0, 0xC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XC);
    // 0x0025BAE4: lw          $a1, 0x98($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X98);
    // 0x0025BAE8: jal         0x0020B258
    // 0x0025BAEC: addu        $a3, $s1, $a3
    ctx->r7 = ADD32(ctx->r17, ctx->r7);
    func_0020B258(rdram, ctx);
        goto after_1;
    // 0x0025BAEC: addu        $a3, $s1, $a3
    ctx->r7 = ADD32(ctx->r17, ctx->r7);
    after_1:
    // 0x0025BAF0: j           L_0025BC58
    // 0x0025BAF4: nop

        goto L_0025BC58;
    // 0x0025BAF4: nop

L_0025BAF8:
    // 0x0025BAF8: lwc1        $f1, 0x134($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X134);
    // 0x0025BAFC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0025BB00: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0025BB04: nop

    // 0x0025BB08: bc1f        L_0025BC4C
    if (!c1cs) {
        // 0x0025BB0C: addiu       $v0, $zero, 0x19
        ctx->r2 = ADD32(0, 0X19);
            goto L_0025BC4C;
    }
    // 0x0025BB0C: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x0025BB10: bne         $v1, $v0, L_0025BB34
    if (ctx->r3 != ctx->r2) {
        // 0x0025BB14: nop
    
            goto L_0025BB34;
    }
    // 0x0025BB14: nop

    // 0x0025BB18: lb          $v1, 0xC7($a1)
    ctx->r3 = MEM_B(ctx->r5, 0XC7);
    // 0x0025BB1C: sll         $v0, $v1, 8
    ctx->r2 = S32(ctx->r3 << 8);
    // 0x0025BB20: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0025BB24: bltzl       $v0, L_0025BB2C
    if (SIGNED(ctx->r2) < 0) {
        // 0x0025BB28: addiu       $v0, $v0, 0x3
        ctx->r2 = ADD32(ctx->r2, 0X3);
            goto L_0025BB2C;
    }
    goto skip_0;
    // 0x0025BB28: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    skip_0:
L_0025BB2C:
    // 0x0025BB2C: j           L_0025BB94
    // 0x0025BB30: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
        goto L_0025BB94;
    // 0x0025BB30: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
L_0025BB34:
    // 0x0025BB34: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025BB38: lwc1        $f0, 0x754C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X754C);
    // 0x0025BB3C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0025BB40: nop

    // 0x0025BB44: bc1f        L_0025BB94
    if (!c1cs) {
        // 0x0025BB48: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_0025BB94;
    }
    // 0x0025BB48: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x0025BB4C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025BB50: lwc1        $f0, 0x7550($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7550);
    // 0x0025BB54: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0025BB58: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025BB5C: lwc1        $f1, 0x7554($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7554);
    // 0x0025BB60: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0025BB64: nop

    // 0x0025BB68: bc1tl       L_0025BB80
    if (c1cs) {
        // 0x0025BB6C: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_0025BB80;
    }
    goto skip_1;
    // 0x0025BB6C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_1:
    // 0x0025BB70: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0025BB74: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x0025BB78: j           L_0025BB94
    // 0x0025BB7C: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
        goto L_0025BB94;
    // 0x0025BB7C: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_0025BB80:
    // 0x0025BB80: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0025BB84: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0025BB88: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x0025BB8C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0025BB90: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_0025BB94:
    // 0x0025BB94: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x0025BB98: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x0025BB9C: beq         $s0, $v1, L_0025BBCC
    if (ctx->r16 == ctx->r3) {
        // 0x0025BBA0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0025BBCC;
    }
    // 0x0025BBA0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0025BBA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0025BBA8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0025BBAC: sw          $v0, -0x4750($at)
    MEM_W(-0X4750, ctx->r1) = ctx->r2;
    // 0x0025BBB0: subu        $v0, $v1, $s0
    ctx->r2 = SUB32(ctx->r3, ctx->r16);
    // 0x0025BBB4: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0025BBB8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0025BBBC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0025BBC0: swc1        $f0, -0x4740($at)
    MEM_W(-0X4740, ctx->r1) = ctx->f0.u32l;
    // 0x0025BBC4: jal         0x0021D928
    // 0x0025BBC8: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_0021D928(rdram, ctx);
        goto after_2;
    // 0x0025BBC8: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_2:
L_0025BBCC:
    // 0x0025BBCC: beq         $s0, $zero, L_0025BC3C
    if (ctx->r16 == 0) {
        // 0x0025BBD0: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_0025BC3C;
    }
    // 0x0025BBD0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x0025BBD4: mtc1        $s0, $f0
    ctx->f0.u32l = ctx->r16;
    // 0x0025BBD8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0025BBDC: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0025BBE0: lw          $v1, 0x6D1C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6D1C);
    // 0x0025BBE4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0025BBE8: swc1        $f0, -0x4740($at)
    MEM_W(-0X4740, ctx->r1) = ctx->f0.u32l;
    // 0x0025BBEC: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    // 0x0025BBF0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x0025BBF4: sllv        $v0, $v1, $a0
    ctx->r2 = S32(ctx->r3 << (ctx->r4 & 31));
    // 0x0025BBF8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0025BBFC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0025BC00: addiu       $v0, $v0, 0x110
    ctx->r2 = ADD32(ctx->r2, 0X110);
    // 0x0025BC04: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x0025BC08: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0025BC0C: lw          $v0, 0x18($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X18);
    // 0x0025BC10: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0025BC14: sw          $a0, -0x4750($at)
    MEM_W(-0X4750, ctx->r1) = ctx->r4;
    // 0x0025BC18: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x0025BC1C: lb          $v0, 0x151($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X151);
    // 0x0025BC20: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x0025BC24: lw          $a2, 0xC($s2)
    ctx->r6 = MEM_W(ctx->r18, 0XC);
    // 0x0025BC28: lw          $a3, 0x98($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X98);
    // 0x0025BC2C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x0025BC30: addiu       $a0, $a0, 0xD4
    ctx->r4 = ADD32(ctx->r4, 0XD4);
    // 0x0025BC34: jal         0x0020BBE4
    // 0x0025BC38: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_0020BBE4(rdram, ctx);
        goto after_3;
    // 0x0025BC38: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_3:
L_0025BC3C:
    // 0x0025BC3C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0025BC40: sw          $zero, -0x4750($at)
    MEM_W(-0X4750, ctx->r1) = 0;
    // 0x0025BC44: j           L_0025BC58
    // 0x0025BC48: nop

        goto L_0025BC58;
    // 0x0025BC48: nop

L_0025BC4C:
    // 0x0025BC4C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0025BC50: jal         0x0021D7BC
    // 0x0025BC54: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_0021D7BC(rdram, ctx);
        goto after_4;
    // 0x0025BC54: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_4:
L_0025BC58:
    // 0x0025BC58: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x0025BC5C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x0025BC60: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x0025BC64: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x0025BC68: jr          $ra
    // 0x0025BC6C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0025BC6C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00253370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00253370: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00253374: lwc1        $f3, 0x70D4($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X70D4);
    // 0x00253378: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x0025337C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x00253380: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x00253384: lw          $v1, 0x20($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X20);
    // 0x00253388: lw          $a0, 0x10($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X10);
    // 0x0025338C: beq         $v1, $zero, L_00253404
    if (ctx->r3 == 0) {
        // 0x00253390: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_00253404;
    }
    // 0x00253390: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00253394: lwc1        $f6, 0x4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4);
    // 0x00253398: lwc1        $f5, 0x8($sp)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r29, 0X8);
    // 0x0025339C: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
L_002533A0:
    // 0x002533A0: lw          $v0, 0x524($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X524);
    // 0x002533A4: beq         $v0, $zero, L_002533F8
    if (ctx->r2 == 0) {
        // 0x002533A8: nop
    
            goto L_002533F8;
    }
    // 0x002533A8: nop

    // 0x002533AC: beq         $v1, $a0, L_002533F8
    if (ctx->r3 == ctx->r4) {
        // 0x002533B0: nop
    
            goto L_002533F8;
    }
    // 0x002533B0: nop

    // 0x002533B4: lwc1        $f0, 0x4($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X4);
    // 0x002533B8: sub.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x002533BC: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x002533C0: lwc1        $f2, 0x8($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X8);
    // 0x002533C4: sub.s       $f2, $f2, $f5
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f5.fl;
    // 0x002533C8: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x002533CC: lwc1        $f1, 0xC($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0XC);
    // 0x002533D0: sub.s       $f1, $f1, $f4
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f4.fl;
    // 0x002533D4: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x002533D8: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x002533DC: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x002533E0: c.lt.s      $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f0.fl < ctx->f3.fl;
    // 0x002533E4: nop

    // 0x002533E8: bc1f        L_002533F8
    if (!c1cs) {
        // 0x002533EC: nop
    
            goto L_002533F8;
    }
    // 0x002533EC: nop

    // 0x002533F0: mov.s       $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f3.fl = ctx->f0.fl;
    // 0x002533F4: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
L_002533F8:
    // 0x002533F8: lw          $v1, 0x1320($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1320);
    // 0x002533FC: bne         $v1, $zero, L_002533A0
    if (ctx->r3 != 0) {
        // 0x00253400: nop
    
            goto L_002533A0;
    }
    // 0x00253400: nop

L_00253404:
    // 0x00253404: jr          $ra
    // 0x00253408: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    return;
    // 0x00253408: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
;}
RECOMP_FUNC void func_00227780(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00227780: lw          $a1, 0x1A0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X1A0);
    // 0x00227784: andi        $v0, $a1, 0x1
    ctx->r2 = ctx->r5 & 0X1;
    // 0x00227788: beq         $v0, $zero, L_00227824
    if (ctx->r2 == 0) {
        // 0x0022778C: addiu       $v0, $zero, -0x2
        ctx->r2 = ADD32(0, -0X2);
            goto L_00227824;
    }
    // 0x0022778C: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    // 0x00227790: lw          $v1, 0x1A4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1A4);
    // 0x00227794: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
    // 0x00227798: beq         $v1, $zero, L_002277AC
    if (ctx->r3 == 0) {
        // 0x0022779C: sw          $v0, 0x1A0($a0)
        MEM_W(0X1A0, ctx->r4) = ctx->r2;
            goto L_002277AC;
    }
    // 0x0022779C: sw          $v0, 0x1A0($a0)
    MEM_W(0X1A0, ctx->r4) = ctx->r2;
    // 0x002277A0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x002277A4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x002277A8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_002277AC:
    // 0x002277AC: lw          $v1, 0x1A8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1A8);
    // 0x002277B0: beq         $v1, $zero, L_002277C0
    if (ctx->r3 == 0) {
        // 0x002277B4: nop
    
            goto L_002277C0;
    }
    // 0x002277B4: nop

    // 0x002277B8: lw          $v0, 0x1AC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1AC);
    // 0x002277BC: sw          $v0, 0x1AC($v1)
    MEM_W(0X1AC, ctx->r3) = ctx->r2;
L_002277C0:
    // 0x002277C0: lw          $v1, 0x1AC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1AC);
    // 0x002277C4: beq         $v1, $zero, L_002277D4
    if (ctx->r3 == 0) {
        // 0x002277C8: nop
    
            goto L_002277D4;
    }
    // 0x002277C8: nop

    // 0x002277CC: lw          $v0, 0x1A8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1A8);
    // 0x002277D0: sw          $v0, 0x1A8($v1)
    MEM_W(0X1A8, ctx->r3) = ctx->r2;
L_002277D4:
    // 0x002277D4: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x002277D8: lw          $v0, -0x546C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X546C);
    // 0x002277DC: bne         $v0, $a0, L_002277F0
    if (ctx->r2 != ctx->r4) {
        // 0x002277E0: nop
    
            goto L_002277F0;
    }
    // 0x002277E0: nop

    // 0x002277E4: lw          $v0, 0x1AC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1AC);
    // 0x002277E8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x002277EC: sw          $v0, -0x546C($at)
    MEM_W(-0X546C, ctx->r1) = ctx->r2;
L_002277F0:
    // 0x002277F0: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x002277F4: lw          $v0, -0x5468($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5468);
    // 0x002277F8: bne         $v0, $a0, L_0022780C
    if (ctx->r2 != ctx->r4) {
        // 0x002277FC: nop
    
            goto L_0022780C;
    }
    // 0x002277FC: nop

    // 0x00227800: lw          $v0, 0x1A8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1A8);
    // 0x00227804: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x00227808: sw          $v0, -0x5468($at)
    MEM_W(-0X5468, ctx->r1) = ctx->r2;
L_0022780C:
    // 0x0022780C: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x00227810: lw          $v0, -0x5470($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5470);
    // 0x00227814: sw          $zero, 0x1A8($a0)
    MEM_W(0X1A8, ctx->r4) = 0;
    // 0x00227818: sw          $v0, 0x1AC($a0)
    MEM_W(0X1AC, ctx->r4) = ctx->r2;
    // 0x0022781C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x00227820: sw          $a0, -0x5470($at)
    MEM_W(-0X5470, ctx->r1) = ctx->r4;
L_00227824:
    // 0x00227824: jr          $ra
    // 0x00227828: nop

    return;
    // 0x00227828: nop

;}
RECOMP_FUNC void func_002562D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002562D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002562D4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002562D8: jal         0x00255FF4
    // 0x002562DC: nop

    func_00255FF4(rdram, ctx);
        goto after_0;
    // 0x002562DC: nop

    after_0:
    // 0x002562E0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002562E4: jr          $ra
    // 0x002562E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002562E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0027B8E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027B8E0: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x0027B8E4: sdc1        $f29, 0x80($sp)
    CHECK_FR(ctx, 29);
    SD(ctx->f29.u64, 0X80, ctx->r29);
    // 0x0027B8E8: mtc1        $a1, $f29
    ctx->f_odd[(29 - 1) * 2] = ctx->r5;
    // 0x0027B8EC: sdc1        $f23, 0x50($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X50, ctx->r29);
    // 0x0027B8F0: mtc1        $a2, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r6;
    // 0x0027B8F4: sdc1        $f28, 0x78($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X78, ctx->r29);
    // 0x0027B8F8: mtc1        $a3, $f28
    ctx->f28.u32l = ctx->r7;
    // 0x0027B8FC: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x0027B900: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0027B904: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0027B908: addiu       $s1, $s3, 0x8
    ctx->r17 = ADD32(ctx->r19, 0X8);
    // 0x0027B90C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0027B910: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x0027B914: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x0027B918: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0027B91C: sdc1        $f27, 0x70($sp)
    CHECK_FR(ctx, 27);
    SD(ctx->f27.u64, 0X70, ctx->r29);
    // 0x0027B920: sdc1        $f26, 0x68($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X68, ctx->r29);
    // 0x0027B924: sdc1        $f25, 0x60($sp)
    CHECK_FR(ctx, 25);
    SD(ctx->f25.u64, 0X60, ctx->r29);
    // 0x0027B928: sdc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X58, ctx->r29);
    // 0x0027B92C: sdc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X48, ctx->r29);
    // 0x0027B930: sdc1        $f21, 0x40($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X40, ctx->r29);
    // 0x0027B934: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x0027B938: lhu         $v0, 0x2($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X2);
    // 0x0027B93C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027B940: lwc1        $f3, -0x7BB8($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X7BB8);
    // 0x0027B944: mtc1        $v0, $f22
    ctx->f22.u32l = ctx->r2;
    // 0x0027B948: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x0027B94C: mov.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
    // 0x0027B950: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x0027B954: lwc1        $f27, 0x98($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X98);
    // 0x0027B958: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x0027B95C: nop

    // 0x0027B960: bc1t        L_0027BA48
    if (c1cs) {
        // 0x0027B964: sub.s       $f22, $f22, $f3
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f22.fl = ctx->f22.fl - ctx->f3.fl;
            goto L_0027BA48;
    }
    // 0x0027B964: sub.s       $f22, $f22, $f3
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f22.fl = ctx->f22.fl - ctx->f3.fl;
    // 0x0027B968: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027B96C: ldc1        $f24, -0x7BB0($at)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r1, -0X7BB0);
L_0027B970:
    // 0x0027B970: lhu         $v0, 0x0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X0);
    // 0x0027B974: mtc1        $v0, $f20
    ctx->f20.u32l = ctx->r2;
    // 0x0027B978: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x0027B97C: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
    // 0x0027B980: sub.s       $f20, $f20, $f3
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f3.fl;
    // 0x0027B984: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x0027B988: nop

    // 0x0027B98C: bc1t        L_0027BA0C
    if (c1cs) {
        // 0x0027B990: mov.s       $f21, $f29
        CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 29);
    ctx->f21.fl = ctx->f29.fl;
            goto L_0027BA0C;
    }
    // 0x0027B990: mov.s       $f21, $f29
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 29);
    ctx->f21.fl = ctx->f29.fl;
    // 0x0027B994: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027B998: lwc1        $f26, -0x7BA8($at)
    ctx->f26.u32l = MEM_W(ctx->r1, -0X7BA8);
    // 0x0027B99C: mtc1        $zero, $f25
    ctx->f_odd[(25 - 1) * 2] = 0;
L_0027B9A0:
    // 0x0027B9A0: lw          $s2, 0x4($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X4);
    // 0x0027B9A4: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x0027B9A8: mfc1        $a1, $f21
    ctx->r5 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x0027B9AC: mfc1        $a2, $f23
    ctx->r6 = (int32_t)ctx->f_odd[(23 - 1) * 2];
    // 0x0027B9B0: addiu       $a0, $s1, 0x8
    ctx->r4 = ADD32(ctx->r17, 0X8);
    // 0x0027B9B4: swc1        $f28, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f28.u32l;
    // 0x0027B9B8: swc1        $f27, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x0027B9BC: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x0027B9C0: jal         0x0027A4DC
    // 0x0027B9C4: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    func_0027A4DC(rdram, ctx);
        goto after_0;
    // 0x0027B9C4: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    after_0:
    // 0x0027B9C8: mtc1        $s0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r16;
    // 0x0027B9CC: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0027B9D0: bltzl       $s0, L_0027B9D8
    if (SIGNED(ctx->r16) < 0) {
        // 0x0027B9D4: add.d       $f1, $f1, $f24
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f24.d); 
    ctx->f1.d = ctx->f1.d + ctx->f24.d;
            goto L_0027B9D8;
    }
    goto skip_0;
    // 0x0027B9D4: add.d       $f1, $f1, $f24
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f24.d); 
    ctx->f1.d = ctx->f1.d + ctx->f24.d;
    skip_0:
L_0027B9D8:
    // 0x0027B9D8: cvt.s.d     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f1.fl = CVT_S_D(ctx->f1.d);
    // 0x0027B9DC: mul.s       $f1, $f1, $f28
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f28.fl);
    // 0x0027B9E0: nop

    // 0x0027B9E4: mult        $s0, $s2
    result = S64(S32(ctx->r16)) * S64(S32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0027B9E8: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
    // 0x0027B9EC: sub.s       $f20, $f20, $f26
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f26.fl;
    // 0x0027B9F0: c.eq.s      $f0, $f25
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 25);
    c1cs = ctx->f0.fl == ctx->f25.fl;
    // 0x0027B9F4: mflo        $v1
    ctx->r3 = lo;
    // 0x0027B9F8: srl         $v0, $v1, 1
    ctx->r2 = S32(U32(ctx->r3) >> 1);
    // 0x0027B9FC: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x0027BA00: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x0027BA04: bc1f        L_0027B9A0
    if (!c1cs) {
        // 0x0027BA08: add.s       $f21, $f21, $f1
        CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f21.fl = ctx->f21.fl + ctx->f1.fl;
            goto L_0027B9A0;
    }
    // 0x0027BA08: add.s       $f21, $f21, $f1
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f21.fl = ctx->f21.fl + ctx->f1.fl;
L_0027BA0C:
    // 0x0027BA0C: mtc1        $s2, $f0
    ctx->f0.u32l = ctx->r18;
    // 0x0027BA10: cvt.d.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.d = CVT_D_W(ctx->f0.u32l);
    // 0x0027BA14: bltzl       $s2, L_0027BA1C
    if (SIGNED(ctx->r18) < 0) {
        // 0x0027BA18: add.d       $f0, $f0, $f24
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f24.d); 
    ctx->f0.d = ctx->f0.d + ctx->f24.d;
            goto L_0027BA1C;
    }
    goto skip_1;
    // 0x0027BA18: add.d       $f0, $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f24.d); 
    ctx->f0.d = ctx->f0.d + ctx->f24.d;
    skip_1:
L_0027BA1C:
    // 0x0027BA1C: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
    // 0x0027BA20: mul.s       $f0, $f0, $f27
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f27.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f27.fl);
    // 0x0027BA24: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027BA28: lwc1        $f3, -0x7BA4($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X7BA4);
    // 0x0027BA2C: mov.s       $f1, $f22
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 22);
    ctx->f1.fl = ctx->f22.fl;
    // 0x0027BA30: sub.s       $f22, $f22, $f3
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f22.fl = ctx->f22.fl - ctx->f3.fl;
    // 0x0027BA34: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x0027BA38: c.eq.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl == ctx->f2.fl;
    // 0x0027BA3C: nop

    // 0x0027BA40: bc1f        L_0027B970
    if (!c1cs) {
        // 0x0027BA44: add.s       $f23, $f23, $f0
        CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f23.fl = ctx->f23.fl + ctx->f0.fl;
            goto L_0027B970;
    }
    // 0x0027BA44: add.s       $f23, $f23, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f23.fl = ctx->f23.fl + ctx->f0.fl;
L_0027BA48:
    // 0x0027BA48: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x0027BA4C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0027BA50: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0027BA54: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0027BA58: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0027BA5C: ldc1        $f29, 0x80($sp)
    CHECK_FR(ctx, 29);
    ctx->f29.u64 = LD(ctx->r29, 0X80);
    // 0x0027BA60: ldc1        $f28, 0x78($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X78);
    // 0x0027BA64: ldc1        $f27, 0x70($sp)
    CHECK_FR(ctx, 27);
    ctx->f27.u64 = LD(ctx->r29, 0X70);
    // 0x0027BA68: ldc1        $f26, 0x68($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X68);
    // 0x0027BA6C: ldc1        $f25, 0x60($sp)
    CHECK_FR(ctx, 25);
    ctx->f25.u64 = LD(ctx->r29, 0X60);
    // 0x0027BA70: ldc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X58);
    // 0x0027BA74: ldc1        $f23, 0x50($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X50);
    // 0x0027BA78: ldc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X48);
    // 0x0027BA7C: ldc1        $f21, 0x40($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X40);
    // 0x0027BA80: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x0027BA84: jr          $ra
    // 0x0027BA88: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x0027BA88: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_0028DEFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028DEFC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0028DF00: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0028DF04: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0028DF08: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0028DF0C: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x0028DF10: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x0028DF14: beq         $v0, $v1, L_0028E058
    if (ctx->r2 == ctx->r3) {
        // 0x0028DF18: nop
    
            goto L_0028E058;
    }
    // 0x0028DF18: nop

    // 0x0028DF1C: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x0028DF20: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0028DF24: beq         $v0, $zero, L_0028DFA8
    if (ctx->r2 == 0) {
        // 0x0028DF28: nop
    
            goto L_0028DFA8;
    }
    // 0x0028DF28: nop

    // 0x0028DF2C: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x0028DF30: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0028DF34: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028DF38: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0028DF3C: sb          $v1, 0x131B($at)
    MEM_B(0X131B, ctx->r1) = ctx->r3;
    // 0x0028DF40: lbu         $a0, 0xB($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XB);
    // 0x0028DF44: sll         $a3, $a0, 2
    ctx->r7 = S32(ctx->r4 << 2);
    // 0x0028DF48: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028DF4C: addu        $at, $at, $a3
    ctx->r1 = ADD32(ctx->r1, ctx->r7);
    // 0x0028DF50: lbu         $v0, 0x131A($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X131A);
    // 0x0028DF54: beq         $v0, $v1, L_0028DFD8
    if (ctx->r2 == ctx->r3) {
        // 0x0028DF58: lui         $v1, 0x3FF
        ctx->r3 = S32(0X3FF << 16);
            goto L_0028DFD8;
    }
    // 0x0028DF58: lui         $v1, 0x3FF
    ctx->r3 = S32(0X3FF << 16);
    // 0x0028DF5C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0028DF60: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0028DF64: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0028DF68: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0028DF6C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x0028DF70: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0028DF74: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0028DF78: addiu       $v0, $v0, 0x2000
    ctx->r2 = ADD32(ctx->r2, 0X2000);
    // 0x0028DF7C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0028DF80: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028DF84: addu        $at, $at, $a3
    ctx->r1 = ADD32(ctx->r1, ctx->r7);
    // 0x0028DF88: lhu         $a2, 0x1318($at)
    ctx->r6 = MEM_HU(ctx->r1, 0X1318);
    // 0x0028DF8C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028DF90: addu        $at, $at, $a3
    ctx->r1 = ADD32(ctx->r1, ctx->r7);
    // 0x0028DF94: lbu         $a3, 0x131A($at)
    ctx->r7 = MEM_BU(ctx->r1, 0X131A);
    // 0x0028DF98: sll         $a2, $a2, 12
    ctx->r6 = S32(ctx->r6 << 12);
    // 0x0028DF9C: sll         $a3, $a3, 12
    ctx->r7 = S32(ctx->r7 << 12);
    // 0x0028DFA0: j           L_0028E048
    // 0x0028DFA4: addu        $a3, $v0, $a3
    ctx->r7 = ADD32(ctx->r2, ctx->r7);
        goto L_0028E048;
    // 0x0028DFA4: addu        $a3, $v0, $a3
    ctx->r7 = ADD32(ctx->r2, ctx->r7);
L_0028DFA8:
    // 0x0028DFA8: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x0028DFAC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0028DFB0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028DFB4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0028DFB8: sb          $v1, 0x131A($at)
    MEM_B(0X131A, ctx->r1) = ctx->r3;
    // 0x0028DFBC: lbu         $a0, 0xB($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XB);
    // 0x0028DFC0: sll         $t1, $a0, 2
    ctx->r9 = S32(ctx->r4 << 2);
    // 0x0028DFC4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028DFC8: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x0028DFCC: lbu         $v0, 0x131B($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X131B);
    // 0x0028DFD0: bne         $v0, $v1, L_0028E000
    if (ctx->r2 != ctx->r3) {
        // 0x0028DFD4: lui         $t0, 0x3FF
        ctx->r8 = S32(0X3FF << 16);
            goto L_0028E000;
    }
    // 0x0028DFD4: lui         $t0, 0x3FF
    ctx->r8 = S32(0X3FF << 16);
L_0028DFD8:
    // 0x0028DFD8: jal         0x0028EEC0
    // 0x0028DFDC: nop

    func_0028EEC0(rdram, ctx);
        goto after_0;
    // 0x0028DFDC: nop

    after_0:
    // 0x0028DFE0: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x0028DFE4: ori         $v1, $zero, 0xFFFF
    ctx->r3 = 0 | 0XFFFF;
    // 0x0028DFE8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0028DFEC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028DFF0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0028DFF4: sh          $v1, 0x1318($at)
    MEM_H(0X1318, ctx->r1) = ctx->r3;
    // 0x0028DFF8: j           L_0028E054
    // 0x0028DFFC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
        goto L_0028E054;
    // 0x0028DFFC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_0028E000:
    // 0x0028E000: ori         $t0, $t0, 0xFFFF
    ctx->r8 = ctx->r8 | 0XFFFF;
    // 0x0028E004: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0028E008: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x0028E00C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x0028E010: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0028E014: addiu       $v1, $v1, 0x2000
    ctx->r3 = ADD32(ctx->r3, 0X2000);
    // 0x0028E018: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028E01C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x0028E020: lhu         $a2, 0x1318($at)
    ctx->r6 = MEM_HU(ctx->r1, 0X1318);
    // 0x0028E024: and         $v1, $v1, $t0
    ctx->r3 = ctx->r3 & ctx->r8;
    // 0x0028E028: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0028E02C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028E030: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x0028E034: lbu         $v0, 0x131B($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X131B);
    // 0x0028E038: sll         $a2, $a2, 12
    ctx->r6 = S32(ctx->r6 << 12);
    // 0x0028E03C: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x0028E040: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0028E044: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
L_0028E048:
    // 0x0028E048: jal         0x0028EE40
    // 0x0028E04C: nop

    func_0028EE40(rdram, ctx);
        goto after_1;
    // 0x0028E04C: nop

    after_1:
    // 0x0028E050: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_0028E054:
    // 0x0028E054: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_0028E058:
    // 0x0028E058: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0028E05C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0028E060: jr          $ra
    // 0x0028E064: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0028E064: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0040C5DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040C5DC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0040C5E0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0040C5E4: addiu       $v0, $v0, -0x490
    ctx->r2 = ADD32(ctx->r2, -0X490);
    // 0x0040C5E8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0040C5EC: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x0040C5F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0040C5F4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0040C5F8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0040C5FC: addiu       $s1, $zero, 0x18
    ctx->r17 = ADD32(0, 0X18);
    // 0x0040C600: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x0040C604: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0040C608: lw          $s2, 0x660($v0)
    ctx->r18 = MEM_W(ctx->r2, 0X660);
L_0040C60C:
    // 0x0040C60C: srav        $v0, $s2, $s0
    ctx->r2 = S32(SIGNED(ctx->r18) >> (ctx->r16 & 31));
    // 0x0040C610: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0040C614: beql        $v0, $zero, L_0040C634
    if (ctx->r2 == 0) {
        // 0x0040C618: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_0040C634;
    }
    goto skip_0;
    // 0x0040C618: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x0040C61C: addu        $a0, $s3, $s1
    ctx->r4 = ADD32(ctx->r19, ctx->r17);
    // 0x0040C620: lui         $a1, 0x43
    ctx->r5 = S32(0X43 << 16);
    // 0x0040C624: addiu       $a1, $a1, 0x1EE4
    ctx->r5 = ADD32(ctx->r5, 0X1EE4);
    // 0x0040C628: jal         0x00236314
    // 0x0040C62C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_00236314(rdram, ctx);
        goto after_0;
    // 0x0040C62C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_0:
    // 0x0040C630: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_0040C634:
    // 0x0040C634: slti        $v0, $s0, 0xF
    ctx->r2 = SIGNED(ctx->r16) < 0XF ? 1 : 0;
    // 0x0040C638: bne         $v0, $zero, L_0040C60C
    if (ctx->r2 != 0) {
        // 0x0040C63C: addiu       $s1, $s1, 0x68
        ctx->r17 = ADD32(ctx->r17, 0X68);
            goto L_0040C60C;
    }
    // 0x0040C63C: addiu       $s1, $s1, 0x68
    ctx->r17 = ADD32(ctx->r17, 0X68);
    // 0x0040C640: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x0040C644: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0040C648: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0040C64C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0040C650: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0040C654: jr          $ra
    // 0x0040C658: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0040C658: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00426FC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00426FC4:
    // 0x00426FC4: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x00426FC8: bne         $v1, $v0, L_00426FEC
    if (ctx->r3 != ctx->r2) {
        // 0x00426FCC: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_00426FEC;
    }
    // 0x00426FCC: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x00426FD0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00426FD4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00426FD8: beq         $a2, $zero, L_00426FEC
    if (ctx->r6 == 0) {
        // 0x00426FDC: nop
    
            goto L_00426FEC;
    }
    // 0x00426FDC: nop

    // 0x00426FE0: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x00426FE4: bne         $v1, $zero, L_00426FC4
    if (ctx->r3 != 0) {
        // 0x00426FE8: nop
    
            goto L_00426FC4;
    }
    // 0x00426FE8: nop

L_00426FEC:
    // 0x00426FEC: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x00426FF0: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x00426FF4: jr          $ra
    // 0x00426FF8: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    return;
    // 0x00426FF8: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
;}
RECOMP_FUNC void func_0023CCFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023CCFC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x0023CD00: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x0023CD04: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0023CD08: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    // 0x0023CD0C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0023CD10: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x0023CD14: addiu       $s2, $s0, 0xC
    ctx->r18 = ADD32(ctx->r16, 0XC);
    // 0x0023CD18: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0023CD1C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0023CD20: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x0023CD24: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x0023CD28: lw          $v1, 0x30($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X30);
    // 0x0023CD2C: lw          $a3, 0x34($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X34);
    // 0x0023CD30: lw          $t0, 0x38($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X38);
    // 0x0023CD34: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x0023CD38: sw          $a3, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r7;
    // 0x0023CD3C: sw          $t0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r8;
    // 0x0023CD40: lw          $v1, 0x3C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X3C);
    // 0x0023CD44: lw          $a3, 0x40($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X40);
    // 0x0023CD48: lw          $t0, 0x44($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X44);
    // 0x0023CD4C: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
    // 0x0023CD50: sw          $a3, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r7;
    // 0x0023CD54: sw          $t0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r8;
    // 0x0023CD58: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x0023CD5C: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x0023CD60: lw          $t0, 0x14($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X14);
    // 0x0023CD64: sw          $v1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r3;
    // 0x0023CD68: sw          $a3, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r7;
    // 0x0023CD6C: sw          $t0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r8;
    // 0x0023CD70: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x0023CD74: lw          $a3, 0x4($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X4);
    // 0x0023CD78: lw          $t0, 0x8($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X8);
    // 0x0023CD7C: sw          $v1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r3;
    // 0x0023CD80: sw          $a3, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r7;
    // 0x0023CD84: sw          $t0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r8;
    // 0x0023CD88: jal         0x0020EF2C
    // 0x0023CD8C: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    func_0020EF2C(rdram, ctx);
        goto after_0;
    // 0x0023CD8C: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    after_0:
    // 0x0023CD90: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0023CD94: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0023CD98: jal         0x0020EF2C
    // 0x0023CD9C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_0020EF2C(rdram, ctx);
        goto after_1;
    // 0x0023CD9C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_1:
    // 0x0023CDA0: addiu       $a0, $s0, 0x30
    ctx->r4 = ADD32(ctx->r16, 0X30);
    // 0x0023CDA4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x0023CDA8: jal         0x0020EFDC
    // 0x0023CDAC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    func_0020EFDC(rdram, ctx);
        goto after_2;
    // 0x0023CDAC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_2:
    // 0x0023CDB0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x0023CDB4: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x0023CDB8: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x0023CDBC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0023CDC0: jr          $ra
    // 0x0023CDC4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x0023CDC4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00281CC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00281CC0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00281CC4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00281CC8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00281CCC: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    // 0x00281CD0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00281CD4: jal         0x0027BD30
    // 0x00281CD8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_0027BD30(rdram, ctx);
        goto after_0;
    // 0x00281CD8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x00281CDC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x00281CE0: jal         0x0027BD30
    // 0x00281CE4: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    func_0027BD30(rdram, ctx);
        goto after_1;
    // 0x00281CE4: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_1:
    // 0x00281CE8: addiu       $a0, $s0, 0x40
    ctx->r4 = ADD32(ctx->r16, 0X40);
    // 0x00281CEC: jal         0x0027BD30
    // 0x00281CF0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_0027BD30(rdram, ctx);
        goto after_2;
    // 0x00281CF0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_2:
    // 0x00281CF4: beq         $s1, $zero, L_00281D04
    if (ctx->r17 == 0) {
        // 0x00281CF8: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00281D04;
    }
    // 0x00281CF8: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00281CFC: bnel        $s0, $zero, L_00281D04
    if (ctx->r16 != 0) {
        // 0x00281D00: sltu        $v1, $v1, $v0
        ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
            goto L_00281D04;
    }
    goto skip_0;
    // 0x00281D00: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    skip_0:
L_00281D04:
    // 0x00281D04: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00281D08: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00281D0C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00281D10: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x00281D14: jr          $ra
    // 0x00281D18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00281D18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002A13F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A13F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002A13F4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x002A13F8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002A13FC: jal         0x002A31FC
    // 0x002A1400: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    static_4_002A31FC(rdram, ctx);
        goto after_0;
    // 0x002A1400: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x002A1404: andi        $t3, $v0, 0xFF
    ctx->r11 = ctx->r2 & 0XFF;
    // 0x002A1408: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x002A140C: addiu       $a2, $v0, -0x7760
    ctx->r6 = ADD32(ctx->r2, -0X7760);
    // 0x002A1410: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x002A1414: lui         $t8, 0x1FF
    ctx->r24 = S32(0X1FF << 16);
    // 0x002A1418: ori         $t8, $t8, 0xE000
    ctx->r24 = ctx->r24 | 0XE000;
    // 0x002A141C: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x002A1420: lui         $t7, 0x8000
    ctx->r15 = S32(0X8000 << 16);
    // 0x002A1424: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x002A1428: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x002A142C: addiu       $t4, $zero, -0x3
    ctx->r12 = ADD32(0, -0X3);
    // 0x002A1430: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x002A1434: addiu       $v0, $v0, -0x7ED0
    ctx->r2 = ADD32(ctx->r2, -0X7ED0);
    // 0x002A1438: addiu       $t1, $v0, 0xC0
    ctx->r9 = ADD32(ctx->r2, 0XC0);
    // 0x002A143C: addiu       $t9, $v0, 0x240
    ctx->r25 = ADD32(ctx->r2, 0X240);
    // 0x002A1440: sw          $s1, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r17;
L_002A1444:
    // 0x002A1444: sw          $zero, 0x8($t1)
    MEM_W(0X8, ctx->r9) = 0;
    // 0x002A1448: lw          $a3, 0x0($a2)
    ctx->r7 = MEM_W(ctx->r6, 0X0);
    // 0x002A144C: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x002A1450: lw          $t2, 0x0($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X0);
    // 0x002A1454: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x002A1458: lw          $t0, 0x0($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X0);
    // 0x002A145C: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x002A1460: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x002A1464: or          $v0, $t0, $a1
    ctx->r2 = ctx->r8 | ctx->r5;
    // 0x002A1468: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x002A146C: beq         $v0, $zero, L_002A151C
    if (ctx->r2 == 0) {
        // 0x002A1470: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_002A151C;
    }
    // 0x002A1470: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x002A1474: and         $a3, $a3, $t8
    ctx->r7 = ctx->r7 & ctx->r24;
    // 0x002A1478: addiu       $v1, $s0, -0x3CF8
    ctx->r3 = ADD32(ctx->r16, -0X3CF8);
    // 0x002A147C: addiu       $a0, $zero, 0x1000
    ctx->r4 = ADD32(0, 0X1000);
L_002A1480:
    // 0x002A1480: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x002A1484: beq         $v0, $a3, L_002A14A0
    if (ctx->r2 == ctx->r7) {
        // 0x002A1488: and         $v0, $v0, $t7
        ctx->r2 = ctx->r2 & ctx->r15;
            goto L_002A14A0;
    }
    // 0x002A1488: and         $v0, $v0, $t7
    ctx->r2 = ctx->r2 & ctx->r15;
    // 0x002A148C: bne         $v0, $zero, L_002A149C
    if (ctx->r2 != 0) {
        // 0x002A1490: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_002A149C;
    }
    // 0x002A1490: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x002A1494: j           L_002A1480
    // 0x002A1498: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
        goto L_002A1480;
    // 0x002A1498: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
L_002A149C:
    // 0x002A149C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_002A14A0:
    // 0x002A14A0: beq         $a0, $zero, L_002A151C
    if (ctx->r4 == 0) {
        // 0x002A14A4: and         $v0, $t0, $a1
        ctx->r2 = ctx->r8 & ctx->r5;
            goto L_002A151C;
    }
    // 0x002A14A4: and         $v0, $t0, $a1
    ctx->r2 = ctx->r8 & ctx->r5;
    // 0x002A14A8: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x002A14AC: beq         $v0, $t6, L_002A14E0
    if (ctx->r2 == ctx->r14) {
        // 0x002A14B0: andi        $v0, $t0, 0x3
        ctx->r2 = ctx->r8 & 0X3;
            goto L_002A14E0;
    }
    // 0x002A14B0: andi        $v0, $t0, 0x3
    ctx->r2 = ctx->r8 & 0X3;
    // 0x002A14B4: bne         $v0, $t5, L_002A14CC
    if (ctx->r2 != ctx->r13) {
        // 0x002A14B8: andi        $v0, $a1, 0x3
        ctx->r2 = ctx->r5 & 0X3;
            goto L_002A14CC;
    }
    // 0x002A14B8: andi        $v0, $a1, 0x3
    ctx->r2 = ctx->r5 & 0X3;
    // 0x002A14BC: andi        $v0, $t2, 0xFF
    ctx->r2 = ctx->r10 & 0XFF;
    // 0x002A14C0: bnel        $v0, $t3, L_002A14C8
    if (ctx->r2 != ctx->r11) {
        // 0x002A14C4: and         $t0, $t0, $t4
        ctx->r8 = ctx->r8 & ctx->r12;
            goto L_002A14C8;
    }
    goto skip_0;
    // 0x002A14C4: and         $t0, $t0, $t4
    ctx->r8 = ctx->r8 & ctx->r12;
    skip_0:
L_002A14C8:
    // 0x002A14C8: andi        $v0, $a1, 0x3
    ctx->r2 = ctx->r5 & 0X3;
L_002A14CC:
    // 0x002A14CC: bne         $v0, $t5, L_002A14E4
    if (ctx->r2 != ctx->r13) {
        // 0x002A14D0: addiu       $v0, $zero, -0x2000
        ctx->r2 = ADD32(0, -0X2000);
            goto L_002A14E4;
    }
    // 0x002A14D0: addiu       $v0, $zero, -0x2000
    ctx->r2 = ADD32(0, -0X2000);
    // 0x002A14D4: andi        $v0, $t2, 0xFF
    ctx->r2 = ctx->r10 & 0XFF;
    // 0x002A14D8: bnel        $v0, $t3, L_002A14E0
    if (ctx->r2 != ctx->r11) {
        // 0x002A14DC: and         $a1, $a1, $t4
        ctx->r5 = ctx->r5 & ctx->r12;
            goto L_002A14E0;
    }
    goto skip_1;
    // 0x002A14DC: and         $a1, $a1, $t4
    ctx->r5 = ctx->r5 & ctx->r12;
    skip_1:
L_002A14E0:
    // 0x002A14E0: addiu       $v0, $zero, -0x2000
    ctx->r2 = ADD32(0, -0X2000);
L_002A14E4:
    // 0x002A14E4: and         $v1, $t2, $v0
    ctx->r3 = ctx->r10 & ctx->r2;
    // 0x002A14E8: and         $v0, $t0, $a1
    ctx->r2 = ctx->r8 & ctx->r5;
    // 0x002A14EC: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x002A14F0: beq         $v0, $zero, L_002A1500
    if (ctx->r2 == 0) {
        // 0x002A14F4: andi        $v0, $a1, 0x2
        ctx->r2 = ctx->r5 & 0X2;
            goto L_002A1500;
    }
    // 0x002A14F4: andi        $v0, $a1, 0x2
    ctx->r2 = ctx->r5 & 0X2;
    // 0x002A14F8: j           L_002A1508
    // 0x002A14FC: sll         $a0, $a0, 1
    ctx->r4 = S32(ctx->r4 << 1);
        goto L_002A1508;
    // 0x002A14FC: sll         $a0, $a0, 1
    ctx->r4 = S32(ctx->r4 << 1);
L_002A1500:
    // 0x002A1500: bnel        $v0, $zero, L_002A1508
    if (ctx->r2 != 0) {
        // 0x002A1504: addu        $v1, $v1, $a0
        ctx->r3 = ADD32(ctx->r3, ctx->r4);
            goto L_002A1508;
    }
    goto skip_2;
    // 0x002A1504: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    skip_2:
L_002A1508:
    // 0x002A1508: addu        $v0, $v1, $a0
    ctx->r2 = ADD32(ctx->r3, ctx->r4);
    // 0x002A150C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x002A1510: sw          $v1, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r3;
    // 0x002A1514: sw          $v0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r2;
    // 0x002A1518: sw          $t6, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r14;
L_002A151C:
    // 0x002A151C: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x002A1520: sltu        $v0, $t1, $t9
    ctx->r2 = ctx->r9 < ctx->r25 ? 1 : 0;
    // 0x002A1524: bnel        $v0, $zero, L_002A1444
    if (ctx->r2 != 0) {
        // 0x002A1528: sw          $s1, 0x0($t1)
        MEM_W(0X0, ctx->r9) = ctx->r17;
            goto L_002A1444;
    }
    goto skip_3;
    // 0x002A1528: sw          $s1, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r17;
    skip_3:
    // 0x002A152C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x002A1530: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002A1534: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002A1538: jr          $ra
    // 0x002A153C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002A153C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00272B54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00272B54: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00272B58: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00272B5C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00272B60: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00272B64: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00272B68: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00272B6C: lw          $a0, 0xB0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XB0);
    // 0x00272B70: jal         0x002718E0
    // 0x00272B74: addiu       $s2, $s0, 0x10
    ctx->r18 = ADD32(ctx->r16, 0X10);
    func_002718E0(rdram, ctx);
        goto after_0;
    // 0x00272B74: addiu       $s2, $s0, 0x10
    ctx->r18 = ADD32(ctx->r16, 0X10);
    after_0:
    // 0x00272B78: bne         $v0, $zero, L_00272BB4
    if (ctx->r2 != 0) {
        // 0x00272B7C: nop
    
            goto L_00272BB4;
    }
    // 0x00272B7C: nop

    // 0x00272B80: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00272B84: lw          $s0, 0xB0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0XB0);
    // 0x00272B88: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00272B8C: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x00272B90: addiu       $s0, $s0, 0x84
    ctx->r16 = ADD32(ctx->r16, 0X84);
    // 0x00272B94: lh          $a1, 0xDC($v0)
    ctx->r5 = MEM_H(ctx->r2, 0XDC);
    // 0x00272B98: jal         0x00293E60
    // 0x00272B9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00293E60(rdram, ctx);
        goto after_1;
    // 0x00272B9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00272BA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00272BA4: jal         0x00293D90
    // 0x00272BA8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_00293D90(rdram, ctx);
        goto after_2;
    // 0x00272BA8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_2:
    // 0x00272BAC: j           L_00272D24
    // 0x00272BB0: nop

        goto L_00272D24;
    // 0x00272BB0: nop

L_00272BB4:
    // 0x00272BB4: lw          $v0, 0x88($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X88);
    // 0x00272BB8: beq         $v0, $zero, L_00272CB8
    if (ctx->r2 == 0) {
        // 0x00272BBC: nop
    
            goto L_00272CB8;
    }
    // 0x00272BBC: nop

    // 0x00272BC0: lh          $v0, 0x94($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X94);
    // 0x00272BC4: lhu         $v1, 0x94($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X94);
    // 0x00272BC8: blez        $v0, L_00272BD8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00272BCC: addiu       $v0, $v1, -0x1
        ctx->r2 = ADD32(ctx->r3, -0X1);
            goto L_00272BD8;
    }
    // 0x00272BCC: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x00272BD0: j           L_00272CA4
    // 0x00272BD4: sh          $v0, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r2;
        goto L_00272CA4;
    // 0x00272BD4: sh          $v0, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r2;
L_00272BD8:
    // 0x00272BD8: lwc1        $f1, 0x9C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X9C);
    // 0x00272BDC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00272BE0: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00272BE4: nop

    // 0x00272BE8: bc1f        L_00272BF4
    if (!c1cs) {
        // 0x00272BEC: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_00272BF4;
    }
    // 0x00272BEC: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00272BF0: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_00272BF4:
    // 0x00272BF4: beq         $s1, $zero, L_00272C24
    if (ctx->r17 == 0) {
        // 0x00272BF8: nop
    
            goto L_00272C24;
    }
    // 0x00272BF8: nop

    // 0x00272BFC: lhu         $a0, 0x90($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X90);
    // 0x00272C00: jal         0x0026D210
    // 0x00272C04: nop

    func_0026D210(rdram, ctx);
        goto after_3;
    // 0x00272C04: nop

    after_3:
    // 0x00272C08: lwc1        $f1, 0x98($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X98);
    // 0x00272C0C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00272C10: nop

    // 0x00272C14: bc1f        L_00272CA4
    if (!c1cs) {
        // 0x00272C18: nop
    
            goto L_00272CA4;
    }
    // 0x00272C18: nop

    // 0x00272C1C: j           L_00272C44
    // 0x00272C20: nop

        goto L_00272C44;
    // 0x00272C20: nop

L_00272C24:
    // 0x00272C24: lhu         $a0, 0x90($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X90);
    // 0x00272C28: jal         0x0026D210
    // 0x00272C2C: nop

    func_0026D210(rdram, ctx);
        goto after_4;
    // 0x00272C2C: nop

    after_4:
    // 0x00272C30: lwc1        $f1, 0x98($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X98);
    // 0x00272C34: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00272C38: nop

    // 0x00272C3C: bc1f        L_00272CA4
    if (!c1cs) {
        // 0x00272C40: nop
    
            goto L_00272CA4;
    }
    // 0x00272C40: nop

L_00272C44:
    // 0x00272C44: lwc1        $f0, 0x98($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X98);
    // 0x00272C48: lwc1        $f1, 0x9C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X9C);
    // 0x00272C4C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00272C50: beq         $s1, $zero, L_00272C74
    if (ctx->r17 == 0) {
        // 0x00272C54: swc1        $f0, 0x98($s0)
        MEM_W(0X98, ctx->r16) = ctx->f0.u32l;
            goto L_00272C74;
    }
    // 0x00272C54: swc1        $f0, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f0.u32l;
    // 0x00272C58: lhu         $a0, 0x90($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X90);
    // 0x00272C5C: jal         0x0026D210
    // 0x00272C60: nop

    func_0026D210(rdram, ctx);
        goto after_5;
    // 0x00272C60: nop

    after_5:
    // 0x00272C64: lwc1        $f1, 0x98($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X98);
    // 0x00272C68: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00272C6C: j           L_00272C88
    // 0x00272C70: nop

        goto L_00272C88;
    // 0x00272C70: nop

L_00272C74:
    // 0x00272C74: lhu         $a0, 0x90($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X90);
    // 0x00272C78: jal         0x0026D210
    // 0x00272C7C: nop

    func_0026D210(rdram, ctx);
        goto after_6;
    // 0x00272C7C: nop

    after_6:
    // 0x00272C80: lwc1        $f1, 0x98($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X98);
    // 0x00272C84: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
L_00272C88:
    // 0x00272C88: nop

    // 0x00272C8C: bc1f        L_00272CA4
    if (!c1cs) {
        // 0x00272C90: nop
    
            goto L_00272CA4;
    }
    // 0x00272C90: nop

    // 0x00272C94: lhu         $a0, 0x90($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X90);
    // 0x00272C98: jal         0x0026D210
    // 0x00272C9C: nop

    func_0026D210(rdram, ctx);
        goto after_7;
    // 0x00272C9C: nop

    after_7:
    // 0x00272CA0: swc1        $f0, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f0.u32l;
L_00272CA4:
    // 0x00272CA4: lwc1        $f0, 0x98($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X98);
    // 0x00272CA8: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00272CAC: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x00272CB0: j           L_00272CE8
    // 0x00272CB4: sh          $v0, 0x18($s2)
    MEM_H(0X18, ctx->r18) = ctx->r2;
        goto L_00272CE8;
    // 0x00272CB4: sh          $v0, 0x18($s2)
    MEM_H(0X18, ctx->r18) = ctx->r2;
L_00272CB8:
    // 0x00272CB8: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x00272CBC: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x00272CC0: beq         $v0, $zero, L_00272D20
    if (ctx->r2 == 0) {
        // 0x00272CC4: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_00272D20;
    }
    // 0x00272CC4: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x00272CC8: lw          $v0, 0xC0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC0);
    // 0x00272CCC: bne         $v0, $zero, L_00272D20
    if (ctx->r2 != 0) {
        // 0x00272CD0: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_00272D20;
    }
    // 0x00272CD0: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x00272CD4: lw          $v0, 0xB0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XB0);
    // 0x00272CD8: lw          $a1, 0x2B98($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X2B98);
    // 0x00272CDC: jal         0x00271E20
    // 0x00272CE0: addiu       $a0, $s0, 0x44
    ctx->r4 = ADD32(ctx->r16, 0X44);
    func_00271E20(rdram, ctx);
        goto after_8;
    // 0x00272CE0: addiu       $a0, $s0, 0x44
    ctx->r4 = ADD32(ctx->r16, 0X44);
    after_8:
    // 0x00272CE4: sh          $v0, 0x18($s2)
    MEM_H(0X18, ctx->r18) = ctx->r2;
L_00272CE8:
    // 0x00272CE8: lw          $v1, 0xB0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XB0);
    // 0x00272CEC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00272CF0: lbu         $s0, 0x19($s2)
    ctx->r16 = MEM_BU(ctx->r18, 0X19);
    // 0x00272CF4: addiu       $s1, $v1, 0x84
    ctx->r17 = ADD32(ctx->r3, 0X84);
    // 0x00272CF8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00272CFC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00272D00: lh          $a1, 0xDC($v1)
    ctx->r5 = MEM_H(ctx->r3, 0XDC);
    // 0x00272D04: jal         0x00293E60
    // 0x00272D08: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00293E60(rdram, ctx);
        goto after_9;
    // 0x00272D08: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_9:
    // 0x00272D0C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00272D10: jal         0x00293D90
    // 0x00272D14: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    func_00293D90(rdram, ctx);
        goto after_10;
    // 0x00272D14: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    after_10:
    // 0x00272D18: j           L_00272D24
    // 0x00272D1C: nop

        goto L_00272D24;
    // 0x00272D1C: nop

L_00272D20:
    // 0x00272D20: sh          $v0, 0x18($s2)
    MEM_H(0X18, ctx->r18) = ctx->r2;
L_00272D24:
    // 0x00272D24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00272D28: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00272D2C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00272D30: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00272D34: jr          $ra
    // 0x00272D38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00272D38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00422060(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00422060: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00422064: lw          $v0, 0x201C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X201C);
    // 0x00422068: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0042206C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00422070: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x00422074: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x00422078: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x0042207C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00422080: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x00422084: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00422088: mfc1        $s1, $f2
    ctx->r17 = (int32_t)ctx->f2.u32l;
    // 0x0042208C: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x00422090: lwc1        $f1, 0x14($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X14);
    // 0x00422094: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00422098: mfc1        $s3, $f2
    ctx->r19 = (int32_t)ctx->f2.u32l;
    // 0x0042209C: trunc.w.s   $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x004220A0: mfc1        $s2, $f2
    ctx->r18 = (int32_t)ctx->f2.u32l;
    // 0x004220A4: jal         0x004160F0
    // 0x004220A8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x004220A8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x004220AC: addiu       $v0, $v0, -0x9
    ctx->r2 = ADD32(ctx->r2, -0X9);
    // 0x004220B0: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x004220B4: addiu       $a1, $a1, 0x1418
    ctx->r5 = ADD32(ctx->r5, 0X1418);
    // 0x004220B8: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x004220BC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x004220C0: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    // 0x004220C4: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x004220C8: jal         0x0029E3E0
    // 0x004220CC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_1;
    // 0x004220CC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_1:
    // 0x004220D0: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x004220D4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x004220D8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x004220DC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x004220E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x004220E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004220E8: jr          $ra
    // 0x004220EC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x004220EC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00234C88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00234C88: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00234C8C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x00234C90: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00234C94: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x00234C98: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00234C9C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00234CA0: lwc1        $f0, 0x30($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X30);
    // 0x00234CA4: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x00234CA8: trunc.w.s   $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(1 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00234CAC: swc1        $f1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00234CB0: lbu         $v1, 0x1E($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1E);
    // 0x00234CB4: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x00234CB8: beq         $v0, $zero, L_00234E2C
    if (ctx->r2 == 0) {
        // 0x00234CBC: addiu       $s0, $sp, 0x10
        ctx->r16 = ADD32(ctx->r29, 0X10);
            goto L_00234E2C;
    }
    // 0x00234CBC: addiu       $s0, $sp, 0x10
    ctx->r16 = ADD32(ctx->r29, 0X10);
    // 0x00234CC0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00234CC4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00234CC8: addu        $at, $at, $v0
    gpr jr_addend_00234CD0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00234CCC: lw          $v0, 0x6490($at)
    ctx->r2 = ADD32(ctx->r1, 0X6490);
    // 0x00234CD0: jr          $v0
    // 0x00234CD4: nop

    switch (jr_addend_00234CD0 >> 2) {
        case 0: goto L_00234CD8; break;
        case 1: goto L_00234D04; break;
        case 2: goto L_00234D20; break;
        case 3: goto L_00234D2C; break;
        case 4: goto L_00234D98; break;
        case 5: goto L_00234DD8; break;
        default: switch_error(__func__, 0x00234CD0, 0x800A6490);
    }
    // 0x00234CD4: nop

L_00234CD8:
    // 0x00234CD8: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x00234CDC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00234CE0: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00234CE4: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00234CE8: bne         $v0, $zero, L_00234E2C
    if (ctx->r2 != 0) {
        // 0x00234CEC: nop
    
            goto L_00234E2C;
    }
    // 0x00234CEC: nop

    // 0x00234CF0: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x00234CF4: lwc1        $f0, 0x0($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X0);
    // 0x00234CF8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00234CFC: j           L_00234E2C
    // 0x00234D00: swc1        $f0, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->f0.u32l;
        goto L_00234E2C;
    // 0x00234D00: swc1        $f0, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->f0.u32l;
L_00234D04:
    // 0x00234D04: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00234D08: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x00234D0C: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00234D10: bne         $v0, $zero, L_00234E2C
    if (ctx->r2 != 0) {
        // 0x00234D14: addiu       $v0, $v1, -0x1
        ctx->r2 = ADD32(ctx->r3, -0X1);
            goto L_00234E2C;
    }
    // 0x00234D14: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x00234D18: j           L_00234E2C
    // 0x00234D1C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
        goto L_00234E2C;
    // 0x00234D1C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
L_00234D20:
    // 0x00234D20: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00234D24: j           L_00234DA0
    // 0x00234D28: nop

        goto L_00234DA0;
    // 0x00234D28: nop

L_00234D2C:
    // 0x00234D2C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00234D30: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00234D34: addiu       $v1, $v0, -0x2
    ctx->r3 = ADD32(ctx->r2, -0X2);
    // 0x00234D38: blezl       $v1, L_00234D78
    if (SIGNED(ctx->r3) <= 0) {
        // 0x00234D3C: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00234D78;
    }
    goto skip_0;
    // 0x00234D3C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    skip_0:
    // 0x00234D40: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00234D44: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x00234D48: bne         $v1, $zero, L_00234D54
    if (ctx->r3 != 0) {
        // 0x00234D4C: nop
    
            goto L_00234D54;
    }
    // 0x00234D4C: nop

    // 0x00234D50: break       7
    do_break(2313552);
L_00234D54:
    // 0x00234D54: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x00234D58: bne         $v1, $at, L_00234D6C
    if (ctx->r3 != ctx->r1) {
        // 0x00234D5C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_00234D6C;
    }
    // 0x00234D5C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x00234D60: bne         $v0, $at, L_00234D6C
    if (ctx->r2 != ctx->r1) {
        // 0x00234D64: nop
    
            goto L_00234D6C;
    }
    // 0x00234D64: nop

    // 0x00234D68: break       6
    do_break(2313576);
L_00234D6C:
    // 0x00234D6C: mfhi        $v1
    ctx->r3 = hi;
    // 0x00234D70: j           L_00234D7C
    // 0x00234D74: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
        goto L_00234D7C;
    // 0x00234D74: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
L_00234D78:
    // 0x00234D78: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
L_00234D7C:
    // 0x00234D7C: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x00234D80: slt         $v0, $v1, $a2
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x00234D84: bne         $v0, $zero, L_00234E2C
    if (ctx->r2 != 0) {
        // 0x00234D88: sll         $v0, $a2, 1
        ctx->r2 = S32(ctx->r6 << 1);
            goto L_00234E2C;
    }
    // 0x00234D88: sll         $v0, $a2, 1
    ctx->r2 = S32(ctx->r6 << 1);
    // 0x00234D8C: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x00234D90: j           L_00234E28
    // 0x00234D94: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
        goto L_00234E28;
    // 0x00234D94: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
L_00234D98:
    // 0x00234D98: jal         0x002113A4
    // 0x00234D9C: nop

    func_002113A4(rdram, ctx);
        goto after_0;
    // 0x00234D9C: nop

    after_0:
L_00234DA0:
    // 0x00234DA0: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x00234DA4: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x00234DA8: bne         $v1, $zero, L_00234DB4
    if (ctx->r3 != 0) {
        // 0x00234DAC: nop
    
            goto L_00234DB4;
    }
    // 0x00234DAC: nop

    // 0x00234DB0: break       7
    do_break(2313648);
L_00234DB4:
    // 0x00234DB4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x00234DB8: bne         $v1, $at, L_00234DCC
    if (ctx->r3 != ctx->r1) {
        // 0x00234DBC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_00234DCC;
    }
    // 0x00234DBC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x00234DC0: bne         $v0, $at, L_00234DCC
    if (ctx->r2 != ctx->r1) {
        // 0x00234DC4: nop
    
            goto L_00234DCC;
    }
    // 0x00234DC4: nop

    // 0x00234DC8: break       6
    do_break(2313672);
L_00234DCC:
    // 0x00234DCC: mfhi        $v1
    ctx->r3 = hi;
    // 0x00234DD0: j           L_00234E2C
    // 0x00234DD4: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
        goto L_00234E2C;
    // 0x00234DD4: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
L_00234DD8:
    // 0x00234DD8: lw          $v1, 0x38($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X38);
    // 0x00234DDC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00234DE0: bne         $v1, $v0, L_00234E24
    if (ctx->r3 != ctx->r2) {
        // 0x00234DE4: nop
    
            goto L_00234E24;
    }
    // 0x00234DE4: nop

    // 0x00234DE8: jal         0x002113A4
    // 0x00234DEC: nop

    func_002113A4(rdram, ctx);
        goto after_1;
    // 0x00234DEC: nop

    after_1:
    // 0x00234DF0: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x00234DF4: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x00234DF8: bne         $v1, $zero, L_00234E04
    if (ctx->r3 != 0) {
        // 0x00234DFC: nop
    
            goto L_00234E04;
    }
    // 0x00234DFC: nop

    // 0x00234E00: break       7
    do_break(2313728);
L_00234E04:
    // 0x00234E04: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x00234E08: bne         $v1, $at, L_00234E1C
    if (ctx->r3 != ctx->r1) {
        // 0x00234E0C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_00234E1C;
    }
    // 0x00234E0C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x00234E10: bne         $v0, $at, L_00234E1C
    if (ctx->r2 != ctx->r1) {
        // 0x00234E14: nop
    
            goto L_00234E1C;
    }
    // 0x00234E14: nop

    // 0x00234E18: break       6
    do_break(2313752);
L_00234E1C:
    // 0x00234E1C: mfhi        $v1
    ctx->r3 = hi;
    // 0x00234E20: sw          $v1, 0x38($s2)
    MEM_W(0X38, ctx->r18) = ctx->r3;
L_00234E24:
    // 0x00234E24: lw          $v0, 0x38($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X38);
L_00234E28:
    // 0x00234E28: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
L_00234E2C:
    // 0x00234E2C: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x00234E30: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00234E34: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00234E38: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00234E3C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00234E40: jr          $ra
    // 0x00234E44: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00234E44: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00267FA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00267FA8: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x00267FAC: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00267FB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00267FB4: beq         $v1, $v0, L_00267FC4
    if (ctx->r3 == ctx->r2) {
            // 0x00267FB8: nop

    func_00267FC4(rdram, ctx);
    return;
    }
    // 0x00267FB8: nop

    // 0x00267FBC: jr          $ra
    // 0x00267FC0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00267FC0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00271770(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00271770: jr          $ra
    // 0x00271774: sw          $a1, 0x2BA8($a0)
    MEM_W(0X2BA8, ctx->r4) = ctx->r5;
    return;
    // 0x00271774: sw          $a1, 0x2BA8($a0)
    MEM_W(0X2BA8, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_00275BE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00275BE0: jr          $ra
    // 0x00275BE4: nop

    return;
    // 0x00275BE4: nop

;}
RECOMP_FUNC void func_00416C74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00416C74: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00416C78: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00416C7C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00416C80: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x00416C84: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00416C88: lw          $v0, 0x1CC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1CC);
    // 0x00416C8C: beq         $v0, $zero, L_00416D90
    if (ctx->r2 == 0) {
        // 0x00416C90: nop
    
            goto L_00416D90;
    }
    // 0x00416C90: nop

    // 0x00416C94: lw          $a1, 0x1C8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1C8);
    // 0x00416C98: slti        $v0, $a1, 0x18
    ctx->r2 = SIGNED(ctx->r5) < 0X18 ? 1 : 0;
    // 0x00416C9C: bne         $v0, $zero, L_00416CAC
    if (ctx->r2 != 0) {
        // 0x00416CA0: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_00416CAC;
    }
    // 0x00416CA0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00416CA4: addiu       $v0, $zero, 0x2F
    ctx->r2 = ADD32(0, 0X2F);
    // 0x00416CA8: subu        $s1, $v0, $a1
    ctx->r17 = SUB32(ctx->r2, ctx->r5);
L_00416CAC:
    // 0x00416CAC: jal         0x00277F6C
    // 0x00416CB0: nop

    func_00277F6C(rdram, ctx);
        goto after_0;
    // 0x00416CB0: nop

    after_0:
    // 0x00416CB4: jal         0x00207FEC
    // 0x00416CB8: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    func_00207FEC(rdram, ctx);
        goto after_1;
    // 0x00416CB8: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    after_1:
    // 0x00416CBC: lui         $a3, 0xFF00
    ctx->r7 = S32(0XFF00 << 16);
    // 0x00416CC0: ori         $a3, $a3, 0xFF
    ctx->r7 = ctx->r7 | 0XFF;
    // 0x00416CC4: lui         $t0, 0xE000
    ctx->r8 = S32(0XE000 << 16);
    // 0x00416CC8: ori         $t0, $t0, 0xFF
    ctx->r8 = ctx->r8 | 0XFF;
    // 0x00416CCC: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x00416CD0: addiu       $a1, $a1, -0x71DC
    ctx->r5 = ADD32(ctx->r5, -0X71DC);
    // 0x00416CD4: addiu       $a0, $zero, 0x67
    ctx->r4 = ADD32(0, 0X67);
    // 0x00416CD8: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x00416CDC: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    // 0x00416CE0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00416CE4: lwc1        $f1, 0xDF4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XDF4);
    // 0x00416CE8: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x00416CEC: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x00416CF0: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x00416CF4: lwc1        $f2, 0x288($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X288);
    // 0x00416CF8: lwc1        $f3, 0x28C($v0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r2, 0X28C);
    // 0x00416CFC: lui         $v0, 0xFB00
    ctx->r2 = S32(0XFB00 << 16);
    // 0x00416D00: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x00416D04: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x00416D08: sw          $a3, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r7;
    // 0x00416D0C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x00416D10: lui         $v0, 0xFA00
    ctx->r2 = S32(0XFA00 << 16);
    // 0x00416D14: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00416D18: lwc1        $f0, 0x2030($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2030);
    // 0x00416D1C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00416D20: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00416D24: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00416D28: sw          $t0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r8;
    // 0x00416D2C: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    // 0x00416D30: div.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00416D34: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x00416D38: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00416D3C: lwc1        $f0, 0x2034($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x00416D40: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00416D44: div.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = DIV_S(ctx->f3.fl, ctx->f0.fl);
    // 0x00416D48: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00416D4C: lwc1        $f0, 0xDF8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XDF8);
    // 0x00416D50: lwc1        $f1, 0x294($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X294);
    // 0x00416D54: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x00416D58: lwc1        $f0, 0x290($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X290);
    // 0x00416D5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00416D60: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00416D64: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00416D68: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x00416D6C: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x00416D70: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00416D74: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x00416D78: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x00416D7C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x00416D80: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x00416D84: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x00416D88: jal         0x0027B320
    // 0x00416D8C: swc1        $f3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    func_0027B320(rdram, ctx);
        goto after_2;
    // 0x00416D8C: swc1        $f3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    after_2:
L_00416D90:
    // 0x00416D90: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00416D94: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00416D98: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00416D9C: jr          $ra
    // 0x00416DA0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00416DA0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0042464C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042464C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00424650: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
    // 0x00424654: addu        $v1, $t1, $zero
    ctx->r3 = ADD32(ctx->r9, 0);
    // 0x00424658: lui         $t0, 0x8000
    ctx->r8 = S32(0X8000 << 16);
    // 0x0042465C: lw          $t0, 0x300($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X300);
    // 0x00424660: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00424664: beq         $t0, $v0, L_004246A4
    if (ctx->r8 == ctx->r2) {
        // 0x00424668: sw          $ra, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r31;
            goto L_004246A4;
    }
    // 0x00424668: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0042466C: slti        $v0, $t0, 0x2
    ctx->r2 = SIGNED(ctx->r8) < 0X2 ? 1 : 0;
    // 0x00424670: beql        $v0, $zero, L_00424688
    if (ctx->r2 == 0) {
        // 0x00424674: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00424688;
    }
    goto skip_0;
    // 0x00424674: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x00424678: beq         $t0, $zero, L_00424698
    if (ctx->r8 == 0) {
        // 0x0042467C: sltiu       $t0, $a0, 0x141
        ctx->r8 = ctx->r4 < 0X141 ? 1 : 0;
            goto L_00424698;
    }
    // 0x0042467C: sltiu       $t0, $a0, 0x141
    ctx->r8 = ctx->r4 < 0X141 ? 1 : 0;
    // 0x00424680: j           L_004246A8
    // 0x00424684: nop

        goto L_004246A8;
    // 0x00424684: nop

L_00424688:
    // 0x00424688: beq         $t0, $v0, L_004246A0
    if (ctx->r8 == ctx->r2) {
        // 0x0042468C: sltiu       $t0, $a0, 0x141
        ctx->r8 = ctx->r4 < 0X141 ? 1 : 0;
            goto L_004246A0;
    }
    // 0x0042468C: sltiu       $t0, $a0, 0x141
    ctx->r8 = ctx->r4 < 0X141 ? 1 : 0;
    // 0x00424690: j           L_004246A8
    // 0x00424694: nop

        goto L_004246A8;
    // 0x00424694: nop

L_00424698:
    // 0x00424698: j           L_004246A4
    // 0x0042469C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_004246A4;
    // 0x0042469C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_004246A0:
    // 0x004246A0: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_004246A4:
    // 0x004246A4: sltiu       $t0, $a0, 0x141
    ctx->r8 = ctx->r4 < 0X141 ? 1 : 0;
L_004246A8:
    // 0x004246A8: beql        $t0, $zero, L_004246B0
    if (ctx->r8 == 0) {
        // 0x004246AC: ori         $t1, $t1, 0x4
        ctx->r9 = ctx->r9 | 0X4;
            goto L_004246B0;
    }
    goto skip_1;
    // 0x004246AC: ori         $t1, $t1, 0x4
    ctx->r9 = ctx->r9 | 0X4;
    skip_1:
L_004246B0:
    // 0x004246B0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004246B4: lw          $v0, -0x476C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X476C);
    // 0x004246B8: bnel        $v0, $zero, L_004246C0
    if (ctx->r2 != 0) {
        // 0x004246BC: ori         $t1, $t1, 0x2
        ctx->r9 = ctx->r9 | 0X2;
            goto L_004246C0;
    }
    goto skip_2;
    // 0x004246BC: ori         $t1, $t1, 0x2
    ctx->r9 = ctx->r9 | 0X2;
    skip_2:
L_004246C0:
    // 0x004246C0: beql        $t0, $zero, L_004246C8
    if (ctx->r8 == 0) {
        // 0x004246C4: ori         $t1, $t1, 0x1
        ctx->r9 = ctx->r9 | 0X1;
            goto L_004246C8;
    }
    goto skip_3;
    // 0x004246C4: ori         $t1, $t1, 0x1
    ctx->r9 = ctx->r9 | 0X1;
    skip_3:
L_004246C8:
    // 0x004246C8: sll         $v0, $t1, 2
    ctx->r2 = S32(ctx->r9 << 2);
    // 0x004246CC: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x004246D0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x004246D4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004246D8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x004246DC: lhu         $v1, 0x21AA($at)
    ctx->r3 = MEM_HU(ctx->r1, 0X21AA);
    // 0x004246E0: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x004246E4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x004246E8: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x004246EC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004246F0: sh          $v1, 0x9D0($at)
    MEM_H(0X9D0, ctx->r1) = ctx->r3;
    // 0x004246F4: jal         0x00424008
    // 0x004246F8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_00424008(rdram, ctx);
        goto after_0;
    // 0x004246F8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_0:
    // 0x004246FC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00424700: addiu       $v0, $v0, -0x6710
    ctx->r2 = ADD32(ctx->r2, -0X6710);
    // 0x00424704: beq         $v0, $zero, L_00424734
    if (ctx->r2 == 0) {
        // 0x00424708: nop
    
            goto L_00424734;
    }
    // 0x00424708: nop

    // 0x0042470C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00424710: lwc1        $f0, 0x2030($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2030);
    // 0x00424714: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00424718: swc1        $f0, 0x288($v0)
    MEM_W(0X288, ctx->r2) = ctx->f0.u32l;
    // 0x0042471C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00424720: lwc1        $f0, 0x2034($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x00424724: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00424728: sw          $zero, 0x290($v0)
    MEM_W(0X290, ctx->r2) = 0;
    // 0x0042472C: sw          $zero, 0x294($v0)
    MEM_W(0X294, ctx->r2) = 0;
    // 0x00424730: swc1        $f0, 0x28C($v0)
    MEM_W(0X28C, ctx->r2) = ctx->f0.u32l;
L_00424734:
    // 0x00424734: lw          $v0, -0x20($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X20);
    // 0x00424738: beq         $v0, $zero, L_00424774
    if (ctx->r2 == 0) {
        // 0x0042473C: nop
    
            goto L_00424774;
    }
    // 0x0042473C: nop

    // 0x00424740: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00424744: lwc1        $f1, 0x2030($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X2030);
    // 0x00424748: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0042474C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00424750: lwc1        $f0, 0x2034($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x00424754: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00424758: sw          $zero, 0x290($v0)
    MEM_W(0X290, ctx->r2) = 0;
L_0042475C:
    // 0x0042475C: sw          $zero, 0x294($v0)
    MEM_W(0X294, ctx->r2) = 0;
    // 0x00424760: swc1        $f1, 0x288($v0)
    MEM_W(0X288, ctx->r2) = ctx->f_odd[(1 - 1) * 2];
    // 0x00424764: swc1        $f0, 0x28C($v0)
    MEM_W(0X28C, ctx->r2) = ctx->f0.u32l;
    // 0x00424768: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x0042476C: bnel        $v0, $zero, L_0042475C
    if (ctx->r2 != 0) {
        // 0x00424770: sw          $zero, 0x290($v0)
        MEM_W(0X290, ctx->r2) = 0;
            goto L_0042475C;
    }
    goto skip_4;
    // 0x00424770: sw          $zero, 0x290($v0)
    MEM_W(0X290, ctx->r2) = 0;
    skip_4:
L_00424774:
    // 0x00424774: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00424778: jr          $ra
    // 0x0042477C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0042477C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0040DD04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040DD04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0040DD08: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0040DD0C: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x0040DD10: slti        $v0, $v0, 0x7
    ctx->r2 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
    // 0x0040DD14: bne         $v0, $zero, L_0040DD24
    if (ctx->r2 != 0) {
        // 0x0040DD18: nop
    
            goto L_0040DD24;
    }
    // 0x0040DD18: nop

    // 0x0040DD1C: jal         0x00243414
    // 0x0040DD20: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0040DD20: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_0:
L_0040DD24:
    // 0x0040DD24: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0040DD28: jr          $ra
    // 0x0040DD2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040DD2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00444D10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00444D10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00444D14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00444D18: lui         $s0, 0x8011
    ctx->r16 = S32(0X8011 << 16);
    // 0x00444D1C: lw          $s0, -0x14C($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X14C);
    // 0x00444D20: beq         $s0, $zero, L_00444D50
    if (ctx->r16 == 0) {
        // 0x00444D24: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_00444D50;
    }
    // 0x00444D24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
L_00444D28:
    // 0x00444D28: lw          $v0, 0x144($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X144);
    // 0x00444D2C: blez        $v0, L_00444D44
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00444D30: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00444D44;
    }
    // 0x00444D30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00444D34: sw          $zero, 0x144($s0)
    MEM_W(0X144, ctx->r16) = 0;
    // 0x00444D38: addiu       $a1, $s0, 0x140
    ctx->r5 = ADD32(ctx->r16, 0X140);
    // 0x00444D3C: jal         0x00243414
    // 0x00444D40: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00444D40: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    after_0:
L_00444D44:
    // 0x00444D44: lw          $s0, 0x28C($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X28C);
    // 0x00444D48: bne         $s0, $zero, L_00444D28
    if (ctx->r16 != 0) {
        // 0x00444D4C: nop
    
            goto L_00444D28;
    }
    // 0x00444D4C: nop

L_00444D50:
    // 0x00444D50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00444D54: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00444D58: jr          $ra
    // 0x00444D5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00444D5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00245BAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00245BAC: mtc1        $a2, $f0
    ctx->f0.u32l = ctx->r6;
    // 0x00245BB0: mtc1        $a3, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r7;
    // 0x00245BB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00245BB8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00245BBC: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00245BC0: nop

    // 0x00245BC4: bc1t        L_00245BE0
    if (c1cs) {
        // 0x00245BC8: mov.s       $f3, $f1
        CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    ctx->f3.fl = ctx->f1.fl;
            goto L_00245BE0;
    }
    // 0x00245BC8: mov.s       $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    ctx->f3.fl = ctx->f1.fl;
    // 0x00245BCC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x00245BD0: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00245BD4: nop

    // 0x00245BD8: bc1f        L_00245BE4
    if (!c1cs) {
        // 0x00245BDC: nop
    
            goto L_00245BE4;
    }
    // 0x00245BDC: nop

L_00245BE0:
    // 0x00245BE0: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
L_00245BE4:
    // 0x00245BE4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00245BE8: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00245BEC: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00245BF0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00245BF4: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00245BF8: nop

    // 0x00245BFC: bc1f        L_00245C08
    if (!c1cs) {
        // 0x00245C00: mov.s       $f2, $f1
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.fl = ctx->f1.fl;
            goto L_00245C08;
    }
    // 0x00245C00: mov.s       $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.fl = ctx->f1.fl;
    // 0x00245C04: neg.s       $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = -ctx->f1.fl;
L_00245C08:
    // 0x00245C08: c.lt.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl < ctx->f0.fl;
    // 0x00245C0C: nop

    // 0x00245C10: bc1f        L_00245C34
    if (!c1cs) {
        // 0x00245C14: nop
    
            goto L_00245C34;
    }
    // 0x00245C14: nop

    // 0x00245C18: neg.s       $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = -ctx->f3.fl;
    // 0x00245C1C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x00245C20: nop

    // 0x00245C24: bc1tl       L_00245C44
    if (c1cs) {
        // 0x00245C28: mov.s       $f1, $f3
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    ctx->f1.fl = ctx->f3.fl;
            goto L_00245C44;
    }
    goto skip_0;
    // 0x00245C28: mov.s       $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    ctx->f1.fl = ctx->f3.fl;
    skip_0:
    // 0x00245C2C: j           L_00245C44
    // 0x00245C30: nop

        goto L_00245C44;
    // 0x00245C30: nop

L_00245C34:
    // 0x00245C34: c.lt.s      $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f3.fl < ctx->f2.fl;
    // 0x00245C38: nop

    // 0x00245C3C: bc1tl       L_00245C44
    if (c1cs) {
        // 0x00245C40: mov.s       $f1, $f3
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    ctx->f1.fl = ctx->f3.fl;
            goto L_00245C44;
    }
    goto skip_1;
    // 0x00245C40: mov.s       $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    ctx->f1.fl = ctx->f3.fl;
    skip_1:
L_00245C44:
    // 0x00245C44: mfc1        $a1, $f1
    ctx->r5 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x00245C48: jal         0x00246440
    // 0x00245C4C: nop

    func_00246440(rdram, ctx);
        goto after_0;
    // 0x00245C4C: nop

    after_0:
    // 0x00245C50: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00245C54: jr          $ra
    // 0x00245C58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00245C58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0029E2F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_0025AA4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025AA4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025AA50: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025AA54: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025AA58: lhu         $a3, 0x8A($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X8A);
    // 0x0025AA5C: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025AA60: addiu       $a2, $a2, 0x360
    ctx->r6 = ADD32(ctx->r6, 0X360);
    // 0x0025AA64: jal         0x00245A98
    // 0x0025AA68: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025AA68: nop

    after_0:
    // 0x0025AA6C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025AA70: jr          $ra
    // 0x0025AA74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025AA74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00266284(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00266284: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00266288: lh          $a1, 0x28($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X28);
    // 0x0026628C: beq         $a1, $zero, L_002662A0
    if (ctx->r5 == 0) {
        // 0x00266290: addiu       $v1, $zero, -0x2001
        ctx->r3 = ADD32(0, -0X2001);
            goto L_002662A0;
    }
    // 0x00266290: addiu       $v1, $zero, -0x2001
    ctx->r3 = ADD32(0, -0X2001);
    // 0x00266294: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00266298: j           L_002662B0
    // 0x0026629C: ori         $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 | 0X2000;
        goto L_002662B0;
    // 0x0026629C: ori         $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 | 0X2000;
L_002662A0:
    // 0x002662A0: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x002662A4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002662A8: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x002662AC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
L_002662B0:
    // 0x002662B0: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
    // 0x002662B4: jr          $ra
    // 0x002662B8: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    return;
    // 0x002662B8: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
;}
