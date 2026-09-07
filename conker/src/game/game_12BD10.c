/**
 * Auto-decompiled from asm/12BD10.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


u32 random_u32();                                /* extern */
f32 random_float();                                /* extern */
void * func_15102B38(); /* extern */
void * func_15145740();      /* extern */
void * func_15145EA4();         /* extern */
void * func_151C229C(); /* extern */
void * func_151D3F14();                    /* extern */
void * func_151D4408(); /* extern */
void * func_151D5148();                            /* extern */
void func_150FEC28();
extern u8 D_80088BA0;
extern s32 D_800A2000;
extern s32 D_800A200C;
extern s32 D_800A2018;
extern s32 D_800A2024;
extern f32 D_800A2030;
extern f32 D_800A2034;
extern f32 D_800A2038;
extern f32 D_800A203C;
extern f32 D_800A2040;
extern f32 D_800A2044;
extern f32 D_800A2048;
extern f32 D_800A204C;

void func_150FE860(void *arg0, s32 arg1, s32 arg2) {
    f32 sp10C;
    f32 sp108;
    f32 sp104;
    f32 spF8;
    void * spEC;
    void * spE0;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    s32 spBC;
    void * *spB8;
    void * *spB4;
    void * *spB0;
    f32 *spAC;
    f32 *spA8;
    f32 *spA4;
    f32 sp8C;
    f32 sp88;
    f32 temp_f0;
    f32 temp_f2;
    f32 var_f14;
    f32 var_f16;
    s32 temp_a2;
    s32 temp_v0;

    f32 spD8;
    f32 spDC;
    f32 sp100;
    func_151D5148(arg0);
    func_15145740(arg0, &spF8, &spEC, &spE0, D_800A2030);
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x1D4));
    if (temp_v0 != 0) {
        temp_a2 = temp_v0 + (D_80088BA0 << 6);
        spB0 = &D_800A2000;
        spB4 = &D_800A2018;
        spB8 = &D_800A2024;
        spA4 = &sp104;
        spA8 = &spD4;
        spAC = &spC8;
        spBC = temp_a2;
        func_15145EA4(spF8, &spB0, &spA4, temp_a2, 3);
        spC8 -= spD4;
        spCC -= spD8;
        spD0 -= spDC;
    } else {
        temp_f0 = fabsf(spF8);
        spBC = 0;
        if ((D_800A2034 < temp_f0) || (D_800A2034 < fabsf(sp100))) {
            temp_f2 = 1.0f / sqrtf((spF8 * spF8) + (sp100 * sp100));
            var_f14 = sp100 * temp_f2;
            var_f16 = -spF8 * temp_f2;
        } else {
            var_f14 = 1.0f;
            var_f16 = 0.0f;
        }
        sp104 = (*(s32 *)((char *)(arg0) + 0x14)) + (34.0f * var_f16);
        sp108 = (*(s32 *)((char *)(arg0) + 0x18)) + 49.0f;
        sp10C = (*(s32 *)((char *)(arg0) + 0x1C)) + (34.0f * var_f14);
    }
    sp88 = random_float();
    sp8C = random_float();
    func_151C229C(&sp104, &spF8, 0, 0, 0, 0, 300.0f, D_800A2038, (sp88 * 10.0f) + 25.0f, (sp8C * 200.0f) + 400.0f, 50.0f, (random_u32() % 156U) + 0x64, arg0, 1, 1, 0, 0, 1, 1, 0, 0x35, 0.0f, 0xFF, -1, 0, (s32) arg1, arg2);
    if (((*(s32 *)((char *)(arg0) + 0x1D4)) != 0) && (((*(s32 *)((char *)(arg0) + 0x74)) & 0xF) != 0xF)) {
        func_151D3F14(&sp104, arg1, arg2);
        func_151D4408(&spD4, &spC8, spBC, arg0, 1.0f, (s32) arg1, arg2);
        if (random_u32() & 1) {
            func_150FEC28(arg0, D_80088BA0, &D_800A2000, &D_800A200C, &sp104, (s32) arg1, arg2);
        }
    }
}

void func_150FEBC8(void *arg0, void * arg1, void * *arg2) {
    void * *sp20;
    void * *sp1C;

    sp20 = &D_800A2000;
    sp1C = arg2;
    func_15145EA4((f32)(s32)&sp20, &sp1C, (*(f32 *)((char *)(arg0) + 0x1D4)) + (D_80088BA0 << 6), 1);
}

void func_150FEC28(void *arg0, s32 arg1, void * *arg2, void * *arg3, f32 *arg4, s32 arg5, s32 arg6) {
    f32 sp54;
    f32 sp50;
    u32 sp48;
    u32 sp44;

    sp54 = (random_float() * D_800A203C) + D_800A2040;
    sp50 = (random_float() * D_800A2044) + D_800A2048;
    sp44 = random_u32();
    sp48 = random_u32();
    func_15102B38(arg0, arg1, arg2, arg3, &sp50, (sp44 & 3) + 6, 0xFF, (random_float() * 270.0f) + D_800A204C, arg4, 0xFF, 0, -1, (s32) arg5, arg6);
}
