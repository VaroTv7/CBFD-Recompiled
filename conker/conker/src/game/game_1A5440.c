/**
 * Auto-decompiled from asm/1A5440.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


f32 func_150489B0();                             /* extern */
s32 func_150490A8(); /* extern */
s32 func_150A6360(); /* extern */
s32 random_u32();                                /* extern */
void *func_15167A68();          /* extern */
s32 func_15168118();                             /* extern */
extern s32 D_8008CA4C;
extern s32 D_8008CA64;
extern f32 D_800A71E0;
extern f32 D_800A71E4;
extern s32 D_800D9C10;
extern void *D_800DCF38;
extern void *D_800DCF3C;

void func_15177F90(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg7, s32 arg8, s32 arg9, s32 arg10) {
    s16 spEC;
    s8 spE7;
    s8 spE6;
    s8 spE5;
    s8 spE4;
    s8 spE3;
    s8 spE2;
    s16 spE0;
    s16 spDE;
    s16 spDC;
    s16 spDA;
    s16 spD8;
    s8 spD7;
    s16 spD2;
    s16 spD0;
    s16 spCE;
    s16 spCC;
    s16 spCA;
    s16 spC8;
    s16 spC6;
    s16 spC4;
    void *spBC;
    s32 spB8;
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f22;
    f32 var_f10;
    s16 temp_s2_2;
    s16 var_v1;
    s32 temp_s0;
    s32 temp_t1;
    s32 var_s3;
    s8 temp_s2;
    void *temp_v0;
    void *temp_v0_2;

    temp_s2 = arg0 & 0xFF;
    temp_v0 = func_15167A68(0x3A, 0, 0x38, 0, (s32) arg8, 1);
    if (temp_v0 != NULL) {
        if (arg10 == 0) {
            var_v1 = 0x118;
        } else {
            var_v1 = 0x8C;
        }
        if (arg1 != 0) {
            (*(s32 *)((char *)(temp_v0) + 0x10)) = arg1;
            (*(s32 *)((char *)(temp_v0) + 0x14)) = 0x80000000;
        } else {
            (*(s32 *)((char *)(temp_v0) + 0x10)) = (s32) ((arg3 << 0x10) | (arg4 & 0xFFFF));
            (*(s32 *)((char *)(temp_v0) + 0x14)) = (s32) (arg5 << 0x10);
        }
        (*(s32 *)((char *)(temp_v0) + 0x18)) = arg3;
        (*(s32 *)((char *)(temp_v0) + 0x1C)) = arg4;
        (*(s32 *)((char *)(temp_v0) + 0x20)) = arg5;
        (*(s32 *)((char *)(temp_v0) + 0x30)) = 0;
        (*(s32 *)((char *)(temp_v0) + 0x32)) = 0x320;
        (*(s32 *)((char *)(temp_v0) + 0x35)) = temp_s2;
        (*(s8 *)((char *)(temp_v0) + 0x34)) = (s8) (arg2 & 0xFF);
        (*(s32 *)((char *)(temp_v0) + 0x2E)) = 0;
        (*(s8 *)((char *)(temp_v0) + 0x37)) = (s8) arg9;
        spBC = temp_v0;
        spCE = 0;
        spD0 = 0;
        spD2 = 0;
        spD7 = 6;
        spD8 = 0;
        spDA = 0;
        spDC = var_v1;
        spDE = var_v1;
        spE2 = 0;
        spE4 = 0xFF;
        spE5 = 0xFF;
        spE6 = 0xFF;
        spE7 = 0xFF;
        spEC = 0;
        var_s3 = 0;
        spB8 = D_8008CA64;
        spE0 = (s16) arg7;
        if (temp_s2 > 0) {
loop_9:
            temp_s0 = random_u32() & 0xFF;
            temp_f20 = func_15048A40(temp_s0 & 0xFF);
            temp_f22 = func_150489B0(temp_s0 & 0xFF);
            temp_t1 = random_u32() & 0xFFFF;
            var_f10 = (f32) temp_t1;
            if (temp_t1 < 0) {
                var_f10 += 4294967296.0f;
            }
            temp_f0 = var_f10 * 50.0f * 0.000015258789f;
            temp_s2_2 = ((random_u32() & 0xFF) + arg4) - 0x4E;
            spE3 = (random_u32() & 7) + 7;
            spC4 = 0;
            spC6 = 0;
            spC8 = (s16) (s32) ((f32) arg3 + (temp_f0 * temp_f20));
            spCA = temp_s2_2;
            spCC = (s16) (s32) ((f32) arg5 + (temp_f0 * temp_f22));
            temp_v0_2 = func_15167A68(0x3B, 0, 0x4C, 0, (s32) arg8, 1);
            if (temp_v0_2 != NULL) {
                bcopy(&spB8, (char *)(temp_v0_2) + 0x10, 0x38);
                var_s3 += 1;
                (*(s32 *)((char *)(temp_v0_2) + 0x48)) = -1;
                if (var_s3 != temp_s2) {
                    goto loop_9;
                }
            }
        }
    }
}

void func_15178268(void *arg0) {
    s32 sp80;
    s32 sp78;
    s32 sp74;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    s32 sp58;
    f32 sp54;
    f32 sp4C;
    f32 sp40;
    f32 sp38;
    u8 sp37;
    void *sp2C;
    s32 sp28;
    s32 sp1C;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    s16 temp_v0_3;
    s16 var_a2;
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a2_2;
    s32 var_a3;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    u8 temp_t4;
    u8 var_v0;
    u8 var_v1_2;
    void *var_t0;

    var_t0 = (*(s32 *)((char *)(arg0) + 0x14));
    var_a2 = (*(s32 *)((char *)(arg0) + 0x2A));
    temp_f2 = (f32) (*(f32 *)((char *)(var_t0) + 0x18));
    sp64 = temp_f2;
    sp60 = (f32) (*(f32 *)((char *)(var_t0) + 0x1C));
    temp_f12 = (f32) (*(f32 *)((char *)(var_t0) + 0x20));
    sp5C = temp_f12;
    if ((*(s32 *)((char *)(var_t0) + 0x32)) >= 0x321) {
        var_a3 = 1;
    } else {
        var_a3 = 0;
    }
    sp60 += (f32) (*(f32 *)((char *)(var_t0) + 0x30));
    temp_f14 = sp64 - temp_f2;
    temp_f16 = sp5C - temp_f12;
    temp_f0 = sqrtf((temp_f14 * temp_f14) + (temp_f16 * temp_f16));
    if (temp_f0 > 100.0f) {
        temp_f18 = 100.0f / temp_f0;
        sp64 = (temp_f14 * temp_f18) + temp_f2;
        sp5C = (temp_f16 * temp_f18) + temp_f12;
    }
    sp4C = sp64 - (f32) (*(f32 *)((char *)(arg0) + 0x20));
    sp54 = sp5C - (f32) (*(f32 *)((char *)(arg0) + 0x24));
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x18));
    temp_v1 = temp_v0 & 0xF;
    if (temp_v1 == 0) {
        sp78 = (s32) var_a2;
        sp28 = var_a3;
        sp2C = var_t0;
        sp74 = func_150490A8(temp_f12, temp_f14, &sp4C, arg0, var_a2, var_a3);
        var_a3 = sp28;
        var_a0 = (sp74 + (random_u32() & 0x1F)) - 0xF;
        var_a2 = (s16) sp78;
        var_t0 = sp2C;
        if (var_a3 == 0) {
            var_v1 = 0xA;
        } else {
            var_v1 = 2;
        }
    } else {
        var_v1 = temp_v1 - 1;
        var_a0 = (temp_v0 >> 4) & 0xFF;
    }
    (*(s32 *)((char *)(arg0) + 0x18)) = (s32) (((var_a0 & 0xFF) * 0x10) | var_v1);
    var_v0 = (*(s32 *)((char *)(arg0) + 0x3B));
    if (var_a3 != 0) {
        var_v0 *= 2;
    }
    if (var_a2 < var_a0) {
        var_v1_2 = var_v0;
    } else {
        var_v1_2 = (u8) -(s32) var_v0;
    }
    temp_v0_2 = var_a0 - var_a2;
    if (temp_v0_2 < 0) {
        var_a0_2 = -temp_v0_2;
    } else {
        var_a0_2 = temp_v0_2;
    }
    if (var_a0_2 >= 0x80) {
        var_v1_2 = (u8) -(s32) var_v1_2;
    }
    var_a2_2 = var_a2 + var_v1_2;
    if (var_a2_2 < 0) {
        var_a2_2 += 0x100;
    } else if (var_a2_2 >= 0x100) {
        var_a2_2 -= 0x100;
    }
    temp_a0 = var_a2_2 & 0xFF;
    sp1C = temp_a0;
    sp78 = var_a2_2;
    sp38 = (f32) (*(f32 *)((char *)(var_t0) + 0x32));
    sp80 = (s32) (func_15048A40(temp_a0, arg0, var_a2_2, var_a3) * sp38);
    temp_f10 = -func_150489B0(temp_a0);
    (*(s16 *)((char *)(arg0) + 0x26)) = (s16) sp80;
    (*(s16 *)((char *)(arg0) + 0x2A)) = (s16) var_a2_2;
    (*(s16 *)((char *)(arg0) + 0x28)) = (s16) (s32) (temp_f10 * sp38);
    temp_v1_2 = (random_u32() & 0x7F) + 0x64;
    sp58 = temp_v1_2;
    if (((f32) (random_u32() & 0x3F) + (sp60 + 50.0f)) < (f32) (*(f32 *)((char *)(arg0) + 0x22))) {
        (*(s16 *)((char *)(arg0) + 0x32)) = (s16) -temp_v1_2;
    } else {
        (*(s16 *)((char *)(arg0) + 0x32)) = (s16) temp_v1_2;
    }
    temp_v0_3 = (*(s32 *)((char *)(arg0) + 0x30));
    if (temp_v0_3 >= 0x401) {
        (*(s32 *)((char *)(arg0) + 0x30)) = 0x400;
    } else if (temp_v0_3 < -0x400) {
        (*(s32 *)((char *)(arg0) + 0x30)) = -0x400;
    }
    temp_t4 = (u32) (D_800DBFF0->unk380 * D_800A71E0) & 0xFF;
    sp37 = temp_t4;
    sp40 = func_15048A40((s32) temp_t4, arg0);
    temp_f0_2 = func_150489B0((s32) sp37);
    var_v0_2 = (s32) (((f32) (*(s32 *)((char *)(arg0) + 0x26)) * temp_f0_2) - ((f32) (*(s32 *)((char *)(arg0) + 0x28)) * sp40));
    if (var_v0_2 >= 0) {
        (*(s32 *)((char *)(arg0) + 0x44)) = 0;
    } else {
        (*(s32 *)((char *)(arg0) + 0x44)) = 4;
        var_v0_2 = -var_v0_2;
    }
    if (var_v0_2 >= 0x201) {
        var_v0_3 = 6;
    } else if (var_v0_2 >= 0x101) {
        var_v0_3 = 7;
    } else if ((s32) (((f32) (*(s32 *)((char *)(arg0) + 0x26)) * sp40) + ((f32) (*(s32 *)((char *)(arg0) + 0x28)) * temp_f0_2)) >= 0) {
        var_v0_3 = 8;
    } else {
        var_v0_3 = 9;
    }
    (*(s16 *)((char *)(arg0) + 0x1C)) = (s16) ((*(s16 *)((char *)(arg0) + 0x1C)) ^ 0x100);
    (*(s32 *)((char *)(arg0) + 0x10)) = (s32) *(&D_8008CA4C + (var_v0_3 * 4));
}

s32 func_15178750(s32 arg0, void *arg1, s32 arg2) {
    s32 var_v0;

    var_v0 = arg0;
    if ((*(s32 *)((char *)((*(s32 *)((char *)(arg1) + 0x14))) + 0x36)) & (1 << arg2)) {
        var_v0 = func_15168118(arg2);
    }
    return var_v0;
}

void func_151787AC(void *arg0) {
    f32 sp68;
    f32 sp64;
    f32 sp60;
    void * *var_s1;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f22;
    f32 temp_f2;
    f32 var_f18;
    f32 var_f20;
    f32 var_f22;
    s16 temp_v0;
    s16 temp_v0_3;
    s16 temp_v0_6;
    s16 temp_v0_7;
    s16 var_t0;
    s16 var_v1;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_v0_5;
    s32 temp_v1;
    s32 var_a1;
    s32 var_a3;
    s32 var_s0;
    s32 var_s2;
    s8 var_s4;
    u16 temp_a0;
    void *temp_v0_2;
    void *temp_v0_4;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x14));
    temp_a1 = (*(s32 *)((char *)(arg0) + 0x18));
    temp_a2 = (*(s32 *)((char *)(arg0) + 0x1C));
    temp_a3 = (*(s32 *)((char *)(arg0) + 0x20));
    (*(s16 *)((char *)(arg0) + 0x28)) = (s16) temp_a1;
    (*(s16 *)((char *)(arg0) + 0x2A)) = (s16) temp_a2;
    (*(s16 *)((char *)(arg0) + 0x2C)) = (s16) temp_a3;
    if (temp_v0 == -0x8000) {
        temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x10));
        var_f18 = (*(s32 *)((char *)(temp_v0_2) + 0x0));
        var_f20 = (*(s32 *)((char *)(temp_v0_2) + 0x4));
        var_f22 = (*(s32 *)((char *)(temp_v0_2) + 0x8));
    } else {
        var_f22 = (f32) temp_v0;
        var_f18 = (f32) (s16) (*(f32 *)((char *)(arg0) + 0x10));
        var_f20 = (f32) (*(f32 *)((char *)(arg0) + 0x12));
    }
    var_s1 = &D_800D9C10;
    sp68 = (f32) temp_a1;
    var_s0 = 0;
    temp_f12 = var_f18 - sp68;
    sp64 = (f32) temp_a2;
    temp_f14 = var_f20 - sp64;
    sp60 = (f32) temp_a3;
    temp_f16 = var_f22 - sp60;
    temp_f0 = sqrtf((temp_f12 * temp_f12) + (temp_f14 * temp_f14) + (temp_f16 * temp_f16));
    if (temp_f0 > 1.0f) {
        temp_f2 = 16.0f / temp_f0;
        (*(s32 *)((char *)(arg0) + 0x18)) = (s32) (sp68 + (temp_f12 * temp_f2));
        (*(s32 *)((char *)(arg0) + 0x1C)) = (s32) (sp64 + (temp_f14 * temp_f2));
        (*(s32 *)((char *)(arg0) + 0x20)) = (s32) (sp60 + (temp_f16 * temp_f2));
    }
    var_s4 = 0;
    var_s2 = 0;
    if (D_80082FA0 >= 0) {
        temp_f22 = D_800A71E4;
        do {
            if (func_150A6360(var_s0 + D_800BE628, var_s1, (f32) (*(f32 *)((char *)(arg0) + 0x18)), (f32) (*(f32 *)((char *)(arg0) + 0x1C)), (f32) (*(f32 *)((char *)(arg0) + 0x20)), 100.0f, 100.0f, temp_f22) != 0) {
                var_s4 |= 1 << var_s2;
            }
            var_s2 += 1;
            var_s0 += 0x180;
            var_s1 = (char *)(var_s1) + 0x40;
        } while (D_80082FA0 >= var_s2);
    }
    (*(s32 *)((char *)(arg0) + 0x36)) = var_s4;
    if ((*(s32 *)((char *)(arg0) + 0x37)) != 0) {
        temp_a0 = (*(s32 *)((char *)(arg0) + 0x2E));
        if (temp_a0 == 0) {
            (*(s32 *)((char *)(arg0) + 0x2E)) = func_10010F88(0x4A2, 0x2710, 0, 0, 0, (*(s32 *)((char *)(arg0) + 0x18)), (*(s32 *)((char *)(arg0) + 0x1C)), (*(s32 *)((char *)(arg0) + 0x20)), 0x64, 0x320);
        } else {
            func_1000F91C(temp_a0, 0x2710, 0, 0, 0, (*(s32 *)((char *)(arg0) + 0x18)), (*(s32 *)((char *)(arg0) + 0x1C)), (*(s32 *)((char *)(arg0) + 0x20)), 0x64, 0x320);
        }
    }
    temp_v0_3 = (*(s32 *)((char *)(arg0) + 0x14));
    var_t0 = temp_v0_3;
    if (temp_v0_3 == -0x8000) {
        temp_v0_4 = (*(s32 *)((char *)(arg0) + 0x10));
        var_a3 = (s32) (*(s32 *)((char *)(temp_v0_4) + 0x0));
        var_a1 = (s32) (*(s32 *)((char *)(temp_v0_4) + 0x4));
        var_t0 = (s16) (s32) (*(s16 *)((char *)(temp_v0_4) + 0x8));
    } else {
        var_a3 = (s32) (s16) (*(s32 *)((char *)(arg0) + 0x10));
        var_a1 = (s32) (*(s32 *)((char *)(arg0) + 0x12));
    }
    temp_v0_5 = var_a3 - (*(s32 *)((char *)(arg0) + 0x18));
    temp_v1 = (var_a1 + (*(s32 *)((char *)(arg0) + 0x30))) - (*(s32 *)((char *)(arg0) + 0x1C));
    temp_a0_2 = var_t0 - (*(s32 *)((char *)(arg0) + 0x20));
    if (((temp_v0_5 * temp_v0_5) + (temp_v1 * temp_v1) + (temp_a0_2 * temp_a0_2)) >= 0x2711) {
        temp_v0_6 = (*(s32 *)((char *)(arg0) + 0x32));
        var_v1 = 0x640;
        if (temp_v0_6 != 0x640) {
            (*(s16 *)((char *)(arg0) + 0x32)) = (s16) (temp_v0_6 + D_800BE9E4 + 0x28);
            if ((*(s32 *)((char *)(arg0) + 0x32)) >= 0x641) {
                goto block_23;
            }
        }
    } else {
        temp_v0_7 = (*(s32 *)((char *)(arg0) + 0x32));
        var_v1 = 0x320;
        if (temp_v0_7 != 0x320) {
            (*(s16 *)((char *)(arg0) + 0x32)) = (s16) ((temp_v0_7 - D_800BE9E4) - 0x28);
            if ((*(s32 *)((char *)(arg0) + 0x32)) < 0x320) {
block_23:
                (*(s32 *)((char *)(arg0) + 0x32)) = var_v1;
            }
        }
    }
}

void *func_15178B98(s32 arg0) {
    void *var_v1;

    var_v1 = D_800DCF38;
    if (var_v1 != NULL) {
loop_1:
        if ((arg0 & 0xFF) == (*(s32 *)((char *)(var_v1) + 0x34))) {
            return var_v1;
        }
        var_v1 = (*(s32 *)((char *)(var_v1) + 0x8));
        if (var_v1 == NULL) {
            /* Duplicate return node #4. Try simplifying control flow for better match */
            return NULL;
        }
        goto loop_1;
    }
    return NULL;
}

void func_15178BE4(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_v0;

    temp_v0 = func_15178B98(arg0 & 0xFF);
    if (temp_v0 != NULL) {
        (*(s32 *)((char *)(temp_v0) + 0x10)) = arg1;
        (*(s32 *)((char *)(temp_v0) + 0x14)) = 0x80000000;
        (*(s32 *)((char *)(temp_v0) + 0x30)) = arg2;
    }
}

void func_15178C34(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *temp_v0;

    temp_v0 = func_15178B98(arg0 & 0xFF);
    if (temp_v0 != NULL) {
        (*(s32 *)((char *)(temp_v0) + 0x10)) = (s32) ((arg1 << 0x10) | (arg2 & 0xFFFF));
        (*(s32 *)((char *)(temp_v0) + 0x14)) = (s32) (arg3 << 0x10);
        (*(s32 *)((char *)(temp_v0) + 0x30)) = arg4;
    }
}

s32 func_15178C9C(s32 arg0, s32 arg1) {
    s32 temp_f10;
    s32 temp_f16;
    s32 temp_f8;
    void *temp_a2;
    void *temp_v0;

    temp_v0 = func_15178B98(arg0 & 0xFF);
    if (temp_v0 != NULL) {
        temp_a2 = (arg1 * 0x32C) + &gObjects;
        temp_f16 = (s32) ((*(s32 *)((char *)(temp_a2) + 0x14)) - (f32) (*(s32 *)((char *)(temp_v0) + 0x18)));
        temp_f10 = (s32) ((*(s32 *)((char *)(temp_a2) + 0x18)) - (f32) (*(s32 *)((char *)(temp_v0) + 0x1C)));
        temp_f8 = (s32) ((*(s32 *)((char *)(temp_a2) + 0x1C)) - (f32) (*(s32 *)((char *)(temp_v0) + 0x20)));
        return (s32) sqrtf((f32) ((temp_f16 * temp_f16) + (temp_f10 * temp_f10) + (temp_f8 * temp_f8)));
    }
    return 1;
}

void func_15178DA4(void *arg0) {
    void *sp20;
    void *temp_a1;
    void *temp_s0;
    void *var_a1;

    temp_a1 = D_800DCF3C;
    sp20 = temp_a1;
    func_100111C8((*(s32 *)((char *)(arg0) + 0x2E)));
    var_a1 = temp_a1;
    if (var_a1 != NULL) {
        do {
            temp_s0 = (*(s32 *)((char *)(var_a1) + 0x8));
            if ((char *)(arg0) == (char *)(*(s32 *)((char *)(var_a1) + 0x14))) {
                func_1516972C(var_a1, var_a1);
            }
            var_a1 = temp_s0;
        } while (temp_s0 != NULL);
    }
    func_15169824(arg0, var_a1);
}

void func_15178E14(s32 arg0) {
    func_15178DA4(func_15178B98(arg0 & 0xFF));
}
