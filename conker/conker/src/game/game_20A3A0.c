/**
 * Auto-decompiled from asm/20A3A0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


u64 __ll_mul();                       /* extern */
void * __ull_div();                        /* extern */
s32 func_151DD4E0();                    /* extern */
s32 func_151DCFD8();                        /* static */
extern s32 D_80042A58;
extern s32 D_80042A90;
extern s32 D_800E0A20;
extern u8 D_800E0A24;
extern s32 D_800E0A28;
extern s32 D_800E0A2C;
extern s32 __osEepromTimerQ;

void func_151DCEF0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u64 temp_ret;

    if (func_151DCFD8(1) != 0) {
        do {

        } while (func_151DCFD8(1) != 0);
    }
    D_800E0A20 = arg0;
    D_800E0A24 = arg1;
    D_800E0A28 = arg2;
    D_800E0A2C = arg3;
    temp_ret = __ll_mul(0, 0x2EE0, D_8002BD10, D_8002BD14);
    __ull_div(temp_ret, (u32) temp_ret, 0, 0xF4240);
    osSetTimer(&D_80042A58, 0, 0, &__osEepromTimerQ, &D_80042A90);
}

s32 func_151DCFD8(s32 arg0) {
    u64 temp_ret;

    if (D_800E0A20 == 0) {
        goto block_8;
    }
    if (osRecvMesg(&__osEepromTimerQ, 0, arg0) != -1) {
        if (D_800E0A2C <= 0) {
            D_800E0A20 = 0;
            D_800E0A2C = 0;
            goto block_8;
        }
        if (func_151DD4E0(D_800E0A20, D_800E0A24, D_800E0A28) != 0) {
            D_800E0A20 = 0;
            D_800E0A2C = 0;
            goto block_8;
        }
        D_800E0A2C -= 8;
        D_800E0A24 += 1;
        D_800E0A28 += 8;
        temp_ret = __ll_mul(0, 0x2EE0, D_8002BD10, D_8002BD14);
        __ull_div(temp_ret, (u32) temp_ret, 0, 0xF4240);
        osSetTimer(&D_80042A58, 0, 0, &__osEepromTimerQ, &D_80042A90);
        return 1;
    }
block_8:
    return 0;
}
