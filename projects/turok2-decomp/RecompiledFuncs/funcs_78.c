#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_002898D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002898D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002898D8: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x002898DC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002898E0: jal         0x00288E58
    // 0x002898E4: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    func_00288E58(rdram, ctx);
        goto after_0;
    // 0x002898E4: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_0:
    // 0x002898E8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002898EC: jr          $ra
    // 0x002898F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002898F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0041B26C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B26C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B270: lw          $v0, -0x5524($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5524);
    // 0x0041B274: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x0041B278: beq         $v0, $zero, L_0041B28C
    if (ctx->r2 == 0) {
        // 0x0041B27C: lui         $v1, 0x100
        ctx->r3 = S32(0X100 << 16);
            goto L_0041B28C;
    }
    // 0x0041B27C: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x0041B280: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041B284: j           L_0041B29C
    // 0x0041B288: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
        goto L_0041B29C;
    // 0x0041B288: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
L_0041B28C:
    // 0x0041B28C: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x0041B290: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041B294: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0041B298: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
L_0041B29C:
    // 0x0041B29C: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0041B2A0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B2A4: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0041B2A8: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x0041B2AC: beq         $v0, $zero, L_0041B2C4
    if (ctx->r2 == 0) {
        // 0x0041B2B0: nop
    
            goto L_0041B2C4;
    }
    // 0x0041B2B0: nop

    // 0x0041B2B4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B2B8: addiu       $v0, $v0, 0x57E4
    ctx->r2 = ADD32(ctx->r2, 0X57E4);
    // 0x0041B2BC: j           L_0041B2D0
    // 0x0041B2C0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041B2D0;
    // 0x0041B2C0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B2C4:
    // 0x0041B2C4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B2C8: addiu       $v0, $v0, 0x5800
    ctx->r2 = ADD32(ctx->r2, 0X5800);
    // 0x0041B2CC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B2D0:
    // 0x0041B2D0: jr          $ra
    // 0x0041B2D4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B2D4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00446CFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00446CFC: jr          $ra
    // 0x00446D00: nop

    return;
    // 0x00446D00: nop

;}
RECOMP_FUNC void func_0044727C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044727C: jr          $ra
    // 0x00447280: nop

    return;
    // 0x00447280: nop

;}
RECOMP_FUNC void func_00418294(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00418294: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00418298: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x0041829C: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x004182A0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x004182A4: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x004182A8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x004182AC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x004182B0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x004182B4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x004182B8: lw          $s0, 0x1C($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X1C);
    // 0x004182BC: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x004182C0: lw          $s1, 0x518($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X518);
    // 0x004182C4: jal         0x002855E8
    // 0x004182C8: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    func_002855E8(rdram, ctx);
        goto after_0;
    // 0x004182C8: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    after_0:
    // 0x004182CC: bne         $v0, $zero, L_00418320
    if (ctx->r2 != 0) {
        // 0x004182D0: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00418320;
    }
    // 0x004182D0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x004182D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x004182D8: lb          $a1, 0x30($s1)
    ctx->r5 = MEM_B(ctx->r17, 0X30);
    // 0x004182DC: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x004182E0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x004182E4: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x004182E8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x004182EC: jal         0x00416558
    // 0x004182F0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_00416558(rdram, ctx);
        goto after_1;
    // 0x004182F0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_1:
    // 0x004182F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x004182F8: sll         $a1, $v0, 24
    ctx->r5 = S32(ctx->r2 << 24);
    // 0x004182FC: sra         $a1, $a1, 24
    ctx->r5 = S32(SIGNED(ctx->r5) >> 24);
    // 0x00418300: jal         0x0042E430
    // 0x00418304: sb          $v0, 0x30($s1)
    MEM_B(0X30, ctx->r17) = ctx->r2;
    func_0042E430(rdram, ctx);
        goto after_2;
    // 0x00418304: sb          $v0, 0x30($s1)
    MEM_B(0X30, ctx->r17) = ctx->r2;
    after_2:
    // 0x00418308: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x0041830C: lb          $a2, 0x30($s1)
    ctx->r6 = MEM_B(ctx->r17, 0X30);
    // 0x00418310: jal         0x00416214
    // 0x00418314: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_00416214(rdram, ctx);
        goto after_3;
    // 0x00418314: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_3:
    // 0x00418318: j           L_00418360
    // 0x0041831C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_00418360;
    // 0x0041831C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00418320:
    // 0x00418320: lb          $a1, 0x30($s1)
    ctx->r5 = MEM_B(ctx->r17, 0X30);
    // 0x00418324: jal         0x0042E430
    // 0x00418328: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0042E430(rdram, ctx);
        goto after_4;
    // 0x00418328: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x0041832C: lw          $v0, 0x520($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X520);
    // 0x00418330: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00418334: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00418338: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0041833C: lh          $a0, 0x1E7A($at)
    ctx->r4 = MEM_H(ctx->r1, 0X1E7A);
    // 0x00418340: jal         0x00275624
    // 0x00418344: nop

    func_00275624(rdram, ctx);
        goto after_5;
    // 0x00418344: nop

    after_5:
    // 0x00418348: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0041834C: lui         $a2, 0x44
    ctx->r6 = S32(0X44 << 16);
    // 0x00418350: addiu       $a2, $a2, -0x78B8
    ctx->r6 = ADD32(ctx->r6, -0X78B8);
    // 0x00418354: jal         0x00416894
    // 0x00418358: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_00416894(rdram, ctx);
        goto after_6;
    // 0x00418358: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_6:
    // 0x0041835C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00418360:
    // 0x00418360: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x00418364: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x00418368: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x0041836C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00418370: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00418374: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00418378: jr          $ra
    // 0x0041837C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0041837C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0040E2B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040E2B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0040E2B8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0040E2BC: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x0040E2C0: beq         $v0, $zero, L_0040E2D0
    if (ctx->r2 == 0) {
        // 0x0040E2C4: nop
    
            goto L_0040E2D0;
    }
    // 0x0040E2C4: nop

    // 0x0040E2C8: jal         0x00243414
    // 0x0040E2CC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0040E2CC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
L_0040E2D0:
    // 0x0040E2D0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0040E2D4: jr          $ra
    // 0x0040E2D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040E2D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0045F354(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045F354: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0045F358: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0045F35C: jal         0x002053A8
    // 0x0045F360: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_0;
    // 0x0045F360: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
    // 0x0045F364: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0045F368: lw          $a1, 0x2228($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2228);
    // 0x0045F36C: beq         $a1, $zero, L_0045F38C
    if (ctx->r5 == 0) {
        // 0x0045F370: nop
    
            goto L_0045F38C;
    }
    // 0x0045F370: nop

    // 0x0045F374: jal         0x002052D8
    // 0x0045F378: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_1;
    // 0x0045F378: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
    // 0x0045F37C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045F380: sw          $zero, 0x2228($at)
    MEM_W(0X2228, ctx->r1) = 0;
    // 0x0045F384: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045F388: sw          $zero, 0x2224($at)
    MEM_W(0X2224, ctx->r1) = 0;
L_0045F38C:
    // 0x0045F38C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0045F390: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045F394: sw          $zero, 0x2220($at)
    MEM_W(0X2220, ctx->r1) = 0;
    // 0x0045F398: jr          $ra
    // 0x0045F39C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0045F39C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0041B4F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B4F8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B4FC: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0041B500: xori        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 ^ 0X40;
    // 0x0041B504: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041B508: sw          $v0, -0x5528($at)
    MEM_W(-0X5528, ctx->r1) = ctx->r2;
    // 0x0041B50C: jr          $ra
    // 0x0041B510: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B510: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0041C8CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041C8CC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041C8D0: lw          $v0, -0x551C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X551C);
    // 0x0041C8D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0041C8D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0041C8DC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0041C8E0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0041C8E4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0041C8E8: jal         0x00206078
    // 0x0041C8EC: srl         $s1, $v0, 4
    ctx->r17 = S32(U32(ctx->r2) >> 4);
    func_00206078(rdram, ctx);
        goto after_0;
    // 0x0041C8EC: srl         $s1, $v0, 4
    ctx->r17 = S32(U32(ctx->r2) >> 4);
    after_0:
    // 0x0041C8F0: jal         0x00206068
    // 0x0041C8F4: addiu       $a0, $v0, 0x2
    ctx->r4 = ADD32(ctx->r2, 0X2);
    func_00206068(rdram, ctx);
        goto after_1;
    // 0x0041C8F4: addiu       $a0, $v0, 0x2
    ctx->r4 = ADD32(ctx->r2, 0X2);
    after_1:
    // 0x0041C8F8: bnel        $s1, $zero, L_0041C910
    if (ctx->r17 != 0) {
        // 0x0041C8FC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0041C910;
    }
    goto skip_0;
    // 0x0041C8FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x0041C900: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041C904: addiu       $v0, $v0, 0x4158
    ctx->r2 = ADD32(ctx->r2, 0X4158);
    // 0x0041C908: j           L_0041C93C
    // 0x0041C90C: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
        goto L_0041C93C;
    // 0x0041C90C: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
L_0041C910:
    // 0x0041C910: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041C914: addiu       $v0, $v0, 0x4170
    ctx->r2 = ADD32(ctx->r2, 0X4170);
    // 0x0041C918: jal         0x004160F0
    // 0x0041C91C: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_2;
    // 0x0041C91C: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    after_2:
    // 0x0041C920: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x0041C924: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041C928: addiu       $a1, $a1, 0x1318
    ctx->r5 = ADD32(ctx->r5, 0X1318);
    // 0x0041C92C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x0041C930: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x0041C934: jal         0x0029E3E0
    // 0x0041C938: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_3;
    // 0x0041C938: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_3:
L_0041C93C:
    // 0x0041C93C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0041C940: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0041C944: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041C948: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041C94C: jr          $ra
    // 0x0041C950: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041C950: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0041B9C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B9C0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B9C4: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0041B9C8: xori        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 ^ 0X8000;
    // 0x0041B9CC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041B9D0: sw          $v0, -0x5528($at)
    MEM_W(-0X5528, ctx->r1) = ctx->r2;
    // 0x0041B9D4: jr          $ra
    // 0x0041B9D8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B9D8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0042CAB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042CAB4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0042CAB8: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x0042CABC: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x0042CAC0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0042CAC4: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0042CAC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042CACC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042CAD0: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x0042CAD4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0042CAD8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0042CADC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0042CAE0: jal         0x00200B00
    // 0x0042CAE4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_00200B00(rdram, ctx);
        goto after_0;
    // 0x0042CAE4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x0042CAE8: beq         $v0, $zero, L_0042CBC0
    if (ctx->r2 == 0) {
        // 0x0042CAEC: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_0042CBC0;
    }
    // 0x0042CAEC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x0042CAF0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0042CAF4: lw          $s0, 0x0($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X0);
    // 0x0042CAF8: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x0042CAFC: jal         0x002017D4
    // 0x0042CB00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x0042CB00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0042CB04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042CB08: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0042CB0C: lw          $s3, 0x4($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X4);
    // 0x0042CB10: jal         0x002017D4
    // 0x0042CB14: addiu       $s0, $v0, 0x8
    ctx->r16 = ADD32(ctx->r2, 0X8);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x0042CB14: addiu       $s0, $v0, 0x8
    ctx->r16 = ADD32(ctx->r2, 0X8);
    after_2:
    // 0x0042CB18: blez        $s3, L_0042CBC0
    if (SIGNED(ctx->r19) <= 0) {
        // 0x0042CB1C: addu        $s1, $v0, $zero
        ctx->r17 = ADD32(ctx->r2, 0);
            goto L_0042CBC0;
    }
    // 0x0042CB1C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0042CB20: addiu       $s4, $zero, -0x1
    ctx->r20 = ADD32(0, -0X1);
L_0042CB24:
    // 0x0042CB24: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    // 0x0042CB28: bne         $a1, $s4, L_0042CB38
    if (ctx->r5 != ctx->r20) {
        // 0x0042CB2C: nop
    
            goto L_0042CB38;
    }
    // 0x0042CB2C: nop

    // 0x0042CB30: j           L_0042CB44
    // 0x0042CB34: sw          $zero, 0x14($s0)
    MEM_W(0X14, ctx->r16) = 0;
        goto L_0042CB44;
    // 0x0042CB34: sw          $zero, 0x14($s0)
    MEM_W(0X14, ctx->r16) = 0;
L_0042CB38:
    // 0x0042CB38: jal         0x00224F84
    // 0x0042CB3C: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    func_00224F84(rdram, ctx);
        goto after_3;
    // 0x0042CB3C: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    after_3:
    // 0x0042CB40: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
L_0042CB44:
    // 0x0042CB44: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x0042CB48: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x0042CB4C: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x0042CB50: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x0042CB54: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x0042CB58: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x0042CB5C: addu        $v1, $s1, $v1
    ctx->r3 = ADD32(ctx->r17, ctx->r3);
    // 0x0042CB60: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x0042CB64: lw          $v1, 0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X28);
    // 0x0042CB68: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x0042CB6C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x0042CB70: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x0042CB74: addu        $v1, $s1, $v1
    ctx->r3 = ADD32(ctx->r17, ctx->r3);
    // 0x0042CB78: sw          $v1, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r3;
    // 0x0042CB7C: lw          $v1, 0x30($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X30);
    // 0x0042CB80: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x0042CB84: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x0042CB88: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    // 0x0042CB8C: addu        $v1, $s1, $v1
    ctx->r3 = ADD32(ctx->r17, ctx->r3);
    // 0x0042CB90: sw          $v1, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r3;
    // 0x0042CB94: lw          $v1, 0x38($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X38);
    // 0x0042CB98: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x0042CB9C: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x0042CBA0: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x0042CBA4: addu        $v1, $s1, $v1
    ctx->r3 = ADD32(ctx->r17, ctx->r3);
    // 0x0042CBA8: sw          $v1, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r3;
    // 0x0042CBAC: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x0042CBB0: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    // 0x0042CBB4: slt         $v0, $s2, $s3
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x0042CBB8: bne         $v0, $zero, L_0042CB24
    if (ctx->r2 != 0) {
        // 0x0042CBBC: addiu       $s0, $s0, 0x3C
        ctx->r16 = ADD32(ctx->r16, 0X3C);
            goto L_0042CB24;
    }
    // 0x0042CBBC: addiu       $s0, $s0, 0x3C
    ctx->r16 = ADD32(ctx->r16, 0X3C);
L_0042CBC0:
    // 0x0042CBC0: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x0042CBC4: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0042CBC8: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0042CBCC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0042CBD0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0042CBD4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0042CBD8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042CBDC: jr          $ra
    // 0x0042CBE0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0042CBE0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0044042C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044042C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00440430: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00440434: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00440438: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0044043C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00440440: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00440444: lb          $v0, 0xC7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC7);
    // 0x00440448: beq         $v0, $zero, L_004404B8
    if (ctx->r2 == 0) {
        // 0x0044044C: addu        $s2, $a0, $zero
        ctx->r18 = ADD32(ctx->r4, 0);
            goto L_004404B8;
    }
    // 0x0044044C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00440450: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x00440454: addiu       $s0, $s0, -0x688
    ctx->r16 = ADD32(ctx->r16, -0X688);
    // 0x00440458: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x0044045C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00440460: jal         0x00243414
    // 0x00440464: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00440464: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_0:
    // 0x00440468: lw          $a0, -0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, -0X4);
    // 0x0044046C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00440470: jal         0x00243414
    // 0x00440474: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x00440474: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_1:
    // 0x00440478: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0044047C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00440480: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    // 0x00440484: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x00440488: lui         $a3, 0x800F
    ctx->r7 = S32(0X800F << 16);
    // 0x0044048C: addiu       $a3, $a3, 0x1C40
    ctx->r7 = ADD32(ctx->r7, 0X1C40);
    // 0x00440490: lui         $t0, 0x800F
    ctx->r8 = S32(0X800F << 16);
    // 0x00440494: addiu       $t0, $t0, 0x1F50
    ctx->r8 = ADD32(ctx->r8, 0X1F50);
    // 0x00440498: sw          $v0, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r2;
    // 0x0044049C: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x004404A0: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x004404A4: ori         $v0, $v0, 0x300
    ctx->r2 = ctx->r2 | 0X300;
    // 0x004404A8: ori         $v1, $v1, 0x300
    ctx->r3 = ctx->r3 | 0X300;
    // 0x004404AC: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x004404B0: jal         0x00243414
    // 0x004404B4: sw          $v1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r3;
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x004404B4: sw          $v1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r3;
    after_2:
L_004404B8:
    // 0x004404B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x004404BC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x004404C0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x004404C4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004404C8: jr          $ra
    // 0x004404CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x004404CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00290F1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00290F1C: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
;}
RECOMP_FUNC void func_004658FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004658FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00465900: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00465904: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00465908: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0046590C: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x00465910: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00465914: jal         0x002532A8
    // 0x00465918: nop

    func_002532A8(rdram, ctx);
        goto after_0;
    // 0x00465918: nop

    after_0:
    // 0x0046591C: beq         $v0, $zero, L_0046592C
    if (ctx->r2 == 0) {
        // 0x00465920: nop
    
            goto L_0046592C;
    }
    // 0x00465920: nop

    // 0x00465924: jal         0x0042EA24
    // 0x00465928: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    entry_0042EA24(rdram, ctx);
        goto after_1;
    // 0x00465928: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_1:
L_0046592C:
    // 0x0046592C: jal         0x00275F7C
    // 0x00465930: nop

    func_00275F7C(rdram, ctx);
        goto after_2;
    // 0x00465930: nop

    after_2:
    // 0x00465934: jal         0x00275EFC
    // 0x00465938: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_00275EFC(rdram, ctx);
        goto after_3;
    // 0x00465938: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_3:
    // 0x0046593C: jal         0x00275B58
    // 0x00465940: nop

    func_00275B58(rdram, ctx);
        goto after_4;
    // 0x00465940: nop

    after_4:
    // 0x00465944: jal         0x002758DC
    // 0x00465948: addiu       $a0, $zero, 0x1000
    ctx->r4 = ADD32(0, 0X1000);
    func_002758DC(rdram, ctx);
        goto after_5;
    // 0x00465948: addiu       $a0, $zero, 0x1000
    ctx->r4 = ADD32(0, 0X1000);
    after_5:
    // 0x0046594C: lw          $a1, 0x98($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X98);
    // 0x00465950: jal         0x002052D8
    // 0x00465954: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_6;
    // 0x00465954: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_6:
    // 0x00465958: lw          $a1, 0x9C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X9C);
    // 0x0046595C: jal         0x002052D8
    // 0x00465960: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_7;
    // 0x00465960: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_7:
    // 0x00465964: lw          $a1, 0xA0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XA0);
    // 0x00465968: jal         0x002052D8
    // 0x0046596C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_8;
    // 0x0046596C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_8:
    // 0x00465970: lw          $a1, 0xA4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XA4);
    // 0x00465974: jal         0x002052D8
    // 0x00465978: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_9;
    // 0x00465978: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_9:
    // 0x0046597C: lw          $a1, 0xA8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XA8);
    // 0x00465980: jal         0x002052D8
    // 0x00465984: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_10;
    // 0x00465984: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_10:
    // 0x00465988: lw          $a1, 0xB0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XB0);
    // 0x0046598C: jal         0x002052D8
    // 0x00465990: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_11;
    // 0x00465990: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_11:
    // 0x00465994: lw          $a1, 0xB4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XB4);
    // 0x00465998: jal         0x002052D8
    // 0x0046599C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_12;
    // 0x0046599C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_12:
    // 0x004659A0: lw          $a1, 0xCC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XCC);
    // 0x004659A4: jal         0x002052D8
    // 0x004659A8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_13;
    // 0x004659A8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_13:
    // 0x004659AC: lw          $a1, 0xAC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XAC);
    // 0x004659B0: jal         0x002052D8
    // 0x004659B4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_14;
    // 0x004659B4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_14:
    // 0x004659B8: lw          $a1, 0xC8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC8);
    // 0x004659BC: jal         0x002052D8
    // 0x004659C0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_15;
    // 0x004659C0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_15:
    // 0x004659C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x004659C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004659CC: jr          $ra
    // 0x004659D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004659D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_004533AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041A3E8:
    // 0x004533AC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x004533B0: lwc1        $f1, -0x5340($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X5340);
    // 0x004533B4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x004533B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004533BC: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x004533C0: nop

    // 0x004533C4: bc1t        L_004533D4
    if (c1cs) {
        // 0x004533C8: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_004533D4;
    }
    // 0x004533C8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x004533CC: j           L_0041A3E8
    // 0x004533D0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    entry_0041A3E8(rdram, ctx);
    return;
    // 0x004533D0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_004533D4:
    // 0x004533D4: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x004533D8: addiu       $a0, $a0, 0x6CB0
    ctx->r4 = ADD32(ctx->r4, 0X6CB0);
    // 0x004533DC: jal         0x00430250
    // 0x004533E0: nop

    func_00430250(rdram, ctx);
        goto after_0;
    // 0x004533E0: nop

    after_0:
    // 0x004533E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004533E8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x004533EC: jr          $ra
    // 0x004533F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004533F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00454DBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041BDEC:
    // 0x00454DBC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
L_0041BE5C:
    // 0x00454DC0: lw          $v1, -0x5378($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5378);
L_0041BE60:
    // 0x00454DC4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x00454DC8: bne         $v1, $v0, L_00454DE0
    if (ctx->r3 != ctx->r2) {
        // 0x00454DCC: lui         $v1, 0xFEFF
        ctx->r3 = S32(0XFEFF << 16);
            goto L_00454DE0;
    }
    // 0x00454DCC: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x00454DD0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00454DD4: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x00454DD8: j           L_0041BDEC
    // 0x00454DDC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    entry_0041BDEC(rdram, ctx);
    return;
    // 0x00454DDC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
L_00454DE0:
    // 0x00454DE0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00454DE4: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00454DE8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00454DEC: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x00454DF0: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00454DF4: lw          $v1, -0x5520($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5520);
    // 0x00454DF8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x00454DFC: beq         $v1, $v0, L_00454E40
    if (ctx->r3 == ctx->r2) {
        // 0x00454E00: sltiu       $v0, $v1, 0x11
        ctx->r2 = ctx->r3 < 0X11 ? 1 : 0;
            goto L_00454E40;
    }
    // 0x00454E00: sltiu       $v0, $v1, 0x11
    ctx->r2 = ctx->r3 < 0X11 ? 1 : 0;
    // 0x00454E04: beq         $v0, $zero, L_00454E1C
    if (ctx->r2 == 0) {
        // 0x00454E08: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_00454E1C;
    }
    // 0x00454E08: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x00454E0C: beq         $v1, $v0, L_00454E30
    if (ctx->r3 == ctx->r2) {
        // 0x00454E10: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00454E30;
    }
    // 0x00454E10: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00454E14: j           L_0041BE60
    // 0x00454E18: nop

    entry_0041BE60(rdram, ctx);
    return;
    // 0x00454E18: nop

L_00454E1C:
    // 0x00454E1C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x00454E20: beq         $v1, $v0, L_00454E50
    if (ctx->r3 == ctx->r2) {
        // 0x00454E24: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00454E50;
    }
    // 0x00454E24: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00454E28: j           L_0041BE60
    // 0x00454E2C: nop

    entry_0041BE60(rdram, ctx);
    return;
    // 0x00454E2C: nop

L_00454E30:
    // 0x00454E30: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00454E34: addiu       $v0, $v0, 0x3E70
    ctx->r2 = ADD32(ctx->r2, 0X3E70);
    // 0x00454E38: j           L_0041BE5C
    // 0x00454E3C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    func_0041BE5C(rdram, ctx);
    return;
    // 0x00454E3C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00454E40:
    // 0x00454E40: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00454E44: addiu       $v0, $v0, 0x3E88
    ctx->r2 = ADD32(ctx->r2, 0X3E88);
    // 0x00454E48: j           L_0041BE5C
    // 0x00454E4C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    func_0041BE5C(rdram, ctx);
    return;
    // 0x00454E4C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00454E50:
    // 0x00454E50: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00454E54: addiu       $v0, $v0, 0x3EA0
    ctx->r2 = ADD32(ctx->r2, 0X3EA0);
    // 0x00454E58: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00454E5C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00454E60: jr          $ra
    // 0x00454E64: nop

    return;
    // 0x00454E64: nop

;}
RECOMP_FUNC void func_00246BBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00246BBC: jal         0x002982F0
    // 0x00246BC0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    func_002982F0(rdram, ctx);
        goto after_0;
    // 0x00246BC0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    after_0:
    // 0x00246BC4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00246BC8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00246BCC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00246BD0: lwc1        $f4, 0xB90($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XB90);
    // 0x00246BD4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00246BD8: lwc1        $f0, 0x69A0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X69A0);
    // 0x00246BDC: lw          $s1, 0x518($a1)
    ctx->r17 = MEM_W(ctx->r5, 0X518);
    // 0x00246BE0: mul.s       $f4, $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x00246BE4: lbu         $v0, 0x2A($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2A);
    // 0x00246BE8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00246BEC: lwc1        $f1, 0x69A4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X69A4);
    // 0x00246BF0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00246BF4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00246BF8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00246BFC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00246C00: lwc1        $f3, 0x69A8($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X69A8);
    // 0x00246C04: sub.s       $f4, $f3, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f3.fl - ctx->f4.fl;
    // 0x00246C08: sub.s       $f5, $f0, $f3
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f5.fl = ctx->f0.fl - ctx->f3.fl;
    // 0x00246C0C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00246C10: lwc1        $f0, 0x69AC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X69AC);
    // 0x00246C14: mul.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x00246C18: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00246C1C: lwc1        $f2, 0x69B0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X69B0);
    // 0x00246C20: mul.s       $f2, $f5, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f5.fl, ctx->f2.fl);
    // 0x00246C24: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00246C28: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x00246C2C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00246C30: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00246C34: add.s       $f5, $f2, $f3
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f5.fl = ctx->f2.fl + ctx->f3.fl;
    // 0x00246C38: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    // 0x00246C3C: lb          $v1, 0x2B($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X2B);
    // 0x00246C40: mul.s       $f5, $f5, $f1
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f5.fl = MUL_S(ctx->f5.fl, ctx->f1.fl);
    // 0x00246C44: lb          $v1, 0x2B($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X2B);
    // 0x00246C48: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x00246C4C: beq         $v0, $zero, L_00246C70
    if (ctx->r2 == 0) {
        // 0x00246C50: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_00246C70;
    }
    // 0x00246C50: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00246C54: bltz        $v1, L_00246C70
    if (SIGNED(ctx->r3) < 0) {
        // 0x00246C58: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00246C70;
    }
    // 0x00246C58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00246C5C: lbu         $v1, 0x2C($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X2C);
    // 0x00246C60: bne         $v1, $v0, L_00246C70
    if (ctx->r3 != ctx->r2) {
        // 0x00246C64: nop
    
            goto L_00246C70;
    }
    // 0x00246C64: nop

    // 0x00246C68: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x00246C6C: addiu       $a2, $a2, -0x2590
    ctx->r6 = ADD32(ctx->r6, -0X2590);
L_00246C70:
    // 0x00246C70: beq         $a2, $zero, L_00246D40
    if (ctx->r6 == 0) {
        // 0x00246C74: nop
    
            goto L_00246D40;
    }
    // 0x00246C74: nop

    // 0x00246C78: sw          $zero, 0x24($s0)
    MEM_W(0X24, ctx->r16) = 0;
    // 0x00246C7C: sw          $zero, 0x28($s0)
    MEM_W(0X28, ctx->r16) = 0;
    // 0x00246C80: sw          $zero, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = 0;
    // 0x00246C84: sw          $zero, 0x30($s0)
    MEM_W(0X30, ctx->r16) = 0;
    // 0x00246C88: sw          $zero, 0x34($s0)
    MEM_W(0X34, ctx->r16) = 0;
    // 0x00246C8C: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x00246C90: beq         $v0, $zero, L_00246D68
    if (ctx->r2 == 0) {
        // 0x00246C94: nop
    
            goto L_00246D68;
    }
    // 0x00246C94: nop

L_00246C98:
    // 0x00246C98: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x00246C9C: lw          $v0, 0xB0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XB0);
    // 0x00246CA0: lw          $a0, 0x4($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X4);
    // 0x00246CA4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00246CA8: beq         $v0, $zero, L_00246CBC
    if (ctx->r2 == 0) {
        // 0x00246CAC: nop
    
            goto L_00246CBC;
    }
    // 0x00246CAC: nop

    // 0x00246CB0: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x00246CB4: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x00246CB8: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
L_00246CBC:
    // 0x00246CBC: lw          $v0, 0xB4($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XB4);
    // 0x00246CC0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00246CC4: beq         $v0, $zero, L_00246CD8
    if (ctx->r2 == 0) {
        // 0x00246CC8: nop
    
            goto L_00246CD8;
    }
    // 0x00246CC8: nop

    // 0x00246CCC: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    // 0x00246CD0: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x00246CD4: sw          $v0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r2;
L_00246CD8:
    // 0x00246CD8: lw          $v0, 0xB8($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XB8);
    // 0x00246CDC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00246CE0: beq         $v0, $zero, L_00246CF4
    if (ctx->r2 == 0) {
        // 0x00246CE4: nop
    
            goto L_00246CF4;
    }
    // 0x00246CE4: nop

    // 0x00246CE8: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    // 0x00246CEC: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x00246CF0: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
L_00246CF4:
    // 0x00246CF4: lw          $v0, 0xBC($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XBC);
    // 0x00246CF8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00246CFC: beq         $v0, $zero, L_00246D10
    if (ctx->r2 == 0) {
        // 0x00246D00: nop
    
            goto L_00246D10;
    }
    // 0x00246D00: nop

    // 0x00246D04: lw          $v0, 0x30($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X30);
    // 0x00246D08: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x00246D0C: sw          $v0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r2;
L_00246D10:
    // 0x00246D10: lw          $v0, 0xC0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XC0);
    // 0x00246D14: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00246D18: beq         $v0, $zero, L_00246D2C
    if (ctx->r2 == 0) {
        // 0x00246D1C: addiu       $a2, $a2, 0x8
        ctx->r6 = ADD32(ctx->r6, 0X8);
            goto L_00246D2C;
    }
    // 0x00246D1C: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x00246D20: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x00246D24: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x00246D28: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
L_00246D2C:
    // 0x00246D2C: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x00246D30: beq         $v0, $zero, L_00246D68
    if (ctx->r2 == 0) {
        // 0x00246D34: nop
    
            goto L_00246D68;
    }
    // 0x00246D34: nop

    // 0x00246D38: j           L_00246C98
    // 0x00246D3C: nop

        goto L_00246C98;
    // 0x00246D3C: nop

L_00246D40:
    // 0x00246D40: lw          $v0, 0xB0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XB0);
    // 0x00246D44: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x00246D48: lw          $v0, 0xB4($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XB4);
    // 0x00246D4C: sw          $v0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r2;
    // 0x00246D50: lw          $v0, 0xB8($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XB8);
    // 0x00246D54: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x00246D58: lw          $v0, 0xBC($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XBC);
    // 0x00246D5C: sw          $v0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r2;
    // 0x00246D60: lw          $v0, 0xC0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XC0);
    // 0x00246D64: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
L_00246D68:
    // 0x00246D68: lb          $v1, 0x2B($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X2B);
    // 0x00246D6C: beq         $v1, $zero, L_00246D84
    if (ctx->r3 == 0) {
        // 0x00246D70: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00246D84;
    }
    // 0x00246D70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00246D74: beq         $v1, $v0, L_00246F08
    if (ctx->r3 == ctx->r2) {
        // 0x00246D78: nop
    
            goto L_00246F08;
    }
    // 0x00246D78: nop

    // 0x00246D7C: j           L_00247060
    // 0x00246D80: nop

        goto L_00247060;
    // 0x00246D80: nop

L_00246D84:
    // 0x00246D84: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x00246D88: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x00246D8C: beq         $v0, $zero, L_00246DA4
    if (ctx->r2 == 0) {
        // 0x00246D90: andi        $v0, $v1, 0x2
        ctx->r2 = ctx->r3 & 0X2;
            goto L_00246DA4;
    }
    // 0x00246D90: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x00246D94: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00246D98: lwc1        $f0, 0x69B4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X69B4);
    // 0x00246D9C: j           L_00246DB8
    // 0x00246DA0: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
        goto L_00246DB8;
    // 0x00246DA0: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
L_00246DA4:
    // 0x00246DA4: beql        $v0, $zero, L_00246DB8
    if (ctx->r2 == 0) {
        // 0x00246DA8: sw          $zero, 0x8($s0)
        MEM_W(0X8, ctx->r16) = 0;
            goto L_00246DB8;
    }
    goto skip_0;
    // 0x00246DA8: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    skip_0:
    // 0x00246DAC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00246DB0: lwc1        $f0, 0x69B8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X69B8);
    // 0x00246DB4: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
L_00246DB8:
    // 0x00246DB8: lb          $v0, 0xC6($a3)
    ctx->r2 = MEM_B(ctx->r7, 0XC6);
    // 0x00246DBC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00246DC0: lwc1        $f1, 0x69BC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X69BC);
    // 0x00246DC4: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00246DC8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00246DCC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00246DD0: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x00246DD4: andi        $v0, $v1, 0x8
    ctx->r2 = ctx->r3 & 0X8;
    // 0x00246DD8: beq         $v0, $zero, L_00246DF0
    if (ctx->r2 == 0) {
        // 0x00246DDC: swc1        $f0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
            goto L_00246DF0;
    }
    // 0x00246DDC: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    // 0x00246DE0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00246DE4: lwc1        $f0, 0x69C0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X69C0);
    // 0x00246DE8: j           L_00246E08
    // 0x00246DEC: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
        goto L_00246E08;
    // 0x00246DEC: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
L_00246DF0:
    // 0x00246DF0: andi        $v0, $v1, 0x4
    ctx->r2 = ctx->r3 & 0X4;
    // 0x00246DF4: beql        $v0, $zero, L_00246E08
    if (ctx->r2 == 0) {
        // 0x00246DF8: sw          $zero, 0xC($s0)
        MEM_W(0XC, ctx->r16) = 0;
            goto L_00246E08;
    }
    goto skip_1;
    // 0x00246DF8: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    skip_1:
    // 0x00246DFC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00246E00: lwc1        $f0, 0x69C4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X69C4);
    // 0x00246E04: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
L_00246E08:
    // 0x00246E08: lbu         $v0, 0x2D($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2D);
    // 0x00246E0C: beq         $v0, $zero, L_00246E34
    if (ctx->r2 == 0) {
        // 0x00246E10: nop
    
            goto L_00246E34;
    }
    // 0x00246E10: nop

    // 0x00246E14: lb          $v0, 0xC7($a3)
    ctx->r2 = MEM_B(ctx->r7, 0XC7);
    // 0x00246E18: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00246E1C: lwc1        $f1, 0x69C8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X69C8);
    // 0x00246E20: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00246E24: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00246E28: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00246E2C: j           L_00247060
    // 0x00246E30: swc1        $f0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f0.u32l;
        goto L_00247060;
    // 0x00246E30: swc1        $f0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f0.u32l;
L_00246E34:
    // 0x00246E34: lw          $v0, 0x1284($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1284);
    // 0x00246E38: bne         $v0, $zero, L_00247060
    if (ctx->r2 != 0) {
        // 0x00246E3C: nop
    
            goto L_00247060;
    }
    // 0x00246E3C: nop

    // 0x00246E40: lb          $v0, 0xC7($a3)
    ctx->r2 = MEM_B(ctx->r7, 0XC7);
    // 0x00246E44: beq         $v0, $zero, L_00246E74
    if (ctx->r2 == 0) {
        // 0x00246E48: nop
    
            goto L_00246E74;
    }
    // 0x00246E48: nop

    // 0x00246E4C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00246E50: lwc1        $f0, 0x69CC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X69CC);
    // 0x00246E54: mul.s       $f0, $f5, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f5.fl, ctx->f0.fl);
    // 0x00246E58: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00246E5C: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00246E60: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00246E64: lwc1        $f1, 0x4($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X4);
    // 0x00246E68: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00246E6C: j           L_00246ECC
    // 0x00246E70: swc1        $f1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
        goto L_00246ECC;
    // 0x00246E70: swc1        $f1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
L_00246E74:
    // 0x00246E74: lwc1        $f14, 0xC($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0XC);
    // 0x00246E78: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00246E7C: c.eq.s      $f14, $f1
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f14.fl == ctx->f1.fl;
    // 0x00246E80: nop

    // 0x00246E84: bc1t        L_00246ECC
    if (c1cs) {
        // 0x00246E88: nop
    
            goto L_00246ECC;
    }
    // 0x00246E88: nop

    // 0x00246E8C: lw          $v0, 0xB8C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XB8C);
    // 0x00246E90: bne         $v0, $zero, L_00246ECC
    if (ctx->r2 != 0) {
        // 0x00246E94: nop
    
            goto L_00246ECC;
    }
    // 0x00246E94: nop

    // 0x00246E98: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00246E9C: lwc1        $f0, 0x69D0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X69D0);
    // 0x00246EA0: mul.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x00246EA4: nop

    // 0x00246EA8: mul.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x00246EAC: c.lt.s      $f14, $f1
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f14.fl < ctx->f1.fl;
    // 0x00246EB0: nop

    // 0x00246EB4: bc1tl       L_00246EBC
    if (c1cs) {
        // 0x00246EB8: neg.s       $f14, $f14
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
            goto L_00246EBC;
    }
    goto skip_2;
    // 0x00246EB8: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    skip_2:
L_00246EBC:
    // 0x00246EBC: lwc1        $f12, 0x4($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X4);
    // 0x00246EC0: jal         0x0021170C
    // 0x00246EC4: nop

    func_0021170C(rdram, ctx);
        goto after_1;
    // 0x00246EC4: nop

    after_1:
    // 0x00246EC8: swc1        $f0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f0.u32l;
L_00246ECC:
    // 0x00246ECC: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x00246ED0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00246ED4: lwc1        $f1, 0x69D4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X69D4);
    // 0x00246ED8: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00246EDC: nop

    // 0x00246EE0: bc1tl       L_00247060
    if (c1cs) {
        // 0x00246EE4: swc1        $f1, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
            goto L_00247060;
    }
    goto skip_3;
    // 0x00246EE4: swc1        $f1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    skip_3:
    // 0x00246EE8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00246EEC: lwc1        $f1, 0x69D8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X69D8);
    // 0x00246EF0: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00246EF4: nop

    // 0x00246EF8: bc1f        L_00247060
    if (!c1cs) {
        // 0x00246EFC: nop
    
            goto L_00247060;
    }
    // 0x00246EFC: nop

    // 0x00246F00: j           L_00247060
    // 0x00246F04: swc1        $f1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
        goto L_00247060;
    // 0x00246F04: swc1        $f1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
L_00246F08:
    // 0x00246F08: lb          $v0, 0xC6($a3)
    ctx->r2 = MEM_B(ctx->r7, 0XC6);
    // 0x00246F0C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00246F10: lwc1        $f1, 0x69DC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X69DC);
    // 0x00246F14: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00246F18: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00246F1C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00246F20: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x00246F24: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x00246F28: beq         $v0, $zero, L_00246F40
    if (ctx->r2 == 0) {
        // 0x00246F2C: swc1        $f0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
            goto L_00246F40;
    }
    // 0x00246F2C: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    // 0x00246F30: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00246F34: lwc1        $f0, 0x69E0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X69E0);
    // 0x00246F38: j           L_00246F58
    // 0x00246F3C: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
        goto L_00246F58;
    // 0x00246F3C: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
L_00246F40:
    // 0x00246F40: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x00246F44: beql        $v0, $zero, L_00246F58
    if (ctx->r2 == 0) {
        // 0x00246F48: sw          $zero, 0x8($s0)
        MEM_W(0X8, ctx->r16) = 0;
            goto L_00246F58;
    }
    goto skip_4;
    // 0x00246F48: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    skip_4:
    // 0x00246F4C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00246F50: lwc1        $f0, 0x69E4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X69E4);
    // 0x00246F54: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
L_00246F58:
    // 0x00246F58: lw          $v0, 0x1284($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1284);
    // 0x00246F5C: bnel        $v0, $zero, L_00246F80
    if (ctx->r2 != 0) {
        // 0x00246F60: sw          $zero, 0xC($s0)
        MEM_W(0XC, ctx->r16) = 0;
            goto L_00246F80;
    }
    goto skip_5;
    // 0x00246F60: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    skip_5:
    // 0x00246F64: lb          $v0, 0xC7($a3)
    ctx->r2 = MEM_B(ctx->r7, 0XC7);
    // 0x00246F68: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00246F6C: lwc1        $f1, 0x69E8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X69E8);
    // 0x00246F70: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00246F74: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00246F78: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00246F7C: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
L_00246F80:
    // 0x00246F80: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x00246F84: andi        $v0, $v1, 0x10
    ctx->r2 = ctx->r3 & 0X10;
    // 0x00246F88: bne         $v0, $zero, L_00247060
    if (ctx->r2 != 0) {
        // 0x00246F8C: andi        $v0, $v1, 0x8
        ctx->r2 = ctx->r3 & 0X8;
            goto L_00247060;
    }
    // 0x00246F8C: andi        $v0, $v1, 0x8
    ctx->r2 = ctx->r3 & 0X8;
    // 0x00246F90: beq         $v0, $zero, L_00246FC0
    if (ctx->r2 == 0) {
        // 0x00246F94: andi        $v0, $v1, 0x4
        ctx->r2 = ctx->r3 & 0X4;
            goto L_00246FC0;
    }
    // 0x00246F94: andi        $v0, $v1, 0x4
    ctx->r2 = ctx->r3 & 0X4;
    // 0x00246F98: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00246F9C: lwc1        $f0, 0x69EC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X69EC);
    // 0x00246FA0: mul.s       $f0, $f5, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f5.fl, ctx->f0.fl);
    // 0x00246FA4: lwc1        $f1, 0x4($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X4);
    // 0x00246FA8: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00246FAC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00246FB0: lwc1        $f0, 0x69F0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X69F0);
    // 0x00246FB4: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00246FB8: j           L_00246FE8
    // 0x00246FBC: nop

        goto L_00246FE8;
    // 0x00246FBC: nop

L_00246FC0:
    // 0x00246FC0: beq         $v0, $zero, L_00246FFC
    if (ctx->r2 == 0) {
        // 0x00246FC4: nop
    
            goto L_00246FFC;
    }
    // 0x00246FC4: nop

    // 0x00246FC8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00246FCC: lwc1        $f0, 0x69F4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X69F4);
    // 0x00246FD0: mul.s       $f0, $f5, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f5.fl, ctx->f0.fl);
    // 0x00246FD4: lwc1        $f1, 0x4($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X4);
    // 0x00246FD8: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00246FDC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00246FE0: lwc1        $f0, 0x69F8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X69F8);
    // 0x00246FE4: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
L_00246FE8:
    // 0x00246FE8: nop

    // 0x00246FEC: bc1tl       L_00246FF4
    if (c1cs) {
        // 0x00246FF0: mov.s       $f1, $f0
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
            goto L_00246FF4;
    }
    goto skip_6;
    // 0x00246FF0: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    skip_6:
L_00246FF4:
    // 0x00246FF4: j           L_00247060
    // 0x00246FF8: swc1        $f1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
        goto L_00247060;
    // 0x00246FF8: swc1        $f1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
L_00246FFC:
    // 0x00246FFC: lbu         $v0, 0x2D($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2D);
    // 0x00247000: beq         $v0, $zero, L_00247060
    if (ctx->r2 == 0) {
        // 0x00247004: nop
    
            goto L_00247060;
    }
    // 0x00247004: nop

    // 0x00247008: lwc1        $f14, 0xC($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0XC);
    // 0x0024700C: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00247010: c.eq.s      $f14, $f1
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f14.fl == ctx->f1.fl;
    // 0x00247014: nop

    // 0x00247018: bc1t        L_00247060
    if (c1cs) {
        // 0x0024701C: nop
    
            goto L_00247060;
    }
    // 0x0024701C: nop

    // 0x00247020: lw          $v0, 0xB8C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XB8C);
    // 0x00247024: bne         $v0, $zero, L_00247060
    if (ctx->r2 != 0) {
        // 0x00247028: nop
    
            goto L_00247060;
    }
    // 0x00247028: nop

    // 0x0024702C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00247030: lwc1        $f0, 0x69FC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X69FC);
    // 0x00247034: mul.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x00247038: nop

    // 0x0024703C: mul.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x00247040: c.lt.s      $f14, $f1
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f14.fl < ctx->f1.fl;
    // 0x00247044: nop

    // 0x00247048: bc1tl       L_00247050
    if (c1cs) {
        // 0x0024704C: neg.s       $f14, $f14
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
            goto L_00247050;
    }
    goto skip_7;
    // 0x0024704C: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    skip_7:
L_00247050:
    // 0x00247050: lwc1        $f12, 0x4($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X4);
    // 0x00247054: jal         0x0021170C
    // 0x00247058: nop

    func_0021170C(rdram, ctx);
        goto after_2;
    // 0x00247058: nop

    after_2:
    // 0x0024705C: swc1        $f0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f0.u32l;
L_00247060:
    // 0x00247060: lwc1        $f2, 0x8($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X8);
    // 0x00247064: mul.s       $f1, $f2, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x00247068: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0024706C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00247070: nop

    // 0x00247074: bc1f        L_0024708C
    if (!c1cs) {
        // 0x00247078: nop
    
            goto L_0024708C;
    }
    // 0x00247078: nop

    // 0x0024707C: neg.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = -ctx->f1.fl;
    // 0x00247080: mul.s       $f3, $f2, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00247084: j           L_00247090
    // 0x00247088: nop

        goto L_00247090;
    // 0x00247088: nop

L_0024708C:
    // 0x0024708C: mul.s       $f3, $f2, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
L_00247090:
    // 0x00247090: lwc1        $f2, 0x0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X0);
    // 0x00247094: mul.s       $f1, $f2, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x00247098: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0024709C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x002470A0: nop

    // 0x002470A4: bc1f        L_002470BC
    if (!c1cs) {
        // 0x002470A8: swc1        $f3, 0x1C($s0)
        MEM_W(0X1C, ctx->r16) = ctx->f_odd[(3 - 1) * 2];
            goto L_002470BC;
    }
    // 0x002470A8: swc1        $f3, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f_odd[(3 - 1) * 2];
    // 0x002470AC: neg.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = -ctx->f1.fl;
    // 0x002470B0: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x002470B4: j           L_002470C4
    // 0x002470B8: swc1        $f0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f0.u32l;
        goto L_002470C4;
    // 0x002470B8: swc1        $f0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f0.u32l;
L_002470BC:
    // 0x002470BC: mul.s       $f0, $f2, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x002470C0: swc1        $f0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f0.u32l;
L_002470C4:
    // 0x002470C4: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x002470C8: lwc1        $f1, 0x4($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X4);
    // 0x002470CC: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x002470D0: swc1        $f1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x002470D4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x002470D8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002470DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002470E0: jr          $ra
    // 0x002470E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002470E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00290DE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00290DE0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    turok2_patch_seqp_play(rdram, ctx);
    // 0x00290DE4: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x00290DE8: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    // 0x00290DEC: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x00290DF0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00290DF4: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00290DF8: jal         0x00291034
    // 0x00290DFC: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_00291034(rdram, ctx);
        goto after_0;
    // 0x00290DFC: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x00290E00: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00290E04: jr          $ra
    // 0x00290E08: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00290E08: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0022425C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0022425C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00224260: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00224264: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00224268: beq         $s0, $zero, L_002242A0
    if (ctx->r16 == 0) {
        // 0x0022426C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_002242A0;
    }
    // 0x0022426C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00224270: lw          $a0, 0x58($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X58);
    // 0x00224274: jal         0x002017D4
    // 0x00224278: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00224278: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x0022427C: lhu         $v1, 0x0($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X0);
    // 0x00224280: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x00224284: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x00224288: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0022428C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00224290: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00224294: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00224298: j           L_002242A4
    // 0x0022429C: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
        goto L_002242A4;
    // 0x0022429C: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
L_002242A0:
    // 0x002242A0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_002242A4:
    // 0x002242A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x002242A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002242AC: jr          $ra
    // 0x002242B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002242B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0045AA70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045AA70: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0045AA74: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0045AA78: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0045AA7C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0045AA80: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0045AA84: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0045AA88: beq         $a0, $v0, L_0045AAA0
    if (ctx->r4 == ctx->r2) {
        // 0x0045AA8C: sw          $s1, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r17;
            goto L_0045AAA0;
    }
    // 0x0045AA8C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0045AA90: addiu       $s0, $a0, 0x1
    ctx->r16 = ADD32(ctx->r4, 0X1);
    // 0x0045AA94: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x0045AA98: beql        $v0, $zero, L_0045AAA0
    if (ctx->r2 == 0) {
        // 0x0045AA9C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0045AAA0;
    }
    goto skip_0;
    // 0x0045AA9C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_0:
L_0045AAA0:
    // 0x0045AAA0: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0045AAA4: addiu       $s2, $zero, -0x2
    ctx->r18 = ADD32(0, -0X2);
L_0045AAA8:
    // 0x0045AAA8: jal         0x004263A0
    // 0x0045AAAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_004263A0(rdram, ctx);
        goto after_0;
    // 0x0045AAAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0045AAB0: jal         0x0042647C
    // 0x0045AAB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    entry_0042647C(rdram, ctx);
        goto after_1;
    // 0x0045AAB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0045AAB8: bne         $v0, $s2, L_0045AAE0
    if (ctx->r2 != ctx->r18) {
        // 0x0045AABC: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_0045AAE0;
    }
    // 0x0045AABC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0045AAC0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0045AAC4: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x0045AAC8: beql        $v0, $zero, L_0045AAD0
    if (ctx->r2 == 0) {
        // 0x0045AACC: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0045AAD0;
    }
    goto skip_1;
    // 0x0045AACC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_1:
L_0045AAD0:
    // 0x0045AAD0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0045AAD4: slti        $v0, $s1, 0x4
    ctx->r2 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x0045AAD8: bne         $v0, $zero, L_0045AAA8
    if (ctx->r2 != 0) {
        // 0x0045AADC: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_0045AAA8;
    }
    // 0x0045AADC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_0045AAE0:
    // 0x0045AAE0: beql        $s1, $v0, L_0045AAE8
    if (ctx->r17 == ctx->r2) {
        // 0x0045AAE4: addiu       $s0, $zero, -0x1
        ctx->r16 = ADD32(0, -0X1);
            goto L_0045AAE8;
    }
    goto skip_2;
    // 0x0045AAE4: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    skip_2:
L_0045AAE8:
    // 0x0045AAE8: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x0045AAEC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0045AAF0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0045AAF4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0045AAF8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0045AAFC: jr          $ra
    // 0x0045AB00: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0045AB00: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00421528(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00421528: lui         $t0, 0x800F
    ctx->r8 = S32(0X800F << 16);
    // 0x0042152C: addiu       $t0, $t0, 0x7078
    ctx->r8 = ADD32(ctx->r8, 0X7078);
    // 0x00421530: addiu       $a0, $a0, 0x520
    ctx->r4 = ADD32(ctx->r4, 0X520);
    // 0x00421534: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00421538: lw          $v0, 0x201C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X201C);
    // 0x0042153C: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x00421540: lbu         $t1, -0x53A8($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X53A8);
    // 0x00421544: addiu       $v1, $v0, 0x18
    ctx->r3 = ADD32(ctx->r2, 0X18);
    // 0x00421548: addiu       $v0, $v0, 0x4F8
    ctx->r2 = ADD32(ctx->r2, 0X4F8);
L_0042154C:
    // 0x0042154C: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x00421550: lw          $t3, 0x4($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X4);
    // 0x00421554: lw          $t4, 0x8($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X8);
    // 0x00421558: lw          $t5, 0xC($v1)
    ctx->r13 = MEM_W(ctx->r3, 0XC);
    // 0x0042155C: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x00421560: sw          $t3, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r11;
    // 0x00421564: sw          $t4, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r12;
    // 0x00421568: sw          $t5, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r13;
    // 0x0042156C: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00421570: bne         $v1, $v0, L_0042154C
    if (ctx->r3 != ctx->r2) {
        // 0x00421574: addiu       $a0, $a0, 0x10
        ctx->r4 = ADD32(ctx->r4, 0X10);
            goto L_0042154C;
    }
    // 0x00421574: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x00421578: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0042157C: lw          $v0, 0x201C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X201C);
    // 0x00421580: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x00421584: addiu       $a1, $a1, -0x5528
    ctx->r5 = ADD32(ctx->r5, -0X5528);
    // 0x00421588: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x0042158C: lw          $t3, 0x4($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X4);
    // 0x00421590: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x00421594: sw          $t3, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r11;
    // 0x00421598: addiu       $a0, $v0, 0x500
    ctx->r4 = ADD32(ctx->r2, 0X500);
    // 0x0042159C: addiu       $v0, $v0, 0x680
    ctx->r2 = ADD32(ctx->r2, 0X680);
L_004215A0:
    // 0x004215A0: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x004215A4: lw          $t3, 0x4($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X4);
    // 0x004215A8: lw          $t4, 0x8($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X8);
    // 0x004215AC: lw          $t5, 0xC($a0)
    ctx->r13 = MEM_W(ctx->r4, 0XC);
    // 0x004215B0: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
    // 0x004215B4: sw          $t3, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r11;
    // 0x004215B8: sw          $t4, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r12;
    // 0x004215BC: sw          $t5, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r13;
    // 0x004215C0: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x004215C4: bne         $a0, $v0, L_004215A0
    if (ctx->r4 != ctx->r2) {
        // 0x004215C8: addiu       $a1, $a1, 0x10
        ctx->r5 = ADD32(ctx->r5, 0X10);
            goto L_004215A0;
    }
    // 0x004215C8: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x004215CC: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x004215D0: lw          $v1, 0x201C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X201C);
    // 0x004215D4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x004215D8: addiu       $v0, $v0, -0x5350
    ctx->r2 = ADD32(ctx->r2, -0X5350);
    // 0x004215DC: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x004215E0: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
    // 0x004215E4: lw          $a0, -0x1D4($v0)
    ctx->r4 = MEM_W(ctx->r2, -0X1D4);
    // 0x004215E8: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x004215EC: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x004215F0: lwc1        $f0, 0xC($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0XC);
    // 0x004215F4: lui         $a3, 0x800F
    ctx->r7 = S32(0X800F << 16);
    // 0x004215F8: addiu       $a3, $a3, -0x4540
    ctx->r7 = ADD32(ctx->r7, -0X4540);
    // 0x004215FC: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    // 0x00421600: lwc1        $f0, 0x10($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X10);
    // 0x00421604: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00421608: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x0042160C: lwc1        $f0, 0x14($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X14);
    // 0x00421610: lw          $a1, 0x30($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X30);
    // 0x00421614: addiu       $v1, $v1, 0x684
    ctx->r3 = ADD32(ctx->r3, 0X684);
    // 0x00421618: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x0042161C: sw          $a0, 0x60($at)
    MEM_W(0X60, ctx->r1) = ctx->r4;
    // 0x00421620: sb          $t1, -0x58($v0)
    MEM_B(-0X58, ctx->r2) = ctx->r9;
    // 0x00421624: blez        $a1, L_0042164C
    if (SIGNED(ctx->r5) <= 0) {
        // 0x00421628: swc1        $f0, 0xC($v0)
        MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
            goto L_0042164C;
    }
    // 0x00421628: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
L_0042162C:
    // 0x0042162C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00421630: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00421634: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x00421638: sb          $v0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r2;
    // 0x0042163C: lw          $v0, 0x30($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X30);
    // 0x00421640: slt         $v0, $a2, $v0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00421644: bne         $v0, $zero, L_0042162C
    if (ctx->r2 != 0) {
        // 0x00421648: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_0042162C;
    }
    // 0x00421648: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
L_0042164C:
    // 0x0042164C: jr          $ra
    // 0x00421650: nop

    return;
    // 0x00421650: nop

;}
RECOMP_FUNC void func_0026F070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026F070: jr          $ra
    // 0x0026F074: nop

    return;
    // 0x0026F074: nop

;}
RECOMP_FUNC void func_0026129C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026129C: addiu       $sp, $sp, -0xF0
    ctx->r29 = ADD32(ctx->r29, -0XF0);
    // 0x002612A0: sw          $s2, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r18;
    // 0x002612A4: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x002612A8: sw          $s1, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r17;
    // 0x002612AC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x002612B0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x002612B4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x002612B8: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
    // 0x002612BC: sw          $ra, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r31;
    // 0x002612C0: sw          $s0, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r16;
    // 0x002612C4: jal         0x00246108
    // 0x002612C8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x002612C8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x002612CC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x002612D0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x002612D4: addiu       $s0, $sp, 0xA0
    ctx->r16 = ADD32(ctx->r29, 0XA0);
    // 0x002612D8: jal         0x0024599C
    // 0x002612DC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0024599C(rdram, ctx);
        goto after_1;
    // 0x002612DC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_1:
    // 0x002612E0: lwc1        $f0, 0x9C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x002612E4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002612E8: lwc1        $f1, 0x7A50($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7A50);
    // 0x002612EC: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x002612F0: nop

    // 0x002612F4: bc1fl       L_002612FC
    if (!c1cs) {
        // 0x002612F8: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_002612FC;
    }
    goto skip_0;
    // 0x002612F8: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_0:
L_002612FC:
    // 0x002612FC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261300: lwc1        $f1, 0x7A54($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7A54);
    // 0x00261304: mul.s       $f1, $f0, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00261308: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026130C: lwc1        $f0, 0x7A58($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7A58);
    // 0x00261310: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00261314: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00261318: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0026131C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261320: lwc1        $f0, 0x7A5C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7A5C);
    // 0x00261324: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x00261328: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0026132C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261330: lwc1        $f1, 0x7A60($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7A60);
    // 0x00261334: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x00261338: swc1        $f1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0026133C: jal         0x00260D60
    // 0x00261340: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_00260D60(rdram, ctx);
        goto after_2;
    // 0x00261340: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x00261344: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x00261348: beq         $v0, $zero, L_00261398
    if (ctx->r2 == 0) {
        // 0x0026134C: nop
    
            goto L_00261398;
    }
    // 0x0026134C: nop

    // 0x00261350: lwc1        $f2, 0x34($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X34);
    // 0x00261354: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00261358: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x0026135C: nop

    // 0x00261360: bc1f        L_00261380
    if (!c1cs) {
        // 0x00261364: nop
    
            goto L_00261380;
    }
    // 0x00261364: nop

    // 0x00261368: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026136C: lwc1        $f1, 0x7A64($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7A64);
    // 0x00261370: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x00261374: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00261378: j           L_0026138C
    // 0x0026137C: nop

        goto L_0026138C;
    // 0x0026137C: nop

L_00261380:
    // 0x00261380: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261384: lwc1        $f0, 0x7A68($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7A68);
    // 0x00261388: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
L_0026138C:
    // 0x0026138C: nop

    // 0x00261390: bc1t        L_002613B4
    if (c1cs) {
        // 0x00261394: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_002613B4;
    }
    // 0x00261394: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00261398:
    // 0x00261398: lwc1        $f1, 0x40($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X40);
    // 0x0026139C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002613A0: lwc1        $f0, 0x7A6C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7A6C);
    // 0x002613A4: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x002613A8: nop

    // 0x002613AC: bc1f        L_002613C0
    if (!c1cs) {
        // 0x002613B0: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_002613C0;
    }
    // 0x002613B0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_002613B4:
    // 0x002613B4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x002613B8: jal         0x00243414
    // 0x002613BC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00243414(rdram, ctx);
        goto after_3;
    // 0x002613BC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_3:
L_002613C0:
    // 0x002613C0: lw          $ra, 0xEC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XEC);
    // 0x002613C4: lw          $s2, 0xE8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XE8);
    // 0x002613C8: lw          $s1, 0xE4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XE4);
    // 0x002613CC: lw          $s0, 0xE0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XE0);
    // 0x002613D0: jr          $ra
    // 0x002613D4: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
    return;
    // 0x002613D4: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
;}
RECOMP_FUNC void func_002671B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002671B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002671B8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002671BC: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x002671C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002671C4: bne         $v1, $v0, L_002671E8
    if (ctx->r3 != ctx->r2) {
        // 0x002671C8: nop
    
            goto L_002671E8;
    }
    // 0x002671C8: nop

    // 0x002671CC: lw          $v0, 0x144($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X144);
    // 0x002671D0: bgtz        $v0, L_002671E8
    if (SIGNED(ctx->r2) > 0) {
        // 0x002671D4: nop
    
            goto L_002671E8;
    }
    // 0x002671D4: nop

    // 0x002671D8: jal         0x002683CC
    // 0x002671DC: nop

    func_002683CC(rdram, ctx);
        goto after_0;
    // 0x002671DC: nop

    after_0:
    // 0x002671E0: j           L_002672BC
    // 0x002671E4: nop

        goto L_002672BC;
    // 0x002671E4: nop

L_002671E8:
    // 0x002671E8: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x002671EC: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x002671F0: sltiu       $v0, $v1, 0xD
    ctx->r2 = ctx->r3 < 0XD ? 1 : 0;
    // 0x002671F4: beq         $v0, $zero, L_002672B8
    if (ctx->r2 == 0) {
        // 0x002671F8: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_002672B8;
    }
    // 0x002671F8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x002671FC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00267200: addu        $at, $at, $v0
    gpr jr_addend_00267208 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00267204: lw          $v0, 0x7D68($at)
    ctx->r2 = ADD32(ctx->r1, 0X7D68);
    // 0x00267208: jr          $v0
    // 0x0026720C: nop

    switch (jr_addend_00267208 >> 2) {
        case 0: goto L_002672A8; break;
        case 1: goto L_00267250; break;
        case 2: goto L_002672B8; break;
        case 3: goto L_002672B8; break;
        case 4: goto L_00267250; break;
        case 5: goto L_002672A8; break;
        case 6: goto L_00267298; break;
        case 7: goto L_00267288; break;
        case 8: goto L_00267260; break;
        case 9: goto L_002672B8; break;
        case 10: goto L_002672A8; break;
        case 11: goto L_00267210; break;
        case 12: goto L_002672A8; break;
        default: switch_error(__func__, 0x00267208, 0x800A7D68);
    }
    // 0x0026720C: nop

L_00267210:
    // 0x00267210: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x00267214: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00267218: bne         $v1, $v0, L_00267250
    if (ctx->r3 != ctx->r2) {
        // 0x0026721C: lui         $v1, 0x30
        ctx->r3 = S32(0X30 << 16);
            goto L_00267250;
    }
    // 0x0026721C: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x00267220: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00267224: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00267228: beq         $v0, $zero, L_00267250
    if (ctx->r2 == 0) {
        // 0x0026722C: nop
    
            goto L_00267250;
    }
    // 0x0026722C: nop

    // 0x00267230: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00267234: lw          $v1, 0x1A8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1A8);
    // 0x00267238: lwc1        $f0, 0x30($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X30);
    // 0x0026723C: lwc1        $f1, 0xB24($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0XB24);
    // 0x00267240: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00267244: lwc1        $f1, 0xAC0($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0XAC0);
    // 0x00267248: j           L_002672BC
    // 0x0026724C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
        goto L_002672BC;
    // 0x0026724C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
L_00267250:
    // 0x00267250: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00267254: lwc1        $f0, 0x30($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X30);
    // 0x00267258: j           L_002672BC
    // 0x0026725C: nop

        goto L_002672BC;
    // 0x0026725C: nop

L_00267260:
    // 0x00267260: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x00267264: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00267268: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0026726C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00267270: lwc1        $f0, 0x7D9C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7D9C);
    // 0x00267274: bne         $v0, $zero, L_002672BC
    if (ctx->r2 != 0) {
        // 0x00267278: nop
    
            goto L_002672BC;
    }
    // 0x00267278: nop

    // 0x0026727C: lwc1        $f0, 0x1C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x00267280: j           L_002672BC
    // 0x00267284: nop

        goto L_002672BC;
    // 0x00267284: nop

L_00267288:
    // 0x00267288: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0026728C: lwc1        $f0, 0x20($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X20);
    // 0x00267290: j           L_002672BC
    // 0x00267294: nop

        goto L_002672BC;
    // 0x00267294: nop

L_00267298:
    // 0x00267298: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026729C: lwc1        $f0, 0x7DA0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7DA0);
    // 0x002672A0: j           L_002672BC
    // 0x002672A4: nop

        goto L_002672BC;
    // 0x002672A4: nop

L_002672A8:
    // 0x002672A8: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x002672AC: lwc1        $f0, 0x1C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x002672B0: j           L_002672BC
    // 0x002672B4: nop

        goto L_002672BC;
    // 0x002672B4: nop

L_002672B8:
    // 0x002672B8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_002672BC:
    // 0x002672BC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002672C0: jr          $ra
    // 0x002672C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002672C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0029A55C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029A55C: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // turok2: reconnected split function: a stray ELF symbol at 0x0029A560 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0029A560(rdram, ctx);
;}
RECOMP_FUNC void func_00266644(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00266644: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00266648: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0026664C: lwc1        $f0, 0x40($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X40);
    // 0x00266650: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00266654: lwc1        $f1, 0x7CA8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7CA8);
    // 0x00266658: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0026665C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00266660: lwc1        $f1, 0x7CAC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7CAC);
    // 0x00266664: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00266668: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0026666C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00266670: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00266674: sw          $v0, -0x4750($at)
    MEM_W(-0X4750, ctx->r1) = ctx->r2;
    // 0x00266678: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0026667C: nop

    // 0x00266680: bc1tl       L_00266688
    if (c1cs) {
        // 0x00266684: mov.s       $f1, $f0
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
            goto L_00266688;
    }
    goto skip_0;
    // 0x00266684: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    skip_0:
L_00266688:
    // 0x00266688: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026668C: swc1        $f1, -0x4740($at)
    MEM_W(-0X4740, ctx->r1) = ctx->f_odd[(1 - 1) * 2];
    // 0x00266690: jal         0x0021D928
    // 0x00266694: nop

    func_0021D928(rdram, ctx);
        goto after_0;
    // 0x00266694: nop

    after_0:
    // 0x00266698: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0026669C: jr          $ra
    // 0x002666A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002666A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0027AD98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027AD98: jr          $ra
    // 0x0027AD9C: sw          $zero, 0x40($a0)
    MEM_W(0X40, ctx->r4) = 0;
    return;
    // 0x0027AD9C: sw          $zero, 0x40($a0)
    MEM_W(0X40, ctx->r4) = 0;
;}
RECOMP_FUNC void func_00430330(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00430330: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00430334: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00430338: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0043033C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00430340: jal         0x00285410
    // 0x00430344: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_00285410(rdram, ctx);
        goto after_0;
    // 0x00430344: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
    // 0x00430348: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0043034C: addiu       $a0, $a0, 0x5A50
    ctx->r4 = ADD32(ctx->r4, 0X5A50);
    // 0x00430350: jal         0x0026EDA8
    // 0x00430354: nop

    func_0026EDA8(rdram, ctx);
        goto after_1;
    // 0x00430354: nop

    after_1:
    // 0x00430358: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0043035C: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x00430360: jal         0x0025359C
    // 0x00430364: nop

    func_0025359C(rdram, ctx);
        goto after_2;
    // 0x00430364: nop

    after_2:
    // 0x00430368: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0043036C: addiu       $v0, $v0, -0x5350
    ctx->r2 = ADD32(ctx->r2, -0X5350);
    // 0x00430370: sw          $zero, 0x24($v0)
    MEM_W(0X24, ctx->r2) = 0;
    // turok2: reconnected split function: a stray ELF symbol at 0x00430374 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00430374(rdram, ctx);
;}
RECOMP_FUNC void func_0041DCB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041DCB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041DCB4: beq         $v1, $v0, L_0041DCE4
    if (ctx->r3 == ctx->r2) {
        // 0x0041DCB8: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_0041DCE4;
    }
    // 0x0041DCB8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x0041DCBC: bne         $v0, $zero, L_0041DCD4
    if (ctx->r2 != 0) {
        // 0x0041DCC0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0041DCD4;
    }
    // 0x0041DCC0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0041DCC4: beq         $v1, $v0, L_0041DCF4
    if (ctx->r3 == ctx->r2) {
        // 0x0041DCC8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_0041DCF4;
    }
    // 0x0041DCC8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0041DCCC: beq         $v1, $v0, L_0041DD04
    if (ctx->r3 == ctx->r2) {
        // 0x0041DCD0: nop
    
            goto L_0041DD04;
    }
    // 0x0041DCD0: nop

L_0041DCD4:
    // 0x0041DCD4: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041DCD8: addiu       $v0, $v0, -0x5380
    ctx->r2 = ADD32(ctx->r2, -0X5380);
    // 0x0041DCDC: j           L_0041DD84
    // 0x0041DCE0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
        goto L_0041DD84;
    // 0x0041DCE0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_0041DCE4:
    // 0x0041DCE4: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041DCE8: addiu       $v0, $v0, -0x535C
    ctx->r2 = ADD32(ctx->r2, -0X535C);
    // 0x0041DCEC: j           L_0041DD84
    // 0x0041DCF0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
        goto L_0041DD84;
    // 0x0041DCF0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_0041DCF4:
    // 0x0041DCF4: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041DCF8: addiu       $v0, $v0, -0x5338
    ctx->r2 = ADD32(ctx->r2, -0X5338);
    // 0x0041DCFC: j           L_0041DD84
    // 0x0041DD00: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
        goto L_0041DD84;
    // 0x0041DD00: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_0041DD04:
    // 0x0041DD04: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041DD08: addiu       $v0, $v0, -0x5314
    ctx->r2 = ADD32(ctx->r2, -0X5314);
    // 0x0041DD0C: j           L_0041DD84
    // 0x0041DD10: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
        goto L_0041DD84;
    // 0x0041DD10: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0041DD14: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041DD18: lw          $v0, 0x994($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X994);
    // 0x0041DD1C: beq         $v0, $zero, L_0041DD6C
    if (ctx->r2 == 0) {
        // 0x0041DD20: nop
    
            goto L_0041DD6C;
    }
    // 0x0041DD20: nop

    // 0x0041DD24: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041DD28: lw          $v0, 0x9B4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9B4);
    // 0x0041DD2C: beq         $v0, $zero, L_0041DD44
    if (ctx->r2 == 0) {
        // 0x0041DD30: nop
    
            goto L_0041DD44;
    }
    // 0x0041DD30: nop

    // 0x0041DD34: lui         $v1, 0x44
    ctx->r3 = S32(0X44 << 16);
    // 0x0041DD38: addiu       $v1, $v1, -0x77D4
    ctx->r3 = ADD32(ctx->r3, -0X77D4);
    // 0x0041DD3C: j           L_0041DD88
    // 0x0041DD40: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
        goto L_0041DD88;
    // 0x0041DD40: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_0041DD44:
    // 0x0041DD44: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041DD48: lw          $v0, 0x998($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X998);
    // 0x0041DD4C: lui         $v1, 0x44
    ctx->r3 = S32(0X44 << 16);
    // 0x0041DD50: addiu       $v1, $v1, -0x6E70
    ctx->r3 = ADD32(ctx->r3, -0X6E70);
    // 0x0041DD54: beq         $v0, $zero, L_0041DD88
    if (ctx->r2 == 0) {
        // 0x0041DD58: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_0041DD88;
    }
    // 0x0041DD58: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x0041DD5C: lui         $v1, 0x44
    ctx->r3 = S32(0X44 << 16);
    // 0x0041DD60: addiu       $v1, $v1, -0x410C
    ctx->r3 = ADD32(ctx->r3, -0X410C);
    // 0x0041DD64: j           L_0041DD88
    // 0x0041DD68: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
        goto L_0041DD88;
    // 0x0041DD68: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_0041DD6C:
    // 0x0041DD6C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041DD70: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x0041DD74: beq         $v0, $zero, L_0041DD88
    if (ctx->r2 == 0) {
        // 0x0041DD78: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_0041DD88;
    }
    // 0x0041DD78: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x0041DD7C: lui         $v1, 0x44
    ctx->r3 = S32(0X44 << 16);
    // 0x0041DD80: addiu       $v1, $v1, -0x48C8
    ctx->r3 = ADD32(ctx->r3, -0X48C8);
L_0041DD84:
    // 0x0041DD84: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_0041DD88:
    // 0x0041DD88: jr          $ra
    // 0x0041DD8C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x0041DD8C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_0041822C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041822C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00418230: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00418234: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00418238: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x0041823C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00418240: lw          $s1, 0x1C($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X1C);
    // 0x00418244: jal         0x00421250
    // 0x00418248: nop

    func_00421250(rdram, ctx);
        goto after_0;
    // 0x00418248: nop

    after_0:
    // 0x0041824C: jal         0x00275904
    // 0x00418250: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_00275904(rdram, ctx);
        goto after_1;
    // 0x00418250: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_1:
    // 0x00418254: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00418258: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041825C: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00418260: addiu       $a1, $a1, -0x4958
    ctx->r5 = ADD32(ctx->r5, -0X4958);
    // 0x00418264: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00418268: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x0041826C: jal         0x00416644
    // 0x00418270: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_00416644(rdram, ctx);
        goto after_2;
    // 0x00418270: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_2:
    // 0x00418274: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00418278: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0041827C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00418280: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00418284: jr          $ra
    // 0x00418288: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00418288: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_002A0F28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A0F28: addu        $t2, $a0, $zero
    ctx->r10 = ADD32(ctx->r4, 0);
    // 0x002A0F2C: addu        $t1, $a1, $zero
    ctx->r9 = ADD32(ctx->r5, 0);
    // 0x002A0F30: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x002A0F34: blez        $t1, L_002A0F54
    if (SIGNED(ctx->r9) <= 0) {
        // 0x002A0F38: sll         $t0, $t1, 1
        ctx->r8 = S32(ctx->r9 << 1);
            goto L_002A0F54;
    }
    // 0x002A0F38: sll         $t0, $t1, 1
    ctx->r8 = S32(ctx->r9 << 1);
    // 0x002A0F3C: addu        $v1, $t2, $zero
    ctx->r3 = ADD32(ctx->r10, 0);
L_002A0F40:
    // 0x002A0F40: sw          $a3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r7;
    // 0x002A0F44: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x002A0F48: slt         $v0, $a3, $t1
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x002A0F4C: bne         $v0, $zero, L_002A0F40
    if (ctx->r2 != 0) {
        // 0x002A0F50: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_002A0F40;
    }
    // 0x002A0F50: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_002A0F54:
    // 0x002A0F54: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x002A0F58: blez        $t0, L_002A0FE8
    if (SIGNED(ctx->r8) <= 0) {
        // 0x002A0F5C: addu        $a3, $a2, $zero
        ctx->r7 = ADD32(ctx->r6, 0);
            goto L_002A0FE8;
    }
    // 0x002A0F5C: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
L_002A0F60:
    // 0x002A0F60: slt         $v0, $a3, $a2
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x002A0F64: beq         $v0, $zero, L_002A0FA8
    if (ctx->r2 == 0) {
        // 0x002A0F68: addiu       $a0, $a2, -0x1
        ctx->r4 = ADD32(ctx->r6, -0X1);
            goto L_002A0FA8;
    }
    // 0x002A0F68: addiu       $a0, $a2, -0x1
    ctx->r4 = ADD32(ctx->r6, -0X1);
    // 0x002A0F6C: srl         $v0, $a0, 31
    ctx->r2 = S32(U32(ctx->r4) >> 31);
    // 0x002A0F70: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x002A0F74: sra         $a0, $a0, 1
    ctx->r4 = S32(SIGNED(ctx->r4) >> 1);
    // 0x002A0F78: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x002A0F7C: addu        $a0, $a0, $t2
    ctx->r4 = ADD32(ctx->r4, ctx->r10);
    // 0x002A0F80: addiu       $v0, $a3, -0x1
    ctx->r2 = ADD32(ctx->r7, -0X1);
    // 0x002A0F84: srl         $v1, $v0, 31
    ctx->r3 = S32(U32(ctx->r2) >> 31);
    // 0x002A0F88: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x002A0F8C: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x002A0F90: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002A0F94: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x002A0F98: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x002A0F9C: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
    // 0x002A0FA0: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x002A0FA4: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
L_002A0FA8:
    // 0x002A0FA8: addu        $v1, $t1, $zero
    ctx->r3 = ADD32(ctx->r9, 0);
    // 0x002A0FAC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x002A0FB0: bnel        $v0, $zero, L_002A0FDC
    if (ctx->r2 != 0) {
        // 0x002A0FB4: addiu       $a3, $a3, 0x2
        ctx->r7 = ADD32(ctx->r7, 0X2);
            goto L_002A0FDC;
    }
    goto skip_0;
    // 0x002A0FB4: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    skip_0:
    // 0x002A0FB8: slt         $v0, $v1, $a2
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
L_002A0FBC:
    // 0x002A0FBC: beql        $v0, $zero, L_002A0FDC
    if (ctx->r2 == 0) {
        // 0x002A0FC0: addiu       $a3, $a3, 0x2
        ctx->r7 = ADD32(ctx->r7, 0X2);
            goto L_002A0FDC;
    }
    goto skip_1;
    // 0x002A0FC0: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    skip_1:
    // 0x002A0FC4: subu        $a2, $a2, $v1
    ctx->r6 = SUB32(ctx->r6, ctx->r3);
    // 0x002A0FC8: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x002A0FCC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x002A0FD0: beq         $v0, $zero, L_002A0FBC
    if (ctx->r2 == 0) {
        // 0x002A0FD4: slt         $v0, $v1, $a2
        ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
            goto L_002A0FBC;
    }
    // 0x002A0FD4: slt         $v0, $v1, $a2
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x002A0FD8: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
L_002A0FDC:
    // 0x002A0FDC: slt         $v0, $t0, $a3
    ctx->r2 = SIGNED(ctx->r8) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x002A0FE0: beq         $v0, $zero, L_002A0F60
    if (ctx->r2 == 0) {
        // 0x002A0FE4: addu        $a2, $a2, $v1
        ctx->r6 = ADD32(ctx->r6, ctx->r3);
            goto L_002A0F60;
    }
    // 0x002A0FE4: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
L_002A0FE8:
    // 0x002A0FE8: jr          $ra
    // 0x002A0FEC: nop

    return;
    // 0x002A0FEC: nop

;}
RECOMP_FUNC void func_00452458(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00452458: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0045245C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00452460: addiu       $v0, $v0, -0x5350
    ctx->r2 = ADD32(ctx->r2, -0X5350);
    // 0x00452464: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x00452468: lui         $a2, 0x44
    ctx->r6 = S32(0X44 << 16);
    // 0x0045246C: addiu       $a2, $a2, -0x731C
    ctx->r6 = ADD32(ctx->r6, -0X731C);
    // 0x00452470: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00452474: sw          $zero, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = 0;
    // 0x00452478: sw          $zero, 0x30($v0)
    MEM_W(0X30, ctx->r2) = 0;
    // 0x0045247C: jal         0x00416894
    // 0x00452480: sw          $zero, 0x28($v0)
    MEM_W(0X28, ctx->r2) = 0;
    func_00416894(rdram, ctx);
        goto after_0;
    // 0x00452480: sw          $zero, 0x28($v0)
    MEM_W(0X28, ctx->r2) = 0;
    after_0:
    // 0x00452484: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00452488: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045248C: jr          $ra
    // 0x00452490: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00452490: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00205EFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00205EFC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00205F00: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00205F04: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x00205F08: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00205F0C: jal         0x0029DFF0
    // 0x00205F10: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_0029DFF0(rdram, ctx);
        goto after_0;
    // 0x00205F10: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x00205F14: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00205F18: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00205F1C: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x00205F20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00205F24: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00205F28: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00205F2C: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x00205F30: beq         $v1, $v0, L_00205F5C
    if (ctx->r3 == ctx->r2) {
        // 0x00205F34: nop
    
            goto L_00205F5C;
    }
    // 0x00205F34: nop

    // 0x00205F38: jal         0x0029E010
    // 0x00205F3C: nop

    func_0029E010(rdram, ctx);
        goto after_1;
    // 0x00205F3C: nop

    after_1:
    // 0x00205F40: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00205F44: addiu       $a0, $a0, -0x7250
    ctx->r4 = ADD32(ctx->r4, -0X7250);
    // 0x00205F48: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00205F4C: jal         0x0029B6F0
    // 0x00205F50: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x00205F50: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x00205F54: j           L_00205F68
    // 0x00205F58: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
        goto L_00205F68;
    // 0x00205F58: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00205F5C:
    // 0x00205F5C: jal         0x0029E010
    // 0x00205F60: nop

    func_0029E010(rdram, ctx);
        goto after_3;
    // 0x00205F60: nop

    after_3:
    // 0x00205F64: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00205F68:
    // 0x00205F68: jal         0x002031E8
    // 0x00205F6C: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    func_002031E8(rdram, ctx);
        goto after_4;
    // 0x00205F6C: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    after_4:
    // 0x00205F70: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00205F74: beq         $s0, $zero, L_00206000
    if (ctx->r16 == 0) {
        // 0x00205F78: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00206000;
    }
    // 0x00205F78: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00205F7C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00205F80: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00205F84: addiu       $a3, $zero, 0x22
    ctx->r7 = ADD32(0, 0X22);
    // 0x00205F88: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00205F8C: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x00205F90: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x00205F94: ori         $v1, $v1, 0x100
    ctx->r3 = ctx->r3 | 0X100;
    // 0x00205F98: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x00205F9C: jal         0x002063B4
    // 0x00205FA0: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
    func_002063B4(rdram, ctx);
        goto after_5;
    // 0x00205FA0: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
    after_5:
    // 0x00205FA4: beq         $v0, $zero, L_00205FD0
    if (ctx->r2 == 0) {
        // 0x00205FA8: sw          $v0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r2;
            goto L_00205FD0;
    }
    // 0x00205FA8: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x00205FAC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00205FB0: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x00205FB4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00205FB8: sw          $s1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r17;
    // 0x00205FBC: ori         $v0, $v0, 0x22
    ctx->r2 = ctx->r2 | 0X22;
    // 0x00205FC0: jal         0x00206498
    // 0x00205FC4: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    func_00206498(rdram, ctx);
        goto after_6;
    // 0x00205FC4: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    after_6:
    // 0x00205FC8: j           L_00206000
    // 0x00205FCC: nop

        goto L_00206000;
    // 0x00205FCC: nop

L_00205FD0:
    // 0x00205FD0: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00205FD4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00205FD8: bne         $v0, $zero, L_00205FF0
    if (ctx->r2 != 0) {
        // 0x00205FDC: sw          $v0, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->r2;
            goto L_00205FF0;
    }
    // 0x00205FDC: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x00205FE0: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x00205FE4: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x00205FE8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00205FEC: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
L_00205FF0:
    // 0x00205FF0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00205FF4: jal         0x002062F8
    // 0x00205FF8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002062F8(rdram, ctx);
        goto after_7;
    // 0x00205FF8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_7:
    // 0x00205FFC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_00206000:
    // 0x00206000: jal         0x0029DFF0
    // 0x00206004: nop

    func_0029DFF0(rdram, ctx);
        goto after_8;
    // 0x00206004: nop

    after_8:
    // 0x00206008: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x0020600C: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x00206010: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00206014: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00206018: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x0020601C: beq         $v1, $zero, L_00206048
    if (ctx->r3 == 0) {
        // 0x00206020: nop
    
            goto L_00206048;
    }
    // 0x00206020: nop

    // 0x00206024: jal         0x0029E010
    // 0x00206028: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_9;
    // 0x00206028: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_9:
    // 0x0020602C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00206030: addiu       $a0, $a0, -0x7250
    ctx->r4 = ADD32(ctx->r4, -0X7250);
    // 0x00206034: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00206038: jal         0x0029B820
    // 0x0020603C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_10;
    // 0x0020603C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_10:
    // 0x00206040: j           L_00206054
    // 0x00206044: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
        goto L_00206054;
    // 0x00206044: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_00206048:
    // 0x00206048: jal         0x0029E010
    // 0x0020604C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_11;
    // 0x0020604C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_11:
    // 0x00206050: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_00206054:
    // 0x00206054: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00206058: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0020605C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00206060: jr          $ra
    // 0x00206064: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00206064: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_004567AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004567AC: bc1f        L_004567CC
    if (!c1cs) {
        // 0x004567B0: lui         $v0, 0x800F
        ctx->r2 = S32(0X800F << 16);
            goto L_004567CC;
    }
    // 0x004567B0: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x004567B4: lw          $v0, 0x70A8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X70A8);
    // 0x004567B8: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x004567BC: lw          $v1, 0x2010($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2010);
    // 0x004567C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x004567C4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x004567C8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
L_004567CC:
    // 0x004567CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x004567D0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x004567D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004567D8: beq         $v1, $zero, L_004567F8
    if (ctx->r3 == 0) {
        // 0x004567DC: addiu       $s2, $v0, 0x688
        ctx->r18 = ADD32(ctx->r2, 0X688);
            goto L_004567F8;
    }
    // 0x004567DC: addiu       $s2, $v0, 0x688
    ctx->r18 = ADD32(ctx->r2, 0X688);
    // 0x004567E0: jal         0x002053A8
    // 0x004567E4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_0;
    // 0x004567E4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
    // 0x004567E8: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x004567EC: lw          $a1, 0x2010($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2010);
    // 0x004567F0: jal         0x002052D8
    // 0x004567F4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_1;
    // 0x004567F4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
L_004567F8:
    // 0x004567F8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004567FC: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    // 0x00456800: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x00456804: lw          $s0, 0x70A8($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X70A8);
    // 0x00456808: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x0045680C: addiu       $a3, $a3, 0x13F0
    ctx->r7 = ADD32(ctx->r7, 0X13F0);
    // 0x00456810: addiu       $s0, $s0, 0x688
    ctx->r16 = ADD32(ctx->r16, 0X688);
    // 0x00456814: jal         0x00204EDC
    // 0x00456818: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00204EDC(rdram, ctx);
        goto after_2;
    // 0x00456818: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0045681C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00456820: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x00456824: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00456828: sw          $v0, 0x2010($at)
    MEM_W(0X2010, ctx->r1) = ctx->r2;
    // 0x0045682C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00456830: sw          $a0, 0x2018($at)
    MEM_W(0X2018, ctx->r1) = ctx->r4;
    // 0x00456834: jal         0x00266C5C
    // 0x00456838: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00266C5C(rdram, ctx);
        goto after_3;
    // 0x00456838: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_3:
    // 0x0045683C: addiu       $a2, $s1, 0x520
    ctx->r6 = ADD32(ctx->r17, 0X520);
    // 0x00456840: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00456844: lw          $v0, 0x2018($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2018);
    // 0x00456848: addiu       $a0, $s1, 0xA00
    ctx->r4 = ADD32(ctx->r17, 0XA00);
    // 0x0045684C: addiu       $a1, $v0, 0x18
    ctx->r5 = ADD32(ctx->r2, 0X18);
L_00456850:
    // 0x00456850: lw          $t0, 0x0($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X0);
    // 0x00456854: lw          $t1, 0x4($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X4);
    // 0x00456858: lw          $t2, 0x8($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X8);
    // 0x0045685C: lw          $t3, 0xC($a2)
    ctx->r11 = MEM_W(ctx->r6, 0XC);
    // 0x00456860: sw          $t0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r8;
    // 0x00456864: sw          $t1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r9;
    // 0x00456868: sw          $t2, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r10;
    // 0x0045686C: sw          $t3, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r11;
    // 0x00456870: addiu       $a2, $a2, 0x10
    ctx->r6 = ADD32(ctx->r6, 0X10);
    // 0x00456874: bne         $a2, $a0, L_00456850
    if (ctx->r6 != ctx->r4) {
        // 0x00456878: addiu       $a1, $a1, 0x10
        ctx->r5 = ADD32(ctx->r5, 0X10);
            goto L_00456850;
    }
    // 0x00456878: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x0045687C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00456880: addiu       $v1, $v1, -0x5528
    ctx->r3 = ADD32(ctx->r3, -0X5528);
    // 0x00456884: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00456888: lw          $v0, 0x2018($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2018);
    // 0x0045688C: addiu       $a0, $v1, 0x180
    ctx->r4 = ADD32(ctx->r3, 0X180);
    // 0x00456890: lw          $t0, 0x0($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X0);
    // 0x00456894: lw          $t1, 0x4($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X4);
    // 0x00456898: sw          $t0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r8;
    // 0x0045689C: sw          $t1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r9;
    // 0x004568A0: addiu       $v0, $v0, 0x500
    ctx->r2 = ADD32(ctx->r2, 0X500);
L_004568A4:
    // 0x004568A4: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x004568A8: lw          $t1, 0x4($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X4);
    // 0x004568AC: lw          $t2, 0x8($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X8);
    // 0x004568B0: lw          $t3, 0xC($v1)
    ctx->r11 = MEM_W(ctx->r3, 0XC);
    // 0x004568B4: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x004568B8: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x004568BC: sw          $t2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r10;
    // 0x004568C0: sw          $t3, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r11;
    // 0x004568C4: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x004568C8: bne         $v1, $a0, L_004568A4
    if (ctx->r3 != ctx->r4) {
        // 0x004568CC: addiu       $v0, $v0, 0x10
        ctx->r2 = ADD32(ctx->r2, 0X10);
            goto L_004568A4;
    }
    // 0x004568CC: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x004568D0: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x004568D4: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x004568D8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x004568DC: addiu       $v0, $v0, -0x5350
    ctx->r2 = ADD32(ctx->r2, -0X5350);
    // 0x004568E0: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x004568E4: lw          $a0, 0x2018($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2018);
    // 0x004568E8: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x004568EC: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x004568F0: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x004568F4: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x004568F8: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x004568FC: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
    // 0x00456900: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x00456904: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x00456908: addiu       $v1, $v1, 0x70A8
    ctx->r3 = ADD32(ctx->r3, 0X70A8);
    // 0x0045690C: sw          $s2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r18;
    // 0x00456910: swc1        $f0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f0.u32l;
    // 0x00456914: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00456918: lui         $a1, 0x800F
    ctx->r5 = S32(0X800F << 16);
    // 0x0045691C: addiu       $a1, $a1, -0x4540
    ctx->r5 = ADD32(ctx->r5, -0X4540);
    // 0x00456920: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x00456924: lw          $a2, 0x0($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X0);
    // 0x00456928: jal         0x0029E460
    // 0x0045692C: addiu       $a0, $a0, 0x684
    ctx->r4 = ADD32(ctx->r4, 0X684);
    func_0029E460(rdram, ctx);
        goto after_4;
    // 0x0045692C: addiu       $a0, $a0, 0x684
    ctx->r4 = ADD32(ctx->r4, 0X684);
    after_4:
    // 0x00456930: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00456934: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00456938: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0045693C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00456940: jr          $ra
    // 0x00456944: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00456944: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00262C18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00262C18: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    // 0x00262C1C: c.eq.s      $f21, $f22
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f21.fl == ctx->f22.fl;
    // turok2: reconnected split function: a stray ELF symbol at 0x00262C20 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00262C20(rdram, ctx);
;}
RECOMP_FUNC void func_00426E78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00426E78: addiu       $sp, $sp, -0x400
    ctx->r29 = ADD32(ctx->r29, -0X400);
    // 0x00426E7C: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
    // 0x00426E80: lui         $t3, 0xEDB8
    ctx->r11 = S32(0XEDB8 << 16);
    // 0x00426E84: ori         $t3, $t3, 0x8320
    ctx->r11 = ctx->r11 | 0X8320;
    // 0x00426E88: addu        $t2, $sp, $zero
    ctx->r10 = ADD32(ctx->r29, 0);
L_00426E8C:
    // 0x00426E8C: addu        $a3, $t1, $zero
    ctx->r7 = ADD32(ctx->r9, 0);
    // 0x00426E90: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
L_00426E94:
    // 0x00426E94: andi        $v0, $a3, 0x1
    ctx->r2 = ctx->r7 & 0X1;
    // 0x00426E98: beq         $v0, $zero, L_00426EA4
    if (ctx->r2 == 0) {
        // 0x00426E9C: srl         $v1, $a3, 1
        ctx->r3 = S32(U32(ctx->r7) >> 1);
            goto L_00426EA4;
    }
    // 0x00426E9C: srl         $v1, $a3, 1
    ctx->r3 = S32(U32(ctx->r7) >> 1);
    // 0x00426EA0: xor         $v1, $v1, $t3
    ctx->r3 = ctx->r3 ^ ctx->r11;
L_00426EA4:
    // 0x00426EA4: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x00426EA8: sltiu       $v0, $t0, 0x8
    ctx->r2 = ctx->r8 < 0X8 ? 1 : 0;
    // 0x00426EAC: bne         $v0, $zero, L_00426E94
    if (ctx->r2 != 0) {
        // 0x00426EB0: addu        $a3, $v1, $zero
        ctx->r7 = ADD32(ctx->r3, 0);
            goto L_00426E94;
    }
    // 0x00426EB0: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
    // 0x00426EB4: sw          $a3, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r7;
    // 0x00426EB8: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x00426EBC: sltiu       $v0, $t1, 0x100
    ctx->r2 = ctx->r9 < 0X100 ? 1 : 0;
    // 0x00426EC0: bne         $v0, $zero, L_00426E8C
    if (ctx->r2 != 0) {
        // 0x00426EC4: addiu       $t2, $t2, 0x4
        ctx->r10 = ADD32(ctx->r10, 0X4);
            goto L_00426E8C;
    }
    // 0x00426EC4: addiu       $t2, $t2, 0x4
    ctx->r10 = ADD32(ctx->r10, 0X4);
    // 0x00426EC8: addu        $a1, $a0, $a1
    ctx->r5 = ADD32(ctx->r4, ctx->r5);
    // 0x00426ECC: sltu        $v0, $a0, $a1
    ctx->r2 = ctx->r4 < ctx->r5 ? 1 : 0;
    // 0x00426ED0: beq         $v0, $zero, L_00426F14
    if (ctx->r2 == 0) {
        // 0x00426ED4: nor         $a2, $zero, $a2
        ctx->r6 = ~(0 | ctx->r6);
            goto L_00426F14;
    }
    // 0x00426ED4: nor         $a2, $zero, $a2
    ctx->r6 = ~(0 | ctx->r6);
    // 0x00426ED8: lui         $a3, 0xFF
    ctx->r7 = S32(0XFF << 16);
    // 0x00426EDC: ori         $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 | 0XFFFF;
L_00426EE0:
    // 0x00426EE0: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x00426EE4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00426EE8: xor         $v0, $a2, $v0
    ctx->r2 = ctx->r6 ^ ctx->r2;
    // 0x00426EEC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x00426EF0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00426EF4: addu        $v1, $sp, $v0
    ctx->r3 = ADD32(ctx->r29, ctx->r2);
    // 0x00426EF8: srl         $v0, $a2, 8
    ctx->r2 = S32(U32(ctx->r6) >> 8);
    // 0x00426EFC: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x00426F00: and         $v0, $v0, $a3
    ctx->r2 = ctx->r2 & ctx->r7;
    // 0x00426F04: xor         $a2, $v1, $v0
    ctx->r6 = ctx->r3 ^ ctx->r2;
    // 0x00426F08: sltu        $v0, $a0, $a1
    ctx->r2 = ctx->r4 < ctx->r5 ? 1 : 0;
    // 0x00426F0C: bne         $v0, $zero, L_00426EE0
    if (ctx->r2 != 0) {
        // 0x00426F10: nop
    
            goto L_00426EE0;
    }
    // 0x00426F10: nop

L_00426F14:
    // 0x00426F14: nor         $v0, $zero, $a2
    ctx->r2 = ~(0 | ctx->r6);
    // 0x00426F18: jr          $ra
    // 0x00426F1C: addiu       $sp, $sp, 0x400
    ctx->r29 = ADD32(ctx->r29, 0X400);
    return;
    // 0x00426F1C: addiu       $sp, $sp, 0x400
    ctx->r29 = ADD32(ctx->r29, 0X400);
;}
RECOMP_FUNC void func_0040C7B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040C7B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0040C7B8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x0040C7BC: lw          $a0, -0x490($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X490);
    // 0x0040C7C0: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x0040C7C4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0040C7C8: jal         0x00243414
    // 0x0040C7CC: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0040C7CC: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_0:
    // 0x0040C7D0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0040C7D4: jr          $ra
    // 0x0040C7D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040C7D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0028EA10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028EA10: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x0028EA14: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0028EA18: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0028EA1C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0028EA20: bnel        $v0, $zero, L_0028EA28
    if (ctx->r2 != 0) {
        // 0x0028EA24: sw          $a1, 0x4($v0)
        MEM_W(0X4, ctx->r2) = ctx->r5;
            goto L_0028EA28;
    }
    goto skip_0;
    // 0x0028EA24: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
    skip_0:
L_0028EA28:
    // 0x0028EA28: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0028EA2C: bne         $v0, $zero, L_0028EA38
    if (ctx->r2 != 0) {
        // 0x0028EA30: sw          $a1, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r5;
            goto L_0028EA38;
    }
    // 0x0028EA30: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x0028EA34: sw          $a1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r5;
L_0028EA38:
    // 0x0028EA38: jr          $ra
    // 0x0028EA3C: nop

    return;
    // 0x0028EA3C: nop

;}
RECOMP_FUNC void func_00265544(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00265544: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00265548: addiu       $v0, $v0, 0x2290
    ctx->r2 = ADD32(ctx->r2, 0X2290);
    // 0x0026554C: sw          $v0, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r2;
    // 0x00265550: lui         $v0, 0x26
    ctx->r2 = S32(0X26 << 16);
    // 0x00265554: addiu       $v0, $v0, 0x55C4
    ctx->r2 = ADD32(ctx->r2, 0X55C4);
    // 0x00265558: jr          $ra
    // 0x0026555C: sw          $v0, 0xF0($a1)
    MEM_W(0XF0, ctx->r5) = ctx->r2;
    return;
    // 0x0026555C: sw          $v0, 0xF0($a1)
    MEM_W(0XF0, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_002184AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002184AC: lui         $v1, 0xFFF
    ctx->r3 = S32(0XFFF << 16);
    // 0x002184B0: ori         $v1, $v1, 0xFFE0
    ctx->r3 = ctx->r3 | 0XFFE0;
    // 0x002184B4: lw          $t0, 0x0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X0);
    // 0x002184B8: lui         $v0, 0xF000
    ctx->r2 = S32(0XF000 << 16);
    // 0x002184BC: and         $v0, $t0, $v0
    ctx->r2 = ctx->r8 & ctx->r2;
    // 0x002184C0: and         $v1, $t0, $v1
    ctx->r3 = ctx->r8 & ctx->r3;
    // 0x002184C4: srl         $v1, $v1, 3
    ctx->r3 = S32(U32(ctx->r3) >> 3);
    // 0x002184C8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x002184CC: andi        $v1, $t0, 0x1F
    ctx->r3 = ctx->r8 & 0X1F;
    // 0x002184D0: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x002184D4: lw          $a3, 0x4($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X4);
    // 0x002184D8: beq         $v1, $zero, L_002184F0
    if (ctx->r3 == 0) {
        // 0x002184DC: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_002184F0;
    }
    // 0x002184DC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x002184E0: srlv        $a2, $a2, $v1
    ctx->r6 = S32(U32(ctx->r6) >> (ctx->r3 & 31));
    // 0x002184E4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x002184E8: sllv        $a3, $a3, $v0
    ctx->r7 = S32(ctx->r7 << (ctx->r2 & 31));
    // 0x002184EC: or          $a2, $a2, $a3
    ctx->r6 = ctx->r6 | ctx->r7;
L_002184F0:
    // 0x002184F0: sltiu       $v0, $a1, 0x20
    ctx->r2 = ctx->r5 < 0X20 ? 1 : 0;
    // 0x002184F4: beql        $v0, $zero, L_00218510
    if (ctx->r2 == 0) {
        // 0x002184F8: addu        $v0, $t0, $a1
        ctx->r2 = ADD32(ctx->r8, ctx->r5);
            goto L_00218510;
    }
    goto skip_0;
    // 0x002184F8: addu        $v0, $t0, $a1
    ctx->r2 = ADD32(ctx->r8, ctx->r5);
    skip_0:
    // 0x002184FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00218500: sllv        $v0, $v0, $a1
    ctx->r2 = S32(ctx->r2 << (ctx->r5 & 31));
    // 0x00218504: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00218508: and         $a2, $a2, $v0
    ctx->r6 = ctx->r6 & ctx->r2;
    // 0x0021850C: addu        $v0, $t0, $a1
    ctx->r2 = ADD32(ctx->r8, ctx->r5);
L_00218510:
    // 0x00218510: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00218514: jr          $ra
    // 0x00218518: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    return;
    // 0x00218518: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
;}
RECOMP_FUNC void func_004304FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004304FC: swc1        $f0, 0xA2C($s0)
    MEM_W(0XA2C, ctx->r16) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_00242604(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00242604: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00242608: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0024260C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00242610: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00242614: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00242618: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0024261C: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x00242620: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x00242624: addiu       $a0, $v0, 0x14
    ctx->r4 = ADD32(ctx->r2, 0X14);
    // 0x00242628: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0024262C: addiu       $v0, $v0, 0x1E10
    ctx->r2 = ADD32(ctx->r2, 0X1E10);
    // 0x00242630: beq         $v1, $v0, L_002426E0
    if (ctx->r3 == ctx->r2) {
        // 0x00242634: nop
    
            goto L_002426E0;
    }
    // 0x00242634: nop

    // 0x00242638: lb          $v0, 0x4($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X4);
    // 0x0024263C: beq         $v0, $zero, L_002426E0
    if (ctx->r2 == 0) {
        // 0x00242640: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002426E0;
    }
    // 0x00242640: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00242644: lhu         $v1, 0x4($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X4);
    // 0x00242648: beq         $v1, $v0, L_0024268C
    if (ctx->r3 == ctx->r2) {
        // 0x0024264C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_0024268C;
    }
    // 0x0024264C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x00242650: beq         $v0, $zero, L_00242668
    if (ctx->r2 == 0) {
        // 0x00242654: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00242668;
    }
    // 0x00242654: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00242658: beq         $v1, $zero, L_00242678
    if (ctx->r3 == 0) {
        // 0x0024265C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00242678;
    }
    // 0x0024265C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00242660: j           L_002426AC
    // 0x00242664: nop

        goto L_002426AC;
    // 0x00242664: nop

L_00242668:
    // 0x00242668: beq         $v1, $v0, L_002426A0
    if (ctx->r3 == ctx->r2) {
        // 0x0024266C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002426A0;
    }
    // 0x0024266C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00242670: j           L_002426AC
    // 0x00242674: nop

        goto L_002426AC;
    // 0x00242674: nop

L_00242678:
    // 0x00242678: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0024267C: jal         0x00241E30
    // 0x00242680: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00241E30(rdram, ctx);
        goto after_0;
    // 0x00242680: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
    // 0x00242684: j           L_002426AC
    // 0x00242688: nop

        goto L_002426AC;
    // 0x00242688: nop

L_0024268C:
    // 0x0024268C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00242690: jal         0x00242284
    // 0x00242694: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00242284(rdram, ctx);
        goto after_1;
    // 0x00242694: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x00242698: j           L_002426AC
    // 0x0024269C: nop

        goto L_002426AC;
    // 0x0024269C: nop

L_002426A0:
    // 0x002426A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002426A4: jal         0x00241FC8
    // 0x002426A8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00241FC8(rdram, ctx);
        goto after_2;
    // 0x002426A8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
L_002426AC:
    // 0x002426AC: beq         $v0, $zero, L_002426E0
    if (ctx->r2 == 0) {
        // 0x002426B0: nop
    
            goto L_002426E0;
    }
    // 0x002426B0: nop

    // 0x002426B4: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x002426B8: lw          $v0, 0x1ADC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1ADC);
    // 0x002426BC: sw          $zero, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = 0;
    // 0x002426C0: sw          $zero, 0x40($s0)
    MEM_W(0X40, ctx->r16) = 0;
    // 0x002426C4: sw          $s1, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r17;
    // 0x002426C8: addiu       $v1, $v0, 0x90
    ctx->r3 = ADD32(ctx->r2, 0X90);
    // 0x002426CC: sw          $v1, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r3;
    // 0x002426D0: addiu       $v1, $v0, 0x8C
    ctx->r3 = ADD32(ctx->r2, 0X8C);
    // 0x002426D4: addiu       $v0, $v0, 0x88
    ctx->r2 = ADD32(ctx->r2, 0X88);
    // 0x002426D8: sw          $v1, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r3;
    // 0x002426DC: sw          $v0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r2;
L_002426E0:
    // 0x002426E0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x002426E4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002426E8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002426EC: jr          $ra
    // 0x002426F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002426F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00268AB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00268AB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00268AB8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00268ABC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00268AC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00268AC4: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    // 0x00268AC8: beq         $a1, $zero, L_00268AF8
    if (ctx->r5 == 0) {
        // 0x00268ACC: nop
    
            goto L_00268AF8;
    }
    // 0x00268ACC: nop

    // 0x00268AD0: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x00268AD4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00268AD8: beq         $v0, $zero, L_00268AF8
    if (ctx->r2 == 0) {
        // 0x00268ADC: nop
    
            goto L_00268AF8;
    }
    // 0x00268ADC: nop

    // 0x00268AE0: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00268AE4: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00268AE8: jal         0x0022425C
    // 0x00268AEC: nop

    func_0022425C(rdram, ctx);
        goto after_0;
    // 0x00268AEC: nop

    after_0:
    // 0x00268AF0: bne         $v0, $zero, L_00268B04
    if (ctx->r2 != 0) {
        // 0x00268AF4: nop
    
            goto L_00268B04;
    }
    // 0x00268AF4: nop

L_00268AF8:
    // 0x00268AF8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00268AFC: j           L_00268B40
    // 0x00268B00: nop

        goto L_00268B40;
    // 0x00268B00: nop

L_00268B04:
    // 0x00268B04: lwc1        $f1, 0x20($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X20);
    // 0x00268B08: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x00268B0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00268B10: bne         $v1, $v0, L_00268B40
    if (ctx->r3 != ctx->r2) {
        // 0x00268B14: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_00268B40;
    }
    // 0x00268B14: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    // 0x00268B18: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x00268B1C: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x00268B20: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00268B24: beq         $v0, $zero, L_00268B40
    if (ctx->r2 == 0) {
        // 0x00268B28: nop
    
            goto L_00268B40;
    }
    // 0x00268B28: nop

    // 0x00268B2C: lw          $v0, 0x1A8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A8);
    // 0x00268B30: lw          $v0, 0x51C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X51C);
    // 0x00268B34: lwc1        $f0, 0x250($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X250);
    // 0x00268B38: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00268B3C: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
L_00268B40:
    // 0x00268B40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00268B44: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // turok2: reconnected split function: a stray ELF symbol at 0x00268B48 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00268B48(rdram, ctx);
;}
RECOMP_FUNC void func_002682B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002682B8: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x002682BC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x002682C0: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x002682C4: jr          $ra
    // 0x002682C8: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    return;
    // 0x002682C8: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
;}
RECOMP_FUNC void func_0044FC00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044FC00: sw          $zero, 0x1CC($a0)
    MEM_W(0X1CC, ctx->r4) = 0;
    // 0x0044FC04: jr          $ra
    // 0x0044FC08: sw          $zero, 0x1C8($a0)
    MEM_W(0X1C8, ctx->r4) = 0;
    return;
    // 0x0044FC08: sw          $zero, 0x1C8($a0)
    MEM_W(0X1C8, ctx->r4) = 0;
;}
RECOMP_FUNC void func_0029A4CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029A4CC: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // turok2: reconnected split function: a stray ELF symbol at 0x0029A4D0 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0029A4D0(rdram, ctx);
;}
RECOMP_FUNC void func_00265838(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00265838: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0026583C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x00265840: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00265844: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00265848: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x0026584C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x00265850: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x00265854: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x00265858: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0026585C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x00265860: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00265864: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x00265868: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0026586C: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x00265870: lw          $a3, 0x4($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X4);
    // 0x00265874: jal         0x00237EE4
    // 0x00265878: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_00237EE4(rdram, ctx);
        goto after_0;
    // 0x00265878: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_0:
    // 0x0026587C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00265880: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00265884: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00265888: jal         0x00220260
    // 0x0026588C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_00220260(rdram, ctx);
        goto after_1;
    // 0x0026588C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x00265890: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x00265894: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x00265898: jr          $ra
    // 0x0026589C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0026589C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0029B4A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029B4A4: neg.s       $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = -ctx->f3.fl;
    // 0x0029B4A8: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
;}
RECOMP_FUNC void func_00258D6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00258D6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00258D70: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00258D74: lw          $a0, 0x1A8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1A8);
    // 0x00258D78: jal         0x0042EB04
    // 0x00258D7C: nop

    func_0042EB04(rdram, ctx);
        goto after_0;
    // 0x00258D7C: nop

    after_0:
    // 0x00258D80: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00258D84: jr          $ra
    // 0x00258D88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00258D88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_004412A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004084AC:
    // 0x004412A0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
L_00408560:
    // 0x004412A4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
L_00408574:
    // 0x004412A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004412AC: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x004412B0: addiu       $s0, $s0, -0x5378
    ctx->r16 = ADD32(ctx->r16, -0X5378);
    // 0x004412B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x004412B8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x004412BC: sdc1        $f21, 0x28($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X28, ctx->r29);
    // 0x004412C0: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x004412C4: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x004412C8: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x004412CC: bne         $v1, $v0, L_00441580
    if (ctx->r3 != ctx->r2) {
        // 0x004412D0: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_00441580;
    }
    // 0x004412D0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x004412D4: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x004412D8: lw          $v1, 0x7078($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7078);
    // 0x004412DC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x004412E0: bne         $v1, $v0, L_00441580
    if (ctx->r3 != ctx->r2) {
        // 0x004412E4: nop
    
            goto L_00441580;
    }
    // 0x004412E4: nop

    // 0x004412E8: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x004412EC: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x004412F0: lw          $v1, 0x54($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X54);
    // 0x004412F4: lwc1        $f1, 0xC($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XC);
    // 0x004412F8: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x004412FC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00441300: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00441304: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00441308: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0044130C: nop

    // 0x00441310: bc1f        L_00441344
    if (!c1cs) {
        // 0x00441314: nop
    
            goto L_00441344;
    }
    // 0x00441314: nop

    // 0x00441318: jal         0x002532A8
    // 0x0044131C: addiu       $a0, $s0, -0x1418
    ctx->r4 = ADD32(ctx->r16, -0X1418);
    func_002532A8(rdram, ctx);
        goto after_0;
    // 0x0044131C: addiu       $a0, $s0, -0x1418
    ctx->r4 = ADD32(ctx->r16, -0X1418);
    after_0:
    // 0x00441320: lw          $a1, 0x51C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X51C);
    // 0x00441324: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    // 0x00441328: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0044132C: addiu       $a2, $a2, 0x6684
    ctx->r6 = ADD32(ctx->r6, 0X6684);
    // 0x00441330: jal         0x00281610
    // 0x00441334: addiu       $a0, $s0, -0x13D8
    ctx->r4 = ADD32(ctx->r16, -0X13D8);
    func_00281610(rdram, ctx);
        goto after_1;
    // 0x00441334: addiu       $a0, $s0, -0x13D8
    ctx->r4 = ADD32(ctx->r16, -0X13D8);
    after_1:
    // 0x00441338: jal         0x0027580C
    // 0x0044133C: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    func_0027580C(rdram, ctx);
        goto after_2;
    // 0x0044133C: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    after_2:
    // 0x00441340: lwc1        $f1, 0xC($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XC);
L_00441344:
    // 0x00441344: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00441348: lwc1        $f0, 0x58C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X58C);
    // 0x0044134C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00441350: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x00441354: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00441358: lwc1        $f21, 0x590($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X590);
    // 0x0044135C: lwc1        $f0, 0x40($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X40);
    // 0x00441360: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00441364: div.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00441368: mul.s       $f1, $f1, $f21
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f21.fl);
    // 0x0044136C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x00441370: lui         $s0, 0x8011
    ctx->r16 = S32(0X8011 << 16);
    // 0x00441374: addiu       $s0, $s0, 0xF0
    ctx->r16 = ADD32(ctx->r16, 0XF0);
    // 0x00441378: c.lt.s      $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f1.fl < ctx->f20.fl;
    // 0x0044137C: nop

    // 0x00441380: bc1t        L_00441390
    if (c1cs) {
        // 0x00441384: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_00441390;
    }
    // 0x00441384: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00441388: trunc.w.s   $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x0044138C: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
L_00441390:
    // 0x00441390: jal         0x0027AD88
    // 0x00441394: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0027AD88(rdram, ctx);
        goto after_3;
    // 0x00441394: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x00441398: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x0044139C: lh          $v1, 0x46($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X46);
    // 0x004413A0: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x004413A4: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x004413A8: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x004413AC: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x004413B0: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x004413B4: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x004413B8: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x004413BC: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x004413C0: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x004413C4: nop

    // 0x004413C8: bc1t        L_004413D8
    if (c1cs) {
        // 0x004413CC: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_004413D8;
    }
    // 0x004413CC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x004413D0: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x004413D4: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
L_004413D8:
    // 0x004413D8: jal         0x0027AD90
    // 0x004413DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0027AD90(rdram, ctx);
        goto after_4;
    // 0x004413DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x004413E0: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x004413E4: bne         $v0, $zero, L_004414AC
    if (ctx->r2 != 0) {
        // 0x004413E8: nop
    
            goto L_004414AC;
    }
    // 0x004413E8: nop

    // 0x004413EC: lwc1        $f1, 0xC($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XC);
    // 0x004413F0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004413F4: lwc1        $f0, 0x594($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X594);
    // 0x004413F8: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x004413FC: nop

    // 0x00441400: bc1f        L_0044144C
    if (!c1cs) {
        // 0x00441404: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_0044144C;
    }
    // 0x00441404: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x00441408: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x0044140C: beq         $v0, $s2, L_0044144C
    if (ctx->r2 == ctx->r18) {
        // 0x00441410: addiu       $a1, $zero, 0x5335
        ctx->r5 = ADD32(0, 0X5335);
            goto L_0044144C;
    }
    // 0x00441410: addiu       $a1, $zero, 0x5335
    ctx->r5 = ADD32(0, 0X5335);
    // 0x00441414: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x00441418: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x0044141C: jal         0x00219F74
    // 0x00441420: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00219F74(rdram, ctx);
        goto after_5;
    // 0x00441420: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x00441424: addiu       $a0, $s0, 0x140
    ctx->r4 = ADD32(ctx->r16, 0X140);
    // 0x00441428: sb          $v0, 0xC6($a0)
    MEM_B(0XC6, ctx->r4) = ctx->r2;
    // 0x0044142C: addiu       $v0, $zero, 0x5335
    ctx->r2 = ADD32(0, 0X5335);
    // 0x00441430: sh          $v0, 0xC4($a0)
    MEM_H(0XC4, ctx->r4) = ctx->r2;
    // 0x00441434: lw          $v0, 0x140($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X140);
    // 0x00441438: addiu       $v1, $zero, -0x2
    ctx->r3 = ADD32(0, -0X2);
    // 0x0044143C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00441440: sw          $v0, 0x140($s0)
    MEM_W(0X140, ctx->r16) = ctx->r2;
    // 0x00441444: sb          $zero, 0xC7($a0)
    MEM_B(0XC7, ctx->r4) = 0;
    // 0x00441448: sw          $s2, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r18;
L_0044144C:
    // 0x0044144C: lwc1        $f0, 0xC($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XC);
    // 0x00441450: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00441454: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x00441458: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x0044145C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00441460: lh          $v1, 0x46($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X46);
    // 0x00441464: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x00441468: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0044146C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x00441470: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x00441474: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00441478: nop

    // 0x0044147C: bc1f        L_0044149C
    if (!c1cs) {
        // 0x00441480: swc1        $f0, 0xC($s1)
        MEM_W(0XC, ctx->r17) = ctx->f0.u32l;
            goto L_0044149C;
    }
    // 0x00441480: swc1        $f0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f0.u32l;
    // 0x00441484: blez        $v1, L_004414A4
    if (SIGNED(ctx->r3) <= 0) {
        // 0x00441488: nop
    
            goto L_004414A4;
    }
    // 0x00441488: nop

    // 0x0044148C: jal         0x0040813C
    // 0x00441490: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0040813C(rdram, ctx);
        goto after_6;
    // 0x00441490: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
    // 0x00441494: j           L_004084AC
    // 0x00441498: nop

    entry_004084AC(rdram, ctx);
    return;
    // 0x00441498: nop

L_0044149C:
    // 0x0044149C: bgtzl       $v0, L_004414AC
    if (SIGNED(ctx->r2) > 0) {
        // 0x004414A0: sw          $zero, 0x8($s1)
        MEM_W(0X8, ctx->r17) = 0;
            goto L_004414AC;
    }
    goto skip_0;
    // 0x004414A0: sw          $zero, 0x8($s1)
    MEM_W(0X8, ctx->r17) = 0;
    skip_0:
L_004414A4:
    // 0x004414A4: jal         0x00407F20
    // 0x004414A8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00407F20(rdram, ctx);
        goto after_7;
    // 0x004414A8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_7:
L_004414AC:
    // 0x004414AC: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    // 0x004414B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004414B4: beq         $v1, $v0, L_00441580
    if (ctx->r3 == ctx->r2) {
        // 0x004414B8: nop
    
            goto L_00441580;
    }
    // 0x004414B8: nop

    // 0x004414BC: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x004414C0: lw          $a0, -0x14C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X14C);
    // 0x004414C4: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x004414C8: lw          $a1, -0x6770($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X6770);
    // 0x004414CC: beq         $a0, $zero, L_00441580
    if (ctx->r4 == 0) {
        // 0x004414D0: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_00441580;
    }
    // 0x004414D0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x004414D4: addu        $t1, $v0, $zero
    ctx->r9 = ADD32(ctx->r2, 0);
    // 0x004414D8: lui         $t0, 0x2000
    ctx->r8 = S32(0X2000 << 16);
    // 0x004414DC: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
L_004414E0:
    // 0x004414E0: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x004414E4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x004414E8: bne         $v0, $t1, L_00441574
    if (ctx->r2 != ctx->r9) {
        // 0x004414EC: nop
    
            goto L_00441574;
    }
    // 0x004414EC: nop

    // 0x004414F0: lw          $v0, 0x1B8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1B8);
    // 0x004414F4: bne         $v0, $zero, L_00441574
    if (ctx->r2 != 0) {
        // 0x004414F8: nop
    
            goto L_00441574;
    }
    // 0x004414F8: nop

    // 0x004414FC: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x00441500: bne         $v0, $zero, L_0044154C
    if (ctx->r2 != 0) {
        // 0x00441504: nop
    
            goto L_0044154C;
    }
    // 0x00441504: nop

    // 0x00441508: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x0044150C: lh          $v0, 0x44($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X44);
    // 0x00441510: slt         $v0, $a2, $v0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00441514: beq         $v0, $zero, L_00441528
    if (ctx->r2 == 0) {
        // 0x00441518: nop
    
            goto L_00441528;
    }
    // 0x00441518: nop

    // 0x0044151C: lw          $v0, 0x140($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X140);
    // 0x00441520: j           L_00408560
    // 0x00441524: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    entry_00408560(rdram, ctx);
    return;
    // 0x00441524: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_00441528:
    // 0x00441528: lw          $v1, 0x140($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X140);
    // 0x0044152C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00441530: or          $v1, $v1, $t0
    ctx->r3 = ctx->r3 | ctx->r8;
    // 0x00441534: sw          $v0, 0x1C0($a0)
    MEM_W(0X1C0, ctx->r4) = ctx->r2;
    // 0x00441538: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x0044153C: or          $v1, $v1, $a3
    ctx->r3 = ctx->r3 | ctx->r7;
    // 0x00441540: sw          $v1, 0x140($a0)
    MEM_W(0X140, ctx->r4) = ctx->r3;
    // 0x00441544: j           L_00408574
    // 0x00441548: sw          $v0, 0x1C8($a0)
    MEM_W(0X1C8, ctx->r4) = ctx->r2;
    entry_00408574(rdram, ctx);
    return;
    // 0x00441548: sw          $v0, 0x1C8($a0)
    MEM_W(0X1C8, ctx->r4) = ctx->r2;
L_0044154C:
    // 0x0044154C: lw          $v1, 0x1C0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C0);
    // 0x00441550: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00441554: bne         $v1, $v0, L_00441574
    if (ctx->r3 != ctx->r2) {
        // 0x00441558: nop
    
            goto L_00441574;
    }
    // 0x00441558: nop

    // 0x0044155C: lw          $v0, 0x140($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X140);
    // 0x00441560: sw          $a1, 0x1C8($a0)
    MEM_W(0X1C8, ctx->r4) = ctx->r5;
    // 0x00441564: sw          $a1, 0x1C0($a0)
    MEM_W(0X1C0, ctx->r4) = ctx->r5;
    // 0x00441568: or          $v0, $v0, $t0
    ctx->r2 = ctx->r2 | ctx->r8;
    // 0x0044156C: or          $v0, $v0, $a3
    ctx->r2 = ctx->r2 | ctx->r7;
    // 0x00441570: sw          $v0, 0x140($a0)
    MEM_W(0X140, ctx->r4) = ctx->r2;
L_00441574:
    // 0x00441574: lw          $a0, 0x28C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X28C);
    // 0x00441578: bne         $a0, $zero, L_004414E0
    if (ctx->r4 != 0) {
        // 0x0044157C: nop
    
            goto L_004414E0;
    }
    // 0x0044157C: nop

L_00441580:
    // 0x00441580: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00441584: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00441588: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0044158C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00441590: ldc1        $f21, 0x28($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X28);
    // 0x00441594: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x00441598: jr          $ra
    // 0x0044159C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0044159C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
