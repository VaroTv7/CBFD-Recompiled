/**
 * Auto-decompiled from asm/FEFF0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_1509BE40();                      /* extern */
extern f32 D_800A08E0;

void func_150D1B40(void *arg0) {
    s32 sp28;
    s32 temp_v0;

    temp_v0 = (char *)(arg0) + 0x28;
    sp28 = temp_v0;
    func_151467A4((char *)(arg0) + 0x30, 0x41200000, (char *)(arg0) + 0x2C, 0x42AC0000, 170.0f, 255.0f, D_800A08E0, temp_v0);
    func_1515D4D4((s32) (*(s32 *)((char *)(arg0) + 0x28)), D_800DCD20->unk1, D_800DCD20->unk2, 0);
}

void func_150D1BD0(void *arg0) {
    if (func_1509BE40(1, 0x402C, 6, 0x2000) != 0) {
        (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) | 0x10);
        return;
    }
    (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) & ~0x10);
}
