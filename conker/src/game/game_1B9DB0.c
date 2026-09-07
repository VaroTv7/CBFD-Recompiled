/**
 * Auto-decompiled from asm/1B9DB0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 *func_1502B6BC();           /* extern */
void * func_1510CE60();              /* extern */
void * func_1510D630();                          /* extern */
void * func_15168E54();                        /* extern */
extern s32 D_800DF7D0;
extern s32 D_800DF9B8;
extern s32 D_800E0148;

s32 func_1518C900(s32 arg0) {
    u8 *sp38;
    s32 sp2C;
    s32 *temp_v0;
    s32 *var_s0;
    s32 temp_t9;
    u8 *temp_t0;
    u8 var_v0;
    u8 var_v1;

    temp_t0 = arg0 + &D_800DF7D0;
    var_v0 = *temp_t0;
    var_v1 = var_v0;
    if (var_v0 == 0) {
        sp38 = temp_t0;
        temp_v0 = func_1502B6BC(0, 0, 0, 2, 9, arg0);
        var_s0 = temp_v0;
        if (temp_v0 == NULL) {
            return 0;
        }
        temp_t9 = arg0 * 4;
        sp2C = temp_t9;
        sp38 = temp_t0;
        func_1510CE60(*var_s0, 0, 1, 0x3E, temp_t9 + &D_800DF9B8);
        func_15168E54(*var_s0, var_s0);
        *(&D_800E0148 + sp2C) = var_s0;
        var_v0 = *temp_t0;
        var_v1 = var_v0;
        goto block_5;
    }
    var_s0 = *(&D_800E0148 + (arg0 * 4));
block_5:
    if (var_v1 != 0xFF) {
        *temp_t0 = var_v0 + 1;
    }
    return *var_s0;
}

void func_1518CA04(s32 arg0) {
    s32 sp1C;
    s32 temp_v0_2;
    u8 *temp_v0;
    u8 temp_t7;
    u8 temp_v1;

    if (arg0 != 0x1E4) {
        temp_v0 = arg0 + &D_800DF7D0;
        temp_v1 = *temp_v0;
        temp_t7 = temp_v1 - 1;
        if (temp_v1 != 0) {
            *temp_v0 = temp_t7;
            if (!(temp_t7 & 0xFF)) {
                temp_v0_2 = arg0 * 4;
                sp1C = temp_v0_2;
                func_1510D630(*(&D_800DF9B8 + temp_v0_2), arg0);
                func_100043B4(*(&D_800E0148 + temp_v0_2), 4);
            }
        }
    }
}
