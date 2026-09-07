/**
 * Auto-decompiled from asm/100810.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"

extern void *func_1000FD38(); /* extern */
u32 random_u32();                     /* extern */
f32 random_float();                                /* extern */
void * func_15130280();          /* extern */
s32 func_1513F4E4();                    /* extern */
s32 func_151407D0(); /* extern */
s32 func_15142B7C();                       /* extern */
s32 func_15142C10();         /* extern */
s32 func_15142E24(); /* extern */
void *func_15142FBC();           /* extern */
void * func_15143794();              /* extern */
f32 func_15143E64();             /* extern */
void *func_15144B34();                           /* extern */
s32 func_1514654C(); /* extern */
void * func_151478F4();                            /* extern */
void * func_15147928();                            /* extern */
void *func_15147A80(); /* extern */
s32 func_1515C0F8();          /* extern */
void * func_151D5D60();   /* extern */
void * memcpy();                       /* extern */
s32 func_150D4AE0();
void func_150D4C2C();                     /* static */
void func_150D4D58(f32 *arg0, f32 *arg1, f32 arg2, u8 arg3, s32 arg4);
s32 func_150D5124();
extern s32 D_80091100;
extern s32 D_800A09C0;
extern s32 D_800A09D0;
extern s32 D_800A09DC;
extern f32 *D_800A09E8;
extern f32 D_800A09EC;
extern f32 D_800A09F0;
extern f32 D_800A09F4;
extern f32 D_800A09F8;
extern f32 D_800A09FC;
extern f32 D_800A0A00;
extern f32 D_800A0A04;
extern f32 D_800A0A08;
extern f32 D_800A0A0C;
extern f32 D_800A0A10;
extern f32 D_800A0A14;
extern f32 D_800A0A18;
extern f32 D_800A0A1C;
extern f32 D_800A0A20;
extern f32 D_800A0A24;
extern f32 D_800A0A28;
extern s32 D_800A4AC8;
extern s32 D_800D2C9C;


void func_150D3360(struct127 *arg0, s32 arg1, s32 arg2) {
    s8 sp201;
    s8 sp200;
    s32 sp1FC;
    u16 sp1FA;
    s16 sp1F8;
    f32 sp1F4;
    f32 sp1F0;
    f32 sp1EC;
    f32 sp1E8;
    f32 sp1E4;
    s32 sp1E0;
    s32 sp1DC;
    s32 sp1D8;
    s8 sp1D5;
    u8 sp1D4;
    void *sp1D0;
    f32 sp1C8;
    f32 sp1C4;
    f32 sp1C0;
    s8 sp1B9;
    s8 sp1B8;
    s8 sp1B7;
    s8 sp1B6;
    s8 sp1B5;
    s8 sp1B4;
    s16 sp1B2;
    s16 sp1B0;
    s16 sp1AE;
    s16 sp1AC;
    f32 sp1A8;
    s32 sp1A4;
    s32 sp1A0;
    s32 sp19C;
    s32 sp198;
    s32 sp194;
    s32 sp190;
    s32 sp18C;
    s32 sp188;
    s32 sp184;
    f32 sp180;
    f32 sp17C;
    f32 sp178;
    f32 *sp174;
    f32 *sp170;
    f32 sp16C;
    f32 sp168;
    f32 sp164;
    f32 sp160;
    s8 sp154;
    s32 sp150;
    s8 sp14F;
    s8 sp14E;
    s8 sp14D;
    s8 sp14C;
    s32 sp148;
    f32 sp144;
    f32 sp140;
    f32 sp13C;
    void * sp130;
    void * sp124;
    f32 sp120;
    f32 sp11C;
    s8 sp11B;
    s8 sp11A;
    s8 sp119;
    s8 sp118;
    s32 sp114;
    s32 sp110;
    s16 sp10C;
    s16 sp10A;
    s8 sp109;
    s8 sp108;
    s8 sp105;
    s8 sp104;
    s8 sp103;
    s8 sp102;
    s8 sp101;
    s8 sp100;
    s16 spFE;
    s16 spFC;
    s16 spFA;
    s16 spF8;
    f32 spF4;
    s32 spF0;
    s32 spEC;
    s32 spE8;
    s32 spE4;
    s32 spE0;
    s32 spDC;
    s32 spD8;
    s32 spD4;
    s32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    s8 spA0;
    s32 sp9C;
    s8 sp9B;
    s8 sp9A;
    s8 sp99;
    s8 sp98;
    s32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    void * sp7C;
    void * sp70;
    f32 sp6C;
    f32 sp68;
    s8 sp67;
    s8 sp66;
    s8 sp65;
    s8 sp64;
    s32 sp60;
    s32 sp5C;
    s16 sp58;
    s16 sp56;
    s8 sp55;
    s8 sp54;
    f32 sp50;
    s16 sp4C;
    s32 (*sp44)(void *, void *, u32 *, void *, s32 *, u16 *);
    s32 temp_t3;
    s32 temp_v0;
    s32 temp_v0_6;
    void *temp_s0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *var_a1;

    sp201 = 0x19;
    sp1F8 = 0x12C;
    sp1FA = 0x12;
    sp1FC = 0xF;
    sp200 = 1;
    sp1E8 = 20.0f;
    sp1E4 = 20.0f;
    sp1D5 = 1;
    sp1DC = 0;
    sp1E0 = 0;
    sp1D0 = arg0;
    sp1D4 = arg0->unique_id;
    var_a1 = 0x79;
    if (arg0->id == 0x48) {
        var_a1 = 0x7A;
    }
    temp_v0 = func_1503195C(var_a1, 0, 0); // TODO: 3rd arg guessed as 0, real decompiled call was missing it
    if (temp_v0 != 0) {
        sp1D8 = temp_v0;
        if (func_150D4AE0(&sp1EC, &sp1C0, arg0, temp_v0) != 0) {
            sp1FA |= 4;
        } else {
            (*(s32 *)((char *)&(sp1EC) + 0x0)) = 0.0f; (*(s32 *)((char *)&(sp1EC) + 0x4)) = 0.0f; (*(s32 *)((char *)&(sp1EC) + 0x8)) = 0.0f;
            sp1F0 = 0.0f;
            sp1F4 = 0.0f;
            (*(s32 *)((char *)&(sp1C0) + 0x0)) = 0.0f; (*(s32 *)((char *)&(sp1C0) + 0x4)) = 0.0f; (*(s32 *)((char *)&(sp1C0) + 0x8)) = 0.0f;
            sp1C8 = 0.0f;
            sp1C4 = 500.0f;
        }
        temp_v0_2 = func_15147A80(&sp1EC, 0x20, 0x14, 0, 0xD, 0xD, 0, 0, 0, (s32) arg1, arg2);
        if (temp_v0_2 != NULL) {
            temp_s0 = (*(s32 *)((char *)(temp_v0_2) + 0x98));
            memcpy(temp_s0, &sp1D0, 0x1C);
            if (D_8008FD8C < 5) {
                temp_v0_3 = (*(s32 *)((char *)(temp_s0) + 0x0));
                func_1000FA64(0x5B3, (s16) (s32) (*(s16 *)((char *)(temp_v0_3) + 0x14)), (s16) (s32) (*(s16 *)((char *)(temp_v0_3) + 0x18)), (s16) (s32) (*(s16 *)((char *)(temp_v0_3) + 0x1C)), 0x3E8, 0x3E8, 0xC8, func_150D5124, temp_s0, 0x5B3, 0xC, 0);
            }
            temp_v0_4 = (*(s32 *)((char *)(temp_s0) + 0x0));
            sp44 = func_150D5124;
            func_1000FA64(0x5B4, (s16) (s32) (*(s16 *)((char *)(temp_v0_4) + 0x14)), (s16) (s32) (*(s16 *)((char *)(temp_v0_4) + 0x18)), (s16) (s32) (*(s16 *)((char *)(temp_v0_4) + 0x1C)), 0x3E8, 0x3E8, 0xC8, func_150D5124, temp_s0, 0x5B4, 0xC, 0);
            if ((D_8008FD8C < 7) || (arg0->camera != 0)) {
                temp_v0_5 = (*(s32 *)((char *)(temp_s0) + 0x0));
                func_1000FA64(0x5BC, (s16) (s32) (*(s16 *)((char *)(temp_v0_5) + 0x14)), (s16) (s32) (*(s16 *)((char *)(temp_v0_5) + 0x18)), (s16) (s32) (*(s16 *)((char *)(temp_v0_5) + 0x1C)), 0x3E8, 0x3E8, 0xC8, func_150D5124, temp_s0, 0x5BC, 0xC, 0);
            }
            sp184 = -1;
            sp194 = -1;
            sp188 = -1;
            sp198 = -1;
            sp18C = -1;
            sp19C = -1;
            sp190 = -1;
            sp1B9 = -1;
            sp164 = 40.0f;
            sp168 = 40.0f;
            sp16C = 40.0f;
            sp170 = D_800A09E8;
            sp174 = D_800A09E8;
            sp1A0 = -1;
            sp1A4 = 0;
            sp1A8 = 1.0f;
            sp1AC = 0;
            sp1AE = 0;
            sp1B0 = 0;
            sp1B2 = 0;
            sp1B4 = 0;
            sp1B5 = 0;
            sp1B6 = 0;
            sp1B7 = 0;
            sp1B8 = 0;
            sp108 = 0x15;
            sp109 = 3;
            sp10A = 0x5503;
            sp10C = 0x12C;
            sp110 = 0;
            sp114 = 0;
            sp118 = 0xFF;
            sp119 = 0xFF;
            sp11A = 0xFF;
            sp11B = 0xFF;
            sp11C = 100.0f;
            sp120 = 100.0f;
            sp160 = 200.0f;
            sp178 = D_800A09EC;
            sp17C = D_800A09F0;
            sp180 = D_800A09F4;
            (*(f32 *)((char *)&(sp124) + 0x0)) = (f32) (*(f32 *)((char *)&(sp1EC) + 0x0));
            (*(s32 *)((char *)&(sp124) + 0x4)) = (s32) (*(s32 *)((char *)&(sp1EC) + 0x4));
            (*(s32 *)((char *)&(sp124) + 0x8)) = (s32) (*(s32 *)((char *)&(sp1EC) + 0x8));
            (*(f32 *)((char *)&(sp130) + 0x0)) = (f32) (*(f32 *)((char *)&(sp1C0) + 0x0));
            (*(s32 *)((char *)&(sp130) + 0x4)) = (s32) (*(s32 *)((char *)&(sp1C0) + 0x4));
            (*(s32 *)((char *)&(sp130) + 0x8)) = (s32) (*(s32 *)((char *)&(sp1C0) + 0x8));
            sp13C = 1.0f;
            sp140 = 1.0f;
            sp144 = 1.0f;
            sp148 = 0xCD2006;
            sp14C = 0xFF;
            sp14D = 0xFF;
            sp14E = 0;
            sp14F = 6;
            sp150 = 0;
            sp154 = 0xFF;
            (*(s32 *)((char *)(temp_s0) + 0xC)) = func_151407D0(D_800A09E8, 0x42C80000, &sp160, 0x60, &sp108, 0, 0, 0, 0, -1, (s32) arg1, arg2);
            sp4C = 0;
            sp50 = 1.0f;
            spB0 = 45.0f;
            spAC = 45.0f;
            spB8 = 25.5f;
            spB4 = 25.5f;
            spBC = D_800A09F8;
            spC0 = D_800A09F8;
            spC4 = 1.0f;
            spD0 = -1;
            spE0 = -1;
            spD4 = -1;
            spE4 = -1;
            spD8 = -1;
            spE8 = -1;
            spDC = -1;
            spEC = -1;
            spF0 = 0;
            spF4 = 1.0f;
            spF8 = 0;
            spFA = 0;
            spFC = 0;
            spFE = 0;
            sp100 = 0;
            sp101 = 0;
            sp102 = 0;
            sp103 = 0;
            sp104 = 0;
            sp105 = -1;
            spC8 = D_800A09FC;
            spCC = D_800A0A00;
            temp_t3 = *(&D_800A09C0 + ((random_u32(0x41CC0000, D_800A09F8) & 3) * 4));
            sp55 = 3;
            sp56 = 0x2203;
            sp58 = 0x12C;
            sp5C = 0;
            sp60 = 0;
            sp64 = 0xFF;
            sp65 = 0xFF;
            sp66 = 0xFF;
            sp67 = 0xFF;
            sp68 = 100.0f;
            sp6C = 100.0f;
            sp54 = (s8) temp_t3;
            (*(f32 *)((char *)&(sp70) + 0x0)) = (f32) (*(f32 *)((char *)&(sp1EC) + 0x0));
            (*(s32 *)((char *)&(sp70) + 0x4)) = (s32) (*(s32 *)((char *)&(sp1EC) + 0x4));
            (*(s32 *)((char *)&(sp70) + 0x8)) = (s32) (*(s32 *)((char *)&(sp1EC) + 0x8));
            (*(f32 *)((char *)&(sp7C) + 0x0)) = (f32) (*(f32 *)((char *)&(sp1C0) + 0x0));
            (*(s32 *)((char *)&(sp7C) + 0x4)) = (s32) (*(s32 *)((char *)&(sp1C0) + 0x4));
            (*(s32 *)((char *)&(sp7C) + 0x8)) = (s32) (*(s32 *)((char *)&(sp1C0) + 0x8));
            sp94 = 0xCD2006;
            sp98 = 0xFF;
            sp99 = 0xFF;
            sp9A = 0;
            sp9B = 7;
            sp9C = 0;
            spA0 = 0xFF;
            sp88 = 1.0f;
            sp8C = 1.0f;
            sp90 = 1.0f;
            temp_v0_6 = func_151407D0(&spAC, 0x68, (f32 *) &sp54, 0, (s8 *)0x27, 0, 0, -1, (s32) arg1, arg2);
            (*(s32 *)((char *)(temp_s0) + 0x10)) = temp_v0_6;
            if (temp_v0_6 != 0) {
                memcpy(temp_v0_6 + 0x170, (void **) &sp4C, 8);
            }
        }
    }
}

s32 func_150D3A68(void *arg0) {
    void *sp84;
    s32 sp80;
    void *sp7C;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp50;
    f32 *sp3C;
    f32 *sp34;
    f32 *temp_a0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    s32 temp_v0;
    s32 temp_v0_13;
    s8 temp_v0_11;
    s8 temp_v1_2;
    u8 temp_a1;
    u8 temp_v0_14;
    void *temp_a2;
    void *temp_t8;
    void *temp_t9;
    void *temp_v0_10;
    void *temp_v0_12;
    void *temp_v0_15;
    void *temp_v0_16;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;
    void *temp_v0_9;
    void *temp_v1;
    void *var_a0;
    void *var_t0;

    var_t0 = (*(s32 *)((char *)(arg0) + 0x98));
    sp80 = (*(s32 *)((char *)(arg0) + 0x94));
    temp_a2 = (*(s32 *)((char *)(var_t0) + 0x0));
    if (((*(s32 *)((char *)(temp_a2) + 0x0)) == 0) || ((*(s32 *)((char *)(var_t0) + 0x4)) != (*(s32 *)((char *)(temp_a2) + 0x3B)))) {
        return 0;
    }
    temp_a0 = (char *)(arg0) + 0x10;
    if (D_800BE9E4 > 0) {
        (*(s32 *)((char *)&(sp6C) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x10));
        (*(s32 *)((char *)&(sp6C) + 0x4)) = (s32) (*(s32 *)((char *)(temp_a0) + 0x4));
        (*(s32 *)((char *)&(sp6C) + 0x8)) = (s32) (*(s32 *)((char *)(temp_a0) + 0x8));
        sp84 = var_t0;
        sp7C = temp_a2;
        sp34 = temp_a0;
        temp_v0 = func_150D4AE0(temp_a0, &sp50, temp_a2, (*(s32 *)((char *)(var_t0) + 0x8)));
        switch (temp_v0) {                          /* irregular */
        case 0:
            temp_v0_2 = (*(s32 *)((char *)(sp84) + 0xC));
            if (temp_v0_2 != NULL) {
                (*(s32 *)((char *)(temp_v0_2) + 0x58)) = (s32) ((*(s32 *)((char *)(temp_v0_2) + 0x58)) & ~2);
            }
            temp_v0_3 = (*(s32 *)((char *)(sp84) + 0x10));
            if (temp_v0_3 != NULL) {
                (*(s32 *)((char *)(temp_v0_3) + 0x58)) = (s32) ((*(s32 *)((char *)(temp_v0_3) + 0x58)) & ~2);
            }
            (*(u16 *)((char *)(arg0) + 0x1E)) = (u16) ((*(u16 *)((char *)(arg0) + 0x1E)) & 0xFFFB);
            return 1;
        case 1:
            if (!((*(s32 *)((char *)(arg0) + 0x1E)) & 4)) {
                (*(s32 *)((char *)&(sp6C) + 0x0)) = (*(s32 *)((char *)(sp34) + 0x0));
                (*(s32 *)((char *)&(sp6C) + 0x4)) = (s32) (*(s32 *)((char *)(sp34) + 0x4));
                (*(s32 *)((char *)&(sp6C) + 0x8)) = (s32) (*(s32 *)((char *)(sp34) + 0x8));
            }
            (*(u16 *)((char *)(arg0) + 0x1E)) = (u16) ((*(u16 *)((char *)(arg0) + 0x1E)) | 4);
            temp_v0_4 = (*(s32 *)((char *)(sp84) + 0xC));
            if (temp_v0_4 != NULL) {
                (*(f32 *)((char *)(temp_v0_4) + 0x34)) = (f32) (*(f32 *)((char *)(sp34) + 0x0));
                (*(s32 *)((char *)(temp_v0_4) + 0x38)) = (s32) (*(s32 *)((char *)(sp34) + 0x4));
                (*(s32 *)((char *)(temp_v0_4) + 0x3C)) = (s32) (*(s32 *)((char *)(sp34) + 0x8));
                temp_t8 = (*(s32 *)((char *)(sp84) + 0xC));
                (*(f32 *)((char *)(temp_t8) + 0x40)) = (f32) (*(f32 *)((char *)&(sp50) + 0x0));
                (*(s32 *)((char *)(temp_t8) + 0x44)) = (s32) (*(s32 *)((char *)&(sp50) + 0x4));
                (*(s32 *)((char *)(temp_t8) + 0x48)) = (s32) (*(s32 *)((char *)&(sp50) + 0x8));
                temp_v0_5 = (*(s32 *)((char *)(sp84) + 0xC));
                (*(s32 *)((char *)(temp_v0_5) + 0x58)) = (s32) ((*(s32 *)((char *)(temp_v0_5) + 0x58)) & ~4);
                temp_v0_6 = (*(s32 *)((char *)(sp84) + 0xC));
                (*(s32 *)((char *)(temp_v0_6) + 0x58)) = (s32) ((*(s32 *)((char *)(temp_v0_6) + 0x58)) | 2);
            }
            temp_v0_7 = (*(s32 *)((char *)(sp84) + 0x10));
            if (temp_v0_7 != NULL) {
                (*(f32 *)((char *)(temp_v0_7) + 0x34)) = (f32) (*(f32 *)((char *)(sp34) + 0x0));
                (*(s32 *)((char *)(temp_v0_7) + 0x38)) = (s32) (*(s32 *)((char *)(sp34) + 0x4));
                (*(s32 *)((char *)(temp_v0_7) + 0x3C)) = (s32) (*(s32 *)((char *)(sp34) + 0x8));
                temp_t9 = (*(s32 *)((char *)(sp84) + 0x10));
                (*(f32 *)((char *)(temp_t9) + 0x40)) = (f32) (*(f32 *)((char *)&(sp50) + 0x0));
                (*(s32 *)((char *)(temp_t9) + 0x44)) = (s32) (*(s32 *)((char *)&(sp50) + 0x4));
                (*(s32 *)((char *)(temp_t9) + 0x48)) = (s32) (*(s32 *)((char *)&(sp50) + 0x8));
                temp_v0_8 = (*(s32 *)((char *)(sp84) + 0x10));
                (*(s32 *)((char *)(temp_v0_8) + 0x58)) = (s32) ((*(s32 *)((char *)(temp_v0_8) + 0x58)) & ~4);
                temp_v0_9 = (*(s32 *)((char *)(sp84) + 0x10));
                (*(s32 *)((char *)(temp_v0_9) + 0x58)) = (s32) ((*(s32 *)((char *)(temp_v0_9) + 0x58)) | 2);
            }
        default:
block_25:
            sp60 = (*(s32 *)((char *)(arg0) + 0x10)) - sp6C;
            sp64 = (*(s32 *)((char *)(arg0) + 0x14)) - sp70;
            sp68 = (*(s32 *)((char *)(arg0) + 0x18)) - sp74;
            temp_f0 = func_15143E64(&sp60, &sp50, sp34);
            var_t0 = sp84;
            temp_v0_10 = ((*(s32 *)((char *)(arg0) + 0x2E)) * 0x14) + sp80;
            (*(f32 *)((char *)(temp_v0_10) + 0x0)) = (f32) (*(f32 *)((char *)(sp34) + 0x0));
            (*(s32 *)((char *)(temp_v0_10) + 0x4)) = (s32) (*(s32 *)((char *)(sp34) + 0x4));
            (*(s32 *)((char *)(temp_v0_10) + 0xC)) = temp_f0;
            (*(s32 *)((char *)(temp_v0_10) + 0x8)) = (s32) (*(s32 *)((char *)(sp34) + 0x8));
            (*(s32 *)((char *)(temp_v0_10) + 0x10)) = 100.0f;
            (*(s8 *)((char *)(arg0) + 0x2E)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2E)) + 1);
            if ((*(s32 *)((char *)(arg0) + 0x25)) == (*(s32 *)((char *)(arg0) + 0x2E))) {
                (*(s32 *)((char *)(arg0) + 0x2E)) = 0;
            }
            temp_v0_11 = (*(s32 *)((char *)(arg0) + 0x2D));
            (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2C)) + 1);
            if (temp_v0_11 == (*(s32 *)((char *)(arg0) + 0x2E))) {
                (*(s8 *)((char *)(arg0) + 0x2D)) = (s8) (temp_v0_11 + 1);
                if ((*(s32 *)((char *)(arg0) + 0x25)) == (*(s32 *)((char *)(arg0) + 0x2D))) {
                    (*(s32 *)((char *)(arg0) + 0x2D)) = 0;
                }
                (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2C)) - 1);
            }
            temp_v1 = (*(s32 *)((char *)(sp7C) + 0x31C));
            if (temp_v1 != NULL) {
                temp_v0_12 = (*(s32 *)((char *)(var_t0) + 0x10));
                var_a0 = NULL;
                if (temp_v0_12 != NULL) {
                    var_a0 = (char *)(temp_v0_12) + 0x170;
                }
                temp_a1 = (*(s32 *)((char *)(var_t0) + 0x5));
                if ((*(s32 *)((char *)(temp_v1) + 0x84)) != 0) {
                    temp_f0_2 = (*(s32 *)((char *)(sp7C) + 0x44));
                    if (temp_f0_2 > 6.0f) {
                        (*(s32 *)((char *)(var_t0) + 0x5)) = 0U;
                    } else if (temp_f0_2 > 3.0f) {
                        (*(s32 *)((char *)(var_t0) + 0x5)) = 1U;
                    } else {
                        (*(s32 *)((char *)(var_t0) + 0x5)) = 2U;
                    }
                } else {
                    temp_v0_13 = ((s32) ((char *)(sp7C) - (char *)&gObjects) / 812) & 0xFF;
                    if (temp_v0_13 >= 4) {
                        (*(s32 *)((char *)(var_t0) + 0x5)) = 1U;
                    } else {
                        temp_v1_2 = (*(s8 *)((char *)(D_800BE728) + (temp_v0_13 * 4) + 0x3));
                        if (temp_v1_2 >= 0x15) {
                            (*(s32 *)((char *)(var_t0) + 0x5)) = 0U;
                        } else if (temp_v1_2 < -0x14) {
                            (*(s32 *)((char *)(var_t0) + 0x5)) = 2U;
                        } else {
                            (*(s32 *)((char *)(var_t0) + 0x5)) = 1U;
                        }
                    }
                }
                temp_v0_14 = (*(s32 *)((char *)(var_t0) + 0x5));
                if (temp_v0_14 == 0) {
                    if (var_a0 != NULL) {
                        (*(f32 *)((char *)(var_a0) + 0x4)) = (f32) D_800A0A04;
                    }
                    (*(s32 *)((char *)(var_t0) + 0x18)) = 50.0f;
                    if ((*(s32 *)((char *)(var_t0) + 0x5)) != temp_a1) {
                        if (func_1515C0F8(sp7C, &sp3C, sp7C) == 0) {
                            sp3C = &D_800A5480;
                        }
                        func_150D4D58(sp34, sp3C, (*(s32 *)((char *)(sp7C) + 0x40)), (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
                        var_t0 = sp84;
                    }
                } else if (temp_v0_14 == 2) {
                    if (var_a0 != NULL) {
                        (*(f32 *)((char *)(var_a0) + 0x4)) = (f32) D_800A0A08;
                    }
                    (*(s32 *)((char *)(var_t0) + 0x18)) = 10.0f;
                    if ((*(s32 *)((char *)(var_t0) + 0x5)) != temp_a1) {

                    }
                } else {
                    (*(s32 *)((char *)(var_t0) + 0x18)) = 20.0f;
                    if (var_a0 != NULL) {
                        (*(s32 *)((char *)(var_a0) + 0x4)) = 1.0f;
                    }
                }
            }
            goto block_61;
        case 2:
            if (!((*(s32 *)((char *)(arg0) + 0x1E)) & 4)) {
                (*(s32 *)((char *)&(sp6C) + 0x0)) = (*(s32 *)((char *)(sp34) + 0x0));
                (*(s32 *)((char *)&(sp6C) + 0x4)) = (s32) (*(s32 *)((char *)(sp34) + 0x4));
                (*(s32 *)((char *)&(sp6C) + 0x8)) = (s32) (*(s32 *)((char *)(sp34) + 0x8));
            }
            (*(u16 *)((char *)(arg0) + 0x1E)) = (u16) ((*(u16 *)((char *)(arg0) + 0x1E)) | 4);
            temp_v0_15 = (*(s32 *)((char *)(sp84) + 0xC));
            if (temp_v0_15 != NULL) {
                (*(s32 *)((char *)(temp_v0_15) + 0x58)) = (s32) ((*(s32 *)((char *)(temp_v0_15) + 0x58)) & ~2);
            }
            temp_v0_16 = (*(s32 *)((char *)(sp84) + 0x10));
            if (temp_v0_16 != NULL) {
                (*(s32 *)((char *)(temp_v0_16) + 0x58)) = (s32) ((*(s32 *)((char *)(temp_v0_16) + 0x58)) & ~2);
            }
            goto block_25;
        }
    } else {
block_61:
        temp_f0_3 = (*(s32 *)((char *)(var_t0) + 0x14));
        (*(f32 *)((char *)(var_t0) + 0x14)) = (f32) (temp_f0_3 + (((*(f32 *)((char *)(var_t0) + 0x18)) - temp_f0_3) * D_800A0A0C));
        return 1;
    }
}

s32 func_150D3FD4(void *arg0) {
    void **sp8C;
    s32 sp88;
    f32 sp84;
    f32 sp80;
    f32 *sp7C;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f2;
    f32 var_f0;
    f32 var_f12;
    f32 var_f24;
    f32 var_f26;
    f32 var_f2;
    s32 temp_a1;
    s32 var_a0;
    s32 var_t0;
    s8 var_v0;
    void **temp_t6;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    temp_t6 = (*(s32 *)((char *)(arg0) + 0x98));
    sp8C = temp_t6;
    var_t0 = (*(s32 *)((char *)(arg0) + 0x94));
    if (D_800C35EA != 1) {
        sp88 = var_t0;
        var_t0 = sp88;
        if (func_1515C0F8(*temp_t6, &sp7C, arg0) != 0) {
            var_f2 = func_15143E64(sp7C);
        } else {
            var_f2 = 0.0f;
        }
    } else if (D_800DBFF0->unk5F0 & 4) {
        var_f2 = 0.0f;
    } else {
        var_f2 = 128.0f;
    }
    if (var_f2 < 10.0f) {
        var_f26 = 0.0f;
    } else if (var_f2 > 70.0f) {
        var_f26 = 600.0f;
    } else {
        var_f26 = (var_f2 - 10.0f) * D_800A0A10 * 600.0f;
    }
    if ((*(s32 *)((char *)(arg0) + 0x2C)) >= 2) {
        var_f24 = 0.0f;
        var_a0 = (*(s32 *)((char *)(arg0) + 0x2E)) - 1;
        if (var_a0 < 0) {
            var_a0 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
        }
        if (var_a0 != (*(s32 *)((char *)(arg0) + 0x2D))) {
            do {
                temp_a1 = var_a0;
                var_a0 -= 1;
                if (var_a0 < 0) {
                    var_a0 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                }
                temp_v1 = (temp_a1 * 0x14) + var_t0;
                temp_f16 = (*(s32 *)((char *)(temp_v1) + 0xC));
                var_f24 += temp_f16;
                if (var_f26 < var_f24) {
                    if (temp_f16 != 0.0f) {
                        temp_f14 = (var_f24 - var_f26) / temp_f16;
                        temp_v0 = (var_a0 * 0x14) + var_t0;
                        temp_f0 = (*(s32 *)((char *)(temp_v0) + 0x0));
                        temp_f2 = (*(s32 *)((char *)(temp_v0) + 0x4));
                        temp_f12 = (*(s32 *)((char *)(temp_v0) + 0x8));
                        (*(f32 *)((char *)(temp_v0) + 0x0)) = (f32) (temp_f0 - ((temp_f0 - (*(f32 *)((char *)(temp_v1) + 0x0))) * temp_f14));
                        (*(f32 *)((char *)(temp_v0) + 0x4)) = (f32) (temp_f2 - ((temp_f2 - (*(f32 *)((char *)(temp_v1) + 0x4))) * temp_f14));
                        (*(f32 *)((char *)(temp_v0) + 0x8)) = (f32) (temp_f12 - ((temp_f12 - (*(f32 *)((char *)(temp_v1) + 0x8))) * temp_f14));
                        (*(f32 *)((char *)(temp_v1) + 0xC)) = (f32) ((*(f32 *)((char *)(temp_v1) + 0xC)) * (1.0f - temp_f14));
                    }
                    var_f24 = var_f26;
                    if (var_a0 != (*(s32 *)((char *)(arg0) + 0x2D))) {
                        do {
                            (*(s8 *)((char *)(arg0) + 0x2D)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2D)) + 1);
                            if ((*(s32 *)((char *)(arg0) + 0x25)) == (*(s32 *)((char *)(arg0) + 0x2D))) {
                                (*(s32 *)((char *)(arg0) + 0x2D)) = 0;
                            }
                            (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2C)) - 1);
                        } while (var_a0 != (*(s32 *)((char *)(arg0) + 0x2D)));
                    }
                }
            } while (var_a0 != (*(s32 *)((char *)(arg0) + 0x2D)));
        }
        if (var_f24 != 0.0f) {
            var_f12 = 1.0f / var_f24;
        } else {
            var_f12 = 0.0f;
        }
        sp80 = var_f12;
        sp84 = var_f24;
    }
    if ((*(s32 *)((char *)(arg0) + 0x2C)) >= 2) {
        var_v0 = (*(s32 *)((char *)(arg0) + 0x2E));
        var_f0 = sp84;
        do {
            var_v0 -= 1;
            if (var_v0 < 0) {
                var_v0 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
            }
            temp_v1_2 = (var_v0 * 0x14) + var_t0;
            (*(f32 *)((char *)(temp_v1_2) + 0x10)) = (f32) (var_f0 * ((*(f32 *)((char *)(sp8C) + 0x14)) * sp80));
            var_f0 -= (*(s32 *)((char *)(temp_v1_2) + 0xC));
        } while (var_v0 != (*(s32 *)((char *)(arg0) + 0x2D)));
    }
    return 1;
}

void *func_150D4300(void *arg0, void *arg1, s32 arg2) {
    f32 sp130;
    f32 sp124;
    void *sp118;
    f32 spEC;
    s8 spEB;
    f32 spE4;
    f32 spE0;
    void *spD8;
    u8 spD7;
    f32 sp88;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f24;
    f32 temp_f24_2;
    f32 temp_f26;
    f32 temp_f26_2;
    f32 temp_f28;
    f32 temp_f28_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f30;
    f32 temp_f30_2;
    f32 temp_f6;
    f32 temp_f8_3;
    f32 var_f14;
    f32 var_f14_2;
    f32 var_f16;
    f32 var_f16_2;
    f32 var_f18;
    f32 var_f18_2;
    s32 temp_a0;
    s32 temp_f10;
    s32 temp_f10_2;
    s32 temp_f10_3;
    s32 temp_f4;
    s32 temp_f4_2;
    s32 temp_f4_3;
    s32 temp_f6_2;
    s32 temp_f6_3;
    s32 temp_f6_4;
    s32 temp_f8;
    s32 temp_f8_2;
    s32 temp_f8_4;
    s32 temp_s2;
    s32 var_a0;
    s32 var_t1;
    s32 var_v1;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_t6;
    void *temp_t7;
    void *temp_t7_2;
    void *temp_t8;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *var_s0;
    void *var_v0;

    f32 sp128;
    f32 sp12C;
    f32 sp134;
    f32 sp138;
    var_s0 = arg1;
    if ((*(s32 *)((char *)(arg0) + 0x2C)) < 2) {

    } else {
        temp_s2 = (*(s32 *)((char *)(arg0) + 0x94));
        temp_v1 = (*(s32 *)((*(s32 *)((char *)(arg0) + 0x98))));
        if (((*(s32 *)((char *)(temp_v1) + 0x1D4)) == 0) || (((*(s32 *)((char *)(temp_v1) + 0x74)) & 0xF) == 0xF)) {

        } else {
            func_151D5D60((char *)(arg0) + 0x84, arg2, ((*(s32 *)((char *)(arg0) + 0x25)) * 0x30) + 0xF0, &spD8, &spD7);
            if (spD7 != 0) {
                var_v0 = (*(s32 *)((char *)(((char *)(arg0) + (arg2 * 4))) + 0x84));
                var_v1 = 0;
                if ((((*(s32 *)((char *)(arg0) + 0x25)) * 2) + 0xA) > 0) {
                    do {
                        (*(s32 *)((char *)(var_v0) + 0x8)) = 5;
                        (*(s32 *)((char *)(var_v0) + 0xA)) = 0;
                        (*(s32 *)((char *)(var_v0) + 0x6)) = 0;
                        (*(s32 *)((char *)(var_v0) + 0x18)) = 0xFFA;
                        (*(s32 *)((char *)(var_v0) + 0x1A)) = 0;
                        (*(s32 *)((char *)(var_v0) + 0x16)) = 0;
                        (*(s32 *)((char *)(var_v0) + 0x28)) = 0x1FA4;
                        (*(s32 *)((char *)(var_v0) + 0x2A)) = 0;
                        (*(s32 *)((char *)(var_v0) + 0x26)) = 0;
                        var_v1 += 1;
                        var_v0 = (char *)(var_v0) + 0x30;
                    } while (var_v1 < (((*(s32 *)((char *)(arg0) + 0x25)) * 2) + 0xA));
                }
            }
            temp_v0 = func_15144B34(arg2);
            spEB = 1;
            sp118 = temp_v0;
            var_s0 = func_15142FBC(func_1513F4E4(func_15142B7C(func_15142C10(func_15142E24(var_s0, &D_80091100, 0, 0, 0, 0, 0x78, 0, 0, &spEB, 0x3E), 0xFF, 0xFF, 0xFF, 0xFF, &spEB), 0x200005, 0x1F0600), 0x55, &spEB), D_800D2C9C | 0x80000 | 0x2CA0, (*(s32 *)((char *)&(D_800A4AC8) + 0x1C)) | (*(s32 *)((char *)&(D_800A4AC8) + 0x18)), &spEB);
            var_a0 = (*(s32 *)((char *)(arg0) + 0x2E)) - 1;
            if (var_a0 < 0) {
                var_a0 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
            }
            var_t1 = var_a0 - 1;
            if (var_t1 < 0) {
                var_t1 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
            }
            temp_v0_2 = temp_s2 + (var_a0 * 0x14);
            (*(s32 *)((char *)&(sp124) + 0x0)) = (*(s32 *)((char *)(temp_v0_2) + 0x0));
            (*(s32 *)((char *)&(sp124) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v0_2) + 0x4));
            (*(s32 *)((char *)&(sp124) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v0_2) + 0x8));
            temp_v1_2 = temp_s2 + (var_t1 * 0x14);
            spE0 = (*(s32 *)((char *)(temp_v0_2) + 0x10));
            (*(s32 *)((char *)&(sp130) + 0x0)) = (*(s32 *)((char *)(temp_v1_2) + 0x0));
            (*(s32 *)((char *)&(sp130) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v1_2) + 0x4));
            (*(s32 *)((char *)&(sp130) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v1_2) + 0x8));
            spE4 = (*(s32 *)((char *)(temp_v1_2) + 0x10));
            temp_f26 = sp124 - (*(s32 *)((char *)(sp118) + 0x0));
            temp_f28 = sp128 - (*(s32 *)((char *)(sp118) + 0x4));
            temp_f30 = sp12C - (*(s32 *)((char *)(sp118) + 0x8));
            temp_f22 = sp128 - sp134;
            temp_f24 = sp12C - sp138;
            temp_f20 = sp124 - sp130;
            temp_f14 = (temp_f22 * temp_f30) - (temp_f28 * temp_f24);
            temp_f16 = (temp_f24 * temp_f26) - (temp_f30 * temp_f20);
            temp_f12 = (temp_f20 * temp_f28) - (temp_f26 * temp_f22);
            temp_f6 = (temp_f14 * temp_f14) + (temp_f16 * temp_f16) + (temp_f12 * temp_f12);
            sp88 = temp_f6;
            spEC = temp_f6;
            temp_f10 = (s32) sp124;
            if (temp_f6 != 0.0f) {
                temp_f2 = spE0 / sqrtf(temp_f6);
                var_f14 = temp_f14 * temp_f2;
                var_f16 = temp_f16 * temp_f2;
                var_f18 = temp_f12 * temp_f2;
            } else {
                var_f18 = 0.0f;
                var_f14 = 0.0f;
                var_f16 = 0.0f;
            }
            temp_f8 = (s32) sp128;
            temp_f6_2 = (s32) var_f14;
            temp_f8_2 = (s32) var_f16;
            temp_f10_2 = (s32) sp12C;
            temp_f4 = (s32) var_f18;
            (*(s16 *)((char *)(spD8) + 0x0)) = (s16) (temp_f10 + temp_f6_2);
            (*(s16 *)((char *)(spD8) + 0x2)) = (s16) (temp_f8 + temp_f8_2);
            (*(s16 *)((char *)(spD8) + 0x4)) = (s16) (temp_f10_2 + temp_f4);
            spD8 = (char *)(spD8) + 0x10;
            (*(s16 *)((char *)(spD8) + 0x10)) = (s16) temp_f10;
            (*(s16 *)((char *)(spD8) + 0x2)) = (s16) temp_f8;
            (*(s16 *)((char *)(spD8) + 0x4)) = (s16) temp_f10_2;
            temp_t7 = (char *)(spD8) + 0x10;
            spD8 = temp_t7;
            (*(s16 *)((char *)(spD8) + 0x10)) = (s16) (temp_f10 - temp_f6_2);
            (*(s16 *)((char *)(spD8) + 0x2)) = (s16) (temp_f8 - temp_f8_2);
            (*(s16 *)((char *)(temp_t7) + 0x4)) = (s16) (temp_f10_2 - temp_f4);
            spD8 = (char *)(spD8) + 0x10;
            do {
                temp_f26_2 = sp130 - (*(s32 *)((char *)(sp118) + 0x0));
                temp_f28_2 = sp134 - (*(s32 *)((char *)(sp118) + 0x4));
                temp_f30_2 = sp138 - (*(s32 *)((char *)(sp118) + 0x8));
                temp_f22_2 = sp128 - sp134;
                temp_f24_2 = sp12C - sp138;
                temp_f20_2 = sp124 - sp130;
                temp_f14_2 = (temp_f22_2 * temp_f30_2) - (temp_f28_2 * temp_f24_2);
                temp_f16_2 = (temp_f24_2 * temp_f26_2) - (temp_f30_2 * temp_f20_2);
                temp_f12_2 = (temp_f20_2 * temp_f28_2) - (temp_f26_2 * temp_f22_2);
                temp_f8_3 = (temp_f14_2 * temp_f14_2) + (temp_f16_2 * temp_f16_2) + (temp_f12_2 * temp_f12_2);
                sp88 = temp_f8_3;
                spEC = temp_f8_3;
                temp_f4_2 = (s32) sp130;
                if (temp_f8_3 != 0.0f) {
                    temp_f2_2 = spE4 / sqrtf(temp_f8_3);
                    var_f14_2 = temp_f14_2 * temp_f2_2;
                    var_f16_2 = temp_f16_2 * temp_f2_2;
                    var_f18_2 = temp_f12_2 * temp_f2_2;
                } else {
                    var_f18_2 = 0.0f;
                    var_f14_2 = 0.0f;
                    var_f16_2 = 0.0f;
                }
                temp_f6_3 = (s32) sp134;
                temp_f8_4 = (s32) var_f14_2;
                temp_f6_4 = (s32) var_f16_2;
                temp_f4_3 = (s32) sp138;
                temp_f10_3 = (s32) var_f18_2;
                (*(s16 *)((char *)(spD8) + 0x0)) = (s16) (temp_f4_2 + temp_f8_4);
                (*(s16 *)((char *)(spD8) + 0x2)) = (s16) (temp_f6_3 + temp_f6_4);
                (*(s16 *)((char *)(spD8) + 0x4)) = (s16) (temp_f4_3 + temp_f10_3);
                temp_t7_2 = (char *)(spD8) + 0x10;
                spD8 = temp_t7_2;
                temp_t6 = (char *)(temp_t7_2) + 0x10;
                (*(s16 *)((char *)(spD8) + 0x10)) = (s16) temp_f4_2;
                (*(s16 *)((char *)(temp_t7_2) + 0x2)) = (s16) temp_f6_3;
                (*(s16 *)((char *)(temp_t7_2) + 0x4)) = (s16) temp_f4_3;
                spD8 = temp_t6;
                (*(s16 *)((char *)(temp_t7_2) + 0x10)) = (s16) (temp_f4_2 - temp_f8_4);
                (*(s16 *)((char *)(spD8) + 0x2)) = (s16) (temp_f6_3 - temp_f6_4);
                (*(s16 *)((char *)(temp_t6) + 0x4)) = (s16) (temp_f4_3 - temp_f10_3);
                spD8 = (char *)(spD8) + 0x10;
                (*(s32 *)((char *)(var_s0) + 0x0)) = 0x0100600C;
                temp_s0 = (char *)(var_s0) + 8;
                (*(s32 *)((char *)(var_s0) + 0x4)) = (void *) ((char *)(spD8) - 0x60);
                temp_s0_2 = (char *)(temp_s0) + 8;
                (*(s32 *)((char *)(var_s0) + 0x8)) = 0x06000206;
                (*(s32 *)((char *)(temp_s0) + 0x4)) = 0x20806;
                (*(s32 *)((char *)(temp_s0) + 0x8)) = 0x0604020A;
                (*(s32 *)((char *)(temp_s0_2) + 0x4)) = 0x2080A;
                var_s0 = (char *)(temp_s0_2) + 8;
                temp_a0 = var_t1;
                var_t1 -= 1;
                if (var_t1 < 0) {
                    var_t1 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                }
                if (temp_a0 != (*(s32 *)((char *)(arg0) + 0x2D))) {
                    temp_t8 = temp_s2 + (temp_a0 * 0x14);
                    (*(s32 *)((char *)&(sp124) + 0x0)) = (*(s32 *)((char *)(temp_t8) + 0x0));
                    (*(s32 *)((char *)&(sp124) + 0x4)) = (s32) (*(s32 *)((char *)(temp_t8) + 0x4));
                    temp_v1_3 = temp_s2 + (var_t1 * 0x14);
                    (*(s32 *)((char *)&(sp124) + 0x8)) = (s32) (*(s32 *)((char *)(temp_t8) + 0x8));
                    (*(s32 *)((char *)&(sp130) + 0x0)) = (*(s32 *)((char *)(temp_v1_3) + 0x0));
                    (*(s32 *)((char *)&(sp130) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v1_3) + 0x4));
                    (*(s32 *)((char *)&(sp130) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v1_3) + 0x8));
                    spE4 = (*(s32 *)((char *)(temp_v1_3) + 0x10));
                }
            } while (temp_a0 != (*(s32 *)((char *)(arg0) + 0x2D)));
        }
    }
    return var_s0;
}

void func_150D49C0(void *arg0, void *arg1, s32 arg2) {
    void *sp1C;
    void * var_a1;
    void * var_a1_2;
    s32 temp_t6;
    s32 var_v0;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_v0;
    void *temp_v1;

    temp_t6 = arg2 & 0xFF;
    temp_v1 = (*(s32 *)((char *)(arg0) + 0x98));
    if ((temp_t6 == 0) || (temp_t6 == 0x2E) || (temp_t6 == 3)) {
        if (((*(u8 *)((char *)(arg1) + 0x0)) == (*(u8 *)((char *)(temp_v1) + 0x0))) || ((*(u8 *)((char *)(temp_v1) + 0x4)) == (u8) (*(u8 *)((char *)(arg1) + 0x4)))) {
            func_1516972C(temp_t6);
        }
    } else if (temp_t6 == 0x2D) {
        temp_v0 = (*(s32 *)((char *)(arg1) + 0x0));
        temp_a0 = (*(s32 *)((char *)(temp_v1) + 0x0));
        if (temp_v0 == temp_a0) {
            temp_a0_2 = (*(s32 *)((char *)(arg1) + 0x4));
            (*(s32 *)((char *)(temp_v1) + 0x0)) = temp_a0_2;
            var_a1 = 0x79;
            (*(u8 *)((char *)(temp_v1) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x9));
            if ((*(s32 *)((char *)(temp_a0_2) + 0x4)) == 0x48) {
                var_a1 = 0x7A;
            }
            sp1C = temp_v1;
            var_v0 = func_1503195C(temp_a0_2, var_a1, 0);
            goto block_15;
        }
        if ((char *)(*(s32 *)((char *)(arg1) + 0x4)) == (char *)(temp_a0)) {
            (*(s32 *)((char *)(temp_v1) + 0x0)) = temp_v0;
            var_a1_2 = 0x79;
            (*(u8 *)((char *)(temp_v1) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x8));
            if ((*(s32 *)((char *)(temp_v0) + 0x4)) == 0x48) {
                var_a1_2 = 0x7A;
            }
            sp1C = temp_v1;
            var_v0 = func_1503195C(temp_v0, var_a1_2, 0);
block_15:
            (*(s32 *)((char *)(temp_v1) + 0x8)) = var_v0;
        }
    }
}

s32 func_150D4AE0(f32 *arg0, f32 *arg1, void *arg2, s32 arg3) {
    void * *sp34;
    void * *sp30;
    f32 *sp2C;
    f32 *sp28;

    if ((*(s32 *)((char *)(arg2) + 0x1D4)) != 0) {
        sp30 = &D_800A09D0;
        sp34 = &D_800A09DC;
        sp28 = arg0;
        sp2C = arg1;
        if (func_1514654C(arg2, arg3, 0, &sp30, &sp28, 2) != 0) {
            return 1;
        }
        return 0;
    }
    (*(s32 *)((char *)(arg0) + 0x0)) = (*(s32 *)((char *)(arg2) + 0x14));
    (*(f32 *)((char *)(arg0) + 0x4)) = (f32) ((*(f32 *)((char *)(arg2) + 0x18)) + 100.0f);
    (*(f32 *)((char *)(arg0) + 0x8)) = (f32) (*(f32 *)((char *)(arg2) + 0x1C));
    (*(s32 *)((char *)(arg1) + 0x0)) = (*(s32 *)((char *)(arg2) + 0x14));
    (*(f32 *)((char *)(arg1) + 0x4)) = (f32) ((*(f32 *)((char *)(arg2) + 0x18)) + 100.0f + 500.0f);
    (*(f32 *)((char *)(arg1) + 0x8)) = (f32) (*(f32 *)((char *)(arg2) + 0x1C));
    return 2;
}

void func_150D4BD4(void *arg0) {
    func_150D4C2C(arg0);
    func_151478F4(arg0);
}

void func_150D4C00(void *arg0) {
    func_150D4C2C(arg0);
    func_15147928(arg0);
}

void func_150D4C2C(void *arg0) {
    s32 (*sp20)(void *, void *, u32 *, void *, s32 *, u16 *);
    s32 temp_a0;
    s32 temp_a0_2;
    void *temp_s0;

    temp_s0 = (*(s32 *)((char *)(arg0) + 0x98));
    if (D_8008FD8C < 5) {
        func_1000FD38(func_150D5124, temp_s0, 0x5B3);
    }
    sp20 = func_150D5124;
    func_1000FD38(func_150D5124, temp_s0, 0x5B4);
    func_1000FD38(func_150D5124, temp_s0, 0x5BC);
    temp_a0 = (*(s32 *)((char *)(temp_s0) + 0xC));
    if (temp_a0 != 0) {
        func_1516972C(temp_a0);
    }
    temp_a0_2 = (*(s32 *)((char *)(temp_s0) + 0x10));
    if (temp_a0_2 != 0) {
        func_1516972C(temp_a0_2);
    }
}

s32 func_150D4CC4(void *arg0) {
    f32 temp_f0;
    void *temp_v1;

    (*(s16 *)((char *)(arg0) + 0x170)) = (s16) ((*(s16 *)((char *)(arg0) + 0x170)) - D_800BE9E4);
    if ((*(s32 *)((char *)(arg0) + 0x170)) < 0) {
        (*(s8 *)((char *)(arg0) + 0x18)) = (s8) *(&D_800A09C0 + ((random_u32() & 3) * 4));
        (*(s16 *)((char *)(arg0) + 0x170)) = (s16) ((random_u32(arg0) & 7) + 3);
    }
    temp_v1 = (char *)(arg0) + 0x110;
    temp_f0 = (*(s32 *)((char *)(temp_v1) + 0x48));
    (*(f32 *)((char *)(temp_v1) + 0x48)) = (f32) (temp_f0 + (((*(f32 *)((char *)(arg0) + 0x174)) - temp_f0) * D_800A0A14));
    return 1;
}

void func_150D4D58(f32 *arg0, f32 *arg1, f32 arg2, u8 arg3, s32 arg4) {
    s8 spFE;
    s8 spFD;
    s8 spFC;
    s8 spFB;
    s8 spFA;
    s8 spF9;
    s8 spF8;
    s32 spF4;
    s32 spF0;
    f32 spEC;
    f32 spE8;
    f32 spE0;
    void * spD4;
    void * spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    s16 spBA;
    s16 spB8;
    s16 spB6;
    s8 spB5;
    s8 spB4;
    s8 spB3;
    s8 spB2;
    s8 spB1;
    s8 spB0;
    s8 spAF;
    s8 spAE;
    s8 spAD;
    s8 spAC;
    s32 spA8;
    s32 spA4;
    s16 spA2;
    s16 spA0;
    s32 sp9C;
    s32 sp98;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f2;
    f32 temp_f4;
    s16 temp_s4;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    u32 temp_hi;
    u32 temp_s0;
    u32 temp_s1;

    temp_hi = random_u32() % 11U;
    spA0 = 0x2203;
    sp98 = 0x200005;
    sp9C = 0;
    spA4 = 0;
    spA8 = 0;
    spAC = 0xFF;
    spAD = 0xFF;
    spAE = 0xFF;
    spAF = 0xFF;
    spB0 = 0xFF;
    spB1 = 0xFF;
    spB2 = 0xFF;
    spB4 = 0xFF;
    (*(s32 *)((char *)&(spC8) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x0));
    (*(s32 *)((char *)&(spC8) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x4));
    (*(s32 *)((char *)&(spC8) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x8));
    (*(f32 *)((char *)&(spD4) + 0x0)) = (f32) (*(f32 *)((char *)&(D_800A5480) + 0x0));
    (*(s32 *)((char *)&(spD4) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
    (*(s32 *)((char *)&(spD4) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
    spB6 = 0xA;
    spB8 = 0x19;
    spF9 = 7;
    spFA = -1;
    temp_f24 = D_800A0A1C;
    var_s2 = temp_hi + 0xA;
    spBA = 1;
    spF0 = 0x4C207;
    spF8 = 0;
    spFB = -1;
    spFC = -1;
    spFD = 0;
    spF4 = 0;
    spFE = 0xFF;
    temp_s4 = ((s16) (s32) (arg2 * D_800A0A18) >> 8) + 0x40;
    temp_f22 = D_800A0A20;
    spBC = 1.0f;
    do {
        temp_f20 = (random_float() * temp_f22) + temp_f24;
        spB5 = (s8) *(&D_800A09C0 + ((random_u32() & 3) * 4));
        spA2 = (random_u32() % 18U) + 0x1B;
        spB3 = (random_u32() % 156U) + 0x64;
        temp_f2 = (random_float() * 233.0f) + 199.0f;
        spC0 = temp_f2;
        spC4 = temp_f2;
        temp_s1 = random_u32();
        temp_s0 = random_u32();
        func_15143794((s16) ((temp_s1 % 130U) + temp_s4), (s16) ((temp_s0 % 81U) - 0x40), (random_float() * 10.0f) + 5.0f, &spE0);
        spE0 -= (*(s32 *)((char *)(arg1) + 0x0)) * temp_f20;
        spE8 -= (*(s32 *)((char *)(arg1) + 0x8)) * temp_f20;
        temp_f4 = random_float() * D_800A0A24;
        spF0 &= ~0xC0;
        spEC = temp_f4 + D_800A0A28;
        var_s1 = 0;
        if (random_u32() & 1) {
            var_s1 = 0x80;
        }
        if (random_u32() & 1) {
            var_s0 = 0x40;
        } else {
            var_s0 = 0;
        }
        spF0 |= var_s0 | var_s1;
        func_15130280(&sp98, 1, 0, 0, (s32) arg3, arg4);
        var_s2 -= 1;
    } while (var_s2 > 0);
}

s32 func_150D5124(void *arg0, void * arg1, u32 *arg2, void * arg3, s32 *arg4, u16 *arg6) {
    f32 temp_f0;
    s32 temp_t2;
    s32 var_a1;
    s32 var_a3;
    s32 var_t0;
    s32 var_v1;
    u16 temp_a0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    void *temp_t1;
    void *temp_v0;

    temp_t2 = (*(s32 *)((char *)(arg0) + 0x1C));
    var_v1 = 0;
    var_a1 = 0;
    temp_t1 = (*(s32 *)((char *)(arg0) + 0x18));
    var_a3 = (*(s32 *)((char *)(arg0) + 0xC));
    var_t0 = *arg4;
    if (temp_t2 == 0x5B3) {
        temp_v0 = (*(s32 *)((char *)(temp_t1) + 0x0));
        if (temp_v0 != NULL) {
            temp_f0 = (*(s32 *)((char *)(temp_v0) + 0x28));
            var_v1 = (s32) (temp_f0 * 25.0f);
            if (var_v1 >= 0x1389) {
                var_v1 = 0x1388;
            } else if (var_v1 < 0x1F4) {
                var_v1 = 0;
            }
            var_a1 = (s32) ((f32) 0 + (temp_f0 * 5.0f));
            if (var_a1 >= 0x3E9) {
                var_a1 = 0x3E8;
            }
        }
        temp_v0_2 = (*(s32 *)((char *)(temp_t1) + 0x5));
        if (temp_v0_2 == 2) {
            var_v1 += 0x1B58;
        } else {
            var_a1 = 0x190;
            if (temp_v0_2 == 1) {
                var_v1 += 0x1B58;
            } else {
                var_a1 = 0x190;
                if (var_v1 != 0) {
                    var_a3 = var_v1;
                }
            }
        }
    } else if (temp_t2 == 0x5BC) {
        var_v1 = 0x5DC0;
        if ((*(s32 *)((char *)(temp_t1) + 0x5)) == 0) {
            var_a3 = 0x5DC0;
        } else {
            var_v1 = 0x190;
        }
    } else if (temp_t2 == 0x5B4) {
        temp_v0_3 = (*(s32 *)((char *)(temp_t1) + 0x5));
        if (temp_v0_3 == 0) {
            var_v1 = 0x3E80;
            var_a1 = 0x190;
            var_a3 = 0x3E80;
        } else if ((temp_v0_3 == 1) || (D_8008FD8C >= 5)) {
            var_v1 = 0x2EE0;
        } else {
            var_a1 = 0x190;
        }
    }
    if (var_a3 != var_v1) {
        if (var_a3 < var_v1) {
            var_a3 += D_800BE9E4 << 8;
            if (var_v1 < var_a3) {
                goto block_30;
            }
        } else {
            var_a3 -= D_800BE9E4 << 8;
            if (var_a3 < var_v1) {
block_30:
                var_a3 = var_v1;
            }
        }
    }
    if (var_t0 != var_a1) {
        if (var_t0 < var_a1) {
            var_t0 += D_800BE9E4 << 8;
            if (var_a1 < var_t0) {
                goto block_36;
            }
        } else {
            var_t0 -= D_800BE9E4 * 8;
            if (var_t0 < var_a1) {
block_36:
                var_t0 = var_a1;
            }
        }
    }
    if (var_a3 < 0x1F4) {
        var_a3 = 0;
    } else if (*arg6 == 0) {
        (*(s16 *)((char *)(arg0) + 0x0)) = (s16) temp_t2;
        *arg6 = (u16) temp_t2;
    }
    (*(s16 *)((char *)(arg0) + 0x2)) = (s16) (s32) (*(s16 *)((char *)((*(s16 *)((char *)(temp_t1) + 0x0))) + 0x14));
    (*(s16 *)((char *)(arg0) + 0x4)) = (s16) (s32) (*(s16 *)((char *)((*(s16 *)((char *)(temp_t1) + 0x0))) + 0x18));
    (*(s16 *)((char *)(arg0) + 0x6)) = (s16) (s32) (*(s16 *)((char *)((*(s16 *)((char *)(temp_t1) + 0x0))) + 0x1C));
    if (D_800C35EA == 1) {
        (*(s32 *)((char *)(arg0) + 0xC)) = (s32) (var_a3 >> 1);
        *arg2 = (u32) *arg2 >> 1;
    } else {
        (*(s32 *)((char *)(arg0) + 0xC)) = var_a3;
    }
    (*(s16 *)((char *)(arg0) + 0x20)) = (s16) var_t0;
    *arg4 = (s32) (s16) var_t0;
    if (*arg2 == 0) {
        temp_a0 = (*(s32 *)((char *)(arg0) + 0x24));
        if (temp_a0 != 0) {
            func_100111C8(temp_a0, var_a1, var_a3);
            (*(s32 *)((char *)(arg0) + 0x24)) = 0U;
        }
        *arg6 = 0;
    }
    return 0;
}
