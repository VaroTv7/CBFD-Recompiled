/**
 * Auto-decompiled from asm/AD9B0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * *allocate_memory();                   /* extern */
void * func_10004074();                               /* extern */
void * *func_1502B6BC();        /* extern */
void *func_1516A7B0(void *, void *, void *, void (*)(s32, void *, s32), void * *, s32); /* extern */
void * func_1516D2E0();                            /* extern */
void * func_151F2D6C();                              /* extern */
s32 strlen();                                    /* extern */
s32 func_15080738();                             /* static */
extern s32 D_800BE580;
extern s32 D_800CC5EC;
extern void *D_800D199C;
extern u8 D_800D2E40;
void func_15080718();

void func_15080500(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 var_a3;
    void *temp_v0;
    void *temp_v0_2;

    if ((arg0 != NULL) && ((*(s32 *)((char *)(arg0) + 0x0)) != 0) && ((*(s32 *)((char *)(arg0) + 0x127)) != 0xFF)) {
        if ((arg3 == 0x2B) || (arg3 == 0x2C)) {
            D_800D1940 = (u8) arg3;
            D_800D199C = arg1;
            var_a3 = 0x2A;
        } else {
            var_a3 = arg3;
            if (func_15080738(arg3) != 0) {
                D_800D1940 = (u8) var_a3;
                if (!((*(s32 *)((char *)(D_800D2E60) + (var_a3 >> 3))) & (1 << (var_a3 & 7)))) {
                    var_a3 = 0x1A;
                }
            }
        }
        if (arg2 == 0) {
            temp_v0 = (*(s32 *)((char *)(arg0) + 0x31C));
            if (!((*(s32 *)((char *)(temp_v0) + 0x74)) & 0x80)) {
                (*(u8 *)((char *)(temp_v0) + 0x74)) = (u8) var_a3;
            }
        } else {
            temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x31C));
            if (!((*(s32 *)((char *)(temp_v0_2) + 0x75)) & 0x80)) {
                (*(u8 *)((char *)(temp_v0_2) + 0x75)) = (u8) var_a3;
                (*(s8 *)((char *)((*(s8 *)((char *)(arg0) + 0x31C))) + 0x7A)) = (s8) ((s32) ((char *)(arg1) - (char *)(D_800D3098)) / 52);
            }
        }
    }
}

void func_15080620(s32 arg0, s32 arg1, s32 arg2, void * arg3) {
    s8 var_a2;

    var_a2 = arg2;
    if (var_a2 != 0) {
        var_a2 |= 0x80;
    }
    if (arg1 == 0) {
        (*(s32 *)((char *)((*(&D_800CC5EC + (arg0 * 0x32C)))) + 0x74)) = var_a2;
        return;
    }
    (*(s32 *)((char *)((*(&D_800CC5EC + (arg0 * 0x32C)))) + 0x75)) = var_a2;
}

void func_150806A8(s32 arg0) {
    u8 temp_a1;
    u8 temp_v0_2;
    void *temp_v0;
    void *temp_v1;

    temp_v0 = (arg0 * 0x32C) + &gObjects;
    temp_v1 = (*(s32 *)((char *)(temp_v0) + 0x31C));
    temp_a1 = (*(s32 *)((char *)(temp_v1) + 0x74));
    if ((temp_a1 != 0) && !(temp_a1 & 0x80)) {
        (*(s32 *)((char *)(temp_v1) + 0x74)) = 0U;
    }
    temp_v0_2 = (*(s32 *)((char *)((*(s32 *)((char *)(temp_v0) + 0x31C))) + 0x75));
    if ((temp_v0_2 != 0) && !(temp_v0_2 & 0x80)) {
        (*(s32 *)((char *)((*(s32 *)((char *)(temp_v0) + 0x31C))) + 0x75)) = 0U;
    }
}

void func_15080718(s32 arg0, s32 *arg1, s32 *arg2) {
    *arg2 = 1 << (arg0 & 7);
    *arg1 = arg0 >> 3;
}

s32 func_15080738(void) {
    s32 sp1C;
    s32 sp18;
    s32 var_v0;

    func_15080718((s32) &sp1C, &sp18, 0);
    var_v0 = 0;
    if (*(&D_800BE580 + sp1C) & sp18) {
        var_v0 = 1;
    }
    return var_v0;
}

void func_15080784(void) {
    u16 temp_a0;
    u8 temp_v0;

    if (D_800D1998 != NULL) {
        temp_v0 = D_800D1994;
        if (D_800D1995 != temp_v0) {
            temp_a0 = (*(s32 *)((char *)(D_800D1998) + (temp_v0 * 2)));
            if (temp_a0 != 0) {
                func_1001263C(temp_a0, 0x7FFF, 0x40);
            }
            D_800D1994 = temp_v0 + 1;
        }
    }
}

void func_150807F4(s32 arg0, void * arg1, s32 arg2) {
    if (arg2 == 0x20) {
        func_15080784();
    }
}

void func_15080828(s32 arg0) {
    s32 sp40;
    s32 sp3C;
    s32 sp38;
    s32 sp30;
    u32 sp2C;
    void * *temp_v0;
    void * *temp_v0_2;
    void * *temp_v0_4;
    void * *temp_v0_5;
    void * *var_t3;
    s32 temp_v0_3;
    s32 temp_v1;
    u32 temp_t6;
    void *temp_v0_6;

    if (arg0 == 0) {
        if (!(D_800D2E68 & 0x10)) {
            sp40 = 1;
        } else {
            goto block_4;
        }
    } else {
block_4:
        sp40 = 0;
    }
    temp_v0 = func_1502B6BC(0, 0, 0, 3, 0x1A, (s32) D_800BEAAB, (s32) D_800D1940);
    D_800D1944 = temp_v0;
    if (temp_v0 != NULL) {
        D_800D1994 = 0;
        D_800D1998 = (*(s32 *)((char *)(temp_v0) + 0x8));
        D_800D1995 = (u8) ((u32) (*(u8 *)((char *)(temp_v0) + 0xC)) >> 1);
        if (sp40 != 0) {
            temp_v0_2 = func_1502B6BC(0, 0, 0, 3, 0x1A, (s32) D_800BEAAB, 0x43);
            D_800D1948 = temp_v0_2;
            if (D_800D1944 != NULL) {
                sp3C = strlen(*temp_v0_2) + 1;
                temp_v0_3 = strlen((*(s32 *)((char *)(D_800D1944) + 0x0)));
                sp38 = temp_v0_3 + 1;
                temp_v0_4 = allocate_memory(sp3C + temp_v0_3 + 2, 1, 0, 0);
                D_800D194C = temp_v0_4;
                bcopy((*(s32 *)((char *)(D_800D1948) + 0x0)), temp_v0_4, sp3C);
                (*(s32 *)((char *)((D_800D194C + sp3C)) - 0x1)) = 0xBD;
                bcopy((*(s32 *)((char *)(D_800D1944) + 0x0)), D_800D194C + sp3C, sp38);
                temp_t6 = (u32) (*(u32 *)((char *)(D_800D1948) + 0xC)) >> 1;
                temp_v1 = D_800D1995 + temp_t6;
                sp30 = temp_v1;
                sp2C = temp_t6;
                temp_v0_5 = allocate_memory(temp_v1 * 2, 1, 0, 0);
                D_800D1998 = temp_v0_5;
                bcopy((*(s32 *)((char *)(D_800D1948) + 0x8)), temp_v0_5, sp2C * 2);
                bcopy((*(s32 *)((char *)(D_800D1944) + 0x8)), (temp_t6 * 2) + D_800D1998, D_800D1995 * 2);
                D_800D1995 = (u8) sp30;
                goto block_10;
            }
        } else {
            D_800D1948 = NULL;
block_10:
            D_800D1941 = 1;
            if (sp40 != 0) {
                var_t3 = D_800D194C;
            } else {
                var_t3 = (*(s32 *)((char *)(D_800D1944) + 0x0));
            }
            (*(s32 *)((char *)&(D_800D1958) + 0x0)) = 0x38013;
            if (((sp40 != 0) || (arg0 != 0) || !((*(s32 *)((char *)(D_800D2E60) + ((s32) D_800D1940 >> 3))) & (1 << (D_800D1940 & 7)))) && (D_800D2E40 == 0)) {
                (*(s32 *)((char *)&(D_800D1958) + 0x0)) = (s32) ((*(s32 *)((char *)&(D_800D1958) + 0x0)) | 0x60);
            }
            if ((arg0 != 0) || (D_800D1940 == 0x42)) {
                (*(s32 *)((char *)&(D_800D1958) + 0x0)) = (s32) ((*(s32 *)((char *)&(D_800D1958) + 0x0)) | 0x80);
            }
            (*(s32 *)((char *)&(D_800D1958) + 0x4)) = var_t3;
            (*(s32 *)((char *)&(D_800D1958) + 0x26)) = 0x64;
            (*(s32 *)((char *)&(D_800D1958) + 0x8)) = 1;
            (*(s32 *)((char *)&(D_800D1958) + 0x24)) = 0;
            (*(s32 *)((char *)&(D_800D1958) + 0x2B)) = 0;
            (*(s32 *)((char *)&(D_800D1958) + 0x18)) = &D_800D1988;
            (*(s32 *)((char *)&(D_800D1958) + 0x1C)) = &D_800D198C;
            (*(s32 *)((char *)&(D_800D1958) + 0x20)) = &D_800D1990;
            (*(s32 *)((char *)&(D_800D1958) + 0x28)) = 0xFF;
            (*(s32 *)((char *)&(D_800D1958) + 0x29)) = 0xFF;
            (*(s32 *)((char *)&(D_800D1958) + 0x2A)) = 0xFF;
            D_800D1988 = 78.0f;
            D_800D198C = 48.0f;
            D_800D1990 = 9.0f;
            temp_v0_6 = func_1516A7B0(0, 0, 0, func_150807F4, D_800D1958, 0);
            D_800D1950 = temp_v0_6;
            (*(s32 *)((char *)(temp_v0_6) + 0x14)) = 0;
        }
    }
}

void func_15080BE8(void) {
    D_800D1941 = 0;
    func_1516D2E0(D_800D1950);
    func_10004074(D_800D1944);
    if (D_800D1948 != NULL) {
        func_10004074(D_800D1948);
        func_10004074(D_800D194C);
        func_10004074(D_800D1998);
        D_800D1948 = NULL;
    }
    func_151F2D6C(0, 0x5622);
}

void func_15080C64(void) {
    if ((D_800D1941 != 0) && ((*(s32 *)((char *)(D_800D1950) + 0x15)) == 0)) {
        func_15080BE8();
        if ((D_800BE9F0 != 0x29) && (D_800BE9F0 != 0x2E)) {
            (*(u8 *)((char *)&(D_800D2E60) + 0x8)) = (u8) ((*(u8 *)((char *)&(D_800D2E60) + 0x8)) | 0x10);
        }
        if (D_800D199C != NULL) {
            (*(s32 *)((char *)(D_800D199C) + 0x14)) = 1;
            D_800D199C = NULL;
        }
    }
}

s32 func_15080CF4(void) {
    if (D_800D1941 == 0) {
        return 1;
    }
    return 0;
}
