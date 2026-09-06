#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_0029A560(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029A560: lui         $v0, 0xA404
    ctx->r2 = S32(0XA404 << 16);
    // 0x0029A564: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x0029A568: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0029A56C: jr          $ra
    // 0x0029A570: nop

    return;
    // 0x0029A570: nop

;}
RECOMP_FUNC void func_00247438(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00247438: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x0024743C: sw          $s1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r17;
    // 0x00247440: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00247444: sw          $s0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r16;
    // 0x00247448: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0024744C: sw          $ra, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r31;
    // 0x00247450: sw          $s3, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r19;
    // 0x00247454: jal         0x0020B5B8
    // 0x00247458: sw          $s2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r18;
    func_0020B5B8(rdram, ctx);
        goto after_0;
    // 0x00247458: sw          $s2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r18;
    after_0:
    // 0x0024745C: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x00247460: beq         $v0, $zero, L_00247644
    if (ctx->r2 == 0) {
        // 0x00247464: nop
    
            goto L_00247644;
    }
    // 0x00247464: nop

    // 0x00247468: lw          $v0, 0xB4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XB4);
    // 0x0024746C: beq         $v0, $zero, L_00247644
    if (ctx->r2 == 0) {
        // 0x00247470: lui         $s3, 0xE300
        ctx->r19 = S32(0XE300 << 16);
            goto L_00247644;
    }
    // 0x00247470: lui         $s3, 0xE300
    ctx->r19 = S32(0XE300 << 16);
    // 0x00247474: ori         $s3, $s3, 0x1801
    ctx->r19 = ctx->r19 | 0X1801;
    // 0x00247478: lui         $a1, 0xE300
    ctx->r5 = S32(0XE300 << 16);
    // 0x0024747C: ori         $a1, $a1, 0xC00
    ctx->r5 = ctx->r5 | 0XC00;
    // 0x00247480: lui         $a2, 0xE300
    ctx->r6 = S32(0XE300 << 16);
    // 0x00247484: ori         $a2, $a2, 0x1201
    ctx->r6 = ctx->r6 | 0X1201;
    // 0x00247488: lui         $s2, 0x800E
    ctx->r18 = S32(0X800E << 16);
    // 0x0024748C: addiu       $s2, $s2, -0x71DC
    ctx->r18 = ADD32(ctx->r18, -0X71DC);
    // 0x00247490: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x00247494: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00247498: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024749C: sb          $v0, -0x4734($at)
    MEM_B(-0X4734, ctx->r1) = ctx->r2;
    // 0x002474A0: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x002474A4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002474A8: sb          $v0, -0x4733($at)
    MEM_B(-0X4733, ctx->r1) = ctx->r2;
    // 0x002474AC: addiu       $v0, $zero, 0xC0
    ctx->r2 = ADD32(0, 0XC0);
    // 0x002474B0: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x002474B4: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x002474B8: sw          $v1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r3;
    // 0x002474BC: sw          $s3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r19;
    // 0x002474C0: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x002474C4: addiu       $a0, $v1, 0x8
    ctx->r4 = ADD32(ctx->r3, 0X8);
    // 0x002474C8: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
    // 0x002474CC: sw          $a0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r4;
    // 0x002474D0: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x002474D4: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x002474D8: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x002474DC: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x002474E0: addiu       $v0, $zero, 0x2000
    ctx->r2 = ADD32(0, 0X2000);
    // 0x002474E4: sw          $a2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r6;
    // 0x002474E8: jal         0x0020B5D4
    // 0x002474EC: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    func_0020B5D4(rdram, ctx);
        goto after_1;
    // 0x002474EC: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    after_1:
    // 0x002474F0: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x002474F4: addiu       $a0, $a0, 0x6CB0
    ctx->r4 = ADD32(ctx->r4, 0X6CB0);
    // 0x002474F8: lwc1        $f3, 0x294($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0X294);
    // 0x002474FC: lwc1        $f1, 0x28C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X28C);
    // 0x00247500: lwc1        $f2, 0x290($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X290);
    // 0x00247504: add.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f3.fl;
    // 0x00247508: lwc1        $f0, 0x288($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X288);
    // 0x0024750C: trunc.w.s   $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x00247510: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x00247514: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x00247518: trunc.w.s   $f4, $f3
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    ctx->f4.u32l = TRUNC_W_S(ctx->f3.fl);
    // 0x0024751C: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x00247520: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00247524: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x00247528: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0024752C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x00247530: jal         0x0028852C
    // 0x00247534: nop

    func_0028852C(rdram, ctx);
        goto after_2;
    // 0x00247534: nop

    after_2:
    // 0x00247538: lw          $a1, 0x90($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X90);
    // 0x0024753C: lw          $a2, 0x94($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X94);
    // 0x00247540: lw          $a3, 0x98($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X98);
    // 0x00247544: jal         0x0020FC74
    // 0x00247548: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    func_0020FC74(rdram, ctx);
        goto after_3;
    // 0x00247548: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_3:
    // 0x0024754C: lw          $a1, 0xA0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XA0);
    // 0x00247550: jal         0x00210968
    // 0x00247554: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    func_00210968(rdram, ctx);
        goto after_4;
    // 0x00247554: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_4:
    // 0x00247558: lw          $a1, 0x9C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X9C);
    // 0x0024755C: jal         0x00210790
    // 0x00247560: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    func_00210790(rdram, ctx);
        goto after_5;
    // 0x00247560: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_5:
    // 0x00247564: lw          $a1, 0xA8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XA8);
    // 0x00247568: lw          $a2, 0xAC($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XAC);
    // 0x0024756C: lw          $a3, 0xB0($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XB0);
    // 0x00247570: jal         0x00210318
    // 0x00247574: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    func_00210318(rdram, ctx);
        goto after_6;
    // 0x00247574: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_6:
    // 0x00247578: jal         0x00210C3C
    // 0x0024757C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    func_00210C3C(rdram, ctx);
        goto after_7;
    // 0x0024757C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_7:
    // 0x00247580: addiu       $s0, $sp, 0x58
    ctx->r16 = ADD32(ctx->r29, 0X58);
    // 0x00247584: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00247588: jal         0x0020FF80
    // 0x0024758C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_0020FF80(rdram, ctx);
        goto after_8;
    // 0x0024758C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_8:
    // 0x00247590: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00247594: lw          $v1, 0x2038($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2038);
    // 0x00247598: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0024759C: bne         $v1, $v0, L_002475C0
    if (ctx->r3 != ctx->r2) {
        // 0x002475A0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_002475C0;
    }
    // 0x002475A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002475A4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002475A8: lwc1        $f0, 0x6A5C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6A5C);
    // 0x002475AC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x002475B0: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x002475B4: lw          $a1, -0x2248($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X2248);
    // 0x002475B8: jal         0x00210478
    // 0x002475BC: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    func_00210478(rdram, ctx);
        goto after_9;
    // 0x002475BC: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    after_9:
L_002475C0:
    // 0x002475C0: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x002475C4: lw          $a1, 0x6D1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6D1C);
    // 0x002475C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002475CC: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    // 0x002475D0: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x002475D4: jal         0x0020D274
    // 0x002475D8: addu        $a1, $s1, $a1
    ctx->r5 = ADD32(ctx->r17, ctx->r5);
    func_0020D274(rdram, ctx);
        goto after_10;
    // 0x002475D8: addu        $a1, $s1, $a1
    ctx->r5 = ADD32(ctx->r17, ctx->r5);
    after_10:
    // 0x002475DC: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x002475E0: addiu       $a1, $s1, 0xA8
    ctx->r5 = ADD32(ctx->r17, 0XA8);
    // 0x002475E4: jal         0x0020F85C
    // 0x002475E8: addiu       $a2, $sp, 0x98
    ctx->r6 = ADD32(ctx->r29, 0X98);
    func_0020F85C(rdram, ctx);
        goto after_11;
    // 0x002475E8: addiu       $a2, $sp, 0x98
    ctx->r6 = ADD32(ctx->r29, 0X98);
    after_11:
    // 0x002475EC: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x002475F0: addiu       $a2, $a2, -0x4F30
    ctx->r6 = ADD32(ctx->r6, -0X4F30);
    // 0x002475F4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x002475F8: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x002475FC: lw          $a1, 0x6D1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6D1C);
    // 0x00247600: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00247604: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00247608: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x0024760C: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    // 0x00247610: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x00247614: jal         0x0020B7F8
    // 0x00247618: addu        $a1, $s1, $a1
    ctx->r5 = ADD32(ctx->r17, ctx->r5);
    func_0020B7F8(rdram, ctx);
        goto after_12;
    // 0x00247618: addu        $a1, $s1, $a1
    ctx->r5 = ADD32(ctx->r17, ctx->r5);
    after_12:
    // 0x0024761C: jal         0x0020B624
    // 0x00247620: nop

    func_0020B624(rdram, ctx);
        goto after_13;
    // 0x00247620: nop

    after_13:
    // 0x00247624: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00247628: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024762C: sb          $zero, -0x4734($at)
    MEM_B(-0X4734, ctx->r1) = 0;
    // 0x00247630: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00247634: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x00247638: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x0024763C: sw          $s3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r19;
    // 0x00247640: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
L_00247644:
    // 0x00247644: lw          $ra, 0xB8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XB8);
    // 0x00247648: lw          $s3, 0xB4($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XB4);
    // 0x0024764C: lw          $s2, 0xB0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XB0);
    // 0x00247650: lw          $s1, 0xAC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XAC);
    // 0x00247654: lw          $s0, 0xA8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA8);
    // 0x00247658: jr          $ra
    // 0x0024765C: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    return;
    // 0x0024765C: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
;}
RECOMP_FUNC void func_00429460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00429460: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x00429464: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x00429468: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0042946C: sw          $s6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r22;
    // 0x00429470: addu        $s6, $a1, $zero
    ctx->r22 = ADD32(ctx->r5, 0);
    // 0x00429474: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x00429478: sw          $s5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r21;
    // 0x0042947C: sw          $s4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r20;
    // 0x00429480: sw          $s3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r19;
    // 0x00429484: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x00429488: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x0042948C: lbu         $v0, 0x65($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X65);
    // 0x00429490: beq         $v0, $zero, L_004294A8
    if (ctx->r2 == 0) {
        // 0x00429494: addu        $s4, $a2, $zero
        ctx->r20 = ADD32(ctx->r6, 0);
            goto L_004294A8;
    }
    // 0x00429494: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x00429498: jal         0x00429EC4
    // 0x0042949C: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    func_00429EC4(rdram, ctx);
        goto after_0;
    // 0x0042949C: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    after_0:
    // 0x004294A0: bne         $v0, $zero, L_00429720
    if (ctx->r2 != 0) {
        // 0x004294A4: nop
    
            goto L_00429720;
    }
    // 0x004294A4: nop

L_004294A8:
    // 0x004294A8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x004294AC: jal         0x0029DFC0
    // 0x004294B0: sw          $v0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r2;
    func_0029DFC0(rdram, ctx);
        goto after_1;
    // 0x004294B0: sw          $v0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r2;
    after_1:
    // 0x004294B4: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x004294B8: sw          $v0, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r2;
    // 0x004294BC: lw          $v0, 0x8($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X8);
    // 0x004294C0: lw          $v1, 0xC($s6)
    ctx->r3 = MEM_W(ctx->r22, 0XC);
    // 0x004294C4: addiu       $s3, $sp, 0x18
    ctx->r19 = ADD32(ctx->r29, 0X18);
    // 0x004294C8: sw          $v0, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r2;
    // 0x004294CC: sw          $v1, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r3;
    // 0x004294D0: lw          $v0, 0x10($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X10);
    // 0x004294D4: lw          $v1, 0x14($s6)
    ctx->r3 = MEM_W(ctx->r22, 0X14);
    // 0x004294D8: addiu       $s5, $sp, 0x38
    ctx->r21 = ADD32(ctx->r29, 0X38);
    // 0x004294DC: sw          $v0, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r2;
    // 0x004294E0: sw          $v1, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->r3;
    // 0x004294E4: sb          $s1, 0x65($s2)
    MEM_B(0X65, ctx->r18) = ctx->r17;
L_004294E8:
    // 0x004294E8: jal         0x00429EC4
    // 0x004294EC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00429EC4(rdram, ctx);
        goto after_2;
    // 0x004294EC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_2:
    // 0x004294F0: bne         $v0, $zero, L_00429720
    if (ctx->r2 != 0) {
        // 0x004294F4: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_00429720;
    }
    // 0x004294F4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x004294F8: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x004294FC: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x00429500: jal         0x00299680
    // 0x00429504: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    func_00299680(rdram, ctx);
        goto after_3;
    // 0x00429504: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    after_3:
    // 0x00429508: bne         $v0, $zero, L_00429720
    if (ctx->r2 != 0) {
        // 0x0042950C: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_00429720;
    }
    // 0x0042950C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x00429510: ori         $v0, $s1, 0x80
    ctx->r2 = ctx->r17 | 0X80;
    // 0x00429514: sb          $v0, 0x18($sp)
    MEM_B(0X18, ctx->r29) = ctx->r2;
    // 0x00429518: addu        $v0, $s3, $s0
    ctx->r2 = ADD32(ctx->r19, ctx->r16);
L_0042951C:
    // 0x0042951C: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x00429520: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00429524: nor         $v1, $zero, $v1
    ctx->r3 = ~(0 | ctx->r3);
    // 0x00429528: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    // 0x0042952C: slti        $v0, $s0, 0x20
    ctx->r2 = SIGNED(ctx->r16) < 0X20 ? 1 : 0;
    // 0x00429530: bne         $v0, $zero, L_0042951C
    if (ctx->r2 != 0) {
        // 0x00429534: addu        $v0, $s3, $s0
        ctx->r2 = ADD32(ctx->r19, ctx->r16);
            goto L_0042951C;
    }
    // 0x00429534: addu        $v0, $s3, $s0
    ctx->r2 = ADD32(ctx->r19, ctx->r16);
    // 0x00429538: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0042953C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00429540: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x00429544: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x00429548: jal         0x00299A40
    // 0x0042954C: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    func_00299A40(rdram, ctx);
        goto after_4;
    // 0x0042954C: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    after_4:
    // 0x00429550: bne         $v0, $zero, L_00429720
    if (ctx->r2 != 0) {
        // 0x00429554: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_00429720;
    }
    // 0x00429554: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00429558: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x0042955C: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x00429560: jal         0x00299680
    // 0x00429564: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    func_00299680(rdram, ctx);
        goto after_5;
    // 0x00429564: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    after_5:
    // 0x00429568: bne         $v0, $zero, L_00429720
    if (ctx->r2 != 0) {
        // 0x0042956C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00429720;
    }
    // 0x0042956C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00429570: addu        $v0, $s5, $s0
    ctx->r2 = ADD32(ctx->r21, ctx->r16);
L_00429574:
    // 0x00429574: addu        $v1, $s3, $s0
    ctx->r3 = ADD32(ctx->r19, ctx->r16);
    // 0x00429578: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x0042957C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00429580: bne         $a0, $v0, L_0042959C
    if (ctx->r4 != ctx->r2) {
        // 0x00429584: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_0042959C;
    }
    // 0x00429584: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x00429588: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0042958C: slti        $v0, $s0, 0x20
    ctx->r2 = SIGNED(ctx->r16) < 0X20 ? 1 : 0;
    // 0x00429590: bne         $v0, $zero, L_00429574
    if (ctx->r2 != 0) {
        // 0x00429594: addu        $v0, $s5, $s0
        ctx->r2 = ADD32(ctx->r21, ctx->r16);
            goto L_00429574;
    }
    // 0x00429594: addu        $v0, $s5, $s0
    ctx->r2 = ADD32(ctx->r21, ctx->r16);
    // 0x00429598: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
L_0042959C:
    // 0x0042959C: bnel        $s0, $v0, L_004295FC
    if (ctx->r16 != ctx->r2) {
        // 0x004295A0: sb          $zero, 0x65($s2)
        MEM_B(0X65, ctx->r18) = 0;
            goto L_004295FC;
    }
    goto skip_0;
    // 0x004295A0: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    skip_0:
    // 0x004295A4: blezl       $s1, L_004295EC
    if (SIGNED(ctx->r17) <= 0) {
        // 0x004295A8: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_004295EC;
    }
    goto skip_1;
    // 0x004295A8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_1:
    // 0x004295AC: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    // 0x004295B0: jal         0x00429EC4
    // 0x004295B4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00429EC4(rdram, ctx);
        goto after_6;
    // 0x004295B4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_6:
    // 0x004295B8: bne         $v0, $zero, L_00429720
    if (ctx->r2 != 0) {
        // 0x004295BC: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_00429720;
    }
    // 0x004295BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x004295C0: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x004295C4: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x004295C8: jal         0x00299680
    // 0x004295CC: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    func_00299680(rdram, ctx);
        goto after_7;
    // 0x004295CC: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    after_7:
    // 0x004295D0: bne         $v0, $zero, L_00429720
    if (ctx->r2 != 0) {
        // 0x004295D4: nop
    
            goto L_00429720;
    }
    // 0x004295D4: nop

    // 0x004295D8: lbu         $v1, 0x18($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X18);
    // 0x004295DC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x004295E0: bnel        $v1, $v0, L_004295FC
    if (ctx->r3 != ctx->r2) {
        // 0x004295E4: sb          $zero, 0x65($s2)
        MEM_B(0X65, ctx->r18) = 0;
            goto L_004295FC;
    }
    goto skip_2;
    // 0x004295E4: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    skip_2:
    // 0x004295E8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_004295EC:
    // 0x004295EC: slti        $v0, $s1, 0x3E
    ctx->r2 = SIGNED(ctx->r17) < 0X3E ? 1 : 0;
    // 0x004295F0: bnel        $v0, $zero, L_004294E8
    if (ctx->r2 != 0) {
        // 0x004295F4: sb          $s1, 0x65($s2)
        MEM_B(0X65, ctx->r18) = ctx->r17;
            goto L_004294E8;
    }
    goto skip_3;
    // 0x004295F4: sb          $s1, 0x65($s2)
    MEM_B(0X65, ctx->r18) = ctx->r17;
    skip_3:
    // 0x004295F8: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
L_004295FC:
    // 0x004295FC: jal         0x00429EC4
    // 0x00429600: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00429EC4(rdram, ctx);
        goto after_8;
    // 0x00429600: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_8:
    // 0x00429604: bne         $v0, $zero, L_00429720
    if (ctx->r2 != 0) {
        // 0x00429608: addiu       $a2, $s4, 0x1C
        ctx->r6 = ADD32(ctx->r20, 0X1C);
            goto L_00429720;
    }
    // 0x00429608: addiu       $a2, $s4, 0x1C
    ctx->r6 = ADD32(ctx->r20, 0X1C);
    // 0x0042960C: addiu       $a1, $s4, 0x1E
    ctx->r5 = ADD32(ctx->r20, 0X1E);
    // 0x00429610: lhu         $v0, 0x18($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X18);
    // 0x00429614: slt         $v1, $zero, $s1
    ctx->r3 = SIGNED(0) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x00429618: sb          $s1, 0x1A($s4)
    MEM_B(0X1A, ctx->r20) = ctx->r17;
    // 0x0042961C: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x00429620: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00429624: sh          $v1, 0x18($s4)
    MEM_H(0X18, ctx->r20) = ctx->r3;
    // 0x00429628: lbu         $v0, 0x1B($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X1B);
    // 0x0042962C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00429630: sh          $zero, 0x1E($s4)
    MEM_H(0X1E, ctx->r20) = 0;
    // 0x00429634: sh          $zero, 0x1C($s4)
    MEM_H(0X1C, ctx->r20) = 0;
    // 0x00429638: sb          $v0, 0x1B($s4)
    MEM_B(0X1B, ctx->r20) = ctx->r2;
    // 0x0042963C: addu        $v0, $s4, $a0
    ctx->r2 = ADD32(ctx->r20, ctx->r4);
L_00429640:
    // 0x00429640: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x00429644: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x00429648: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x0042964C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00429650: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
    // 0x00429654: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x00429658: nor         $v1, $zero, $v1
    ctx->r3 = ~(0 | ctx->r3);
    // 0x0042965C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00429660: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x00429664: sltiu       $v0, $a0, 0x1C
    ctx->r2 = ctx->r4 < 0X1C ? 1 : 0;
    // 0x00429668: bne         $v0, $zero, L_00429640
    if (ctx->r2 != 0) {
        // 0x0042966C: addu        $v0, $s4, $a0
        ctx->r2 = ADD32(ctx->r20, ctx->r4);
            goto L_00429640;
    }
    // 0x0042966C: addu        $v0, $s4, $a0
    ctx->r2 = ADD32(ctx->r20, ctx->r4);
    // 0x00429670: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00429674: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x00429678: addiu       $s1, $sp, 0x58
    ctx->r17 = ADD32(ctx->r29, 0X58);
    // 0x0042967C: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00429680: sh          $v0, 0x58($sp)
    MEM_H(0X58, ctx->r29) = ctx->r2;
    // 0x00429684: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00429688: sh          $v0, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r2;
    // 0x0042968C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00429690: sh          $v0, 0x5C($sp)
    MEM_H(0X5C, ctx->r29) = ctx->r2;
    // 0x00429694: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x00429698: sh          $v0, 0x5E($sp)
    MEM_H(0X5E, ctx->r29) = ctx->r2;
L_0042969C:
    // 0x0042969C: lhu         $a2, 0x0($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X0);
    // 0x004296A0: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x004296A4: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x004296A8: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x004296AC: jal         0x00299A40
    // 0x004296B0: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    func_00299A40(rdram, ctx);
        goto after_9;
    // 0x004296B0: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    after_9:
    // 0x004296B4: bne         $v0, $zero, L_00429720
    if (ctx->r2 != 0) {
        // 0x004296B8: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00429720;
    }
    // 0x004296B8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x004296BC: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x004296C0: bne         $v0, $zero, L_0042969C
    if (ctx->r2 != 0) {
        // 0x004296C4: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_0042969C;
    }
    // 0x004296C4: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x004296C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x004296CC: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x004296D0: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x004296D4: jal         0x00299680
    // 0x004296D8: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    func_00299680(rdram, ctx);
        goto after_10;
    // 0x004296D8: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    after_10:
    // 0x004296DC: beq         $v0, $zero, L_004296F4
    if (ctx->r2 == 0) {
        // 0x004296E0: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_004296F4;
    }
    // 0x004296E0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x004296E4: j           L_00429720
    // 0x004296E8: nop

        goto L_00429720;
    // 0x004296E8: nop

L_004296EC:
    // 0x004296EC: j           L_00429720
    // 0x004296F0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_00429720;
    // 0x004296F0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_004296F4:
    // 0x004296F4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x004296F8: addu        $v0, $a1, $s0
    ctx->r2 = ADD32(ctx->r5, ctx->r16);
L_004296FC:
    // 0x004296FC: addu        $v1, $s4, $s0
    ctx->r3 = ADD32(ctx->r20, ctx->r16);
    // 0x00429700: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x00429704: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00429708: bne         $a0, $v0, L_004296EC
    if (ctx->r4 != ctx->r2) {
        // 0x0042970C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_004296EC;
    }
    // 0x0042970C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00429710: slti        $v0, $s0, 0x20
    ctx->r2 = SIGNED(ctx->r16) < 0X20 ? 1 : 0;
    // 0x00429714: bne         $v0, $zero, L_004296FC
    if (ctx->r2 != 0) {
        // 0x00429718: addu        $v0, $a1, $s0
        ctx->r2 = ADD32(ctx->r5, ctx->r16);
            goto L_004296FC;
    }
    // 0x00429718: addu        $v0, $a1, $s0
    ctx->r2 = ADD32(ctx->r5, ctx->r16);
    // 0x0042971C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00429720:
    // 0x00429720: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    // 0x00429724: lw          $s6, 0x78($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X78);
    // 0x00429728: lw          $s5, 0x74($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X74);
    // 0x0042972C: lw          $s4, 0x70($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X70);
    // 0x00429730: lw          $s3, 0x6C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X6C);
    // 0x00429734: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x00429738: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x0042973C: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x00429740: jr          $ra
    // 0x00429744: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x00429744: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_00425AB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00425AB8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00425ABC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x00425AC0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x00425AC4: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x00425AC8: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x00425ACC: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00425AD0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00425AD4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00425AD8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00425ADC: jal         0x00285878
    // 0x00425AE0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_00285878(rdram, ctx);
        goto after_0;
    // 0x00425AE0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x00425AE4: jal         0x002847E0
    // 0x00425AE8: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    func_002847E0(rdram, ctx);
        goto after_1;
    // 0x00425AE8: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    after_1:
    // 0x00425AEC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00425AF0: addiu       $s6, $zero, 0x2
    ctx->r22 = ADD32(0, 0X2);
    // 0x00425AF4: addiu       $s5, $zero, 0x3
    ctx->r21 = ADD32(0, 0X3);
    // 0x00425AF8: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x00425AFC: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x00425B00: addiu       $s1, $s1, 0xC60
    ctx->r17 = ADD32(ctx->r17, 0XC60);
    // 0x00425B04: addu        $s3, $s2, $zero
    ctx->r19 = ADD32(ctx->r18, 0);
    // 0x00425B08: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x00425B0C: addiu       $s0, $s0, 0xAA0
    ctx->r16 = ADD32(ctx->r16, 0XAA0);
    // 0x00425B10: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00425B14: sb          $v0, 0x6750($at)
    MEM_B(0X6750, ctx->r1) = ctx->r2;
L_00425B18:
    // 0x00425B18: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00425B1C: addu        $at, $at, $s3
    ctx->r1 = ADD32(ctx->r1, ctx->r19);
    // 0x00425B20: lbu         $v0, 0x677B($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X677B);
    // 0x00425B24: beq         $v0, $zero, L_00425B34
    if (ctx->r2 == 0) {
        // 0x00425B28: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00425B34;
    }
    // 0x00425B28: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00425B2C: j           L_00425B54
    // 0x00425B30: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
        goto L_00425B54;
    // 0x00425B30: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_00425B34:
    // 0x00425B34: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00425B38: addiu       $a0, $a0, 0x6798
    ctx->r4 = ADD32(ctx->r4, 0X6798);
    // 0x00425B3C: addiu       $a1, $s0, 0x8
    ctx->r5 = ADD32(ctx->r16, 0X8);
    // 0x00425B40: jal         0x00299198
    // 0x00425B44: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_00299198(rdram, ctx);
        goto after_2;
    // 0x00425B44: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_2:
    // 0x00425B48: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x00425B4C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x00425B50: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
L_00425B54:
    // 0x00425B54: beq         $v0, $zero, L_00425B64
    if (ctx->r2 == 0) {
        // 0x00425B58: nop
    
            goto L_00425B64;
    }
    // 0x00425B58: nop

    // 0x00425B5C: j           L_00425B78
    // 0x00425B60: sw          $s6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r22;
        goto L_00425B78;
    // 0x00425B60: sw          $s6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r22;
L_00425B64:
    // 0x00425B64: jal         0x004258E8
    // 0x00425B68: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_004258E8(rdram, ctx);
        goto after_3;
    // 0x00425B68: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
    // 0x00425B6C: beql        $v0, $zero, L_00425B78
    if (ctx->r2 == 0) {
        // 0x00425B70: sw          $s4, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r20;
            goto L_00425B78;
    }
    goto skip_0;
    // 0x00425B70: sw          $s4, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r20;
    skip_0:
    // 0x00425B74: sw          $s5, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r21;
L_00425B78:
    // 0x00425B78: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x00425B7C: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x00425B80: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x00425B84: slti        $v0, $s2, 0x4
    ctx->r2 = SIGNED(ctx->r18) < 0X4 ? 1 : 0;
    // 0x00425B88: bne         $v0, $zero, L_00425B18
    if (ctx->r2 != 0) {
        // 0x00425B8C: addiu       $s0, $s0, 0x70
        ctx->r16 = ADD32(ctx->r16, 0X70);
            goto L_00425B18;
    }
    // 0x00425B8C: addiu       $s0, $s0, 0x70
    ctx->r16 = ADD32(ctx->r16, 0X70);
    // 0x00425B90: jal         0x002858A4
    // 0x00425B94: nop

    func_002858A4(rdram, ctx);
        goto after_4;
    // 0x00425B94: nop

    after_4:
    // 0x00425B98: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x00425B9C: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x00425BA0: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x00425BA4: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00425BA8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00425BAC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00425BB0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00425BB4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00425BB8: jr          $ra
    // 0x00425BBC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00425BBC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00275950(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00275950: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00275954: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00275958: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0027595C: sw          $a0, 0x2B34($at)
    MEM_W(0X2B34, ctx->r1) = ctx->r4;
    // 0x00275960: beq         $a0, $zero, L_00275978
    if (ctx->r4 == 0) {
        // 0x00275964: nop
    
            goto L_00275978;
    }
    // 0x00275964: nop

    // 0x00275968: jal         0x00275ABC
    // 0x0027596C: nop

    func_00275ABC(rdram, ctx);
        goto after_0;
    // 0x0027596C: nop

    after_0:
    // 0x00275970: j           L_00275980
    // 0x00275974: nop

        goto L_00275980;
    // 0x00275974: nop

L_00275978:
    // 0x00275978: jal         0x00275A98
    // 0x0027597C: nop

    func_00275A98(rdram, ctx);
        goto after_1;
    // 0x0027597C: nop

    after_1:
L_00275980:
    // 0x00275980: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00275984: jr          $ra
    // 0x00275988: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00275988: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002360A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002360A0: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x002360A4: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x002360A8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x002360AC: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x002360B0: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x002360B4: sw          $ra, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r31;
    // 0x002360B8: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x002360BC: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x002360C0: sdc1        $f21, 0x70($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X70, ctx->r29);
    // 0x002360C4: sdc1        $f20, 0x68($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X68, ctx->r29);
    // 0x002360C8: lw          $s0, 0x7520($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X7520);
    // 0x002360CC: beq         $s0, $zero, L_0023614C
    if (ctx->r16 == 0) {
        // 0x002360D0: addu        $s3, $a2, $zero
        ctx->r19 = ADD32(ctx->r6, 0);
            goto L_0023614C;
    }
    // 0x002360D0: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x002360D4: mtc1        $zero, $f21
    ctx->f_odd[(21 - 1) * 2] = 0;
    // 0x002360D8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002360DC: lwc1        $f20, 0x6510($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6510);
L_002360E0:
    // 0x002360E0: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x002360E4: bne         $v0, $s2, L_00236140
    if (ctx->r2 != ctx->r18) {
        // 0x002360E8: nop
    
            goto L_00236140;
    }
    // 0x002360E8: nop

    // 0x002360EC: lwc1        $f0, 0x24($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X24);
    // 0x002360F0: c.lt.s      $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f21.fl < ctx->f0.fl;
    // 0x002360F4: nop

    // 0x002360F8: bc1f        L_00236140
    if (!c1cs) {
        // 0x002360FC: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_00236140;
    }
    // 0x002360FC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00236100: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00236104: lw          $a1, 0xC($v0)
    ctx->r5 = MEM_W(ctx->r2, 0XC);
    // 0x00236108: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    // 0x0023610C: jal         0x0020FF80
    // 0x00236110: addu        $a1, $s3, $a1
    ctx->r5 = ADD32(ctx->r19, ctx->r5);
    func_0020FF80(rdram, ctx);
        goto after_0;
    // 0x00236110: addu        $a1, $s3, $a1
    ctx->r5 = ADD32(ctx->r19, ctx->r5);
    after_0:
    // 0x00236114: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x00236118: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x0023611C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x00236120: jal         0x0021034C
    // 0x00236124: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_0021034C(rdram, ctx);
        goto after_1;
    // 0x00236124: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_1:
    // 0x00236128: jal         0x0020F7EC
    // 0x0023612C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_0020F7EC(rdram, ctx);
        goto after_2;
    // 0x0023612C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_2:
    // 0x00236130: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00236134: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00236138: jal         0x002333C0
    // 0x0023613C: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    func_002333C0(rdram, ctx);
        goto after_3;
    // 0x0023613C: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    after_3:
L_00236140:
    // 0x00236140: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x00236144: bne         $s0, $zero, L_002360E0
    if (ctx->r16 != 0) {
        // 0x00236148: nop
    
            goto L_002360E0;
    }
    // 0x00236148: nop

L_0023614C:
    // 0x0023614C: lw          $ra, 0x60($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X60);
    // 0x00236150: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x00236154: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x00236158: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x0023615C: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x00236160: ldc1        $f21, 0x70($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X70);
    // 0x00236164: ldc1        $f20, 0x68($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X68);
    // 0x00236168: jr          $ra
    // 0x0023616C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x0023616C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_00215F4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00215F4C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x00215F50: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x00215F54: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x00215F58: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00215F5C: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x00215F60: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x00215F64: addu        $s6, $a3, $zero
    ctx->r22 = ADD32(ctx->r7, 0);
    // 0x00215F68: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x00215F6C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00215F70: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00215F74: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00215F78: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00215F7C: sdc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X40, ctx->r29);
    // 0x00215F80: sdc1        $f21, 0x38($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X38, ctx->r29);
    // 0x00215F84: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x00215F88: lw          $v0, 0x10($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X10);
    // 0x00215F8C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x00215F90: lw          $s1, 0x0($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X0);
    // 0x00215F94: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x00215F98: jal         0x002017D4
    // 0x00215F9C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00215F9C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x00215FA0: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x00215FA4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00215FA8: jal         0x002017D4
    // 0x00215FAC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00215FAC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x00215FB0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00215FB4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00215FB8: jal         0x002017D4
    // 0x00215FBC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x00215FBC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_2:
    // 0x00215FC0: sll         $v1, $s4, 2
    ctx->r3 = S32(ctx->r20 << 2);
    // 0x00215FC4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00215FC8: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x00215FCC: lwc1        $f21, 0x1C($s0)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r16, 0X1C);
    // 0x00215FD0: lh          $s2, 0xA($v0)
    ctx->r18 = MEM_H(ctx->r2, 0XA);
    // 0x00215FD4: lwc1        $f22, 0x18($s0)
    ctx->f22.u32l = MEM_W(ctx->r16, 0X18);
    // 0x00215FD8: mul.s       $f20, $f20, $f21
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f21.fl);
    // 0x00215FDC: bne         $s2, $v1, L_00216060
    if (ctx->r18 != ctx->r3) {
        // 0x00215FE0: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_00216060;
    }
    // 0x00215FE0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00215FE4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00215FE8: jal         0x002017D4
    // 0x00215FEC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x00215FEC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x00215FF0: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x00215FF4: mult        $s4, $v1
    result = S64(S32(ctx->r20)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00215FF8: mflo        $t1
    ctx->r9 = lo;
    // 0x00215FFC: addiu       $v1, $t1, 0x8
    ctx->r3 = ADD32(ctx->r9, 0X8);
    // 0x00216000: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00216004: lh          $v1, 0xC($v0)
    ctx->r3 = MEM_H(ctx->r2, 0XC);
    // 0x00216008: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021600C: lwc1        $f1, 0x58F4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X58F4);
    // 0x00216010: mtc1        $v1, $f0
    ctx->f0.u32l = ctx->r3;
    // 0x00216014: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00216018: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021601C: swc1        $f0, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->f0.u32l;
    // 0x00216020: lh          $v1, 0xE($v0)
    ctx->r3 = MEM_H(ctx->r2, 0XE);
    // 0x00216024: mtc1        $v1, $f0
    ctx->f0.u32l = ctx->r3;
    // 0x00216028: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0021602C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00216030: swc1        $f0, 0x4($s6)
    MEM_W(0X4, ctx->r22) = ctx->f0.u32l;
    // 0x00216034: lh          $v1, 0x10($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X10);
    // 0x00216038: mtc1        $v1, $f0
    ctx->f0.u32l = ctx->r3;
    // 0x0021603C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00216040: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00216044: swc1        $f0, 0x8($s6)
    MEM_W(0X8, ctx->r22) = ctx->f0.u32l;
    // 0x00216048: lh          $v0, 0x12($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X12);
    // 0x0021604C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00216050: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00216054: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00216058: j           L_00216430
    // 0x0021605C: swc1        $f0, 0xC($s6)
    MEM_W(0XC, ctx->r22) = ctx->f0.u32l;
        goto L_00216430;
    // 0x0021605C: swc1        $f0, 0xC($s6)
    MEM_W(0XC, ctx->r22) = ctx->f0.u32l;
L_00216060:
    // 0x00216060: jal         0x002017D4
    // 0x00216064: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_4;
    // 0x00216064: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
    // 0x00216068: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0021606C: jal         0x002017D4
    // 0x00216070: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x00216070: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_5:
    // 0x00216074: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
    // 0x00216078: lw          $v1, 0xC($s5)
    ctx->r3 = MEM_W(ctx->r21, 0XC);
    // 0x0021607C: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x00216080: bne         $v1, $v0, L_00216110
    if (ctx->r3 != ctx->r2) {
        // 0x00216084: nop
    
            goto L_00216110;
    }
    // 0x00216084: nop

    // 0x00216088: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0021608C: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x00216090: nop

    // 0x00216094: bc1f        L_002160AC
    if (!c1cs) {
        // 0x00216098: nop
    
            goto L_002160AC;
    }
    // 0x00216098: nop

    // 0x0021609C: trunc.w.s   $f3, $f20
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 20);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f20.fl);
    // 0x002160A0: mfc1        $a2, $f3
    ctx->r6 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x002160A4: j           L_002160D4
    // 0x002160A8: nop

        goto L_002160D4;
    // 0x002160A8: nop

L_002160AC:
    // 0x002160AC: trunc.w.s   $f3, $f20
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 20);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f20.fl);
    // 0x002160B0: mfc1        $v0, $f3
    ctx->r2 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x002160B4: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002160B8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002160BC: c.eq.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl == ctx->f20.fl;
    // 0x002160C0: nop

    // 0x002160C4: bc1f        L_002160D0
    if (!c1cs) {
        // 0x002160C8: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_002160D0;
    }
    // 0x002160C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x002160CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_002160D0:
    // 0x002160D0: subu        $a2, $v0, $a2
    ctx->r6 = SUB32(ctx->r2, ctx->r6);
L_002160D4:
    // 0x002160D4: mtc1        $a2, $f0
    ctx->f0.u32l = ctx->r6;
    // 0x002160D8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002160DC: c.le.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl <= ctx->f0.fl;
    // 0x002160E0: nop

    // 0x002160E4: bc1tl       L_002160EC
    if (c1cs) {
        // 0x002160E8: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_002160EC;
    }
    goto skip_0;
    // 0x002160E8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    skip_0:
L_002160EC:
    // 0x002160EC: addiu       $a3, $a2, 0x1
    ctx->r7 = ADD32(ctx->r6, 0X1);
    // 0x002160F0: mtc1        $a3, $f0
    ctx->f0.u32l = ctx->r7;
    // 0x002160F4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002160F8: c.le.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl <= ctx->f0.fl;
    // 0x002160FC: nop

    // 0x00216100: bc1tl       L_002163C0
    if (c1cs) {
        // 0x00216104: addu        $a3, $zero, $zero
        ctx->r7 = ADD32(0, 0);
            goto L_002163C0;
    }
    goto skip_1;
    // 0x00216104: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    skip_1:
    // 0x00216108: j           L_002163C0
    // 0x0021610C: nop

        goto L_002163C0;
    // 0x0021610C: nop

L_00216110:
    // 0x00216110: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00216114: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x00216118: nop

    // 0x0021611C: bc1f        L_00216134
    if (!c1cs) {
        // 0x00216120: nop
    
            goto L_00216134;
    }
    // 0x00216120: nop

    // 0x00216124: trunc.w.s   $f3, $f20
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 20);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f20.fl);
    // 0x00216128: mfc1        $a2, $f3
    ctx->r6 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0021612C: j           L_0021615C
    // 0x00216130: nop

        goto L_0021615C;
    // 0x00216130: nop

L_00216134:
    // 0x00216134: trunc.w.s   $f3, $f20
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 20);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f20.fl);
    // 0x00216138: mfc1        $v0, $f3
    ctx->r2 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0021613C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00216140: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00216144: c.eq.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl == ctx->f20.fl;
    // 0x00216148: nop

    // 0x0021614C: bc1f        L_00216158
    if (!c1cs) {
        // 0x00216150: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_00216158;
    }
    // 0x00216150: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00216154: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_00216158:
    // 0x00216158: subu        $a2, $v0, $a2
    ctx->r6 = SUB32(ctx->r2, ctx->r6);
L_0021615C:
    // 0x0021615C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00216160: lwc1        $f0, 0x58F8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X58F8);
    // 0x00216164: sub.s       $f0, $f22, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f22.fl - ctx->f0.fl;
    // 0x00216168: mtc1        $a2, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r6;
    // 0x0021616C: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00216170: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00216174: nop

    // 0x00216178: bc1f        L_0021628C
    if (!c1cs) {
        // 0x0021617C: nop
    
            goto L_0021628C;
    }
    // 0x0021617C: nop

    // 0x00216180: lw          $v1, 0xC($s5)
    ctx->r3 = MEM_W(ctx->r21, 0XC);
    // 0x00216184: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x00216188: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0021618C: bgezl       $v1, L_002161A4
    if (SIGNED(ctx->r3) >= 0) {
        // 0x00216190: cvt.s.d     $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
            goto L_002161A4;
    }
    goto skip_2;
    // 0x00216190: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    skip_2:
    // 0x00216194: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00216198: ldc1        $f0, 0x5900($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X5900);
    // 0x0021619C: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x002161A0: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
L_002161A4:
    // 0x002161A4: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x002161A8: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x002161AC: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x002161B0: nop

    // 0x002161B4: bc1f        L_002161F0
    if (!c1cs) {
        // 0x002161B8: nop
    
            goto L_002161F0;
    }
    // 0x002161B8: nop

    // 0x002161BC: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x002161C0: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x002161C4: bgezl       $v1, L_002161DC
    if (SIGNED(ctx->r3) >= 0) {
        // 0x002161C8: cvt.s.d     $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
            goto L_002161DC;
    }
    goto skip_3;
    // 0x002161C8: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    skip_3:
    // 0x002161CC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002161D0: ldc1        $f0, 0x5908($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X5908);
    // 0x002161D4: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x002161D8: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
L_002161DC:
    // 0x002161DC: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x002161E0: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x002161E4: mfc1        $a2, $f3
    ctx->r6 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x002161E8: j           L_0021628C
    // 0x002161EC: nop

        goto L_0021628C;
    // 0x002161EC: nop

L_002161F0:
    // 0x002161F0: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x002161F4: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x002161F8: bgezl       $v1, L_00216210
    if (SIGNED(ctx->r3) >= 0) {
        // 0x002161FC: cvt.s.d     $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
            goto L_00216210;
    }
    goto skip_4;
    // 0x002161FC: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    skip_4:
    // 0x00216200: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00216204: ldc1        $f0, 0x5910($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X5910);
    // 0x00216208: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x0021620C: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
L_00216210:
    // 0x00216210: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x00216214: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x00216218: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0021621C: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00216220: mfc1        $v0, $f3
    ctx->r2 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00216224: mtc1        $v0, $f2
    ctx->f2.u32l = ctx->r2;
    // 0x00216228: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x0021622C: bgezl       $v1, L_00216244
    if (SIGNED(ctx->r3) >= 0) {
        // 0x00216230: cvt.s.d     $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
            goto L_00216244;
    }
    goto skip_5;
    // 0x00216230: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    skip_5:
    // 0x00216234: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00216238: ldc1        $f0, 0x5918($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X5918);
    // 0x0021623C: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x00216240: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
L_00216244:
    // 0x00216244: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x00216248: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x0021624C: nop

    // 0x00216250: bc1f        L_0021625C
    if (!c1cs) {
        // 0x00216254: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_0021625C;
    }
    // 0x00216254: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00216258: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_0021625C:
    // 0x0021625C: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x00216260: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00216264: bgezl       $v1, L_0021627C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x00216268: cvt.s.d     $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
            goto L_0021627C;
    }
    goto skip_6;
    // 0x00216268: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    skip_6:
    // 0x0021626C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00216270: ldc1        $f0, 0x5920($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X5920);
    // 0x00216274: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x00216278: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
L_0021627C:
    // 0x0021627C: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x00216280: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00216284: mfc1        $v0, $f3
    ctx->r2 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00216288: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
L_0021628C:
    // 0x0021628C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00216290: lwc1        $f0, 0x5928($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5928);
    // 0x00216294: sub.s       $f0, $f22, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f22.fl - ctx->f0.fl;
    // 0x00216298: addiu       $a3, $a2, 0x1
    ctx->r7 = ADD32(ctx->r6, 0X1);
    // 0x0021629C: mtc1        $a3, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r7;
    // 0x002162A0: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x002162A4: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x002162A8: nop

    // 0x002162AC: bc1f        L_002163C0
    if (!c1cs) {
        // 0x002162B0: nop
    
            goto L_002163C0;
    }
    // 0x002162B0: nop

    // 0x002162B4: lw          $a0, 0xC($s5)
    ctx->r4 = MEM_W(ctx->r21, 0XC);
    // 0x002162B8: mtc1        $a0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r4;
    // 0x002162BC: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x002162C0: bgezl       $a0, L_002162D8
    if (SIGNED(ctx->r4) >= 0) {
        // 0x002162C4: cvt.s.d     $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
            goto L_002162D8;
    }
    goto skip_7;
    // 0x002162C4: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    skip_7:
    // 0x002162C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002162CC: ldc1        $f0, 0x5930($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X5930);
    // 0x002162D0: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x002162D4: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
L_002162D8:
    // 0x002162D8: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x002162DC: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x002162E0: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x002162E4: nop

    // 0x002162E8: bc1f        L_00216324
    if (!c1cs) {
        // 0x002162EC: nop
    
            goto L_00216324;
    }
    // 0x002162EC: nop

    // 0x002162F0: mtc1        $a0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r4;
    // 0x002162F4: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x002162F8: bgezl       $a0, L_00216310
    if (SIGNED(ctx->r4) >= 0) {
        // 0x002162FC: cvt.s.d     $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
            goto L_00216310;
    }
    goto skip_8;
    // 0x002162FC: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    skip_8:
    // 0x00216300: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00216304: ldc1        $f0, 0x5938($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X5938);
    // 0x00216308: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x0021630C: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
L_00216310:
    // 0x00216310: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x00216314: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00216318: mfc1        $a3, $f3
    ctx->r7 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0021631C: j           L_002163C0
    // 0x00216320: nop

        goto L_002163C0;
    // 0x00216320: nop

L_00216324:
    // 0x00216324: mtc1        $a0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r4;
    // 0x00216328: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0021632C: bgezl       $a0, L_00216344
    if (SIGNED(ctx->r4) >= 0) {
        // 0x00216330: cvt.s.d     $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
            goto L_00216344;
    }
    goto skip_9;
    // 0x00216330: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    skip_9:
    // 0x00216334: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00216338: ldc1        $f0, 0x5940($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X5940);
    // 0x0021633C: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x00216340: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
L_00216344:
    // 0x00216344: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x00216348: mtc1        $a0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r4;
    // 0x0021634C: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00216350: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00216354: mfc1        $v0, $f3
    ctx->r2 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00216358: mtc1        $v0, $f2
    ctx->f2.u32l = ctx->r2;
    // 0x0021635C: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x00216360: bgezl       $a0, L_00216378
    if (SIGNED(ctx->r4) >= 0) {
        // 0x00216364: cvt.s.d     $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
            goto L_00216378;
    }
    goto skip_10;
    // 0x00216364: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    skip_10:
    // 0x00216368: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021636C: ldc1        $f0, 0x5948($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X5948);
    // 0x00216370: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x00216374: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
L_00216378:
    // 0x00216378: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x0021637C: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x00216380: nop

    // 0x00216384: bc1f        L_00216390
    if (!c1cs) {
        // 0x00216388: addiu       $a3, $zero, 0x1
        ctx->r7 = ADD32(0, 0X1);
            goto L_00216390;
    }
    // 0x00216388: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x0021638C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
L_00216390:
    // 0x00216390: mtc1        $a0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r4;
    // 0x00216394: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00216398: bgezl       $a0, L_002163B0
    if (SIGNED(ctx->r4) >= 0) {
        // 0x0021639C: cvt.s.d     $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
            goto L_002163B0;
    }
    goto skip_11;
    // 0x0021639C: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    skip_11:
    // 0x002163A0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002163A4: ldc1        $f0, 0x5950($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X5950);
    // 0x002163A8: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x002163AC: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
L_002163B0:
    // 0x002163B0: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x002163B4: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x002163B8: mfc1        $v0, $f3
    ctx->r2 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x002163BC: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
L_002163C0:
    // 0x002163C0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x002163C4: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x002163C8: nop

    // 0x002163CC: bc1f        L_002163E4
    if (!c1cs) {
        // 0x002163D0: nop
    
            goto L_002163E4;
    }
    // 0x002163D0: nop

    // 0x002163D4: trunc.w.s   $f3, $f20
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 20);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f20.fl);
    // 0x002163D8: mfc1        $v0, $f3
    ctx->r2 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x002163DC: j           L_00216408
    // 0x002163E0: nop

        goto L_00216408;
    // 0x002163E0: nop

L_002163E4:
    // 0x002163E4: trunc.w.s   $f3, $f20
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 20);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f20.fl);
    // 0x002163E8: mfc1        $v0, $f3
    ctx->r2 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x002163EC: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002163F0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002163F4: c.eq.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl == ctx->f20.fl;
    // 0x002163F8: nop

    // 0x002163FC: bc1tl       L_00216414
    if (c1cs) {
        // 0x00216400: sub.s       $f0, $f20, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f0.fl;
            goto L_00216414;
    }
    goto skip_12;
    // 0x00216400: sub.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f0.fl;
    skip_12:
    // 0x00216404: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_00216408:
    // 0x00216408: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0021640C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00216410: sub.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f0.fl;
L_00216414:
    // 0x00216414: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x00216418: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x0021641C: sll         $a2, $a2, 4
    ctx->r6 = S32(ctx->r6 << 4);
    // 0x00216420: sll         $a3, $a3, 4
    ctx->r7 = S32(ctx->r7 << 4);
    // 0x00216424: addu        $a2, $t0, $a2
    ctx->r6 = ADD32(ctx->r8, ctx->r6);
    // 0x00216428: jal         0x0020DAA4
    // 0x0021642C: addu        $a3, $t0, $a3
    ctx->r7 = ADD32(ctx->r8, ctx->r7);
    func_0020DAA4(rdram, ctx);
        goto after_6;
    // 0x0021642C: addu        $a3, $t0, $a3
    ctx->r7 = ADD32(ctx->r8, ctx->r7);
    after_6:
L_00216430:
    // 0x00216430: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x00216434: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x00216438: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0021643C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00216440: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00216444: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00216448: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0021644C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00216450: ldc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X40);
    // 0x00216454: ldc1        $f21, 0x38($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X38);
    // 0x00216458: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x0021645C: jr          $ra
    // 0x00216460: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x00216460: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_0045FD24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045FD24: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x0045FD28: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0045FD2C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x0045FD30: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x0045FD34: beq         $v0, $zero, L_0045FD54
    if (ctx->r2 == 0) {
        // 0x0045FD38: addiu       $v1, $a0, 0x1
        ctx->r3 = ADD32(ctx->r4, 0X1);
            goto L_0045FD54;
    }
    // 0x0045FD38: addiu       $v1, $a0, 0x1
    ctx->r3 = ADD32(ctx->r4, 0X1);
L_0045FD3C:
    // 0x0045FD3C: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x0045FD40: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0045FD44: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x0045FD48: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x0045FD4C: bne         $v0, $zero, L_0045FD3C
    if (ctx->r2 != 0) {
        // 0x0045FD50: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_0045FD3C;
    }
    // 0x0045FD50: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_0045FD54:
    // 0x0045FD54: jr          $ra
    // 0x0045FD58: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    return;
    // 0x0045FD58: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
;}
RECOMP_FUNC void func_0045B0B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045B0B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045B0B4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045B0B8: sw          $v0, 0x960($at)
    MEM_W(0X960, ctx->r1) = ctx->r2;
    // 0x0045B0BC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045B0C0: sw          $zero, 0x9A8($at)
    MEM_W(0X9A8, ctx->r1) = 0;
    // 0x0045B0C4: jr          $ra
    // 0x0045B0C8: nop

    return;
    // 0x0045B0C8: nop

;}
RECOMP_FUNC void func_00299E48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00299E48: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00299E4C: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x00299E50: addiu       $t1, $zero, 0x20
    ctx->r9 = ADD32(0, 0X20);
L_00299E54:
    // 0x00299E54: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
L_00299E58:
    // 0x00299E58: andi        $v0, $v1, 0x80
    ctx->r2 = ctx->r3 & 0X80;
    // 0x00299E5C: beq         $v0, $zero, L_00299E68
    if (ctx->r2 == 0) {
        // 0x00299E60: addu        $a3, $zero, $zero
        ctx->r7 = ADD32(0, 0);
            goto L_00299E68;
    }
    // 0x00299E60: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00299E64: addiu       $a3, $zero, 0x85
    ctx->r7 = ADD32(0, 0X85);
L_00299E68:
    // 0x00299E68: sll         $a1, $v1, 1
    ctx->r5 = S32(ctx->r3 << 1);
    // 0x00299E6C: beq         $t0, $t1, L_00299E84
    if (ctx->r8 == ctx->r9) {
        // 0x00299E70: addu        $v1, $a1, $zero
        ctx->r3 = ADD32(ctx->r5, 0);
            goto L_00299E84;
    }
    // 0x00299E70: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x00299E74: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x00299E78: srav        $v0, $v0, $a2
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r6 & 31));
    // 0x00299E7C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00299E80: or          $v1, $a1, $v0
    ctx->r3 = ctx->r5 | ctx->r2;
L_00299E84:
    // 0x00299E84: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x00299E88: bgez        $a2, L_00299E58
    if (SIGNED(ctx->r6) >= 0) {
        // 0x00299E8C: xor         $v1, $v1, $a3
        ctx->r3 = ctx->r3 ^ ctx->r7;
            goto L_00299E58;
    }
    // 0x00299E8C: xor         $v1, $v1, $a3
    ctx->r3 = ctx->r3 ^ ctx->r7;
    // 0x00299E90: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x00299E94: slti        $v0, $t0, 0x21
    ctx->r2 = SIGNED(ctx->r8) < 0X21 ? 1 : 0;
    // 0x00299E98: bne         $v0, $zero, L_00299E54
    if (ctx->r2 != 0) {
        // 0x00299E9C: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_00299E54;
    }
    // 0x00299E9C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00299EA0: jr          $ra
    // 0x00299EA4: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    return;
    // 0x00299EA4: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
;}
RECOMP_FUNC void func_00422800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00422800: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x00422804: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00422808: sw          $v0, 0x9C0($at)
    MEM_W(0X9C0, ctx->r1) = ctx->r2;
    // 0x0042280C: jr          $ra
    // 0x00422810: nop

    return;
    // 0x00422810: nop

;}
RECOMP_FUNC void func_0026EF94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026EF94: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    // 0x0026EF98: jr          $ra
    // 0x0026EF9C: nop

    return;
    // 0x0026EF9C: nop

;}
RECOMP_FUNC void func_0028D0D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028D0D0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0028D0D4: lw          $v0, -0xD64($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XD64);
    // 0x0028D0D8: jr          $ra
    // 0x0028D0DC: nop

    return;
    // 0x0028D0DC: nop

;}
RECOMP_FUNC void func_0020FF68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020FF68: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0020FF6C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_0020FF70:
    // 0x0020FF70: bgez        $v0, L_0020FF70
    if (SIGNED(ctx->r2) >= 0) {
        // 0x0020FF74: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_0020FF70;
    }
    // 0x0020FF74: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0020FF78: jr          $ra
    // 0x0020FF7C: nop

    return;
    // 0x0020FF7C: nop

;}
RECOMP_FUNC void func_00225C08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00225C08: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00225C0C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00225C10: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x00225C14: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00225C18: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x00225C1C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x00225C20: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00225C24: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00225C28: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00225C2C: lw          $s2, 0xEFC($a0)
    ctx->r18 = MEM_W(ctx->r4, 0XEFC);
    // 0x00225C30: blez        $s2, L_00225C64
    if (SIGNED(ctx->r18) <= 0) {
        // 0x00225C34: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00225C64;
    }
    // 0x00225C34: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00225C38: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
L_00225C3C:
    // 0x00225C3C: lw          $a0, 0xDFC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XDFC);
    // 0x00225C40: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x00225C44: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00225C48: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    // 0x00225C4C: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    // 0x00225C50: jal         0x0025E52C
    // 0x00225C54: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_0025E52C(rdram, ctx);
        goto after_0;
    // 0x00225C54: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_0:
    // 0x00225C58: slt         $v0, $s0, $s2
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x00225C5C: bne         $v0, $zero, L_00225C3C
    if (ctx->r2 != 0) {
        // 0x00225C60: nop
    
            goto L_00225C3C;
    }
    // 0x00225C60: nop

L_00225C64:
    // 0x00225C64: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00225C68: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00225C6C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00225C70: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00225C74: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00225C78: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00225C7C: jr          $ra
    // 0x00225C80: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00225C80: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00228C28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00228C28: jr          $ra
    // 0x00228C2C: nop

    return;
    // 0x00228C2C: nop

;}
RECOMP_FUNC void func_0045CCA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00423CBC:
    // 0x0045CCA0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045CCA4: addiu       $v0, $v0, 0x5310
    ctx->r2 = ADD32(ctx->r2, 0X5310);
    // 0x0045CCA8: j           L_00423CBC
    // 0x0045CCAC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    func_00423CBC(rdram, ctx);
    return;
    // 0x0045CCAC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // turok2: reconnected split function: a stray ELF symbol at 0x0045CCB0 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0045CCB0(rdram, ctx);
;}
RECOMP_FUNC void func_00274144(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00274144: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00274148: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x0027414C: addu        $s6, $a1, $zero
    ctx->r22 = ADD32(ctx->r5, 0);
    // 0x00274150: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00274154: addiu       $s3, $a0, 0x4
    ctx->r19 = ADD32(ctx->r4, 0X4);
    // 0x00274158: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0027415C: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x00274160: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x00274164: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x00274168: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0027416C: addiu       $s4, $zero, -0x1
    ctx->r20 = ADD32(0, -0X1);
    // 0x00274170: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00274174: addiu       $s0, $a0, 0x8
    ctx->r16 = ADD32(ctx->r4, 0X8);
    // 0x00274178: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x0027417C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
L_00274180:
    // 0x00274180: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x00274184: bnel        $v0, $s6, L_002741E4
    if (ctx->r2 != ctx->r22) {
        // 0x00274188: addiu       $s0, $s0, 0xCC
        ctx->r16 = ADD32(ctx->r16, 0XCC);
            goto L_002741E4;
    }
    goto skip_0;
    // 0x00274188: addiu       $s0, $s0, 0xCC
    ctx->r16 = ADD32(ctx->r16, 0XCC);
    skip_0:
    // 0x0027418C: lw          $a0, 0xAC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XAC);
    // 0x00274190: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x00274194: sw          $s5, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->r21;
    // 0x00274198: sw          $zero, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = 0;
    // 0x0027419C: lw          $v0, 0x104($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X104);
    // 0x002741A0: beql        $v1, $v0, L_002741E4
    if (ctx->r3 == ctx->r2) {
        // 0x002741A4: addiu       $s0, $s0, 0xCC
        ctx->r16 = ADD32(ctx->r16, 0XCC);
            goto L_002741E4;
    }
    goto skip_1;
    // 0x002741A4: addiu       $s0, $s0, 0xCC
    ctx->r16 = ADD32(ctx->r16, 0XCC);
    skip_1:
    // 0x002741A8: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x002741AC: addiu       $s1, $a0, 0x84
    ctx->r17 = ADD32(ctx->r4, 0X84);
    // 0x002741B0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x002741B4: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x002741B8: lh          $a1, 0xDC($v0)
    ctx->r5 = MEM_H(ctx->r2, 0XDC);
    // 0x002741BC: jal         0x00293E60
    // 0x002741C0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00293E60(rdram, ctx);
        goto after_0;
    // 0x002741C0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x002741C4: jal         0x00293580
    // 0x002741C8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00293580(rdram, ctx);
        goto after_1;
    // 0x002741C8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x002741CC: beql        $v0, $zero, L_002741E0
    if (ctx->r2 == 0) {
        // 0x002741D0: sw          $s4, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r20;
            goto L_002741E0;
    }
    goto skip_2;
    // 0x002741D0: sw          $s4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r20;
    skip_2:
    // 0x002741D4: jal         0x00293EC0
    // 0x002741D8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00293EC0(rdram, ctx);
        goto after_2;
    // 0x002741D8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x002741DC: sw          $s4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r20;
L_002741E0:
    // 0x002741E0: addiu       $s0, $s0, 0xCC
    ctx->r16 = ADD32(ctx->r16, 0XCC);
L_002741E4:
    // 0x002741E4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x002741E8: slti        $v0, $s2, 0x11
    ctx->r2 = SIGNED(ctx->r18) < 0X11 ? 1 : 0;
    // 0x002741EC: bne         $v0, $zero, L_00274180
    if (ctx->r2 != 0) {
        // 0x002741F0: addiu       $s3, $s3, 0xCC
        ctx->r19 = ADD32(ctx->r19, 0XCC);
            goto L_00274180;
    }
    // 0x002741F0: addiu       $s3, $s3, 0xCC
    ctx->r19 = ADD32(ctx->r19, 0XCC);
    // 0x002741F4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x002741F8: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x002741FC: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x00274200: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00274204: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00274208: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0027420C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00274210: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00274214: jr          $ra
    // 0x00274218: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00274218: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00448D6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0040FE58:
    // 0x00448D6C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
L_0040FF84:
    // 0x00448D70: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
L_004100CC:
    // 0x00448D74: lui         $s3, 0x8012
    ctx->r19 = S32(0X8012 << 16);
L_00410174:
    // 0x00448D78: lw          $s3, -0x6770($s3)
    ctx->r19 = MEM_W(ctx->r19, -0X6770);
L_00410190:
    // 0x00448D7C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00448D80: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x00448D84: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x00448D88: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x00448D8C: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x00448D90: addiu       $s0, $s0, 0x7078
    ctx->r16 = ADD32(ctx->r16, 0X7078);
    // 0x00448D94: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x00448D98: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x00448D9C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x00448DA0: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x00448DA4: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x00448DA8: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x00448DAC: lw          $s5, 0x58($v1)
    ctx->r21 = MEM_W(ctx->r3, 0X58);
    // 0x00448DB0: beq         $v0, $zero, L_00448DC4
    if (ctx->r2 == 0) {
        // 0x00448DB4: addu        $s4, $a0, $zero
        ctx->r20 = ADD32(ctx->r4, 0);
            goto L_00448DC4;
    }
    // 0x00448DB4: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x00448DB8: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x00448DBC: bne         $v0, $zero, L_00448DCC
    if (ctx->r2 != 0) {
        // 0x00448DC0: nop
    
            goto L_00448DCC;
    }
    // 0x00448DC0: nop

L_00448DC4:
    // 0x00448DC4: j           L_00410190
    // 0x00448DC8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    entry_00410190(rdram, ctx);
    return;
    // 0x00448DC8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00448DCC:
    // 0x00448DCC: lw          $v0, 0x38($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X38);
    // 0x00448DD0: beq         $v0, $zero, L_00448DE4
    if (ctx->r2 == 0) {
        // 0x00448DD4: addiu       $a2, $s4, 0x1
        ctx->r6 = ADD32(ctx->r20, 0X1);
            goto L_00448DE4;
    }
    // 0x00448DD4: addiu       $a2, $s4, 0x1
    ctx->r6 = ADD32(ctx->r20, 0X1);
    // 0x00448DD8: jal         0x0028441C
    // 0x00448DDC: nop

    func_0028441C(rdram, ctx);
        goto after_0;
    // 0x00448DDC: nop

    after_0:
    // 0x00448DE0: addiu       $a2, $s4, 0x1
    ctx->r6 = ADD32(ctx->r20, 0X1);
L_00448DE4:
    // 0x00448DE4: lw          $a0, 0x60($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X60);
    // 0x00448DE8: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x00448DEC: jal         0x0020185C
    // 0x00448DF0: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    func_0020185C(rdram, ctx);
        goto after_1;
    // 0x00448DF0: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x00448DF4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00448DF8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00448DFC: addiu       $a3, $zero, 0x13
    ctx->r7 = ADD32(0, 0X13);
    // 0x00448E00: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x00448E04: lui         $v0, 0x41
    ctx->r2 = S32(0X41 << 16);
    // 0x00448E08: addiu       $v0, $v0, -0x60C
    ctx->r2 = ADD32(ctx->r2, -0X60C);
    // 0x00448E0C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00448E10: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00448E14: addiu       $v0, $v0, 0x970
    ctx->r2 = ADD32(ctx->r2, 0X970);
    // 0x00448E18: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00448E1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00448E20: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00448E24: jal         0x0020367C
    // 0x00448E28: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_0020367C(rdram, ctx);
        goto after_2;
    // 0x00448E28: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_2:
    // 0x00448E2C: beq         $v0, $zero, L_00448DC4
    if (ctx->r2 == 0) {
        // 0x00448E30: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00448DC4;
    }
    // 0x00448E30: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00448E34: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00448E38: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x00448E3C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x00448E40: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00448E44: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00448E48: jal         0x00412E1C
    // 0x00448E4C: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    func_00412E1C(rdram, ctx);
        goto after_3;
    // 0x00448E4C: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    after_3:
    // 0x00448E50: addiu       $s2, $v0, 0x8
    ctx->r18 = ADD32(ctx->r2, 0X8);
    // 0x00448E54: lw          $s1, 0x4($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X4);
    // 0x00448E58: jal         0x00412DA4
    // 0x00448E5C: nop

    func_00412DA4(rdram, ctx);
        goto after_4;
    // 0x00448E5C: nop

    after_4:
    // 0x00448E60: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00448E64: beql        $v0, $zero, L_00448EA0
    if (ctx->r2 == 0) {
        // 0x00448E68: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00448EA0;
    }
    goto skip_0;
    // 0x00448E68: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_0:
    // 0x00448E6C: jal         0x00412DD0
    // 0x00448E70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00412DD0(rdram, ctx);
        goto after_5;
    // 0x00448E70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x00448E74: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x00448E78: blez        $v1, L_00448E98
    if (SIGNED(ctx->r3) <= 0) {
        // 0x00448E7C: addiu       $a0, $v0, 0x8
        ctx->r4 = ADD32(ctx->r2, 0X8);
            goto L_00448E98;
    }
    // 0x00448E7C: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x00448E80: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x00448E84: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00448E88: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00448E8C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x00448E90: lwc1        $f0, -0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, -0X8);
    // 0x00448E94: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
L_00448E98:
    // 0x00448E98: j           L_0040FE58
    // 0x00448E9C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    entry_0040FE58(rdram, ctx);
    return;
    // 0x00448E9C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_00448EA0:
    // 0x00448EA0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00448EA4: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00448EA8: sw          $zero, 0x30($v0)
    MEM_W(0X30, ctx->r2) = 0;
    // 0x00448EAC: swc1        $f20, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f20.u32l;
    // 0x00448EB0: sw          $zero, 0x28($v0)
    MEM_W(0X28, ctx->r2) = 0;
    // 0x00448EB4: blez        $s1, L_00448F04
    if (SIGNED(ctx->r17) <= 0) {
        // 0x00448EB8: swc1        $f20, 0x2C($v0)
        MEM_W(0X2C, ctx->r2) = ctx->f20.u32l;
            goto L_00448F04;
    }
    // 0x00448EB8: swc1        $f20, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f20.u32l;
    // 0x00448EBC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00448EC0: addu        $v1, $s2, $zero
    ctx->r3 = ADD32(ctx->r18, 0);
L_00448EC4:
    // 0x00448EC4: lwc1        $f0, 0x28($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X28);
    // 0x00448EC8: lwc1        $f1, 0x10($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X10);
    // 0x00448ECC: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00448ED0: nop

    // 0x00448ED4: bc1tl       L_00448EDC
    if (c1cs) {
        // 0x00448ED8: swc1        $f1, 0x28($a0)
        MEM_W(0X28, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
            goto L_00448EDC;
    }
    goto skip_1;
    // 0x00448ED8: swc1        $f1, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    skip_1:
L_00448EDC:
    // 0x00448EDC: lwc1        $f0, 0x2C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x00448EE0: lwc1        $f1, 0x10($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X10);
    // 0x00448EE4: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00448EE8: nop

    // 0x00448EEC: bc1tl       L_00448EF4
    if (c1cs) {
        // 0x00448EF0: swc1        $f1, 0x2C($a0)
        MEM_W(0X2C, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
            goto L_00448EF4;
    }
    goto skip_2;
    // 0x00448EF0: swc1        $f1, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    skip_2:
L_00448EF4:
    // 0x00448EF4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00448EF8: slt         $v0, $s0, $s1
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x00448EFC: bne         $v0, $zero, L_00448EC4
    if (ctx->r2 != 0) {
        // 0x00448F00: addiu       $v1, $v1, 0x14
        ctx->r3 = ADD32(ctx->r3, 0X14);
            goto L_00448EC4;
    }
    // 0x00448F00: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
L_00448F04:
    // 0x00448F04: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00448F08: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00448F0C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00448F10: lwc1        $f0, 0x28($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X28);
    // 0x00448F14: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    // 0x00448F18: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x00448F1C: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x00448F20: swc1        $f1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f_odd[(1 - 1) * 2];
    // 0x00448F24: swc1        $f2, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f2.u32l;
    // 0x00448F28: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00448F2C: lw          $a0, 0x70D8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X70D8);
    // 0x00448F30: lui         $a1, 0x800F
    ctx->r5 = S32(0X800F << 16);
    // 0x00448F34: lw          $a1, 0x709C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X709C);
    // 0x00448F38: lw          $s0, 0x70($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X70);
    // 0x00448F3C: jal         0x0020185C
    // 0x00448F40: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    func_0020185C(rdram, ctx);
        goto after_6;
    // 0x00448F40: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    after_6:
    // 0x00448F44: bne         $v0, $zero, L_00448F54
    if (ctx->r2 != 0) {
        // 0x00448F48: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00448F54;
    }
    // 0x00448F48: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00448F4C: j           L_0040FF84
    // 0x00448F50: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    entry_0040FF84(rdram, ctx);
    return;
    // 0x00448F50: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_00448F54:
    // 0x00448F54: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00448F58: addiu       $a3, $zero, 0x13
    ctx->r7 = ADD32(0, 0X13);
    // 0x00448F5C: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x00448F60: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00448F64: addiu       $v0, $v0, 0x970
    ctx->r2 = ADD32(ctx->r2, 0X970);
    // 0x00448F68: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00448F6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00448F70: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00448F74: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00448F78: jal         0x0020367C
    // 0x00448F7C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_0020367C(rdram, ctx);
        goto after_7;
    // 0x00448F7C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_7:
    // 0x00448F80: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00448F84: sll         $v0, $s4, 2
    ctx->r2 = S32(ctx->r20 << 2);
    // 0x00448F88: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x00448F8C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00448F90: subu        $v0, $v0, $s4
    ctx->r2 = SUB32(ctx->r2, ctx->r20);
    // 0x00448F94: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00448F98: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x00448F9C: lw          $a0, 0x1BB0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1BB0);
    // 0x00448FA0: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x00448FA4: addiu       $a2, $a0, 0x68
    ctx->r6 = ADD32(ctx->r4, 0X68);
    // 0x00448FA8: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x00448FAC: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x00448FB0: addiu       $a3, $v1, 0x40
    ctx->r7 = ADD32(ctx->r3, 0X40);
    // 0x00448FB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00448FB8: sw          $s5, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r21;
    // 0x00448FBC: sw          $v0, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->r2;
L_00448FC0:
    // 0x00448FC0: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x00448FC4: lw          $t1, 0x4($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X4);
    // 0x00448FC8: lw          $t2, 0x8($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X8);
    // 0x00448FCC: lw          $t3, 0xC($v1)
    ctx->r11 = MEM_W(ctx->r3, 0XC);
    // 0x00448FD0: sw          $t0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r8;
    // 0x00448FD4: sw          $t1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r9;
    // 0x00448FD8: sw          $t2, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r10;
    // 0x00448FDC: sw          $t3, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r11;
    // 0x00448FE0: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00448FE4: bne         $v1, $a3, L_00448FC0
    if (ctx->r3 != ctx->r7) {
        // 0x00448FE8: addiu       $a2, $a2, 0x10
        ctx->r6 = ADD32(ctx->r6, 0X10);
            goto L_00448FC0;
    }
    // 0x00448FE8: addiu       $a2, $a2, 0x10
    ctx->r6 = ADD32(ctx->r6, 0X10);
    // 0x00448FEC: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x00448FF0: lw          $a0, 0x1BB0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1BB0);
    // 0x00448FF4: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x00448FF8: lw          $t1, 0x4($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X4);
    // 0x00448FFC: lw          $t2, 0x8($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X8);
    // 0x00449000: sw          $t0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r8;
    // 0x00449004: sw          $t1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r9;
    // 0x00449008: sw          $t2, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r10;
    // 0x0044900C: lw          $v1, 0x70($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X70);
    // 0x00449010: lw          $v0, 0x74($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X74);
    // 0x00449014: sw          $zero, 0x50($a0)
    MEM_W(0X50, ctx->r4) = 0;
    // 0x00449018: sw          $zero, 0x40($a0)
    MEM_W(0X40, ctx->r4) = 0;
    // 0x0044901C: sw          $zero, 0x44($a0)
    MEM_W(0X44, ctx->r4) = 0;
    // 0x00449020: sw          $zero, 0x48($a0)
    MEM_W(0X48, ctx->r4) = 0;
    // 0x00449024: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00449028: beq         $v0, $zero, L_00449074
    if (ctx->r2 == 0) {
        // 0x0044902C: sw          $v1, 0xE0($a0)
        MEM_W(0XE0, ctx->r4) = ctx->r3;
            goto L_00449074;
    }
    // 0x0044902C: sw          $v1, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->r3;
    // 0x00449030: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x00449034: beq         $v0, $zero, L_00449074
    if (ctx->r2 == 0) {
        // 0x00449038: nop
    
            goto L_00449074;
    }
    // 0x00449038: nop

    // 0x0044903C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00449040: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x00449044: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x00449048: lw          $t1, 0x8($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X8);
    // 0x0044904C: lw          $t2, 0xC($v0)
    ctx->r10 = MEM_W(ctx->r2, 0XC);
    // 0x00449050: sw          $t0, 0xF0($a0)
    MEM_W(0XF0, ctx->r4) = ctx->r8;
    // 0x00449054: sw          $t1, 0xF4($a0)
    MEM_W(0XF4, ctx->r4) = ctx->r9;
    // 0x00449058: sw          $t2, 0xF8($a0)
    MEM_W(0XF8, ctx->r4) = ctx->r10;
    // 0x0044905C: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
    // 0x00449060: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00449064: lwc1        $f1, 0x978($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X978);
    // 0x00449068: lwc1        $f0, 0x50($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X50);
    // 0x0044906C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00449070: swc1        $f0, 0xFC($v1)
    MEM_W(0XFC, ctx->r3) = ctx->f0.u32l;
L_00449074:
    // 0x00449074: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00449078: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x0044907C: lw          $v0, 0x74($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X74);
    // 0x00449080: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x00449084: beq         $v0, $zero, L_004490CC
    if (ctx->r2 == 0) {
        // 0x00449088: nop
    
            goto L_004490CC;
    }
    // 0x00449088: nop

    // 0x0044908C: beql        $s3, $zero, L_004490C0
    if (ctx->r19 == 0) {
        // 0x00449090: sw          $zero, 0xF0($v1)
        MEM_W(0XF0, ctx->r3) = 0;
            goto L_004490C0;
    }
    goto skip_3;
    // 0x00449090: sw          $zero, 0xF0($v1)
    MEM_W(0XF0, ctx->r3) = 0;
    skip_3:
    // 0x00449094: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00449098: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x0044909C: lw          $t0, 0x4($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X4);
    // 0x004490A0: lw          $t1, 0x8($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X8);
    // 0x004490A4: lw          $t2, 0xC($s3)
    ctx->r10 = MEM_W(ctx->r19, 0XC);
    // 0x004490A8: sw          $t0, 0xF0($v1)
    MEM_W(0XF0, ctx->r3) = ctx->r8;
    // 0x004490AC: sw          $t1, 0xF4($v1)
    MEM_W(0XF4, ctx->r3) = ctx->r9;
    // 0x004490B0: sw          $t2, 0xF8($v1)
    MEM_W(0XF8, ctx->r3) = ctx->r10;
    // 0x004490B4: lwc1        $f0, 0x50($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X50);
    // 0x004490B8: j           L_004100CC
    // 0x004490BC: swc1        $f0, 0xFC($v0)
    MEM_W(0XFC, ctx->r2) = ctx->f0.u32l;
    entry_004100CC(rdram, ctx);
    return;
    // 0x004490BC: swc1        $f0, 0xFC($v0)
    MEM_W(0XFC, ctx->r2) = ctx->f0.u32l;
L_004490C0:
    // 0x004490C0: sw          $zero, 0xF4($v1)
    MEM_W(0XF4, ctx->r3) = 0;
    // 0x004490C4: sw          $zero, 0xF8($v1)
    MEM_W(0XF8, ctx->r3) = 0;
    // 0x004490C8: sw          $zero, 0xFC($v1)
    MEM_W(0XFC, ctx->r3) = 0;
L_004490CC:
    // 0x004490CC: jal         0x002051F4
    // 0x004490D0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002051F4(rdram, ctx);
        goto after_8;
    // 0x004490D0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_8:
    // 0x004490D4: beq         $s5, $zero, L_00449148
    if (ctx->r21 == 0) {
        // 0x004490D8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00449148;
    }
    // 0x004490D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004490DC: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x004490E0: lw          $a2, 0x1BB0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X1BB0);
    // 0x004490E4: lw          $a0, 0xE4($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XE4);
    // 0x004490E8: lw          $a1, 0xE8($a2)
    ctx->r5 = MEM_W(ctx->r6, 0XE8);
    // 0x004490EC: sw          $v0, 0x54($a2)
    MEM_W(0X54, ctx->r6) = ctx->r2;
    // 0x004490F0: lw          $v0, 0x74($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X74);
    // 0x004490F4: lw          $v1, 0xE0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0XE0);
    // 0x004490F8: sw          $zero, 0x4C($a2)
    MEM_W(0X4C, ctx->r6) = 0;
    // 0x004490FC: sw          $zero, 0xE4($a2)
    MEM_W(0XE4, ctx->r6) = 0;
    // 0x00449100: sw          $zero, 0xE8($a2)
    MEM_W(0XE8, ctx->r6) = 0;
    // 0x00449104: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x00449108: addiu       $v1, $v1, -0xA
    ctx->r3 = ADD32(ctx->r3, -0XA);
    // 0x0044910C: sltiu       $v1, $v1, 0x47
    ctx->r3 = ctx->r3 < 0X47 ? 1 : 0;
    // 0x00449110: sw          $v0, 0xB8($a2)
    MEM_W(0XB8, ctx->r6) = ctx->r2;
    // 0x00449114: sw          $a0, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r4;
    // 0x00449118: beq         $v1, $zero, L_00449124
    if (ctx->r3 == 0) {
        // 0x0044911C: sw          $a1, 0x10($a2)
        MEM_W(0X10, ctx->r6) = ctx->r5;
            goto L_00449124;
    }
    // 0x0044911C: sw          $a1, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->r5;
    // 0x00449120: sw          $zero, 0xB8($a2)
    MEM_W(0XB8, ctx->r6) = 0;
L_00449124:
    // 0x00449124: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00449128: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x0044912C: lw          $v0, 0xE0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XE0);
    // 0x00449130: addiu       $v0, $v0, -0x190
    ctx->r2 = ADD32(ctx->r2, -0X190);
    // 0x00449134: sltiu       $v0, $v0, 0x4
    ctx->r2 = ctx->r2 < 0X4 ? 1 : 0;
    // 0x00449138: bnel        $v0, $zero, L_00449174
    if (ctx->r2 != 0) {
        // 0x0044913C: sw          $zero, 0xB8($v1)
        MEM_W(0XB8, ctx->r3) = 0;
            goto L_00449174;
    }
    goto skip_4;
    // 0x0044913C: sw          $zero, 0xB8($v1)
    MEM_W(0XB8, ctx->r3) = 0;
    skip_4:
    // 0x00449140: j           L_00410174
    // 0x00449144: nop

    entry_00410174(rdram, ctx);
    return;
    // 0x00449144: nop

L_00449148:
    // 0x00449148: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0044914C: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x00449150: lw          $v0, 0x70($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X70);
    // 0x00449154: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x00449158: bnel        $v0, $zero, L_00449160
    if (ctx->r2 != 0) {
        // 0x0044915C: sw          $s0, 0xE0($v1)
        MEM_W(0XE0, ctx->r3) = ctx->r16;
            goto L_00449160;
    }
    goto skip_5;
    // 0x0044915C: sw          $s0, 0xE0($v1)
    MEM_W(0XE0, ctx->r3) = ctx->r16;
    skip_5:
L_00449160:
    // 0x00449160: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00449164: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00449168: lwc1        $f0, 0x30($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X30);
    // 0x0044916C: sw          $zero, 0x54($v0)
    MEM_W(0X54, ctx->r2) = 0;
    // 0x00449170: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
L_00449174:
    // 0x00449174: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x00449178: lw          $a0, 0x1BB0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1BB0);
    // 0x0044917C: lw          $v1, 0x70($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X70);
    // 0x00449180: addiu       $v0, $zero, 0x9F
    ctx->r2 = ADD32(0, 0X9F);
    // 0x00449184: beql        $v1, $v0, L_0044918C
    if (ctx->r3 == ctx->r2) {
        // 0x00449188: sw          $zero, 0xB8($a0)
        MEM_W(0XB8, ctx->r4) = 0;
            goto L_0044918C;
    }
    goto skip_6;
    // 0x00449188: sw          $zero, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = 0;
    skip_6:
L_0044918C:
    // 0x0044918C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00449190: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x00449194: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x00449198: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x0044919C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x004491A0: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x004491A4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x004491A8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x004491AC: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x004491B0: jr          $ra
    // 0x004491B4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x004491B4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_0045F9B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00426ACC:
    // 0x0045F9B4: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x0045F9B8: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x0045F9BC: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x0045F9C0: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x0045F9C4: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0045F9C8: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x0045F9CC: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x0045F9D0: sll         $v0, $s4, 2
    ctx->r2 = S32(ctx->r20 << 2);
    // 0x0045F9D4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045F9D8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0045F9DC: lw          $v1, 0xC60($at)
    ctx->r3 = MEM_W(ctx->r1, 0XC60);
    // 0x0045F9E0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0045F9E4: sw          $ra, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r31;
    // 0x0045F9E8: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x0045F9EC: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x0045F9F0: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x0045F9F4: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x0045F9F8: beq         $v1, $v0, L_0045FA08
    if (ctx->r3 == ctx->r2) {
        // 0x0045F9FC: sw          $s0, 0x48($sp)
        MEM_W(0X48, ctx->r29) = ctx->r16;
            goto L_0045FA08;
    }
    // 0x0045F9FC: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x0045FA00: j           L_00426ACC
    // 0x0045FA04: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    entry_00426ACC(rdram, ctx);
    return;
    // 0x0045FA04: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
L_0045FA08:
    // 0x0045FA08: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0045FA0C: addiu       $s6, $sp, 0x44
    ctx->r22 = ADD32(ctx->r29, 0X44);
    // 0x0045FA10: addiu       $s5, $sp, 0x20
    ctx->r21 = ADD32(ctx->r29, 0X20);
    // 0x0045FA14: addiu       $s3, $sp, 0x28
    ctx->r19 = ADD32(ctx->r29, 0X28);
    // 0x0045FA18: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x0045FA1C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
L_0045FA20:
    // 0x0045FA20: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0045FA24: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x0045FA28: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    // 0x0045FA2C: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x0045FA30: sw          $s6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r22;
    // 0x0045FA34: sw          $s5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r21;
    // 0x0045FA38: jal         0x00425D94
    // 0x0045FA3C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    func_00425D94(rdram, ctx);
        goto after_0;
    // 0x0045FA3C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    after_0:
    // 0x0045FA40: bne         $v0, $zero, L_0045FACC
    if (ctx->r2 != 0) {
        // 0x0045FA44: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0045FACC;
    }
    // 0x0045FA44: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0045FA48: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x0045FA4C: beq         $v0, $zero, L_0045FA64
    if (ctx->r2 == 0) {
        // 0x0045FA50: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_0045FA64;
    }
    // 0x0045FA50: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0045FA54: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x0045FA58: addiu       $v0, $v0, -0x41
    ctx->r2 = ADD32(ctx->r2, -0X41);
    // 0x0045FA5C: sllv        $v0, $s7, $v0
    ctx->r2 = S32(ctx->r23 << (ctx->r2 & 31));
    // 0x0045FA60: or          $s2, $s2, $v0
    ctx->r18 = ctx->r18 | ctx->r2;
L_0045FA64:
    // 0x0045FA64: slti        $v0, $s0, 0x10
    ctx->r2 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x0045FA68: bne         $v0, $zero, L_0045FA20
    if (ctx->r2 != 0) {
        // 0x0045FA6C: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_0045FA20;
    }
    // 0x0045FA6C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x0045FA70: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0045FA74: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0045FA78: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x0045FA7C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x0045FA80: sb          $zero, 0x1($s1)
    MEM_B(0X1, ctx->r17) = 0;
    // 0x0045FA84: sb          $zero, 0x2($s1)
    MEM_B(0X2, ctx->r17) = 0;
    // 0x0045FA88: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
    // 0x0045FA8C: sllv        $v0, $v1, $s0
    ctx->r2 = S32(ctx->r3 << (ctx->r16 & 31));
L_0045FA90:
    // 0x0045FA90: and         $v0, $s2, $v0
    ctx->r2 = ctx->r18 & ctx->r2;
    // 0x0045FA94: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x0045FA98: beql        $v0, $zero, L_0045FAC0
    if (ctx->r2 == 0) {
        // 0x0045FA9C: slti        $v1, $s0, 0x10
        ctx->r3 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
            goto L_0045FAC0;
    }
    goto skip_0;
    // 0x0045FA9C: slti        $v1, $s0, 0x10
    ctx->r3 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    skip_0:
    // 0x0045FAA0: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x0045FAA4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0045FAA8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0045FAAC: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x0045FAB0: slti        $v0, $s0, 0x10
    ctx->r2 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x0045FAB4: bne         $v0, $zero, L_0045FA90
    if (ctx->r2 != 0) {
        // 0x0045FAB8: sllv        $v0, $v1, $s0
        ctx->r2 = S32(ctx->r3 << (ctx->r16 & 31));
            goto L_0045FA90;
    }
    // 0x0045FAB8: sllv        $v0, $v1, $s0
    ctx->r2 = S32(ctx->r3 << (ctx->r16 & 31));
    // 0x0045FABC: slti        $v1, $s0, 0x10
    ctx->r3 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
L_0045FAC0:
    // 0x0045FAC0: beq         $v1, $zero, L_0045FACC
    if (ctx->r3 == 0) {
        // 0x0045FAC4: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0045FACC;
    }
    // 0x0045FAC4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0045FAC8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0045FACC:
    // 0x0045FACC: lw          $ra, 0x68($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X68);
    // 0x0045FAD0: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x0045FAD4: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x0045FAD8: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x0045FADC: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x0045FAE0: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x0045FAE4: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x0045FAE8: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x0045FAEC: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x0045FAF0: jr          $ra
    // 0x0045FAF4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x0045FAF4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_0040BA48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040BA48: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x0040BA4C: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x0040BA50: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0040BA54: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x0040BA58: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0040BA5C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x0040BA60: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0040BA64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0040BA68: sw          $ra, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r31;
    // 0x0040BA6C: jal         0x00246108
    // 0x0040BA70: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x0040BA70: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x0040BA74: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040BA78: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x0040BA7C: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x0040BA80: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x0040BA84: jal         0x00245BAC
    // 0x0040BA88: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x0040BA88: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0040BA8C: lb          $v0, 0xC7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC7);
    // 0x0040BA90: beq         $v0, $zero, L_0040BAA4
    if (ctx->r2 == 0) {
        // 0x0040BA94: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0040BAA4;
    }
    // 0x0040BA94: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040BA98: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0040BA9C: jal         0x00243414
    // 0x0040BAA0: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x0040BAA0: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    after_2:
L_0040BAA4:
    // 0x0040BAA4: lw          $ra, 0xA8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA8);
    // 0x0040BAA8: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x0040BAAC: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x0040BAB0: jr          $ra
    // 0x0040BAB4: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x0040BAB4: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_0020DFE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020DFE0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x0020DFE4: sdc1        $f21, 0x48($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X48, ctx->r29);
    // 0x0020DFE8: mtc1        $a2, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r6;
    // 0x0020DFEC: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x0020DFF0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0020DFF4: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x0020DFF8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x0020DFFC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x0020E000: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x0020E004: jal         0x002113A4
    // 0x0020E008: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    func_002113A4(rdram, ctx);
        goto after_0;
    // 0x0020E008: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    after_0:
    // 0x0020E00C: lui         $s0, 0x68DB
    ctx->r16 = S32(0X68DB << 16);
    // 0x0020E010: ori         $s0, $s0, 0x8BAD
    ctx->r16 = ctx->r16 | 0X8BAD;
    // 0x0020E014: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0020E018: sra         $v1, $v0, 31
    ctx->r3 = S32(SIGNED(ctx->r2) >> 31);
    // 0x0020E01C: mfhi        $a3
    ctx->r7 = hi;
    // 0x0020E020: sra         $a0, $a3, 13
    ctx->r4 = S32(SIGNED(ctx->r7) >> 13);
    // 0x0020E024: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x0020E028: sll         $v1, $a0, 2
    ctx->r3 = S32(ctx->r4 << 2);
    // 0x0020E02C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0020E030: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x0020E034: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x0020E038: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x0020E03C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0020E040: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x0020E044: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0020E048: addiu       $v0, $v0, -0x2710
    ctx->r2 = ADD32(ctx->r2, -0X2710);
    // 0x0020E04C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0020E050: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0020E054: jal         0x002113A4
    // 0x0020E058: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_002113A4(rdram, ctx);
        goto after_1;
    // 0x0020E058: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x0020E05C: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0020E060: sra         $v1, $v0, 31
    ctx->r3 = S32(SIGNED(ctx->r2) >> 31);
    // 0x0020E064: mfhi        $a3
    ctx->r7 = hi;
    // 0x0020E068: sra         $a0, $a3, 13
    ctx->r4 = S32(SIGNED(ctx->r7) >> 13);
    // 0x0020E06C: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x0020E070: sll         $v1, $a0, 2
    ctx->r3 = S32(ctx->r4 << 2);
    // 0x0020E074: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0020E078: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x0020E07C: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x0020E080: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x0020E084: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0020E088: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x0020E08C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0020E090: addiu       $v0, $v0, -0x2710
    ctx->r2 = ADD32(ctx->r2, -0X2710);
    // 0x0020E094: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0020E098: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0020E09C: jal         0x002113A4
    // 0x0020E0A0: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    func_002113A4(rdram, ctx);
        goto after_2;
    // 0x0020E0A0: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x0020E0A4: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0020E0A8: lwc1        $f1, 0x10($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x0020E0AC: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0020E0B0: sra         $v1, $v0, 31
    ctx->r3 = S32(SIGNED(ctx->r2) >> 31);
    // 0x0020E0B4: addiu       $s0, $sp, 0x10
    ctx->r16 = ADD32(ctx->r29, 0X10);
    // 0x0020E0B8: mfhi        $a3
    ctx->r7 = hi;
    // 0x0020E0BC: sra         $a0, $a3, 13
    ctx->r4 = S32(SIGNED(ctx->r7) >> 13);
    // 0x0020E0C0: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x0020E0C4: sll         $v1, $a0, 2
    ctx->r3 = S32(ctx->r4 << 2);
    // 0x0020E0C8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0020E0CC: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x0020E0D0: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x0020E0D4: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x0020E0D8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0020E0DC: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x0020E0E0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0020E0E4: addiu       $v0, $v0, -0x2710
    ctx->r2 = ADD32(ctx->r2, -0X2710);
    // 0x0020E0E8: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0020E0EC: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0020E0F0: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x0020E0F4: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x0020E0F8: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0020E0FC: lwc1        $f12, 0x8($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0020E100: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0020E104: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0020E108: jal         0x00298470
    // 0x0020E10C: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_3;
    // 0x0020E10C: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_3:
    // 0x0020E110: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x0020E114: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    // 0x0020E118: c.eq.s      $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f1.fl == ctx->f20.fl;
    // 0x0020E11C: nop

    // 0x0020E120: bc1t        L_0020E158
    if (c1cs) {
        // 0x0020E124: nop
    
            goto L_0020E158;
    }
    // 0x0020E124: nop

    // 0x0020E128: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020E12C: lwc1        $f2, 0x5510($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X5510);
    // 0x0020E130: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x0020E134: div.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = DIV_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0020E138: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0020E13C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x0020E140: lwc1        $f1, 0x4($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X4);
    // 0x0020E144: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0020E148: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0020E14C: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0020E150: swc1        $f1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020E154: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
L_0020E158:
    // 0x0020E158: lwc1        $f12, 0x0($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X0);
    // 0x0020E15C: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0020E160: lwc1        $f1, 0x4($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X4);
    // 0x0020E164: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0020E168: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x0020E16C: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0020E170: add.s       $f12, $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f1.fl;
    // 0x0020E174: jal         0x00298470
    // 0x0020E178: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    func_00298470(rdram, ctx);
        goto after_4;
    // 0x0020E178: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    after_4:
    // 0x0020E17C: c.eq.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl == ctx->f20.fl;
    // 0x0020E180: nop

    // 0x0020E184: bc1t        L_0020E1BC
    if (c1cs) {
        // 0x0020E188: nop
    
            goto L_0020E1BC;
    }
    // 0x0020E188: nop

    // 0x0020E18C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020E190: lwc1        $f1, 0x5514($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5514);
    // 0x0020E194: lwc1        $f3, 0x0($s1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r17, 0X0);
    // 0x0020E198: div.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0020E19C: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0020E1A0: lwc1        $f2, 0x4($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X4);
    // 0x0020E1A4: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0020E1A8: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x0020E1AC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020E1B0: swc1        $f3, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f_odd[(3 - 1) * 2];
    // 0x0020E1B4: swc1        $f2, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f2.u32l;
    // 0x0020E1B8: swc1        $f0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f0.u32l;
L_0020E1BC:
    // 0x0020E1BC: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x0020E1C0: lwc1        $f1, 0x0($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X0);
    // 0x0020E1C4: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0020E1C8: mul.s       $f0, $f21, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x0020E1CC: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0020E1D0: swc1        $f1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020E1D4: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x0020E1D8: lwc1        $f1, 0x4($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X4);
    // 0x0020E1DC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0020E1E0: mul.s       $f0, $f21, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x0020E1E4: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0020E1E8: swc1        $f1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020E1EC: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0020E1F0: lwc1        $f1, 0x8($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X8);
    // 0x0020E1F4: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0020E1F8: mul.s       $f0, $f21, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x0020E1FC: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0020E200: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x0020E204: swc1        $f1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020E208: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x0020E20C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x0020E210: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x0020E214: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x0020E218: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x0020E21C: sw          $t2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r10;
    // 0x0020E220: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x0020E224: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x0020E228: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x0020E22C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0020E230: ldc1        $f21, 0x48($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X48);
    // 0x0020E234: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x0020E238: jr          $ra
    // 0x0020E23C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x0020E23C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_004131B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004131B0: lbu         $v1, 0x11($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X11);
    // 0x004131B4: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x004131B8: beq         $v1, $v0, L_004131FC
    if (ctx->r3 == ctx->r2) {
        // 0x004131BC: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_004131FC;
    }
    // 0x004131BC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x004131C0: slti        $v0, $v1, 0xA
    ctx->r2 = SIGNED(ctx->r3) < 0XA ? 1 : 0;
    // 0x004131C4: beq         $v0, $zero, L_004131DC
    if (ctx->r2 == 0) {
        // 0x004131C8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_004131DC;
    }
    // 0x004131C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004131CC: beq         $v1, $v0, L_004131F0
    if (ctx->r3 == ctx->r2) {
        // 0x004131D0: addu        $v0, $a1, $zero
        ctx->r2 = ADD32(ctx->r5, 0);
            goto L_004131F0;
    }
    // 0x004131D0: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    // 0x004131D4: j           L_00413220
    // 0x004131D8: nop

    entry_00413220(rdram, ctx);
    return;
    // 0x004131D8: nop

L_004131DC:
    // 0x004131DC: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x004131E0: beq         $v1, $v0, L_00413208
    if (ctx->r3 == ctx->r2) {
        // 0x004131E4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00413208;
    }
    // 0x004131E4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x004131E8: j           L_0041321C
    // 0x004131EC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_0041321C(rdram, ctx);
    return;
    // 0x004131EC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_004131F0:
    // 0x004131F0: lbu         $v1, 0x12($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X12);
    // 0x004131F4: j           L_0041320C
    // 0x004131F8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_0041320C;
    // 0x004131F8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_004131FC:
    // 0x004131FC: lbu         $v1, 0x12($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X12);
    // 0x00413200: j           L_0041320C
    // 0x00413204: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_0041320C;
    // 0x00413204: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_00413208:
    // 0x00413208: lbu         $v1, 0x12($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X12);
L_0041320C:
    // 0x0041320C: beql        $v1, $v0, L_0041321C
    if (ctx->r3 == ctx->r2) {
            // 0x00413210: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_0041321C(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x00413210: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    skip_0:
    // 0x00413214: jr          $ra
    // 0x00413218: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    return;
    // 0x00413218: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
;}
RECOMP_FUNC void func_0040B734(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040B734: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0040B738: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0040B73C: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x0040B740: beq         $v0, $zero, L_0040B750
    if (ctx->r2 == 0) {
        // 0x0040B744: nop
    
            goto L_0040B750;
    }
    // 0x0040B744: nop

    // 0x0040B748: jal         0x00243414
    // 0x0040B74C: addiu       $a2, $zero, 0x15
    ctx->r6 = ADD32(0, 0X15);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0040B74C: addiu       $a2, $zero, 0x15
    ctx->r6 = ADD32(0, 0X15);
    after_0:
L_0040B750:
    // 0x0040B750: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0040B754: jr          $ra
    // 0x0040B758: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040B758: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0045B178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0042222C:
    // 0x0045B178: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045B17C: lw          $v0, 0x9A8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9A8);
    // 0x0045B180: beq         $v0, $zero, L_0045B198
    if (ctx->r2 == 0) {
        // 0x0045B184: addiu       $a2, $zero, 0x8
        ctx->r6 = ADD32(0, 0X8);
            goto L_0045B198;
    }
    // 0x0045B184: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x0045B188: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045B18C: addiu       $v0, $v0, 0x4B04
    ctx->r2 = ADD32(ctx->r2, 0X4B04);
    // 0x0045B190: j           L_0042222C
    // 0x0045B194: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_0042222C(rdram, ctx);
    return;
    // 0x0045B194: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0045B198:
    // 0x0045B198: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x0045B19C: addiu       $a1, $a1, 0x95B
    ctx->r5 = ADD32(ctx->r5, 0X95B);
    // 0x0045B1A0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045B1A4: addiu       $v0, $v0, 0x4B34
    ctx->r2 = ADD32(ctx->r2, 0X4B34);
    // 0x0045B1A8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0045B1AC: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x0045B1B0: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x0045B1B4: bne         $v1, $v0, L_0045B1D8
    if (ctx->r3 != ctx->r2) {
        // 0x0045B1B8: addiu       $a1, $a1, -0x1
        ctx->r5 = ADD32(ctx->r5, -0X1);
            goto L_0045B1D8;
    }
    // 0x0045B1B8: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x0045B1BC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_0045B1C0:
    // 0x0045B1C0: beq         $a2, $zero, L_0045B1D8
    if (ctx->r6 == 0) {
        // 0x0045B1C4: nop
    
            goto L_0045B1D8;
    }
    // 0x0045B1C4: nop

    // 0x0045B1C8: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x0045B1CC: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x0045B1D0: beq         $v0, $v1, L_0045B1C0
    if (ctx->r2 == ctx->r3) {
        // 0x0045B1D4: addiu       $a1, $a1, -0x1
        ctx->r5 = ADD32(ctx->r5, -0X1);
            goto L_0045B1C0;
    }
    // 0x0045B1D4: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
L_0045B1D8:
    // 0x0045B1D8: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x0045B1DC: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x0045B1E0: addiu       $v1, $zero, 0x7
    ctx->r3 = ADD32(0, 0X7);
    // 0x0045B1E4: addiu       $a0, $a0, 0xB
    ctx->r4 = ADD32(ctx->r4, 0XB);
    // 0x0045B1E8: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
L_0045B1EC:
    // 0x0045B1EC: sb          $a1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r5;
    // 0x0045B1F0: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x0045B1F4: bgez        $v1, L_0045B1EC
    if (SIGNED(ctx->r3) >= 0) {
        // 0x0045B1F8: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_0045B1EC;
    }
    // 0x0045B1F8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0045B1FC: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x0045B200: subu        $a0, $v0, $a2
    ctx->r4 = SUB32(ctx->r2, ctx->r6);
    // 0x0045B204: blez        $a2, L_0045B22C
    if (SIGNED(ctx->r6) <= 0) {
        // 0x0045B208: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0045B22C;
    }
    // 0x0045B208: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_0045B20C:
    // 0x0045B20C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045B210: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0045B214: lbu         $v0, 0x954($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X954);
    // 0x0045B218: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0045B21C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x0045B220: slt         $v0, $v1, $a2
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x0045B224: bne         $v0, $zero, L_0045B20C
    if (ctx->r2 != 0) {
        // 0x0045B228: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_0045B20C;
    }
    // 0x0045B228: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_0045B22C:
    // 0x0045B22C: jr          $ra
    // 0x0045B230: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0045B230: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00264B0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00264B0C: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x00264B10: sw          $s3, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r19;
    // 0x00264B14: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00264B18: sw          $s2, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r18;
    // 0x00264B1C: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x00264B20: sw          $s4, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r20;
    // 0x00264B24: lui         $s4, 0x800B
    ctx->r20 = S32(0X800B << 16);
    // 0x00264B28: addiu       $s4, $s4, 0x21C0
    ctx->r20 = ADD32(ctx->r20, 0X21C0);
    // 0x00264B2C: sw          $ra, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r31;
    // 0x00264B30: sw          $s5, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r21;
    // 0x00264B34: sw          $s1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r17;
    // 0x00264B38: sw          $s0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r16;
    // 0x00264B3C: sdc1        $f20, 0xD0($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XD0, ctx->r29);
    // 0x00264B40: lw          $s1, 0x10C($a1)
    ctx->r17 = MEM_W(ctx->r5, 0X10C);
    // 0x00264B44: lui         $s5, 0x800B
    ctx->r21 = S32(0X800B << 16);
    // 0x00264B48: addiu       $s5, $s5, 0x21D0
    ctx->r21 = ADD32(ctx->r21, 0X21D0);
    // 0x00264B4C: lw          $v0, 0x98($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X98);
    // 0x00264B50: beq         $v0, $zero, L_00264B8C
    if (ctx->r2 == 0) {
        // 0x00264B54: addu        $s0, $s1, $zero
        ctx->r16 = ADD32(ctx->r17, 0);
            goto L_00264B8C;
    }
    // 0x00264B54: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
    // 0x00264B58: lw          $a1, 0x0($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X0);
    // 0x00264B5C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00264B60: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    // 0x00264B64: jal         0x0020D908
    // 0x00264B68: addu        $a1, $v0, $a1
    ctx->r5 = ADD32(ctx->r2, ctx->r5);
    func_0020D908(rdram, ctx);
        goto after_0;
    // 0x00264B68: addu        $a1, $v0, $a1
    ctx->r5 = ADD32(ctx->r2, ctx->r5);
    after_0:
    // 0x00264B6C: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x00264B70: lw          $a1, 0x0($s5)
    ctx->r5 = MEM_W(ctx->r21, 0X0);
    // 0x00264B74: lw          $v0, 0x98($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X98);
    // 0x00264B78: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    // 0x00264B7C: jal         0x0020D908
    // 0x00264B80: addu        $a1, $v0, $a1
    ctx->r5 = ADD32(ctx->r2, ctx->r5);
    func_0020D908(rdram, ctx);
        goto after_1;
    // 0x00264B80: addu        $a1, $v0, $a1
    ctx->r5 = ADD32(ctx->r2, ctx->r5);
    after_1:
    // 0x00264B84: j           L_00264BB4
    // 0x00264B88: nop

        goto L_00264BB4;
    // 0x00264B88: nop

L_00264B8C:
    // 0x00264B8C: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x00264B90: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x00264B94: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x00264B98: jal         0x0020FC24
    // 0x00264B9C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_0020FC24(rdram, ctx);
        goto after_2;
    // 0x00264B9C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_2:
    // 0x00264BA0: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x00264BA4: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x00264BA8: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x00264BAC: jal         0x0020FC24
    // 0x00264BB0: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    func_0020FC24(rdram, ctx);
        goto after_3;
    // 0x00264BB0: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    after_3:
L_00264BB4:
    // 0x00264BB4: jal         0x002671B4
    // 0x00264BB8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_002671B4(rdram, ctx);
        goto after_4;
    // 0x00264BB8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_4:
    // 0x00264BBC: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x00264BC0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x00264BC4: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x00264BC8: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x00264BCC: jal         0x00210318
    // 0x00264BD0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_00210318(rdram, ctx);
        goto after_5;
    // 0x00264BD0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_5:
    // 0x00264BD4: jal         0x002671B4
    // 0x00264BD8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_002671B4(rdram, ctx);
        goto after_6;
    // 0x00264BD8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_6:
    // 0x00264BDC: addiu       $s0, $sp, 0x50
    ctx->r16 = ADD32(ctx->r29, 0X50);
    // 0x00264BE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00264BE4: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x00264BE8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x00264BEC: jal         0x00210318
    // 0x00264BF0: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    func_00210318(rdram, ctx);
        goto after_7;
    // 0x00264BF0: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    after_7:
    // 0x00264BF4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00264BF8: addiu       $a1, $s4, 0x4
    ctx->r5 = ADD32(ctx->r20, 0X4);
    // 0x00264BFC: jal         0x0020F85C
    // 0x00264C00: addiu       $a2, $sp, 0x90
    ctx->r6 = ADD32(ctx->r29, 0X90);
    func_0020F85C(rdram, ctx);
        goto after_8;
    // 0x00264C00: addiu       $a2, $sp, 0x90
    ctx->r6 = ADD32(ctx->r29, 0X90);
    after_8:
    // 0x00264C04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00264C08: addiu       $a1, $s5, 0x4
    ctx->r5 = ADD32(ctx->r21, 0X4);
    // 0x00264C0C: jal         0x0020F85C
    // 0x00264C10: addiu       $a2, $sp, 0xA0
    ctx->r6 = ADD32(ctx->r29, 0XA0);
    func_0020F85C(rdram, ctx);
        goto after_9;
    // 0x00264C10: addiu       $a2, $sp, 0xA0
    ctx->r6 = ADD32(ctx->r29, 0XA0);
    after_9:
    // 0x00264C14: lwc1        $f0, 0x90($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X90);
    // 0x00264C18: lwc1        $f1, 0xA0($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0XA0);
    // 0x00264C1C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00264C20: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00264C24: lwc1        $f2, 0x7C44($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X7C44);
    // 0x00264C28: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00264C2C: swc1        $f0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f0.u32l;
    // 0x00264C30: lwc1        $f0, 0x94($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X94);
    // 0x00264C34: lwc1        $f1, 0xA4($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0XA4);
    // 0x00264C38: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00264C3C: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00264C40: swc1        $f0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f0.u32l;
    // 0x00264C44: lwc1        $f0, 0x98($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X98);
    // 0x00264C48: lwc1        $f1, 0xA8($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0XA8);
    // 0x00264C4C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00264C50: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00264C54: swc1        $f0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f0.u32l;
    // 0x00264C58: lw          $ra, 0xC8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XC8);
    // 0x00264C5C: lw          $s5, 0xC4($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XC4);
    // 0x00264C60: lw          $s4, 0xC0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XC0);
    // 0x00264C64: lw          $s3, 0xBC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XBC);
    // 0x00264C68: lw          $s2, 0xB8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XB8);
    // 0x00264C6C: lw          $s1, 0xB4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XB4);
    // 0x00264C70: lw          $s0, 0xB0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XB0);
    // 0x00264C74: ldc1        $f20, 0xD0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XD0);
    // 0x00264C78: jr          $ra
    // 0x00264C7C: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    return;
    // 0x00264C7C: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
;}
RECOMP_FUNC void func_00264980(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00264980: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00264984: addiu       $v1, $zero, -0x2001
    ctx->r3 = ADD32(0, -0X2001);
    // 0x00264988: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0026498C: jr          $ra
    // 0x00264990: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
    return;
    // 0x00264990: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_002427E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002427E0: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x002427E4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x002427E8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002427EC: lwc1        $f3, 0x6880($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X6880);
    // 0x002427F0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002427F4: lwc1        $f2, 0x6884($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X6884);
    // 0x002427F8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x002427FC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x00242800: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
    // 0x00242804: beq         $a1, $zero, L_00242984
    if (ctx->r5 == 0) {
        // 0x00242808: mov.s       $f1, $f3
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    ctx->f1.fl = ctx->f3.fl;
            goto L_00242984;
    }
    // 0x00242808: mov.s       $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    ctx->f1.fl = ctx->f3.fl;
    // 0x0024280C: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x00242810: addiu       $a2, $a2, -0x5528
    ctx->r6 = ADD32(ctx->r6, -0X5528);
    // 0x00242814: lbu         $v0, 0x19($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X19);
    // 0x00242818: lb          $a3, 0x12($a1)
    ctx->r7 = MEM_B(ctx->r5, 0X12);
    // 0x0024281C: beq         $v0, $zero, L_00242854
    if (ctx->r2 == 0) {
        // 0x00242820: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00242854;
    }
    // 0x00242820: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00242824: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x00242828: beq         $v1, $v0, L_00242858
    if (ctx->r3 == ctx->r2) {
        // 0x0024282C: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_00242858;
    }
    // 0x0024282C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x00242830: beq         $v1, $v0, L_0024285C
    if (ctx->r3 == ctx->r2) {
        // 0x00242834: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_0024285C;
    }
    // 0x00242834: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00242838: lw          $v0, 0x20C($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X20C);
    // 0x0024283C: beq         $v0, $zero, L_00242850
    if (ctx->r2 == 0) {
        // 0x00242840: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_00242850;
    }
    // 0x00242840: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00242844: lb          $a3, 0x28($a2)
    ctx->r7 = MEM_B(ctx->r6, 0X28);
    // 0x00242848: j           L_0024285C
    // 0x0024284C: nop

        goto L_0024285C;
    // 0x0024284C: nop

L_00242850:
    // 0x00242850: lb          $a3, 0x23($a2)
    ctx->r7 = MEM_B(ctx->r6, 0X23);
L_00242854:
    // 0x00242854: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
L_00242858:
    // 0x00242858: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_0024285C:
    // 0x0024285C: beq         $v1, $v0, L_002428D0
    if (ctx->r3 == ctx->r2) {
        // 0x00242860: slti        $v0, $v1, 0x5
        ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
            goto L_002428D0;
    }
    // 0x00242860: slti        $v0, $v1, 0x5
    ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x00242864: beq         $v0, $zero, L_0024287C
    if (ctx->r2 == 0) {
        // 0x00242868: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0024287C;
    }
    // 0x00242868: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0024286C: beq         $v1, $v0, L_00242890
    if (ctx->r3 == ctx->r2) {
        // 0x00242870: nop
    
            goto L_00242890;
    }
    // 0x00242870: nop

    // 0x00242874: j           L_00242904
    // 0x00242878: nop

        goto L_00242904;
    // 0x00242878: nop

L_0024287C:
    // 0x0024287C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x00242880: beq         $v1, $v0, L_002428F8
    if (ctx->r3 == ctx->r2) {
        // 0x00242884: nop
    
            goto L_002428F8;
    }
    // 0x00242884: nop

    // 0x00242888: j           L_00242904
    // 0x0024288C: nop

        goto L_00242904;
    // 0x0024288C: nop

L_00242890:
    // 0x00242890: lw          $v0, 0x18($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X18);
    // 0x00242894: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00242898: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0024289C: bgez        $v0, L_002428B0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x002428A0: nop
    
            goto L_002428B0;
    }
    // 0x002428A0: nop

    // 0x002428A4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002428A8: ldc1        $f0, 0x6888($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X6888);
    // 0x002428AC: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
L_002428B0:
    // 0x002428B0: lbu         $v0, 0x41($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X41);
    // 0x002428B4: lbu         $v1, 0x40($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X40);
    // 0x002428B8: mtc1        $v0, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r2;
    // 0x002428BC: cvt.s.w     $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    ctx->f3.fl = CVT_S_W(ctx->f_odd[(3 - 1) * 2]);
    // 0x002428C0: mtc1        $v1, $f2
    ctx->f2.u32l = ctx->r3;
    // 0x002428C4: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x002428C8: j           L_00242904
    // 0x002428CC: cvt.s.d     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f1.fl = CVT_S_D(ctx->f1.d);
        goto L_00242904;
    // 0x002428CC: cvt.s.d     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f1.fl = CVT_S_D(ctx->f1.d);
L_002428D0:
    // 0x002428D0: lw          $v0, 0x18($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X18);
    // 0x002428D4: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x002428D8: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x002428DC: bgezl       $v0, L_00242904
    if (SIGNED(ctx->r2) >= 0) {
        // 0x002428E0: cvt.s.d     $f1, $f1
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f1.fl = CVT_S_D(ctx->f1.d);
            goto L_00242904;
    }
    goto skip_0;
    // 0x002428E0: cvt.s.d     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f1.fl = CVT_S_D(ctx->f1.d);
    skip_0:
    // 0x002428E4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002428E8: ldc1        $f0, 0x6890($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X6890);
    // 0x002428EC: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x002428F0: j           L_00242904
    // 0x002428F4: cvt.s.d     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f1.fl = CVT_S_D(ctx->f1.d);
        goto L_00242904;
    // 0x002428F4: cvt.s.d     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f1.fl = CVT_S_D(ctx->f1.d);
L_002428F8:
    // 0x002428F8: lh          $v0, 0x18($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X18);
    // 0x002428FC: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00242900: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
L_00242904:
    // 0x00242904: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x00242908: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0024290C: beq         $a1, $v0, L_0024291C
    if (ctx->r5 == ctx->r2) {
        // 0x00242910: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_0024291C;
    }
    // 0x00242910: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00242914: bne         $a1, $v0, L_00242984
    if (ctx->r5 != ctx->r2) {
        // 0x00242918: nop
    
            goto L_00242984;
    }
    // 0x00242918: nop

L_0024291C:
    // 0x0024291C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00242920: lw          $v1, -0x5520($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5520);
    // 0x00242924: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x00242928: beq         $v1, $v0, L_00242940
    if (ctx->r3 == ctx->r2) {
        // 0x0024292C: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_00242940;
    }
    // 0x0024292C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x00242930: beq         $v1, $v0, L_00242970
    if (ctx->r3 == ctx->r2) {
        // 0x00242934: nop
    
            goto L_00242970;
    }
    // 0x00242934: nop

    // 0x00242938: j           L_00242984
    // 0x0024293C: nop

        goto L_00242984;
    // 0x0024293C: nop

L_00242940:
    // 0x00242940: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00242944: lwc1        $f0, 0x6898($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6898);
    // 0x00242948: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0024294C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00242950: lwc1        $f1, 0x689C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X689C);
    // 0x00242954: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x00242958: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0024295C: nop

    // 0x00242960: bc1tl       L_00242968
    if (c1cs) {
        // 0x00242964: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_00242968;
    }
    goto skip_1;
    // 0x00242964: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_1:
L_00242968:
    // 0x00242968: j           L_00242984
    // 0x0024296C: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
        goto L_00242984;
    // 0x0024296C: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
L_00242970:
    // 0x00242970: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00242974: lwc1        $f0, 0x68A0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X68A0);
    // 0x00242978: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024297C: lwc1        $f2, 0x68A4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X68A4);
    // 0x00242980: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
L_00242984:
    // 0x00242984: trunc.w.s   $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x00242988: swc1        $f4, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f4.u32l;
    // 0x0024298C: trunc.w.s   $f4, $f3
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    ctx->f4.u32l = TRUNC_W_S(ctx->f3.fl);
    // 0x00242990: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x00242994: sb          $v0, 0x10($a0)
    MEM_B(0X10, ctx->r4) = ctx->r2;
    // 0x00242998: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0024299C: trunc.w.s   $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x002429A0: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x002429A4: sb          $a3, 0x11($a0)
    MEM_B(0X11, ctx->r4) = ctx->r7;
    // 0x002429A8: sb          $v1, 0xC8($a0)
    MEM_B(0XC8, ctx->r4) = ctx->r3;
    // 0x002429AC: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x002429B0: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x002429B4: jr          $ra
    // 0x002429B8: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    return;
    // 0x002429B8: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_00284660(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00284660: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00284664: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00284668: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0028466C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00284670: lbu         $a1, 0x1($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X1);
    // 0x00284674: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00284678: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0028467C: jal         0x00226134
    // 0x00284680: nop

    func_00226134(rdram, ctx);
        goto after_0;
    // 0x00284680: nop

    after_0:
    // 0x00284684: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00284688: lb          $v1, 0x0($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X0);
    // 0x0028468C: lh          $a1, 0x2($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X2);
    // 0x00284690: blez        $v1, L_00284750
    if (SIGNED(ctx->r3) <= 0) {
        // 0x00284694: slti        $v0, $v1, 0x3
        ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
            goto L_00284750;
    }
    // 0x00284694: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x00284698: bnel        $v0, $zero, L_002846B4
    if (ctx->r2 != 0) {
        // 0x0028469C: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_002846B4;
    }
    goto skip_0;
    // 0x0028469C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    skip_0:
    // 0x002846A0: slti        $v0, $v1, 0x5
    ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x002846A4: beq         $v0, $zero, L_00284750
    if (ctx->r2 == 0) {
        // 0x002846A8: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_00284750;
    }
    // 0x002846A8: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x002846AC: j           L_00284704
    // 0x002846B0: nop

        goto L_00284704;
    // 0x002846B0: nop

L_002846B4:
    // 0x002846B4: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x002846B8: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x002846BC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x002846C0: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
    // 0x002846C4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x002846C8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x002846CC: bne         $v0, $a1, L_00284750
    if (ctx->r2 != ctx->r5) {
        // 0x002846D0: nop
    
            goto L_00284750;
    }
    // 0x002846D0: nop

    // 0x002846D4: lh          $v1, 0x0($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X0);
    // 0x002846D8: beq         $v1, $zero, L_002846F0
    if (ctx->r3 == 0) {
        // 0x002846DC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002846F0;
    }
    // 0x002846DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002846E0: beql        $v1, $v0, L_00284750
    if (ctx->r3 == ctx->r2) {
        // 0x002846E4: sh          $zero, 0x2($s0)
        MEM_H(0X2, ctx->r16) = 0;
            goto L_00284750;
    }
    goto skip_1;
    // 0x002846E4: sh          $zero, 0x2($s0)
    MEM_H(0X2, ctx->r16) = 0;
    skip_1:
    // 0x002846E8: j           L_00284750
    // 0x002846EC: nop

        goto L_00284750;
    // 0x002846EC: nop

L_002846F0:
    // 0x002846F0: addiu       $v0, $a1, -0x2
    ctx->r2 = ADD32(ctx->r5, -0X2);
    // 0x002846F4: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
    // 0x002846F8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x002846FC: j           L_00284750
    // 0x00284700: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
        goto L_00284750;
    // 0x00284700: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_00284704:
    // 0x00284704: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x00284708: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x0028470C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00284710: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
    // 0x00284714: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x00284718: bgez        $v0, L_00284750
    if (SIGNED(ctx->r2) >= 0) {
        // 0x0028471C: nop
    
            goto L_00284750;
    }
    // 0x0028471C: nop

    // 0x00284720: lh          $v1, 0x0($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X0);
    // 0x00284724: beq         $v1, $zero, L_0028473C
    if (ctx->r3 == 0) {
        // 0x00284728: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0028473C;
    }
    // 0x00284728: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0028472C: beq         $v1, $v0, L_0028474C
    if (ctx->r3 == ctx->r2) {
        // 0x00284730: addiu       $v0, $a1, -0x1
        ctx->r2 = ADD32(ctx->r5, -0X1);
            goto L_0028474C;
    }
    // 0x00284730: addiu       $v0, $a1, -0x1
    ctx->r2 = ADD32(ctx->r5, -0X1);
    // 0x00284734: j           L_00284750
    // 0x00284738: nop

        goto L_00284750;
    // 0x00284738: nop

L_0028473C:
    // 0x0028473C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00284740: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
    // 0x00284744: j           L_00284750
    // 0x00284748: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
        goto L_00284750;
    // 0x00284748: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_0028474C:
    // 0x0028474C: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
L_00284750:
    // 0x00284750: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00284754: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00284758: jr          $ra
    // 0x0028475C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0028475C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00424D54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00424D54: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00424D58: lw          $v0, 0xA30($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XA30);
    // 0x00424D5C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00424D60: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00424D64: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00424D68: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00424D6C: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x00424D70: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x00424D74: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x00424D78: beq         $v0, $zero, L_00424D98
    if (ctx->r2 == 0) {
        // 0x00424D7C: sw          $ra, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r31;
            goto L_00424D98;
    }
    // 0x00424D7C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00424D80: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00424D84: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00424D88: addu        $at, $at, $v0
    gpr jr_addend_00424D90 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00424D8C: lw          $v0, 0x1790($at)
    ctx->r2 = ADD32(ctx->r1, 0X1790);
    // 0x00424D90: jr          $v0
    // 0x00424D94: nop

    switch (jr_addend_00424D90 >> 2) {
        case 0: goto L_00424D98; break;
        case 1: goto L_00424D98; break;
        case 2: goto L_00424DA8; break;
        case 3: goto L_00424DDC; break;
        case 4: goto L_00424DF8; break;
        case 5: goto L_00424E30; break;
        case 6: goto L_00424E40; break;
        case 7: goto L_00424E74; break;
        default: switch_error(__func__, 0x00424D90, 0x800C1790);
    }
    // 0x00424D94: nop

L_00424D98:
    // 0x00424D98: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00424D9C: addiu       $v0, $v0, 0x1768
    ctx->r2 = ADD32(ctx->r2, 0X1768);
    // 0x00424DA0: j           L_00424EB8
    // 0x00424DA4: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
        goto L_00424EB8;
    // 0x00424DA4: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_00424DA8:
    // 0x00424DA8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00424DAC: addiu       $v0, $v0, 0x43D0
    ctx->r2 = ADD32(ctx->r2, 0X43D0);
    // 0x00424DB0: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    // 0x00424DB4: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00424DB8: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00424DBC: jal         0x00224C08
    // 0x00424DC0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_00224C08(rdram, ctx);
        goto after_0;
    // 0x00424DC0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x00424DC4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00424DC8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00424DCC: beq         $s0, $v0, L_00424EDC
    if (ctx->r16 == ctx->r2) {
        // 0x00424DD0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_00424EDC;
    }
    // 0x00424DD0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00424DD4: j           L_00424EB8
    // 0x00424DD8: subu        $s0, $v0, $s0
    ctx->r16 = SUB32(ctx->r2, ctx->r16);
        goto L_00424EB8;
    // 0x00424DD8: subu        $s0, $v0, $s0
    ctx->r16 = SUB32(ctx->r2, ctx->r16);
L_00424DDC:
    // 0x00424DDC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00424DE0: addiu       $v0, $v0, 0x441C
    ctx->r2 = ADD32(ctx->r2, 0X441C);
    // 0x00424DE4: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    // 0x00424DE8: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00424DEC: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00424DF0: j           L_00424E10
    // 0x00424DF4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
        goto L_00424E10;
    // 0x00424DF4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
L_00424DF8:
    // 0x00424DF8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00424DFC: addiu       $v0, $v0, 0x4470
    ctx->r2 = ADD32(ctx->r2, 0X4470);
    // 0x00424E00: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    // 0x00424E04: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00424E08: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00424E0C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
L_00424E10:
    // 0x00424E10: jal         0x00224C08
    // 0x00424E14: nop

    func_00224C08(rdram, ctx);
        goto after_1;
    // 0x00424E14: nop

    after_1:
    // 0x00424E18: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00424E1C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00424E20: beq         $s0, $v0, L_00424EDC
    if (ctx->r16 == ctx->r2) {
        // 0x00424E24: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00424EDC;
    }
    // 0x00424E24: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00424E28: j           L_00424EB8
    // 0x00424E2C: subu        $s0, $v0, $s0
    ctx->r16 = SUB32(ctx->r2, ctx->r16);
        goto L_00424EB8;
    // 0x00424E2C: subu        $s0, $v0, $s0
    ctx->r16 = SUB32(ctx->r2, ctx->r16);
L_00424E30:
    // 0x00424E30: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00424E34: addiu       $v0, $v0, 0x1768
    ctx->r2 = ADD32(ctx->r2, 0X1768);
    // 0x00424E38: j           L_00424EB8
    // 0x00424E3C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
        goto L_00424EB8;
    // 0x00424E3C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_00424E40:
    // 0x00424E40: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00424E44: addiu       $v0, $v0, 0x450C
    ctx->r2 = ADD32(ctx->r2, 0X450C);
    // 0x00424E48: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    // 0x00424E4C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00424E50: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00424E54: jal         0x00224C08
    // 0x00424E58: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_00224C08(rdram, ctx);
        goto after_2;
    // 0x00424E58: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_2:
    // 0x00424E5C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00424E60: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00424E64: beq         $s0, $v0, L_00424EDC
    if (ctx->r16 == ctx->r2) {
        // 0x00424E68: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00424EDC;
    }
    // 0x00424E68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00424E6C: j           L_00424EB8
    // 0x00424E70: subu        $s0, $v0, $s0
    ctx->r16 = SUB32(ctx->r2, ctx->r16);
        goto L_00424EB8;
    // 0x00424E70: subu        $s0, $v0, $s0
    ctx->r16 = SUB32(ctx->r2, ctx->r16);
L_00424E74:
    // 0x00424E74: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00424E78: addiu       $v0, $v0, 0x4588
    ctx->r2 = ADD32(ctx->r2, 0X4588);
    // 0x00424E7C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    // 0x00424E80: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00424E84: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00424E88: jal         0x00224C08
    // 0x00424E8C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    func_00224C08(rdram, ctx);
        goto after_3;
    // 0x00424E8C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_3:
    // 0x00424E90: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00424E94: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00424E98: beq         $s0, $v0, L_00424EDC
    if (ctx->r16 == ctx->r2) {
        // 0x00424E9C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00424EDC;
    }
    // 0x00424E9C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00424EA0: subu        $s0, $v0, $s0
    ctx->r16 = SUB32(ctx->r2, ctx->r16);
    // 0x00424EA4: bne         $s0, $v0, L_00424EBC
    if (ctx->r16 != ctx->r2) {
        // 0x00424EA8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00424EBC;
    }
    // 0x00424EA8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00424EAC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00424EB0: addiu       $v0, $v0, 0x4574
    ctx->r2 = ADD32(ctx->r2, 0X4574);
    // 0x00424EB4: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_00424EB8:
    // 0x00424EB8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_00424EBC:
    // 0x00424EBC: beq         $s0, $v0, L_00424EDC
    if (ctx->r16 == ctx->r2) {
        // 0x00424EC0: nop
    
            goto L_00424EDC;
    }
    // 0x00424EC0: nop

    // 0x00424EC4: jal         0x004160F0
    // 0x00424EC8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_004160F0(rdram, ctx);
        goto after_4;
    // 0x00424EC8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x00424ECC: lw          $v1, 0x14($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X14);
    // 0x00424ED0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00424ED4: addiu       $v1, $s0, 0x30
    ctx->r3 = ADD32(ctx->r16, 0X30);
    // 0x00424ED8: sb          $v1, -0x6($v0)
    MEM_B(-0X6, ctx->r2) = ctx->r3;
L_00424EDC:
    // 0x00424EDC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00424EE0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00424EE4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00424EE8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00424EEC: jr          $ra
    // 0x00424EF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00424EF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00255670(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00255670: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00255674: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00255678: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0025567C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00255680: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00255684: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00255688: lwc1        $f2, 0x7174($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X7174);
    // 0x0025568C: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x00255690: lw          $v1, 0x48($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X48);
    // 0x00255694: addiu       $v0, $zero, 0x1DB1
    ctx->r2 = ADD32(0, 0X1DB1);
    // 0x00255698: bne         $v1, $v0, L_002556A8
    if (ctx->r3 != ctx->r2) {
        // 0x0025569C: sw          $ra, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r31;
            goto L_002556A8;
    }
    // 0x0025569C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x002556A0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002556A4: lwc1        $f2, 0x7178($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X7178);
L_002556A8:
    // 0x002556A8: lw          $v0, 0xA64($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA64);
    // 0x002556AC: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x002556B0: beq         $v0, $zero, L_002556D4
    if (ctx->r2 == 0) {
        // 0x002556B4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_002556D4;
    }
    // 0x002556B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002556B8: lwc1        $f1, 0xA10($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA10);
    // 0x002556BC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002556C0: lwc1        $f0, 0x717C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X717C);
    // 0x002556C4: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x002556C8: nop

    // 0x002556CC: bc1f        L_002556E8
    if (!c1cs) {
        // 0x002556D0: nop
    
            goto L_002556E8;
    }
    // 0x002556D0: nop

L_002556D4:
    // 0x002556D4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x002556D8: jal         0x0024E5F0
    // 0x002556DC: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_0024E5F0(rdram, ctx);
        goto after_0;
    // 0x002556DC: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_0:
    // 0x002556E0: j           L_002556F8
    // 0x002556E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_002556F8;
    // 0x002556E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_002556E8:
    // 0x002556E8: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x002556EC: lwc1        $f0, 0x20($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X20);
    // 0x002556F0: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x002556F4: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
L_002556F8:
    // 0x002556F8: jal         0x00255714
    // 0x002556FC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00255714(rdram, ctx);
        goto after_1;
    // 0x002556FC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x00255700: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00255704: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00255708: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0025570C: jr          $ra
    // 0x00255710: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00255710: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002A31F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_002637F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002637F4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x002637F8: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x002637FC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x00263800: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00263804: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
    // 0x00263808: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x0026380C: addiu       $a0, $a0, 0x7590
    ctx->r4 = ADD32(ctx->r4, 0X7590);
    // 0x00263810: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x00263814: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x00263818: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x0026381C: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x00263820: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x00263824: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x00263828: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x0026382C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x00263830: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x00263834: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x00263838: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x0026383C: lw          $t0, 0x1C($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X1C);
    // 0x00263840: lw          $t1, 0x20($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X20);
    // 0x00263844: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x00263848: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x0026384C: lw          $a3, 0x18($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X18);
    // 0x00263850: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x00263854: jal         0x00227240
    // 0x00263858: addiu       $a1, $s0, 0x10C
    ctx->r5 = ADD32(ctx->r16, 0X10C);
    func_00227240(rdram, ctx);
        goto after_0;
    // 0x00263858: addiu       $a1, $s0, 0x10C
    ctx->r5 = ADD32(ctx->r16, 0X10C);
    after_0:
    // 0x0026385C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00263860: beq         $a0, $zero, L_00263890
    if (ctx->r4 == 0) {
        // 0x00263864: nop
    
            goto L_00263890;
    }
    // 0x00263864: nop

    // 0x00263868: lw          $v0, 0x110($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X110);
    // 0x0026386C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00263870: sw          $v0, 0x110($s0)
    MEM_W(0X110, ctx->r16) = ctx->r2;
    // 0x00263874: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00263878: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x0026387C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00263880: lw          $a2, 0x4($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X4);
    // 0x00263884: lw          $a3, 0x8($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X8);
    // 0x00263888: jal         0x00246690
    // 0x0026388C: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    func_00246690(rdram, ctx);
        goto after_1;
    // 0x0026388C: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    after_1:
L_00263890:
    // 0x00263890: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x00263894: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x00263898: jr          $ra
    // 0x0026389C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0026389C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0042FBA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042FBA4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0042FBA8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0042FBAC: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0042FBB0: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0042FBB4: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x0042FBB8: addiu       $a0, $s2, 0x40
    ctx->r4 = ADD32(ctx->r18, 0X40);
    // 0x0042FBBC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0042FBC0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0042FBC4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0042FBC8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0042FBCC: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x0042FBD0: sw          $zero, 0x34($s2)
    MEM_W(0X34, ctx->r18) = 0;
    // 0x0042FBD4: sw          $zero, 0x38($s2)
    MEM_W(0X38, ctx->r18) = 0;
    // 0x0042FBD8: jal         0x0042F9B0
    // 0x0042FBDC: sw          $zero, 0x48($s2)
    MEM_W(0X48, ctx->r18) = 0;
    func_0042F9B0(rdram, ctx);
        goto after_0;
    // 0x0042FBDC: sw          $zero, 0x48($s2)
    MEM_W(0X48, ctx->r18) = 0;
    after_0:
    // 0x0042FBE0: addiu       $a0, $s2, 0x11C0
    ctx->r4 = ADD32(ctx->r18, 0X11C0);
    // 0x0042FBE4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042FBE8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x0042FBEC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0042FBF0: jal         0x00200500
    // 0x0042FBF4: sw          $v0, 0x38($s2)
    MEM_W(0X38, ctx->r18) = ctx->r2;
    func_00200500(rdram, ctx);
        goto after_1;
    // 0x0042FBF4: sw          $v0, 0x38($s2)
    MEM_W(0X38, ctx->r18) = ctx->r2;
    after_1:
    // 0x0042FBF8: addiu       $a0, $s2, 0x11D4
    ctx->r4 = ADD32(ctx->r18, 0X11D4);
    // 0x0042FBFC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042FC00: jal         0x00200500
    // 0x0042FC04: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00200500(rdram, ctx);
        goto after_2;
    // 0x0042FC04: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_2:
    // 0x0042FC08: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0042FC0C: addiu       $s3, $zero, 0xF20
    ctx->r19 = ADD32(0, 0XF20);
    // 0x0042FC10: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
    // 0x0042FC14: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0042FC18: lwc1        $f20, -0x65E8($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X65E8);
L_0042FC1C:
    // 0x0042FC1C: addu        $v1, $s0, $s2
    ctx->r3 = ADD32(ctx->r16, ctx->r18);
    // 0x0042FC20: addiu       $v1, $v1, 0xF20
    ctx->r3 = ADD32(ctx->r3, 0XF20);
    // 0x0042FC24: addiu       $a0, $s2, 0x11C0
    ctx->r4 = ADD32(ctx->r18, 0X11C0);
    // 0x0042FC28: addu        $a1, $s2, $s3
    ctx->r5 = ADD32(ctx->r18, ctx->r19);
    // 0x0042FC2C: addiu       $v0, $v1, 0x18
    ctx->r2 = ADD32(ctx->r3, 0X18);
    // 0x0042FC30: sw          $zero, 0x8($v1)
    MEM_W(0X8, ctx->r3) = 0;
    // 0x0042FC34: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
    // 0x0042FC38: sw          $zero, 0x10($v1)
    MEM_W(0X10, ctx->r3) = 0;
    // 0x0042FC3C: swc1        $f20, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f20.u32l;
    // 0x0042FC40: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x0042FC44: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x0042FC48: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x0042FC4C: sw          $zero, 0x10($v0)
    MEM_W(0X10, ctx->r2) = 0;
    // 0x0042FC50: addiu       $v0, $v1, 0x2C
    ctx->r2 = ADD32(ctx->r3, 0X2C);
    // 0x0042FC54: addiu       $v1, $v1, 0x40
    ctx->r3 = ADD32(ctx->r3, 0X40);
    // 0x0042FC58: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x0042FC5C: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x0042FC60: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x0042FC64: sw          $zero, 0x10($v0)
    MEM_W(0X10, ctx->r2) = 0;
    // 0x0042FC68: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x0042FC6C: sw          $zero, 0x8($v1)
    MEM_W(0X8, ctx->r3) = 0;
    // 0x0042FC70: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
    // 0x0042FC74: jal         0x00200574
    // 0x0042FC78: sw          $zero, 0x10($v1)
    MEM_W(0X10, ctx->r3) = 0;
    func_00200574(rdram, ctx);
        goto after_3;
    // 0x0042FC78: sw          $zero, 0x10($v1)
    MEM_W(0X10, ctx->r3) = 0;
    after_3:
    // 0x0042FC7C: addiu       $s3, $s3, 0x54
    ctx->r19 = ADD32(ctx->r19, 0X54);
    // 0x0042FC80: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0042FC84: slti        $v0, $s1, 0x8
    ctx->r2 = SIGNED(ctx->r17) < 0X8 ? 1 : 0;
    // 0x0042FC88: bne         $v0, $zero, L_0042FC1C
    if (ctx->r2 != 0) {
        // 0x0042FC8C: addiu       $s0, $s0, 0x54
        ctx->r16 = ADD32(ctx->r16, 0X54);
            goto L_0042FC1C;
    }
    // 0x0042FC8C: addiu       $s0, $s0, 0x54
    ctx->r16 = ADD32(ctx->r16, 0X54);
    // 0x0042FC90: addiu       $a0, $s2, 0xC
    ctx->r4 = ADD32(ctx->r18, 0XC);
    // 0x0042FC94: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042FC98: jal         0x00200500
    // 0x0042FC9C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00200500(rdram, ctx);
        goto after_4;
    // 0x0042FC9C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_4:
    // 0x0042FCA0: addiu       $a0, $s2, 0x20
    ctx->r4 = ADD32(ctx->r18, 0X20);
    // 0x0042FCA4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042FCA8: jal         0x00200500
    // 0x0042FCAC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00200500(rdram, ctx);
        goto after_5;
    // 0x0042FCAC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_5:
    // 0x0042FCB0: addiu       $a0, $s2, 0xF0C
    ctx->r4 = ADD32(ctx->r18, 0XF0C);
    // 0x0042FCB4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042FCB8: jal         0x00200500
    // 0x0042FCBC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00200500(rdram, ctx);
        goto after_6;
    // 0x0042FCBC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_6:
    // 0x0042FCC0: addiu       $a0, $s2, 0x40
    ctx->r4 = ADD32(ctx->r18, 0X40);
    // 0x0042FCC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042FCC8: jal         0x00275AE0
    // 0x0042FCCC: sw          $v0, 0x11E8($s2)
    MEM_W(0X11E8, ctx->r18) = ctx->r2;
    func_00275AE0(rdram, ctx);
        goto after_7;
    // 0x0042FCCC: sw          $v0, 0x11E8($s2)
    MEM_W(0X11E8, ctx->r18) = ctx->r2;
    after_7:
    // 0x0042FCD0: jal         0x002053A8
    // 0x0042FCD4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_8;
    // 0x0042FCD4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_8:
    // 0x0042FCD8: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x0042FCDC: beq         $a1, $zero, L_0042FCF8
    if (ctx->r5 == 0) {
        // 0x0042FCE0: nop
    
            goto L_0042FCF8;
    }
    // 0x0042FCE0: nop

    // 0x0042FCE4: jal         0x002052D8
    // 0x0042FCE8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_9;
    // 0x0042FCE8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_9:
    // 0x0042FCEC: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
    // 0x0042FCF0: sw          $zero, 0x4($s2)
    MEM_W(0X4, ctx->r18) = 0;
    // 0x0042FCF4: sw          $zero, 0x8($s2)
    MEM_W(0X8, ctx->r18) = 0;
L_0042FCF8:
    // 0x0042FCF8: jal         0x002053A8
    // 0x0042FCFC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_10;
    // 0x0042FCFC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_10:
    // 0x0042FD00: lw          $a1, 0xF00($s2)
    ctx->r5 = MEM_W(ctx->r18, 0XF00);
    // 0x0042FD04: beq         $a1, $zero, L_0042FD20
    if (ctx->r5 == 0) {
        // 0x0042FD08: nop
    
            goto L_0042FD20;
    }
    // 0x0042FD08: nop

    // 0x0042FD0C: jal         0x002052D8
    // 0x0042FD10: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_11;
    // 0x0042FD10: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_11:
    // 0x0042FD14: sw          $zero, 0xF00($s2)
    MEM_W(0XF00, ctx->r18) = 0;
    // 0x0042FD18: sw          $zero, 0xF04($s2)
    MEM_W(0XF04, ctx->r18) = 0;
    // 0x0042FD1C: sw          $zero, 0xF08($s2)
    MEM_W(0XF08, ctx->r18) = 0;
L_0042FD20:
    // 0x0042FD20: beq         $s4, $zero, L_0042FDBC
    if (ctx->r20 == 0) {
        // 0x0042FD24: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0042FDBC;
    }
    // 0x0042FD24: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042FD28: sll         $s0, $s4, 4
    ctx->r16 = S32(ctx->r20 << 4);
    // 0x0042FD2C: subu        $s0, $s0, $s4
    ctx->r16 = SUB32(ctx->r16, ctx->r20);
    // 0x0042FD30: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x0042FD34: subu        $s0, $s0, $s4
    ctx->r16 = SUB32(ctx->r16, ctx->r20);
    // 0x0042FD38: sll         $s0, $s0, 6
    ctx->r16 = S32(ctx->r16 << 6);
    // 0x0042FD3C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042FD40: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    // 0x0042FD44: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x0042FD48: addiu       $a3, $a3, -0x6600
    ctx->r7 = ADD32(ctx->r7, -0X6600);
    // 0x0042FD4C: jal         0x00204EDC
    // 0x0042FD50: sw          $s4, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r20;
    func_00204EDC(rdram, ctx);
        goto after_12;
    // 0x0042FD50: sw          $s4, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r20;
    after_12:
    // 0x0042FD54: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042FD58: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x0042FD5C: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x0042FD60: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0042FD64: jal         0x00266C5C
    // 0x0042FD68: sw          $a0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r4;
    func_00266C5C(rdram, ctx);
        goto after_13;
    // 0x0042FD68: sw          $a0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r4;
    after_13:
    // 0x0042FD6C: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x0042FD70: blez        $v0, L_0042FDAC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0042FD74: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_0042FDAC;
    }
    // 0x0042FD74: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0042FD78: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
L_0042FD7C:
    // 0x0042FD7C: lw          $v0, 0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4);
    // 0x0042FD80: addiu       $a0, $s2, 0xC
    ctx->r4 = ADD32(ctx->r18, 0XC);
    // 0x0042FD84: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x0042FD88: sw          $s1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r17;
    // 0x0042FD8C: lw          $a1, 0x4($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X4);
    // 0x0042FD90: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0042FD94: jal         0x00200574
    // 0x0042FD98: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    func_00200574(rdram, ctx);
        goto after_14;
    // 0x0042FD98: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    after_14:
    // 0x0042FD9C: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x0042FDA0: slt         $v0, $s1, $v0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0042FDA4: bne         $v0, $zero, L_0042FD7C
    if (ctx->r2 != 0) {
        // 0x0042FDA8: addiu       $s0, $s0, 0xEC0
        ctx->r16 = ADD32(ctx->r16, 0XEC0);
            goto L_0042FD7C;
    }
    // 0x0042FDA8: addiu       $s0, $s0, 0xEC0
    ctx->r16 = ADD32(ctx->r16, 0XEC0);
L_0042FDAC:
    // 0x0042FDAC: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x0042FDB0: jal         0x00275AE0
    // 0x0042FDB4: nop

    func_00275AE0(rdram, ctx);
        goto after_15;
    // 0x0042FDB4: nop

    after_15:
    // 0x0042FDB8: sw          $zero, 0x11E8($s2)
    MEM_W(0X11E8, ctx->r18) = 0;
L_0042FDBC:
    // 0x0042FDBC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042FDC0: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    // 0x0042FDC4: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    // 0x0042FDC8: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x0042FDCC: addiu       $a3, $a3, -0x65F8
    ctx->r7 = ADD32(ctx->r7, -0X65F8);
    // 0x0042FDD0: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x0042FDD4: jal         0x00204EDC
    // 0x0042FDD8: sw          $v0, 0xF08($s2)
    MEM_W(0XF08, ctx->r18) = ctx->r2;
    func_00204EDC(rdram, ctx);
        goto after_16;
    // 0x0042FDD8: sw          $v0, 0xF08($s2)
    MEM_W(0XF08, ctx->r18) = ctx->r2;
    after_16:
    // 0x0042FDDC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042FDE0: sw          $v0, 0xF00($s2)
    MEM_W(0XF00, ctx->r18) = ctx->r2;
    // 0x0042FDE4: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x0042FDE8: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x0042FDEC: jal         0x00266C5C
    // 0x0042FDF0: sw          $a0, 0xF04($s2)
    MEM_W(0XF04, ctx->r18) = ctx->r4;
    func_00266C5C(rdram, ctx);
        goto after_17;
    // 0x0042FDF0: sw          $a0, 0xF04($s2)
    MEM_W(0XF04, ctx->r18) = ctx->r4;
    after_17:
    // 0x0042FDF4: lw          $v0, 0xF08($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XF08);
    // 0x0042FDF8: blez        $v0, L_0042FE28
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0042FDFC: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_0042FE28;
    }
    // 0x0042FDFC: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0042FE00: addiu       $a0, $s2, 0xF0C
    ctx->r4 = ADD32(ctx->r18, 0XF0C);
L_0042FE04:
    // 0x0042FE04: lw          $v0, 0xF04($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XF04);
    // 0x0042FE08: sll         $a1, $s1, 6
    ctx->r5 = S32(ctx->r17 << 6);
    // 0x0042FE0C: jal         0x00200574
    // 0x0042FE10: addu        $a1, $v0, $a1
    ctx->r5 = ADD32(ctx->r2, ctx->r5);
    func_00200574(rdram, ctx);
        goto after_18;
    // 0x0042FE10: addu        $a1, $v0, $a1
    ctx->r5 = ADD32(ctx->r2, ctx->r5);
    after_18:
    // 0x0042FE14: lw          $v0, 0xF08($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XF08);
    // 0x0042FE18: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0042FE1C: slt         $v0, $s1, $v0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0042FE20: bne         $v0, $zero, L_0042FE04
    if (ctx->r2 != 0) {
        // 0x0042FE24: addiu       $a0, $s2, 0xF0C
        ctx->r4 = ADD32(ctx->r18, 0XF0C);
            goto L_0042FE04;
    }
    // 0x0042FE24: addiu       $a0, $s2, 0xF0C
    ctx->r4 = ADD32(ctx->r18, 0XF0C);
L_0042FE28:
    // 0x0042FE28: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0042FE2C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0042FE30: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0042FE34: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0042FE38: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0042FE3C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042FE40: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x0042FE44: jr          $ra
    // 0x0042FE48: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0042FE48: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00293D40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_00236444(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00236444: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00236448: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0023644C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00236450: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00236454: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x00236458: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0023645C: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    // 0x00236460: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00236464: jal         0x0026D3BC
    // 0x00236468: addiu       $a0, $a0, 0x7580
    ctx->r4 = ADD32(ctx->r4, 0X7580);
    func_0026D3BC(rdram, ctx);
        goto after_0;
    // 0x00236468: addiu       $a0, $a0, 0x7580
    ctx->r4 = ADD32(ctx->r4, 0X7580);
    after_0:
    // 0x0023646C: beq         $v0, $zero, L_0023648C
    if (ctx->r2 == 0) {
        // 0x00236470: nop
    
            goto L_0023648C;
    }
    // 0x00236470: nop

    // 0x00236474: sw          $s0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r16;
    // 0x00236478: sw          $s1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r17;
    // 0x0023647C: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x00236480: lwc1        $f0, 0x30($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X30);
    // 0x00236484: sw          $s2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r18;
    // 0x00236488: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
L_0023648C:
    // 0x0023648C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00236490: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00236494: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00236498: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0023649C: jr          $ra
    // 0x002364A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002364A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0045E01C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_0046168C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0046168C: addiu       $sp, $sp, -0x130
    ctx->r29 = ADD32(ctx->r29, -0X130);
    // 0x00461690: sw          $s2, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r18;
    // 0x00461694: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00461698: sw          $s3, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r19;
    // 0x0046169C: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x004616A0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x004616A4: addu        $v0, $s3, $a1
    ctx->r2 = ADD32(ctx->r19, ctx->r5);
    // 0x004616A8: sw          $ra, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r31;
    // 0x004616AC: sw          $s6, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r22;
    // 0x004616B0: sw          $s5, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r21;
    // 0x004616B4: sw          $s4, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r20;
    // 0x004616B8: sw          $s1, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->r17;
    // 0x004616BC: sw          $s0, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->r16;
L_004616C0:
    // 0x004616C0: sb          $zero, 0x101($v0)
    MEM_B(0X101, ctx->r2) = 0;
    // 0x004616C4: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x004616C8: bgez        $a1, L_004616C0
    if (SIGNED(ctx->r5) >= 0) {
        // 0x004616CC: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_004616C0;
    }
    // 0x004616CC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x004616D0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x004616D4: sb          $v0, 0x100($s3)
    MEM_B(0X100, ctx->r19) = ctx->r2;
    // 0x004616D8: lbu         $v0, 0x64($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X64);
    // 0x004616DC: beq         $v0, $zero, L_004617AC
    if (ctx->r2 == 0) {
        // 0x004616E0: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_004617AC;
    }
    // 0x004616E0: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x004616E4: addiu       $s6, $zero, 0x3
    ctx->r22 = ADD32(0, 0X3);
    // 0x004616E8: addiu       $s4, $sp, 0x10
    ctx->r20 = ADD32(ctx->r29, 0X10);
    // 0x004616EC: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x004616F0: andi        $a3, $s1, 0xFF
    ctx->r7 = ctx->r17 & 0XFF;
L_004616F4:
    // 0x004616F4: bne         $a3, $zero, L_00461700
    if (ctx->r7 != 0) {
        // 0x004616F8: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_00461700;
    }
    // 0x004616F8: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x004616FC: lw          $s0, 0x60($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X60);
L_00461700:
    // 0x00461700: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00461704: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x00461708: jal         0x004299C4
    // 0x0046170C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    entry_004299C4(rdram, ctx);
        goto after_0;
    // 0x0046170C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x00461710: beq         $v0, $zero, L_00461720
    if (ctx->r2 == 0) {
        // 0x00461714: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_00461720;
    }
    // 0x00461714: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00461718: bne         $v0, $s6, L_004617B0
    if (ctx->r2 != ctx->r22) {
        // 0x0046171C: nop
    
            goto L_004617B0;
    }
    // 0x0046171C: nop

L_00461720:
    // 0x00461720: slti        $v0, $a1, 0x80
    ctx->r2 = SIGNED(ctx->r5) < 0X80 ? 1 : 0;
    // 0x00461724: beql        $v0, $zero, L_00461798
    if (ctx->r2 == 0) {
        // 0x00461728: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00461798;
    }
    goto skip_0;
    // 0x00461728: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x0046172C: andi        $a3, $s1, 0xFF
    ctx->r7 = ctx->r17 & 0XFF;
    // 0x00461730: andi        $v0, $a3, 0x7
    ctx->r2 = ctx->r7 & 0X7;
    // 0x00461734: sllv        $t0, $s5, $v0
    ctx->r8 = S32(ctx->r21 << (ctx->r2 & 31));
    // 0x00461738: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x0046173C: addu        $a2, $v0, $s4
    ctx->r6 = ADD32(ctx->r2, ctx->r20);
L_00461740:
    // 0x00461740: lhu         $a0, 0x0($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0X0);
    // 0x00461744: lw          $v0, 0x60($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X60);
    // 0x00461748: andi        $v1, $a0, 0xFFFF
    ctx->r3 = ctx->r4 & 0XFFFF;
    // 0x0046174C: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00461750: bne         $v0, $zero, L_00461788
    if (ctx->r2 != 0) {
        // 0x00461754: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_00461788;
    }
    // 0x00461754: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00461758: srl         $v1, $v1, 8
    ctx->r3 = S32(U32(ctx->r3) >> 8);
    // 0x0046175C: beq         $v1, $a3, L_00461788
    if (ctx->r3 == ctx->r7) {
        // 0x00461760: nop
    
            goto L_00461788;
    }
    // 0x00461760: nop

    // 0x00461764: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x00461768: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
    // 0x0046176C: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x00461770: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x00461774: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00461778: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x0046177C: lbu         $v1, 0x101($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X101);
    // 0x00461780: or          $v1, $v1, $t0
    ctx->r3 = ctx->r3 | ctx->r8;
    // 0x00461784: sb          $v1, 0x101($v0)
    MEM_B(0X101, ctx->r2) = ctx->r3;
L_00461788:
    // 0x00461788: slti        $v0, $a1, 0x80
    ctx->r2 = SIGNED(ctx->r5) < 0X80 ? 1 : 0;
    // 0x0046178C: bne         $v0, $zero, L_00461740
    if (ctx->r2 != 0) {
        // 0x00461790: addiu       $a2, $a2, 0x2
        ctx->r6 = ADD32(ctx->r6, 0X2);
            goto L_00461740;
    }
    // 0x00461790: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x00461794: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_00461798:
    // 0x00461798: lbu         $v1, 0x64($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X64);
    // 0x0046179C: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x004617A0: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x004617A4: bnel        $v0, $zero, L_004616F4
    if (ctx->r2 != 0) {
        // 0x004617A8: andi        $a3, $s1, 0xFF
        ctx->r7 = ctx->r17 & 0XFF;
            goto L_004616F4;
    }
    goto skip_1;
    // 0x004617A8: andi        $a3, $s1, 0xFF
    ctx->r7 = ctx->r17 & 0XFF;
    skip_1:
L_004617AC:
    // 0x004617AC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_004617B0:
    // 0x004617B0: lw          $ra, 0x12C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X12C);
    // 0x004617B4: lw          $s6, 0x128($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X128);
    // 0x004617B8: lw          $s5, 0x124($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X124);
    // 0x004617BC: lw          $s4, 0x120($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X120);
    // 0x004617C0: lw          $s3, 0x11C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X11C);
    // 0x004617C4: lw          $s2, 0x118($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X118);
    // 0x004617C8: lw          $s1, 0x114($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X114);
    // 0x004617CC: lw          $s0, 0x110($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X110);
    // 0x004617D0: jr          $ra
    // 0x004617D4: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
    return;
    // 0x004617D4: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
;}
RECOMP_FUNC void func_00451E0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00418E48:
    // 0x00451E0C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
L_00418E4C:
    // 0x00451E10: lbu         $v1, -0x5504($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X5504);
    // 0x00451E14: beq         $v1, $zero, L_00451E2C
    if (ctx->r3 == 0) {
        // 0x00451E18: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00451E2C;
    }
    // 0x00451E18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00451E1C: beq         $v1, $v0, L_00451E3C
    if (ctx->r3 == ctx->r2) {
        // 0x00451E20: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00451E3C;
    }
    // 0x00451E20: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00451E24: j           L_00418E4C
    // 0x00451E28: nop

    func_00418E4C(rdram, ctx);
    return;
    // 0x00451E28: nop

L_00451E2C:
    // 0x00451E2C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00451E30: addiu       $v0, $v0, 0x617C
    ctx->r2 = ADD32(ctx->r2, 0X617C);
    // 0x00451E34: j           L_00418E48
    // 0x00451E38: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00418E48(rdram, ctx);
    return;
    // 0x00451E38: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00451E3C:
    // 0x00451E3C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00451E40: addiu       $v0, $v0, 0x6164
    ctx->r2 = ADD32(ctx->r2, 0X6164);
    // 0x00451E44: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00451E48: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00451E4C: jr          $ra
    // 0x00451E50: nop

    return;
    // 0x00451E50: nop

;}
RECOMP_FUNC void func_00293EBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00293EBC: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
;}
RECOMP_FUNC void func_0042876C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042876C: addiu       $sp, $sp, -0x130
    ctx->r29 = ADD32(ctx->r29, -0X130);
    // 0x00428770: sw          $s2, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r18;
    // 0x00428774: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00428778: sw          $s3, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r19;
    // 0x0042877C: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x00428780: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x00428784: addu        $v0, $s3, $a1
    ctx->r2 = ADD32(ctx->r19, ctx->r5);
    // 0x00428788: sw          $ra, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r31;
    // 0x0042878C: sw          $s6, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r22;
    // 0x00428790: sw          $s5, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r21;
    // 0x00428794: sw          $s4, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r20;
    // 0x00428798: sw          $s1, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->r17;
    // 0x0042879C: sw          $s0, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->r16;
L_004287A0:
    // 0x004287A0: sb          $zero, 0x101($v0)
    MEM_B(0X101, ctx->r2) = 0;
    // 0x004287A4: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x004287A8: bgez        $a1, L_004287A0
    if (SIGNED(ctx->r5) >= 0) {
        // 0x004287AC: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_004287A0;
    }
    // 0x004287AC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x004287B0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x004287B4: sb          $v0, 0x100($s3)
    MEM_B(0X100, ctx->r19) = ctx->r2;
    // 0x004287B8: lbu         $v0, 0x64($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X64);
    // 0x004287BC: beq         $v0, $zero, L_0042888C
    if (ctx->r2 == 0) {
        // 0x004287C0: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_0042888C;
    }
    // 0x004287C0: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x004287C4: addiu       $s6, $zero, 0x3
    ctx->r22 = ADD32(0, 0X3);
    // 0x004287C8: addiu       $s4, $sp, 0x10
    ctx->r20 = ADD32(ctx->r29, 0X10);
    // 0x004287CC: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x004287D0: andi        $a3, $s1, 0xFF
    ctx->r7 = ctx->r17 & 0XFF;
L_004287D4:
    // 0x004287D4: bne         $a3, $zero, L_004287E0
    if (ctx->r7 != 0) {
        // 0x004287D8: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_004287E0;
    }
    // 0x004287D8: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x004287DC: lw          $s0, 0x60($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X60);
L_004287E0:
    // 0x004287E0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x004287E4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x004287E8: jal         0x00429AA4
    // 0x004287EC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_00429AA4(rdram, ctx);
        goto after_0;
    // 0x004287EC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x004287F0: beq         $v0, $zero, L_00428800
    if (ctx->r2 == 0) {
        // 0x004287F4: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_00428800;
    }
    // 0x004287F4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x004287F8: bne         $v0, $s6, L_00428890
    if (ctx->r2 != ctx->r22) {
        // 0x004287FC: nop
    
            goto L_00428890;
    }
    // 0x004287FC: nop

L_00428800:
    // 0x00428800: slti        $v0, $a1, 0x80
    ctx->r2 = SIGNED(ctx->r5) < 0X80 ? 1 : 0;
    // 0x00428804: beql        $v0, $zero, L_00428878
    if (ctx->r2 == 0) {
        // 0x00428808: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00428878;
    }
    goto skip_0;
    // 0x00428808: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x0042880C: andi        $a3, $s1, 0xFF
    ctx->r7 = ctx->r17 & 0XFF;
    // 0x00428810: andi        $v0, $a3, 0x7
    ctx->r2 = ctx->r7 & 0X7;
    // 0x00428814: sllv        $t0, $s5, $v0
    ctx->r8 = S32(ctx->r21 << (ctx->r2 & 31));
    // 0x00428818: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x0042881C: addu        $a2, $v0, $s4
    ctx->r6 = ADD32(ctx->r2, ctx->r20);
L_00428820:
    // 0x00428820: lhu         $a0, 0x0($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0X0);
    // 0x00428824: lw          $v0, 0x60($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X60);
    // 0x00428828: andi        $v1, $a0, 0xFFFF
    ctx->r3 = ctx->r4 & 0XFFFF;
    // 0x0042882C: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00428830: bne         $v0, $zero, L_00428868
    if (ctx->r2 != 0) {
        // 0x00428834: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_00428868;
    }
    // 0x00428834: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00428838: srl         $v1, $v1, 8
    ctx->r3 = S32(U32(ctx->r3) >> 8);
    // 0x0042883C: beq         $v1, $a3, L_00428868
    if (ctx->r3 == ctx->r7) {
        // 0x00428840: nop
    
            goto L_00428868;
    }
    // 0x00428840: nop

    // 0x00428844: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x00428848: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
    // 0x0042884C: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x00428850: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x00428854: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00428858: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x0042885C: lbu         $v1, 0x101($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X101);
    // 0x00428860: or          $v1, $v1, $t0
    ctx->r3 = ctx->r3 | ctx->r8;
    // 0x00428864: sb          $v1, 0x101($v0)
    MEM_B(0X101, ctx->r2) = ctx->r3;
L_00428868:
    // 0x00428868: slti        $v0, $a1, 0x80
    ctx->r2 = SIGNED(ctx->r5) < 0X80 ? 1 : 0;
    // 0x0042886C: bne         $v0, $zero, L_00428820
    if (ctx->r2 != 0) {
        // 0x00428870: addiu       $a2, $a2, 0x2
        ctx->r6 = ADD32(ctx->r6, 0X2);
            goto L_00428820;
    }
    // 0x00428870: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x00428874: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_00428878:
    // 0x00428878: lbu         $v1, 0x64($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X64);
    // 0x0042887C: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x00428880: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x00428884: bnel        $v0, $zero, L_004287D4
    if (ctx->r2 != 0) {
        // 0x00428888: andi        $a3, $s1, 0xFF
        ctx->r7 = ctx->r17 & 0XFF;
            goto L_004287D4;
    }
    goto skip_1;
    // 0x00428888: andi        $a3, $s1, 0xFF
    ctx->r7 = ctx->r17 & 0XFF;
    skip_1:
L_0042888C:
    // 0x0042888C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00428890:
    // 0x00428890: lw          $ra, 0x12C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X12C);
    // 0x00428894: lw          $s6, 0x128($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X128);
    // 0x00428898: lw          $s5, 0x124($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X124);
    // 0x0042889C: lw          $s4, 0x120($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X120);
    // 0x004288A0: lw          $s3, 0x11C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X11C);
    // 0x004288A4: lw          $s2, 0x118($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X118);
    // 0x004288A8: lw          $s1, 0x114($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X114);
    // 0x004288AC: lw          $s0, 0x110($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X110);
    // 0x004288B0: jr          $ra
    // 0x004288B4: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
    return;
    // 0x004288B4: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
;}
RECOMP_FUNC void func_0025F8E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025F8E4: lbu         $v1, 0xC8($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0XC8);
    // 0x0025F8E8: addiu       $v1, $v1, 0x19
    ctx->r3 = ADD32(ctx->r3, 0X19);
    // 0x0025F8EC: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x0025F8F0: beql        $v0, $zero, L_0025F8F8
    if (ctx->r2 == 0) {
        // 0x0025F8F4: addiu       $v1, $zero, 0xFF
        ctx->r3 = ADD32(0, 0XFF);
            goto L_0025F8F8;
    }
    goto skip_0;
    // 0x0025F8F4: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    skip_0:
L_0025F8F8:
    // 0x0025F8F8: jr          $ra
    // 0x0025F8FC: sb          $v1, 0xC8($a1)
    MEM_B(0XC8, ctx->r5) = ctx->r3;
    return;
    // 0x0025F8FC: sb          $v1, 0xC8($a1)
    MEM_B(0XC8, ctx->r5) = ctx->r3;
;}
RECOMP_FUNC void func_0041B148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B148: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0041B14C: lw          $v1, 0x924($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X924);
    // 0x0041B150: sltiu       $v0, $v1, 0xB
    ctx->r2 = ctx->r3 < 0XB ? 1 : 0;
    // 0x0041B154: beq         $v0, $zero, L_0041B170
    if (ctx->r2 == 0) {
        // 0x0041B158: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_0041B170;
    }
    // 0x0041B158: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0041B15C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041B160: addu        $at, $at, $v0
    gpr jr_addend_0041B168 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0041B164: lw          $v0, 0x12E0($at)
    ctx->r2 = ADD32(ctx->r1, 0X12E0);
    // 0x0041B168: jr          $v0
    // 0x0041B16C: nop

    switch (jr_addend_0041B168 >> 2) {
        case 0: goto L_0041B170; break;
        default: switch_error(__func__, 0x0041B168, 0x800C12E0);
    }
    // 0x0041B16C: nop

L_0041B170:
    // 0x0041B170: jr          $ra
    // 0x0041B174: addiu       $v0, $zero, 0x3E8
    ctx->r2 = ADD32(0, 0X3E8);
    return;
    // 0x0041B174: addiu       $v0, $zero, 0x3E8
    ctx->r2 = ADD32(0, 0X3E8);
;}
RECOMP_FUNC void func_00231B2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00231B2C: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x00231B30: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    // 0x00231B34: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00231B38: sw          $ra, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r31;
    // 0x00231B3C: sw          $s1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r17;
    // 0x00231B40: lw          $v0, 0xF8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XF8);
    // 0x00231B44: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00231B48: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x00231B4C: beq         $v0, $zero, L_00231B7C
    if (ctx->r2 == 0) {
        // 0x00231B50: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_00231B7C;
    }
    // 0x00231B50: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00231B54: lui         $t3, 0x800F
    ctx->r11 = S32(0X800F << 16);
    // 0x00231B58: addiu       $t3, $t3, 0x1DB8
    ctx->r11 = ADD32(ctx->r11, 0X1DB8);
    // 0x00231B5C: lw          $t0, 0x0($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X0);
    // 0x00231B60: lw          $t1, 0x4($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X4);
    // 0x00231B64: lw          $t2, 0x8($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X8);
    // 0x00231B68: sw          $t0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r8;
    // 0x00231B6C: sw          $t1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r9;
    // 0x00231B70: sw          $t2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r10;
    // 0x00231B74: j           L_00231B98
    // 0x00231B78: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
        goto L_00231B98;
    // 0x00231B78: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
L_00231B7C:
    // 0x00231B7C: lw          $t0, 0x18($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X18);
    // 0x00231B80: lw          $t1, 0x1C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1C);
    // 0x00231B84: lw          $t2, 0x20($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X20);
    // 0x00231B88: sw          $t0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r8;
    // 0x00231B8C: sw          $t1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r9;
    // 0x00231B90: sw          $t2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r10;
    // 0x00231B94: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
L_00231B98:
    // 0x00231B98: jal         0x0020E810
    // 0x00231B9C: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    func_0020E810(rdram, ctx);
        goto after_0;
    // 0x00231B9C: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    after_0:
    // 0x00231BA0: lui         $a1, 0x20
    ctx->r5 = S32(0X20 << 16);
    // 0x00231BA4: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x00231BA8: addiu       $v1, $v1, 0x1D98
    ctx->r3 = ADD32(ctx->r3, 0X1D98);
    // 0x00231BAC: lw          $v0, 0x114($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X114);
    // 0x00231BB0: lw          $a0, -0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, -0X4);
    // 0x00231BB4: ori         $a1, $a1, 0x6
    ctx->r5 = ctx->r5 | 0X6;
    // 0x00231BB8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00231BBC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00231BC0: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    // 0x00231BC4: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x00231BC8: lw          $t1, 0x64($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X64);
    // 0x00231BCC: lw          $t2, 0x68($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X68);
    // 0x00231BD0: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x00231BD4: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x00231BD8: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x00231BDC: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x00231BE0: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x00231BE4: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x00231BE8: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x00231BEC: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x00231BF0: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x00231BF4: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x00231BF8: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x00231BFC: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x00231C00: lw          $t1, 0x4($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X4);
    // 0x00231C04: lw          $t2, 0x8($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X8);
    // 0x00231C08: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x00231C0C: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x00231C10: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    // 0x00231C14: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x00231C18: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x00231C1C: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    // 0x00231C20: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x00231C24: addiu       $a0, $a0, -0x76D8
    ctx->r4 = ADD32(ctx->r4, -0X76D8);
    // 0x00231C28: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x00231C2C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x00231C30: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x00231C34: lw          $a2, 0x10C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X10C);
    // 0x00231C38: lw          $a3, 0x110($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X110);
    // 0x00231C3C: jal         0x0022F350
    // 0x00231C40: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0022F350(rdram, ctx);
        goto after_1;
    // 0x00231C40: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00231C44: lw          $ra, 0x78($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X78);
    // 0x00231C48: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x00231C4C: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x00231C50: jr          $ra
    // 0x00231C54: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x00231C54: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_002746AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002746AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002746B0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002746B4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x002746B8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002746BC: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x002746C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x002746C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002746C8: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x002746CC: lw          $s0, 0xB0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0XB0);
    // 0x002746D0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x002746D4: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x002746D8: addiu       $s0, $s0, 0x84
    ctx->r16 = ADD32(ctx->r16, 0X84);
    // 0x002746DC: lh          $a1, 0xDC($v0)
    ctx->r5 = MEM_H(ctx->r2, 0XDC);
    // 0x002746E0: jal         0x00293E60
    // 0x002746E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00293E60(rdram, ctx);
        goto after_0;
    // 0x002746E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x002746E8: lwc1        $f1, 0xC8($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XC8);
    // 0x002746EC: mtc1        $s2, $f0
    ctx->f0.u32l = ctx->r18;
    // 0x002746F0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002746F4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002746F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002746FC: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00274700: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x00274704: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x00274708: jal         0x00293E70
    // 0x0027470C: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_00293E70(rdram, ctx);
        goto after_1;
    // 0x0027470C: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_1:
    // 0x00274710: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00274714: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00274718: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0027471C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00274720: jr          $ra
    // 0x00274724: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00274724: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00259858(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00259858: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025985C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00259860: lw          $a0, 0x1A8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1A8);
    // 0x00259864: jal         0x00253DE0
    // 0x00259868: addiu       $a1, $zero, 0x464
    ctx->r5 = ADD32(0, 0X464);
    func_00253DE0(rdram, ctx);
        goto after_0;
    // 0x00259868: addiu       $a1, $zero, 0x464
    ctx->r5 = ADD32(0, 0X464);
    after_0:
    // 0x0025986C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00259870: jr          $ra
    // 0x00259874: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00259874: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002536B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002536B4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x002536B8: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x002536BC: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x002536C0: bne         $v0, $zero, L_002536D0
    if (ctx->r2 != 0) {
            // 0x002536C4: addiu       $v0, $a1, -0xFA0
    ctx->r2 = ADD32(ctx->r5, -0XFA0);
    func_002536D0(rdram, ctx);
    return;
    }
    // 0x002536C4: addiu       $v0, $a1, -0xFA0
    ctx->r2 = ADD32(ctx->r5, -0XFA0);
    // 0x002536C8: jr          $ra
    // 0x002536CC: sltiu       $v0, $v0, 0x401
    ctx->r2 = ctx->r2 < 0X401 ? 1 : 0;
    return;
    // 0x002536CC: sltiu       $v0, $v0, 0x401
    ctx->r2 = ctx->r2 < 0X401 ? 1 : 0;
;}
RECOMP_FUNC void func_0027F2C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027F2C4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0027F2C8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0027F2CC: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0027F2D0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0027F2D4: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x0027F2D8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x0027F2DC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0027F2E0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0027F2E4: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x0027F2E8: sb          $zero, 0x548($s2)
    MEM_B(0X548, ctx->r18) = 0;
    // 0x0027F2EC: sb          $zero, 0x549($s2)
    MEM_B(0X549, ctx->r18) = 0;
    // 0x0027F2F0: beq         $a1, $zero, L_0027F300
    if (ctx->r5 == 0) {
        // 0x0027F2F4: sb          $zero, 0x54A($s2)
        MEM_B(0X54A, ctx->r18) = 0;
            goto L_0027F300;
    }
    // 0x0027F2F4: sb          $zero, 0x54A($s2)
    MEM_B(0X54A, ctx->r18) = 0;
    // 0x0027F2F8: jal         0x0020565C
    // 0x0027F2FC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_0020565C(rdram, ctx);
        goto after_0;
    // 0x0027F2FC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
L_0027F300:
    // 0x0027F300: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0027F304: lw          $v0, -0x535C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X535C);
    // 0x0027F308: bne         $v0, $zero, L_0027F31C
    if (ctx->r2 != 0) {
        // 0x0027F30C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_0027F31C;
    }
    // 0x0027F30C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0027F310: lw          $v1, 0x30($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X30);
    // 0x0027F314: bne         $v1, $v0, L_0027F32C
    if (ctx->r3 != ctx->r2) {
        // 0x0027F318: nop
    
            goto L_0027F32C;
    }
    // 0x0027F318: nop

L_0027F31C:
    // 0x0027F31C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027F320: lwc1        $f0, -0x65B0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X65B0);
    // 0x0027F324: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0027F328: swc1        $f0, 0x5A44($at)
    MEM_W(0X5A44, ctx->r1) = ctx->f0.u32l;
L_0027F32C:
    // 0x0027F32C: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0027F330: lwc1        $f1, 0x5A44($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5A44);
    // 0x0027F334: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x0027F338: c.eq.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl == ctx->f2.fl;
    // 0x0027F33C: nop

    // 0x0027F340: bc1t        L_0027F35C
    if (c1cs) {
        // 0x0027F344: nop
    
            goto L_0027F35C;
    }
    // 0x0027F344: nop

    // 0x0027F348: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027F34C: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0027F350: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0027F354: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0027F358: swc1        $f0, 0x5A44($at)
    MEM_W(0X5A44, ctx->r1) = ctx->f0.u32l;
L_0027F35C:
    // 0x0027F35C: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0027F360: lwc1        $f0, 0x5A44($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5A44);
    // 0x0027F364: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x0027F368: nop

    // 0x0027F36C: bc1f        L_0027F384
    if (!c1cs) {
        // 0x0027F370: nop
    
            goto L_0027F384;
    }
    // 0x0027F370: nop

    // 0x0027F374: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0027F378: swc1        $f2, 0x5A44($at)
    MEM_W(0X5A44, ctx->r1) = ctx->f2.u32l;
    // 0x0027F37C: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0027F380: lwc1        $f0, 0x5A44($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5A44);
L_0027F384:
    // 0x0027F384: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x0027F388: nop

    // 0x0027F38C: bc1t        L_0027F578
    if (c1cs) {
        // 0x0027F390: nop
    
            goto L_0027F578;
    }
    // 0x0027F390: nop

    // 0x0027F394: lw          $s1, 0x20($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X20);
    // 0x0027F398: beq         $s1, $zero, L_0027F57C
    if (ctx->r17 == 0) {
        // 0x0027F39C: lui         $t1, 0xDC08
        ctx->r9 = S32(0XDC08 << 16);
            goto L_0027F57C;
    }
    // 0x0027F39C: lui         $t1, 0xDC08
    ctx->r9 = S32(0XDC08 << 16);
    // 0x0027F3A0: ori         $t1, $t1, 0x8
    ctx->r9 = ctx->r9 | 0X8;
    // 0x0027F3A4: lui         $t4, 0xE300
    ctx->r12 = S32(0XE300 << 16);
    // 0x0027F3A8: ori         $t4, $t4, 0xA01
    ctx->r12 = ctx->r12 | 0XA01;
    // 0x0027F3AC: lui         $t6, 0xFCFF
    ctx->r14 = S32(0XFCFF << 16);
    // 0x0027F3B0: ori         $t6, $t6, 0xFFFF
    ctx->r14 = ctx->r14 | 0XFFFF;
    // 0x0027F3B4: lui         $t5, 0xFFFE
    ctx->r13 = S32(0XFFFE << 16);
    // 0x0027F3B8: ori         $t5, $t5, 0x793C
    ctx->r13 = ctx->r13 | 0X793C;
    // 0x0027F3BC: lui         $t7, 0xE200
    ctx->r15 = S32(0XE200 << 16);
    // 0x0027F3C0: ori         $t7, $t7, 0x1C
    ctx->r15 = ctx->r15 | 0X1C;
    // 0x0027F3C4: lui         $s0, 0x1
    ctx->r16 = S32(0X1 << 16);
    // 0x0027F3C8: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x0027F3CC: addiu       $t0, $t0, -0x71DC
    ctx->r8 = ADD32(ctx->r8, -0X71DC);
    // 0x0027F3D0: ori         $s0, $s0, 0x1
    ctx->r16 = ctx->r16 | 0X1;
    // 0x0027F3D4: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x0027F3D8: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    // 0x0027F3DC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027F3E0: lwc1        $f2, -0x65AC($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X65AC);
    // 0x0027F3E4: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x0027F3E8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x0027F3EC: addiu       $a1, $a0, 0x8
    ctx->r5 = ADD32(ctx->r4, 0X8);
    // 0x0027F3F0: sw          $a0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r4;
    // 0x0027F3F4: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0027F3F8: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x0027F3FC: lui         $v1, 0xDE00
    ctx->r3 = S32(0XDE00 << 16);
    // 0x0027F400: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0027F404: addiu       $v0, $v0, -0x4F00
    ctx->r2 = ADD32(ctx->r2, -0X4F00);
    // 0x0027F408: addiu       $a3, $a0, 0x10
    ctx->r7 = ADD32(ctx->r4, 0X10);
    // 0x0027F40C: sw          $a1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r5;
    // 0x0027F410: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x0027F414: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0027F418: addiu       $v0, $v0, -0x4ED0
    ctx->r2 = ADD32(ctx->r2, -0X4ED0);
    // 0x0027F41C: addiu       $t2, $a0, 0x18
    ctx->r10 = ADD32(ctx->r4, 0X18);
    // 0x0027F420: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x0027F424: sw          $a3, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r7;
    // 0x0027F428: sw          $v1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r3;
    // 0x0027F42C: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0027F430: lw          $v1, 0x6D1C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6D1C);
    // 0x0027F434: addiu       $t3, $a0, 0x20
    ctx->r11 = ADD32(ctx->r4, 0X20);
    // 0x0027F438: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x0027F43C: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0027F440: lhu         $a1, 0x2032($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X2032);
    // 0x0027F444: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x0027F448: lhu         $a2, 0x2036($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0X2036);
    // 0x0027F44C: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x0027F450: addu        $v0, $s1, $v1
    ctx->r2 = ADD32(ctx->r17, ctx->r3);
    // 0x0027F454: addiu       $v1, $v1, 0x298
    ctx->r3 = ADD32(ctx->r3, 0X298);
    // 0x0027F458: addu        $v1, $s1, $v1
    ctx->r3 = ADD32(ctx->r17, ctx->r3);
    // 0x0027F45C: sh          $a1, 0x298($v0)
    MEM_H(0X298, ctx->r2) = ctx->r5;
    // 0x0027F460: sh          $a2, 0x29A($v0)
    MEM_H(0X29A, ctx->r2) = ctx->r6;
    // 0x0027F464: sh          $a1, 0x2A0($v0)
    MEM_H(0X2A0, ctx->r2) = ctx->r5;
    // 0x0027F468: sh          $a2, 0x2A2($v0)
    MEM_H(0X2A2, ctx->r2) = ctx->r6;
    // 0x0027F46C: lui         $v0, 0xED00
    ctx->r2 = S32(0XED00 << 16);
    // 0x0027F470: sw          $t2, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r10;
    // 0x0027F474: sw          $t1, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r9;
    // 0x0027F478: sw          $v1, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r3;
    // 0x0027F47C: sw          $t3, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r11;
    // 0x0027F480: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x0027F484: lw          $a3, 0x2030($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X2030);
    // 0x0027F488: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x0027F48C: lw          $a2, 0x2034($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X2034);
    // 0x0027F490: addiu       $t1, $a0, 0x28
    ctx->r9 = ADD32(ctx->r4, 0X28);
    // 0x0027F494: sw          $v0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r2;
    // 0x0027F498: sw          $t1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r9;
    // 0x0027F49C: addiu       $a1, $a3, -0x1
    ctx->r5 = ADD32(ctx->r7, -0X1);
    // 0x0027F4A0: mtc1        $a1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r5;
    // 0x0027F4A4: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0027F4A8: addiu       $v0, $a2, -0x1
    ctx->r2 = ADD32(ctx->r6, -0X1);
    // 0x0027F4AC: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0027F4B0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0027F4B4: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0027F4B8: andi        $a1, $a1, 0xFFF
    ctx->r5 = ctx->r5 & 0XFFF;
    // 0x0027F4BC: andi        $a3, $a3, 0x3FF
    ctx->r7 = ctx->r7 & 0X3FF;
    // 0x0027F4C0: sll         $a3, $a3, 14
    ctx->r7 = S32(ctx->r7 << 14);
    // 0x0027F4C4: andi        $a2, $a2, 0x3FF
    ctx->r6 = ctx->r6 & 0X3FF;
    // 0x0027F4C8: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0027F4CC: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x0027F4D0: trunc.w.s   $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f1.fl);
    // 0x0027F4D4: mfc1        $v0, $f3
    ctx->r2 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0027F4D8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x0027F4DC: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x0027F4E0: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0027F4E4: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0027F4E8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x0027F4EC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0027F4F0: sw          $v0, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r2;
    // 0x0027F4F4: lui         $v0, 0xFF10
    ctx->r2 = S32(0XFF10 << 16);
    // 0x0027F4F8: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0027F4FC: lw          $v1, 0x7070($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7070);
    // 0x0027F500: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x0027F504: sw          $a1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r5;
    // 0x0027F508: addiu       $a1, $a0, 0x48
    ctx->r5 = ADD32(ctx->r4, 0X48);
    // 0x0027F50C: lw          $v0, 0x110($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X110);
    // 0x0027F510: addiu       $v1, $a0, 0x30
    ctx->r3 = ADD32(ctx->r4, 0X30);
    // 0x0027F514: sw          $v1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r3;
    // 0x0027F518: sw          $v0, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r2;
    // 0x0027F51C: lui         $v0, 0x30
    ctx->r2 = S32(0X30 << 16);
    // 0x0027F520: sw          $t4, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r12;
    // 0x0027F524: sw          $v0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r2;
    // 0x0027F528: addiu       $v0, $a0, 0x38
    ctx->r2 = ADD32(ctx->r4, 0X38);
    // 0x0027F52C: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x0027F530: sw          $t6, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r14;
    // 0x0027F534: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
    // 0x0027F538: addiu       $v1, $a0, 0x40
    ctx->r3 = ADD32(ctx->r4, 0X40);
    // 0x0027F53C: sw          $v1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r3;
    // 0x0027F540: sw          $t7, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->r15;
    // 0x0027F544: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x0027F548: lui         $v0, 0xF700
    ctx->r2 = S32(0XF700 << 16);
    // 0x0027F54C: sw          $a1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r5;
    // 0x0027F550: sw          $v0, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r2;
    // 0x0027F554: addiu       $v0, $a0, 0x50
    ctx->r2 = ADD32(ctx->r4, 0X50);
    // 0x0027F558: sw          $s0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r16;
    // 0x0027F55C: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x0027F560: lui         $v0, 0xF600
    ctx->r2 = S32(0XF600 << 16);
    // 0x0027F564: or          $a2, $a2, $v0
    ctx->r6 = ctx->r6 | ctx->r2;
    // 0x0027F568: or          $a3, $a3, $a2
    ctx->r7 = ctx->r7 | ctx->r6;
    // 0x0027F56C: sw          $a3, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->r7;
    // 0x0027F570: jal         0x0020B5B8
    // 0x0027F574: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    func_0020B5B8(rdram, ctx);
        goto after_1;
    // 0x0027F574: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    after_1:
L_0027F578:
    // 0x0027F578: lw          $s1, 0x20($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X20);
L_0027F57C:
    // 0x0027F57C: beq         $s1, $zero, L_0027F5D8
    if (ctx->r17 == 0) {
        // 0x0027F580: addiu       $s0, $s2, 0x40
        ctx->r16 = ADD32(ctx->r18, 0X40);
            goto L_0027F5D8;
    }
    // 0x0027F580: addiu       $s0, $s2, 0x40
    ctx->r16 = ADD32(ctx->r18, 0X40);
L_0027F584:
    // 0x0027F584: jal         0x0027E000
    // 0x0027F588: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0027E000(rdram, ctx);
        goto after_2;
    // 0x0027F588: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x0027F58C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0027F590: lw          $v0, 0x940($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X940);
        turok2_patch_world_draw_gate(rdram, ctx);

    // 0x0027F594: bne         $v0, $zero, L_0027F5A8
    if (ctx->r2 != 0) {
        // 0x0027F598: nop
    
            goto L_0027F5A8;
    }
    // 0x0027F598: nop

    // 0x0027F59C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0027F5A0: jal         0x0027E770
    // 0x0027F5A4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_0027E770(rdram, ctx);
        goto after_3;
    // 0x0027F5A4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_3:
L_0027F5A8:
    // 0x0027F5A8: jal         0x0027C1E8
    // 0x0027F5AC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0027C1E8(rdram, ctx);
        goto after_4;
    // 0x0027F5AC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x0027F5B0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0027F5B4: jal         0x002800A0
    // 0x0027F5B8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002800A0(rdram, ctx);
        goto after_5;
    // 0x0027F5B8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_5:
    // 0x0027F5BC: jal         0x00416AA4
    // 0x0027F5C0: addiu       $a0, $s1, 0x53C
    ctx->r4 = ADD32(ctx->r17, 0X53C);
    func_00416AA4(rdram, ctx);
        goto after_6;
    // 0x0027F5C0: addiu       $a0, $s1, 0x53C
    ctx->r4 = ADD32(ctx->r17, 0X53C);
    after_6:
    // 0x0027F5C4: jal         0x0027F64C
    // 0x0027F5C8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0027F64C(rdram, ctx);
        goto after_7;
    // 0x0027F5C8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_7:
    // 0x0027F5CC: lw          $s1, 0x4($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X4);
    // 0x0027F5D0: bne         $s1, $zero, L_0027F584
    if (ctx->r17 != 0) {
        // 0x0027F5D4: addiu       $s0, $s2, 0x40
        ctx->r16 = ADD32(ctx->r18, 0X40);
            goto L_0027F584;
    }
    // 0x0027F5D4: addiu       $s0, $s2, 0x40
    ctx->r16 = ADD32(ctx->r18, 0X40);
L_0027F5D8:
    // 0x0027F5D8: jal         0x0027E000
    // 0x0027F5DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0027E000(rdram, ctx);
        goto after_8;
    // 0x0027F5DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x0027F5E0: lw          $v0, 0x30($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X30);
    // 0x0027F5E4: bne         $v0, $zero, L_0027F5F8
    if (ctx->r2 != 0) {
        // 0x0027F5E8: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0027F5F8;
    }
    // 0x0027F5E8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0027F5EC: jal         0x0027C1E8
    // 0x0027F5F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0027C1E8(rdram, ctx);
        goto after_9;
    // 0x0027F5F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x0027F5F4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_0027F5F8:
    // 0x0027F5F8: jal         0x002800A0
    // 0x0027F5FC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002800A0(rdram, ctx);
        goto after_10;
    // 0x0027F5FC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_10:
    // 0x0027F600: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0027F604: addiu       $a0, $a0, -0x550F
    ctx->r4 = ADD32(ctx->r4, -0X550F);
    // 0x0027F608: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x0027F60C: beq         $v0, $zero, L_0027F628
    if (ctx->r2 == 0) {
        // 0x0027F610: nop
    
            goto L_0027F628;
    }
    // 0x0027F610: nop

    // 0x0027F614: lw          $s1, 0x20($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X20);
    // 0x0027F618: beq         $s1, $zero, L_0027F628
    if (ctx->r17 == 0) {
        // 0x0027F61C: addiu       $a0, $a0, -0x1281
        ctx->r4 = ADD32(ctx->r4, -0X1281);
            goto L_0027F628;
    }
    // 0x0027F61C: addiu       $a0, $a0, -0x1281
    ctx->r4 = ADD32(ctx->r4, -0X1281);
    // 0x0027F620: jal         0x0025328C
    // 0x0027F624: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0025328C(rdram, ctx);
        goto after_11;
    // 0x0027F624: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_11:
L_0027F628:
    // 0x0027F628: jal         0x00416AA4
    // 0x0027F62C: addiu       $a0, $s2, 0x57C
    ctx->r4 = ADD32(ctx->r18, 0X57C);
    func_00416AA4(rdram, ctx);
        goto after_12;
    // 0x0027F62C: addiu       $a0, $s2, 0x57C
    ctx->r4 = ADD32(ctx->r18, 0X57C);
    after_12:
    // 0x0027F630: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x0027F634: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0027F638: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0027F63C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0027F640: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0027F644: jr          $ra
    // 0x0027F648: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0027F648: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0029B1F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029B1F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0029B1F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0029B1F8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0029B1FC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0029B200: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0029B204: sw          $v0, 0x2998($at)
    MEM_W(0X2998, ctx->r1) = ctx->r2;
    // 0x0029B208: jal         0x0029DFE0
    // 0x0029B20C: nop

    func_0029DFE0(rdram, ctx);
        goto after_0;
    // 0x0029B20C: nop

    after_0:
    // 0x0029B210: lui         $a0, 0x2000
    ctx->r4 = S32(0X2000 << 16);
    // 0x0029B214: jal         0x0029E2E0
    // 0x0029B218: or          $a0, $v0, $a0
    ctx->r4 = ctx->r2 | ctx->r4;
    func_0029E2E0(rdram, ctx);
        goto after_1;
    // 0x0029B218: or          $a0, $v0, $a0
    ctx->r4 = ctx->r2 | ctx->r4;
    after_1:
    // 0x0029B21C: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x0029B220: jal         0x0029E220
    // 0x0029B224: ori         $a0, $a0, 0x800
    ctx->r4 = ctx->r4 | 0X800;
    func_0029E220(rdram, ctx);
        goto after_2;
    // 0x0029B224: ori         $a0, $a0, 0x800
    ctx->r4 = ctx->r4 | 0X800;
    after_2:
    // 0x0029B228: lui         $a0, 0x1FC0
    ctx->r4 = S32(0X1FC0 << 16);
L_0029B22C:
    // 0x0029B22C: ori         $a0, $a0, 0x7FC
    ctx->r4 = ctx->r4 | 0X7FC;
    // 0x0029B230: jal         0x0029B4B0
    // 0x0029B234: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_0029B4B0(rdram, ctx);
        goto after_3;
    // 0x0029B234: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_3:
    // 0x0029B238: bne         $v0, $zero, L_0029B22C
    if (ctx->r2 != 0) {
        // 0x0029B23C: lui         $a0, 0x1FC0
        ctx->r4 = S32(0X1FC0 << 16);
            goto L_0029B22C;
    }
    // 0x0029B23C: lui         $a0, 0x1FC0
    ctx->r4 = S32(0X1FC0 << 16);
L_0029B240:
    // 0x0029B240: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x0029B244: ori         $a0, $a0, 0x7FC
    ctx->r4 = ctx->r4 | 0X7FC;
    // 0x0029B248: jal         0x0029B540
    // 0x0029B24C: ori         $a1, $a1, 0x8
    ctx->r5 = ctx->r5 | 0X8;
    func_0029B540(rdram, ctx);
        goto after_4;
    // 0x0029B24C: ori         $a1, $a1, 0x8
    ctx->r5 = ctx->r5 | 0X8;
    after_4:
    // 0x0029B250: bne         $v0, $zero, L_0029B240
    if (ctx->r2 != 0) {
        // 0x0029B254: lui         $a0, 0x1FC0
        ctx->r4 = S32(0X1FC0 << 16);
            goto L_0029B240;
    }
    // 0x0029B254: lui         $a0, 0x1FC0
    ctx->r4 = S32(0X1FC0 << 16);
    // 0x0029B258: lui         $a0, 0x8000
    ctx->r4 = S32(0X8000 << 16);
    // 0x0029B25C: lui         $v0, 0x2A
    ctx->r2 = S32(0X2A << 16);
    // 0x0029B260: addiu       $v0, $v0, -0x4020
    ctx->r2 = ADD32(ctx->r2, -0X4020);
    // 0x0029B264: lui         $t3, 0x8000
    ctx->r11 = S32(0X8000 << 16);
    // 0x0029B268: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0029B26C: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x0029B270: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x0029B274: sw          $t0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r8;
    // 0x0029B278: sw          $t1, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r9;
    // 0x0029B27C: sw          $t2, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r10;
    // 0x0029B280: lw          $t0, 0xC($v0)
    ctx->r8 = MEM_W(ctx->r2, 0XC);
    // 0x0029B284: sw          $t0, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->r8;
    // 0x0029B288: lui         $t3, 0x8000
    ctx->r11 = S32(0X8000 << 16);
    // 0x0029B28C: ori         $t3, $t3, 0x80
    ctx->r11 = ctx->r11 | 0X80;
    // 0x0029B290: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0029B294: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x0029B298: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x0029B29C: sw          $t0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r8;
    // 0x0029B2A0: sw          $t1, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r9;
    // 0x0029B2A4: sw          $t2, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r10;
    // 0x0029B2A8: lw          $t0, 0xC($v0)
    ctx->r8 = MEM_W(ctx->r2, 0XC);
    // 0x0029B2AC: sw          $t0, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->r8;
    // 0x0029B2B0: lui         $t3, 0x8000
    ctx->r11 = S32(0X8000 << 16);
    // 0x0029B2B4: ori         $t3, $t3, 0x100
    ctx->r11 = ctx->r11 | 0X100;
    // 0x0029B2B8: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0029B2BC: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x0029B2C0: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x0029B2C4: sw          $t0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r8;
    // 0x0029B2C8: sw          $t1, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r9;
    // 0x0029B2CC: sw          $t2, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r10;
    // 0x0029B2D0: lw          $t0, 0xC($v0)
    ctx->r8 = MEM_W(ctx->r2, 0XC);
    // 0x0029B2D4: sw          $t0, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->r8;
    // 0x0029B2D8: lui         $t3, 0x8000
    ctx->r11 = S32(0X8000 << 16);
    // 0x0029B2DC: ori         $t3, $t3, 0x180
    ctx->r11 = ctx->r11 | 0X180;
    // 0x0029B2E0: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0029B2E4: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x0029B2E8: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x0029B2EC: sw          $t0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r8;
    // 0x0029B2F0: sw          $t1, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r9;
    // 0x0029B2F4: sw          $t2, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r10;
    // 0x0029B2F8: lw          $t0, 0xC($v0)
    ctx->r8 = MEM_W(ctx->r2, 0XC);
    // 0x0029B2FC: sw          $t0, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->r8;
    // 0x0029B300: jal         0x0029E340
    // 0x0029B304: addiu       $a1, $zero, 0x190
    ctx->r5 = ADD32(0, 0X190);
    func_0029E340(rdram, ctx);
        goto after_5;
    // 0x0029B304: addiu       $a1, $zero, 0x190
    ctx->r5 = ADD32(0, 0X190);
    after_5:
    // 0x0029B308: lui         $a0, 0x8000
    ctx->r4 = S32(0X8000 << 16);
    // 0x0029B30C: jal         0x0029E0D0
    // 0x0029B310: addiu       $a1, $zero, 0x190
    ctx->r5 = ADD32(0, 0X190);
    func_0029E0D0(rdram, ctx);
        goto after_6;
    // 0x0029B310: addiu       $a1, $zero, 0x190
    ctx->r5 = ADD32(0, 0X190);
    after_6:
    // 0x0029B314: jal         0x0028E5D0
    // 0x0029B318: nop

    func_0028E5D0(rdram, ctx);
        goto after_7;
    // 0x0029B318: nop

    after_7:
    // 0x0029B31C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x0029B320: jal         0x0029B410
    // 0x0029B324: addiu       $a1, $sp, 0x14
    ctx->r5 = ADD32(ctx->r29, 0X14);
    func_0029B410(rdram, ctx);
        goto after_8;
    // 0x0029B324: addiu       $a1, $sp, 0x14
    ctx->r5 = ADD32(ctx->r29, 0X14);
    after_8:
    // 0x0029B328: lw          $v1, 0x14($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X14);
    // 0x0029B32C: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x0029B330: and         $a0, $v1, $v0
    ctx->r4 = ctx->r3 & ctx->r2;
    // 0x0029B334: beq         $a0, $zero, L_0029B348
    if (ctx->r4 == 0) {
        // 0x0029B338: sw          $a0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r4;
            goto L_0029B348;
    }
    // 0x0029B338: sw          $a0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r4;
    // 0x0029B33C: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x0029B340: j           L_0029B354
    // 0x0029B344: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_0029B354;
    // 0x0029B344: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0029B348:
    // 0x0029B348: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
    // 0x0029B34C: lui         $v1, 0x3B9
    ctx->r3 = S32(0X3B9 << 16);
    // 0x0029B350: ori         $v1, $v1, 0xACA0
    ctx->r3 = ctx->r3 | 0XACA0;
L_0029B354:
    // 0x0029B354: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0029B358: sw          $v0, 0x2990($at)
    MEM_W(0X2990, ctx->r1) = ctx->r2;
    // 0x0029B35C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0029B360: sw          $v1, 0x2994($at)
    MEM_W(0X2994, ctx->r1) = ctx->r3;
    // 0x0029B364: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x0029B368: addiu       $a2, $a2, 0x2990
    ctx->r6 = ADD32(ctx->r6, 0X2990);
    // 0x0029B36C: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x0029B370: lw          $a1, 0x4($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X4);
    // 0x0029B374: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x0029B378: srl         $a3, $a1, 31
    ctx->r7 = S32(U32(ctx->r5) >> 31);
    // 0x0029B37C: or          $v0, $v0, $a3
    ctx->r2 = ctx->r2 | ctx->r7;
    // 0x0029B380: sll         $v1, $a1, 1
    ctx->r3 = S32(ctx->r5 << 1);
    // 0x0029B384: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x0029B388: sltu        $a3, $v1, $a1
    ctx->r7 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x0029B38C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x0029B390: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x0029B394: lui         $a0, 0x8000
    ctx->r4 = S32(0X8000 << 16);
    // 0x0029B398: lw          $a0, 0x30C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X30C);
    // 0x0029B39C: srl         $v1, $v1, 2
    ctx->r3 = S32(U32(ctx->r3) >> 2);
    // 0x0029B3A0: sll         $a1, $v0, 30
    ctx->r5 = S32(ctx->r2 << 30);
    // 0x0029B3A4: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    // 0x0029B3A8: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
    // 0x0029B3AC: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x0029B3B0: sw          $v1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r3;
    // 0x0029B3B4: bne         $a0, $zero, L_0029B3CC
    if (ctx->r4 != 0) {
        // 0x0029B3B8: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_0029B3CC;
    }
    // 0x0029B3B8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0029B3BC: lui         $a0, 0x8000
    ctx->r4 = S32(0X8000 << 16);
    // 0x0029B3C0: addiu       $a0, $a0, 0x31C
    ctx->r4 = ADD32(ctx->r4, 0X31C);
    // 0x0029B3C4: jal         0x00266C5C
    // 0x0029B3C8: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_00266C5C(rdram, ctx);
        goto after_9;
    // 0x0029B3C8: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_9:
L_0029B3CC:
    // 0x0029B3CC: lui         $v1, 0x8000
    ctx->r3 = S32(0X8000 << 16);
    // 0x0029B3D0: lw          $v1, 0x300($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X300);
    // 0x0029B3D4: bnel        $v1, $zero, L_0029B3E8
    if (ctx->r3 != 0) {
        // 0x0029B3D8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0029B3E8;
    }
    goto skip_0;
    // 0x0029B3D8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x0029B3DC: lui         $v0, 0x2F5
    ctx->r2 = S32(0X2F5 << 16);
    // 0x0029B3E0: j           L_0029B3FC
    // 0x0029B3E4: ori         $v0, $v0, 0xB2D2
    ctx->r2 = ctx->r2 | 0XB2D2;
        goto L_0029B3FC;
    // 0x0029B3E4: ori         $v0, $v0, 0xB2D2
    ctx->r2 = ctx->r2 | 0XB2D2;
L_0029B3E8:
    // 0x0029B3E8: bne         $v1, $v0, L_0029B3F8
    if (ctx->r3 != ctx->r2) {
        // 0x0029B3EC: lui         $v0, 0x2E6
        ctx->r2 = S32(0X2E6 << 16);
            goto L_0029B3F8;
    }
    // 0x0029B3EC: lui         $v0, 0x2E6
    ctx->r2 = S32(0X2E6 << 16);
    // 0x0029B3F0: j           L_0029B3FC
    // 0x0029B3F4: ori         $v0, $v0, 0x25C
    ctx->r2 = ctx->r2 | 0X25C;
        goto L_0029B3FC;
    // 0x0029B3F4: ori         $v0, $v0, 0x25C
    ctx->r2 = ctx->r2 | 0X25C;
L_0029B3F8:
    // 0x0029B3F8: ori         $v0, $v0, 0xD354
    ctx->r2 = ctx->r2 | 0XD354;
L_0029B3FC:
    // 0x0029B3FC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0029B400: sw          $v0, -0x7700($at)
    MEM_W(-0X7700, ctx->r1) = ctx->r2;
    // 0x0029B404: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0029B408: jr          $ra
    // 0x0029B40C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0029B40C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00252ADC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00252ADC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00252AE0: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00252AE4: lw          $v1, -0x5374($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5374);
    // 0x00252AE8: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x00252AEC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00252AF0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00252AF4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00252AF8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00252AFC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00252B00: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x00252B04: beq         $v1, $v0, L_00252C50
    if (ctx->r3 == ctx->r2) {
        // 0x00252B08: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_00252C50;
    }
    // 0x00252B08: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x00252B0C: beq         $v1, $v0, L_00252C50
    if (ctx->r3 == ctx->r2) {
        // 0x00252B10: nop
    
            goto L_00252C50;
    }
    // 0x00252B10: nop

    // 0x00252B14: lw          $s2, 0x20($a0)
    ctx->r18 = MEM_W(ctx->r4, 0X20);
    // 0x00252B18: beq         $s2, $zero, L_00252C50
    if (ctx->r18 == 0) {
        // 0x00252B1C: addiu       $s3, $zero, 0x10
        ctx->r19 = ADD32(0, 0X10);
            goto L_00252C50;
    }
    // 0x00252B1C: addiu       $s3, $zero, 0x10
    ctx->r19 = ADD32(0, 0X10);
L_00252B20:
    // 0x00252B20: jal         0x00284188
    // 0x00252B24: nop

    func_00284188(rdram, ctx);
        goto after_0;
    // 0x00252B24: nop

    after_0:
    // 0x00252B28: bne         $v0, $zero, L_00252B3C
    if (ctx->r2 != 0) {
        // 0x00252B2C: nop
    
            goto L_00252B3C;
    }
    // 0x00252B2C: nop

    // 0x00252B30: lh          $v0, 0x52A($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X52A);
    // 0x00252B34: bne         $v0, $zero, L_00252B6C
    if (ctx->r2 != 0) {
        // 0x00252B38: nop
    
            goto L_00252B6C;
    }
    // 0x00252B38: nop

L_00252B3C:
    // 0x00252B3C: jal         0x00275F7C
    // 0x00252B40: nop

    func_00275F7C(rdram, ctx);
        goto after_1;
    // 0x00252B40: nop

    after_1:
    // 0x00252B44: lw          $a1, 0x1288($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X1288);
    // 0x00252B48: jal         0x00275D34
    // 0x00252B4C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_00275D34(rdram, ctx);
        goto after_2;
    // 0x00252B4C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_2:
    // 0x00252B50: jal         0x00275F7C
    // 0x00252B54: sw          $zero, 0x1288($s2)
    MEM_W(0X1288, ctx->r18) = 0;
    func_00275F7C(rdram, ctx);
        goto after_3;
    // 0x00252B54: sw          $zero, 0x1288($s2)
    MEM_W(0X1288, ctx->r18) = 0;
    after_3:
    // 0x00252B58: lw          $a1, 0x128C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X128C);
    // 0x00252B5C: jal         0x00275D34
    // 0x00252B60: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_00275D34(rdram, ctx);
        goto after_4;
    // 0x00252B60: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_4:
    // 0x00252B64: j           L_00252C44
    // 0x00252B68: sw          $zero, 0x128C($s2)
    MEM_W(0X128C, ctx->r18) = 0;
        goto L_00252C44;
    // 0x00252B68: sw          $zero, 0x128C($s2)
    MEM_W(0X128C, ctx->r18) = 0;
L_00252B6C:
    // 0x00252B6C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00252B70: lw          $v0, -0x535C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X535C);
    // 0x00252B74: bne         $v0, $zero, L_00252C44
    if (ctx->r2 != 0) {
        // 0x00252B78: nop
    
            goto L_00252C44;
    }
    // 0x00252B78: nop

    // 0x00252B7C: lw          $v1, 0x51C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X51C);
    // 0x00252B80: beq         $v1, $zero, L_00252B90
    if (ctx->r3 == 0) {
        // 0x00252B84: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00252B90;
    }
    // 0x00252B84: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00252B88: lw          $v0, 0x54C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X54C);
    // 0x00252B8C: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
L_00252B90:
    // 0x00252B90: bne         $v0, $zero, L_00252C44
    if (ctx->r2 != 0) {
        // 0x00252B94: lui         $v1, 0xFFFD
        ctx->r3 = S32(0XFFFD << 16);
            goto L_00252C44;
    }
    // 0x00252B94: lui         $v1, 0xFFFD
    ctx->r3 = S32(0XFFFD << 16);
    // 0x00252B98: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00252B9C: addiu       $s0, $s2, 0x288
    ctx->r16 = ADD32(ctx->r18, 0X288);
    // 0x00252BA0: lw          $v0, 0x35C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X35C);
    // 0x00252BA4: lw          $s1, 0xC04($s2)
    ctx->r17 = MEM_W(ctx->r18, 0XC04);
    // 0x00252BA8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00252BAC: lwc1        $f20, 0x6D28($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00252BB0: ori         $v0, $v0, 0x200
    ctx->r2 = ctx->r2 | 0X200;
    // 0x00252BB4: sw          $v0, 0x35C($s2)
    MEM_W(0X35C, ctx->r18) = ctx->r2;
    // 0x00252BB8: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x00252BBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00252BC0: sw          $s3, 0x27C($s0)
    MEM_W(0X27C, ctx->r16) = ctx->r19;
    // 0x00252BC4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00252BC8: jal         0x0021F1B4
    // 0x00252BCC: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    func_0021F1B4(rdram, ctx);
        goto after_5;
    // 0x00252BCC: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    after_5:
    // 0x00252BD0: jal         0x0021A344
    // 0x00252BD4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0021A344(rdram, ctx);
        goto after_6;
    // 0x00252BD4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x00252BD8: lw          $v0, 0xC04($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC04);
    // 0x00252BDC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00252BE0: swc1        $f20, 0x6D28($at)
    MEM_W(0X6D28, ctx->r1) = ctx->f20.u32l;
    // 0x00252BE4: bnel        $s1, $v0, L_00252BEC
    if (ctx->r17 != ctx->r2) {
        // 0x00252BE8: sb          $zero, 0xE2($s2)
        MEM_B(0XE2, ctx->r18) = 0;
            goto L_00252BEC;
    }
    goto skip_0;
    // 0x00252BE8: sb          $zero, 0xE2($s2)
    MEM_B(0XE2, ctx->r18) = 0;
    skip_0:
L_00252BEC:
    // 0x00252BEC: lw          $a2, 0x4($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X4);
    // 0x00252BF0: lw          $a3, 0x8($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X8);
    // 0x00252BF4: lw          $t0, 0xC($s2)
    ctx->r8 = MEM_W(ctx->r18, 0XC);
    // 0x00252BF8: sw          $a2, 0x28C($s2)
    MEM_W(0X28C, ctx->r18) = ctx->r6;
    // 0x00252BFC: sw          $a3, 0x290($s2)
    MEM_W(0X290, ctx->r18) = ctx->r7;
    // 0x00252C00: sw          $t0, 0x294($s2)
    MEM_W(0X294, ctx->r18) = ctx->r8;
    // 0x00252C04: lwc1        $f0, 0x50($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X50);
    // 0x00252C08: lw          $v0, 0x10($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X10);
    // 0x00252C0C: swc1        $f0, 0x2D8($s2)
    MEM_W(0X2D8, ctx->r18) = ctx->f0.u32l;
    // 0x00252C10: sw          $v0, 0x298($s2)
    MEM_W(0X298, ctx->r18) = ctx->r2;
    // 0x00252C14: lw          $a2, 0x40($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X40);
    // 0x00252C18: lw          $a3, 0x44($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X44);
    // 0x00252C1C: lw          $t0, 0x48($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X48);
    // 0x00252C20: lw          $t1, 0x4C($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X4C);
    // 0x00252C24: sw          $a2, 0x2C8($s2)
    MEM_W(0X2C8, ctx->r18) = ctx->r6;
    // 0x00252C28: sw          $a3, 0x2CC($s2)
    MEM_W(0X2CC, ctx->r18) = ctx->r7;
    // 0x00252C2C: sw          $t0, 0x2D0($s2)
    MEM_W(0X2D0, ctx->r18) = ctx->r8;
    // 0x00252C30: sw          $t1, 0x2D4($s2)
    MEM_W(0X2D4, ctx->r18) = ctx->r9;
    // 0x00252C34: lw          $v0, 0x35C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X35C);
    // 0x00252C38: addiu       $v1, $zero, -0x201
    ctx->r3 = ADD32(0, -0X201);
    // 0x00252C3C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00252C40: sw          $v0, 0x35C($s2)
    MEM_W(0X35C, ctx->r18) = ctx->r2;
L_00252C44:
    // 0x00252C44: lw          $s2, 0x1320($s2)
    ctx->r18 = MEM_W(ctx->r18, 0X1320);
    // 0x00252C48: bne         $s2, $zero, L_00252B20
    if (ctx->r18 != 0) {
        // 0x00252C4C: nop
    
            goto L_00252B20;
    }
    // 0x00252C4C: nop

L_00252C50:
    // 0x00252C50: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00252C54: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00252C58: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00252C5C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00252C60: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00252C64: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x00252C68: jr          $ra
    // 0x00252C6C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00252C6C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
