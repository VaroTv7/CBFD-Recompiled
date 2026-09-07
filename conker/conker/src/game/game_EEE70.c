/**
 * Auto-decompiled from asm/EEE70.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 random_u32();                                /* extern */
f32 random_float();                                /* extern */
void *func_15132A4C();      /* extern */
void * func_15142314();           /* extern */
void * func_151429E0();      /* extern */
void * func_1514C2F0(); /* extern */
void * func_15165F80(); /* extern */
void * func_1518CA80();                          /* extern */
extern f32 D_800A0210;
extern f32 D_800A0214;
extern f32 D_800A0218;
extern f32 D_800A021C;
extern f32 D_800A0220;
extern f64 D_800A0228;

s32 func_150C19C0(f32 *arg0, void *arg1, s32 arg2) {
    s32 sp1C;
    s32 temp_t6;

    temp_t6 = arg2 & 0xFF;
    switch (temp_t6) {                              /* irregular */
    case 1:
        sp1C = 0x18;
        break;
    case 2:
        sp1C = 0x15;
        break;
    }
    func_15142314((*(s32 *)((char *)(arg1) + 0x1D4)), sp1C, arg0, arg1);
    return 1;
}

s32 func_150C1A2C(s32 arg0, void * arg1) {
    return 7;
}

void func_150C1A40(void *arg0, s32 arg1, void * arg2) {
    f32 sp124;
    f32 sp120;
    s16 sp118;
    s16 sp116;
    u8 sp114;
    void *sp110;
    s8 sp10E;
    s8 sp10C;
    s8 sp10B;
    s8 sp10A;
    s8 sp109;
    s8 sp108;
    s8 sp107;
    s8 sp106;
    s8 sp105;
    s8 sp104;
    s32 sp100;
    s8 spFC;
    s16 spFA;
    s16 spF8;
    s32 spF4;
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
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 sp7C;
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f28;
    f32 temp_f2;
    f32 temp_f30;
    s32 temp_s0;
    s32 temp_v1;
    s32 var_s1;
    s32 var_v0;
    void *temp_v0;

    f32 sp12C;
    if ((*(s32 *)((char *)(arg0) + 0x1D4)) != 0) {
        sp120 = ((*(s32 *)((char *)(arg0) + 0x14C)) + (*(s32 *)((char *)(arg0) + 0x150))) * 0.5f;
        func_150C19C0(&sp124, arg0, arg1 & 0xFF);
        if (arg1 == 1) {
            var_v0 = 0x10;
        } else {
            var_v0 = -0x10;
        }
        temp_f0 = sp120 * 70.0f;
        sp7C = temp_f0;
        func_1514C2F0(sp124, (*(s32 *)((char *)(arg0) + 0x180)), sp12C, temp_f0, (((s32) (*(s32 *)((char *)(arg0) + 0x76)) >> 8) + 0x40) & 0xFF, var_v0, 8, 0, 0, temp_f0 * D_800A0210, 0, 0xFF);
        func_15165F80(-1, (s32) sp124, (s32) ((f32) (s32) (*(s32 *)((char *)(arg0) + 0x180)) + 2.0f), (s32) sp12C, 8, 0x15, 0, 0xFF, 0);
        spFA = 5;
        spF4 = 0x29E9;
        spFC = 0;
        sp100 = 0;
        sp104 = 0xFF;
        sp105 = 1;
        sp106 = 0;
        sp107 = 0;
        sp108 = 0;
        sp109 = 0;
        sp10A = 0;
        sp10B = 0;
        sp10C = 0;
        sp10E = 1;
        sp110 = arg0;
        spC0 = 1.0f;
        spC4 = 1.0f;
        spC8 = 1.0f;
        spA8 = D_800A0214;
        spEC = 0.0f;
        spF0 = D_800A0218;
        sp116 = 0x10;
        sp118 = 0xF;
        sp114 = (*(s32 *)((char *)(arg0) + 0x3B));
        temp_v1 = (random_u32() & 7) + 5;
        var_s1 = temp_v1 - 1;
        if (temp_v1 != 0) {
            temp_f30 = D_800A021C;
            temp_f28 = D_800A0220;
            do {
                temp_s0 = random_u32() & 0xFF;
                temp_f20 = ((random_float() * temp_f28) + temp_f30) * 9.0f * sp120;
                temp_f22 = func_151423D8((temp_s0 - 0x40) & 0xFF);
                temp_f24 = func_151423D8(temp_s0 & 0xFF);
                spF8 = (random_u32() & 0xF) + 0x1E;
                spCC = (sp7C * temp_f22) + sp124;
                spD0 = (*(s32 *)((char *)(arg0) + 0x180)) + 2.0f;
                spDC = 2.0f * temp_f20;
                spD8 = temp_f20 * temp_f22;
                spD4 = (sp7C * temp_f24) + sp12C;
                spE0 = temp_f20 * temp_f24;
                temp_f2 = ((random_float() * temp_f28) + temp_f30) * sp120 * 1.5f;
                spAC = temp_f2;
                spB0 = temp_f2;
                spA4 = temp_f2;
                spB4 = random_float() * 360.0f;
                spB8 = random_float() * 360.0f;
                spBC = random_float() * 360.0f;
                spE4 = 25.0f - (random_float() * 50.0f);
                spE8 = 25.0f - (random_float() * 50.0f);
                temp_v0 = func_15132A4C(&spA4, 3, 0xFF, 4, 0xFF, 0);
                if (temp_v0 != NULL) {
                    (*(f32 *)((char *)(temp_v0) + 0x170)) = (f32) (*(f32 *)((char *)(arg0) + 0x180));
                }
                var_s1 -= 1;
            } while (var_s1 != 0);
        }
    }
}

s32 func_150C1E34(s32 arg0, void * arg1, f32 arg2, void * *arg3, f32 arg4, f32 arg5, f32 arg7, f32 arg12) {
    s8 sp4D;
    s8 sp4C;
    s8 sp4B;
    s8 sp4A;
    void * sp49;
    void * sp48;
    void * sp47;
    void * sp46;
    void * sp45;
    void * sp44;
    s16 sp42;
    s16 sp40;
    s16 sp3E;
    s16 sp3C;
    s16 sp3A;
    s16 sp38;
    s16 sp36;
    s16 sp34;
    s16 sp32;
    f32 sp24;
    void * *sp20;
    f32 sp1C;
    s32 temp_f10;
    s32 temp_f4;

    sp24 = arg4;
    sp1C = arg2;
    sp20 = arg3;
    sp3E = 0x96;
    sp42 = 0x258;
    temp_f4 = (s32) arg12;
    sp3A = (s16) (s32) ((arg2 - arg5) * 10.0f);
    sp40 = 0x14;
    sp3C = (s16) (s32) ((arg4 - arg7) * 10.0f);
    sp32 = (s16) temp_f4;
    temp_f10 = (s32) ((f64) arg12 * D_800A0228);
    sp34 = (s16) temp_f4;
    sp38 = (s16) temp_f10;
    sp36 = (s16) temp_f10;
    func_151429E0(arg2, arg3, NULL, &sp44, &sp45, &sp46);
    func_151429E0(0.0f, &sp47, &sp48, &sp49);
    sp4A = 0xFF;
    sp4B = 0xFF;
    sp4C = (random_u32() & 0xF) + 0xC;
    sp4D = 1;
    func_1518CA80(&sp1C, 1);
    return 1;
}
