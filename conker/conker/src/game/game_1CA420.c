/**
 * Auto-decompiled from asm/1CA420.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


u32 random_u32();                                /* extern */
s32 func_1513F4E4();                    /* extern */
s32 func_15142B7C();                       /* extern */
s32 func_15142C10();      /* extern */
s32 func_15142E24(); /* extern */
void *func_15142FBC();             /* extern */
void * func_15143134(); /* extern */
void * func_151478F4();                            /* extern */
void * func_15147928();                            /* extern */
void *func_15147A80(); /* extern */
void * func_15147D64();                       /* extern */
void * func_1514EC1C();         /* extern */
s32 func_1514ED3C();                  /* extern */
void * func_1514EDF0();                               /* extern */
void * func_151D5D60();   /* extern */
void * memcpy();          /* extern */
s32 func_1519E304(void **arg0, void * *arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5);
void func_1519E688();                               /* static */
extern s32 D_80090CD4;
extern s32 D_800A8B80;
extern s32 D_800D2C9C;
extern void *D_800E0920;

void func_1519CF70(s32 arg0) {
    s8 sp1C;
    s8 temp_a2;

    temp_a2 = arg0 & 0xFF;
    sp1C = temp_a2;
    func_15147D64(&sp1C, 6, temp_a2);
}

void func_1519CFA0(void *arg0) {
    u8 temp_t0;
    void *temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x98));
    (*(s32 *)((char *)(arg0) + 0x30)) = 0;
    (*(u16 *)((char *)(arg0) + 0x1E)) = (u16) ((*(u16 *)((char *)(arg0) + 0x1E)) & 0xFFFD);
    temp_t0 = (*(s32 *)((char *)(temp_v0) + 0x6)) | 1;
    (*(s32 *)((char *)(temp_v0) + 0x6)) = temp_t0;
    (*(u8 *)((char *)(temp_v0) + 0x6)) = (u8) (temp_t0 | 4);
}

void func_1519CFD0(void *arg0) {
    func_1514EDF0((*(s32 *)((*(s32 *)((char *)(arg0) + 0x98)))));
    func_151478F4(arg0);
}

void func_1519D000(void *arg0) {
    func_1514EDF0((*(s32 *)((*(s32 *)((char *)(arg0) + 0x98)))));
    func_15147928(arg0);
}

void *func_1519D030(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s8 spC1;
    s32 spBC;
    u16 spBA;
    s16 spB8;
    void * spAC;
    u8 spAB;
    u8 spAA;
    u8 spA9;
    u8 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    s8 sp98;
    s16 sp96;
    s16 sp94;
    s16 sp92;
    s16 sp90;
    s16 sp8E;
    u8 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    void * sp60;
    void * sp54;
    s8 sp53;
    s8 sp52;
    u8 sp51;
    u8 sp50;
    void *sp4C;
    void *sp48;
    s32 var_v1_2;
    void *temp_v0;
    void *temp_v0_2;
    void *var_v1;

    if (arg0 == NULL) {
        return NULL;
    }
    sp6C = 0.0f;
    var_v1_2 = 0;
    sp9C = (*(s32 *)((char *)(arg0) + 0x14));
    temp_v0 = (arg1 << 6) + &D_800A8B80;
    spA0 = (*(s32 *)((char *)(arg0) + 0x18));
    sp4C = arg0;
    spA4 = (*(s32 *)((char *)(arg0) + 0x1C));
    sp52 = 2;
    sp53 = 0;
    sp98 = arg1;
    spB8 = arg2;
    sp78 = 0.0f;
    sp50 = (*(s32 *)((char *)(arg0) + 0x3B));
    if (arg3 & 0xFF) {
        var_v1_2 = 1;
    }
    spBA = var_v1_2 | 2;
    sp70 = (*(s32 *)((char *)(temp_v0) + 0x0));
    sp74 = (*(s32 *)((char *)(temp_v0) + 0x4));
    sp8C = (*(s32 *)((char *)(temp_v0) + 0x8));
    spC1 = (s8) (*(s8 *)((char *)(temp_v0) + 0xC));
    sp51 = (*(s32 *)((char *)(temp_v0) + 0x10));
    (*(s32 *)((char *)&(sp54) + 0x0)) = (s32) (*(s32 *)((char *)(temp_v0) + 0x14));
    (*(s32 *)((char *)&(sp54) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v0) + 0x18));
    (*(s32 *)((char *)&(sp54) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v0) + 0x1C));
    sp8E = (*(s32 *)((char *)(temp_v0) + 0x20));
    sp90 = (*(s32 *)((char *)(temp_v0) + 0x22));
    sp92 = (*(s32 *)((char *)(temp_v0) + 0x24));
    sp84 = (*(s32 *)((char *)(temp_v0) + 0x28));
    sp80 = (*(s32 *)((char *)(temp_v0) + 0x2C));
    sp7C = (*(s32 *)((char *)(temp_v0) + 0x30));
    sp88 = (*(s32 *)((char *)(temp_v0) + 0x34));
    sp94 = (*(s32 *)((char *)(temp_v0) + 0x38));
    sp96 = (*(s32 *)((char *)(temp_v0) + 0x3A));
    spA8 = (*(s32 *)((char *)(temp_v0) + 0x3C));
    spA9 = (*(s32 *)((char *)(temp_v0) + 0x3D));
    spAA = (*(s32 *)((char *)(temp_v0) + 0x3E));
    spAB = (*(s32 *)((char *)(temp_v0) + 0x3F));
    if (func_1519E304(&sp4C, &spAC, 0.0f, 0.0f, 0.0f, 1.0f) != 0) {
        (*(s32 *)((char *)&(sp60) + 0x0)) = (s32) (*(s32 *)((char *)&(spAC) + 0x0));
        (*(s32 *)((char *)&(sp60) + 0x4)) = (s32) (*(s32 *)((char *)&(spAC) + 0x4));
        (*(s32 *)((char *)&(sp60) + 0x8)) = (s32) (*(s32 *)((char *)&(spAC) + 0x8));
        spBA |= 4;
    }
    spBC = 4;
    temp_v0_2 = func_15147A80(&spAC, 0x60, 0x24, 3, 3, 3, 0, 0, 0, (s32) arg4, arg5);
    var_v1 = temp_v0_2;
    if (temp_v0_2 != NULL) {
        sp48 = temp_v0_2;
        memcpy((*(s32 *)((char *)(temp_v0_2) + 0x98)), &sp4C, 0x60);
        var_v1 = sp48;
    }
    return var_v1;
}

s32 func_1519D240(void *arg0) {
    s16 temp_t1;
    s32 temp_lo;
    s32 temp_v1;
    s8 var_a2;
    void *temp_a3;
    void *temp_t0;
    void *temp_t8;
    void *temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x98));
    temp_v1 = (*(s32 *)((char *)(arg0) + 0x94));
    if (((*(s32 *)((char *)(arg0) + 0x2C)) < 2) && ((*(s32 *)((char *)(temp_v0) + 0x6)) & 1)) {
        return 0;
    }
    var_a2 = (*(s32 *)((char *)(arg0) + 0x2E));
    if (var_a2 != (*(s32 *)((char *)(arg0) + 0x2D))) {
        do {
            var_a2 -= 1;
            if (var_a2 < 0) {
                var_a2 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
            }
            temp_lo = var_a2 * 0x24;
            temp_a3 = temp_lo + temp_v1;
            (*(s32 *)((char *)(temp_a3) + 0x20)) = 0xFF;
            temp_t0 = temp_v1 + temp_lo;
            temp_t1 = (*(s32 *)((char *)(temp_a3) + 0x1E));
            (*(f32 *)((char *)(temp_a3) + 0xC)) = (f32) ((*(f32 *)((char *)(temp_a3) + 0xC)) * (*(f32 *)((char *)(temp_v0) + 0x30)));
            (*(f32 *)((char *)(temp_a3) + 0x10)) = (f32) ((*(f32 *)((char *)(temp_a3) + 0x10)) + ((*(f32 *)((char *)(temp_v0) + 0x24)) * D_800BE9A4));
            (*(f32 *)((char *)(temp_a3) + 0x14)) = (f32) ((*(f32 *)((char *)(temp_a3) + 0x14)) * (*(f32 *)((char *)(temp_v0) + 0x30)));
            (*(f32 *)((char *)(temp_a3) + 0x0)) = (f32) ((*(f32 *)((char *)(temp_a3) + 0x0)) + ((*(f32 *)((char *)(temp_t0) + 0xC)) * D_800BE9A4));
            (*(f32 *)((char *)(temp_a3) + 0x4)) = (f32) ((*(f32 *)((char *)(temp_a3) + 0x4)) + ((*(f32 *)((char *)(temp_t0) + 0x10)) * D_800BE9A4));
            (*(f32 *)((char *)(temp_a3) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_a3) + 0x8)) + ((*(f32 *)((char *)(temp_t0) + 0x14)) * D_800BE9A4));
            if (temp_t1 > 0) {
                (*(s16 *)((char *)(temp_a3) + 0x1E)) = (s16) (temp_t1 - D_800BE9E4);
            } else {
                (*(s16 *)((char *)(temp_a3) + 0x1C)) = (s16) ((*(s16 *)((char *)(temp_a3) + 0x1C)) - (D_800BE9E4 * (*(s16 *)((char *)(temp_v0) + 0x46))));
            }
            (*(f32 *)((char *)(temp_a3) + 0x18)) = (f32) ((*(f32 *)((char *)(temp_a3) + 0x18)) + (D_800BE9A4 * (*(f32 *)((char *)(temp_v0) + 0x34))));
            if ((*(s32 *)((char *)(temp_a3) + 0x1C)) < 0) {
                (*(u8 *)((char *)(temp_v0) + 0x6)) = (u8) ((*(u8 *)((char *)(temp_v0) + 0x6)) & ~2);
                if (var_a2 != (*(s32 *)((char *)(arg0) + 0x2D))) {
                    do {
                        (*(s8 *)((char *)(arg0) + 0x2D)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2D)) + 1);
                        if ((*(s32 *)((char *)(arg0) + 0x25)) == (*(s32 *)((char *)(arg0) + 0x2D))) {
                            (*(s32 *)((char *)(arg0) + 0x2D)) = 0;
                        }
                        (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2C)) - 1);
                    } while (var_a2 != (*(s32 *)((char *)(arg0) + 0x2D)));
                }
                (*(s32 *)((char *)((temp_v1 + ((*(s32 *)((char *)(arg0) + 0x2D)) * 0x24))) + 0x1C)) = 0;
            }
        } while (var_a2 != (*(s32 *)((char *)(arg0) + 0x2D)));
    }
    if ((*(s32 *)((char *)(arg0) + 0x2C)) > 0) {
        temp_t8 = temp_v1 + ((*(s32 *)((char *)(arg0) + 0x2D)) * 0x24);
        (*(s32 *)((char *)(arg0) + 0x54)) = (s32) (*(s32 *)((char *)(temp_t8) + 0x0));
        (*(s32 *)((char *)(arg0) + 0x58)) = (s32) (*(s32 *)((char *)(temp_t8) + 0x4));
        (*(s32 *)((char *)(arg0) + 0x5C)) = (s32) (*(s32 *)((char *)(temp_t8) + 0x8));
    } else {
        (*(s32 *)((char *)(arg0) + 0x54)) = 0;
        (*(s32 *)((char *)(arg0) + 0x58)) = 0;
        (*(s32 *)((char *)(arg0) + 0x5C)) = 0;
    }
    return 1;
}

s32 func_1519D454(void *arg0) {
    f32 spE8;
    f32 spE4;
    s32 spE0;
    u8 spDC;
    void *spD8;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    void **sp6C;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    void * *temp_s0;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 var_f0;
    f32 var_f14;
    f32 var_f16;
    f32 var_f18;
    f32 var_f20;
    s32 temp_s4;
    s32 var_v0;
    s32 var_v0_2;
    s8 temp_v1;
    s8 var_v1;
    void **temp_s2;
    void **temp_v0_2;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_s0_2;
    void *temp_v0;
    void *temp_v0_3;

    temp_s2 = (*(s32 *)((char *)(arg0) + 0x98));
    temp_s4 = (*(s32 *)((char *)(arg0) + 0x94));
    temp_a1 = (*(s32 *)((char *)(temp_s2) + 0x0));
    if ((*(s32 *)((char *)(temp_a1) + 0x0)) == 0) {
        return 0;
    }
    if ((*(s32 *)((char *)(temp_s2) + 0x4)) != (*(s32 *)((char *)(temp_a1) + 0x3B))) {
        return 0;
    }
    var_v0 = 0;
    if (!((*(s32 *)((char *)(arg0) + 0x1E)) & 4)) {
        temp_s0 = (char *)(arg0) + 0x10;
        if (func_1519E304(temp_s2, temp_s0, 0.0f, 0.0f, 0.0f, 1.0f) != 0) {
            var_v0 = 1;
            (*(f32 *)((char *)(temp_s2) + 0x14)) = (f32) (*(f32 *)((char *)(arg0) + 0x10));
            (*(f32 *)((char *)(temp_s2) + 0x18)) = (f32) (*(f32 *)((char *)(temp_s0) + 0x4));
            (*(f32 *)((char *)(temp_s2) + 0x1C)) = (f32) (*(f32 *)((char *)(temp_s0) + 0x8));
            (*(u16 *)((char *)(arg0) + 0x1E)) = (u16) ((*(u16 *)((char *)(arg0) + 0x1E)) | 4);
            goto block_8;
        }
        return 1;
    }
block_8:
    temp_f2 = (*(s32 *)((char *)(arg0) + 0x10));
    spE8 = temp_f2;
    temp_f0 = (*(s32 *)((char *)(arg0) + 0x18));
    spE4 = temp_f0;
    if ((var_v0 == 0) && (func_1519E304(temp_s2, (char *)(arg0) + 0x10, temp_f2, (*(s32 *)((char *)(arg0) + 0x14)), temp_f0, (*(s32 *)((char *)(temp_s2) + 0x3C))) == 0)) {
        func_1519CFA0(arg0);
        spD8 = (*(s32 *)((char *)(temp_s2) + 0x0));
        var_v0_2 = 0;
        spDC = (*(s32 *)((char *)((*(s32 *)((char *)(temp_s2) + 0x0))) + 0x3B));
        spE0 = (s32) (*(s32 *)((char *)(temp_s2) + 0x4C));
        if ((*(s32 *)((char *)(arg0) + 0x1E)) & 1) {
            var_v0_2 = 1;
        }
        temp_v0 = func_151491F4((*(s32 *)((char *)(arg0) + 0x1C)), -1, 8, var_v0_2 & 0xFF, 2, 0xC, 0xFF, 0);
        if (temp_v0 != NULL) {
            memcpy((char *)(temp_v0) + 0x28, &spD8, 0xC);
            if (func_1514ED3C((*(s32 *)((char *)((*(s32 *)((char *)(temp_s2) + 0x0))) + 0x2F4)), arg0, 0) != 0) {
                func_1514EC1C(temp_v0, (*(s32 *)((char *)(temp_s2) + 0x0)), 0x11);
            }
        }
        return 1;
    }
    (*(f32 *)((char *)(temp_s2) + 0x2C)) = (f32) ((*(f32 *)((char *)(temp_s2) + 0x2C)) + ((*(f32 *)((char *)(temp_s2) + 0x28)) * D_800BE9A4));
    temp_f18 = (*(s32 *)((char *)(temp_s2) + 0x2C));
    if (temp_f18 > 1.0f) {
        temp_f12 = 1.0f / temp_f18;
        temp_v0_2 = (char *)(temp_s2) + 0x14;
        (*(s32 *)((char *)&(spAC) + 0x0)) = (*(s32 *)((char *)(temp_s2) + 0x14));
        var_f0 = (*(s32 *)((char *)(temp_s2) + 0x20)) + D_800BE9A4;
        (*(s32 *)((char *)&(spAC) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v0_2) + 0x4));
        (*(s32 *)((char *)&(spAC) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v0_2) + 0x8));
        temp_f2_2 = (*(s32 *)((char *)(arg0) + 0x10));
        temp_f14 = (*(s32 *)((char *)(temp_s2) + 0x38));
        temp_f4 = temp_f2_2 - (*(s32 *)((char *)(temp_s2) + 0x14));
        var_f16 = var_f0 * temp_f12;
        spBC = temp_f4;
        var_f20 = temp_f14 + ((*(s32 *)((char *)(temp_s2) + 0x34)) * var_f0);
        spC0 = (*(s32 *)((char *)(arg0) + 0x14)) - (*(s32 *)((char *)(temp_s2) + 0x18));
        spB8 = temp_f14 - var_f20;
        spC4 = (*(s32 *)((char *)(arg0) + 0x18)) - (*(s32 *)((char *)(temp_s2) + 0x1C));
        sp90 = 0.0f;
        sp8C = (temp_f2_2 - spE8) * D_800BE9A8;
        sp6C = temp_v0_2;
        sp94 = ((*(s32 *)((char *)(arg0) + 0x18)) - spE4) * D_800BE9A8;
        var_f18 = temp_f4 * temp_f12;
        sp60 = spC0 * temp_f12;
        sp5C = spC4 * temp_f12;
        sp58 = spB8 * temp_f12;
        do {
            temp_s0_2 = ((*(s32 *)((char *)(arg0) + 0x2E)) * 0x24) + temp_s4;
            (*(s32 *)((char *)(temp_s0_2) + 0x0)) = spAC;
            (*(s32 *)((char *)(temp_s0_2) + 0x4)) = spB0;
            (*(s32 *)((char *)(temp_s0_2) + 0x8)) = spB4;
            (*(f32 *)((char *)(temp_s0_2) + 0xC)) = (f32) (*(f32 *)((char *)&(sp8C) + 0x0));
            (*(f32 *)((char *)(temp_s0_2) + 0x10)) = (f32) (*(f32 *)((char *)&(sp8C) + 0x4));
            (*(f32 *)((char *)(temp_s0_2) + 0x14)) = (f32) (*(f32 *)((char *)&(sp8C) + 0x8));
            (*(s32 *)((char *)(temp_s0_2) + 0x18)) = var_f20;
            (*(u8 *)((char *)(temp_s0_2) + 0x21)) = (u8) (*(u8 *)((char *)(temp_s2) + 0x7));
            (*(s16 *)((char *)(temp_s0_2) + 0x1C)) = (s16) (*(s16 *)((char *)(temp_s2) + 0x42));
            (*(s16 *)((char *)(temp_s0_2) + 0x1E)) = (s16) (*(s16 *)((char *)(temp_s2) + 0x44));
            sp64 = var_f18;
            spC8 = var_f16;
            spCC = var_f0;
            (*(u8 *)((char *)(temp_s2) + 0x7)) = (u8) ((*(u8 *)((char *)(temp_s2) + 0x7)) + (*(u8 *)((char *)(temp_s2) + 0x48)) + (random_u32() % (u32) ((*(u8 *)((char *)(temp_s2) + 0x4A)) + 1)));
            (*(s32 *)((char *)(temp_s0_2) + 0x20)) = 0xFF;
            (*(f32 *)((char *)(temp_s0_2) + 0x10)) = (f32) ((*(f32 *)((char *)(temp_s0_2) + 0x10)) + ((*(f32 *)((char *)(temp_s2) + 0x24)) * var_f0));
            (*(f32 *)((char *)(temp_s0_2) + 0x0)) = (f32) ((*(f32 *)((char *)(temp_s0_2) + 0x0)) + ((*(f32 *)((char *)(temp_s0_2) + 0xC)) * var_f0));
            temp_f4_2 = (*(s32 *)((char *)(temp_s0_2) + 0x14)) * var_f0;
            (*(f32 *)((char *)(temp_s0_2) + 0x4)) = (f32) ((*(f32 *)((char *)(temp_s0_2) + 0x4)) + ((*(f32 *)((char *)(temp_s0_2) + 0x10)) * var_f0));
            var_f0 -= var_f16;
            (*(f32 *)((char *)(temp_s0_2) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s0_2) + 0x8)) + temp_f4_2);
            (*(s8 *)((char *)(arg0) + 0x2E)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2E)) + 1);
            if ((*(s32 *)((char *)(arg0) + 0x25)) == (*(s32 *)((char *)(arg0) + 0x2E))) {
                (*(s32 *)((char *)(arg0) + 0x2E)) = 0;
            }
            temp_v1 = (*(s32 *)((char *)(arg0) + 0x2D));
            (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2C)) + 1);
            if (temp_v1 == (*(s32 *)((char *)(arg0) + 0x2E))) {
                (*(s8 *)((char *)(arg0) + 0x2D)) = (s8) (temp_v1 + 1);
                if ((*(s32 *)((char *)(arg0) + 0x25)) == (*(s32 *)((char *)(arg0) + 0x2D))) {
                    (*(s32 *)((char *)(arg0) + 0x2D)) = 0;
                }
                (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2C)) - 1);
            }
            spAC += var_f18;
            spB0 += sp60;
            var_f20 += sp58;
            spB4 += sp5C;
            (*(f32 *)((char *)(temp_s2) + 0x2C)) = (f32) ((*(f32 *)((char *)(temp_s2) + 0x2C)) - 1.0f);
        } while ((*(s32 *)((char *)(temp_s2) + 0x2C)) > 1.0f);
        (*(s32 *)((char *)(sp6C) + 0x0)) = (void *) (*(s32 *)((char *)&(spAC) + 0x0));
        (*(s32 *)((char *)(sp6C) + 0x4)) = (s32) (*(s32 *)((char *)&(spAC) + 0x4));
        (*(s32 *)((char *)(sp6C) + 0x8)) = (s32) (*(s32 *)((char *)&(spAC) + 0x8));
        (*(s32 *)((char *)(temp_s2) + 0x20)) = var_f0;
    }
    temp_a1_2 = (*(s32 *)((char *)(temp_s2) + 0x0));
    var_v1 = (*(s32 *)((char *)(arg0) + 0x2E));
    var_f14 = (*(s32 *)((char *)(temp_a1_2) + 0x14));
    if (var_v1 != (*(s32 *)((char *)(arg0) + 0x2D))) {
        do {
            var_v1 -= 1;
            if (var_v1 < 0) {
                var_v1 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
            }
            temp_v0_3 = (var_v1 * 0x24) + temp_s4;
            (*(f32 *)((char *)(temp_v0_3) + 0x0)) = (f32) ((*(f32 *)((char *)(temp_v0_3) + 0x0)) + (var_f14 - (*(f32 *)((char *)(temp_s2) + 0x50))));
            (*(f32 *)((char *)(temp_v0_3) + 0x4)) = (f32) ((*(f32 *)((char *)(temp_v0_3) + 0x4)) + ((*(f32 *)((char *)(temp_a1_2) + 0x18)) - (*(f32 *)((char *)(temp_s2) + 0x54))));
            (*(f32 *)((char *)(temp_v0_3) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_v0_3) + 0x8)) + ((*(f32 *)((char *)(temp_a1_2) + 0x1C)) - (*(f32 *)((char *)(temp_s2) + 0x58))));
        } while (var_v1 != (*(s32 *)((char *)(arg0) + 0x2D)));
        var_f14 = (*(s32 *)((char *)((*(s32 *)((char *)(temp_s2) + 0x0))) + 0x14));
    }
    (*(s32 *)((char *)(temp_s2) + 0x50)) = var_f14;
    (*(f32 *)((char *)(temp_s2) + 0x54)) = (f32) (*(f32 *)((char *)((*(s32 *)((char *)(temp_s2) + 0x0))) + 0x18));
    (*(f32 *)((char *)(temp_s2) + 0x58)) = (f32) (*(f32 *)((char *)((*(s32 *)((char *)(temp_s2) + 0x0))) + 0x1C));
    return 1;
}

void *func_1519D9F4(void *arg0, void *arg1, s32 arg2) {
    void **spC4;
    void *spC0;
    f32 spB0;
    f32 spA4;
    s32 spA0;
    s8 sp9B;
    s8 sp9A;
    s16 sp98;
    s8 sp95;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 *sp64;
    f32 *sp5C;
    f32 *var_t4;
    f32 *var_t5;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 var_f12;
    f32 var_f14;
    f32 var_f16;
    f32 var_f18;
    f32 var_f2;
    s16 temp_v0;
    s16 temp_v1_3;
    s16 var_a2_2;
    s16 var_t2;
    s32 temp_a0;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_s2;
    s32 temp_t9;
    s32 temp_t9_2;
    s32 var_a0_2;
    s32 var_a2;
    s32 var_t0;
    s32 var_v0_2;
    s8 var_v0;
    s8 var_v1;
    u8 temp_a1;
    u8 var_a0;
    u8 var_a1;
    u8 var_t1;
    u8 var_t3;
    void **temp_t7;
    void **temp_t8;
    void **temp_t9_3;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_t0;
    void *temp_t7_2;
    void *temp_v0_2;
    void *temp_v1;
    void *temp_v1_2;
    void *var_s0;
    void *var_v0_3;

    f32 spA8;
    f32 spAC;
    f32 spB4;
    f32 spB8;
    var_s0 = arg1;
    if ((*(s32 *)((char *)(arg0) + 0x2C)) >= 2) {
        func_151D5D60((char *)(arg0) + 0x84, arg2, ((*(s32 *)((char *)(arg0) + 0x25)) << 5) + 0xA0, &spC4, 0);
        if (spC4 != NULL) {
            temp_t0 = (*(s32 *)((char *)(arg0) + 0x98));
            temp_s2 = (*(s32 *)((char *)(arg0) + 0x94));
            sp95 = 1;
            var_v1 = 0;
            if ((*(s32 *)((char *)(temp_t0) + 0x6)) & 2) {
                var_a0 = (*(s32 *)((char *)(temp_t0) + 0x5C));
                var_v0 = (*(s32 *)((char *)(arg0) + 0x2D));
loop_4:
                temp_lo = var_v0 * 0x24;
                var_v0 += 1;
                (*(s32 *)((char *)((temp_s2 + temp_lo)) + 0x20)) = var_v1;
                var_v1 = (var_v1 + (*(s32 *)((char *)(temp_t0) + 0x5D))) & 0xFF;
                if (var_v0 == (*(s32 *)((char *)(arg0) + 0x25))) {
                    var_v0 = 0;
                }
                var_a0 = (u8) (s16) (var_a0 - 1);
                if ((var_a0 != 0) && (var_v0 != (*(s32 *)((char *)(arg0) + 0x2E)))) {
                    goto loop_4;
                }
            }
            if ((*(s32 *)((char *)(temp_t0) + 0x6)) & 4) {
                var_a2 = 0;
                var_a1 = (*(s32 *)((char *)(temp_t0) + 0x5E));
                var_v0_2 = (*(s32 *)((char *)(arg0) + 0x2E)) - 1;
                if (var_v0_2 < 0) {
                    var_v0_2 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                }
loop_12:
                temp_lo_2 = var_v0_2 * 0x24;
                var_v0_2 -= 1;
                temp_v1 = temp_s2 + temp_lo_2;
                (*(u8 *)((char *)(temp_v1) + 0x20)) = (u8) ((s32) ((*(u8 *)((char *)(temp_v1) + 0x20)) * var_a2) >> 8);
                var_a1 = (u8) (s16) (var_a1 - 1);
                var_a2 = (var_a2 + (*(s32 *)((char *)(temp_t0) + 0x5F))) & 0xFF;
                if (var_v0_2 < 0) {
                    var_v0_2 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                }
                if ((var_a1 != 0) && (var_v0_2 != (*(s32 *)((char *)(arg0) + 0x2E)))) {
                    goto loop_12;
                }
            }
            spC0 = temp_t0;
            temp_a1 = (*(s32 *)((char *)(spC0) + 0x40));
            var_s0 = func_15142FBC(func_15142B7C(func_1513F4E4(func_15142C10(func_15142E24(var_s0, &D_80090CD4, 0, 0, 0, 0, 0x1F, 0, 0, &sp95, 3), temp_a1, temp_a1, temp_a1, 0xFF, &sp95), 6, &sp95), 1, 0x160600), D_800D2C9C | 0x80000 | 0x2CA0, 0x5049D8, &sp95);
            if ((*(s32 *)((char *)(arg0) + 0x1E)) & 2) {
                var_t0 = (*(s32 *)((char *)(arg0) + 0x2E)) - 1;
                if (var_t0 < 0) {
                    var_t0 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                }
                (*(s32 *)((char *)&(spA4) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x10));
                (*(s32 *)((char *)&(spA4) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x14));
                (*(s32 *)((char *)&(spA4) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x18));
                temp_t9 = arg2 * 4;
                var_v0_3 = temp_s2 + (var_t0 * 0x24);
                var_t4 = temp_t9 + D_800DD1E8;
                var_f14 = *var_t4;
                temp_f0 = (*(s32 *)((char *)(var_v0_3) + 0x18));
                var_t5 = temp_t9 + D_800DD1D8;
                var_f16 = *var_t5;
                var_f18 = var_f14 * temp_f0;
                var_t3 = (*(s32 *)((char *)(var_v0_3) + 0x21));
                sp88 = var_f16 * temp_f0;
                var_a2_2 = (s16) ((s32) ((*(s16 *)((char *)(var_v0_3) + 0x20)) * (*(s16 *)((char *)(var_v0_3) + 0x1C))) >> 8);
            } else {
                var_a0_2 = (*(s32 *)((char *)(arg0) + 0x2E)) - 1;
                if (var_a0_2 < 0) {
                    var_a0_2 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                }
                var_t0 = var_a0_2 - 1;
                if (var_t0 < 0) {
                    var_t0 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                }
                temp_v1_2 = temp_s2 + (var_a0_2 * 0x24);
                (*(s32 *)((char *)&(spA4) + 0x0)) = (*(s32 *)((char *)(temp_v1_2) + 0x0));
                (*(s32 *)((char *)&(spA4) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v1_2) + 0x4));
                (*(s32 *)((char *)&(spA4) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v1_2) + 0x8));
                temp_f0_2 = (*(s32 *)((char *)(temp_v1_2) + 0x18));
                temp_t9_2 = arg2 * 4;
                var_t4 = temp_t9_2 + D_800DD1E8;
                var_f14 = *var_t4;
                var_t5 = temp_t9_2 + D_800DD1D8;
                var_f16 = *var_t5;
                var_f18 = var_f14 * temp_f0_2;
                var_t3 = (*(s32 *)((char *)(temp_v1_2) + 0x21));
                sp88 = var_f16 * temp_f0_2;
                var_v0_3 = temp_s2 + (var_t0 * 0x24);
                var_a2_2 = (s16) ((s32) ((*(s16 *)((char *)(temp_v1_2) + 0x20)) * (*(s16 *)((char *)(temp_v1_2) + 0x1C))) >> 8);
            }
            (*(s32 *)((char *)&(spB0) + 0x0)) = (*(s32 *)((char *)(var_v0_3) + 0x0));
            (*(s32 *)((char *)&(spB0) + 0x4)) = (s32) (*(s32 *)((char *)(var_v0_3) + 0x4));
            (*(s32 *)((char *)&(spB0) + 0x8)) = (s32) (*(s32 *)((char *)(var_v0_3) + 0x8));
            temp_f0_3 = (*(s32 *)((char *)(var_v0_3) + 0x18));
            var_t1 = (*(s32 *)((char *)(var_v0_3) + 0x21));
            temp_v0 = var_t3 << 6;
            var_f2 = var_f14 * temp_f0_3;
            var_f12 = var_f16 * temp_f0_3;
            var_t2 = (s16) ((s32) ((*(s16 *)((char *)(var_v0_3) + 0x20)) * (*(s16 *)((char *)(var_v0_3) + 0x1C))) >> 8);
            (*(s16 *)((char *)(spC4) + 0x0)) = (s16) (s32) (spA4 + var_f18);
            (*(s16 *)((char *)(spC4) + 0x2)) = (s16) (s32) spA8;
            (*(s16 *)((char *)(spC4) + 0x4)) = (s16) (s32) (spAC - sp88);
            (*(s32 *)((char *)(spC4) + 0x8)) = temp_v0;
            (*(s32 *)((char *)(spC4) + 0xA)) = 0x7C0;
            (*(s32 *)((char *)(spC4) + 0xC)) = 0xFF;
            (*(s32 *)((char *)(spC4) + 0xD)) = 0xFF;
            (*(s32 *)((char *)(spC4) + 0xE)) = 0xFF;
            (*(s8 *)((char *)(spC4) + 0xF)) = (s8) var_a2_2;
            (*(s32 *)((char *)(spC4) + 0x6)) = 0;
            temp_t9_3 = (char *)(spC4) + 0x10;
            spC4 = temp_t9_3;
            (*(s16 *)((char *)(spC4) + 0x10)) = (s16) (s32) (spA4 - var_f18);
            (*(s16 *)((char *)(spC4) + 0x2)) = (s16) (s32) spA8;
            (*(s16 *)((char *)(spC4) + 0x4)) = (s16) (s32) (spAC + sp88);
            (*(s32 *)((char *)(spC4) + 0x8)) = temp_v0;
            (*(s32 *)((char *)(temp_t9_3) + 0xA)) = 0;
            (*(s32 *)((char *)(spC4) + 0xC)) = 0xFF;
            (*(s32 *)((char *)(spC4) + 0xD)) = 0xFF;
            (*(s32 *)((char *)(spC4) + 0xE)) = 0xFF;
            (*(s8 *)((char *)(temp_t9_3) + 0xF)) = (s8) var_a2_2;
            (*(s32 *)((char *)(spC4) + 0x6)) = 0;
            spC4 = (char *)(spC4) + 0x10;
            do {
                temp_v1_3 = var_t1 << 6;
                (*(s16 *)((char *)(spC4) + 0x0)) = (s16) (s32) (spB0 + var_f2);
                (*(s16 *)((char *)(spC4) + 0x2)) = (s16) (s32) spB4;
                (*(s16 *)((char *)(spC4) + 0x4)) = (s16) (s32) (spB8 - var_f12);
                (*(s32 *)((char *)(spC4) + 0x8)) = temp_v1_3;
                (*(s32 *)((char *)(spC4) + 0xA)) = 0x7C0;
                (*(s32 *)((char *)(spC4) + 0xC)) = 0xFF;
                (*(s32 *)((char *)(spC4) + 0xD)) = 0xFF;
                (*(s32 *)((char *)(spC4) + 0xE)) = 0xFF;
                (*(s8 *)((char *)(spC4) + 0xF)) = (s8) var_t2;
                (*(s32 *)((char *)(spC4) + 0x6)) = 0;
                temp_t7 = (char *)(spC4) + 0x10;
                spC4 = temp_t7;
                (*(s16 *)((char *)(spC4) + 0x10)) = (s16) (s32) (spB0 - var_f2);
                (*(s16 *)((char *)(spC4) + 0x2)) = (s16) (s32) spB4;
                (*(s16 *)((char *)(spC4) + 0x4)) = (s16) (s32) (spB8 + var_f12);
                (*(s32 *)((char *)(spC4) + 0x8)) = temp_v1_3;
                (*(s32 *)((char *)(temp_t7) + 0xA)) = 0;
                (*(s32 *)((char *)(spC4) + 0xC)) = 0xFF;
                (*(s32 *)((char *)(spC4) + 0xD)) = 0xFF;
                (*(s32 *)((char *)(spC4) + 0xE)) = 0xFF;
                (*(s8 *)((char *)(temp_t7) + 0xF)) = (s8) var_t2;
                (*(s32 *)((char *)(spC4) + 0x6)) = 0;
                spC4 = (char *)(spC4) + 0x10;
                (*(s32 *)((char *)(var_s0) + 0x0)) = 0x01004008;
                temp_s0 = (char *)(var_s0) + 8;
                (*(s32 *)((char *)(var_s0) + 0x4)) = (void **) ((char *)(spC4) - 0x40);
                (*(s32 *)((char *)(var_s0) + 0x8)) = 0x05000204;
                (*(s32 *)((char *)(temp_s0) + 0x4)) = 0;
                temp_s0_2 = (char *)(temp_s0) + 8;
                (*(s32 *)((char *)(temp_s0) + 0x8)) = 0x05020604;
                (*(s32 *)((char *)(temp_s0_2) + 0x4)) = 0;
                var_s0 = (char *)(temp_s0_2) + 8;
                if ((s32) var_t3 < (s32) var_t1) {
                    spA0 = var_t0;
                    sp9B = (s8) var_t1;
                    sp98 = var_t2;
                    sp9A = (s8) var_t3;
                    sp64 = var_t4;
                    sp5C = var_t5;
                    sp8C = var_f2;
                    sp90 = var_f12;
                    memcpy((*(void **)&var_f12), spC4, (char *)(spC4) - 0x20, 0x20, 0xFF);
                    var_t1 = (u8) sp9B;
                    var_t3 = (u8) sp9A;
                    (*(s16 *)((char *)(spC4) - 0x18)) = (s16) ((*(s16 *)((char *)(spC4) - 0x18)) - 0x4000);
                    temp_t8 = (char *)(spC4) + 0x10;
                    spC4 = temp_t8;
                    (*(s16 *)((char *)(temp_t8) - 0x18)) = (s16) ((*(s16 *)((char *)(temp_t8) - 0x18)) - 0x4000);
                    spC4 = (char *)(spC4) + 0x10;
                }
                temp_a0 = var_t0;
                var_t0 -= 1;
                if (var_t0 < 0) {
                    var_t0 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                }
                if (temp_a0 != (*(s32 *)((char *)(arg0) + 0x2D))) {
                    var_t3 = var_t1 & 0xFF;
                    temp_t7_2 = temp_s2 + (temp_a0 * 0x24);
                    (*(s32 *)((char *)&(spA4) + 0x0)) = (*(s32 *)((char *)(temp_t7_2) + 0x0));
                    (*(s32 *)((char *)&(spA4) + 0x4)) = (s32) (*(s32 *)((char *)(temp_t7_2) + 0x4));
                    temp_v0_2 = temp_s2 + (var_t0 * 0x24);
                    (*(s32 *)((char *)&(spA4) + 0x8)) = (s32) (*(s32 *)((char *)(temp_t7_2) + 0x8));
                    (*(s32 *)((char *)&(spB0) + 0x0)) = (*(s32 *)((char *)(temp_v0_2) + 0x0));
                    (*(s32 *)((char *)&(spB0) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v0_2) + 0x4));
                    (*(s32 *)((char *)&(spB0) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v0_2) + 0x8));
                    temp_f0_4 = (*(s32 *)((char *)(temp_v0_2) + 0x18));
                    var_f2 = *var_t4 * temp_f0_4;
                    var_t1 = (*(s32 *)((char *)(temp_v0_2) + 0x21));
                    var_f12 = *var_t5 * temp_f0_4;
                    var_t2 = (s16) ((s32) ((*(s16 *)((char *)(temp_v0_2) + 0x20)) * (*(s16 *)((char *)(temp_v0_2) + 0x1C))) >> 8);
                }
            } while (temp_a0 != (*(s32 *)((char *)(arg0) + 0x2D)));
        }
    }
    return var_s0;
}

void func_1519E1F4(void *arg0, void *arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_t6;
    s32 temp_v1;
    void *temp_v0;

    temp_t6 = arg2 & 0xFF;
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x98));
    if (temp_t6 == 0) {
        if (((*(s32 *)((char *)(temp_v0) + 0x0)) == (*(s32 *)((char *)(arg1) + 0x0))) || ((*(s32 *)((char *)(temp_v0) + 0x4)) == (*(s32 *)((char *)(arg1) + 0x4)))) {
            func_1519CFA0((void *) temp_t6);
        }
    } else if (temp_t6 == 6) {
        if ((u8) (*(u8 *)((char *)(arg1) + 0x0)) == (*(u8 *)((char *)(temp_v0) + 0x4C))) {
            func_1519CFA0((void *) temp_t6);
        }
    } else if (temp_t6 == 7) {
        if (((*(s32 *)((char *)(temp_v0) + 0x0)) == (*(s32 *)((char *)(arg1) + 0x0))) || ((*(s32 *)((char *)(temp_v0) + 0x4)) == (*(s32 *)((char *)(arg1) + 0x4)))) {
            func_1519CFA0((void *) temp_t6);
        }
    } else if (temp_t6 == 0x2D) {
        temp_a0 = (*(s32 *)((char *)(arg1) + 0x0));
        temp_v1 = (*(s32 *)((char *)(temp_v0) + 0x0));
        if (temp_a0 == temp_v1) {
            (*(s32 *)((char *)(temp_v0) + 0x0)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
            (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x9));
            return;
        }
        if ((s32) (*(s32 *)((char *)(arg1) + 0x4)) == temp_v1) {
            (*(s32 *)((char *)(temp_v0) + 0x0)) = temp_a0;
            (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x8));
        }
    }
}

s32 func_1519E304(void **arg0, void * *arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    f32 sp1C;
    s32 temp_v0;

    f32 sp20;
    f32 sp24;
    temp_v0 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x0))) + 0x1D4));
    if (temp_v0 == 0) {
        return 0;
    }
    func_15143134(arg2, arg3, (char *)(arg0) + 8, &sp1C, temp_v0 + ((*(s32 *)((char *)(arg0) + 0x5)) << 6), arg0);
    (*(f32 *)((char *)(arg1) + 0x0)) = (f32) (((sp1C - arg2) * arg5) + arg2);
    (*(f32 *)((char *)(arg1) + 0x4)) = (f32) (((sp20 - arg3) * arg5) + arg3);
    (*(f32 *)((char *)(arg1) + 0x8)) = (f32) (((sp24 - arg4) * arg5) + arg4);
    return 1;
}

void func_1519E3BC(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_1519E688();
    func_1519D030(arg0, 3, 0x12C, 0, (u8) (s32) arg2, arg3);
    func_1519D030(arg0, 4, 0x12C, 0, (u8) (s32) arg2, arg3);
    func_151491F4(arg1, 6, -1, 1, 3, 0, (s32) arg2, arg3);
}

void func_1519E464(void *arg0) {
    u8 sp33;
    void *sp2C;
    void *sp28;
    s32 var_t0;
    void *temp_a0;
    void *temp_v0;
    void *temp_v1;

    var_t0 = 0;
    temp_v1 = (char *)(arg0) + 0x28;
    if ((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x28))) + 0x0)) == 0) {
        var_t0 = 1;
    }
    temp_a0 = (*(s32 *)((char *)(arg0) + 0x28));
    if ((*(s32 *)((char *)(temp_v1) + 0x4)) != (*(s32 *)((char *)(temp_a0) + 0x3B))) {
        var_t0 = 1;
    }
    if ((var_t0 == 0) && ((*(s32 *)((char *)(temp_a0) + 0x1D4)) != 0)) {
        sp33 = 1;
        sp28 = temp_v1;
        temp_v0 = func_1519D030(temp_a0, (s8) (*(s8 *)((char *)(temp_v1) + 0x8)), (*(s8 *)((char *)(arg0) + 0xE)), (*(s8 *)((char *)(arg0) + 0xD)) & 1, (u8) (s32) (*(s8 *)((char *)(arg0) + 0xC)), (s32) (*(s8 *)((char *)(arg0) + 0x1)));
        var_t0 = 1;
        if (temp_v0 != NULL) {
            sp33 = 1;
            sp2C = temp_v0;
            sp28 = temp_v1;
            var_t0 = 1;
            if (func_1514ED3C((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x28))) + 0x2F4)), arg0, 0) != 0) {
                sp33 = 1;
                func_1514EC1C(sp2C, (*(s32 *)((char *)(arg0) + 0x28)), 0x10, sp2C);
                var_t0 = 1;
            }
        }
    }
    if (var_t0 != 0) {
        (*(s32 *)((char *)(arg0) + 0xE)) = -1;
        (*(u8 *)((char *)(arg0) + 0xD)) = (u8) ((*(u8 *)((char *)(arg0) + 0xD)) | 1);
    }
}

void func_1519E570(void *arg0, void *arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_t6;
    s32 temp_v1;
    void *temp_v0;

    temp_t6 = arg2 & 0xFF;
    if (temp_t6 == 0) {
        if (((*(s32 *)((char *)(arg0) + 0x28)) == (*(s32 *)((char *)(arg1) + 0x0))) || ((*(s32 *)((char *)(((char *)(arg0) + 0x28)) + 0x4)) == (*(s32 *)((char *)(arg1) + 0x4)))) {
            func_1516972C(arg0, temp_t6, arg0);
        }
    } else {
        temp_v0 = (char *)(arg0) + 0x28;
        if (temp_t6 == 0x2D) {
            temp_a0 = (*(s32 *)((char *)(arg0) + 0x28));
            temp_v1 = (*(s32 *)((char *)(arg1) + 0x0));
            if (temp_v1 == temp_a0) {
                (*(s32 *)((char *)(arg0) + 0x28)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
                (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x9));
                return;
            }
            if ((s32) (*(s32 *)((char *)(arg1) + 0x4)) == temp_a0) {
                (*(s32 *)((char *)(arg0) + 0x28)) = temp_v1;
                (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x8));
            }
        }
    }
}

void func_1519E61C(void * arg1, s32 arg2) {
    s32 temp_t6;

    temp_t6 = arg2 & 0xFF;
    if ((temp_t6 == 0) || (temp_t6 == 9)) {
        func_1516972C((void *) temp_t6);
    }
}

void func_1519E65C(s32 arg0) {
    func_1519CF70(3);
    func_1519CF70(4);
}

void func_1519E688(void) {
    func_1519CF70(3);
    func_1519CF70(4);
    func_15147D64(NULL, 9);
}

void func_1519E6BC(void *arg0) {
    s32 sp34;
    u8 sp30;
    void *sp2C;
    void *temp_v0;

    func_1519E688();
    if (D_800E0920 == NULL) {
        sp34 = 0;
        sp2C = arg0;
        sp30 = (*(s32 *)((char *)(arg0) + 0x3B));
        temp_v0 = func_151491F4(0x12C, -1, 9, 0, 4, 0xC, 0xFF, 0);
        D_800E0920 = temp_v0;
        if (temp_v0 != NULL) {
            memcpy((char *)(temp_v0) + 0x28, &sp2C, 0xC);
        }
    }
}

void func_1519E754(void *arg0) {
    u8 sp23;
    s32 temp_t2;
    s32 var_v1;
    void *temp_a0;
    void *temp_v0;

    var_v1 = 0;
    temp_v0 = (char *)(arg0) + 0x28;
    if ((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x28))) + 0x0)) == 0) {
        var_v1 = 1;
    }
    temp_a0 = (*(s32 *)((char *)(arg0) + 0x28));
    if ((*(s32 *)((char *)(temp_v0) + 0x4)) != (*(s32 *)((char *)(temp_a0) + 0x3B))) {
        var_v1 = 1;
    }
    if (var_v1 == 0) {
        temp_t2 = (*(s32 *)((char *)(temp_v0) + 0x8)) + D_800BE9E4;
        (*(s32 *)((char *)(temp_v0) + 0x8)) = temp_t2;
        if ((*(s32 *)((char *)(temp_a0) + 0x84)) != 0x7C) {
            var_v1 = 1;
            if (temp_t2 >= 0xC9) {
                sp23 = 1;
                func_1519E3BC(temp_a0, 0x12C, (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
                var_v1 = 1;
            }
        }
    }
    if (var_v1 != 0) {
        D_800E0920 = NULL;
        (*(s32 *)((char *)(arg0) + 0xE)) = -1;
        (*(u8 *)((char *)(arg0) + 0xD)) = (u8) ((*(u8 *)((char *)(arg0) + 0xD)) | 1);
    }
}

void func_1519E818(void *arg0, void *arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_t6;
    s32 temp_v1;
    void *temp_v0;

    temp_t6 = arg2 & 0xFF;
    if (temp_t6 == 0) {
        if (((*(s32 *)((char *)(arg0) + 0x28)) == (*(s32 *)((char *)(arg1) + 0x0))) || ((*(s32 *)((char *)(((char *)(arg0) + 0x28)) + 0x4)) == (*(s32 *)((char *)(arg1) + 0x4)))) {
            func_1516972C(arg0, temp_t6, arg0);
            D_800E0920 = NULL;
        }
    } else {
        temp_v0 = (char *)(arg0) + 0x28;
        if (temp_t6 == 0x2D) {
            temp_a0 = (*(s32 *)((char *)(arg0) + 0x28));
            temp_v1 = (*(s32 *)((char *)(arg1) + 0x0));
            if (temp_v1 == temp_a0) {
                (*(s32 *)((char *)(arg0) + 0x28)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
                (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x9));
                return;
            }
            if ((s32) (*(s32 *)((char *)(arg1) + 0x4)) == temp_a0) {
                (*(s32 *)((char *)(arg0) + 0x28)) = temp_v1;
                (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x8));
            }
        }
    }
}

void func_1519E8CC(void *arg0) {
    func_1514EDF0((*(s32 *)((char *)(arg0) + 0x28)));
    func_1514933C(arg0);
}

void func_1519E8F8(void *arg0) {
    func_1514EDF0((*(s32 *)((char *)(arg0) + 0x28)));
    func_15149368(arg0);
}

void func_1519E924(void) {
    D_800E0920 = NULL;
    func_1514933C();
}

void func_1519E948(void) {
    D_800E0920 = NULL;
    func_15149368();
}
