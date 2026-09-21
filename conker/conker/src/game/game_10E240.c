/**
 * Auto-decompiled from asm/10E240.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_1509BE40();                      /* extern */
u32 random_u32();                                /* extern */
f32 random_float();                                /* extern */
void func_1510F800();                                 /* extern */
void *func_151149AC();                        /* extern */
s32 func_15130374();            /* extern */
void * func_15145CD0();           /* extern */
void * memcpy();                             /* extern */
extern s32 D_800A0FE0;
extern s32 D_800A0FE4;
extern s32 D_800A0FFC;
extern f32 D_800A1014;
extern f32 D_800A1018;
extern f32 D_800A101C;
extern f32 D_800A1020;
extern f32 D_800A1024;

void func_150E0D90(void *arg0) {
    s32 temp_t1;
    s32 temp_t5;
    s32 temp_t9;
    s32 var_v1;

    if ((*(s32 *)((char *)(arg0) + 0x23E)) == 9) {
        if (D_800BE9F0 == 0x1E) {
            func_1509BFB0(0, 0x4044, 1);
        }
        if (((*(s32 *)((char *)(arg0) + 0x2C)) != 0x100) && ((*(s32 *)((char *)(arg0) + 0x6C8)) == 0)) {
            if (func_15123934(arg0, 8, 0, 0, 0) != 0) {
                temp_t1 = (*(s32 *)((char *)(arg0) + 0x84)) | 0x300000;
                (*(s32 *)((char *)(arg0) + 0x84)) = temp_t1;
                (*(s32 *)((char *)(arg0) + 0x84)) = (s32) (temp_t1 & ~4);
                (*(s32 *)((char *)(arg0) + 0x1B4)) = 1;
                (*(s32 *)((char *)(arg0) + 0x1E0)) = 3;
                func_15124B18(arg0);
            }
            (*(s32 *)((char *)(arg0) + 0x348)) = 125.0f;
            (*(s32 *)((char *)(arg0) + 0x34C)) = 125.0f;
            (*(s32 *)((char *)(arg0) + 0x374)) = 220.0f;
            (*(s32 *)((char *)(arg0) + 0x190)) = 30.0f;
        } else {
            (*(s32 *)((char *)(arg0) + 0x190)) = 0.0f;
        }
        goto block_16;
    }
    if (((*(s32 *)((char *)(arg0) + 0x2C)) == 8) && ((*(s32 *)((char *)(arg0) + 0x6C8)) == 0) && (func_151239CC(arg0, 0) != 0)) {
        (*(s32 *)((char *)(arg0) + 0x34C)) = 110.0f;
        (*(s32 *)((char *)(arg0) + 0x348)) = 110.0f;
        (*(s32 *)((char *)(arg0) + 0x374)) = 300.0f;
    }
    var_v1 = D_800BE9F0;
    if (var_v1 == 0x1E) {
        func_1509BFB0(0, 0x4044, 0);
block_16:
        var_v1 = D_800BE9F0;
    }
    if (var_v1 == 0x2F) {
        (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) & 0x7FFFFFFF);
        goto block_26;
    }
    if (var_v1 == 0x1E) {
        if (func_1509BE40(1, 0x4042, 6, 0x9000) != 0) {
            (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) & 0x7FFFFFFF);
        } else {
            (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) | 0x80000000);
        }
        if (func_1509BE40(1, 0x4044, 6, 0x2000) != 0) {
            temp_t5 = (*(s32 *)((char *)(arg0) + 0x84)) | 0x20001010;
            (*(s32 *)((char *)(arg0) + 0x84)) = temp_t5;
            (*(s32 *)((char *)(arg0) + 0x84)) = (s32) (temp_t5 & ~8);
        } else {
            temp_t9 = (*(s32 *)((char *)(arg0) + 0x84)) & 0xDFFFEFEF;
            (*(s32 *)((char *)(arg0) + 0x84)) = temp_t9;
            (*(s32 *)((char *)(arg0) + 0x84)) = (s32) (temp_t9 | 8);
        }
block_26:
        var_v1 = D_800BE9F0;
    }
    if (var_v1 == 0x1B) {
        if (func_1509BE40(1, 0x406E, 6, 0x9000) != 0) {
            (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) | 0x200);
        } else {
            (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) & ~0x200);
        }
        if (func_1509BE40(1, 0x406F, 6, 0x9000) != 0) {
            (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) | 0x80000000);
            return;
        }
        (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) & 0x7FFFFFFF);
    }
}

s32 func_150E1060(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp44;
    f32 sp40;
    s32 sp3C;
    void *sp38;
    s8 sp34;
    s32 temp_v0_2;
    s32 var_v1;
    s8 temp_a3;
    void *temp_v0;

    temp_a3 = arg0 & 0xFF;
    if (temp_a3 < 0) {
        return 0;
    }
    if (temp_a3 >= 2) {
        return 0;
    }
    sp34 = temp_a3;
    temp_v0 = func_151149AC(*(&D_800A0FE0 + temp_a3), temp_a3);
    sp38 = temp_v0;
    if (temp_v0 == NULL) {
        return 0;
    }
    func_1510F800(0);
    sp3C = func_1510FD20((*(s32 *)((char *)(sp38) + 0x10)), (*(s32 *)((char *)(sp38) + 0x14)));
    sp40 = 0.0f;
    temp_v0_2 = func_15149130(0x12C, -1, 0x1F, -1, 0, 0x1F, 0x10, (s32) arg1, arg2);
    var_v1 = temp_v0_2;
    if (temp_v0_2 != 0) {
        sp44 = temp_v0_2;
        memcpy(temp_v0_2 + 0x28, &sp34, 0x10);
        var_v1 = sp44;
    }
    return var_v1;
}

void func_150E114C(void *arg0) {
    s8 sp119;
    s8 sp118;
    s8 sp117;
    s8 sp116;
    s8 sp115;
    s8 sp114;
    s32 sp10C;
    f32 sp108;
    f32 sp104;
    f32 sp100;
    f32 spFC;
    f32 spF8;
    f32 spF4;
    f32 spF0;
    f32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    s16 spD6;
    s16 spD4;
    s16 spD2;
    s8 spD1;
    s8 spD0;
    s8 spCF;
    s8 spCE;
    s8 spCD;
    s8 spCC;
    s8 spCB;
    s8 spCA;
    s8 spC9;
    s8 spC8;
    s32 spC4;
    s32 spC0;
    s16 spBE;
    s16 spBC;
    s32 spB8;
    s32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    void *spA0;
    void *sp9C;
    f32 *sp98;
    f32 *sp94;
    f32 temp_f26;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 var_v1;
    s32 temp_t7;
    s32 temp_v0;
    s32 var_s0;
    s32 var_v0;
    s32 var_v0_2;
    void *temp_s1;

    f32 spE8;
    f32 spEC;
    temp_s1 = (char *)(arg0) + 0x28;
    (*(f32 *)((char *)(temp_s1) + 0xC)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0xC)) + ((204.0f + (random_float() * 159.0f)) * D_800A1014 * D_800BE9A4));
    if ((*(s32 *)((char *)(temp_s1) + 0xC)) > 1.0f) {
        var_v0 = 0;
        var_v1 = 0;
        if (D_80082FA0 >= 0) {
            do {
                temp_t7 = 1 << var_v0;
                var_v0 += 1;
                var_v1 |= temp_t7;
            } while (D_80082FA0 >= var_v0);
        }
        if (!((*(s32 *)((char *)((*(s32 *)((char *)(temp_s1) + 0x8))) + 0x2)) & var_v1)) {
            do {
                (*(f32 *)((char *)(temp_s1) + 0xC)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0xC)) - 1.0f);
            } while ((*(s32 *)((char *)(temp_s1) + 0xC)) > 1.0f);
            return;
        }
        spD1 = 0x29;
        spBC = 0x4403;
        spB4 = 0x200005;
        spD2 = 0x21;
        spD4 = 7;
        sp10C = 0x1CE05;
        sp114 = 6;
        sp115 = 8;
        sp116 = 0x10;
        sp117 = -1;
        spB8 = 0;
        spC0 = 0;
        spC4 = 0;
        sp108 = 0.0f;
        sp118 = -1;
        sp119 = 0;
        spD6 = 0x27;
        spC8 = 0xDD;
        spC9 = 0xD3;
        spCA = 0xCD;
        spCB = 0xFF;
        spCC = 0x57;
        spCD = 0x55;
        spCE = 0x5A;
        spD0 = 0xFF;
        spB0 = D_800A1018;
        spD8 = D_800A101C;
        sp9C = ((*(s32 *)((char *)(arg0) + 0x28)) * 0xC) + &D_800A0FE4;
        spA0 = ((*(s32 *)((char *)(arg0) + 0x28)) * 0xC) + &D_800A0FFC;
        sp94 = &spE4;
        sp98 = &spA4;
        func_15145CD0((*(s32 *)((char *)(temp_s1) + 0x4)), &sp9C, &sp94, 2);
        spA4 -= spE4;
        spA8 -= spE8;
        spAC -= spEC;
        temp_f26 = D_800A1020;
        do {
            sp10C &= ~0xC0;
            var_s0 = 0;
            if (random_u32() & 1) {
                var_s0 = 0x80;
            }
            if (random_u32() & 1) {
                var_v0_2 = 0x40;
            } else {
                var_v0_2 = 0;
            }
            sp10C |= var_v0_2 | var_s0;
            spF0 = 0.0f;
            spF4 = 0.0f;
            spF8 = 0.0f;
            spCF = 0xFF;
            spBE = (random_u32() % 17U) + 0x32;
            temp_f2 = (random_float() * 165.0f) + temp_f26;
            spDC = temp_f2;
            spE0 = temp_f2;
            temp_f2_2 = ((random_float() * 195.0f) + 356.0f) * D_800A1024;
            spFC = spA4 * temp_f2_2;
            sp100 = spA8 * temp_f2_2;
            sp104 = spAC * temp_f2_2;
            temp_v0 = func_15130374(&spB4, 1, 4, (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
            if (temp_v0 != 0) {
                memcpy(temp_v0 + 0xA8, (s8 *) &spB0, 4);
            }
            (*(f32 *)((char *)(temp_s1) + 0xC)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0xC)) - 1.0f);
        } while ((*(s32 *)((char *)(temp_s1) + 0xC)) > 1.0f);
    }
}
