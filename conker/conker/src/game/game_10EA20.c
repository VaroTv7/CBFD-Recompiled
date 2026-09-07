/**
 * Auto-decompiled from asm/10EA20.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_15047390(); /* extern */
s32 func_1505D1C4(); /* extern */

s32 func_150E1570(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, s32 arg7, s32 arg8) {
    void * spA0;
    s32 sp88;
    void * *var_s0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f22;
    f32 temp_f2;
    s32 temp_v0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s6;
    void *temp_s0;

    var_s3 = 0;
    sp88 = 0;
    func_15047390(&spA0, arg1, arg2, arg3, arg4, arg5, arg6, 0.0f, 1.0f, 0.0f);
    temp_f2 = arg1 - arg4;
    temp_f12 = arg2 - arg5;
    temp_f14 = arg3 - arg6;
    var_s6 = -1;
    var_s2 = -1;
    var_s0 = &gObjects;
    var_s1 = 0;
    temp_f22 = sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12) + (temp_f14 * temp_f14));
    if (arg0 != NULL) {
        var_s6 = (*(s32 *)((char *)(arg0) + 0x124)) - 1;
    }
    do {
        if (((*(s32 *)((char *)(var_s0) + 0x0)) != 0) && (var_s1 != arg7) && ((*(s32 *)((char *)(var_s0) + 0x1CA)) != 0) && ((*(s32 *)((char *)(var_s0) + 0x125)) == 0) && (var_s1 != var_s6)) {
            temp_v0 = func_15049440(&spA0, (*(f32 *)((char *)(var_s0) + 0x14)), (*(f32 *)((char *)(var_s0) + 0x18)) + (f32) (*(f32 *)((char *)(var_s0) + 0xD6)), (*(f32 *)((char *)(var_s0) + 0x1C)), (f32) (*(f32 *)((char *)(var_s0) + 0xD2)), (f32) (*(f32 *)((char *)(var_s0) + 0xD4)), 0.0f, temp_f22, 10.0f, 10.0f);
            if ((temp_v0 != 0) && ((var_s2 == -1) || (temp_v0 < var_s3))) {
                var_s2 = var_s1;
                var_s3 = temp_v0;
            }
        }
        var_s1 += 1;
        var_s0 = (char *)(var_s0) + 0x32C;
    } while (var_s1 != 0x19);
    if (var_s2 != -1) {
        temp_s0 = (var_s2 * 0x32C) + &gObjects;
        sp88 = func_1505D1C4((*(f32 *)((char *)(temp_s0) + 0x14)), (f32) (*(f32 *)((char *)(temp_s0) + 0xD6)) + (*(f32 *)((char *)(temp_s0) + 0x18)), (*(f32 *)((char *)(temp_s0) + 0x1C)), arg8, (s32) gCurrentObjectIndex, 0, 0, 0);
        (*(u16 *)((char *)(temp_s0) + 0x76)) = (u16) (*(u16 *)((char *)(arg0) + 0x76));
    }
    return sp88;
}
