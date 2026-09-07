/**
 * Auto-decompiled from asm/E2DA0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


u32 random_u32();                           /* extern */
f32 random_float();                          /* extern */
void * func_150B3F5C();                 /* extern */
void * func_15106F98(); /* extern */
void * func_15130280();          /* extern */
void * func_15143134();                  /* extern */
void * func_1514373C();            /* extern */
void * func_15143794();                    /* extern */
void * func_15152B38();                    /* extern */
void * func_151602C0(); /* extern */
void * func_15182670();  /* extern */
void func_150B5A3C();
void func_150B5E34();
void func_150B6000();
void func_150B60E0();              /* static */
extern s32 D_8009FC30;
extern s32 D_8009FC3C;
extern s32 D_8009FC60;
extern s32 D_8009FC6C;
extern s32 D_8009FC78;
extern s32 D_8009FC84;
extern s32 D_8009FC8E;
extern f32 D_8009FC98;
extern f32 D_8009FC9C;
extern f32 D_8009FCA0;
extern f32 D_8009FCA4;
extern f32 D_8009FCA8;
extern f32 D_8009FCAC;
extern f32 D_8009FCB0;
extern f32 D_8009FCB4;
extern f32 D_8009FCB8;
extern f32 D_8009FCBC;
extern f32 D_8009FCC0;
extern f32 D_8009FCC4;
extern f32 D_8009FCC8;
extern f32 D_8009FCCC;
extern f32 D_8009FCD0;
extern f32 D_8009FCD4;
extern f32 D_8009FCD8;
extern f32 D_8009FCDC;
extern f32 D_8009FCE0;
extern f32 D_8009FCE4;

void *func_150B58F0(void *arg0, s32 arg1) {
    if (D_800C35EA == 1) {
        return arg0;
    }
    (*(s32 *)((char *)(arg0) + 0x0)) = 0x1A;
    (*(u16 *)((char *)(arg0) + 0x2)) = (u16) (*(u16 *)((char *)(D_800CC34A) + (arg1 * 0x32C)));
    return (char *)(arg0) + 4;
}

void func_150B5950(void *arg0) {
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    void *sp24;
    void *temp_a3;
    void *var_a3;

    temp_a3 = (*(s32 *)((char *)(arg0) + 0x28));
    if (((*(s32 *)((char *)(temp_a3) + 0x0)) == 0) || ((*(s32 *)((char *)(arg0) + 0x2C)) != (*(s32 *)((char *)(temp_a3) + 0x3B)))) {
        (*(s32 *)((char *)(arg0) + 0xE)) = -1;
        return;
    }
    if ((*(s32 *)((char *)(temp_a3) + 0x1D4)) != 0) {
        sp24 = temp_a3;
        var_a3 = temp_a3;
        if (random_float(temp_a3) < D_8009FC98) {
            sp28 = (*(s32 *)((char *)(var_a3) + 0x14));
            sp2C = (*(s32 *)((char *)(var_a3) + 0x18));
            sp30 = (*(s32 *)((char *)(var_a3) + 0x1C));
            sp24 = var_a3;
            func_150B5A3C(&sp28, (*(s32 *)((char *)(arg0) + 0xC)), (*(s32 *)((char *)(arg0) + 0x1)), var_a3);
            var_a3 = sp24;
        }
        sp24 = var_a3;
        if (random_float() < D_8009FC9C) {
            func_150B60E0(var_a3, &sp28);
            func_150B5A3C(&sp28, (*(s32 *)((char *)(arg0) + 0xC)), (*(s32 *)((char *)(arg0) + 0x1)));
        }
    }
}

void func_150B5A3C(f32 *arg0, s32 arg1, s32 arg2) {
    s8 sp8F;
    s8 sp8E;
    s8 sp8D;
    s8 sp8C;
    f32 sp88;
    s8 sp86;
    s16 sp84;
    s16 sp82;
    s16 sp80;
    s32 sp7C;
    s32 sp78;
    s8 sp74;
    s8 sp73;
    s8 sp72;
    s8 sp71;
    s8 sp70;
    s8 sp6F;
    s8 sp6E;
    s8 sp6D;
    s8 sp6C;
    s8 sp6B;
    s8 sp6A;
    s8 sp69;
    s8 sp68;
    s8 sp67;
    s8 sp66;
    s8 sp65;
    s8 sp64;
    s8 sp63;
    s8 sp62;
    s8 sp61;
    s8 sp60;
    s8 sp5F;
    s8 sp5E;
    s16 sp5C;
    s16 sp5A;
    s16 sp58;
    s32 sp54;
    s32 sp50;
    s16 sp4E;
    s16 sp4C;
    s16 sp4A;
    s16 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    void * sp24;
    s32 sp20;
    s32 sp1C;

    sp1C = 5;
    sp20 = 5;
    (*(s32 *)((char *)&(sp24) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x0));
    (*(s32 *)((char *)&(sp24) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x4));
    (*(s32 *)((char *)&(sp24) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x8));
    sp4E = 0x50;
    sp50 = 3;
    sp4C = -0x1F;
    sp54 = 2;
    sp58 = 0x14;
    sp5A = 0x1E;
    sp5C = 1;
    sp5E = 4;
    sp5F = 2;
    sp62 = 0xFF;
    sp63 = 0xFF;
    sp30 = 20.0f;
    sp4A = 0xFF;
    sp61 = 0xFF;
    sp64 = 0xFF;
    sp69 = 0xFF;
    sp6A = 0xFF;
    sp6B = 0xFF;
    sp6C = 0xFF;
    sp71 = 0xFF;
    sp48 = 0;
    sp60 = 3;
    sp65 = 0;
    sp66 = 0;
    sp67 = 0;
    sp68 = 0;
    sp6D = 0;
    sp6E = 0;
    sp6F = 0;
    sp70 = 0;
    sp72 = 0;
    sp73 = 3;
    sp74 = 0x24;
    sp78 = 0x200005;
    sp7C = 0x60600;
    sp80 = 8;
    sp82 = 0x1F;
    sp84 = 1;
    sp86 = 0;
    sp8C = -1;
    sp8D = 0;
    sp8E = -1;
    sp8F = -1;
    sp34 = D_8009FCA0;
    sp38 = D_8009FCA4;
    sp3C = D_8009FCA8;
    sp40 = 39.0f;
    sp44 = 35.0f;
    sp88 = 1.0f;
    func_15152B38(&sp1C, arg1, arg2);
    func_150B5E34(arg0, arg1, arg2);
    func_150B6000(arg0, arg1, arg2);
}

void func_150B5C38(f32 *arg0, s32 arg1, s32 arg2) {
    s8 sp8F;
    s8 sp8E;
    s8 sp8D;
    s8 sp8C;
    f32 sp88;
    s8 sp86;
    s16 sp84;
    s16 sp82;
    s16 sp80;
    s32 sp7C;
    s32 sp78;
    s8 sp74;
    s8 sp73;
    s8 sp72;
    s8 sp71;
    s8 sp70;
    s8 sp6F;
    s8 sp6E;
    s8 sp6D;
    s8 sp6C;
    s8 sp6B;
    s8 sp6A;
    s8 sp69;
    s8 sp68;
    s8 sp67;
    s8 sp66;
    s8 sp65;
    s8 sp64;
    s8 sp63;
    s8 sp62;
    s8 sp61;
    s8 sp60;
    s8 sp5F;
    s8 sp5E;
    s16 sp5C;
    s16 sp5A;
    s16 sp58;
    s32 sp54;
    s32 sp50;
    s16 sp4E;
    s16 sp4C;
    s16 sp4A;
    s16 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    void * sp24;
    s32 sp20;
    s32 sp1C;

    sp1C = 0xD;
    sp20 = 8;
    (*(s32 *)((char *)&(sp24) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x0));
    (*(s32 *)((char *)&(sp24) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x4));
    (*(s32 *)((char *)&(sp24) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x8));
    sp4E = 0x32;
    sp50 = 3;
    sp4C = -0x14;
    sp54 = 2;
    sp58 = 0x14;
    sp5A = 0xF;
    sp5C = 1;
    sp5E = 4;
    sp5F = 2;
    sp62 = 0xFF;
    sp63 = 0xB4;
    sp30 = D_8009FCAC;
    sp4A = 0xFF;
    sp61 = 0xFF;
    sp64 = 0xFF;
    sp69 = 0xFF;
    sp6A = 0xFF;
    sp6B = 0xB4;
    sp6C = 0xFF;
    sp71 = 0xFF;
    sp48 = 0;
    sp60 = 3;
    sp65 = 0;
    sp66 = 0;
    sp67 = 0;
    sp68 = 0;
    sp6D = 0;
    sp6E = 0;
    sp6F = 0;
    sp70 = 0;
    sp72 = 0;
    sp73 = 3;
    sp74 = 0x24;
    sp78 = 0x200005;
    sp7C = 0x60600;
    sp80 = 8;
    sp82 = 0x1F;
    sp84 = 1;
    sp86 = 0;
    sp8C = -1;
    sp8D = 0;
    sp8E = -1;
    sp8F = -1;
    sp34 = D_8009FCB0;
    sp38 = D_8009FCB4;
    sp3C = D_8009FCB8;
    sp40 = 152.0f;
    sp44 = 100.0f;
    sp88 = 1.0f;
    func_15152B38(&sp1C, arg1, arg2);
    func_150B5E34(arg0, arg1, arg2);
    func_150B6000(arg0, arg1, arg2);
}

void func_150B5E34(f32 *arg0, s32 arg1, s32 arg2) {
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
    void * sp58;
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
    f32 temp_f6;
    s32 var_v0;
    s32 var_v1;

    sp45 = 0x2B;
    sp30 = 0x4403;
    sp28 = 0x200005;
    sp2C = 0x20000;
    sp32 = (random_u32() % 7U) + 4;
    sp34 = 0;
    sp38 = 0;
    sp3C = 0xFF;
    sp3D = 0xFF;
    sp3E = 0xFF;
    sp3F = 0xFF;
    sp40 = 0xFF;
    sp41 = 0xFF;
    sp42 = 0xFF;
    sp43 = 0xFF;
    sp44 = 0xFF;
    temp_f6 = (random_float() * 500.0f) + 500.0f;
    sp54 = temp_f6;
    sp50 = temp_f6;
    (*(s32 *)((char *)&(sp58) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x0));
    (*(s32 *)((char *)&(sp58) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x4));
    (*(s32 *)((char *)&(sp58) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x8));
    sp46 = 3;
    sp48 = 0x55;
    sp4A = 1;
    sp64 = 0.0f;
    sp68 = 0.0f;
    sp6C = 0.0f;
    sp70 = 0.0f;
    sp74 = 0.0f;
    sp78 = 0.0f;
    sp7C = 0.0f;
    sp4C = 1.0f;
    var_v1 = 0;
    if (random_u32(0x43FA0000) & 1) {
        var_v1 = 0x40;
    }
    sp20 = var_v1;
    if (random_u32() & 1) {
        var_v0 = 0x80;
    } else {
        var_v0 = 0;
    }
    sp80 = var_v0 | 1 | var_v1 | 0xC200;
    sp88 = 6;
    sp89 = 6;
    sp8A = -1;
    sp8B = -1;
    sp8C = -1;
    sp8D = 4;
    func_15130280(&sp28, 1, 0, 0, (s32) arg1, arg2);
}

void func_150B6000(f32 *arg0, s32 arg1, s32 arg2) {
    s8 sp4C;
    s16 sp4A;
    s8 sp49;
    s8 sp48;
    s32 sp44;
    s32 sp40;
    s32 sp3C;

    sp48 = 3;
    sp49 = -1;
    sp4A = (random_u32() % 9U) + 3;
    sp4C = 0;
    sp3C = (s32) (*(s32 *)((char *)(arg0) + 0x0));
    sp40 = (s32) (*(s32 *)((char *)(arg0) + 0x4));
    sp44 = (s32) (*(s32 *)((char *)(arg0) + 0x8));
    func_151602C0(&sp48, &sp3C, (random_u32(arg0) % 201U) + 0x37, 0xFF, 0xFF, 0xFF, 0xFF, 0, 0, (s32) arg1, arg2);
}

void func_150B60E0(void *arg0) {
    func_15143134(&D_8009FC30, (*(s32 *)((char *)(arg0) + 0x1D4)) + 0x140, arg0);
}

void func_150B6110(void *arg0) {
    s8 spB8;
    s8 spB7;
    s8 spB6;
    s8 spB5;
    s8 spB4;
    s32 spB0;
    s32 spAC;
    s16 spA8;
    s16 spA6;
    s16 spA4;
    s16 spA2;
    s16 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 temp_f22;
    f32 var_f12;
    s32 temp_t1;
    u32 temp_v0_2;
    u8 temp_t6;
    u8 temp_v0;
    void *temp_s1;
    void *temp_s2;

    temp_s1 = (*(s32 *)((char *)(arg0) + 0x28));
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x30));
    temp_t6 = (*(s32 *)((char *)(temp_s1) + 0x14));
    (*(s32 *)((char *)(arg0) + 0x30)) = temp_t6;
    if ((*(s32 *)((char *)(temp_s1) + 0x14)) == 1) {
        if (temp_v0 != (temp_t6 & 0xFF)) {
            func_151494E0(0, 0x4A);
        }
    } else {
        temp_s2 = (char *)(arg0) + 0x28;
        (*(f32 *)((char *)(temp_s2) + 0x4)) = (f32) ((*(f32 *)((char *)(temp_s2) + 0x4)) + ((D_8009FCBC + (random_float() * D_8009FCC0)) * D_800BE9A4));
        if ((*(s32 *)((char *)(temp_s2) + 0x4)) > 1.0f) {
            spA0 = 0x28;
            sp8C = 35.0f;
            sp90 = 35.0f;
            spA2 = 0;
            spA4 = 4;
            spA6 = 3;
            spA8 = 7;
            spAC = 4;
            spB0 = 3;
            spB4 = 0x7E;
            spB5 = 0xF9;
            spB6 = 0xFF;
            spB7 = 0x7F;
            spB8 = 0x80;
            sp94 = 76.0f;
            sp98 = 103.0f;
            sp9C = D_8009FCC4;
            temp_f22 = D_8009FCC8;
            sp84 = (f32) ((*(f32 *)((char *)(temp_s1) + 0x2)) + (*(f32 *)((char *)(temp_s1) + 0x8)));
            sp78 = (f32) ((*(f32 *)((char *)(temp_s1) + 0x2)) + (*(f32 *)((char *)(temp_s1) + 0x8)));
            do {
                temp_v0_2 = random_u32();
                func_1514373C((f32) (temp_v0_2 & 0xFF), (f32) (*(f32 *)((char *)(temp_s1) + 0x6)), &sp80, &sp88);
                sp80 += (f32) (*(f32 *)((char *)(temp_s1) + 0x0));
                sp88 += (f32) (*(f32 *)((char *)(temp_s1) + 0x4));
                temp_t1 = ((temp_v0_2 & 0xFF) + (random_u32() % 129U) + 0x40) & 0xFF;
                var_f12 = (f32) temp_t1;
                if (temp_t1 < 0) {
                    var_f12 += 4294967296.0f;
                }
                func_1514373C(var_f12, (f32) (*(f32 *)((char *)(temp_s1) + 0x6)), &sp74, &sp7C);
                sp74 += (f32) (*(f32 *)((char *)(temp_s1) + 0x0));
                sp7C += (f32) (*(f32 *)((char *)(temp_s1) + 0x4));
                func_15106F98(&sp80, &sp74, 4, &sp8C, temp_f22, 1, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
                (*(f32 *)((char *)(temp_s2) + 0x4)) = (f32) ((*(f32 *)((char *)(temp_s2) + 0x4)) - 1.0f);
            } while ((*(s32 *)((char *)(temp_s2) + 0x4)) > 1.0f);
        }
    }
}

void func_150B6450(void * arg1, s32 arg2) {
    s32 temp_t6;

    temp_t6 = arg2 & 0xFF;
    if (temp_t6 == 0x4A) {
        func_1516972C(temp_t6);
    }
}

void func_150B648C(s32 arg0) {
    f32 sp6C;
    s8 sp68;
    s16 sp66;
    s8 sp65;
    s8 sp64;
    s8 sp63;
    s8 sp62;
    s8 sp61;
    s8 sp60;
    f32 sp5C;
    f32 sp58;
    s16 sp56;
    s8 sp54;
    f32 sp50;
    s8 sp4C;
    f32 sp48;
    f32 sp44;
    s8 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    f32 temp_f6;
    f32 temp_f6_2;
    s32 temp_s0;
    s32 temp_v0;
    void *temp_t5;
    void *temp_t9;

    temp_s0 = arg0 & 0xFF;
    if (temp_s0 == 0) {
        temp_f6 = func_151423D8(0xAA) * 10.0f;
        sp34 = 3.0f;
        sp30 = temp_f6;
        sp38 = func_151423D8(0xEA) * 10.0f;
        temp_f6_2 = func_151423D8(0xAA) * 150.0f;
        sp28 = D_8009FCD0;
        sp24 = D_8009FCCC - temp_f6_2;
        sp2C = D_8009FCD4 - (func_151423D8(0xEA) * 150.0f);
    } else if (temp_s0 == 1) {
        func_15143794(-0x45, 0x1C, 0x41159999, &sp30);
        temp_t9 = (temp_s0 * 0xC) + &D_8009FC3C;
        (*(s32 *)((char *)&(sp24) + 0x0)) = (*(s32 *)((char *)(temp_t9) + 0x0));
        (*(s32 *)((char *)&(sp24) + 0x4)) = (s32) (*(s32 *)((char *)(temp_t9) + 0x4));
        (*(s32 *)((char *)&(sp24) + 0x8)) = (s32) (*(s32 *)((char *)(temp_t9) + 0x8));
    } else {
        func_15143794(0x18, 0xF, 0x41159999, &sp30);
        temp_t5 = (temp_s0 * 0xC) + &D_8009FC3C;
        (*(s32 *)((char *)&(sp24) + 0x0)) = (*(s32 *)((char *)(temp_t5) + 0x0));
        (*(s32 *)((char *)&(sp24) + 0x4)) = (s32) (*(s32 *)((char *)(temp_t5) + 0x4));
        (*(s32 *)((char *)&(sp24) + 0x8)) = (s32) (*(s32 *)((char *)(temp_t5) + 0x8));
    }
    temp_v0 = temp_s0 * 4;
    sp40 = 4;
    sp4C = 6;
    sp3C = *(&D_8009FC60 + temp_v0);
    sp54 = 0x80;
    sp56 = 0xFF;
    sp60 = 2;
    sp61 = 5;
    sp62 = 5;
    sp63 = 0x33;
    sp64 = 3;
    sp65 = 0x55;
    sp68 = 0;
    sp44 = D_8009FCD8;
    sp48 = D_8009FCDC;
    sp50 = D_8009FCE0;
    sp58 = *(&D_8009FC6C + temp_v0);
    sp5C = *(&D_8009FC78 + temp_v0);
    sp66 = *(&D_8009FC84 + (temp_s0 * 2));
    sp6C = D_8009FCE4;
    func_150B3F5C(&sp30, &sp24, *(&D_8009FC8E + temp_v0));
}

s32 func_150B66DC(void *arg0) {
    s32 temp_v1;

    temp_v1 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x18))) + 0x68)) - 0xF;
    switch (temp_v1) {                              /* irregular */
    case 0:
        (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x14))) + 0x9)) = 1;
        return 1;
    case 1:
        (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x14))) + 0x9)) = 0;
        (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x14))) + 0x2F)) = 0x14;
        return 1;
    default:
    case 2:
        (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x14))) + 0x9)) = 0;
        (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x14))) + 0x2F)) = 0x28;
        return 1;
    }
}

void func_150B6754( s32 arg0, s32 arg1) {
    u32 sp28;

    sp28 = random_u32();
    func_15182670(0xCC, 0xCC, 0xFF, ((sp28 % 56U) + 0xC8) & 0xFF, (random_u32() % 11U) + 0xF, 0, (s32) arg0, arg1);
}
