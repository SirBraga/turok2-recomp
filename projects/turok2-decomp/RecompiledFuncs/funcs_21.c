#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_0022BA88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0022BA88: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x0022BA8C: sw          $s0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r16;
    // 0x0022BA90: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0022BA94: sw          $ra, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r31;
    // 0x0022BA98: sw          $s3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r19;
    // 0x0022BA9C: sw          $s2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r18;
    // 0x0022BAA0: sw          $s1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r17;
    // 0x0022BAA4: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    // 0x0022BAA8: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x0022BAAC: beq         $v0, $zero, L_0022BAC8
    if (ctx->r2 == 0) {
        // 0x0022BAB0: nop
    
            goto L_0022BAC8;
    }
    // 0x0022BAB0: nop

    // 0x0022BAB4: lw          $v0, 0xF8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XF8);
    // 0x0022BAB8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0022BABC: andi        $v0, $v0, 0x800
    ctx->r2 = ctx->r2 & 0X800;
    // 0x0022BAC0: bne         $v0, $zero, L_0022BCB4
    if (ctx->r2 != 0) {
        // 0x0022BAC4: addiu       $a0, $s0, 0x168
        ctx->r4 = ADD32(ctx->r16, 0X168);
            goto L_0022BCB4;
    }
    // 0x0022BAC4: addiu       $a0, $s0, 0x168
    ctx->r4 = ADD32(ctx->r16, 0X168);
L_0022BAC8:
    // 0x0022BAC8: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x0022BACC: jal         0x0026C114
    // 0x0022BAD0: nop

    func_0026C114(rdram, ctx);
        goto after_0;
    // 0x0022BAD0: nop

    after_0:
    // 0x0022BAD4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0022BAD8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x0022BADC: beql        $a0, $v0, L_0022BAE4
    if (ctx->r4 == ctx->r2) {
        // 0x0022BAE0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0022BAE4;
    }
    goto skip_0;
    // 0x0022BAE0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    skip_0:
L_0022BAE4:
    // 0x0022BAE4: lw          $a2, 0xF8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XF8);
    // 0x0022BAE8: sll         $a1, $a0, 1
    ctx->r5 = S32(ctx->r4 << 1);
    // 0x0022BAEC: lw          $v0, 0x18($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X18);
    // 0x0022BAF0: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x0022BAF4: addu        $v1, $v0, $a1
    ctx->r3 = ADD32(ctx->r2, ctx->r5);
    // 0x0022BAF8: lhu         $s2, 0x70($v1)
    ctx->r18 = MEM_HU(ctx->r3, 0X70);
    // 0x0022BAFC: lhu         $v1, 0x8C($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X8C);
    // 0x0022BB00: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x0022BB04: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0022BB08: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x0022BB0C: sw          $t0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r8;
    // 0x0022BB10: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    // 0x0022BB14: lw          $v0, 0x18($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X18);
    // 0x0022BB18: ori         $s1, $zero, 0xFFFF
    ctx->r17 = 0 | 0XFFFF;
    // 0x0022BB1C: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x0022BB20: lhu         $s3, 0xA8($v0)
    ctx->r19 = MEM_HU(ctx->r2, 0XA8);
    // 0x0022BB24: beq         $v1, $s1, L_0022BB6C
    if (ctx->r3 == ctx->r17) {
        // 0x0022BB28: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0022BB6C;
    }
    // 0x0022BB28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022BB2C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0022BB30: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x0022BB34: lui         $t3, 0x800F
    ctx->r11 = S32(0X800F << 16);
    // 0x0022BB38: addiu       $t3, $t3, 0x1D80
    ctx->r11 = ADD32(ctx->r11, 0X1D80);
    // 0x0022BB3C: lw          $t0, 0x0($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X0);
    // 0x0022BB40: lw          $t1, 0x4($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X4);
    // 0x0022BB44: lw          $t2, 0x8($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X8);
    // 0x0022BB48: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x0022BB4C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x0022BB50: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x0022BB54: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x0022BB58: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x0022BB5C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x0022BB60: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x0022BB64: jal         0x00236EA0
    // 0x0022BB68: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_00236EA0(rdram, ctx);
        goto after_1;
    // 0x0022BB68: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_1:
L_0022BB6C:
    // 0x0022BB6C: beq         $s2, $s1, L_0022BC80
    if (ctx->r18 == ctx->r17) {
        // 0x0022BB70: ori         $v0, $zero, 0xFFFF
        ctx->r2 = 0 | 0XFFFF;
            goto L_0022BC80;
    }
    // 0x0022BB70: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x0022BB74: lw          $v0, 0xF8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XF8);
    // 0x0022BB78: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0022BB7C: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x0022BB80: beq         $v0, $zero, L_0022BBB0
    if (ctx->r2 == 0) {
        // 0x0022BB84: addiu       $a0, $sp, 0x58
        ctx->r4 = ADD32(ctx->r29, 0X58);
            goto L_0022BBB0;
    }
    // 0x0022BB84: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x0022BB88: lui         $t3, 0x800F
    ctx->r11 = S32(0X800F << 16);
    // 0x0022BB8C: addiu       $t3, $t3, 0x1DB8
    ctx->r11 = ADD32(ctx->r11, 0X1DB8);
    // 0x0022BB90: lw          $t0, 0x0($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X0);
    // 0x0022BB94: lw          $t1, 0x4($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X4);
    // 0x0022BB98: lw          $t2, 0x8($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X8);
    // 0x0022BB9C: sw          $t0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r8;
    // 0x0022BBA0: sw          $t1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r9;
    // 0x0022BBA4: sw          $t2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r10;
    // 0x0022BBA8: j           L_0022BBC8
    // 0x0022BBAC: nop

        goto L_0022BBC8;
    // 0x0022BBAC: nop

L_0022BBB0:
    // 0x0022BBB0: lw          $t0, 0x18($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X18);
    // 0x0022BBB4: lw          $t1, 0x1C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1C);
    // 0x0022BBB8: lw          $t2, 0x20($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X20);
    // 0x0022BBBC: sw          $t0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r8;
    // 0x0022BBC0: sw          $t1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r9;
    // 0x0022BBC4: sw          $t2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r10;
L_0022BBC8:
    // 0x0022BBC8: jal         0x0020E810
    // 0x0022BBCC: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    func_0020E810(rdram, ctx);
        goto after_2;
    // 0x0022BBCC: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    after_2:
    // 0x0022BBD0: lui         $a1, 0x20
    ctx->r5 = S32(0X20 << 16);
    // 0x0022BBD4: lw          $v0, 0x114($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X114);
    // 0x0022BBD8: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0022BBDC: lw          $v1, 0x1D7C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1D7C);
    // 0x0022BBE0: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0022BBE4: lw          $a0, 0x1D8C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1D8C);
    // 0x0022BBE8: ori         $a1, $a1, 0x6
    ctx->r5 = ctx->r5 | 0X6;
    // 0x0022BBEC: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x0022BBF0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0022BBF4: lw          $t0, 0x68($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X68);
    // 0x0022BBF8: lw          $t1, 0x6C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X6C);
    // 0x0022BBFC: lw          $t2, 0x70($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X70);
    // 0x0022BC00: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x0022BC04: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x0022BC08: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x0022BC0C: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x0022BC10: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x0022BC14: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x0022BC18: lw          $t3, 0x64($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X64);
    // 0x0022BC1C: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x0022BC20: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x0022BC24: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x0022BC28: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x0022BC2C: lui         $t3, 0x800F
    ctx->r11 = S32(0X800F << 16);
    // 0x0022BC30: addiu       $t3, $t3, 0x1D80
    ctx->r11 = ADD32(ctx->r11, 0X1D80);
    // 0x0022BC34: lw          $t0, 0x0($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X0);
    // 0x0022BC38: lw          $t1, 0x4($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X4);
    // 0x0022BC3C: lw          $t2, 0x8($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X8);
    // 0x0022BC40: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x0022BC44: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x0022BC48: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    // 0x0022BC4C: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    // 0x0022BC50: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x0022BC54: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    // 0x0022BC58: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x0022BC5C: addiu       $a0, $a0, -0x76D8
    ctx->r4 = ADD32(ctx->r4, -0X76D8);
    // 0x0022BC60: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x0022BC64: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x0022BC68: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x0022BC6C: lw          $a2, 0x10C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X10C);
    // 0x0022BC70: lw          $a3, 0x110($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X110);
    // 0x0022BC74: jal         0x0022F350
    // 0x0022BC78: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0022F350(rdram, ctx);
        goto after_3;
    // 0x0022BC78: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x0022BC7C: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
L_0022BC80:
    // 0x0022BC80: beq         $s3, $v0, L_0022BCB0
    if (ctx->r19 == ctx->r2) {
        // 0x0022BC84: sll         $a0, $s3, 16
        ctx->r4 = S32(ctx->r19 << 16);
            goto L_0022BCB0;
    }
    // 0x0022BC84: sll         $a0, $s3, 16
    ctx->r4 = S32(ctx->r19 << 16);
    // 0x0022BC88: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0022BC8C: addiu       $v0, $v0, 0x1D80
    ctx->r2 = ADD32(ctx->r2, 0X1D80);
    // 0x0022BC90: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x0022BC94: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x0022BC98: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x0022BC9C: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    // 0x0022BCA0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0022BCA4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0022BCA8: jal         0x00275544
    // 0x0022BCAC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_00275544(rdram, ctx);
        goto after_4;
    // 0x0022BCAC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_4:
L_0022BCB0:
    // 0x0022BCB0: addiu       $a0, $s0, 0x168
    ctx->r4 = ADD32(ctx->r16, 0X168);
L_0022BCB4:
    // 0x0022BCB4: lw          $a2, 0x1A0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1A0);
    // 0x0022BCB8: jal         0x0020EF60
    // 0x0022BCBC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_5;
    // 0x0022BCBC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_5:
    // 0x0022BCC0: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    // 0x0022BCC4: lb          $v1, 0x195($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X195);
    // 0x0022BCC8: ori         $v0, $v0, 0x400
    ctx->r2 = ctx->r2 | 0X400;
    // 0x0022BCCC: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x0022BCD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0022BCD4: bne         $v1, $v0, L_0022BCF4
    if (ctx->r3 != ctx->r2) {
        // 0x0022BCD8: nop
    
            goto L_0022BCF4;
    }
    // 0x0022BCD8: nop

    // 0x0022BCDC: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x0022BCE0: addiu       $a0, $a0, -0x76D8
    ctx->r4 = ADD32(ctx->r4, -0X76D8);
    // 0x0022BCE4: jal         0x0022F1C8
    // 0x0022BCE8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0022F1C8(rdram, ctx);
        goto after_6;
    // 0x0022BCE8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_6:
    // 0x0022BCEC: jal         0x00232B40
    // 0x0022BCF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00232B40(rdram, ctx);
        goto after_7;
    // 0x0022BCF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
L_0022BCF4:
    // 0x0022BCF4: lw          $ra, 0x88($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X88);
    // 0x0022BCF8: lw          $s3, 0x84($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X84);
    // 0x0022BCFC: lw          $s2, 0x80($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X80);
    // 0x0022BD00: lw          $s1, 0x7C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X7C);
    // 0x0022BD04: lw          $s0, 0x78($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X78);
    // 0x0022BD08: jr          $ra
    // 0x0022BD0C: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x0022BD0C: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_0029E488(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029E488: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x0029E48C: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x0029E490: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x0029E494: beq         $v1, $a1, L_0029E4B8
    if (ctx->r3 == ctx->r5) {
        // 0x0029E498: nop
    
            goto L_0029E4B8;
    }
    // 0x0029E498: nop

L_0029E49C:
    // 0x0029E49C: bne         $v1, $zero, L_0029E4AC
    if (ctx->r3 != 0) {
        // 0x0029E4A0: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_0029E4AC;
    }
    // 0x0029E4A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0029E4A4: jr          $ra
    // 0x0029E4A8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0029E4A8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0029E4AC:
    // 0x0029E4AC: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x0029E4B0: bne         $v1, $a1, L_0029E49C
    if (ctx->r3 != ctx->r5) {
        // 0x0029E4B4: nop
    
            goto L_0029E49C;
    }
    // 0x0029E4B4: nop

L_0029E4B8:
    // 0x0029E4B8: jr          $ra
    // 0x0029E4BC: nop

    return;
    // 0x0029E4BC: nop

;}
RECOMP_FUNC void func_0045E558(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045E558: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0045E55C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0045E560: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0045E564: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0045E568: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0045E56C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0045E570: lw          $a1, 0x4($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X4);
    // 0x0045E574: beq         $a1, $zero, L_0045E584
    if (ctx->r5 == 0) {
        // 0x0045E578: nop
    
            goto L_0045E584;
    }
    // 0x0045E578: nop

    // 0x0045E57C: jal         0x002052D8
    // 0x0045E580: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_0;
    // 0x0045E580: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
L_0045E584:
    // 0x0045E584: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x0045E588: beq         $a1, $zero, L_0045E598
    if (ctx->r5 == 0) {
        // 0x0045E58C: nop
    
            goto L_0045E598;
    }
    // 0x0045E58C: nop

    // 0x0045E590: jal         0x002052D8
    // 0x0045E594: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_1;
    // 0x0045E594: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
L_0045E598:
    // 0x0045E598: lw          $a1, 0x18($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X18);
    // 0x0045E59C: beq         $a1, $zero, L_0045E5AC
    if (ctx->r5 == 0) {
        // 0x0045E5A0: nop
    
            goto L_0045E5AC;
    }
    // 0x0045E5A0: nop

    // 0x0045E5A4: jal         0x002052D8
    // 0x0045E5A8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_2;
    // 0x0045E5A8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_2:
L_0045E5AC:
    // 0x0045E5AC: lw          $a1, 0x1C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X1C);
    // 0x0045E5B0: beq         $a1, $zero, L_0045E5C4
    if (ctx->r5 == 0) {
        // 0x0045E5B4: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_0045E5C4;
    }
    // 0x0045E5B4: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0045E5B8: jal         0x002052D8
    // 0x0045E5BC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_3;
    // 0x0045E5BC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_3:
    // 0x0045E5C0: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
L_0045E5C4:
    // 0x0045E5C4: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
L_0045E5C8:
    // 0x0045E5C8: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x0045E5CC: beql        $a1, $zero, L_0045E5E0
    if (ctx->r5 == 0) {
        // 0x0045E5D0: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_0045E5E0;
    }
    goto skip_0;
    // 0x0045E5D0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x0045E5D4: jal         0x002052D8
    // 0x0045E5D8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_4;
    // 0x0045E5D8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_4:
    // 0x0045E5DC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_0045E5E0:
    // 0x0045E5E0: slti        $v0, $s1, 0x3
    ctx->r2 = SIGNED(ctx->r17) < 0X3 ? 1 : 0;
    // 0x0045E5E4: bne         $v0, $zero, L_0045E5C8
    if (ctx->r2 != 0) {
        // 0x0045E5E8: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_0045E5C8;
    }
    // 0x0045E5E8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x0045E5EC: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x0045E5F0: addiu       $v0, $s2, 0x8
    ctx->r2 = ADD32(ctx->r18, 0X8);
    // 0x0045E5F4: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
    // 0x0045E5F8: sw          $zero, 0x4($s2)
    MEM_W(0X4, ctx->r18) = 0;
    // 0x0045E5FC: sw          $zero, 0x8($s2)
    MEM_W(0X8, ctx->r18) = 0;
    // 0x0045E600: sw          $zero, 0x18($s2)
    MEM_W(0X18, ctx->r18) = 0;
    // 0x0045E604: sw          $zero, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = 0;
L_0045E608:
    // 0x0045E608: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x0045E60C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x0045E610: bgez        $v1, L_0045E608
    if (SIGNED(ctx->r3) >= 0) {
        // 0x0045E614: addiu       $v0, $v0, -0x4
        ctx->r2 = ADD32(ctx->r2, -0X4);
            goto L_0045E608;
    }
    // 0x0045E614: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x0045E618: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0045E61C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0045E620: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0045E624: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0045E628: jr          $ra
    // 0x0045E62C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0045E62C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00267090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00267090: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // turok2: reconnected split function: a stray ELF symbol at 0x00267094 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00267094(rdram, ctx);
;}
RECOMP_FUNC void func_002836DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002836DC: jr          $ra
    // 0x002836E0: nop

    return;
    // 0x002836E0: nop

;}
RECOMP_FUNC void func_0041B2D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B2D8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B2DC: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0041B2E0: xori        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 ^ 0X4;
    // 0x0041B2E4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041B2E8: sw          $v0, -0x5528($at)
    MEM_W(-0X5528, ctx->r1) = ctx->r2;
    // 0x0041B2EC: jr          $ra
    // 0x0041B2F0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B2F0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0041FCF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041FCF4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041FCF8: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x0041FCFC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x0041FD00: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0041FD04: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0041FD08: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x0041FD0C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x0041FD10: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0041FD14: beq         $v0, $zero, L_0041FD2C
    if (ctx->r2 == 0) {
        // 0x0041FD18: sw          $s0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r16;
            goto L_0041FD2C;
    }
    // 0x0041FD18: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0041FD1C: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0041FD20: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x0041FD24: j           L_0041FD34
    // 0x0041FD28: nop

        goto L_0041FD34;
    // 0x0041FD28: nop

L_0041FD2C:
    // 0x0041FD2C: lw          $v0, 0x20($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X20);
    // 0x0041FD30: lb          $a0, 0x4($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X4);
L_0041FD34:
    // 0x0041FD34: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041FD38: lw          $v0, 0x984($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X984);
    // 0x0041FD3C: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x0041FD40: addiu       $t1, $t1, 0x1408
    ctx->r9 = ADD32(ctx->r9, 0X1408);
    // 0x0041FD44: lwl         $v1, 0x0($t1)
    ctx->r3 = do_lwl(rdram, ctx->r3, ctx->r9, 0X0);
    // 0x0041FD48: lwr         $v1, 0x3($t1)
    ctx->r3 = do_lwr(rdram, ctx->r3, ctx->r9, 0X3);
    // 0x0041FD4C: swl         $v1, 0x10($sp)
    do_swl(rdram, 0X10, ctx->r29, ctx->r3);
    // 0x0041FD50: swr         $v1, 0x13($sp)
    do_swr(rdram, 0X13, ctx->r29, ctx->r3);
    // 0x0041FD54: beq         $v0, $zero, L_0041FDC8
    if (ctx->r2 == 0) {
        // 0x0041FD58: addiu       $s3, $sp, 0x10
        ctx->r19 = ADD32(ctx->r29, 0X10);
            goto L_0041FDC8;
    }
    // 0x0041FD58: addiu       $s3, $sp, 0x10
    ctx->r19 = ADD32(ctx->r29, 0X10);
    // 0x0041FD5C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041FD60: addiu       $v0, $v0, 0x48B4
    ctx->r2 = ADD32(ctx->r2, 0X48B4);
    // 0x0041FD64: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    // 0x0041FD68: jal         0x004267A0
    // 0x0041FD6C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_004267A0(rdram, ctx);
        goto after_0;
    // 0x0041FD6C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x0041FD70: bne         $v0, $zero, L_0041FEA4
    if (ctx->r2 != 0) {
        // 0x0041FD74: nop
    
            goto L_0041FEA4;
    }
    // 0x0041FD74: nop

    // 0x0041FD78: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041FD7C: lw          $v0, 0x9B4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9B4);
    // 0x0041FD80: bne         $v0, $zero, L_0041FD94
    if (ctx->r2 != 0) {
        // 0x0041FD84: addiu       $a0, $zero, 0x18
        ctx->r4 = ADD32(0, 0X18);
            goto L_0041FD94;
    }
    // 0x0041FD84: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    // 0x0041FD88: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0041FD8C: lw          $a0, 0x70A8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X70A8);
    // 0x0041FD90: addiu       $a0, $a0, 0x688
    ctx->r4 = ADD32(ctx->r4, 0X688);
L_0041FD94:
    // 0x0041FD94: jal         0x00426E6C
    // 0x0041FD98: nop

    func_00426E6C(rdram, ctx);
        goto after_1;
    // 0x0041FD98: nop

    after_1:
    // 0x0041FD9C: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x0041FDA0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0041FDA4: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x0041FDA8: addiu       $s0, $s0, 0x1404
    ctx->r16 = ADD32(ctx->r16, 0X1404);
    // 0x0041FDAC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0041FDB0: lw          $s1, 0x14($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X14);
    // 0x0041FDB4: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x0041FDB8: jal         0x0029E3E0
    // 0x0041FDBC: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    func_0029E3E0(rdram, ctx);
        goto after_2;
    // 0x0041FDBC: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    after_2:
    // 0x0041FDC0: j           L_0041FE48
    // 0x0041FDC4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
        goto L_0041FE48;
    // 0x0041FDC4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
L_0041FDC8:
    // 0x0041FDC8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041FDCC: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x0041FDD0: beq         $v0, $zero, L_0041FDE8
    if (ctx->r2 == 0) {
        // 0x0041FDD4: addiu       $a1, $sp, 0x18
        ctx->r5 = ADD32(ctx->r29, 0X18);
            goto L_0041FDE8;
    }
    // 0x0041FDD4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x0041FDD8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041FDDC: addiu       $v0, $v0, 0x4914
    ctx->r2 = ADD32(ctx->r2, 0X4914);
    // 0x0041FDE0: j           L_0041FE00
    // 0x0041FDE4: nop

        goto L_0041FE00;
    // 0x0041FDE4: nop

L_0041FDE8:
    // 0x0041FDE8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041FDEC: lw          $v0, 0x994($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X994);
    // 0x0041FDF0: beq         $v0, $zero, L_0041FE98
    if (ctx->r2 == 0) {
        // 0x0041FDF4: nop
    
            goto L_0041FE98;
    }
    // 0x0041FDF4: nop

    // 0x0041FDF8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041FDFC: addiu       $v0, $v0, 0x48B4
    ctx->r2 = ADD32(ctx->r2, 0X48B4);
L_0041FE00:
    // 0x0041FE00: jal         0x004267A0
    // 0x0041FE04: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    func_004267A0(rdram, ctx);
        goto after_3;
    // 0x0041FE04: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    after_3:
    // 0x0041FE08: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0041FE0C: lw          $a0, 0x70A8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X70A8);
    // 0x0041FE10: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0041FE14: jal         0x00426E6C
    // 0x0041FE18: addiu       $a0, $a0, 0x688
    ctx->r4 = ADD32(ctx->r4, 0X688);
    func_00426E6C(rdram, ctx);
        goto after_4;
    // 0x0041FE18: addiu       $a0, $a0, 0x688
    ctx->r4 = ADD32(ctx->r4, 0X688);
    after_4:
    // 0x0041FE1C: lw          $s1, 0x14($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X14);
    // 0x0041FE20: bne         $s0, $zero, L_0041FEA4
    if (ctx->r16 != 0) {
        // 0x0041FE24: addu        $s2, $v0, $zero
        ctx->r18 = ADD32(ctx->r2, 0);
            goto L_0041FEA4;
    }
    // 0x0041FE24: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x0041FE28: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x0041FE2C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0041FE30: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x0041FE34: addiu       $s0, $s0, 0x1404
    ctx->r16 = ADD32(ctx->r16, 0X1404);
    // 0x0041FE38: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x0041FE3C: jal         0x0029E3E0
    // 0x0041FE40: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0029E3E0(rdram, ctx);
        goto after_5;
    // 0x0041FE40: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x0041FE44: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_0041FE48:
    // 0x0041FE48: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0041FE4C: lbu         $v0, 0x10($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X10);
    // 0x0041FE50: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0041FE54: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x0041FE58: lbu         $v0, 0x11($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X11);
    // 0x0041FE5C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0041FE60: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x0041FE64: lbu         $v0, 0x12($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X12);
    // 0x0041FE68: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0041FE6C: jal         0x0029E3E0
    // 0x0041FE70: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_0029E3E0(rdram, ctx);
        goto after_6;
    // 0x0041FE70: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_6:
    // 0x0041FE74: lbu         $v0, 0x10($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X10);
    // 0x0041FE78: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x0041FE7C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x0041FE80: lbu         $v0, 0x11($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X11);
    // 0x0041FE84: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0041FE88: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x0041FE8C: lbu         $v0, 0x12($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X12);
    // 0x0041FE90: j           L_0041FEA4
    // 0x0041FE94: sb          $v0, 0x1($s1)
    MEM_B(0X1, ctx->r17) = ctx->r2;
        goto L_0041FEA4;
    // 0x0041FE94: sb          $v0, 0x1($s1)
    MEM_B(0X1, ctx->r17) = ctx->r2;
L_0041FE98:
    // 0x0041FE98: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041FE9C: addiu       $v0, $v0, 0x140C
    ctx->r2 = ADD32(ctx->r2, 0X140C);
    // 0x0041FEA0: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_0041FEA4:
    // 0x0041FEA4: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x0041FEA8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0041FEAC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0041FEB0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0041FEB4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0041FEB8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041FEBC: jr          $ra
    // 0x0041FEC0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0041FEC0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_002118B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002118B0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002118B4: lwc1        $f0, 0x5690($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5690);
    // 0x002118B8: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x002118BC: nop

    // 0x002118C0: bc1f        L_002118E4
    if (!c1cs) {
        // 0x002118C4: nop
    
            goto L_002118E4;
    }
    // 0x002118C4: nop

    // 0x002118C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002118CC: lwc1        $f1, 0x5694($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5694);
    // 0x002118D0: add.s       $f12, $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f1.fl;
L_002118D4:
    // 0x002118D4: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x002118D8: nop

    // 0x002118DC: bc1tl       L_002118D4
    if (c1cs) {
        // 0x002118E0: add.s       $f12, $f12, $f1
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f1.fl;
            goto L_002118D4;
    }
    goto skip_0;
    // 0x002118E0: add.s       $f12, $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f1.fl;
    skip_0:
L_002118E4:
    // 0x002118E4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002118E8: lwc1        $f0, 0x5698($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5698);
    // 0x002118EC: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x002118F0: nop

    // 0x002118F4: bc1f        L_00211918
    if (!c1cs) {
        // 0x002118F8: nop
    
            goto L_00211918;
    }
    // 0x002118F8: nop

    // 0x002118FC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00211900: lwc1        $f1, 0x569C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X569C);
    // 0x00211904: sub.s       $f12, $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f1.fl;
L_00211908:
    // 0x00211908: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x0021190C: nop

    // 0x00211910: bc1tl       L_00211908
    if (c1cs) {
        // 0x00211914: sub.s       $f12, $f12, $f1
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f1.fl;
            goto L_00211908;
    }
    goto skip_1;
    // 0x00211914: sub.s       $f12, $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f1.fl;
    skip_1:
L_00211918:
    // 0x00211918: jr          $ra
    // 0x0021191C: neg.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = -ctx->f12.fl;
    return;
    // 0x0021191C: neg.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = -ctx->f12.fl;
;}
RECOMP_FUNC void func_0040C19C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040C19C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x0040C1A0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x0040C1A4: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0040C1A8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x0040C1AC: lw          $a0, -0x490($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X490);
    // 0x0040C1B0: sdc1        $f21, 0x38($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X38, ctx->r29);
    // 0x0040C1B4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040C1B8: lwc1        $f21, 0x8A8($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X8A8);
    // 0x0040C1BC: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x0040C1C0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040C1C4: lwc1        $f20, 0x8AC($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X8AC);
    // 0x0040C1C8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x0040C1CC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x0040C1D0: lui         $s3, 0x43
    ctx->r19 = S32(0X43 << 16);
    // 0x0040C1D4: addiu       $s3, $s3, 0x1D20
    ctx->r19 = ADD32(ctx->r19, 0X1D20);
    // 0x0040C1D8: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x0040C1DC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0040C1E0: jal         0x0040BD60
    // 0x0040C1E4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_0040BD60(rdram, ctx);
        goto after_0;
    // 0x0040C1E4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
L_0040C1E8:
    // 0x0040C1E8: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x0040C1EC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040C1F0: lwc1        $f14, 0x8B0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X8B0);
    // 0x0040C1F4: jal         0x002119FC
    // 0x0040C1F8: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    func_002119FC(rdram, ctx);
        goto after_1;
    // 0x0040C1F8: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    after_1:
    // 0x0040C1FC: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x0040C200: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x0040C204: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0040C208: mfc1        $s0, $f2
    ctx->r16 = (int32_t)ctx->f2.u32l;
    // 0x0040C20C: beq         $a1, $zero, L_0040C260
    if (ctx->r5 == 0) {
        // 0x0040C210: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0040C260;
    }
    // 0x0040C210: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0040C214: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x0040C218: sll         $a2, $s0, 2
    ctx->r6 = S32(ctx->r16 << 2);
    // 0x0040C21C: addu        $a2, $a2, $s0
    ctx->r6 = ADD32(ctx->r6, ctx->r16);
    // 0x0040C220: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x0040C224: jal         0x0020EF2C
    // 0x0040C228: addu        $a2, $a2, $s3
    ctx->r6 = ADD32(ctx->r6, ctx->r19);
    func_0020EF2C(rdram, ctx);
        goto after_2;
    // 0x0040C228: addu        $a2, $a2, $s3
    ctx->r6 = ADD32(ctx->r6, ctx->r19);
    after_2:
    // 0x0040C22C: lwc1        $f1, 0x0($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X0);
    // 0x0040C230: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0040C234: lwc1        $f0, 0x4($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X4);
    // 0x0040C238: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0040C23C: lwc1        $f12, 0x8($s2)
    ctx->f12.u32l = MEM_W(ctx->r18, 0X8);
    // 0x0040C240: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0040C244: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0040C248: jal         0x00298470
    // 0x0040C24C: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_3;
    // 0x0040C24C: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_3:
    // 0x0040C250: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x0040C254: nop

    // 0x0040C258: bc1tl       L_0040C260
    if (c1cs) {
        // 0x0040C25C: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_0040C260;
    }
    goto skip_0;
    // 0x0040C25C: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    skip_0:
L_0040C260:
    // 0x0040C260: beq         $s1, $zero, L_0040C1E8
    if (ctx->r17 == 0) {
        // 0x0040C264: sll         $v0, $s0, 2
        ctx->r2 = S32(ctx->r16 << 2);
            goto L_0040C1E8;
    }
    // 0x0040C264: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x0040C268: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x0040C26C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0040C270: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x0040C274: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0040C278: lw          $v1, 0x1D20($at)
    ctx->r3 = MEM_W(ctx->r1, 0X1D20);
    // 0x0040C27C: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x0040C280: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0040C284: lw          $a3, 0x1D24($at)
    ctx->r7 = MEM_W(ctx->r1, 0X1D24);
    // 0x0040C288: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x0040C28C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0040C290: lw          $t0, 0x1D28($at)
    ctx->r8 = MEM_W(ctx->r1, 0X1D28);
    // 0x0040C294: sw          $v1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r3;
    // 0x0040C298: sw          $a3, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r7;
    // 0x0040C29C: sw          $t0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r8;
    // 0x0040C2A0: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x0040C2A4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x0040C2A8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0040C2AC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0040C2B0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0040C2B4: ldc1        $f21, 0x38($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X38);
    // 0x0040C2B8: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x0040C2BC: jr          $ra
    // 0x0040C2C0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x0040C2C0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00215AE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00215AE0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x00215AE4: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x00215AE8: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x00215AEC: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00215AF0: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x00215AF4: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x00215AF8: addu        $s6, $a3, $zero
    ctx->r22 = ADD32(ctx->r7, 0);
    // 0x00215AFC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x00215B00: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00215B04: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00215B08: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00215B0C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00215B10: sdc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X40, ctx->r29);
    // 0x00215B14: sdc1        $f21, 0x38($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X38, ctx->r29);
    // 0x00215B18: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x00215B1C: lw          $v0, 0x10($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X10);
    // 0x00215B20: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x00215B24: lw          $s1, 0x0($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X0);
    // 0x00215B28: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x00215B2C: jal         0x002017D4
    // 0x00215B30: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00215B30: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x00215B34: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x00215B38: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00215B3C: jal         0x002017D4
    // 0x00215B40: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00215B40: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x00215B44: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00215B48: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00215B4C: jal         0x002017D4
    // 0x00215B50: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x00215B50: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_2:
    // 0x00215B54: sll         $v1, $s4, 2
    ctx->r3 = S32(ctx->r20 << 2);
    // 0x00215B58: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00215B5C: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x00215B60: lwc1        $f21, 0x1C($s0)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r16, 0X1C);
    // 0x00215B64: lh          $s2, 0x8($v0)
    ctx->r18 = MEM_H(ctx->r2, 0X8);
    // 0x00215B68: lwc1        $f22, 0x18($s0)
    ctx->f22.u32l = MEM_W(ctx->r16, 0X18);
    // 0x00215B6C: mul.s       $f20, $f20, $f21
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f21.fl);
    // 0x00215B70: bne         $s2, $v1, L_00215BB4
    if (ctx->r18 != ctx->r3) {
        // 0x00215B74: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_00215BB4;
    }
    // 0x00215B74: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00215B78: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00215B7C: jal         0x002017D4
    // 0x00215B80: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x00215B80: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x00215B84: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x00215B88: mult        $s4, $v1
    result = S64(S32(ctx->r20)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00215B8C: mflo        $t1
    ctx->r9 = lo;
    // 0x00215B90: addiu       $v1, $t1, 0x8
    ctx->r3 = ADD32(ctx->r9, 0X8);
    // 0x00215B94: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00215B98: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x00215B9C: lw          $t3, 0x4($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X4);
    // 0x00215BA0: lw          $t4, 0x8($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X8);
    // 0x00215BA4: sw          $t2, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r10;
    // 0x00215BA8: sw          $t3, 0x4($s6)
    MEM_W(0X4, ctx->r22) = ctx->r11;
    // 0x00215BAC: j           L_00215F18
    // 0x00215BB0: sw          $t4, 0x8($s6)
    MEM_W(0X8, ctx->r22) = ctx->r12;
        goto L_00215F18;
    // 0x00215BB0: sw          $t4, 0x8($s6)
    MEM_W(0X8, ctx->r22) = ctx->r12;
L_00215BB4:
    // 0x00215BB4: jal         0x002017D4
    // 0x00215BB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_4;
    // 0x00215BB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x00215BBC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00215BC0: jal         0x002017D4
    // 0x00215BC4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x00215BC4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_5:
    // 0x00215BC8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00215BCC: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x00215BD0: nop

    // 0x00215BD4: bc1f        L_00215BEC
    if (!c1cs) {
        // 0x00215BD8: addu        $t0, $v0, $zero
        ctx->r8 = ADD32(ctx->r2, 0);
            goto L_00215BEC;
    }
    // 0x00215BD8: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
    // 0x00215BDC: trunc.w.s   $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    ctx->f4.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x00215BE0: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x00215BE4: j           L_00215C10
    // 0x00215BE8: nop

        goto L_00215C10;
    // 0x00215BE8: nop

L_00215BEC:
    // 0x00215BEC: trunc.w.s   $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    ctx->f4.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x00215BF0: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x00215BF4: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00215BF8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00215BFC: c.eq.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl == ctx->f20.fl;
    // 0x00215C00: nop

    // 0x00215C04: bc1tl       L_00215C1C
    if (c1cs) {
        // 0x00215C08: sub.s       $f3, $f20, $f0
        CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f20.fl - ctx->f0.fl;
            goto L_00215C1C;
    }
    goto skip_0;
    // 0x00215C08: sub.s       $f3, $f20, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f20.fl - ctx->f0.fl;
    skip_0:
    // 0x00215C0C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_00215C10:
    // 0x00215C10: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00215C14: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00215C18: sub.s       $f3, $f20, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f20.fl - ctx->f0.fl;
L_00215C1C:
    // 0x00215C1C: lw          $a0, 0xC($s5)
    ctx->r4 = MEM_W(ctx->r21, 0XC);
    // 0x00215C20: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x00215C24: bne         $a0, $v0, L_00215C30
    if (ctx->r4 != ctx->r2) {
        // 0x00215C28: addu        $a3, $s6, $zero
        ctx->r7 = ADD32(ctx->r22, 0);
            goto L_00215C30;
    }
    // 0x00215C28: addu        $a3, $s6, $zero
    ctx->r7 = ADD32(ctx->r22, 0);
    // 0x00215C2C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00215C30:
    // 0x00215C30: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00215C34: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x00215C38: nop

    // 0x00215C3C: bc1f        L_00215C54
    if (!c1cs) {
        // 0x00215C40: nop
    
            goto L_00215C54;
    }
    // 0x00215C40: nop

    // 0x00215C44: trunc.w.s   $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    ctx->f4.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x00215C48: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x00215C4C: j           L_00215C7C
    // 0x00215C50: nop

        goto L_00215C7C;
    // 0x00215C50: nop

L_00215C54:
    // 0x00215C54: trunc.w.s   $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    ctx->f4.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x00215C58: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x00215C5C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00215C60: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00215C64: c.eq.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl == ctx->f20.fl;
    // 0x00215C68: nop

    // 0x00215C6C: bc1f        L_00215C78
    if (!c1cs) {
        // 0x00215C70: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_00215C78;
    }
    // 0x00215C70: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00215C74: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_00215C78:
    // 0x00215C78: subu        $a2, $v0, $a2
    ctx->r6 = SUB32(ctx->r2, ctx->r6);
L_00215C7C:
    // 0x00215C7C: mtc1        $a2, $f0
    ctx->f0.u32l = ctx->r6;
    // 0x00215C80: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00215C84: c.le.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl <= ctx->f0.fl;
    // 0x00215C88: nop

    // 0x00215C8C: bc1f        L_00215DA0
    if (!c1cs) {
        // 0x00215C90: addiu       $a1, $a2, 0x1
        ctx->r5 = ADD32(ctx->r6, 0X1);
            goto L_00215DA0;
    }
    // 0x00215C90: addiu       $a1, $a2, 0x1
    ctx->r5 = ADD32(ctx->r6, 0X1);
    // 0x00215C94: mtc1        $a0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r4;
    // 0x00215C98: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00215C9C: bgezl       $a0, L_00215CB4
    if (SIGNED(ctx->r4) >= 0) {
        // 0x00215CA0: cvt.s.d     $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
            goto L_00215CB4;
    }
    goto skip_1;
    // 0x00215CA0: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    skip_1:
    // 0x00215CA4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00215CA8: ldc1        $f0, 0x58A0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X58A0);
    // 0x00215CAC: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x00215CB0: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
L_00215CB4:
    // 0x00215CB4: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x00215CB8: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00215CBC: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00215CC0: nop

    // 0x00215CC4: bc1f        L_00215D00
    if (!c1cs) {
        // 0x00215CC8: nop
    
            goto L_00215D00;
    }
    // 0x00215CC8: nop

    // 0x00215CCC: mtc1        $a0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r4;
    // 0x00215CD0: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00215CD4: bgezl       $a0, L_00215CEC
    if (SIGNED(ctx->r4) >= 0) {
        // 0x00215CD8: cvt.s.d     $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
            goto L_00215CEC;
    }
    goto skip_2;
    // 0x00215CD8: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    skip_2:
    // 0x00215CDC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00215CE0: ldc1        $f0, 0x58A8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X58A8);
    // 0x00215CE4: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x00215CE8: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
L_00215CEC:
    // 0x00215CEC: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x00215CF0: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00215CF4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x00215CF8: j           L_00215DA0
    // 0x00215CFC: addiu       $a1, $a2, 0x1
    ctx->r5 = ADD32(ctx->r6, 0X1);
        goto L_00215DA0;
    // 0x00215CFC: addiu       $a1, $a2, 0x1
    ctx->r5 = ADD32(ctx->r6, 0X1);
L_00215D00:
    // 0x00215D00: mtc1        $a0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r4;
    // 0x00215D04: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00215D08: bgezl       $a0, L_00215D20
    if (SIGNED(ctx->r4) >= 0) {
        // 0x00215D0C: cvt.s.d     $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
            goto L_00215D20;
    }
    goto skip_3;
    // 0x00215D0C: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    skip_3:
    // 0x00215D10: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00215D14: ldc1        $f0, 0x58B0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X58B0);
    // 0x00215D18: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x00215D1C: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
L_00215D20:
    // 0x00215D20: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x00215D24: mtc1        $a0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r4;
    // 0x00215D28: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00215D2C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00215D30: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x00215D34: mtc1        $v0, $f2
    ctx->f2.u32l = ctx->r2;
    // 0x00215D38: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x00215D3C: bgezl       $a0, L_00215D54
    if (SIGNED(ctx->r4) >= 0) {
        // 0x00215D40: cvt.s.d     $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
            goto L_00215D54;
    }
    goto skip_4;
    // 0x00215D40: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    skip_4:
    // 0x00215D44: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00215D48: ldc1        $f0, 0x58B8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X58B8);
    // 0x00215D4C: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x00215D50: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
L_00215D54:
    // 0x00215D54: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x00215D58: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x00215D5C: nop

    // 0x00215D60: bc1f        L_00215D6C
    if (!c1cs) {
        // 0x00215D64: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_00215D6C;
    }
    // 0x00215D64: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00215D68: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_00215D6C:
    // 0x00215D6C: mtc1        $a0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r4;
    // 0x00215D70: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00215D74: bgezl       $a0, L_00215D8C
    if (SIGNED(ctx->r4) >= 0) {
        // 0x00215D78: cvt.s.d     $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
            goto L_00215D8C;
    }
    goto skip_5;
    // 0x00215D78: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    skip_5:
    // 0x00215D7C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00215D80: ldc1        $f0, 0x58C0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X58C0);
    // 0x00215D84: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x00215D88: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
L_00215D8C:
    // 0x00215D8C: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x00215D90: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00215D94: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x00215D98: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x00215D9C: addiu       $a1, $a2, 0x1
    ctx->r5 = ADD32(ctx->r6, 0X1);
L_00215DA0:
    // 0x00215DA0: mtc1        $a1, $f0
    ctx->f0.u32l = ctx->r5;
    // 0x00215DA4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00215DA8: c.le.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl <= ctx->f0.fl;
    // 0x00215DAC: nop

    // 0x00215DB0: bc1f        L_00215EC4
    if (!c1cs) {
        // 0x00215DB4: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00215EC4;
    }
    // 0x00215DB4: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00215DB8: mtc1        $a0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r4;
    // 0x00215DBC: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00215DC0: bgezl       $a0, L_00215DD8
    if (SIGNED(ctx->r4) >= 0) {
        // 0x00215DC4: cvt.s.d     $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
            goto L_00215DD8;
    }
    goto skip_6;
    // 0x00215DC4: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    skip_6:
    // 0x00215DC8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00215DCC: ldc1        $f0, 0x58C8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X58C8);
    // 0x00215DD0: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x00215DD4: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
L_00215DD8:
    // 0x00215DD8: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x00215DDC: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00215DE0: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00215DE4: nop

    // 0x00215DE8: bc1f        L_00215E24
    if (!c1cs) {
        // 0x00215DEC: nop
    
            goto L_00215E24;
    }
    // 0x00215DEC: nop

    // 0x00215DF0: mtc1        $a0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r4;
    // 0x00215DF4: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00215DF8: bgezl       $a0, L_00215E10
    if (SIGNED(ctx->r4) >= 0) {
        // 0x00215DFC: cvt.s.d     $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
            goto L_00215E10;
    }
    goto skip_7;
    // 0x00215DFC: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    skip_7:
    // 0x00215E00: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00215E04: ldc1        $f0, 0x58D0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X58D0);
    // 0x00215E08: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x00215E0C: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
L_00215E10:
    // 0x00215E10: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x00215E14: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00215E18: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x00215E1C: j           L_00215EC4
    // 0x00215E20: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
        goto L_00215EC4;
    // 0x00215E20: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_00215E24:
    // 0x00215E24: mtc1        $a0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r4;
    // 0x00215E28: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00215E2C: bgezl       $a0, L_00215E44
    if (SIGNED(ctx->r4) >= 0) {
        // 0x00215E30: cvt.s.d     $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
            goto L_00215E44;
    }
    goto skip_8;
    // 0x00215E30: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    skip_8:
    // 0x00215E34: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00215E38: ldc1        $f0, 0x58D8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X58D8);
    // 0x00215E3C: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x00215E40: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
L_00215E44:
    // 0x00215E44: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x00215E48: mtc1        $a0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r4;
    // 0x00215E4C: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00215E50: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00215E54: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x00215E58: mtc1        $v0, $f2
    ctx->f2.u32l = ctx->r2;
    // 0x00215E5C: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x00215E60: bgezl       $a0, L_00215E78
    if (SIGNED(ctx->r4) >= 0) {
        // 0x00215E64: cvt.s.d     $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
            goto L_00215E78;
    }
    goto skip_9;
    // 0x00215E64: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    skip_9:
    // 0x00215E68: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00215E6C: ldc1        $f0, 0x58E0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X58E0);
    // 0x00215E70: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x00215E74: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
L_00215E78:
    // 0x00215E78: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x00215E7C: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x00215E80: nop

    // 0x00215E84: bc1f        L_00215E90
    if (!c1cs) {
        // 0x00215E88: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_00215E90;
    }
    // 0x00215E88: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00215E8C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_00215E90:
    // 0x00215E90: mtc1        $a0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r4;
    // 0x00215E94: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00215E98: bgezl       $a0, L_00215EB0
    if (SIGNED(ctx->r4) >= 0) {
        // 0x00215E9C: cvt.s.d     $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
            goto L_00215EB0;
    }
    goto skip_10;
    // 0x00215E9C: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    skip_10:
    // 0x00215EA0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00215EA4: ldc1        $f0, 0x58E8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X58E8);
    // 0x00215EA8: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x00215EAC: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
L_00215EB0:
    // 0x00215EB0: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x00215EB4: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00215EB8: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x00215EBC: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x00215EC0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_00215EC4:
    // 0x00215EC4: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x00215EC8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00215ECC: lwc1        $f0, 0x58F0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X58F0);
    // 0x00215ED0: sll         $a0, $a1, 2
    ctx->r4 = S32(ctx->r5 << 2);
    // 0x00215ED4: sub.s       $f2, $f0, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f3.fl;
L_00215ED8:
    // 0x00215ED8: addu        $v0, $a2, $v1
    ctx->r2 = ADD32(ctx->r6, ctx->r3);
    // 0x00215EDC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00215EE0: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x00215EE4: lwc1        $f1, 0x0($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X0);
    // 0x00215EE8: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
    // 0x00215EEC: mul.s       $f1, $f2, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x00215EF0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00215EF4: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x00215EF8: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x00215EFC: mul.s       $f0, $f3, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x00215F00: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00215F04: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00215F08: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x00215F0C: swc1        $f1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f_odd[(1 - 1) * 2];
    // 0x00215F10: bne         $v0, $zero, L_00215ED8
    if (ctx->r2 != 0) {
        // 0x00215F14: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_00215ED8;
    }
    // 0x00215F14: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
L_00215F18:
    // 0x00215F18: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x00215F1C: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x00215F20: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x00215F24: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00215F28: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00215F2C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00215F30: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00215F34: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00215F38: ldc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X40);
    // 0x00215F3C: ldc1        $f21, 0x38($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X38);
    // 0x00215F40: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x00215F44: jr          $ra
    // 0x00215F48: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x00215F48: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_004077AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004077AC: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x004077B0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004077B4: lwc1        $f0, 0x540($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X540);
    // 0x004077B8: ori         $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 | 0X2000;
    // 0x004077BC: swc1        $f0, 0x1FC($a0)
    MEM_W(0X1FC, ctx->r4) = ctx->f0.u32l;
    // 0x004077C0: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
    // 0x004077C4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x004077C8: addiu       $a0, $a0, -0x61C
    ctx->r4 = ADD32(ctx->r4, -0X61C);
    // 0x004077CC: lw          $v1, -0xC($a0)
    ctx->r3 = MEM_W(ctx->r4, -0XC);
    // 0x004077D0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x004077D4: bne         $v1, $v0, L_004077E8
    if (ctx->r3 != ctx->r2) {
            // 0x004077D8: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    func_004077E8(rdram, ctx);
    return;
    }
    // 0x004077D8: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x004077DC: lwc1        $f0, 0x5C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x004077E0: jr          $ra
    // 0x004077E4: swc1        $f0, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x004077E4: swc1        $f0, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_002066B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002066B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002066B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002066B8: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x002066BC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002066C0: lui         $s1, 0x800E
    ctx->r17 = S32(0X800E << 16);
    // 0x002066C4: addiu       $s1, $s1, -0x7284
    ctx->r17 = ADD32(ctx->r17, -0X7284);
    // 0x002066C8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x002066CC: jal         0x00200738
    // 0x002066D0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00200738(rdram, ctx);
        goto after_0;
    // 0x002066D0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x002066D4: addiu       $a0, $s1, -0x14
    ctx->r4 = ADD32(ctx->r17, -0X14);
    // 0x002066D8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x002066DC: jal         0x00200518
    // 0x002066E0: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    func_00200518(rdram, ctx);
        goto after_1;
    // 0x002066E0: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    after_1:
    // 0x002066E4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x002066E8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002066EC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002066F0: jr          $ra
    // 0x002066F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002066F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00465678(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00465678: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0046567C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00465680: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00465684: jal         0x0042A9A0
    // 0x00465688: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    entry_0042A9A0(rdram, ctx);
        goto after_0;
    // 0x00465688: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x0046568C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00465690: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00465694: lw          $v0, -0x71B0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X71B0);
    // 0x00465698: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0046569C: lbu         $v0, 0x10($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X10);
    // 0x004656A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004656A4: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
    // 0x004656A8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x004656AC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x004656B0: sw          $v0, -0x4760($at)
    MEM_W(-0X4760, ctx->r1) = ctx->r2;
    // 0x004656B4: jr          $ra
    // 0x004656B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004656B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00218398(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00218398: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0021839C: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x002183A0: lui         $v1, 0xFFF
    ctx->r3 = S32(0XFFF << 16);
    // 0x002183A4: ori         $v1, $v1, 0xFFE0
    ctx->r3 = ctx->r3 | 0XFFE0;
    // 0x002183A8: lw          $t0, 0x4($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X4);
    // 0x002183AC: lw          $t1, 0x8($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X8);
    // 0x002183B0: lw          $t2, 0xC($a3)
    ctx->r10 = MEM_W(ctx->r7, 0XC);
    // 0x002183B4: sw          $t0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r8;
    // 0x002183B8: sw          $t1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r9;
    // 0x002183BC: sw          $t2, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r10;
    // 0x002183C0: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x002183C4: lui         $v0, 0xF000
    ctx->r2 = S32(0XF000 << 16);
    // 0x002183C8: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x002183CC: lw          $t1, 0x8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8);
    // 0x002183D0: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
    // 0x002183D4: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x002183D8: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x002183DC: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x002183E0: lw          $a2, 0x14($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X14);
    // 0x002183E4: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x002183E8: and         $v1, $a0, $v1
    ctx->r3 = ctx->r4 & ctx->r3;
    // 0x002183EC: srl         $v1, $v1, 3
    ctx->r3 = S32(U32(ctx->r3) >> 3);
    // 0x002183F0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x002183F4: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x002183F8: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x002183FC: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    // 0x00218400: beq         $a0, $zero, L_00218418
    if (ctx->r4 == 0) {
        // 0x00218404: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_00218418;
    }
    // 0x00218404: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x00218408: srlv        $v1, $v1, $a0
    ctx->r3 = S32(U32(ctx->r3) >> (ctx->r4 & 31));
    // 0x0021840C: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x00218410: sllv        $a1, $a1, $v0
    ctx->r5 = S32(ctx->r5 << (ctx->r2 & 31));
    // 0x00218414: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
L_00218418:
    // 0x00218418: sltiu       $v0, $a2, 0x20
    ctx->r2 = ctx->r6 < 0X20 ? 1 : 0;
    // 0x0021841C: beq         $v0, $zero, L_00218430
    if (ctx->r2 == 0) {
        // 0x00218420: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00218430;
    }
    // 0x00218420: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00218424: sllv        $v0, $v0, $a2
    ctx->r2 = S32(ctx->r2 << (ctx->r6 & 31));
    // 0x00218428: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0021842C: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
L_00218430:
    // 0x00218430: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x00218434: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00218438: bgezl       $v1, L_00218450
    if (SIGNED(ctx->r3) >= 0) {
        // 0x0021843C: cvt.s.d     $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
            goto L_00218450;
    }
    goto skip_0;
    // 0x0021843C: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    skip_0:
    // 0x00218440: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00218444: ldc1        $f0, 0x59F0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X59F0);
    // 0x00218448: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x0021844C: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
L_00218450:
    // 0x00218450: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00218454: sllv        $v0, $v0, $a2
    ctx->r2 = S32(ctx->r2 << (ctx->r6 & 31));
    // 0x00218458: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0021845C: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00218460: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00218464: lwc1        $f2, 0x1C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x00218468: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021846C: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00218470: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x00218474: lwc1        $f1, 0x18($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x00218478: lw          $v1, 0x4($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4);
    // 0x0021847C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00218480: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00218484: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x00218488: jr          $ra
    // 0x0021848C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0021848C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0041A904(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041A904: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x0041A908: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x0041A90C: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0041A910: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x0041A914: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0041A918: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x0041A91C: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x0041A920: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041A924: addiu       $a1, $a1, 0x1F84
    ctx->r5 = ADD32(ctx->r5, 0X1F84);
    // 0x0041A928: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x0041A92C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x0041A930: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x0041A934: sdc1        $f21, 0x48($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X48, ctx->r29);
    // 0x0041A938: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x0041A93C: lwc1        $f1, 0x0($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X0);
    // 0x0041A940: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041A944: lwc1        $f0, 0x126C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X126C);
    // 0x0041A948: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0041A94C: nop

    // 0x0041A950: bc1f        L_0041AA64
    if (!c1cs) {
        // 0x0041A954: addu        $s2, $a3, $zero
        ctx->r18 = ADD32(ctx->r7, 0);
            goto L_0041AA64;
    }
    // 0x0041A954: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    // 0x0041A958: lui         $a0, 0xE6C2
    ctx->r4 = S32(0XE6C2 << 16);
    // 0x0041A95C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0041A960: lw          $v1, 0x2030($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2030);
    // 0x0041A964: ori         $a0, $a0, 0xB449
    ctx->r4 = ctx->r4 | 0XB449;
    // 0x0041A968: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x0041A96C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0041A970: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0041A974: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0041A978: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0041A97C: lwc1        $f2, 0x34($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X34);
    // 0x0041A980: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041A984: lwc1        $f0, 0x1270($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X1270);
    // 0x0041A988: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0041A98C: lwc1        $f1, -0x4($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, -0X4);
    // 0x0041A990: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0041A994: mfhi        $t0
    ctx->r8 = hi;
    // 0x0041A998: addu        $v1, $t0, $v0
    ctx->r3 = ADD32(ctx->r8, ctx->r2);
    // 0x0041A99C: sra         $v1, $v1, 8
    ctx->r3 = S32(SIGNED(ctx->r3) >> 8);
    // 0x0041A9A0: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x0041A9A4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x0041A9A8: mtc1        $v1, $f20
    ctx->f20.u32l = ctx->r3;
    // 0x0041A9AC: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x0041A9B0: mul.s       $f1, $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f20.fl);
    // 0x0041A9B4: lwc1        $f0, 0x14($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X14);
    // 0x0041A9B8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0041A9BC: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0041A9C0: lwc1        $f1, 0x30($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X30);
    // 0x0041A9C4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0041A9C8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041A9CC: sw          $v0, 0x1BD0($at)
    MEM_W(0X1BD0, ctx->r1) = ctx->r2;
    // 0x0041A9D0: mul.s       $f21, $f1, $f2
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f21.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0041A9D4: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0041A9D8: mfc1        $s0, $f3
    ctx->r16 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0041A9DC: jal         0x0027AF4C
    // 0x0041A9E0: nop

    func_0027AF4C(rdram, ctx);
        goto after_0;
    // 0x0041A9E0: nop

    after_0:
    // 0x0041A9E4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x0041A9E8: lw          $v1, 0x20($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X20);
    // 0x0041A9EC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041A9F0: lwc1        $f1, 0x1274($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X1274);
    // 0x0041A9F4: mtc1        $s0, $f0
    ctx->f0.u32l = ctx->r16;
    // 0x0041A9F8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0041A9FC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0041AA00: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0041AA04: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0041AA08: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x0041AA0C: add.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f20.fl;
    // 0x0041AA10: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x0041AA14: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0041AA18: mfc1        $a2, $f3
    ctx->r6 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0041AA1C: c.le.s      $f1, $f21
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f1.fl <= ctx->f21.fl;
    // 0x0041AA20: nop

    // 0x0041AA24: bc1t        L_0041AA3C
    if (c1cs) {
        // 0x0041AA28: addiu       $a3, $v1, 0x2
        ctx->r7 = ADD32(ctx->r3, 0X2);
            goto L_0041AA3C;
    }
    // 0x0041AA28: addiu       $a3, $v1, 0x2
    ctx->r7 = ADD32(ctx->r3, 0X2);
    // 0x0041AA2C: trunc.w.s   $f3, $f21
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 21);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f21.fl);
    // 0x0041AA30: mfc1        $a1, $f3
    ctx->r5 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0041AA34: j           L_0041AA54
    // 0x0041AA38: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
        goto L_0041AA54;
    // 0x0041AA38: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
L_0041AA3C:
    // 0x0041AA3C: sub.s       $f0, $f21, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f21.fl - ctx->f1.fl;
    // 0x0041AA40: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0041AA44: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0041AA48: mfc1        $a1, $f3
    ctx->r5 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0041AA4C: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x0041AA50: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
L_0041AA54:
    // 0x0041AA54: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x0041AA58: lw          $a1, 0x20($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X20);
    // 0x0041AA5C: jal         0x002778A8
    // 0x0041AA60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002778A8(rdram, ctx);
        goto after_1;
    // 0x0041AA60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_0041AA64:
    // 0x0041AA64: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0041AA68: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0041AA6C: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    // 0x0041AA70: jal         0x00416168
    // 0x0041AA74: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    func_00416168(rdram, ctx);
        goto after_2;
    // 0x0041AA74: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    after_2:
    // 0x0041AA78: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x0041AA7C: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x0041AA80: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x0041AA84: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x0041AA88: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x0041AA8C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x0041AA90: ldc1        $f21, 0x48($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X48);
    // 0x0041AA94: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x0041AA98: jr          $ra
    // 0x0041AA9C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x0041AA9C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_0026D474(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026D474: lw          $v1, 0x4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X4);
    // 0x0026D478: beq         $v1, $zero, L_0026D488
    if (ctx->r3 == 0) {
        // 0x0026D47C: addiu       $a2, $a0, 0xC
        ctx->r6 = ADD32(ctx->r4, 0XC);
            goto L_0026D488;
    }
    // 0x0026D47C: addiu       $a2, $a0, 0xC
    ctx->r6 = ADD32(ctx->r4, 0XC);
    // 0x0026D480: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x0026D484: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_0026D488:
    // 0x0026D488: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x0026D48C: beq         $v1, $zero, L_0026D49C
    if (ctx->r3 == 0) {
        // 0x0026D490: nop
    
            goto L_0026D49C;
    }
    // 0x0026D490: nop

    // 0x0026D494: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x0026D498: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
L_0026D49C:
    // 0x0026D49C: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x0026D4A0: bne         $v0, $a1, L_0026D4B0
    if (ctx->r2 != ctx->r5) {
        // 0x0026D4A4: nop
    
            goto L_0026D4B0;
    }
    // 0x0026D4A4: nop

    // 0x0026D4A8: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x0026D4AC: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
L_0026D4B0:
    // 0x0026D4B0: lw          $v0, 0x4($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X4);
    // 0x0026D4B4: bne         $v0, $a1, L_0026D4C4
    if (ctx->r2 != ctx->r5) {
        // 0x0026D4B8: nop
    
            goto L_0026D4C4;
    }
    // 0x0026D4B8: nop

    // 0x0026D4BC: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x0026D4C0: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
L_0026D4C4:
    // 0x0026D4C4: lw          $v0, 0x8($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X8);
    // 0x0026D4C8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0026D4CC: sw          $v0, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r2;
    // 0x0026D4D0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0026D4D4: bne         $v0, $zero, L_0026D4F0
    if (ctx->r2 != 0) {
        // 0x0026D4D8: nop
    
            goto L_0026D4F0;
    }
    // 0x0026D4D8: nop

    // 0x0026D4DC: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x0026D4E0: sw          $a1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r5;
    // 0x0026D4E4: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x0026D4E8: j           L_0026D508
    // 0x0026D4EC: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
        goto L_0026D508;
    // 0x0026D4EC: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
L_0026D4F0:
    // 0x0026D4F0: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0026D4F4: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x0026D4F8: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0026D4FC: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0026D500: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
    // 0x0026D504: sw          $a1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r5;
L_0026D508:
    // 0x0026D508: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0026D50C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0026D510: jr          $ra
    // 0x0026D514: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    return;
    // 0x0026D514: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_004108CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004108CC: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x004108D0: sdc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X50, ctx->r29);
    // 0x004108D4: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x004108D8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x004108DC: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x004108E0: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x004108E4: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x004108E8: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x004108EC: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x004108F0: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x004108F4: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x004108F8: jal         0x002017D4
    // 0x004108FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x004108FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x00410900: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x00410904: bne         $a0, $zero, L_0041091C
    if (ctx->r4 != 0) {
        // 0x00410908: addiu       $v1, $v0, 0x8
        ctx->r3 = ADD32(ctx->r2, 0X8);
            goto L_0041091C;
    }
    // 0x00410908: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x0041090C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00410910: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00410914: j           L_00410A3C
    // 0x00410918: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
        goto L_00410A3C;
    // 0x00410918: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
L_0041091C:
    // 0x0041091C: lwc1        $f1, 0x10($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X10);
    // 0x00410920: c.le.s      $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f20.fl <= ctx->f1.fl;
    // 0x00410924: nop

    // 0x00410928: bc1fl       L_0041094C
    if (!c1cs) {
        // 0x0041092C: sll         $v0, $a0, 2
        ctx->r2 = S32(ctx->r4 << 2);
            goto L_0041094C;
    }
    goto skip_0;
    // 0x0041092C: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    skip_0:
    // 0x00410930: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x00410934: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x00410938: lwc1        $f0, 0x4($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X4);
    // 0x0041093C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x00410940: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x00410944: j           L_00410A3C
    // 0x00410948: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
        goto L_00410A3C;
    // 0x00410948: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
L_0041094C:
    // 0x0041094C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x00410950: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00410954: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00410958: addiu       $a0, $v0, -0x14
    ctx->r4 = ADD32(ctx->r2, -0X14);
    // 0x0041095C: lwc1        $f0, 0x10($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X10);
    // 0x00410960: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x00410964: nop

    // 0x00410968: bc1f        L_0041098C
    if (!c1cs) {
        // 0x0041096C: nop
    
            goto L_0041098C;
    }
    // 0x0041096C: nop

    // 0x00410970: lwc1        $f0, -0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, -0X14);
    // 0x00410974: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x00410978: lwc1        $f0, 0x4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4);
    // 0x0041097C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x00410980: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    // 0x00410984: j           L_00410A3C
    // 0x00410988: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
        goto L_00410A3C;
    // 0x00410988: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
L_0041098C:
    // 0x0041098C: c.lt.s      $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f1.fl < ctx->f20.fl;
    // 0x00410990: nop

    // 0x00410994: bc1f        L_004109B4
    if (!c1cs) {
        // 0x00410998: nop
    
            goto L_004109B4;
    }
    // 0x00410998: nop

    // 0x0041099C: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
L_004109A0:
    // 0x004109A0: lwc1        $f0, 0x10($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X10);
    // 0x004109A4: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x004109A8: nop

    // 0x004109AC: bc1tl       L_004109A0
    if (c1cs) {
        // 0x004109B0: addiu       $v1, $v1, 0x14
        ctx->r3 = ADD32(ctx->r3, 0X14);
            goto L_004109A0;
    }
    goto skip_1;
    // 0x004109B0: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
    skip_1:
L_004109B4:
    // 0x004109B4: lwc1        $f0, -0x14($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, -0X14);
    // 0x004109B8: lwc1        $f2, -0x4($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, -0X4);
    // 0x004109BC: lwc1        $f1, 0x10($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X10);
    // 0x004109C0: addiu       $s1, $sp, 0x20
    ctx->r17 = ADD32(ctx->r29, 0X20);
    // 0x004109C4: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x004109C8: lwc1        $f0, -0x10($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, -0X10);
    // 0x004109CC: sub.s       $f20, $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f2.fl;
    // 0x004109D0: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x004109D4: lwc1        $f0, -0xC($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, -0XC);
    // 0x004109D8: sub.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f2.fl;
    // 0x004109DC: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x004109E0: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x004109E4: div.s       $f20, $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = DIV_S(ctx->f20.fl, ctx->f1.fl);
    // 0x004109E8: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x004109EC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004109F0: lwc1        $f0, 0x988($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X988);
    // 0x004109F4: lwc1        $f1, 0x4($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X4);
    // 0x004109F8: sub.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x004109FC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00410A00: swc1        $f1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00410A04: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x00410A08: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x00410A0C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00410A10: jal         0x0020EF60
    // 0x00410A14: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    func_0020EF60(rdram, ctx);
        goto after_1;
    // 0x00410A14: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x00410A18: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x00410A1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00410A20: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x00410A24: jal         0x0020EF60
    // 0x00410A28: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0020EF60(rdram, ctx);
        goto after_2;
    // 0x00410A28: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00410A2C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00410A30: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00410A34: jal         0x0020EEF8
    // 0x00410A38: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0020EEF8(rdram, ctx);
        goto after_3;
    // 0x00410A38: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_3:
L_00410A3C:
    // 0x00410A3C: lw          $a3, 0x10($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X10);
    // 0x00410A40: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x00410A44: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x00410A48: sw          $a3, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r7;
    // 0x00410A4C: sw          $t0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r8;
    // 0x00410A50: sw          $t1, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r9;
    // 0x00410A54: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x00410A58: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x00410A5C: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x00410A60: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x00410A64: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x00410A68: ldc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X50);
    // 0x00410A6C: jr          $ra
    // 0x00410A70: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x00410A70: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_0026214C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026214C: mult        $v0, $a3
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
;}
RECOMP_FUNC void func_0041BCA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041BCA8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0041BCAC: addu        $v1, $a0, $a1
    ctx->r3 = ADD32(ctx->r4, ctx->r5);
L_0041BCB0:
    // 0x0041BCB0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0041BCB4: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x0041BCB8: lbu         $v0, 0x5E8C($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X5E8C);
    // 0x0041BCBC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0041BCC0: sb          $v0, 0x33($v1)
    MEM_B(0X33, ctx->r3) = ctx->r2;
    // 0x0041BCC4: slti        $v0, $a1, 0x8
    ctx->r2 = SIGNED(ctx->r5) < 0X8 ? 1 : 0;
    // 0x0041BCC8: bne         $v0, $zero, L_0041BCB0
    if (ctx->r2 != 0) {
        // 0x0041BCCC: addu        $v1, $a0, $a1
        ctx->r3 = ADD32(ctx->r4, ctx->r5);
            goto L_0041BCB0;
    }
    // 0x0041BCCC: addu        $v1, $a0, $a1
    ctx->r3 = ADD32(ctx->r4, ctx->r5);
    // 0x0041BCD0: jr          $ra
    // 0x0041BCD4: nop

    return;
    // 0x0041BCD4: nop

;}
RECOMP_FUNC void func_0042E350(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042E350: lw          $a0, 0xA50($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA50);
    // 0x0042E354: jal         0x00285BD0
    // 0x0042E358: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_00285BD0(rdram, ctx);
        goto after_0;
    // 0x0042E358: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x0042E35C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0042E360: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0042E364: beq         $v0, $zero, L_0042E37C
    if (ctx->r2 == 0) {
        // 0x0042E368: addiu       $v0, $zero, 0x6400
        ctx->r2 = ADD32(0, 0X6400);
            goto L_0042E37C;
    }
    // 0x0042E368: addiu       $v0, $zero, 0x6400
    ctx->r2 = ADD32(0, 0X6400);
    // 0x0042E36C: jal         0x002540E4
    // 0x0042E370: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002540E4(rdram, ctx);
        goto after_1;
    // 0x0042E370: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0042E374: j           L_0042E384
    // 0x0042E378: nop

        goto L_0042E384;
    // 0x0042E378: nop

L_0042E37C:
    // 0x0042E37C: sw          $v0, 0x524($s0)
    MEM_W(0X524, ctx->r16) = ctx->r2;
    // 0x0042E380: sw          $v0, 0x144($s0)
    MEM_W(0X144, ctx->r16) = ctx->r2;
L_0042E384:
    // 0x0042E384: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0042E388: lwc1        $f0, 0x6AC8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6AC8);
    // 0x0042E38C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042E390: jal         0x00248340
    // 0x0042E394: swc1        $f0, 0xA28($s0)
    MEM_W(0XA28, ctx->r16) = ctx->f0.u32l;
    func_00248340(rdram, ctx);
        goto after_2;
    // 0x0042E394: swc1        $f0, 0xA28($s0)
    MEM_W(0XA28, ctx->r16) = ctx->f0.u32l;
    after_2:
    // 0x0042E398: sw          $zero, 0x1298($s0)
    MEM_W(0X1298, ctx->r16) = 0;
    // 0x0042E39C: sw          $zero, 0x12A8($s0)
    MEM_W(0X12A8, ctx->r16) = 0;
    // 0x0042E3A0: sw          $zero, 0x12AC($s0)
    MEM_W(0X12AC, ctx->r16) = 0;
    // 0x0042E3A4: sw          $zero, 0x12B0($s0)
    MEM_W(0X12B0, ctx->r16) = 0;
    // 0x0042E3A8: sw          $zero, 0x12A4($s0)
    MEM_W(0X12A4, ctx->r16) = 0;
    // 0x0042E3AC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0042E3B0: lw          $v1, -0x5378($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5378);
    // 0x0042E3B4: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x0042E3B8: bne         $v1, $v0, L_0042E408
    if (ctx->r3 != ctx->r2) {
        // 0x0042E3BC: nop
    
            goto L_0042E408;
    }
    // 0x0042E3BC: nop

    // 0x0042E3C0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0042E3C4: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0042E3C8: bne         $v0, $zero, L_0042E418
    if (ctx->r2 != 0) {
        // 0x0042E3CC: nop
    
            goto L_0042E418;
    }
    // 0x0042E3CC: nop

    // 0x0042E3D0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042E3D4: lw          $v0, 0x6D20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D20);
    // 0x0042E3D8: sltiu       $v0, $v0, 0xB
    ctx->r2 = ctx->r2 < 0XB ? 1 : 0;
    // 0x0042E3DC: bne         $v0, $zero, L_0042E408
    if (ctx->r2 != 0) {
        // 0x0042E3E0: nop
    
            goto L_0042E408;
    }
    // 0x0042E3E0: nop

    // 0x0042E3E4: lh          $v1, 0x52A($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X52A);
    // 0x0042E3E8: slti        $v0, $v1, 0xB
    ctx->r2 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
    // 0x0042E3EC: beq         $v0, $zero, L_0042E408
    if (ctx->r2 == 0) {
        // 0x0042E3F0: sll         $v0, $v1, 1
        ctx->r2 = S32(ctx->r3 << 1);
            goto L_0042E408;
    }
    // 0x0042E3F0: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x0042E3F4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0042E3F8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0042E3FC: lh          $a0, -0x1D4C($at)
    ctx->r4 = MEM_H(ctx->r1, -0X1D4C);
    // 0x0042E400: jal         0x0027580C
    // 0x0042E404: nop

    func_0027580C(rdram, ctx);
        goto after_3;
    // 0x0042E404: nop

    after_3:
L_0042E408:
    // 0x0042E408: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0042E40C: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0042E410: beq         $v0, $zero, L_0042E420
    if (ctx->r2 == 0) {
        // 0x0042E414: nop
    
            goto L_0042E420;
    }
    // 0x0042E414: nop

L_0042E418:
    // 0x0042E418: jal         0x00248A8C
    // 0x0042E41C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00248A8C(rdram, ctx);
        goto after_4;
    // 0x0042E41C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_0042E420:
    // 0x0042E420: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0042E424: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042E428: jr          $ra
    // 0x0042E42C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0042E42C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0029A140(uint8_t* rdram, recomp_context* ctx) {
    // s32 __osSiDeviceBusy(void)
    //
    // Replaced. The original reads SI_STATUS at 0xA4800018, which is outside
    // RDRAM; recomp_rdram_offset would fold that onto the first bytes of
    // memory and return whatever happens to live there. See src/si.cpp.
    extern void turok2_si_device_busy(uint8_t* rdram, recomp_context* ctx);
    turok2_si_device_busy(rdram, ctx);
}
RECOMP_FUNC void func_00253EB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00253EB8: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x00253EBC: lw          $v0, 0x28($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X28);
    // 0x00253EC0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00253EC4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00253EC8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00253ECC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00253ED0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00253ED4: bne         $v0, $zero, L_00253F2C
    if (ctx->r2 != 0) {
        // 0x00253ED8: sw          $ra, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r31;
            goto L_00253F2C;
    }
    // 0x00253ED8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00253EDC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00253EE0: lw          $v0, -0x535C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X535C);
    // 0x00253EE4: bne         $v0, $zero, L_00253F2C
    if (ctx->r2 != 0) {
        // 0x00253EE8: nop
    
            goto L_00253F2C;
    }
    // 0x00253EE8: nop

    // 0x00253EEC: jal         0x00275F7C
    // 0x00253EF0: nop

    func_00275F7C(rdram, ctx);
        goto after_0;
    // 0x00253EF0: nop

    after_0:
    // 0x00253EF4: lw          $a1, 0x128C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X128C);
    // 0x00253EF8: jal         0x00275D34
    // 0x00253EFC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_00275D34(rdram, ctx);
        goto after_1;
    // 0x00253EFC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_1:
    // 0x00253F00: jal         0x00275F7C
    // 0x00253F04: nop

    func_00275F7C(rdram, ctx);
        goto after_2;
    // 0x00253F04: nop

    after_2:
    // 0x00253F08: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00253F0C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00253F10: lw          $a2, 0x51C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X51C);
    // 0x00253F14: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00253F18: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00253F1C: addiu       $a2, $a2, 0x114
    ctx->r6 = ADD32(ctx->r6, 0X114);
    // 0x00253F20: jal         0x00275C6C
    // 0x00253F24: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    func_00275C6C(rdram, ctx);
        goto after_3;
    // 0x00253F24: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    after_3:
    // 0x00253F28: sw          $v0, 0x128C($s0)
    MEM_W(0X128C, ctx->r16) = ctx->r2;
L_00253F2C:
    // 0x00253F2C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00253F30: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00253F34: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00253F38: jr          $ra
    // 0x00253F3C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00253F3C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0041A1D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041A1D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0041A1DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0041A1E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0041A1E4: jal         0x00266B80
    // 0x0041A1E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_00266B80(rdram, ctx);
        goto after_0;
    // 0x0041A1E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x0041A1EC: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x0041A1F0: beq         $v0, $v1, L_0041A204
    if (ctx->r2 == ctx->r3) {
        // 0x0041A1F4: lui         $v1, 0x80
        ctx->r3 = S32(0X80 << 16);
            goto L_0041A204;
    }
    // 0x0041A1F4: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x0041A1F8: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x0041A1FC: j           L_0041A214
    // 0x0041A200: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
        goto L_0041A214;
    // 0x0041A200: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
L_0041A204:
    // 0x0041A204: lui         $v1, 0xFF7F
    ctx->r3 = S32(0XFF7F << 16);
    // 0x0041A208: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x0041A20C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0041A210: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
L_0041A214:
    // 0x0041A214: jal         0x004245E0
    // 0x0041A218: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    func_004245E0(rdram, ctx);
        goto after_1;
    // 0x0041A218: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    after_1:
    // 0x0041A21C: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x0041A220: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0041A224: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041A228: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041A22C: jr          $ra
    // 0x0041A230: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0041A230: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0042EBB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042EBB4: jr          $ra
    // 0x0042EBB8: nop

    return;
    // 0x0042EBB8: nop

;}
RECOMP_FUNC void func_00230CB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00230CB4: addiu       $sp, $sp, -0x478
    ctx->r29 = ADD32(ctx->r29, -0X478);
    // 0x00230CB8: sw          $s4, 0x450($sp)
    MEM_W(0X450, ctx->r29) = ctx->r20;
    // 0x00230CBC: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x00230CC0: sw          $s3, 0x44C($sp)
    MEM_W(0X44C, ctx->r29) = ctx->r19;
    // 0x00230CC4: addu        $s3, $s4, $zero
    ctx->r19 = ADD32(ctx->r20, 0);
    // 0x00230CC8: ori         $t1, $zero, 0xEC28
    ctx->r9 = 0 | 0XEC28;
    // 0x00230CCC: lui         $a2, 0xFFEF
    ctx->r6 = S32(0XFFEF << 16);
    // 0x00230CD0: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x00230CD4: lui         $a3, 0x200
    ctx->r7 = S32(0X200 << 16);
    // 0x00230CD8: addiu       $t0, $sp, 0x228
    ctx->r8 = ADD32(ctx->r29, 0X228);
    // 0x00230CDC: sw          $a0, 0x478($sp)
    MEM_W(0X478, ctx->r29) = ctx->r4;
    // 0x00230CE0: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00230CE4: sw          $ra, 0x464($sp)
    MEM_W(0X464, ctx->r29) = ctx->r31;
    // 0x00230CE8: sw          $fp, 0x460($sp)
    MEM_W(0X460, ctx->r29) = ctx->r30;
    // 0x00230CEC: sw          $s7, 0x45C($sp)
    MEM_W(0X45C, ctx->r29) = ctx->r23;
    // 0x00230CF0: sw          $s6, 0x458($sp)
    MEM_W(0X458, ctx->r29) = ctx->r22;
    // 0x00230CF4: sw          $s5, 0x454($sp)
    MEM_W(0X454, ctx->r29) = ctx->r21;
    // 0x00230CF8: sw          $s2, 0x448($sp)
    MEM_W(0X448, ctx->r29) = ctx->r18;
    // 0x00230CFC: sw          $s1, 0x444($sp)
    MEM_W(0X444, ctx->r29) = ctx->r17;
    // 0x00230D00: sw          $s0, 0x440($sp)
    MEM_W(0X440, ctx->r29) = ctx->r16;
    // 0x00230D04: sdc1        $f21, 0x470($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X470, ctx->r29);
    // 0x00230D08: sdc1        $f20, 0x468($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X468, ctx->r29);
L_00230D0C:
    // 0x00230D0C: addu        $v0, $a1, $t1
    ctx->r2 = ADD32(ctx->r5, ctx->r9);
    // 0x00230D10: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x00230D14: beq         $v1, $zero, L_00230D44
    if (ctx->r3 == 0) {
        // 0x00230D18: sll         $v0, $s4, 2
        ctx->r2 = S32(ctx->r20 << 2);
            goto L_00230D44;
    }
    // 0x00230D18: sll         $v0, $s4, 2
    ctx->r2 = S32(ctx->r20 << 2);
    // 0x00230D1C: addu        $a0, $v0, $t0
    ctx->r4 = ADD32(ctx->r2, ctx->r8);
L_00230D20:
    // 0x00230D20: lw          $v0, 0x40($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X40);
    // 0x00230D24: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x00230D28: and         $v0, $v0, $a2
    ctx->r2 = ctx->r2 & ctx->r6;
    // 0x00230D2C: or          $v0, $v0, $a3
    ctx->r2 = ctx->r2 | ctx->r7;
    // 0x00230D30: sw          $v0, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->r2;
    // 0x00230D34: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x00230D38: lw          $v1, 0x1C8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1C8);
    // 0x00230D3C: bne         $v1, $zero, L_00230D20
    if (ctx->r3 != 0) {
        // 0x00230D40: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_00230D20;
    }
    // 0x00230D40: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_00230D44:
    // 0x00230D44: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x00230D48: slti        $v0, $s3, 0x3
    ctx->r2 = SIGNED(ctx->r19) < 0X3 ? 1 : 0;
    // 0x00230D4C: bne         $v0, $zero, L_00230D0C
    if (ctx->r2 != 0) {
        // 0x00230D50: addiu       $a1, $a1, 0x14
        ctx->r5 = ADD32(ctx->r5, 0X14);
            goto L_00230D0C;
    }
    // 0x00230D50: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    // 0x00230D54: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00230D58: lw          $v0, -0x535C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X535C);
    // 0x00230D5C: bne         $v0, $zero, L_00231154
    if (ctx->r2 != 0) {
        // 0x00230D60: nop
    
            goto L_00231154;
    }
    // 0x00230D60: nop

    // 0x00230D64: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x00230D68: lw          $v0, 0x28($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X28);
    // 0x00230D6C: bne         $v0, $zero, L_00231154
    if (ctx->r2 != 0) {
        // 0x00230D70: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_00231154;
    }
    // 0x00230D70: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x00230D74: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00230D78: lwc1        $f21, 0x6D28($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x00230D7C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00230D80: lwc1        $f0, 0x6D30($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D30);
    // 0x00230D84: mul.s       $f0, $f21, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x00230D88: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00230D8C: swc1        $f0, 0x6D28($at)
    MEM_W(0X6D28, ctx->r1) = ctx->f0.u32l;
    // 0x00230D90: blez        $s4, L_0023105C
    if (SIGNED(ctx->r20) <= 0) {
        // 0x00230D94: addu        $s5, $s3, $zero
        ctx->r21 = ADD32(ctx->r19, 0);
            goto L_0023105C;
    }
    // 0x00230D94: addu        $s5, $s3, $zero
    ctx->r21 = ADD32(ctx->r19, 0);
    // 0x00230D98: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
    // 0x00230D9C: lui         $s6, 0x800F
    ctx->r22 = S32(0X800F << 16);
    // 0x00230DA0: addiu       $s6, $s6, 0x5A1C
    ctx->r22 = ADD32(ctx->r22, 0X5A1C);
    // 0x00230DA4: ori         $s7, $zero, 0xFFFF
    ctx->r23 = 0 | 0XFFFF;
    // 0x00230DA8: sll         $v0, $s3, 2
    ctx->r2 = S32(ctx->r19 << 2);
L_00230DAC:
    // 0x00230DAC: addu        $v0, $sp, $v0
    ctx->r2 = ADD32(ctx->r29, ctx->r2);
    // 0x00230DB0: lw          $s0, 0x228($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X228);
    // 0x00230DB4: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x00230DB8: lw          $a0, 0x40($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X40);
    // 0x00230DBC: ori         $v1, $v1, 0x100
    ctx->r3 = ctx->r3 | 0X100;
    // 0x00230DC0: and         $v0, $a0, $v1
    ctx->r2 = ctx->r4 & ctx->r3;
    // 0x00230DC4: bnel        $v0, $v1, L_00231050
    if (ctx->r2 != ctx->r3) {
        // 0x00230DC8: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_00231050;
    }
    goto skip_0;
    // 0x00230DC8: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_0:
    // 0x00230DCC: lui         $v0, 0xFFEF
    ctx->r2 = S32(0XFFEF << 16);
    // 0x00230DD0: ori         $v0, $v0, 0xFF87
    ctx->r2 = ctx->r2 | 0XFF87;
    // 0x00230DD4: lw          $v1, 0x118($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X118);
    // 0x00230DD8: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x00230DDC: beq         $v1, $zero, L_00230DE8
    if (ctx->r3 == 0) {
        // 0x00230DE0: sw          $v0, 0x40($s0)
        MEM_W(0X40, ctx->r16) = ctx->r2;
            goto L_00230DE8;
    }
    // 0x00230DE0: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x00230DE4: sh          $zero, 0x16($v1)
    MEM_H(0X16, ctx->r3) = 0;
L_00230DE8:
    // 0x00230DE8: lh          $v0, 0x128($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X128);
    // 0x00230DEC: lwc1        $f1, 0x11C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X11C);
    // 0x00230DF0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00230DF4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
        turok2_patch_oneshot_particle_hold(rdram, ctx);

    // 0x00230DF8: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00230DFC: nop

    // 0x00230E00: bc1f        L_00230F18
    if (!c1cs) {
        // 0x00230E04: nop
    
            goto L_00230F18;
    }
    // 0x00230E04: nop

    // 0x00230E08: beq         $v0, $fp, L_00230F18
    if (ctx->r2 == ctx->r30) {
        // 0x00230E0C: nop
    
            goto L_00230F18;
    }
    // 0x00230E0C: nop

    // 0x00230E10: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    // 0x00230E14: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x00230E18: bne         $v0, $zero, L_00230F18
    if (ctx->r2 != 0) {
        // 0x00230E1C: nop
    
            goto L_00230F18;
    }
    // 0x00230E1C: nop

    // 0x00230E20: lwc1        $f0, 0x0($s6)
    ctx->f0.u32l = MEM_W(ctx->r22, 0X0);
    // 0x00230E24: lwc1        $f3, 0x4($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0X4);
    // 0x00230E28: c.lt.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl < ctx->f0.fl;
    // 0x00230E2C: nop

    // 0x00230E30: bc1f        L_00230FF4
    if (!c1cs) {
        // 0x00230E34: nop
    
            goto L_00230FF4;
    }
    // 0x00230E34: nop

    // 0x00230E38: lwc1        $f0, 0x4($s6)
    ctx->f0.u32l = MEM_W(ctx->r22, 0X4);
    // 0x00230E3C: lwc1        $f2, 0x8($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X8);
    // 0x00230E40: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x00230E44: nop

    // 0x00230E48: bc1f        L_00230FF4
    if (!c1cs) {
        // 0x00230E4C: nop
    
            goto L_00230FF4;
    }
    // 0x00230E4C: nop

    // 0x00230E50: lwc1        $f0, 0x8($s6)
    ctx->f0.u32l = MEM_W(ctx->r22, 0X8);
    // 0x00230E54: lwc1        $f1, 0xC($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XC);
    // 0x00230E58: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00230E5C: nop

    // 0x00230E60: bc1f        L_00230FF4
    if (!c1cs) {
        // 0x00230E64: nop
    
            goto L_00230FF4;
    }
    // 0x00230E64: nop

    // 0x00230E68: lwc1        $f0, -0xC($s6)
    ctx->f0.u32l = MEM_W(ctx->r22, -0XC);
    // 0x00230E6C: c.le.s      $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f0.fl <= ctx->f3.fl;
    // 0x00230E70: nop

    // 0x00230E74: bc1f        L_00230FF4
    if (!c1cs) {
        // 0x00230E78: nop
    
            goto L_00230FF4;
    }
    // 0x00230E78: nop

    // 0x00230E7C: lwc1        $f0, -0x8($s6)
    ctx->f0.u32l = MEM_W(ctx->r22, -0X8);
    // 0x00230E80: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x00230E84: nop

    // 0x00230E88: bc1f        L_00230FF4
    if (!c1cs) {
        // 0x00230E8C: nop
    
            goto L_00230FF4;
    }
    // 0x00230E8C: nop

    // 0x00230E90: lwc1        $f0, -0x4($s6)
    ctx->f0.u32l = MEM_W(ctx->r22, -0X4);
    // 0x00230E94: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00230E98: nop

    // 0x00230E9C: bc1f        L_00230FF4
    if (!c1cs) {
        // 0x00230EA0: nop
    
            goto L_00230FF4;
    }
    // 0x00230EA0: nop

    // 0x00230EA4: jal         0x0022AFB4
    // 0x00230EA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0022AFB4(rdram, ctx);
        goto after_0;
    // 0x00230EA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00230EAC: lw          $v1, 0x118($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X118);
    // 0x00230EB0: beq         $v1, $zero, L_00230F00
    if (ctx->r3 == 0) {
        // 0x00230EB4: nop
    
            goto L_00230F00;
    }
    // 0x00230EB4: nop

    // 0x00230EB8: sh          $fp, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r30;
    // 0x00230EBC: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x00230EC0: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00230EC4: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x00230EC8: sh          $v0, 0x10($v1)
    MEM_H(0X10, ctx->r3) = ctx->r2;
    // 0x00230ECC: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x00230ED0: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00230ED4: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x00230ED8: sh          $v0, 0x12($v1)
    MEM_H(0X12, ctx->r3) = ctx->r2;
    // 0x00230EDC: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x00230EE0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00230EE4: lwc1        $f1, 0x63F0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X63F0);
    // 0x00230EE8: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00230EEC: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x00230EF0: sh          $v0, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r2;
    // 0x00230EF4: lwc1        $f0, 0x174($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X174);
    // 0x00230EF8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00230EFC: swc1        $f0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f0.u32l;
L_00230F00:
    // 0x00230F00: lwc1        $f0, 0x11C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X11C);
    // 0x00230F04: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00230F08: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x00230F0C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00230F10: j           L_00231000
    // 0x00230F14: swc1        $f0, 0x11C($s0)
    MEM_W(0X11C, ctx->r16) = ctx->f0.u32l;
        goto L_00231000;
    // 0x00230F14: swc1        $f0, 0x11C($s0)
    MEM_W(0X11C, ctx->r16) = ctx->f0.u32l;
L_00230F18:
    // 0x00230F18: lw          $s1, 0xF8($s0)
    ctx->r17 = MEM_W(ctx->r16, 0XF8);
    // 0x00230F1C: jal         0x002325F0
    // 0x00230F20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002325F0(rdram, ctx);
        goto after_1;
    // 0x00230F20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00230F24: beq         $v0, $zero, L_00230F30
    if (ctx->r2 == 0) {
        // 0x00230F28: addiu       $a0, $zero, 0xA
        ctx->r4 = ADD32(0, 0XA);
            goto L_00230F30;
    }
    // 0x00230F28: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x00230F2C: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
L_00230F30:
    // 0x00230F30: sll         $a1, $a0, 1
    ctx->r5 = S32(ctx->r4 << 1);
    // 0x00230F34: lw          $v0, 0x18($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X18);
    // 0x00230F38: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x00230F3C: addu        $v1, $v0, $a1
    ctx->r3 = ADD32(ctx->r2, ctx->r5);
    // 0x00230F40: lhu         $s2, 0x70($v1)
    ctx->r18 = MEM_HU(ctx->r3, 0X70);
    // 0x00230F44: lhu         $a2, 0x8C($v1)
    ctx->r6 = MEM_HU(ctx->r3, 0X8C);
    // 0x00230F48: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x00230F4C: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x00230F50: lw          $t3, 0x4($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X4);
    // 0x00230F54: sw          $t2, 0x428($sp)
    MEM_W(0X428, ctx->r29) = ctx->r10;
    // 0x00230F58: sw          $t3, 0x42C($sp)
    MEM_W(0X42C, ctx->r29) = ctx->r11;
    // 0x00230F5C: lw          $v0, 0x18($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X18);
    // 0x00230F60: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x00230F64: lhu         $s1, 0xA8($v0)
    ctx->r17 = MEM_HU(ctx->r2, 0XA8);
    // 0x00230F68: beq         $a2, $s7, L_00230FA4
    if (ctx->r6 == ctx->r23) {
        // 0x00230F6C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00230FA4;
    }
    // 0x00230F6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00230F70: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00230F74: lw          $t2, 0x4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X4);
    // 0x00230F78: lw          $t3, 0x8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X8);
    // 0x00230F7C: lw          $t4, 0xC($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC);
    // 0x00230F80: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x00230F84: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x00230F88: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x00230F8C: lw          $t2, 0x428($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X428);
    // 0x00230F90: lw          $t3, 0x42C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X42C);
    // 0x00230F94: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x00230F98: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x00230F9C: jal         0x00236EA0
    // 0x00230FA0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_00236EA0(rdram, ctx);
        goto after_2;
    // 0x00230FA0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_2:
L_00230FA4:
    // 0x00230FA4: beq         $s2, $s7, L_00230FBC
    if (ctx->r18 == ctx->r23) {
        // 0x00230FA8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00230FBC;
    }
    // 0x00230FA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00230FAC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00230FB0: lb          $a2, 0x1AC($s0)
    ctx->r6 = MEM_B(ctx->r16, 0X1AC);
    // 0x00230FB4: jal         0x00229340
    // 0x00230FB8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    entry_00229340(rdram, ctx);
        goto after_3;
    // 0x00230FB8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
L_00230FBC:
    // 0x00230FBC: beq         $s1, $s7, L_00230FE4
    if (ctx->r17 == ctx->r23) {
        // 0x00230FC0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00230FE4;
    }
    // 0x00230FC0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00230FC4: sll         $a0, $s1, 16
    ctx->r4 = S32(ctx->r17 << 16);
    // 0x00230FC8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00230FCC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00230FD0: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x00230FD4: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x00230FD8: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x00230FDC: jal         0x00275544
    // 0x00230FE0: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    func_00275544(rdram, ctx);
        goto after_4;
    // 0x00230FE0: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    after_4:
L_00230FE4:
    // 0x00230FE4: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    // 0x00230FE8: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x00230FEC: beql        $v0, $zero, L_00231050
    if (ctx->r2 == 0) {
        // 0x00230FF0: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_00231050;
    }
    goto skip_1;
    // 0x00230FF0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_1:
L_00230FF4:
    // 0x00230FF4: lw          $a0, 0x478($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X478);
    // 0x00230FF8: jal         0x0022F1C8
    // 0x00230FFC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0022F1C8(rdram, ctx);
        goto after_5;
    // 0x00230FFC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
L_00231000:
    // 0x00231000: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    // 0x00231004: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x00231008: beql        $v0, $zero, L_00231050
    if (ctx->r2 == 0) {
        // 0x0023100C: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_00231050;
    }
    goto skip_2;
    // 0x0023100C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_2:
    // 0x00231010: lhu         $v1, 0x2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2);
    // 0x00231014: addiu       $v0, $zero, 0x57
    ctx->r2 = ADD32(0, 0X57);
    // 0x00231018: beq         $v1, $v0, L_0023103C
    if (ctx->r3 == ctx->r2) {
        // 0x0023101C: slti        $v0, $v1, 0x58
        ctx->r2 = SIGNED(ctx->r3) < 0X58 ? 1 : 0;
            goto L_0023103C;
    }
    // 0x0023101C: slti        $v0, $v1, 0x58
    ctx->r2 = SIGNED(ctx->r3) < 0X58 ? 1 : 0;
    // 0x00231020: beql        $v0, $zero, L_00231050
    if (ctx->r2 == 0) {
        // 0x00231024: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_00231050;
    }
    goto skip_3;
    // 0x00231024: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_3:
    // 0x00231028: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x0023102C: beq         $v1, $v0, L_0023103C
    if (ctx->r3 == ctx->r2) {
        // 0x00231030: addiu       $v0, $zero, 0x22
        ctx->r2 = ADD32(0, 0X22);
            goto L_0023103C;
    }
    // 0x00231030: addiu       $v0, $zero, 0x22
    ctx->r2 = ADD32(0, 0X22);
    // 0x00231034: bnel        $v1, $v0, L_00231050
    if (ctx->r3 != ctx->r2) {
        // 0x00231038: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_00231050;
    }
    goto skip_4;
    // 0x00231038: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_4:
L_0023103C:
    // 0x0023103C: sll         $v0, $s5, 2
    ctx->r2 = S32(ctx->r21 << 2);
    // 0x00231040: addu        $v0, $sp, $v0
    ctx->r2 = ADD32(ctx->r29, ctx->r2);
    // 0x00231044: sw          $s0, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r16;
    // 0x00231048: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x0023104C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_00231050:
    // 0x00231050: slt         $v0, $s3, $s4
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x00231054: bne         $v0, $zero, L_00230DAC
    if (ctx->r2 != 0) {
        // 0x00231058: sll         $v0, $s3, 2
        ctx->r2 = S32(ctx->r19 << 2);
            goto L_00230DAC;
    }
    // 0x00231058: sll         $v0, $s3, 2
    ctx->r2 = S32(ctx->r19 << 2);
L_0023105C:
    // 0x0023105C: beq         $s5, $zero, L_0023114C
    if (ctx->r21 == 0) {
        // 0x00231060: addu        $s4, $zero, $zero
        ctx->r20 = ADD32(0, 0);
            goto L_0023114C;
    }
    // 0x00231060: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x00231064: blez        $s5, L_0023114C
    if (SIGNED(ctx->r21) <= 0) {
        // 0x00231068: addiu       $s7, $sp, 0x28
        ctx->r23 = ADD32(ctx->r29, 0X28);
            goto L_0023114C;
    }
    // 0x00231068: addiu       $s7, $sp, 0x28
    ctx->r23 = ADD32(ctx->r29, 0X28);
    // 0x0023106C: addiu       $fp, $zero, 0x57
    ctx->r30 = ADD32(0, 0X57);
    // 0x00231070: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00231074: lwc1        $f20, 0x63F4($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X63F4);
    // 0x00231078: addu        $s6, $s7, $zero
    ctx->r22 = ADD32(ctx->r23, 0);
L_0023107C:
    // 0x0023107C: lw          $s3, 0x0($s6)
    ctx->r19 = MEM_W(ctx->r22, 0X0);
    // 0x00231080: lhu         $v1, 0x2($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X2);
    // 0x00231084: beq         $v1, $fp, L_002310C8
    if (ctx->r3 == ctx->r30) {
        // 0x00231088: slti        $v0, $v1, 0x58
        ctx->r2 = SIGNED(ctx->r3) < 0X58 ? 1 : 0;
            goto L_002310C8;
    }
    // 0x00231088: slti        $v0, $v1, 0x58
    ctx->r2 = SIGNED(ctx->r3) < 0X58 ? 1 : 0;
    // 0x0023108C: beql        $v0, $zero, L_0023113C
    if (ctx->r2 == 0) {
        // 0x00231090: addiu       $s6, $s6, 0x4
        ctx->r22 = ADD32(ctx->r22, 0X4);
            goto L_0023113C;
    }
    goto skip_5;
    // 0x00231090: addiu       $s6, $s6, 0x4
    ctx->r22 = ADD32(ctx->r22, 0X4);
    skip_5:
    // 0x00231094: addiu       $t2, $zero, 0xC
    ctx->r10 = ADD32(0, 0XC);
    // 0x00231098: beql        $v1, $t2, L_0023113C
    if (ctx->r3 == ctx->r10) {
        // 0x0023109C: addiu       $s6, $s6, 0x4
        ctx->r22 = ADD32(ctx->r22, 0X4);
            goto L_0023113C;
    }
    goto skip_6;
    // 0x0023109C: addiu       $s6, $s6, 0x4
    ctx->r22 = ADD32(ctx->r22, 0X4);
    skip_6:
    // 0x002310A0: addiu       $t3, $zero, 0x22
    ctx->r11 = ADD32(0, 0X22);
    // 0x002310A4: bnel        $v1, $t3, L_0023113C
    if (ctx->r3 != ctx->r11) {
        // 0x002310A8: addiu       $s6, $s6, 0x4
        ctx->r22 = ADD32(ctx->r22, 0X4);
            goto L_0023113C;
    }
    goto skip_7;
    // 0x002310A8: addiu       $s6, $s6, 0x4
    ctx->r22 = ADD32(ctx->r22, 0X4);
    skip_7:
    // 0x002310AC: lw          $a0, 0x478($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X478);
    // 0x002310B0: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x002310B4: addu        $a2, $s7, $zero
    ctx->r6 = ADD32(ctx->r23, 0);
    // 0x002310B8: jal         0x00230AB0
    // 0x002310BC: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    func_00230AB0(rdram, ctx);
        goto after_6;
    // 0x002310BC: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    after_6:
    // 0x002310C0: j           L_0023113C
    // 0x002310C4: addiu       $s6, $s6, 0x4
    ctx->r22 = ADD32(ctx->r22, 0X4);
        goto L_0023113C;
    // 0x002310C4: addiu       $s6, $s6, 0x4
    ctx->r22 = ADD32(ctx->r22, 0X4);
L_002310C8:
    // 0x002310C8: blez        $s5, L_00231138
    if (SIGNED(ctx->r21) <= 0) {
        // 0x002310CC: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_00231138;
    }
    // 0x002310CC: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x002310D0: addu        $s2, $s7, $zero
    ctx->r18 = ADD32(ctx->r23, 0);
L_002310D4:
    // 0x002310D4: lw          $s0, 0x0($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X0);
    // 0x002310D8: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x002310DC: beql        $v0, $fp, L_0023112C
    if (ctx->r2 == ctx->r30) {
        // 0x002310E0: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_0023112C;
    }
    goto skip_8;
    // 0x002310E0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_8:
    // 0x002310E4: addiu       $a0, $sp, 0x430
    ctx->r4 = ADD32(ctx->r29, 0X430);
    // 0x002310E8: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x002310EC: jal         0x0020EF2C
    // 0x002310F0: addiu       $a2, $s3, 0x4
    ctx->r6 = ADD32(ctx->r19, 0X4);
    func_0020EF2C(rdram, ctx);
        goto after_7;
    // 0x002310F0: addiu       $a2, $s3, 0x4
    ctx->r6 = ADD32(ctx->r19, 0X4);
    after_7:
    // 0x002310F4: lwc1        $f0, 0x430($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X430);
    // 0x002310F8: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x002310FC: lwc1        $f2, 0x434($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X434);
    // 0x00231100: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x00231104: lwc1        $f1, 0x438($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X438);
    // 0x00231108: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0023110C: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x00231110: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00231114: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x00231118: nop

    // 0x0023111C: bc1f        L_0023112C
    if (!c1cs) {
        // 0x00231120: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_0023112C;
    }
    // 0x00231120: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00231124: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
        turok2_patch_particle_nframes_cull(rdram, ctx);

    // 0x00231128: sh          $t4, 0x128($s0)
    MEM_H(0X128, ctx->r16) = ctx->r12;
L_0023112C:
    // 0x0023112C: slt         $v0, $s1, $s5
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x00231130: bne         $v0, $zero, L_002310D4
    if (ctx->r2 != 0) {
        // 0x00231134: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_002310D4;
    }
    // 0x00231134: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_00231138:
    // 0x00231138: addiu       $s6, $s6, 0x4
    ctx->r22 = ADD32(ctx->r22, 0X4);
L_0023113C:
    // 0x0023113C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x00231140: slt         $v0, $s4, $s5
    ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x00231144: bne         $v0, $zero, L_0023107C
    if (ctx->r2 != 0) {
        // 0x00231148: nop
    
            goto L_0023107C;
    }
    // 0x00231148: nop

L_0023114C:
    // 0x0023114C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00231150: swc1        $f21, 0x6D28($at)
    MEM_W(0X6D28, ctx->r1) = ctx->f_odd[(21 - 1) * 2];
L_00231154:
    // 0x00231154: lw          $ra, 0x464($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X464);
    // 0x00231158: lw          $fp, 0x460($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X460);
    // 0x0023115C: lw          $s7, 0x45C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X45C);
    // 0x00231160: lw          $s6, 0x458($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X458);
    // 0x00231164: lw          $s5, 0x454($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X454);
    // 0x00231168: lw          $s4, 0x450($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X450);
    // 0x0023116C: lw          $s3, 0x44C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44C);
    // 0x00231170: lw          $s2, 0x448($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X448);
    // 0x00231174: lw          $s1, 0x444($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X444);
    // 0x00231178: lw          $s0, 0x440($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X440);
    // 0x0023117C: ldc1        $f21, 0x470($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X470);
    // 0x00231180: ldc1        $f20, 0x468($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X468);
    // 0x00231184: jr          $ra
    // 0x00231188: addiu       $sp, $sp, 0x478
    ctx->r29 = ADD32(ctx->r29, 0X478);
    return;
    // 0x00231188: addiu       $sp, $sp, 0x478
    ctx->r29 = ADD32(ctx->r29, 0X478);
;}
RECOMP_FUNC void func_00210D34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00210D34: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x00210D38: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00210D3C: lwc1        $f1, 0x562C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X562C);
    // 0x00210D40: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x00210D44: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x00210D48: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x00210D4C: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    // 0x00210D50: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x00210D54: lwc1        $f0, 0x10($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X10);
    // 0x00210D58: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
    // 0x00210D5C: lwc1        $f0, 0x18($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X18);
    // 0x00210D60: swc1        $f0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f0.u32l;
    // 0x00210D64: lwc1        $f0, 0x14($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X14);
    // 0x00210D68: swc1        $f0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f0.u32l;
    // 0x00210D6C: lwc1        $f0, 0x20($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X20);
    // 0x00210D70: swc1        $f0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f0.u32l;
    // 0x00210D74: lwc1        $f0, 0x28($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X28);
    // 0x00210D78: swc1        $f0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f0.u32l;
    // 0x00210D7C: lwc1        $f0, 0x24($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X24);
    // 0x00210D80: swc1        $f0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f0.u32l;
    // 0x00210D84: lwc1        $f0, 0x30($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X30);
    // 0x00210D88: swc1        $f0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f0.u32l;
    // 0x00210D8C: lwc1        $f0, 0x38($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X38);
    // 0x00210D90: swc1        $f0, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f0.u32l;
    // 0x00210D94: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00210D98: lwc1        $f2, 0x34($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X34);
    // 0x00210D9C: swc1        $f1, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x00210DA0: swc1        $f0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f0.u32l;
    // 0x00210DA4: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
    // 0x00210DA8: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x00210DAC: jr          $ra
    // 0x00210DB0: swc1        $f2, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f2.u32l;
    return;
    // 0x00210DB0: swc1        $f2, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f2.u32l;
;}
RECOMP_FUNC void func_00228BF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00228BF8: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x00228BFC: lw          $v1, 0x10($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X10);
    // 0x00228C00: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x00228C04: lwc1        $f0, 0x10($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X10);
    // 0x00228C08: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
    // 0x00228C0C: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    // 0x00228C10: swc1        $f0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f0.u32l;
    // 0x00228C14: lwc1        $f0, 0xC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XC);
    // 0x00228C18: jr          $ra
    // 0x00228C1C: swc1        $f0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f0.u32l;
    return;
    // 0x00228C1C: swc1        $f0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_0027588C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027588C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00275890: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00275894: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00275898: addiu       $a0, $a0, 0x2A00
    ctx->r4 = ADD32(ctx->r4, 0X2A00);
    // 0x0027589C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002758A0: jal         0x00271570
    // 0x002758A4: nop

    func_00271570(rdram, ctx);
        goto after_0;
    // 0x002758A4: nop

    after_0:
    // 0x002758A8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002758AC: jr          $ra
    // 0x002758B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002758B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00446BD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00446BD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00446BDC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00446BE0: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x00446BE4: beq         $v0, $zero, L_00446BF4
    if (ctx->r2 == 0) {
        // 0x00446BE8: nop
    
            goto L_00446BF4;
    }
    // 0x00446BE8: nop

    // 0x00446BEC: jal         0x00243414
    // 0x00446BF0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00446BF0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_0:
L_00446BF4:
    // 0x00446BF4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00446BF8: jr          $ra
    // 0x00446BFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00446BFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00280C28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00280C28: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
    // 0x00280C2C: lwc1        $f0, 0x20($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X20);
    // 0x00280C30: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00280C34: lwc1        $f1, -0x642C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X642C);
    // 0x00280C38: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00280C3C: lwc1        $f2, -0x6428($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X6428);
    // 0x00280C40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00280C44: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00280C48: addiu       $v0, $a0, 0x24
    ctx->r2 = ADD32(ctx->r4, 0X24);
    // 0x00280C4C: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x00280C50: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x00280C54: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x00280C58: sw          $zero, 0x10($a0)
    MEM_W(0X10, ctx->r4) = 0;
    // 0x00280C5C: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    // 0x00280C60: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x00280C64: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    // 0x00280C68: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x00280C6C: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    // 0x00280C70: swc1        $f0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f0.u32l;
    // 0x00280C74: swc1        $f1, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x00280C78: sw          $zero, 0x34($a0)
    MEM_W(0X34, ctx->r4) = 0;
    // 0x00280C7C: swc1        $f0, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f0.u32l;
    // 0x00280C80: swc1        $f2, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f2.u32l;
    // 0x00280C84: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00280C88: lw          $v0, 0x6D00($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D00);
    // 0x00280C8C: jr          $ra
    // 0x00280C90: sw          $v0, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r2;
    return;
    // 0x00280C90: sw          $v0, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_0028AFF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028AFF0: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x0028AFF4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0028AFF8: bne         $v1, $v0, L_0028B020
    if (ctx->r3 != ctx->r2) {
        // 0x0028AFFC: nop
    
            goto L_0028B020;
    }
    // 0x0028AFFC: nop

    // 0x0028B000: lw          $v0, 0x2EC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2EC);
    // 0x0028B004: beql        $v0, $zero, L_0028B010
    if (ctx->r2 == 0) {
        // 0x0028B008: sw          $a1, 0x2E4($a0)
        MEM_W(0X2E4, ctx->r4) = ctx->r5;
            goto L_0028B010;
    }
    goto skip_0;
    // 0x0028B008: sw          $a1, 0x2E4($a0)
    MEM_W(0X2E4, ctx->r4) = ctx->r5;
    skip_0:
    // 0x0028B00C: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
L_0028B010:
    // 0x0028B010: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0028B014: sw          $a1, 0x2EC($a0)
    MEM_W(0X2EC, ctx->r4) = ctx->r5;
    // 0x0028B018: j           L_0028B034
    // 0x0028B01C: sw          $v0, 0x300($a0)
    MEM_W(0X300, ctx->r4) = ctx->r2;
        goto L_0028B034;
    // 0x0028B01C: sw          $v0, 0x300($a0)
    MEM_W(0X300, ctx->r4) = ctx->r2;
L_0028B020:
    // 0x0028B020: lw          $v0, 0x2F0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2F0);
    // 0x0028B024: beql        $v0, $zero, L_0028B030
    if (ctx->r2 == 0) {
        // 0x0028B028: sw          $a1, 0x2E8($a0)
        MEM_W(0X2E8, ctx->r4) = ctx->r5;
            goto L_0028B030;
    }
    goto skip_1;
    // 0x0028B028: sw          $a1, 0x2E8($a0)
    MEM_W(0X2E8, ctx->r4) = ctx->r5;
    skip_1:
    // 0x0028B02C: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
L_0028B030:
    // 0x0028B030: sw          $a1, 0x2F0($a0)
    MEM_W(0X2F0, ctx->r4) = ctx->r5;
L_0028B034:
    // 0x0028B034: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x0028B038: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x0028B03C: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x0028B040: jr          $ra
    // 0x0028B044: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    return;
    // 0x0028B044: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_004526E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00419748:
    // 0x004526E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004526EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004526F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x004526F4: jal         0x002859DC
    // 0x004526F8: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_002859DC(rdram, ctx);
        goto after_0;
    // 0x004526F8: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x004526FC: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x00452700: beq         $v0, $zero, L_00452734
    if (ctx->r2 == 0) {
        // 0x00452704: lui         $v1, 0xFEFF
        ctx->r3 = S32(0XFEFF << 16);
            goto L_00452734;
    }
    // 0x00452704: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x00452708: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x0045270C: lw          $v0, 0x58($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X58);
    // 0x00452710: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00452714: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00452718: sw          $v0, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->r2;
    // 0x0045271C: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
    // 0x00452720: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00452724: bne         $v1, $v0, L_00452748
    if (ctx->r3 != ctx->r2) {
        // 0x00452728: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00452748;
    }
    // 0x00452728: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045272C: j           L_00419748
    // 0x00452730: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    entry_00419748(rdram, ctx);
    return;
    // 0x00452730: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
L_00452734:
    // 0x00452734: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x00452738: lw          $v1, 0x58($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X58);
    // 0x0045273C: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x00452740: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x00452744: sw          $v1, 0x58($v0)
    MEM_W(0X58, ctx->r2) = ctx->r3;
L_00452748:
    // 0x00452748: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0045274C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00452750: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00452754: jr          $ra
    // 0x00452758: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00452758: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00293034(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00293034: mtc1        $a2, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r6;
    // 0x00293038: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0029303C: mtc1        $a1, $f2
    ctx->f2.u32l = ctx->r5;
    // 0x00293040: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x00293044: bgezl       $a2, L_0029305C
    if (SIGNED(ctx->r6) >= 0) {
        // 0x00293048: cvt.s.d     $f1, $f1
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f1.fl = CVT_S_D(ctx->f1.d);
            goto L_0029305C;
    }
    goto skip_0;
    // 0x00293048: cvt.s.d     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f1.fl = CVT_S_D(ctx->f1.d);
    skip_0:
    // 0x0029304C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00293050: ldc1        $f0, -0x5BD8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X5BD8);
    // 0x00293054: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x00293058: cvt.s.d     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f1.fl = CVT_S_D(ctx->f1.d);
L_0029305C:
    // 0x0029305C: mul.s       $f1, $f2, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x00293060: lh          $v0, 0x18($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X18);
    // 0x00293064: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00293068: lwc1        $f2, -0x5BD0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X5BD0);
    // 0x0029306C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00293070: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00293074: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00293078: jr          $ra
    // 0x0029307C: div.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
    return;
    // 0x0029307C: div.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
;}
RECOMP_FUNC void func_0045FBA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045FBA8: blez        $a2, L_0045FBEC
    if (SIGNED(ctx->r6) <= 0) {
        // 0x0045FBAC: addu        $a3, $zero, $zero
        ctx->r7 = ADD32(0, 0);
            goto L_0045FBEC;
    }
    // 0x0045FBAC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0045FBB0: addiu       $t0, $zero, 0x7E
    ctx->r8 = ADD32(0, 0X7E);
L_0045FBB4:
    // 0x0045FBB4: addu        $v1, $a0, $a3
    ctx->r3 = ADD32(ctx->r4, ctx->r7);
    // 0x0045FBB8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x0045FBBC: sltiu       $v0, $v0, 0x42
    ctx->r2 = ctx->r2 < 0X42 ? 1 : 0;
    // 0x0045FBC0: beql        $v0, $zero, L_0045FBDC
    if (ctx->r2 == 0) {
        // 0x0045FBC4: sb          $t0, 0x0($a1)
        MEM_B(0X0, ctx->r5) = ctx->r8;
            goto L_0045FBDC;
    }
    goto skip_0;
    // 0x0045FBC4: sb          $t0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r8;
    skip_0:
    // 0x0045FBC8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x0045FBCC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045FBD0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0045FBD4: lbu         $v0, 0x222C($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X222C);
    // 0x0045FBD8: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
L_0045FBDC:
    // 0x0045FBDC: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x0045FBE0: slt         $v0, $a3, $a2
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x0045FBE4: bne         $v0, $zero, L_0045FBB4
    if (ctx->r2 != 0) {
        // 0x0045FBE8: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_0045FBB4;
    }
    // 0x0045FBE8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_0045FBEC:
    // 0x0045FBEC: jr          $ra
    // 0x0045FBF0: nop

    return;
    // 0x0045FBF0: nop

;}
RECOMP_FUNC void func_0023D050(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023D050: addiu       $sp, $sp, -0x560
    ctx->r29 = ADD32(ctx->r29, -0X560);
    // 0x0023D054: sw          $s6, 0x550($sp)
    MEM_W(0X550, ctx->r29) = ctx->r22;
    // 0x0023D058: addu        $s6, $a0, $zero
    ctx->r22 = ADD32(ctx->r4, 0);
    // 0x0023D05C: sw          $ra, 0x55C($sp)
    MEM_W(0X55C, ctx->r29) = ctx->r31;
    // 0x0023D060: sw          $fp, 0x558($sp)
    MEM_W(0X558, ctx->r29) = ctx->r30;
    // 0x0023D064: sw          $s7, 0x554($sp)
    MEM_W(0X554, ctx->r29) = ctx->r23;
    // 0x0023D068: sw          $s5, 0x54C($sp)
    MEM_W(0X54C, ctx->r29) = ctx->r21;
    // 0x0023D06C: sw          $s4, 0x548($sp)
    MEM_W(0X548, ctx->r29) = ctx->r20;
    // 0x0023D070: sw          $s3, 0x544($sp)
    MEM_W(0X544, ctx->r29) = ctx->r19;
    // 0x0023D074: sw          $s2, 0x540($sp)
    MEM_W(0X540, ctx->r29) = ctx->r18;
    // 0x0023D078: sw          $s1, 0x53C($sp)
    MEM_W(0X53C, ctx->r29) = ctx->r17;
    // 0x0023D07C: sw          $s0, 0x538($sp)
    MEM_W(0X538, ctx->r29) = ctx->r16;
    // 0x0023D080: lw          $a0, 0x4($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X4);
    // 0x0023D084: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0023D088: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x0023D08C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0023D090: beq         $v0, $zero, L_0023D4A4
    if (ctx->r2 == 0) {
        // 0x0023D094: nop
    
            goto L_0023D4A4;
    }
    // 0x0023D094: nop

    // 0x0023D098: lb          $v0, 0x5($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X5);
    // 0x0023D09C: beq         $v0, $zero, L_0023D4A4
    if (ctx->r2 == 0) {
        // 0x0023D0A0: addiu       $s0, $s6, 0x4C
        ctx->r16 = ADD32(ctx->r22, 0X4C);
            goto L_0023D4A4;
    }
    // 0x0023D0A0: addiu       $s0, $s6, 0x4C
    ctx->r16 = ADD32(ctx->r22, 0X4C);
    // 0x0023D0A4: lw          $v0, 0x0($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X0);
    // 0x0023D0A8: lwc1        $f0, 0x4C($s6)
    ctx->f0.u32l = MEM_W(ctx->r22, 0X4C);
    // 0x0023D0AC: lwc1        $f1, 0x4($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X4);
    // 0x0023D0B0: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x0023D0B4: nop

    // 0x0023D0B8: bc1f        L_0023D0F0
    if (!c1cs) {
        // 0x0023D0BC: addiu       $s1, $v0, 0x4
        ctx->r17 = ADD32(ctx->r2, 0X4);
            goto L_0023D0F0;
    }
    // 0x0023D0BC: addiu       $s1, $v0, 0x4
    ctx->r17 = ADD32(ctx->r2, 0X4);
    // 0x0023D0C0: lwc1        $f1, 0x4($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X4);
    // 0x0023D0C4: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x0023D0C8: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x0023D0CC: nop

    // 0x0023D0D0: bc1fl       L_0023D0F4
    if (!c1cs) {
        // 0x0023D0D4: sw          $s6, 0x50($sp)
        MEM_W(0X50, ctx->r29) = ctx->r22;
            goto L_0023D0F4;
    }
    goto skip_0;
    // 0x0023D0D4: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    skip_0:
    // 0x0023D0D8: lwc1        $f1, 0x8($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X8);
    // 0x0023D0DC: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0023D0E0: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x0023D0E4: nop

    // 0x0023D0E8: bc1t        L_0023D4A4
    if (c1cs) {
        // 0x0023D0EC: nop
    
            goto L_0023D4A4;
    }
    // 0x0023D0EC: nop

L_0023D0F0:
    // 0x0023D0F0: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
L_0023D0F4:
    // 0x0023D0F4: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x0023D0F8: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x0023D0FC: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x0023D100: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x0023D104: lwc1        $f1, 0x8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X8);
    // 0x0023D108: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023D10C: lwc1        $f0, 0x66C0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X66C0);
    // 0x0023D110: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x0023D114: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x0023D118: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x0023D11C: swc1        $f1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0023D120: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x0023D124: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    // 0x0023D128: lw          $a3, 0x8($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X8);
    // 0x0023D12C: jal         0x0023DCBC
    // 0x0023D130: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    func_0023DCBC(rdram, ctx);
        goto after_0;
    // 0x0023D130: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    after_0:
    // 0x0023D134: lwc1        $f1, 0x58($s6)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r22, 0X58);
    // 0x0023D138: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0023D13C: lwc1        $f0, 0x5C($s6)
    ctx->f0.u32l = MEM_W(ctx->r22, 0X5C);
    // 0x0023D140: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0023D144: lwc1        $f12, 0x60($s6)
    ctx->f12.u32l = MEM_W(ctx->r22, 0X60);
    // 0x0023D148: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0023D14C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0023D150: jal         0x00298470
    // 0x0023D154: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_1;
    // 0x0023D154: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_1:
    // 0x0023D158: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0023D15C: swc1        $f0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f0.u32l;
    // 0x0023D160: lwc1        $f1, 0x8($s6)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r22, 0X8);
    // 0x0023D164: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0023D168: swc1        $f0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f0.u32l;
    // 0x0023D16C: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x0023D170: lwc1        $f0, 0x0($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X0);
    // 0x0023D174: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x0023D178: nop

    // 0x0023D17C: bc1fl       L_0023D184
    if (!c1cs) {
        // 0x0023D180: mov.s       $f4, $f0
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.fl = ctx->f0.fl;
            goto L_0023D184;
    }
    goto skip_1;
    // 0x0023D180: mov.s       $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.fl = ctx->f0.fl;
    skip_1:
L_0023D184:
    // 0x0023D184: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x0023D188: lwc1        $f3, 0x0($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0X0);
    // 0x0023D18C: lwc1        $f0, 0x0($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X0);
    // 0x0023D190: c.le.s      $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f0.fl <= ctx->f3.fl;
    // 0x0023D194: nop

    // 0x0023D198: bc1fl       L_0023D1A0
    if (!c1cs) {
        // 0x0023D19C: mov.s       $f3, $f0
        CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f3.fl = ctx->f0.fl;
            goto L_0023D1A0;
    }
    goto skip_2;
    // 0x0023D19C: mov.s       $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f3.fl = ctx->f0.fl;
    skip_2:
L_0023D1A0:
    // 0x0023D1A0: swc1        $f3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x0023D1A4: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x0023D1A8: lwc1        $f1, 0x4($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X4);
    // 0x0023D1AC: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0023D1B0: nop

    // 0x0023D1B4: bc1fl       L_0023D1BC
    if (!c1cs) {
        // 0x0023D1B8: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0023D1BC;
    }
    goto skip_3;
    // 0x0023D1B8: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_3:
L_0023D1BC:
    // 0x0023D1BC: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x0023D1C0: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x0023D1C4: lwc1        $f1, 0x4($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X4);
    // 0x0023D1C8: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0023D1CC: nop

    // 0x0023D1D0: bc1fl       L_0023D1D8
    if (!c1cs) {
        // 0x0023D1D4: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0023D1D8;
    }
    goto skip_4;
    // 0x0023D1D4: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_4:
L_0023D1D8:
    // 0x0023D1D8: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x0023D1DC: lwc1        $f2, 0x8($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0023D1E0: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x0023D1E4: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x0023D1E8: nop

    // 0x0023D1EC: bc1fl       L_0023D1F4
    if (!c1cs) {
        // 0x0023D1F0: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_0023D1F4;
    }
    goto skip_5;
    // 0x0023D1F0: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_5:
L_0023D1F4:
    // 0x0023D1F4: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    // 0x0023D1F8: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0023D1FC: lwc1        $f1, 0x8($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X8);
    // 0x0023D200: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0023D204: nop

    // 0x0023D208: bc1fl       L_0023D210
    if (!c1cs) {
        // 0x0023D20C: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0023D210;
    }
    goto skip_6;
    // 0x0023D20C: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_6:
L_0023D210:
    // 0x0023D210: addiu       $s3, $sp, 0x130
    ctx->r19 = ADD32(ctx->r29, 0X130);
    // 0x0023D214: addu        $s7, $zero, $zero
    ctx->r23 = ADD32(0, 0);
    // 0x0023D218: lui         $v1, 0x8010
    ctx->r3 = S32(0X8010 << 16);
    // 0x0023D21C: addiu       $v1, $v1, -0x7ADC
    ctx->r3 = ADD32(ctx->r3, -0X7ADC);
    // 0x0023D220: lw          $t0, -0x4($v1)
    ctx->r8 = MEM_W(ctx->r3, -0X4);
    // 0x0023D224: addu        $s4, $s7, $zero
    ctx->r20 = ADD32(ctx->r23, 0);
    // 0x0023D228: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x0023D22C: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    // 0x0023D230: swc1        $f3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x0023D234: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    // 0x0023D238: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    // 0x0023D23C: blez        $t0, L_0023D410
    if (SIGNED(ctx->r8) <= 0) {
        // 0x0023D240: sw          $t0, 0x534($sp)
        MEM_W(0X534, ctx->r29) = ctx->r8;
            goto L_0023D410;
    }
    // 0x0023D240: sw          $t0, 0x534($sp)
    MEM_W(0X534, ctx->r29) = ctx->r8;
    // 0x0023D244: lw          $v0, 0x9C($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X9C);
    // 0x0023D248: bne         $v0, $zero, L_0023D410
    if (ctx->r2 != 0) {
        // 0x0023D24C: nop
    
            goto L_0023D410;
    }
    // 0x0023D24C: nop

    // 0x0023D250: addu        $s5, $v1, $zero
    ctx->r21 = ADD32(ctx->r3, 0);
L_0023D254:
    // 0x0023D254: lw          $a1, 0x4($s5)
    ctx->r5 = MEM_W(ctx->r21, 0X4);
    // 0x0023D258: lwc1        $f0, 0x40($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X40);
    // 0x0023D25C: lwc1        $f1, 0x8($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X8);
    // 0x0023D260: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0023D264: nop

    // 0x0023D268: bc1f        L_0023D3F0
    if (!c1cs) {
        // 0x0023D26C: nop
    
            goto L_0023D3F0;
    }
    // 0x0023D26C: nop

    // 0x0023D270: lwc1        $f1, 0x0($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X0);
    // 0x0023D274: lwc1        $f0, 0x48($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X48);
    // 0x0023D278: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0023D27C: nop

    // 0x0023D280: bc1f        L_0023D3F0
    if (!c1cs) {
        // 0x0023D284: nop
    
            goto L_0023D3F0;
    }
    // 0x0023D284: nop

    // 0x0023D288: lwc1        $f1, 0xC($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0XC);
    // 0x0023D28C: lwc1        $f0, 0x44($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X44);
    // 0x0023D290: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0023D294: nop

    // 0x0023D298: bc1f        L_0023D3F0
    if (!c1cs) {
        // 0x0023D29C: nop
    
            goto L_0023D3F0;
    }
    // 0x0023D29C: nop

    // 0x0023D2A0: lwc1        $f1, 0x4($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X4);
    // 0x0023D2A4: lwc1        $f0, 0x4C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x0023D2A8: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0023D2AC: nop

    // 0x0023D2B0: bc1f        L_0023D3F0
    if (!c1cs) {
        // 0x0023D2B4: addu        $a0, $s6, $zero
        ctx->r4 = ADD32(ctx->r22, 0);
            goto L_0023D3F0;
    }
    // 0x0023D2B4: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x0023D2B8: jal         0x0023A968
    // 0x0023D2BC: addiu       $a2, $sp, 0x530
    ctx->r6 = ADD32(ctx->r29, 0X530);
    func_0023A968(rdram, ctx);
        goto after_2;
    // 0x0023D2BC: addiu       $a2, $sp, 0x530
    ctx->r6 = ADD32(ctx->r29, 0X530);
    after_2:
    // 0x0023D2C0: beq         $v0, $zero, L_0023D3F0
    if (ctx->r2 == 0) {
        // 0x0023D2C4: nop
    
            goto L_0023D3F0;
    }
    // 0x0023D2C4: nop

    // 0x0023D2C8: lw          $v0, 0x0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X0);
    // 0x0023D2CC: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x0023D2D0: jal         0x002017D4
    // 0x0023D2D4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x0023D2D4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x0023D2D8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0023D2DC: lw          $s1, 0x4($a1)
    ctx->r17 = MEM_W(ctx->r5, 0X4);
    // 0x0023D2E0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0023D2E4: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x0023D2E8: beq         $s1, $v0, L_0023D3F0
    if (ctx->r17 == ctx->r2) {
        // 0x0023D2EC: addiu       $s2, $a1, 0x8
        ctx->r18 = ADD32(ctx->r5, 0X8);
            goto L_0023D3F0;
    }
    // 0x0023D2EC: addiu       $s2, $a1, 0x8
    ctx->r18 = ADD32(ctx->r5, 0X8);
    // 0x0023D2F0: lw          $v0, 0x9C($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X9C);
    // 0x0023D2F4: bne         $v0, $zero, L_0023D3F0
    if (ctx->r2 != 0) {
        // 0x0023D2F8: slti        $v0, $s4, 0x80
        ctx->r2 = SIGNED(ctx->r20) < 0X80 ? 1 : 0;
            goto L_0023D3F0;
    }
    // 0x0023D2F8: slti        $v0, $s4, 0x80
    ctx->r2 = SIGNED(ctx->r20) < 0X80 ? 1 : 0;
    // 0x0023D2FC: addiu       $fp, $zero, -0x1
    ctx->r30 = ADD32(0, -0X1);
    // 0x0023D300: addiu       $s0, $a1, 0x70
    ctx->r16 = ADD32(ctx->r5, 0X70);
L_0023D304:
    // 0x0023D304: beq         $v0, $zero, L_0023D3F0
    if (ctx->r2 == 0) {
        // 0x0023D308: nop
    
            goto L_0023D3F0;
    }
    // 0x0023D308: nop

    // 0x0023D30C: lhu         $v0, 0x20($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X20);
    // 0x0023D310: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x0023D314: bnel        $v0, $zero, L_0023D3D8
    if (ctx->r2 != 0) {
        // 0x0023D318: addiu       $s0, $s0, 0x90
        ctx->r16 = ADD32(ctx->r16, 0X90);
            goto L_0023D3D8;
    }
    goto skip_7;
    // 0x0023D318: addiu       $s0, $s0, 0x90
    ctx->r16 = ADD32(ctx->r16, 0X90);
    skip_7:
    // 0x0023D31C: lwc1        $f1, 0x34($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X34);
    // 0x0023D320: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x0023D324: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0023D328: nop

    // 0x0023D32C: bc1fl       L_0023D3D8
    if (!c1cs) {
        // 0x0023D330: addiu       $s0, $s0, 0x90
        ctx->r16 = ADD32(ctx->r16, 0X90);
            goto L_0023D3D8;
    }
    goto skip_8;
    // 0x0023D330: addiu       $s0, $s0, 0x90
    ctx->r16 = ADD32(ctx->r16, 0X90);
    skip_8:
    // 0x0023D334: lwc1        $f1, 0x28($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x0023D338: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x0023D33C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0023D340: nop

    // 0x0023D344: bc1fl       L_0023D3D8
    if (!c1cs) {
        // 0x0023D348: addiu       $s0, $s0, 0x90
        ctx->r16 = ADD32(ctx->r16, 0X90);
            goto L_0023D3D8;
    }
    goto skip_9;
    // 0x0023D348: addiu       $s0, $s0, 0x90
    ctx->r16 = ADD32(ctx->r16, 0X90);
    skip_9:
    // 0x0023D34C: lwc1        $f1, 0x3C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X3C);
    // 0x0023D350: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0023D354: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0023D358: nop

    // 0x0023D35C: bc1fl       L_0023D3D8
    if (!c1cs) {
        // 0x0023D360: addiu       $s0, $s0, 0x90
        ctx->r16 = ADD32(ctx->r16, 0X90);
            goto L_0023D3D8;
    }
    goto skip_10;
    // 0x0023D360: addiu       $s0, $s0, 0x90
    ctx->r16 = ADD32(ctx->r16, 0X90);
    skip_10:
    // 0x0023D364: lwc1        $f1, 0x30($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x0023D368: lwc1        $f0, 0x14($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X14);
    // 0x0023D36C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0023D370: nop

    // 0x0023D374: bc1fl       L_0023D3D8
    if (!c1cs) {
        // 0x0023D378: addiu       $s0, $s0, 0x90
        ctx->r16 = ADD32(ctx->r16, 0X90);
            goto L_0023D3D8;
    }
    goto skip_11;
    // 0x0023D378: addiu       $s0, $s0, 0x90
    ctx->r16 = ADD32(ctx->r16, 0X90);
    skip_11:
    // 0x0023D37C: lwc1        $f1, 0x38($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x0023D380: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x0023D384: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0023D388: nop

    // 0x0023D38C: bc1fl       L_0023D3D8
    if (!c1cs) {
        // 0x0023D390: addiu       $s0, $s0, 0x90
        ctx->r16 = ADD32(ctx->r16, 0X90);
            goto L_0023D3D8;
    }
    goto skip_12;
    // 0x0023D390: addiu       $s0, $s0, 0x90
    ctx->r16 = ADD32(ctx->r16, 0X90);
    skip_12:
    // 0x0023D394: lwc1        $f1, 0x2C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X2C);
    // 0x0023D398: lwc1        $f0, 0x10($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X10);
    // 0x0023D39C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0023D3A0: nop

    // 0x0023D3A4: bc1f        L_0023D3D4
    if (!c1cs) {
        // 0x0023D3A8: addu        $a0, $s6, $zero
        ctx->r4 = ADD32(ctx->r22, 0);
            goto L_0023D3D4;
    }
    // 0x0023D3A8: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x0023D3AC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0023D3B0: jal         0x0023A640
    // 0x0023D3B4: addiu       $a2, $sp, 0x530
    ctx->r6 = ADD32(ctx->r29, 0X530);
    func_0023A640(rdram, ctx);
        goto after_4;
    // 0x0023D3B4: addiu       $a2, $sp, 0x530
    ctx->r6 = ADD32(ctx->r29, 0X530);
    after_4:
    // 0x0023D3B8: beql        $v0, $zero, L_0023D3D8
    if (ctx->r2 == 0) {
        // 0x0023D3BC: addiu       $s0, $s0, 0x90
        ctx->r16 = ADD32(ctx->r16, 0X90);
            goto L_0023D3D8;
    }
    goto skip_13;
    // 0x0023D3BC: addiu       $s0, $s0, 0x90
    ctx->r16 = ADD32(ctx->r16, 0X90);
    skip_13:
    // 0x0023D3C0: lwc1        $f0, 0x530($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X530);
    // 0x0023D3C4: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x0023D3C8: sw          $s2, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r18;
    // 0x0023D3CC: swc1        $f0, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->f0.u32l;
    // 0x0023D3D0: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
L_0023D3D4:
    // 0x0023D3D4: addiu       $s0, $s0, 0x90
    ctx->r16 = ADD32(ctx->r16, 0X90);
L_0023D3D8:
    // 0x0023D3D8: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x0023D3DC: beq         $s1, $fp, L_0023D3F0
    if (ctx->r17 == ctx->r30) {
        // 0x0023D3E0: addiu       $s2, $s2, 0x90
        ctx->r18 = ADD32(ctx->r18, 0X90);
            goto L_0023D3F0;
    }
    // 0x0023D3E0: addiu       $s2, $s2, 0x90
    ctx->r18 = ADD32(ctx->r18, 0X90);
    // 0x0023D3E4: lw          $v0, 0x9C($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X9C);
    // 0x0023D3E8: beq         $v0, $zero, L_0023D304
    if (ctx->r2 == 0) {
        // 0x0023D3EC: slti        $v0, $s4, 0x80
        ctx->r2 = SIGNED(ctx->r20) < 0X80 ? 1 : 0;
            goto L_0023D304;
    }
    // 0x0023D3EC: slti        $v0, $s4, 0x80
    ctx->r2 = SIGNED(ctx->r20) < 0X80 ? 1 : 0;
L_0023D3F0:
    // 0x0023D3F0: lw          $t0, 0x534($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X534);
    // 0x0023D3F4: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x0023D3F8: slt         $v0, $s7, $t0
    ctx->r2 = SIGNED(ctx->r23) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x0023D3FC: beq         $v0, $zero, L_0023D410
    if (ctx->r2 == 0) {
        // 0x0023D400: addiu       $s5, $s5, 0x8
        ctx->r21 = ADD32(ctx->r21, 0X8);
            goto L_0023D410;
    }
    // 0x0023D400: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    // 0x0023D404: lw          $v0, 0x9C($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X9C);
    // 0x0023D408: beq         $v0, $zero, L_0023D254
    if (ctx->r2 == 0) {
        // 0x0023D40C: nop
    
            goto L_0023D254;
    }
    // 0x0023D40C: nop

L_0023D410:
    // 0x0023D410: beq         $s4, $zero, L_0023D4A4
    if (ctx->r20 == 0) {
        // 0x0023D414: addiu       $s0, $sp, 0x130
        ctx->r16 = ADD32(ctx->r29, 0X130);
            goto L_0023D4A4;
    }
    // 0x0023D414: addiu       $s0, $sp, 0x130
    ctx->r16 = ADD32(ctx->r29, 0X130);
    // 0x0023D418: lui         $v0, 0x24
    ctx->r2 = S32(0X24 << 16);
    // 0x0023D41C: addiu       $v0, $v0, -0x24A4
    ctx->r2 = ADD32(ctx->r2, -0X24A4);
    // 0x0023D420: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0023D424: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0023D428: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x0023D42C: lui         $a3, 0x24
    ctx->r7 = S32(0X24 << 16);
    // 0x0023D430: addiu       $a3, $a3, -0x2468
    ctx->r7 = ADD32(ctx->r7, -0X2468);
    // 0x0023D434: jal         0x00226F90
    // 0x0023D438: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    entry_00226F90(rdram, ctx);
        goto after_5;
    // 0x0023D438: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x0023D43C: addu        $s3, $s0, $zero
    ctx->r19 = ADD32(ctx->r16, 0);
    // 0x0023D440: blez        $s4, L_0023D4A4
    if (SIGNED(ctx->r20) <= 0) {
        // 0x0023D444: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_0023D4A4;
    }
    // 0x0023D444: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0023D448: addiu       $s5, $zero, 0x9
    ctx->r21 = ADD32(0, 0X9);
    // 0x0023D44C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_0023D450:
    // 0x0023D450: lwc1        $f1, 0x4($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X4);
    // 0x0023D454: lwc1        $f0, 0x8($s6)
    ctx->f0.u32l = MEM_W(ctx->r22, 0X8);
    // 0x0023D458: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0023D45C: nop

    // 0x0023D460: bc1f        L_0023D4A4
    if (!c1cs) {
        // 0x0023D464: nop
    
            goto L_0023D4A4;
    }
    // 0x0023D464: nop

    // 0x0023D468: lw          $s2, 0x0($s3)
    ctx->r18 = MEM_W(ctx->r19, 0X0);
    // 0x0023D46C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0023D470: jal         0x00245724
    // 0x0023D474: sw          $a0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r4;
    func_00245724(rdram, ctx);
        goto after_6;
    // 0x0023D474: sw          $a0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r4;
    after_6:
    // 0x0023D478: bne         $v0, $s5, L_0023D488
    if (ctx->r2 != ctx->r21) {
        // 0x0023D47C: sw          $v0, 0xA0($sp)
        MEM_W(0XA0, ctx->r29) = ctx->r2;
            goto L_0023D488;
    }
    // 0x0023D47C: sw          $v0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r2;
    // 0x0023D480: j           L_0023D48C
    // 0x0023D484: sw          $s0, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r16;
        goto L_0023D48C;
    // 0x0023D484: sw          $s0, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r16;
L_0023D488:
    // 0x0023D488: sw          $zero, 0x128($sp)
    MEM_W(0X128, ctx->r29) = 0;
L_0023D48C:
    // 0x0023D48C: jal         0x0023DBBC
    // 0x0023D490: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    func_0023DBBC(rdram, ctx);
        goto after_7;
    // 0x0023D490: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    after_7:
    // 0x0023D494: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0023D498: slt         $v0, $s1, $s4
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x0023D49C: bne         $v0, $zero, L_0023D450
    if (ctx->r2 != 0) {
        // 0x0023D4A0: addiu       $s3, $s3, 0x8
        ctx->r19 = ADD32(ctx->r19, 0X8);
            goto L_0023D450;
    }
    // 0x0023D4A0: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
L_0023D4A4:
    // 0x0023D4A4: lw          $ra, 0x55C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X55C);
    // 0x0023D4A8: lw          $fp, 0x558($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X558);
    // 0x0023D4AC: lw          $s7, 0x554($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X554);
    // 0x0023D4B0: lw          $s6, 0x550($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X550);
    // 0x0023D4B4: lw          $s5, 0x54C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54C);
    // 0x0023D4B8: lw          $s4, 0x548($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X548);
    // 0x0023D4BC: lw          $s3, 0x544($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X544);
    // 0x0023D4C0: lw          $s2, 0x540($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X540);
    // 0x0023D4C4: lw          $s1, 0x53C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X53C);
    // 0x0023D4C8: lw          $s0, 0x538($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X538);
    // 0x0023D4CC: jr          $ra
    // 0x0023D4D0: addiu       $sp, $sp, 0x560
    ctx->r29 = ADD32(ctx->r29, 0X560);
    return;
    // 0x0023D4D0: addiu       $sp, $sp, 0x560
    ctx->r29 = ADD32(ctx->r29, 0X560);
;}
RECOMP_FUNC void func_0041D4E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041D4E4:
    // 0x0041D4E4: lbu         $a3, 0x0($a0)
    ctx->r7 = MEM_BU(ctx->r4, 0X0);
    // 0x0041D4E8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0041D4EC: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x0041D4F0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0041D4F4: andi        $v1, $a3, 0xFF
    ctx->r3 = ctx->r7 & 0XFF;
    // 0x0041D4F8: bne         $v1, $v0, L_0041D510
    if (ctx->r3 != ctx->r2) {
        // 0x0041D4FC: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_0041D510;
    }
    // 0x0041D4FC: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x0041D500: beql        $v1, $zero, L_0041D514
    if (ctx->r3 == 0) {
        // 0x0041D504: xor         $v0, $v0, $a3
        ctx->r2 = ctx->r2 ^ ctx->r7;
            goto L_0041D514;
    }
    goto skip_0;
    // 0x0041D504: xor         $v0, $v0, $a3
    ctx->r2 = ctx->r2 ^ ctx->r7;
    skip_0:
    // 0x0041D508: beq         $a2, $zero, L_0041D4E4
    if (ctx->r6 == 0) {
        // 0x0041D50C: nop
    
            goto L_0041D4E4;
    }
    // 0x0041D50C: nop

L_0041D510:
    // 0x0041D510: xor         $v0, $v0, $a3
    ctx->r2 = ctx->r2 ^ ctx->r7;
L_0041D514:
    // 0x0041D514: jr          $ra
    // 0x0041D518: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    return;
    // 0x0041D518: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
;}
RECOMP_FUNC void func_0026EA48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026EA48: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0026EA4C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x0026EA50: lwc1        $f0, 0x2C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x0026EA54: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0026EA58: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0026EA5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0026EA60: sdc1        $f21, 0x20($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X20, ctx->r29);
    // 0x0026EA64: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x0026EA68: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x0026EA6C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x0026EA70: lwc1        $f1, 0xC($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XC);
    // 0x0026EA74: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0026EA78: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0026EA7C: lwc1        $f2, 0x30($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X30);
    // 0x0026EA80: lwc1        $f1, 0x10($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X10);
    // 0x0026EA84: sub.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f1.fl;
    // 0x0026EA88: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x0026EA8C: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    // 0x0026EA90: lwc1        $f1, 0x14($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X14);
    // 0x0026EA94: sub.s       $f12, $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f1.fl;
    // 0x0026EA98: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0026EA9C: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0026EAA0: jal         0x00298470
    // 0x0026EAA4: add.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_0;
    // 0x0026EAA4: add.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f12.fl;
    after_0:
    // 0x0026EAA8: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0026EAAC: c.eq.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl == ctx->f1.fl;
    // 0x0026EAB0: nop

    // 0x0026EAB4: bc1t        L_0026EAD0
    if (c1cs) {
        // 0x0026EAB8: nop
    
            goto L_0026EAD0;
    }
    // 0x0026EAB8: nop

    // 0x0026EABC: lwc1        $f2, 0x18($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X18);
    // 0x0026EAC0: c.eq.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl == ctx->f1.fl;
    // 0x0026EAC4: nop

    // 0x0026EAC8: bc1f        L_0026EAE0
    if (!c1cs) {
        // 0x0026EACC: nop
    
            goto L_0026EAE0;
    }
    // 0x0026EACC: nop

L_0026EAD0:
    // 0x0026EAD0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026EAD4: lwc1        $f21, -0x7FA4($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, -0X7FA4);
    // 0x0026EAD8: j           L_0026EB00
    // 0x0026EADC: nop

        goto L_0026EB00;
    // 0x0026EADC: nop

L_0026EAE0:
    // 0x0026EAE0: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x0026EAE4: nop

    // 0x0026EAE8: bc1f        L_0026EB00
    if (!c1cs) {
        // 0x0026EAEC: mov.s       $f21, $f1
        CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    ctx->f21.fl = ctx->f1.fl;
            goto L_0026EB00;
    }
    // 0x0026EAEC: mov.s       $f21, $f1
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    ctx->f21.fl = ctx->f1.fl;
    // 0x0026EAF0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026EAF4: lwc1        $f1, -0x7FA0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7FA0);
    // 0x0026EAF8: div.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0026EAFC: sub.s       $f21, $f1, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f1.fl - ctx->f0.fl;
L_0026EB00:
    // 0x0026EB00: lwc1        $f0, 0x1C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x0026EB04: mul.s       $f21, $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x0026EB08: jal         0x0026EF30
    // 0x0026EB0C: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
    func_0026EF30(rdram, ctx);
        goto after_1;
    // 0x0026EB0C: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
    after_1:
    // 0x0026EB10: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x0026EB14: jal         0x0026EF30
    // 0x0026EB18: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_0026EF30(rdram, ctx);
        goto after_2;
    // 0x0026EB18: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_2:
    // 0x0026EB1C: mul.s       $f20, $f21, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f21.fl, ctx->f20.fl);
    // 0x0026EB20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0026EB24: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x0026EB28: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0026EB2C: ldc1        $f21, 0x20($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X20);
    // 0x0026EB30: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x0026EB34: jr          $ra
    // 0x0026EB38: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0026EB38: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0026A798(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026A798: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x0026A79C: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    // 0x0026A7A0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0026A7A4: sw          $s2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r18;
    // 0x0026A7A8: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0026A7AC: sw          $s1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r17;
    // 0x0026A7B0: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x0026A7B4: sw          $s3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r19;
    // 0x0026A7B8: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    // 0x0026A7BC: sw          $ra, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r31;
    // 0x0026A7C0: sdc1        $f21, 0x90($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X90, ctx->r29);
    // 0x0026A7C4: sdc1        $f20, 0x88($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X88, ctx->r29);
    // 0x0026A7C8: beq         $s0, $zero, L_0026A99C
    if (ctx->r16 == 0) {
        // 0x0026A7CC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0026A99C;
    }
    // 0x0026A7CC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0026A7D0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0026A7D4: lw          $v0, 0x2600($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2600);
    // 0x0026A7D8: beq         $s0, $v0, L_0026A880
    if (ctx->r16 == ctx->r2) {
        // 0x0026A7DC: addiu       $a1, $sp, 0x60
        ctx->r5 = ADD32(ctx->r29, 0X60);
            goto L_0026A880;
    }
    // 0x0026A7DC: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x0026A7E0: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x0026A7E4: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x0026A7E8: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x0026A7EC: lwc1        $f1, 0x0($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X0);
    // 0x0026A7F0: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0026A7F4: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    // 0x0026A7F8: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x0026A7FC: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x0026A800: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x0026A804: lwc1        $f1, 0xC($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0XC);
    // 0x0026A808: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0026A80C: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x0026A810: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x0026A814: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x0026A818: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x0026A81C: lwc1        $f1, 0x8($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X8);
    // 0x0026A820: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0026A824: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    // 0x0026A828: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x0026A82C: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x0026A830: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x0026A834: lwc1        $f1, 0x0($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X0);
    // 0x0026A838: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0026A83C: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    // 0x0026A840: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x0026A844: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x0026A848: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x0026A84C: lwc1        $f1, 0xC($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0XC);
    // 0x0026A850: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0026A854: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x0026A858: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x0026A85C: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x0026A860: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x0026A864: lwc1        $f1, 0x8($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X8);
    // 0x0026A868: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0026A86C: addiu       $a0, $a0, 0x2000
    ctx->r4 = ADD32(ctx->r4, 0X2000);
    // 0x0026A870: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0026A874: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    // 0x0026A878: jal         0x0020EFDC
    // 0x0026A87C: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    func_0020EFDC(rdram, ctx);
        goto after_0;
    // 0x0026A87C: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    after_0:
L_0026A880:
    // 0x0026A880: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0026A884: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0026A888: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026A88C: sw          $s0, 0x2600($at)
    MEM_W(0X2600, ctx->r1) = ctx->r16;
    // 0x0026A890: lui         $t3, 0x800F
    ctx->r11 = S32(0X800F << 16);
    // 0x0026A894: addiu       $t3, $t3, 0x2000
    ctx->r11 = ADD32(ctx->r11, 0X2000);
    // 0x0026A898: lw          $t0, 0x0($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X0);
    // 0x0026A89C: lw          $t1, 0x4($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X4);
    // 0x0026A8A0: lw          $t2, 0x8($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X8);
    // 0x0026A8A4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x0026A8A8: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x0026A8AC: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x0026A8B0: jal         0x0020EF2C
    // 0x0026A8B4: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_0020EF2C(rdram, ctx);
        goto after_1;
    // 0x0026A8B4: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_1:
    // 0x0026A8B8: lwc1        $f4, 0x10($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X10);
    // 0x0026A8BC: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x0026A8C0: lwc1        $f3, 0x14($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X14);
    // 0x0026A8C4: mul.s       $f4, $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x0026A8C8: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0026A8CC: lwc1        $f2, 0x18($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X18);
    // 0x0026A8D0: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x0026A8D4: lwc1        $f1, 0x0($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X0);
    // 0x0026A8D8: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0026A8DC: lwc1        $f0, 0x28($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X28);
    // 0x0026A8E0: swc1        $f1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0026A8E4: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0026A8E8: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0026A8EC: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x0026A8F0: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x0026A8F4: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0026A8F8: add.s       $f4, $f4, $f3
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f3.fl;
    // 0x0026A8FC: mtc1        $zero, $f21
    ctx->f_odd[(21 - 1) * 2] = 0;
    // 0x0026A900: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x0026A904: add.s       $f20, $f4, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x0026A908: c.le.s      $f21, $f20
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f21.fl <= ctx->f20.fl;
    // 0x0026A90C: nop

    // 0x0026A910: bc1f        L_0026A92C
    if (!c1cs) {
        // 0x0026A914: swc1        $f0, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
            goto L_0026A92C;
    }
    // 0x0026A914: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x0026A918: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026A91C: lwc1        $f0, 0x7FA8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7FA8);
    // 0x0026A920: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0026A924: j           L_0026A99C
    // 0x0026A928: swc1        $f0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->f0.u32l;
        goto L_0026A99C;
    // 0x0026A928: swc1        $f0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->f0.u32l;
L_0026A92C:
    // 0x0026A92C: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x0026A930: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0026A934: jal         0x0020EF2C
    // 0x0026A938: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    func_0020EF2C(rdram, ctx);
        goto after_2;
    // 0x0026A938: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_2:
    // 0x0026A93C: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x0026A940: lwc1        $f1, 0x40($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x0026A944: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0026A948: lwc1        $f3, 0x14($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X14);
    // 0x0026A94C: lwc1        $f1, 0x44($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X44);
    // 0x0026A950: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0026A954: lwc1        $f2, 0x48($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X48);
    // 0x0026A958: lwc1        $f1, 0x18($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x0026A95C: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0026A960: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0026A964: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0026A968: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0026A96C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0026A970: div.s       $f4, $f0, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f20.fl);
    // 0x0026A974: c.lt.s      $f21, $f4
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f21.fl < ctx->f4.fl;
    // 0x0026A978: nop

    // 0x0026A97C: bc1f        L_0026A99C
    if (!c1cs) {
        // 0x0026A980: swc1        $f4, 0x0($s3)
        MEM_W(0X0, ctx->r19) = ctx->f4.u32l;
            goto L_0026A99C;
    }
    // 0x0026A980: swc1        $f4, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->f4.u32l;
    // 0x0026A984: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026A988: lwc1        $f0, 0x7FAC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7FAC);
    // 0x0026A98C: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x0026A990: nop

    // 0x0026A994: bc1tl       L_0026A99C
    if (c1cs) {
        // 0x0026A998: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0026A99C;
    }
    goto skip_0;
    // 0x0026A998: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
L_0026A99C:
    // 0x0026A99C: lw          $ra, 0x80($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X80);
    // 0x0026A9A0: lw          $s3, 0x7C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X7C);
    // 0x0026A9A4: lw          $s2, 0x78($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X78);
    // 0x0026A9A8: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x0026A9AC: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x0026A9B0: ldc1        $f21, 0x90($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X90);
    // 0x0026A9B4: ldc1        $f20, 0x88($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X88);
    // 0x0026A9B8: jr          $ra
    // 0x0026A9BC: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x0026A9BC: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_0041B7A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B7A0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B7A4: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0041B7A8: xori        $v0, $v0, 0x800
    ctx->r2 = ctx->r2 ^ 0X800;
    // 0x0041B7AC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041B7B0: sw          $v0, -0x5528($at)
    MEM_W(-0X5528, ctx->r1) = ctx->r2;
    // 0x0041B7B4: jr          $ra
    // 0x0041B7B8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B7B8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00294E70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00294E70: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x00294E74: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x00294E78: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00294E7C: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x00294E80: addu        $s7, $a1, $zero
    ctx->r23 = ADD32(ctx->r5, 0);
    // 0x00294E84: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x00294E88: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
    // 0x00294E8C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00294E90: lui         $a2, 0x29
    ctx->r6 = S32(0X29 << 16);
    // 0x00294E94: addiu       $a2, $a2, 0x7038
    ctx->r6 = ADD32(ctx->r6, 0X7038);
    // 0x00294E98: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x00294E9C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x00294EA0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x00294EA4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x00294EA8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00294EAC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00294EB0: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x00294EB4: jal         0x00296340
    // 0x00294EB8: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_00296340(rdram, ctx);
        goto after_0;
    // 0x00294EB8: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_0:
    // 0x00294EBC: lui         $v0, 0x29
    ctx->r2 = S32(0X29 << 16);
    // 0x00294EC0: addiu       $v0, $v0, 0x6750
    ctx->r2 = ADD32(ctx->r2, 0X6750);
    // 0x00294EC4: sw          $v0, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r2;
    // 0x00294EC8: lui         $v0, 0x29
    ctx->r2 = S32(0X29 << 16);
    // 0x00294ECC: addiu       $v0, $v0, 0x6AF4
    ctx->r2 = ADD32(ctx->r2, 0X6AF4);
    // 0x00294ED0: sw          $v0, 0x28($s3)
    MEM_W(0X28, ctx->r19) = ctx->r2;
    // 0x00294ED4: lbu         $v0, 0x1C($s7)
    ctx->r2 = MEM_BU(ctx->r23, 0X1C);
    // 0x00294ED8: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x00294EDC: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x00294EE0: beq         $v0, $zero, L_00294F58
    if (ctx->r2 == 0) {
        // 0x00294EE4: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00294F58;
    }
    // 0x00294EE4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00294EE8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00294EEC: addu        $at, $at, $v0
    gpr jr_addend_00294EF4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00294EF0: lw          $v0, -0x5B20($at)
    ctx->r2 = ADD32(ctx->r1, -0X5B20);
    // 0x00294EF4: jr          $v0
    // 0x00294EF8: nop

    switch (jr_addend_00294EF4 >> 2) {
        case 0: goto L_00294EFC; break;
        case 1: goto L_00294F0C; break;
        case 2: goto L_00294F2C; break;
        case 3: goto L_00294F3C; break;
        case 4: goto L_00294F1C; break;
        case 5: goto L_00294F4C; break;
        default: switch_error(__func__, 0x00294EF4, 0x800AA4E0);
    }
    // 0x00294EF8: nop

L_00294EFC:
    // 0x00294EFC: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x00294F00: addiu       $s2, $s2, 0x7770
    ctx->r18 = ADD32(ctx->r18, 0X7770);
    // 0x00294F04: j           L_00294F64
    // 0x00294F08: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_00294F64;
    // 0x00294F08: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_00294F0C:
    // 0x00294F0C: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x00294F10: addiu       $s2, $s2, 0x77D8
    ctx->r18 = ADD32(ctx->r18, 0X77D8);
    // 0x00294F14: j           L_00294F64
    // 0x00294F18: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_00294F64;
    // 0x00294F18: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_00294F1C:
    // 0x00294F1C: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x00294F20: addiu       $s2, $s2, 0x7860
    ctx->r18 = ADD32(ctx->r18, 0X7860);
    // 0x00294F24: j           L_00294F64
    // 0x00294F28: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_00294F64;
    // 0x00294F28: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_00294F2C:
    // 0x00294F2C: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x00294F30: addiu       $s2, $s2, 0x7888
    ctx->r18 = ADD32(ctx->r18, 0X7888);
    // 0x00294F34: j           L_00294F64
    // 0x00294F38: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_00294F64;
    // 0x00294F38: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_00294F3C:
    // 0x00294F3C: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x00294F40: addiu       $s2, $s2, 0x78B0
    ctx->r18 = ADD32(ctx->r18, 0X78B0);
    // 0x00294F44: j           L_00294F64
    // 0x00294F48: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_00294F64;
    // 0x00294F48: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_00294F4C:
    // 0x00294F4C: lw          $s2, 0x20($s7)
    ctx->r18 = MEM_W(ctx->r23, 0X20);
    // 0x00294F50: j           L_00294F64
    // 0x00294F54: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_00294F64;
    // 0x00294F54: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_00294F58:
    // 0x00294F58: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x00294F5C: addiu       $s2, $s2, 0x78D8
    ctx->r18 = ADD32(ctx->r18, 0X78D8);
    // 0x00294F60: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_00294F64:
    // 0x00294F64: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00294F68: lbu         $v0, 0x3($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X3);
    // 0x00294F6C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00294F70: sb          $v0, 0x24($s3)
    MEM_B(0X24, ctx->r19) = ctx->r2;
    // 0x00294F74: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    // 0x00294F78: lw          $v0, 0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4);
    // 0x00294F7C: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x00294F80: sw          $v0, 0x1C($s3)
    MEM_W(0X1C, ctx->r19) = ctx->r2;
    // 0x00294F84: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x00294F88: jal         0x002912A0
    // 0x00294F8C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_002912A0(rdram, ctx);
        goto after_1;
    // 0x00294F8C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_1:
    // 0x00294F90: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00294F94: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00294F98: sw          $v0, 0x20($s3)
    MEM_W(0X20, ctx->r19) = ctx->r2;
    // 0x00294F9C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00294FA0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00294FA4: lw          $a3, 0x1C($s3)
    ctx->r7 = MEM_W(ctx->r19, 0X1C);
    // 0x00294FA8: jal         0x002912A0
    // 0x00294FAC: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    func_002912A0(rdram, ctx);
        goto after_2;
    // 0x00294FAC: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    after_2:
    // 0x00294FB0: lw          $v1, 0x1C($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X1C);
    // 0x00294FB4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00294FB8: sw          $v0, 0x14($s3)
    MEM_W(0X14, ctx->r19) = ctx->r2;
    // 0x00294FBC: beq         $v1, $zero, L_00294FF0
    if (ctx->r3 == 0) {
        // 0x00294FC0: sw          $v0, 0x18($s3)
        MEM_W(0X18, ctx->r19) = ctx->r2;
            goto L_00294FF0;
    }
    // 0x00294FC0: sw          $v0, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r2;
    // 0x00294FC4: andi        $v0, $a0, 0xFFFF
    ctx->r2 = ctx->r4 & 0XFFFF;
L_00294FC8:
    // 0x00294FC8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00294FCC: lw          $v1, 0x14($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X14);
    // 0x00294FD0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00294FD4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00294FD8: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    // 0x00294FDC: lw          $v1, 0x1C($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X1C);
    // 0x00294FE0: andi        $v0, $a0, 0xFFFF
    ctx->r2 = ctx->r4 & 0XFFFF;
    // 0x00294FE4: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x00294FE8: bne         $v0, $zero, L_00294FC8
    if (ctx->r2 != 0) {
        // 0x00294FEC: andi        $v0, $a0, 0xFFFF
        ctx->r2 = ctx->r4 & 0XFFFF;
            goto L_00294FC8;
    }
    // 0x00294FEC: andi        $v0, $a0, 0xFFFF
    ctx->r2 = ctx->r4 & 0XFFFF;
L_00294FF0:
    // 0x00294FF0: lbu         $v0, 0x24($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X24);
    // 0x00294FF4: beq         $v0, $zero, L_002952D4
    if (ctx->r2 == 0) {
        // 0x00294FF8: addu        $s4, $zero, $zero
        ctx->r20 = ADD32(0, 0);
            goto L_002952D4;
    }
    // 0x00294FF8: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x00294FFC: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x00295000: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00295004: ldc1        $f20, -0x5B08($at)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r1, -0X5B08);
    // 0x00295008: andi        $v0, $s4, 0xFFFF
    ctx->r2 = ctx->r20 & 0XFFFF;
L_0029500C:
    // 0x0029500C: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x00295010: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00295014: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x00295018: andi        $v0, $s1, 0xFFFF
    ctx->r2 = ctx->r17 & 0XFFFF;
    // 0x0029501C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00295020: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x00295024: addiu       $a1, $s1, 0x1
    ctx->r5 = ADD32(ctx->r17, 0X1);
    // 0x00295028: lw          $a0, 0x20($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X20);
    // 0x0029502C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00295030: addu        $s0, $a0, $v1
    ctx->r16 = ADD32(ctx->r4, ctx->r3);
    // 0x00295034: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x00295038: andi        $v0, $a1, 0xFFFF
    ctx->r2 = ctx->r5 & 0XFFFF;
    // 0x0029503C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00295040: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x00295044: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x00295048: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x0029504C: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x00295050: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00295054: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x00295058: sw          $v1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r3;
    // 0x0029505C: lhu         $v1, 0x2($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X2);
    // 0x00295060: addiu       $v0, $a1, 0x2
    ctx->r2 = ADD32(ctx->r5, 0X2);
    // 0x00295064: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x00295068: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0029506C: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x00295070: sh          $v1, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r3;
    // 0x00295074: lhu         $v1, 0x2($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X2);
    // 0x00295078: addiu       $v0, $a1, 0x3
    ctx->r2 = ADD32(ctx->r5, 0X3);
    // 0x0029507C: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x00295080: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00295084: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x00295088: sh          $v1, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r3;
    // 0x0029508C: lhu         $v0, 0x2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2);
    // 0x00295090: addiu       $a0, $a1, 0x4
    ctx->r4 = ADD32(ctx->r5, 0X4);
    // 0x00295094: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
    // 0x00295098: andi        $v0, $a0, 0xFFFF
    ctx->r2 = ctx->r4 & 0XFFFF;
    // 0x0029509C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002950A0: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x002950A4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x002950A8: beq         $v0, $zero, L_002951A0
    if (ctx->r2 == 0) {
        // 0x002950AC: addiu       $v1, $a1, 0x5
        ctx->r3 = ADD32(ctx->r5, 0X5);
            goto L_002951A0;
    }
    // 0x002950AC: addiu       $v1, $a1, 0x5
    ctx->r3 = ADD32(ctx->r5, 0X5);
    // 0x002950B0: andi        $v0, $a0, 0xFFFF
    ctx->r2 = ctx->r4 & 0XFFFF;
    // 0x002950B4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002950B8: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x002950BC: lwc1        $f1, 0x0($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X0);
    // 0x002950C0: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x002950C4: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
    // 0x002950C8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002950CC: lwc1        $f0, -0x5B00($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5B00);
    // 0x002950D0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x002950D4: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x002950D8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x002950DC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x002950E0: addu        $v1, $v1, $s2
    ctx->r3 = ADD32(ctx->r3, ctx->r18);
    // 0x002950E4: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x002950E8: add.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f1.fl;
    // 0x002950EC: mtc1        $a0, $f2
    ctx->f2.u32l = ctx->r4;
    // 0x002950F0: cvt.d.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.d = CVT_D_W(ctx->f2.u32l);
    // 0x002950F4: lwc1        $f0, 0x18($s7)
    ctx->f0.u32l = MEM_W(ctx->r23, 0X18);
    // 0x002950F8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002950FC: div.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00295100: swc1        $f1, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x00295104: lwc1        $f3, 0x0($v1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r3, 0X0);
    // 0x00295108: cvt.s.w     $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    ctx->f3.fl = CVT_S_W(ctx->f_odd[(3 - 1) * 2]);
    // 0x0029510C: bgez        $a0, L_00295120
    if (SIGNED(ctx->r4) >= 0) {
        // 0x00295110: addiu       $s1, $a1, 0x6
        ctx->r17 = ADD32(ctx->r5, 0X6);
            goto L_00295120;
    }
    // 0x00295110: addiu       $s1, $a1, 0x6
    ctx->r17 = ADD32(ctx->r5, 0X6);
    // 0x00295114: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00295118: ldc1        $f0, -0x5AF8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X5AF8);
    // 0x0029511C: add.d       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = ctx->f2.d + ctx->f0.d;
L_00295120:
    // 0x00295120: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00295124: lwc1        $f0, -0x5AF0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5AF0);
    // 0x00295128: cvt.s.d     $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f1.fl = CVT_S_D(ctx->f2.d);
    // 0x0029512C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00295130: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00295134: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00295138: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x0029513C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x00295140: mul.s       $f1, $f3, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x00295144: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00295148: lwc1        $f0, -0x5AEC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5AEC);
    // 0x0029514C: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
    // 0x00295150: sw          $zero, 0x18($s0)
    MEM_W(0X18, ctx->r16) = 0;
    // 0x00295154: swc1        $f0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f0.u32l;
    // 0x00295158: swc1        $f1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0029515C: jal         0x002912A0
    // 0x00295160: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_002912A0(rdram, ctx);
        goto after_3;
    // 0x00295160: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_3:
    // 0x00295164: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00295168: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0029516C: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x00295170: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x00295174: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x00295178: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x0029517C: jal         0x002912A0
    // 0x00295180: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_002912A0(rdram, ctx);
        goto after_4;
    // 0x00295180: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_4:
    // 0x00295184: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x00295188: sw          $v0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r2;
    // 0x0029518C: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x00295190: sw          $zero, 0x20($v0)
    MEM_W(0X20, ctx->r2) = 0;
    // 0x00295194: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x00295198: j           L_002951A8
    // 0x0029519C: sw          $s6, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r22;
        goto L_002951A8;
    // 0x0029519C: sw          $s6, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r22;
L_002951A0:
    // 0x002951A0: sw          $zero, 0x24($s0)
    MEM_W(0X24, ctx->r16) = 0;
    // 0x002951A4: addiu       $s1, $a1, 0x6
    ctx->r17 = ADD32(ctx->r5, 0X6);
L_002951A8:
    // 0x002951A8: andi        $v0, $s1, 0xFFFF
    ctx->r2 = ctx->r17 & 0XFFFF;
    // 0x002951AC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002951B0: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x002951B4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x002951B8: beq         $v0, $zero, L_002952B4
    if (ctx->r2 == 0) {
        // 0x002951BC: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_002952B4;
    }
    // 0x002951BC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x002951C0: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x002951C4: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x002951C8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x002951CC: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x002951D0: jal         0x002912A0
    // 0x002951D4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_002912A0(rdram, ctx);
        goto after_5;
    // 0x002951D4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_5:
    // 0x002951D8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x002951DC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x002951E0: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x002951E4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x002951E8: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x002951EC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x002951F0: jal         0x002912A0
    // 0x002951F4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_002912A0(rdram, ctx);
        goto after_6;
    // 0x002951F4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_6:
    // 0x002951F8: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x002951FC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x00295200: sw          $v0, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r2;
    // 0x00295204: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x00295208: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x0029520C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00295210: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x00295214: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x00295218: lhu         $v0, 0x2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2);
    // 0x0029521C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00295220: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x00295224: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x00295228: addiu       $v0, $zero, 0x4000
    ctx->r2 = ADD32(0, 0X4000);
    // 0x0029522C: lh          $v1, 0x0($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X0);
    // 0x00295230: addiu       $a2, $a0, 0xE
    ctx->r6 = ADD32(ctx->r4, 0XE);
    // 0x00295234: sw          $s6, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r22;
    // 0x00295238: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x0029523C: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
    // 0x00295240: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00295244: sh          $v0, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r2;
L_00295248:
    // 0x00295248: sh          $zero, 0x8($a2)
    MEM_H(0X8, ctx->r6) = 0;
    // 0x0029524C: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x00295250: bgez        $a1, L_00295248
    if (SIGNED(ctx->r5) >= 0) {
        // 0x00295254: addiu       $a2, $a2, -0x2
        ctx->r6 = ADD32(ctx->r6, -0X2);
            goto L_00295248;
    }
    // 0x00295254: addiu       $a2, $a2, -0x2
    ctx->r6 = ADD32(ctx->r6, -0X2);
    // 0x00295258: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x0029525C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x00295260: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00295264: ldc1        $f1, -0x5AE8($at)
    CHECK_FR(ctx, 1);
    ctx->f1.u64 = LD(ctx->r1, -0X5AE8);
    // 0x00295268: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0029526C: cvt.d.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.d = CVT_D_W(ctx->f0.u32l);
    // 0x00295270: mul.d       $f1, $f0, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f1.d); 
    ctx->f1.d = MUL_D(ctx->f0.d, ctx->f1.d);
    // 0x00295274: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x00295278: addiu       $v1, $a0, 0x12
    ctx->r3 = ADD32(ctx->r4, 0X12);
    // 0x0029527C: sh          $a3, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r7;
    // 0x00295280: mov.d       $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.d = ctx->f1.d;
L_00295284:
    // 0x00295284: mul.d       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f2.d); 
    ctx->f1.d = MUL_D(ctx->f1.d, ctx->f2.d);
    // 0x00295288: nop

    // 0x0029528C: mul.d       $f0, $f1, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f20.d); 
    ctx->f0.d = MUL_D(ctx->f1.d, ctx->f20.d);
    // 0x00295290: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00295294: trunc.w.d   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_D(ctx->f0.d);
    // 0x00295298: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x0029529C: sh          $v0, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r2;
    // 0x002952A0: slti        $v0, $a1, 0x10
    ctx->r2 = SIGNED(ctx->r5) < 0X10 ? 1 : 0;
    // 0x002952A4: bne         $v0, $zero, L_00295284
    if (ctx->r2 != 0) {
        // 0x002952A8: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_00295284;
    }
    // 0x002952A8: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x002952AC: j           L_002952C0
    // 0x002952B0: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
        goto L_002952C0;
    // 0x002952B0: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_002952B4:
    // 0x002952B4: sw          $zero, 0x20($s0)
    MEM_W(0X20, ctx->r16) = 0;
    // 0x002952B8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x002952BC: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_002952C0:
    // 0x002952C0: lbu         $v1, 0x24($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X24);
    // 0x002952C4: andi        $v0, $s4, 0xFFFF
    ctx->r2 = ctx->r20 & 0XFFFF;
    // 0x002952C8: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x002952CC: bne         $v0, $zero, L_0029500C
    if (ctx->r2 != 0) {
        // 0x002952D0: andi        $v0, $s4, 0xFFFF
        ctx->r2 = ctx->r20 & 0XFFFF;
            goto L_0029500C;
    }
    // 0x002952D0: andi        $v0, $s4, 0xFFFF
    ctx->r2 = ctx->r20 & 0XFFFF;
L_002952D4:
    // 0x002952D4: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x002952D8: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x002952DC: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x002952E0: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x002952E4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x002952E8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x002952EC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x002952F0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x002952F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x002952F8: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x002952FC: jr          $ra
    // 0x00295300: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x00295300: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_00288F60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00288F60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00288F64: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00288F68: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00288F6C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00288F70: lui         $s0, 0x2
    ctx->r16 = S32(0X2 << 16);
    // 0x00288F74: ori         $s0, $s0, 0x3DF0
    ctx->r16 = ctx->r16 | 0X3DF0;
    // 0x00288F78: addu        $s0, $s1, $s0
    ctx->r16 = ADD32(ctx->r17, ctx->r16);
    // 0x00288F7C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00288F80: jal         0x004001D0
    // 0x00288F84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_004001D0(rdram, ctx);
        goto after_0;
    // 0x00288F84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00288F88: jal         0x00220530
    // 0x00288F8C: addiu       $a0, $s1, 0x3C8
    ctx->r4 = ADD32(ctx->r17, 0X3C8);
    func_00220530(rdram, ctx);
        goto after_1;
    // 0x00288F8C: addiu       $a0, $s1, 0x3C8
    ctx->r4 = ADD32(ctx->r17, 0X3C8);
    after_1:
    // 0x00288F90: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    // 0x00288F94: ori         $a0, $a0, 0x2C00
    ctx->r4 = ctx->r4 | 0X2C00;
    // 0x00288F98: jal         0x00281354
    // 0x00288F9C: addu        $a0, $s1, $a0
    ctx->r4 = ADD32(ctx->r17, ctx->r4);
    func_00281354(rdram, ctx);
        goto after_2;
    // 0x00288F9C: addu        $a0, $s1, $a0
    ctx->r4 = ADD32(ctx->r17, ctx->r4);
    after_2:
    // 0x00288FA0: lui         $a0, 0x1
    ctx->r4 = S32(0X1 << 16);
    // 0x00288FA4: ori         $a0, $a0, 0x9440
    ctx->r4 = ctx->r4 | 0X9440;
    // 0x00288FA8: jal         0x0027ADA8
    // 0x00288FAC: addu        $a0, $s1, $a0
    ctx->r4 = ADD32(ctx->r17, ctx->r4);
    func_0027ADA8(rdram, ctx);
        goto after_3;
    // 0x00288FAC: addu        $a0, $s1, $a0
    ctx->r4 = ADD32(ctx->r17, ctx->r4);
    after_3:
    // 0x00288FB0: jal         0x00401C1C
    // 0x00288FB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00401C1C(rdram, ctx);
        goto after_4;
    // 0x00288FB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x00288FB8: bne         $v0, $zero, L_00288FC8
    if (ctx->r2 != 0) {
        // 0x00288FBC: nop
    
            goto L_00288FC8;
    }
    // 0x00288FBC: nop

    // 0x00288FC0: jal         0x00288B1C
    // 0x00288FC4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00288B1C(rdram, ctx);
        goto after_5;
    // 0x00288FC4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
L_00288FC8:
    // 0x00288FC8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00288FCC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00288FD0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00288FD4: jr          $ra
    // 0x00288FD8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00288FD8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0029A4E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029A4E4: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x0029A4E8: nop

    // 0x0029A4EC: bc1f        L_0029A4F8
    if (!c1cs) {
        // 0x0029A4F0: addiu       $sp, $sp, -0x18
        ctx->r29 = ADD32(ctx->r29, -0X18);
            goto L_0029A4F8;
    }
    // 0x0029A4F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0029A4F4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
L_0029A4F8:
    // 0x0029A4F8: jal         0x0029A4D0
    // 0x0029A4FC: addiu       $a0, $zero, 0x400
    ctx->r4 = ADD32(0, 0X400);
    func_0029A4D0(rdram, ctx);
        goto after_0;
    // 0x0029A4FC: addiu       $a0, $zero, 0x400
    ctx->r4 = ADD32(0, 0X400);
    after_0:
    // 0x0029A500: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0029A504: jr          $ra
    // 0x0029A508: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0029A508: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00467754(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00467754: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00467758: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0046775C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00467760: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00467764: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00467768: jal         0x00266C5C
    // 0x0046776C: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    func_00266C5C(rdram, ctx);
        goto after_0;
    // 0x0046776C: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    after_0:
    // 0x00467770: addiu       $a0, $s0, 0xC
    ctx->r4 = ADD32(ctx->r16, 0XC);
    // 0x00467774: addiu       $a1, $zero, 0x131C
    ctx->r5 = ADD32(0, 0X131C);
    // 0x00467778: jal         0x00200500
    // 0x0046777C: addiu       $a2, $zero, 0x1320
    ctx->r6 = ADD32(0, 0X1320);
    func_00200500(rdram, ctx);
        goto after_1;
    // 0x0046777C: addiu       $a2, $zero, 0x1320
    ctx->r6 = ADD32(0, 0X1320);
    after_1:
    // 0x00467780: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
    // 0x00467784: addiu       $a1, $zero, 0x131C
    ctx->r5 = ADD32(0, 0X131C);
    // 0x00467788: jal         0x00200500
    // 0x0046778C: addiu       $a2, $zero, 0x1320
    ctx->r6 = ADD32(0, 0X1320);
    func_00200500(rdram, ctx);
        goto after_2;
    // 0x0046778C: addiu       $a2, $zero, 0x1320
    ctx->r6 = ADD32(0, 0X1320);
    after_2:
    // 0x00467790: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x00467794: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x00467798: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x0046779C: sw          $zero, 0x34($s0)
    MEM_W(0X34, ctx->r16) = 0;
    // 0x004677A0: sw          $zero, 0x38($s0)
    MEM_W(0X38, ctx->r16) = 0;
    // 0x004677A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x004677A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004677AC: jr          $ra
    // 0x004677B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004677B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00426064(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00426064: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00426068: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0042606C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00426070: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x00426074: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00426078: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0042607C: sll         $s0, $s1, 2
    ctx->r16 = S32(ctx->r17 << 2);
    // 0x00426080: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // turok2: reconnected split function: a stray ELF symbol at 0x00426084 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00426084(rdram, ctx);
;}
RECOMP_FUNC void func_0026CEC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026CEC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0026CECC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0026CED0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0026CED4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0026CED8: lhu         $v1, 0x2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2);
    // 0x0026CEDC: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x0026CEE0: beq         $v0, $zero, L_0026CF24
    if (ctx->r2 == 0) {
        // 0x0026CEE4: andi        $v0, $v1, 0xFFFE
        ctx->r2 = ctx->r3 & 0XFFFE;
            goto L_0026CF24;
    }
    // 0x0026CEE4: andi        $v0, $v1, 0xFFFE
    ctx->r2 = ctx->r3 & 0XFFFE;
    // 0x0026CEE8: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x0026CEEC: beq         $a0, $zero, L_0026CEFC
    if (ctx->r4 == 0) {
        // 0x0026CEF0: sh          $v0, 0x2($s0)
        MEM_H(0X2, ctx->r16) = ctx->r2;
            goto L_0026CEFC;
    }
    // 0x0026CEF0: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
    // 0x0026CEF4: jal         0x0026CEC8
    // 0x0026CEF8: nop

    func_0026CEC8(rdram, ctx);
        goto after_0;
    // 0x0026CEF8: nop

    after_0:
L_0026CEFC:
    // 0x0026CEFC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x0026CF00: beq         $a0, $zero, L_0026CF10
    if (ctx->r4 == 0) {
        // 0x0026CF04: nop
    
            goto L_0026CF10;
    }
    // 0x0026CF04: nop

    // 0x0026CF08: jal         0x0026CEC8
    // 0x0026CF0C: nop

    func_0026CEC8(rdram, ctx);
        goto after_1;
    // 0x0026CF0C: nop

    after_1:
L_0026CF10:
    // 0x0026CF10: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x0026CF14: beq         $a0, $zero, L_0026CF24
    if (ctx->r4 == 0) {
        // 0x0026CF18: nop
    
            goto L_0026CF24;
    }
    // 0x0026CF18: nop

    // 0x0026CF1C: jal         0x0026CEC8
    // 0x0026CF20: nop

    func_0026CEC8(rdram, ctx);
        goto after_2;
    // 0x0026CF20: nop

    after_2:
L_0026CF24:
    // 0x0026CF24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0026CF28: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0026CF2C: jr          $ra
    // 0x0026CF30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0026CF30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002895B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002895B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002895B8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002895BC: jal         0x00288DD0
    // 0x002895C0: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    func_00288DD0(rdram, ctx);
        goto after_0;
    // 0x002895C0: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    after_0:
    // 0x002895C4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002895C8: jr          $ra
    // 0x002895CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002895CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0029635C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029635C: bne         $v0, $zero, L_00296380
    if (ctx->r2 != 0) {
        // 0x00296360: addiu       $sp, $sp, -0x40
        ctx->r29 = ADD32(ctx->r29, -0X40);
            goto L_00296380;
    }
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
L_00296380:
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
RECOMP_FUNC void func_0029F188(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029F188: slti        $v0, $v1, 0x64D
    ctx->r2 = SIGNED(ctx->r3) < 0X64D ? 1 : 0;
    // 0x0029F18C: beq         $v0, $zero, L_0029F1A4
    if (ctx->r2 == 0) {
        // 0x0029F190: addiu       $sp, $sp, -0x58
        ctx->r29 = ADD32(ctx->r29, -0X58);
            goto L_0029F1A4;
    }
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
L_0029F1A4:
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
RECOMP_FUNC void func_0041531C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041531C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00415320: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00415324: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00415328: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x0041532C: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x00415330: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00415334: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00415338: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0041533C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00415340: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x00415344: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x00415348: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x0041534C: beq         $v0, $zero, L_00415360
    if (ctx->r2 == 0) {
        // 0x00415350: addu        $s4, $zero, $zero
        ctx->r20 = ADD32(0, 0);
            goto L_00415360;
    }
    // 0x00415350: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x00415354: jalr        $v0
    // 0x00415358: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x00415358: nop

    after_0:
    // 0x0041535C: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
L_00415360:
    // 0x00415360: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00415364: lw          $s0, 0x10($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X10);
    // 0x00415368: lw          $s2, 0xC($s1)
    ctx->r18 = MEM_W(ctx->r17, 0XC);
    // 0x0041536C: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x00415370: beq         $s0, $v0, L_004153A0
    if (ctx->r16 == ctx->r2) {
        // 0x00415374: addu        $s3, $v0, $zero
        ctx->r19 = ADD32(ctx->r2, 0);
            goto L_004153A0;
    }
    // 0x00415374: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
L_00415378:
    // 0x00415378: lw          $v0, 0x18($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X18);
    // 0x0041537C: lw          $v0, 0x18($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X18);
    // 0x00415380: beq         $v0, $zero, L_00415394
    if (ctx->r2 == 0) {
        // 0x00415384: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00415394;
    }
    // 0x00415384: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00415388: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0041538C: jalr        $v0
    // 0x00415390: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x00415390: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    after_1:
L_00415394:
    // 0x00415394: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x00415398: bne         $s0, $s3, L_00415378
    if (ctx->r16 != ctx->r19) {
        // 0x0041539C: addiu       $s2, $s2, 0x28
        ctx->r18 = ADD32(ctx->r18, 0X28);
            goto L_00415378;
    }
    // 0x0041539C: addiu       $s2, $s2, 0x28
    ctx->r18 = ADD32(ctx->r18, 0X28);
L_004153A0:
    // 0x004153A0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x004153A4: lh          $v1, 0x0($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X0);
    // 0x004153A8: lwc1        $f0, 0x2C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X2C);
    // 0x004153AC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x004153B0: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x004153B4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x004153B8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x004153BC: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x004153C0: lw          $v1, 0xC($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XC);
    // 0x004153C4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x004153C8: addu        $s2, $v1, $v0
    ctx->r18 = ADD32(ctx->r3, ctx->r2);
    // 0x004153CC: swc1        $f0, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->f0.u32l;
    // 0x004153D0: lw          $v1, 0x8($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X8);
    // 0x004153D4: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
    // 0x004153D8: jal         0x00416C28
    // 0x004153DC: and         $s3, $v1, $v0
    ctx->r19 = ctx->r3 & ctx->r2;
    func_00416C28(rdram, ctx);
        goto after_2;
    // 0x004153DC: and         $s3, $v1, $v0
    ctx->r19 = ctx->r3 & ctx->r2;
    after_2:
    // 0x004153E0: lh          $v1, 0x28($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X28);
    // 0x004153E4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x004153E8: beq         $v1, $a0, L_00415454
    if (ctx->r3 == ctx->r4) {
        // 0x004153EC: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_00415454;
    }
    // 0x004153EC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x004153F0: beq         $v0, $zero, L_00415408
    if (ctx->r2 == 0) {
        // 0x004153F4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00415408;
    }
    // 0x004153F4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x004153F8: beq         $v1, $zero, L_00415420
    if (ctx->r3 == 0) {
        // 0x004153FC: slti        $v0, $v1, 0x3
        ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
            goto L_00415420;
    }
    // 0x004153FC: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x00415400: j           L_00415508
    // 0x00415404: nop

        goto L_00415508;
    // 0x00415404: nop

L_00415408:
    // 0x00415408: beq         $v1, $v0, L_00415490
    if (ctx->r3 == ctx->r2) {
        // 0x0041540C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_00415490;
    }
    // 0x0041540C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00415410: beq         $v1, $v0, L_004154D0
    if (ctx->r3 == ctx->r2) {
        // 0x00415414: nop
    
            goto L_004154D0;
    }
    // 0x00415414: nop

    // 0x00415418: j           L_00415500
    // 0x0041541C: nop

        goto L_00415500;
    // 0x0041541C: nop

L_00415420:
    // 0x00415420: lwc1        $f0, 0x30($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X30);
    // 0x00415424: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00415428: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x0041542C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00415430: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00415434: lwc1        $f1, 0xC0C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XC0C);
    // 0x00415438: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0041543C: nop

    // 0x00415440: bc1f        L_00415500
    if (!c1cs) {
        // 0x00415444: swc1        $f0, 0x30($s1)
        MEM_W(0X30, ctx->r17) = ctx->f0.u32l;
            goto L_00415500;
    }
    // 0x00415444: swc1        $f0, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->f0.u32l;
    // 0x00415448: swc1        $f1, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    // 0x0041544C: j           L_00415500
    // 0x00415450: sh          $a0, 0x28($s1)
    MEM_H(0X28, ctx->r17) = ctx->r4;
        goto L_00415500;
    // 0x00415450: sh          $a0, 0x28($s1)
    MEM_H(0X28, ctx->r17) = ctx->r4;
L_00415454:
    // 0x00415454: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00415458: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0041545C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00415460: lwc1        $f1, 0xC10($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XC10);
    // 0x00415464: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00415468: lwc1        $f1, 0x34($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X34);
    // 0x0041546C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00415470: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00415474: lwc1        $f0, 0xC14($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XC14);
    // 0x00415478: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0041547C: nop

    // 0x00415480: bc1f        L_00415500
    if (!c1cs) {
        // 0x00415484: swc1        $f1, 0x34($s1)
        MEM_W(0X34, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
            goto L_00415500;
    }
    // 0x00415484: swc1        $f1, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    // 0x00415488: j           L_004154C4
    // 0x0041548C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_004154C4;
    // 0x0041548C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_00415490:
    // 0x00415490: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00415494: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00415498: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041549C: lwc1        $f1, 0xC18($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XC18);
    // 0x004154A0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x004154A4: lwc1        $f1, 0x34($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X34);
    // 0x004154A8: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x004154AC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x004154B0: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x004154B4: nop

    // 0x004154B8: bc1f        L_00415500
    if (!c1cs) {
        // 0x004154BC: swc1        $f1, 0x34($s1)
        MEM_W(0X34, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
            goto L_00415500;
    }
    // 0x004154BC: swc1        $f1, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    // 0x004154C0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_004154C4:
    // 0x004154C4: swc1        $f0, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->f0.u32l;
    // 0x004154C8: j           L_00415500
    // 0x004154CC: sh          $v0, 0x28($s1)
    MEM_H(0X28, ctx->r17) = ctx->r2;
        goto L_00415500;
    // 0x004154CC: sh          $v0, 0x28($s1)
    MEM_H(0X28, ctx->r17) = ctx->r2;
L_004154D0:
    // 0x004154D0: lwc1        $f0, 0x30($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X30);
    // 0x004154D4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x004154D8: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x004154DC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x004154E0: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x004154E4: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x004154E8: nop

    // 0x004154EC: bc1f        L_00415500
    if (!c1cs) {
        // 0x004154F0: swc1        $f0, 0x30($s1)
        MEM_W(0X30, ctx->r17) = ctx->f0.u32l;
            goto L_00415500;
    }
    // 0x004154F0: swc1        $f0, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->f0.u32l;
    // 0x004154F4: swc1        $f1, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    // 0x004154F8: j           L_004156D8
    // 0x004154FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_004156D8;
    // 0x004154FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00415500:
    // 0x00415500: lh          $v1, 0x28($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X28);
    // 0x00415504: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
L_00415508:
    // 0x00415508: beq         $v0, $zero, L_004156D8
    if (ctx->r2 == 0) {
        // 0x0041550C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_004156D8;
    }
    // 0x0041550C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00415510: bltz        $v1, L_004156D8
    if (SIGNED(ctx->r3) < 0) {
        // 0x00415514: nop
    
            goto L_004156D8;
    }
    // 0x00415514: nop

    // 0x00415518: beq         $s4, $zero, L_00415524
    if (ctx->r20 == 0) {
        // 0x0041551C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_00415524;
    }
    // 0x0041551C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00415520: sh          $v0, 0x28($s1)
    MEM_H(0X28, ctx->r17) = ctx->r2;
L_00415524:
    // 0x00415524: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x00415528: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x0041552C: bne         $v0, $zero, L_004156D8
    if (ctx->r2 != 0) {
        // 0x00415530: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_004156D8;
    }
    // 0x00415530: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00415534: lh          $v1, 0x4($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X4);
    // 0x00415538: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0041553C: bne         $v1, $v0, L_004155AC
    if (ctx->r3 != ctx->r2) {
        // 0x00415540: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_004155AC;
    }
    // 0x00415540: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x00415544: lw          $v1, 0x20($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X20);
    // 0x00415548: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x0041554C: lw          $v1, 0xB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0XB0);
    // 0x00415550: ori         $v0, $v0, 0x202
    ctx->r2 = ctx->r2 | 0X202;
    // 0x00415554: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x00415558: beq         $v0, $zero, L_0041557C
    if (ctx->r2 == 0) {
        // 0x0041555C: lui         $v0, 0x4
        ctx->r2 = S32(0X4 << 16);
            goto L_0041557C;
    }
    // 0x0041555C: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x00415560: lw          $v0, 0x1C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1C);
    // 0x00415564: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00415568: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x0041556C: bgez        $v0, L_004155AC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00415570: sw          $v0, 0x1C($s2)
        MEM_W(0X1C, ctx->r18) = ctx->r2;
            goto L_004155AC;
    }
    // 0x00415570: sw          $v0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r2;
    // 0x00415574: j           L_004155AC
    // 0x00415578: sw          $zero, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = 0;
        goto L_004155AC;
    // 0x00415578: sw          $zero, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = 0;
L_0041557C:
    // 0x0041557C: ori         $v0, $v0, 0x101
    ctx->r2 = ctx->r2 | 0X101;
    // 0x00415580: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x00415584: beq         $v0, $zero, L_004155AC
    if (ctx->r2 == 0) {
        // 0x00415588: nop
    
            goto L_004155AC;
    }
    // 0x00415588: nop

    // 0x0041558C: lw          $v0, 0x1C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1C);
    // 0x00415590: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x00415594: sw          $v0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r2;
    // 0x00415598: slti        $v0, $v0, 0x100
    ctx->r2 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
    // 0x0041559C: bne         $v0, $zero, L_004155AC
    if (ctx->r2 != 0) {
        // 0x004155A0: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_004155AC;
    }
    // 0x004155A0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x004155A4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x004155A8: sw          $v0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r2;
L_004155AC:
    // 0x004155AC: bne         $s3, $zero, L_004155F4
    if (ctx->r19 != 0) {
        // 0x004155B0: lui         $v1, 0x6
        ctx->r3 = S32(0X6 << 16);
            goto L_004155F4;
    }
    // 0x004155B0: lui         $v1, 0x6
    ctx->r3 = S32(0X6 << 16);
    // 0x004155B4: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x004155B8: jal         0x00285628
    // 0x004155BC: nop

    func_00285628(rdram, ctx);
        goto after_3;
    // 0x004155BC: nop

    after_3:
    // 0x004155C0: beq         $v0, $zero, L_004155D0
    if (ctx->r2 == 0) {
        // 0x004155C4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_004155D0;
    }
    // 0x004155C4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x004155C8: jal         0x004151B4
    // 0x004155CC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_004151B4(rdram, ctx);
        goto after_4;
    // 0x004155CC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_4:
L_004155D0:
    // 0x004155D0: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x004155D4: jal         0x00285670
    // 0x004155D8: nop

    func_00285670(rdram, ctx);
        goto after_5;
    // 0x004155D8: nop

    after_5:
    // 0x004155DC: beq         $v0, $zero, L_0041560C
    if (ctx->r2 == 0) {
        // 0x004155E0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0041560C;
    }
    // 0x004155E0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x004155E4: jal         0x004151B4
    // 0x004155E8: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    func_004151B4(rdram, ctx);
        goto after_6;
    // 0x004155E8: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_6:
    // 0x004155EC: j           L_0041560C
    // 0x004155F0: nop

        goto L_0041560C;
    // 0x004155F0: nop

L_004155F4:
    // 0x004155F4: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x004155F8: lw          $v0, 0xB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XB0);
    // 0x004155FC: ori         $v1, $v1, 0x303
    ctx->r3 = ctx->r3 | 0X303;
    // 0x00415600: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00415604: bnel        $v0, $zero, L_0041560C
    if (ctx->r2 != 0) {
        // 0x00415608: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0041560C;
    }
    goto skip_0;
    // 0x00415608: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_0:
L_0041560C:
    // 0x0041560C: beq         $s0, $zero, L_0041564C
    if (ctx->r16 == 0) {
        // 0x00415610: nop
    
            goto L_0041564C;
    }
    // 0x00415610: nop

    // 0x00415614: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x00415618: jal         0x002856B8
    // 0x0041561C: nop

    func_002856B8(rdram, ctx);
        goto after_7;
    // 0x0041561C: nop

    after_7:
    // 0x00415620: beq         $v0, $zero, L_00415630
    if (ctx->r2 == 0) {
        // 0x00415624: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00415630;
    }
    // 0x00415624: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00415628: jal         0x004151B4
    // 0x0041562C: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    func_004151B4(rdram, ctx);
        goto after_8;
    // 0x0041562C: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    after_8:
L_00415630:
    // 0x00415630: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x00415634: jal         0x00285700
    // 0x00415638: nop

    func_00285700(rdram, ctx);
        goto after_9;
    // 0x00415638: nop

    after_9:
    // 0x0041563C: beq         $v0, $zero, L_0041564C
    if (ctx->r2 == 0) {
        // 0x00415640: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0041564C;
    }
    // 0x00415640: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00415644: jal         0x004151B4
    // 0x00415648: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    func_004151B4(rdram, ctx);
        goto after_10;
    // 0x00415648: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    after_10:
L_0041564C:
    // 0x0041564C: lh          $v1, 0x28($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X28);
    // 0x00415650: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00415654: bne         $v1, $v0, L_004156D8
    if (ctx->r3 != ctx->r2) {
        // 0x00415658: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_004156D8;
    }
    // 0x00415658: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041565C: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x00415660: jal         0x002855E8
    // 0x00415664: nop

    func_002855E8(rdram, ctx);
        goto after_11;
    // 0x00415664: nop

    after_11:
    // 0x00415668: bne         $v0, $zero, L_004156A8
    if (ctx->r2 != 0) {
        // 0x0041566C: nop
    
            goto L_004156A8;
    }
    // 0x0041566C: nop

    // 0x00415670: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x00415674: jal         0x00285628
    // 0x00415678: nop

    func_00285628(rdram, ctx);
        goto after_12;
    // 0x00415678: nop

    after_12:
    // 0x0041567C: beq         $v0, $zero, L_0041568C
    if (ctx->r2 == 0) {
        // 0x00415680: nop
    
            goto L_0041568C;
    }
    // 0x00415680: nop

    // 0x00415684: bne         $s3, $zero, L_004156A8
    if (ctx->r19 != 0) {
        // 0x00415688: nop
    
            goto L_004156A8;
    }
    // 0x00415688: nop

L_0041568C:
    // 0x0041568C: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x00415690: jal         0x00285670
    // 0x00415694: nop

    func_00285670(rdram, ctx);
        goto after_13;
    // 0x00415694: nop

    after_13:
    // 0x00415698: beq         $v0, $zero, L_004156D8
    if (ctx->r2 == 0) {
        // 0x0041569C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_004156D8;
    }
    // 0x0041569C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x004156A0: beq         $s3, $zero, L_004156D8
    if (ctx->r19 == 0) {
        // 0x004156A4: nop
    
            goto L_004156D8;
    }
    // 0x004156A4: nop

L_004156A8:
    // 0x004156A8: lw          $v0, 0x18($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X18);
    // 0x004156AC: lw          $v0, 0x1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1C);
    // 0x004156B0: beq         $v0, $zero, L_004156CC
    if (ctx->r2 == 0) {
        // 0x004156B4: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_004156CC;
    }
    // 0x004156B4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x004156B8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x004156BC: jalr        $v0
    // 0x004156C0: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_14;
    // 0x004156C0: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    after_14:
    // 0x004156C4: beq         $v0, $zero, L_004156D8
    if (ctx->r2 == 0) {
        // 0x004156C8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_004156D8;
    }
    // 0x004156C8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_004156CC:
    // 0x004156CC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x004156D0: sh          $v0, 0x28($s1)
    MEM_H(0X28, ctx->r17) = ctx->r2;
    // 0x004156D4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_004156D8:
    // 0x004156D8: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x004156DC: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x004156E0: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x004156E4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x004156E8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x004156EC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x004156F0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004156F4: jr          $ra
    // 0x004156F8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x004156F8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0041A494(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041A494: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041A498: addiu       $v0, $v0, -0x5350
    ctx->r2 = ADD32(ctx->r2, -0X5350);
    // 0x0041A49C: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x0041A4A0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0041A4A4: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x0041A4A8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0041A4AC: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0041A4B0: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0041A4B4: nop

    // 0x0041A4B8: bc1f        L_0041A4C4
    if (!c1cs) {
        // 0x0041A4BC: swc1        $f0, 0x10($v0)
        MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
            goto L_0041A4C4;
    }
    // 0x0041A4BC: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
    // 0x0041A4C0: swc1        $f1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f_odd[(1 - 1) * 2];
L_0041A4C4:
    // 0x0041A4C4: jr          $ra
    // 0x0041A4C8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041A4C8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
