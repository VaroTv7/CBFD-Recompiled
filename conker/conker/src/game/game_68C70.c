/**
 * Auto-decompiled from asm/68C70.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 allocate_memory();                    /* extern */
void * func_150440A0(); /* extern */
u32 random_u32();                     /* extern */
void func_1503CB98(s32 arg0, s32 arg1, f32 arg2, void *arg3);
extern f32 D_800986F0;
extern f32 D_80098700;
extern s32 D_80098710;
extern s32 D_80098720;
extern s32 D_80098730;
extern s32 D_80098740;
extern s32 D_80098754;
extern s32 D_80098768;
extern u16 D_8009877C;
extern u16 D_8009877E;
extern s32 D_80098780;
extern u16 D_80098830;
extern s32 D_80098836;
extern f32 D_80098838;
extern f32 D_8009883C;
extern f32 D_80098840;
extern f32 D_80098844;
extern f32 D_80098848;
extern f32 D_8009884C;
extern f32 D_80098850;
extern f32 D_80098854;
extern f32 D_80098858;
extern f32 D_8009885C;
extern u8 D_800BEA0C;
extern u8 D_800C3C9D;
extern s32 D_800C4008;
extern f32 D_800C4010;
extern s32 D_800CC5CB;

void func_1503B7C0(void *arg0) {
    (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x31C))) + 0x11C)) = allocate_memory(0x50, 1, 0, 0);
    bzero((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x31C))) + 0x11C)), 0x50);
    (*(s32 *)((char *)((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x31C))) + 0x11C))) + 0x44)) = 30.0f;
    (*(s16 *)((char *)((*(s16 *)((char *)((*(s16 *)((char *)(arg0) + 0x31C))) + 0x11C))) + 0x4C)) = (s16) (random_u32() % 30U);
}

void func_1503B840(void *arg0) {
    void * *var_a1_2;
    u16 *var_a1;
    u16 temp_t5;
    u16 temp_t7;
    u16 temp_v1;

    var_a1 = &D_80098830;
    if ((*(s32 *)((char *)(arg0) + 0x0)) == 1) {
        temp_v1 = (*(s32 *)((char *)(arg0) + 0x84));
loop_2:
        temp_t7 = *var_a1;
        var_a1 += 2;
        if (temp_v1 == temp_t7) {
            (*(u8 *)((char *)(arg0) + 0x2FB)) = (u8) ((*(u8 *)((char *)(arg0) + 0x2FB)) | 2);
            return;
        }
        if ((u32) var_a1 >= (u32) &D_80098836) {
            if (temp_v1 == D_8009877C) {
                (*(u8 *)((char *)(arg0) + 0x2FB)) = (u8) ((*(u8 *)((char *)(arg0) + 0x2FB)) | 1);
                return;
            }
            var_a1_2 = &D_80098780;
            if (temp_v1 == D_8009877E) {
                (*(u8 *)((char *)(arg0) + 0x2FB)) = (u8) ((*(u8 *)((char *)(arg0) + 0x2FB)) | 1);
                return;
            }
loop_10:
            if (temp_v1 == (*(s32 *)((char *)(var_a1_2) + 0x0))) {
                (*(u8 *)((char *)(arg0) + 0x2FB)) = (u8) ((*(u8 *)((char *)(arg0) + 0x2FB)) | 1);
                return;
            }
            if (temp_v1 == (*(s32 *)((char *)(var_a1_2) + 0x2))) {
                (*(u8 *)((char *)(arg0) + 0x2FB)) = (u8) ((*(u8 *)((char *)(arg0) + 0x2FB)) | 1);
                return;
            }
            if (temp_v1 == (*(s32 *)((char *)(var_a1_2) + 0x4))) {
                (*(u8 *)((char *)(arg0) + 0x2FB)) = (u8) ((*(u8 *)((char *)(arg0) + 0x2FB)) | 1);
                return;
            }
            temp_t5 = (*(s32 *)((char *)(var_a1_2) + 0x6));
            var_a1_2 = (char *)(var_a1_2) + 8;
            if (temp_v1 == temp_t5) {
                (*(u8 *)((char *)(arg0) + 0x2FB)) = (u8) ((*(u8 *)((char *)(arg0) + 0x2FB)) | 1);
                return;
            }
            if ((char *)(var_a1_2) == (char *)(&D_80098830)) {

            } else {
                goto loop_10;
            }
        } else {
            goto loop_2;
        }
    }
}

s32 func_1503B95C(s32 arg0, void *arg1) {
    u8 temp_v0;

    temp_v0 = *(&D_800CC5CB + (arg0 * 0x32C));
    if (temp_v0 & 2) {
        (*(s32 *)((char *)(arg1) + 0x4E)) = 0;
        return 0;
    }
    if (temp_v0 & 1) {
        return 0;
    }
    return 1;
}

void func_1503B9BC(s32 arg0) {
    s32 sp148;
    f32 sp140;
    f32 sp13C;
    f32 sp138;
    f32 sp134;
    f32 sp130;
    f32 sp12C;
    f32 sp124;
    f32 sp118;
    f32 sp10C;
    void * sp108;
    f32 sp104;
    f32 sp100;
    f32 spFC;
    f32 spF4;
    f32 spF0;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    s32 spB0;
    f32 spA4;
    s32 spA0;
    s32 sp9C;
    void *sp94;
    f32 *sp90;
    s32 sp78;
    void * *sp58;
    s32 sp54;
    void *sp50;
    void *sp48;
    s32 sp44;
    f32 *sp40;
    f32 sp38;
    void * *var_a2_3;
    void * *var_v0_3;
    f32 *temp_a0_2;
    f32 *var_a2;
    f32 *var_t0;
    f32 *var_v1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f12_5;
    f32 temp_f12_6;
    f32 temp_f12_7;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f14_3;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f22_3;
    f32 temp_f22_4;
    f32 temp_f24;
    f32 temp_f24_2;
    f32 temp_f24_3;
    f32 temp_f24_4;
    f32 temp_f24_5;
    f32 temp_f24_6;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 temp_f2_6;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f4_3;
    f32 temp_f4_4;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f6_3;
    f32 temp_f6_4;
    f32 temp_f8;
    f32 temp_f8_2;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f0_4;
    f32 var_f0_5;
    f32 var_f0_6;
    f32 var_f10;
    f32 var_f14;
    f32 var_f18;
    f32 var_f20;
    f32 var_f22;
    f32 var_f22_2;
    f32 var_f22_3;
    f32 var_f22_4;
    f32 var_f24;
    f32 var_f24_2;
    f32 var_f2;
    f32 var_f2_2;
    f32 var_f2_3;
    f32 var_f8;
    f32 var_f8_2;
    s16 temp_v0_14;
    s32 temp_t8;
    s32 temp_t9;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a1;
    s32 var_a2_2;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_t1;
    s32 var_t4;
    s32 var_t4_2;
    s32 var_v0_2;
    u16 temp_a0;
    u16 temp_t6;
    u16 temp_v0_13;
    u32 temp_hi;
    u8 temp_v1_2;
    u8 temp_v1_4;
    u8 temp_v1_5;
    void *temp_a1;
    void *temp_a2;
    void *temp_s0;
    void *temp_v0_10;
    void *temp_v0_11;
    void *temp_v0_12;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;
    void *temp_v0_9;
    void *temp_v1;
    void *temp_v1_3;
    void *temp_v1_6;
    void *var_a1_2;
    void *var_v0;
    void *var_v0_4;

    temp_s0 = (arg0 * 0x32C) + &gObjects;
    temp_v1 = (*(s32 *)((char *)(temp_s0) + 0x31C));
    spB0 = 0;
    if (temp_v1 != NULL) {
        var_v0 = (*(s32 *)((char *)(temp_v1) + 0x11C));
        if (var_v0 == NULL) {
            func_1503B7C0(temp_s0);
            var_v0 = (*(s32 *)((char *)((*(s32 *)((char *)(temp_s0) + 0x31C))) + 0x11C));
        }
        spA0 = func_1503B95C(arg0, var_v0);
        if ((*(s32 *)((char *)(temp_s0) + 0x1D4)) == NULL) {
            D_800C4000 |= 1 << arg0;
            return;
        }
        temp_v0 = 1 << arg0;
        if (D_800C4000 & temp_v0) {
            D_800C4000 &= ~temp_v0;
            var_t4 = 1;
        } else {
            var_t4 = 0;
        }
        if ((D_800DBFF4 != 0) || ((*(s32 *)((char *)(temp_s0) + 0x2FD)) != 0)) {
            var_t4 = 1;
        }
        if (var_t4 != 0) {
            (*(s32 *)((char *)(var_v0) + 0x44)) = 30.0f;
            (*(s32 *)((char *)(var_v0) + 0x3C)) = 0.0f;
            (*(s32 *)((char *)(var_v0) + 0x40)) = 0.0f;
            (*(s32 *)((char *)(var_v0) + 0x48)) = 100.0f;
            sp9C = var_t4;
            (*(s16 *)((char *)(var_v0) + 0x4C)) = (s16) (random_u32() % 30U);
        }
        var_a2 = &spFC;
        if (spA0 == 0) {
            temp_v1_2 = (*(s32 *)((char *)(var_v0) + 0x4E));
            if (D_800BE9E4 < (s32) temp_v1_2) {
                if (D_800BEAC0 == 0) {
                    (*(u8 *)((char *)(var_v0) + 0x4E)) = (u8) (temp_v1_2 - D_800BE9E4);
                }
                spA0 = 2;
            } else {
                (*(s32 *)((char *)(var_v0) + 0x4E)) = 0U;
            }
        }
        temp_v0_2 = (*(s32 *)((char *)(temp_s0) + 0x1D4));
        (*(f32 *)((char *)&(D_800C4008) + 0x0)) = (f32) (*(f32 *)((char *)(temp_v0_2) + 0x30));
        (*(f32 *)((char *)&(D_800C4008) + 0x4)) = (f32) (*(f32 *)((char *)(temp_v0_2) + 0x34));
        (*(f32 *)((char *)&(D_800C4008) + 0x8)) = (f32) (*(f32 *)((char *)(temp_v0_2) + 0x38));
        if (spA0 == 0) {
            var_a0 = 0x18 << 6;
            var_v1 = ((char *)(var_v0) + (0x18 * 0xC)) - 0x120;
            var_a2_2 = var_a0 + 0x40;
            var_a3 = var_a0 + 0x80;
            var_a1 = var_a0 + 0xC0;
            if (var_a1 != 0x6C0) {
                do {
                    temp_v0_3 = (*(s32 *)((char *)(temp_s0) + 0x1D4)) + var_a0;
                    temp_f24 = (*(s32 *)((char *)(temp_v0_3) + 0x30));
                    var_a0 += 0x100;
                    var_v1 += 0x30;
                    (*(s32 *)((char *)(var_v1) - 0x30)) = temp_f24;
                    (*(f32 *)((char *)(var_v1) - 0x2C)) = (f32) (*(f32 *)((char *)(temp_v0_3) + 0x34));
                    (*(f32 *)((char *)(var_v1) - 0x28)) = (f32) (*(f32 *)((char *)(temp_v0_3) + 0x38));
                    temp_v0_4 = (*(s32 *)((char *)(temp_s0) + 0x1D4)) + var_a2_2;
                    temp_f24_2 = (*(s32 *)((char *)(temp_v0_4) + 0x30));
                    var_a2_2 += 0x100;
                    (*(s32 *)((char *)(var_v1) - 0x24)) = temp_f24_2;
                    (*(f32 *)((char *)(var_v1) - 0x20)) = (f32) (*(f32 *)((char *)(temp_v0_4) + 0x34));
                    (*(f32 *)((char *)(var_v1) - 0x1C)) = (f32) (*(f32 *)((char *)(temp_v0_4) + 0x38));
                    temp_v0_5 = (*(s32 *)((char *)(temp_s0) + 0x1D4)) + var_a3;
                    temp_f24_3 = (*(s32 *)((char *)(temp_v0_5) + 0x30));
                    var_a3 += 0x100;
                    (*(s32 *)((char *)(var_v1) - 0x18)) = temp_f24_3;
                    (*(f32 *)((char *)(var_v1) - 0x14)) = (f32) (*(f32 *)((char *)(temp_v0_5) + 0x34));
                    (*(f32 *)((char *)(var_v1) - 0x10)) = (f32) (*(f32 *)((char *)(temp_v0_5) + 0x38));
                    temp_v0_6 = (*(s32 *)((char *)(temp_s0) + 0x1D4)) + var_a1;
                    temp_f24_4 = (*(s32 *)((char *)(temp_v0_6) + 0x30));
                    var_a1 += 0x100;
                    (*(s32 *)((char *)(var_v1) - 0xC)) = temp_f24_4;
                    (*(f32 *)((char *)(var_v1) - 0x8)) = (f32) (*(f32 *)((char *)(temp_v0_6) + 0x34));
                    (*(f32 *)((char *)(var_v1) - 0x4)) = (f32) (*(f32 *)((char *)(temp_v0_6) + 0x38));
                } while (var_a1 != 0x6C0);
            }
            temp_v0_7 = (*(s32 *)((char *)(temp_s0) + 0x1D4)) + var_a0;
            *var_v1 = (*(s32 *)((char *)(temp_v0_7) + 0x30));
            temp_v1_3 = var_v1 + 0x30;
            (*(f32 *)((char *)(temp_v1_3) - 0x2C)) = (f32) (*(f32 *)((char *)(temp_v0_7) + 0x34));
            (*(f32 *)((char *)(temp_v1_3) - 0x28)) = (f32) (*(f32 *)((char *)(temp_v0_7) + 0x38));
            temp_v0_8 = (*(s32 *)((char *)(temp_s0) + 0x1D4)) + var_a2_2;
            (*(f32 *)((char *)(temp_v1_3) - 0x24)) = (f32) (*(f32 *)((char *)(temp_v0_8) + 0x30));
            (*(f32 *)((char *)(temp_v1_3) - 0x20)) = (f32) (*(f32 *)((char *)(temp_v0_8) + 0x34));
            (*(f32 *)((char *)(temp_v1_3) - 0x1C)) = (f32) (*(f32 *)((char *)(temp_v0_8) + 0x38));
            temp_v0_9 = (*(s32 *)((char *)(temp_s0) + 0x1D4)) + var_a3;
            (*(f32 *)((char *)(temp_v1_3) - 0x18)) = (f32) (*(f32 *)((char *)(temp_v0_9) + 0x30));
            (*(f32 *)((char *)(temp_v1_3) - 0x14)) = (f32) (*(f32 *)((char *)(temp_v0_9) + 0x34));
            (*(f32 *)((char *)(temp_v1_3) - 0x10)) = (f32) (*(f32 *)((char *)(temp_v0_9) + 0x38));
            temp_v0_10 = (*(s32 *)((char *)(temp_s0) + 0x1D4)) + var_a1;
            (*(f32 *)((char *)(temp_v1_3) - 0xC)) = (f32) (*(f32 *)((char *)(temp_v0_10) + 0x30));
            (*(f32 *)((char *)(temp_v1_3) - 0x8)) = (f32) (*(f32 *)((char *)(temp_v0_10) + 0x34));
            (*(f32 *)((char *)(temp_v1_3) - 0x4)) = (f32) (*(f32 *)((char *)(temp_v0_10) + 0x38));
            return;
        }
        temp_v0_11 = (*(s32 *)((char *)(temp_s0) + 0x1D4));
        temp_v0_12 = (char *)(temp_v0_11) + 0x600;
        (*(f32 *)((char *)(var_v0) + 0x0)) = (f32) (*(f32 *)((char *)(temp_v0_11) + 0x630));
        (*(f32 *)((char *)(var_v0) + 0x4)) = (f32) (*(f32 *)((char *)(temp_v0_12) + 0x34));
        (*(f32 *)((char *)(var_v0) + 0x8)) = (f32) (*(f32 *)((char *)(temp_v0_12) + 0x38));
        temp_v1_4 = (*(s32 *)((char *)(temp_s0) + 0x4));
        if ((temp_v1_4 == 0x80) || (temp_v1_4 == 0xB0)) {
            sp90 = &D_80098700;
        } else {
            sp90 = &D_800986F0;
        }
        do {
            var_a2 += 0xC;
            (*(s32 *)((char *)(var_a2) - 0xC)) = 0.0f;
            (*(s32 *)((char *)(var_a2) - 0x8)) = 0.0f;
            (*(s32 *)((char *)(var_a2) - 0x4)) = 0.0f;
        } while ((u32) var_a2 < (u32) &sp138);
        temp_f22 = (*(s32 *)((char *)(temp_s0) + 0x3C));
        if (temp_f22 < 0.0f) {
            var_f22 = 0.0f;
        } else {
            if (temp_f22 > 60.0f) {
                var_f0 = 60.0f;
            } else {
                var_f0 = temp_f22;
            }
            var_f22 = var_f0;
        }
        if ((*(s32 *)((char *)(temp_s0) + 0x28)) > 3.0f) {
            var_f22 *= 0.5f;
        }
        sp9C = var_t4;
        temp_f24_5 = sinf((*(s32 *)((char *)(var_v0) + 0x3C)) * D_80098838) * var_f22;
        if ((D_800BEAC0 == 0) && (D_800BEA0C == 0)) {
            (*(f32 *)((char *)(var_v0) + 0x3C)) = (f32) ((*(f32 *)((char *)(var_v0) + 0x3C)) + var_f22);
            temp_f0 = (*(s32 *)((char *)(var_v0) + 0x3C));
            if (temp_f0 >= 360.0f) {
                (*(f32 *)((char *)(var_v0) + 0x3C)) = (f32) (temp_f0 - 360.0f);
            }
        }
        sp9C = var_t4;
        temp_f6 = sp130 + (sinf(((*(s32 *)((char *)(var_v0) + 0x3C)) + 180.0f) * D_8009883C) * var_f22);
        sp100 += temp_f24_5;
        sp130 = temp_f6;
        temp_a1 = (*(s32 *)((char *)(temp_s0) + 0x318));
        if ((temp_a1 != NULL) && ((*(s32 *)((char *)(temp_a1) + 0x2C)) == 0x100) && ((*(s32 *)((char *)(temp_a1) + 0x388)) > -17.0f)) {
            sp78 = 0;
            sp94 = temp_a1;
            sp9C = var_t4;
            temp_f2 = (func_150484A0(((*(s32 *)((char *)(temp_a1) + 0x2F8)) + (*(s32 *)((char *)(temp_a1) + 0x74C))) - (*(s32 *)((char *)(temp_s0) + 0x14)), ((*(s32 *)((char *)(temp_a1) + 0x300)) + (*(s32 *)((char *)(temp_a1) + 0x754))) - (*(s32 *)((char *)(temp_s0) + 0x1C))) * D_80098840) + 90.0f;
            var_f14 = temp_f2;
            if (temp_f2 >= 360.0f) {
                var_f14 = temp_f2 - 360.0f;
            }
            temp_t6 = (*(s32 *)((char *)(temp_s0) + 0x76));
            var_f10 = (f32) temp_t6;
            if ((s32) temp_t6 < 0) {
                var_f10 += 4294967296.0f;
            }
            sp94 = temp_a1;
            sp9C = var_t4;
            temp_f0_2 = func_15048A70(var_f10 * 0.005493164f, var_f14);
            var_f2 = temp_f0_2;
            temp_f0_3 = fabsf(temp_f0_2);
            var_v0_2 = sp78;
            if (temp_f0_3 < 90.0f) {
                var_f0_2 = -15.0f;
                if (temp_f0_3 < 0.5f) {
                    var_f2 = 0.0f;
                }
                if (var_f2 < -15.0f) {

                } else if (var_f2 > 15.0f) {
                    var_f0_2 = 15.0f;
                } else {
                    var_f0_2 = var_f2;
                }
                var_f2_2 = var_f0_2;
                if (var_f2_2 > 0.0f) {
                    if (var_f2_2 < 23.0f) {
                        var_f2_2 = 23.0f;
                        goto block_64;
                    }
                } else if (var_f2_2 > -23.0f) {
                    var_f2_2 = -23.0f;
block_64:
                    var_v0_2 = 1;
                }
                if (var_v0_2 != 0) {
                    temp_f12 = (*(s32 *)((char *)(var_v0) + 0x40));
                    var_f2_2 = temp_f12 + ((var_f2_2 - temp_f12) * D_80098844);
                }
                (*(s32 *)((char *)(var_v0) + 0x40)) = var_f2_2;
                (*(s32 *)((char *)(var_v0) + 0x4C)) = 0x3C;
                (*(s32 *)((char *)(var_v0) + 0x48)) = 200.0f;
                spB0 = 1;
            }
        }
        temp_v0_13 = (*(s32 *)((char *)(temp_s0) + 0x84));
        var_f22_2 = (*(s32 *)((char *)(temp_s0) + 0x40)) * D_80098848;
        if ((temp_v0_13 == 0x122) || (temp_v0_13 == 0x128) || (temp_v0_13 == 0x129) || (temp_v0_13 == 0x12A)) {
            var_f22_2 -= D_8009884C;
        }
        sp94 = temp_a1;
        sp9C = var_t4;
        spE4 = sinf(var_f22_2);
        temp_f0_4 = cosf(var_f22_2);
        temp_a0 = (*(s32 *)((char *)(temp_s0) + 0x84));
        var_t4_2 = var_t4;
        temp_f14 = temp_f0_4;
        if ((temp_a0 == 0x24) || (temp_a0 == 0x22) || (temp_a0 == 0xD1)) {
            (*(f32 *)((char *)&(D_800C4008) + 0x4)) = (f32) (*(f32 *)((char *)(var_v0) + 0x4));
            if ((*(s32 *)((char *)(temp_s0) + 0xB8)) > 0.0f) {
                (*(f32 *)((char *)&(D_800C4008) + 0x0)) = (f32) ((*(f32 *)((char *)(var_v0) + 0x0)) + spE4);
                D_800C4010 = (*(s32 *)((char *)(var_v0) + 0x8)) + temp_f0_4;
            }
            sp100 -= temp_f24_5;
            sp10C += temp_f24_5;
        } else if ((*(s32 *)((char *)(temp_s0) + 0x28)) < 0.5f) {
            temp_f22_2 = (*(s32 *)((char *)(temp_s0) + 0x3C));
            if (temp_f22_2 < 0.0f) {
                var_f22_3 = 0.0f;
            } else {
                if (temp_f22_2 > 30.0f) {
                    var_f0_3 = 30.0f;
                } else {
                    var_f0_3 = temp_f22_2;
                }
                var_f22_3 = var_f0_3;
            }
            var_f24 = 60.0f - (2.0f * var_f22_3);
            if ((D_800C35EA == 1) && ((s32) D_800C3C9D < 0x64)) {
                var_f8 = (f32) D_800C3C9D;
                if ((s32) D_800C3C9D < 0) {
                    var_f8 += 4294967296.0f;
                }
                var_f24 = var_f24 * var_f8 * D_80098850;
            }
            temp_v1_5 = (*(s32 *)((char *)(temp_s0) + 0x4));
            if ((temp_v1_5 == 0x80) || (temp_v1_5 == 0xB0)) {
                var_v0_3 = &D_80098768;
            } else if ((temp_a0 == 0x1B) || (temp_a0 == 0x18B)) {
                sp100 = 0.0f;
                temp_a2 = (1 * 0xC) + &spFC;
                var_v0_3 = &D_80098754;
                (*(s32 *)((char *)(temp_a2) + 0x10)) = 0.0f;
                (*(s32 *)((char *)(temp_a2) + 0x1C)) = 0.0f;
                (*(s32 *)((char *)(temp_a2) + 0x28)) = 0.0f;
                (*(s32 *)((char *)(temp_a2) + 0x4)) = 0.0f;
                var_f24 = 60.0f;
            } else {
                var_v0_3 = &D_80098740;
            }
            if (((*(s32 *)((char *)((*(s32 *)((char *)(temp_s0) + 0x31C))) + 0x78)) == 0x3B) && (temp_a1 != NULL) && ((*(s32 *)((char *)(temp_a1) + 0x2C)) == 0x100) && ((*(s32 *)((char *)(temp_a1) + 0x388)) > -17.0f)) {
                var_f24 = 0.0f;
            }
            sp100 += var_f24 * (*(s32 *)((char *)(var_v0_3) + 0x0));
            sp10C += var_f24 * (*(s32 *)((char *)(var_v0_3) + 0x4));
            sp118 += var_f24 * (*(s32 *)((char *)(var_v0_3) + 0x8));
            sp124 += var_f24 * (*(s32 *)((char *)(var_v0_3) + 0xC));
            sp130 += var_f24 * (*(s32 *)((char *)(var_v0_3) + 0x10));
            if (var_f22_3 == 0.0f) {
                temp_v0_14 = (*(s32 *)((char *)(var_v0) + 0x4C));
                if ((temp_v0_14 != 0) && (spB0 == 0)) {
                    (*(s16 *)((char *)(var_v0) + 0x4C)) = (s16) (temp_v0_14 - D_800BE9E4);
                    if ((*(s32 *)((char *)(var_v0) + 0x4C)) <= 0) {
                        (*(s32 *)((char *)(var_v0) + 0x40)) = 0.0f;
                        sp9C = var_t4_2;
                        temp_hi = random_u32(temp_a0, temp_a1) % 100U;
                        var_f8_2 = (f32) temp_hi;
                        if ((s32) temp_hi < 0) {
                            var_f8_2 += 4294967296.0f;
                        }
                        (*(s32 *)((char *)(var_v0) + 0x48)) = var_f8_2;
                        temp_t9 = (random_u32() % 10U) + 0xA;
                        var_f24_2 = (f32) temp_t9;
                        if (temp_t9 < 0) {
                            var_f24_2 += 4294967296.0f;
                        }
                        var_t4_2 = sp9C;
                        if (random_u32() & 1) {
                            (*(s32 *)((char *)(var_v0) + 0x44)) = var_f24_2;
                        } else {
                            (*(f32 *)((char *)(var_v0) + 0x44)) = (f32) -var_f24_2;
                        }
                        (*(s32 *)((char *)(var_v0) + 0x4C)) = 0;
                    }
                } else {
                    spE8 = temp_f14;
                    sp9C = var_t4_2;
                    temp_f24_6 = sinf((*(s32 *)((char *)(var_v0) + 0x40)) * D_80098854) * (*(s32 *)((char *)(var_v0) + 0x48));
                    temp_f12_2 = -spE4;
                    temp_f2_2 = sinf(((*(s32 *)((char *)(var_v0) + 0x40)) + 30.0f) * D_80098858) * (*(s32 *)((char *)(var_v0) + 0x48)) * 5.0f;
                    sp12C += temp_f14 * temp_f2_2;
                    spFC += temp_f14 * temp_f24_6;
                    sp134 += temp_f12_2 * temp_f2_2;
                    sp104 += temp_f12_2 * temp_f24_6;
                    if ((D_800BEAC0 == 0) && (D_800BEA0C == 0) && (spB0 == 0) && ((temp_f2_3 = (*(f32 *)((char *)(var_v0) + 0x44)), (*(f32 *)((char *)(var_v0) + 0x40)) = (f32) ((*(f32 *)((char *)(var_v0) + 0x40)) + temp_f2_3), temp_f12_3 = (*(f32 *)((char *)(var_v0) + 0x40)), (temp_f12_3 > 360.0f)) || (temp_f12_3 < -360.0f))) {
                        if (fabsf(temp_f2_3) > 15.0f) {
                            (*(f32 *)((char *)(var_v0) + 0x44)) = (f32) (temp_f2_3 * 0.5f);
                            (*(f32 *)((char *)(var_v0) + 0x48)) = (f32) ((*(f32 *)((char *)(var_v0) + 0x48)) * 0.5f);
                            if (temp_f12_3 > 360.0f) {
                                (*(f32 *)((char *)(var_v0) + 0x40)) = (f32) (temp_f12_3 - 360.0f);
                            } else {
                                (*(f32 *)((char *)(var_v0) + 0x40)) = (f32) (temp_f12_3 + 360.0f);
                            }
                        } else {
                            sp9C = var_t4_2;
                            (*(s16 *)((char *)(var_v0) + 0x4C)) = (s16) (random_u32((u16) temp_f12_3, 0x43B40000) % 200U);
                        }
                    }
                }
            } else if ((D_800BEAC0 == 0) && (D_800BEA0C == 0)) {
                (*(s32 *)((char *)(var_v0) + 0x4C)) = 0xC8;
            }
        }
        var_a2_3 = &sp108;
        var_t1 = 0;
        if (spA0 == 2) {
            spA4 = (f32) (0x1E - (*(f32 *)((char *)(var_v0) + 0x4E))) / 30.0f;
        }
        var_v0_4 = (char *)(var_v0) + 0xC;
        var_a1_2 = var_v0;
        var_a3_2 = 0;
        var_t0 = sp90;
        do {
            temp_f12_4 = (*(s32 *)((char *)(temp_s0) + 0x14C));
            temp_f22_3 = ((*(s32 *)((char *)(var_a2_3) - 0xC)) * temp_f12_4) + (*(s32 *)((char *)(var_v0_4) - 0xC));
            temp_f20 = ((*(s32 *)((char *)(var_a2_3) - 0x8)) * (*(s32 *)((char *)(temp_s0) + 0x150))) + (*(s32 *)((char *)(var_v0_4) - 0x8));
            temp_f18 = ((*(s32 *)((char *)(var_a2_3) - 0x4)) * temp_f12_4) + (*(s32 *)((char *)(var_v0_4) - 0x4));
            if (var_a3_2 == 0) {
                var_f22_4 = temp_f22_3 - (*(s32 *)((char *)&(D_800C4008) + 0x0));
                var_f20 = temp_f20 - (*(s32 *)((char *)&(D_800C4008) + 0x4));
                var_f18 = temp_f18 - (*(s32 *)((char *)&(D_800C4008) + 0x8));
            } else {
                var_f22_4 = temp_f22_3 - (*(s32 *)((char *)(var_a1_2) - 0xC));
                var_f20 = temp_f20 - (*(s32 *)((char *)(var_a1_2) - 0x8));
                var_f18 = temp_f18 - (*(s32 *)((char *)(var_a1_2) - 0x4));
            }
            temp_f2_4 = 1.0f / sqrtf((var_f22_4 * var_f22_4) + (var_f20 * var_f20) + (var_f18 * var_f18));
            temp_f22_4 = var_f22_4 * temp_f2_4;
            temp_f20_2 = var_f20 * temp_f2_4;
            temp_f18_2 = var_f18 * temp_f2_4;
            temp_f4 = (*var_t0 * temp_f22_4 * temp_f12_4) + (*(s32 *)((char *)(var_a1_2) + 0x0));
            spEC = temp_f4;
            spF0 = (*var_t0 * temp_f20_2 * (*(s32 *)((char *)(temp_s0) + 0x150))) + (*(s32 *)((char *)(var_a1_2) + 0x4));
            spF4 = (*var_t0 * temp_f18_2 * (*(s32 *)((char *)(temp_s0) + 0x14C))) + (*(s32 *)((char *)(var_a1_2) + 0x8));
            if ((D_800BEAC0 == 0) && (D_800BEA0C == 0)) {
                temp_f12_5 = (*(s32 *)((char *)(var_v0_4) + 0x0));
                var_f0_4 = temp_f4 - temp_f12_5;
                if (var_t4_2 == 0) {
                    var_f0_4 *= *(&D_80098710 + var_a3_2);
                }
                temp_f14_2 = (*(s32 *)((char *)(var_v0_4) + 0x4));
                (*(f32 *)((char *)(var_v0_4) + 0x0)) = (f32) (temp_f12_5 + var_f0_4);
                var_f0_5 = spF0 - temp_f14_2;
                if (var_t4_2 == 0) {
                    var_f0_5 *= *(&D_80098720 + var_a3_2);
                }
                temp_f16 = (*(s32 *)((char *)(var_v0_4) + 0x8));
                (*(f32 *)((char *)(var_v0_4) + 0x4)) = (f32) (temp_f14_2 + var_f0_5);
                var_f0_6 = spF4 - temp_f16;
                if (var_t4_2 == 0) {
                    var_f0_6 *= *(&D_80098710 + var_a3_2);
                }
                (*(f32 *)((char *)(var_v0_4) + 0x8)) = (f32) (temp_f16 + var_f0_6);
            }
            sp138 = (*(s32 *)((char *)(var_v0_4) + 0x0)) - (*(s32 *)((char *)(var_a1_2) + 0x0));
            sp13C = (*(s32 *)((char *)(var_v0_4) + 0x4)) - (*(s32 *)((char *)(var_a1_2) + 0x4));
            sp9C = var_t4_2;
            temp_f10 = (*(s32 *)((char *)(var_v0_4) + 0x8)) - (*(s32 *)((char *)(var_a1_2) + 0x8));
            sp38 = sp138;
            sp140 = temp_f10;
            sp148 = var_t1;
            sp54 = var_t1;
            sp40 = var_t0;
            sp44 = var_a3_2;
            sp58 = var_a2_3;
            sp48 = var_a1_2;
            sp50 = var_v0_4;
            temp_f2_5 = 1.0f / sqrtf((temp_f10 * temp_f10) + ((sp138 * sp138) + (sp13C * sp13C)));
            temp_f8 = sp138 * temp_f2_5;
            temp_f6_2 = sp13C * temp_f2_5;
            temp_f4_2 = temp_f10 * temp_f2_5;
            sp138 = temp_f8;
            sp13C = temp_f6_2;
            sp140 = temp_f4_2;
            temp_f0_5 = fabsf(func_15048360((temp_f4_2 * temp_f18_2) + ((temp_f22_4 * temp_f8) + (temp_f20_2 * temp_f6_2))) * D_8009885C);
            if ((D_800BEAC0 == 0) && (D_800BEA0C == 0)) {
                temp_f12_6 = *(&D_80098730 + var_a3_2);
                if (temp_f12_6 < temp_f0_5) {
                    var_f2_3 = 1.0f - (temp_f12_6 / temp_f0_5);
                    if (var_t4_2 != 0) {
                        var_f2_3 = 1.0f;
                    }
                    temp_f12_7 = (*(s32 *)((char *)(var_v0_4) + 0x0));
                    temp_f14_3 = (*(s32 *)((char *)(var_v0_4) + 0x4));
                    temp_f16_2 = (*(s32 *)((char *)(var_v0_4) + 0x8));
                    (*(f32 *)((char *)(var_v0_4) + 0x0)) = (f32) (temp_f12_7 + ((spEC - temp_f12_7) * var_f2_3));
                    (*(f32 *)((char *)(var_v0_4) + 0x4)) = (f32) (temp_f14_3 + ((spF0 - temp_f14_3) * var_f2_3));
                    (*(f32 *)((char *)(var_v0_4) + 0x8)) = (f32) (temp_f16_2 + ((spF4 - temp_f16_2) * var_f2_3));
                }
            }
            temp_t8 = var_t1 * 4;
            temp_v1_6 = (char *)(var_v0) + (var_t1 * 0xC);
            sp138 = (*(s32 *)((char *)(var_v0_4) + 0x0)) - (*(s32 *)((char *)(var_a1_2) + 0x0));
            var_a3_2 += 4;
            temp_f6_3 = (*(s32 *)((char *)(var_v0_4) + 0x4)) - (*(s32 *)((char *)(var_a1_2) + 0x4));
            var_a2_3 = (char *)(var_a2_3) + 0xC;
            var_t1 += 1;
            var_v0_4 = (char *)(var_v0_4) + 0xC;
            sp13C = temp_f6_3;
            temp_f4_3 = (*(s32 *)((char *)(var_a1_2) + 0x8));
            var_a1_2 = (char *)(var_a1_2) + 0xC;
            temp_f10_2 = (*(s32 *)((char *)(var_v0_4) - 0x4)) - temp_f4_3;
            sp38 = sp138;
            sp140 = temp_f10_2;
            var_t0 += 4;
            temp_f2_6 = 1.0f / sqrtf((temp_f10_2 * temp_f10_2) + ((sp138 * sp138) + (sp13C * sp13C)));
            temp_f8_2 = sp138 * temp_f2_6;
            temp_f6_4 = sp13C * temp_f2_6;
            temp_f4_4 = temp_f10_2 * temp_f2_6;
            sp138 = temp_f8_2;
            sp13C = temp_f6_4;
            sp140 = temp_f4_4;
            (*(f32 *)((char *)(var_v0_4) - 0xC)) = (f32) (((*(f32 *)((char *)(var_t0) - 0x4)) * temp_f8_2 * (*(f32 *)((char *)(temp_s0) + 0x14C))) + (*(f32 *)((char *)(var_a1_2) - 0xC)));
            temp_a0_2 = sp90 + temp_t8;
            (*(f32 *)((char *)(var_v0_4) - 0x8)) = (f32) ((*temp_a0_2 * temp_f6_4 * (*(f32 *)((char *)(temp_s0) + 0x150))) + (*(f32 *)((char *)(temp_v1_6) + 0x4)));
            (*(f32 *)((char *)(var_v0_4) - 0x4)) = (f32) ((*temp_a0_2 * temp_f4_4 * (*(f32 *)((char *)(temp_s0) + 0x14C))) + (*(f32 *)((char *)(temp_v1_6) + 0x8)));
        } while (var_a3_2 != 0x10);
        func_1503CB98(arg0, spA0, spA4, var_v0);
    }
}

void func_1503CB98(s32 arg0, s32 arg1, f32 arg2, void *arg3) {
    f32 sp170;
    f32 sp16C;
    f32 sp168;
    void * sp100;
    f32 spFC;
    f32 spF8;
    f32 spF4;
    f32 spF0;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 sp88;
    void * *var_v0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f6;
    f32 temp_f8;
    f32 var_f0;
    f32 var_f12;
    f32 var_f20;
    f32 var_f22;
    f32 var_f24;
    f32 var_f2;
    s32 temp_s5;
    s32 temp_v1;
    s32 var_s1;
    s32 var_s2;
    s32 var_s4;
    u32 temp_s6;
    void *temp_a0;
    void *temp_s3;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *var_s0;

    temp_s3 = (arg0 * 0x32C) + &gObjects;
    func_150A9B0C(&sp100, (*(s32 *)((char *)(temp_s3) + 0xB8)), (*(s32 *)((char *)(temp_s3) + 0x40)), (*(s32 *)((char *)(temp_s3) + 0xC4)), 1.0f, 1.0f, 1.0f);
    var_s0 = arg3;
    var_s1 = 0x600;
    var_s2 = 0;
    var_s4 = 0;
    temp_s6 = (char *)(var_s0) + 0x30;
    do {
        temp_v1 = (*(s32 *)((char *)(temp_s3) + 0x1D4));
        temp_s5 = temp_v1 + var_s1;
        if (var_s2 == 0) {
            var_v0 = &sp100;
        } else {
            var_v0 = (temp_v1 + var_s1) - 0x40;
        }
        sp168 = (*(s32 *)((char *)(var_v0) + 0x10));
        temp_f4 = (*(s32 *)((char *)(var_v0) + 0x14));
        sp16C = temp_f4;
        temp_f6 = (*(s32 *)((char *)(var_v0) + 0x18));
        sp170 = temp_f6;
        sp88 = sp168;
        temp_f0 = sqrtf((temp_f6 * temp_f6) + ((sp168 * sp168) + (temp_f4 * temp_f4)));
        if (temp_f0 != 0.0f) {
            temp_f2 = 1.0f / temp_f0;
            sp168 = sp88 * temp_f2;
            sp16C = temp_f4 * temp_f2;
            sp170 = temp_f6 * temp_f2;
        }
        var_f20 = (*(s32 *)((char *)(var_s0) + 0x0));
        var_f24 = (*(s32 *)((char *)(var_s0) + 0x4));
        var_f22 = (*(s32 *)((char *)(var_s0) + 0x8));
        var_f0 = (*(s32 *)((char *)(var_s0) + 0xC));
        var_f12 = (*(s32 *)((char *)(var_s0) + 0x10));
        var_f2 = (*(s32 *)((char *)(var_s0) + 0x14));
        if (arg1 == 2) {
            temp_a0 = var_s4 + &spC4;
            if (var_s2 == 0) {
                temp_v0 = temp_v1 + 0x600;
                spC4 = (*(s32 *)((char *)(temp_v0) + 0x30));
                spC8 = (*(s32 *)((char *)(temp_v0) + 0x34));
                temp_v0_2 = temp_v1 + 0x640;
                spCC = (*(s32 *)((char *)(temp_v0) + 0x38));
                spD0 = (*(s32 *)((char *)(temp_v0_2) + 0x30));
                spD4 = (*(s32 *)((char *)(temp_v0_2) + 0x34));
                temp_v0_3 = temp_v1 + 0x680;
                spD8 = (*(s32 *)((char *)(temp_v0_2) + 0x38));
                spDC = (*(s32 *)((char *)(temp_v0_3) + 0x30));
                temp_f8 = (*(s32 *)((char *)(temp_v0_3) + 0x34));
                spE0 = temp_f8;
                temp_v0_4 = temp_v1 + 0x6C0;
                spE4 = (*(s32 *)((char *)(temp_v0_3) + 0x38));
                spE8 = (*(s32 *)((char *)(temp_v0_4) + 0x30));
                spEC = (*(s32 *)((char *)(temp_v0_4) + 0x34));
                spF0 = (*(s32 *)((char *)(temp_v0_4) + 0x38));
                spF4 = spE8 + (spE8 - spDC);
                spF8 = spEC + (spEC - temp_f8);
                spFC = spF0 + (spF0 - spE4);
            }
            var_f20 += ((*(s32 *)((char *)(temp_a0) + 0x0)) - var_f20) * arg2;
            var_f24 += ((*(s32 *)((char *)(temp_a0) + 0x4)) - var_f24) * arg2;
            var_f22 += ((*(s32 *)((char *)(temp_a0) + 0x8)) - var_f22) * arg2;
            var_f0 += ((*(s32 *)((char *)(temp_a0) + 0xC)) - var_f0) * arg2;
            var_f12 += ((*(s32 *)((char *)(temp_a0) + 0x10)) - var_f12) * arg2;
            var_f2 += ((*(s32 *)((char *)(temp_a0) + 0x14)) - var_f2) * arg2;
        }
        if ((var_f20 == var_f0) && (var_f22 == var_f2)) {
            var_f20 += 1.0f;
        }
        func_150440A0(var_f12, temp_s5, var_f20, var_f24, var_f22, var_f0, var_f12, var_f2, sp168, sp16C, sp170);
        temp_f0_2 = (*(s32 *)((char *)(temp_s3) + 0x14C));
        func_15043EC8(temp_s5, temp_f0_2, (*(s32 *)((char *)(temp_s3) + 0x150)), temp_f0_2, var_f20, var_f24, var_f22);
        var_s0 = (char *)(var_s0) + 0xC;
        var_s1 += 0x40;
        var_s2 += 1;
        var_s4 += 0xC;
    } while ((u32) var_s0 < temp_s6);
    if (arg1 != 2) {
        (*(s32 *)((char *)(arg3) + 0x4E)) = 0x1E;
    }
}
