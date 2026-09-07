/**
 * Auto-decompiled from asm/EBD00.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_1509BE40();                       /* extern */
void * func_15123070();                            /* extern */
void * func_151254F4();                       /* extern */
extern f32 D_800A00B0;
extern f32 D_800A00B4;

void func_150BE850(void *arg0) {
    s32 sp28;
    s32 temp_t0;
    s32 temp_v0;

    sp28 = func_1509BE40(0, func_1509BE40(0, 0x2006, 0xB7) | 0x2000, 0xBC);
    temp_v0 = func_1509BE40(0, 0x2000, 0xBB);
    if ((sp28 != 0) && (temp_v0 != -1)) {
        func_1509BFB0(0, 0x400E, 1);
        if ((*(s32 *)((char *)(arg0) + 0x2C)) != 8) {
            func_1512868C(arg0);
        }
        if (func_15123934(arg0, 8, 0, (*(s32 *)((char *)(arg0) + 0x134)), 3) != 0) {
            func_151254F4(arg0, D_800CC335 - 1);
            temp_t0 = (*(s32 *)((char *)(arg0) + 0x84)) | 0x01000200;
            (*(s32 *)((char *)(arg0) + 0x84)) = temp_t0;
            (*(s32 *)((char *)(arg0) + 0x73C)) = 0;
            (*(s32 *)((char *)(arg0) + 0x84)) = (s32) (temp_t0 & ~4);
            (*(s32 *)((char *)(arg0) + 0x674)) = 0.0f;
        }
        (*(f32 *)((char *)(arg0) + 0x348)) = (f32) D_800A00B0;
        (*(f32 *)((char *)(arg0) + 0x34C)) = (f32) D_800A00B0;
        (*(f32 *)((char *)(arg0) + 0x374)) = (f32) D_800A00B4;
        (*(s32 *)((char *)(arg0) + 0x190)) = 0.0f;
        func_15123070(arg0);
        return;
    }
    if (func_151239CC(arg0, 3) != 0) {
        func_151254F4(arg0, 0);
        (*(s32 *)((char *)(arg0) + 0x674)) = 0.0f;
        func_1509BFB0(0, 0x400E, 0);
    }
}
