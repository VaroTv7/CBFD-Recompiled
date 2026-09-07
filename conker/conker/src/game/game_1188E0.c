/**
 * Auto-decompiled from asm/1188E0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_150A2864();                            /* extern */
s32 func_150A34B0();        /* extern */
u32 random_u32();                                /* extern */
f32 random_float();                                /* extern */
void * func_150E83AC();              /* extern */
void * func_15117770();                                  /* extern */
void * func_1513264C();     /* extern */
void * func_15143794();                /* extern */
void * func_151541B8(); /* extern */
void * func_15164F0C();                /* extern */
void * func_151D3FF4();                   /* extern */
void * func_151D5514();                   /* extern */
void * func_151D8868();                 /* extern */
s32 func_150EB484();
void func_150EBC80(); /* static */
extern s32 D_80088AA0;
extern s32 D_80088AB0;
extern s32 D_80088AD0;
extern f32 D_800A1490;
extern f32 D_800A149C;
extern s32 D_800A14A8;
extern s32 D_800A14D8;
extern f32 D_800A14DC;
extern f32 D_800A14E0;
extern f32 D_800A14E4;
extern f32 D_800A14E8;
extern f32 D_800A14EC;
extern f32 D_800A14F0;
extern f32 D_800A14F4;
extern f32 D_800A14F8;
extern f32 D_800A14FC;
extern u8 D_800BE9EB;

void func_150EB430(void *arg0, void *arg1) {
    f32 sp24;
    f32 sp20;
    f32 sp1C;

    sp1C = (*(s32 *)((char *)(arg0) + 0x0)) + (*(s32 *)((char *)(arg1) + 0x0));
    sp20 = (*(s32 *)((char *)(arg0) + 0x4)) + (*(s32 *)((char *)(arg1) + 0x4));
    sp24 = (*(s32 *)((char *)(arg0) + 0x8)) + (*(s32 *)((char *)(arg1) + 0x8));
    func_150EB484(&sp1C, arg1);
}

s32 func_150EB484(f32 *arg0, void *arg1, void * arg2) {
    void *sp44;
    s32 *var_s0;
    s32 *var_s0_2;
    s32 temp_lo;
    s32 temp_s2;
    s32 var_s1;
    void *temp_v0;

    temp_v0 = func_15083E90(9);
    sp44 = temp_v0;
    if (temp_v0 != NULL) {
        var_s0 = &D_80088AA0;
        var_s1 = 0;
loop_2:
        temp_s2 = *var_s0;
        temp_lo = temp_s2 * 0x34;
        if (func_150A34B0(temp_lo + D_800D3098, arg0, arg1, arg2) != 0) {
            func_150A2864(temp_s2, 1);
            (*(s32 *)((char *)(sp44) + 0x2E8)) = (s32) (var_s1 + 1);
            func_150EBC80(temp_lo + D_800D3098, 0xFF, 1);
            return 1;
        }
        var_s1 += 1;
        var_s0 += 4;
        if (var_s1 >= 4) {
            var_s0_2 = &D_80088AB0;
loop_6:
            var_s0_2 += 4;
            if (func_150A34B0((*var_s0_2 * 0x34) + D_800D3098, arg0, arg1, arg2) != 0) {
                return 1;
            }
            if ((char *)(var_s0_2) == (char *)(&D_80088AD0)) {
                goto block_12;
            }
            goto loop_6;
        }
        goto loop_2;
    }
    if (func_150A34B0(D_800D3098 + 0xF70, arg0, arg1, arg2) != 0) {
        (*(s32 *)((char *)(D_800D3098) + 0xF88)) = 1;
    }
block_12:
    return 0;
}

void func_150EB614(f32 *arg0) {
    f32 sp3C;
    f32 sp34;
    f32 sp2C;
    f32 sp28;
    f32 sp20;
    f32 sp1C;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 var_f12;
    f32 var_f16;
    f32 var_f2;
    f32 var_f2_2;
    s32 temp_v1;
    u8 temp_t1;
    u8 temp_t9;
    u8 temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x73));
    temp_v1 = temp_v0 & 3;
    if (temp_v1 != 3) {
        if (temp_v1 != 2) {
            if ((*(s32 *)((char *)(arg0) + 0x4F)) & 4) {
                temp_t1 = temp_v0 & 0xFFFC;
                if (gObjects[0].unk31C->unk57 != 0) {
                    (*(s32 *)((char *)(arg0) + 0x73)) = temp_t1;
                    (*(u8 *)((char *)(arg0) + 0x73)) = (u8) (temp_t1 | 2);
                    (*(s32 *)((char *)(arg0) + 0x3C)) = 0;
                    (*(s32 *)((char *)(arg0) + 0x7C)) = 0.5f;
                    (*(f32 *)((char *)(arg0) + 0x80)) = (f32) D_800A14DC;
                    (*(s32 *)((char *)(arg0) + 0x84)) = 0.0f;
                }
                temp_f2 = (f32) (*(f32 *)((char *)(arg0) + 0x14)) - gObjects[0].z_position;
                temp_f12 = (f32) (*(f32 *)((char *)(arg0) + 0x10)) - gObjects[0].x_position;
                temp_f14 = (f32) (*(f32 *)((char *)(arg0) + 0x12)) - gObjects[0].y_position;
                var_f16 = sqrtf((temp_f2 * temp_f2) + ((temp_f12 * temp_f12) + (temp_f14 * temp_f14)));
                if (var_f16 > 740.0f) {
                    var_f16 = 740.0f;
                }
                sp34 = (var_f16 * D_800A14E0) + -40.0f;
            } else {
                sp34 = -40.0f;
            }
            var_f12 = (*(s32 *)((char *)(arg0) + 0x0));
            temp_f18 = (*(s32 *)((char *)(arg0) + 0x7C));
            temp_f16 = (*(s32 *)((char *)(arg0) + 0x80));
            temp_f2_2 = (*(s32 *)((char *)(arg0) + 0x84));
            if ((var_f12 != sp34) || (temp_f2_2 != 0.0f)) {
                sp3C = temp_f2_2;
                sp28 = temp_f16;
                sp2C = temp_f18;
                temp_f12_2 = var_f12 + (temp_f2_2 * (f32) D_800BE9E4);
                sp20 = temp_f12_2;
                temp_f0 = func_15048A70(temp_f12_2, sp34);
                var_f12 = temp_f12_2;
                temp_f0_2 = fabsf(temp_f0);
                if (temp_f0 > 0.0f) {
                    var_f2 = temp_f2_2 + (temp_f0_2 * temp_f16);
                } else {
                    var_f2 = temp_f2_2 - (temp_f0_2 * temp_f16);
                }
                var_f2_2 = var_f2 * temp_f18;
                if ((fabsf(temp_f0) < D_800A14E4) && (fabsf(var_f2_2) < D_800A14E4)) {
                    var_f2_2 = 0.0f;
                    var_f12 = sp34;
                } else if (var_f12 < 0.0f) {
                    var_f12 += 360.0f;
                } else if (var_f12 >= 360.0f) {
                    var_f12 -= 360.0f;
                }
                (*(s32 *)((char *)(arg0) + 0x84)) = var_f2_2;
            }
            (*(s32 *)((char *)(arg0) + 0x0)) = var_f12;
            return;
        }
        sp1C = (*(s32 *)((char *)(arg0) + 0x0));
        func_15117770();
        if (sp1C == (*(s32 *)((char *)(arg0) + 0x0))) {
            temp_t9 = (*(s32 *)((char *)(arg0) + 0x73)) & 0xFFFC;
            (*(s32 *)((char *)(arg0) + 0x73)) = temp_t9;
            (*(u8 *)((char *)(arg0) + 0x73)) = (u8) (temp_t9 | 3);
            (*(s32 *)((char *)(arg0) + 0x0)) = 0.0f;
        }
    }
}

void func_150EB8C4(void) {
    s32 sp10C;
    s16 sp108;
    s16 sp106;
    s8 sp104;
    s32 sp100;
    s8 spFE;
    s8 spFC;
    s8 spFB;
    s8 spFA;
    s8 spF9;
    s8 spF8;
    s8 spF7;
    s8 spF6;
    s8 spF5;
    s8 spF4;
    s32 spF0;
    s8 spEC;
    s16 spEA;
    s16 spE8;
    s32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    f32 spD4;
    void * spC8;
    void * spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    void * spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    f32 temp_f28;
    f32 temp_f30;
    f32 var_f16;
    s32 temp_t0;
    s32 temp_t0_2;
    s32 var_s0;
    u32 temp_s1;
    u32 temp_s2;
    void *temp_t7;

    func_15164F0C(2, D_800BE9EB, 0, 0xFF, 1);
    func_150E83AC(&D_800A149C, (s16) ((random_u32() % 62U) + 0x78), 0xFF, 1);
    func_151D5514(&D_800A1490, 0xFF, 1);
    func_151D3FF4(&D_800A1490, 0xFF, 1);
    temp_f20 = random_float();
    temp_t0 = (random_u32() % 56U) + 0xC8;
    var_f16 = (f32) temp_t0;
    if (temp_t0 < 0) {
        var_f16 += 4294967296.0f;
    }
    func_151541B8(&D_800A1490, (temp_f20 * 4.0f) + 12.0f, 1.6409999f, var_f16, 0.0f, 0xFF, 1);
    spA0 = 1.0f;
    sp9C = 1.0f;
    sp94 = 9.0f;
    sp98 = D_800A14E8;
    (*(s32 *)((char *)&(spA4) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
    (*(s32 *)((char *)&(spA4) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
    (*(s32 *)((char *)&(spA4) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
    temp_f30 = D_800A14EC;
    temp_f28 = D_800A14F0;
    spD8 = 0.0f;
    temp_f22 = D_800A14F4;
    spB0 = 1.0f;
    spB4 = 1.0f;
    spB8 = 1.0f;
    spE4 = 0x29E9;
    spEC = 0;
    spF0 = 0;
    spF4 = 0xFF;
    spF5 = 0xD;
    spF6 = 0;
    spF7 = 0xC;
    spF8 = 0;
    spF9 = 0;
    spFA = 0;
    spFB = 0;
    spFC = 2;
    spFE = 2;
    sp100 = 0;
    sp104 = 0;
    sp106 = 0x19;
    sp108 = 0xA;
    sp10C = 0;
    temp_f20_2 = D_800A14F8;
    var_s0 = 0;
    do {
        temp_t7 = &D_800A14A8 + (var_s0 * 0xC);
        (*(s32 *)((char *)&(spBC) + 0x0)) = (s32) (*(s32 *)((char *)(temp_t7) + 0x0));
        (*(s32 *)((char *)&(spBC) + 0x4)) = (s32) (*(s32 *)((char *)(temp_t7) + 0x4));
        (*(s32 *)((char *)&(spBC) + 0x8)) = (s32) (*(s32 *)((char *)(temp_t7) + 0x8));
        temp_s2 = random_u32();
        temp_s1 = random_u32();
        func_15143794((s16) ((temp_s2 % 26U) + 0x2D), (s16) ((temp_s1 & 0xF) - 0x19), (random_float() * 30.0f) + 15.0f, &spC8);
        spD4 = (random_float() * temp_f20_2) + temp_f22;
        spDC = (random_float() * temp_f20_2) + temp_f22;
        spE0 = (random_float() * temp_f28) + temp_f30;
        spE8 = (random_u32() % 51U) + 0x32;
        spEA = (s16) *(&D_800A14D8 + var_s0);
        func_1513264C(&sp94, 3, 0xFF, 0, 0, 0xFF, 1);
        temp_t0_2 = (var_s0 + 1) & 0xFF;
        var_s0 = temp_t0_2;
    } while (temp_t0_2 < 4);
}

void func_150EBC80(void *arg0, s32 arg1, s32 arg2) {
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    s8 sp82;
    s8 sp81;
    s8 sp80;
    s16 sp7E;
    s8 sp7C;
    f32 temp_f20;
    f32 temp_f26;
    f32 temp_f30;
    f32 var_f18;
    s32 temp_at;
    s32 temp_s1;
    s32 temp_t8;
    s32 temp_t9;
    s32 var_s0;

    temp_s1 = arg1 & 0xFF;
    sp8C = (f32) (*(f32 *)((char *)(arg0) + 0x0));
    sp90 = (f32) (*(f32 *)((char *)(arg0) + 0x2));
    sp94 = (f32) (*(f32 *)((char *)(arg0) + 0x4));
    temp_f30 = (f32) (*(f32 *)((char *)(arg0) + 0x8)) * 0.5f;
    func_150E83AC(&sp8C, (s16) ((random_u32() % 101U) + 0x12C), temp_s1 & 0xFF, arg2);
    sp7C = 1;
    sp7E = (random_u32() % 21U) + 0xF;
    sp80 = 0;
    sp82 = -1;
    sp81 = 1;
    func_151D8868(&sp7C, 0, temp_s1 & 0xFF, arg2);
    func_15164F0C(0, 0U, 0, temp_s1 & 0xFF, arg2);
    temp_f26 = D_800A14FC;
    var_s0 = 0;
    do {
        func_151D3FF4(&sp8C, temp_s1 & 0xFF, arg2);
        func_151D5514(&sp8C, temp_s1 & 0xFF, arg2);
        temp_f20 = random_float();
        temp_t8 = (random_u32() % 56U) + 0xC8;
        var_f18 = (f32) temp_t8;
        if (temp_t8 < 0) {
            var_f18 += 4294967296.0f;
        }
        func_151541B8(&sp8C, (temp_f20 * 4.0f) + 12.0f, temp_f26, var_f18, 0.0f, temp_s1, arg2);
        temp_t9 = (var_s0 + 1) & 0xFF;
        temp_at = temp_t9 < 2;
        var_s0 = temp_t9;
        sp90 += temp_f30;
    } while (temp_at != 0);
}
