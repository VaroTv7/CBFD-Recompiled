/**
 * Auto-decompiled from asm/20A850.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_151DCFD8();                               /* extern */
s32 func_151DD140();                   /* extern */

s32 func_151DD3A0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;

    var_s0 = arg3;
    var_s1 = arg1 & 0xFF;
    var_s2 = arg2;
    var_s3 = 0;
    if (func_151DCFD8(1) != 0) {
        do {

        } while (func_151DCFD8(1) != 0);
    }
    if (var_s0 > 0) {
loop_3:
        temp_v0 = func_151DD140(arg0, var_s1 & 0xFF, var_s2);
        var_s3 = temp_v0;
        if (temp_v0 != 0) {
            return temp_v0;
        }
        var_s0 -= 8;
        var_s1 = (var_s1 + 1) & 0xFF;
        var_s2 += 8;
        if (var_s0 <= 0) {
            goto block_6;
        }
        goto loop_3;
    }
block_6:
    return var_s3;
}
