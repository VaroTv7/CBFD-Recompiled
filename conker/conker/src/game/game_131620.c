/**
 * Auto-decompiled from asm/131620.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_1000E2F4();                         /* extern */
void * func_151254F4();                        /* extern */
void *func_15167A68();          /* extern */
s32 func_1517F08C();             /* extern */
void * func_151D66F0();                    /* extern */
extern s8 D_800BEA0C;
extern void *D_800CC5EC;

void func_15104170(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_v0;

    temp_v0 = func_15167A68(0x64, 0, 0x20, 0, 0xFF, 1);
    if (temp_v0 != NULL) {
        (*(s32 *)((char *)(temp_v0) + 0x18)) = 0xF;
        (*(s32 *)((char *)(temp_v0) + 0x1A)) = 0;
        (*(s32 *)((char *)(temp_v0) + 0x1B)) = 0;
        (*(s32 *)((char *)(temp_v0) + 0x10)) = arg1;
        (*(s32 *)((char *)(temp_v0) + 0x14)) = arg2;
        (*(s8 *)((char *)(temp_v0) + 0x1C)) = (s8) arg0;
    }
}

void func_151041E4(void *arg0) {
    void *sp34;
    void *sp30;
    void *sp28;
    s32 sp24;
    s32 temp_v0_3;
    s32 temp_v0_5;
    s32 var_a0;
    u16 temp_v0_2;
    u16 temp_v0_4;
    u8 temp_v0;
    u8 temp_v1;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x1A));
    switch (temp_v0) {                              /* irregular */
    case 0:
        temp_v1 = (*(s32 *)((char *)(arg0) + 0x1C));
        var_a0 = 0;
        if (temp_v1 == 0) {
            if ((*(s32 *)((char *)((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x10))) + 0x2D0))) + 0x8)) >= 19.0f) {
                goto block_11;
            }
        } else if (temp_v1 == 1) {
            temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x18));
            if (D_800BE9E4 < (s32) temp_v0_2) {
                (*(u16 *)((char *)(arg0) + 0x18)) = (u16) (temp_v0_2 - D_800BE9E4);
            } else {
block_11:
                var_a0 = 1;
            }
        }
        if (var_a0 != 0) {
            sp34 = (*(s32 *)((char *)(arg0) + 0x14));
            sp30 = (*(s32 *)((char *)(arg0) + 0x10));
            (*(s32 *)((char *)(arg0) + 0x1A)) = 1U;
            D_800BEA0C = 1;
            func_100176C4(var_a0, arg0);
            func_10010F30(0x5B2, 0x7FFF, 0, 0, 0);
            func_10010F30(0x5B2, 0x7FFF, 0x7F, -0x64, 0);
            func_10010F30(0x5B2, 0x7FFF, 0, 0, 0);
            func_10010F30(0x5B2, 0x7FFF, 0x7F, -0x64, 0);
            func_151D66F0(0xD2, 2);
            func_151254F4((*(s32 *)((char *)(sp30) + 0x318)), (*(s32 *)((char *)(sp34) + 0x13F)));
            (*(s32 *)((char *)((*(s32 *)((char *)(sp30) + 0x318))) + 0x674)) = 0.0f;
            return;
        }
        return;
    case 1:
        temp_v0_3 = (*(s32 *)((char *)(arg0) + 0x1B)) + (D_800BEA08 * 0xA);
        if (temp_v0_3 >= 0xFF) {
            (*(s32 *)((char *)(arg0) + 0x1B)) = 0xFFU;
            (*(s32 *)((char *)(arg0) + 0x1A)) = 2U;
            (*(s32 *)((char *)(arg0) + 0x18)) = 0xB4U;
            return;
        }
        (*(u8 *)((char *)(arg0) + 0x1B)) = (u8) temp_v0_3;
        return;
    case 2:
        temp_v0_4 = (*(s32 *)((char *)(arg0) + 0x18));
        if (D_800BEA08 < (s32) temp_v0_4) {
            (*(u16 *)((char *)(arg0) + 0x18)) = (u16) (temp_v0_4 - D_800BEA08);
            return;
        }
        D_800BEA0C = 0;
        sp28 = (*(s32 *)((char *)(arg0) + 0x10));
        func_1000E2F4(0, arg0);
        func_151254F4((*(s32 *)((char *)(sp28) + 0x318)), (*(s32 *)((char *)(sp28) + 0x13F)));
        (*(s32 *)((char *)((*(s32 *)((char *)(sp28) + 0x318))) + 0x674)) = 0.0f;
        (*(s32 *)((char *)(arg0) + 0x1A)) = 3U;
        return;
    case 3:
        temp_v0_5 = (*(s32 *)((char *)(arg0) + 0x1B)) - (D_800BEA08 * 0xA);
        if (temp_v0_5 <= 0) {
            func_1516972C(arg0, 2, arg0);
            func_151D66F0(0, 0);
            return;
        }
        sp24 = temp_v0_5;
        func_151D66F0((s32) (temp_v0_5 * 0xD2) >> 8, 2, arg0);
        (*(u8 *)((char *)(arg0) + 0x1B)) = (u8) temp_v0_5;
        break;
    }
}

s32 func_1510448C(s32 arg0, void *arg1, s32 arg2) {
    u8 temp_v0;

    if ((arg2 != 0) || (temp_v0 = (*(s32 *)((char *)(arg1) + 0x1B)), (temp_v0 == 0))) {
        return arg0;
    }
    return func_1517F08C((s32) (temp_v0 * 0x3F) >> 8, 0, 0, 0, (s32) arg2);
}

u8 func_151044F4(void) {
    if (D_800CC5EC != NULL) {
        return (*(s32 *)((char *)(D_800CC5EC) + 0x7D));
    }
    return 0U;
}
