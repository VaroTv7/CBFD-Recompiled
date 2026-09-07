/**
 * Auto-decompiled from asm/1D0840.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


u32 random_u32();                             /* extern */
f32 random_float();                                /* extern */
s32 func_15130374();            /* extern */
void * func_1513418C();                  /* extern */
void *func_1513F4E4();                  /* extern */
s32 func_15142B7C();                       /* extern */
s32 func_15142C10();         /* extern */
s32 func_15142CF0(); /* extern */
s32 func_15142E24(); /* extern */
void *func_15142FBC();          /* extern */
void * func_15143134();              /* extern */
void *func_15147A80(); /* extern */
void * func_15153634();                  /* extern */
void * func_15160A58(); /* extern */
void *func_15167A68();        /* extern */
void * func_151D5D60();    /* extern */
void * memcpy(); /* extern */
void *func_151A3504();
void func_151A4590();
void func_151A499C();
s32 func_151A4E34();                /* static */
void func_151A4E9C();                     /* static */
extern s32 D_8008F900;
extern s32 D_8008F904;
extern s32 D_80090CD4;
extern f32 D_800A8D50;
extern f32 D_800A8D54;
extern f32 D_800A8D58;
extern f32 D_800A8D5C;
extern f32 D_800A8D60;
extern f32 D_800A8D64;
extern s32 D_800A8D70;
extern s32 D_800D2C9C;

void func_151A3390(void *arg0, s32 arg1) {
    s8 sp96;
    s8 sp95;
    s8 sp94;
    s8 sp93;
    s8 sp92;
    s8 sp91;
    s8 sp90;
    f32 sp8C;
    f32 sp88;
    s16 sp84;
    s16 sp82;
    s16 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    s8 sp6D;
    u8 sp6C;
    void *sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;

    sp68 = arg0;
    sp6C = (*(s32 *)((char *)(arg0) + 0x3B));
    sp6D = 1;
    sp70 = 0.0f;
    sp74 = 0.0f;
    sp78 = 0.0f;
    sp93 = 1;
    sp94 = 0xFF;
    sp95 = 8;
    sp96 = 0x1F;
    sp80 = 0xAA;
    sp82 = 0x28;
    sp84 = 7;
    sp90 = 2;
    sp91 = 4;
    sp92 = 1;
    sp7C = D_800A8D50;
    sp88 = 30.0f;
    sp8C = D_800A8D54;
    func_151A3504(&sp68, arg1);
    func_151A4590(arg0, arg1);
    func_151A499C(arg0, arg1);
    func_10010154(0x1AA, arg0, 0x55F0, 0x3E8, 0xFA0);
    sp5C = 0.0f;
    sp60 = 0.0f;
    sp64 = 0.0f;
    func_15160A58(arg0, 1, &sp5C, 2, 0x12C, 0x50, 0xFF, 0xFF, 0x75, 0xFF, 0, -1, 0, 0, (s32) arg1, 1);
}

void *func_151A3504(void **arg0, s32 arg1) {
    s8 spA1;
    s32 sp9C;
    u16 sp9A;
    s16 sp98;
    void * sp8C;
    s8 sp88;
    f32 sp84;
    s8 sp80;
    f32 sp7C;
    void * sp70;
    s8 sp6C;
    void *sp3C;
    void *sp38;
    void *temp_v0;
    void *var_v1;

    if (*arg0 == NULL) {
        return NULL;
    }
    memcpy(&sp3C, arg0, 0x30, arg0);
    sp80 = 0;
    spA1 = 0x32;
    sp9A = 2;
    sp98 = 0x3E8;
    sp6C = 6;
    sp88 = 0;
    sp7C = 0.0f;
    sp84 = 0.0f;
    if (func_151A4E34(&sp3C, &sp8C) != 0) {
        (*(s32 *)((char *)&(sp70) + 0x0)) = (s32) (*(s32 *)((char *)&(sp8C) + 0x0));
        (*(s32 *)((char *)&(sp70) + 0x4)) = (s32) (*(s32 *)((char *)&(sp8C) + 0x4));
        (*(s32 *)((char *)&(sp70) + 0x8)) = (s32) (*(s32 *)((char *)&(sp8C) + 0x8));
        sp9A |= 4;
    }
    sp9C = 8;
    temp_v0 = func_15147A80(&sp8C, 0x50, 0x18, 6, 6, 6, 0, 0, 0, (s32) arg1, 0);
    var_v1 = temp_v0;
    if (temp_v0 != NULL) {
        sp38 = temp_v0;
        memcpy((*(s32 *)((char *)(temp_v0) + 0x98)), &sp3C, 0x50);
        var_v1 = sp38;
    }
    return var_v1;
}

s32 func_151A361C(void *arg0) {
    s16 temp_a3;
    s32 temp_v1;
    s8 var_a1;
    void *temp_a2;
    void *temp_t8;
    void *temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x98));
    temp_v1 = (*(s32 *)((char *)(arg0) + 0x94));
    if (((*(s32 *)((char *)(arg0) + 0x2C)) < 2) && ((*(s32 *)((char *)(temp_v0) + 0x30)) & 1)) {
        return 0;
    }
    (*(u8 *)((char *)(temp_v0) + 0x4C)) = (u8) ((*(u8 *)((char *)(temp_v0) + 0x4C)) + ((*(u8 *)((char *)(temp_v0) + 0x2A)) * D_800BE9E4));
    var_a1 = (*(s32 *)((char *)(arg0) + 0x2E));
    if (var_a1 != (*(s32 *)((char *)(arg0) + 0x2D))) {
        do {
            var_a1 -= 1;
            if (var_a1 < 0) {
                var_a1 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
            }
            temp_a2 = (var_a1 * 0x18) + temp_v1;
            temp_a3 = (*(s32 *)((char *)(temp_a2) + 0x12));
            if (temp_a3 > 0) {
                (*(s16 *)((char *)(temp_a2) + 0x12)) = (s16) (temp_a3 - D_800BE9E4);
            } else {
                (*(s16 *)((char *)(temp_a2) + 0x10)) = (s16) ((*(s16 *)((char *)(temp_a2) + 0x10)) - (D_800BE9E4 * (*(s16 *)((char *)(temp_v0) + 0x1C))));
            }
            (*(s32 *)((char *)(temp_a2) + 0x14)) = 0xFF;
            (*(f32 *)((char *)(temp_a2) + 0xC)) = (f32) ((*(f32 *)((char *)(temp_a2) + 0xC)) + (D_800BE9A4 * (*(f32 *)((char *)(temp_v0) + 0x24))));
            if ((*(s32 *)((char *)(temp_a2) + 0x10)) < 0) {
                (*(u8 *)((char *)(temp_v0) + 0x30)) = (u8) ((*(u8 *)((char *)(temp_v0) + 0x30)) & ~2);
                if (var_a1 != (*(s32 *)((char *)(arg0) + 0x2D))) {
                    do {
                        (*(s8 *)((char *)(arg0) + 0x2D)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2D)) + 1);
                        if ((*(s32 *)((char *)(arg0) + 0x25)) == (*(s32 *)((char *)(arg0) + 0x2D))) {
                            (*(s32 *)((char *)(arg0) + 0x2D)) = 0;
                        }
                        (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2C)) - 1);
                    } while (var_a1 != (*(s32 *)((char *)(arg0) + 0x2D)));
                }
                (*(s32 *)((char *)((temp_v1 + ((*(s32 *)((char *)(arg0) + 0x2D)) * 0x18))) + 0x10)) = 0;
            }
        } while (var_a1 != (*(s32 *)((char *)(arg0) + 0x2D)));
    }
    if ((*(s32 *)((char *)(arg0) + 0x2C)) > 0) {
        temp_t8 = temp_v1 + ((*(s32 *)((char *)(arg0) + 0x2D)) * 0x18);
        (*(s32 *)((char *)(arg0) + 0x54)) = (s32) (*(s32 *)((char *)(temp_t8) + 0x0));
        (*(s32 *)((char *)(arg0) + 0x58)) = (s32) (*(s32 *)((char *)(temp_t8) + 0x4));
        (*(s32 *)((char *)(arg0) + 0x5C)) = (s32) (*(s32 *)((char *)(temp_t8) + 0x8));
        return 1;
    }
    (*(s32 *)((char *)(arg0) + 0x54)) = 0;
    (*(s32 *)((char *)(arg0) + 0x58)) = 0;
    (*(s32 *)((char *)(arg0) + 0x5C)) = 0;
    return 1;
}

s32 func_151A37C0(void *arg0) {
    f32 sp110;
    f32 sp10C;
    void *spD4;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    void **sp94;
    f32 sp90;
    f32 sp84;
    f32 sp80;
    void * *temp_s0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f18;
    f32 temp_f26;
    f32 temp_f2;
    f32 var_f12;
    f32 var_f20;
    f32 var_f22;
    f32 var_f2;
    s32 temp_s6;
    s32 temp_v0_2;
    s32 var_v0;
    s8 temp_v0_4;
    u8 temp_t4;
    void **temp_s2;
    void **temp_v0_3;
    void *temp_s0_2;
    void *temp_v0;

    temp_s2 = (*(s32 *)((char *)(arg0) + 0x98));
    temp_s6 = (*(s32 *)((char *)(arg0) + 0x94));
    temp_v0 = (*(s32 *)((char *)(temp_s2) + 0x0));
    if ((*(s32 *)((char *)(temp_v0) + 0x0)) == 0) {
        return 0;
    }
    if ((*(s32 *)((char *)(temp_s2) + 0x4)) != (*(s32 *)((char *)(temp_v0) + 0x3B))) {
        return 0;
    }
    var_v0 = 0;
    temp_s0 = (char *)(arg0) + 0x10;
    if (!((*(s32 *)((char *)(arg0) + 0x1E)) & 4)) {
        if (func_151A4E34(temp_s2, temp_s0) != 0) {
            var_v0 = 1;
            (*(f32 *)((char *)(temp_s2) + 0x34)) = (f32) (*(f32 *)((char *)(arg0) + 0x10));
            (*(f32 *)((char *)(temp_s2) + 0x38)) = (f32) (*(f32 *)((char *)(temp_s0) + 0x4));
            (*(f32 *)((char *)(temp_s2) + 0x3C)) = (f32) (*(f32 *)((char *)(temp_s0) + 0x8));
            (*(u16 *)((char *)(arg0) + 0x1E)) = (u16) ((*(u16 *)((char *)(arg0) + 0x1E)) | 4);
            goto block_8;
        }
    } else {
block_8:
        if ((var_v0 == 0) && (func_151A4E34(temp_s2, (char *)(arg0) + 0x10) == 0)) {
            func_151A4E9C(arg0);
            memcpy(&spD4, temp_s2, 0x30);
            temp_v0_2 = func_151491F4(0x12C, -1, 0xA, 0, 5, 0x30, (s32) (*(s32 *)((char *)(arg0) + 0xC)), 0);
            if (temp_v0_2 != 0) {
                memcpy(temp_v0_2 + 0x28, &spD4, 0x30);
            }
        } else {
            temp_f18 = (*(s32 *)((char *)(arg0) + 0x10)) - (*(s32 *)((char *)(temp_s2) + 0x34));
            temp_f2 = (*(s32 *)((char *)(arg0) + 0x14)) - (*(s32 *)((char *)(temp_s2) + 0x38));
            temp_f12 = (*(s32 *)((char *)(arg0) + 0x18)) - (*(s32 *)((char *)(temp_s2) + 0x3C));
            if ((D_800A8D58 < fabsf(temp_f18)) || (D_800A8D58 < fabsf(temp_f2)) || (D_800A8D58 < fabsf(temp_f12))) {
                (*(f32 *)((char *)(temp_s2) + 0x40)) = (f32) ((*(f32 *)((char *)(temp_s2) + 0x40)) + (sqrtf((temp_f18 * temp_f18) + (temp_f2 * temp_f2) + (temp_f12 * temp_f12)) * (*(f32 *)((char *)(temp_s2) + 0x14))));
            }
            temp_f0 = (*(s32 *)((char *)(temp_s2) + 0x40));
            sp110 = temp_f12;
            sp10C = temp_f2;
            sp90 = temp_f0;
            if (temp_f0 > 1.0f) {
                temp_f0_2 = 1.0f / sp90;
                temp_v0_3 = (char *)(temp_s2) + 0x34;
                (*(s32 *)((char *)&(spB4) + 0x0)) = (*(s32 *)((char *)(temp_s2) + 0x34));
                var_f22 = (*(s32 *)((char *)(temp_s2) + 0x48)) + D_800BE9A4;
                (*(s32 *)((char *)&(spB4) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v0_3) + 0x4));
                (*(s32 *)((char *)&(spB4) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v0_3) + 0x8));
                temp_f14 = (*(s32 *)((char *)(temp_s2) + 0x20));
                sp94 = temp_v0_3;
                temp_f26 = var_f22 * temp_f0_2;
                var_f20 = temp_f14 + ((*(s32 *)((char *)(temp_s2) + 0x24)) * var_f22);
                var_f2 = sp110 * temp_f0_2;
                var_f12 = (temp_f14 - var_f20) * temp_f0_2;
                do {
                    temp_s0_2 = ((*(s32 *)((char *)(arg0) + 0x2E)) * 0x18) + temp_s6;
                    (*(f32 *)((char *)(temp_s0_2) + 0x0)) = (f32) (*(f32 *)((char *)&(spB4) + 0x0));
                    (*(s32 *)((char *)(temp_s0_2) + 0x4)) = (s32) (*(s32 *)((char *)&(spB4) + 0x4));
                    (*(s32 *)((char *)(temp_s0_2) + 0xC)) = var_f20;
                    (*(s32 *)((char *)(temp_s0_2) + 0x8)) = (s32) (*(s32 *)((char *)&(spB4) + 0x8));
                    (*(s16 *)((char *)(temp_s0_2) + 0x10)) = (s16) (*(s16 *)((char *)(temp_s2) + 0x18));
                    (*(s16 *)((char *)(temp_s0_2) + 0x12)) = (s16) (*(s16 *)((char *)(temp_s2) + 0x1A));
                    (*(u8 *)((char *)(temp_s0_2) + 0x15)) = (u8) (*(u8 *)((char *)(temp_s2) + 0x44));
                    sp80 = var_f12;
                    sp84 = var_f2;
                    temp_t4 = (*(u32 *)((char *)(temp_s2) + 0x44)) + (*(u32 *)((char *)(temp_s2) + 0x28)) + (random_u32(var_f12) % (u32) ((*(u32 *)((char *)(temp_s2) + 0x29)) + 1));
                    (*(s32 *)((char *)(temp_s2) + 0x44)) = temp_t4;
                    (*(s32 *)((char *)(temp_s0_2) + 0x14)) = 0xFF;
                    (*(s8 *)((char *)(arg0) + 0x2E)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2E)) + 1);
                    if ((*(s32 *)((char *)(arg0) + 0x25)) == (*(s32 *)((char *)(arg0) + 0x2E))) {
                        (*(s32 *)((char *)(arg0) + 0x2E)) = 0;
                    }
                    temp_v0_4 = (*(s32 *)((char *)(arg0) + 0x2D));
                    (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2C)) + 1);
                    if (temp_v0_4 == (*(s32 *)((char *)(arg0) + 0x2E))) {
                        (*(s8 *)((char *)(arg0) + 0x2D)) = (s8) (temp_v0_4 + 1);
                        if ((*(s32 *)((char *)(arg0) + 0x25)) == (*(s32 *)((char *)(arg0) + 0x2D))) {
                            (*(s32 *)((char *)(arg0) + 0x2D)) = 0;
                        }
                        (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2C)) - 1);
                    }
                    var_f20 += var_f12;
                    spB4 += temp_f18 * temp_f0_2;
                    spB8 += sp10C * temp_f0_2;
                    var_f22 -= temp_f26;
                    spBC += var_f2;
                    (*(f32 *)((char *)(temp_s2) + 0x40)) = (f32) ((*(f32 *)((char *)(temp_s2) + 0x40)) - 1.0f);
                } while ((*(s32 *)((char *)(temp_s2) + 0x40)) > 1.0f);
                (*(s32 *)((char *)(sp94) + 0x0)) = (void *) (*(s32 *)((char *)&(spB4) + 0x0));
                (*(s32 *)((char *)(sp94) + 0x4)) = (s32) (*(s32 *)((char *)&(spB4) + 0x4));
                (*(s32 *)((char *)(sp94) + 0x8)) = (s32) (*(s32 *)((char *)&(spB4) + 0x8));
                (*(s32 *)((char *)(temp_s2) + 0x48)) = var_f22;
            }
        }
    }
    return 1;
}

void *func_151A3BE4(void *arg0, void *arg1, s32 arg2) {
    void *sp124;
    f32 spE4;
    f32 spD8;
    s32 spD4;
    s8 spCF;
    s8 spCE;
    u8 spCD;
    s8 spCB;
    f32 temp_f0;
    f32 temp_f0_2;
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
    f32 temp_f28;
    f32 temp_f28_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 var_f18;
    f32 var_f18_2;
    f32 var_f20;
    f32 var_f20_2;
    f32 var_f22;
    f32 var_f22_2;
    s16 temp_v0_2;
    s16 temp_v1_2;
    s32 temp_a0;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_s2;
    s32 var_a0_2;
    s32 var_a2;
    s32 var_t0;
    s32 var_v0_2;
    s8 var_t1;
    s8 var_t3;
    s8 var_v0;
    s8 var_v1;
    u8 var_a0;
    u8 var_a1;
    u8 var_a1_2;
    u8 var_t2;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s4;
    void *temp_s5;
    void *temp_t5;
    void *temp_t6;
    void *temp_t6_2;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_3;
    void *var_s0;
    void *var_v1_2;

    f32 spDC;
    f32 spE0;
    f32 spE8;
    f32 spEC;
    var_s0 = arg1;
    if ((*(s32 *)((char *)(arg0) + 0x2C)) >= 2) {
        func_151D5D60((char *)(arg0) + 0x84, arg2, ((*(s32 *)((char *)(arg0) + 0x25)) << 5) + 0xA0, &sp124, 0);
        if (sp124 != NULL) {
            temp_s4 = (*(s32 *)((char *)(arg0) + 0x98));
            temp_s2 = (*(s32 *)((char *)(arg0) + 0x94));
            temp_s5 = (arg2 * 0x9A0) + D_800DBFF0 + 0x2F8;
            spCB = 1;
            var_v1 = 0;
            if ((*(s32 *)((char *)(temp_s4) + 0x30)) & 2) {
                var_a0 = (*(s32 *)((char *)(temp_s4) + 0x2B));
                var_v0 = (*(s32 *)((char *)(arg0) + 0x2D));
loop_4:
                temp_lo = var_v0 * 0x18;
                var_v0 += 1;
                (*(s32 *)((char *)((temp_s2 + temp_lo)) + 0x14)) = var_v1;
                var_v1 = (var_v1 + (*(s32 *)((char *)(temp_s4) + 0x2C))) & 0xFF;
                if (var_v0 == (*(s32 *)((char *)(arg0) + 0x25))) {
                    var_v0 = 0;
                }
                var_a0 = (u8) (s16) (var_a0 - 1);
                if ((var_a0 != 0) && (var_v0 != (*(s32 *)((char *)(arg0) + 0x2E)))) {
                    goto loop_4;
                }
            }
            if ((*(s32 *)((char *)(temp_s4) + 0x30)) & 4) {
                var_a2 = 0;
                var_a1 = (*(s32 *)((char *)(temp_s4) + 0x2D));
                var_v0_2 = (*(s32 *)((char *)(arg0) + 0x2E)) - 1;
                if (var_v0_2 < 0) {
                    var_v0_2 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                }
loop_12:
                temp_lo_2 = var_v0_2 * 0x18;
                var_v0_2 -= 1;
                temp_v1 = temp_s2 + temp_lo_2;
                var_a1 = (u8) (s16) (var_a1 - 1);
                (*(u8 *)((char *)(temp_v1) + 0x14)) = (u8) ((s32) ((*(u8 *)((char *)(temp_v1) + 0x14)) * var_a2) >> 8);
                var_a2 = (var_a2 + (*(s32 *)((char *)(temp_s4) + 0x2E))) & 0xFF;
                if (var_v0_2 < 0) {
                    var_v0_2 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                }
                if ((var_a1 != 0) && (var_v0_2 != (*(s32 *)((char *)(arg0) + 0x2E)))) {
                    goto loop_12;
                }
            }
            var_s0 = func_15142FBC(func_1513F4E4(func_15142CF0(func_15142C10(func_15142B7C(func_15142E24(var_s0, &D_80090CD4, 0, 0, 0, 0, 0x1F, 0, 0, &spCB, 3), 1, 0x160600), 0xFF, 0xFF, 0xFF, 0xFF, &spCB), 0, 0, 0, 0, 0, 0, &spCB), 6, &spCB), D_800D2C9C | 0x80000 | 0x2CA0, 0x5049D8, &spCB);
            if ((*(s32 *)((char *)(arg0) + 0x1E)) & 2) {
                var_t0 = (*(s32 *)((char *)(arg0) + 0x2E)) - 1;
                if (var_t0 < 0) {
                    var_t0 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                }
                (*(s32 *)((char *)&(spD8) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x10));
                (*(s32 *)((char *)&(spD8) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x14));
                var_v1_2 = temp_s2 + (var_t0 * 0x18);
                (*(s32 *)((char *)&(spD8) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x18));
                var_t3 = ((*(s32 *)((char *)(var_v1_2) + 0x15)) + (*(s32 *)((char *)(temp_s4) + 0x4C))) & 0xFF;
                var_a1_2 = ((s32) ((*(s32 *)((char *)(var_v1_2) + 0x14)) * (*(s32 *)((char *)(var_v1_2) + 0x10))) >> 8) & 0xFF;
            } else {
                var_a0_2 = (*(s32 *)((char *)(arg0) + 0x2E)) - 1;
                if (var_a0_2 < 0) {
                    var_a0_2 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                }
                var_t0 = var_a0_2 - 1;
                if (var_t0 < 0) {
                    var_t0 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                }
                temp_v0 = temp_s2 + (var_a0_2 * 0x18);
                (*(s32 *)((char *)&(spD8) + 0x0)) = (*(s32 *)((char *)(temp_v0) + 0x0));
                (*(s32 *)((char *)&(spD8) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v0) + 0x4));
                (*(s32 *)((char *)&(spD8) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v0) + 0x8));
                var_t3 = ((*(s32 *)((char *)(temp_v0) + 0x15)) + (*(s32 *)((char *)(temp_s4) + 0x4C))) & 0xFF;
                var_v1_2 = temp_s2 + (var_t0 * 0x18);
                var_a1_2 = ((s32) ((*(s32 *)((char *)(temp_v0) + 0x14)) * (*(s32 *)((char *)(temp_v0) + 0x10))) >> 8) & 0xFF;
            }
            (*(s32 *)((char *)&(spE4) + 0x0)) = (*(s32 *)((char *)(var_v1_2) + 0x0));
            (*(s32 *)((char *)&(spE4) + 0x4)) = (s32) (*(s32 *)((char *)(var_v1_2) + 0x4));
            (*(s32 *)((char *)&(spE4) + 0x8)) = (s32) (*(s32 *)((char *)(var_v1_2) + 0x8));
            temp_f20 = spD8 - (*(s32 *)((char *)(temp_s5) + 0x0));
            temp_f22 = spDC - (*(s32 *)((char *)(temp_s5) + 0x4));
            temp_f24 = spE0 - (*(s32 *)((char *)(temp_s5) + 0x8));
            temp_f2 = spDC - spE8;
            temp_f18 = spE0 - spEC;
            var_t1 = ((*(s32 *)((char *)(var_v1_2) + 0x15)) + (*(s32 *)((char *)(temp_s4) + 0x4C))) & 0xFF;
            temp_f0 = spD8 - spE4;
            var_t2 = ((s32) ((*(s32 *)((char *)(var_v1_2) + 0x14)) * (*(s32 *)((char *)(var_v1_2) + 0x10))) >> 8) & 0xFF;
            temp_f12 = (temp_f2 * temp_f24) - (temp_f22 * temp_f18);
            temp_f14 = (temp_f18 * temp_f20) - (temp_f24 * temp_f0);
            temp_f16 = (temp_f0 * temp_f22) - (temp_f20 * temp_f2);
            temp_f28 = (temp_f12 * temp_f12) + (temp_f14 * temp_f14) + (temp_f16 * temp_f16);
            if (temp_f28 == 0.0f) {
                var_f18 = 0.0f;
                var_f20 = 0.0f;
                var_f22 = 0.0f;
            } else {
                temp_f2_2 = (*(s32 *)((char *)(var_v1_2) + 0xC)) / sqrtf(temp_f28);
                var_f18 = temp_f12 * temp_f2_2;
                var_f20 = temp_f14 * temp_f2_2;
                var_f22 = temp_f16 * temp_f2_2;
            }
            temp_v0_2 = var_t3 << 6;
            (*(s16 *)((char *)(sp124) + 0x0)) = (s16) (s32) (spD8 + var_f18);
            (*(s16 *)((char *)(sp124) + 0x2)) = (s16) (s32) (spDC + var_f20);
            (*(s16 *)((char *)(sp124) + 0x4)) = (s16) (s32) (spE0 + var_f22);
            (*(s32 *)((char *)(sp124) + 0x8)) = temp_v0_2;
            (*(s32 *)((char *)(sp124) + 0xA)) = 0x7C0;
            (*(s32 *)((char *)(sp124) + 0xC)) = 0xFF;
            (*(s32 *)((char *)(sp124) + 0xD)) = 0xFF;
            (*(s32 *)((char *)(sp124) + 0xE)) = 0xFF;
            (*(s32 *)((char *)(sp124) + 0xF)) = var_a1_2;
            (*(s32 *)((char *)(sp124) + 0x6)) = 0;
            temp_t5 = (char *)(sp124) + 0x10;
            sp124 = temp_t5;
            (*(s16 *)((char *)(sp124) + 0x10)) = (s16) (s32) (spD8 - var_f18);
            (*(s16 *)((char *)(sp124) + 0x2)) = (s16) (s32) (spDC - var_f20);
            (*(s16 *)((char *)(sp124) + 0x4)) = (s16) (s32) (spE0 - var_f22);
            (*(s32 *)((char *)(sp124) + 0x8)) = temp_v0_2;
            (*(s32 *)((char *)(sp124) + 0xA)) = 0;
            (*(s32 *)((char *)(sp124) + 0xC)) = 0xFF;
            (*(s32 *)((char *)(temp_t5) + 0xD)) = 0xFF;
            (*(s32 *)((char *)(sp124) + 0xE)) = 0xFF;
            (*(s32 *)((char *)(sp124) + 0xF)) = var_a1_2;
            (*(s32 *)((char *)(sp124) + 0x6)) = 0;
            sp124 = (char *)(sp124) + 0x10;
            do {
                temp_f20_2 = spE4 - (*(s32 *)((char *)(temp_s5) + 0x0));
                temp_f22_2 = spE8 - (*(s32 *)((char *)(temp_s5) + 0x4));
                temp_v1_2 = var_t1 << 6;
                temp_f24_2 = spEC - (*(s32 *)((char *)(temp_s5) + 0x8));
                temp_f2_3 = spDC - spE8;
                temp_f18_2 = spE0 - spEC;
                temp_f0_2 = spD8 - spE4;
                temp_f12_2 = (temp_f2_3 * temp_f24_2) - (temp_f22_2 * temp_f18_2);
                temp_f14_2 = (temp_f18_2 * temp_f20_2) - (temp_f24_2 * temp_f0_2);
                temp_f16_2 = (temp_f0_2 * temp_f22_2) - (temp_f20_2 * temp_f2_3);
                temp_f28_2 = (temp_f12_2 * temp_f12_2) + (temp_f14_2 * temp_f14_2) + (temp_f16_2 * temp_f16_2);
                if (temp_f28_2 == 0.0f) {
                    var_f18_2 = 0.0f;
                    var_f20_2 = 0.0f;
                    var_f22_2 = 0.0f;
                } else {
                    temp_f2_4 = (*(s32 *)((char *)((temp_s2 + (var_t0 * 0x18))) + 0xC)) / sqrtf(temp_f28_2);
                    var_f18_2 = temp_f12_2 * temp_f2_4;
                    var_f20_2 = temp_f14_2 * temp_f2_4;
                    var_f22_2 = temp_f16_2 * temp_f2_4;
                }
                (*(s16 *)((char *)(sp124) + 0x0)) = (s16) (s32) (spE4 + var_f18_2);
                (*(s16 *)((char *)(sp124) + 0x2)) = (s16) (s32) (spE8 + var_f20_2);
                (*(s16 *)((char *)(sp124) + 0x4)) = (s16) (s32) (spEC + var_f22_2);
                (*(s32 *)((char *)(sp124) + 0x8)) = temp_v1_2;
                (*(s32 *)((char *)(sp124) + 0xA)) = 0x7C0;
                (*(s32 *)((char *)(sp124) + 0xC)) = 0xFF;
                (*(s32 *)((char *)(sp124) + 0xD)) = 0xFF;
                (*(s32 *)((char *)(sp124) + 0xE)) = 0xFF;
                (*(s32 *)((char *)(sp124) + 0xF)) = var_t2;
                (*(s32 *)((char *)(sp124) + 0x6)) = 0;
                temp_t6 = (char *)(sp124) + 0x10;
                sp124 = temp_t6;
                (*(s16 *)((char *)(sp124) + 0x10)) = (s16) (s32) (spE4 - var_f18_2);
                (*(s16 *)((char *)(sp124) + 0x2)) = (s16) (s32) (spE8 - var_f20_2);
                (*(s16 *)((char *)(sp124) + 0x4)) = (s16) (s32) (spEC - var_f22_2);
                (*(s32 *)((char *)(sp124) + 0x8)) = temp_v1_2;
                (*(s32 *)((char *)(sp124) + 0xA)) = 0;
                (*(s32 *)((char *)(sp124) + 0xC)) = 0xFF;
                (*(s32 *)((char *)(temp_t6) + 0xD)) = 0xFF;
                (*(s32 *)((char *)(sp124) + 0xE)) = 0xFF;
                (*(s32 *)((char *)(sp124) + 0xF)) = var_t2;
                (*(s32 *)((char *)(sp124) + 0x6)) = 0;
                sp124 = (char *)(sp124) + 0x10;
                (*(s32 *)((char *)(var_s0) + 0x0)) = 0x01004008;
                temp_s0 = (char *)(var_s0) + 8;
                (*(s32 *)((char *)(var_s0) + 0x4)) = (void *) ((char *)(sp124) - 0x40);
                (*(s32 *)((char *)(var_s0) + 0x8)) = 0x05000204;
                (*(s32 *)((char *)(temp_s0) + 0x4)) = 0;
                temp_s0_2 = (char *)(temp_s0) + 8;
                (*(s32 *)((char *)(temp_s0) + 0x8)) = 0x05020604;
                (*(s32 *)((char *)(temp_s0_2) + 0x4)) = 0;
                var_s0 = (char *)(temp_s0_2) + 8;
                if (var_t3 < var_t1) {
                    spD4 = var_t0;
                    spCF = var_t1;
                    spCD = var_t2;
                    spCE = var_t3;
                    memcpy((*(void ** *)&temp_f12_2), (*(void ** *)&temp_f14_2), sp124, (char *)(sp124) - 0x20, 0x20, 0xFF);
                    var_t1 = (s8) (u8) spCF;
                    var_t3 = (s8) (u8) spCE;
                    (*(s16 *)((char *)(sp124) - 0x18)) = (s16) ((*(s16 *)((char *)(sp124) - 0x18)) - 0x4000);
                    temp_t6_2 = (char *)(sp124) + 0x10;
                    sp124 = temp_t6_2;
                    (*(s16 *)((char *)(temp_t6_2) - 0x18)) = (s16) ((*(s16 *)((char *)(temp_t6_2) - 0x18)) - 0x4000);
                    sp124 = (char *)(sp124) + 0x10;
                }
                temp_a0 = var_t0;
                var_t0 -= 1;
                if (var_t0 < 0) {
                    var_t0 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                }
                if (temp_a0 != (*(s32 *)((char *)(arg0) + 0x2D))) {
                    var_t3 = var_t1 & 0xFF;
                    (*(s32 *)((char *)&(spD8) + 0x0)) = (*(s32 *)((char *)&(spE4) + 0x0));
                    (*(s32 *)((char *)&(spD8) + 0x4)) = (s32) (*(s32 *)((char *)&(spE4) + 0x4));
                    temp_v1_3 = temp_s2 + (var_t0 * 0x18);
                    (*(s32 *)((char *)&(spD8) + 0x8)) = (s32) (*(s32 *)((char *)&(spE4) + 0x8));
                    (*(s32 *)((char *)&(spE4) + 0x0)) = (*(s32 *)((char *)(temp_v1_3) + 0x0));
                    (*(s32 *)((char *)&(spE4) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v1_3) + 0x4));
                    (*(s32 *)((char *)&(spE4) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v1_3) + 0x8));
                    var_t1 = ((*(s32 *)((char *)(temp_v1_3) + 0x15)) + (*(s32 *)((char *)(temp_s4) + 0x4C))) & 0xFF;
                    var_t2 = ((s32) ((*(s32 *)((char *)(temp_v1_3) + 0x14)) * (*(s32 *)((char *)(temp_v1_3) + 0x10))) >> 8) & 0xFF;
                }
            } while (temp_a0 != (*(s32 *)((char *)(arg0) + 0x2D)));
        }
    }
    return var_s0;
}

void func_151A4590(void *arg0, s32 arg1) {
    s8 sp45;
    s8 sp44;
    s8 sp43;
    s8 sp42;
    s16 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    s8 sp28;
    void *sp24;
    u8 sp20;
    s32 sp1C;
    s32 sp18;

    if (arg0 != NULL) {
        sp18 = 0;
        sp1C = 0;
        sp28 = 1;
        sp40 = 0x64;
        sp42 = 0xA;
        sp43 = 1;
        sp44 = -1;
        sp45 = 0;
        sp24 = arg0;
        sp20 = (*(s32 *)((char *)(arg0) + 0x3B));
        sp2C = 0.0f;
        sp30 = 0.0f;
        sp34 = 0.0f;
        sp38 = D_800A8D5C;
        sp3C = 3.0f;
        func_1513418C(&sp18, 0, arg1 & 0xFF, 0);
    }
}

void func_151A4638(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, void *arg6) {
    s8 sp9B;
    s8 sp9A;
    s8 sp99;
    s8 sp98;
    s32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    s16 sp5A;
    s16 sp58;
    s16 sp56;
    s8 sp55;
    s8 sp54;
    s8 sp53;
    s8 sp52;
    s8 sp51;
    s8 sp50;
    s8 sp4F;
    s8 sp4E;
    s8 sp4D;
    s8 sp4C;
    s32 sp48;
    s32 sp44;
    s16 sp42;
    s16 sp40;
    s32 sp3C;
    s32 sp38;
    s16 sp32;
    s16 sp30;
    s16 sp2E;
    s16 sp2C;
    s16 sp2A;
    s16 sp28;
    f32 temp_f12;
    f32 temp_f2;
    s32 temp_v0;

    sp55 = 0x27;
    sp40 = 0x1401;
    sp38 = 0x200005;
    sp3C = 0;
    sp42 = (random_u32() % 5U) + 0xF;
    sp44 = 0;
    sp48 = 0;
    sp4C = 0x8A;
    sp4D = 0;
    sp4E = 0;
    sp4F = 0xFF;
    sp50 = 0;
    sp51 = 0;
    sp52 = 0;
    sp56 = 1;
    sp58 = 0xFF;
    sp5A = 1;
    sp5C = 1.0f;
    temp_f12 = (random_float() * 50.0f) + 500.0f;
    sp68 = arg0;
    temp_f2 = D_800A8D60 * D_800BE9A8;
    sp6C = arg1;
    sp70 = arg2;
    sp80 = -arg3 * temp_f2;
    sp60 = temp_f12;
    sp84 = -arg4 * temp_f2;
    sp90 = 0xD;
    sp98 = 1;
    sp99 = 1;
    sp64 = temp_f12;
    sp88 = -arg5 * temp_f2;
    sp8C = 0.0f;
    if (random_u32(temp_f12) & 1) {
        sp90 |= 0x40;
    }
    if (random_u32() & 1) {
        sp90 |= 0x80;
    }
    sp53 = 0xFF;
    sp54 = 0xFF;
    sp9A = 0;
    sp9B = -1;
    sp28 = 0x10;
    sp2A = 0xF;
    sp2C = 0xD;
    sp2E = 0x13;
    sp30 = 0x11;
    sp32 = -0x18;
    temp_v0 = func_15130374(&sp38, 0, 0xC, (*(s32 *)((char *)(arg6) + 0xC)), 1);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0xA8, (void **) &sp28, 0xC);
    }
}

s32 func_151A483C(void *arg0, void * arg1) {
    f32 temp_f0;
    s16 temp_v1;
    void *temp_v0;

    temp_v1 = (*(s32 *)((char *)(arg0) + 0x1A));
    temp_v0 = (char *)(arg0) + 0xA8;
    if (temp_v1 < (*(s32 *)((char *)(arg0) + 0xAC))) {
        (*(s8 *)((char *)(arg0) + 0x2B)) = (s8) (temp_v1 * (*(s8 *)((char *)(arg0) + 0xAE)));
    }
    if (temp_v1 < (*(s32 *)((char *)(temp_v0) + 0x8))) {
        temp_f0 = (f32) ((*(f32 *)((char *)(temp_v0) + 0xA)) * D_800BE9E4);
        (*(f32 *)((char *)(arg0) + 0x38)) = (f32) ((*(f32 *)((char *)(arg0) + 0x38)) + temp_f0);
        (*(f32 *)((char *)(arg0) + 0x3C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x3C)) + temp_f0);
    }
    if ((*(s32 *)((char *)(arg0) + 0x1A)) < (*(s32 *)((char *)(arg0) + 0xA8))) {
        (*(s32 *)((char *)(arg0) + 0x72)) = 1;
        (*(s32 *)((char *)(arg0) + 0x70)) = 2;
        (*(s32 *)((char *)(arg0) + 0x71)) = 2;
        (*(s32 *)((char *)(arg0) + 0x18)) = 0x5203;
        (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) ((*(s8 *)((char *)(arg0) + 0x1A)) * (*(s8 *)((char *)(temp_v0) + 0x2)));
    }
    return 1;
}

s32 func_151A4900(void *arg0, void * arg1) {
    f32 temp_f0;
    s16 temp_a1;
    void *temp_v1;

    temp_a1 = (*(s32 *)((char *)(arg0) + 0x1A));
    temp_v1 = (char *)(arg0) + 0xA8;
    if (temp_a1 < (*(s32 *)((char *)(arg0) + 0xAC))) {
        (*(s8 *)((char *)(arg0) + 0x2B)) = (s8) (temp_a1 * (*(s8 *)((char *)(arg0) + 0xAE)));
    }
    if (temp_a1 < (*(s32 *)((char *)(temp_v1) + 0x8))) {
        temp_f0 = (f32) ((*(f32 *)((char *)(temp_v1) + 0xA)) * D_800BE9E4);
        (*(f32 *)((char *)(arg0) + 0x38)) = (f32) ((*(f32 *)((char *)(arg0) + 0x38)) + temp_f0);
        (*(f32 *)((char *)(arg0) + 0x3C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x3C)) + temp_f0);
    }
    (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) ((*(s8 *)((char *)(arg0) + 0x1A)) * (*(s8 *)((char *)(temp_v1) + 0x2)));
    return 1;
}

void func_151A499C(void *arg0, s32 arg1) {
    f32 sp48;
    f32 sp44;
    f32 sp40;
    s8 sp3C;
    f32 sp38;
    f32 sp34;
    u8 sp30;
    void *sp2C;
    s32 temp_v0;

    sp2C = arg0;
    sp38 = 0.0f;
    sp3C = 1;
    sp40 = 0.0f;
    sp44 = 0.0f;
    sp48 = 0.0f;
    sp34 = D_800A8D64;
    sp30 = (*(s32 *)((char *)(arg0) + 0x3B));
    temp_v0 = func_151491F4(0x12C, -1, 5, 0, 1, 0x20, (s32) arg1, 0);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x28, &sp2C, 0x20);
    }
}

void func_151A4A38(void *arg0) {
    void * sp98;
    s8 sp90;
    s8 sp8F;
    s8 sp8E;
    s8 sp8D;
    s8 sp8C;
    s32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    s16 sp76;
    s16 sp74;
    s16 sp72;
    s16 sp70;
    void * sp64;
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
    s16 sp32;
    s8 sp30;
    s16 sp2E;
    s16 sp2C;
    s16 sp2A;
    void *sp24;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    temp_v0 = (char *)(arg0) + 0x28;
    if (((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x28))) + 0x0)) == 0) || (temp_v1 = (*(s32 *)((char *)(arg0) + 0x28)), ((*(s32 *)((char *)(temp_v1) + 0x0)) == 8)) || ((*(s32 *)((char *)(temp_v0) + 0x4)) != (*(s32 *)((char *)(temp_v1) + 0x3B)))) {
        (*(s32 *)((char *)(arg0) + 0xE)) = -1;
        (*(u8 *)((char *)(arg0) + 0xD)) = (u8) ((*(u8 *)((char *)(arg0) + 0xD)) | 1);
        return;
    }
    if (((*(s32 *)((char *)(temp_v1) + 0x1D4)) != 0) && (((*(s32 *)((char *)(temp_v1) + 0x74)) & 0xF) != 0xF)) {
        (*(f32 *)((char *)(temp_v0) + 0xC)) = (f32) ((*(f32 *)((char *)(temp_v0) + 0xC)) + ((*(f32 *)((char *)(temp_v0) + 0x8)) * D_800BE9A4));
        if ((*(s32 *)((char *)(temp_v0) + 0xC)) > 1.0f) {
            temp_v1_2 = (*(s32 *)((char *)(arg0) + 0x28));
            sp2A = ((s32) (*(s32 *)((char *)(temp_v1_2) + 0x76)) >> 8) - 0x40;
            sp24 = temp_v0;
            func_15143134((char *)(temp_v0) + 0x14, &sp98, (*(s32 *)((char *)(temp_v1_2) + 0x1D4)) + ((*(s32 *)((char *)(temp_v0) + 0x10)) << 6));
            sp2E = 0;
            sp2C = (s16) (s32) (*(s16 *)((char *)(sp24) + 0xC));
            (*(f32 *)((char *)(sp24) + 0xC)) = (f32) ((*(f32 *)((char *)(sp24) + 0xC)) - (f32) sp2C);
            sp30 = 0x28;
            sp32 = 0xC01;
            sp34 = 0x200005;
            sp38 = 0;
            sp3C = 0x17;
            sp3E = 0xD;
            sp40 = 0;
            sp44 = 0;
            sp48 = 0;
            sp49 = 0;
            sp4A = 0;
            sp4B = 0xFF;
            sp4C = 0;
            sp4D = 0;
            sp4E = 0;
            sp5C = 300.0f;
            sp60 = 400.0f;
            (*(s32 *)((char *)&(sp64) + 0x0)) = (s32) (*(s32 *)((char *)&(sp98) + 0x0));
            (*(s32 *)((char *)&(sp64) + 0x4)) = (s32) (*(s32 *)((char *)&(sp98) + 0x4));
            (*(s32 *)((char *)&(sp64) + 0x8)) = (s32) (*(s32 *)((char *)&(sp98) + 0x8));
            sp52 = 1;
            sp54 = 0;
            sp56 = 1;
            sp90 = 0;
            sp70 = sp2A - 0x19;
            sp72 = -0x2C;
            sp74 = 0x32;
            sp76 = 0x32;
            sp88 = 7;
            sp8E = 1;
            sp8F = 0;
            sp80 = -0.5f;
            sp84 = -0.5f;
            sp78 = 0.0f;
            sp58 = 1.0f;
            sp7C = 15.0f;
            if (random_u32() & 1) {
                sp88 |= 0x40;
            }
            if (random_u32() & 1) {
                sp88 |= 0x80;
            }
            sp4F = 0xFF;
            sp50 = 0;
            sp51 = 0xFF;
            sp8C = -1;
            sp8D = -1;
            func_15153634(&sp2C, 0xFF, (*(s32 *)((char *)(arg0) + 0xC)), (*(s32 *)((char *)(arg0) + 0x1)));
        }
    }
}

void func_151A4CE0(void *arg0, void *arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_t6;
    s32 temp_v1;
    void *temp_v0;

    temp_t6 = arg2 & 0xFF;
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x98));
    if (temp_t6 == 0) {
        if (((*(s32 *)((char *)(temp_v0) + 0x0)) == (*(s32 *)((char *)(arg1) + 0x0))) || ((*(s32 *)((char *)(temp_v0) + 0x4)) == (*(s32 *)((char *)(arg1) + 0x4)))) {
            func_151A4E9C((void *) temp_t6);
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

void func_151A4D88(void *arg0, void *arg1, s32 arg2) {
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

s32 func_151A4E34(void **arg0) {
    s32 temp_v1;
    void *temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x0));
    temp_v1 = (*(s32 *)((char *)(temp_v0) + 0x1D4));
    if (temp_v1 == 0) {
        return 0;
    }
    if (((*(s32 *)((char *)(temp_v0) + 0x74)) & 0xF) == 0xF) {
        return 0;
    }
    func_15143134((char *)(arg0) + 8, temp_v1 + ((*(s32 *)((char *)(arg0) + 0x5)) << 6), arg0);
    return 1;
}

void func_151A4E9C(void *arg0) {
    u8 temp_t0;
    void *temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x98));
    (*(s32 *)((char *)(arg0) + 0x30)) = 0;
    (*(u16 *)((char *)(arg0) + 0x1E)) = (u16) ((*(u16 *)((char *)(arg0) + 0x1E)) & 0xFFFD);
    temp_t0 = (*(s32 *)((char *)(temp_v0) + 0x30)) | 1;
    (*(s32 *)((char *)(temp_v0) + 0x30)) = temp_t0;
    (*(u8 *)((char *)(temp_v0) + 0x30)) = (u8) (temp_t0 | 4);
}

void func_151A4ECC(void *arg0) {
    u8 sp1B;
    s32 var_v1;
    void **temp_a0;
    void *temp_v0;

    var_v1 = 0;
    temp_a0 = (char *)(arg0) + 0x28;
    if ((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x28))) + 0x0)) == 0) {
        var_v1 = 1;
    }
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x28));
    if ((*(s32 *)((char *)(temp_a0) + 0x4)) != (*(s32 *)((char *)(temp_v0) + 0x3B))) {
        var_v1 = 1;
    }
    if ((var_v1 == 0) && ((*(s32 *)((char *)(temp_v0) + 0x1D4)) != 0) && (((*(s32 *)((char *)(temp_v0) + 0x74)) & 0xF) != 0xF)) {
        sp1B = 1;
        func_151A3504(temp_a0, (*(s32 *)((char *)(arg0) + 0xC)));
        var_v1 = 1;
    }
    if (var_v1 != 0) {
        (*(s32 *)((char *)(arg0) + 0xE)) = -1;
        (*(u8 *)((char *)(arg0) + 0xD)) = (u8) ((*(u8 *)((char *)(arg0) + 0xD)) | 1);
    }
}

void func_151A4F7C(void *arg0, void *arg1, s32 arg2) {
    s32 temp_t6;

    temp_t6 = arg2 & 0xFF;
    if ((temp_t6 == 0) && (((*(s32 *)((char *)(arg0) + 0x28)) == (*(s32 *)((char *)(arg1) + 0x0))) || ((*(s32 *)((char *)(((char *)(arg0) + 0x28)) + 0x4)) == (*(s32 *)((char *)(arg1) + 0x4))))) {
        func_1516972C((void *) temp_t6);
    }
}

void *func_151A4FD0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    void *temp_v0;

    temp_v0 = func_15167A68(0x5A, 0, arg7 + 0x20, 0, 0xFF, 1);
    if (temp_v0 == NULL) {
        return NULL;
    }
    (*(s8 *)((char *)(temp_v0) + 0x14)) = (s8) arg0;
    (*(s32 *)((char *)(temp_v0) + 0x10)) = arg1;
    (*(s8 *)((char *)(temp_v0) + 0x15)) = (s8) arg2;
    (*(s8 *)((char *)(temp_v0) + 0x16)) = (s8) arg3;
    (*(s8 *)((char *)(temp_v0) + 0x17)) = (s8) arg4;
    (*(s32 *)((char *)(temp_v0) + 0x18)) = 0;
    (*(s32 *)((char *)(temp_v0) + 0x19)) = arg6;
    (*(s8 *)((char *)(temp_v0) + 0x1A)) = (s8) arg5;
    return temp_v0;
}

void func_151A5070(void *arg0) {
    s32 temp_t8;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v0;
    u8 temp_v0_3;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x10));
    if (temp_v0 != 0) {
        temp_v0_2 = temp_v0 - D_800BE9E4;
        if (temp_v0_2 <= 0) {
            func_1516972C(arg0, (s32) arg0);
            return;
        }
        (*(s32 *)((char *)(arg0) + 0x10)) = temp_v0_2;
        goto block_4;
    }
block_4:
    if ((*(s32 *)((char *)(arg0) + 0x19)) == 0) {
        func_10011FA0(2, arg0);
    }
    temp_v0_3 = (*(s32 *)((char *)(arg0) + 0x15));
    temp_t8 = D_800BE9E4 * 2;
    if ((*(s32 *)((char *)(arg0) + 0x18)) == 0) {
        var_v0 = temp_v0_3 - temp_t8;
        if (var_v0 < 0x90) {
            var_v0 = 0x90;
            (*(s32 *)((char *)(arg0) + 0x18)) = 1U;
        }
    } else {
        var_v0 = temp_v0_3 + temp_t8;
        if (var_v0 >= 0x100) {
            var_v0 = 0xFF;
            (*(s32 *)((char *)(arg0) + 0x18)) = 0U;
        }
    }
    (*(u8 *)((char *)(arg0) + 0x15)) = (u8) var_v0;
}

void func_151A5130(void *arg1, s32 arg2) {
    ((s32 (*)())((char *)(&D_8008F900 + ((*(s32 *)((char *)(arg1) + 0x14)) * 4))))(arg2);
}

void func_151A5170(void *arg0, void *arg1, s32 arg2) {
    s32 spC0;
    s32 spB0;
    s32 spAC;
    s8 spAB;
    f32 var_f0;
    f32 var_f12;
    f32 var_f2;
    s32 temp_t4;
    s32 temp_t5;
    s32 temp_t7;
    s32 temp_v1;
    s32 var_a1;
    s32 var_a3;
    s32 var_t0;
    s32 var_t1;
    s32 var_t2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    void *temp_a0;
    void *temp_a0_10;
    void *temp_a0_11;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a0_6;
    void *temp_a0_7;
    void *temp_a0_8;
    void *temp_a0_9;
    void *var_a0;
    void *var_a2;

    (*(s32 *)((char *)(arg0) + 0x0)) = 0xE7000000;
    (*(s32 *)((char *)(arg0) + 0x4)) = 0;
    temp_a0 = (char *)(arg0) + 8;
    (*(s32 *)((char *)(arg0) + 0x8)) = 0xFC119623;
    (*(s32 *)((char *)(temp_a0) + 0x4)) = 0xFF2FFFFF;
    temp_a0_2 = (char *)(temp_a0) + 8;
    (*(s32 *)((char *)(temp_a0) + 0x8)) = 0xFA000100;
    temp_a0_3 = (char *)(temp_a0_2) + 8;
    (*(s32 *)((char *)(temp_a0_2) + 0x4)) = (s32) (((*(s32 *)((char *)(arg1) + 0x15)) << 0x18) | ((*(s32 *)((char *)(arg1) + 0x16)) << 0x10) | ((*(s32 *)((char *)(arg1) + 0x17)) << 8) | 0xFF);
    arg0 = temp_a0_3;
    func_1501A490(temp_a0_3, arg2, 0, 0, 0, 3);
    spAB = 0;
    var_a0 = func_15142FBC(arg0, 0xC00, 0x0F0A4004, &spAB);
    var_a2 = D_800BE628 + ((*(s32 *)((char *)(arg1) + 0x1A)) * 0x180);
    var_a3 = 0;
    var_v1 = (s32) (*(s32 *)((char *)(var_a2) + 0x4));
    var_t0 = (s32) (*(s32 *)((char *)(var_a2) + 0x8));
loop_1:
    if (var_a3 == 0) {
        var_f12 = (f32) var_t0;
        var_a1 = (s32) (*(s32 *)((char *)(var_a2) + 0x2C));
        var_t2 = 8;
        var_f2 = (*(s32 *)((char *)(var_a2) + 0x24)) + var_f12;
        var_t1 = (s32) (*(s32 *)((char *)(var_a2) + 0x24));
        if (var_v1 >= 0x101) {
            var_v0 = 0x100;
        } else {
            var_v0 = var_v1;
        }
        goto block_7;
    }
    if (var_v1 >= 0x101) {
        var_v0 = var_v1 - 0x100;
        var_f12 = (f32) var_t0;
        var_t2 = 0x36;
        var_a1 = (s32) ((*(s32 *)((char *)(var_a2) + 0x2C)) + 256.0f);
        var_f2 = (*(s32 *)((char *)(var_a2) + 0x24)) + var_f12;
        var_t1 = (s32) (*(s32 *)((char *)(var_a2) + 0x24));
block_7:
        var_f0 = (f32) var_t1;
        temp_t4 = ((((s32) ((var_v0 * 2) + 7) >> 3) & 0x1FF) << 9) | 0xF5100000;
        temp_t5 = ((var_a1 * 4) & 0xFFF) << 0xC;
        if (var_f0 < var_f2) {
            spB0 = var_v1;
            temp_v1 = var_a1 + var_v0;
            spAC = var_t0;
            spC0 = var_a3;
            do {
                var_v0_2 = var_t1 + var_t2;
                temp_a0_4 = (char *)(var_a0) + 8;
                if (var_f2 < (f32) var_v0_2) {
                    var_t2 = (s32) (var_f2 - var_f0);
                    var_v0_2 = var_t1 + var_t2;
                }
                (*(s32 *)((char *)(var_a0) + 0x0)) = 0xE7000000;
                (*(s32 *)((char *)(var_a0) + 0x4)) = 0;
                temp_a0_5 = (char *)(temp_a0_4) + 8;
                (*(s32 *)((char *)(var_a0) + 0x8)) = (s32) (((D_800BE620 - 1) & 0xFFF) | 0xFD100000);
                temp_a0_6 = (char *)(temp_a0_5) + 8;
                (*(s32 *)((char *)(temp_a0_4) + 0x4)) = (s32) (*(s32 *)((char *)(D_8002AAE8) + (D_800BE9C0 * 4)));
                (*(s32 *)((char *)(temp_a0_4) + 0x8)) = temp_t4;
                (*(s32 *)((char *)(temp_a0_5) + 0x4)) = 0x07080200;
                temp_t7 = (var_t1 * 4) & 0xFFF;
                (*(s32 *)((char *)(temp_a0_5) + 0x8)) = (s32) (temp_t5 | 0xF4000000 | temp_t7);
                (*(s32 *)((char *)(temp_a0_6) + 0x4)) = (s32) (((((temp_v1 - 1) * 4) & 0xFFF) << 0xC) | 0x07000000 | (((var_v0_2 - 1) * 4) & 0xFFF));
                temp_a0_7 = (char *)(temp_a0_6) + 8;
                (*(s32 *)((char *)(temp_a0_7) + 0x4)) = 0x80200;
                (*(s32 *)((char *)(temp_a0_6) + 0x8)) = temp_t4;
                temp_a0_8 = (char *)(temp_a0_7) + 8;
                (*(s32 *)((char *)(temp_a0_7) + 0x8)) = 0xF2000000;
                (*(s32 *)((char *)(temp_a0_8) + 0x4)) = (s32) ((((var_v0 * 4) & 0xFFF) << 0xC) | ((var_t2 * 4) & 0xFFF));
                temp_a0_9 = (char *)(temp_a0_8) + 8;
                (*(s32 *)((char *)(temp_a0_9) + 0x4)) = (s32) (temp_t5 | temp_t7);
                (*(s32 *)((char *)(temp_a0_8) + 0x8)) = (s32) ((((temp_v1 * 4) & 0xFFF) << 0xC) | 0xE4000000 | ((var_v0_2 * 4) & 0xFFF));
                temp_a0_10 = (char *)(temp_a0_9) + 8;
                (*(s32 *)((char *)(temp_a0_9) + 0x8)) = 0xE1000000;
                (*(s32 *)((char *)(temp_a0_10) + 0x4)) = 0;
                temp_a0_11 = (char *)(temp_a0_10) + 8;
                (*(s32 *)((char *)(temp_a0_10) + 0x8)) = 0xF1000000;
                (*(s32 *)((char *)(temp_a0_11) + 0x4)) = 0x04000400;
                var_a0 = (char *)(temp_a0_11) + 8;
                var_t1 = var_v0_2;
                var_f0 = (f32) var_t1;
                var_a2 = D_800BE628 + ((*(s32 *)((char *)(arg1) + 0x1A)) * 0x180);
                var_f2 = (*(s32 *)((char *)(var_a2) + 0x24)) + var_f12;
            } while (var_f0 < var_f2);
            var_t0 = spAC;
            var_a3 = spC0;
            var_v1 = spB0;
        }
        var_a3 += 1;
        if (var_a3 < 2) {
            goto loop_1;
        }
    }
    (*(s32 *)((char *)(var_a0) + 0x0)) = 0xE7000000;
    (*(s32 *)((char *)(var_a0) + 0x4)) = 0;
    func_15142FBC((char *)(var_a0) + 8, 0x2C00, 0x0F0A4004, &spAB);
}

void func_151A55D4(void *arg0, s32 arg2) {
    void * (*temp_v0)(s32);

    temp_v0 = *(&D_8008F904 + ((*(s32 *)((char *)(arg0) + 0x19)) * 4));
    if (temp_v0 != NULL) {
        temp_v0(arg2 & 0xFF);
    }
}

void func_151A561C(s32 arg0, s32 arg1) {
    s32 sp1C;

    sp1C = D_800A8D70;
    func_15169260(&sp1C, 1, arg0, arg1 & 0xFF);
}
