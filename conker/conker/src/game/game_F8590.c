/**
 * Auto-decompiled from asm/F8590.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_15046C80();            /* extern */
void func_1504715C();                     /* extern */
u32 random_u32();                        /* extern */
f32 random_float();              /* extern */
void * func_150CCD90();          /* extern */
s32 func_15130374();            /* extern */
void * func_15132A4C();          /* extern */
void * func_15143134();              /* extern */
void * func_15143794();                /* extern */
void * func_1514C678(); /* extern */
s32 func_1518ABD0();                     /* extern */
void * memcpy();                            /* extern */
extern s32 D_800A05E0;
extern s32 D_800A05EC;
extern f32 D_800A05F8;
extern f32 D_800A05FC;
extern f32 D_800A0600;
extern f32 D_800A0604;
extern f32 D_800A0608;
extern f32 D_800A060C;
extern f32 D_800A0610;
extern f32 D_800A0614;
extern f32 D_800A0618;
extern f32 D_800A061C;
extern f32 D_800A0620;
extern f32 D_800A0624;
extern f32 D_800A0628;
extern f32 D_800A062C;
extern f32 D_800A0630;

s32 func_150CB0E0(f32 *arg0, void *arg1, f32 *arg2, s32 arg3) {
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    void * *var_a0;
    s32 temp_t6;
    s32 var_a2;

    temp_t6 = arg3 & 0xFF;
    if ((temp_t6 != 1) && (temp_t6 != 2)) {
        return 0;
    }
    if (temp_t6 == 1) {
        var_a0 = &D_800A05EC;
    } else {
        var_a0 = &D_800A05E0;
    }
    if (temp_t6 == 1) {
        var_a2 = (*(s32 *)((char *)(arg1) + 0x1D4)) + 0xA00;
    } else {
        var_a2 = (*(s32 *)((char *)(arg1) + 0x1D4)) + 0xBC0;
    }
    func_15143134(var_a0, arg0, var_a2, temp_t6);
    if (arg2 == NULL) {
        return 1;
    }
    sp2C = (*(s32 *)((char *)(arg0) + 0x0));
    sp30 = (*(s32 *)((char *)(arg0) + 0x4)) + 100.0f;
    sp34 = (*(s32 *)((char *)(arg0) + 0x8));
    func_1504715C(arg2, arg1);
    return func_15046C80(arg0, arg1, arg2, arg3);
}

s32 func_150CB1E0(s32 arg0, void * arg1) {
    return 0xB;
}

void func_150CB1F4(void *arg0, s32 arg1, void * arg2) {
    f32 sp124;
    void * sp104;
    f32 sp100;
    f32 spFC;
    f32 spF8;
    f32 spF4;
    u8 spF3;
    u8 spF2;
    u8 spF1;
    f32 spE8;
    s16 spE4;
    s8 spD3;
    s8 spD2;
    s8 spD1;
    s8 spD0;
    s32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    s32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    s8 sp9F;
    s8 sp9E;
    s8 sp9D;
    s8 sp9C;
    s32 sp98;
    s32 sp94;
    s16 sp90;
    s16 sp8E;
    s8 sp8C;
    s32 sp88;
    s16 sp86;
    s16 sp84;
    s16 sp82;
    s16 sp80;
    s16 sp7E;
    s16 sp7C;
    s16 sp7A;
    s16 sp78;
    s16 sp76;
    s16 sp74;
    s16 sp72;
    s16 sp70;
    s16 sp6E;
    s16 sp6C;
    s16 sp6A;
    s16 sp68;
    s16 sp66;
    s16 sp64;
    s16 sp62;
    s16 sp60;
    s16 sp5E;
    s16 sp5C;
    u8 sp5A;
    u8 sp59;
    u8 sp58;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f16;
    s16 temp_a0;
    s16 temp_v0;
    s16 temp_v1;
    s32 temp_v0_2;
    s32 var_v0;
    u32 temp_a1;
    u32 temp_a2;
    u32 temp_a3;

    f32 sp12C;
    f32 sp128;
    if (((*(s32 *)((char *)(arg0) + 0x1D4)) != 0) && (func_150CB0E0(&sp124, arg0, &sp100, arg1) != 0)) {
        func_1512D748((D_800BE9E8 * 0x9A0) + D_800DBFF0, 7, 1);
        func_151D5404(&sp124, 1502.0f, 3000.0f, 0.0003333333333333333f, 0xC, 0xF, 0xFF, 0);
        func_150CCD90(sp12C, &spFC, &spF8, &spF4);
        temp_a1 = (u32) spFC;
        spF3 = (u8) temp_a1;
        temp_v0 = temp_a1 & 0xFF;
        temp_a2 = (u32) spF8;
        spF2 = (u8) temp_a2;
        temp_v1 = temp_a2 & 0xFF;
        temp_a3 = (u32) spF4;
        spF1 = (u8) temp_a3;
        temp_a0 = temp_a3 & 0xFF;
        sp60 = temp_v0;
        sp62 = temp_v1;
        sp64 = temp_a0;
        sp66 = 0xFF;
        sp68 = 0;
        sp6A = temp_v0;
        sp6C = temp_v1;
        sp6E = temp_a0;
        sp70 = 0xFF;
        sp72 = 0;
        sp74 = temp_v0;
        sp76 = temp_v1;
        sp78 = temp_a0;
        sp7A = 0xFF;
        sp7C = 0;
        sp7E = temp_v0;
        sp80 = temp_v1;
        sp82 = temp_a0;
        sp84 = 0xFF;
        sp86 = 0;
        if ((s32) arg1 == 1) {
            sp8C = 0x4C;
        } else {
            sp8C = 0x4B;
        }
        sp8E = 0x2603;
        sp90 = 2;
        sp94 = 0;
        sp98 = 0;
        sp9C = 0xFF;
        sp9D = 0xFF;
        sp9E = 0xFF;
        sp9F = 0xFF;
        temp_f10 = (random_float(temp_a0, temp_a1, temp_a2, temp_a3) * 50.0f) + D_800A05F8;
        spCC = 0x401C0000;
        temp_f12 = temp_f10 * D_800A05FC;
        spC0 = 1.0f;
        spC4 = 1.0f;
        spAC = sp100 + 10.0f;
        spC8 = 1.0f;
        spA0 = temp_f12;
        spA4 = temp_f12;
        spA8 = sp124;
        spB4 = 0.0f;
        spB8 = 0.0f;
        spBC = 0.0f;
        spB0 = sp12C;
        spD0 = (random_u32(temp_f12, 0.0f) % 51U) + 0xA0;
        spD1 = 0xFF;
        spE4 = (random_u32() & 3) + 7;
        temp_f16 = random_float() * 30.0f;
        spD2 = 0;
        spD3 = 6;
        var_v0 = 8;
        spE8 = (temp_f16 + 30.0f) * spA0 * D_800A0600;
        if ((s32) arg1 == 1) {
            var_v0 = -8;
        }
        temp_v0_2 = func_1513D668(&sp8C, &sp60, 0, 0x17, 0, 0, ((s32) (*(s32 *)((char *)(arg0) + 0x7A)) >> 8) - var_v0, 500.0f, 500.0f, 0, &sp104, 1, 8, 0xFF, 0);
        if (temp_v0_2 != 0) {
            sp88 = temp_v0_2;
            memcpy(temp_v0_2 + 0x128, &spE4, 8);
            if (func_1518ABD0(D_800D98E0, sp88, 2) == 0) {
                func_1516972C(sp88);
            }
        }
        sp5E = (random_u32() & 0xF) + 0xA;
        func_1514C678(sp124, sp128, sp12C, (random_float() * 59.0f) + 80.0f, 0, 0xFF, (s32) sp5E, 0xE, 0, 0.0f, NULL, 0xFF);
        sp5C = (random_u32() & 0xF) + 5;
        sp58 = spF3;
        sp59 = spF2;
        sp5A = spF1;
        func_1514C678(sp124, sp128, sp12C, (random_float() * 59.0f) + 70.0f, 0, 0xFF, (s32) sp5C, 0xF, 0, 0.0f, &sp58, 0xFF);
    }
}

s32 func_150CB7CC(void *arg0) {
    s16 temp_v0;
    s32 temp_v1;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x1C));
    if (temp_v0 < 0x20) {
        temp_v1 = temp_v0 * 8;
        if (temp_v1 < (s32) (*(s32 *)((char *)(arg0) + 0x28))) {
            (*(u8 *)((char *)(arg0) + 0x28)) = (u8) temp_v1;
        }
    }
    return 1;
}

s32 func_150CB800(s32 arg0, void * arg1, f32 arg2, f32 arg3, f32 arg4, s16 arg8, u8 arg14) {
    s16 sp9C;
    s16 sp9A;
    s8 sp98;
    s32 sp94;
    s8 sp92;
    s8 sp90;
    s8 sp8F;
    s8 sp8E;
    s8 sp8D;
    s8 sp8C;
    s8 sp8B;
    s8 sp8A;
    s8 sp89;
    s8 sp88;
    s32 sp84;
    s8 sp80;
    s16 sp7E;
    s16 sp7C;
    s32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    void * sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    u32 sp20;
    f32 temp_f2;
    f32 temp_f6;

    sp50 = arg2;
    sp54 = arg3;
    sp44 = 1.0f;
    sp48 = 1.0f;
    sp4C = 1.0f;
    sp78 = 0x29E8;
    sp38 = 0.0f;
    sp3C = 0.0f;
    sp40 = 0.0f;
    sp6C = 0.0f;
    sp28 = 1.0f;
    sp7E = 0x20;
    sp58 = arg4;
    sp2C = D_800A0604;
    sp20 = random_u32(arg2, arg3);
    func_15143794(arg8, (s16) ((sp20 % 36U) - 0x37), ((random_float() * 200.0f) + 200.0f) * D_800A0608, &sp5C);
    sp68 = ((random_float() * 300.0f) + -149.0f) * D_800A060C;
    sp70 = ((random_float() * 300.0f) + -149.0f) * D_800A0610;
    sp7C = (random_u32() % 33U) + 0x20;
    sp74 = ((random_float() * D_800A0614) + D_800A0618) * D_800A061C;
    temp_f6 = random_float() * 300.0f;
    sp80 = 0;
    sp84 = 0;
    temp_f2 = (temp_f6 + 101.0f) * D_800A0620;
    sp30 = temp_f2;
    sp34 = temp_f2;
    sp88 = (random_u32() % 101U) + 0x9B;
    sp89 = 2;
    sp8A = 0;
    sp8B = 0;
    sp8C = 0;
    sp8D = 0;
    sp8E = 0;
    sp8F = 0;
    sp90 = 0;
    sp92 = 2;
    sp94 = 0;
    sp98 = 0;
    sp9A = 0x20;
    sp9C = 7;
    func_15132A4C(&sp28, 3, 0xFF, 0, (s32) arg14, 0);
    return 1;
}

s32 func_150CBA30(void *arg0) {
    f32 temp_f0;
    s16 temp_v0;
    s32 temp_v1;

    (*(s16 *)((char *)(arg0) + 0x128)) = (s16) ((*(s16 *)((char *)(arg0) + 0x128)) - D_800BE9E4);
    if ((*(s32 *)((char *)(arg0) + 0x128)) > 0) {
        temp_f0 = (*(s32 *)((char *)(arg0) + 0x12C)) * D_800BE9A4;
        (*(f32 *)((char *)(arg0) + 0x2C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x2C)) + temp_f0);
        (*(f32 *)((char *)(arg0) + 0x30)) = (f32) ((*(f32 *)((char *)(arg0) + 0x30)) + temp_f0);
    }
    if ((*(s32 *)((char *)(arg0) + 0x58)) & 1) {
        temp_v0 = (*(s32 *)((char *)(arg0) + 0x1C));
        if (temp_v0 < 0x20) {
            temp_v1 = temp_v0 * 8;
            if (temp_v1 < (s32) (*(s32 *)((char *)(arg0) + 0x5C))) {
                (*(u8 *)((char *)(arg0) + 0x5C)) = (u8) temp_v1;
            }
        }
    }
    return 1;
}

s32 func_150CBABC(s32 arg0, void * arg1, f32 arg2, f32 arg3, f32 arg4, s16 arg8, u8 arg14) {
    s8 sp97;
    s8 sp96;
    s8 sp95;
    s8 sp94;
    s32 sp8C;
    f32 sp88;
    void * sp7C;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    s16 sp56;
    s16 sp54;
    s16 sp52;
    s8 sp51;
    s8 sp50;
    s8 sp4F;
    s8 sp4E;
    s8 sp4D;
    s8 sp4C;
    s8 sp4B;
    s8 sp4A;
    s8 sp49;
    s8 sp48;
    s32 sp44;
    s32 sp40;
    s16 sp3E;
    s16 sp3C;
    s32 sp38;
    s32 sp34;
    f32 sp2C;
    u32 sp24;
    f32 temp_f2;
    f32 temp_f6;
    s32 temp_v0;

    sp51 = 0x29;
    sp3C = 0xE03;
    sp34 = 0x200005;
    sp38 = 0;
    sp3E = (random_u32() % 41U) + 0x28;
    sp40 = 0;
    sp44 = 0;
    sp4C = 0xB0;
    sp4D = 0xA0;
    sp4E = 0x2A;
    sp48 = 0x40;
    sp49 = 0xB;
    sp4A = 0x6A;
    sp4B = 0xFF;
    sp4F = (random_u32() % 157U) + 0x64;
    sp50 = 0xFF;
    sp94 = 3;
    sp95 = 3;
    temp_f6 = random_float() * D_800A0624;
    sp64 = arg2;
    sp68 = arg3;
    sp6C = arg4;
    temp_f2 = temp_f6 + 300.0f;
    sp5C = temp_f2;
    sp60 = temp_f2;
    sp24 = random_u32();
    func_15143794(arg8, (s16) ((sp24 % 26U) - 0x19), ((random_float() * 500.0f) + 1000.0f) * D_800A0628, &sp7C);
    sp8C = 0xE05;
    sp88 = 0.0f;
    if (random_u32() & 1) {
        sp8C |= 0x40;
    }
    if (random_u32() & 1) {
        sp8C |= 0x80;
    }
    sp96 = 7;
    sp97 = -1;
    sp52 = 0x19;
    sp54 = 0xA;
    sp56 = 0x3C;
    sp58 = D_800A062C;
    sp2C = D_800A0630;
    temp_v0 = func_15130374(&sp34, 1, 4, arg14, 1);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0xA8, (s16 *) &sp2C, 4);
    }
    return 1;
}

s32 func_150CBCE0(void *arg0, void * arg1) {
    f32 var_f18;
    f32 var_f18_2;
    s32 temp_a1;
    s32 temp_a2;
    s32 var_v1;
    s32 var_v1_2;

    var_v1 = D_800BE9E4;
    if (var_v1 != 0) {
        temp_a2 = -(var_v1 & 3);
        temp_a1 = temp_a2 + var_v1;
        if (temp_a2 != 0) {
            var_v1 -= 1;
            var_f18 = (*(s32 *)((char *)(arg0) + 0x58)) * (*(s32 *)((char *)(arg0) + 0xA8));
            if (temp_a1 != var_v1) {
                do {
                    (*(s32 *)((char *)(arg0) + 0x58)) = var_f18;
                    var_v1 -= 1;
                    (*(f32 *)((char *)(arg0) + 0x60)) = (f32) ((*(f32 *)((char *)(arg0) + 0x60)) * (*(f32 *)((char *)(arg0) + 0xA8)));
                    var_f18 = (*(s32 *)((char *)(arg0) + 0x58)) * (*(s32 *)((char *)(arg0) + 0xA8));
                } while (temp_a1 != var_v1);
            }
            (*(s32 *)((char *)(arg0) + 0x58)) = var_f18;
            (*(f32 *)((char *)(arg0) + 0x60)) = (f32) ((*(f32 *)((char *)(arg0) + 0x60)) * (*(f32 *)((char *)(arg0) + 0xA8)));
            if (var_v1 != 0) {
                goto block_5;
            }
        } else {
block_5:
            var_v1_2 = var_v1 - 4;
            var_f18_2 = (*(s32 *)((char *)(arg0) + 0x58)) * (*(s32 *)((char *)(arg0) + 0xA8));
            if (var_v1_2 != 0) {
                do {
                    (*(s32 *)((char *)(arg0) + 0x58)) = var_f18_2;
                    var_v1_2 -= 4;
                    (*(f32 *)((char *)(arg0) + 0x60)) = (f32) ((*(f32 *)((char *)(arg0) + 0x60)) * (*(f32 *)((char *)(arg0) + 0xA8)));
                    (*(f32 *)((char *)(arg0) + 0x58)) = (f32) ((*(f32 *)((char *)(arg0) + 0x58)) * (*(f32 *)((char *)(arg0) + 0xA8)));
                    (*(f32 *)((char *)(arg0) + 0x60)) = (f32) ((*(f32 *)((char *)(arg0) + 0x60)) * (*(f32 *)((char *)(arg0) + 0xA8)));
                    (*(f32 *)((char *)(arg0) + 0x58)) = (f32) ((*(f32 *)((char *)(arg0) + 0x58)) * (*(f32 *)((char *)(arg0) + 0xA8)));
                    (*(f32 *)((char *)(arg0) + 0x60)) = (f32) ((*(f32 *)((char *)(arg0) + 0x60)) * (*(f32 *)((char *)(arg0) + 0xA8)));
                    (*(f32 *)((char *)(arg0) + 0x58)) = (f32) ((*(f32 *)((char *)(arg0) + 0x58)) * (*(f32 *)((char *)(arg0) + 0xA8)));
                    (*(f32 *)((char *)(arg0) + 0x60)) = (f32) ((*(f32 *)((char *)(arg0) + 0x60)) * (*(f32 *)((char *)(arg0) + 0xA8)));
                    var_f18_2 = (*(s32 *)((char *)(arg0) + 0x58)) * (*(s32 *)((char *)(arg0) + 0xA8));
                } while (var_v1_2 != 0);
            }
            (*(s32 *)((char *)(arg0) + 0x58)) = var_f18_2;
            (*(f32 *)((char *)(arg0) + 0x60)) = (f32) ((*(f32 *)((char *)(arg0) + 0x60)) * (*(f32 *)((char *)(arg0) + 0xA8)));
            (*(f32 *)((char *)(arg0) + 0x58)) = (f32) ((*(f32 *)((char *)(arg0) + 0x58)) * (*(f32 *)((char *)(arg0) + 0xA8)));
            (*(f32 *)((char *)(arg0) + 0x60)) = (f32) ((*(f32 *)((char *)(arg0) + 0x60)) * (*(f32 *)((char *)(arg0) + 0xA8)));
            (*(f32 *)((char *)(arg0) + 0x58)) = (f32) ((*(f32 *)((char *)(arg0) + 0x58)) * (*(f32 *)((char *)(arg0) + 0xA8)));
            (*(f32 *)((char *)(arg0) + 0x60)) = (f32) ((*(f32 *)((char *)(arg0) + 0x60)) * (*(f32 *)((char *)(arg0) + 0xA8)));
            (*(f32 *)((char *)(arg0) + 0x58)) = (f32) ((*(f32 *)((char *)(arg0) + 0x58)) * (*(f32 *)((char *)(arg0) + 0xA8)));
            (*(f32 *)((char *)(arg0) + 0x60)) = (f32) ((*(f32 *)((char *)(arg0) + 0x60)) * (*(f32 *)((char *)(arg0) + 0xA8)));
        }
    }
    return 1;
}

s32 func_150CBE88(void *arg0) {
    f32 temp_f12;
    f32 temp_f2;

    temp_f12 = (*(s32 *)((char *)(arg0) + 0x5C));
    temp_f2 = (*(s32 *)((char *)(arg0) + 0x48));
    (*(f32 *)((char *)(arg0) + 0x38)) = (f32) ((*(f32 *)((char *)(arg0) + 0x38)) + ((*(f32 *)((char *)(arg0) + 0x44)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x3C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x3C)) + ((temp_f2 * D_800BE9A4) + (temp_f12 * D_800BE9A4 * D_800BE9A4 * 0.5f)));
    (*(f32 *)((char *)(arg0) + 0x40)) = (f32) ((*(f32 *)((char *)(arg0) + 0x40)) + ((*(f32 *)((char *)(arg0) + 0x4C)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x48)) = (f32) (temp_f2 + (temp_f12 * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x20)) = (f32) ((*(f32 *)((char *)(arg0) + 0x20)) + ((*(f32 *)((char *)(arg0) + 0x50)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x24)) = (f32) ((*(f32 *)((char *)(arg0) + 0x24)) + ((*(f32 *)((char *)(arg0) + 0x54)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x28)) = (f32) ((*(f32 *)((char *)(arg0) + 0x28)) + ((*(f32 *)((char *)(arg0) + 0x58)) * D_800BE9A4));
    return 1;
}

void func_150CBF5C(void *arg0) {
    (*(s32 *)((char *)(arg0) + 0x1C)) = 0x20;
    (*(s32 *)((char *)(arg0) + 0x58)) = (s32) ((*(s32 *)((char *)(arg0) + 0x58)) | 1);
}
