/**
 * Auto-decompiled from asm/1B7EC0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void *func_15167A68();          /* extern */
extern s32 D_8008D5C0;
void * func_1518AB60();

void func_1518AA10(void *arg0) {
    void *sp18;
    s16 temp_v0;
    u8 temp_v0_3;
    void *temp_a2;
    void *temp_v0_2;

    if ((*(s32 *)((char *)(arg0) + 0x1C)) != 0) {
        temp_v0 = (*(s32 *)((char *)(arg0) + 0x22));
        if (temp_v0 < 0) {
            temp_a2 = (*(s32 *)((char *)(arg0) + 0x14));
            temp_v0_2 = (*(s32 *)((char *)(temp_a2) + 0x18));
            if (temp_v0_2 == NULL) {
                (*(s32 *)((char *)(arg0) + 0x10)) = 0;
                (*(s32 *)((char *)(arg0) + 0x14)) = NULL;
            } else {
                (*(s32 *)((char *)(temp_v0_2) + 0x14)) = 0;
                (*(s32 *)((char *)(arg0) + 0x14)) = (void *) (*(s32 *)((char *)(temp_a2) + 0x18));
            }
            temp_v0_3 = (*(s32 *)((char *)(temp_a2) + 0x1C));
            if (temp_v0_3 != 0) {
                sp18 = temp_a2;
                ((s32 (*)())((char *)(&D_8008D5C0 + (temp_v0_3 * 4))))((*(s32 *)((char *)(temp_a2) + 0x10)), arg0, temp_a2);
            }
            func_1516972C(temp_a2, arg0, temp_a2);
            (*(s32 *)((char *)(arg0) + 0x1C)) = (s32) ((*(s32 *)((char *)(arg0) + 0x1C)) - 1);
            return;
        }
        if ((*(s32 *)((char *)(arg0) + 0x24)) & 1) {
            (*(s16 *)((char *)(arg0) + 0x22)) = (s16) (temp_v0 - D_800BE9E4);
        }
    }
}

void *func_1518AADC(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_v0;

    temp_v0 = func_15167A68(0x1D, 0, 0x28, 1, 0xFF, 1);
    if (temp_v0 == NULL) {
        return NULL;
    }
    (*(s32 *)((char *)(temp_v0) + 0x1C)) = 0;
    (*(s32 *)((char *)(temp_v0) + 0x22)) = arg1;
    (*(s32 *)((char *)(temp_v0) + 0x20)) = arg1;
    (*(s32 *)((char *)(temp_v0) + 0x10)) = 0;
    (*(s32 *)((char *)(temp_v0) + 0x14)) = 0;
    (*(s32 *)((char *)(temp_v0) + 0x18)) = arg0;
    (*(s32 *)((char *)(temp_v0) + 0x24)) = arg2;
    return temp_v0;
}

void *func_1518AB60(s32 arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = func_15167A68(0x1E, 0, 0x20, 1, 0xFF, 1);
    if (temp_v0 == NULL) {
        return NULL;
    }
    (*(s32 *)((char *)(temp_v0) + 0x10)) = arg0;
    (*(s32 *)((char *)(temp_v0) + 0x14)) = 0;
    (*(s32 *)((char *)(temp_v0) + 0x18)) = 0;
    (*(s32 *)((char *)(temp_v0) + 0x1C)) = arg1;
    return temp_v0;
}

s32 func_1518ABD0(void *arg0, s32 arg1, s32 arg2) {
    void *sp1C;
    s32 temp_t3;
    u8 temp_t6;
    u8 temp_v0_3;
    void *temp_a1;
    void *temp_t0;
    void *temp_v0;
    void *temp_v0_2;

    temp_t6 = arg2 & 0xFF;
    if (arg0 == NULL) {
        if (temp_t6 != 0) {
            ((s32 (*)())((char *)(&D_8008D5C0 + (temp_t6 * 4))))(arg1, temp_t6, arg0);
        }
        return 0;
    }
    arg2 = temp_t6;
    temp_v0 = func_1518AB60(arg1, temp_t6 & 0xFF);
    if (temp_v0 == NULL) {
        if (arg2 != 0) {
            ((s32 (*)())((char *)(&D_8008D5C0 + (arg2 * 4))))(arg1);
        }
        return 0;
    }
    temp_t0 = (*(s32 *)((char *)(arg0) + 0x10));
    (*(s32 *)((char *)(temp_v0) + 0x14)) = temp_t0;
    if (temp_t0 != NULL) {
        (*(s32 *)((char *)(temp_t0) + 0x18)) = temp_v0;
    } else {
        (*(s32 *)((char *)(arg0) + 0x14)) = temp_v0;
    }
    (*(s32 *)((char *)(arg0) + 0x10)) = temp_v0;
    (*(s32 *)((char *)(temp_v0) + 0x18)) = 0;
    temp_t3 = (*(s32 *)((char *)(arg0) + 0x1C)) + 1;
    (*(s32 *)((char *)(arg0) + 0x1C)) = temp_t3;
    (*(s16 *)((char *)(arg0) + 0x22)) = (s16) (*(s16 *)((char *)(arg0) + 0x20));
    if ((*(s32 *)((char *)(arg0) + 0x18)) < temp_t3) {
        temp_a1 = (*(s32 *)((char *)(arg0) + 0x14));
        (*(s32 *)((char *)(arg0) + 0x1C)) = (s32) (temp_t3 - 1);
        temp_v0_2 = (*(s32 *)((char *)(temp_a1) + 0x18));
        if (temp_v0_2 == NULL) {
            (*(s32 *)((char *)(arg0) + 0x10)) = NULL;
            (*(s32 *)((char *)(arg0) + 0x14)) = NULL;
        } else {
            (*(s32 *)((char *)(temp_v0_2) + 0x14)) = 0;
            (*(s32 *)((char *)(arg0) + 0x14)) = (void *) (*(s32 *)((char *)(temp_a1) + 0x18));
        }
        temp_v0_3 = (*(s32 *)((char *)(temp_a1) + 0x1C));
        if (temp_v0_3 != 0) {
            sp1C = temp_a1;
            ((s32 (*)())((char *)(&D_8008D5C0 + (temp_v0_3 * 4))))((*(s32 *)((char *)(temp_a1) + 0x10)), temp_a1, arg2, arg0);
        }
        func_1516972C(temp_a1, temp_a1);
    }
    return 1;
}
