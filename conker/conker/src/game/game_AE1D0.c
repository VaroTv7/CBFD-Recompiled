/**
 * Auto-decompiled from asm/AE1D0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_1505D1C4(); /* extern */
void * func_15143134();       /* extern */
s32 func_151452C4(); /* extern */
extern s32 D_80086C60;
extern u16 D_8009BD30;
extern s32 D_8009BD32;
extern u16 D_8009BD34;
extern u16 D_8009BD38;
extern s32 D_8009BD3C;
extern s32 D_8009CBCC;
extern f32 D_8009CBD8;
extern f32 D_8009CBDC;

s32 func_15080D20(void *arg0, void * *arg1, u8 arg2, f32 arg3, f32 arg4, s32 arg5) {
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp78;
    f32 sp60;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f10;
    f32 temp_f14;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f24;
    f32 temp_f24_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f4;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 var_f12;
    f32 var_f14;
    f32 var_f8;
    s32 temp_s6;
    s32 var_s1;
    u16 temp_t1;
    u8 temp_s5;
    void *temp_v0;
    void *var_s0;

    f32 sp7C;
    f32 sp80;
    temp_f0 = (*(s32 *)((char *)(arg0) + 0x14C));
    temp_f14 = arg3 * temp_f0;
    temp_f20 = (*(s32 *)((char *)(arg0) + 0xB8)) * D_8009CBD8;
    arg3 = temp_f14;
    temp_f24 = sinf(temp_f20);
    temp_f0_2 = cosf(temp_f20);
    spA0 = 0.0f;
    spA4 = -arg3 * temp_f24;
    spA8 = arg3 * temp_f0_2;
    temp_f20_2 = (*(s32 *)((char *)(arg0) + 0x40)) * D_8009CBDC;
    temp_f24_2 = sinf(temp_f20_2);
    temp_f0_3 = cosf(temp_f20_2);
    var_s1 = 0;
    spA0 = (spA8 * temp_f24_2) + (0.0f * temp_f0_3);
    temp_f6 = (spA8 * temp_f0_3) + (-0.0f * temp_f24_2);
    spA8 = temp_f6;
    temp_f4 = spA0 + (*(s32 *)((char *)(arg0) + 0x14));
    spA0 = temp_f4;
    temp_f10 = spA4 + (*(s32 *)((char *)(arg0) + 0x18));
    spA4 = temp_f10;
    temp_f6_2 = temp_f6 + (*(s32 *)((char *)(arg0) + 0x1C));
    spA8 = temp_f6_2;
    temp_v0 = *(&D_800D1C90 + ((*(s32 *)((char *)(arg1) + 0x4)) * 4));
    temp_t1 = (*(s32 *)((char *)(temp_v0) + 0xE));
    sp60 = temp_f4;
    var_f8 = (f32) temp_t1;
    if ((s32) temp_t1 < 0) {
        var_f8 += 4294967296.0f;
    }
    temp_f20_3 = var_f8 * (*(s32 *)((char *)(arg1) + 0x14C));
    temp_f2 = sp60 - (*(s32 *)((char *)(arg1) + 0x14));
    var_f12 = temp_f10 - ((*(f32 *)((char *)(arg1) + 0x18)) + ((f32) (*(f32 *)((char *)(temp_v0) + 0x10)) * (*(f32 *)((char *)(arg1) + 0x150))));
    var_f14 = temp_f6_2 - (*(s32 *)((char *)(arg1) + 0x1C));
    if ((temp_f20_3 * temp_f20_3) < ((temp_f2 * temp_f2) + (var_f12 * var_f12) + (var_f14 * var_f14))) {
        goto block_11;
    }
    temp_s5 = *(&D_8009CBCC + arg2);
    temp_s6 = (*(s32 *)((char *)(arg1) + 0x1D4));
    if ((s32) temp_s5 > 0) {
        var_s0 = *(&D_80086C60 + (arg2 * 4));
loop_6:
        sp84 = (f32) (*(f32 *)((char *)(var_s0) + 0x4));
        sp88 = (f32) (*(f32 *)((char *)(var_s0) + 0x6));
        sp8C = (f32) (*(f32 *)((char *)(var_s0) + 0x8));
        func_15143134(var_f12, var_f14, &sp84, &sp78, temp_s6 + ((*(s32 *)((char *)(var_s0) + 0x0)) << 6));
        temp_f2_2 = spA0 - sp78;
        var_f12 = spA4 - sp7C;
        var_s1 += 1;
        var_f14 = spA8 - sp80;
        temp_f0_4 = ((f32) (*(f32 *)((char *)(var_s0) + 0x2)) * (*(f32 *)((char *)(arg1) + 0x14C))) + (arg4 * temp_f0);
        if (!((temp_f0_4 * temp_f0_4) < ((temp_f2_2 * temp_f2_2) + (var_f12 * var_f12) + (var_f14 * var_f14)))) {
            if ((*(s32 *)((char *)(arg1) + 0x125)) == 0) {
                func_1505D1C4((*(s32 *)((char *)(arg1) + 0x14)), (*(s32 *)((char *)(arg1) + 0x18)), (*(s32 *)((char *)(arg1) + 0x1C)), arg5, (s32) ((char *)(arg0) - (char *)(&gObjects)) / 812, 0, 0, 0);
            }
            return (*(s32 *)((char *)(var_s0) + 0x0)) + 1;
        }
        var_s0 = (char *)(var_s0) + 0xA;
        if (var_s1 == temp_s5) {
            goto block_11;
        }
        goto loop_6;
    }
block_11:
    return 0;
}

s32 func_1508108C(void * *arg0) {
    void * *var_a0;
    s32 var_v1;
    u8 temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x4));
    if (temp_v0 == D_8009BD30) {
        return 0;
    }
    if (temp_v0 == D_8009BD34) {
        return 1;
    }
    var_a0 = &D_8009BD3C;
    var_v1 = 3;
    if (temp_v0 == D_8009BD38) {
        return 2;
    }
loop_7:
    if (temp_v0 == (*(s32 *)((char *)(var_a0) + 0x0))) {
        return var_v1;
    }
    if (temp_v0 == (*(s32 *)((char *)(var_a0) + 0x4))) {
        return var_v1 + 1;
    }
    if (temp_v0 == (*(s32 *)((char *)(var_a0) + 0x8))) {
        return var_v1 + 2;
    }
    if (temp_v0 == (*(s32 *)((char *)(var_a0) + 0xC))) {
        return var_v1 + 3;
    }
    var_v1 += 4;
    var_a0 = (char *)(var_a0) + 0x10;
    if (var_v1 == 0x17) {
        return -1;
    }
    goto loop_7;
}

s32 func_1508114C(void * *arg0, s32 arg1, s32 arg2, void *arg3, void *arg4, void *arg5, f32 *arg6, s32 *arg7, s32 *arg8, s32 *arg9, void *arg10) {
    void *spD8;
    s32 spD4;
    s32 spCC;
    f32 spC8;
    void * spC4;
    f32 spBC;
    f32 spB8;
    s32 spB4;
    void * spA8;
    void * sp9C;
    void * sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    void * sp78;
    void * sp6C;
    f32 temp_f0;
    f32 var_f10;
    s32 temp_v0;
    s32 var_s1;
    s32 var_s4;
    u16 temp_t2;
    u8 temp_v0_2;
    void *temp_v0_3;
    void *var_s0;

    if ((*(s32 *)((char *)(arg0) + 0x1D4)) == 0) {
        return -1;
    }
    temp_v0 = func_1508108C(arg0);
    if (temp_v0 == -1) {
        return -1;
    }
    temp_v0_2 = *(&D_8009BD32 + (temp_v0 * 4));
    spD8 = *(&D_80086C60 + (temp_v0_2 * 4));
    spD4 = (s32) *(&D_8009CBCC + temp_v0_2);
    *arg6 = -1.0f;
    spB4 = (*(s32 *)((char *)(arg0) + 0x14));
    spB8 = ((f32) (*(f32 *)((char *)((*(&D_800D1C90 + ((s32)((*(f32 *)((char *)(arg0) + 0x4)) * 4))))) + 0x10)) * (*(f32 *)((char *)(arg0) + 0x150))) + (*(f32 *)((char *)(arg0) + 0x18));
    spBC = (*(s32 *)((char *)(arg0) + 0x1C));
    temp_t2 = (*(s32 *)((char *)((*(&D_800D1C90 + ((*(s32 *)((char *)(arg0) + 0x4)) * 4)))) + 0xE));
    var_f10 = (f32) temp_t2;
    if ((s32) temp_t2 < 0) {
        var_f10 += 4294967296.0f;
    }
    if (func_151452C4(arg1, arg2, &spB4, var_f10 * (*(s32 *)((char *)(arg0) + 0x150)), &sp9C, &sp90, &spC8, &spC4) == 0) {
        return 0;
    }
    var_s4 = -1;
    var_s1 = 0;
    if (spD4 > 0) {
        var_s0 = spD8;
        do {
            if (!((1 << (*(s32 *)((char *)(var_s0) + 0x0))) & (*(s32 *)((char *)(arg0) + 0x9C)))) {
                sp84 = (f32) (*(f32 *)((char *)(var_s0) + 0x4));
                sp88 = (f32) (*(f32 *)((char *)(var_s0) + 0x6));
                sp8C = (f32) (*(f32 *)((char *)(var_s0) + 0x8));
                func_15143134((f32)(s32)&sp84, (f32)(s32)&spB4, (*(f32 *)((char *)(arg0) + 0x1D4)) + ((s32)((*(f32 *)((char *)(var_s0) + 0x0))) << 6));
                if ((func_151452C4(arg1, arg2, &spB4, (f32) (*(f32 *)((char *)(var_s0) + 0x2)) * (*(f32 *)((char *)(arg0) + 0x14C)), &sp9C, &sp90, &spC8, &spC4) != 0) && ((temp_f0 = *arg6, (temp_f0 == -1.0f)) || ((spC8 < temp_f0) && ((s32) (*(f32 *)((char *)(var_s0) + 0x1)) >= var_s4)))) {
                    *arg6 = spC8;
                    (*(s32 *)((char *)&(sp78) + 0x0)) = (s32) (*(s32 *)((char *)&(sp9C) + 0x0));
                    (*(s32 *)((char *)&(sp78) + 0x4)) = (s32) (*(s32 *)((char *)&(sp9C) + 0x4));
                    (*(s32 *)((char *)&(sp78) + 0x8)) = (s32) (*(s32 *)((char *)&(sp9C) + 0x8));
                    (*(s32 *)((char *)&(sp6C) + 0x0)) = (s32) (*(s32 *)((char *)&(sp90) + 0x0));
                    (*(s32 *)((char *)&(sp6C) + 0x4)) = (s32) (*(s32 *)((char *)&(sp90) + 0x4));
                    (*(s32 *)((char *)&(sp6C) + 0x8)) = (s32) (*(s32 *)((char *)&(sp90) + 0x8));
                    (*(s32 *)((char *)&(spA8) + 0x0)) = (s32) (*(s32 *)((char *)&(spB4) + 0x0));
                    (*(s32 *)((char *)&(spA8) + 0x4)) = (s32) (*(s32 *)((char *)&(spB4) + 0x4));
                    (*(s32 *)((char *)&(spA8) + 0x8)) = (s32) (*(s32 *)((char *)&(spB4) + 0x8));
                    spCC = var_s1;
                    var_s4 = (s32) (*(s32 *)((char *)(var_s0) + 0x1));
                }
            }
            var_s1 += 1;
            var_s0 = (char *)(var_s0) + 0xA;
        } while (var_s1 != spD4);
    }
    if (*arg6 == -1.0f) {
        return 0;
    }
    *arg6 = spC8;
    *arg7 = spCC;
    temp_v0_3 = (char *)(spD8) + (spCC * 0xA);
    *arg9 = (s32) (*(s32 *)((char *)(temp_v0_3) + 0x1));
    *arg8 = (s32) (*(s32 *)((char *)(temp_v0_3) + 0x0));
    (*(s16 *)((char *)(arg10) + 0x0)) = (s16) (*(s16 *)((char *)(temp_v0_3) + 0x4));
    (*(s16 *)((char *)(arg10) + 0x2)) = (s16) (*(s16 *)((char *)(temp_v0_3) + 0x6));
    (*(s16 *)((char *)(arg10) + 0x4)) = (s16) (*(s16 *)((char *)(temp_v0_3) + 0x8));
    (*(s32 *)((char *)(arg3) + 0x0)) = (s32) (*(s32 *)((char *)&(sp78) + 0x0));
    (*(s32 *)((char *)(arg3) + 0x4)) = (s32) (*(s32 *)((char *)&(sp78) + 0x4));
    (*(s32 *)((char *)(arg3) + 0x8)) = (s32) (*(s32 *)((char *)&(sp78) + 0x8));
    (*(s32 *)((char *)(arg4) + 0x0)) = (s32) (*(s32 *)((char *)&(sp6C) + 0x0));
    (*(s32 *)((char *)(arg4) + 0x4)) = (s32) (*(s32 *)((char *)&(sp6C) + 0x4));
    (*(s32 *)((char *)(arg4) + 0x8)) = (s32) (*(s32 *)((char *)&(sp6C) + 0x8));
    if (arg5 != NULL) {
        (*(s32 *)((char *)(arg5) + 0x0)) = (s32) (*(s32 *)((char *)&(spA8) + 0x0));
        (*(s32 *)((char *)(arg5) + 0x4)) = (s32) (*(s32 *)((char *)&(spA8) + 0x4));
        (*(s32 *)((char *)(arg5) + 0x8)) = (s32) (*(s32 *)((char *)&(spA8) + 0x8));
    }
    return 1;
}

s32 func_15081574(void *arg0, f32 arg1, f32 arg2, void * **arg3, s32 arg4, s32 arg5) {
    void * *var_s0;
    s32 temp_v0;
    s32 temp_v0_2;

    *arg3 = NULL;
    var_s0 = &gObjects;
loop_1:
    if (((*(s32 *)((char *)(var_s0) + 0x0)) != 0) && ((*(s32 *)((char *)(var_s0) + 0x1D4)) != 0) && (arg5 == (*(s32 *)((char *)(var_s0) + 0x4)))) {
        temp_v0_2 = func_1508108C(var_s0);
        if (temp_v0_2 != -1) {
            temp_v0 = func_15080D20(arg0, var_s0, (*(s32 *)((char *)((&D_8009BD30 + (temp_v0_2 * 4))) + 0x2)), arg1, arg2, arg4);
            if (temp_v0 != 0) {
                *arg3 = var_s0;
                return temp_v0;
            }
        }
    }
    var_s0 = (char *)(var_s0) + 0x32C;
    if ((char *)(var_s0) == (char *)(&D_800D121C)) {
        return 0;
    }
    goto loop_1;
}
