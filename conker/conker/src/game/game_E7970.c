/**
 * Auto-decompiled from asm/E7970.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


u8 func_15046C80();               /* extern */
void func_1504715C();                          /* extern */
u32 random_u32();                                /* extern */
f32 random_float();                                /* extern */
void * func_15143794();              /* extern */
void * func_15143E94();                              /* extern */
void * func_1514C678(); /* extern */
void * func_1515C244();         /* extern */
void * func_15165F80(); /* extern */
void * func_1518A3C0(); /* extern */
void * memcpy();                          /* extern */
extern f32 D_8009FE30;
extern f32 D_8009FE34;
extern f32 D_8009FE38;
extern f32 D_8009FE3C;
extern f32 D_8009FE40;
extern f32 D_8009FE44;
extern f32 D_8009FE48;
extern f32 D_8009FE4C;
extern f32 D_8009FE50;
extern f32 D_8009FE54;
extern f32 D_8009FE58;
extern f32 D_8009FE60;
extern f32 D_8009FE64;

void func_150BA4C0(void *arg0, s32 arg1, s32 arg2) {
    f32 sp44;
    u8 sp40;
    void *sp3C;
    s32 temp_v0;

    sp3C = arg0;
    sp40 = (*(s32 *)((char *)(arg0) + 0x3B));
    sp44 = 0.0f;
    temp_v0 = func_15149130((s16) ((random_u32() % 9U) + 0xF), -1, 0x52, -1, 1, 0x3F, 0xC, (s32) arg1, arg2);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x28, &sp3C, 0xC);
    }
}

void func_150BA55C(void *arg0) {
    f32 spF0;
    s32 spEC;
    void * spE8;
    f32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f28;
    f32 temp_f2;
    f32 temp_f30;
    f32 temp_f6;
    s32 temp_s5;
    u32 temp_s0;
    void *temp_s1;
    void *temp_s4;

    f32 spF4;
    f32 spF8;
    temp_s4 = (*(s32 *)((char *)(arg0) + 0x28));
    temp_s1 = (char *)(arg0) + 0x28;
    if (((*(s32 *)((char *)(temp_s4) + 0x0)) == 0) || ((*(s32 *)((char *)(temp_s1) + 0x4)) != (*(s32 *)((char *)(temp_s4) + 0x3B)))) {
        (*(s32 *)((char *)(arg0) + 0xE)) = -1;
        return;
    }
    if ((*(s32 *)((char *)(temp_s4) + 0x1D4)) != 0) {
        (*(f32 *)((char *)(temp_s1) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x8)) + ((D_8009FE30 + (random_float() * D_8009FE34)) * D_800BE9A4));
        if ((*(s32 *)((char *)(temp_s1) + 0x8)) > 1.0f) {
            spD8 = ((*(s32 *)((char *)(temp_s4) + 0x14C)) + (*(s32 *)((char *)(temp_s4) + 0x150))) * 0.5f;
            temp_s5 = ((s32) (*(s32 *)((char *)(temp_s4) + 0x76)) >> 8) - 0x40;
            func_1515C244(temp_s4, &spF0, &spEC, &spE8);
            temp_f30 = D_8009FE38;
            temp_f28 = D_8009FE3C;
            spE0 = 0.0f;
            do {
                temp_s0 = random_u32();
                func_15143794((s16) (((temp_s0 % 127U) + temp_s5) - 0x3F), (s16) ((random_u32() % 31U) - 0x32), spEC, &spCC);
                temp_f6 = spD0 * (*(s32 *)((char *)(temp_s4) + 0xF0));
                spCC += spF0;
                spD0 = temp_f6;
                spD0 = temp_f6 + spF4;
                spD4 += spF8;
                spC0 = random_float() * 360.0f;
                spC4 = random_float() * 360.0f;
                spC8 = random_float() * 360.0f;
                temp_f2 = (random_float() * D_8009FE40) + D_8009FE44;
                spB4 = (spCC - spF0) * temp_f2;
                spB8 = (spD0 - spF4) * temp_f2;
                spBC = (spD4 - spF8) * temp_f2;
                spDC = (random_float() * temp_f28) + temp_f30;
                spE4 = (random_float() * temp_f28) + temp_f30;
                temp_f22 = random_float();
                temp_f20 = random_float();
                func_1518A3C0(&spCC, &spC0, ((temp_f22 * D_8009FE48) + D_8009FE4C) * spD8, &spB4, &spDC, (temp_f20 * D_8009FE50) + D_8009FE54, D_8009FE58, 7, (random_u32() % 41U) + 0x3C, 0, 0, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
                (*(f32 *)((char *)(temp_s1) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x8)) - 1.0f);
            } while ((*(s32 *)((char *)(temp_s1) + 0x8)) > 1.0f);
        }
    }
}

void func_150BA8F0(s32 arg0, s32 arg1, s32 arg2) {
    func_15149514(arg1, arg2, arg0 + 0x28, arg0 + 0x2C, arg0);
}

u8 func_150BA930(f32 *arg0, void *arg1, void * *arg2, s32 arg3) {
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    f32 temp_f0;

    (*(s32 *)((char *)(arg0) + 0x0)) = (*(s32 *)((char *)(arg1) + 0x14));
    temp_f0 = (*(s32 *)((char *)(arg1) + 0x180));
    if (D_8009FE60 < temp_f0) {
        (*(s32 *)((char *)(arg0) + 0x4)) = temp_f0;
    } else {
        (*(f32 *)((char *)(arg0) + 0x4)) = (f32) (*(f32 *)((char *)(arg1) + 0x18));
    }
    (*(f32 *)((char *)(arg0) + 0x8)) = (f32) (*(f32 *)((char *)(arg1) + 0x1C));
    if (arg2 == NULL) {
        return 1U;
    }
    sp24 = (*(s32 *)((char *)(arg0) + 0x0));
    sp28 = (*(s32 *)((char *)(arg0) + 0x4)) + 100.0f;
    sp2C = (*(s32 *)((char *)(arg0) + 0x8));
    func_1504715C(arg2, arg2);
    return func_15046C80(arg0, arg1, arg2, arg3);
}

s32 func_150BAA00(s32 arg0, void * arg1) {
    return 9;
}

void func_150BAA14(void *arg0, s32 arg1, void * arg2) {
    f32 sp6C;
    void * sp48;
    s32 sp44;
    u8 sp43;
    f32 sp38;

    f32 sp70;
    f32 sp74;
    if ((*(s32 *)((char *)(arg0) + 0x1D4)) != 0) {
        sp43 = func_150BA930(&sp6C, arg0, &sp48, arg1);
        func_151D5404(&sp6C, 0x44A36000, 0x44FA0000, 0x3A03126F, 0xC, 0xF, 0xFF, 0);
        func_15143E94(5, 0x4022);
        if (sp43 != 0) {
            sp44 = (s32) ((*(s32 *)((char *)((D_800DBFF0 + (D_80082FA4 * 0x9A0))) + 0x380)) * D_8009FE64);
            func_15165F80(-1, (s32) sp6C, (s32) (sp70 + 6.0f), (s32) sp74, 0x19, 0x12, 0, 0xFF, 1);
            sp38 = random_float();
            func_1514C678(sp6C, sp70, sp74, (sp38 * 50.0f) + 40.0f, sp44 + 0x3C, sp44 - 0x3C, (random_u32() % 11U) + 0x1E, 5, 0, 0.0f, 0, 0xFF);
        }
    }
}
