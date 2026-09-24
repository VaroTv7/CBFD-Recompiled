/**
 * Auto-decompiled from asm/1E37D0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_150A7960();     /* extern */
u32 random_u32();                          /* extern */
f32 random_float();                                /* extern */
s32 func_15130280(); /* extern */
s32 func_1513F4E4();                    /* extern */
s32 func_15142B7C();                       /* extern */
s32 func_15142C10();         /* extern */
s32 func_15142E24(); /* extern */
void *func_15142FBC();           /* extern */
f32 func_15143E64();           /* extern */
void *func_15144B34();                           /* extern */
void * func_151478F4();                            /* extern */
void * func_15147928();                            /* extern */
void *func_15147A80(); /* extern */
void * func_151D5D60();    /* extern */
void * memcpy();             /* extern */
extern s32 D_8008FB90;
extern s32 D_8008FB98;
extern s32 D_80090CD4;
extern s32 D_80091100;
extern s32 D_800A4AC8;
extern s32 D_800AA460;
extern f32 D_800AA470;
extern f32 D_800AA474;
extern f32 D_800AA478;
extern f32 D_800AA47C;
extern f32 D_800AA480;
extern f32 D_800AA484;
extern s32 D_800D2C9C;

void func_151B6320(void *arg0, s32 arg1, s32 arg2) {
    s8 sp89;
    s32 sp84;
    s16 sp82;
    s16 sp80;
    f32 sp7C;
    f32 sp78;
    s32 sp74;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    void * sp4C;
    u8 sp48;
    void *sp44;
    void *temp_v0;

    sp89 = 0xA;
    sp74 = (*(s32 *)((char *)(arg0) + 0x14));
    sp78 = (*(s32 *)((char *)(arg0) + 0x18));
    sp80 = 0x12C;
    sp82 = 6;
    sp44 = arg0;
    sp7C = (*(s32 *)((char *)(arg0) + 0x1C));
    sp48 = (*(s32 *)((char *)(arg0) + 0x3B));
    (*(s32 *)((char *)&(sp4C) + 0x0)) = (s32) (*(s32 *)((char *)&(sp74) + 0x0));
    (*(s32 *)((char *)&(sp4C) + 0x4)) = (s32) (*(s32 *)((char *)&(sp74) + 0x4));
    (*(s32 *)((char *)&(sp4C) + 0x8)) = (s32) (*(s32 *)((char *)&(sp74) + 0x8));
    sp58 = 0.0f;
    sp5C = 0.0f;
    sp64 = -16384.0f;
    sp60 = -16384.0f;
    sp68 = 0.0f;
    sp84 = 0xD;
    temp_v0 = func_15147A80(&sp74, 0x30, 0x1C, 0xB, 0xB, 0xB, 0, 0, 0, (s32) arg1, arg2);
    if (temp_v0 != NULL) {
        memcpy((*(s32 *)((char *)(temp_v0) + 0x98)), &sp44, 0x2C);
    }
}

s32 func_151B6420(void *arg0) {
    s32 temp_f4;
    s32 temp_v0;
    s8 var_a1;
    s8 var_a1_2;
    void *temp_t3;
    void *temp_v1;
    void *temp_v1_2;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x94));
    if (((*(s32 *)((char *)(arg0) + 0x2C)) < 2) && ((*(s32 *)((char *)(arg0) + 0x1E)) & 8)) {
        return 0;
    }
    var_a1 = (*(s32 *)((char *)(arg0) + 0x2E));
    if (var_a1 != (*(s32 *)((char *)(arg0) + 0x2D))) {
        do {
            var_a1 -= 1;
            if (var_a1 < 0) {
                var_a1 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
            }
            temp_v1 = (var_a1 * 0x1C) + temp_v0;
            (*(f32 *)((char *)(temp_v1) + 0xC)) = (f32) ((*(f32 *)((char *)(temp_v1) + 0xC)) - D_800BE9A4);
            if (((*(s32 *)((char *)(temp_v1) + 0xC)) < 0.0f) && (var_a1 != (*(s32 *)((char *)(arg0) + 0x2D)))) {
                do {
                    (*(s8 *)((char *)(arg0) + 0x2D)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2D)) + 1);
                    if ((*(s32 *)((char *)(arg0) + 0x25)) == (*(s32 *)((char *)(arg0) + 0x2D))) {
                        (*(s32 *)((char *)(arg0) + 0x2D)) = 0;
                    }
                    (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2C)) - 1);
                } while (var_a1 != (*(s32 *)((char *)(arg0) + 0x2D)));
            }
        } while (var_a1 != (*(s32 *)((char *)(arg0) + 0x2D)));
    }
    if ((*(s32 *)((char *)(arg0) + 0x2C)) > 0) {
        var_a1_2 = (*(s32 *)((char *)(arg0) + 0x2D));
        do {
            temp_v1_2 = (var_a1_2 * 0x1C) + temp_v0;
            temp_f4 = (s32) (((*(s32 *)((char *)(temp_v1_2) + 0x18)) - (*(s32 *)((char *)((temp_v0 + ((*(s32 *)((char *)(arg0) + 0x2D)) * 0x1C))) + 0x18))) * D_800AA470);
            if (temp_f4 >= 0x9C) {
                (*(s32 *)((char *)(temp_v1_2) + 0x10)) = 0x9B;
            } else {
                (*(s8 *)((char *)(temp_v1_2) + 0x10)) = (s8) temp_f4;
            }
            var_a1_2 += 1;
            if (var_a1_2 >= (s32) (*(s32 *)((char *)(arg0) + 0x25))) {
                var_a1_2 = 0;
            }
        } while (var_a1_2 != (*(s32 *)((char *)(arg0) + 0x2E)));
    }
    if ((*(s32 *)((char *)(arg0) + 0x2C)) > 0) {
        temp_t3 = temp_v0 + ((*(s32 *)((char *)(arg0) + 0x2D)) * 0x1C);
        (*(s32 *)((char *)(arg0) + 0x54)) = (s32) (*(s32 *)((char *)(temp_t3) + 0x0));
        (*(s32 *)((char *)(arg0) + 0x58)) = (s32) (*(s32 *)((char *)(temp_t3) + 0x4));
        (*(s32 *)((char *)(arg0) + 0x5C)) = (s32) (*(s32 *)((char *)(temp_t3) + 0x8));
    } else {
        (*(s32 *)((char *)(arg0) + 0x54)) = 0;
        (*(s32 *)((char *)(arg0) + 0x58)) = 0;
        (*(s32 *)((char *)(arg0) + 0x5C)) = 0;
    }
    return 1;
}

s32 func_151B65D4(void *arg0) {
    void *spB4;
    s32 spB0;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp58;
    f32 sp50;
    f32 sp48;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f24;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f6;
    f32 var_f16;
    f32 var_f18;
    f32 var_f20;
    s8 temp_v0_3;
    void *temp_a2;
    void *temp_t2;
    void *temp_v0;
    void *temp_v0_2;

    temp_a2 = (*(s32 *)((char *)(arg0) + 0x98));
    temp_v0 = (*(s32 *)((char *)(temp_a2) + 0x0));
    if (((*(s32 *)((char *)(temp_v0) + 0x0)) == 0) || ((*(s32 *)((char *)(temp_a2) + 0x4)) != (*(s32 *)((char *)(temp_v0) + 0x3B))) || ((*(s32 *)((char *)(temp_v0) + 0x3C)) < 15.0f)) {
        (*(s32 *)((char *)(arg0) + 0x30)) = 0;
        (*(u16 *)((char *)(arg0) + 0x1E)) = (u16) ((*(u16 *)((char *)(arg0) + 0x1E)) | 8);
        return 1;
    }
    (*(f32 *)((char *)(arg0) + 0x10)) = (f32) (*(f32 *)((char *)(temp_v0) + 0x14));
    (*(f32 *)((char *)(arg0) + 0x14)) = (f32) (*(f32 *)((char *)(temp_v0) + 0x18));
    (*(f32 *)((char *)(arg0) + 0x18)) = (f32) (*(f32 *)((char *)(temp_v0) + 0x1C));
    spA0 = (*(s32 *)((char *)(arg0) + 0x10)) - (*(s32 *)((char *)(temp_a2) + 0x8));
    spA4 = (*(s32 *)((char *)(arg0) + 0x14)) - (*(s32 *)((char *)(temp_a2) + 0xC));
    spB0 = (*(s32 *)((char *)(arg0) + 0x94));
    spB4 = temp_a2;
    spA8 = (*(s32 *)((char *)(arg0) + 0x18)) - (*(s32 *)((char *)(temp_a2) + 0x10));
    temp_f0 = func_15143E64(&spA0, arg0, temp_a2);
    (*(f32 *)((char *)(spB4) + 0x14)) = (f32) ((*(f32 *)((char *)(spB4) + 0x14)) + (temp_f0 * D_800AA474 * D_800BE9A4));
    temp_f2 = (*(s32 *)((char *)(spB4) + 0x14));
    (*(f32 *)((char *)(spB4) + 0x1C)) = (f32) ((*(f32 *)((char *)(spB4) + 0x1C)) + (temp_f0 * D_800AA478));
    sp58 = temp_f2;
    if (temp_f2 > 1.0f) {
        temp_t2 = (char *)(spB4) + 8;
        temp_f2_2 = 1.0f / sp58;
        (*(s32 *)((char *)&(sp84) + 0x0)) = (*(s32 *)((char *)(spB4) + 0x8));
        (*(s32 *)((char *)&(sp84) + 0x4)) = (s32) (*(s32 *)((char *)(temp_t2) + 0x4));
        var_f18 = (*(s32 *)((char *)(spB4) + 0x18)) + D_800BE9A4;
        (*(s32 *)((char *)&(sp84) + 0x8)) = (s32) (*(s32 *)((char *)(temp_t2) + 0x8));
        temp_f12 = (*(s32 *)((char *)(spB4) + 0x20));
        var_f20 = (*(s32 *)((char *)(spB4) + 0x24));
        var_f16 = temp_f12;
        temp_f24 = -(var_f18 * temp_f2_2);
        sp50 = ((*(s32 *)((char *)(spB4) + 0x1C)) - temp_f12) * temp_f2_2;
        sp48 = temp_f0 * temp_f2_2;
        do {
            temp_v0_2 = ((*(s32 *)((char *)(arg0) + 0x2E)) * 0x1C) + spB0;
            (*(f32 *)((char *)(temp_v0_2) + 0x0)) = (f32) (*(f32 *)((char *)&(sp84) + 0x0));
            (*(s32 *)((char *)(temp_v0_2) + 0x4)) = (s32) (*(s32 *)((char *)&(sp84) + 0x4));
            (*(s32 *)((char *)(temp_v0_2) + 0x10)) = 0x9B;
            (*(s32 *)((char *)(temp_v0_2) + 0x14)) = var_f16;
            (*(s32 *)((char *)(temp_v0_2) + 0x8)) = (s32) (*(s32 *)((char *)&(sp84) + 0x8));
            temp_f6 = 13.0f - var_f18;
            var_f18 += temp_f24;
            (*(s32 *)((char *)(temp_v0_2) + 0xC)) = temp_f6;
            if (var_f16 > 16384.0f) {
                do {
                    (*(f32 *)((char *)(temp_v0_2) + 0x14)) = (f32) ((*(f32 *)((char *)(temp_v0_2) + 0x14)) - 32768.0f);
                } while ((*(s32 *)((char *)(temp_v0_2) + 0x14)) > 16384.0f);
            }
            (*(s32 *)((char *)(temp_v0_2) + 0x18)) = var_f20;
            (*(s8 *)((char *)(arg0) + 0x2E)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2E)) + 1);
            if ((*(s32 *)((char *)(arg0) + 0x25)) == (*(s32 *)((char *)(arg0) + 0x2E))) {
                (*(s32 *)((char *)(arg0) + 0x2E)) = 0;
            }
            temp_v0_3 = (*(s32 *)((char *)(arg0) + 0x2D));
            (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2C)) + 1);
            if (temp_v0_3 == (*(s32 *)((char *)(arg0) + 0x2E))) {
                (*(s8 *)((char *)(arg0) + 0x2D)) = (s8) (temp_v0_3 + 1);
                if ((*(s32 *)((char *)(arg0) + 0x25)) == (*(s32 *)((char *)(arg0) + 0x2D))) {
                    (*(s32 *)((char *)(arg0) + 0x2D)) = 0;
                }
                (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2C)) - 1);
            }
            sp84 += spA0 * temp_f2_2;
            sp88 += spA4 * temp_f2_2;
            var_f16 += sp50;
            sp8C += spA8 * temp_f2_2;
            var_f20 += sp48;
            (*(f32 *)((char *)(spB4) + 0x14)) = (f32) ((*(f32 *)((char *)(spB4) + 0x14)) - 1.0f);
        } while ((*(s32 *)((char *)(spB4) + 0x14)) > 1.0f);
        (*(f32 *)((char *)(spB4) + 0x8)) = (f32) (*(f32 *)((char *)&(sp84) + 0x0));
        (*(s32 *)((char *)(temp_t2) + 0x4)) = (s32) (*(s32 *)((char *)&(sp84) + 0x4));
        (*(s32 *)((char *)(temp_t2) + 0x8)) = (s32) (*(s32 *)((char *)&(sp84) + 0x8));
        (*(s32 *)((char *)(spB4) + 0x20)) = var_f16;
        (*(s32 *)((char *)(spB4) + 0x24)) = var_f20;
        (*(s32 *)((char *)(spB4) + 0x18)) = var_f18;
    }
    return 1;
}

void *func_151B6928(void *arg0, void *arg1, s32 arg2) {
    void *spFC;
    void *spF4;
    s8 spF3;
    f32 spE4;
    f32 spD8;
    f32 spA8;
    f32 spA0;
    f32 sp9C;
    f32 sp80;
    f32 sp78;
    f32 temp_f12;
    f32 temp_f12_2;
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
    f32 temp_f26;
    f32 temp_f26_2;
    f32 temp_f28;
    f32 temp_f28_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f30;
    f32 temp_f30_2;
    f32 temp_f8;
    f32 temp_f8_3;
    f32 var_f28;
    f32 var_f28_2;
    f32 var_f2;
    f32 var_f2_2;
    f32 var_f30;
    f32 var_f30_2;
    s32 temp_a2;
    s32 temp_f4;
    s32 temp_f8_2;
    s32 temp_s3;
    s32 var_a1;
    s32 var_a2;
    u8 var_a3;
    u8 var_v1;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_t7;
    void *temp_t9;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *var_s0;

    f32 spDC;
    f32 spE0;
    f32 spE8;
    f32 spEC;
    var_s0 = arg1;
    if ((*(s32 *)((char *)(arg0) + 0x2C)) >= 2) {
        func_151D5D60((char *)(arg0) + 0x84, arg2, ((*(s32 *)((char *)(arg0) + 0x25)) << 5) + 0xA0, &spFC, 0);
        if (spFC != NULL) {
            temp_s3 = (*(s32 *)((char *)(arg0) + 0x94));
            temp_v0 = func_15144B34(arg2);
            spF3 = 1;
            spF4 = temp_v0;
            var_s0 = func_15142FBC(func_15142B7C(func_1513F4E4(func_15142C10(func_15142E24(var_s0, &D_80090CD4, 0, 0, 0, 0, 0x1F, 0, 0, &spF3, 3), 0xFF, 0xFF, 0xFF, 0xFF, &spF3), 0x4E, &spF3), 0x200005, 0x1F0600), D_800D2C9C | 0x80000 | 0x2CA0, (*(s32 *)((char *)&(D_800A4AC8) + 0x1C)) | (*(s32 *)((char *)&(D_800A4AC8) + 0x18)), &spF3);
            if ((*(s32 *)((char *)(arg0) + 0x1E)) & 2) {
                var_a1 = (*(s32 *)((char *)(arg0) + 0x2E)) - 1;
                if (var_a1 < 0) {
                    var_a1 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                }
                (*(s32 *)((char *)&(spD8) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x10));
                var_v1 = 0x80;
                (*(s32 *)((char *)&(spD8) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x14));
                (*(s32 *)((char *)&(spD8) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x18));
                sp9C = 0.0f;
            } else {
                var_a2 = (*(s32 *)((char *)(arg0) + 0x2E)) - 1;
                if (var_a2 < 0) {
                    var_a2 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                }
                var_a1 = var_a2 - 1;
                if (var_a1 < 0) {
                    var_a1 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                }
                temp_v0_2 = temp_s3 + (var_a2 * 0x1C);
                (*(s32 *)((char *)&(spD8) + 0x0)) = (*(s32 *)((char *)(temp_v0_2) + 0x0));
                (*(s32 *)((char *)&(spD8) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v0_2) + 0x4));
                (*(s32 *)((char *)&(spD8) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v0_2) + 0x8));
                var_v1 = (*(s32 *)((char *)(temp_v0_2) + 0x10));
                sp9C = (*(s32 *)((char *)(temp_v0_2) + 0x14));
            }
            temp_v0_3 = temp_s3 + (var_a1 * 0x1C);
            (*(s32 *)((char *)&(spE4) + 0x0)) = (*(s32 *)((char *)(temp_v0_3) + 0x0));
            (*(s32 *)((char *)&(spE4) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v0_3) + 0x4));
            (*(s32 *)((char *)&(spE4) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v0_3) + 0x8));
            var_a3 = (*(s32 *)((char *)(temp_v0_3) + 0x10));
            spA0 = (*(s32 *)((char *)(temp_v0_3) + 0x14));
            temp_f22 = spD8 - (*(s32 *)((char *)(spF4) + 0x0));
            temp_f24 = spDC - (*(s32 *)((char *)(spF4) + 0x4));
            temp_f26 = spE0 - (*(s32 *)((char *)(spF4) + 0x8));
            temp_f18 = spDC - spE8;
            temp_f20 = spE0 - spEC;
            temp_f16 = spD8 - spE4;
            temp_f2 = (temp_f18 * temp_f26) - (temp_f24 * temp_f20);
            temp_f28 = (temp_f20 * temp_f22) - (temp_f26 * temp_f16);
            temp_f30 = (temp_f16 * temp_f24) - (temp_f22 * temp_f18);
            temp_f8 = (temp_f2 * temp_f2) + (temp_f28 * temp_f28) + (temp_f30 * temp_f30);
            spA8 = temp_f8;
            sp78 = temp_f8;
            if (temp_f8 == 0.0f) {
                var_f30 = 0.0f;
                var_f2 = 0.0f;
                var_f28 = 0.0f;
            } else {
                temp_f12 = 10.0f / sqrtf(spA8);
                var_f2 = temp_f2 * temp_f12;
                var_f28 = temp_f28 * temp_f12;
                var_f30 = temp_f30 * temp_f12;
            }
            (*(s16 *)((char *)(spFC) + 0x0)) = (s16) (s32) (spD8 + var_f2);
            (*(s16 *)((char *)(spFC) + 0x2)) = (s16) (s32) (spDC + var_f28);
            (*(s16 *)((char *)(spFC) + 0x4)) = (s16) (s32) (spE0 + var_f30);
            temp_f8_2 = (s32) sp9C;
            (*(s16 *)((char *)(spFC) + 0x8)) = (s16) temp_f8_2;
            (*(s32 *)((char *)(spFC) + 0xA)) = 0;
            (*(s32 *)((char *)(spFC) + 0xC)) = 0xFF;
            (*(s32 *)((char *)(spFC) + 0xD)) = 0xFF;
            (*(s32 *)((char *)(spFC) + 0xE)) = 0xFF;
            (*(s32 *)((char *)(spFC) + 0xF)) = var_v1;
            (*(s32 *)((char *)(spFC) + 0x6)) = 0;
            temp_t7 = (char *)(spFC) + 0x10;
            spFC = temp_t7;
            (*(s16 *)((char *)(spFC) + 0x10)) = (s16) (s32) (spD8 - var_f2);
            (*(s16 *)((char *)(spFC) + 0x2)) = (s16) (s32) (spDC - var_f28);
            (*(s16 *)((char *)(spFC) + 0x4)) = (s16) (s32) (spE0 - var_f30);
            (*(s16 *)((char *)(spFC) + 0x8)) = (s16) temp_f8_2;
            (*(s32 *)((char *)(temp_t7) + 0xA)) = 0x7FF;
            (*(s32 *)((char *)(spFC) + 0xC)) = 0xFF;
            (*(s32 *)((char *)(spFC) + 0xD)) = 0xFF;
            (*(s32 *)((char *)(spFC) + 0xE)) = 0xFF;
            (*(s32 *)((char *)(temp_t7) + 0xF)) = var_v1;
            (*(s32 *)((char *)(spFC) + 0x6)) = 0;
            spFC = (char *)(spFC) + 0x10;
            do {
                temp_f22_2 = spE4 - (*(s32 *)((char *)(spF4) + 0x0));
                temp_a2 = var_a1;
                temp_f24_2 = spE8 - (*(s32 *)((char *)(spF4) + 0x4));
                var_a1 -= 1;
                temp_f26_2 = spEC - (*(s32 *)((char *)(spF4) + 0x8));
                temp_f18_2 = spDC - spE8;
                temp_f20_2 = spE0 - spEC;
                temp_f16_2 = spD8 - spE4;
                temp_f2_2 = (temp_f18_2 * temp_f26_2) - (temp_f24_2 * temp_f20_2);
                temp_f28_2 = (temp_f20_2 * temp_f22_2) - (temp_f26_2 * temp_f16_2);
                temp_f30_2 = (temp_f16_2 * temp_f24_2) - (temp_f22_2 * temp_f18_2);
                temp_f8_3 = (temp_f2_2 * temp_f2_2) + (temp_f28_2 * temp_f28_2) + (temp_f30_2 * temp_f30_2);
                temp_f4 = (s32) spA0;
                spA8 = temp_f8_3;
                sp80 = temp_f8_3;
                if (temp_f8_3 == 0.0f) {
                    var_f30_2 = 0.0f;
                    var_f2_2 = 0.0f;
                    var_f28_2 = 0.0f;
                } else {
                    temp_f12_2 = 10.0f / sqrtf(spA8);
                    var_f2_2 = temp_f2_2 * temp_f12_2;
                    var_f28_2 = temp_f28_2 * temp_f12_2;
                    var_f30_2 = temp_f30_2 * temp_f12_2;
                }
                (*(s16 *)((char *)(spFC) + 0x0)) = (s16) (s32) (spE4 + var_f2_2);
                (*(s16 *)((char *)(spFC) + 0x2)) = (s16) (s32) (spE8 + var_f28_2);
                (*(s16 *)((char *)(spFC) + 0x4)) = (s16) (s32) (spEC + var_f30_2);
                (*(s16 *)((char *)(spFC) + 0x8)) = (s16) temp_f4;
                (*(s32 *)((char *)(spFC) + 0xA)) = 0;
                (*(s32 *)((char *)(spFC) + 0xC)) = 0xFF;
                (*(s32 *)((char *)(spFC) + 0xD)) = 0xFF;
                (*(s32 *)((char *)(spFC) + 0xE)) = 0xFF;
                (*(s32 *)((char *)(spFC) + 0xF)) = var_a3;
                (*(s32 *)((char *)(spFC) + 0x6)) = 0;
                temp_t9 = (char *)(spFC) + 0x10;
                spFC = temp_t9;
                (*(s16 *)((char *)(spFC) + 0x10)) = (s16) (s32) (spE4 - var_f2_2);
                (*(s16 *)((char *)(spFC) + 0x2)) = (s16) (s32) (spE8 - var_f28_2);
                (*(s16 *)((char *)(spFC) + 0x4)) = (s16) (s32) (spEC - var_f30_2);
                (*(s16 *)((char *)(spFC) + 0x8)) = (s16) temp_f4;
                (*(s32 *)((char *)(temp_t9) + 0xA)) = 0x7FF;
                (*(s32 *)((char *)(spFC) + 0xC)) = 0xFF;
                (*(s32 *)((char *)(spFC) + 0xD)) = 0xFF;
                (*(s32 *)((char *)(spFC) + 0xE)) = 0xFF;
                (*(s32 *)((char *)(temp_t9) + 0xF)) = var_a3;
                (*(s32 *)((char *)(spFC) + 0x6)) = 0;
                spFC = (char *)(spFC) + 0x10;
                (*(s32 *)((char *)(var_s0) + 0x0)) = 0x01004008;
                temp_s0 = (char *)(var_s0) + 8;
                (*(s32 *)((char *)(var_s0) + 0x4)) = (void *) ((char *)(spFC) - 0x40);
                (*(s32 *)((char *)(var_s0) + 0x8)) = 0x05000204;
                (*(s32 *)((char *)(temp_s0) + 0x4)) = 0;
                temp_s0_2 = (char *)(temp_s0) + 8;
                (*(s32 *)((char *)(temp_s0) + 0x8)) = 0x05020604;
                (*(s32 *)((char *)(temp_s0_2) + 0x4)) = 0;
                var_s0 = (char *)(temp_s0_2) + 8;
                if (var_a1 < 0) {
                    var_a1 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                }
                if (temp_a2 != (*(s32 *)((char *)(arg0) + 0x2D))) {
                    (*(s32 *)((char *)&(spD8) + 0x0)) = (*(s32 *)((char *)&(spE4) + 0x0));
                    (*(s32 *)((char *)&(spD8) + 0x4)) = (s32) (*(s32 *)((char *)&(spE4) + 0x4));
                    (*(s32 *)((char *)&(spD8) + 0x8)) = (s32) (*(s32 *)((char *)&(spE4) + 0x8));
                    temp_v0_4 = temp_s3 + (var_a1 * 0x1C);
                    (*(s32 *)((char *)&(spE4) + 0x0)) = (*(s32 *)((char *)(temp_v0_4) + 0x0));
                    (*(s32 *)((char *)&(spE4) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v0_4) + 0x4));
                    (*(s32 *)((char *)&(spE4) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v0_4) + 0x8));
                    var_a3 = (*(s32 *)((char *)(temp_v0_4) + 0x10));
                    spA0 = (*(s32 *)((char *)(temp_v0_4) + 0x14));
                }
            } while (temp_a2 != (*(s32 *)((char *)(arg0) + 0x2D)));
        }
    }
    return var_s0;
}

void func_151B70B4(void *arg0, void *arg1, s32 arg2) {
    s32 temp_a3;
    s32 temp_t6;
    s32 temp_v1;
    void *temp_v0;

    temp_t6 = arg2 & 0xFF;
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x98));
    temp_a3 = (*(s32 *)((char *)(temp_v0) + 0x0));
    if (temp_t6 == 0) {
        if (temp_a3 == (*(s32 *)((char *)(arg1) + 0x0))) {
            (*(s32 *)((char *)(arg0) + 0x30)) = 0;
            (*(u16 *)((char *)(arg0) + 0x1E)) = (u16) ((*(u16 *)((char *)(arg0) + 0x1E)) | 8);
        }
    } else if (temp_t6 == 0x2D) {
        temp_v1 = (*(s32 *)((char *)(arg1) + 0x0));
        if (temp_v1 == temp_a3) {
            (*(s32 *)((char *)(temp_v0) + 0x0)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
            (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x9));
            return;
        }
        if ((*(s32 *)((char *)(arg1) + 0x4)) == temp_a3) {
            (*(s32 *)((char *)(temp_v0) + 0x0)) = temp_v1;
            (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x8));
        }
    }
}

void func_151B7144(void *arg0, s32 arg1, s32 arg2) {
    s8 sp8D;
    s8 sp8C;
    s8 sp8B;
    s8 sp8A;
    s8 sp89;
    s8 sp88;
    s32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    s16 sp4A;
    s16 sp48;
    s16 sp46;
    s8 sp45;
    s8 sp44;
    s8 sp43;
    s8 sp42;
    s8 sp41;
    s8 sp40;
    s8 sp3F;
    s8 sp3E;
    s8 sp3D;
    s8 sp3C;
    s32 sp38;
    s32 sp34;
    s16 sp32;
    s16 sp30;
    s32 sp2C;
    s32 sp28;
    s32 sp20;
    f32 temp_f12;
    s32 var_v0;
    s32 var_v1;

    sp45 = 0x29;
    sp30 = 0xE03;
    sp28 = 0x200005;
    sp2C = 0;
    sp34 = 0;
    sp38 = 0;
    sp46 = 0x12;
    sp48 = 0xE;
    var_v1 = 0;
    if (random_u32() & 1) {
        var_v1 = 0x40;
    }
    sp20 = var_v1;
    if (random_u32() & 1) {
        var_v0 = 0x80;
    } else {
        var_v0 = 0;
    }
    sp80 = var_v0 | 1 | var_v1 | 0xCE00 | 0x10000;
    sp88 = 3;
    sp89 = 3;
    sp8A = -1;
    sp8B = -1;
    sp8C = -1;
    sp8D = 0;
    sp4A = 0x28;
    sp3C = 0xDD;
    sp3D = 0xD3;
    sp3E = 0xCD;
    sp3F = 0xFF;
    sp40 = 0x57;
    sp41 = 0x55;
    sp42 = 0x5A;
    sp44 = 0xFF;
    sp7C = 0.0f;
    sp4C = D_800AA47C;
    sp58 = (*(s32 *)((char *)(arg0) + 0x14));
    sp5C = (*(s32 *)((char *)(arg0) + 0x18));
    sp64 = 0.0f;
    sp68 = 0.0f;
    sp6C = 0.0f;
    sp60 = (*(s32 *)((char *)(arg0) + 0x1C));
    sp43 = (random_u32(arg0) % 56U) + 0xC8;
    sp32 = (random_u32() % 10U) + 0x1E;
    temp_f12 = (random_float() * 50.0f) + 89.0f;
    sp70 = 0.0f;
    sp74 = 0.0f;
    sp50 = temp_f12;
    sp54 = temp_f12;
    sp78 = 0.0f;
    func_15130280(temp_f12, &sp28, 1, 0, 0, (s32) arg1, arg2);
}

void *func_151B7328(void **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *sp;
    s8 spF9;
    s8 spF8;
    s32 spF4;
    s16 spF2;
    s16 spF0;
    s32 spE4;
    u8 spDC;
    s32 spD8;
    void *spD4;
    void *spD0;
    s8 spC6;
    s8 spC5;
    s8 spC4;
    s8 spC3;
    s8 spC2;
    s8 spC1;
    s8 spC0;
    s32 spBC;
    s32 spB8;
    f32 spB4;
    void * spA8;
    void * sp9C;
    void * sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    s16 sp82;
    s16 sp80;
    s16 sp7E;
    s8 sp7D;
    s8 sp7C;
    s8 sp7B;
    s8 sp7A;
    s8 sp79;
    s8 sp78;
    s8 sp77;
    s8 sp76;
    s8 sp75;
    s8 sp74;
    s32 sp70;
    s32 sp6C;
    s16 sp6A;
    s16 sp68;
    s32 sp64;
    s32 sp60;
    void * sp50;
    s32 sp48;
    f32 temp_f10;
    s32 temp_t0;
    s32 var_v0;
    s32 var_v1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_v0;

    spD4 = NULL;
    spD8 = 0;
    spF9 = 0x14;
    spDC = arg1;
    (*(s32 *)((char *)&(spE4) + 0x0)) = (*(s32 *)((char *)&(D_800A5480) + 0x0));
    (*(s32 *)((char *)&(spE4) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
    (*(s32 *)((char *)&(spE4) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
    spF0 = 0x12C;
    spF2 = 0x14;
    spF4 = 0x10;
    spF8 = 2;
    temp_v0 = func_15147A80(&spE4, arg2 + 0x10, 0x14, 0, 0xE, 0xE, 0, 0, 0, (s32) arg3, arg4);
    if (temp_v0 != NULL) {
        temp_a0 = (*(s32 *)((char *)(temp_v0) + 0x98));
        spD0 = temp_a0;
        memcpy(temp_a0, &spD4, 0xC);
        temp_a0_2 = (char *)(spD0) + 0x10;
        (*(s32 *)((char *)(spD0) + 0x4)) = temp_a0_2;
        memcpy(temp_a0_2, arg0, arg2, spD0);
        if (((s32 (*)())((char *)(&D_8008FB90 + (arg1 * 4))))(temp_v0, (char *)(temp_v0) + 0x10) == 0) {
            func_1516972C(temp_v0);
            return NULL;
        }
        (*(s32 *)((char *)&(sp50) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800AA460) + 0x0));
        (*(s32 *)((char *)&(sp50) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800AA460) + 0x4));
        (*(s32 *)((char *)&(sp50) + 0xC)) = (s32) (*(s32 *)((char *)&(D_800AA460) + 0xC));
        (*(s32 *)((char *)&(sp50) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800AA460) + 0x8));
        temp_t0 = (*(s32 *)((char *)(((char *)(sp) + ((random_u32() & 3) * 4))) + 0x50));
        sp68 = 0x1303;
        sp60 = 0x200005;
        sp7D = (s8) temp_t0;
        sp64 = 0;
        sp6A = 0x12C;
        sp6C = 0;
        sp70 = 0;
        sp74 = 0xFF;
        sp75 = 0xFF;
        sp76 = 0xFF;
        sp77 = 0xFF;
        sp78 = 0xFF;
        sp79 = 0xFF;
        sp7A = 0xFF;
        sp7B = 0xFF;
        sp7C = 0xFF;
        temp_f10 = (random_float() * 800.0f) + D_800AA480;
        sp8C = temp_f10;
        sp88 = temp_f10;
        (*(s32 *)((char *)&(sp90) + 0x0)) = (s32) (*(s32 *)((char *)&(spE4) + 0x0));
        (*(s32 *)((char *)&(sp90) + 0x4)) = (s32) (*(s32 *)((char *)&(spE4) + 0x4));
        (*(s32 *)((char *)&(sp90) + 0x8)) = (s32) (*(s32 *)((char *)&(spE4) + 0x8));
        (*(s32 *)((char *)&(sp9C) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
        (*(s32 *)((char *)&(sp9C) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
        (*(s32 *)((char *)&(sp9C) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
        (*(s32 *)((char *)&(spA8) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
        (*(s32 *)((char *)&(spA8) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
        (*(s32 *)((char *)&(spA8) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
        sp7E = 1;
        sp80 = 0xFF;
        sp82 = 1;
        spB4 = 0.0f;
        sp84 = 1.0f;
        var_v1 = 0;
        if (random_u32() & 1) {
            var_v1 = 0x40;
        }
        sp48 = var_v1;
        if (random_u32() & 1) {
            var_v0 = 0x80;
        } else {
            var_v0 = 0;
        }
        spB8 = var_v0 | var_v1 | 0xC000 | 0x40000;
        spC0 = 6;
        spC1 = 5;
        spC2 = -1;
        spC3 = -1;
        spC4 = -1;
        spC5 = 0;
        spBC = 0;
        spC6 = 0xFF;
        (*(f32 *)((char *)(spD0) + 0x0)) = func_15130280((f32)(s32)&sp60, (s32 *)1, 0, 0, (s32) arg3, arg4);
        goto block_9;
    }
block_9:
    return temp_v0;
}

s32 func_151B7678(void *arg0, void *arg1) {
    void *temp_a2;
    void *temp_v1;

    temp_v1 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x98))) + 0x4));
    temp_a2 = (*(s32 *)((char *)(temp_v1) + 0x0));
    if (((*(s32 *)((char *)(temp_a2) + 0x0)) == 0) || ((*(s32 *)((char *)(temp_v1) + 0x4)) != (*(s32 *)((char *)(temp_a2) + 0x3B)))) {
        return 0;
    }
    (*(f32 *)((char *)(arg1) + 0x0)) = (f32) (*(f32 *)((char *)(temp_a2) + 0x14));
    (*(f32 *)((char *)(arg1) + 0x4)) = (f32) (*(f32 *)((char *)(temp_a2) + 0x18));
    (*(f32 *)((char *)(arg1) + 0x8)) = (f32) (*(f32 *)((char *)(temp_a2) + 0x1C));
    return 1;
}

s32 func_151B76CC(void *arg0, s32 arg1) {
    void *sp6C;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    void *temp_v0;

    temp_v0 = (*(s32 *)((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x98))) + 0x4))));
    sp6C = temp_v0;
    func_150A8050(&sp2C, (*(f32 *)((char *)(temp_v0) + 0x20)), (*(f32 *)((char *)(temp_v0) + 0x24)), (*(f32 *)((char *)(temp_v0) + 0x28)));
    sp5C = (*(s32 *)((char *)(sp6C) + 0x38));
    sp60 = (*(s32 *)((char *)(sp6C) + 0x3C));
    sp64 = (*(s32 *)((char *)(sp6C) + 0x40));
    sp2C *= (*(s32 *)((char *)(sp6C) + 0x18));
    sp30 *= (*(s32 *)((char *)(sp6C) + 0x18));
    sp34 *= (*(s32 *)((char *)(sp6C) + 0x18));
    sp3C *= (*(s32 *)((char *)(sp6C) + 0x1C));
    sp40 *= (*(s32 *)((char *)(sp6C) + 0x1C));
    sp44 *= (*(s32 *)((char *)(sp6C) + 0x1C));
    sp4C *= (*(s32 *)((char *)(sp6C) + 0x18));
    sp50 *= (*(s32 *)((char *)(sp6C) + 0x18));
    sp54 *= (*(s32 *)((char *)(sp6C) + 0x18));
    func_150A7960(&sp2C, 0, 0, 0xC37A0000, arg1, arg1 + 4, arg1 + 8);
    return 1;
}

s32 func_151B77F4(void *arg0) {
    void *sp44;
    s32 sp40;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    void *sp1C;
    f32 temp_f0;
    s8 temp_v0_3;
    void *temp_a1;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;

    f32 sp38;
    f32 sp3C;
    temp_v1 = (*(s32 *)((char *)(arg0) + 0x98));
    sp40 = (*(s32 *)((char *)(arg0) + 0x94));
    if (D_800BE9E4 > 0) {
        temp_a1 = (char *)(arg0) + 0x10;
        (*(s32 *)((char *)&(sp34) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x10));
        (*(s32 *)((char *)&(sp34) + 0x4)) = (s32) (*(s32 *)((char *)(temp_a1) + 0x4));
        (*(s32 *)((char *)&(sp34) + 0x8)) = (s32) (*(s32 *)((char *)(temp_a1) + 0x8));
        sp1C = temp_a1;
        sp44 = temp_v1;
        if (((s32 (*)())((char *)(&D_8008FB90 + ((*(s32 *)((char *)(temp_v1) + 0x8)) * 4))))(arg0, temp_a1, arg0) == 0) {
            return 0;
        }
        temp_v0 = (*(s32 *)((char *)(temp_v1) + 0x0));
        if (temp_v0 != NULL) {
            (*(f32 *)((char *)(temp_v0) + 0x40)) = (f32) (*(f32 *)((char *)(arg0) + 0x10));
            (*(s32 *)((char *)(temp_v0) + 0x44)) = (s32) (*(s32 *)((char *)(temp_a1) + 0x4));
            (*(s32 *)((char *)(temp_v0) + 0x48)) = (s32) (*(s32 *)((char *)(temp_a1) + 0x8));
        }
        sp28 = (*(s32 *)((char *)(arg0) + 0x10)) - sp34;
        sp2C = (*(s32 *)((char *)(arg0) + 0x14)) - sp38;
        sp1C = temp_a1;
        sp30 = (*(s32 *)((char *)(arg0) + 0x18)) - sp3C;
        temp_f0 = func_15143E64(&sp28, temp_a1, arg0);
        temp_v0_2 = ((*(s32 *)((char *)(arg0) + 0x2E)) * 0x14) + sp40;
        (*(s32 *)((char *)(temp_v0_2) + 0x0)) = (s32) (*(s32 *)((char *)(sp1C) + 0x0));
        (*(s32 *)((char *)(temp_v0_2) + 0x4)) = (s32) (*(s32 *)((char *)(sp1C) + 0x4));
        (*(s32 *)((char *)(temp_v0_2) + 0xC)) = temp_f0;
        (*(s32 *)((char *)(temp_v0_2) + 0x10)) = 0xFF;
        (*(s32 *)((char *)(temp_v0_2) + 0x8)) = (s32) (*(s32 *)((char *)(sp1C) + 0x8));
        (*(s8 *)((char *)(arg0) + 0x2E)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2E)) + 1);
        if ((*(s32 *)((char *)(arg0) + 0x25)) == (*(s32 *)((char *)(arg0) + 0x2E))) {
            (*(s32 *)((char *)(arg0) + 0x2E)) = 0;
        }
        temp_v0_3 = (*(s32 *)((char *)(arg0) + 0x2D));
        (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2C)) + 1);
        if (temp_v0_3 == (*(s32 *)((char *)(arg0) + 0x2E))) {
            (*(s8 *)((char *)(arg0) + 0x2D)) = (s8) (temp_v0_3 + 1);
            if ((*(s32 *)((char *)(arg0) + 0x25)) == (*(s32 *)((char *)(arg0) + 0x2D))) {
                (*(s32 *)((char *)(arg0) + 0x2D)) = 0;
            }
            (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2C)) - 1);
        }
        goto block_11;
    }
block_11:
    return 1;
}

s32 func_151B7998(void *arg0) {
    f32 sp40;
    f32 sp3C;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f2;
    f32 temp_f8;
    f32 var_f0;
    f32 var_f24;
    f32 var_f2;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a1;
    s32 var_t5;
    s8 var_v1;
    void *temp_a1;
    void *temp_a3;
    void *temp_v1_2;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x94));
    if ((*(s32 *)((char *)(arg0) + 0x2C)) >= 2) {
        var_f24 = 0.0f;
        var_a1 = (*(s32 *)((char *)(arg0) + 0x2E)) - 1;
        if (var_a1 < 0) {
            var_a1 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
        }
        if (var_a1 != (*(s32 *)((char *)(arg0) + 0x2D))) {
            do {
                temp_v1 = var_a1;
                var_a1 -= 1;
                if (var_a1 < 0) {
                    var_a1 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                }
                temp_a3 = (temp_v1 * 0x14) + temp_v0;
                temp_f16 = (*(s32 *)((char *)(temp_a3) + 0xC));
                var_f24 += temp_f16;
                if (D_800AA484 < var_f24) {
                    if (temp_f16 != 0.0f) {
                        temp_f14 = (var_f24 - D_800AA484) / temp_f16;
                        temp_v1_2 = (var_a1 * 0x14) + temp_v0;
                        temp_f0 = (*(s32 *)((char *)(temp_v1_2) + 0x0));
                        temp_f2 = (*(s32 *)((char *)(temp_v1_2) + 0x4));
                        temp_f12 = (*(s32 *)((char *)(temp_v1_2) + 0x8));
                        (*(f32 *)((char *)(temp_v1_2) + 0x0)) = (f32) (temp_f0 - ((temp_f0 - (*(f32 *)((char *)(temp_a3) + 0x0))) * temp_f14));
                        (*(f32 *)((char *)(temp_v1_2) + 0x4)) = (f32) (temp_f2 - ((temp_f2 - (*(f32 *)((char *)(temp_a3) + 0x4))) * temp_f14));
                        (*(f32 *)((char *)(temp_v1_2) + 0x8)) = (f32) (temp_f12 - ((temp_f12 - (*(f32 *)((char *)(temp_a3) + 0x8))) * temp_f14));
                        (*(f32 *)((char *)(temp_a3) + 0xC)) = (f32) ((*(f32 *)((char *)(temp_a3) + 0xC)) * (1.0f - temp_f14));
                    }
                    var_f24 = D_800AA484;
                    if (var_a1 != (*(s32 *)((char *)(arg0) + 0x2D))) {
                        do {
                            (*(s8 *)((char *)(arg0) + 0x2D)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2D)) + 1);
                            if ((*(s32 *)((char *)(arg0) + 0x25)) == (*(s32 *)((char *)(arg0) + 0x2D))) {
                                (*(s32 *)((char *)(arg0) + 0x2D)) = 0;
                            }
                            (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2C)) - 1);
                        } while (var_a1 != (*(s32 *)((char *)(arg0) + 0x2D)));
                    }
                }
            } while (var_a1 != (*(s32 *)((char *)(arg0) + 0x2D)));
        }
        if (var_f24 != 0.0f) {
            var_f0 = 1.0f / var_f24;
        } else {
            var_f0 = 0.0f;
        }
        sp3C = var_f0;
        sp40 = var_f24;
    }
    if ((*(s32 *)((char *)(arg0) + 0x2C)) >= 2) {
        var_v1 = (*(s32 *)((char *)(arg0) + 0x2E));
        var_f2 = sp40;
        do {
            var_v1 -= 1;
            temp_f8 = var_f2 * (255.0f * sp3C);
            if (var_v1 < 0) {
                var_v1 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
            }
            temp_a1 = (var_v1 * 0x14) + temp_v0;
            if (M2C_ERROR(/* cfc1 */) & 0x78) {
                if (!(M2C_ERROR(/* cfc1 */) & 0x78)) {
                    var_t5 = (s32) (temp_f8 - 2.1474836e9f) | 0x80000000;
                } else {
                    goto block_27;
                }
            } else {
                var_t5 = (s32) temp_f8;
                if (var_t5 < 0) {
block_27:
                    var_t5 = -1;
                }
            }
            (*(s8 *)((char *)(temp_a1) + 0x10)) = (s8) var_t5;
            var_f2 -= (*(s32 *)((char *)(temp_a1) + 0xC));
        } while (var_v1 != (*(s32 *)((char *)(arg0) + 0x2D)));
    }
    return 1;
}

void *func_151B7C38(void *arg0, void *arg1, s32 arg2) {
    f32 spDC;
    f32 spD0;
    void *spC4;
    s32 spC0;
    f32 sp98;
    s8 sp97;
    void *sp90;
    f32 sp7C;
    f32 temp_f10;
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
    f32 temp_f26;
    f32 temp_f26_2;
    f32 temp_f28;
    f32 temp_f28_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f8;
    f32 var_f12;
    f32 var_f12_2;
    f32 var_f2;
    f32 var_f2_2;
    f32 var_f30;
    f32 var_f30_2;
    s32 temp_a0;
    s32 var_a0;
    s32 var_a1;
    u8 temp_t4;
    u8 var_a2;
    void *temp_s0;
    void *temp_t6;
    void *temp_t8;
    void *temp_t8_2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *var_s0;

    f32 spD4;
    f32 spD8;
    f32 spE0;
    f32 spE4;
    var_s0 = arg1;
    if ((*(s32 *)((char *)(arg0) + 0x2C)) < 2) {

    } else {
        spC0 = (*(s32 *)((char *)(arg0) + 0x94));
        func_151D5D60((char *)(arg0) + 0x84, arg2, ((*(s32 *)((char *)(arg0) + 0x25)) << 5) + 0xA0, &sp90, 0);
        if (sp90 == NULL) {

        } else {
            temp_v0 = func_15144B34(arg2);
            sp97 = 1;
            spC4 = temp_v0;
            var_a0 = (*(s32 *)((char *)(arg0) + 0x2E)) - 1;
            var_s0 = func_15142FBC(func_1513F4E4(func_15142B7C(func_15142E24(var_s0, &D_80091100, 0, 0, 0, 0, 0x78, 0, 0, &sp97, 3), 0x200005, 0x1F0600), 0x56, &sp97), D_800D2C9C | 0x80000 | 0x2CA0, (*(s32 *)((char *)&(D_800A4AC8) + 0x1C)) | (*(s32 *)((char *)&(D_800A4AC8) + 0x18)), &sp97);
            if (var_a0 < 0) {
                var_a0 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
            }
            var_a1 = var_a0 - 1;
            if (var_a1 < 0) {
                var_a1 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
            }
            temp_v0_2 = spC0 + (var_a0 * 0x14);
            (*(s32 *)((char *)&(spD0) + 0x0)) = (*(s32 *)((char *)(temp_v0_2) + 0x0));
            (*(s32 *)((char *)&(spD0) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v0_2) + 0x4));
            temp_v1 = spC0 + (var_a1 * 0x14);
            (*(s32 *)((char *)&(spD0) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v0_2) + 0x8));
            temp_t4 = (*(s32 *)((char *)(temp_v0_2) + 0x10));
            (*(s32 *)((char *)&(spDC) + 0x0)) = (*(s32 *)((char *)(temp_v1) + 0x0));
            (*(s32 *)((char *)&(spDC) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v1) + 0x4));
            (*(s32 *)((char *)&(spDC) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v1) + 0x8));
            temp_f24 = spD0 - (*(s32 *)((char *)(spC4) + 0x0));
            var_a2 = (*(s32 *)((char *)(temp_v1) + 0x10));
            temp_f26 = spD4 - (*(s32 *)((char *)(spC4) + 0x4));
            temp_f28 = spD8 - (*(s32 *)((char *)(spC4) + 0x8));
            temp_f20 = spD4 - spE0;
            temp_f22 = spD8 - spE4;
            temp_f18 = spD0 - spDC;
            temp_f2 = (temp_f20 * temp_f28) - (temp_f26 * temp_f22);
            temp_f12 = (temp_f22 * temp_f24) - (temp_f28 * temp_f18);
            temp_f16 = (temp_f18 * temp_f26) - (temp_f24 * temp_f20);
            temp_f10 = (temp_f2 * temp_f2) + (temp_f12 * temp_f12) + (temp_f16 * temp_f16);
            sp7C = temp_f10;
            sp98 = temp_f10;
            if (temp_f10 != 0.0f) {
                temp_f14 = 29.0f / sqrtf(temp_f10);
                var_f2 = temp_f2 * temp_f14;
                var_f12 = temp_f12 * temp_f14;
                var_f30 = temp_f16 * temp_f14;
            } else {
                var_f30 = 0.0f;
                var_f2 = 0.0f;
                var_f12 = 0.0f;
            }
            (*(s16 *)((char *)(sp90) + 0x0)) = (s16) (s32) (spD0 + var_f2);
            (*(s16 *)((char *)(sp90) + 0x2)) = (s16) (s32) (spD4 + var_f12);
            (*(s16 *)((char *)(sp90) + 0x4)) = (s16) (s32) (spD8 + var_f30);
            (*(s32 *)((char *)(sp90) + 0x8)) = 5;
            (*(s32 *)((char *)(sp90) + 0xA)) = 0;
            (*(s32 *)((char *)(sp90) + 0xF)) = temp_t4;
            (*(s32 *)((char *)(sp90) + 0x6)) = 0;
            temp_t6 = (char *)(sp90) + 0x10;
            sp90 = temp_t6;
            (*(s16 *)((char *)(sp90) + 0x10)) = (s16) (s32) (spD0 - var_f2);
            (*(s16 *)((char *)(sp90) + 0x2)) = (s16) (s32) (spD4 - var_f12);
            (*(s16 *)((char *)(sp90) + 0x4)) = (s16) (s32) (spD8 - var_f30);
            (*(s32 *)((char *)(sp90) + 0x8)) = 0x1FA4;
            (*(s32 *)((char *)(temp_t6) + 0xA)) = 0;
            (*(s32 *)((char *)(sp90) + 0xF)) = temp_t4;
            (*(s32 *)((char *)(sp90) + 0x6)) = 0;
            sp90 = (char *)(sp90) + 0x10;
            do {
                temp_f24_2 = spDC - (*(s32 *)((char *)(spC4) + 0x0));
                temp_a0 = var_a1;
                temp_f26_2 = spE0 - (*(s32 *)((char *)(spC4) + 0x4));
                var_a1 -= 1;
                temp_f28_2 = spE4 - (*(s32 *)((char *)(spC4) + 0x8));
                temp_f20_2 = spD4 - spE0;
                temp_f22_2 = spD8 - spE4;
                temp_f18_2 = spD0 - spDC;
                temp_f2_2 = (temp_f20_2 * temp_f28_2) - (temp_f26_2 * temp_f22_2);
                temp_f12_2 = (temp_f22_2 * temp_f24_2) - (temp_f28_2 * temp_f18_2);
                temp_f16_2 = (temp_f18_2 * temp_f26_2) - (temp_f24_2 * temp_f20_2);
                temp_f8 = (temp_f2_2 * temp_f2_2) + (temp_f12_2 * temp_f12_2) + (temp_f16_2 * temp_f16_2);
                sp7C = temp_f8;
                sp98 = temp_f8;
                if (temp_f8 != 0.0f) {
                    temp_f14_2 = 29.0f / sqrtf(temp_f8);
                    var_f2_2 = temp_f2_2 * temp_f14_2;
                    var_f12_2 = temp_f12_2 * temp_f14_2;
                    var_f30_2 = temp_f16_2 * temp_f14_2;
                } else {
                    var_f30_2 = 0.0f;
                    var_f2_2 = 0.0f;
                    var_f12_2 = 0.0f;
                }
                (*(s16 *)((char *)(sp90) + 0x0)) = (s16) (s32) (spDC + var_f2_2);
                (*(s16 *)((char *)(sp90) + 0x2)) = (s16) (s32) (spE0 + var_f12_2);
                (*(s16 *)((char *)(sp90) + 0x4)) = (s16) (s32) (spE4 + var_f30_2);
                (*(s32 *)((char *)(sp90) + 0x8)) = 5;
                (*(s32 *)((char *)(sp90) + 0xA)) = 0;
                (*(s32 *)((char *)(sp90) + 0xF)) = var_a2;
                (*(s32 *)((char *)(sp90) + 0x6)) = 0;
                temp_t8 = (char *)(sp90) + 0x10;
                sp90 = temp_t8;
                (*(s16 *)((char *)(sp90) + 0x10)) = (s16) (s32) (spDC - var_f2_2);
                (*(s16 *)((char *)(sp90) + 0x2)) = (s16) (s32) (spE0 - var_f12_2);
                (*(s16 *)((char *)(sp90) + 0x4)) = (s16) (s32) (spE4 - var_f30_2);
                (*(s32 *)((char *)(sp90) + 0x8)) = 0x1FA4;
                (*(s32 *)((char *)(temp_t8) + 0xA)) = 0;
                (*(s32 *)((char *)(sp90) + 0xF)) = var_a2;
                (*(s32 *)((char *)(sp90) + 0x6)) = 0;
                sp90 = (char *)(sp90) + 0x10;
                (*(s32 *)((char *)(var_s0) + 0x0)) = 0x01004008;
                temp_s0 = (char *)(var_s0) + 8;
                temp_v1_2 = temp_s0;
                (*(s32 *)((char *)(var_s0) + 0x4)) = (void *) ((char *)(sp90) - 0x40);
                var_s0 = (char *)(temp_s0) + 8;
                (*(s32 *)((char *)(temp_v1_2) + 0x0)) = 0x06000204;
                (*(s32 *)((char *)(temp_v1_2) + 0x4)) = 0x20604;
                if (var_a1 < 0) {
                    var_a1 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                }
                if (temp_a0 != (*(s32 *)((char *)(arg0) + 0x2D))) {
                    temp_t8_2 = spC0 + (temp_a0 * 0x14);
                    (*(s32 *)((char *)&(spD0) + 0x0)) = (*(s32 *)((char *)(temp_t8_2) + 0x0));
                    (*(s32 *)((char *)&(spD0) + 0x4)) = (s32) (*(s32 *)((char *)(temp_t8_2) + 0x4));
                    temp_v1_3 = spC0 + (var_a1 * 0x14);
                    (*(s32 *)((char *)&(spD0) + 0x8)) = (s32) (*(s32 *)((char *)(temp_t8_2) + 0x8));
                    (*(s32 *)((char *)&(spDC) + 0x0)) = (*(s32 *)((char *)(temp_v1_3) + 0x0));
                    (*(s32 *)((char *)&(spDC) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v1_3) + 0x4));
                    (*(s32 *)((char *)&(spDC) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v1_3) + 0x8));
                    var_a2 = (*(s32 *)((char *)(temp_v1_3) + 0x10));
                }
            } while (temp_a0 != (*(s32 *)((char *)(arg0) + 0x2D)));
        }
    }
    return var_s0;
}

void func_151B82CC(void *arg0, s32 arg2) {
    void * (*temp_v1)(s32);

    temp_v1 = *(&D_8008FB98 + ((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x98))) + 0x8)) * 4));
    if (temp_v1 != NULL) {
        temp_v1(arg2 & 0xFF);
    }
}

void func_151B8318(void *arg0, void *arg1, s32 arg2) {
    s32 temp_t6;
    void *temp_v1;

    temp_t6 = arg2 & 0xFF;
    temp_v1 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x98))) + 0x4));
    if ((temp_t6 == 0) && (((*(s32 *)((char *)(arg1) + 0x0)) == (*(s32 *)((char *)(temp_v1) + 0x0))) || ((*(s32 *)((char *)(temp_v1) + 0x4)) == (*(s32 *)((char *)(arg1) + 0x4))))) {
        func_1516972C((void *) temp_t6);
    }
}

void func_151B8370(void *arg0) {
    void *temp_a1;

    temp_a1 = (*(s32 *)((*(s32 *)((char *)(arg0) + 0x98))));
    if (temp_a1 != NULL) {
        func_1516972C(temp_a1, temp_a1);
    }
}

void func_151B83A0(void *arg0) {
    func_151B8370(arg0);
    func_151478F4(arg0);
}

void func_151B83CC(void *arg0) {
    func_151B8370(arg0);
    func_15147928(arg0);
}
