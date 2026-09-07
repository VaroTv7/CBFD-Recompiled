/**
 * Auto-decompiled from asm/14F580.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_15122980();                            /* extern */
void * func_15123A54();                            /* extern */
void * func_1512A390();                            /* extern */
void * func_1512E140();                            /* extern */
extern f32 D_800A3460;
extern f32 D_800A3470;
extern f32 D_800A3474;
extern f32 D_800A3478;
extern f32 D_800A347C;

void func_151220D0(void *arg0) {
    f32 sp24;
    f32 sp1C;
    f32 temp_f0;

    if (!((*(s32 *)((*(s32 *)((char *)(arg0) + 0x36C)))) & 4)) {
        func_15048F90((char *)(arg0) + 0x2F8, (char *)(arg0) + 0x2BC, &sp1C, arg0);
        sp1C += (*(s32 *)((char *)(arg0) + 0x2C8)) - (*(s32 *)((char *)(arg0) + 0x2BC));
        sp24 += (*(s32 *)((char *)(arg0) + 0x2D0)) - (*(s32 *)((char *)(arg0) + 0x2C4));
        temp_f0 = func_15048FC8(&sp1C);
        (*(s32 *)((char *)(arg0) + 0x37C)) = temp_f0;
        (*(f32 *)((char *)(arg0) + 0x39C)) = (f32) (temp_f0 * D_800A3460);
    }
    func_15122980(arg0);
}

void func_15122170(void *arg0) {
    f32 sp2C;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    f32 var_f2;
    f32 var_f2_2;
    s32 temp_v0_2;
    void *temp_v0;

    if ((*(s32 *)((*(s32 *)((char *)(arg0) + 0x36C)))) & 4) {
        func_15122980(arg0);
        return;
    }
    temp_f0 = (*(s32 *)((char *)(arg0) + 0x5DC));
    (*(s32 *)((char *)(arg0) + 0x6C4)) = 0.0f;
    (*(f32 *)((char *)(arg0) + 0x5DC)) = (f32) (temp_f0 - (temp_f0 * D_800A3470));
    func_15125330(0, arg0);
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x614));
    if (temp_v0 == NULL) {
        func_15122980(arg0);
        return;
    }
    temp_f2 = (*(s32 *)((char *)(temp_v0) + 0x0)) - (*(s32 *)((char *)(arg0) + 0x2BC));
    temp_f16 = (*(s32 *)((char *)(temp_v0) + 0x8)) - (*(s32 *)((char *)(arg0) + 0x2C4));
    temp_f18 = sqrtf((temp_f2 * temp_f2) + (temp_f16 * temp_f16));
    if (temp_f18 == 0.0f) {
        func_15122980(arg0);
        return;
    }
    sp2C = temp_f16;
    temp_f0_2 = func_15048C30(-temp_f2 / temp_f18, 0);
    if (temp_f16 > 0.0f) {
        var_f2 = 270.0f - (temp_f0_2 * D_800A3474);
    } else {
        var_f2 = (temp_f0_2 * D_800A3478) + 90.0f;
    }
    var_f2_2 = var_f2 + (-90.0f + (*(s32 *)((char *)(arg0) + 0x5DC)));
    if (var_f2_2 < 0.0f) {
        do {
            var_f2_2 += 360.0f;
        } while (var_f2_2 < 0.0f);
    }
    if (var_f2_2 > 360.0f) {
        do {
            var_f2_2 -= 360.0f;
        } while (var_f2_2 > 360.0f);
    }
    if ((*(s32 *)((char *)(arg0) + 0x698)) == 0) {
        if ((*(s32 *)((char *)(arg0) + 0x23C)) != 0) {
            (*(s32 *)((char *)(arg0) + 0x630)) = 0.0f;
            (*(s32 *)((char *)(arg0) + 0x37C)) = var_f2_2;
        } else {
            temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x84));
            if (temp_v0_2 & 0x40000000) {
                func_15049688((char *)(arg0) + 0x37C, var_f2_2, (char *)(arg0) + 0x630, 0x40400000, 6.0f, (*(s32 *)((char *)(arg0) + 0x7B4)));
            } else if (temp_v0_2 & 0x04000000) {
                func_15049688((char *)(arg0) + 0x37C, var_f2_2, (char *)(arg0) + 0x630, 0x40400000, 6.0f, (*(s32 *)((char *)(arg0) + 0x7B4)));
            } else {
                func_15049688((char *)(arg0) + 0x37C, var_f2_2, (char *)(arg0) + 0x630, 0x3FC00000, 2.0f, (*(s32 *)((char *)(arg0) + 0x7B4)));
            }
        }
        (*(f32 *)((char *)(arg0) + 0x39C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x37C)) * D_800A347C);
    }
    func_1512A390(arg0);
    func_15123A54(arg0);
    func_1512E140(arg0);
    if ((*(s32 *)((char *)(arg0) + 0x84)) & 0x40000000) {
        func_15123A54(arg0);
        (*(s32 *)((char *)(arg0) + 0x190)) = 30.0f;
        func_1512E140(arg0);
    }
}
