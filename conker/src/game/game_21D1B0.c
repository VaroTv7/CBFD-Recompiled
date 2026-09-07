/**
 * Auto-decompiled from asm/21D1B0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void guMtxF2L2(void * *arg0, void *arg1) {
    void * *var_a3;
    void * *var_t0;
    f32 var_f16;
    f32 var_f18;
    s32 temp_f12;
    s32 temp_f12_2;
    s32 temp_f14;
    s32 temp_f14_2;
    s32 var_a0;
    s32 var_a2;
    void *var_v0;
    void *var_v1;

    var_v0 = arg1;
    var_v1 = (char *)(arg1) + 0x20;
    var_a2 = 0;
    var_a3 = arg0;
    do {
        var_t0 = var_a3;
        var_a0 = 1;
        var_f18 = (*(s32 *)((char *)(var_t0) + 0x0));
        var_f16 = (*(s32 *)((char *)(var_t0) + 0x4)) * 65536.0f;
        if (1 != 2) {
            do {
                var_a0 += 1;
                var_v0 = (char *)(var_v0) + 4;
                var_v1 = (char *)(var_v1) + 4;
                var_t0 = (char *)(var_t0) + 8;
                temp_f12 = (s32) var_f16;
                temp_f14 = (s32) (var_f18 * 65536.0f);
                (*(s32 *)((char *)(var_v0) - 0x4)) = (s32) ((temp_f14 & 0xFFFF0000) | ((temp_f12 >> 0x10) & 0xFFFF));
                (*(s32 *)((char *)(var_v1) - 0x4)) = (s32) (((temp_f14 << 0x10) & 0xFFFF0000) | (temp_f12 & 0xFFFF));
                var_f18 = (*(s32 *)((char *)(var_t0) + 0x0));
                var_f16 = (*(s32 *)((char *)(var_t0) + 0x4)) * 65536.0f;
            } while (var_a0 != 2);
        }
        var_v0 = (char *)(var_v0) + 4;
        var_v1 = (char *)(var_v1) + 4;
        temp_f12_2 = (s32) var_f16;
        temp_f14_2 = (s32) (var_f18 * 65536.0f);
        (*(s32 *)((char *)(var_v0) - 0x4)) = (s32) ((temp_f14_2 & 0xFFFF0000) | ((temp_f12_2 >> 0x10) & 0xFFFF));
        (*(s32 *)((char *)(var_v1) - 0x4)) = (s32) (((temp_f14_2 << 0x10) & 0xFFFF0000) | (temp_f12_2 & 0xFFFF));
        var_a2 += 1;
        var_a3 = (char *)(var_a3) + 0x10;
    } while (var_a2 != 4);
}

void func_151EFE00(void * *arg0) {
    void * *var_v1;
    s32 var_v0;

    var_v1 = arg0;
    var_v0 = 0;
    do {
        if (var_v0 == 0) {
            (*(s32 *)((char *)(var_v1) + 0x0)) = 1.0f;
        } else {
            (*(s32 *)((char *)(var_v1) + 0x0)) = 0.0f;
        }
        if (var_v0 == 1) {
            (*(s32 *)((char *)(var_v1) + 0x4)) = 1.0f;
        } else {
            (*(s32 *)((char *)(var_v1) + 0x4)) = 0.0f;
        }
        if (var_v0 == 2) {
            (*(s32 *)((char *)(var_v1) + 0x8)) = 1.0f;
        } else {
            (*(s32 *)((char *)(var_v1) + 0x8)) = 0.0f;
        }
        if (var_v0 == 3) {
            (*(s32 *)((char *)(var_v1) + 0xC)) = 1.0f;
        } else {
            (*(s32 *)((char *)(var_v1) + 0xC)) = 0.0f;
        }
        var_v0 += 1;
        var_v1 = (char *)(var_v1) + 0x10;
    } while (var_v0 != 4);
}

void func_151EFE88(void *arg0) {
    void * sp18;

    func_151EFE00(&sp18);
    guMtxF2L2(&sp18, arg0);
}

void guMtxL2F(float arg0[4][4], Mtx *arg1) {
    s32 sp4;
    s32 sp0;
    s32 *var_v0;
    s32 temp_a3;
    s32 var_a0;
    s32 var_a2;
    u32 *var_v1;
    void *var_t0;
    void *var_t1;

    var_v0 = arg1;
    var_v1 = arg1 + 0x20;
    var_a2 = 0;
    var_t0 = arg0;
    do {
        var_a0 = 0;
        var_t1 = var_t0;
loop_2:
        var_a0 += 1;
        sp4 = (((u32) *var_v1 >> 0x10) & 0xFFFF) | (*var_v0 & 0xFFFF0000);
        temp_a3 = (*var_v1 & 0xFFFF) | ((*var_v0 << 0x10) & 0xFFFF0000);
        sp0 = temp_a3;
        var_v0 += 4;
        var_v1 += 4;
        var_t1 = (char *)(var_t1) + 8;
        (*(f32 *)((char *)(var_t1) - 0x8)) = (f32) ((f32) sp4 / 65536.0f);
        (*(f32 *)((char *)(var_t1) - 0x4)) = (f32) ((f32) temp_a3 / 65536.0f);
        if (var_a0 != 2) {
            goto loop_2;
        }
        var_a2 += 1;
        var_t0 = (char *)(var_t0) + 0x10;
    } while (var_a2 != 4);
}
