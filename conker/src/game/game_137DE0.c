/**
 * Auto-decompiled from asm/137DE0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_15169968();                         /* extern */
extern s32 D_800917EC;
extern f32 D_800A26A0;

void func_1510A930(s32 arg0, s32 arg1, s32 arg2) {
    s8 sp5D;
    s8 sp5B;
    s8 sp5A;
    s8 sp59;
    s8 sp58;
    s8 sp57;
    s8 sp56;
    s8 sp55;
    s8 sp54;
    s16 sp52;
    s16 sp50;
    s16 sp4E;
    s16 sp4C;
    s16 sp4A;
    s16 sp48;
    f32 sp44;
    f32 sp40;
    s16 sp3C;
    s16 sp3A;
    s16 sp38;
    s32 sp34;
    s32 sp30;
    s32 sp2C;
    void * *sp24;
    s16 temp_v0;

    sp24 = &D_800917EC;
    sp54 = 0xA;
    sp50 = 0x40;
    sp52 = 0x20;
    sp4C = 0x18FC;
    sp4E = 0x1A12;
    sp5A = 7;
    temp_v0 = arg0 + arg1 + arg2;
    sp5D = 0;
    sp2C = (arg0 << 0x10) | arg1;
    sp30 = (arg2 << 0x10) | temp_v0;
    sp34 = 0x2710;
    sp38 = temp_v0;
    sp3C = 0;
    sp48 = 0;
    sp4A = 0;
    sp55 = 1;
    sp56 = 0xFF;
    sp57 = 0xFF;
    sp58 = 0xFF;
    sp5B = 0x11;
    sp59 = 0;
    sp3A = 0;
    sp40 = 228.0f;
    sp44 = D_800A26A0;
    func_15169968(&sp24, arg0);
}
