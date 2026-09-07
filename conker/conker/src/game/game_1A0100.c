/**
 * Auto-decompiled from asm/1A0100.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_1501C730();                  /* extern */
void * func_15085430();                                 /* extern */
void * func_1517EE40();              /* extern */
s32 func_1517F40C();                             /* extern */
extern s32 D_800DD2B0;
void func_15172CA8();
void func_15172D28();

void func_15172C50( s32 arg0) {
    void * *var_v1;
    u8 *var_a1;

    var_a1 = &D_800DD2C0;
    var_v1 = &D_800DD2B0;
    do {
        var_a1 += 4;
        (*(s32 *)((char *)(var_v1) + 0x1)) = -1;
        (*(s32 *)((char *)(var_a1) - 0x3)) = 0;
        (*(s32 *)((char *)(var_v1) + 0x2)) = -1;
        (*(s32 *)((char *)(var_a1) - 0x2)) = 0;
        (*(s32 *)((char *)(var_v1) + 0x3)) = -1;
        (*(s32 *)((char *)(var_a1) - 0x1)) = 0;
        var_v1 = (char *)(var_v1) + 4;
        (*(s32 *)((char *)(var_v1) - 0x4)) = -1;
        (*(s32 *)((char *)(var_a1) - 0x4)) = 0;
    } while ((char *)(var_a1) != (char *)(&D_800DD2D0));
    D_800DD2C0 = arg0;
}

void func_15172CA8(s32 arg0) {
    s8 *temp_v0;

    temp_v0 = arg0 + &D_800DD2B0;
    if (*temp_v0 != -1) {
        *temp_v0 = -1;
        func_1517EE40(0, 0, 0, 0, 1, arg0);
        func_1517EE40(0, 0, 0, 0x32, 0, arg0);
    }
}

void func_15172D28(void *arg0) {
    void *temp_v0;

    func_15085430(1);
    (*(u16 *)((char *)(arg0) + 0x2F8)) = (u16) ((*(u16 *)((char *)(arg0) + 0x2F8)) & 0xFFEF);
    if (D_800BE9B4 == 0) {
        temp_v0 = (*(s32 *)((char *)(arg0) + 0x31C));
        if (temp_v0 != NULL) {
            (*(s32 *)((char *)(temp_v0) + 0x56)) = 3;
        }
    }
}

void func_15172D80(s32 arg0) {
    s8 *sp34;
    void *sp2C;
    s8 *temp_v1;
    s8 temp_a1;
    void *temp_t0;

    temp_v1 = arg0 + &D_800DD2B0;
    if (*temp_v1 != -1) {
        temp_t0 = (arg0 * 0x32C) + &gObjects;
        sp2C = temp_t0;
        if ((*(s32 *)((char *)(temp_t0) + 0x1CA)) == 0) {
            *temp_v1 = -1;
            sp34 = temp_v1;
            func_1517EE40(0, 0, 0, 0x32, 0, arg0);
        }
        sp34 = temp_v1;
        if (func_1517F40C(arg0) != 0) {
            temp_a1 = *temp_v1;
            if (D_800BE9F0 != temp_a1) {
                func_1501C730(1, temp_a1, 0, 0, 0);
                return;
            }
            func_15172CA8(arg0);
            func_15172D28(sp2C);
        }
    }
}

void func_15172E7C(void *arg0, s32 arg1, s32 arg2) {
    s32 sp2C;
    s8 *sp28;
    s8 *temp_v0_2;
    u8 temp_v1;
    void *temp_v0;

    temp_v1 = (*(s32 *)((char *)(arg0) + 0x127));
    if (((*(s32 *)((char *)(arg0) + 0x1CA)) != 0) && ((temp_v0 = (*(s32 *)((char *)(arg0) + 0x31C)), (temp_v0 == NULL)) || ((*(s32 *)((char *)(temp_v0) + 0x23)) <= 0))) {
        if ((*(s32 *)((char *)(arg0) + 0x318)) != 0) {
            temp_v0_2 = temp_v1 + &D_800DD2B0;
            if (*temp_v0_2 == -1) {
                sp28 = temp_v0_2;
                sp2C = (s32) temp_v1;
                func_1517EE40(0, 0, 0, 0xA, 1, (s32) temp_v1);
                (*(u16 *)((char *)(arg0) + 0x2F8)) = (u16) ((*(u16 *)((char *)(arg0) + 0x2F8)) | 0x10);
                *temp_v0_2 = (s8) arg1;
                (&D_800DD2C0)[temp_v1] = (u8) arg2;
            }
        } else if (arg1 == D_800BE9F0) {
            func_15172D28(arg0);
        }
    }
}
