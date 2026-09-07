/**
 * Auto-decompiled from asm/FC550.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void *func_151149AC();                             /* extern */
void * func_15117798();                                  /* extern */
extern void *D_800CC5EC;

void func_150CF0A0(void *arg0) {
    u8 temp_t4;
    u8 temp_t8;
    void *temp_v0;
    void *temp_v0_2;

    if (((*(s32 *)((char *)(arg0) + 0x73)) & 3) != 2) {
        if (((*(s32 *)((char *)(arg0) + 0x4F)) & 4) && ((*(s32 *)((char *)(D_800CC5EC) + 0x57)) != 0)) {
            temp_v0 = func_151149AC(0xFE);
            temp_t4 = (*(s32 *)((char *)(temp_v0) + 0x73)) & 0xFFFC;
            (*(s32 *)((char *)(temp_v0) + 0x73)) = temp_t4;
            (*(u8 *)((char *)(temp_v0) + 0x73)) = (u8) (temp_t4 | 2);
            temp_v0_2 = func_151149AC(0xFD);
            temp_t8 = (*(s32 *)((char *)(temp_v0_2) + 0x73)) & 0xFFFC;
            (*(s32 *)((char *)(temp_v0_2) + 0x73)) = temp_t8;
            (*(u8 *)((char *)(temp_v0_2) + 0x73)) = (u8) (temp_t8 | 2);
        }
    } else {
        func_15117798();
    }
}
