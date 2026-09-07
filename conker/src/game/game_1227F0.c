/**
 * Auto-decompiled from asm/1227F0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_1515F170();                              /* extern */
void * func_151C970C();                            /* extern */
extern s32 D_800A1AB0;

void func_150F5340(void) {
    s32 sp28[64];
    s32 temp_t8;
    s32 var_s0;

    M2C_MEMCPY_ALIGNED(&sp28[0], &D_800A1AB0, 0x3C);
    sp28[15] = (s32) (*(s32 *)((char *)&(D_800A1AB0) + 0x3C));
    var_s0 = 0;
    (*(s32 *)((char *)((&sp28[0] + 0x3C)) + 0x4)) = (s32) (*(s32 *)((char *)((&D_800A1AB0 + 0x3C)) + 0x4));
    do {
        func_151C970C(1, ((&sp28[0])[var_s0] * 0x34) + D_800D3098);
        temp_t8 = (var_s0 + 1) & 0xFF;
        var_s0 = temp_t8;
    } while (temp_t8 < 0x11);
    func_1515F170(9, 1);
}
