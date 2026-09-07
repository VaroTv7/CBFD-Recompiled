/**
 * Auto-decompiled from asm/1A1B40.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 random_u32();                             /* extern */
void * func_15167D84();          /* extern */
extern s32 D_8008CA4C;
extern f32 D_800A7160;
extern f32 D_800A7164;

void func_15174690(s32 arg0, s32 arg1, s32 arg2, u32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8) {
    f32 sp8C;
    f32 sp84;
    s32 sp7C;
    s16 sp74;
    s8 sp6F;
    s8 sp6E;
    s8 sp6D;
    s8 sp6C;
    s8 sp6B;
    s8 sp6A;
    s16 sp68;
    s16 sp66;
    s16 sp64;
    s16 sp62;
    s16 sp60;
    s8 sp5F;
    s16 sp5A;
    s16 sp58;
    s16 sp56;
    s16 sp54;
    s16 sp52;
    s16 sp50;
    s16 sp4E;
    s16 sp4C;
    s32 sp48;
    s32 sp44;
    s32 sp40;
    f32 temp_f12;
    f32 temp_f20;
    f32 temp_f22;
    f32 var_f20;
    f32 var_f22;
    s32 temp_v0_2;
    s32 temp_v0_3;
    void *temp_v0;

    temp_v0 = (arg0 * 0x32C) + &gObjects;
    if (((*(s32 *)((char *)(temp_v0) + 0xAD)) == 0) && (D_800A7160 == (*(s32 *)((char *)(temp_v0) + 0x118)))) {
        temp_f20 = (*(s32 *)((char *)(temp_v0) + 0x14));
        temp_f12 = (*(s32 *)((char *)(temp_v0) + 0x40)) * D_800A7164;
        temp_f22 = (*(s32 *)((char *)(temp_v0) + 0x1C));
        sp84 = (*(s32 *)((char *)(temp_v0) + 0x18)) + 5.0f;
        sp8C = temp_f12;
        var_f20 = temp_f20 - (10.0f * sinf(temp_f12));
        var_f22 = temp_f22 - (10.0f * cosf(temp_f12));
        if (arg1 != 0) {
            temp_v0_2 = random_u32();
            sp7C = temp_v0_2;
            var_f20 += (f32) (temp_v0_2 % arg1);
            temp_v0_3 = random_u32(temp_v0_2);
            sp7C = temp_v0_3;
            var_f22 += (f32) (temp_v0_3 % arg1);
        }
        if (arg3 != 0) {
            arg2 += random_u32() % arg3;
        }
        sp44 = arg2;
        sp52 = (s16) (s32) sp84;
        sp4E = 0x100;
        sp40 = D_8008CA4C;
        sp48 = arg5;
        sp50 = (s16) (s32) var_f20;
        sp4C = 0;
        sp56 = 0;
        sp58 = 0;
        sp5A = 0;
        sp5F = 5;
        sp62 = 0;
        sp68 = 0x200;
        sp6A = 0;
        sp6B = 0;
        sp6C = 0xFF;
        sp6D = 0xFF;
        sp6E = 0xFF;
        sp6F = 0xFF;
        sp74 = 0;
        sp64 = (s16) arg4;
        sp66 = (s16) arg4;
        sp54 = (s16) (s32) var_f22;
        sp60 = (s16) arg6;
        func_15167D84(&sp40, 0, 0, -1, (s32) arg7, arg8);
    }
}

void func_15174920(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;
    u8 var_v0;

    var_v0 = (*(s32 *)((char *)(arg0) + 0x3F));
    if ((s32) var_v0 >= 0xC9) {
        var_v0 = 0xC8;
    }
    temp_v0 = var_v0 - (D_800BE9E4 * (*(s32 *)((char *)(arg0) + 0x18)));
    if (temp_v0 < 0) {
        (*(s32 *)((char *)(arg0) + 0x38)) = 0;
        return;
    }
    temp_v1 = (*(s32 *)((char *)(arg0) + 0x14));
    (*(u8 *)((char *)(arg0) + 0x3F)) = (u8) temp_v0;
    (*(s16 *)((char *)(arg0) + 0x34)) = (s16) ((*(s16 *)((char *)(arg0) + 0x34)) + temp_v1);
    (*(s16 *)((char *)(arg0) + 0x36)) = (s16) ((*(s16 *)((char *)(arg0) + 0x36)) + ((s32) (temp_v1 * 8) / 7));
}
