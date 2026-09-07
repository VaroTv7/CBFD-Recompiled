/**
 * Auto-decompiled from asm/1B8B60.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


u32 random_u32();                             /* extern */
f32 random_float();                                /* extern */
void * func_15132A4C();          /* extern */
void * func_151429E0();                  /* extern */
void * func_1518CA80();                          /* extern */
extern f32 D_800A7400;
extern f32 D_800A7404;
extern f32 D_800A7408;
extern f32 D_800A740C;

void func_1518B6B0(f32 arg0, f32 arg1, f32 arg2, s32 arg3, s32 arg4) {
    s16 sp140;
    s16 sp13E;
    s8 sp13C;
    s32 sp138;
    s8 sp136;
    s8 sp134;
    s8 sp133;
    s8 sp132;
    s8 sp131;
    s8 sp130;
    s8 sp12F;
    s8 sp12E;
    s8 sp12D;
    s8 sp12C;
    s32 sp128;
    s8 sp124;
    s16 sp122;
    s16 sp120;
    s32 sp11C;
    f32 sp118;
    f32 sp114;
    f32 sp110;
    f32 sp10C;
    f32 sp108;
    f32 sp104;
    f32 sp100;
    f32 spFC;
    f32 spF8;
    f32 spF4;
    f32 spF0;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    s8 spC5;
    s8 spC4;
    s8 spC3;
    s8 spC2;
    void * spC1;
    void * spC0;
    void * spBF;
    void * spBE;
    void * spBD;
    void * spBC;
    s16 spBA;
    s16 spB8;
    s16 spB6;
    s16 spB4;
    s16 spB2;
    s16 spB0;
    s16 spAE;
    s16 spAC;
    s16 spAA;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 temp_f12;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f28;
    f32 temp_f2;
    f32 temp_f30;
    s32 temp_s0;
    s32 temp_s1;
    s32 var_s2;

    sp122 = 4;
    spE8 = 1.0f;
    spEC = 1.0f;
    spF0 = 1.0f;
    sp11C = 0x29E8;
    sp124 = 0;
    sp128 = 0;
    sp12C = 0xFF;
    sp12D = 1;
    sp12E = 0;
    sp12F = 0;
    sp130 = 0;
    sp131 = 0;
    sp132 = 0;
    sp133 = 0;
    sp134 = 0;
    sp136 = 2;
    sp138 = 0;
    sp13C = 0;
    sp13E = 0x4000;
    sp140 = 0;
    spD0 = D_800A7400;
    sp114 = 0.0f;
    sp118 = D_800A7404;
    var_s2 = (random_u32() & 7) + 3;
    if (var_s2 > 0) {
        do {
            temp_f24 = (random_float() * D_800A7408) + D_800A740C;
            temp_s0 = random_u32() & 0xFF;
            temp_s1 = (-0x10 - (random_u32() & 0x1F)) & 0xFF;
            temp_f26 = (random_float() * 10.0f) + 5.0f;
            temp_f20 = func_151423D8((temp_s0 - 0x40) & 0xFF);
            temp_f22 = func_151423D8(temp_s0 & 0xFF);
            temp_f28 = func_151423D8((temp_s1 - 0x40) & 0xFF);
            temp_f30 = func_151423D8(temp_s1 & 0xFF);
            temp_f2 = random_float() * 20.0f;
            spF8 = arg1;
            temp_f12 = temp_f26 * temp_f30;
            spF4 = (temp_f2 * temp_f20) + arg0;
            spFC = (temp_f2 * temp_f22) + arg2;
            sp100 = temp_f12 * temp_f20;
            sp104 = -temp_f26 * temp_f28;
            sp108 = temp_f12 * temp_f22;
            sp120 = (random_u32(temp_f12) & 0x1F) + 0x14;
            spCC = temp_f24;
            spD4 = temp_f24;
            spD8 = temp_f24;
            spDC = random_float() * 360.0f;
            spE0 = random_float() * 360.0f;
            spE4 = random_float() * 360.0f;
            sp10C = 25.0f - (random_float() * 50.0f);
            sp110 = 25.0f - (random_float() * 50.0f);
            func_15132A4C(&spCC, 3, 0xFF, 0, arg3 & 0xFF, arg4);
            var_s2 -= 1;
        } while (var_s2 != 0);
    }
    spAA = 0x1F4;
    spAC = 0x1F4;
    sp94 = arg0;
    sp98 = arg1;
    sp9C = arg2;
    spAE = (random_u32() & 0xF) + 0x32;
    spB0 = (random_u32() & 0xF) + 0x32;
    spB2 = 0;
    spB4 = 0;
    spB6 = (random_u32() % 201U) + 0x12C;
    spB8 = 0;
    spBA = 0x258;
    func_151429E0(1, &spBC, &spBD, &spBE);
    func_151429E0(1, &spBF, &spC0, &spC1);
    spC2 = 0xFF;
    spC3 = 0xFF;
    spC4 = 0xA;
    spC5 = 0;
    func_1518CA80(&sp94, 1);
}
