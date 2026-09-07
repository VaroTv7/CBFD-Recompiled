/**
 * Auto-decompiled from asm/21CAF0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 __osDisableInt();                               /* extern */
void * __osRestoreInt();                              /* extern */
extern void *D_8002BDE4;

void func_151EF640(s32 arg0) {
    s32 temp_s0;

    temp_s0 = __osDisableInt();
    if (arg0 & 1) {
        (*(s32 *)((char *)(D_8002BDE4) + 0xC)) = (s32) ((*(s32 *)((char *)(D_8002BDE4) + 0xC)) | 8);
    }
    if (arg0 & 2) {
        (*(s32 *)((char *)(D_8002BDE4) + 0xC)) = (s32) ((*(s32 *)((char *)(D_8002BDE4) + 0xC)) & ~8);
    }
    if (arg0 & 4) {
        (*(s32 *)((char *)(D_8002BDE4) + 0xC)) = (s32) ((*(s32 *)((char *)(D_8002BDE4) + 0xC)) | 4);
    }
    if (arg0 & 8) {
        (*(s32 *)((char *)(D_8002BDE4) + 0xC)) = (s32) ((*(s32 *)((char *)(D_8002BDE4) + 0xC)) & ~4);
    }
    if (arg0 & 0x10) {
        (*(s32 *)((char *)(D_8002BDE4) + 0xC)) = (s32) ((*(s32 *)((char *)(D_8002BDE4) + 0xC)) | 0x10);
    }
    if (arg0 & 0x20) {
        (*(s32 *)((char *)(D_8002BDE4) + 0xC)) = (s32) ((*(s32 *)((char *)(D_8002BDE4) + 0xC)) & ~0x10);
    }
    if (arg0 & 0x40) {
        (*(s32 *)((char *)(D_8002BDE4) + 0xC)) = (s32) ((*(s32 *)((char *)(D_8002BDE4) + 0xC)) | 0x10000);
        (*(s32 *)((char *)(D_8002BDE4) + 0xC)) = (s32) ((*(s32 *)((char *)(D_8002BDE4) + 0xC)) & ~0x300);
    }
    if (arg0 & 0x80) {
        (*(s32 *)((char *)(D_8002BDE4) + 0xC)) = (s32) ((*(s32 *)((char *)(D_8002BDE4) + 0xC)) & 0xFFFEFFFF);
        (*(s32 *)((char *)(D_8002BDE4) + 0xC)) = (s32) ((*(s32 *)((char *)(D_8002BDE4) + 0xC)) | ((*(s32 *)((char *)((*(s32 *)((char *)(D_8002BDE4) + 0x8))) + 0x4)) & 0x300));
    }
    (*(u16 *)((char *)(D_8002BDE4) + 0x0)) = (u16) ((*(u16 *)((char *)(D_8002BDE4) + 0x0)) | 8);
    __osRestoreInt(temp_s0);
}
