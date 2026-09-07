/**
 * Auto-decompiled from asm/159940.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_1502B5C8();                /* extern */
void * func_15047B80(); /* extern */
void * func_150495B0(); /* extern */
void * func_150A7D00();                /* extern */
void * func_150A7DF0();                /* extern */
void func_1512D070();                     /* static */
void func_1512D2F8();                     /* static */
void func_1512D368();                     /* static */
extern f32 D_800A36A0;
extern f32 D_800A36A4;
extern f32 D_800A36A8;
extern f32 D_800A36AC;
extern f32 D_800A36B0;
extern f32 D_800A36B4;
extern f32 D_800A36B8;
extern f32 D_800A36BC;
extern f32 D_800A36C0;
extern f32 D_800A36C4;
extern f32 D_800A36C8;
extern f32 D_800A36CC;
extern f32 D_800A36D0;
extern f32 D_800A36D4;
extern f32 D_800A36D8;
extern s32 D_800D9B90;
extern s32 D_800DC280;
extern s32 D_800DC290;
extern s32 D_800DC2C0;
extern s32 D_800DC320;
extern s32 D_800DCDE0;

void func_1512C490(void *arg0) {
    void * sp158;
    void * sp118;
    f32 sp110;
    f32 sp10C;
    f32 sp108;
    f32 sp104;
    f32 spF8;
    f32 spF4;
    f32 spF0;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    void * spD4;
    void * spC8;
    f32 spC4;
    void * spB8;
    f32 spAC;
    s32 spA8;
    f32 spA4;
    void * sp64;
    f32 sp60;
    f32 sp4C;
    void *sp48;
    void *sp44;
    void * *temp_a0;
    void * *temp_a0_2;
    void * *temp_a0_3;
    void * *temp_a0_4;
    void * *temp_a0_5;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f14_3;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f16_3;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 var_f0;
    f32 var_f12;
    f32 var_f2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_8;
    s32 temp_v0_9;
    u8 temp_t0;
    u8 temp_t0_2;
    void *temp_a1;
    void *temp_t1;
    void *temp_t3;
    void *temp_t5;
    void *temp_v0_10;
    void *temp_v0_11;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v1;
    void *temp_v1_2;

    spC4 = (*(s32 *)((char *)((D_800BE628 + ((*(s32 *)((char *)(arg0) + 0x23D)) * 0x180))) + 0x84));
    spC4 += (1.0f - spC4) * 0.5f;
    if ((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D4))) + 0x120)) != 0) {
        (*(s32 *)((char *)(arg0) + 0x198)) = 0.0f;
        (*(s32 *)((char *)(arg0) + 0x190)) = 0.0f;
        (*(s32 *)((char *)(arg0) + 0x74C)) = 0.0f;
        (*(s32 *)((char *)(arg0) + 0x754)) = 0.0f;
    }
    if ((*(s32 *)((char *)(arg0) + 0x23C)) != 0) {
        (*(s32 *)((char *)(arg0) + 0x7D0)) = 0.0f;
        (*(s32 *)((char *)(arg0) + 0x7D4)) = 0.0f;
        (*(f32 *)((char *)(arg0) + 0x194)) = (f32) (*(f32 *)((char *)(arg0) + 0x198));
        (*(f32 *)((char *)(arg0) + 0x18C)) = (f32) (*(f32 *)((char *)(arg0) + 0x190));
    } else if (((*(s32 *)((char *)(arg0) + 0x2C)) == 0x100) || ((*(s32 *)((char *)(arg0) + 0x23E)) != 0)) {
        func_150495B0((char *)(arg0) + 0x194, (*(s32 *)((char *)(arg0) + 0x198)), (char *)(arg0) + 0x7D0, 0x40800000, 6.0f, (*(s32 *)((char *)(arg0) + 0x7B4)));
        func_150495B0((char *)(arg0) + 0x18C, (*(s32 *)((char *)(arg0) + 0x190)), (char *)(arg0) + 0x7D4, 0x40800000, 6.0f, (*(s32 *)((char *)(arg0) + 0x7B4)));
    } else {
        func_150495B0((char *)(arg0) + 0x194, (*(s32 *)((char *)(arg0) + 0x198)), (char *)(arg0) + 0x7D0, 0x3F400000, D_800A36A0, (*(s32 *)((char *)(arg0) + 0x7B4)));
        func_150495B0((char *)(arg0) + 0x18C, (*(s32 *)((char *)(arg0) + 0x190)), (char *)(arg0) + 0x7D4, 0x3F400000, D_800A36A4, (*(s32 *)((char *)(arg0) + 0x7B4)));
    }
    temp_a1 = (char *)(arg0) + 0x2BC;
    temp_v1 = (char *)(arg0) + 0x2F8;
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x2C));
    (*(f32 *)((char *)(arg0) + 0x2E0)) = (f32) (*(f32 *)((char *)(arg0) + 0x2BC));
    (*(s32 *)((char *)(arg0) + 0x2E4)) = (s32) (*(s32 *)((char *)(temp_a1) + 0x4));
    (*(s32 *)((char *)(arg0) + 0x2E8)) = (s32) (*(s32 *)((char *)(temp_a1) + 0x8));
    (*(f32 *)((char *)(arg0) + 0x2EC)) = (f32) (*(f32 *)((char *)(arg0) + 0x2F8));
    (*(s32 *)((char *)(arg0) + 0x2F0)) = (s32) (*(s32 *)((char *)(temp_v1) + 0x4));
    (*(s32 *)((char *)(arg0) + 0x2F4)) = (s32) (*(s32 *)((char *)(temp_v1) + 0x8));
    if ((temp_v0 & 0x40000) || (temp_v0 & 0x20)) {
        (*(s32 *)((char *)&(spEC) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x2F8));
        (*(s32 *)((char *)&(spEC) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v1) + 0x4));
        (*(s32 *)((char *)&(spEC) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v1) + 0x8));
        (*(s32 *)((char *)&(spE0) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x2A4));
        (*(s32 *)((char *)&(spE0) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x2A8));
        (*(s32 *)((char *)&(spE0) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x2AC));
    } else if ((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D4))) + 0x197)) != 0) {
        (*(s32 *)((char *)&(spEC) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x2F8));
        (*(s32 *)((char *)&(spEC) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v1) + 0x4));
        (*(s32 *)((char *)&(spEC) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v1) + 0x8));
        (*(s32 *)((char *)&(spE0) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x2BC));
        (*(s32 *)((char *)&(spE0) + 0x4)) = (s32) (*(s32 *)((char *)(temp_a1) + 0x4));
        (*(s32 *)((char *)&(spE0) + 0x8)) = (s32) (*(s32 *)((char *)(temp_a1) + 0x8));
        func_1512523C(arg0, temp_a1);
        func_15125594(arg0);
    } else {
        sp110 = (*(s32 *)((char *)(arg0) + 0x194));
        sp10C = (*(s32 *)((char *)(arg0) + 0x18C));
        sp108 = (*(s32 *)((char *)(arg0) + 0x74C));
        sp104 = (*(s32 *)((char *)(arg0) + 0x754));
        sp48 = temp_a1;
        sp44 = temp_v1;
        temp_f14 = sinf((*(s32 *)((char *)(arg0) + 0x3A0)) - D_800A36A8) * sp110;
        spF8 = temp_f14;
        temp_f0 = cosf((*(s32 *)((char *)(arg0) + 0x3A0)) - D_800A36AC);
        spEC = (*(s32 *)((char *)(arg0) + 0x2F8)) + sp108 + temp_f14;
        temp_f2 = temp_f0 * sp110;
        spF0 = (*(s32 *)((char *)(arg0) + 0x2FC)) + sp10C;
        spF4 = (*(s32 *)((char *)(arg0) + 0x300)) + sp104 + temp_f2;
        spE0 = (*(s32 *)((char *)(arg0) + 0x2BC)) + sp108 + temp_f14;
        spE4 = (*(s32 *)((char *)(arg0) + 0x2C0)) + sp10C;
        spE8 = (*(s32 *)((char *)(arg0) + 0x2C4)) + sp104 + temp_f2;
        (*(f32 *)((char *)&(spD4) + 0x0)) = (f32) (*(f32 *)((char *)(arg0) + 0x2F8));
        (*(s32 *)((char *)&(spD4) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v1) + 0x4));
        (*(s32 *)((char *)&(spD4) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v1) + 0x8));
        (*(f32 *)((char *)&(spC8) + 0x0)) = (f32) (*(f32 *)((char *)(arg0) + 0x2BC));
        (*(s32 *)((char *)&(spC8) + 0x4)) = (s32) (*(s32 *)((char *)(temp_a1) + 0x4));
        (*(s32 *)((char *)&(spC8) + 0x8)) = (s32) (*(s32 *)((char *)(temp_a1) + 0x8));
        (*(f32 *)((char *)(arg0) + 0x2F8)) = (f32) (*(f32 *)((char *)&(spEC) + 0x0));
        (*(s32 *)((char *)(temp_v1) + 0x4)) = (s32) (*(s32 *)((char *)&(spEC) + 0x4));
        (*(s32 *)((char *)(temp_v1) + 0x8)) = (s32) (*(s32 *)((char *)&(spEC) + 0x8));
        (*(f32 *)((char *)(arg0) + 0x2BC)) = (f32) (*(f32 *)((char *)&(spE0) + 0x0));
        (*(s32 *)((char *)(temp_a1) + 0x4)) = (s32) (*(s32 *)((char *)&(spE0) + 0x4));
        (*(s32 *)((char *)(temp_a1) + 0x8)) = (s32) (*(s32 *)((char *)&(spE0) + 0x8));
        func_1512523C((*(void **)&sp10C), (*(void **)&temp_f14), arg0, temp_a1);
        func_15125594(arg0);
    }
    func_150491EC(&spEC, &spE0, &spB8);
    temp_t5 = (*(s32 *)((char *)(arg0) + 0x3D4));
    (*(f32 *)((char *)(temp_t5) + 0x148)) = (f32) (*(f32 *)((char *)&(spE0) + 0x0));
    (*(s32 *)((char *)(temp_t5) + 0x14C)) = (s32) (*(s32 *)((char *)&(spE0) + 0x4));
    (*(s32 *)((char *)(temp_t5) + 0x150)) = (s32) (*(s32 *)((char *)&(spE0) + 0x8));
    temp_t3 = (*(s32 *)((char *)(arg0) + 0x3D4));
    (*(f32 *)((char *)(temp_t3) + 0x13C)) = (f32) (*(f32 *)((char *)&(spEC) + 0x0));
    (*(s32 *)((char *)(temp_t3) + 0x140)) = (s32) (*(s32 *)((char *)&(spEC) + 0x4));
    (*(s32 *)((char *)(temp_t3) + 0x144)) = (s32) (*(s32 *)((char *)&(spEC) + 0x8));
    temp_t1 = (*(s32 *)((char *)(arg0) + 0x3D4));
    (*(f32 *)((char *)(temp_t1) + 0x130)) = (f32) (*(f32 *)((char *)&(spB8) + 0x0));
    (*(s32 *)((char *)(temp_t1) + 0x134)) = (s32) (*(s32 *)((char *)&(spB8) + 0x4));
    (*(f32 *)((char *)(temp_t1) + 0x138)) = (f32) (*(f32 *)((char *)&(spB8) + 0x8));
    func_15047B80(*(&D_800DC2A0 + (D_800BE9C0 * 4)) + ((*(s32 *)((char *)(arg0) + 0x23D)) << 6), (D_800BE9C0 << 5) + &D_800D9B90, spEC, spF0, spF4, spE0, spE4, spE8, 0.0f, 1.0f, 0.0f);
    temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x2C));
    if (temp_v0_2 & 0x80000) {
        func_1512D070(arg0);
        func_1512D368(arg0);
        return;
    }
    if (temp_v0_2 == 0x40000) {
        func_150A7DF0(&sp158, 0.0f, 0.0f, (*(s32 *)((char *)(arg0) + 0x5EC)));
        temp_a0 = *(&D_800DC2A0 + (D_800BE9C0 * 4)) + ((*(s32 *)((char *)(arg0) + 0x23D)) << 6);
        guMtxCatL(temp_a0, &sp158, temp_a0);
        func_1512D070(arg0);
        return;
    }
    if ((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D4))) + 0x197)) != 0) {
        if ((*(s32 *)((char *)(arg0) + 0x84D)) == 2) {
            temp_v0_3 = ((*(s32 *)((char *)(arg0) + 0x84E)) * 0x18) + *(&D_800DC280 + ((*(s32 *)((char *)(arg0) + 0x850)) * 4));
            (*(f32 *)((char *)(arg0) + 0x854)) = (f32) ((*(f32 *)((char *)(arg0) + 0x854)) + (*(f32 *)((char *)(temp_v0_3) + 0xC)));
            (*(f32 *)((char *)(arg0) + 0x858)) = (f32) ((*(f32 *)((char *)(arg0) + 0x858)) + (*(f32 *)((char *)(temp_v0_3) + 0x10)));
            (*(f32 *)((char *)(arg0) + 0x85C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x85C)) + (*(f32 *)((char *)(temp_v0_3) + 0x14)));
            (*(f32 *)((char *)(arg0) + 0x860)) = (f32) ((*(f32 *)((char *)(arg0) + 0x860)) + (*(f32 *)((char *)(temp_v0_3) + 0x0)));
            (*(f32 *)((char *)(arg0) + 0x864)) = (f32) ((*(f32 *)((char *)(arg0) + 0x864)) + (*(f32 *)((char *)(temp_v0_3) + 0x4)));
            (*(f32 *)((char *)(arg0) + 0x868)) = (f32) ((*(f32 *)((char *)(arg0) + 0x868)) + (*(f32 *)((char *)(temp_v0_3) + 0x8)));
        } else {
            temp_f2_2 = (*(s32 *)((char *)(arg0) + 0x854));
            temp_f12 = (*(s32 *)((char *)(arg0) + 0x858));
            temp_f14_2 = (*(s32 *)((char *)(arg0) + 0x85C));
            temp_f16 = (*(s32 *)((char *)(arg0) + 0x860));
            temp_f18 = (*(s32 *)((char *)(arg0) + 0x864));
            (*(f32 *)((char *)(arg0) + 0x854)) = (f32) (temp_f2_2 - (temp_f2_2 * D_800A36B0));
            (*(f32 *)((char *)(arg0) + 0x858)) = (f32) (temp_f12 - (temp_f12 * D_800A36B0));
            (*(f32 *)((char *)(arg0) + 0x85C)) = (f32) (temp_f14_2 - (temp_f14_2 * D_800A36B0));
            (*(f32 *)((char *)(arg0) + 0x860)) = (f32) (temp_f16 - (temp_f16 * D_800A36B0));
            (*(f32 *)((char *)(arg0) + 0x864)) = (f32) (temp_f18 - (temp_f18 * D_800A36B0));
            sp4C = (*(s32 *)((char *)(arg0) + 0x868));
            (*(f32 *)((char *)(arg0) + 0x868)) = (f32) (sp4C - (sp4C * D_800A36B0));
        }
        func_1512D2F8(arg0);
    } else {
        temp_f2_3 = (*(s32 *)((char *)(arg0) + 0x854));
        temp_f12_2 = (*(s32 *)((char *)(arg0) + 0x858));
        temp_f14_3 = (*(s32 *)((char *)(arg0) + 0x85C));
        temp_f16_2 = (*(s32 *)((char *)(arg0) + 0x860));
        temp_f18_2 = (*(s32 *)((char *)(arg0) + 0x864));
        (*(f32 *)((char *)(arg0) + 0x854)) = (f32) (temp_f2_3 - (temp_f2_3 * D_800A36B4));
        (*(f32 *)((char *)(arg0) + 0x858)) = (f32) (temp_f12_2 - (temp_f12_2 * D_800A36B4));
        (*(f32 *)((char *)(arg0) + 0x85C)) = (f32) (temp_f14_3 - (temp_f14_3 * D_800A36B4));
        (*(f32 *)((char *)(arg0) + 0x860)) = (f32) (temp_f16_2 - (temp_f16_2 * D_800A36B4));
        (*(f32 *)((char *)(arg0) + 0x864)) = (f32) (temp_f18_2 - (temp_f18_2 * D_800A36B4));
        sp4C = (*(s32 *)((char *)(arg0) + 0x868));
        (*(f32 *)((char *)(arg0) + 0x868)) = (f32) (sp4C - (sp4C * D_800A36B4));
    }
    temp_f0_2 = (*(s32 *)((char *)(arg0) + 0x854)) * spC4;
    (*(f32 *)((char *)(arg0) + 0x5EC)) = (f32) ((*(f32 *)((char *)(arg0) + 0x5EC)) + temp_f0_2);
    func_150A7DF0(&sp158, -(*(s32 *)((char *)(arg0) + 0x858)) * spC4, (*(s32 *)((char *)(arg0) + 0x85C)) * spC4, temp_f0_2);
    temp_a0_2 = *(&D_800DC2A0 + (D_800BE9C0 * 4)) + ((*(s32 *)((char *)(arg0) + 0x23D)) << 6);
    guMtxCatL(temp_a0_2, &sp158, temp_a0_2);
    temp_v0_4 = (*(s32 *)((char *)(arg0) + 0x3D4));
    if (temp_v0_4 != NULL) {
        sp60 = func_15048FC8((char *)(temp_v0_4) + 0x130) - 180.0f;
        temp_v0_5 = (*(s32 *)((char *)(arg0) + 0x3D4));
        temp_f2_4 = (*(s32 *)((char *)(temp_v0_5) + 0x130));
        temp_f16_3 = (*(s32 *)((char *)(temp_v0_5) + 0x138));
        func_150A8050(&sp64, (-func_150484A0((*(s32 *)((char *)(temp_v0_5) + 0x134)), sqrtf((temp_f2_4 * temp_f2_4) + (temp_f16_3 * temp_f16_3))) * D_800A36B8) - ((*(s32 *)((char *)(arg0) + 0x858)) * spC4), sp60 - ((*(s32 *)((char *)(arg0) + 0x85C)) * spC4), 0);
        guMtxXFMF(&sp64, 0, 0, 0x3F800000, &spA4, &spA8, &spAC);
        (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D4))) + 0x130)) = spA4;
        (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D4))) + 0x134)) = spA8;
        (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D4))) + 0x138)) = spAC;
    }
    if ((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D4))) + 0x197)) != 0) {
        temp_v0_6 = ((*(s32 *)((char *)(arg0) + 0x23D)) * 0x18) + &D_800DCDE0;
        func_150A7DF0(&sp158, (*(s32 *)((char *)(temp_v0_6) + 0xC)), (*(s32 *)((char *)(temp_v0_6) + 0x10)), (*(s32 *)((char *)(temp_v0_6) + 0x14)));
        temp_v0_7 = ((*(s32 *)((char *)(arg0) + 0x23D)) * 0x18) + &D_800DCDE0;
        func_150A7D00(&sp118, (*(s32 *)((char *)(temp_v0_7) + 0x0)), (*(s32 *)((char *)(temp_v0_7) + 0x4)), (*(s32 *)((char *)(temp_v0_7) + 0x8)));
        guMtxCatL(&sp158, &sp118, &sp158);
        temp_a0_3 = *(&D_800DC2A0 + (D_800BE9C0 * 4)) + ((*(s32 *)((char *)(arg0) + 0x23D)) << 6);
        guMtxCatL(temp_a0_3, &sp158, temp_a0_3);
        return;
    }
    temp_v0_8 = (*(s32 *)((char *)(arg0) + 0x2C));
    if (((temp_v0_8 & 0x80) || ((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D0))) + 0x102)) != 0)) && ((*(s32 *)((char *)(arg0) + 0x298)) != 0)) {
        var_f12 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D0))) + 0xC4)) * 0.25f;
    } else if (((*(s32 *)((char *)(arg0) + 0x5F0)) & 0x80) && (temp_v0_8 != 0x40)) {
        var_f12 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D0))) + 0xC4)) * 0.5f;
    } else {
        var_f12 = 0.0f;
    }
    if (!(temp_v0_8 & 0x40000)) {
        if (((*(s32 *)((char *)(arg0) + 0x5F0)) & 0x80) || ((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D0))) + 0x102)) != 0)) {
            var_f0 = 2.0f;
            var_f2 = 4.0f;
        } else {
            var_f0 = 4.0f;
            var_f2 = 8.0f;
        }
        func_150495B0((*(void **)&var_f12), (f32)(s32)((char *)(arg0) + 0x5EC), (*(void **)&var_f12), (char *)(arg0) + 0x264, var_f0, var_f2, (*(f32 *)((char *)(arg0) + 0x7B4)));
    }
    func_1512D368(arg0);
    temp_v0_9 = (*(s32 *)((char *)(arg0) + 0x2C));
    if (temp_v0_9 != 0x8000) {
        if (temp_v0_9 == 1) {
            (*(f32 *)((char *)(arg0) + 0x388)) = (f32) ((*(f32 *)((char *)(arg0) + 0x388)) - (*(f32 *)((char *)(arg0) + 0x5D0)));
            (*(f32 *)((char *)(arg0) + 0x398)) = (f32) ((*(f32 *)((char *)(arg0) + 0x388)) * D_800A36BC);
        }
        temp_t0 = (*(s32 *)((char *)(arg0) + 0x23D));
        temp_v0_10 = (temp_t0 * 0x18) + &D_800DCDE0;
        func_150A7DF0(&sp158, (*(s32 *)((char *)(temp_v0_10) + 0xC)) + ((*(s32 *)((char *)(arg0) + 0x5D0)) + (*(s32 *)((char *)(arg0) + 0x3A8)) + (*(s32 *)((char *)(arg0) + 0x38C))), (*(s32 *)((char *)(temp_v0_10) + 0x10)) + (*(s32 *)((char *)(arg0) + 0x5E8)), (*(s32 *)((char *)(temp_v0_10) + 0x14)) + ((*(s32 *)((char *)(arg0) + 0x5EC)) + (*(&D_800DC320 + (temp_t0 * 0x68)) * 0.5f)));
        if ((*(s32 *)((char *)(arg0) + 0x2C)) == 0x40000) {
            func_150A7DF0(&sp158, 0.0f, 0.0f, (*(s32 *)((char *)(arg0) + 0x5EC)));
        }
    }
    temp_a0_4 = *(&D_800DC2A0 + (D_800BE9C0 * 4)) + ((*(s32 *)((char *)(arg0) + 0x23D)) << 6);
    guMtxCatL(temp_a0_4, &sp158, temp_a0_4);
    func_1512D070(arg0);
    if (!((*(s32 *)((char *)(arg0) + 0x2C)) & 0x40000)) {
        temp_t0_2 = (*(s32 *)((char *)(arg0) + 0x23D));
        temp_v0_11 = (temp_t0_2 * 0x18) + &D_800DCDE0;
        temp_v1_2 = (temp_t0_2 * 0x68) + &D_800DC2C0;
        func_150A7D00(&sp118, (*(s32 *)((char *)(temp_v0_11) + 0x0)) + (*(s32 *)((char *)(temp_v1_2) + 0x54)), (*(s32 *)((char *)(temp_v0_11) + 0x4)) + (*(s32 *)((char *)(temp_v1_2) + 0x58)), (*(s32 *)((char *)(temp_v0_11) + 0x8)) + (*(s32 *)((char *)(temp_v1_2) + 0x5C)));
        temp_a0_5 = *(&D_800DC2A0 + (D_800BE9C0 * 4)) + ((*(s32 *)((char *)(arg0) + 0x23D)) << 6);
        guMtxCatL(temp_a0_5, &sp118, temp_a0_5);
    }
}

void func_1512D070(void *arg0) {
    void * sp78;
    f32 sp4C;
    f32 sp38;
    void * *temp_a0;
    f32 temp_f0;
    f32 temp_f14;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 var_f2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;

    temp_v1 = (*(s32 *)((char *)(arg0) + 0x2C));
    temp_v0 = temp_v1 & 0x80000;
    if (temp_v0 != 0) {
        var_f2 = D_800A36C0;
    } else if ((*(s32 *)((char *)(arg0) + 0x298)) != 0) {
        var_f2 = D_800A36C4;
    } else {
        var_f2 = D_800A36C8;
    }
    if ((temp_v0 != 0) || (temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x5F0)), ((temp_v0_2 & 1) != 0)) || ((temp_v1 != 0x40000) && (temp_v0_2 & 8))) {
        (*(f32 *)((char *)(arg0) + 0x7B0)) = (f32) ((*(f32 *)((char *)(arg0) + 0x7B0)) + (D_800A36CC * (f32) D_800BE9E4));
        temp_f0 = (*(s32 *)((char *)(arg0) + 0x7B0));
        if (D_800A36D0 < temp_f0) {
            (*(f32 *)((char *)(arg0) + 0x7B0)) = (f32) (temp_f0 - D_800A36D4);
        }
    } else {
        var_f2 = 0.0f;
    }
    if (((*(s32 *)((char *)(arg0) + 0x23C)) != 0) || ((*(s32 *)((char *)(arg0) + 0x5F0)) & 4)) {
        (*(s32 *)((char *)(arg0) + 0x7DC)) = var_f2;
    } else {
        func_150495B0((char *)(arg0) + 0x7DC, var_f2, (char *)(arg0) + 0x7D8, 0x3E4CCCCD, D_800A36D8, (*(s32 *)((char *)(arg0) + 0x7B4)));
    }
    guMtxIdentF(&sp38);
    temp_f2 = (*(s32 *)((char *)(arg0) + 0x7DC));
    temp_f14 = func_150AD78C((*(s32 *)((char *)(arg0) + 0x7B0))) * temp_f2;
    sp38 = (2.0f * temp_f14) + (2.0f * temp_f2) + 1.0f;
    temp_f2_2 = (*(s32 *)((char *)(arg0) + 0x7DC));
    sp4C = (func_150AD780((*(s32 *)((char *)(arg0) + 0x7B0)), temp_f14) * temp_f2_2) + temp_f2_2 + 1.0f;
    guMtxF2L(&sp38, &sp78);
    temp_a0 = *(&D_800DC2A0 + (D_800BE9C0 * 4)) + ((*(s32 *)((char *)(arg0) + 0x23D)) << 6);
    guMtxCatL(temp_a0, &sp78, temp_a0);
}

void func_1512D238(void) {
    u32 sp3C;
    void * *var_s1;
    void * *var_s2;
    s32 temp_v0;
    s32 var_s0;

    var_s2 = &D_800DC290;
    var_s1 = &D_800DC280;
    var_s0 = 0;
    do {
        temp_v0 = func_1502B5C8(&sp3C, 2, 0x1B, var_s0);
        var_s0 += 1;
        var_s1 = (char *)(var_s1) + 4;
        var_s2 = (char *)(var_s2) + 4;
        (*(s32 *)((char *)(var_s1) - 0x4)) = temp_v0;
        (*(u32 *)((char *)(var_s2) - 0x4)) = (u32) (sp3C / 24U);
    } while (var_s0 != 4);
}

void func_1512D2E4(void *arg0, s32 arg1) {
    (*(s32 *)((char *)(arg0) + 0x850)) = arg1;
    (*(s32 *)((char *)(arg0) + 0x84D)) = 1;
}

void func_1512D2F8(void *arg0) {
    u8 temp_t9;
    u8 temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x84D));
    switch (temp_v0) {                              /* irregular */
    case 1:
        (*(s32 *)((char *)(arg0) + 0x84E)) = 0U;
        (*(s32 *)((char *)(arg0) + 0x84D)) = 2U;
        return;
    case 2:
        temp_t9 = (*(s32 *)((char *)(arg0) + 0x84E)) + D_800BE9E4;
        (*(s32 *)((char *)(arg0) + 0x84E)) = temp_t9;
        if ((temp_t9 & 0xFF) >= *(&D_800DC290 + ((*(s32 *)((char *)(arg0) + 0x850)) * 4))) {
            (*(s32 *)((char *)(arg0) + 0x84D)) = 0U;
        }
        return;
    }
}

void func_1512D368(void *arg0) {

}
