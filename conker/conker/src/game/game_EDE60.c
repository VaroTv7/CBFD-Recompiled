/**
 * Auto-decompiled from asm/EDE60.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


u32 random_u32();                                /* extern */
f32 random_float();                                /* extern */
s32 func_15130280();        /* extern */
void *func_15167A68();      /* extern */
void * memcpy();                /* extern */
void func_150C0A48();                     /* static */
extern f32 D_800A01C0;

void func_150C09B0(s32 arg0, s32 arg1, s32 arg2) {
    func_15169850(arg1, arg2, arg0 + 0x20, arg0 + 0x24, arg0);
}

void func_150C09F0(void *arg0) {
    func_150C0A48(arg0);
    func_15169804(arg0);
}

void func_150C0A1C(void *arg0) {
    func_150C0A48(arg0);
    func_15169824(arg0);
}

void func_150C0A48(void *arg0) {
    s16 var_s0;
    s32 temp_s2;

    var_s0 = (*(s32 *)((char *)(arg0) + 0x44));
    if (var_s0 != -1) {
        do {
            temp_s2 = var_s0 * 8;
            func_1516972C((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x40))) + temp_s2)));
            var_s0 = (*(s32 *)((char *)(((*(s32 *)((char *)(arg0) + 0x40)) + temp_s2)) + 0x4));
        } while (var_s0 != -1);
    }
}

void *func_150C0AC0(void **arg0, s32 arg1, s32 arg2) {
    void *sp2C;
    s32 sp28;
    s16 temp_v0_5;
    s16 var_v1;
    s32 *temp_v0_2;
    void *temp_v0;
    void *temp_v0_3;
    void *temp_v0_4;

    sp28 = ((*(s32 *)((char *)(arg0) + 0x14)) * 8) + 0x48;
    if (!((*(s32 *)((char *)(arg0) + 0x18)) & 2)) {
        temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x8));
        if (temp_v0_2 == NULL) {
            return NULL;
        }
        if (*temp_v0_2 == 0) {
            return NULL;
        }
        goto block_5;
    }
block_5:
    temp_v0 = func_15167A68(0x25, arg2, sp28, 1, (s32) arg1, 1);
    if (temp_v0 == NULL) {
        return NULL;
    }
    sp2C = temp_v0;
    memcpy((char *)(temp_v0) + 0x18, arg0, 0x1C, temp_v0);
    (*(s32 *)((char *)(temp_v0) + 0x40)) = (void *) ((char *)(temp_v0) + 0x48);
    if ((*(s32 *)((char *)(arg0) + 0x18)) & 2) {
        temp_v0_3 = (*(s32 *)((char *)(temp_v0) + 0x18));
        (*(f32 *)((char *)(temp_v0) + 0x34)) = (f32) (*(f32 *)((char *)(temp_v0_3) + 0x0));
        (*(f32 *)((char *)(temp_v0) + 0x38)) = (f32) (*(f32 *)((char *)(temp_v0_3) + 0x8));
    } else {
        temp_v0_4 = (*(s32 *)((char *)(temp_v0) + 0x20));
        (*(f32 *)((char *)(temp_v0) + 0x34)) = (f32) (*(f32 *)((char *)(temp_v0_4) + 0x14));
        (*(f32 *)((char *)(temp_v0) + 0x38)) = (f32) (*(f32 *)((char *)(temp_v0_4) + 0x1C));
    }
    (*(s32 *)((char *)(temp_v0) + 0x3C)) = 0.0f;
    (*(s32 *)((char *)(temp_v0) + 0x44)) = -1;
    (*(s32 *)((char *)(temp_v0) + 0x46)) = 0;
    var_v1 = 0;
    if (((*(s32 *)((char *)(arg0) + 0x14)) - 1) > 0) {
        do {
            temp_v0_5 = var_v1 + 1;
            (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0x40)) + (var_v1 * 8))) + 0x4)) = temp_v0_5;
            var_v1 = temp_v0_5;
        } while (temp_v0_5 < ((*(s32 *)((char *)(arg0) + 0x14)) - 1));
    }
    (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0x40)) + ((*(s32 *)((char *)(arg0) + 0x14)) * 8))) - 0x4)) = -1;
    (*(s32 *)((char *)(temp_v0) + 0x10)) = 1;
    (*(s32 *)((char *)(temp_v0) + 0x14)) = 0;
    return temp_v0;
}

void func_150C0C38(void *arg0) {
    void *sp104;
    u8 sp103;
    f32 spFC;
    f32 spF8;
    f32 spF4;
    s8 spE5;
    s8 spE4;
    s8 spE3;
    s8 spE2;
    s8 spE1;
    s8 spE0;
    s32 spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    void * spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    s16 spA2;
    s16 spA0;
    s16 sp9E;
    s8 sp9D;
    s8 sp9C;
    s8 sp9B;
    s8 sp9A;
    s8 sp99;
    s8 sp98;
    s8 sp97;
    s8 sp96;
    s8 sp95;
    s8 sp94;
    s32 sp90;
    s32 sp8C;
    s16 sp8A;
    s16 sp88;
    s32 sp84;
    s32 sp80;
    void *sp7C;
    s32 sp60;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f4;
    f32 temp_f6;
    s16 temp_s2;
    s16 temp_t0;
    s16 var_v1;
    s32 temp_a3;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_a1;
    s32 var_s1;
    s32 var_v0;
    u16 temp_v0_3;
    u32 temp_v0_4;
    void *temp_t7;
    void *temp_v0;
    void *temp_v1_2;

    sp104 = arg0;
    sp103 = 0;
    if (!((*(s32 *)((char *)(arg0) + 0x30)) & 2)) {
        temp_v0 = (*(s32 *)((char *)(arg0) + 0x20));
        if ((*(s32 *)((char *)(temp_v0) + 0x0)) == 0) {
            sp103 = 1;
        }
        if ((*(s32 *)((char *)(arg0) + 0x24)) != (*(s32 *)((char *)(temp_v0) + 0x3B))) {
            sp103 = 1;
        }
        spF4 = (*(s32 *)((char *)(temp_v0) + 0x14));
        spF8 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x20))) + 0x180));
        spFC = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x20))) + 0x1C));
    } else {
        memcpy(&spF4, (*(s32 *)((char *)(arg0) + 0x18)), 0xC);
        spF8 -= 65.0f;
    }
    if (sp103 == 0) {
        var_v1 = (*(s32 *)((char *)(arg0) + 0x44));
        var_a1 = 1;
        if (var_v1 != -1) {
            do {
                temp_v0_2 = var_v1 * 8;
                temp_t7 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x40))) + temp_v0_2));
                (*(f32 *)((char *)(temp_t7) + 0x40)) = (f32) (*(f32 *)((char *)&(spF4) + 0x0));
                (*(s32 *)((char *)(temp_t7) + 0x44)) = (s32) (*(s32 *)((char *)&(spF4) + 0x4));
                (*(s32 *)((char *)(temp_t7) + 0x48)) = (s32) (*(s32 *)((char *)&(spF4) + 0x8));
                var_v1 = (*(s32 *)((char *)(((*(s32 *)((char *)(arg0) + 0x40)) + temp_v0_2)) + 0x4));
            } while (var_v1 != -1);
        }
        if ((*(s32 *)((char *)(arg0) + 0x30)) & 4) {
            temp_v0_3 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x20))) + 0x84));
            if ((temp_v0_3 != 0x1D) && (temp_v0_3 != 0x1E)) {
                var_a1 = 0;
            }
        }
        if ((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x20))) + 0x3C)) < 3.0f) {
            var_a1 = 0;
        }
        if (((spF4 != (*(s32 *)((char *)(arg0) + 0x34))) || (spFC != (*(s32 *)((char *)(arg0) + 0x38)))) && (var_a1 != 0)) {
            (*(f32 *)((char *)(arg0) + 0x3C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x3C)) + ((*(f32 *)((char *)(arg0) + 0x28)) * D_800BE9A4));
            if ((*(s32 *)((char *)(arg0) + 0x3C)) > 1.0f) {
                sp9D = 0x6C;
                sp88 = 0x5103;
                sp80 = 0x200005;
                sp84 = 0x1F0600;
                sp8C = 0;
                sp90 = 0;
                sp97 = 0xFF;
                sp9C = 0xFF;
                spC8 = 0.0f;
                spCC = 0.0f;
                spD0 = 0.0f;
                spD4 = 0.0f;
                sp9E = 0x1E;
                spA0 = 8;
                spD8 = 0x80DE01;
                spE0 = 8;
                spE1 = 6;
                spE2 = -1;
                spE3 = 0;
                spE4 = -1;
                spE5 = 0;
                sp7C = arg0;
                if (((*(s32 *)((char *)(arg0) + 0x3C)) > 1.0f) && ((*(s32 *)((char *)(arg0) + 0x46)) != -1)) {
loop_23:
                    temp_s2 = (*(s32 *)((char *)(arg0) + 0x46));
                    temp_v0_4 = random_u32();
                    temp_f22 = func_151423D8((temp_v0_4 - 0x40) & 0xFF);
                    temp_f24 = func_151423D8(temp_v0_4 & 0xFF & 0xFF);
                    temp_f6 = random_float() * 33.0f;
                    sp98 = 0x52;
                    sp99 = 0x6B;
                    sp9A = 0x97;
                    sp94 = 0x87;
                    sp95 = 0x6B;
                    sp96 = 0x97;
                    temp_f20 = temp_f6 + 40.0f;
                    sp9B = (random_u32() % 121U) + 0x50;
                    temp_f4 = (random_float() * 17.0f) + 67.0f;
                    spAC = temp_f4;
                    spA8 = temp_f4;
                    (*(f32 *)((char *)&(spB0) + 0x0)) = (f32) (*(f32 *)((char *)&(spF4) + 0x0));
                    (*(s32 *)((char *)&(spB0) + 0x4)) = (s32) (*(s32 *)((char *)&(spF4) + 0x4));
                    (*(s32 *)((char *)&(spB0) + 0x8)) = (s32) (*(s32 *)((char *)&(spF4) + 0x8));
                    spBC = temp_f20 * temp_f22;
                    spC4 = temp_f20 * temp_f24;
                    spD8 &= ~0xC0;
                    spC0 = 0.0f;
                    var_s1 = 0;
                    if (random_u32() & 1) {
                        var_s1 = 0x80;
                    }
                    if (random_u32() & 1) {
                        var_v0 = 0x40;
                    } else {
                        var_v0 = 0;
                    }
                    spD8 |= var_v0 | var_s1;
                    temp_t0 = (random_u32() % 22U) + 0x46;
                    spA2 = temp_t0;
                    sp8A = temp_t0;
                    spA4 = D_800A01C0;
                    temp_a3 = temp_s2 * 8;
                    (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x40))) + temp_a3)) = func_15130280(&sp80, 1, 0, 4, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
                    temp_v1 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x40))) + temp_a3));
                    if (temp_v1 != 0) {
                        sp60 = temp_a3;
                        memcpy(temp_v1 + 0xA8, &sp7C, 4, (void *) temp_a3);
                        temp_v1_2 = (*(s32 *)((char *)(arg0) + 0x40)) + sp60;
                        (*(s16 *)((char *)(arg0) + 0x46)) = (s16) (*(s16 *)((char *)(temp_v1_2) + 0x4));
                        (*(s16 *)((char *)(temp_v1_2) + 0x4)) = (s16) (*(s16 *)((char *)(arg0) + 0x44));
                        (*(s32 *)((char *)(arg0) + 0x44)) = temp_s2;
                    }
                    (*(f32 *)((char *)(arg0) + 0x3C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x3C)) - 1.0f);
                    if (((*(s32 *)((char *)(arg0) + 0x3C)) > 1.0f) && ((*(s32 *)((char *)(sp104) + 0x46)) != -1)) {
                        goto loop_23;
                    }
                }
                if ((*(s32 *)((char *)(arg0) + 0x3C)) > 1.0f) {
                    do {
                        (*(f32 *)((char *)(arg0) + 0x3C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x3C)) - 1.0f);
                    } while ((*(s32 *)((char *)(arg0) + 0x3C)) > 1.0f);
                }
            }
        }
        (*(s32 *)((char *)(arg0) + 0x34)) = spF4;
        (*(s32 *)((char *)(arg0) + 0x38)) = spFC;
    }
    if ((*(s32 *)((char *)(arg0) + 0x30)) & 1) {
        (*(s16 *)((char *)(arg0) + 0x2E)) = (s16) ((*(s16 *)((char *)(arg0) + 0x2E)) - D_800BE9E4);
        if ((*(s32 *)((char *)(arg0) + 0x2E)) < 0) {
            sp103 = 1;
        }
    }
    if (sp103 != 0) {
        func_1516972C(arg0);
    }
}

void func_150C1198(void *arg0) {
    s16 temp_a3;
    s16 var_a1;
    s16 var_a2;
    s32 temp_t0;
    s32 temp_v1;
    s32 var_v1;
    void *temp_t1;
    void *temp_v0;
    void *var_t1;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0xA8));
    temp_a3 = (*(s32 *)((char *)(temp_v0) + 0x44));
    var_v1 = 0;
    var_a1 = -1;
    var_a2 = temp_a3;
    if (temp_a3 != -1) {
loop_2:
        temp_t1 = (*(s32 *)((char *)(temp_v0) + 0x40)) + (var_a2 * 8);
        if ((char *)(arg0) == (char *)(*(s32 *)((char *)(temp_t1) + 0x0))) {
            var_v1 = 1;
        } else {
            var_a1 = var_a2;
            var_a2 = (*(s32 *)((char *)(temp_t1) + 0x4));
        }
        if ((var_a2 != -1) && (var_v1 == 0)) {
            goto loop_2;
        }
    }
    if (var_v1 != 0) {
        temp_t0 = (*(s32 *)((char *)(temp_v0) + 0x40));
        temp_v1 = var_a2 * 8;
        var_t1 = temp_t0 + temp_v1;
        if (var_a2 == temp_a3) {
            (*(s16 *)((char *)(temp_v0) + 0x44)) = (s16) (*(s16 *)((char *)(var_t1) + 0x4));
        } else {
            (*(s16 *)((char *)((temp_t0 + (var_a1 * 8))) + 0x4)) = (s16) (*(s16 *)((char *)(var_t1) + 0x4));
            var_t1 = (*(s32 *)((char *)(temp_v0) + 0x40)) + temp_v1;
        }
        (*(s16 *)((char *)(var_t1) + 0x4)) = (s16) (*(s16 *)((char *)(temp_v0) + 0x46));
        (*(s32 *)((char *)(temp_v0) + 0x46)) = var_a2;
    }
}
