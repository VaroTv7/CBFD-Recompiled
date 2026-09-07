/**
 * Auto-decompiled from asm/1E6B40.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


f32 func_150489B0();                              /* extern */
f32 nanf();                             /* extern */
u8 random_u32();                    /* extern */
void *func_15167A68();        /* extern */
void * func_15167D84();          /* extern */
void * func_15171D4C(); /* extern */
extern s32 D_8008CA4C;
extern f32 D_800AA580;
extern f32 D_800AA584;
extern f32 D_800AA588;
extern f32 D_800AA58C;
void func_151B9690(s32 arg0, s32 arg1, s16 arg2, s16 arg3, s16 arg4, f32 arg6, s16 arg7, s16 arg8, s16 arg9, s16 arg10, s16 arg11, s16 arg12, s16 arg13, s16 arg14, u8 arg15, s32 arg16);

void func_151B9690(s32 arg0, s32 arg1, s16 arg2, s16 arg3, s16 arg4, f32 arg6, s16 arg7, s16 arg8, s16 arg9, s16 arg10, s16 arg11, s16 arg12, s16 arg13, s16 arg14, u8 arg15, s32 arg16) {
    s16 sp8C;
    s8 sp87;
    u8 sp86;
    u8 sp85;
    u8 sp84;
    u8 sp83;
    s8 sp82;
    s16 sp80;
    s16 sp7E;
    s16 sp7C;
    s16 sp7A;
    s16 sp78;
    s8 sp77;
    s16 sp72;
    s16 sp70;
    s16 sp6E;
    s16 sp6C;
    s16 sp6A;
    s16 sp68;
    s16 sp66;
    s16 sp64;
    s32 sp60;
    s32 sp5C;
    s32 sp58;
    s32 sp54;
    f32 sp40;
    f32 sp3C;
    f32 sp34;
    u8 sp2F;
    u8 sp2E;
    u8 sp2D;
    f32 sp24;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f2;
    f32 temp_f4;
    s16 temp_a1;
    s16 var_v1;
    u8 var_t0;
    u8 var_t1;
    u8 var_v1_2;

    temp_f14 = arg6 + 180.0f;
    sp54 = (s32) arg3;
    arg6 = temp_f14;
    temp_f14_2 = arg6 + (f32) ((random_u32(temp_f14) % (u32) arg7) - (arg7 >> 1));
    temp_f12 = temp_f14_2 * D_800AA580;
    sp24 = temp_f12;
    sp40 = sinf(temp_f12);
    var_v1 = arg11;
    sp3C = cosf(temp_f12);
    temp_f2 = (f32) arg10;
    if (var_v1 == 0) {
        var_v1 = 1;
    }
    arg11 = var_v1;
    sp24 = temp_f2;
    temp_f0 = (f32) arg12;
    temp_f4 = (f32) ((random_u32() % (u32) arg11) - (arg11 >> 1));
    arg3 += 1;
    temp_f12_2 = temp_f2 + temp_f4;
    sp34 = temp_f12_2;
    arg2 = (s16) (s32) ((f32) arg2 + (temp_f0 * sp40));
    arg4 = (s16) (s32) ((f32) arg4 + (temp_f0 * sp3C));
    temp_a1 = arg8 + ((random_u32(temp_f12_2) % (u32) arg9) - (arg9 >> 1));
    if ((arg1 != 0) && (arg1 != 1)) {
        var_v1_2 = 0x68;
        switch (arg1) {                             /* irregular */
        case 2:
            var_t0 = 0x38;
            var_t1 = 0x10;
            break;
        }
    } else {
        var_t1 = 0xFF;
        var_t0 = 0xFF;
        var_v1_2 = 0xFF;
    }
    sp5C = (arg13 << 0x10) | (sp54 & 0xFFFF);
    sp58 = *(&D_8008CA4C + (arg0 * 4));
    sp66 = 0x100;
    sp68 = arg2;
    sp60 = arg1;
    sp64 = 0;
    sp72 = arg14;
    sp77 = 0;
    sp78 = temp_a1;
    sp7A = -0xA0;
    sp7C = arg14;
    sp7E = arg14;
    sp80 = 0x190;
    sp82 = 0;
    sp2F = var_v1_2;
    sp2E = var_t0;
    sp2D = var_t1;
    sp6A = arg3;
    sp6C = arg4;
    sp6E = (s16) (s32) (temp_f12_2 * sp40);
    sp70 = (s16) (s32) (temp_f12_2 * sp3C);
    sp83 = random_u32(temp_f12_2, arg1, temp_a1);
    sp87 = 0xFF;
    sp8C = 0;
    sp84 = var_v1_2;
    sp85 = var_t0;
    sp86 = var_t1;
    func_15167D84(&sp58, 0, 0, -1, (s32) arg15, arg16);
}

void func_151B9964(void *arg0) {
    f32 sp5C;
    s16 sp5A;
    s32 sp50;
    u8 sp4F;
    s16 temp_a1;
    s16 temp_v0;
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_v1;
    s32 var_v0;
    u8 temp_t9;

    temp_a2 = (*(s32 *)((char *)(arg0) + 0x18));
    if (temp_a2 == 1) {
        temp_t9 = ((*(s32 *)((char *)(arg0) + 0x3B)) + (D_800BE9E4 * 4) + (D_800BE9E4 * 2)) & 0xFF;
        (*(s32 *)((char *)(arg0) + 0x3B)) = temp_t9;
        (*(s16 *)((char *)(arg0) + 0x2A)) = (s16) (s32) ((f32) (*(s16 *)((char *)(arg0) + 0x2A)) * D_800AA584);
        sp50 = temp_a2;
        sp4F = temp_t9;
        sp5C = (f32) (*(f32 *)((char *)(arg0) + 0x2A));
        (*(s16 *)((char *)(arg0) + 0x34)) = (s16) (s32) ((func_15048A40(temp_t9, temp_a2) + 3.0f) * sp5C * D_800AA588);
        (*(s16 *)((char *)(arg0) + 0x36)) = (s16) (s32) ((func_150489B0(sp4F) + 3.0f) * sp5C * D_800AA58C);
    } else {
        temp_a1 = (*(s32 *)((char *)(arg0) + 0x34));
        temp_a0 = (s32) (*(s32 *)((char *)(arg0) + 0x14)) >> 0x10;
        if (temp_a0 != temp_a1) {
            var_v0 = temp_a1 - (D_800BE9E4 * 4);
            if (var_v0 < temp_a0) {
                var_v0 = temp_a0;
            }
            (*(s16 *)((char *)(arg0) + 0x36)) = (s16) var_v0;
            (*(s16 *)((char *)(arg0) + 0x34)) = (s16) var_v0;
        }
    }
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x22));
    if ((s16) (*(s16 *)((char *)(arg0) + 0x14)) >= temp_v0) {
        (*(s32 *)((char *)(arg0) + 0x38)) = 0;
        if (temp_a2 == 0) {
            sp5A = (s16) (*(s16 *)((char *)(arg0) + 0x14));
            if ((random_u32((f32) (s16) (*(f32 *)((char *)(arg0) + 0x14))) & 0xFF) < 0x40) {
                func_15171D4C((f32) (*(f32 *)((char *)(arg0) + 0x20)), (f32) sp5A, (f32) (*(f32 *)((char *)(arg0) + 0x24)), 0xA, 0, 0x13, 0.0f, 0, 0x32, 0xF, 0x100, 0, (s32) (*(f32 *)((char *)(arg0) + 0xC)), (s32) (*(f32 *)((char *)(arg0) + 0x1)));
            }
            if ((random_u32() & 0xFF) < 0xF) {
                random_u32();
                func_10010F88(0x70, 0x1388, 0, 0, 0, (s32) (*(s32 *)((char *)(arg0) + 0x20)), (s32) sp5A, (s32) (*(s32 *)((char *)(arg0) + 0x24)), 0x1F4, 0x7D0);
            }
        }
    } else {
        temp_v1 = temp_v0 - (s16) (*(s16 *)((char *)(arg0) + 0x14));
        if (((*(s32 *)((char *)(arg0) + 0x30)) < 0) && (temp_v1 < 0x40)) {
            (*(s8 *)((char *)(arg0) + 0x3F)) = (s8) (temp_v1 * 4);
        }
    }
}

void func_151B9BF0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, s32 arg11, s32 arg12, s32 arg13, s32 arg14, s32 arg15) {
    void *temp_v0;

    temp_v0 = func_15167A68(7, arg15, 0x2C, 0, (s32) arg14, 1);
    if (temp_v0 != NULL) {
        (*(s8 *)((char *)(temp_v0) + 0x14)) = (s8) arg0;
        (*(s8 *)((char *)(temp_v0) + 0x15)) = (s8) arg1;
        (*(s32 *)((char *)(temp_v0) + 0x16)) = arg2;
        (*(s32 *)((char *)(temp_v0) + 0x18)) = arg3;
        (*(s32 *)((char *)(temp_v0) + 0x1A)) = arg4;
        (*(s32 *)((char *)(temp_v0) + 0x1C)) = arg5;
        (*(s32 *)((char *)(temp_v0) + 0x1E)) = arg6;
        (*(s32 *)((char *)(temp_v0) + 0x20)) = arg7;
        (*(s32 *)((char *)(temp_v0) + 0x22)) = arg8;
        (*(s32 *)((char *)(temp_v0) + 0x24)) = arg9;
        (*(s32 *)((char *)(temp_v0) + 0x26)) = arg10;
        (*(s32 *)((char *)(temp_v0) + 0x28)) = arg11;
        (*(s32 *)((char *)(temp_v0) + 0x2A)) = arg12;
        (*(s32 *)((char *)(temp_v0) + 0x10)) = arg13;
    }
}

void func_151B9CB0(void *arg0) {
    s16 temp_v0_2;
    s16 var_s2;
    s16 var_s3;
    s16 var_s4;
    s32 var_s1;
    void *temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x10));
    if (temp_v0 == NULL) {
        var_s2 = (*(s32 *)((char *)(arg0) + 0x16));
        var_s3 = (*(s32 *)((char *)(arg0) + 0x18));
        var_s4 = (*(s32 *)((char *)(arg0) + 0x1A));
    } else {
        var_s2 = (s16) (s32) (*(s16 *)((char *)(temp_v0) + 0x0));
        var_s3 = (s16) (s32) (*(s16 *)((char *)(temp_v0) + 0x4));
        var_s4 = (s16) (s32) (*(s16 *)((char *)(temp_v0) + 0x8));
    }
    var_s1 = 0;
    if ((*(s32 *)((char *)(arg0) + 0x28)) > 0) {
        do {
            func_151B9690((s32) (*(s32 *)((char *)(arg0) + 0x14)), (s32) (*(s32 *)((char *)(arg0) + 0x15)), var_s2, var_s3, (s16) (s32) var_s4, nanf(""), 0, 0x168, (s16) (s32) (*(s32 *)((char *)(arg0) + 0x1C)), (s16) (s32) (*(s32 *)((char *)(arg0) + 0x1E)), (s16) (s32) (*(s32 *)((char *)(arg0) + 0x20)), (s16) (s32) (*(s32 *)((char *)(arg0) + 0x22)), 0xF, (s16) (s32) (*(s32 *)((char *)(arg0) + 0x24)), (u8) (s32) (*(s32 *)((char *)(arg0) + 0x26)), (s32) (*(s32 *)((char *)(arg0) + 0xC)));
            var_s1 += 1;
        } while (var_s1 < (*(s32 *)((char *)(arg0) + 0x28)));
        var_s1 = 0;
    }
    do {
        func_151B9690((s32) (*(s32 *)((char *)(arg0) + 0x14)), (s32) (*(s32 *)((char *)(arg0) + 0x15)), var_s2, var_s3, (s16) (s32) var_s4, nanf(""), 0, 0x168, (s16) ((s32) ((*(s32 *)((char *)(arg0) + 0x1C)) * 3) / 2), (s16) ((*(s32 *)((char *)(arg0) + 0x1E)) * 2), (s16) (s32) (*(s32 *)((char *)(arg0) + 0x20)), (s16) (s32) (*(s32 *)((char *)(arg0) + 0x22)), 0xF, (s16) (s32) (*(s32 *)((char *)(arg0) + 0x24)), (u8) (s32) (*(s32 *)((char *)(arg0) + 0x26)), (s32) (*(s32 *)((char *)(arg0) + 0xC)));
        var_s1 += 1;
    } while (var_s1 != 4);
    temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x2A)) - D_800BE9E4;
    if (temp_v0_2 < 0) {
        func_1516972C(arg0);
        return;
    }
    (*(s32 *)((char *)(arg0) + 0x2A)) = temp_v0_2;
}
