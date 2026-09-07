/**
 * Auto-decompiled from asm/E7380.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_150A3058();                /* extern */
s32 func_150AC9C0(); /* extern */
u32 random_u32();                                /* extern */
f32 random_float();                                /* extern */
s32 func_15145C90();                             /* extern */
void * func_151511FC();                    /* extern */
extern s8 D_80084060;
extern f32 D_8009FE10;
extern f32 D_8009FE14;
extern f32 D_8009FE18;
extern f32 D_8009FE1C;
extern f32 D_8009FE20;
extern f32 D_8009FE24;
extern f32 D_8009FE28;
extern f32 D_8009FE2C;
extern s32 func_151E7EF8;
extern s32 func_151E7F60;

void func_150B9ED0(void *arg0, f32 arg1, f32 arg2, u8 arg3, s32 arg4) {
    f32 sp138;
    f32 sp130;
    f32 sp12C;
    f32 sp128;
    s32 sp124;
    void * sp110;
    s32 sp10C;
    s16 sp108;
    s16 sp106;
    s32 spFC;
    s8 spFB;
    s8 spFA;
    s8 spF9;
    s8 spF8;
    s8 spF7;
    s8 spF6;
    s8 spF5;
    s8 spF4;
    s32 spF0;
    s32 spEC;
    s8 spEB;
    s8 spEA;
    s16 spE8;
    s32 spE4;
    f32 spE0;
    f32 spDC;
    s16 spDA;
    s16 spD8;
    s32 spD4;
    s32 spD0;
    s8 spCD;
    s8 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    s8 spB9;
    s8 spB8;
    s32 spB4;
    f32 spB0;
    f32 spAC;
    s16 spAA;
    s16 spA8;
    s16 spA6;
    s8 spA5;
    s8 spA4;
    f32 spA0;
    void * sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    void * sp74;
    s16 sp72;
    s16 sp70;
    u32 sp68;
    f32 sp60;
    f32 sp5C;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f16;
    f32 temp_f2;
    s32 *var_v0;
    s32 temp_t6;
    s32 var_v1;
    u32 temp_s0;

    if (arg0 != NULL) {
        var_v0 = &func_151E7EF8;
        var_v1 = 0;
        if ((u32) &func_151E7EF8 < (u32) &func_151E7F60) {
            do {
                temp_t6 = *var_v0;
                var_v0 += 4;
                var_v1 += ~temp_t6;
            } while ((u32) var_v0 < (u32) &func_151E7F60);
        }
        if (var_v1 != 0x3843095E) {
            D_80084060 = 0xFF;
        }
        if ((func_150A3058(2, (s16) (s32) (*(s16 *)((char *)(arg0) + 0x14)), (s16) (s32) (*(s16 *)((char *)(arg0) + 0x18)), (s16) (s32) (*(s16 *)((char *)(arg0) + 0x1C))) == 0) && (func_150A3058(1, (s16) (s32) (*(s16 *)((char *)(arg0) + 0x14)), (s16) (s32) (*(s16 *)((char *)(arg0) + 0x18)), (s16) (s32) (*(s16 *)((char *)(arg0) + 0x1C))) == 0)) {
            temp_f0 = (*(s32 *)((char *)(arg0) + 0x1C));
            temp_f12 = (*(s32 *)((char *)(arg0) + 0x14));
            temp_f2 = -(temp_f12 - arg1);
            temp_f16 = -(temp_f0 - arg2);
            sp138 = temp_f16;
            sp130 = temp_f2;
            if (func_150AC9C0(temp_f12, (*(s32 *)((char *)(arg0) + 0x18)) + 80.0f, temp_f0, temp_f2, 0.0f, temp_f16, 0, &sp110, &sp124, &sp128, &sp12C, 0, &sp10C, 0, 0.0f) != 0) {
                if (func_15145C90(sp10C) != 0) {
                    spEA = 6;
                    spEB = 0;
                    spE4 = 0x9F01;
                    spE8 = (random_u32() % 51U) + 0x64;
                    spEC = 0;
                    spF0 = 0;
                    spF4 = (random_u32() % 101U) + 0x9B;
                    spF5 = 0xFF;
                    spF6 = 0xFF;
                    spF7 = 0xFF;
                    spF8 = 0xFF;
                    spF9 = 0xFF;
                    spFC = 0x3B0002;
                    spFA = 0;
                    spFB = 7;
                    sp106 = 0x19;
                    sp108 = 0xA;
                    sp5C = random_float();
                    sp60 = random_float();
                    temp_s0 = random_u32();
                    sp68 = random_u32();
                    func_1513C650(&spE4, 0, 0, &sp110, sp124, sp128, sp12C, (sp5C * 20.0f) + 40.0f, (sp60 * 20.0f) + 40.0f, temp_s0 & 0xFF, (random_u32() & 1) + ((sp68 & 1) * 2), 3, 0xFF, 0, (s32) arg3, arg4);
                }
                sp70 = 0xF;
                sp72 = 0xA;
                (*(s32 *)((char *)&(sp74) + 0x0)) = (s32) (*(s32 *)((char *)&(sp124) + 0x0));
                (*(s32 *)((char *)&(sp74) + 0x4)) = (s32) (*(s32 *)((char *)&(sp124) + 0x4));
                (*(s32 *)((char *)&(sp74) + 0x8)) = (s32) (*(s32 *)((char *)&(sp124) + 0x8));
                sp84 = -0.0f;
                sp80 = -sp130;
                sp88 = -sp138;
                (*(s32 *)((char *)&(sp8C) + 0x0)) = (s32) (*(s32 *)((char *)&(sp110) + 0x0));
                (*(s32 *)((char *)&(sp8C) + 0x4)) = (s32) (*(s32 *)((char *)&(sp110) + 0x4));
                (*(s32 *)((char *)&(sp8C) + 0x8)) = (s32) (*(s32 *)((char *)&(sp110) + 0x8));
                (*(s32 *)((char *)&(sp8C) + 0xC)) = (s32) (*(s32 *)((char *)&(sp110) + 0xC));
                (*(u16 *)((char *)&(sp8C) + 0x10)) = (u16) (*(u16 *)((char *)&(sp110) + 0x10));
                spA0 = D_8009FE10;
                spAC = 7.0f;
                spB0 = 10.0f;
                spBC = D_8009FE14;
                spC0 = D_8009FE18;
                spA4 = 7;
                spA6 = 0x3B01;
                spA5 = 0;
                spA8 = 0x1A;
                spAA = 0x14;
                spB4 = 0x5C0001;
                spB8 = 0x64;
                spB9 = 0x9B;
                spCC = 0;
                spCD = 7;
                spD0 = 3;
                spD4 = 0xFF;
                spD8 = 0xA;
                spDA = 0x19;
                spC4 = D_8009FE1C;
                spC8 = D_8009FE20;
                spDC = D_8009FE24;
                spE0 = D_8009FE28;
                func_151511FC(&sp70, arg3, arg4);
            }
        }
    }
}

s32 func_150BA35C(void *arg0) {
    s16 temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x1C));
    if (temp_v0 < 0x40) {
        (*(s8 *)((char *)(arg0) + 0x28)) = (s8) (temp_v0 * 4);
    }
    return 1;
}

s32 func_150BA37C(void *arg0) {
    (*(f32 *)((char *)(arg0) + 0x114)) = (f32) ((*(f32 *)((char *)(arg0) + 0x114)) + (D_8009FE2C * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x34)) = (f32) ((*(f32 *)((char *)(arg0) + 0x34)) + ((*(f32 *)((char *)(arg0) + 0x110)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x38)) = (f32) ((*(f32 *)((char *)(arg0) + 0x38)) + ((*(f32 *)((char *)(arg0) + 0x114)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x3C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x3C)) + ((*(f32 *)((char *)(arg0) + 0x118)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x40)) = (f32) ((*(f32 *)((char *)(arg0) + 0x40)) + ((*(f32 *)((char *)(arg0) + 0x11C)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x44)) = (f32) ((*(f32 *)((char *)(arg0) + 0x44)) + ((*(f32 *)((char *)(arg0) + 0x120)) * D_800BE9A4));
    return 1;
}

s32 func_150BA424(void *arg0) {
    f32 temp_f0;
    s8 temp_t6;
    s8 var_v0;
    s8 var_v1;

    temp_f0 = (*(s32 *)((char *)(arg0) + 0x38)) - (*(s32 *)((char *)(arg0) + 0x124));
    if (temp_f0 < 0.0f) {
        return 0;
    }
    temp_t6 = (*(s32 *)((char *)(arg0) + 0x1C)) * 0x10;
    var_v0 = temp_t6;
    if (temp_t6 >= 0x100) {
        var_v0 = -1;
    }
    var_v1 = (s32) temp_f0 * 4;
    if (var_v1 >= 0x100) {
        var_v1 = -1;
    }
    if (var_v1 < var_v0) {
        (*(s32 *)((char *)(arg0) + 0x5C)) = var_v1;
    } else {
        (*(s32 *)((char *)(arg0) + 0x5C)) = var_v0;
    }
    if ((s32) (u8) (*(s32 *)((char *)(arg0) + 0x5C)) < 0) {
        return 0;
    }
    return 1;
}
