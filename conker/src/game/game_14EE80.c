/**
 * Auto-decompiled from asm/14EE80.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


extern f32 D_800A3420;
extern f32 D_800A3424;
extern f32 D_800A3430;

void func_151219D0(void *arg0) {
    void * *var_v0;
    void * *var_v0_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f12;
    f32 var_f12_2;
    f32 var_f14;
    f32 var_f16;
    f32 var_f2;
    f32 var_f2_2;

    var_f12 = D_800A3420;
    var_f14 = D_800A3424;
    var_f2 = D_800A3420;
    var_f16 = D_800A3424;
    var_f0 = 0.0f;
    if (D_8008FD8C > 0) {
        var_v0 = &gObjects;
        do {
            temp_f20 = (*(s32 *)((char *)(var_v0) + 0x14));
            if (temp_f20 < var_f2) {
                var_f2 = temp_f20;
            }
            if (var_f16 < temp_f20) {
                var_f16 = temp_f20;
            }
            temp_f20_2 = (*(s32 *)((char *)(var_v0) + 0x1C));
            temp_f4 = (*(s32 *)((char *)(var_v0) + 0x18));
            var_v0 = (char *)(var_v0) + 0x32C;
            var_f0 += temp_f4;
            if (temp_f20_2 < var_f12) {
                var_f12 = temp_f20_2;
            }
            if (var_f14 < temp_f20_2) {
                var_f14 = temp_f20_2;
            }
        } while ((u32) var_v0 < (u32) ((D_8008FD8C * 0x32C) + &gObjects));
    }
    (*(s32 *)((char *)(arg0) + 0x2BC)) = var_f16;
    var_f2_2 = 0.0f;
    var_v0_2 = &gObjects;
    temp_f22 = (var_f12 + var_f14) * 0.5f;
    (*(s32 *)((char *)(arg0) + 0x2C4)) = temp_f22;
    (*(f32 *)((char *)(arg0) + 0x2C0)) = (f32) ((var_f0 / (f32) D_8008FD8C) + 150.0f);
    if (D_8008FD8C > 0) {
        do {
            var_f0_2 = ((*(s32 *)((char *)(var_v0_2) + 0x14)) - var_f16) * 0.5f;
            if (var_f0_2 < 0.0f) {
                var_f0_2 = 0.0f;
            }
            temp_f4_2 = (*(s32 *)((char *)(var_v0_2) + 0x1C));
            var_v0_2 = (char *)(var_v0_2) + 0x32C;
            var_f12_2 = temp_f4_2 - temp_f22;
            if (var_f12_2 < 0.0f) {
                var_f12_2 = -var_f12_2;
            }
            if (var_f12_2 < var_f0_2) {
                var_f12_2 = var_f0_2;
            }
            if (var_f2_2 < var_f12_2) {
                var_f2_2 = var_f12_2;
            }
        } while ((u32) var_v0_2 < (u32) ((D_8008FD8C * 0x32C) + &gObjects));
    }
    if (var_f2_2 < 300.0f) {
        var_f2_2 = 300.0f;
    }
    temp_f2 = var_f2_2 + 100.0f;
    (*(f32 *)((char *)(arg0) + 0x2F8)) = (f32) ((*(f32 *)((char *)(arg0) + 0x2BC)) + (2.0f * temp_f2));
    (*(f32 *)((char *)(arg0) + 0x300)) = (f32) (*(f32 *)((char *)(arg0) + 0x2C4));
    (*(f32 *)((char *)(arg0) + 0x2FC)) = (f32) ((*(f32 *)((char *)(arg0) + 0x2C0)) + (temp_f2 * 0.5f));
}

void func_15121C00(void *arg0, void * arg1, void * arg2, void * arg3, f32 arg4) {
    func_15049688(arg1, (*(f32 *)(arg3)), (char *)(arg0) + 0x37C, (*(f32 *)(arg1)), (*(f32 *)((char *)(arg0) + 0x8C0)), (*(f32 *)(arg3)));
    (*(f32 *)((char *)(arg0) + 0x39C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x37C)) * D_800A3430);
}

void func_15121C64(s32 arg0, void * arg1, void * arg2, void * arg3) {

}
