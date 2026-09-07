/**
 * Auto-decompiled from asm/1319D0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"



void func_15104520(void *arg0) {
    f32 temp_f0;
    void *temp_a1;

    if (((*(s32 *)((char *)(arg0) + 0x6FC)) != 0) || ((*(s32 *)((char *)(arg0) + 0x6C8)) == 0)) {
        (*(s32 *)((char *)(arg0) + 0x348)) = 117.0f;
        (*(s32 *)((char *)(arg0) + 0x34C)) = 117.0f;
        (*(s32 *)((char *)(arg0) + 0x374)) = 370.0f;
        (*(s32 *)((char *)(arg0) + 0x190)) = 77.0f;
    }
    temp_a1 = (*(s32 *)((char *)(arg0) + 0x3D0));
    if (((*(s32 *)((char *)(temp_a1) + 0x3C)) < 50.0f) && ((*(s32 *)((char *)(arg0) + 0x3E8)) == 0)) {
        temp_f0 = (*(s32 *)((char *)(arg0) + 0x374));
        if ((0.5f * temp_f0) < ((*(s32 *)((char *)(arg0) + 0x370)) - temp_f0)) {
            func_15128774(temp_a1);
        }
    }
}
