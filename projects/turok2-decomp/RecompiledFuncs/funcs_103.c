#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void entry_0041B314(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B314: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x0041B318: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041B31C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0041B320: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0041B324: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0041B328: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B32C: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0041B330: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x0041B334: beq         $v0, $zero, L_0041B34C
    if (ctx->r2 == 0) {
        // 0x0041B338: nop
    
            goto L_0041B34C;
    }
    // 0x0041B338: nop

    // 0x0041B33C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B340: addiu       $v0, $v0, 0x581C
    ctx->r2 = ADD32(ctx->r2, 0X581C);
    // 0x0041B344: j           L_0041B358
    // 0x0041B348: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041B358;
    // 0x0041B348: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B34C:
    // 0x0041B34C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B350: addiu       $v0, $v0, 0x5838
    ctx->r2 = ADD32(ctx->r2, 0X5838);
    // 0x0041B354: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B358:
    // 0x0041B358: jr          $ra
    // 0x0041B35C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B35C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_0041B348(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B348: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0041B34C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B350: addiu       $v0, $v0, 0x5838
    ctx->r2 = ADD32(ctx->r2, 0X5838);
    // 0x0041B354: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0041B358: jr          $ra
    // 0x0041B35C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B35C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_0041B39C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B39C: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x0041B3A0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041B3A4: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0041B3A8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0041B3AC: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0041B3B0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B3B4: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0041B3B8: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x0041B3BC: beq         $v0, $zero, L_0041B3D4
    if (ctx->r2 == 0) {
        // 0x0041B3C0: nop
    
            goto L_0041B3D4;
    }
    // 0x0041B3C0: nop

    // 0x0041B3C4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B3C8: addiu       $v0, $v0, 0x5854
    ctx->r2 = ADD32(ctx->r2, 0X5854);
    // 0x0041B3CC: j           L_0041B3E0
    // 0x0041B3D0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041B3E0;
    // 0x0041B3D0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B3D4:
    // 0x0041B3D4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B3D8: addiu       $v0, $v0, 0x5870
    ctx->r2 = ADD32(ctx->r2, 0X5870);
    // 0x0041B3DC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B3E0:
    // 0x0041B3E0: jr          $ra
    // 0x0041B3E4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B3E4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_0041B3D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B3D0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0041B3D4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B3D8: addiu       $v0, $v0, 0x5870
    ctx->r2 = ADD32(ctx->r2, 0X5870);
    // 0x0041B3DC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0041B3E0: jr          $ra
    // 0x0041B3E4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B3E4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_0041B424(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B424: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x0041B428: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041B42C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0041B430: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0041B434: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0041B438: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B43C: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0041B440: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x0041B444: beq         $v0, $zero, L_0041B45C
    if (ctx->r2 == 0) {
        // 0x0041B448: nop
    
            goto L_0041B45C;
    }
    // 0x0041B448: nop

    // 0x0041B44C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B450: addiu       $v0, $v0, 0x588C
    ctx->r2 = ADD32(ctx->r2, 0X588C);
    // 0x0041B454: j           L_0041B468
    // 0x0041B458: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041B468;
    // 0x0041B458: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B45C:
    // 0x0041B45C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B460: addiu       $v0, $v0, 0x58A8
    ctx->r2 = ADD32(ctx->r2, 0X58A8);
    // 0x0041B464: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B468:
    // 0x0041B468: jr          $ra
    // 0x0041B46C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B46C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_0041B458(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B458: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0041B45C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B460: addiu       $v0, $v0, 0x58A8
    ctx->r2 = ADD32(ctx->r2, 0X58A8);
    // 0x0041B464: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0041B468: jr          $ra
    // 0x0041B46C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B46C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_0041B4AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B4AC: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x0041B4B0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041B4B4: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0041B4B8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0041B4BC: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0041B4C0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B4C4: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0041B4C8: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x0041B4CC: beq         $v0, $zero, L_0041B4E4
    if (ctx->r2 == 0) {
        // 0x0041B4D0: nop
    
            goto L_0041B4E4;
    }
    // 0x0041B4D0: nop

    // 0x0041B4D4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B4D8: addiu       $v0, $v0, 0x58C4
    ctx->r2 = ADD32(ctx->r2, 0X58C4);
    // 0x0041B4DC: j           L_0041B4F0
    // 0x0041B4E0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041B4F0;
    // 0x0041B4E0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B4E4:
    // 0x0041B4E4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B4E8: addiu       $v0, $v0, 0x58E0
    ctx->r2 = ADD32(ctx->r2, 0X58E0);
    // 0x0041B4EC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B4F0:
    // 0x0041B4F0: jr          $ra
    // 0x0041B4F4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B4F4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_0041B4E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B4E0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0041B4E4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B4E8: addiu       $v0, $v0, 0x58E0
    ctx->r2 = ADD32(ctx->r2, 0X58E0);
    // 0x0041B4EC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0041B4F0: jr          $ra
    // 0x0041B4F4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B4F4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_0041B534(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B534: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x0041B538: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041B53C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0041B540: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0041B544: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0041B548: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B54C: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0041B550: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x0041B554: beq         $v0, $zero, L_0041B56C
    if (ctx->r2 == 0) {
        // 0x0041B558: nop
    
            goto L_0041B56C;
    }
    // 0x0041B558: nop

    // 0x0041B55C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B560: addiu       $v0, $v0, 0x58FC
    ctx->r2 = ADD32(ctx->r2, 0X58FC);
    // 0x0041B564: j           L_0041B578
    // 0x0041B568: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041B578;
    // 0x0041B568: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B56C:
    // 0x0041B56C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B570: addiu       $v0, $v0, 0x5918
    ctx->r2 = ADD32(ctx->r2, 0X5918);
    // 0x0041B574: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B578:
    // 0x0041B578: jr          $ra
    // 0x0041B57C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B57C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_0041B568(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B568: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0041B56C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B570: addiu       $v0, $v0, 0x5918
    ctx->r2 = ADD32(ctx->r2, 0X5918);
    // 0x0041B574: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0041B578: jr          $ra
    // 0x0041B57C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B57C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_0041B5BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B5BC: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x0041B5C0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041B5C4: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0041B5C8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0041B5CC: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0041B5D0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B5D4: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0041B5D8: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x0041B5DC: beq         $v0, $zero, L_0041B5F4
    if (ctx->r2 == 0) {
        // 0x0041B5E0: nop
    
            goto L_0041B5F4;
    }
    // 0x0041B5E0: nop

    // 0x0041B5E4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B5E8: addiu       $v0, $v0, 0x5934
    ctx->r2 = ADD32(ctx->r2, 0X5934);
    // 0x0041B5EC: j           L_0041B600
    // 0x0041B5F0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041B600;
    // 0x0041B5F0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B5F4:
    // 0x0041B5F4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B5F8: addiu       $v0, $v0, 0x5950
    ctx->r2 = ADD32(ctx->r2, 0X5950);
    // 0x0041B5FC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B600:
    // 0x0041B600: jr          $ra
    // 0x0041B604: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B604: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_0041B5F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B5F0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0041B5F4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B5F8: addiu       $v0, $v0, 0x5950
    ctx->r2 = ADD32(ctx->r2, 0X5950);
    // 0x0041B5FC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0041B600: jr          $ra
    // 0x0041B604: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B604: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_0041B644(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B644: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x0041B648: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041B64C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0041B650: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0041B654: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0041B658: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B65C: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0041B660: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x0041B664: beq         $v0, $zero, L_0041B67C
    if (ctx->r2 == 0) {
        // 0x0041B668: nop
    
            goto L_0041B67C;
    }
    // 0x0041B668: nop

    // 0x0041B66C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B670: addiu       $v0, $v0, 0x596C
    ctx->r2 = ADD32(ctx->r2, 0X596C);
    // 0x0041B674: j           L_0041B688
    // 0x0041B678: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041B688;
    // 0x0041B678: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B67C:
    // 0x0041B67C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B680: addiu       $v0, $v0, 0x5988
    ctx->r2 = ADD32(ctx->r2, 0X5988);
    // 0x0041B684: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B688:
    // 0x0041B688: jr          $ra
    // 0x0041B68C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B68C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_0041B678(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B678: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0041B67C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B680: addiu       $v0, $v0, 0x5988
    ctx->r2 = ADD32(ctx->r2, 0X5988);
    // 0x0041B684: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0041B688: jr          $ra
    // 0x0041B68C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B68C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_0041B6CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B6CC: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x0041B6D0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041B6D4: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0041B6D8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0041B6DC: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0041B6E0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B6E4: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0041B6E8: andi        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 & 0X200;
    // 0x0041B6EC: beq         $v0, $zero, L_0041B704
    if (ctx->r2 == 0) {
        // 0x0041B6F0: nop
    
            goto L_0041B704;
    }
    // 0x0041B6F0: nop

    // 0x0041B6F4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B6F8: addiu       $v0, $v0, 0x59A4
    ctx->r2 = ADD32(ctx->r2, 0X59A4);
    // 0x0041B6FC: j           L_0041B710
    // 0x0041B700: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041B710;
    // 0x0041B700: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B704:
    // 0x0041B704: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B708: addiu       $v0, $v0, 0x59C0
    ctx->r2 = ADD32(ctx->r2, 0X59C0);
    // 0x0041B70C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B710:
    // 0x0041B710: jr          $ra
    // 0x0041B714: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B714: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_0041B700(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B700: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0041B704: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B708: addiu       $v0, $v0, 0x59C0
    ctx->r2 = ADD32(ctx->r2, 0X59C0);
    // 0x0041B70C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0041B710: jr          $ra
    // 0x0041B714: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B714: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_0041B754(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B754: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x0041B758: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041B75C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0041B760: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0041B764: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0041B768: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B76C: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0041B770: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x0041B774: beq         $v0, $zero, L_0041B78C
    if (ctx->r2 == 0) {
        // 0x0041B778: nop
    
            goto L_0041B78C;
    }
    // 0x0041B778: nop

    // 0x0041B77C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B780: addiu       $v0, $v0, 0x59DC
    ctx->r2 = ADD32(ctx->r2, 0X59DC);
    // 0x0041B784: j           L_0041B798
    // 0x0041B788: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041B798;
    // 0x0041B788: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B78C:
    // 0x0041B78C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B790: addiu       $v0, $v0, 0x59F8
    ctx->r2 = ADD32(ctx->r2, 0X59F8);
    // 0x0041B794: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B798:
    // 0x0041B798: jr          $ra
    // 0x0041B79C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B79C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_0041B788(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B788: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0041B78C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B790: addiu       $v0, $v0, 0x59F8
    ctx->r2 = ADD32(ctx->r2, 0X59F8);
    // 0x0041B794: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0041B798: jr          $ra
    // 0x0041B79C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B79C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_0041B7DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B7DC: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x0041B7E0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041B7E4: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0041B7E8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0041B7EC: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0041B7F0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B7F4: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0041B7F8: andi        $v0, $v0, 0x800
    ctx->r2 = ctx->r2 & 0X800;
    // 0x0041B7FC: beq         $v0, $zero, L_0041B814
    if (ctx->r2 == 0) {
        // 0x0041B800: nop
    
            goto L_0041B814;
    }
    // 0x0041B800: nop

    // 0x0041B804: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B808: addiu       $v0, $v0, 0x5A14
    ctx->r2 = ADD32(ctx->r2, 0X5A14);
    // 0x0041B80C: j           L_0041B820
    // 0x0041B810: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041B820;
    // 0x0041B810: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B814:
    // 0x0041B814: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B818: addiu       $v0, $v0, 0x5A30
    ctx->r2 = ADD32(ctx->r2, 0X5A30);
    // 0x0041B81C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B820:
    // 0x0041B820: jr          $ra
    // 0x0041B824: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B824: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_0041B810(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B810: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0041B814: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B818: addiu       $v0, $v0, 0x5A30
    ctx->r2 = ADD32(ctx->r2, 0X5A30);
    // 0x0041B81C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0041B820: jr          $ra
    // 0x0041B824: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B824: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_0041B864(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B864: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x0041B868: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041B86C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0041B870: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0041B874: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0041B878: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B87C: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0041B880: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x0041B884: beq         $v0, $zero, L_0041B89C
    if (ctx->r2 == 0) {
        // 0x0041B888: nop
    
            goto L_0041B89C;
    }
    // 0x0041B888: nop

    // 0x0041B88C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B890: addiu       $v0, $v0, 0x5A4C
    ctx->r2 = ADD32(ctx->r2, 0X5A4C);
    // 0x0041B894: j           L_0041B8A8
    // 0x0041B898: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041B8A8;
    // 0x0041B898: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B89C:
    // 0x0041B89C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B8A0: addiu       $v0, $v0, 0x5A68
    ctx->r2 = ADD32(ctx->r2, 0X5A68);
    // 0x0041B8A4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B8A8:
    // 0x0041B8A8: jr          $ra
    // 0x0041B8AC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B8AC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_0041B898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B898: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0041B89C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B8A0: addiu       $v0, $v0, 0x5A68
    ctx->r2 = ADD32(ctx->r2, 0X5A68);
    // 0x0041B8A4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0041B8A8: jr          $ra
    // 0x0041B8AC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B8AC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_0041B8FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B8FC: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0041B900: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B904: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0041B908: andi        $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 & 0X2000;
    // 0x0041B90C: beq         $v0, $zero, L_0041B924
    if (ctx->r2 == 0) {
        // 0x0041B910: nop
    
            goto L_0041B924;
    }
    // 0x0041B910: nop

    // 0x0041B914: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B918: addiu       $v0, $v0, 0x5A84
    ctx->r2 = ADD32(ctx->r2, 0X5A84);
    // 0x0041B91C: j           L_0041B930
    // 0x0041B920: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_0041B930(rdram, ctx);
    return;
    // 0x0041B920: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B924:
    // 0x0041B924: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
;}
RECOMP_FUNC void entry_0041B930(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B930: jr          $ra
    // 0x0041B934: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B934: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_0041B974(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B974: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x0041B978: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041B97C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0041B980: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0041B984: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0041B988: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B98C: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0041B990: andi        $v0, $v0, 0x4000
    ctx->r2 = ctx->r2 & 0X4000;
    // 0x0041B994: beq         $v0, $zero, L_0041B9AC
    if (ctx->r2 == 0) {
        // 0x0041B998: nop
    
            goto L_0041B9AC;
    }
    // 0x0041B998: nop

    // 0x0041B99C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B9A0: addiu       $v0, $v0, 0x5ABC
    ctx->r2 = ADD32(ctx->r2, 0X5ABC);
    // 0x0041B9A4: j           L_0041B9B8
    // 0x0041B9A8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_0041B9B8(rdram, ctx);
    return;
    // 0x0041B9A8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B9AC:
    // 0x0041B9AC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // turok2: reconnected split function: a stray ELF symbol at 0x0041B9B0 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0041B9B0(rdram, ctx);
;}
RECOMP_FUNC void entry_0041B9A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B9A8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0041B9AC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // turok2: reconnected split function: a stray ELF symbol at 0x0041B9B0 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0041B9B0(rdram, ctx);
;}
RECOMP_FUNC void entry_0041B9B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B9B8: jr          $ra
    // 0x0041B9BC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B9BC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_0041BD34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041BD34: jr          $ra
    // 0x0041BD38: nop

    return;
    // 0x0041BD38: nop

;}
RECOMP_FUNC void entry_0041BDA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041BDA8: j           L_0041BDD4
    // 0x0041BDAC: nop

        goto L_0041BDD4;
    // 0x0041BDAC: nop

    // 0x0041BDB0: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x0041BDB4: beql        $v1, $v0, L_0041BDD4
    if (ctx->r3 == ctx->r2) {
        // 0x0041BDB8: sw          $a1, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r5;
            goto L_0041BDD4;
    }
    goto skip_0;
    // 0x0041BDB8: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    skip_0:
    // 0x0041BDBC: j           L_0041BDD4
    // 0x0041BDC0: nop

        goto L_0041BDD4;
    // 0x0041BDC0: nop

    // 0x0041BDC4: j           L_0041BDD4
    // 0x0041BDC8: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
        goto L_0041BDD4;
    // 0x0041BDC8: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0041BDCC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x0041BDD0: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
L_0041BDD4:
    // 0x0041BDD4: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x0041BDD8: addiu       $s0, $s0, 0x5C78
    ctx->r16 = ADD32(ctx->r16, 0X5C78);
    // 0x0041BDDC: jal         0x00285670
    // 0x0041BDE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00285670(rdram, ctx);
        goto after_0;
    // 0x0041BDE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0041BDE4: bne         $v0, $zero, L_0041BDFC
    if (ctx->r2 != 0) {
        // 0x0041BDE8: nop
    
            goto L_0041BDFC;
    }
    // 0x0041BDE8: nop

    // 0x0041BDEC: jal         0x002855E8
    // 0x0041BDF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002855E8(rdram, ctx);
        goto after_1;
    // 0x0041BDF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0041BDF4: beq         $v0, $zero, L_0041BE48
    if (ctx->r2 == 0) {
        // 0x0041BDF8: nop
    
            goto L_0041BE48;
    }
    // 0x0041BDF8: nop

L_0041BDFC:
    // 0x0041BDFC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041BE00: addiu       $a0, $a0, -0x5520
    ctx->r4 = ADD32(ctx->r4, -0X5520);
    // 0x0041BE04: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x0041BE08: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x0041BE0C: beq         $v1, $a1, L_0041BE40
    if (ctx->r3 == ctx->r5) {
        // 0x0041BE10: sltiu       $v0, $v1, 0x11
        ctx->r2 = ctx->r3 < 0X11 ? 1 : 0;
            goto L_0041BE40;
    }
    // 0x0041BE10: sltiu       $v0, $v1, 0x11
    ctx->r2 = ctx->r3 < 0X11 ? 1 : 0;
    // 0x0041BE14: beq         $v0, $zero, L_0041BE2C
    if (ctx->r2 == 0) {
        // 0x0041BE18: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_0041BE2C;
    }
    // 0x0041BE18: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x0041BE1C: beql        $v1, $v0, L_0041BE48
    if (ctx->r3 == ctx->r2) {
        // 0x0041BE20: sw          $a1, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r5;
            goto L_0041BE48;
    }
    goto skip_1;
    // 0x0041BE20: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    skip_1:
    // 0x0041BE24: j           L_0041BE48
    // 0x0041BE28: nop

        goto L_0041BE48;
    // 0x0041BE28: nop

L_0041BE2C:
    // 0x0041BE2C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x0041BE30: beq         $v1, $v0, L_0041BE44
    if (ctx->r3 == ctx->r2) {
        // 0x0041BE34: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_0041BE44;
    }
    // 0x0041BE34: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x0041BE38: j           L_0041BE48
    // 0x0041BE3C: nop

        goto L_0041BE48;
    // 0x0041BE3C: nop

L_0041BE40:
    // 0x0041BE40: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
L_0041BE44:
    // 0x0041BE44: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
L_0041BE48:
    // 0x0041BE48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0041BE4C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041BE50: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041BE54: jr          $ra
    // 0x0041BE58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0041BE58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_0041BDEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041BDEC: jal         0x002855E8
    // 0x0041BDF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002855E8(rdram, ctx);
        goto after_0;
    // 0x0041BDF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0041BDF4: beq         $v0, $zero, L_0041BE48
    if (ctx->r2 == 0) {
        // 0x0041BDF8: nop
    
            goto L_0041BE48;
    }
    // 0x0041BDF8: nop

    // 0x0041BDFC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041BE00: addiu       $a0, $a0, -0x5520
    ctx->r4 = ADD32(ctx->r4, -0X5520);
    // 0x0041BE04: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x0041BE08: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x0041BE0C: beq         $v1, $a1, L_0041BE40
    if (ctx->r3 == ctx->r5) {
        // 0x0041BE10: sltiu       $v0, $v1, 0x11
        ctx->r2 = ctx->r3 < 0X11 ? 1 : 0;
            goto L_0041BE40;
    }
    // 0x0041BE10: sltiu       $v0, $v1, 0x11
    ctx->r2 = ctx->r3 < 0X11 ? 1 : 0;
    // 0x0041BE14: beq         $v0, $zero, L_0041BE2C
    if (ctx->r2 == 0) {
        // 0x0041BE18: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_0041BE2C;
    }
    // 0x0041BE18: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x0041BE1C: beql        $v1, $v0, L_0041BE48
    if (ctx->r3 == ctx->r2) {
        // 0x0041BE20: sw          $a1, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r5;
            goto L_0041BE48;
    }
    goto skip_0;
    // 0x0041BE20: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    skip_0:
    // 0x0041BE24: j           L_0041BE48
    // 0x0041BE28: nop

        goto L_0041BE48;
    // 0x0041BE28: nop

L_0041BE2C:
    // 0x0041BE2C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x0041BE30: beq         $v1, $v0, L_0041BE44
    if (ctx->r3 == ctx->r2) {
        // 0x0041BE34: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_0041BE44;
    }
    // 0x0041BE34: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x0041BE38: j           L_0041BE48
    // 0x0041BE3C: nop

        goto L_0041BE48;
    // 0x0041BE3C: nop

L_0041BE40:
    // 0x0041BE40: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
L_0041BE44:
    // 0x0041BE44: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
L_0041BE48:
    // 0x0041BE48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0041BE4C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041BE50: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041BE54: jr          $ra
    // 0x0041BE58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0041BE58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_0041BE60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041BE60: lw          $v1, -0x5378($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5378);
    // 0x0041BE64: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x0041BE68: bne         $v1, $v0, L_0041BE80
    if (ctx->r3 != ctx->r2) {
        // 0x0041BE6C: lui         $v1, 0xFEFF
        ctx->r3 = S32(0XFEFF << 16);
            goto L_0041BE80;
    }
    // 0x0041BE6C: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x0041BE70: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041BE74: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x0041BE78: j           L_0041BE8C
    // 0x0041BE7C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
        goto L_0041BE8C;
    // 0x0041BE7C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
L_0041BE80:
    // 0x0041BE80: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041BE84: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0041BE88: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
L_0041BE8C:
    // 0x0041BE8C: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0041BE90: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0041BE94: lw          $v1, -0x5520($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5520);
    // 0x0041BE98: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x0041BE9C: beq         $v1, $v0, L_0041BEE0
    if (ctx->r3 == ctx->r2) {
        // 0x0041BEA0: sltiu       $v0, $v1, 0x11
        ctx->r2 = ctx->r3 < 0X11 ? 1 : 0;
            goto L_0041BEE0;
    }
    // 0x0041BEA0: sltiu       $v0, $v1, 0x11
    ctx->r2 = ctx->r3 < 0X11 ? 1 : 0;
    // 0x0041BEA4: beq         $v0, $zero, L_0041BEBC
    if (ctx->r2 == 0) {
        // 0x0041BEA8: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_0041BEBC;
    }
    // 0x0041BEA8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x0041BEAC: beq         $v1, $v0, L_0041BED0
    if (ctx->r3 == ctx->r2) {
        // 0x0041BEB0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0041BED0;
    }
    // 0x0041BEB0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041BEB4: j           L_0041BF00
    // 0x0041BEB8: nop

        goto L_0041BF00;
    // 0x0041BEB8: nop

L_0041BEBC:
    // 0x0041BEBC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x0041BEC0: beq         $v1, $v0, L_0041BEF0
    if (ctx->r3 == ctx->r2) {
        // 0x0041BEC4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0041BEF0;
    }
    // 0x0041BEC4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041BEC8: j           L_0041BF00
    // 0x0041BECC: nop

        goto L_0041BF00;
    // 0x0041BECC: nop

L_0041BED0:
    // 0x0041BED0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041BED4: addiu       $v0, $v0, 0x3E70
    ctx->r2 = ADD32(ctx->r2, 0X3E70);
    // 0x0041BED8: j           L_0041BEFC
    // 0x0041BEDC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041BEFC;
    // 0x0041BEDC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041BEE0:
    // 0x0041BEE0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041BEE4: addiu       $v0, $v0, 0x3E88
    ctx->r2 = ADD32(ctx->r2, 0X3E88);
    // 0x0041BEE8: j           L_0041BEFC
    // 0x0041BEEC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041BEFC;
    // 0x0041BEEC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041BEF0:
    // 0x0041BEF0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041BEF4: addiu       $v0, $v0, 0x3EA0
    ctx->r2 = ADD32(ctx->r2, 0X3EA0);
    // 0x0041BEF8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041BEFC:
    // 0x0041BEFC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0041BF00:
    // 0x0041BF00: jr          $ra
    // 0x0041BF04: nop

    return;
    // 0x0041BF04: nop

;}
RECOMP_FUNC void entry_0041BF24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041BF24: beql        $v0, $zero, L_0041BF3C
    if (ctx->r2 == 0) {
        // 0x0041BF28: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0041BF3C;
    }
    goto skip_0;
    // 0x0041BF28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x0041BF2C: lw          $v0, 0x518($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X518);
    // 0x0041BF30: bnel        $v0, $zero, L_0041BF38
    if (ctx->r2 != 0) {
        // 0x0041BF34: addu        $s0, $v0, $zero
        ctx->r16 = ADD32(ctx->r2, 0);
            goto L_0041BF38;
    }
    goto skip_1;
    // 0x0041BF34: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    skip_1:
L_0041BF38:
    // 0x0041BF38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0041BF3C:
    // 0x0041BF3C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x0041BF40: lb          $a1, 0x2B($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X2B);
    // 0x0041BF44: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0041BF48: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041BF4C: jal         0x0041648C
    // 0x0041BF50: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x0041BF50: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_0:
    // 0x0041BF54: sb          $v0, 0x2B($s0)
    MEM_B(0X2B, ctx->r16) = ctx->r2;
    // 0x0041BF58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0041BF5C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0041BF60: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041BF64: jr          $ra
    // 0x0041BF68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041BF68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_0041BF28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041BF28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041BF2C: lw          $v0, 0x518($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X518);
    // 0x0041BF30: bnel        $v0, $zero, L_0041BF38
    if (ctx->r2 != 0) {
        // 0x0041BF34: addu        $s0, $v0, $zero
        ctx->r16 = ADD32(ctx->r2, 0);
            goto L_0041BF38;
    }
    goto skip_0;
    // 0x0041BF34: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    skip_0:
L_0041BF38:
    // 0x0041BF38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041BF3C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x0041BF40: lb          $a1, 0x2B($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X2B);
    // 0x0041BF44: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0041BF48: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041BF4C: jal         0x0041648C
    // 0x0041BF50: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x0041BF50: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_0:
    // 0x0041BF54: sb          $v0, 0x2B($s0)
    MEM_B(0X2B, ctx->r16) = ctx->r2;
    // 0x0041BF58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0041BF5C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0041BF60: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041BF64: jr          $ra
    // 0x0041BF68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041BF68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_0041BFE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041BFE8: addiu       $s0, $s0, -0x54E8
    ctx->r16 = ADD32(ctx->r16, -0X54E8);
    // 0x0041BFEC: beql        $v0, $zero, L_0041C004
    if (ctx->r2 == 0) {
        // 0x0041BFF0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0041C004;
    }
    goto skip_0;
    // 0x0041BFF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x0041BFF4: lw          $v0, 0x518($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X518);
    // 0x0041BFF8: bnel        $v0, $zero, L_0041C000
    if (ctx->r2 != 0) {
        // 0x0041BFFC: addu        $s0, $v0, $zero
        ctx->r16 = ADD32(ctx->r2, 0);
            goto L_0041C000;
    }
    goto skip_1;
    // 0x0041BFFC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    skip_1:
L_0041C000:
    // 0x0041C000: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0041C004:
    // 0x0041C004: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x0041C008: lbu         $a1, 0x2C($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X2C);
    // 0x0041C00C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0041C010: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041C014: jal         0x0041648C
    // 0x0041C018: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x0041C018: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_0:
    // 0x0041C01C: sb          $v0, 0x2C($s0)
    MEM_B(0X2C, ctx->r16) = ctx->r2;
    // 0x0041C020: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0041C024: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0041C028: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041C02C: jr          $ra
    // 0x0041C030: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041C030: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_0041C0AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
RECOMP_FUNC void entry_0041C0B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041C0B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041C0B4: lw          $v0, 0x518($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X518);
    // 0x0041C0B8: bnel        $v0, $zero, L_0041C0C0
    if (ctx->r2 != 0) {
        // 0x0041C0BC: addu        $s0, $v0, $zero
        ctx->r16 = ADD32(ctx->r2, 0);
            goto L_0041C0C0;
    }
    goto skip_0;
    // 0x0041C0BC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    skip_0:
L_0041C0C0:
    // 0x0041C0C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
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
RECOMP_FUNC void entry_0041C174(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041C174: beql        $v0, $zero, L_0041C18C
    if (ctx->r2 == 0) {
        // 0x0041C178: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0041C18C;
    }
    goto skip_0;
    // 0x0041C178: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x0041C17C: lw          $v0, 0x518($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X518);
    // 0x0041C180: bnel        $v0, $zero, L_0041C188
    if (ctx->r2 != 0) {
        // 0x0041C184: addu        $s0, $v0, $zero
        ctx->r16 = ADD32(ctx->r2, 0);
            goto L_0041C188;
    }
    goto skip_1;
    // 0x0041C184: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    skip_1:
L_0041C188:
    // 0x0041C188: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0041C18C:
    // 0x0041C18C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x0041C190: lbu         $a1, 0x2E($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X2E);
    // 0x0041C194: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0041C198: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041C19C: jal         0x0041648C
    // 0x0041C1A0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x0041C1A0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_0:
    // 0x0041C1A4: sb          $v0, 0x2E($s0)
    MEM_B(0X2E, ctx->r16) = ctx->r2;
    // 0x0041C1A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0041C1AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0041C1B0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041C1B4: jr          $ra
    // 0x0041C1B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041C1B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_0041C178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041C178: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041C17C: lw          $v0, 0x518($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X518);
    // 0x0041C180: bnel        $v0, $zero, L_0041C188
    if (ctx->r2 != 0) {
        // 0x0041C184: addu        $s0, $v0, $zero
        ctx->r16 = ADD32(ctx->r2, 0);
            goto L_0041C188;
    }
    goto skip_0;
    // 0x0041C184: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    skip_0:
L_0041C188:
    // 0x0041C188: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041C18C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x0041C190: lbu         $a1, 0x2E($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X2E);
    // 0x0041C194: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0041C198: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041C19C: jal         0x0041648C
    // 0x0041C1A0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x0041C1A0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_0:
    // 0x0041C1A4: sb          $v0, 0x2E($s0)
    MEM_B(0X2E, ctx->r16) = ctx->r2;
    // 0x0041C1A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0041C1AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0041C1B0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041C1B4: jr          $ra
    // 0x0041C1B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041C1B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_0041C23C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041C23C: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x0041C240: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0041C244: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0041C248: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0041C24C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0041C250: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0041C254: jal         0x0041648C
    // 0x0041C258: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x0041C258: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x0041C25C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x0041C260: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0041C264: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0041C268: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041C26C: jr          $ra
    // 0x0041C270: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041C270: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_0041C240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041C240: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0041C244: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0041C248: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0041C24C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0041C250: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0041C254: jal         0x0041648C
    // 0x0041C258: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x0041C258: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x0041C25C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x0041C260: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0041C264: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0041C268: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041C26C: jr          $ra
    // 0x0041C270: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041C270: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_0041C2D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041C2D8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0041C2DC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041C2E0: jr          $ra
    // 0x0041C2E4: nop

    return;
    // 0x0041C2E4: nop

;}
RECOMP_FUNC void entry_0041C318(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041C318: jal         0x0041648C
    // 0x0041C31C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x0041C31C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x0041C320: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x0041C324: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0041C328: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0041C32C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041C330: jr          $ra
    // 0x0041C334: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041C334: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_0041C31C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041C31C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0041C320: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x0041C324: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0041C328: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0041C32C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041C330: jr          $ra
    // 0x0041C334: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041C334: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_0041C3A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041C3A0: addiu       $v0, $v0, 0x3FD8
    ctx->r2 = ADD32(ctx->r2, 0X3FD8);
    // 0x0041C3A4: j           L_0041C3B8
    // 0x0041C3A8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041C3B8;
    // 0x0041C3A8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0041C3AC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041C3B0: addiu       $v0, $v0, 0x3FF0
    ctx->r2 = ADD32(ctx->r2, 0X3FF0);
    // 0x0041C3B4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041C3B8:
    // 0x0041C3B8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041C3BC: jr          $ra
    // 0x0041C3C0: nop

    return;
    // 0x0041C3C0: nop

;}
RECOMP_FUNC void entry_0041C534(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041C534: lw          $v0, 0x1C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1C);
    // 0x0041C538: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0041C53C: addiu       $v1, $v1, -0x54E8
    ctx->r3 = ADD32(ctx->r3, -0X54E8);
    // 0x0041C540: beq         $v0, $zero, L_0041C554
    if (ctx->r2 == 0) {
        // 0x0041C544: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_0041C554;
    }
    // 0x0041C544: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0041C548: lw          $v0, 0x518($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X518);
    // 0x0041C54C: bnel        $v0, $zero, L_0041C554
    if (ctx->r2 != 0) {
        // 0x0041C550: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_0041C554;
    }
    goto skip_0;
    // 0x0041C550: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    skip_0:
L_0041C554:
    // 0x0041C554: lbu         $v0, 0x29($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X29);
    // 0x0041C558: addiu       $a2, $v0, -0x80
    ctx->r6 = ADD32(ctx->r2, -0X80);
    // 0x0041C55C: bltzl       $a2, L_0041C564
    if (SIGNED(ctx->r6) < 0) {
        // 0x0041C560: addiu       $a2, $v0, -0x79
        ctx->r6 = ADD32(ctx->r2, -0X79);
            goto L_0041C564;
    }
    goto skip_1;
    // 0x0041C560: addiu       $a2, $v0, -0x79
    ctx->r6 = ADD32(ctx->r2, -0X79);
    skip_1:
L_0041C564:
    // 0x0041C564: sra         $s0, $a2, 3
    ctx->r16 = S32(SIGNED(ctx->r6) >> 3);
    // 0x0041C568: bne         $s0, $zero, L_0041C580
    if (ctx->r16 != 0) {
        // 0x0041C56C: nop
    
            goto L_0041C580;
    }
    // 0x0041C56C: nop

    // 0x0041C570: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041C574: addiu       $v0, $v0, 0x4050
    ctx->r2 = ADD32(ctx->r2, 0X4050);
    // 0x0041C578: j           L_0041C5D4
    // 0x0041C57C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
        goto L_0041C5D4;
    // 0x0041C57C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_0041C580:
    // 0x0041C580: blez        $s0, L_0041C5A8
    if (SIGNED(ctx->r16) <= 0) {
        // 0x0041C584: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0041C5A8;
    }
    // 0x0041C584: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0041C588: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041C58C: addiu       $v0, $v0, 0x4068
    ctx->r2 = ADD32(ctx->r2, 0X4068);
    // 0x0041C590: jal         0x004160F0
    // 0x0041C594: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x0041C594: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    after_0:
    // 0x0041C598: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041C59C: addiu       $a1, $a1, 0x1318
    ctx->r5 = ADD32(ctx->r5, 0X1318);
    // 0x0041C5A0: j           L_0041C5C4
    // 0x0041C5A4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
        goto L_0041C5C4;
    // 0x0041C5A4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
L_0041C5A8:
    // 0x0041C5A8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041C5AC: addiu       $v0, $v0, 0x4068
    ctx->r2 = ADD32(ctx->r2, 0X4068);
    // 0x0041C5B0: jal         0x004160F0
    // 0x0041C5B4: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_1;
    // 0x0041C5B4: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    after_1:
    // 0x0041C5B8: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041C5BC: addiu       $a1, $a1, 0x1320
    ctx->r5 = ADD32(ctx->r5, 0X1320);
    // 0x0041C5C0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
L_0041C5C4:
    // 0x0041C5C4: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x0041C5C8: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x0041C5CC: jal         0x0029E3E0
    // 0x0041C5D0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_2;
    // 0x0041C5D0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_2:
L_0041C5D4:
    // 0x0041C5D4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0041C5D8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0041C5DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041C5E0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041C5E4: jr          $ra
    // 0x0041C5E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041C5E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_0041C660(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041C660: lw          $v0, 0x1C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1C);
    // 0x0041C664: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0041C668: addiu       $v1, $v1, -0x54E8
    ctx->r3 = ADD32(ctx->r3, -0X54E8);
    // 0x0041C66C: beq         $v0, $zero, L_0041C680
    if (ctx->r2 == 0) {
        // 0x0041C670: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_0041C680;
    }
    // 0x0041C670: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0041C674: lw          $v0, 0x518($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X518);
    // 0x0041C678: bnel        $v0, $zero, L_0041C680
    if (ctx->r2 != 0) {
        // 0x0041C67C: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_0041C680;
    }
    goto skip_0;
    // 0x0041C67C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    skip_0:
L_0041C680:
    // 0x0041C680: lbu         $v0, 0x2A($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X2A);
    // 0x0041C684: addiu       $a2, $v0, -0x80
    ctx->r6 = ADD32(ctx->r2, -0X80);
    // 0x0041C688: bltzl       $a2, L_0041C690
    if (SIGNED(ctx->r6) < 0) {
        // 0x0041C68C: addiu       $a2, $v0, -0x79
        ctx->r6 = ADD32(ctx->r2, -0X79);
            goto L_0041C690;
    }
    goto skip_1;
    // 0x0041C68C: addiu       $a2, $v0, -0x79
    ctx->r6 = ADD32(ctx->r2, -0X79);
    skip_1:
L_0041C690:
    // 0x0041C690: sra         $s0, $a2, 3
    ctx->r16 = S32(SIGNED(ctx->r6) >> 3);
    // 0x0041C694: bne         $s0, $zero, L_0041C6AC
    if (ctx->r16 != 0) {
        // 0x0041C698: nop
    
            goto L_0041C6AC;
    }
    // 0x0041C698: nop

    // 0x0041C69C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041C6A0: addiu       $v0, $v0, 0x4080
    ctx->r2 = ADD32(ctx->r2, 0X4080);
    // 0x0041C6A4: j           L_0041C700
    // 0x0041C6A8: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
        goto L_0041C700;
    // 0x0041C6A8: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_0041C6AC:
    // 0x0041C6AC: blez        $s0, L_0041C6D4
    if (SIGNED(ctx->r16) <= 0) {
        // 0x0041C6B0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0041C6D4;
    }
    // 0x0041C6B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0041C6B4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041C6B8: addiu       $v0, $v0, 0x4098
    ctx->r2 = ADD32(ctx->r2, 0X4098);
    // 0x0041C6BC: jal         0x004160F0
    // 0x0041C6C0: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x0041C6C0: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    after_0:
    // 0x0041C6C4: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041C6C8: addiu       $a1, $a1, 0x1318
    ctx->r5 = ADD32(ctx->r5, 0X1318);
    // 0x0041C6CC: j           L_0041C6F0
    // 0x0041C6D0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
        goto L_0041C6F0;
    // 0x0041C6D0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
L_0041C6D4:
    // 0x0041C6D4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041C6D8: addiu       $v0, $v0, 0x4098
    ctx->r2 = ADD32(ctx->r2, 0X4098);
    // 0x0041C6DC: jal         0x004160F0
    // 0x0041C6E0: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_1;
    // 0x0041C6E0: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    after_1:
    // 0x0041C6E4: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041C6E8: addiu       $a1, $a1, 0x1320
    ctx->r5 = ADD32(ctx->r5, 0X1320);
    // 0x0041C6EC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
L_0041C6F0:
    // 0x0041C6F0: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x0041C6F4: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x0041C6F8: jal         0x0029E3E0
    // 0x0041C6FC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_2;
    // 0x0041C6FC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_2:
L_0041C700:
    // 0x0041C700: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0041C704: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0041C708: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041C70C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041C710: jr          $ra
    // 0x0041C714: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041C714: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_0041C6BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041C6BC: jal         0x004160F0
    // 0x0041C6C0: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x0041C6C0: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    after_0:
    // 0x0041C6C4: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041C6C8: addiu       $a1, $a1, 0x1318
    ctx->r5 = ADD32(ctx->r5, 0X1318);
    // 0x0041C6CC: j           L_0041C6F0
    // 0x0041C6D0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
        goto L_0041C6F0;
    // 0x0041C6D0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0041C6D4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041C6D8: addiu       $v0, $v0, 0x4098
    ctx->r2 = ADD32(ctx->r2, 0X4098);
    // 0x0041C6DC: jal         0x004160F0
    // 0x0041C6E0: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_1;
    // 0x0041C6E0: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    after_1:
    // 0x0041C6E4: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041C6E8: addiu       $a1, $a1, 0x1320
    ctx->r5 = ADD32(ctx->r5, 0X1320);
    // 0x0041C6EC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
L_0041C6F0:
    // 0x0041C6F0: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x0041C6F4: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x0041C6F8: jal         0x0029E3E0
    // 0x0041C6FC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_2;
    // 0x0041C6FC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_2:
    // 0x0041C700: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0041C704: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0041C708: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041C70C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041C710: jr          $ra
    // 0x0041C714: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041C714: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_0041C768(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041C768: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0041C76C: addiu       $v1, $v1, -0x54E8
    ctx->r3 = ADD32(ctx->r3, -0X54E8);
    // 0x0041C770: beq         $v0, $zero, L_0041C77C
    if (ctx->r2 == 0) {
        // 0x0041C774: nop
    
            goto L_0041C77C;
    }
    // 0x0041C774: nop

    // 0x0041C778: lw          $v1, 0x518($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X518);
L_0041C77C:
    // 0x0041C77C: lbu         $v0, 0x31($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X31);
    // 0x0041C780: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x0041C784: bnel        $v0, $a0, L_0041C790
    if (ctx->r2 != ctx->r4) {
        // 0x0041C788: sb          $a0, 0x31($v1)
        MEM_B(0X31, ctx->r3) = ctx->r4;
            goto L_0041C790;
    }
    goto skip_0;
    // 0x0041C788: sb          $a0, 0x31($v1)
    MEM_B(0X31, ctx->r3) = ctx->r4;
    skip_0:
    // 0x0041C78C: sb          $zero, 0x31($v1)
    MEM_B(0X31, ctx->r3) = 0;
L_0041C790:
    // 0x0041C790: jr          $ra
    // 0x0041C794: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041C794: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_0041C9C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041C9C8: lw          $v1, 0x518($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X518);
    // 0x0041C9CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041C9D0: sb          $v0, 0x3D($v1)
    MEM_B(0X3D, ctx->r3) = ctx->r2;
    // 0x0041C9D4: jr          $ra
    // 0x0041C9D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x0041C9D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void entry_0041CA30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041CA30: sw          $v1, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r3;
    // 0x0041CA34: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0041CA38: lw          $v1, -0x6760($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6760);
    // 0x0041CA3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041CA40: bne         $v1, $v0, L_0041CA60
    if (ctx->r3 != ctx->r2) {
        // 0x0041CA44: nop
    
            goto L_0041CA60;
    }
    // 0x0041CA44: nop

    // 0x0041CA48: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0041CA4C: addiu       $a0, $a0, 0x6CB0
    ctx->r4 = ADD32(ctx->r4, 0X6CB0);
    // 0x0041CA50: jal         0x00430330
    // 0x0041CA54: nop

    func_00430330(rdram, ctx);
        goto after_0;
    // 0x0041CA54: nop

    after_0:
    // 0x0041CA58: j           L_0041CA68
    // 0x0041CA5C: nop

        goto L_0041CA68;
    // 0x0041CA5C: nop

L_0041CA60:
    // 0x0041CA60: lw          $v0, 0x1C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1C);
    // 0x0041CA64: sw          $zero, 0x510($v0)
    MEM_W(0X510, ctx->r2) = 0;
L_0041CA68:
    // 0x0041CA68: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0041CA6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041CA70: jr          $ra
    // 0x0041CA74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0041CA74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
