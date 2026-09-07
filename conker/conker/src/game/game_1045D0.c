/**
 * Auto-decompiled from asm/1045D0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"

void * func_1514FB98();                   /* extern */
void * func_1514FBFC();                   /* extern */
void * func_1514FCE8();                    /* extern */
void * func_151BFC40();                          /* extern */
void * func_151C04F8();                   /* extern */
void * func_151C05A4();                   /* extern */
void * func_151C05F0();                   /* extern */
extern f32 D_800A0AE0;
extern f32 D_800A0AE4;
extern f32 D_800A0AE8;

void func_150D7120(void *arg0, s32 arg1, s32 arg2) {
    s8 sp74;
    s16 sp72;
    s16 sp70;
    s16 sp6E;
    s16 sp6C;
    s16 sp6A;
    s16 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    s32 sp54;
    s32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    void * sp2C;
    s32 sp28;
    s32 sp24;
    s16 sp22;
    s16 sp20;
    s16 sp1E;
    s16 sp1C;

    func_151C04F8(arg0, arg1, arg2);
    func_151C05A4(arg0, arg1, arg2);
    func_151C05F0(arg0, arg1, arg2);
    sp1C = 0;
    sp1E = 0xFF;
    sp20 = -0x40;
    sp22 = 0x47;
    sp24 = 6;
    sp28 = 4;
    (*(s32 *)((char *)&(sp2C) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x0));
    (*(s32 *)((char *)&(sp2C) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x4));
    (*(s32 *)((char *)&(sp2C) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x8));
    sp38 = 23.0f;
    sp3C = 30.0f;
    sp40 = 45.0f;
    sp44 = 53.0f;
    sp50 = 7;
    sp54 = 3;
    sp68 = 0x19;
    sp6A = 0xF;
    sp6C = 0x64;
    sp6E = 0x64;
    sp70 = 0xC;
    sp72 = 0x14;
    sp74 = 0;
    sp48 = 203.0f;
    sp4C = 414.0f;
    sp58 = 15.0f;
    sp5C = D_800A0AE0;
    sp60 = D_800A0AE4;
    sp64 = D_800A0AE8;
    func_1514FCE8(&sp1C, arg1, arg2);
}

void func_150D728C(void *arg0, void *arg1, void *arg2, s32 arg3, s32 arg4) {
    void * spBC;
    void * spB4;
    void * spB0;
    void * sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    void * sp44;
    void * sp3C;
    void * sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    s32 temp_s2;

    temp_s2 = arg3 & 0xFF;
    func_151C04F8(arg1, temp_s2 & 0xFF, arg4);
    func_151C05A4(arg1, temp_s2 & 0xFF, arg4);
    func_151C05F0(arg1, temp_s2 & 0xFF, arg4);
    if (arg0 != NULL) {
        sp90 = -(*(s32 *)((char *)(arg2) + 0x0));
        sp94 = -(*(s32 *)((char *)(arg2) + 0x4));
        sp98 = -(*(s32 *)((char *)(arg2) + 0x8));
        (*(s32 *)((char *)&(sp9C) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x0));
        (*(s32 *)((char *)&(sp9C) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x4));
        (*(s32 *)((char *)&(sp9C) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x8));
        (*(s32 *)((char *)&(sp9C) + 0xC)) = (s32) (*(s32 *)((char *)(arg0) + 0xC));
        (*(u16 *)((char *)&(sp9C) + 0x10)) = (u16) (*(u16 *)((char *)(arg0) + 0x10));
        (*(s32 *)((char *)&(spBC) + 0x0)) = (s32) (*(s32 *)((char *)(arg1) + 0x0));
        (*(s32 *)((char *)&(spBC) + 0x4)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
        (*(s32 *)((char *)&(spBC) + 0x8)) = (s32) (*(s32 *)((char *)(arg1) + 0x8));
        func_151BFC40(&spB4, &spB0);
        func_1514FBFC(&sp90, temp_s2 & 0xFF, arg4);
        return;
    }
    sp2C = -(*(s32 *)((char *)(arg2) + 0x0));
    sp30 = -(*(s32 *)((char *)(arg2) + 0x4));
    sp34 = -(*(s32 *)((char *)(arg2) + 0x8));
    func_151BFC40(&sp3C, &sp38);
    (*(s32 *)((char *)&(sp44) + 0x0)) = (s32) (*(s32 *)((char *)(arg1) + 0x0));
    (*(s32 *)((char *)&(sp44) + 0x4)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
    (*(s32 *)((char *)&(sp44) + 0x8)) = (s32) (*(s32 *)((char *)(arg1) + 0x8));
    func_1514FB98(&sp2C, temp_s2 & 0xFF, arg4);
}
