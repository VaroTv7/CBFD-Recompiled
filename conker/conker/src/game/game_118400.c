/**
 * Auto-decompiled from asm/118400.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_15046C80();              /* extern */
void * func_1504715C();                       /* extern */
void * func_15141F78();        /* extern */
s32 func_151420F8();                               /* extern */
void * func_15142314();                  /* extern */
extern f32 D_800A1470;
extern f32 D_800A1474;

s32 func_150EAF50(void * *arg0, void *arg1, void * *arg2, s32 arg3) {
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    void * var_a1;
    s32 temp_t6;

    temp_t6 = arg3 & 0xFF;
    if ((temp_t6 != 1) && (temp_t6 != 2)) {
        return 0;
    }
    if (temp_t6 == 1) {
        var_a1 = 0x21;
    } else {
        var_a1 = 0x1D;
    }
    func_15142314((*(s32 *)((char *)(arg1) + 0x1D4)), var_a1, arg0, temp_t6);
    if (arg2 == NULL) {
        return 1;
    }
    sp2C = (*(s32 *)((char *)(arg0) + 0x0));
    sp30 = (*(s32 *)((char *)(arg0) + 0x4)) + 10.0f;
    sp34 = (*(s32 *)((char *)(arg0) + 0x8));
    func_1504715C(arg2, arg1);
    return func_15046C80(&sp2C, 0, (*(s32 *)((char *)(arg0) + 0x4)) - 50.0f, arg2);
}

s32 func_150EB030(s32 arg0, void * arg1) {
    if (arg0 == 1) {
        if (D_800BE9F0 == 4) {
            if (func_151420F8(arg1) != 0) {
                return 6;
            }
            return 3;
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return -1;
    }
    return -1;
}

void func_150EB090(void *arg0, s32 arg1, s32 arg2) {
    void * sp4C;
    void * sp28;
    s32 sp24;

    if ((*(s32 *)((char *)(arg0) + 0x1D4)) != 0) {
        sp24 = (s32) arg1;
        if (func_150EAF50(&sp4C, arg0, &sp28, arg1) != 0) {
            func_15141F78(0xA, &sp28, (f32) arg2 * D_800A1470, (u32) ((*(f32 *)((char *)(arg0) + 0x40)) * D_800A1474) & 0xFF, &sp4C, sp24);
        }
    }
}
