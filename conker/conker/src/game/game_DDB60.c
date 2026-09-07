/**
 * Auto-decompiled from asm/DDB60.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_1504715C();                       /* extern */
u32 random_u32();                                /* extern */
f32 random_float();                          /* extern */
void * func_1514373C();              /* extern */
void * func_15143794();              /* extern */
s32 func_15143E24();                               /* extern */
void * func_15152190(); /* extern */
void * func_15153F18();         /* extern */
s32 func_1515C0F8();                    /* extern */
void * func_151C329C();                   /* extern */
void * func_151D9014(); /* extern */
void * memcpy();                          /* extern */
void func_150B0C58();
extern s32 D_8009F810;
extern s32 D_8009F814;
extern s32 D_8009F818;
extern s32 D_8009F81C;
extern f32 D_8009F820;
extern f32 D_8009F824;
extern f32 D_8009F828;
extern f32 D_8009F82C;
extern f32 D_8009F830;
extern f32 D_8009F834;
extern f32 D_8009F838;
extern f32 D_8009F83C;
extern f32 D_8009F840;
extern f32 D_8009F844;
extern f32 D_8009F848;
extern f32 D_8009F84C;
extern f32 D_8009F850;
extern f32 D_8009F854;
extern f32 D_8009F858;
extern f32 D_8009F85C;
extern s32 D_8009F860;
extern s32 D_8009F868;
extern f32 D_8009F870;
extern f32 D_8009F874;
extern f32 D_8009F878;
extern f32 D_8009F87C;
extern f32 D_8009F880;
extern f32 D_8009F884;
extern f32 D_8009F888;
extern f32 D_8009F88C;
extern f32 D_8009F890;
extern f32 D_8009F894;

void func_150B06B0(void *arg0, void * arg1, s32 arg2, s32 arg3) {
    f32 sp13C;
    f32 sp138;
    s32 sp134;
    s8 sp133;
    void * sp10C;
    f32 sp108;
    f32 sp104;
    s32 sp100;
    f32 spFC;
    f32 spF8;
    f32 spF4;
    s16 spF2;
    s16 spF0;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    s16 spDE;
    s16 spDC;
    s16 spDA;
    s16 spD8;
    void * spCC;
    s32 spC8;
    s32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    s16 spB6;
    s16 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    s16 spA2;
    s16 spA0;
    s16 sp9E;
    s16 sp9C;
    void * sp90;
    s32 sp8C;
    s32 sp88;
    s32 sp84;
    s16 sp82;
    s16 sp80;
    f32 sp7C;
    s8 sp78;
    s16 sp76;
    s16 sp74;
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
    f32 sp54;
    f32 sp50;
    void * sp44;
    s16 sp42;
    s16 sp40;
    s16 sp3E;
    s16 sp3C;
    s32 temp_s1;

    temp_s1 = arg2 & 0xFF;
    sp134 = (*(s32 *)((char *)(arg0) + 0x14));
    sp138 = (*(s32 *)((char *)(arg0) + 0x18));
    sp13C = (*(s32 *)((char *)(arg0) + 0x1C));
    sp133 = func_15143E24(arg1) + 0x40;
    func_1504715C(&sp10C, arg0);
    if ((*(s32 *)((char *)(arg0) + 0x4)) == 0xA6) {
        sp104 = sp138 + 50.0f;
        sp100 = sp134;
        sp108 = sp13C;
        func_151C329C(&sp100, temp_s1 & 0xFF, arg3);
        spC4 = 0xA;
        spC8 = 0xA;
        (*(s32 *)((char *)&(spCC) + 0x0)) = (s32) (*(s32 *)((char *)&(sp134) + 0x0));
        (*(s32 *)((char *)&(spCC) + 0x4)) = (s32) (*(s32 *)((char *)&(sp134) + 0x4));
        (*(s32 *)((char *)&(spCC) + 0x8)) = (s32) (*(s32 *)((char *)&(sp134) + 0x8));
        spE0 = 7.0f;
        spE4 = 17.0f;
        spD8 = sp133 - 0x28;
        spDA = 0x50;
        spDC = -0x2D;
        spDE = 0x1A;
        spF0 = 0x19;
        spF2 = 0x19;
        spE8 = D_8009F820;
        spEC = D_8009F824;
        spF4 = D_8009F828;
        spF8 = D_8009F82C;
        spFC = D_8009F830;
        func_15152190(&spC4, &D_8009F810, &D_8009F814, 1, 0.0f, 0, temp_s1, arg3);
        return;
    }
    sp88 = 0xA;
    sp8C = 0xA;
    (*(s32 *)((char *)&(sp90) + 0x0)) = (s32) (*(s32 *)((char *)&(sp134) + 0x0));
    (*(s32 *)((char *)&(sp90) + 0x4)) = (s32) (*(s32 *)((char *)&(sp134) + 0x4));
    (*(s32 *)((char *)&(sp90) + 0x8)) = (s32) (*(s32 *)((char *)&(sp134) + 0x8));
    spA4 = 7.0f;
    spA8 = 17.0f;
    sp9C = sp133 - 0x28;
    sp9E = 0x50;
    spA0 = -0x15;
    spA2 = 0xD;
    spB4 = 0x19;
    spB6 = 0x19;
    spAC = D_8009F834;
    spB0 = D_8009F838;
    spB8 = D_8009F83C;
    spBC = D_8009F840;
    spC0 = D_8009F844;
    func_15152190(&sp88, &D_8009F818, &D_8009F81C, 1, 0.0f, 0, temp_s1, arg3);
    (*(s32 *)((char *)&(sp44) + 0x0)) = (s32) (*(s32 *)((char *)&(sp134) + 0x0));
    (*(s32 *)((char *)&(sp44) + 0x4)) = (s32) (*(s32 *)((char *)&(sp134) + 0x4));
    (*(s32 *)((char *)&(sp44) + 0x8)) = (s32) (*(s32 *)((char *)&(sp134) + 0x8));
    sp50 = D_8009F848;
    sp68 = 7;
    sp6A = 3;
    sp3C = sp133 - 0x3C;
    sp3E = 0x78;
    sp40 = -0x1E;
    sp42 = 0x10;
    sp6C = 3;
    sp6E = 2;
    sp70 = 0x14;
    sp72 = 0x14;
    sp74 = 0x9B;
    sp76 = 0x64;
    sp80 = 0x10;
    sp82 = 0xF;
    sp84 = 0;
    sp78 = 0;
    sp54 = D_8009F84C;
    sp58 = D_8009F850;
    sp5C = D_8009F854;
    sp60 = D_8009F858;
    sp64 = D_8009F85C;
    sp7C = 0.5f;
    func_15153F18(&sp3C, &sp44, &sp10C, temp_s1 & 0xFF, arg3);
    sp78 = 1;
    func_15153F18(&sp3C, &sp44, &sp10C, temp_s1 & 0xFF, arg3);
}

void func_150B0A60(void *arg0, void *arg1, f32 *arg2, f32 *arg3, void * *arg4, s16 *arg5) {
    f32 sp1C;
    f32 temp_f12;
    f32 temp_f2;
    f32 var_f0;

    *arg5 = (s16) (s32) (((*(s16 *)((char *)(arg0) + 0x40)) * D_8009F870) - 128.0f);
    temp_f2 = random_float() * 248.0f;
    sp1C = temp_f2;
    temp_f12 = random_float() + -0.5f;
    if (temp_f2 < 122.0f) {
        (*(s32 *)((char *)(arg4) + 0x4)) = 0.0f;
        (*(f32 *)((char *)(arg4) + 0x0)) = (f32) (((*(f32 *)((char *)(arg3) + 0x0)) * temp_f12 * 122.0f) + ((*(f32 *)((char *)(arg2) + 0x0)) * -31.5f));
        (*(f32 *)((char *)(arg4) + 0x8)) = (f32) (((*(f32 *)((char *)(arg3) + 0x4)) * temp_f12 * 122.0f) + ((*(f32 *)((char *)(arg2) + 0x4)) * -31.5f));
    } else {
        var_f0 = 61.0f;
        if ((temp_f2 - 122.0f) < 63.0f) {
            var_f0 = -61.0f;
            *arg5 += 0x40;
        } else {
            *arg5 -= 0x40;
        }
        (*(s32 *)((char *)(arg4) + 0x4)) = 0.0f;
        (*(f32 *)((char *)(arg4) + 0x0)) = (f32) (((*(f32 *)((char *)(arg3) + 0x0)) * var_f0) + ((s32)((*(f32 *)((char *)(arg2) + 0x0)) * 63.0f) * temp_f12));
        (*(f32 *)((char *)(arg4) + 0x8)) = (f32) (((*(f32 *)((char *)(arg3) + 0x4)) * var_f0) + ((s32)((*(f32 *)((char *)(arg2) + 0x4)) * 63.0f) * temp_f12));
    }
    (*(f32 *)((char *)(arg4) + 0x0)) = (f32) ((*(f32 *)((char *)(arg4) + 0x0)) + (*(f32 *)((char *)(arg0) + 0x14)));
    (*(f32 *)((char *)(arg4) + 0x4)) = (f32) ((*(f32 *)((char *)(arg4) + 0x4)) + (*(f32 *)((char *)(arg1) + 0x118)));
    (*(f32 *)((char *)(arg4) + 0x8)) = (f32) ((*(f32 *)((char *)(arg4) + 0x8)) + (*(f32 *)((char *)(arg0) + 0x1C)));
}

void func_150B0C34(void) {
    func_150B0C58(0xFF, 1U);
}

void func_150B0C58(void *arg0, s32 arg1, s32 arg2) {
    f32 sp3C;
    u8 sp38;
    void *sp34;
    s32 temp_v0;

    sp34 = arg0;
    sp3C = 0.0f;
    sp38 = (*(s32 *)((char *)(arg0) + 0x3B));
    temp_v0 = func_15149130(0x12C, -1, 0x58, -1, 0, 0x43, 0xC, (s32) arg1, arg2);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x28, &sp34, 0xC);
    }
}

void func_150B0CE0(s32 arg0, s32 arg1, s32 arg2) {
    func_15169850(arg1, arg2, arg0 + 0x28, arg0 + 0x2C, arg0);
}

void func_150B0D20(void *arg0) {
    void *sp100;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    void * *spDC;
    void * spD0;
    f32 spCC;
    f32 spC4;
    s16 spC2;
    void *spA4;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f2;
    f32 temp_f30;
    f32 var_f0;
    s32 temp_v0;
    s32 var_s0;
    s32 var_t3;
    u32 temp_s0;
    u32 temp_s0_2;
    u32 temp_s1;
    void *temp_a0;
    void *temp_s4;
    void *temp_v1;

    temp_v1 = (*(s32 *)((char *)(arg0) + 0x28));
    temp_s4 = (char *)(arg0) + 0x28;
    if (((*(s32 *)((char *)(temp_v1) + 0x0)) == 0) || ((*(s32 *)((char *)(temp_s4) + 0x4)) != (*(s32 *)((char *)(temp_v1) + 0x3B)))) {
        (*(s32 *)((char *)(arg0) + 0xE)) = -1;
        return;
    }
    temp_a0 = ((*(s32 *)((char *)(temp_v1) + 0x124)) * 0x32C) + &gObjects;
    var_s0 = 0;
    if ((*(s32 *)((char *)((*(s32 *)((char *)(temp_a0) + 0x31C))) + 0x4F)) == 2) {
        var_f0 = (*(s32 *)((char *)(temp_v1) + 0x3C));
        temp_f2 = (*(s32 *)((char *)(temp_a0) + 0x44)) * D_8009F874;
        if (var_f0 < temp_f2) {
            var_f0 = temp_f2;
        }
        if (var_f0 > 26.0f) {
            var_s0 = 1;
        }
    }
    if (var_s0 != 0) {
        sp100 = temp_v1;
        spA4 = temp_a0;
        temp_v0 = var_s0 * 4;
        (*(f32 *)((char *)(temp_s4) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s4) + 0x8)) + ((*(&D_8009F860 + temp_v0) + (random_float(temp_a0) * *(&D_8009F868 + temp_v0))) * D_800BE9A4));
        if ((*(s32 *)((char *)(temp_s4) + 0x8)) > 1.0f) {
            if (func_1515C0F8(sp100, &spDC) == 0) {
                spDC = &D_800A5480;
            }
            func_1514373C((*(s32 *)((char *)(sp100) + 0x40)) * D_8009F878, 0x3F800000, &spE8, &spEC);
            temp_f30 = D_8009F87C;
            temp_f26 = D_8009F880;
            spE4 = -spE8;
            temp_f24 = D_8009F884;
            spE0 = spEC;
            do {
                func_150B0A60(sp100, spA4, &spE8, &spE0, &spD0, &spC2);
                temp_s0 = random_u32();
                func_15143794(spC2, (s16) ((temp_s0 % 26U) - 0x29), (random_float() * temp_f30) + D_8009F888, &spC4);
                spC4 -= (*(s32 *)((char *)(spDC) + 0x0)) * temp_f24;
                spCC -= (*(s32 *)((char *)(spDC) + 0x8)) * temp_f24;
                temp_f20 = random_float();
                temp_s1 = random_u32();
                temp_s0_2 = random_u32();
                temp_f22 = random_float();
                var_t3 = 0;
                if (random_float() < D_8009F894) {
                    var_t3 = 1;
                }
                func_151D9014(&spD0, &spC4, 5, (temp_f20 * D_8009F88C) + D_8009F890, var_t3, temp_f26, temp_f26, 1, 0, 1, 0, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
                (*(f32 *)((char *)(temp_s4) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s4) + 0x8)) - 1.0f);
            } while ((*(s32 *)((char *)(temp_s4) + 0x8)) > 1.0f);
        }
    }
}
