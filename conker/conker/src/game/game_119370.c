/**
 * Auto-decompiled from asm/119370.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_150AC9C0(); /* extern */
u32 random_u32();                                /* extern */
f32 random_float();                                /* extern */
void * func_15102B38(); /* extern */
void * func_15143874();            /* extern */
void * func_15145EA4();              /* extern */
void * func_151602C0(); /* extern */
s32 func_151C229C(); /* extern */
void * func_151C3B0C();       /* extern */
extern s32 D_800A1500;
extern s32 D_800A150C;
extern s32 D_800A1518;
extern s32 D_800A1530;
extern s32 D_800A1548;
extern f32 D_800A154C;
extern f32 D_800A1550;
extern f32 D_800A1554;
extern f32 D_800A1558;
extern f32 D_800A155C;
extern f32 D_800A1560;
extern f32 D_800A1564;

s32 func_150EBEC0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp10C;
    f32 sp100;
    f32 spFC;
    f32 spF8;
    f32 spF4;
    f32 spE8;
    f32 *spE4;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    void * *spD4;
    void * *spD0;
    f32 *spCC;
    f32 *spC8;
    void * *spC4;
    f32 *spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    s8 spA8;
    s16 spA6;
    s8 spA5;
    s8 spA4;
    s32 spA0;
    s32 sp9C;
    s32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    u32 sp88;
    f32 sp84;
    u32 sp80;
    u8 *sp7C;
    f32 temp_f0;
    f32 temp_f2;
    s32 temp_v0_2;
    u8 *temp_v0;

    f32 sp104;
    f32 sp108;
    f32 spEC;
    f32 spF0;
    if (arg0 == NULL) {
        return 0;
    }
    if ((s32) arg1 >= 2) {
        return 0;
    }
    if ((*(s32 *)((char *)(arg0) + 0x1D4)) == 0) {
        return 0;
    }
    spD0 = &D_800A1500;
    spD4 = &D_800A150C;
    spC8 = &sp100;
    spCC = &spF4;
    func_15145EA4(&spD0, &spC8, (*(s32 *)((char *)(arg0) + 0x1D4)) + 0x80, 2);
    spF4 -= sp100;
    spF8 -= sp104;
    spFC -= sp108;
    temp_v0 = arg1 + &D_800A1548;
    spC4 = (arg1 * 0xC) + &D_800A1518;
    spC0 = &spE8;
    sp7C = temp_v0;
    func_15145EA4(&spC4, &spC0, (*temp_v0 << 6) + (*(s32 *)((char *)(arg0) + 0x1D4)), 1);
    if (func_150AC9C0(sp100, sp104, sp108, spF4, spF8, spFC, 0, 0, &spB4, &spB8, &spBC, 0, 0, 0, 0.0f) != 0) {
        sp88 = random_u32();
        func_15143874((s16) (sp88 & 0xFF), random_float() * 80.0f, &spAC, &spB0);
        temp_f0 = spB4 + spAC;
        temp_f2 = spBC + spB0;
        spE4 = &spD8;
        spD8 = temp_f0 - spE8;
        spDC = spB8 - spEC;
        spE0 = temp_f2 - spF0;
        spB4 = temp_f0;
        spBC = temp_f2;
    } else {
        spE4 = &spF4;
    }
    sp84 = random_float();
    sp8C = random_float();
    random_u32();
    sp10C = func_151C229C(&spE8, spE4, 0, 0, 0, 0, 130.0f, D_800A154C, (sp84 * 18.0f) + 29.0f, (sp8C * 400.0f) + 262.0f, 100.0f, 0xFF, arg0, 1, 1, 0, 0, 0, 1, 3, 0x1A, 0.0f, 0xFF, -1, 0, (s32) arg2, arg3);
    spA4 = 3;
    spA5 = -1;
    spA6 = (random_u32() % 3U) + 3;
    spA8 = 0;
    sp98 = (s32) spE8;
    sp9C = (s32) spEC;
    spA0 = (s32) spF0;
    func_151602C0(&spA4, &sp98, (random_u32() % 13U) + 0x5A, 0xFF, 0xFF, 0xFF, 0xFF, 0, 0, (s32) arg2, arg3);
    sp94 = ((random_float() * D_800A1550) + D_800A1554) * D_800A1558;
    sp90 = ((random_float() * D_800A155C) + 968.0f) * D_800A1560;
    sp80 = random_u32();
    sp88 = random_u32();
    temp_v0_2 = arg1 * 0xC;
    func_15102B38(arg0, *sp7C, temp_v0_2 + &D_800A1518, temp_v0_2 + &D_800A1530, &sp90, (sp80 % 6U) + 6, (sp88 % 52U) + 0xC1, (random_float() * D_800A1564) + 4000.0f, &spE8, 0xFF, 0, -1, (s32) arg2, arg3);
    return sp10C;
}

s32 func_150EC3D4(void *arg0, s32 arg1) {
    u8 temp_v0;

    if ((char *)(arg0) == (char *)(arg1)) {
        return 0;
    }
    if ((*(s32 *)((char *)(arg0) + 0x0)) == 0) {
        return 0;
    }
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x4));
    if (temp_v0 == 0xFF) {
        return 0;
    }
    if ((temp_v0 == 0) || (temp_v0 == 1) || (temp_v0 == 2) || (temp_v0 == 3) || (temp_v0 == 4) || (temp_v0 == 0x28) || (temp_v0 == 0x77)) {
        return 1;
    }
    return 0;
}

void func_150EC45C(void) {
    func_151C3B0C(0x3F800000, 0x3F800000, 0x3F800000, 0.0f, 0xFF, 0xFF, 0xFF);
}
