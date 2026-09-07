/**
 * Auto-decompiled from asm/205C90.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_1501C010();                           /* extern */
void * func_1501C17C();                               /* extern */
f32 func_15143E64();                   /* extern */
void *func_15144B34();                            /* extern */
void *func_15167A68();      /* extern */
s32 func_1517EF00();                             /* extern */
s32 func_15181CC8();                             /* extern */
void * memcpy();                        /* extern */
void func_151D8C00();         /* static */
extern s32 D_80084060;
extern s32 D_8008FCC0;
extern s32 D_800AB300;
extern u8 D_800BEAC2;
extern u8 D_800BEAC3;
extern s8 D_800E0A00;

s32 func_151D87E0( s32 arg0) {
    s32 var_a1;
    s32 var_v0;
    u8 temp_a0;

    var_v0 = 0;
    var_a1 = 0;
loop_1:
    if (arg0 & 0xFF & (1 << var_a1)) {
        temp_a0 = *(&D_80084060 + var_v0);
        if ((s32) temp_a0 >= 4) {
            return 0;
        }
        if ((*(s32 *)((char *)(D_800BE944) + temp_a0)) != 0) {
            return 1;
        }
        goto block_6;
    }
block_6:
    var_a1 = (var_v0 + 1) & 0xFF;
    var_v0 = var_a1;
    if (var_a1 >= 4) {
        return 0;
    }
    goto loop_1;
}

void *func_151D8868(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_v1;
    void *temp_v0;

    if (D_800E0B94 != 0) {
        return NULL;
    }
    if (func_151D87E0((*(s32 *)((char *)(arg0) + 0x5))) == 0) {
        return NULL;
    }
    if ((D_800BEAC0 != 0) || (D_800BEAC1 != 0) || (D_800BEAC2 != 0) || (D_800BEAC3 != 0)) {
        return NULL;
    }
    var_s1 = 0;
    var_s0 = 0;
    if (D_80082FA0 >= 0) {
loop_10:
        if (((*(s32 *)((char *)(arg0) + 0x5)) & (1 << var_s0)) && ((func_15181CC8(var_s0) == 0) || (func_1517EF00(var_s0) != 0))) {
            return NULL;
        }
        var_s0 = (var_s1 + 1) & 0xFF;
        var_s1 = var_s0;
        if (D_80082FA0 < var_s0) {
            goto block_15;
        }
        goto loop_10;
    }
block_15:
    temp_v0 = func_15167A68(0x3F, arg3, arg1 + 0x18, 1, (s32) arg2, 1);
    if (temp_v0 == NULL) {
        return NULL;
    }
    memcpy((char *)(temp_v0) + 0xE, arg0, 8);
    var_s0_2 = 0;
    var_v1 = 0;
    do {
        if ((*(s32 *)((char *)(temp_v0) + 0x13)) & (1 << var_v1)) {
            func_1501C010(var_s0_2 & 0xFF, (*(s32 *)((char *)(arg0) + 0x4)));
        }
        var_v1 = (var_s0_2 + 1) & 0xFF;
        var_s0_2 = var_v1;
    } while (var_v1 < 4);
    (*(u8 *)((char *)(temp_v0) + 0x16)) = (u8) (*(u8 *)((char *)(arg0) + 0x4));
    return temp_v0;
}

void func_151D8A24(void *arg0) {
    u8 sp23;
    s32 var_s0;
    s32 var_v0;
    s8 temp_v0;

    sp23 = 0;
    if ((*(s32 *)((char *)(arg0) + 0xE)) & 1) {
        (*(s16 *)((char *)(arg0) + 0x10)) = (s16) ((*(s16 *)((char *)(arg0) + 0x10)) - D_800BE9E4);
        if ((*(s32 *)((char *)(arg0) + 0x10)) < 0) {
            sp23 = 1;
        }
    }
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x14));
    if (temp_v0 != -1) {
        ((s32 (*)())((char *)(&D_8008FCC0 + (temp_v0 * 4))))(arg0);
    }
    var_s0 = 0;
    var_v0 = 0;
    if ((*(s32 *)((char *)(arg0) + 0x12)) != (*(s32 *)((char *)(arg0) + 0x16))) {
        do {
            if ((*(s32 *)((char *)(arg0) + 0x13)) & (1 << var_v0)) {
                func_1501C17C(var_s0 & 0xFF);
                func_1501C010(var_s0 & 0xFF, (*(s32 *)((char *)(arg0) + 0x12)));
            }
            var_v0 = (var_s0 + 1) & 0xFF;
            var_s0 = var_v0;
        } while (var_v0 < 4);
        (*(u8 *)((char *)(arg0) + 0x16)) = (u8) (*(u8 *)((char *)(arg0) + 0x12));
    }
    if (sp23 != 0) {
        func_1516972C(arg0);
    }
}

void func_151D8B24(void *arg0) {
    s32 var_s0;
    s32 var_v0;

    var_s0 = 0;
    var_v0 = 0;
    do {
        if ((*(s32 *)((char *)(arg0) + 0x13)) & (1 << var_v0)) {
            func_1501C17C(var_s0 & 0xFF);
        }
        var_v0 = (var_s0 + 1) & 0xFF;
        var_s0 = var_v0;
    } while (var_v0 < 4);
}

void func_151D8B88(void *arg0) {
    func_151D8B24(arg0);
    func_15169804(arg0);
}

void func_151D8BB4(void *arg0) {
    func_151D8B24(arg0);
    func_15169824(arg0);
}

void func_151D8BE0(s32 arg0) {
    func_151D8C00(arg0 + 0x18);
}

void func_151D8C00(void *arg0, void *arg1) {
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 temp_f0;
    f32 temp_f2;
    f32 var_f12;
    void *temp_v0;

    temp_v0 = func_15144B34((*(s32 *)((char *)(arg1) + 0x18)));
    sp28 = (*(s32 *)((char *)(arg1) + 0x0)) - (*(s32 *)((char *)(temp_v0) + 0x0));
    sp2C = (*(s32 *)((char *)(arg1) + 0x4)) - (*(s32 *)((char *)(temp_v0) + 0x4));
    sp30 = (*(s32 *)((char *)(arg1) + 0x8)) - (*(s32 *)((char *)(temp_v0) + 0x8));
    temp_f0 = func_15143E64(&sp28, arg1);
    temp_f2 = (*(s32 *)((char *)(arg1) + 0xC));
    if (temp_f0 < temp_f2) {
        var_f12 = 1.0f;
    } else if ((temp_f2 + (*(s32 *)((char *)(arg1) + 0x10))) < temp_f0) {
        var_f12 = 0.0f;
    } else {
        var_f12 = 1.0f - ((temp_f0 - temp_f2) * (*(s32 *)((char *)(arg1) + 0x14)));
    }
    (*(s8 *)((char *)(arg0) + 0x12)) = (s8) (u32) (var_f12 * 8.0f);
}

void func_151D8D5C(void * arg1, s32 arg2) {
    s32 temp_t6;

    temp_t6 = arg2 & 0xFF;
    if (temp_t6 == 0x58) {
        func_1516972C((void *) temp_t6);
        return;
    }
    if (temp_t6 == 0x47) {
        func_1516972C((void *) temp_t6);
    }
}

void func_151D8DB4(s32 arg0, s32 arg1) {
    func_15169260(&D_800AB300, 1, arg0, arg1 & 0xFF);
}

void func_151D8DE8(void) {
    D_800E0A00 = 1;
    func_151D8DB4(0, 0x58);
}
