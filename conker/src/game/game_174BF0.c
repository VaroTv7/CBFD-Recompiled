/**
 * Auto-decompiled from asm/174BF0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_151462C8(); /* extern */
s32 func_1515D440();                                /* extern */
s32 func_1515D480();                             /* extern */
void *func_15167A68();      /* extern */
void * func_151D5E30();                       /* extern */
void * memcpy();                        /* extern */
void func_1514795C();                     /* static */
extern s32 D_8008A200;
extern s32 D_8008A23C;
extern s32 D_8008A284;
extern s32 D_8008A2A4;
extern s32 D_8008A2F0;
extern s32 D_8008A340;
extern s32 D_8008A390;
extern s32 D_800A5760;

void func_15147740(void *arg0) {
    s8 sp1B;
    s8 temp_v0_3;
    s8 var_a1;
    u8 temp_v0;
    u8 temp_v0_2;

    var_a1 = 0;
    if ((*(s32 *)((char *)(arg0) + 0x1E)) & 1) {
        (*(s16 *)((char *)(arg0) + 0x1C)) = (s16) ((*(s16 *)((char *)(arg0) + 0x1C)) - D_800BE9E4);
        if ((*(s32 *)((char *)(arg0) + 0x1C)) < 0) {
            var_a1 = 1;
        }
    }
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x2F));
    if ((s32) temp_v0 >= 0xF) {
        func_1516972C(var_a1);
        return;
    }
    if ((temp_v0 != 0) && (var_a1 == 0)) {
        sp1B = var_a1;
        if (((s32 (*)())((char *)(&D_8008A200 + (temp_v0 * 4))))(var_a1) == 0) {
            var_a1 = 1;
        }
    }
    temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x30));
    if ((s32) temp_v0_2 >= 0x12) {
        func_1516972C((s8) arg0, var_a1);
        return;
    }
    if ((temp_v0_2 != 0) && (var_a1 == 0)) {
        sp1B = var_a1;
        if (((s32 (*)())((char *)(&D_8008A23C + (temp_v0_2 * 4))))(arg0, var_a1) == 0) {
            var_a1 = 1;
        }
    }
    if ((*(s32 *)((char *)(arg0) + 0x1E)) & 0x10) {
        temp_v0_3 = (*(s32 *)((char *)(arg0) + 0x24));
        if ((temp_v0_3 < -1) || (temp_v0_3 >= 8)) {
            func_1516972C((s8) arg0, var_a1);
            return;
        }
        if ((temp_v0_3 != -1) && (var_a1 == 0)) {
            sp1B = var_a1;
            if (((s32 (*)())((char *)(&D_8008A284 + (temp_v0_3 * 4))))(arg0, var_a1) == 0) {
                var_a1 = 1;
            }
        }
        goto block_23;
    }
block_23:
    if (var_a1 != 0) {
        func_1516972C((s8) arg0, var_a1);
    }
}

void func_151478D0(void *arg0) {
    func_151D5E30((char *)(arg0) + 0x84, arg0);
}

void func_151478F4(void *arg0) {
    func_151478D0(arg0);
    func_1514795C(arg0);
    func_15169804(arg0);
}

void func_15147928(void *arg0) {
    func_151478D0(arg0);
    func_1514795C(arg0);
    func_15169824(arg0);
}

void func_1514795C(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s1;
    void *var_s0;

    var_s1 = 0;
    var_s0 = arg0;
    if (D_80082FA0 >= 0) {
        do {
            temp_v0 = (*(s32 *)((char *)(var_s0) + 0x3C));
            if (temp_v0 != 0) {
                func_100043B4(temp_v0, 4);
            }
            var_s1 += 1;
            var_s0 = (char *)(var_s0) + 4;
        } while (D_80082FA0 >= var_s1);
    }
    temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x4C));
    if (temp_v0_2 != 0) {
        func_100043B4(temp_v0_2, 4);
    }
}

void func_151479E0(void *arg0) {
    s32 var_v0;

    var_v0 = (*(s32 *)((char *)(arg0) + 0x20));
    if (var_v0 < 0) {
        goto block_3;
    }
    if (var_v0 >= 0x14) {
block_3:
        var_v0 = 0;
    }
    ((s32 (*)())((char *)(&D_8008A2F0 + (var_v0 * 4))))();
}

void func_15147A30(void *arg0) {
    s32 var_v0;

    var_v0 = (*(s32 *)((char *)(arg0) + 0x20));
    if (var_v0 < 0) {
        goto block_3;
    }
    if (var_v0 >= 0x14) {
block_3:
        var_v0 = 0;
    }
    ((s32 (*)())((char *)(&D_8008A340 + (var_v0 * 4))))();
}

void *func_15147A80(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10) {
    void * var_v0;
    s32 var_s1;
    s32 var_s1_2;
    void *temp_v0;
    void *temp_v0_2;
    void *var_s0;
    void *var_s0_2;

    var_v0 = 0x22;
    if ((*(s32 *)((char *)(arg0) + 0xE)) & 0x40) {
        var_v0 = 0x4D;
    }
    temp_v0 = func_15167A68(var_v0, arg10, arg1 + ((*(s32 *)((char *)(arg0) + 0x15)) * arg2) + 0xA0, 1, (s32) arg9, 1);
    if (temp_v0 == NULL) {
        return NULL;
    }
    temp_v0_2 = (char *)(temp_v0) + 0xA0;
    (*(s32 *)((char *)(temp_v0) + 0x98)) = temp_v0_2;
    (*(s32 *)((char *)(temp_v0) + 0x94)) = (void *) ((char *)(temp_v0_2) + arg1);
    memcpy((char *)(temp_v0) + 0x10, arg0, 0x1C);
    (*(s32 *)((char *)(temp_v0) + 0x2C)) = 0;
    (*(s32 *)((char *)(temp_v0) + 0x2D)) = 0;
    (*(s32 *)((char *)(temp_v0) + 0x2E)) = 0;
    (*(s32 *)((char *)(temp_v0) + 0x2F)) = arg3;
    (*(s8 *)((char *)(temp_v0) + 0x30)) = (s8) arg4;
    (*(s8 *)((char *)(temp_v0) + 0x31)) = (s8) arg5;
    if (arg8 != 0) {
        M2C_MEMCPY_ALIGNED((char *)(temp_v0) + 0x60, arg8, 0x24);
    } else {
        (*(s32 *)((char *)(temp_v0) + 0x7C)) = 0;
    }
    var_s1 = 0;
    var_s0 = temp_v0;
    (*(s32 *)((char *)(temp_v0) + 0x34)) = arg6;
    (*(s32 *)((char *)(temp_v0) + 0x38)) = 0;
    (*(s32 *)((char *)(temp_v0) + 0x50)) = arg7;
    do {
        var_s1 += 1;
        var_s0 = (char *)(var_s0) + 4;
        (*(s32 *)((char *)(var_s0) + 0x38)) = 0;
    } while (var_s1 < 4);
    (*(s32 *)((char *)(temp_v0) + 0x4C)) = 0;
    if (arg6 != 0) {
        var_s1_2 = 0;
        var_s0_2 = temp_v0;
        if (D_80082FA0 >= 0) {
            do {
                (*(s32 *)((char *)(var_s0_2) + 0x3C)) = func_1515D480(arg6);
                var_s1_2 += 1;
                var_s0_2 = (char *)(var_s0_2) + 4;
            } while (D_80082FA0 >= var_s1_2);
        }
        (*(s32 *)((char *)(temp_v0) + 0x4C)) = func_1515D440();
    }
    (*(s32 *)((char *)(temp_v0) + 0x54)) = 0.0f;
    (*(s32 *)((char *)(temp_v0) + 0x58)) = 0.0f;
    (*(s32 *)((char *)(temp_v0) + 0x5C)) = 0.0f;
    bzero((char *)(temp_v0) + 0x84, 0x10);
    return temp_v0;
}

s32 func_15147C4C(s32 arg0, void *arg1, s32 arg2) {
    s32 temp_s1;
    s32 var_v0;
    s32 var_v0_2;
    u8 temp_v1;

    if ((*(s32 *)((char *)(arg1) + 0x1E)) & 0x20) {
        var_v0_2 = (*(s32 *)((char *)(arg1) + 0x28));
    } else {
        var_v0_2 = 0;
    }
    temp_v1 = (*(s32 *)((char *)(arg1) + 0x31));
    temp_s1 = func_151462C8(arg0, (char *)(arg1) + 0x34, 0, 0, 0, (s32) arg2, (char *)(arg1) + 0x54, 2, var_v0_2);
    if ((s32) temp_v1 >= 0x13) {
        func_1516972C((s8) arg1);
        return temp_s1;
    }
    var_v0 = temp_s1;
    if (temp_v1 != 0) {
        var_v0 = ((s32 (*)())((char *)(&D_8008A2A4 + (temp_v1 * 4))))(arg1, temp_s1, arg2);
    }
    return var_v0;
}

void func_15147D1C(void *arg0, s32 arg2) {
    void * (*temp_v0)(s32);

    temp_v0 = *(&D_8008A390 + ((*(s32 *)((char *)(arg0) + 0x20)) * 4));
    if (temp_v0 != NULL) {
        temp_v0(arg2 & 0xFF);
    }
}

void func_15147D64(s32 arg0, s32 arg1) {
    func_15169260(&D_800A5760, 2, arg0, arg1 & 0xFF);
}
