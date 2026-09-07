/**
 * Auto-decompiled from asm/130B40.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_15152190(); /* extern */
extern s32 D_800A2350;
extern s32 D_800A2354;
extern f32 D_800A2358;
extern f32 D_800A235C;
extern f32 D_800A2360;
extern f32 D_800A2364;
extern f32 D_800A2368;

void func_15103690(s32 arg0) {
    func_15103828();
}

void func_151036B4(void *arg0, s32 arg1, s32 arg2) {
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    s16 sp62;
    s16 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    s16 sp4E;
    s16 sp4C;
    s16 sp4A;
    s16 sp48;
    void * sp3C;
    s32 sp38;
    s32 sp34;
    s32 sp30;
    s32 sp2C;

    sp30 = D_800A2350;
    sp2C = D_800A2354;
    sp34 = 8;
    sp38 = 4;
    (*(s32 *)((char *)&(sp3C) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x0));
    (*(s32 *)((char *)&(sp3C) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x4));
    (*(s32 *)((char *)&(sp3C) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x8));
    sp50 = 8.0f;
    sp54 = 4.0f;
    sp48 = 0;
    sp4A = 0xFF;
    sp4C = -0x40;
    sp4E = 0x5D;
    sp60 = 0x14;
    sp62 = 0xA;
    sp58 = D_800A2358;
    sp5C = D_800A235C;
    sp64 = D_800A2360;
    sp68 = D_800A2364;
    sp6C = D_800A2368;
    func_15152190(&sp34, &sp30, &sp2C, 1, 0.0f, 1, (s32) arg1, arg2);
}

s32 func_151037DC(s32 arg0, void * arg1, void * arg2, void * arg3) {
    return 0;
}
