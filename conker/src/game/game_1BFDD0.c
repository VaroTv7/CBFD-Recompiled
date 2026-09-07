/**
 * Auto-decompiled from asm/1BFDD0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


u32 random_u32();                                /* extern */
f32 random_float();                                /* extern */
s32 func_15130374();            /* extern */
void * func_15143134();                   /* extern */
void * func_15143794();                /* extern */
void * func_15143874();              /* extern */
s32 func_1515C0F8();                 /* extern */
void * memcpy();                          /* extern */
extern f32 D_800A8180;
extern f32 D_800A8184;
extern f32 D_800A8188;
extern void *D_800A818C;
extern f32 D_800A8190;
extern f32 D_800A8194;
extern f32 D_800A8198;
extern f32 D_800A819C;
extern void *D_800A81A0;
extern f32 D_800A81A4;
extern f32 D_800A81A8;

void func_15192920(void *arg0) {
    f32 sp30;
    u8 sp2C;
    void *sp28;
    s32 temp_v0;

    if (arg0 != NULL) {
        sp28 = arg0;
        sp2C = (*(s32 *)((char *)(arg0) + 0x3B));
        sp30 = 0.0f;
        temp_v0 = func_151491F4(0x23, -1, 0x14, 1, 0x10, 0xC, 0xFF, 1);
        if (temp_v0 != 0) {
            memcpy(temp_v0 + 0x28, &sp28, 0xC);
        }
    }
}

void func_151929A4(void *arg0) {
    s8 spF7;
    s8 spF6;
    s8 spF5;
    s8 spF4;
    s32 spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    s16 spB6;
    s16 spB4;
    s16 spB2;
    s8 spB1;
    s8 spB0;
    s8 spAF;
    s8 spAE;
    s8 spAD;
    s8 spAC;
    s8 spAB;
    s8 spAA;
    s8 spA9;
    s8 spA8;
    s32 spA4;
    s32 spA0;
    s16 sp9E;
    s16 sp9C;
    s32 sp98;
    s32 sp94;
    void *sp8C;
    void *sp88;
    void * var_f0;
    f32 temp_f20;
    f32 temp_f2;
    s32 temp_s1;
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = (char *)(arg0) + 0x28;
    (*(f32 *)((char *)(temp_s0) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x8)) + ((312.0f + (random_float() * D_800A8180)) * D_800A8184 * D_800BE9A4));
    if (((*(s32 *)((char *)(temp_s0) + 0x8)) > 1.0f) && (func_1515C0F8((*(s32 *)((char *)(arg0) + 0x28)), &sp88) != 0)) {
        spB1 = 0x29;
        sp9C = 0xE03;
        sp94 = 0x200005;
        spAC = 0xB0;
        spAD = 0xA0;
        spAE = 0x2A;
        spA8 = 0x40;
        spA9 = 0xB;
        spAA = 0x6A;
        sp98 = 0;
        spA0 = 0;
        spA4 = 0;
        spAB = 0xFF;
        spB0 = 0xFF;
        spF4 = 3;
        spF5 = 3;
        spEC = 0xE05;
        spF6 = 0xA;
        spF7 = -1;
        spB2 = 0x14;
        spB4 = 0xC;
        spB6 = 0x23;
        temp_f20 = D_800A8190;
        spB8 = D_800A8188;
        sp8C = D_800A818C;
        spE8 = 0.0f;
        do {
            temp_s1 = random_u32() & 1;
            sp9E = (random_u32() % 31U) + 0x14;
            spAF = (random_u32() % 156U) + 0x64;
            temp_f2 = (random_float() * 150.0f) + 100.0f;
            spBC = temp_f2;
            spC0 = temp_f2;
            if (temp_s1 != 0) {
                var_f0 = 0x41A00000;
            } else {
                var_f0 = 0xC1A00000;
            }
            func_15143874((s16) ((s32) (*(s16 *)((char *)((*(s16 *)((char *)(arg0) + 0x28))) + 0x7A)) >> 8), var_f0, &spC4, &spCC);
            spC4 += (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x28))) + 0x14));
            spCC += (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x28))) + 0x1C));
            spEC &= ~0xC0;
            spC8 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x28))) + 0x180)) + 20.0f;
            if (random_u32() & 1) {
                spEC |= 0x40;
            }
            if (random_u32() & 1) {
                spEC |= 0x80;
            }
            spDC = (*(s32 *)((char *)(sp88) + 0x0)) * temp_f20;
            spE0 = (*(s32 *)((char *)(sp88) + 0x4)) * temp_f20;
            spE4 = (*(s32 *)((char *)(sp88) + 0x8)) * temp_f20;
            temp_v0 = func_15130374(&sp94, 1, 4, (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
            if (temp_v0 != 0) {
                memcpy(temp_v0 + 0xA8, &sp8C, 4);
            }
            (*(f32 *)((char *)(temp_s0) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x8)) - 1.0f);
        } while ((*(s32 *)((char *)(temp_s0) + 0x8)) > 1.0f);
    }
}

s32 func_15192D48(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp34;
    f32 sp30;
    u8 sp2C;
    void *sp28;
    s32 temp_v0;
    s32 var_v1;

    if (arg0 == NULL) {
        return 0;
    }
    sp28 = arg0;
    sp2C = (*(s32 *)((char *)(arg0) + 0x3B));
    sp30 = 0.0f;
    temp_v0 = func_151491F4(arg1, -1, 0x18, 1, 0x16, 0xC, (s32) arg2, arg3);
    var_v1 = temp_v0;
    if (temp_v0 != 0) {
        sp34 = temp_v0;
        memcpy(temp_v0 + 0x28, &sp28, 0xC);
        var_v1 = sp34;
    }
    return var_v1;
}

void func_15192DF0(void *arg0) {
    s8 sp107;
    s8 sp106;
    s8 sp105;
    s8 sp104;
    s32 spFC;
    f32 spF8;
    void * spEC;
    void * spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    s16 spC6;
    s16 spC4;
    s16 spC2;
    s8 spC1;
    s8 spC0;
    s8 spBF;
    s8 spBE;
    s8 spBD;
    s8 spBC;
    s8 spBB;
    s8 spBA;
    s8 spB9;
    s8 spB8;
    s32 spB4;
    s32 spB0;
    s16 spAE;
    s16 spAC;
    s32 spA8;
    s32 spA4;
    void *sp9C;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 temp_f10;
    f32 temp_f16;
    f32 temp_f2;
    s16 temp_s0;
    s16 temp_s4;
    s16 var_s0;
    s32 temp_v0_2;
    u32 temp_s1;
    void *temp_s2;
    void *temp_v0;

    temp_s2 = (char *)(arg0) + 0x28;
    (*(f32 *)((char *)(temp_s2) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s2) + 0x8)) + ((792.0f + (random_float() * D_800A8194)) * D_800A8198 * D_800BE9A4));
    temp_f2 = (*(s32 *)((char *)(temp_s2) + 0x8));
    if (temp_f2 > 1.0f) {
        temp_v0 = (*(s32 *)((char *)(arg0) + 0x28));
        if ((*(s32 *)((char *)(temp_v0) + 0x1D4)) == 0) {
            if (temp_f2 > 1.0f) {
                do {

                } while ((*(s32 *)((char *)(temp_s2) + 0x8)) > 1.0f);
            }
        } else {
            temp_s4 = ((s32) (*(s32 *)((char *)(temp_v0) + 0x7A)) >> 8) + 0x40;
            spC1 = 0x29;
            spAC = 0xE03;
            spA4 = 0x200005;
            spBC = 0xB0;
            spBD = 0xA0;
            spBE = 0x2A;
            spB8 = 0x40;
            spB9 = 0xB;
            spBA = 0x6A;
            spA8 = 0;
            spB0 = 0;
            spB4 = 0;
            spBB = 0xFF;
            spC0 = 0xFF;
            sp104 = 3;
            sp105 = 3;
            spFC = 0xE05;
            sp106 = 0xA;
            sp107 = -1;
            spC2 = 0x19;
            spC4 = 0xA;
            spC6 = 0x23;
            spC8 = D_800A819C;
            sp9C = D_800A81A0;
            spF8 = 0.0f;
            do {
                temp_s0 = (random_u32() % 51U) - 0x82;
                sp8C = (random_float() * 20.0f) + 30.0f;
                temp_f10 = random_float() * 60.0f;
                sp94 = 0.0f;
                sp90 = temp_f10 + -20.0f;
                if (random_u32() & 1) {
                    sp8C = -sp8C;
                    var_s0 = temp_s0 + temp_s4;
                } else {
                    var_s0 = temp_s4 - temp_s0;
                }
                spAE = (random_u32() % 11U) + 0x1E;
                spBF = (random_u32() % 101U) + 0x64;
                temp_f16 = (random_float() * 150.0f) + 100.0f;
                spD0 = temp_f16;
                spCC = temp_f16;
                func_15143134(&sp8C, &spD4, (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x28))) + 0x1D4)) + 0x40);
                temp_s1 = random_u32();
                func_15143794(var_s0, (s16) ((temp_s1 % 28U) - 0x19), random_float() * D_800A81A4 * D_800A81A8, &spEC);
                spFC &= ~0xC0;
                if (random_u32() & 1) {
                    spFC |= 0x40;
                }
                if (random_u32() & 1) {
                    spFC |= 0x80;
                }
                temp_v0_2 = func_15130374(&spA4, 1, 4, (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
                if (temp_v0_2 != 0) {
                    memcpy(temp_v0_2 + 0xA8, &sp9C, 4);
                }
                (*(f32 *)((char *)(temp_s2) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s2) + 0x8)) - 1.0f);
            } while ((*(s32 *)((char *)(temp_s2) + 0x8)) > 1.0f);
        }
    }
}

void func_15193234(void *arg0, void *arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_t6;
    s32 temp_v1;
    void *temp_v0;

    temp_t6 = arg2 & 0xFF;
    if (temp_t6 == 0x2D) {
        temp_v0 = (char *)(arg0) + 0x28;
        temp_a0 = (*(s32 *)((char *)(arg0) + 0x28));
        temp_v1 = (*(s32 *)((char *)(arg1) + 0x0));
        if (temp_v1 == temp_a0) {
            (*(s32 *)((char *)(arg0) + 0x28)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
            (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x9));
            return;
        }
        if ((*(s32 *)((char *)(arg1) + 0x4)) == temp_a0) {
            (*(s32 *)((char *)(arg0) + 0x28)) = temp_v1;
            (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x8));
        }
    } else if ((temp_t6 == 0) && (((*(u8 *)((char *)(arg1) + 0x0)) == (*(u8 *)((char *)(arg0) + 0x28))) || ((*(u8 *)((char *)(((char *)(arg0) + 0x28)) + 0x4)) == (u8) (*(u8 *)((char *)(arg1) + 0x4))))) {
        func_1516972C(arg0, temp_t6, arg0);
    }
}

void func_151932E0(void *arg0, void *arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_t6;
    s32 temp_v1;
    void *temp_v0;

    temp_t6 = arg2 & 0xFF;
    if (temp_t6 == 0x2D) {
        temp_v0 = (char *)(arg0) + 0x28;
        temp_a0 = (*(s32 *)((char *)(arg0) + 0x28));
        temp_v1 = (*(s32 *)((char *)(arg1) + 0x0));
        if (temp_v1 == temp_a0) {
            (*(s32 *)((char *)(arg0) + 0x28)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
            (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x9));
            return;
        }
        if ((*(s32 *)((char *)(arg1) + 0x4)) == temp_a0) {
            (*(s32 *)((char *)(arg0) + 0x28)) = temp_v1;
            (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x8));
        }
    } else if ((temp_t6 == 0) && (((*(u8 *)((char *)(arg1) + 0x0)) == (*(u8 *)((char *)(arg0) + 0x28))) || ((*(u8 *)((char *)(((char *)(arg0) + 0x28)) + 0x4)) == (u8) (*(u8 *)((char *)(arg1) + 0x4))))) {
        func_1516972C(arg0, temp_t6, arg0);
    }
}
