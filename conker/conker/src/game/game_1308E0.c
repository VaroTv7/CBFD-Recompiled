/**
 * Auto-decompiled from asm/1308E0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_1509BE40();                    /* extern */

void func_15103430(void *arg0) {
    s32 sp24;
    s32 temp_t6;

    temp_t6 = (*(s32 *)((char *)(arg0) + 0x23D)) | 0x9000;
    if ((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D0))) + 0xAD)) == 1) {
        (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) | 0x01000000);
    } else {
        (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) & 0xFEFFFFFF);
    }
    if (D_800BE9F0 == 0x34) {
        if (func_1509BE40(1, 0x406D, 6, temp_t6) != 0) {
            (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) | 0x200);
            return;
        }
        (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) & ~0x200);
        return;
    }
    if (D_800BE9F0 == 0x30) {
        sp24 = temp_t6;
        if ((func_1509BE40(1, 0x403C, 6, temp_t6) != 0) || (func_1509BE40(1, 0x403D, 6, temp_t6) != 0)) {
            (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) | 0x200);
            return;
        }
        (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) & ~0x200);
        return;
    }
    if (D_800BE9F0 == 0x2D) {
        sp24 = temp_t6;
        if ((func_1509BE40(1, 0x4053, 6, temp_t6) != 0) || (sp24 = temp_t6, (func_1509BE40(1, 0x4054, 6, temp_t6) != 0)) || (sp24 = temp_t6, (func_1509BE40(1, 0x4056, 6, temp_t6) != 0)) || (func_1509BE40(1, 0x4057, 6, temp_t6) != 0)) {
            (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) | 0x20000000);
        } else {
            (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) & 0xDFFFFFFF);
        }
        if ((func_1509BE40(1, 0x4058, 6, 0x9000) != 0) || (func_1509BE40(1, 0x4059, 6, 0x9000) != 0)) {
            (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) | 0x80000000);
            return;
        }
        (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) & 0x7FFFFFFF);
        return;
    }
    if (D_800BE9F0 == 0x34) {
        if (func_1509BE40(1, 0x406E, 6, temp_t6) != 0) {
            (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) | 0x20000000);
            return;
        }
        (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) & 0xDFFFFFFF);
    }
}
