/**
 * Auto-decompiled from asm/20A290.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_15152190(); /* extern */
extern s32 D_800AB550;
extern s32 D_800AB554;
extern f32 D_800AB558;
extern f32 D_800AB55C;
extern f32 D_800AB560;
extern f32 D_800AB564;

void func_151DCDE0(void *arg0, s32 arg1, s32 arg2) {
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    s16 sp5A;
    s16 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    s16 sp46;
    s16 sp44;
    s16 sp42;
    s16 sp40;
    void * sp34;
    s32 sp30;
    s32 sp2C;

    sp2C = 0xC;
    sp30 = 5;
    (*(s32 *)((char *)&(sp34) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x0));
    (*(s32 *)((char *)&(sp34) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x4));
    (*(s32 *)((char *)&(sp34) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x8));
    sp40 = 0;
    sp42 = 0xFF;
    sp44 = -0x40;
    sp46 = 0x31;
    sp58 = 0x19;
    sp5A = 0x14;
    sp5C = D_800AB558;
    sp60 = D_800AB558;
    sp48 = 3.0f;
    sp4C = 9.0f;
    sp50 = D_800AB55C;
    sp54 = D_800AB560;
    sp64 = D_800AB564;
    func_15152190(&sp2C, &D_800AB550, &D_800AB554, 1, 26.0f, 0, (s32) arg1, arg2);
}
