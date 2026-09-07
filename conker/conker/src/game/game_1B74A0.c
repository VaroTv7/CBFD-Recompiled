/**
 * Auto-decompiled from asm/1B74A0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_150A7960(); /* extern */
s32 func_151407D0(); /* extern */
void * memcpy();                              /* extern */
extern s32 D_8008D5A0;
extern f32 D_800A73C0;
extern f32 D_800A73C4;
extern f32 D_800A73C8;

s32 func_15189FF0(s32 arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 sp34;
    s32 temp_v0;

    (*(s32 *)((char *)(arg1) + 0x58)) = 0xB;
    temp_v0 = func_151407D0(arg1, 0x80, arg0, arg3 & 0xFF, (s32) arg4, (s32) arg5, (s32) arg6, -1, 0xFF, 1);
    if (temp_v0 != 0) {
        sp34 = temp_v0;
        memcpy(temp_v0 + 0x170, arg2, 0x20);
        return sp34;
    }
    return 0;
}

s32 func_1518A094(void *arg0) {
    u8 sp4B;
    s32 sp44;
    void *sp3C;
    s32 temp_a0;
    s32 temp_t0;
    s32 temp_t3;
    s32 temp_v0;
    s8 temp_a2;
    void *temp_v1;
    void *var_v0;
    void *var_v1;

    temp_v1 = (char *)(arg0) + 0x170;
    if ((*(s32 *)((char *)(arg0) + 0x188)) == 0) {
        sp3C = temp_v1;
        temp_v0 = func_15083E90((*(s32 *)((char *)(temp_v1) + 0x1D)));
        (*(s32 *)((char *)(temp_v1) + 0x18)) = temp_v0;
        if (temp_v0 == 0) {
            return 0;
        }
    }
    var_v1 = (char *)(arg0) + 0x170;
    var_v0 = (*(s32 *)((char *)(var_v1) + 0x18));
    if (((*(s32 *)((char *)(var_v0) + 0x0)) != 0) && ((*(s32 *)((char *)(var_v1) + 0x1D)) == (*(s32 *)((char *)(var_v0) + 0x3B)))) {
        temp_a2 = (*(s32 *)((char *)(var_v1) + 0x1E));
        if (temp_a2 != -1) {
            sp3C = var_v1;
            var_v1 = sp3C;
            if (((s32 (*)())((char *)(&D_8008D5A0 + (temp_a2 * 4))))(arg0, &sp4B, temp_a2) != 0) {
                if (sp4B == 0) {

                } else {
                    var_v0 = (*(s32 *)((char *)(var_v1) + 0x18));
                    goto block_11;
                }
                goto block_15;
            }
            return 0;
        }
block_11:
        temp_t0 = (*(s32 *)((char *)(var_v0) + 0x1D4));
        if (temp_t0 != 0) {
            temp_a0 = temp_t0 + ((*(s32 *)((char *)(var_v1) + 0x1C)) << 6);
            sp44 = temp_a0;
            sp3C = var_v1;
            func_150A7960(temp_a0, (*(s32 *)((char *)(var_v1) + 0x0)), (*(s32 *)((char *)(var_v1) + 0x4)), (*(s32 *)((char *)(var_v1) + 0x8)), (char *)(arg0) + 0x34, (char *)(arg0) + 0x38, (char *)(arg0) + 0x3C);
            func_150A7960(temp_a0, (*(s32 *)((char *)(var_v1) + 0xC)), (*(s32 *)((char *)(var_v1) + 0x10)), (*(s32 *)((char *)(var_v1) + 0x14)), (char *)(arg0) + 0x40, (char *)(arg0) + 0x44, (char *)(arg0) + 0x48);
            temp_t3 = (*(s32 *)((char *)(arg0) + 0x58)) | 2;
            (*(s32 *)((char *)(arg0) + 0x58)) = temp_t3;
            (*(s32 *)((char *)(arg0) + 0x58)) = (s32) (temp_t3 & ~4);
        } else {
            (*(s32 *)((char *)(arg0) + 0x58)) = (s32) ((*(s32 *)((char *)(arg0) + 0x58)) & ~2);
        }
block_15:
        return 1;
    }
    return 0;
}

s32 func_1518A214(void *arg0, s8 *arg1) {
    s32 temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;

    temp_v0 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x188))) + 0x68)) - 0xF;
    switch (temp_v0) {                              /* irregular */
    default:
        temp_v0_2 = (char *)(arg0) + 0x110;
        (*(f32 *)((char *)(temp_v0_2) + 0x18)) = (f32) D_800A73C0;
        (*(f32 *)((char *)(temp_v0_2) + 0x1C)) = (f32) D_800A73C0;
        (*(s32 *)((char *)(arg0) + 0x2A)) = 0;
        (*(s32 *)((char *)(arg0) + 0x29)) = 0;
        (*(s32 *)((char *)(arg0) + 0x28)) = 0xFF;
        *arg1 = 1;
        break;
    case 0:
        (*(s32 *)((char *)(arg0) + 0x58)) = (s32) ((*(s32 *)((char *)(arg0) + 0x58)) & ~2);
        *arg1 = 0;
        break;
    case 1:
        temp_v0_3 = (char *)(arg0) + 0x110;
        (*(f32 *)((char *)(temp_v0_3) + 0x18)) = (f32) D_800A73C4;
        (*(f32 *)((char *)(temp_v0_3) + 0x1C)) = (f32) D_800A73C4;
        (*(s32 *)((char *)(arg0) + 0x28)) = 0x80;
        (*(s32 *)((char *)(arg0) + 0x29)) = 0;
        (*(s32 *)((char *)(arg0) + 0x2A)) = 0;
        *arg1 = 1;
        break;
    case 2:
        temp_v0_4 = (char *)(arg0) + 0x110;
        (*(f32 *)((char *)(temp_v0_4) + 0x18)) = (f32) D_800A73C8;
        (*(f32 *)((char *)(temp_v0_4) + 0x1C)) = (f32) D_800A73C8;
        (*(s32 *)((char *)(arg0) + 0x28)) = 0xFF;
        (*(s32 *)((char *)(arg0) + 0x29)) = 0;
        (*(s32 *)((char *)(arg0) + 0x2A)) = 0;
        *arg1 = 1;
        break;
    }
    return 1;
}

s32 func_1518A2E8(void *arg0, s8 *arg1) {
    if ((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x188))) + 0x6A)) != 0) {
        (*(s32 *)((char *)(arg0) + 0x58)) = (s32) ((*(s32 *)((char *)(arg0) + 0x58)) & ~2);
        *arg1 = 0;
        return 1;
    }
    *arg1 = 1;
    return 1;
}

s32 func_1518A324(void *arg0, s8 *arg1) {
    if ((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x188))) + 0x6F)) == 0) {
        (*(s32 *)((char *)(arg0) + 0x58)) = (s32) ((*(s32 *)((char *)(arg0) + 0x58)) & ~2);
        *arg1 = 0;
        return 1;
    }
    *arg1 = 1;
    return 1;
}

void func_1518A360(s32 arg0, void *arg1, s32 arg2) {
    s32 temp_a2;
    s32 temp_v1;
    void *temp_v0;

    temp_v0 = arg0 + 0x170;
    if ((arg2 & 0xFF) == 0x2D) {
        temp_v1 = (*(s32 *)((char *)(arg1) + 0x0));
        temp_a2 = (*(s32 *)((char *)(temp_v0) + 0x18));
        if (temp_v1 == temp_a2) {
            (*(s32 *)((char *)(temp_v0) + 0x18)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
            (*(u8 *)((char *)(temp_v0) + 0x1D)) = (u8) (*(u8 *)((char *)(arg1) + 0x9));
            return;
        }
        if ((*(s32 *)((char *)(arg1) + 0x4)) == temp_a2) {
            (*(s32 *)((char *)(temp_v0) + 0x18)) = temp_v1;
            (*(u8 *)((char *)(temp_v0) + 0x1D)) = (u8) (*(u8 *)((char *)(arg1) + 0x8));
        }
    }
}
