/**
 * Auto-decompiled from asm/EBE60.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_15046C80();              /* extern */
void func_1504715C();                       /* extern */
s32 func_1509BE40();                      /* extern */
void * func_15141F78();        /* extern */
void * func_15142180();               /* extern */
void * func_15142314();                  /* extern */
extern f32 D_800A00C0;
extern f32 D_800A00C4;
extern f32 D_800A00C8;
extern f32 D_800A00CC;
extern f32 D_800A00D0;
extern f32 D_800A00D4;
extern f32 D_800A00D8;

s32 func_150BE9B0(void * *arg0, void *arg1, void * *arg2, s32 arg3) {
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    void * var_a1;
    s32 temp_t6;

    temp_t6 = arg3 & 0xFF;
    if (temp_t6 != 4) {
        if (temp_t6 != 5) {
            var_a1 = 0x10;
            switch (temp_t6) {                      /* irregular */
            case 7:
                break;
            case 6:
                var_a1 = 0xC;
                break;
            }
        } else {
            var_a1 = 0x14;
        }
    } else {
        var_a1 = 0x17;
    }
    func_15142314((*(s32 *)((char *)(arg1) + 0x1D4)), var_a1, arg0, temp_t6);
    if (arg2 == NULL) {
        return 1;
    }
    sp2C = (*(s32 *)((char *)(arg0) + 0x0));
    sp30 = (*(s32 *)((char *)(arg0) + 0x4)) + 10.0f;
    sp34 = (*(s32 *)((char *)(arg0) + 0x8));
    func_1504715C(arg2, arg1);
    return func_15046C80(&sp2C, 0, (*(s32 *)((char *)(arg0) + 0x4)) - 50.0f, arg2);
}

s32 func_150BEAA8(s32 arg0, void * arg1) {
    if ((arg0 == 0) || (arg0 == 1)) {
        return 0x11;
    }
    return -1;
}

void func_150BEACC(void *arg0, s32 arg1, s32 arg2) {
    void * sp4C;
    void * sp28;
    s32 sp24;

    f32 sp40;
    if ((*(s32 *)((char *)(arg0) + 0x1D4)) != 0) {
        sp24 = (s32) arg1;
        if (func_150BE9B0(&sp4C, arg0, &sp28, arg1) != 0) {
            func_15141F78(0xB, &sp28, (f32) arg2 * D_800A00C0 * D_800A00C4, (u32) ((*(f32 *)((char *)(arg0) + 0x40)) * D_800A00C8) & 0xFF, &sp4C, sp24);
            if (arg2 >= 0x4C) {
                func_15142180(2, &sp4C, sp40, 0x404ED917, D_800A00CC);
            }
        }
    }
}

s32 func_150BEC30(void * *arg0, void *arg1, void * *arg2, s32 arg3) {
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    void * var_a1;
    s32 temp_t6;

    temp_t6 = arg3 & 0xFF;
    if (temp_t6 != 4) {
        if (temp_t6 != 5) {
            var_a1 = 0x10;
            switch (temp_t6) {                      /* irregular */
            case 7:
                break;
            case 6:
                var_a1 = 0xC;
                break;
            }
        } else {
            var_a1 = 0x16;
        }
    } else {
        var_a1 = 0x19;
    }
    func_15142314((*(s32 *)((char *)(arg1) + 0x1D4)), var_a1, arg0, temp_t6);
    if (arg2 == NULL) {
        return 1;
    }
    sp2C = (*(s32 *)((char *)(arg0) + 0x0));
    sp30 = (*(s32 *)((char *)(arg0) + 0x4)) + 10.0f;
    sp34 = (*(s32 *)((char *)(arg0) + 0x8));
    func_1504715C(arg2, arg1);
    return func_15046C80(&sp2C, 0, (*(s32 *)((char *)(arg0) + 0x4)) - 50.0f, arg2);
}

s32 func_150BED28(s32 arg0, void * arg1) {
    if ((arg0 == 0) || (arg0 == 1)) {
        return 0x12;
    }
    return -1;
}

void func_150BED4C(void *arg0, s32 arg1, s32 arg2) {
    void * sp4C;
    void * sp28;
    s32 sp24;

    f32 sp40;
    if ((*(s32 *)((char *)(arg0) + 0x1D4)) != 0) {
        sp24 = (s32) arg1;
        if (func_150BEC30(&sp4C, arg0, &sp28, arg1) != 0) {
            func_15141F78(0xB, &sp28, (f32) arg2 * D_800A00D0 * 2.0f, (u32) ((*(f32 *)((char *)(arg0) + 0x40)) * D_800A00D4) & 0xFF, &sp4C, sp24);
            if (arg2 >= 0x4C) {
                func_15142180(2, &sp4C, sp40, 0x404ED917, D_800A00D8);
            }
        }
    }
}

void func_150BEEB0(void *arg0) {
    if ((func_1509BE40(1, 0x4063, 6, 0x2000) != 0) || (func_1509BE40(1, 0x4001, 6, 0x9000) != 0)) {
        (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) | 0x1010);
    } else {
        (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) & ~0x1010);
    }
    if (func_1509BE40(1, 0x4069, 6, 0x2000) != 0) {
        (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) | 0x01000000);
        return;
    }
    (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) & 0xFEFFFFFF);
}
