/**
 * Auto-decompiled from asm/1C0B10.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


u32 random_u32();                /* extern */
f32 random_float();                                /* extern */
void * func_15134DAC();                   /* extern */
void * func_15142314();                       /* extern */
void * func_15152520();            /* extern */
void * func_15157898(); /* extern */
s32 func_1515C0F8();         /* extern */
extern f32 D_800A81C0;
extern f32 D_800A81C4;
extern f32 D_800A81C8;
extern f32 D_800A81CC;
extern f32 D_800A81D0;
extern f32 D_800A81D4;
extern f32 D_800A81D8;
extern f32 D_800A81DC;
extern f32 D_800A81E0;
extern f32 D_800A81E4;
extern f32 D_800A81E8;
extern f32 D_800A81EC;
extern f32 D_800A81F0;
extern f32 D_800A81F4;
extern f32 D_800A81F8;
extern f32 D_800A81FC;
extern f32 D_800A8200;
extern f32 D_800A8204;
extern f32 D_800A8208;

void func_15193660(void *arg0, s32 arg1, s32 arg2) {
    s16 sp94;
    s16 sp92;
    s8 sp91;
    s8 sp90;
    s8 sp8F;
    s8 sp8E;
    s8 sp8D;
    s8 sp8C;
    s8 sp8B;
    s8 sp8A;
    s8 sp89;
    s8 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    s32 sp5C;
    s32 sp58;
    s32 sp54;
    s16 sp52;
    s16 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    s16 sp3A;
    s16 sp38;
    s16 sp36;
    s16 sp34;
    void * sp28;
    s32 sp24;
    s32 sp20;
    s32 temp_v0;

    if ((arg0 != NULL) && ((*(s32 *)((char *)(arg0) + 0x0)) != 0)) {
        temp_v0 = (*(s32 *)((char *)(arg0) + 0x1D4));
        if (temp_v0 != 0) {
            func_15142314(temp_v0, 0xA, &sp28);
            sp20 = 8;
            sp3C = D_800A81C8;
            sp24 = 7;
            sp38 = -0x21;
            sp3A = 0x18;
            sp50 = 0x28;
            sp52 = 0x23;
            sp54 = 0xA0;
            sp58 = 0x13;
            sp90 = 0x21;
            sp88 = 0xFF;
            sp34 = 0;
            sp36 = 0xFF;
            sp5C = 0;
            sp89 = 0xFF;
            sp8A = 0xFF;
            sp8B = 0xFF;
            sp8C = 0xFF;
            sp8D = 0xFF;
            sp8E = 0xFF;
            sp8F = 0xFF;
            sp91 = 0xF;
            sp92 = 0x19;
            sp94 = 0xA;
            sp78 = D_800A81C0;
            sp70 = D_800A81C0;
            sp84 = D_800A81C4;
            sp7C = D_800A81C4;
            sp40 = D_800A81CC;
            sp44 = D_800A81D0;
            sp48 = D_800A81D4;
            sp4C = D_800A81D8;
            sp64 = D_800A81DC;
            sp60 = 0.0f;
            sp6C = 0.0f;
            sp74 = 0.0f;
            sp80 = 0.0f;
            sp68 = D_800A81E0;
            func_15152520(0, D_800A81C4, &sp20, arg1, arg2);
        }
    }
}

void func_151937F4(void *arg0, void * arg1, void * arg2) {
    s8 sp55;
    s8 sp54;
    f32 sp50;
    s8 sp4C;
    s8 sp4B;
    s8 sp4A;
    s16 sp46;
    s16 sp44;
    s16 sp42;
    s8 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    s8 sp24;
    void *sp20;
    u8 sp1C;

    if ((arg0 != NULL) && ((*(s32 *)((char *)(arg0) + 0x0)) != 0)) {
        sp28 = -28.0f;
        sp20 = arg0;
        sp24 = 0;
        sp40 = 2;
        sp42 = 0x1E;
        sp44 = 0x19;
        sp46 = 0x2EE;
        sp4A = 3;
        sp4B = 3;
        sp4C = -1;
        sp54 = 4;
        sp55 = -1;
        sp1C = (*(s32 *)((char *)(arg0) + 0x3B));
        sp2C = 6.0f;
        sp30 = 1.0f;
        sp34 = -58.0f;
        sp38 = -3.0f;
        sp3C = -31.0f;
        sp50 = D_800A81E4;
        func_15134DAC(&sp1C, 0, arg0);
    }
}

s32 func_151938E4(void *arg0) {
    (*(f32 *)((char *)(arg0) + 0x74)) = (f32) D_800A81E8;
    return 1;
}

void func_151938FC(void *arg0, void *arg1, void * arg2, void * arg3, f32 arg4, void *arg5) {
    s16 spDE;
    s16 spDC;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    s8 spC9;
    u8 spC8;
    void *spC4;
    s8 spC0;
    s8 spBF;
    s8 spBE;
    s8 spBD;
    s8 spBC;
    s8 spBB;
    s8 spBA;
    s8 spB9;
    s8 spB8;
    s8 spB5;
    s8 spB4;
    s32 spB0;
    s32 spAC;
    s32 spA8;
    s32 spA4;
    s32 spA0;
    s32 sp9C;
    s32 sp98;
    s32 sp94;
    s32 sp90;
    s16 sp8E;
    s8 sp8C;
    s8 sp8B;
    s8 sp8A;
    s8 sp89;
    s8 sp88;
    s8 sp84;
    f32 sp80;
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
    void *sp50;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f6;
    f32 temp_f8;

    if ((func_1515C0F8((*(s32 *)((char *)(arg5) + 0x1C)), &sp50, arg0) != 0) && ((*(s32 *)((char *)((*(s32 *)((char *)(arg5) + 0x1C))) + 0xAD)) == 0)) {
        temp_f2 = (*(s32 *)((char *)(sp50) + 0x0));
        temp_f12 = (*(s32 *)((char *)(sp50) + 0x4));
        temp_f14 = (*(s32 *)((char *)(sp50) + 0x8));
        if (!(sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12) + (temp_f14 * temp_f14)) < D_800A81EC)) {
            spC0 = 0;
            sp88 = 0x27;
            sp89 = 0;
            sp8A = 1;
            sp8B = -1;
            sp8C = -1;
            sp8E = (random_u32(temp_f12, temp_f14, arg0) % 41U) + 0x5A;
            sp90 = 0xA0;
            sp94 = 0x13;
            sp9C = 0x220405;
            spA0 = 0x40200;
            spB5 = 8;
            spA4 = 1;
            spA8 = 0x38;
            sp98 = 0;
            spB4 = 0;
            spAC = 0x80;
            spB0 = 0x20;
            spB8 = 0xFF;
            spB9 = 0xFF;
            spBA = 0xFF;
            spBB = 0xFF;
            spBC = 0xFF;
            spBD = 0xFF;
            spBE = 0xFF;
            spBF = 0xFF;
            spC4 = (*(s32 *)((char *)(arg5) + 0x1C));
            spC9 = 1;
            spC8 = (*(s32 *)((char *)((*(s32 *)((char *)(arg5) + 0x1C))) + 0x3B));
            (*(s32 *)((char *)&(spCC) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x0));
            (*(f32 *)((char *)&(spCC) + 0x4)) = (f32) (*(f32 *)((char *)(arg0) + 0x4));
            (*(f32 *)((char *)&(spCC) + 0x8)) = (f32) (*(f32 *)((char *)(arg0) + 0x8));
            temp_f10 = ((*(s32 *)((char *)(arg1) + 0x0)) - (*(s32 *)((char *)(arg0) + 0x0))) * (*(s32 *)((char *)(arg5) + 0x74));
            sp64 = temp_f10;
            temp_f8 = ((*(s32 *)((char *)(arg1) + 0x4)) - (*(s32 *)((char *)(arg0) + 0x4))) * (*(s32 *)((char *)(arg5) + 0x74));
            sp68 = temp_f8;
            temp_f16 = ((*(s32 *)((char *)(arg1) + 0x8)) - (*(s32 *)((char *)(arg0) + 0x8))) * (*(s32 *)((char *)(arg5) + 0x74));
            sp6C = temp_f16;
            spCC += temp_f10 * arg4;
            spD0 += temp_f8 * arg4;
            spD4 += temp_f16 * arg4;
            sp54 = random_float() * 360.0f;
            sp58 = random_float() * 360.0f;
            sp5C = random_float() * 360.0f;
            random_float();
            sp60 = 340.0f * D_800A81F0;
            temp_f6 = random_float() * 1000.0f;
            sp74 = 0.0f;
            sp70 = (temp_f6 + -500.0f) * D_800A81F4;
            sp78 = ((random_float() * 1000.0f) + -500.0f) * D_800A81F8;
            temp_f18 = (random_float() * 121.0f) + -135.0f;
            spDC = 0x19;
            spDE = 0xA;
            sp84 = 0xF;
            sp80 = D_800A8200;
            sp7C = temp_f18 * D_800A81FC;
            func_15157898(&sp88, &sp54, 0, random_float() * D_800A8204 * D_800A8208, 0, 0, 0, (s32) (*(s32 *)((char *)(arg5) + 0xC)), (s32) (*(s32 *)((char *)(arg5) + 0x1)));
        }
    }
}
