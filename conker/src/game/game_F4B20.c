/**
 * Auto-decompiled from asm/F4B20.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * memcpy();                                   /* extern */
extern s32 D_80089470;
extern f32 D_800A04C0;

s32 func_150C7670(void *arg0) {
    f32 var_f0;
    u8 temp_t8;

    temp_t8 = (*(s32 *)((char *)((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x170))) + 0x14))) + 0x2F));
    var_f0 = (f32) temp_t8;
    if ((s32) temp_t8 < 0) {
        var_f0 += 4294967296.0f;
    }
    (*(s8 *)((char *)(arg0) + 0x70)) = (s8) (u32) (var_f0 * D_800A04C0);
    return 1;
}

s32 func_150C773C(void * arg1) {
    memcpy(&D_80089470, 0x40);
    return 1;
}
