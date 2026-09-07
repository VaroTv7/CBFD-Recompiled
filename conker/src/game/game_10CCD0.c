/**
 * Auto-decompiled from asm/10CCD0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


extern f32 D_800A0F60;
extern f32 D_800A0F64;

void func_150DF820(void *arg0) {
    s32 temp_t1;
    s32 temp_t5;
    s32 temp_t7;
    s32 temp_t9;

    temp_t7 = (*(s32 *)((char *)(arg0) + 0x84)) & ~0x4000;
    temp_t9 = temp_t7 | 4;
    (*(s32 *)((char *)(arg0) + 0x84)) = temp_t7;
    (*(s32 *)((char *)(arg0) + 0x84)) = temp_t9;
    temp_t1 = temp_t9 & ~0x1010;
    (*(s32 *)((char *)(arg0) + 0x84)) = temp_t1;
    temp_t5 = temp_t1 | 0x1010;
    if ((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D0))) + 0xAD)) != 0) {
        (*(s32 *)((char *)(arg0) + 0x84)) = temp_t5;
        (*(s32 *)((char *)(arg0) + 0x84)) = (s32) (temp_t5 & ~4);
        (*(f32 *)((char *)(arg0) + 0x374)) = (f32) D_800A0F60;
        return;
    }
    if (D_800A0F64 == (*(s32 *)((char *)(arg0) + 0x374))) {
        (*(s32 *)((char *)(arg0) + 0x1B4)) = 3;
        func_15124B18();
    }
}
