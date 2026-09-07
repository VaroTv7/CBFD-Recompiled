/**
 * Auto-decompiled from asm/1DF510.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_1513F4E4();                    /* extern */
s32 func_15142B7C();                    /* extern */
s32 func_15142C10();         /* extern */
s32 func_15142CF0(); /* extern */
s32 func_15142E24(); /* extern */
void *func_15142FBC();           /* extern */
void * func_15143134();                /* extern */
s32 func_151B30B0();              /* extern */
void * func_151B47D8();                       /* extern */
void * func_151D5D60();      /* extern */
void * memcpy();                          /* extern */
void func_151B222C();                     /* static */
u8 func_151B22F4();               /* static */
void func_151B2348();                     /* static */
void func_151B2690();                     /* static */
extern s32 D_80090DE8;
extern s32 D_800A4AC8;
extern s32 D_800AA320;
extern s32 D_800AA32C;
extern s32 D_800AA338;
extern s32 D_800AA344;
extern s32 D_800AA350;
extern s32 D_800AA35C;
extern s32 D_800AA368;
extern s32 D_800AA374;
extern f32 D_800AA380;
extern f32 D_800AA384;
extern f32 D_800AA388;
extern f32 D_800AA38C;
extern s32 D_800D2C9C;
void func_151B220C();

void func_151B2060(void *arg0) {
    s32 sp48;
    void * sp3C;
    s8 sp39;
    s8 sp38;
    s32 sp34;
    u8 sp30;
    void *sp2C;
    s32 temp_v0;

    if (arg0 != NULL) {
        sp2C = arg0;
        sp30 = (*(s32 *)((char *)(arg0) + 0x3B));
        sp34 = func_15083E90(1, arg0);
        sp38 = 1;
        sp39 = 0;
        bzero(&sp3C, 0xC);
        sp48 = 0;
        temp_v0 = func_151491F4(0x12C, -1, 0x16, 0, 0x12, 0x20, 0xFF, 1);
        if (temp_v0 != 0) {
            memcpy(temp_v0 + 0x28, &sp2C, 0x20);
        }
    }
}

void func_151B2100(void *arg0) {
    u8 sp2B;
    void *sp24;
    u8 temp_v0_2;
    u8 var_v0;
    void *temp_a1;
    void *temp_v0;
    void *temp_v1;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x28));
    temp_a1 = (*(s32 *)((char *)(arg0) + 0x30));
    if (((*(s32 *)((char *)(temp_v0) + 0x0)) == 0) || (temp_v1 = (char *)(arg0) + 0x28, ((*(s32 *)((char *)(temp_v0) + 0x4)) == 0xFF)) || ((*(s32 *)((char *)(temp_v1) + 0x4)) != (*(s32 *)((char *)(temp_v0) + 0x3B))) || ((*(s32 *)((char *)(temp_a1) + 0x0)) == 0) || ((*(s32 *)((char *)(temp_a1) + 0x4)) == 0xFF) || ((*(s32 *)((char *)(temp_v1) + 0xC)) != (*(s32 *)((char *)(temp_a1) + 0x3B)))) {
        (*(s32 *)((char *)(arg0) + 0xE)) = -1;
        return;
    }
    sp24 = temp_v1;
    sp2B = (*(s32 *)((char *)(temp_v1) + 0xD));
    temp_v0_2 = func_151B22F4(arg0, temp_a1);
    (*(s32 *)((char *)(temp_v1) + 0xD)) = temp_v0_2;
    if (sp2B != (temp_v0_2 & 0xFF)) {
        sp24 = temp_v1;
        func_151B222C(arg0);
        var_v0 = (*(s32 *)((char *)(temp_v1) + 0xD));
        if (var_v0 == 1) {
            sp24 = temp_v1;
            func_151B2348(arg0);
            var_v0 = (*(s32 *)((char *)(temp_v1) + 0xD));
        }
        if ((var_v0 == 2) || (var_v0 == 0)) {
            func_151B2690(arg0);
        }
    }
}

void func_151B220C(void) {
    func_151B222C();
}

void func_151B222C(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_t8;
    s32 var_s0;
    void *temp_s1;

    var_s0 = 0;
    temp_s1 = (char *)(arg0) + 0x28;
    do {
        temp_a0 = (*(s32 *)((char *)(((char *)(temp_s1) + (var_s0 * 4))) + 0x10));
        if (temp_a0 != 0) {
            func_1516972C(temp_a0);
        }
        temp_t8 = (var_s0 + 1) & 0xFF;
        var_s0 = temp_t8;
    } while (temp_t8 < 3);
    temp_a0_2 = (*(s32 *)((char *)(temp_s1) + 0x1C));
    if (temp_a0_2 != 0) {
        func_1516972C(temp_a0_2);
    }
}

void func_151B229C(void *arg0) {
    func_151B220C();
    func_1514933C(arg0);
}

void func_151B22C8(void *arg0) {
    func_151B220C();
    func_15149368(arg0);
}

u8 func_151B22F4(void *arg0) {
    void *temp_v1;

    temp_v1 = (*(s32 *)((char *)(arg0) + 0x30));
    if (((((s32) ((char *)((*(s32 *)((char *)(arg0) + 0x28))) - (char *)(&gObjects)) / 812) + 1) == (*(s32 *)((char *)(temp_v1) + 0x65))) && ((*(s32 *)((char *)(temp_v1) + 0x5C)) == 1)) {
        return 1U;
    }
    return 2U;
}

void func_151B2348(void *arg0) {
    s8 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    s8 sp88;
    f32 sp84;
    s8 sp82;
    s8 sp81;
    s8 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    s16 sp66;
    s8 sp64;
    s8 sp60;
    void *sp5C;
    void * sp50;
    s8 sp4D;
    u8 sp4C;
    void *sp48;
    void * sp3C;
    s8 sp39;
    u8 sp38;
    void *sp34;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    void *temp_s0;
    void *temp_s1;
    void *temp_s2;

    temp_s0 = (*(s32 *)((char *)(arg0) + 0x30));
    temp_s1 = (*(s32 *)((char *)(arg0) + 0x28));
    sp60 = 2;
    sp5C = arg0;
    sp34 = temp_s0;
    sp39 = 5;
    sp38 = (*(s32 *)((char *)(temp_s0) + 0x3B));
    (*(s32 *)((char *)&(sp3C) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800AA350) + 0x0));
    (*(s32 *)((char *)&(sp3C) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800AA350) + 0x4));
    (*(s32 *)((char *)&(sp3C) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800AA350) + 0x8));
    sp48 = temp_s0;
    sp4D = 0xA;
    sp4C = (*(s32 *)((char *)(temp_s0) + 0x3B));
    (*(s32 *)((char *)&(sp50) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800AA35C) + 0x0));
    (*(s32 *)((char *)&(sp50) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800AA35C) + 0x4));
    (*(s32 *)((char *)&(sp50) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800AA35C) + 0x8));
    sp98 = 0;
    sp64 = 0;
    sp66 = 0x3E8;
    sp68 = (*(s32 *)((char *)(temp_s0) + 0x14));
    sp6C = (*(s32 *)((char *)(temp_s0) + 0x18));
    sp70 = (*(s32 *)((char *)(temp_s0) + 0x1C));
    sp74 = (*(s32 *)((char *)(temp_s0) + 0x14));
    sp78 = (*(s32 *)((char *)(temp_s0) + 0x18));
    sp80 = 1;
    sp81 = 1;
    sp82 = 0;
    sp88 = 3;
    sp84 = 5.0f;
    sp8C = 80.0f;
    sp90 = D_800AA380;
    sp94 = D_800AA384;
    sp7C = (*(s32 *)((char *)(temp_s0) + 0x1C));
    temp_v0 = func_151B30B0(&sp64, 0x3AC49BA6, 0x30, 0xFF, 0);
    temp_s2 = (char *)(arg0) + 0x28;
    (*(s32 *)((char *)(temp_s2) + 0x18)) = temp_v0;
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x150, &sp34, 0x30);
    }
    sp60 = 1;
    sp34 = temp_s1;
    sp39 = 5;
    sp38 = (*(s32 *)((char *)(temp_s1) + 0x3B));
    (*(s32 *)((char *)&(sp3C) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800AA320) + 0x0));
    (*(s32 *)((char *)&(sp3C) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800AA320) + 0x4));
    (*(s32 *)((char *)&(sp3C) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800AA320) + 0x8));
    sp48 = temp_s0;
    sp4D = 5;
    sp4C = (*(s32 *)((char *)(temp_s0) + 0x3B));
    (*(s32 *)((char *)&(sp50) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800AA338) + 0x0));
    (*(s32 *)((char *)&(sp50) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800AA338) + 0x4));
    (*(s32 *)((char *)&(sp50) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800AA338) + 0x8));
    sp68 = (*(s32 *)((char *)(temp_s1) + 0x14));
    sp6C = (*(s32 *)((char *)(temp_s1) + 0x18));
    sp70 = (*(s32 *)((char *)(temp_s1) + 0x1C));
    sp74 = (*(s32 *)((char *)(temp_s0) + 0x14));
    sp78 = (*(s32 *)((char *)(temp_s0) + 0x18));
    sp82 = 0;
    sp8C = 170.0f;
    sp7C = (*(s32 *)((char *)(temp_s0) + 0x1C));
    temp_v0_2 = func_151B30B0(&sp64, 0x3AC49BA6, 0x30, 0xFF, 0);
    (*(s32 *)((char *)(temp_s2) + 0x14)) = temp_v0_2;
    if (temp_v0_2 != 0) {
        memcpy(temp_v0_2 + 0x150, &sp34, 0x30);
    }
    sp60 = 0;
    sp34 = temp_s1;
    sp39 = 5;
    sp38 = (*(s32 *)((char *)(temp_s1) + 0x3B));
    (*(s32 *)((char *)&(sp3C) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800AA32C) + 0x0));
    (*(s32 *)((char *)&(sp3C) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800AA32C) + 0x4));
    (*(s32 *)((char *)&(sp3C) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800AA32C) + 0x8));
    sp48 = temp_s0;
    sp4D = 0xA;
    sp4C = (*(s32 *)((char *)(temp_s0) + 0x3B));
    (*(s32 *)((char *)&(sp50) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800AA344) + 0x0));
    (*(s32 *)((char *)&(sp50) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800AA344) + 0x4));
    (*(s32 *)((char *)&(sp50) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800AA344) + 0x8));
    sp68 = (*(s32 *)((char *)(temp_s1) + 0x14));
    sp6C = (*(s32 *)((char *)(temp_s1) + 0x18));
    sp70 = (*(s32 *)((char *)(temp_s1) + 0x1C));
    sp74 = (*(s32 *)((char *)(temp_s0) + 0x14));
    sp78 = (*(s32 *)((char *)(temp_s0) + 0x18));
    sp82 = 0;
    sp7C = (*(s32 *)((char *)(temp_s0) + 0x1C));
    temp_v0_3 = func_151B30B0(&sp64, 0x3AC49BA6, 0x30, 0xFF, 0);
    (*(s32 *)((char *)(temp_s2) + 0x10)) = temp_v0_3;
    if (temp_v0_3 != 0) {
        memcpy(temp_v0_3 + 0x150, &sp34, 0x30);
    }
}

void func_151B2690(void *arg0) {
    s8 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    s8 spBC;
    f32 spB8;
    s8 spB6;
    s8 spB5;
    s8 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    s16 sp9A;
    s8 sp98;
    s8 sp94;
    void *sp90;
    void * sp84;
    s8 sp81;
    u8 sp80;
    void *sp7C;
    void * sp70;
    s8 sp6D;
    u8 sp6C;
    void *sp68;
    void *sp64;
    f32 sp60;
    void * sp54;
    void * sp48;
    s8 sp45;
    u8 sp44;
    void *sp40;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    void *temp_s0;
    void *temp_s1;

    temp_s0 = (*(s32 *)((char *)(arg0) + 0x28));
    sp90 = arg0;
    sp94 = 1;
    sp68 = temp_s0;
    sp6D = 5;
    sp6C = (*(s32 *)((char *)(temp_s0) + 0x3B));
    (*(s32 *)((char *)&(sp70) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800AA320) + 0x0));
    (*(s32 *)((char *)&(sp70) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800AA320) + 0x4));
    (*(s32 *)((char *)&(sp70) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800AA320) + 0x8));
    sp7C = temp_s0;
    sp81 = 2;
    sp80 = (*(s32 *)((char *)(temp_s0) + 0x3B));
    (*(s32 *)((char *)&(sp84) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800AA368) + 0x0));
    (*(s32 *)((char *)&(sp84) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800AA368) + 0x4));
    (*(s32 *)((char *)&(sp84) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800AA368) + 0x8));
    spCC = 0;
    sp98 = 0;
    sp9A = 0x64;
    sp9C = (*(s32 *)((char *)(temp_s0) + 0x14));
    spA0 = (*(s32 *)((char *)(temp_s0) + 0x18));
    spA4 = (*(s32 *)((char *)(temp_s0) + 0x1C));
    spA8 = (*(s32 *)((char *)(temp_s0) + 0x14));
    spAC = (*(s32 *)((char *)(temp_s0) + 0x18));
    spB4 = 1;
    spB5 = 1;
    spB6 = 1;
    spBC = 3;
    spB8 = 5.0f;
    spC0 = 180.0f;
    spC4 = D_800AA388;
    spC8 = D_800AA38C;
    spB0 = (*(s32 *)((char *)(temp_s0) + 0x1C));
    temp_v0 = func_151B30B0(&sp98, 0x3AC49BA6, 0x30, 0xFF, 0);
    temp_s1 = (char *)(arg0) + 0x28;
    (*(s32 *)((char *)(temp_s1) + 0x14)) = temp_v0;
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x150, &sp68, 0x30);
    }
    sp94 = 0;
    (*(s32 *)((char *)&(sp70) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800AA32C) + 0x0));
    (*(s32 *)((char *)&(sp70) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800AA32C) + 0x4));
    (*(s32 *)((char *)&(sp70) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800AA32C) + 0x8));
    (*(s32 *)((char *)&(sp84) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800AA374) + 0x0));
    (*(s32 *)((char *)&(sp84) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800AA374) + 0x4));
    (*(s32 *)((char *)&(sp84) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800AA374) + 0x8));
    spB6 = 1;
    temp_v0_2 = func_151B30B0(&sp98, 0x3AC49BA6, 0x30, 0xFF, 0);
    (*(s32 *)((char *)(temp_s1) + 0x10)) = temp_v0_2;
    if (temp_v0_2 != 0) {
        memcpy(temp_v0_2 + 0x150, &sp68, 0x30);
    }
    sp40 = temp_s0;
    sp45 = 2;
    sp44 = (*(s32 *)((char *)(temp_s0) + 0x3B));
    (*(s32 *)((char *)&(sp48) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800AA368) + 0x0));
    (*(s32 *)((char *)&(sp48) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800AA368) + 0x4));
    (*(s32 *)((char *)&(sp48) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800AA368) + 0x8));
    (*(s32 *)((char *)&(sp54) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800AA374) + 0x0));
    (*(s32 *)((char *)&(sp54) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800AA374) + 0x4));
    (*(s32 *)((char *)&(sp54) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800AA374) + 0x8));
    sp60 = 5.0f;
    sp64 = arg0;
    temp_v0_3 = func_15149130(0x12C, -1, -1, 0, 0, 0x13, 0x28, 0xFF, 1);
    (*(s32 *)((char *)(temp_s1) + 0x1C)) = temp_v0_3;
    if (temp_v0_3 != 0) {
        memcpy(temp_v0_3 + 0x28, &sp40, 0x28);
    }
}

void func_151B2950(void *arg0) {
    s32 temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x178));
    if (temp_v0 != 0) {
        (*(s32 *)((char *)((temp_v0 + ((*(s32 *)((char *)(arg0) + 0x17C)) * 4))) + 0x38)) = 0;
    }
}

void *func_151B2974(void *arg0, void *arg1, s32 arg2) {
    u8 spB3;
    s8 spB2;
    void *spAC;
    void *spA8;
    f32 sp8C;
    f32 sp80;
    f32 sp74;
    s32 sp64;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f6;
    f32 temp_f8;
    f32 var_f12;
    f32 var_f14;
    f32 var_f16;
    s32 temp_a2;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s1;
    void *temp_v0;
    void *var_s0;

    f32 sp78;
    f32 sp84;
    f32 sp7C;
    f32 sp88;
    var_s0 = arg0;
    spB3 = 0;
    if (((*(s32 *)((char *)((*(s32 *)((char *)(arg1) + 0x28))) + 0x0)) == 0) || ((*(s32 *)((char *)(((char *)(arg1) + 0x28)) + 0x4)) != (*(s32 *)((char *)((*(s32 *)((char *)(arg1) + 0x28))) + 0x3B)))) {
        spB3 = 1;
    }
    temp_s1 = (char *)(arg1) + 0x28;
    if ((spB3 == 0) && ((*(s32 *)((char *)((*(s32 *)((char *)(arg1) + 0x28))) + 0x1D4)) != 0)) {
        func_151D5D60((char *)(arg1) + 0x14, arg2, 0x40, &spAC, 0);
        if (spAC == NULL) {
            return var_s0;
        }
        temp_a2 = (*(s32 *)((char *)((*(s32 *)((char *)(arg1) + 0x28))) + 0x1D4)) + ((*(s32 *)((char *)(temp_s1) + 0x5)) << 6);
        sp64 = temp_a2;
        func_15143134((char *)(temp_s1) + 8, &sp80, temp_a2);
        func_15143134((char *)(temp_s1) + 0x14, &sp74, sp64);
        spB2 = 1;
        spA8 = (arg2 * 0x9A0) + D_800DBFF0 + 0x2F8;
        temp_v0 = func_15142FBC(func_1513F4E4(func_15142CF0(func_15142C10(func_15142E24(func_15142B7C(var_s0, 0x200005, 0x60600), &D_80090DE8, 0, 0, 0, 0, 0x36, 0, 0, &spB2, 3), 0xFF, 0xFF, 0xFF, 0xFF, &spB2), 0, 0, 0xFF, 0xFF, 0xFF, 0xFF, &spB2), 0x2B, &spB2), D_800D2C9C | 0x80000 | 0x2CA0, (*(s32 *)((char *)&(D_800A4AC8) + 0x2C)) | (*(s32 *)((char *)&(D_800A4AC8) + 0x28)), &spB2);
        temp_f0 = sp74 - sp80;
        temp_f14 = ((temp_f0 * 0.5f) + sp80) - (*(s32 *)((char *)(spA8) + 0x0));
        temp_f2 = sp78 - sp84;
        temp_f16 = ((temp_f2 * 0.5f) + sp84) - (*(s32 *)((char *)(spA8) + 0x4));
        temp_f12 = sp7C - sp88;
        temp_f18 = ((temp_f12 * 0.5f) + sp88) - (*(s32 *)((char *)(spA8) + 0x8));
        temp_f8 = (temp_f2 * temp_f18) - (temp_f16 * temp_f12);
        sp4C = temp_f8;
        temp_f6 = (temp_f12 * temp_f14) - (temp_f18 * temp_f0);
        sp48 = temp_f6;
        temp_f10 = (temp_f0 * temp_f16) - (temp_f14 * temp_f2);
        sp44 = temp_f10;
        sp40 = (temp_f8 * temp_f8) + (temp_f6 * temp_f6) + (temp_f10 * temp_f10);
        sp8C = sp40;
        if (sp40 == 0.0f) {
            var_f12 = 0.0f;
            var_f14 = 0.0f;
            var_f16 = 0.0f;
        } else {
            temp_f2_2 = (*(s32 *)((char *)(temp_s1) + 0x20)) / sqrtf(sp8C);
            var_f12 = sp4C * temp_f2_2;
            var_f14 = sp48 * temp_f2_2;
            var_f16 = sp44 * temp_f2_2;
        }
        (*(s16 *)((char *)(spAC) + 0x0)) = (s16) (s32) (sp74 + var_f12);
        (*(s16 *)((char *)(spAC) + 0x2)) = (s16) (s32) (sp78 + var_f14);
        (*(s16 *)((char *)(spAC) + 0x4)) = (s16) (s32) (sp7C + var_f16);
        (*(s32 *)((char *)(spAC) + 0x8)) = 0;
        (*(s32 *)((char *)(spAC) + 0xA)) = 0;
        spAC = (char *)(spAC) + 0x10;
        (*(s16 *)((char *)(spAC) + 0x10)) = (s16) (s32) (sp74 - var_f12);
        (*(s16 *)((char *)(spAC) + 0x2)) = (s16) (s32) (sp78 - var_f14);
        (*(s16 *)((char *)(spAC) + 0x4)) = (s16) (s32) (sp7C - var_f16);
        (*(s32 *)((char *)(spAC) + 0x8)) = 0x3C0;
        (*(s32 *)((char *)(spAC) + 0xA)) = 0;
        spAC = (char *)(spAC) + 0x10;
        (*(s16 *)((char *)(spAC) + 0x10)) = (s16) (s32) (sp80 - var_f12);
        (*(s16 *)((char *)(spAC) + 0x2)) = (s16) (s32) (sp84 - var_f14);
        (*(s16 *)((char *)(spAC) + 0x4)) = (s16) (s32) (sp88 - var_f16);
        (*(s32 *)((char *)(spAC) + 0x8)) = 0x3C0;
        (*(s32 *)((char *)(spAC) + 0xA)) = 0x3C0;
        spAC = (char *)(spAC) + 0x10;
        (*(s16 *)((char *)(spAC) + 0x10)) = (s16) (s32) (sp80 + var_f12);
        (*(s16 *)((char *)(spAC) + 0x2)) = (s16) (s32) (sp84 + var_f14);
        (*(s16 *)((char *)(spAC) + 0x4)) = (s16) (s32) (sp88 + var_f16);
        (*(s32 *)((char *)(spAC) + 0x8)) = 0;
        (*(s32 *)((char *)(spAC) + 0xA)) = 0x3C0;
        spAC = (char *)(spAC) + 0x10;
        (*(s32 *)((char *)(temp_v0) + 0x0)) = 0x01004008;
        temp_s0 = (char *)(temp_v0) + 8;
        (*(s32 *)((char *)(temp_v0) + 0x4)) = (void *) ((char *)(spAC) - 0x40);
        temp_s0_2 = (char *)(temp_s0) + 8;
        (*(s32 *)((char *)(temp_v0) + 0x8)) = 0x05000204;
        (*(s32 *)((char *)(temp_s0) + 0x4)) = 0;
        (*(s32 *)((char *)(temp_s0) + 0x8)) = 0x05000406;
        (*(s32 *)((char *)(temp_s0_2) + 0x4)) = 0;
        var_s0 = (char *)(temp_s0_2) + 8;
        goto block_11;
    }
block_11:
    if (spB3 != 0) {
        (*(s32 *)((char *)(arg1) + 0xE)) = -1;
    }
    return var_s0;
}

void func_151B2EC4(s32 arg0, s32 arg1, s32 arg2) {
    func_15169850(arg1, arg2, arg0 + 0x28, arg0 + 0x2C, arg0);
}

void func_151B2F04(void *arg0, void *arg1, s32 arg2) {
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_v1;
    void *temp_v0;

    temp_v0 = (char *)(arg0) + 0x28;
    if ((arg2 & 0xFF) == 0x2D) {
        temp_v1 = (*(s32 *)((char *)(arg1) + 0x0));
        temp_a2 = (*(s32 *)((char *)(arg0) + 0x28));
        if (temp_v1 == temp_a2) {
            (*(s32 *)((char *)(arg0) + 0x28)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
            (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x9));
        } else if ((*(s32 *)((char *)(arg1) + 0x4)) == temp_a2) {
            (*(s32 *)((char *)(arg0) + 0x28)) = temp_v1;
            (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x8));
        }
        temp_a2_2 = (*(s32 *)((char *)(temp_v0) + 0x8));
        if ((*(s32 *)((char *)(arg1) + 0x0)) == temp_a2_2) {
            (*(s32 *)((char *)(temp_v0) + 0x8)) = (*(s32 *)((char *)(arg1) + 0x4));
            (*(u8 *)((char *)(temp_v0) + 0xC)) = (u8) (*(u8 *)((char *)(arg1) + 0x9));
            return;
        }
        if ((*(s32 *)((char *)(arg1) + 0x4)) == temp_a2_2) {
            (*(s32 *)((char *)(temp_v0) + 0x8)) = (*(s32 *)((char *)(arg1) + 0x0));
            (*(u8 *)((char *)(temp_v0) + 0xC)) = (u8) (*(u8 *)((char *)(arg1) + 0x8));
        }
    }
}

void func_151B2FA0(s32 arg0, void * arg1, s32 arg2) {
    func_151B47D8(arg0 + 0x150, arg1, arg2 & 0xFF);
}

void func_151B2FD0(void *arg0) {
    void *temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x4C));
    if (temp_v0 != NULL) {
        (*(s32 *)((char *)(temp_v0) + 0x44)) = 0;
    }
}

void func_151B2FE8(void *arg0) {
    func_151B2FD0(arg0);
    func_1514933C(arg0);
}

void func_151B3014(void *arg0) {
    func_151B2FD0(arg0);
    func_15149368(arg0);
}

void func_151B3040(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp20;
    s32 temp_a2;

    temp_a2 = arg0 + 0x150;
    sp20 = temp_a2;
    func_15169850(arg1, arg2, temp_a2, arg0 + 0x154, arg0);
    func_15169850(arg1, arg2, sp20 + 0x14, sp20 + 0x18, arg0);
}
