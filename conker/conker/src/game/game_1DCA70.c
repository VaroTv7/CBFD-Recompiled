/**
 * Auto-decompiled from asm/1DCA70.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_15046C80();            /* extern */
void func_1504715C();                     /* extern */
u32 random_u32();                          /* extern */
f32 random_float();                                /* extern */
void * func_150CCD90();          /* extern */
s32 func_15130374();            /* extern */
void * func_15143134();              /* extern */
void * func_15143794();                /* extern */
void * func_1514C678(); /* extern */
void * memcpy();                            /* extern */
extern s32 D_800AA0F0;
extern s32 D_800AA0FC;
extern f32 D_800AA108;
extern f32 D_800AA10C;
extern f32 D_800AA110;
extern f32 D_800AA114;
extern f32 D_800AA118;
extern f32 D_800AA11C;

s32 func_151AF5C0(f32 *arg0, void *arg1, f32 *arg2, s32 arg3) {
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
        var_a0 = &D_800AA0FC;
    } else {
        var_a0 = &D_800AA0F0;
    }
    if (temp_t6 == 1) {
        var_a2 = (*(s32 *)((char *)(arg1) + 0x1D4)) + 0x800;
    } else {
        var_a2 = (*(s32 *)((char *)(arg1) + 0x1D4)) + 0x640;
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

s32 func_151AF6C0(s32 arg0, void * arg1) {
    return 0xC;
}

void func_151AF6D4(void *arg0, s32 arg1, void * arg2) {
    f32 sp124;
    void * sp104;
    f32 sp100;
    f32 spFC;
    f32 spF8;
    f32 spF4;
    f32 spEC;
    s16 spE8;
    s8 spD7;
    s8 spD6;
    s8 spD5;
    s8 spD4;
    s32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    s32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    s8 spA3;
    s8 spA2;
    s8 spA1;
    s8 spA0;
    s32 sp9C;
    s32 sp98;
    s16 sp94;
    s16 sp92;
    s8 sp90;
    s16 sp8A;
    s16 sp88;
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
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f18_2;
    s16 var_a1;
    s16 var_a2;
    s16 var_a3;
    s32 temp_f18;
    s32 temp_v0;
    s32 var_v0;

    f32 sp12C;
    f32 sp128;
    if ((arg0 != NULL) && ((*(s32 *)((char *)(arg0) + 0x1D4)) != 0) && (func_151AF5C0(&sp124, arg0, &sp100, arg1) != 0)) {
        if (D_800BE9F0 == 0x14) {
            func_150CCD90(sp12C, &spFC, &spF8, &spF4);
            var_a1 = (u32) spFC & 0xFF;
            var_a2 = (u32) spF8 & 0xFF;
            temp_f18 = (s32) spF4;
            if (M2C_ERROR(/* cfc1 */) & 0x78) {
                if (!(M2C_ERROR(/* cfc1 */) & 0x78)) {
                    var_a3 = ((s32) (spF4 - 2.1474836e9f) | 0x80000000) & 0xFF;
                } else {
                    goto block_7;
                }
            } else if (temp_f18 >= 0) {
                var_a3 = temp_f18 & 0xFF;
            } else {
block_7:
                var_a3 = -1 & 0xFF;
            }
        } else {
            var_a3 = 0xFF;
            var_a2 = 0xFF;
            var_a1 = 0xFF;
        }
        sp64 = var_a1;
        sp66 = var_a2;
        sp68 = var_a3;
        sp6A = 0xB4;
        sp6C = 0;
        sp6E = var_a1;
        sp70 = var_a2;
        sp72 = var_a3;
        sp74 = 0xB4;
        sp76 = 0;
        sp78 = var_a1;
        sp7A = var_a2;
        sp7C = var_a3;
        sp7E = 0xB4;
        sp80 = 0;
        sp82 = var_a1;
        sp84 = var_a2;
        sp86 = var_a3;
        sp88 = 0xB4;
        sp8A = 0;
        sp90 = 0x50;
        sp92 = 0x2502;
        sp94 = (random_u32() % 61U) + 0x58;
        sp98 = 0;
        sp9C = 0;
        spA0 = 0xFF;
        spA1 = 0xFF;
        spA2 = 0xFF;
        spA3 = 0xFF;
        temp_f10 = (random_float() * 21.0f) + 91.0f;
        spD0 = 0x401C0001;
        temp_f12 = temp_f10 * D_800AA108;
        spC4 = 1.0f;
        spC8 = 1.0f;
        spCC = 1.0f;
        spAC = sp124;
        spB8 = 0.0f;
        spBC = 0.0f;
        spA4 = temp_f12;
        spA8 = temp_f12;
        spC0 = 0.0f;
        spB0 = sp100;
        spB4 = sp12C;
        spD4 = (random_u32(temp_f12, 0) % 41U) + 0x50;
        spD5 = 0xFF;
        spE8 = (sp94 - (random_u32() % 6U)) - 8;
        temp_f18_2 = (random_float() * 40.0f) + 51.0f;
        spD6 = 0;
        spD7 = 6;
        var_v0 = 0xA;
        spEC = temp_f18_2 * spA4 * D_800AA10C;
        if ((s32) arg1 == 1) {
            var_v0 = -0xA;
        }
        temp_v0 = func_1513D668(&sp90, &sp64, 0, 0x16, 0, 0, ((s32) (*(s32 *)((char *)(arg0) + 0x7A)) >> 8) - var_v0, 500.0f, 500.0f, 0, &sp104, 1, 8, 0xFF, 0);
        if (temp_v0 != 0) {
            memcpy(temp_v0 + 0x128, &spE8, 8);
        }
        sp62 = (random_u32() % 11U) + 5;
        func_1514C678(sp124, sp128, sp12C, (random_float() * 17.0f) + 29.0f, 0, 0xFF, (s32) sp62, 0x10, 0, 0.0f, 0, 0xFF);
    }
}

s32 func_151AFBD4(void *arg0) {
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

s32 func_151AFC08(void *arg0) {
    f32 temp_f0;
    s16 temp_v1;
    s32 temp_v0;

    if ((*(s32 *)((char *)(arg0) + 0x58)) & 1) {
        temp_v1 = (*(s32 *)((char *)(arg0) + 0x1C));
        if (temp_v1 < 0x20) {
            temp_v0 = temp_v1 * 8;
            if (temp_v0 < (s32) (*(s32 *)((char *)(arg0) + 0x5C))) {
                (*(u8 *)((char *)(arg0) + 0x5C)) = (u8) temp_v0;
            }
        }
        if ((*(s32 *)((char *)(arg0) + 0x128)) < (*(s32 *)((char *)(arg0) + 0x1C))) {
            temp_f0 = (*(s32 *)((char *)(((char *)(arg0) + 0x128)) + 0x4)) * D_800BE9A4;
            (*(f32 *)((char *)(arg0) + 0x2C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x2C)) + temp_f0);
            (*(f32 *)((char *)(arg0) + 0x30)) = (f32) ((*(f32 *)((char *)(arg0) + 0x30)) + temp_f0);
        }
    }
    return 1;
}

s32 func_151AFC88(s32 arg0, void * arg1, f32 arg2, f32 arg3, f32 arg4, s16 arg8, u8 arg14) {
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
    sp3E = (random_u32() & 0xF) + 0x19;
    sp40 = 0;
    sp44 = 0;
    sp4C = 0xB0;
    sp4D = 0xA0;
    sp4E = 0x2A;
    sp48 = 0x40;
    sp49 = 0xB;
    sp4A = 0x6A;
    sp4B = 0xFF;
    sp4F = (random_u32() % 156U) + 0x64;
    sp50 = 0xFF;
    sp94 = 3;
    sp95 = 3;
    temp_f6 = random_float() * 202.0f;
    sp64 = arg2;
    sp68 = arg3;
    sp6C = arg4;
    temp_f2 = temp_f6 + 101.0f;
    sp5C = temp_f2;
    sp60 = temp_f2;
    sp24 = random_u32();
    func_15143794(arg8, (s16) ((sp24 % 21U) - 0x14), ((random_float() * D_800AA110) + 500.0f) * D_800AA114, &sp7C);
    sp8C = 0xE05;
    sp88 = 0.0f;
    if (random_u32() & 1) {
        sp8C |= 0x40;
    }
    if (random_u32() & 1) {
        sp8C |= 0x80;
    }
    sp96 = 6;
    sp97 = -1;
    sp52 = 0xF;
    sp54 = 0x11;
    sp56 = 0x19;
    sp58 = D_800AA118;
    sp2C = D_800AA11C;
    temp_v0 = func_15130374(&sp34, 1, 4, arg14, 1);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0xA8, (s16 *) &sp2C, 4);
    }
    return 1;
}

s32 func_151AFEA4(void *arg0, void * arg1) {
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
