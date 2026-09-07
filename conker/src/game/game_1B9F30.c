/**
 * Auto-decompiled from asm/1B9F30.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_15167D84();          /* extern */
extern s32 D_8008CA4C;
extern s32 D_8008D5D0;

void func_1518CA80(void *arg0, s32 arg1) {
    s16 sp64;
    s8 sp62;
    s8 sp61;
    s8 sp60;
    u8 sp5F;
    s8 sp5E;
    s8 sp5D;
    s8 sp5C;
    u8 sp5B;
    s8 sp5A;
    s16 sp58;
    s16 sp56;
    s16 sp54;
    s16 sp52;
    s16 sp50;
    s8 sp4F;
    u8 sp4E;
    u8 sp4D;
    u8 sp4C;
    s16 sp4A;
    s16 sp48;
    s16 sp46;
    s16 sp44;
    s16 sp42;
    s16 sp40;
    s16 sp3E;
    s16 sp3C;
    s32 sp38;
    s32 sp34;
    s32 sp30;
    s32 temp_t0;
    u8 temp_v1;

    temp_v1 = (*(s32 *)((char *)(arg0) + 0x2E));
    sp5C = (s8) ((s32) ((*(s8 *)((char *)(arg0) + 0x28)) * temp_v1) >> 8);
    sp5D = (s8) ((s32) ((*(s8 *)((char *)(arg0) + 0x29)) * temp_v1) >> 8);
    sp5E = (s8) ((s32) ((*(s8 *)((char *)(arg0) + 0x2A)) * temp_v1) >> 8);
    sp60 = (s8) ((s32) ((*(s8 *)((char *)(arg0) + 0x2B)) * temp_v1) >> 8);
    sp61 = (s8) ((s32) ((*(s8 *)((char *)(arg0) + 0x2C)) * temp_v1) >> 8);
    sp62 = (s8) ((s32) ((*(s8 *)((char *)(arg0) + 0x2D)) * temp_v1) >> 8);
    sp58 = (*(s32 *)((char *)(arg0) + 0x26));
    sp5F = (*(s32 *)((char *)(arg0) + 0x2F));
    sp3C = 0;
    sp3E = 0x100;
    sp30 = D_8008CA4C;
    sp5A = (*(s32 *)((char *)(arg0) + 0x30));
    if ((arg1 & 0xFF) == 1) {
        sp40 = (s16) (s32) (*(s16 *)((char *)(arg0) + 0x0));
        sp42 = (s16) (s32) (*(s16 *)((char *)(arg0) + 0x4));
        sp44 = (s16) (s32) (*(s16 *)((char *)(arg0) + 0x8));
        sp4C = (u8) (s32) ((*(u8 *)((char *)(arg0) + 0x0)) * 256.0f);
        sp4E = (u8) (s32) ((*(u8 *)((char *)(arg0) + 0x4)) * 256.0f);
        sp4D = (u8) (s32) ((*(u8 *)((char *)(arg0) + 0x8)) * 256.0f);
    } else {
        sp40 = (*(s32 *)((char *)(arg0) + 0xC));
        sp42 = (*(s32 *)((char *)(arg0) + 0xE));
        sp44 = (*(s32 *)((char *)(arg0) + 0x10));
        sp4C = (*(s32 *)((char *)(arg0) + 0x12));
        sp4E = (*(s32 *)((char *)(arg0) + 0x14));
        sp4D = (*(s32 *)((char *)(arg0) + 0x13));
    }
    sp46 = (*(s32 *)((char *)(arg0) + 0x1E));
    sp48 = (*(s32 *)((char *)(arg0) + 0x20));
    sp50 = (*(s32 *)((char *)(arg0) + 0x22));
    sp4F = 9;
    sp64 = 1;
    sp52 = (*(s32 *)((char *)(arg0) + 0x24));
    sp54 = (*(s32 *)((char *)(arg0) + 0x16));
    sp56 = (*(s32 *)((char *)(arg0) + 0x18));
    temp_t0 = (*(s32 *)((char *)(arg0) + 0x1A)) << 0x10;
    sp34 = temp_t0;
    sp34 = temp_t0 + (*(s32 *)((char *)(arg0) + 0x1C));
    sp4A = 0;
    sp38 = 0;
    sp5B = (*(s32 *)((char *)(arg0) + 0x31));
    func_15167D84(&sp30, 0, 0, -1, 0xFF, 1);
}

void func_1518CCA8(void *arg0) {
    s32 temp_t1;
    s32 temp_t4;

    temp_t1 = (*(s32 *)((char *)(arg0) + 0x14));
    (*(s16 *)((char *)(arg0) + 0x34)) = (s16) ((*(s16 *)((char *)(arg0) + 0x34)) + ((u32) (temp_t1 & 0xFFFF0000) >> 0x10));
    (*(s16 *)((char *)(arg0) + 0x36)) = (s16) ((*(s16 *)((char *)(arg0) + 0x36)) + temp_t1);
    if ((*(s32 *)((char *)(arg0) + 0x38)) == 0) {
        temp_t4 = (*(s32 *)((char *)(arg0) + 0x3B)) & 0xF;
        if (temp_t4 != 0) {
            ((s32 (*)())((char *)(&D_8008D5D0 + (temp_t4 * 4))))();
        }
    }
}
