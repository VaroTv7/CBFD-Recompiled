/**
 * Auto-decompiled from asm/21CCB0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_151EFE00();                                  /* extern */
void * guMtxF2L2();                              /* extern */
void func_151EF800(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7);

void func_151EF800(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7) {
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f6;
    f32 var_f12;
    f32 var_f14;
    f32 var_f16;
    f32 var_f18;
    s32 var_v1;
    void *temp_v0;
    void *var_v0;

    func_151EFE00();
    temp_f0 = arg2 - arg1;
    var_v0 = arg0;
    temp_f12 = arg6 - arg5;
    (*(f32 *)((char *)(var_v0) + 0x0)) = (f32) (2.0f / temp_f0);
    temp_f2 = arg4 - arg3;
    (*(f32 *)((char *)(var_v0) + 0x28)) = (f32) (-2.0f / temp_f12);
    (*(f32 *)((char *)(var_v0) + 0x14)) = (f32) (2.0f / temp_f2);
    (*(f32 *)((char *)(var_v0) + 0x30)) = (f32) (-(arg2 + arg1) / temp_f0);
    (*(f32 *)((char *)(var_v0) + 0x34)) = (f32) (-(arg4 + arg3) / temp_f2);
    (*(s32 *)((char *)(var_v0) + 0x3C)) = 1.0f;
    (*(f32 *)((char *)(var_v0) + 0x38)) = (f32) (-(arg6 + arg5) / temp_f12);
    var_v1 = 1;
    var_f18 = (*(s32 *)((char *)(var_v0) + 0x4));
    var_f12 = (*(s32 *)((char *)(var_v0) + 0x0)) * arg7;
    var_f14 = (*(s32 *)((char *)(var_v0) + 0x8));
    var_f16 = (*(s32 *)((char *)(var_v0) + 0xC));
    if (1 != 4) {
        do {
            temp_f10 = var_f18 * arg7;
            var_f18 = (*(s32 *)((char *)(var_v0) + 0x14));
            temp_f6 = var_f14 * arg7;
            var_f14 = (*(s32 *)((char *)(var_v0) + 0x18));
            var_v1 += 1;
            temp_f4 = var_f16 * arg7;
            var_f16 = (*(s32 *)((char *)(var_v0) + 0x1C));
            (*(s32 *)((char *)(var_v0) + 0x0)) = var_f12;
            var_f12 = (*(s32 *)((char *)(var_v0) + 0x10)) * arg7;
            (*(s32 *)((char *)(var_v0) + 0x4)) = temp_f10;
            (*(s32 *)((char *)(var_v0) + 0x8)) = temp_f6;
            var_v0 = (char *)(var_v0) + 0x10;
            (*(s32 *)((char *)(var_v0) - 0x4)) = temp_f4;
        } while (var_v1 != 4);
    }
    temp_v0 = (char *)(var_v0) + 0x10;
    (*(s32 *)((char *)(temp_v0) - 0x10)) = var_f12;
    (*(f32 *)((char *)(temp_v0) - 0xC)) = (f32) (var_f18 * arg7);
    (*(f32 *)((char *)(temp_v0) - 0x8)) = (f32) (var_f14 * arg7);
    (*(f32 *)((char *)(temp_v0) - 0x4)) = (f32) (var_f16 * arg7);
}

void func_151EF954(s32 arg0, void *arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7) {
    void * sp28;

    func_151EF800(arg1, arg2, (f32)(s32)&sp28, (f32)(s32)(arg1), arg2, arg3, arg4, arg5);
    guMtxF2L2(&sp28, arg0);
}
