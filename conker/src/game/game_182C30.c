/**
 * Auto-decompiled from asm/182C30.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void *func_15096934();          /* extern */
void *func_1515D5F8(); /* extern */
void * func_1515F10C();           /* extern */
void *func_15167A68();          /* extern */
void * func_1518C900();                                 /* extern */
void * func_1518CA04();                                 /* extern */
void *func_15155FD4();                      /* static */
extern s32 D_800DCE50;
extern s32 *D_800E03E0;

void *func_15155780(s32 arg0, s32 arg1) {
    void *sp24;
    void *temp_v0;

    temp_v0 = func_15167A68(0x50, 0, 0xA0, 1, arg1, 1);
    if (temp_v0 == NULL) {
        return temp_v0;
    }
    (*(s32 *)((char *)(temp_v0) + 0x11)) = 0;
    (*(s32 *)((char *)(temp_v0) + 0x14)) = 0;
    (*(s8 *)((char *)(temp_v0) + 0x10)) = (s8) arg0;
    (*(s32 *)((char *)(temp_v0) + 0x98)) = 0.0f;
    sp24 = temp_v0;
    func_1518C900(0xA6);
    return sp24;
}

void func_151557FC(s32 arg0, s32 arg1, f32 arg2) {
    void *var_v0;

    var_v0 = func_15155FD4(arg0);
    if (var_v0 == NULL) {
        var_v0 = func_15155780(arg0, 0xFF);
    }
    if (var_v0 != NULL) {
        (*(s32 *)((char *)(var_v0) + 0x98)) = arg2;
        if (*(&D_800CC37D + (arg0 * 0x32C)) != 0) {
            (*(s32 *)((char *)(var_v0) + 0xE)) = 0;
            (*(s32 *)((char *)(var_v0) + 0x11)) = 0;
            return;
        }
        (*(s32 *)((char *)(var_v0) + 0x11)) = 3;
        (*(s16 *)((char *)(var_v0) + 0xE)) = (s16) arg1;
    }
}

void func_1515589C(void *arg0) {
    void *sp48;
    f32 sp38;
    f32 var_f2;
    s16 temp_v0;
    s16 var_v0_2;
    u8 temp_a2;
    u8 temp_v1;
    u8 var_v0;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a1_3;
    void *temp_a1_4;
    void *temp_t0;
    void *temp_v1_2;
    void *var_v0_3;

    temp_a2 = (*(s32 *)((char *)(arg0) + 0x10));
    temp_v1 = (*(s32 *)((char *)(arg0) + 0x11));
    temp_t0 = &gObjects + (temp_a2 * 0x32C);
    switch (temp_v1) {                              /* irregular */
    case 0:
        temp_v1_2 = (*(s32 *)((char *)((&gObjects + (temp_a2 * 0x32C))) + 0x31C));
        var_v0 = 0;
        if (temp_v1_2 != NULL) {
            var_v0 = (*(s32 *)((char *)(temp_v1_2) + 0x75));
        }
        if (!(var_v0 & 0x80) && (var_v0 != 0x2A) && (var_v0 != 0x2B) && ((var_v0 != 0x42) || !(D_800D2E68 & 4)) && (var_v0 != 0x2C) && ((*(s32 *)((char *)(temp_v1_2) + 0x197)) == 0) && (var_v0 != 0) && (var_v0 != 0x1F) && ((*(s32 *)((char *)(temp_t0) + 0xAD)) == 0)) {
            (*(s32 *)((char *)(arg0) + 0x11)) = 1U;
            (*(s32 *)((char *)(arg0) + 0xE)) = 0x78;
            func_10010F30(0x1EB, 0x7FFF, 0x40, 0, 0);
            return;
        }
        temp_a1 = (*(s32 *)((char *)(arg0) + 0x14));
        if (temp_a1 != NULL) {
            func_1515F10C(temp_a1, temp_a1, temp_a2, &gObjects);
            (*(s32 *)((char *)(arg0) + 0x14)) = NULL;
            return;
        }
        return;
    case 1:
        var_v0_2 = (*(s32 *)((char *)(arg0) + 0xE)) - D_800BE9E4;
        if ((var_v0_2 <= 0) || ((*(s32 *)((char *)((*(s32 *)((char *)((&gObjects + (temp_a2 * 0x32C))) + 0x31C))) + 0x75)) == 0)) {
            (*(s32 *)((char *)(arg0) + 0x11)) = 2U;
            var_v0_2 = 0;
        }
        (*(s32 *)((char *)(arg0) + 0xE)) = var_v0_2;
        temp_a1_2 = (*(s32 *)((char *)(arg0) + 0x14));
        (*(u8 *)((char *)(arg0) + 0x12)) = (u8) ((*(u8 *)((char *)(arg0) + 0x12)) + (D_800BE9E4 * 2));
        if (temp_a1_2 != NULL) {
            if ((*(s32 *)((char *)((*(s32 *)((char *)((&gObjects + (temp_a2 * 0x32C))) + 0x31C))) + 0x75)) == 5) {
                var_f2 = 85.0f;
            } else {
                var_f2 = 0.0f;
            }
            (*(s16 *)((char *)(temp_a1_2) + 0xE)) = (s16) (s32) (*(s16 *)((char *)(temp_t0) + 0x14));
            sp38 = var_f2;
            sp48 = temp_t0;
            (*(s16 *)((char *)((*(s16 *)((char *)(arg0) + 0x14))) + 0x10)) = (s16) (s32) ((func_15048A40((*(s16 *)((char *)(arg0) + 0x12)), temp_a1_2, temp_a2, &gObjects) * 15.0f) + ((*(s16 *)((char *)(temp_t0) + 0x18)) + 160.0f + (*(s16 *)((char *)(arg0) + 0x98)) + var_f2));
            (*(s16 *)((char *)((*(s16 *)((char *)(arg0) + 0x14))) + 0x12)) = (s16) (s32) (*(s16 *)((char *)(temp_t0) + 0x1C));
            return;
        }
        var_v0_3 = func_1515D5F8(0, 0, 0, 2, 0xFF, 0xFF, 0xFF, 0xFF, 0, 0);
block_38:
        (*(s32 *)((char *)(arg0) + 0x14)) = var_v0_3;
        break;
    case 2:
        if ((*(s32 *)((char *)((*(s32 *)((char *)((&gObjects + (temp_a2 * 0x32C))) + 0x31C))) + 0x75)) == 0) {
            (*(s32 *)((char *)(arg0) + 0x11)) = 0U;
        }
        temp_a1_3 = (*(s32 *)((char *)(arg0) + 0x14));
        if (temp_a1_3 != NULL) {
            func_1515F10C(temp_a1_3, temp_a1_3, temp_a2, &gObjects);
            (*(s32 *)((char *)(arg0) + 0x14)) = NULL;
            return;
        }
        break;
    case 3:
        temp_v0 = (*(s32 *)((char *)(arg0) + 0xE)) - D_800BE9E4;
        if (temp_v0 <= 0) {
            (*(s32 *)((char *)(arg0) + 0x11)) = 2U;
            (*(s32 *)((char *)(arg0) + 0xE)) = 0;
            return;
        }
        (*(s32 *)((char *)(arg0) + 0xE)) = temp_v0;
        temp_a1_4 = (*(s32 *)((char *)(arg0) + 0x14));
        (*(u8 *)((char *)(arg0) + 0x12)) = (u8) ((*(u8 *)((char *)(arg0) + 0x12)) + (D_800BE9E4 * 2));
        if (temp_a1_4 != NULL) {
            (*(s16 *)((char *)(temp_a1_4) + 0xE)) = (s16) (s32) (*(s16 *)((char *)(temp_t0) + 0x14));
            sp48 = temp_t0;
            (*(s16 *)((char *)((*(s16 *)((char *)(arg0) + 0x14))) + 0x10)) = (s16) (s32) ((func_15048A40((*(s16 *)((char *)(arg0) + 0x12)), temp_a1_4, temp_a2, &gObjects) * 15.0f) + ((*(s16 *)((char *)(temp_t0) + 0x18)) + 160.0f));
            (*(s16 *)((char *)((*(s16 *)((char *)(arg0) + 0x14))) + 0x12)) = (s16) (s32) (*(s16 *)((char *)(temp_t0) + 0x1C));
            return;
        }
        var_v0_3 = func_1515D5F8(0, 0, 0, 2, 0xFF, 0xFF, 0xFF, 0xFF, 0, 0);
        goto block_38;
    }
}

void *func_15155CFC(void *arg0, void *arg1, s32 arg2) {
    s32 sp5C;
    f32 sp54;
    void *sp3C;
    f32 var_f12;
    u8 temp_a3;
    u8 temp_v0;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_v1;
    void *var_s0;

    var_s0 = arg0;
    temp_v0 = (*(s32 *)((char *)(arg1) + 0x11));
    temp_a3 = (*(s32 *)((char *)(arg1) + 0x10));
    if (temp_v0 != 1) {
        if (temp_v0 == 3) {
            goto block_4;
        }
    } else {
block_4:
        temp_v1 = (temp_a3 * 0x32C) + &gObjects;
        if ((*(s32 *)((char *)((*(s32 *)((char *)(temp_v1) + 0x31C))) + 0x75)) == 5) {
            var_f12 = 85.0f;
        } else {
            var_f12 = 0.0f;
        }
        sp54 = var_f12;
        sp3C = temp_v1;
        sp5C = (*(s32 *)((char *)((D_800DBFF0 + (arg2 * 0x9A0))) + 0x380));
        temp_s0 = func_15096934(var_f12, var_s0, arg2, temp_a3);
        func_15043D90((Mtx *)(*(void **)&(var_f12)), 0, (*(f32 *)((char *)(arg1) + (D_800BE9C0 << 6) + 0x18)), 0, sp5C, 0, 2.25f, 2.25f, 2.25f, (*(s32 *)((char *)(temp_v1) + 0x14)));
        (*(s32 *)((char *)(temp_s0) + 0x0)) = 0xDA380003;
        temp_s0_2 = (char *)(temp_s0) + 8;
        (*(s32 *)((char *)(temp_s0) + 0x4)) = (void *) ((char *)(arg1) + (D_800BE9C0 << 6) + 0x18);
        (*(s32 *)((char *)(temp_s0) + 0x8)) = 0xD9FFFFFE;
        temp_s0_3 = (char *)(temp_s0_2) + 8;
        (*(s32 *)((char *)(temp_s0_2) + 0x4)) = 0;
        (*(s32 *)((char *)(temp_s0_2) + 0x8)) = 0xDE000000;
        temp_s0_4 = (char *)(temp_s0_3) + 8;
        var_s0 = (char *)(temp_s0_4) + 8;
        (*(s32 *)((char *)(temp_s0_3) + 0x4)) = (s32) *D_800E03E0;
        (*(s32 *)((char *)(temp_s0_4) + 0x4)) = 1;
        (*(s32 *)((char *)(temp_s0_3) + 0x8)) = 0xD9FFFFFF;
    }
    return var_s0;
}

void func_15155EF8(void *arg0) {
    void *temp_a2;

    temp_a2 = (*(s32 *)((char *)(arg0) + 0x14));
    if (temp_a2 != NULL) {
        func_1515F10C(temp_a2, arg0, (u8) temp_a2);
    }
    func_15169804(arg0, arg0);
    func_1518CA04(0xA6);
}

void func_15155F3C(void) {
    u8 temp_v1;
    void *temp_v0;

    temp_v0 = func_15155FD4((s32) gCurrentObjectIndex);
    if (temp_v0 != NULL) {
        temp_v1 = (*(s32 *)((char *)(temp_v0) + 0x11));
        if (temp_v1 == 2) {
            (*(s32 *)((char *)(temp_v0) + 0x11)) = 0U;
            return;
        }
        if (temp_v1 == 3) {
            (*(s32 *)((char *)(temp_v0) + 0x11)) = 2U;
        }
    }
}

void func_15155F90(void) {
    void *temp_v0;

    temp_v0 = func_15155FD4((s32) gCurrentObjectIndex);
    if ((temp_v0 != NULL) && ((*(s32 *)((char *)(temp_v0) + 0x11)) == 3)) {
        (*(s32 *)((char *)(temp_v0) + 0x11)) = 1U;
    }
}

void *func_15155FD4(s32 arg0) {
    void * *var_a1;
    void *var_v1;

    var_a1 = &D_800DCE50;
loop_1:
    var_v1 = (*(s32 *)((char *)(var_a1) + 0x140));
    var_a1 = (char *)(var_a1) + 0x1A0;
    if (var_v1 != NULL) {
loop_2:
        if (arg0 == (*(s32 *)((char *)(var_v1) + 0x10))) {
            return var_v1;
        }
        var_v1 = (*(s32 *)((char *)(var_v1) + 0x8));
        if (var_v1 == NULL) {
            goto block_5;
        }
        goto loop_2;
    }
block_5:
    if ((char *)(var_a1) == (char *)(&D_800DD190)) {
        return NULL;
    }
    goto loop_1;
}

void func_15156028(void *arg0, void *arg1, s32 arg2) {
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_lo_3;
    s32 temp_t6;
    u8 temp_a0;

    temp_t6 = arg2 & 0xFF;
    if (temp_t6 == 0) {
        temp_lo = (s32) ((char *)((*(s32 *)((char *)(arg1) + 0x0))) - (char *)(&gObjects)) / 812;
        if ((temp_lo >= 0) && (temp_lo < 0x19) && (temp_lo == (*(s32 *)((char *)(arg0) + 0x10)))) {
            func_1516972C(arg0, 0x32C, arg0);
        }
    } else if ((temp_t6 == 0x2D) && (temp_lo_2 = (s32) ((char *)((*(s32 *)((char *)(arg1) + 0x0))) - (char *)(&gObjects)) / 812, temp_lo_3 = (s32) ((char *)((*(s32 *)((char *)(arg1) + 0x4))) - (char *)(&gObjects)) / 812, (temp_lo_2 >= 0)) && (temp_lo_2 < 0x19) && (temp_lo_3 >= 0) && (temp_lo_3 < 0x19)) {
        temp_a0 = (*(s32 *)((char *)(arg0) + 0x10));
        if (temp_lo_2 == temp_a0) {
            (*(u8 *)((char *)(arg0) + 0x10)) = (u8) temp_lo_3;
            return;
        }
        if (temp_lo_3 == temp_a0) {
            (*(u8 *)((char *)(arg0) + 0x10)) = (u8) temp_lo_2;
        }
    }
}
