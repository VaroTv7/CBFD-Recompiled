/**
 * Auto-decompiled from asm/188F90.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_1513F4E4();                   /* extern */
s32 func_15142B7C();                   /* extern */
s32 func_15142C10();   /* extern */
s32 func_15142CF0(); /* extern */
s32 func_15142E24(); /* extern */
void *func_15142FBC();           /* extern */
s32 func_1514401C();          /* extern */
void * func_151441A4(); /* extern */
void * func_151442FC(); /* extern */
s32 func_1514ECE0();         /* extern */
void * func_1514EDF0();                               /* extern */
void *func_15167A68();      /* extern */
void * memcpy();                       /* extern */
extern s32 D_8008B078;
extern s32 D_8008B07C;
extern s32 D_80090B60;
extern s32 D_800A4AC8;
extern s32 D_800D2C9C;
extern s32 D_800DCE50;

void func_1515BAE0(void *arg0) {
    u8 sp23;
    s8 temp_v0;
    s8 temp_v0_2;
    u8 var_v1;

    var_v1 = 0;
    if ((*(s32 *)((char *)(arg0) + 0x11)) & 1) {
        (*(s16 *)((char *)(arg0) + 0x14)) = (s16) ((*(s16 *)((char *)(arg0) + 0x14)) - D_800BE9E4);
        if ((*(s32 *)((char *)(arg0) + 0x14)) < 0) {
            var_v1 = 1;
        }
    }
    if (var_v1 == 0) {
        temp_v0 = (*(s32 *)((char *)(arg0) + 0x38));
        if (temp_v0 != -1) {
            sp23 = var_v1;
            if (((s32 (*)())((char *)(&D_8008B078 + (temp_v0 * 4))))(arg0) == 0) {
                var_v1 = 1;
            }
        }
        if ((*(s32 *)((char *)(arg0) + 0x1C)) != 0) {
            var_v1 = func_1514401C((*(s32 *)((char *)(arg0) + 0x10)), (char *)(arg0) + 0x1C, (char *)(arg0) + 0x18, (*(s32 *)((char *)(arg0) + 0x12))) & 0xFF;
        }
    }
    if (var_v1 != 0) {
        temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x39));
        if (temp_v0_2 != -1) {
            if (((s32 (*)())((char *)(&D_8008B07C + (temp_v0_2 * 4))))(arg0) != 0) {
                func_1516972C(arg0);
            }
        } else {
            func_1516972C(arg0);
        }
    }
}

void *func_1515BBF0(s32 arg0, void *arg1, void * arg2) {
    s8 sp73;
    s16 sp70;
    s16 sp6E;
    s16 sp6C;
    s16 sp6A;
    s16 sp68;
    s16 sp66;
    s16 sp64;
    s16 sp62;
    s32 temp_a0;
    s32 var_v1;
    u8 temp_v1;
    void *temp_v0;
    void *temp_v0_2;

    sp73 = 1;
    func_151441A4(&sp70, &sp6E, &sp6C, &sp6A, (s32) (*(s32 *)((char *)(arg1) + 0x20)), (s32) (*(s32 *)((char *)(arg1) + 0x21)), (s32) (*(s32 *)((char *)(arg1) + 0x22)), (s32) (*(s32 *)((char *)(arg1) + 0x23)), (s32) (*(s32 *)((char *)(arg1) + 0x24)), (s32) (*(s32 *)((char *)(arg1) + 0x25)), (s32) (*(s32 *)((char *)(arg1) + 0x26)), (s32) (*(s32 *)((char *)(arg1) + 0x27)), (s32) (*(s32 *)((char *)(arg1) + 0x28)), (s32) (*(s32 *)((char *)(arg1) + 0x29)));
    func_151442FC(&sp68, &sp66, &sp64, &sp62, (s32) (*(s32 *)((char *)(arg1) + 0x20)), (s32) (*(s32 *)((char *)(arg1) + 0x21)), (s32) (*(s32 *)((char *)(arg1) + 0x22)), (s32) (*(s32 *)((char *)(arg1) + 0x23)), (s32) (*(s32 *)((char *)(arg1) + 0x24)), (s32) (*(s32 *)((char *)(arg1) + 0x25)), (s32) (*(s32 *)((char *)(arg1) + 0x26)), (s32) (*(s32 *)((char *)(arg1) + 0x27)), (s32) (*(s32 *)((char *)(arg1) + 0x28)), (s32) (*(s32 *)((char *)(arg1) + 0x2A)));
    temp_v1 = (*(s32 *)((char *)(arg1) + 0x10));
    temp_a0 = func_1513F4E4(func_15142E24(func_15142CF0(func_15142C10(func_15142B7C(arg0, (*(s32 *)((char *)(arg1) + 0x30)), (*(s32 *)((char *)(arg1) + 0x34))), sp68, sp66, sp64, (s32) sp62, &sp73), 0, 0, sp70, (s32) sp6E, (s32) sp6C, (s32) sp6A, &sp73), (temp_v1 * 0xC) + &D_80090B60, (*(s32 *)((char *)(arg1) + 0x18)), 0, 0, 0, (s32) temp_v1, 0, 0, &sp73, 3), (*(s32 *)((char *)(arg1) + 0x2C)), &sp73);
    if ((*(s32 *)((char *)(arg1) + 0x11)) & 2) {
        var_v1 = 0x100000;
    } else {
        var_v1 = 0;
    }
    temp_v0_2 = ((*(s32 *)((char *)(arg1) + 0x2B)) * 8) + &D_800A4AC8;
    temp_v0 = func_15142FBC(temp_a0, var_v1 | 0x80000 | D_800D2C9C | 0x2CA0, (*(s32 *)((char *)(temp_v0_2) + 0x4)) | (*(s32 *)((char *)(temp_v0_2) + 0x0)), &sp73);
    (*(s32 *)((char *)(temp_v0) + 0x4)) = (void *) ((char *)(arg1) + 0x50);
    (*(s32 *)((char *)(temp_v0) + 0x0)) = 0x01004008;
    (*(s32 *)((char *)(temp_v0) + 0x8)) = 0x05000204;
    (*(s32 *)((char *)(temp_v0) + 0xC)) = 0;
    (*(s32 *)((char *)(temp_v0) + 0x10)) = 0x05000406;
    (*(s32 *)((char *)(temp_v0) + 0x14)) = 0;
    return (char *)(temp_v0) + 0x18;
}

void *func_1515BE50(void **arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *sp2C;
    void *temp_v0;

    if (*arg0 == NULL) {
        return NULL;
    }
    temp_v0 = func_15167A68(0x32, arg3, arg1 + 0x50, 1, (s32) arg2, 1);
    if (temp_v0 == NULL) {
        return NULL;
    }
    sp2C = temp_v0;
    memcpy((char *)(temp_v0) + 0x18, arg0, 8);
    (*(f32 *)((char *)(sp2C) + 0x20)) = (f32) (*(f32 *)((char *)((*arg0)) + 0x14));
    (*(f32 *)((char *)(sp2C) + 0x24)) = (f32) (*(f32 *)((char *)((*arg0)) + 0x18));
    (*(f32 *)((char *)(sp2C) + 0x28)) = (f32) (*(f32 *)((char *)((*arg0)) + 0x1C));
    (*(f32 *)((char *)(sp2C) + 0x2C)) = (f32) (*(f32 *)((char *)((*arg0)) + 0x14));
    (*(f32 *)((char *)(sp2C) + 0x30)) = (f32) (*(f32 *)((char *)((*arg0)) + 0x18));
    (*(s32 *)((char *)(sp2C) + 0x44)) = 0;
    (*(s32 *)((char *)(sp2C) + 0x48)) = -1;
    (*(s32 *)((char *)(sp2C) + 0x10)) = 1;
    (*(s32 *)((char *)(sp2C) + 0x14)) = 0;
    (*(s32 *)((char *)(sp2C) + 0x38)) = 0.0f;
    (*(s32 *)((char *)(sp2C) + 0x3C)) = 0.0f;
    (*(s32 *)((char *)(sp2C) + 0x40)) = 0.0f;
    (*(f32 *)((char *)(sp2C) + 0x34)) = (f32) (*(f32 *)((char *)((*arg0)) + 0x1C));
    return sp2C;
}

void func_1515BF50(void *arg0) {
    func_1514EDF0((*(s32 *)((char *)(arg0) + 0x18)));
    func_15169804(arg0);
}

void func_1515BF7C(void *arg0) {
    func_1514EDF0((*(s32 *)((char *)(arg0) + 0x18)));
    func_15169824(arg0);
}

void func_1515BFA8(void *arg0) {
    void *temp_v0;
    void *temp_v0_2;
    void *var_a1;

    var_a1 = NULL;
    if ((*(s32 *)((char *)(arg0) + 0x1D)) & 1) {
        (*(s16 *)((char *)(arg0) + 0x1E)) = (s16) ((*(s16 *)((char *)(arg0) + 0x1E)) - D_800BE9E4);
        if ((*(s32 *)((char *)(arg0) + 0x1E)) < 0) {
            var_a1 = 1;
        }
    }
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x18));
    if (((*(s32 *)((char *)(temp_v0) + 0x0)) == 0) || ((*(s32 *)((char *)(arg0) + 0x1C)) != (*(s32 *)((char *)(temp_v0) + 0x3B)))) {
        var_a1 = 1;
    }
    if (var_a1 == NULL) {
        temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x18));
        (*(f32 *)((char *)(arg0) + 0x2C)) = (f32) (*(f32 *)((char *)(arg0) + 0x20));
        (*(f32 *)((char *)(arg0) + 0x30)) = (f32) (*(f32 *)((char *)(arg0) + 0x24));
        (*(f32 *)((char *)(arg0) + 0x34)) = (f32) (*(f32 *)((char *)(arg0) + 0x28));
        (*(f32 *)((char *)(arg0) + 0x20)) = (f32) (*(f32 *)((char *)(temp_v0_2) + 0x14));
        (*(f32 *)((char *)(arg0) + 0x24)) = (f32) (*(f32 *)((char *)(temp_v0_2) + 0x18));
        (*(f32 *)((char *)(arg0) + 0x28)) = (f32) (*(f32 *)((char *)(temp_v0_2) + 0x1C));
        (*(f32 *)((char *)(arg0) + 0x38)) = (f32) (((*(f32 *)((char *)(arg0) + 0x2C)) - (*(f32 *)((char *)(arg0) + 0x20))) * D_800BE9A8);
        (*(f32 *)((char *)(arg0) + 0x3C)) = (f32) (((*(f32 *)((char *)(arg0) + 0x30)) - (*(f32 *)((char *)(arg0) + 0x24))) * D_800BE9A8);
        (*(f32 *)((char *)(arg0) + 0x40)) = (f32) (((*(f32 *)((char *)(arg0) + 0x34)) - (*(f32 *)((char *)(arg0) + 0x28))) * D_800BE9A8);
    }
    if (var_a1 != NULL) {
        func_1516972C(var_a1);
    }
}

void func_1515C0B8(s32 arg0, s32 arg1, s32 arg2) {
    func_15169850(arg1, arg2, arg0 + 0x18, arg0 + 0x1C, arg0);
}

s32 func_1515C0F8(void *arg0, s32 *arg1) {
    void *sp1C;

    if (arg0 == NULL) {
        goto block_4;
    }
    if (func_1514ECE0((*(s32 *)((char *)(arg0) + 0x2F4)), 0x16, &sp1C, arg0) != 0) {
        *arg1 = (*(s32 *)((char *)(sp1C) + 0x10)) + 0x38;
        return 1;
    }
block_4:
    return 0;
}

void func_1515C158(void) {
    void * *var_v1;
    void *var_v0;

    var_v1 = &D_800DCE50;
    do {
        var_v0 = (*(s32 *)((char *)(var_v1) + 0xC8));
        var_v1 = (char *)(var_v1) + 0x1A0;
        if (var_v0 != NULL) {
            do {
                (*(s32 *)((char *)(var_v0) + 0x44)) = 0;
                (*(s32 *)((char *)(var_v0) + 0x48)) = -1;
                var_v0 = (*(s32 *)((char *)(var_v0) + 0x8));
            } while (var_v0 != NULL);
        }
    } while ((char *)(var_v1) != (char *)(&D_800DD190));
}

void func_1515C1A0(void *arg0, void *arg1, f32 *arg2, f32 *arg3) {
    u8 temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x4));
    if (((s32) temp_v0 < 0xBB) && (temp_v0 != 0xFF)) {
        *arg2 = (f32) (*(f32 *)((char *)(arg0) + 0xD2));
        *arg3 = (f32) (*(f32 *)((char *)(arg0) + 0xD4));
        (*(f32 *)((char *)(arg1) + 0x0)) = (f32) (*(f32 *)((char *)(arg0) + 0x14));
        (*(f32 *)((char *)(arg1) + 0x4)) = (f32) ((*(f32 *)((char *)(arg0) + 0x18)) + (f32) (*(f32 *)((char *)(arg0) + 0xD6)));
        (*(f32 *)((char *)(arg1) + 0x8)) = (f32) (*(f32 *)((char *)(arg0) + 0x1C));
        return;
    }
    *arg2 = 1.0f;
    *arg3 = 1.0f;
    (*(f32 *)((char *)(arg1) + 0x0)) = (f32) (*(f32 *)((char *)(arg0) + 0x14));
    (*(f32 *)((char *)(arg1) + 0x4)) = (f32) (*(f32 *)((char *)(arg0) + 0x18));
    (*(f32 *)((char *)(arg1) + 0x8)) = (f32) (*(f32 *)((char *)(arg0) + 0x1C));
}

void func_1515C244(void *arg0, void *arg1, f32 *arg2, f32 *arg3) {
    u8 temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x4));
    if (((s32) temp_v0 < 0xBB) && (temp_v0 != 0xFF)) {
        *arg2 = (f32) (*(f32 *)((char *)(arg0) + 0xE4));
        *arg3 = (f32) (*(f32 *)((char *)(arg0) + 0xE6));
        (*(f32 *)((char *)(arg1) + 0x0)) = (f32) (*(f32 *)((char *)(arg0) + 0x14));
        (*(f32 *)((char *)(arg1) + 0x4)) = (f32) ((*(f32 *)((char *)(arg0) + 0x18)) + (f32) (*(f32 *)((char *)(arg0) + 0xE8)));
        (*(f32 *)((char *)(arg1) + 0x8)) = (f32) (*(f32 *)((char *)(arg0) + 0x1C));
        return;
    }
    *arg2 = 1.0f;
    *arg3 = 1.0f;
    (*(f32 *)((char *)(arg1) + 0x0)) = (f32) (*(f32 *)((char *)(arg0) + 0x14));
    (*(f32 *)((char *)(arg1) + 0x4)) = (f32) (*(f32 *)((char *)(arg0) + 0x18));
    (*(f32 *)((char *)(arg1) + 0x8)) = (f32) (*(f32 *)((char *)(arg0) + 0x1C));
}
