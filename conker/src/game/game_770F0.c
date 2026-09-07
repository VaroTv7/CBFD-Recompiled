/**
 * Auto-decompiled from asm/770F0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


extern s32 D_80085FF0;
extern f32 D_80099090;
extern f32 D_80099094;
extern f32 D_80099098;

void func_15049C40(void *arg0, void *arg1) {
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f2;

    temp_f12 = (*(s32 *)((char *)(arg1) + 0x0));
    temp_f14 = (*(s32 *)((char *)(arg1) + 0x4));
    temp_f16 = (*(s32 *)((char *)(arg1) + 0x8));
    temp_f2 = (*(s32 *)((char *)(arg1) + 0xC));
    if (((temp_f2 * (*(s32 *)((char *)(arg0) + 0xC))) + (((*(s32 *)((char *)(arg0) + 0x0)) * temp_f12) + ((*(s32 *)((char *)(arg0) + 0x4)) * temp_f14) + ((*(s32 *)((char *)(arg0) + 0x8)) * temp_f16))) < 0.0f) {
        (*(f32 *)((char *)(arg1) + 0x0)) = (f32) -temp_f12;
        (*(f32 *)((char *)(arg1) + 0x4)) = (f32) -temp_f14;
        (*(f32 *)((char *)(arg1) + 0x8)) = (f32) -temp_f16;
        (*(f32 *)((char *)(arg1) + 0xC)) = (f32) -temp_f2;
    }
}

void func_15049CB8(void *arg0, void *arg1) {
    s32 sp40[64];
    void *sp38;
    s32 sp34;
    s32 sp2C;
    void *sp28;
    void *sp24;
    s32 sp20;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 var_f0;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_t0;
    s32 var_a1;
    s32 var_v0;
    void *temp_t1;
    void *temp_t2;
    void *var_v1;

    temp_f12 = (*(s32 *)((char *)(arg0) + 0x28)) + ((*(s32 *)((char *)(arg0) + 0x0)) + (*(s32 *)((char *)(arg0) + 0x14))) + 1.0f;
    if (D_80099090 < temp_f12) {
        temp_f0 = sqrtf(temp_f12);
        temp_f2 = 0.5f / temp_f0;
        (*(f32 *)((char *)(arg1) + 0x0)) = (f32) (temp_f0 * 0.5f);
        (*(f32 *)((char *)(arg1) + 0x4)) = (f32) (((*(f32 *)((char *)(arg0) + 0x18)) - (*(f32 *)((char *)(arg0) + 0x24))) * temp_f2);
        (*(f32 *)((char *)(arg1) + 0x8)) = (f32) (((*(f32 *)((char *)(arg0) + 0x20)) - (*(f32 *)((char *)(arg0) + 0x8))) * temp_f2);
        (*(f32 *)((char *)(arg1) + 0xC)) = (f32) (((*(f32 *)((char *)(arg0) + 0x4)) - (*(f32 *)((char *)(arg0) + 0x10))) * temp_f2);
        return;
    }
    var_a1 = 0;
    sp40[0] = (*(s32 *)((char *)&(D_80085FF0) + 0x0));
    sp40[1] = (s32) (*(s32 *)((char *)&(D_80085FF0) + 0x4));
    sp40[2] = (s32) (*(s32 *)((char *)&(D_80085FF0) + 0x8));
    if ((*(s32 *)((char *)(arg0) + 0x0)) < (*(s32 *)((char *)(arg0) + 0x14))) {
        var_a1 = 1;
    }
    var_v1 = (char *)(arg0) + (var_a1 * 0x10);
    var_v0 = var_a1 * 4;
    var_f0 = *((char *)(var_v1) + var_v0);
    if (var_f0 < (*(s32 *)((char *)(arg0) + 0x28))) {
        var_v1 = (char *)(arg0) + 0x20;
        var_f0 = (*(s32 *)((char *)(var_v1) + 0x8));
        var_v0 = 8;
    }
    temp_a1 = *(&sp40[0] + var_v0);
    temp_a3 = temp_a1 * 4;
    temp_a2 = (&sp40[0])[temp_a1];
    temp_t1 = (char *)(arg0) + (temp_a1 * 0x10);
    temp_t2 = (char *)(arg0) + (temp_a2 * 0x10);
    temp_t0 = temp_a2 * 4;
    sp24 = temp_t2;
    sp28 = temp_t1;
    sp20 = temp_t0;
    sp2C = temp_a3;
    sp38 = var_v1;
    sp34 = var_v0;
    temp_f0_2 = sqrtf(((var_f0 - *((char *)(temp_t1) + temp_a3)) - *((char *)(temp_t2) + temp_t0)) + 1.0f);
    temp_f2_2 = 0.5f / temp_f0_2;
    (*(f32 *)((char *)(((char *)(arg1) + var_v0)) + 0x4)) = (f32) (temp_f0_2 * 0.5f);
    (*(f32 *)((char *)(arg1) + 0x0)) = (f32) ((*((char *)(temp_t1) + temp_t0) - *((char *)(temp_t2) + temp_a3)) * temp_f2_2);
    (*(f32 *)((char *)(((char *)(arg1) + temp_a3)) + 0x4)) = (f32) ((*((char *)(temp_t1) + var_v0) + *((char *)(var_v1) + temp_a3)) * temp_f2_2);
    (*(f32 *)((char *)(((char *)(arg1) + temp_t0)) + 0x4)) = (f32) ((*((char *)(temp_t2) + var_v0) + *((char *)(var_v1) + temp_t0)) * temp_f2_2);
}

void func_15049EDC(void *arg0, void *arg1, f32 arg2, void *arg3) {
    f32 sp24;
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f2;
    f32 temp_f2_2;

    temp_f2 = (*(s32 *)((char *)(arg0) + 0x0));
    temp_f16 = (*(s32 *)((char *)(arg1) + 0x0));
    temp_f12 = ((*(s32 *)((char *)(arg1) + 0xC)) * (*(s32 *)((char *)(arg0) + 0xC))) + ((temp_f2 * temp_f16) + ((*(s32 *)((char *)(arg0) + 0x4)) * (*(s32 *)((char *)(arg1) + 0x4))) + ((*(s32 *)((char *)(arg0) + 0x8)) * (*(s32 *)((char *)(arg1) + 0x8))));
    if (temp_f12 < D_80099094) {
        temp_f0 = 1.0f - arg2;
        (*(f32 *)((char *)(arg3) + 0x0)) = (f32) ((temp_f0 * temp_f2) - (temp_f16 * arg2));
        (*(f32 *)((char *)(arg3) + 0x4)) = (f32) ((temp_f0 * (*(f32 *)((char *)(arg0) + 0x4))) - ((*(f32 *)((char *)(arg1) + 0x4)) * arg2));
        (*(f32 *)((char *)(arg3) + 0x8)) = (f32) ((temp_f0 * (*(f32 *)((char *)(arg0) + 0x8))) - ((*(f32 *)((char *)(arg1) + 0x8)) * arg2));
        (*(f32 *)((char *)(arg3) + 0xC)) = (f32) ((temp_f0 * (*(f32 *)((char *)(arg0) + 0xC))) - ((*(f32 *)((char *)(arg1) + 0xC)) * arg2));
        return;
    }
    if (temp_f12 <= D_80099098) {
        temp_f0_2 = func_15048360(temp_f12);
        sp24 = (1.0f - arg2) * temp_f0_2;
        sp20 = arg2 * temp_f0_2;
        sp1C = sinf(temp_f0_2);
        temp_f14 = sinf(sp24) / sp1C;
        sp18 = temp_f14;
        temp_f2_2 = sinf(sp20) / sp1C;
        (*(f32 *)((char *)(arg3) + 0x0)) = (f32) (((*(f32 *)((char *)(arg1) + 0x0)) * temp_f2_2) + (temp_f14 * (*(f32 *)((char *)(arg0) + 0x0))));
        (*(f32 *)((char *)(arg3) + 0x4)) = (f32) (((*(f32 *)((char *)(arg1) + 0x4)) * temp_f2_2) + (temp_f14 * (*(f32 *)((char *)(arg0) + 0x4))));
        (*(f32 *)((char *)(arg3) + 0x8)) = (f32) (((*(f32 *)((char *)(arg1) + 0x8)) * temp_f2_2) + (temp_f14 * (*(f32 *)((char *)(arg0) + 0x8))));
        (*(f32 *)((char *)(arg3) + 0xC)) = (f32) (((*(f32 *)((char *)(arg1) + 0xC)) * temp_f2_2) + (temp_f14 * (*(f32 *)((char *)(arg0) + 0xC))));
        return;
    }
    temp_f0_3 = 1.0f - arg2;
    (*(f32 *)((char *)(arg3) + 0x0)) = (f32) ((temp_f16 * arg2) + (temp_f0_3 * temp_f2));
    (*(f32 *)((char *)(arg3) + 0x4)) = (f32) (((*(f32 *)((char *)(arg1) + 0x4)) * arg2) + (temp_f0_3 * (*(f32 *)((char *)(arg0) + 0x4))));
    (*(f32 *)((char *)(arg3) + 0x8)) = (f32) (((*(f32 *)((char *)(arg1) + 0x8)) * arg2) + (temp_f0_3 * (*(f32 *)((char *)(arg0) + 0x8))));
    (*(f32 *)((char *)(arg3) + 0xC)) = (f32) (((*(f32 *)((char *)(arg1) + 0xC)) * arg2) + (temp_f0_3 * (*(f32 *)((char *)(arg0) + 0xC))));
}

void func_1504A140(void *arg0, void *arg1) {
    f32 sp44;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    f32 sp14;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f6;

    temp_f20 = (*(s32 *)((char *)(arg0) + 0x0));
    temp_f0 = (*(s32 *)((char *)(arg0) + 0x4));
    temp_f2 = (*(s32 *)((char *)(arg0) + 0x8));
    temp_f12 = (*(s32 *)((char *)(arg0) + 0xC));
    temp_f6 = 2.0f / ((temp_f12 * temp_f12) + ((temp_f20 * temp_f20) + (temp_f0 * temp_f0) + (temp_f2 * temp_f2)));
    temp_f18 = temp_f0 * temp_f6;
    sp44 = temp_f6;
    temp_f16 = temp_f2 * temp_f6;
    temp_f14 = temp_f12 * temp_f6;
    sp34 = temp_f20 * temp_f18;
    sp30 = temp_f20 * temp_f16;
    sp2C = temp_f20 * temp_f14;
    temp_f10 = temp_f0 * temp_f14;
    sp28 = temp_f0 * temp_f18;
    sp24 = temp_f0 * temp_f16;
    sp20 = temp_f10;
    temp_f4 = temp_f12 * temp_f14;
    sp1C = temp_f2 * temp_f16;
    sp18 = temp_f2 * temp_f14;
    sp14 = temp_f4;
    (*(f32 *)((char *)(arg1) + 0x0)) = (f32) (1.0f - (sp1C + sp14));
    (*(f32 *)((char *)(arg1) + 0x4)) = (f32) (sp24 + sp2C);
    (*(f32 *)((char *)(arg1) + 0x8)) = (f32) (temp_f10 - sp30);
    (*(f32 *)((char *)(arg1) + 0x10)) = (f32) (sp24 - sp2C);
    (*(f32 *)((char *)(arg1) + 0x18)) = (f32) (sp18 + sp34);
    (*(f32 *)((char *)(arg1) + 0x14)) = (f32) (1.0f - (sp28 + temp_f4));
    (*(f32 *)((char *)(arg1) + 0x24)) = (f32) (sp18 - sp34);
    (*(f32 *)((char *)(arg1) + 0x20)) = (f32) (sp20 + sp30);
    (*(s32 *)((char *)(arg1) + 0xC)) = 0.0f;
    (*(s32 *)((char *)(arg1) + 0x1C)) = 0.0f;
    (*(s32 *)((char *)(arg1) + 0x2C)) = 0.0f;
    (*(s32 *)((char *)(arg1) + 0x3C)) = 1.0f;
    (*(f32 *)((char *)(arg1) + 0x28)) = (f32) (1.0f - (sp28 + sp1C));
}
