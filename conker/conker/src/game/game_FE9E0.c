/**
 * Auto-decompiled from asm/FE9E0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_1509BE40(); /* extern */
extern f32 D_800A08D0;
extern f32 D_800A08D4;

void func_150D1530(f32 arg0) {
    f32 sp34;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 var_f0;
    f32 var_f12;
    s32 temp_t2;
    s32 var_v0;

    var_f12 = arg0;
    if ((*(s32 *)((char *)(*(void **)&(arg0)) + 0x2C)) != 0x40) {
        if ((*(s32 *)((char *)(*(void **)&(arg0)) + 0x5F0)) & 0x80) {
            var_f0 = 0.0f;
            temp_f2 = (*(s32 *)((char *)((*(s32 *)((char *)(*(void **)&(arg0)) + 0x3D0))) + 0x3C));
            if (temp_f2 < 0.0f) {

            } else {
                var_f12 = 170.0f;
                if (temp_f2 > 170.0f) {
                    var_f0 = 170.0f;
                } else {
                    var_f0 = temp_f2;
                }
            }
            temp_f2_2 = var_f0 * D_800A08D0;
            sp34 = temp_f2_2;
            if (func_15123934(var_f12, arg0, 8, 0, (*(s32 *)((char *)(*(void **)&(arg0)) + 0x134)), 3) != 0) {
                temp_t2 = (*(s32 *)((char *)(*(void **)&(arg0)) + 0x84)) | 0x01300080;
                (*(s32 *)((char *)(*(void **)&(arg0)) + 0x84)) = temp_t2;
                (*(s32 *)((char *)(*(void **)&(arg0)) + 0x84)) = (s32) (temp_t2 & ~6);
                (*(s32 *)((char *)(*(void **)&(arg0)) + 0x1B4)) = 1;
                (*(s32 *)((char *)(*(void **)&(arg0)) + 0x1E0)) = 2;
            }
            temp_f0 = (34.0f * temp_f2_2) + 75.0f;
            (*(f32 *)((char *)(*(void **)&(arg0)) + 0x374)) = (f32) ((-194.0f * temp_f2_2) + 280.0f);
            (*(s32 *)((char *)(*(void **)&(arg0)) + 0x348)) = temp_f0;
            (*(s32 *)((char *)(*(void **)&(arg0)) + 0x34C)) = temp_f0;
            if (D_800BE9F0 == 0x32) {
                sp34 = temp_f2_2;
                var_v0 = func_1509BE40(4, (*(s32 *)((char *)(*(void **)&(arg0)) + 0x23D)) | 0x2000, 0xAC, 0x4027, 0x4035, 0x4036, 0x4037);
            } else {
                sp34 = temp_f2_2;
                var_v0 = func_1509BE40(5, (*(s32 *)((char *)(*(void **)&(arg0)) + 0x23D)) | 0x2000, 0xAC, 0x400A, 0x400B, 0x400C, 0x400D, 0x400E);
            }
            if (var_v0 != 0) {
                (*(s32 *)((char *)(*(void **)&(arg0)) + 0x84)) = (s32) ((*(s32 *)((char *)(*(void **)&(arg0)) + 0x84)) | 0x10000000);
            } else {
                if ((*(s32 *)((char *)((*(s32 *)((char *)(*(void **)&(arg0)) + 0x3D0))) + 0x81)) != 0) {
                    (*(s32 *)((char *)(*(void **)&(arg0)) + 0x190)) = -30.0f;
                } else {
                    (*(s32 *)((char *)(*(void **)&(arg0)) + 0x190)) = 123.0f;
                }
                (*(s32 *)((char *)(*(void **)&(arg0)) + 0x84)) = (s32) ((*(s32 *)((char *)(*(void **)&(arg0)) + 0x84)) & 0xEFFFFFFF);
            }
            temp_f0_2 = (D_800A08D4 * sp34) + 10.0f;
            (*(s32 *)((char *)(*(void **)&(arg0)) + 0x1A8)) = temp_f0_2;
            (*(s32 *)((char *)(*(void **)&(arg0)) + 0x1A4)) = temp_f0_2;
            if ((*(s32 *)((char *)(*(void **)&(arg0)) + 0x23C)) != 0) {
                (*(f32 *)((char *)(*(void **)&(arg0)) + 0x1A4)) = (f32) (*(f32 *)((char *)(*(void **)&(arg0)) + 0x1A4));
                (*(f32 *)((char *)(*(void **)&(arg0)) + 0x1A8)) = (f32) (*(f32 *)((char *)(*(void **)&(arg0)) + 0x1A8));
            }
        } else if (func_151239CC(arg0, 3) != 0) {
            (*(s32 *)((char *)(*(void **)&(arg0)) + 0x1A8)) = 0.0f;
            (*(s32 *)((char *)(*(void **)&(arg0)) + 0x1A4)) = 0.0f;
            (*(s32 *)((char *)(*(void **)&(arg0)) + 0x190)) = 0.0f;
        }
        if (D_800BE9F0 == 0x32) {
            if (func_1509BE40(1, 0x4039, 6, 0x9000) != 0) {
                (*(s32 *)((char *)(*(void **)&(arg0)) + 0x84)) = (s32) ((*(s32 *)((char *)(*(void **)&(arg0)) + 0x84)) | 0x1000);
                return;
            }
            (*(s32 *)((char *)(*(void **)&(arg0)) + 0x84)) = (s32) ((*(s32 *)((char *)(*(void **)&(arg0)) + 0x84)) & ~0x1000);
        }
    }
}
