/**
 * Auto-decompiled from asm/1E0560.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_1502EC34(); /* extern */
s32 func_1513F4E4();                   /* extern */
s32 func_15142B7C();                /* extern */
s32 func_15142C10();   /* extern */
s32 func_15142CF0(); /* extern */
s32 func_15142E24(); /* extern */
void *func_15142FBC();           /* extern */
void * func_15143134();             /* extern */
void *func_15167A68();      /* extern */
void * func_151D5D60();      /* extern */
void * func_151D5E30();                       /* extern */
void * memcpy();                           /* extern */
extern s32 D_8008FAF0;
extern s32 D_8008FAF8;
extern s32 D_8008FB10;
extern s32 D_8008FB68;
extern s32 D_8008FB70;
extern s32 D_80090DE8;
extern s32 D_800A4AC8;
extern f32 D_800AA390;
extern f32 D_800AA394;
extern f32 D_800AA398;
extern f32 D_800AA39C;
extern f32 D_800AA3A0;
extern f32 D_800AA3A4;
extern f32 D_800AA3A8;
extern f32 D_800AA3AC;
extern f32 D_800AA3B0;
extern f32 D_800AA3B4;
extern f32 D_800AA3B8;
extern f32 D_800AA3C0;
extern f32 D_800AA3C4;
extern f32 D_800AA3C8;
extern s32 D_800D2C9C;
u8 func_151B3A7C();

void *func_151B30B0(s32 arg0, f32 arg1, s32 arg2, u8 arg3, s32 arg4) {
    void *sp24;
    f32 temp_f0;
    void *temp_v0;

    temp_v0 = func_15167A68(0x33, arg4, arg2 + 0x150, 1, (s32) arg3, 1);
    if (temp_v0 == NULL) {
        return NULL;
    }
    sp24 = temp_v0;
    memcpy((char *)(temp_v0) + 0x10, arg0, 0x38);
    temp_f0 = (*(s32 *)((char *)(temp_v0) + 0x38));
    (*(u8 *)((char *)(temp_v0) + 0x10)) = (u8) ((*(u8 *)((char *)(temp_v0) + 0x10)) | 0xE);
    (*(f32 *)((char *)(temp_v0) + 0x138)) = (f32) (2.0f * ((temp_f0 * temp_f0) / D_800AA390));
    (*(s32 *)((char *)(temp_v0) + 0x13C)) = (s32) (temp_f0 * arg1 * 4096.0f);
    bzero((char *)(temp_v0) + 0x140, 0x10);
    return sp24;
}

void func_151B3184(void *arg0) {
    u8 sp1B;
    s8 temp_v0;
    s8 temp_v0_2;
    s8 temp_v0_4;
    u8 temp_v0_3;
    u8 var_v1;

    var_v1 = 0;
    if ((*(s32 *)((char *)(arg0) + 0x10)) & 1) {
        (*(s16 *)((char *)(arg0) + 0x12)) = (s16) ((*(s16 *)((char *)(arg0) + 0x12)) - D_800BE9E4);
        if ((*(s32 *)((char *)(arg0) + 0x12)) < 0) {
            var_v1 = 1;
        }
    }
    if (var_v1 == 0) {
        temp_v0 = (*(s32 *)((char *)(arg0) + 0x2C));
        if (temp_v0 != -1) {
            sp1B = var_v1;
            if (((s32 (*)())((char *)(&D_8008FAF0 + (temp_v0 * 4))))((char *)(arg0) + 0x14, 1) == 0) {
                var_v1 = 1;
            }
        }
        temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x2D));
        if (temp_v0_2 != -1) {
            sp1B = var_v1;
            if (((s32 (*)())((char *)(&D_8008FAF0 + (temp_v0_2 * 4))))(arg0, (char *)(arg0) + 0x20, 0) == 0) {
                var_v1 = 1;
            }
        }
        temp_v0_3 = (*(s32 *)((char *)(arg0) + 0x10));
        if ((temp_v0_3 & 4) || (temp_v0_3 & 8)) {
            (*(u8 *)((char *)(arg0) + 0x10)) = (u8) (temp_v0_3 | 2);
        } else {
            temp_v0_4 = (*(s32 *)((char *)(arg0) + 0x34));
            if (temp_v0_4 != -1) {
                sp1B = var_v1;
                if (((s32 (*)())((char *)(&D_8008FAF8 + (temp_v0_4 * 4))))(arg0) == 0) {
                    var_v1 = 1;
                }
            }
        }
    }
    if (var_v1 != 0) {
        func_1516972C(arg0);
    }
}

void *func_151B32C8(void *arg0, void *arg1, s32 arg2) {
    void *sp140;
    f32 sp134;
    f32 sp128;
    void *sp120;
    s8 spEF;
    s32 spE8;
    s32 spE4;
    s32 spE0;
    s32 spDC;
    s32 spD8;
    s32 spD4;
    s32 spD0;
    s32 spCC;
    s32 spC8;
    s32 spC4;
    s32 spC0;
    u8 spBF;
    u8 spBE;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f24;
    f32 temp_f24_2;
    f32 temp_f28;
    f32 temp_f28_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 var_f18;
    f32 var_f18_2;
    f32 var_f20;
    f32 var_f20_2;
    f32 var_f22;
    f32 var_f22_2;
    s32 var_a2;
    s32 var_t0;
    u8 temp_v0;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_t6;
    void *temp_t7;
    void *temp_v1;
    void *temp_v1_2;
    void *var_a3;
    void *var_s0;
    void *var_t1;

    f32 sp138;
    f32 sp13C;
    f32 sp12C;
    f32 sp130;
    var_s0 = arg0;
    temp_v0 = (*(s32 *)((char *)(arg1) + 0x10));
    if (temp_v0 & 4) {

    } else if (temp_v0 & 8) {

    } else if (temp_v0 & 2) {

    } else {
        func_151D5D60((char *)(arg1) + 0x140, arg2, 0x190, &sp140, 0);
        if (sp140 != NULL) {
            spEF = 1;
            sp120 = (arg2 * 0x9A0) + D_800DBFF0 + 0x2F8;
            if (((s32 (*)())((char *)(&D_8008FB10 + ((*(s32 *)((char *)(arg1) + 0x2E)) * 4))))(arg1, &spE8, &spE4, &spE0, &spDC, &spD8, &spD4, &spD0, &spCC, &spC8, &spC4, &spC0, &spBF, &spBE) == 0) {

            } else {
                temp_v1 = (spBF * 8) + &D_800A4AC8;
                var_s0 = func_15142FBC(func_15142E24(func_1513F4E4(func_15142CF0(func_15142C10(func_15142B7C(var_s0, spE8, spE4), spD0, spCC, spC8, spC4, &spEF), 0, 0, spE0, spDC, spD8, spD4, &spEF), spBE, &spEF), &D_80090DE8, 0, 0, 0, 0, 0x36, 0, 0, &spEF, 3), spC0 | 0x80000 | D_800D2C9C | 0x2CA0, (*(s32 *)((char *)(temp_v1) + 0x4)) | (*(s32 *)((char *)(temp_v1) + 0x0)), &spEF);
                temp_v1_2 = (char *)(arg1) + 0x48;
                (*(s32 *)((char *)&(sp134) + 0x0)) = (*(s32 *)((char *)(arg1) + 0x48));
                (*(s32 *)((char *)&(sp134) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v1_2) + 0x4));
                (*(s32 *)((char *)&(sp134) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v1_2) + 0x8));
                (*(s32 *)((char *)&(sp128) + 0x0)) = (*(s32 *)((char *)(temp_v1_2) + 0x18));
                (*(s32 *)((char *)&(sp128) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v1_2) + 0x1C));
                (*(s32 *)((char *)&(sp128) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v1_2) + 0x20));
                temp_f20 = sp134 - (*(s32 *)((char *)(sp120) + 0x0));
                temp_f22 = sp138 - (*(s32 *)((char *)(sp120) + 0x4));
                temp_f24 = sp13C - (*(s32 *)((char *)(sp120) + 0x8));
                temp_f2 = sp12C - sp138;
                temp_f18 = sp130 - sp13C;
                temp_f0 = sp128 - sp134;
                temp_f12 = (temp_f2 * temp_f24) - (temp_f22 * temp_f18);
                temp_f14 = (temp_f18 * temp_f20) - (temp_f24 * temp_f0);
                temp_f16 = (temp_f0 * temp_f22) - (temp_f20 * temp_f2);
                temp_f28 = (temp_f12 * temp_f12) + (temp_f14 * temp_f14) + (temp_f16 * temp_f16);
                if (temp_f28 == 0.0f) {
                    var_f18 = 0.0f;
                    var_f20 = 0.0f;
                    var_f22 = 0.0f;
                } else {
                    temp_f2_2 = (*(s32 *)((char *)(arg1) + 0x30)) / sqrtf(temp_f28);
                    var_f18 = temp_f12 * temp_f2_2;
                    var_f20 = temp_f14 * temp_f2_2;
                    var_f22 = temp_f16 * temp_f2_2;
                }
                var_a3 = (char *)(temp_v1_2) + 0x18;
                (*(s16 *)((char *)(sp140) + 0x0)) = (s16) (s32) (sp134 + var_f18);
                var_t1 = (char *)(var_a3) - 0x18;
                var_t0 = 0x18;
                (*(s16 *)((char *)(sp140) + 0x2)) = (s16) (s32) (sp138 + var_f20);
                (*(s16 *)((char *)(sp140) + 0x4)) = (s16) (s32) (sp13C + var_f22);
                (*(s32 *)((char *)(sp140) + 0x8)) = 0;
                (*(s32 *)((char *)(sp140) + 0xA)) = 0;
                (*(s32 *)((char *)(sp140) + 0xC)) = 0xFF;
                (*(s32 *)((char *)(sp140) + 0xD)) = 0x64;
                (*(s32 *)((char *)(sp140) + 0xE)) = 0x64;
                (*(s32 *)((char *)(sp140) + 0xF)) = 0xFF;
                temp_t7 = (char *)(sp140) + 0x10;
                sp140 = temp_t7;
                (*(s16 *)((char *)(sp140) + 0x10)) = (s16) (s32) (sp134 - var_f18);
                (*(s16 *)((char *)(sp140) + 0x2)) = (s16) (s32) (sp138 - var_f20);
                (*(s16 *)((char *)(sp140) + 0x4)) = (s16) (s32) (sp13C - var_f22);
                (*(s32 *)((char *)(sp140) + 0x8)) = 0x3C0;
                (*(s32 *)((char *)(temp_t7) + 0xA)) = 0;
                (*(s32 *)((char *)(sp140) + 0xC)) = 0xFF;
                (*(s32 *)((char *)(sp140) + 0xD)) = 0x64;
                (*(s32 *)((char *)(sp140) + 0xE)) = 0x64;
                (*(s32 *)((char *)(temp_t7) + 0xF)) = 0xFF;
                sp140 = (char *)(sp140) + 0x10;
                var_a2 = (*(s32 *)((char *)(arg1) + 0x13C));
                do {
                    var_t0 += 0x18;
                    var_a3 = (char *)(var_a3) + 0x18;
                    (*(s32 *)((char *)&(sp134) + 0x0)) = (*(s32 *)((char *)(var_t1) + 0x0));
                    (*(s32 *)((char *)&(sp134) + 0x4)) = (s32) (*(s32 *)((char *)(var_t1) + 0x4));
                    (*(s32 *)((char *)&(sp134) + 0x8)) = (s32) (*(s32 *)((char *)(var_t1) + 0x8));
                    (*(s32 *)((char *)&(sp128) + 0x0)) = (*(s32 *)((char *)(var_a3) - 0x18));
                    (*(s32 *)((char *)&(sp128) + 0x4)) = (s32) (*(s32 *)((char *)(var_a3) - 0x14));
                    (*(s32 *)((char *)&(sp128) + 0x8)) = (s32) (*(s32 *)((char *)(var_a3) - 0x10));
                    temp_f20_2 = sp128 - (*(s32 *)((char *)(sp120) + 0x0));
                    temp_f22_2 = sp12C - (*(s32 *)((char *)(sp120) + 0x4));
                    temp_f24_2 = sp130 - (*(s32 *)((char *)(sp120) + 0x8));
                    temp_f2_3 = sp12C - sp138;
                    temp_f18_2 = sp130 - sp13C;
                    temp_f0_2 = sp128 - sp134;
                    temp_f12_2 = (temp_f2_3 * temp_f24_2) - (temp_f22_2 * temp_f18_2);
                    temp_f14_2 = (temp_f18_2 * temp_f20_2) - (temp_f24_2 * temp_f0_2);
                    temp_f16_2 = (temp_f0_2 * temp_f22_2) - (temp_f20_2 * temp_f2_3);
                    temp_f28_2 = (temp_f12_2 * temp_f12_2) + (temp_f14_2 * temp_f14_2) + (temp_f16_2 * temp_f16_2);
                    if (temp_f28_2 == 0.0f) {
                        var_f18_2 = 0.0f;
                        var_f20_2 = 0.0f;
                        var_f22_2 = 0.0f;
                    } else {
                        temp_f2_4 = (*(s32 *)((char *)(arg1) + 0x30)) / sqrtf(temp_f28_2);
                        var_f18_2 = temp_f12_2 * temp_f2_4;
                        var_f20_2 = temp_f14_2 * temp_f2_4;
                        var_f22_2 = temp_f16_2 * temp_f2_4;
                    }
                    (*(s16 *)((char *)(sp140) + 0x0)) = (s16) (s32) (sp128 + var_f18_2);
                    (*(s16 *)((char *)(sp140) + 0x2)) = (s16) (s32) (sp12C + var_f20_2);
                    (*(s16 *)((char *)(sp140) + 0x4)) = (s16) (s32) (sp130 + var_f22_2);
                    (*(s32 *)((char *)(sp140) + 0x8)) = 0;
                    (*(s16 *)((char *)(sp140) + 0xA)) = (s16) var_a2;
                    (*(s32 *)((char *)(sp140) + 0xC)) = 0xFF;
                    (*(s32 *)((char *)(sp140) + 0xD)) = 0x64;
                    (*(s32 *)((char *)(sp140) + 0xE)) = 0x64;
                    (*(s32 *)((char *)(sp140) + 0xF)) = 0xFF;
                    temp_t6 = (char *)(sp140) + 0x10;
                    sp140 = temp_t6;
                    (*(s16 *)((char *)(sp140) + 0x10)) = (s16) (s32) (sp128 - var_f18_2);
                    (*(s16 *)((char *)(sp140) + 0x2)) = (s16) (s32) (sp12C - var_f20_2);
                    (*(s16 *)((char *)(sp140) + 0x4)) = (s16) (s32) (sp130 - var_f22_2);
                    (*(s32 *)((char *)(sp140) + 0x8)) = 0x3C0;
                    (*(s16 *)((char *)(temp_t6) + 0xA)) = (s16) var_a2;
                    (*(s32 *)((char *)(sp140) + 0xC)) = 0xFF;
                    (*(s32 *)((char *)(sp140) + 0xD)) = 0x64;
                    (*(s32 *)((char *)(sp140) + 0xE)) = 0x64;
                    (*(s32 *)((char *)(temp_t6) + 0xF)) = 0xFF;
                    sp140 = (char *)(sp140) + 0x10;
                    var_a2 += (*(s32 *)((char *)(arg1) + 0x13C));
                    (*(s32 *)((char *)(var_s0) + 0x0)) = 0x01004008;
                    temp_s0 = (char *)(var_s0) + 8;
                    (*(s32 *)((char *)(var_s0) + 0x4)) = (void *) ((char *)(sp140) - 0x40);
                    (*(s32 *)((char *)(var_s0) + 0x8)) = 0x05000204;
                    (*(s32 *)((char *)(temp_s0) + 0x4)) = 0;
                    temp_s0_2 = (char *)(temp_s0) + 8;
                    (*(s32 *)((char *)(temp_s0) + 0x8)) = 0x05020604;
                    (*(s32 *)((char *)(temp_s0_2) + 0x4)) = 0;
                    var_s0 = (char *)(temp_s0_2) + 8;
                    var_t1 = (char *)(var_t1) + 0x18;
                } while (var_t0 != 0xF0);
            }
        }
    }
    return var_s0;
}

void func_151B3A34(void *arg0, s32 arg2) {
    void * (*temp_v0)(s32);

    temp_v0 = *(&D_8008FB68 + ((*(s32 *)((char *)(arg0) + 0x44)) * 4));
    if (temp_v0 != NULL) {
        temp_v0(arg2 & 0xFF);
    }
}

u8 func_151B3A7C(void *arg0) {
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 *var_a2;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    s32 var_v0;
    void *var_a1;
    void *var_a3;
    void *var_t0;
    void *var_v1;

    (*(s32 *)((char *)&(sp44) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x14));
    (*(f32 *)((char *)&(sp44) + 0x4)) = (f32) (*(f32 *)((char *)(arg0) + 0x18));
    var_v1 = (char *)(arg0) + 0x30;
    (*(f32 *)((char *)&(sp44) + 0x8)) = (f32) (*(f32 *)((char *)(arg0) + 0x1C));
    var_a1 = (char *)(var_v1) + 0x48;
    var_a2 = (char *)(var_v1) + 0x60;
    (*(f32 *)((char *)(arg0) + 0x48)) = (f32) (*(f32 *)((char *)&(sp44) + 0x0));
    var_a3 = (char *)(var_v1) + 0x78;
    var_t0 = (char *)(var_v1) + 0x90;
    (*(f32 *)((char *)(arg0) + 0x4C)) = (f32) (*(f32 *)((char *)&(sp44) + 0x4));
    (*(s32 *)((char *)(arg0) + 0x5C)) = 0.0f;
    (*(s32 *)((char *)(arg0) + 0x58)) = 0.0f;
    (*(f32 *)((char *)(arg0) + 0x50)) = (f32) (*(f32 *)((char *)&(sp44) + 0x8));
    (*(s32 *)((char *)(arg0) + 0x54)) = 0.0f;
    temp_f14 = ((*(s32 *)((char *)(arg0) + 0x20)) - (*(s32 *)((char *)(arg0) + 0x14))) * D_800AA394;
    temp_f16 = ((*(s32 *)((char *)(arg0) + 0x24)) - (*(s32 *)((char *)(arg0) + 0x18))) * D_800AA398;
    var_v0 = 2;
    sp44 += temp_f14;
    sp48 += temp_f16;
    temp_f18 = ((*(s32 *)((char *)(arg0) + 0x28)) - (*(s32 *)((char *)(arg0) + 0x1C))) * D_800AA39C;
    sp4C += temp_f18;
    (*(f32 *)((char *)(arg0) + 0x60)) = (f32) (*(f32 *)((char *)&(sp44) + 0x0));
    (*(f32 *)((char *)(arg0) + 0x64)) = (f32) (*(f32 *)((char *)&(sp44) + 0x4));
    (*(s32 *)((char *)(arg0) + 0x74)) = 0.0f;
    (*(s32 *)((char *)(arg0) + 0x70)) = 0.0f;
    (*(s32 *)((char *)(arg0) + 0x6C)) = 0.0f;
    (*(f32 *)((char *)(arg0) + 0x68)) = (f32) (*(f32 *)((char *)&(sp44) + 0x8));
    sp44 += temp_f14;
    sp48 += temp_f16;
    sp4C += temp_f18;
    do {
        (*(f32 *)((char *)(var_a1) + 0x0)) = (f32) (*(f32 *)((char *)&(sp44) + 0x0));
        (*(f32 *)((char *)(var_a1) + 0x4)) = (f32) (*(f32 *)((char *)&(sp44) + 0x4));
        (*(f32 *)((char *)(var_a1) + 0x8)) = (f32) (*(f32 *)((char *)&(sp44) + 0x8));
        (*(s32 *)((char *)(var_v1) + 0x54)) = 0.0f;
        (*(s32 *)((char *)(var_v1) + 0x58)) = 0.0f;
        (*(s32 *)((char *)(var_v1) + 0x5C)) = 0.0f;
        sp44 += temp_f14;
        sp48 += temp_f16;
        sp4C += temp_f18;
        var_v0 += 4;
        var_v1 = (char *)(var_v1) + 0x60;
        *var_a2 = (*(s32 *)((char *)&(sp44) + 0x0));
        var_a1 = (char *)(var_a1) + 0x60;
        var_a2 += 0x60;
        (*(f32 *)((char *)(var_a2) - 0x5C)) = (f32) (*(f32 *)((char *)&(sp44) + 0x4));
        var_a3 = (char *)(var_a3) + 0x60;
        var_t0 = (char *)(var_t0) + 0x60;
        (*(f32 *)((char *)(var_a2) - 0x58)) = (f32) (*(f32 *)((char *)&(sp44) + 0x8));
        (*(s32 *)((char *)(var_v1) + 0x14)) = 0.0f;
        (*(s32 *)((char *)(var_v1) + 0x10)) = 0.0f;
        (*(s32 *)((char *)(var_v1) + 0xC)) = 0.0f;
        sp44 += temp_f14;
        sp48 += temp_f16;
        sp4C += temp_f18;
        (*(f32 *)((char *)(var_a3) - 0x60)) = (f32) (*(f32 *)((char *)&(sp44) + 0x0));
        (*(f32 *)((char *)(var_a3) - 0x5C)) = (f32) (*(f32 *)((char *)&(sp44) + 0x4));
        (*(f32 *)((char *)(var_a3) - 0x58)) = (f32) (*(f32 *)((char *)&(sp44) + 0x8));
        (*(s32 *)((char *)(var_v1) + 0x2C)) = 0.0f;
        (*(s32 *)((char *)(var_v1) + 0x28)) = 0.0f;
        (*(s32 *)((char *)(var_v1) + 0x24)) = 0.0f;
        sp44 += temp_f14;
        sp48 += temp_f16;
        sp4C += temp_f18;
        (*(f32 *)((char *)(var_t0) - 0x60)) = (f32) (*(f32 *)((char *)&(sp44) + 0x0));
        (*(f32 *)((char *)(var_t0) - 0x5C)) = (f32) (*(f32 *)((char *)&(sp44) + 0x4));
        (*(f32 *)((char *)(var_t0) - 0x58)) = (f32) (*(f32 *)((char *)&(sp44) + 0x8));
        (*(s32 *)((char *)(var_v1) + 0x44)) = 0.0f;
        (*(s32 *)((char *)(var_v1) + 0x40)) = 0.0f;
        (*(s32 *)((char *)(var_v1) + 0x3C)) = 0.0f;
        sp44 += temp_f14;
        sp48 += temp_f16;
        sp4C += temp_f18;
    } while (var_v0 != 0xA);
    (*(u8 *)((char *)(arg0) + 0x10)) = (u8) ((*(u8 *)((char *)(arg0) + 0x10)) & 0xFFFD);
    return 1U;
}

s32 func_151B3CF0(void *arg0) {
    f32 sp80;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f22_3;
    f32 temp_f24;
    f32 temp_f24_2;
    f32 temp_f24_3;
    f32 temp_f26;
    f32 temp_f26_2;
    f32 temp_f28;
    f32 temp_f28_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f30;
    f32 temp_f30_2;
    f32 temp_f4;
    f32 temp_f6;
    f32 var_f20;
    s32 var_s1;
    void *temp_s0;
    void *var_s2;

    temp_f26 = (*(s32 *)((char *)(arg0) + 0x20));
    temp_f2 = (*(s32 *)((char *)(arg0) + 0x14));
    temp_f28 = (*(s32 *)((char *)(arg0) + 0x24));
    temp_f12 = (*(s32 *)((char *)(arg0) + 0x18));
    temp_f18 = temp_f26 - temp_f2;
    temp_f0 = fabsf(temp_f18);
    sp80 = temp_f28 - temp_f12;
    temp_f14 = (*(s32 *)((char *)(arg0) + 0x1C));
    temp_f30 = (*(s32 *)((char *)(arg0) + 0x28));
    temp_f20 = temp_f30 - temp_f14;
    if ((D_800AA3A0 < temp_f0) || (D_800AA3A0 < fabsf(temp_f20))) {
        temp_f16 = temp_f2 + (temp_f18 * 0.5f);
        sp70 = temp_f16;
        temp_f4 = temp_f2 - temp_f16;
        temp_f22 = temp_f12 + (sp80 * 0.5f);
        sp64 = temp_f4;
        temp_f24 = temp_f14 + (temp_f20 * 0.5f);
        sp74 = temp_f22;
        temp_f10 = temp_f26 - temp_f16;
        sp78 = temp_f24;
        sp58 = temp_f10;
        sp6C = temp_f14 - temp_f24;
        sp5C = temp_f28 - temp_f22;
        sp68 = temp_f12 - temp_f22;
        temp_f6 = temp_f30 - temp_f24;
        sp60 = temp_f6;
        temp_f22_2 = 1.0f / sqrtf((temp_f18 * temp_f18) + (temp_f20 * temp_f20));
        temp_f26_2 = temp_f20 * temp_f22_2;
        temp_f28_2 = temp_f18 * temp_f22_2;
        temp_f14_2 = ((temp_f6 * temp_f26_2) + (temp_f10 * temp_f28_2)) - ((sp6C * temp_f26_2) + (temp_f4 * temp_f28_2));
        temp_f24_2 = sp5C - sp68;
        temp_f30_2 = D_800AA3A8;
        var_s1 = 0;
        var_s2 = (char *)(arg0) + 0x48;
        var_f20 = func_150484A0(temp_f24_2, temp_f14_2) - D_800AA3A4;
        temp_f22_3 = sqrtf((temp_f14_2 * temp_f14_2) + (temp_f24_2 * temp_f24_2)) * 0.5f;
        do {
            temp_s0 = var_s2;
            temp_f24_3 = sinf(var_f20);
            temp_f2_2 = temp_f22_3 * cosf(var_f20);
            var_s1 += 0x18;
            var_s2 = (char *)(var_s2) + 0x18;
            (*(f32 *)((char *)(temp_s0) + 0x0)) = (f32) ((temp_f2_2 * temp_f28_2) + sp70);
            (*(f32 *)((char *)(temp_s0) + 0x4)) = (f32) ((temp_f22_3 * temp_f24_3) + sp74);
            (*(f32 *)((char *)(temp_s0) + 0x8)) = (f32) ((temp_f2_2 * temp_f26_2) + sp78);
            var_f20 += temp_f30_2;
        } while (var_s1 != 0xF0);
    }
    return 1;
}

s32 func_151B3F28(void *arg0, void *arg1, s32 arg2) {
    s32 var_v1;
    void *temp_a2;

    var_v1 = 1;
    if (arg2 & 0xFF) {
        if (((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x150))) + 0x0)) != 0) && (temp_a2 = (*(s32 *)((char *)(arg0) + 0x150)), ((*(s32 *)((char *)(((char *)(arg0) + 0x150)) + 0x4)) == (*(s32 *)((char *)(temp_a2) + 0x3B))))) {
            (*(f32 *)((char *)(arg1) + 0x0)) = (f32) (*(f32 *)((char *)(temp_a2) + 0x14));
            (*(f32 *)((char *)(arg1) + 0x4)) = (f32) (*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x150))) + 0x18));
            (*(f32 *)((char *)(arg1) + 0x8)) = (f32) (*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x150))) + 0x1C));
            (*(u8 *)((char *)(arg0) + 0x10)) = (u8) ((*(u8 *)((char *)(arg0) + 0x10)) & 0xFFFB);
        } else {
            var_v1 = 0;
            (*(u8 *)((char *)(arg0) + 0x10)) = (u8) ((*(u8 *)((char *)(arg0) + 0x10)) | 0xC);
        }
    } else {
        (*(s32 *)((char *)(arg1) + 0x0)) = 0.0f;
        (*(s32 *)((char *)(arg1) + 0x8)) = 0.0f;
        (*(f32 *)((char *)(arg1) + 0x4)) = (f32) D_800AA3AC;
        (*(u8 *)((char *)(arg0) + 0x10)) = (u8) ((*(u8 *)((char *)(arg0) + 0x10)) & 0xFFF7);
    }
    return var_v1;
}

u8 func_151B3FDC(void *arg0) {
    f32 sp110;
    f32 sp108;
    f32 sp104;
    f32 sp100;
    f32 spFC;
    f32 spF8;
    f32 spF4;
    f32 spF0;
    f32 spEC;
    f32 spE8;
    f32 spD0;
    f32 spAC;
    f32 spA4;
    f32 sp98;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp5C;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f16_3;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f26_2;
    f32 temp_f28;
    f32 temp_f28_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f30;
    f32 temp_f30_2;
    f32 temp_f4;
    f32 temp_f6;
    f32 var_f14;
    f32 var_f20;
    s32 var_s1;
    void *var_s2;

    temp_f28 = (*(s32 *)((char *)(arg0) + 0x20));
    temp_f2 = (*(s32 *)((char *)(arg0) + 0x14));
    temp_f30 = (*(s32 *)((char *)(arg0) + 0x24));
    temp_f12 = (*(s32 *)((char *)(arg0) + 0x18));
    temp_f20 = temp_f28 - temp_f2;
    temp_f0 = fabsf(temp_f20);
    sp110 = temp_f30 - temp_f12;
    temp_f16 = (*(s32 *)((char *)(arg0) + 0x28));
    var_f14 = (*(s32 *)((char *)(arg0) + 0x1C));
    sp5C = temp_f16;
    temp_f26 = temp_f16 - var_f14;
    if ((D_800AA3B0 < temp_f0) || (D_800AA3B0 < fabsf(temp_f26))) {
        temp_f16_2 = temp_f2 + (temp_f20 * 0.5f);
        sp100 = temp_f16_2;
        temp_f18 = temp_f12 + (sp110 * 0.5f);
        spF4 = temp_f2 - temp_f16_2;
        temp_f22 = var_f14 + (temp_f26 * 0.5f);
        sp104 = temp_f18;
        sp108 = temp_f22;
        spE8 = temp_f28 - temp_f16_2;
        spEC = temp_f30 - temp_f18;
        spF8 = temp_f12 - temp_f18;
        spFC = var_f14 - temp_f22;
        temp_f10 = sp5C - temp_f22;
        temp_f0_2 = sqrtf((temp_f20 * temp_f20) + (temp_f26 * temp_f26));
        spF0 = temp_f10;
        temp_f2_2 = 1.0f / temp_f0_2;
        temp_f28_2 = temp_f26 * temp_f2_2;
        temp_f30_2 = temp_f20 * temp_f2_2;
        temp_f16_3 = ((temp_f10 * temp_f28_2) + (spE8 * temp_f30_2)) - ((spFC * temp_f28_2) + (spF4 * temp_f30_2));
        temp_f18_2 = spEC - spF8;
        spD0 = temp_f16_3;
        temp_f4 = (temp_f16_3 * temp_f16_3) + (temp_f18_2 * temp_f18_2);
        temp_f0_3 = sqrtf(temp_f4);
        sp64 = temp_f4;
        spA4 = temp_f4;
        temp_f2_3 = 1.0f / temp_f0_3;
        spAC = temp_f0_3 * 0.5f;
        temp_f10_2 = (*(s32 *)((char *)(arg0) + 0x138));
        sp68 = temp_f10_2;
        temp_f22_2 = spD0 * temp_f2_3;
        temp_f24 = temp_f18_2 * temp_f2_3;
        temp_f6 = temp_f4 * 0.25f;
        sp6C = temp_f6;
        if (temp_f10_2 < sp6C) {
            return func_151B3A7C((*(void **)&temp_f12));
        }
        var_f20 = 0.0f;
        var_s1 = 0;
        var_s2 = (char *)(arg0) + 0x48;
        sp98 = sqrtf(sp68 - temp_f6);
        do {
            temp_f26_2 = sinf(var_f20);
            var_s1 += 0x18;
            temp_f2_4 = spAC * cosf(var_f20);
            temp_f12_2 = sp98 * temp_f26_2;
            var_f14 = (temp_f2_4 * temp_f22_2) - (temp_f12_2 * temp_f24);
            (*(f32 *)((char *)(var_s2) + 0x0)) = (f32) ((var_f14 * temp_f30_2) + sp100);
            (*(f32 *)((char *)(var_s2) + 0x4)) = (f32) (((temp_f2_4 * temp_f24) - (temp_f12_2 * temp_f22_2)) + sp104);
            (*(f32 *)((char *)(var_s2) + 0x8)) = (f32) ((var_f14 * temp_f28_2) + sp108);
            var_s2 = (char *)(var_s2) + 0x18;
            var_f20 += D_800AA3B4;
        } while (var_s1 != 0xF0);
        goto block_6;
    }
block_6:
    return 1U;
}

u8 func_151B42A4(void *arg0) {
    u8 sp177;
    f32 sp16C;
    f32 sp164;
    f32 sp160;
    f32 sp15C;
    f32 sp158;
    f32 sp154;
    f32 sp150;
    f32 sp14C;
    f32 sp148;
    f32 sp144;
    f32 sp124;
    f32 sp120;
    f32 sp118;
    f32 sp114;
    f32 sp108;
    f32 spF4;
    f32 spF0;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 sp84;
    f32 sp80;
    f32 sp74;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f16_3;
    f32 temp_f16_4;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f18_3;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f22_3;
    f32 temp_f24;
    f32 temp_f24_2;
    f32 temp_f24_3;
    f32 temp_f26;
    f32 temp_f28;
    f32 temp_f28_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 temp_f2_6;
    f32 temp_f30;
    f32 temp_f30_2;
    f32 var_f14;
    f32 var_f30;
    s32 var_s2;
    void *var_s0;

    f32 spC8;
    f32 spCC;
    sp177 = 1;
    temp_f28 = (*(s32 *)((char *)(arg0) + 0x20));
    temp_f2 = (*(s32 *)((char *)(arg0) + 0x14));
    temp_f30 = (*(s32 *)((char *)(arg0) + 0x24));
    temp_f12 = (*(s32 *)((char *)(arg0) + 0x18));
    temp_f20 = temp_f28 - temp_f2;
    temp_f0 = fabsf(temp_f20);
    sp16C = temp_f30 - temp_f12;
    temp_f16 = (*(s32 *)((char *)(arg0) + 0x28));
    temp_f14 = (*(s32 *)((char *)(arg0) + 0x1C));
    sp74 = temp_f16;
    temp_f22 = temp_f16 - temp_f14;
    if ((D_800AA3B8 < temp_f0) || (D_800AA3B8 < fabsf(temp_f22))) {
        temp_f16_2 = temp_f2 + (temp_f20 * 0.5f);
        sp15C = temp_f16_2;
        temp_f18 = temp_f12 + (sp16C * 0.5f);
        sp150 = temp_f2 - temp_f16_2;
        temp_f24 = temp_f14 + (temp_f22 * 0.5f);
        sp160 = temp_f18;
        sp164 = temp_f24;
        sp144 = temp_f28 - temp_f16_2;
        sp148 = temp_f30 - temp_f18;
        sp154 = temp_f12 - temp_f18;
        sp158 = temp_f14 - temp_f24;
        temp_f10 = sp74 - temp_f24;
        temp_f0_2 = sqrtf((temp_f20 * temp_f20) + (temp_f22 * temp_f22));
        sp14C = temp_f10;
        temp_f2_2 = 1.0f / temp_f0_2;
        temp_f12_2 = temp_f22 * temp_f2_2;
        var_f14 = temp_f20 * temp_f2_2;
        sp124 = temp_f12_2;
        sp120 = var_f14;
        temp_f16_3 = ((temp_f10 * temp_f12_2) + (sp144 * var_f14)) - ((sp158 * temp_f12_2) + (sp150 * var_f14));
        temp_f18_2 = sp148 - sp154;
        temp_f24_2 = (temp_f16_3 * temp_f16_3) + (temp_f18_2 * temp_f18_2);
        temp_f0_3 = sqrtf(temp_f24_2);
        temp_f2_3 = 1.0f / temp_f0_3;
        sp108 = temp_f0_3 * 0.5f;
        sp118 = temp_f16_3 * temp_f2_3;
        temp_f30_2 = temp_f24_2 * 0.25f;
        sp114 = temp_f18_2 * temp_f2_3;
        sp80 = (*(s32 *)((char *)(arg0) + 0x138));
        sp84 = temp_f30_2;
        if (sp80 < temp_f30_2) {
            sp177 = func_151B3A7C((*(void **)&temp_f12_2));
        } else {
            temp_f0_4 = sqrtf(sp80 - sp84);
            var_f30 = 0.0f;
            spF0 = 0.0f;
            var_s2 = 0;
            var_s0 = (char *)(arg0) + 0x48;
            spF4 = temp_f0_4;
            do {
                (*(s32 *)((char *)&(spC4) + 0x0)) = (*(s32 *)((char *)(var_s0) + 0x0));
                (*(f32 *)((char *)&(spC4) + 0x4)) = (f32) (*(f32 *)((char *)(var_s0) + 0x4));
                (*(f32 *)((char *)&(spC4) + 0x8)) = (f32) (*(f32 *)((char *)(var_s0) + 0x8));
                temp_f20_2 = sinf(var_f30);
                temp_f22_2 = cosf(var_f30);
                temp_f0_5 = sinf(spF0);
                temp_f2_4 = sp108 * temp_f22_2;
                temp_f12_3 = spF4 * temp_f20_2;
                var_f14 = (temp_f2_4 * sp118) - (temp_f12_3 * sp114);
                spB8 = (var_f14 * sp120) + sp15C;
                spBC = ((temp_f2_4 * sp114) - (temp_f12_3 * sp118)) + sp160;
                spC0 = (var_f14 * sp124) + sp164;
                if ((*(s32 *)((char *)(arg0) + 0x10)) & 2) {
                    (*(f32 *)((char *)(var_s0) + 0x0)) = (f32) (*(f32 *)((char *)&(spB8) + 0x0));
                    (*(f32 *)((char *)(var_s0) + 0x4)) = (f32) (*(f32 *)((char *)&(spB8) + 0x4));
                    (*(s32 *)((char *)(var_s0) + 0xC)) = 0.0f;
                    (*(s32 *)((char *)(var_s0) + 0x10)) = 0.0f;
                    (*(s32 *)((char *)(var_s0) + 0x14)) = 0.0f;
                    (*(f32 *)((char *)(var_s0) + 0x8)) = (f32) (*(f32 *)((char *)&(spB8) + 0x8));
                } else if (D_800DBFF4 != 0) {
                    (*(f32 *)((char *)(var_s0) + 0x0)) = (f32) (*(f32 *)((char *)&(spB8) + 0x0));
                    (*(f32 *)((char *)(var_s0) + 0x4)) = (f32) (*(f32 *)((char *)&(spB8) + 0x4));
                    (*(f32 *)((char *)(var_s0) + 0x8)) = (f32) (*(f32 *)((char *)&(spB8) + 0x8));
                    (*(f32 *)((char *)(var_s0) + 0xC)) = (f32) (*(f32 *)((char *)&(D_800A5480) + 0x0));
                    (*(f32 *)((char *)(var_s0) + 0x10)) = (f32) (*(f32 *)((char *)&(D_800A5480) + 0x4));
                    (*(f32 *)((char *)(var_s0) + 0x14)) = (f32) (*(f32 *)((char *)&(D_800A5480) + 0x8));
                } else {
                    temp_f2_5 = (*(s32 *)((char *)(arg0) + 0x40));
                    var_f14 = (*(s32 *)((char *)(var_s0) + 0xC));
                    temp_f26 = (*(s32 *)((char *)(var_s0) + 0x10));
                    temp_f28_2 = (*(s32 *)((char *)(var_s0) + 0x14));
                    temp_f16_4 = (spC4 - spB8) * temp_f0_5 * temp_f2_5;
                    temp_f18_3 = (spC8 - spBC) * temp_f0_5 * temp_f2_5;
                    (*(f32 *)((char *)(var_s0) + 0x0)) = (f32) (spB8 + temp_f16_4);
                    temp_f20_3 = (spCC - spC0) * temp_f0_5 * temp_f2_5;
                    (*(f32 *)((char *)(var_s0) + 0x4)) = (f32) (spBC + temp_f18_3);
                    (*(f32 *)((char *)(var_s0) + 0x8)) = (f32) (spC0 + temp_f20_3);
                    temp_f2_6 = (*(s32 *)((char *)(arg0) + 0x3C));
                    temp_f12_4 = temp_f2_6 * temp_f16_4;
                    temp_f22_3 = temp_f2_6 * temp_f18_3;
                    temp_f24_3 = temp_f2_6 * temp_f20_3;
                    (*(f32 *)((char *)(var_s0) + 0x0)) = (f32) ((*(f32 *)((char *)(var_s0) + 0x0)) + ((var_f14 * D_800BE9A4) + (0.5f * temp_f12_4 * D_800BE9A4 * D_800BE9A4)));
                    (*(f32 *)((char *)(var_s0) + 0x4)) = (f32) ((*(f32 *)((char *)(var_s0) + 0x4)) + ((temp_f26 * D_800BE9A4) + (0.5f * temp_f22_3 * D_800BE9A4 * D_800BE9A4)));
                    (*(f32 *)((char *)(var_s0) + 0x8)) = (f32) ((*(f32 *)((char *)(var_s0) + 0x8)) + ((temp_f28_2 * D_800BE9A4) + (0.5f * temp_f24_3 * D_800BE9A4 * D_800BE9A4)));
                    (*(f32 *)((char *)(var_s0) + 0xC)) = (f32) (var_f14 + (temp_f12_4 * D_800BE9A4));
                    (*(f32 *)((char *)(var_s0) + 0x10)) = (f32) (temp_f26 + (temp_f22_3 * D_800BE9A4));
                    (*(f32 *)((char *)(var_s0) + 0x14)) = (f32) (temp_f28_2 + (temp_f24_3 * D_800BE9A4));
                }
                var_s2 += 0x18;
                var_s0 = (char *)(var_s0) + 0x18;
                var_f30 += D_800AA3C0;
                spF0 += D_800AA3C0;
            } while (var_s2 != 0xF0);
        }
    }
    (*(u8 *)((char *)(arg0) + 0x10)) = (u8) ((*(u8 *)((char *)(arg0) + 0x10)) & 0xFFFD);
    return sp177;
}

s32 func_151B47D8(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    void * var_a2;
    s32 temp_t6;
    s32 var_a2_2;
    void *temp_v0;
    void *temp_v1;
    void *var_a0;

    temp_t6 = arg3 & 0xFF;
    temp_v0 = (*(s32 *)((char *)(arg1) + 0x0));
    temp_v1 = (*(s32 *)((char *)(arg1) + 0x14));
    if (((*(s32 *)((char *)(temp_v0) + 0x1D4)) == 0) || ((*(s32 *)((char *)(temp_v1) + 0x1D4)) == 0)) {
        (*(u8 *)((char *)(arg0) + 0x10)) = (u8) ((*(u8 *)((char *)(arg0) + 0x10)) | 0xC);
        return 1;
    }
    if (((*(s32 *)((char *)(temp_v0) + 0x0)) == 0) || ((*(s32 *)((char *)(arg1) + 0x4)) != (*(s32 *)((char *)(temp_v0) + 0x3B))) || ((*(s32 *)((char *)(temp_v1) + 0x0)) == 0) || ((*(s32 *)((char *)(arg1) + 0x18)) != (*(s32 *)((char *)(temp_v1) + 0x3B)))) {
        return 0;
    }
    var_a2 = 8;
    if (temp_t6 != 0) {
        var_a2 = 4;
    }
    (*(u8 *)((char *)(arg0) + 0x10)) = (u8) ((*(u8 *)((char *)(arg0) + 0x10)) & ~(s32)(var_a2));
    if (temp_t6 != 0) {
        var_a0 = (char *)(arg1) + 8;
    } else {
        var_a0 = (char *)(arg1) + 0x1C;
    }
    if (temp_t6 != 0) {
        var_a2_2 = (*(s32 *)((char *)(temp_v0) + 0x1D4)) + ((*(s32 *)((char *)(arg1) + 0x5)) << 6);
    } else {
        var_a2_2 = (*(s32 *)((char *)(temp_v1) + 0x1D4)) + ((*(s32 *)((char *)(arg1) + 0x19)) << 6);
    }
    func_15143134(var_a0, arg2, var_a2_2, temp_t6);
    return 1;
}

s32 func_151B48DC(void *arg0) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f14_3;
    f32 temp_f14_4;
    f32 var_f14;
    s32 var_v0;
    void *var_v1;

    temp_f0 = (*(s32 *)((char *)(arg0) + 0x14));
    (*(s32 *)((char *)(arg0) + 0x48)) = temp_f0;
    (*(s32 *)((char *)(arg0) + 0x4C)) = 0.0f;
    (*(s32 *)((char *)(arg0) + 0x50)) = 0.0f;
    var_v0 = 2;
    temp_f12 = -(temp_f0 - (*(s32 *)((char *)(arg0) + 0x20))) * D_800AA3C4;
    var_v1 = (char *)(arg0) + 0x30;
    (*(s32 *)((char *)(arg0) + 0x68)) = 0.0f;
    (*(s32 *)((char *)(arg0) + 0x64)) = 0.0f;
    temp_f14 = temp_f0 + temp_f12;
    (*(s32 *)((char *)(arg0) + 0x60)) = temp_f14;
    var_f14 = temp_f14 + temp_f12;
    do {
        (*(s32 *)((char *)(var_v1) + 0x48)) = var_f14;
        (*(s32 *)((char *)(var_v1) + 0x4C)) = 0.0f;
        (*(s32 *)((char *)(var_v1) + 0x50)) = 0.0f;
        temp_f14_2 = var_f14 + temp_f12;
        var_v0 += 4;
        (*(s32 *)((char *)(var_v1) + 0x64)) = 0.0f;
        (*(s32 *)((char *)(var_v1) + 0x68)) = 0.0f;
        (*(s32 *)((char *)(var_v1) + 0x60)) = temp_f14_2;
        temp_f14_3 = temp_f14_2 + temp_f12;
        (*(s32 *)((char *)(var_v1) + 0x7C)) = 0.0f;
        (*(s32 *)((char *)(var_v1) + 0x80)) = 0.0f;
        (*(s32 *)((char *)(var_v1) + 0x94)) = 0.0f;
        (*(s32 *)((char *)(var_v1) + 0x78)) = temp_f14_3;
        temp_f14_4 = temp_f14_3 + temp_f12;
        (*(s32 *)((char *)(var_v1) + 0x98)) = 0.0f;
        var_v1 = (char *)(var_v1) + 0x60;
        (*(s32 *)((char *)(var_v1) + 0x30)) = temp_f14_4;
        var_f14 = temp_f14_4 + temp_f12;
    } while (var_v0 != 0xA);
    (*(u8 *)((char *)(arg0) + 0x10)) = (u8) ((*(u8 *)((char *)(arg0) + 0x10)) & 0xFFFD);
    return 1;
}

s32 func_151B498C(void *arg0, s32 *arg1, s32 *arg2, s32 *arg3, s32 *arg4, s32 *arg5, s32 *arg6, s32 *arg7, s32 *arg8, s32 *arg9, s32 *arg10, s32 *arg11, s8 *arg12, s8 *arg13) {
    *arg1 = 0x220005;
    *arg2 = 0x40600;
    *arg3 = 0xFF;
    *arg4 = 0xFF;
    *arg5 = 0xFF;
    *arg6 = 0xFF;
    *arg7 = 0xFF;
    *arg8 = 0xFF;
    *arg9 = 0xFF;
    *arg10 = 0xFF;
    *arg11 = 0;
    *arg12 = 5;
    *arg13 = 0x2B;
    return 1;
}

u8 func_151B4A14(void *arg0, s32 *arg1, s32 *arg2, s32 *arg3, s32 *arg4, s32 *arg5, s32 *arg6, s32 *arg7, s32 *arg8, s32 *arg9, s32 *arg10, s32 *arg11, s8 *arg12, s8 *arg13) {
    u8 sp67;
    void *sp58;
    s32 sp54;
    s32 sp50;
    s32 sp4C;
    s32 sp48;
    u8 var_v1;
    void *temp_a0;

    temp_a0 = (*(s32 *)((char *)(arg0) + 0x150));
    sp67 = 1;
    sp58 = temp_a0;
    func_1502EC34(temp_a0, &sp54, &sp50, &sp4C, &sp48);
    var_v1 = sp67;
    if ((*(s32 *)((char *)(sp58) + 0xA4)) & 1) {
        *arg1 = 0x200005;
        *arg2 = 0x60600;
        *arg3 = sp54;
        *arg4 = sp50;
        *arg5 = sp4C;
        *arg6 = 0xFF;
        *arg9 = sp48;
        *arg8 = sp48;
        *arg7 = sp48;
        *arg10 = 0xFF;
        *arg11 = 0x100000;
        *arg12 = 5;
        *arg13 = 0x2F;
    } else {
        var_v1 = func_151B498C(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13) & 0xFF;
    }
    return var_v1;
}

s32 func_151B4B78(void *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 var_f0;
    s32 var_v0;
    void *var_v1;

    (*(s32 *)((char *)(arg0) + 0x48)) = -1000.0f;
    temp_f0 = -1000.0f + D_800AA3C8;
    var_v0 = 2;
    var_v1 = (char *)(arg0) + 0x30;
    (*(s32 *)((char *)(arg0) + 0x60)) = temp_f0;
    var_f0 = temp_f0 + D_800AA3C8;
    (*(s32 *)((char *)(arg0) + 0x4C)) = 0.0f;
    (*(s32 *)((char *)(arg0) + 0x50)) = 0.0f;
    (*(s32 *)((char *)(arg0) + 0x64)) = 0.0f;
    (*(s32 *)((char *)(arg0) + 0x68)) = 0.0f;
    do {
        (*(s32 *)((char *)(var_v1) + 0x48)) = var_f0;
        (*(s32 *)((char *)(var_v1) + 0x4C)) = 0.0f;
        (*(s32 *)((char *)(var_v1) + 0x50)) = 0.0f;
        temp_f0_2 = var_f0 + D_800AA3C8;
        var_v0 += 4;
        (*(s32 *)((char *)(var_v1) + 0x64)) = 0.0f;
        (*(s32 *)((char *)(var_v1) + 0x68)) = 0.0f;
        (*(s32 *)((char *)(var_v1) + 0x60)) = temp_f0_2;
        temp_f0_3 = temp_f0_2 + D_800AA3C8;
        (*(s32 *)((char *)(var_v1) + 0x7C)) = 0.0f;
        (*(s32 *)((char *)(var_v1) + 0x80)) = 0.0f;
        (*(s32 *)((char *)(var_v1) + 0x94)) = 0.0f;
        (*(s32 *)((char *)(var_v1) + 0x78)) = temp_f0_3;
        temp_f0_4 = temp_f0_3 + D_800AA3C8;
        (*(s32 *)((char *)(var_v1) + 0x98)) = 0.0f;
        var_v1 = (char *)(var_v1) + 0x60;
        (*(s32 *)((char *)(var_v1) + 0x30)) = temp_f0_4;
        var_f0 = temp_f0_4 + D_800AA3C8;
    } while (var_v0 != 0xA);
    (*(u8 *)((char *)(arg0) + 0x10)) = (u8) ((*(u8 *)((char *)(arg0) + 0x10)) & 0xFFFD);
    return 1;
}

void func_151B4C1C(void *arg0) {
    void * (*temp_v0)(void *, void *);

    func_151D5E30((char *)(arg0) + 0x140, arg0);
    temp_v0 = *(&D_8008FB70 + ((*(s32 *)((char *)(arg0) + 0x44)) * 4));
    if (temp_v0 != NULL) {
        temp_v0(arg0, arg0);
    }
}

void func_151B4C6C(void *arg0) {
    func_151B4C1C(arg0);
    func_15169824(arg0);
}

void func_151B4C98(void *arg0) {
    func_151B4C1C(arg0);
    func_15169824(arg0);
}
