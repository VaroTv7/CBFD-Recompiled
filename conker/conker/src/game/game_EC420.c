/**
 * Auto-decompiled from asm/EC420.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_15043F6C(); /* extern */
void * func_150825C0();                            /* extern */
void * func_1508EE0C();                            /* extern */
void * func_150A7960(); /* extern */
void * func_150A7A48();                     /* extern */
void * func_150A7DA0();                /* extern */
f32 random_float();                                /* extern */
void * func_15114D24(); /* extern */
void * func_15114F04();                    /* extern */
void * func_1511B51C();                            /* extern */
s32 func_15133B98(); /* extern */
void * func_15136C3C();       /* extern */
void * func_15150400();             /* extern */
void * func_15152190(); /* extern */
void * func_15153634();                  /* extern */
void * func_15164F0C();                  /* extern */
void * func_1516D99C(); /* extern */
void * func_1518B6B0();             /* extern */
void * func_1518CD20();                      /* extern */
s32 func_15195FB0(); /* extern */
void * func_151D8868();                     /* extern */
s32 func_151EF610();                                /* extern */
extern s32 D_800A0100;
extern s32 D_800A0104;
extern s32 D_800A0108;
extern s32 D_800A010C;
extern f32 D_800A0110;
extern f32 D_800A0114;
extern f32 D_800A0118;
extern f32 D_800A011C;
extern f32 D_800A0120;
extern f32 D_800A0124;
extern f32 D_800A0128;
extern f32 D_800A012C;
extern f32 D_800A0130;
extern f32 D_800A0134;
extern f32 D_800A0138;
extern f32 D_800A013C;
extern f32 D_800A0140;
extern f32 D_800A0144;
extern f32 D_800A0148;
extern f32 D_800A014C;
extern f32 D_800A0150;
extern f32 D_800A0154;
extern f32 D_800A0158;
extern f32 D_800A015C;
extern f32 D_800A0160;
extern f32 D_800A0164;
extern f32 D_800A0168;
extern f32 D_800A016C;
extern f32 D_800A0170;
extern f32 D_800A0174;
extern f32 D_800A0178;
extern f32 D_800A017C;
extern f32 D_800A0180;
extern f32 D_800A0184;
extern f32 D_800A0188;
extern f32 D_800A018C;
extern f32 D_800A0190;
extern f32 D_800A0194;
extern f32 D_800A0198;
extern f32 D_800A019C;
extern f32 D_800A01A0;
extern f32 D_800A01A4;
extern f32 D_800A01A8;
extern f32 D_800A01AC;
extern f32 D_800A01B0;
extern u8 D_800BE9EB;
extern u8 D_800C35E8;

void func_150BEF70(s32 arg0) {

}

void func_150BEF7C(s32 arg0) {
    s16 var_s0;
    s32 var_s1;

    var_s0 = 0x17C;
    var_s1 = 0;
    do {
        func_1516D99C(0x1FDB, 0x25, var_s0, 0xD, 0, 0x50, 0x8F, 0, 0, 0, 0, 0, 8, 0xC8, 0xA, 0, 0, 0, 0, 0, 0x28, 0x28, 4, 0, 0, 0, 0, 0x555, 0x555, 0x555, 0x555, arg0 & 0xFFFF, 0x32, 0, 0xFF, 0x14, 0xFA0, 0x7D0, 1, 6, 0, 1, 0, 0, 0, 0, 3, 0xFF, 0);
        var_s1 += 1;
        var_s0 = -var_s0;
    } while (var_s1 != 2);
}

s32 func_150BF0F4(void *arg0) {
    s16 temp_v1_2;
    s32 var_v1;
    u8 temp_v1;
    u8 var_v0;

    var_v0 = (*(s32 *)((char *)(arg0) + 0x1F));
    temp_v1 = (*(s32 *)((char *)(arg0) + 0x26));
    if ((*(s32 *)((char *)(arg0) + 0x24)) != 0) {
        if (var_v0 != temp_v1) {
            var_v0 += D_800BE9E4 * (*(s32 *)((char *)(arg0) + 0x27));
            if ((s32) temp_v1 < (s32) var_v0) {
                var_v0 = temp_v1;
            }
            (*(s32 *)((char *)(arg0) + 0x1F)) = var_v0;
        }
    } else if (var_v0 != 0) {
        var_v0 -= D_800BE9E4 * (*(s32 *)((char *)(arg0) + 0x2F));
        if ((s32) var_v0 < 0) {
            var_v0 = 0;
        }
        (*(s32 *)((char *)(arg0) + 0x1F)) = var_v0;
    }
    if (((*(s32 *)((char *)(arg0) + 0x24)) == 0) && (var_v0 == 0)) {
        return 1;
    }
    (*(s16 *)((char *)(arg0) + 0x14)) = (s16) ((*(s16 *)((char *)(arg0) + 0x14)) + ((*(s16 *)((char *)(arg0) + 0x2D)) * D_800BE9E4));
    temp_v1_2 = (*(s32 *)((char *)(arg0) + 0x14));
    (*(s16 *)((char *)(arg0) + 0x16)) = (s16) ((*(s16 *)((char *)(arg0) + 0x16)) + ((*(s16 *)((char *)(arg0) + 0x2E)) * D_800BE9E4));
    if ((temp_v1_2 <= 0) || (temp_v1_2 <= 0)) {
        (*(s32 *)((char *)(arg0) + 0x16)) = 0;
        (*(s16 *)((char *)(arg0) + 0x14)) = (s16) (*(s16 *)((char *)(arg0) + 0x16));
        return 1;
    }
    var_v1 = (*(s32 *)((char *)(arg0) + 0x2C)) + D_800BE9E4;
    if (var_v1 >= 0x80) {
        var_v1 = 0x7F;
    }
    (*(u8 *)((char *)(arg0) + 0x2C)) = (u8) var_v1;
    return 0;
}

void func_150BF21C(void *arg0) {
    void *spF4;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spD4;
    void * sp94;
    void * sp54;
    f32 sp50;
    s32 sp4C;
    f32 sp40;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f4;
    f32 var_f2;
    s32 var_v0;
    s32 var_v1;
    u8 temp_t6;
    u8 temp_t7;
    void *var_s0;
    void *var_v0_2;

    spD4 = 0.0f;
    sp50 = D_800A0110;
    spE4 = (*(s32 *)((char *)(arg0) + 0x7C));
    if (D_800C35EA == 0) {
        var_v0 = 0;
    } else {
        var_v0 = 1;
        if (D_800C35E8 == 1) {
            var_v0 = 0;
        }
    }
    if (D_800BE9B4 != 0) {
        spE4 = (f32) (*(f32 *)((char *)(arg0) + 0x3C));
        (*(s32 *)((char *)(arg0) + 0x7C)) = spE4;
    }
    if (var_v0 == 0) {
        temp_f14 = (f32) (*(f32 *)((char *)(arg0) + 0x3C)) - spE4;
        if (temp_f14 == 0.0f) {
            (*(s32 *)((char *)(arg0) + 0x84)) = 0.0f;
            (*(f32 *)((char *)(arg0) + 0x80)) = (f32) ((*(f32 *)((char *)(arg0) + 0x80)) + D_800A0110);
            temp_f4 = ((spE4 / D_800A0114) + 1.0f) * D_800BE9A4;
            spD4 = temp_f4;
            if (temp_f4 < 0.0f) {
                spD4 = 0.0f;
            }
            func_15114D24(temp_f14, arg0, (void *)-1, 0x7D00, 0x1F4, 0x7D0, 0);
        } else {
            sp50 = D_800A0118;
            (*(s32 *)((char *)(arg0) + 0x80)) = 0.0f;
            var_f2 = (*(s32 *)((char *)(arg0) + 0x84));
            if (temp_f14 < 0.0f) {
                if (var_f2 > -60.0f) {
                    var_f2 -= 5.0f;
                }
            } else {
                if (var_f2 < 6.0f) {
                    var_f2 += 0.5f;
                }
                spDC = var_f2;
                spEC = temp_f14;
                func_15114D24(temp_f14, arg0, 0xB9, 0x7D00, 0x1F4, 0x7D0, 1);
            }
            temp_f12 = fabsf(var_f2);
            temp_f0 = fabsf(temp_f14);
            (*(s32 *)((char *)(arg0) + 0x84)) = var_f2;
            if (temp_f12 < temp_f0) {
                spE4 += var_f2 * D_800BE9A4;
                if (var_f2 < -25.0f) {
                    (*(s32 *)((char *)(arg0) + 0x124)) = -10.0f;
                } else {
                    (*(f32 *)((char *)(arg0) + 0x124)) = (f32) (var_f2 * D_800A011C);
                }
                (*(s32 *)((char *)(arg0) + 0xDC)) = 0x7D00;
                temp_t7 = (*(s32 *)((char *)(arg0) + 0x73)) & 0xFFFC;
                (*(s32 *)((char *)(arg0) + 0x73)) = temp_t7;
                (*(u8 *)((char *)(arg0) + 0x73)) = (u8) (temp_t7 | 2);
                if ((*(s32 *)((char *)(arg0) + 0x74)) == 0) {
                    spDC = var_f2;
                    func_15114D24(temp_f12, (*(void **)&temp_f14), arg0, 0xB9, 0x3E80, 0x3E8, 0xFA0, 0);
                }
                spDC = var_f2;
                func_15114F04(arg0, 0x3E80, (s32) (var_f2 * 500.0f));
            } else {
                spE4 = (f32) (*(f32 *)((char *)(arg0) + 0x3C));
                if (var_f2 < 0.0f) {
                    (*(s32 *)((char *)(arg0) + 0xDC)) = 0x80;
                }
                (*(s32 *)((char *)(arg0) + 0x124)) = 0.0f;
                temp_t6 = (*(s32 *)((char *)(arg0) + 0x73)) & 0xFFFC;
                (*(s32 *)((char *)(arg0) + 0x73)) = temp_t6;
                (*(u8 *)((char *)(arg0) + 0x73)) = (u8) (temp_t6 | 3);
                spDC = var_f2;
                func_15114D24(temp_f12, (*(void **)&temp_f14), arg0, -1, 0, 0, 0, 0);
            }
            (*(s32 *)((char *)(arg0) + 0x84)) = spDC;
            (*(s32 *)((char *)(arg0) + 0x7C)) = spE4;
        }
        temp_f2 = (*(s32 *)((char *)(arg0) + 0x0));
        temp_f14_2 = spD4 * 3.0f;
        (*(f32 *)((char *)(arg0) + 0x0)) = (f32) (temp_f2 + (((temp_f14_2 * sinf((*(f32 *)((char *)(arg0) + 0x80)))) - temp_f2) * sp50));
        sp40 = temp_f14_2;
        temp_f2_2 = (*(s32 *)((char *)(arg0) + 0x4));
        (*(f32 *)((char *)(arg0) + 0x4)) = (f32) (temp_f2_2 + (((spD4 * 4.0f * sinf((*(f32 *)((char *)(arg0) + 0x80)) * D_800A0120)) - temp_f2_2) * sp50));
        temp_f2_3 = (*(s32 *)((char *)(arg0) + 0x8));
        (*(f32 *)((char *)(arg0) + 0x8)) = (f32) (temp_f2_3 + (((sp40 * cosf((*(f32 *)((char *)(arg0) + 0x80)))) - temp_f2_3) * sp50));
    } else {
        spE4 = 0.0f;
    }
    func_150A7DA0(&sp94, 0.0f, spE4, 0.0f);
    func_15043F6C(&sp54, (*(f32 *)((char *)(arg0) + 0x0)), (*(f32 *)((char *)(arg0) + 0x4)), (*(f32 *)((char *)(arg0) + 0x8)), (*(f32 *)((char *)(arg0) + 0x2C)), (*(f32 *)((char *)(arg0) + 0x30)), (*(f32 *)((char *)(arg0) + 0x34)), (f32) (*(f32 *)((char *)(arg0) + 0x10)), (f32) (*(f32 *)((char *)(arg0) + 0x12)), (f32) (*(f32 *)((char *)(arg0) + 0x14)));
    func_150A7A48(&sp94, &sp54, &sp94);
    var_s0 = (*(s32 *)((char *)(arg0) + 0x28));
    var_v0_2 = (*(s32 *)((char *)(((char *)(arg0) + (D_800BE9C0 * 4))) + 0x20));
    var_v1 = 0;
    if ((s32) (*(s32 *)((char *)(arg0) + 0x16)) > 0) {
        do {
            sp4C = var_v1;
            spF4 = var_v0_2;
            func_150A7960(&sp94, (f32) (*(f32 *)((char *)(var_s0) + 0x0)), (f32) (*(f32 *)((char *)(var_s0) + 0x2)), (f32) (*(f32 *)((char *)(var_s0) + 0x4)), &spE8, &spE4, &spE0);
            var_s0 = (char *)(var_s0) + 0x10;
            var_v1 = sp4C + 1;
            var_v0_2 = (char *)(spF4) + 0x10;
            (*(s16 *)((char *)(var_v0_2) - 0x10)) = (s16) (s32) spE8;
            (*(s16 *)((char *)(var_v0_2) - 0xE)) = (s16) (s32) spE4;
            (*(s16 *)((char *)(var_v0_2) - 0xC)) = (s16) (s32) spE0;
        } while (var_v1 < (s32) (*(s32 *)((char *)(arg0) + 0x16)));
    }
}

void func_150BF760(void *arg0) {
    void *sp3C;
    f32 sp2C;
    f32 temp_f0;
    f32 temp_f16;
    f32 temp_f18;
    f32 var_f2;
    s32 temp_t1;
    s32 temp_v0_2;
    s32 temp_v0_3;
    void *temp_v0;
    void *temp_v1;
    void *var_a0;

    if ((D_800C35EA != 1) || (D_800C35E8 == 1)) {
        sp2C = 0.0f;
        func_1511B51C(arg0);
        if ((*(s32 *)((char *)(arg0) + 0x124)) == 0) {
            sp2C = 0.0f;
            (*(s32 *)((char *)(arg0) + 0x124)) = func_15195FB0(arg0, D_800902B8, 1, -1, 0, 0, -8);
        }
        sp2C = 0.0f;
        temp_v0 = func_15083E90(0x14);
        var_f2 = 0.0f;
        var_a0 = temp_v0;
        temp_t1 = (*(s32 *)((char *)(arg0) + 0x73)) & 3;
        if (temp_v0 != NULL) {
            temp_v1 = (*(s32 *)((char *)(temp_v0) + 0x2D0));
            var_f2 = (*(s32 *)((char *)(temp_v1) + 0x8)) / ((*(s32 *)((char *)(temp_v1) + 0x18)) - 2.0f);
        }
        (*(s32 *)((char *)(arg0) + 0xA8)) = 0.0f;
        if (temp_t1 == 2) {
            if (var_f2 <= 0.75f) {
                sp3C = var_a0;
                temp_f18 = -sinf(var_f2 * D_800A0124 * D_800A0128) * 10.0f;
                (*(s32 *)((char *)(arg0) + 0xA8)) = temp_f18;
            }
            if (var_a0 == NULL) {
                temp_v0_2 = func_15083E0C(0x14);
                (*(s32 *)((char *)((D_800D20FC + (temp_v0_2 * 0x30))) + 0x2)) = 0;
                func_150825C0(temp_v0_2, 0);
                var_a0 = func_15083E90(0x14);
            }
            if ((*(s32 *)((char *)(var_a0) + 0x232)) != 2) {
                (*(s32 *)((char *)(var_a0) + 0x232)) = 2U;
                goto block_31;
            }
        } else if (temp_t1 == 3) {
            if ((temp_v0 != NULL) && (var_f2 >= 1.0f)) {
                func_15060F28(var_a0, 0, arg0);
            }
        } else if (temp_t1 == 0) {
            if (var_f2 >= 0.25f) {
                sp3C = var_a0;
                sp2C = var_f2;
                temp_f16 = sinf((var_f2 * D_800A012C) - D_800A012C) * 10.0f;
                (*(s32 *)((char *)(arg0) + 0xA8)) = temp_f16;
            }
            if ((var_a0 != NULL) && (var_f2 >= 1.0f)) {
                func_15060F28(var_a0, 0, arg0);
            }
        } else if (temp_t1 == 1) {
            if (var_f2 >= 0.25f) {
                sp3C = var_a0;
                temp_f0 = sinf((var_f2 * D_800A0130) - D_800A0130);
                (*(f32 *)((char *)(arg0) + 0xA8)) = (f32) (temp_f0 * 10.0f);
            }
            if (var_a0 == NULL) {
                temp_v0_3 = func_15083E0C(0x14);
                (*(s32 *)((char *)((D_800D20FC + (temp_v0_3 * 0x30))) + 0x2)) = 0;
                func_150825C0(temp_v0_3, 0);
                var_a0 = func_15083E90(0x14);
            }
            if ((var_a0 == NULL) && ((*(s32 *)((char *)(var_a0) + 0x232)) != 3)) {
                (*(s32 *)((char *)(var_a0) + 0x232)) = 3U;
block_31:
                (*(s32 *)((char *)(var_a0) + 0x218)) = 0;
            }
        }
    }
}

void func_150BFA7C(void *arg0) {
    s32 unksp2E;
    s16 sp5E;
    s16 sp5C;
    s16 sp5A;
    s32 sp50;
    s32 sp4C;
    s32 sp44;
    s32 sp40;
    s8 sp3E;
    s8 sp3D;
    s8 sp3C;
    s16 sp3A;
    s8 sp38;
    s32 sp30;
    s32 sp2C;
    s16 temp_v0;
    s16 temp_v0_4;
    s16 var_t0;
    s32 temp_t6;
    s32 temp_t6_2;
    s32 temp_t8;
    s32 temp_t9;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_5;
    s32 var_t1;
    s32 var_t2;
    s32 var_v1;
    u8 temp_t7;

    var_t2 = 0x10;
    temp_t8 = ((s32) (*(s32 *)((char *)(arg0) + 0x3C)) >> 0x10) & 0xFFFF;
    sp40 = temp_t8;
    sp50 = 0;
    var_t1 = (*(s32 *)((char *)(arg0) + 0x73)) & 3;
    if (temp_t8 == 0) {
        sp50 = 0x82;
    } else if (sp40 == 2) {
        sp50 = 0x622;
        var_t2 = 0x30;
    }
    var_v1 = (*(s32 *)((char *)(arg0) + 0x7C));
    if (var_v1 == 0) {
        var_v1 = (*(s32 *)((char *)(arg0) + 0x12)) | 0x80000000;
        (*(s32 *)((char *)(arg0) + 0x7C)) = var_v1;
    }
    temp_v0 = (s16) var_v1 - 0x50;
    temp_t6 = temp_v0 - sp50;
    var_t0 = (s16) var_v1;
    sp5E = temp_v0;
    sp2C = temp_t6;
    sp5A = (s16) temp_t6;
    sp30 = (s32) temp_v0;
    if (sp40 == 1) {
        temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x80));
        if (((s16) var_v1 - (*(s16 *)((char *)(arg0) + 0x12))) != temp_v0_2) {
            (*(s16 *)((char *)(arg0) + 0x12)) = (s16) ((s16) var_v1 + temp_v0_2);
        }
    } else {
        if (((*(s32 *)((char *)(arg0) + 0x4F)) & 4) && (gObjects[0].unk31C->unk57 == 1)) {
            sp5C = var_t0;
            sp44 = var_t1;
            sp4C = var_t2;
            func_1518B6B0(gObjects[0].x_position, gObjects[0].y_position, gObjects[0].z_position, 0xFF, 0);
            if (var_t1 == 0) {
                sp5C = var_t0;
                sp44 = var_t1;
                sp4C = var_t2;
                func_15164F0C(3, D_800BE9EB, 0, 0xFF, 0);
                sp38 = 1;
                sp3A = 0x3C;
                sp3D = 1;
                sp3C = 8;
                sp3E = -1;
                func_151D8868(&sp38, 0, 0xFF, 0);
                var_t0 = sp5C;
                var_t1 = sp44;
                var_t2 = sp4C;
            }
        }
        if (var_t1 == 3) {
            if (sp30 != (*(s32 *)((char *)(arg0) + 0x12))) {
                (*(s16 *)((char *)(arg0) + 0x12)) = (s16) sp30;
            }
            if (!((*(s32 *)((char *)(arg0) + 0x4F)) & 4) && !((*(s32 *)((char *)(arg0) + 0x73)) & 4)) {
                var_t1 = 1;
            }
        } else if (var_t1 == 0) {
            if (var_t0 != (*(s32 *)((char *)(arg0) + 0x12))) {
                (*(s32 *)((char *)(arg0) + 0x12)) = var_t0;
            }
        } else if (var_t1 == 2) {
            temp_v0_3 = (*(s32 *)((char *)(arg0) + 0x80)) + D_800BE9E4;
            (*(s32 *)((char *)(arg0) + 0x80)) = temp_v0_3;
            if (temp_v0_3 < 0) {
                sp44 = var_t1;
                (*(f32 *)((char *)(arg0) + 0x0)) = (f32) (((f32) (func_151EF610() % 5) - 2.0f) * 0.125f);
                (*(f32 *)((char *)(arg0) + 0x8)) = (f32) (((f32) (func_151EF610() % 5) - 2.0f) * 0.125f);
            } else {
                if (temp_v0_3 < 0x28) {
                    sp44 = var_t1;
                    sp4C = var_t2;
                    (*(f32 *)((char *)(arg0) + 0x0)) = (f32) (((f32) (func_151EF610() % 5) - 2.0f) / 12.0f);
                    (*(f32 *)((char *)(arg0) + 0x8)) = (f32) (((f32) (func_151EF610() % 5) - 2.0f) / 12.0f);
                } else {
                    (*(s32 *)((char *)(arg0) + 0x8)) = 0.0f;
                    (*(s32 *)((char *)(arg0) + 0x0)) = 0.0f;
                }
                temp_v0_4 = (*(s32 *)((char *)(arg0) + 0x12));
                if (temp_v0_4 < sp30) {
                    if (sp40 == 0) {
                        var_t2 = (s32) (((temp_v0_4 - unksp2E) + 0x10) * var_t2) / sp50;
                        if ((*(s32 *)((char *)(arg0) + 0x84)) == 0) {
                            sp44 = var_t1;
                            sp4C = var_t2;
                            func_1518CD20(arg0, 0xFF, 0);
                            (*(s32 *)((char *)(arg0) + 0x84)) = 1;
                        }
                    }
                    (*(s16 *)((char *)(arg0) + 0x12)) = (s16) ((*(s16 *)((char *)(arg0) + 0x12)) - var_t2);
                    (*(s32 *)((char *)(arg0) + 0x120)) = (s32) ((*(s32 *)((char *)(arg0) + 0x12)) - sp30);
                } else {
                    (*(s16 *)((char *)(arg0) + 0x12)) = (s16) (temp_v0_4 - var_t2);
                    (*(s32 *)((char *)(arg0) + 0x84)) = 0;
                }
                if ((unksp2E >= (*(s32 *)((char *)(arg0) + 0x12))) || (var_t2 == 0)) {
                    (*(s32 *)((char *)(arg0) + 0x12)) = sp5A;
                    temp_v0_5 = sp5A - sp5E;
                    temp_t9 = (*(s32 *)((char *)(arg0) + 0x7C)) + temp_v0_5;
                    temp_t6_2 = (*(s32 *)((char *)(arg0) + 0x11C)) + temp_v0_5;
                    (*(s32 *)((char *)(arg0) + 0x7C)) = temp_t9;
                    (*(s32 *)((char *)(arg0) + 0x11C)) = temp_t6_2;
                    (*(s32 *)((char *)(arg0) + 0x7C)) = (s32) (temp_t9 | 0x80000000);
                    (*(s32 *)((char *)(arg0) + 0x80)) = 0;
                    (*(s32 *)((char *)(arg0) + 0x11C)) = (s32) (temp_t6_2 | 0x80000000);
                    (*(s32 *)((char *)(arg0) + 0x120)) = 0;
                    if ((sp40 == 4) && (var_t1 != 3)) {
                        func_1518CD20(arg0, 0xFF, 0);
                    }
                    var_t1 = 3;
                    (*(s32 *)((char *)(arg0) + 0x8)) = 0.0f;
                    (*(s32 *)((char *)(arg0) + 0x0)) = 0.0f;
                    if (sp40 == 2) {
                        (*(s32 *)((char *)(arg0) + 0x6E)) = 1;
                        (*(s32 *)((char *)(arg0) + 0x10E)) = 1;
                        sp44 = 3;
                        func_1508EE0C(2, ((s32) ((char *)(arg0) - (char *)(D_800DBEF4)) / 160) & 0xFFFF);
                        func_1508EE0C(2, ((s32) (((char *)(arg0) - (char *)(D_800DBEF4)) + 0xA0) / 160) & 0xFFFF);
                        var_t1 = 3;
                    }
                }
            }
        } else if (var_t1 == 1) {
            var_t1 = 1;
            (*(s16 *)((char *)(arg0) + 0x12)) = (s16) ((*(s16 *)((char *)(arg0) + 0x12)) + 3);
            if ((*(s32 *)((char *)(arg0) + 0x12)) >= var_t0) {
                (*(s32 *)((char *)(arg0) + 0x12)) = var_t0;
                var_t1 = 0;
            }
        }
        temp_t7 = (*(s32 *)((char *)(arg0) + 0x73)) & 0xFFFC;
        (*(s32 *)((char *)(arg0) + 0x73)) = temp_t7;
        (*(u8 *)((char *)(arg0) + 0x73)) = (u8) (temp_t7 | var_t1);
    }
}

void func_150BFFE0(void *arg0) {
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    s8 sp8C;
    s8 sp8B;
    s8 sp8A;
    s8 sp89;
    s8 sp88;
    s32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    s16 sp72;
    s16 sp70;
    s16 sp6E;
    s16 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    s16 sp52;
    s16 sp50;
    s16 sp4E;
    s8 sp4D;
    s8 sp4C;
    s8 sp4B;
    s8 sp4A;
    s8 sp49;
    s8 sp48;
    s8 sp47;
    s8 sp46;
    s8 sp45;
    s8 sp44;
    s32 sp40;
    s32 sp3C;
    s16 sp3A;
    s16 sp38;
    s32 sp34;
    s32 sp30;
    s16 sp2E;
    s8 sp2C;
    s16 sp2A;
    s16 sp28;
    f32 temp_f10;

    sp94 = (*(s32 *)((char *)(arg0) + 0x14));
    temp_f10 = (*(s32 *)((char *)(arg0) + 0x180)) + 70.0f;
    sp98 = temp_f10;
    sp9C = (*(s32 *)((char *)(arg0) + 0x1C));
    func_15136C3C(0, 0, 1, 0, 0, 0xFF, 1);
    sp5C = D_800A013C;
    sp54 = D_800A0134;
    sp60 = sp94;
    sp2E = 0x5103;
    sp28 = 0x11;
    sp2A = 7;
    sp2C = 0x6C;
    sp30 = 0x200005;
    sp38 = 0x28;
    sp3A = 0x14;
    sp47 = 0xFF;
    sp44 = 0x4E;
    sp4A = 0xC8;
    sp64 = temp_f10 + 35.0f;
    sp58 = D_800A0138;
    sp45 = 0x54;
    sp46 = 0x7B;
    sp48 = 0xA4;
    sp49 = 0xA1;
    sp4B = 0x9B;
    sp4C = 0x64;
    sp4D = 0xFF;
    sp4E = 0x1E;
    sp50 = 8;
    sp34 = 0;
    sp3C = 0;
    sp40 = 0;
    sp52 = 0x1E;
    sp6C = 0;
    sp6E = -0x14;
    sp70 = 0xFF;
    sp72 = 0x1E;
    sp84 = 0x40040E07;
    sp88 = 0x10;
    sp89 = -1;
    sp8A = 8;
    sp8B = 6;
    sp8C = 1;
    sp74 = 15.0f;
    sp78 = 39.0f;
    sp7C = D_800A0140;
    sp80 = D_800A0144;
    sp68 = sp9C;
    sp90 = D_800A0148;
    func_15153634(&sp28, 0xFF, 0xFFU, 1U);
}

s32 func_150C01DC(void *arg0, void * arg1, void * arg2, void * arg3, f32 arg4) {
    f32 spEC;
    f32 spE8;
    s32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    s16 spD6;
    s16 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    s16 spC2;
    s16 spC0;
    s16 spBE;
    s16 spBC;
    void * spB0;
    s32 spAC;
    s32 spA8;
    s32 spA4;
    s32 spA0;
    f32 sp9C;
    s8 sp98;
    s8 sp97;
    s8 sp96;
    s8 sp95;
    s8 sp94;
    s32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    s16 sp7E;
    s16 sp7C;
    s16 sp7A;
    s16 sp78;
    void * sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    s16 sp5E;
    s16 sp5C;
    s16 sp5A;
    s8 sp59;
    s8 sp58;
    s8 sp57;
    s8 sp56;
    s8 sp55;
    s8 sp54;
    s8 sp53;
    s8 sp52;
    s8 sp51;
    s8 sp50;
    s32 sp4C;
    s32 sp48;
    s16 sp46;
    s16 sp44;
    s32 sp40;
    s32 sp3C;
    s16 sp3A;
    s8 sp38;
    s16 sp36;
    s16 sp34;

    spE4 = (*(s32 *)((char *)(arg0) + 0x38));
    spE8 = arg4 + 20.0f;
    spEC = (*(s32 *)((char *)(arg0) + 0x40));
    spA4 = D_800A0100;
    spA0 = D_800A0104;
    spA8 = 5;
    spAC = 4;
    (*(s32 *)((char *)&(spB0) + 0x0)) = (s32) (*(s32 *)((char *)&(spE4) + 0x0));
    (*(s32 *)((char *)&(spB0) + 0x4)) = (s32) (*(s32 *)((char *)&(spE4) + 0x4));
    (*(s32 *)((char *)&(spB0) + 0x8)) = (s32) (*(s32 *)((char *)&(spE4) + 0x8));
    spC4 = 12.0f;
    spC8 = 8.0f;
    spBC = 0;
    spBE = 0xFF;
    spC0 = -0x40;
    spC2 = 0x22;
    spD4 = 0x1E;
    spD6 = 0xF;
    spCC = D_800A014C;
    spD0 = D_800A0150;
    spD8 = D_800A0154;
    spDC = D_800A0158;
    spE0 = D_800A015C;
    func_15152190(&spA8, &spA4, &spA0, 1, 0.0f, 1, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
    sp36 = 8;
    sp34 = 5;
    sp38 = 0x6C;
    sp3A = 0x5103;
    sp3C = 0x200005;
    sp44 = 0x1E;
    sp46 = 0xF;
    sp53 = 0xFF;
    sp50 = 0x4E;
    sp51 = 0x54;
    sp54 = 0xA4;
    sp40 = 0;
    sp48 = 0;
    sp4C = 0;
    sp52 = 0x7B;
    sp55 = 0xA1;
    sp56 = 0xC8;
    sp57 = 0x64;
    sp58 = 0x9B;
    sp59 = 0xFF;
    sp5A = 0xE;
    sp5C = 0x12;
    sp5E = 0xE;
    sp60 = D_800A0164;
    sp64 = 218.0f;
    sp68 = D_800A0168;
    (*(s32 *)((char *)&(sp6C) + 0x0)) = (s32) (*(s32 *)((char *)&(spE4) + 0x0));
    (*(s32 *)((char *)&(sp6C) + 0x4)) = (s32) (*(s32 *)((char *)&(spE4) + 0x4));
    (*(s32 *)((char *)&(sp6C) + 0x8)) = (s32) (*(s32 *)((char *)&(spE4) + 0x8));
    sp78 = 0;
    sp7A = -0x28;
    sp7C = 0xFF;
    sp7E = 0x28;
    sp88 = D_800A0160;
    sp8C = D_800A0160;
    sp90 = 0x840E07;
    sp94 = 0x10;
    sp95 = -1;
    sp96 = 8;
    sp97 = 6;
    sp98 = 1;
    sp80 = 19.0f;
    sp84 = 8.0f;
    sp9C = D_800A016C;
    func_15153634(&sp34, 0xFF, (*(s32 *)((char *)(arg0) + 0xC)), (*(s32 *)((char *)(arg0) + 0x1)));
    return 0;
}

void func_150C04C0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    f32 *sp94;
    s32 sp90;
    s8 sp8D;
    s8 sp8C;
    f32 sp88;
    s32 sp84;
    s32 *sp80;
    s32 *sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    s32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    s16 sp5A;
    s16 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    void * sp3C;
    s32 sp38;
    s32 sp34;
    s16 sp32;
    s16 sp30;
    s16 sp2E;
    s16 sp2C;
    s32 sp28;
    s32 sp24;
    f32 sp20;
    s8 var_v0;

    sp24 = D_800A0108;
    sp28 = arg2;
    sp34 = 9;
    sp38 = 4;
    sp20 = D_800A0170;
    (*(s32 *)((char *)&(sp3C) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x0));
    (*(s32 *)((char *)&(sp3C) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x4));
    (*(s32 *)((char *)&(sp3C) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x8));
    sp48 = 4.0f;
    sp4C = 7.0f;
    sp50 = D_800A0174;
    sp54 = D_800A0178;
    sp5C = D_800A017C;
    sp60 = D_800A0180;
    sp58 = 0x50;
    sp5A = 0x3C;
    sp68 = arg1;
    sp7C = &sp28;
    sp80 = &sp24;
    sp84 = 1;
    sp64 = D_800A0184;
    sp6C = D_800A0188;
    sp70 = D_800A018C;
    sp74 = D_800A0190;
    sp78 = 10.0f;
    sp88 = 78.0f;
    if (arg3 & 0xFF) {
        var_v0 = 1;
    } else {
        var_v0 = 0;
    }
    sp8C = var_v0;
    sp8D = 0xE;
    sp90 = 4;
    sp94 = &sp20;
    sp2C = 0;
    sp2E = 0xFF;
    sp30 = -0x32;
    sp32 = 0x23;
    func_15150400(&sp34, &sp2C, arg4, arg5);
}

s32 func_150C0648(void *arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4, s32 arg5) {
    s32 sp110;
    s32 sp10C;
    s8 sp109;
    s8 sp108;
    f32 sp104;
    s32 sp100;
    s32 *spFC;
    s32 *spF8;
    f32 spF4;
    f32 spF0;
    f32 spEC;
    f32 spE8;
    void *spE4;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    s16 spD6;
    s16 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    s32 spB4;
    s32 spB0;
    s16 spAE;
    s16 spAC;
    s16 spAA;
    s16 spA8;
    s32 spA4;
    s32 spA0;
    f32 sp9C;
    s8 sp98;
    s8 sp97;
    s8 sp96;
    s8 sp95;
    s8 sp94;
    s32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    s16 sp7E;
    s16 sp7C;
    s16 sp7A;
    s16 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    s16 sp5E;
    s16 sp5C;
    s16 sp5A;
    s8 sp59;
    s8 sp58;
    s8 sp57;
    s8 sp56;
    s8 sp55;
    s8 sp54;
    s8 sp53;
    s8 sp52;
    s8 sp51;
    s8 sp50;
    s32 sp4C;
    s32 sp48;
    s16 sp46;
    s16 sp44;
    s32 sp40;
    s32 sp3C;
    s16 sp3A;
    s8 sp38;
    s16 sp36;
    s16 sp34;
    f32 sp2C;
    f32 temp_f2;
    s8 var_v0;

    if (random_float() < (*(s32 *)((char *)(arg0) + 0x170))) {
        spA0 = D_800A010C;
        spB0 = 2;
        spB4 = 0;
        temp_f2 = arg4 + 20.0f;
        spA4 = (s32) (*(s32 *)((char *)(arg0) + 0x66));
        spBC = temp_f2;
        spB8 = (*(s32 *)((char *)(arg0) + 0x38));
        spC0 = (*(s32 *)((char *)(arg0) + 0x40));
        spD4 = 0x28;
        spD6 = 0x1E;
        spC4 = 5.0f;
        spC8 = 4.0f;
        spCC = D_800A0194;
        spD0 = D_800A0198;
        spD8 = (*(s32 *)((char *)(arg0) + 0x18)) * D_800A019C;
        spE4 = (char *)(arg0) + 0x110;
        spEC = 0.0f;
        spF0 = 0.0f;
        spF8 = &spA4;
        spFC = &spA0;
        spDC = (*(s32 *)((char *)(arg0) + 0x18)) * D_800A01A0;
        sp100 = 1;
        sp104 = 0.0f;
        spE0 = D_800A01A4;
        spE8 = 1.0f;
        spF4 = 10.0f;
        if ((*(s32 *)((char *)(arg0) + 0x60)) & 0x800) {
            var_v0 = 1;
        } else {
            var_v0 = 0;
        }
        sp108 = var_v0;
        sp109 = 0xA;
        sp10C = 0;
        sp110 = 0;
        spA8 = 0;
        spAA = 0xFF;
        spAC = -0x2A;
        spAE = 0x19;
        sp2C = temp_f2;
        func_15150400(&spB0, &spA8, (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
        sp34 = 1;
        sp36 = 2;
        sp38 = 0x6C;
        sp3A = 0x5103;
        sp3C = 0x200005;
        sp44 = 0x1E;
        sp46 = 0x10;
        sp53 = 0xFF;
        sp50 = 0x4E;
        sp51 = 0x54;
        sp40 = 0;
        sp48 = 0;
        sp4C = 0;
        sp52 = 0x7B;
        sp54 = 0xA4;
        sp55 = 0xA1;
        sp56 = 0xC8;
        sp57 = 0xC8;
        sp58 = 0x37;
        sp59 = 0xFF;
        sp5A = 0x14;
        sp5C = 0xC;
        sp5E = 0x14;
        sp60 = D_800A01A8;
        sp64 = 178.0f;
        sp68 = 91.0f;
        sp70 = sp2C;
        sp6C = (*(s32 *)((char *)(arg0) + 0x38));
        sp78 = 0;
        sp7A = -0x12;
        sp7C = 0xFF;
        sp7E = 0xB;
        sp90 = 0x40040E07;
        sp94 = 0x10;
        sp95 = -1;
        sp96 = 8;
        sp97 = 6;
        sp98 = 1;
        sp74 = (*(s32 *)((char *)(arg0) + 0x40));
        sp80 = 4.0f;
        sp84 = 6.0f;
        sp88 = D_800A01AC;
        sp8C = 0.0f;
        sp9C = D_800A01B0;
        func_15153634(&sp34, 0xFF, (*(s32 *)((char *)(arg0) + 0xC)), (*(s32 *)((char *)(arg0) + 0x1)));
        return 0;
    }
    return func_15133B98(arg0, arg1, arg2, arg3, arg4);
}
