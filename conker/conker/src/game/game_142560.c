/**
 * Auto-decompiled from asm/142560.s (non-matching)
 * Suggested renames applied: gGameState -> gGameState, gObjects -> gObjects
 * Object pool stride for gObjects is 812 (0x32C)
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


u8 *allocate_memory();                  /* extern */
s32 func_10010E78(); /* extern */
s32 func_15022B08();                  /* extern */
f32 func_150489B0(); /* extern */
s32 func_150490A8();                      /* extern */
void *func_1505EFD0();                             /* extern */
void * func_15060A30();                            /* extern */
s32 func_15060BA4();                       /* extern */
void * func_1507C3E0();  /* extern */
void * func_15086CBC();            /* extern */
s32 func_15086D48();                               /* extern */
void * func_1508EE0C();                            /* extern */
void * func_15094AB8();     /* extern */
void *func_1509B570();                             /* extern */
void * func_150A7960(); /* extern */
s32 func_150AD9A0();              /* extern */
u8 random_u32();                        /* extern */
void * func_150B2740();                            /* extern */
void * func_150DDED0();                            /* extern */
void * func_15104A80();                     /* extern */
s32 func_1510D0EC();                /* extern */
void * func_1510D874();          /* extern */
f32 func_1510F648();                   /* extern */
void * func_1511490C();                       /* extern */
void *func_151149AC();                   /* extern */
void * func_15114D24(); /* extern */
void * func_1511F990();                         /* extern */
void * func_151669A0();   /* extern */
void * func_15170F4C();                   /* extern */
void * func_15173C60();                          /* extern */
void * func_15173C90();                         /* extern */
void * func_15188010();                /* extern */
void * func_1518804C();           /* extern */
s32 func_15195FB0(); /* extern */
void * func_151D6970();                       /* extern */
void * func_151D69B4();                       /* extern */
s32 func_151EF610();                                /* extern */
s32 func_15116888();
void func_151169B4();                     /* static */
void func_15116BAC();                     /* static */
void func_151189AC();                     /* static */
void * func_1511DD98();                  /* static */
void func_1511F31C();                     /* static */
extern s32 D_8002AAD0;
extern s32 D_80089260;
extern s32 D_80089262;
extern s32 D_80089264;
extern s32 D_80089268;
extern s32 D_80089320;
extern s32 D_80089324;
extern s32 D_80089444;
extern s32 D_800902D8;
extern u8 D_800A2F70;
extern s32 D_800A2F71;
extern s32 D_800A2F84;
extern f32 D_800A2F8C;
extern f32 D_800A2F90;
extern f32 D_800A2F94;
extern f32 D_800A2F98;
extern f32 D_800A2F9C;
extern f32 D_800A2FA0;
extern f32 D_800A2FA4;
extern f32 D_800A2FA8;
extern f32 D_800A2FAC;
extern f32 D_800A2FB0;
extern f32 D_800A2FB4;
extern f64 D_800A2FB8;
extern f32 D_800A2FC0;
extern f32 D_800A2FC4;
extern f32 D_800A2FC8;
extern f32 D_800A2FCC;
extern f32 D_800A2FD0;
extern f32 D_800A2FD4;
extern f32 D_800A2FD8;
extern f32 D_800A2FDC;
extern f32 D_800A2FE0;
extern f32 D_800A2FE4;
extern f32 D_800A2FE8;
extern f32 D_800A2FEC;
extern f32 D_800A2FF0;
extern s32 D_800A2FF4;
extern f32 D_800A2FF8;
extern f32 D_800A2FFC;
extern f32 D_800A3138;
extern f32 D_800A313C;
extern f32 D_800A3140;
extern f32 D_800A3144;
extern f32 D_800A3148;
extern f32 D_800A314C;
extern f32 D_800A3150;
extern f32 D_800A3154;
extern f32 D_800A3158;
extern f32 D_800A315C;
extern f32 D_800A3160;
extern f32 D_800A3164;
extern f32 D_800A3168;
extern f32 D_800A316C;
extern f32 D_800A3170;
extern f32 D_800A3174;
extern f32 D_800A3178;
extern f32 D_800A317C;
extern f32 D_800A3180;
extern f32 D_800A3184;
extern f32 D_800A3188;
extern f32 D_800A318C;
extern f32 D_800A3190;
extern f32 D_800A3194;
extern f32 D_800A31BC;
extern f32 D_800A31C0;
extern f32 D_800A31C4;
extern f32 D_800A31C8;
extern f32 D_800A31CC;
extern f32 D_800A31D0;
extern f32 D_800A31D4;
extern f32 D_800A31D8;
extern f32 D_800A31DC;
extern f32 D_800A31E0;
extern f32 D_800A31E4;
extern f32 D_800A31E8;
extern f32 D_800A31EC;
extern f32 D_800A31F0;
extern f32 D_800A31F4;
extern f32 D_800A31F8;
extern f32 D_800A31FC;
extern f32 D_800A3200;
extern f32 D_800A3204;
extern f64 D_800A3208;
extern f32 D_800A3210;
extern f32 D_800A3214;
extern f32 D_800A32F0;
extern f32 D_800A32F4;
extern f32 D_800A32F8;
extern f32 D_800A32FC;
extern f32 D_800A3300;
extern f32 D_800A3304;
extern f32 D_800A3308;
extern f32 D_800A330C;
extern f32 D_800A3310;
extern f32 D_800A3314;
extern f32 D_800A3318;
extern f32 D_800A3378;
extern u16 D_800CC354;
extern s32 func_1000EC24;
void func_1511515C();
void func_15115E0C();
void func_15116110();
f32 func_151172D8(void *arg0, f32 arg1);
f32 func_15117518(void *arg0, f32 arg1);
s32 func_1511A410();

void func_151150B0(s32 arg0) {

}

void func_151150BC(void *arg0) {
    f32 temp_f0;

    (*(f32 *)((char *)(arg0) + 0x68)) = (f32) ((f32) (((s32) (*(f32 *)((char *)(arg0) + 0x3C)) >> 0x10) * D_800BE9E4) * 0.00390625f);
    (*(f32 *)((char *)(arg0) + 0x8)) = (f32) ((*(f32 *)((char *)(arg0) + 0x8)) + (*(f32 *)((char *)(arg0) + 0x68)));
    temp_f0 = (*(s32 *)((char *)(arg0) + 0x8));
    if (temp_f0 < 0.0f) {
        (*(f32 *)((char *)(arg0) + 0x8)) = (f32) (temp_f0 + 360.0f);
        return;
    }
    if (temp_f0 >= 360.0f) {
        (*(f32 *)((char *)(arg0) + 0x8)) = (f32) (temp_f0 - 360.0f);
    }
}

void func_1511515C(void *arg0) {
    f32 temp_f0;

    (*(f32 *)((char *)(arg0) + 0x64)) = (f32) ((f32) (((s32) (*(f32 *)((char *)(arg0) + 0x3C)) >> 0x10) * D_800BE9E4) * 0.00390625f);
    (*(f32 *)((char *)(arg0) + 0x4)) = (f32) ((*(f32 *)((char *)(arg0) + 0x4)) + (*(f32 *)((char *)(arg0) + 0x64)));
    temp_f0 = (*(s32 *)((char *)(arg0) + 0x4));
    if (temp_f0 < 0.0f) {
        (*(f32 *)((char *)(arg0) + 0x4)) = (f32) (temp_f0 + 360.0f);
        return;
    }
    if (temp_f0 >= 360.0f) {
        (*(f32 *)((char *)(arg0) + 0x4)) = (f32) (temp_f0 - 360.0f);
    }
}

void func_151151FC(void *arg0) {
    f32 temp_f0;

    (*(f32 *)((char *)(arg0) + 0x60)) = (f32) ((f32) (((s32) (*(f32 *)((char *)(arg0) + 0x3C)) >> 0x10) * D_800BE9E4) * 0.00390625f);
    (*(f32 *)((char *)(arg0) + 0x0)) = (f32) ((*(f32 *)((char *)(arg0) + 0x0)) + (*(f32 *)((char *)(arg0) + 0x60)));
    temp_f0 = (*(s32 *)((char *)(arg0) + 0x0));
    if (temp_f0 < 0.0f) {
        (*(f32 *)((char *)(arg0) + 0x0)) = (f32) (temp_f0 + 360.0f);
        return;
    }
    if (temp_f0 >= 360.0f) {
        (*(f32 *)((char *)(arg0) + 0x0)) = (f32) (temp_f0 - 360.0f);
    }
}

void func_1511529C(s32 arg0) {

}

void func_151152A8(void *arg0) {
    s16 temp_v1;
    s32 temp_a1;
    s32 var_v0;

    var_v0 = (*(s32 *)((char *)(arg0) + 0x7C));
    if (var_v0 == 0) {
        var_v0 = (s32) (*(s32 *)((char *)(arg0) + 0x12));
        (*(s32 *)((char *)(arg0) + 0x7C)) = var_v0;
    }
    temp_v1 = (*(s32 *)((char *)(arg0) + 0x12));
    if ((*(s32 *)((char *)(arg0) + 0x4F)) & 4) {
        temp_a1 = (*(s32 *)((char *)(arg0) + 0x3C));
        if ((var_v0 - temp_v1) < (s16) temp_a1) {
            (*(s16 *)((char *)(arg0) + 0x12)) = (s16) (temp_v1 - ((s16) (temp_a1 >> 0x10) * D_800BE9E4));
        }
    } else {
        (*(s16 *)((char *)(arg0) + 0x12)) = (s16) (s32) ((f32) temp_v1 + ((f32) (var_v0 - temp_v1) * D_800A2F8C * (f32) D_800BE9E4));
    }
}

void func_15115368(void *arg0) {
    f32 sp34;
    f32 sp1C;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    f32 temp_f2_2;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_t1;
    s32 temp_t4;
    s32 temp_t8;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    u8 temp_t2;
    u8 temp_t9;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x3C));
    temp_a3 = temp_v0 >> 8;
    temp_t8 = (*(s32 *)((char *)(arg0) + 0x4F)) & 4;
    var_v1 = temp_t8;
    temp_a2 = temp_v0 >> 0x18;
    if (temp_t8 != 0) {
        var_v1 = (*(s32 *)((char *)(arg0) + 0x4F)) & 4;
        (*(s32 *)((char *)(arg0) + 0x80)) = (s32) ((*(s32 *)((char *)(arg0) + 0x80)) + D_800BE9E4);
    }
    var_v0 = (*(s32 *)((char *)(arg0) + 0x80));
    temp_a1 = temp_a2 + (s8) temp_a3;
    if (temp_a2 >= var_v0) {
        if ((var_v1 == 0) && (var_v0 != 0)) {
            (*(s32 *)((char *)(arg0) + 0x80)) = temp_a2;
        }
    } else if (temp_a1 >= var_v0) {
        if (var_v1 == 0) {
            (*(s32 *)((char *)(arg0) + 0x80)) = temp_a1;
        }
    } else {
        if (var_v1 == 0) {
            temp_t4 = var_v0 + D_800BE9E4;
            (*(s32 *)((char *)(arg0) + 0x80)) = temp_t4;
            var_v0 = temp_t4;
        }
        temp_f0 = (f32) ((var_v0 - temp_a2) - (s8) temp_a3);
        if ((*(s32 *)((char *)(arg0) + 0x84)) == 0) {
            temp_f2 = temp_f0 * D_800A2F90;
            sp34 = temp_f0;
            sp1C = temp_f2;
            (*(f32 *)((char *)(arg0) + 0x0)) = (f32) (-3.0f * sinf(temp_f2 * 2.0f));
            (*(f32 *)((char *)(arg0) + 0x8)) = (f32) (2.0f * sinf(temp_f2 * 3.0f));
            if (sp34 > 10.0f) {
                var_v1_2 = (*(s32 *)((char *)(arg0) + 0x7C));
                if (var_v1_2 == 0) {
                    var_v1_2 = (s32) (*(s32 *)((char *)(arg0) + 0x12));
                    (*(s32 *)((char *)(arg0) + 0x7C)) = var_v1_2;
                }
                temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x3C));
                (*(s16 *)((char *)(arg0) + 0x12)) = (s16) ((*(s16 *)((char *)(arg0) + 0x12)) - ((s8) (temp_v0_2 >> 0x10) * D_800BE9E4));
                if (((temp_v0_2 & 0xFF) * 0x10) < (var_v1_2 - (*(s32 *)((char *)(arg0) + 0x12)))) {
                    (*(s32 *)((char *)(arg0) + 0x84)) = 1;
                    temp_t2 = (*(s32 *)((char *)(arg0) + 0x4F)) & 0xFF9E;
                    (*(s32 *)((char *)(arg0) + 0x4F)) = temp_t2;
                    (*(u8 *)((char *)(arg0) + 0x4F)) = (u8) (temp_t2 | 0x20);
                }
            }
        } else {
            temp_f0_2 = gObjects[0].x_position - (f32) (*(f32 *)((char *)(arg0) + 0x10));
            temp_f2_2 = gObjects[0].z_position - (f32) (*(f32 *)((char *)(arg0) + 0x14));
            if (D_800A2F94 < ((temp_f0_2 * temp_f0_2) + (temp_f2_2 * temp_f2_2))) {
                temp_t1 = (*(s32 *)((char *)(arg0) + 0x7C));
                (*(s32 *)((char *)(arg0) + 0x7C)) = 0;
                temp_t9 = (*(s32 *)((char *)(arg0) + 0x4F)) & 0xFF9E;
                (*(s32 *)((char *)(arg0) + 0x4F)) = temp_t9;
                (*(u8 *)((char *)(arg0) + 0x4F)) = (u8) (temp_t9 | 1);
                (*(s32 *)((char *)(arg0) + 0x84)) = 0;
                (*(s32 *)((char *)(arg0) + 0x80)) = 0;
                (*(s16 *)((char *)(arg0) + 0x12)) = (s16) temp_t1;
            }
        }
    }
}

void func_151155C0(void *arg0) {
    s16 temp_t2;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_a1;
    s32 temp_lo;
    s32 temp_t9;
    s32 temp_v1;
    s32 var_a3;
    s32 var_t0;
    s32 var_t4;
    s32 var_v1;

    temp_v1 = (*(s32 *)((char *)(arg0) + 0x3C));
    temp_t2 = (*(s32 *)((char *)(arg0) + 0x12));
    temp_a1 = ((temp_v1 >> 0x18) & 0xFF) + 1;
    var_a3 = 0;
    var_t0 = 0;
    if (((*(s32 *)((char *)(arg0) + 0x4F)) & 4) == 4) {
        var_a3 = 1;
    }
    var_v1 = (*(s32 *)((char *)(arg0) + 0x7C));
    if (var_v1 == 0) {
        (*(s32 *)((char *)(arg0) + 0x7C)) = (s32) temp_t2;
        var_v1 = (s32) temp_t2;
    }
    temp_lo = (s32) ((s16) temp_v1 - var_v1) / (s32) ((temp_v1 >> 0x10) & 0xFF);
    var_t4 = (*(s32 *)((char *)(arg0) + 0x80));
    if (var_t4 == 0) {
        temp_v0 = temp_t2 - temp_lo;
        if (var_v1 == temp_t2) {
            if (var_a3 != 0) {
                (*(s32 *)((char *)(arg0) + 0x80)) = temp_a1;
                var_t4 = temp_a1;
            }
        } else {
            if (var_v1 < (s16) temp_v1) {
                if (var_v1 < temp_v0) {
                    goto block_12;
                }
            } else if (temp_v0 < var_v1) {
block_12:
                var_t0 = 1;
            }
            var_t4 = -temp_a1;
            if (var_t0 != 0) {
                (*(s32 *)((char *)(arg0) + 0x12)) = temp_v0;
                var_t4 = (*(s32 *)((char *)(arg0) + 0x80));
            } else {
                (*(s16 *)((char *)(arg0) + 0x12)) = (s16) var_v1;
                (*(s32 *)((char *)(arg0) + 0x80)) = var_t4;
            }
        }
    }
    if (var_t4 > 0) {
        temp_t9 = var_t4 - 1;
        temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x12)) + temp_lo;
        if ((*(s16 *)((char *)(arg0) + 0x7C)) < (s16) temp_v1) {
            if (temp_v0_2 < (s16) temp_v1) {
                goto block_21;
            }
        } else if ((s16) temp_v1 < temp_v0_2) {
block_21:
            var_t0 = 1;
        }
        var_t4 = temp_t9;
        if (var_t0 != 0) {
            (*(s32 *)((char *)(arg0) + 0x12)) = temp_v0_2;
            (*(s32 *)((char *)(arg0) + 0x80)) = temp_a1;
            var_t4 = temp_a1;
        } else {
            (*(s16 *)((char *)(arg0) + 0x12)) = (s16) temp_v1;
            (*(s32 *)((char *)(arg0) + 0x80)) = temp_t9;
        }
    }
    if (var_t4 < 0) {
        (*(s32 *)((char *)(arg0) + 0x80)) = (s32) (var_t4 + 1);
    }
    (*(s16 *)((char *)(arg0) + 0x5C)) = (s16) ((*(s16 *)((char *)(arg0) + 0x12)) * 0);
}

void func_1511575C(void *arg0) {
    u8 sp97;
    s16 sp94;
    s16 sp8A;
    s16 sp88;
    s32 sp84;
    s32 sp80;
    s32 sp7C;
    s16 sp7A;
    s16 sp78;
    s16 sp76;
    s16 sp72;
    s32 sp68;
    u16 sp62;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    s32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 temp_f0;
    f32 temp_f0_2;
    s16 temp_a1;
    s16 temp_a2;
    s16 temp_t0;
    s16 temp_t1;
    s16 temp_t2;
    s16 temp_t9_2;
    s32 temp_a0;
    s32 temp_t4;
    s32 temp_t7;
    s32 temp_t9;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a3;
    s32 var_s1;
    s32 var_t3;
    s32 var_v1;
    s8 var_t5;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x3C));
    var_a3 = 0;
    sp97 = (u8) (temp_v0 >> 0x10);
    sp94 = (s8) temp_v0 << 6;
    temp_v1 = (*(s32 *)((char *)(arg0) + 0x84));
    sp62 = (u16) temp_v1;
    temp_t0 = (*(s32 *)((char *)(arg0) + 0x10));
    sp84 = (s32) temp_t0;
    temp_t1 = (*(s32 *)((char *)(arg0) + 0x12));
    temp_a1 = (s8) (temp_v0 >> 0x18) << 6;
    sp80 = (s32) temp_t1;
    temp_t2 = (*(s32 *)((char *)(arg0) + 0x14));
    sp7C = (s32) temp_t2;
    temp_a2 = (s8) (temp_v0 >> 8) << 6;
    var_s1 = (temp_v1 >> 0x10) & 0xFFFF;
    if (((*(s32 *)((char *)(arg0) + 0x4F)) & 4) == 4) {
        var_a3 = 1;
    }
    var_v1 = (*(s32 *)((char *)(arg0) + 0x7C));
    if (var_v1 == 0) {
        var_v1 = (temp_t0 << 0x10) | (temp_t1 & 0xFFFF);
        (*(s32 *)((char *)(arg0) + 0x7C)) = var_v1;
        (*(s32 *)((char *)(arg0) + 0x80)) = (s32) (temp_t2 & 0xFFFF);
    }
    temp_t9 = (*(s32 *)((char *)(arg0) + 0x80));
    temp_t4 = var_v1 >> 0x10;
    var_t5 = (s8) (temp_t9 >> 0x10);
    var_t3 = (temp_t9 >> 0x18) & 0xFF;
    sp8A = var_v1 + temp_a1;
    sp88 = temp_t9 + temp_a2;
    sp76 = (s16) temp_t9;
    if (var_t5 == 0) {
        if (((s16) temp_t4 == temp_t0) && ((s16) var_v1 == temp_t1) && (sp76 == temp_t2)) {
            if (var_a3 != 0) {
                var_t5 = 0x64;
            }
        } else {
            var_t3 -= (u32) (255.0f / (f32) sp97) & 0xFF;
            if (var_t3 <= 0) {
                var_t3 = 0;
                var_t5 = -0x64;
                if (var_s1 != 0) {
                    sp78 = (s16) var_v1;
                    sp68 = 0;
                    sp7A = (s16) temp_t4;
                    sp72 = -0x64;
                    func_100111C8(var_s1 & 0xFFFF, temp_a1, temp_a2, var_a3);
                    var_s1 = 0;
                    func_10010F88(1.84e-43f, 2.8699e-41f, 0, 0, 0, (s32) (*(s32 *)((char *)(arg0) + 0x10)), (s32) (*(s32 *)((char *)(arg0) + 0x12)), (s32) (*(s32 *)((char *)(arg0) + 0x14)), 0xC8, 0x3E8);
                    var_t3 = sp68;
                    var_t5 = -0x64;
                }
            } else if ((sp62 != 0) && (var_s1 == 0)) {
                sp78 = (s16) var_v1;
                sp68 = var_t3;
                sp7A = (s16) temp_t4;
                sp72 = (s16) var_t5;
                var_s1 = func_10010E78(var_s1 & 0xFFFF, sp62, 0x7FFF, 0, 0, 0, (s32) temp_t0, (s32) temp_t1, (s32) temp_t2, 0xC8, 0x3E8) & 0xFFFF;
            }
            temp_f0 = (f32) var_t3 * D_800A2F98;
            (*(s16 *)((char *)(arg0) + 0x10)) = (s16) (s32) ((f32) (s16) temp_t4 + ((f32) ((s16) ((s16) temp_t4 + sp94) - (s16) temp_t4) * temp_f0));
            (*(s16 *)((char *)(arg0) + 0x12)) = (s16) (s32) ((f32) (s16) var_v1 + ((f32) (sp8A - (s16) var_v1) * temp_f0));
            (*(s16 *)((char *)(arg0) + 0x14)) = (s16) (s32) ((f32) sp76 + ((f32) (sp88 - sp76) * temp_f0));
        }
    }
    sp4C = (s32) sp62;
    if (var_t5 > 0) {
        sp5C = (f32) (s16) temp_t4;
        sp58 = (f32) (s16) var_v1;
        sp54 = (f32) (sp8A - (s16) var_v1);
        temp_t9_2 = var_t5 - 1;
        var_t5 = (s8) temp_t9_2;
        sp50 = (f32) sp76;
        sp48 = (f32) (sp88 - sp76);
        sp44 = (f32) ((s16) ((s16) temp_t4 + sp94) - (s16) temp_t4);
        if (var_t3 < 0xFF) {
            var_t5 = 0x64;
            var_t3 += (u32) (255.0f / (f32) sp97) & 0xFF;
            if ((sp62 != 0) && (var_s1 == 0)) {
                sp72 = 0x64;
                sp68 = var_t3;
                var_t5 = 0x64;
                var_s1 = func_10010E78(var_s1 & 0xFFFF, (u16) sp4C, 0x7FFF, 0, 0, 0, (s32) (*(u16 *)((char *)(arg0) + 0x10)), (s32) (*(u16 *)((char *)(arg0) + 0x12)), (s32) (*(u16 *)((char *)(arg0) + 0x14)), 0xC8, 0x3E8) & 0xFFFF;
            }
            if (var_t3 >= 0x100) {
                var_t3 = 0xFF;
            }
        } else {
            var_t3 = 0xFF;
            if (var_s1 != 0) {
                temp_a0 = var_s1 & 0xFFFF;
                var_s1 = 0;
                sp68 = 0xFF;
                sp72 = temp_t9_2;
                func_100111C8(temp_a0);
                func_10010F88(1.84e-43f, 2.8699e-41f, 0, 0, 0, (s32) (*(s32 *)((char *)(arg0) + 0x10)), (s32) (*(s32 *)((char *)(arg0) + 0x12)), (s32) (*(s32 *)((char *)(arg0) + 0x14)), 0xC8, 0x3E8);
                var_t3 = 0xFF;
                var_t5 = (s8) sp72;
            }
        }
        temp_f0_2 = (f32) var_t3 * D_800A2F9C;
        (*(s16 *)((char *)(arg0) + 0x10)) = (s16) (s32) (sp5C + (sp44 * temp_f0_2));
        (*(s16 *)((char *)(arg0) + 0x12)) = (s16) (s32) (sp58 + (sp54 * temp_f0_2));
        (*(s16 *)((char *)(arg0) + 0x14)) = (s16) (s32) (sp50 + (sp48 * temp_f0_2));
    }
    if (var_t5 < 0) {
        var_t5 = (s8) (s16) (var_t5 + 1);
    }
    temp_t7 = (*(s32 *)((char *)(arg0) + 0x80)) & 0xFFFF;
    (*(s32 *)((char *)(arg0) + 0x80)) = temp_t7;
    (*(s32 *)((char *)(arg0) + 0x80)) = (s32) (temp_t7 | ((var_t5 & 0xFF) << 0x10) | (var_t3 << 0x18));
    (*(s16 *)((char *)(arg0) + 0x5A)) = (s16) ((*(s16 *)((char *)(arg0) + 0x10)) - sp84);
    (*(s16 *)((char *)(arg0) + 0x5C)) = (s16) ((*(s16 *)((char *)(arg0) + 0x12)) - sp80);
    (*(s16 *)((char *)(arg0) + 0x5E)) = (s16) ((*(s16 *)((char *)(arg0) + 0x14)) - sp7C);
    (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((var_s1 << 0x10) | sp4C);
}

void func_15115E0C(void *arg0, void *arg1) {
    f32 sp1C;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;

    sp1C = func_150AD780((*(s32 *)((char *)(arg0) + 0x4)) * D_800A2FA0);
    temp_f0 = func_150AD78C((*(s32 *)((char *)(arg0) + 0x4)) * D_800A2FA4, arg0);
    temp_f12 = (*(f32 *)((char *)(arg1) + 0x14)) - (f32) (*(f32 *)((char *)(arg0) + 0x10));
    temp_f14 = (*(f32 *)((char *)(arg1) + 0x1C)) - (f32) (*(f32 *)((char *)(arg0) + 0x14));
    if (((*(s32 *)((char *)(arg0) + 0x4F)) & 4) == 4) {
        (*(f32 *)((char *)(arg0) + 0x7C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x7C)) + ((temp_f0 * temp_f12) + (sp1C * temp_f14)));
        (*(f32 *)((char *)(arg0) + 0x80)) = (f32) ((*(f32 *)((char *)(arg0) + 0x80)) - ((temp_f0 * temp_f14) + (sp1C * temp_f12)));
    }
}

void func_15115EDC(void *arg0, void *arg1) {
    void *sp1C;
    void *sp18;
    void *temp_f0;
    void *temp_f12;
    void *temp_f14;
    void *temp_f2;

    temp_f12 = (*(s32 *)((char *)(arg0) + 0x7C));
    temp_f14 = (*(s32 *)((char *)(arg0) + 0x80));
    sp1C = temp_f12;
    sp18 = temp_f14;
    func_15115E0C(temp_f12, temp_f14);
    if ((*(s32 *)((char *)(arg1) + 0x84)) == 0x4B) {
        temp_f0 = (*(s32 *)((char *)(arg0) + 0x7C));
        temp_f2 = (*(s32 *)((char *)(arg0) + 0x80));
        (*(f32 *)((char *)(arg0) + 0x7C)) = (f32)(s32)(temp_f0) + (((f32)(s32)(temp_f0) - (f32)(s32)(temp_f12)) * 4.0f);
        (*(f32 *)((char *)(arg0) + 0x80)) = (f32)(s32)(temp_f2) + (((f32)(s32)(temp_f2) - (f32)(s32)(temp_f14)) * 4.0f);
    }
}

void func_15115F68(void *arg0) {
    f32 temp_f0;
    f32 var_f2;
    s32 temp_a1;
    s32 temp_v1;

    temp_v1 = (*(s32 *)((char *)(arg0) + 0x3C));
    temp_a1 = temp_v1 >> 0x10;
    if ((s8) temp_v1 != 0) {
        (*(f32 *)((char *)(arg0) + 0x0)) = (f32) ((*(f32 *)((char *)(arg0) + 0x0)) + (((*(f32 *)((char *)(arg0) + 0x7C)) / (f32) (s8) temp_v1) + (f32) (s8) temp_a1));
    } else {
        (*(f32 *)((char *)(arg0) + 0x0)) = (f32) ((*(f32 *)((char *)(arg0) + 0x0)) + (f32) ((s8) temp_a1 * D_800BE9E4));
    }
    temp_f0 = (*(s32 *)((char *)(arg0) + 0x0));
    var_f2 = (f32) (s8) (temp_v1 >> 8);
    if (var_f2 < temp_f0) {
        goto block_6;
    }
    var_f2 = (f32) (s8) (temp_v1 >> 0x18);
    if (temp_f0 < var_f2) {
block_6:
        (*(s32 *)((char *)(arg0) + 0x0)) = var_f2;
    }
    (*(s32 *)((char *)(arg0) + 0x80)) = 0.0f;
    (*(s32 *)((char *)(arg0) + 0x7C)) = 0.0f;
}

void func_15116058(void *arg0) {
    s32 temp_t4;
    s32 var_a2;
    s32 var_t0;

    temp_t4 = (*(s32 *)((char *)(arg0) + 0x3C));
    var_a2 = 0;
    if ((s32) (*(s32 *)((char *)(arg0) + 0x16)) > 0) {
        var_t0 = 0;
        do {
            var_a2 += 1;
            (*(s16 *)((char *)(((*(s16 *)((char *)(((char *)(arg0) + (D_800BE9C0 * 4))) + 0x20)) + var_t0)) + 0x8)) = (s16) ((*(s16 *)((char *)(((*(s16 *)((char *)(((char *)(arg0) + ((D_800BE9C0 == 0) * 4))) + 0x20)) + var_t0)) + 0x8)) + (s16) (temp_t4 >> 0x10));
            (*(s16 *)((char *)(((*(s16 *)((char *)(((char *)(arg0) + (D_800BE9C0 * 4))) + 0x20)) + var_t0)) + 0xA)) = (s16) ((*(s16 *)((char *)(((*(s16 *)((char *)(((char *)(arg0) + ((D_800BE9C0 == 0) * 4))) + 0x20)) + var_t0)) + 0xA)) + (s16) temp_t4);
            var_t0 += 0x10;
        } while (var_a2 < (s32) (*(s32 *)((char *)(arg0) + 0x16)));
    }
}

void func_15116110(void *arg0) {
    s32 temp_v0;

    if ((*(s32 *)((char *)(arg0) + 0x7C)) == 0) {
        temp_v0 = (*(s32 *)((char *)(arg0) + 0x3C));
        (*(s32 *)((char *)(arg0) + 0x7C)) = func_15195FB0(temp_v0 & 0x7FFF, temp_v0 >> 0xF, -1, 0, (temp_v0 >> 0x18) & 0xFF, (temp_v0 >> 0x10) & 0xFF);
        (*(s32 *)((char *)(arg0) + 0x3C)) = 0;
    }
}

void func_1511617C(void *arg0) {
    s16 sp1E;
    f32 temp_f0;
    s16 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_v1;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x12));
    sp1E = temp_v0;
    temp_f0 = func_1510F648((f32) (*(f32 *)((char *)(arg0) + 0x10)), (f32) temp_v0, (f32) (*(f32 *)((char *)(arg0) + 0x14)));
    (*(s32 *)((char *)(arg0) + 0x7C)) = temp_f0;
    if (fabsf(temp_f0 - (f32) (*(f32 *)((char *)(arg0) + 0x12))) > 200.0f) {
        (*(s32 *)((char *)(arg0) + 0x3C)) = 0;
    }
    if (!((*(s32 *)((char *)(arg0) + 0x4F)) & 4)) {
        temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x3C));
        (*(s32 *)((char *)(arg0) + 0x3C)) = (s32) ((f32) temp_v0_2 + ((f32) -temp_v0_2 * D_800A2FA8));
    } else {
        var_v1 = -0x14;
        if (D_800CC354 == 0x4B) {
            var_v1 = -0x28;
        }
        temp_v0_3 = (*(s32 *)((char *)(arg0) + 0x3C));
        (*(s32 *)((char *)(arg0) + 0x3C)) = (s32) ((f32) temp_v0_3 + ((f32) (var_v1 - temp_v0_3) * D_800A2FAC));
    }
    (*(s16 *)((char *)(arg0) + 0x12)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x7C)) + (f32) (*(s16 *)((char *)(arg0) + 0x3C)));
    (*(s16 *)((char *)(arg0) + 0x5C)) = (s16) ((*(s16 *)((char *)(arg0) + 0x12)) - sp1E);
}

void func_151162D4(void *arg0) {
    f32 sp24;
    s32 sp20;
    s16 sp1E;
    f32 temp_f2;
    s32 temp_t9;

    sp1E = (s16) (s32) ((f32) (*(s16 *)((char *)(arg0) + 0x12)) + (*(s16 *)((char *)(arg0) + 0x18)));
    temp_t9 = (*(s32 *)((char *)(arg0) + 0x3C));
    sp20 = (temp_t9 >> 0x10) & 0xFFFF;
    sp24 = (f32) (s16) temp_t9;
    temp_f2 = cosf((f32) (*(f32 *)((char *)(arg0) + 0x7C)) * 0.005493164f) * sp24;
    (*(s32 *)((char *)(arg0) + 0x18)) = temp_f2;
    (*(s32 *)((char *)(arg0) + 0x7C)) = (s32) ((*(s32 *)((char *)(arg0) + 0x7C)) + (sp20 * D_800BE9E4));
    (*(s16 *)((char *)(arg0) + 0x5C)) = (s16) (s32) (((f32) (*(s16 *)((char *)(arg0) + 0x12)) + temp_f2) - (f32) sp1E);
}

void func_151163C0(void *arg0) {
    f32 sp2C;
    s32 sp28;
    s32 sp24;
    f32 sp20;
    s16 sp1E;
    f32 sp18;
    f32 temp_f2;
    f32 var_f10;
    s32 temp_t2;
    s32 temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x3C));
    temp_t2 = (temp_v0 >> 8) & 0xFF;
    sp28 = (temp_v0 >> 0x10) & 0xFF;
    sp2C = (f32) (temp_v0 & 0xFF);
    sp24 = (temp_v0 >> 0x18) & 0xFF;
    var_f10 = (f32) temp_t2;
    if (temp_t2 < 0) {
        var_f10 += 4294967296.0f;
    }
    sp20 = var_f10 * 1.40625f;
    sp1E = (*(s32 *)((char *)(arg0) + 0x12));
    sp18 = (*(s32 *)((char *)(arg0) + 0x0));
    (*(f32 *)((char *)(arg0) + 0x18)) = (f32) (cosf((f32) (*(f32 *)((char *)(arg0) + 0x7C)) * D_800A2FB0) * sp2C);
    temp_f2 = cosf((f32) (*(f32 *)((char *)(arg0) + 0x80)) * D_800A2FB4) * sp20;
    (*(s32 *)((char *)(arg0) + 0x0)) = temp_f2;
    (*(s32 *)((char *)(arg0) + 0x7C)) = (s32) ((*(s32 *)((char *)(arg0) + 0x7C)) + (sp28 * D_800BE9E4));
    (*(s32 *)((char *)(arg0) + 0x80)) = (s32) ((*(s32 *)((char *)(arg0) + 0x80)) + (sp24 * D_800BE9E4));
    (*(s16 *)((char *)(arg0) + 0x5C)) = (s16) ((*(s16 *)((char *)(arg0) + 0x12)) - sp1E);
    (*(f32 *)((char *)(arg0) + 0x60)) = (f32) (temp_f2 - sp18);
}

void func_1511650C(void *arg0, s32 arg1, s32 arg2, f32 arg3) {
    f32 temp_f12;
    f32 temp_f14;
    f32 var_f12;
    s32 temp_a1;
    s32 temp_f18;
    s32 temp_t4;
    s32 temp_t8;
    s32 temp_v1;
    s32 var_a0;
    s32 var_v0;
    u16 temp_a0;
    u32 temp_v0;

    if (!((*(s32 *)((char *)(arg0) + 0x4F)) & 4)) {
        var_a0 = 0;
    } else {
        var_a0 = func_15116888((*(s32 *)((char *)(arg0) + 0x10)), (*(s32 *)((char *)(arg0) + 0x14)), (char *)(arg0) + 0x7C, &gObjects) >> 3;
    }
    if ((arg1 & 1) && (var_a0 < 0)) {
        var_a0 = 0;
    }
    var_v0 = (*(s32 *)((char *)(arg0) + 0x3C)) + var_a0;
    if (var_a0 != 0) {
        (*(s32 *)((char *)(arg0) + 0x80)) = 0;
    }
    temp_v1 = (*(s32 *)((char *)(arg0) + 0x80));
    temp_f18 = (s32) ((f64) var_v0 * D_800A2FB8);
    if (temp_v1 <= 0) {
        var_v0 += temp_f18;
        if (var_v0 > 0) {
            var_v0 -= 1;
            if (var_v0 <= 0) {
                if (var_a0 == 0) {
                    if (temp_v1 == 0) {
                        (*(s32 *)((char *)(arg0) + 0x80)) = 0x14;
                    } else {
                        (*(s32 *)((char *)(arg0) + 0x80)) = 0;
                        var_v0 = 0;
                    }
                } else {
                    var_v0 = 0;
                }
            }
        } else if (var_v0 < 0) {
            var_v0 += 1;
            if (var_v0 >= 0) {
                if (var_a0 == 0) {
                    if (temp_v1 == 0) {
                        (*(s32 *)((char *)(arg0) + 0x80)) = 0x14;
                    } else {
                        (*(s32 *)((char *)(arg0) + 0x80)) = 0;
                        var_v0 = 0;
                    }
                } else {
                    var_v0 = 0;
                }
            }
        }
    } else if (temp_v1 > 0) {
        if (var_v0 > 0) {
            var_v0 += 1;
            temp_t4 = temp_v1 - D_800BE9E4;
            (*(s32 *)((char *)(arg0) + 0x80)) = temp_t4;
            if (temp_t4 <= 0) {
                (*(s32 *)((char *)(arg0) + 0x80)) = -1;
            }
        } else {
            var_v0 -= 1;
            temp_t8 = temp_v1 - D_800BE9E4;
            (*(s32 *)((char *)(arg0) + 0x80)) = temp_t8;
            if (temp_t8 <= 0) {
                (*(s32 *)((char *)(arg0) + 0x80)) = -1;
            }
        }
    }
    (*(s32 *)((char *)(arg0) + 0x3C)) = (s32) (((s32) (*(s32 *)((char *)(arg0) + 0x3C)) & 0xFFFF) | (var_v0 << 0x10));
    func_1511515C(arg0);
    if (arg2 != 0) {
        temp_f14 = (*(s32 *)((char *)(arg0) + 0x64));
        var_f12 = fabsf(temp_f14) * D_800A2FC0;
        if (var_f12 > 1.0f) {
            var_f12 = 1.0f;
        }
        temp_v0 = (u32) ((D_800A2FC4 * var_f12) + D_800A2FC8);
        temp_a0 = (*(s32 *)((char *)(arg0) + 0x74));
        temp_f12 = (var_f12 * arg3) - 500.0f;
        if (temp_a0 == 0) {
            if (D_800A2FCC < temp_f14) {
                (*(s16 *)((char *)(arg0) + 0x74)) = func_10010F88(temp_f12, temp_f14, arg2, temp_v0 & 0xFFFF, (s16) (s32) temp_f12, 0, -1, (s32) (*(s16 *)((char *)(arg0) + 0x10)), (s32) (*(s16 *)((char *)(arg0) + 0x12)), (s32) (*(s16 *)((char *)(arg0) + 0x14)), 0x3E8, 0x1770);
            }
        } else {
            temp_a1 = temp_v0 & 0xFFFF;
            if (D_800A2FD0 < temp_f14) {
                func_1000F91C(temp_f12, temp_f14, temp_a0, temp_a1, (s16) (s32) temp_f12, 0, -1, (s32) (*(s16 *)((char *)(arg0) + 0x10)), (s32) (*(s16 *)((char *)(arg0) + 0x12)), (s32) (*(s16 *)((char *)(arg0) + 0x14)));
                return;
            }
            func_100111C8((s32) temp_f12, (s16) temp_f14, (s16) temp_a0, temp_a1);
            (*(s32 *)((char *)(arg0) + 0x74)) = 0U;
        }
    }
}

s32 func_15116888( s32 arg0, s32 arg1, void *arg2, void * *arg3) {
    f32 sp24;
    f32 sp1C;

    sp1C = (f32) ((s32) (*(f32 *)((char *)(arg3) + 0x14)) - arg0);
    sp24 = (f32) ((s32) (*(f32 *)((char *)(arg3) + 0x1C)) - arg1);
    return (s32) ((*(s32 *)((char *)(arg3) + 0x3C)) * func_15048A40(((0x40 - ((s32) (*(s32 *)((char *)(arg3) + 0x76)) >> 8)) - func_150490A8(&sp1C, arg0)) & 0xFF));
}

void func_15116924(s32 arg0) {

}

void func_15116930(void *arg0, void *arg1) {
    u8 temp_t3;
    u8 temp_v0;

    if ((*(s32 *)((char *)(arg0) + 0x4F)) & 4) {
        temp_v0 = (*(s32 *)((char *)(arg0) + 0x73));
        if (!(temp_v0 & 3) && !(temp_v0 & 4)) {
            temp_t3 = temp_v0 & 0xFFFC;
            if ((*(s32 *)((char *)((*(s32 *)((char *)(arg1) + 0x31C))) + 0x57)) == 1) {
                (*(s32 *)((char *)(arg0) + 0x73)) = temp_t3;
                (*(u8 *)((char *)(arg0) + 0x73)) = (u8) (temp_t3 | 2);
            }
        }
    }
}

void func_15116984(void *arg0) {
    if ((*(s32 *)((char *)(arg0) + 0x73)) & 2) {
        func_151169B4();
    }
}

void func_151169B4(void *arg0) {
    s32 sp24;
    s16 *var_a2;
    s16 *var_v0;
    s16 temp_a1;
    s16 temp_a1_2;
    s16 temp_t7;
    s16 temp_v0_2;
    s16 temp_v1_2;
    s32 *var_a1;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_t0;
    s32 temp_t2;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a3;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x3C));
    temp_v1 = temp_v0 >> 0xA;
    if (((*(s32 *)((char *)(arg0) + 0x7C)) != (*(s32 *)((char *)(arg0) + 0x10))) || ((*(s32 *)((char *)(arg0) + 0x80)) != (*(s32 *)((char *)(arg0) + 0x12))) || ((*(s32 *)((char *)(arg0) + 0x84)) != (*(s32 *)((char *)(arg0) + 0x14)))) {
        if ((temp_v1 != 0) && (*(&D_80089268 + (temp_v1 * 0xC)) != 0)) {
            func_15116BAC();
            return;
        }
        temp_t0 = temp_v0 & 0xFFFF03FF;
        if ((temp_v1 != 0) && ((*(s32 *)((char *)(arg0) + 0x74)) == 0)) {
            temp_a1 = *(&D_80089260 + (temp_v1 * 0xC));
            if (temp_a1 != 0) {
                sp24 = temp_t0;
                func_15114D24(temp_a1, 0x5DC0, 0x7D0, 0xFA0, 0);
            }
        }
        var_a3 = 0;
        var_v0 = (char *)(arg0) + 0x10;
        var_a1 = (char *)(arg0) + 0x7C;
        var_a2 = (char *)(arg0) + 0x5A;
        temp_t2 = (s32) (temp_t0 * D_800BE9E4) >> 1;
        do {
            var_a3 += 4;
            *var_a2 = *var_v0;
            temp_a0 = *var_a1;
            temp_v1_2 = *var_v0;
            if (temp_v1_2 != temp_a0) {
                if (temp_a0 < temp_v1_2) {
                    *var_v0 = temp_v1_2 - temp_t2;
                    temp_a0_2 = *var_a1;
                    if (*var_v0 < temp_a0_2) {
                        *var_v0 = (s16) temp_a0_2;
                    }
                } else {
                    *var_v0 = temp_v1_2 + temp_t2;
                    temp_a0_3 = *var_a1;
                    if (temp_a0_3 < *var_v0) {
                        *var_v0 = (s16) temp_a0_3;
                    }
                }
            }
            var_v0 += 2;
            var_a1 += 4;
            temp_t7 = *var_v0 - *var_a2;
            var_a2 += 2;
            (*(s32 *)((char *)(var_a2) - 0x2)) = temp_t7;
        } while (var_a3 != 0xC);
        return;
    }
    (*(s32 *)((char *)(arg0) + 0x5E)) = 0;
    temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x5E));
    (*(s32 *)((char *)(arg0) + 0x5C)) = temp_v0_2;
    (*(s32 *)((char *)(arg0) + 0x5A)) = temp_v0_2;
    if ((*(s32 *)((char *)(arg0) + 0x74)) != 0) {
        if (temp_v1 != 0) {
            temp_a1_2 = *(&D_80089264 + (temp_v1 * 0xC));
            if (temp_a1_2 != 0) {
                func_15114D24(temp_a1_2, 0x5DC0, 0x7D0, 0xFA0, 4);
            }
        }
        (*(s32 *)((char *)(arg0) + 0x74)) = 0U;
    }
}

void func_15116BAC(void *arg0) {
    s32 sp4C;
    s32 sp44;
    s32 sp28;
    s16 *var_a3;
    s16 *var_v0;
    s16 temp_a0;
    s16 temp_a1;
    s16 temp_a1_2;
    s16 temp_t7;
    s32 *var_a2;
    s32 temp_ra;
    s32 temp_t2;
    s32 temp_t4;
    s32 temp_t6;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_a1;
    s32 var_t0;
    s32 var_t2;
    s32 var_t5;
    void *temp_v0_2;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x3C));
    temp_t4 = temp_v0 >> 0xA;
    var_t5 = 0;
    var_t2 = 0;
    temp_ra = temp_v0 & 0xFFFF03FF;
    if ((temp_t4 != 0) && ((*(s32 *)((char *)(arg0) + 0x74)) == 0)) {
        temp_a1 = *(&D_80089260 + (temp_t4 * 0xC));
        if (temp_a1 != 0) {
            sp4C = temp_ra;
            sp28 = 0;
            sp44 = temp_t4;
            func_15114D24((s16) arg0, temp_a1, 0x5DC0, 0x7D0, 0xFA0, 0);
            var_t2 = sp28;
            var_t5 = 1;
        }
    }
    var_t0 = 0;
    var_v0 = (char *)(arg0) + 0x10;
    var_a2 = (char *)(arg0) + 0x7C;
    var_a3 = (char *)(arg0) + 0x5A;
    temp_t6 = (s32) (temp_ra * D_800BE9E4) >> 1;
    do {
        var_t0 += 4;
        *var_a3 = *var_v0;
        temp_v1 = *var_a2;
        temp_a0 = *var_v0;
        if (temp_a0 != temp_v1) {
            if (temp_v1 < temp_a0) {
                *var_v0 = temp_a0 - temp_t6;
                temp_v1_2 = *var_a2;
                var_a1 = *var_v0 - temp_v1_2;
                if (var_a1 < 0) {
                    *var_v0 = (s16) temp_v1_2;
                }
            } else {
                *var_v0 = temp_a0 + temp_t6;
                temp_v1_3 = *var_a2;
                var_a1 = temp_v1_3 - *var_v0;
                if (var_a1 < 0) {
                    *var_v0 = (s16) temp_v1_3;
                }
            }
            if (var_t2 < var_a1) {
                var_t2 = var_a1;
            }
        }
        var_v0 += 2;
        var_a2 += 4;
        temp_t7 = *var_v0 - *var_a3;
        var_a3 += 2;
        (*(s32 *)((char *)(var_a3) - 0x2)) = temp_t7;
    } while (var_t0 != 0xC);
    if (temp_t4 != 0) {
        temp_v0_2 = (temp_t4 * 0xC) + &D_80089260;
        temp_a1_2 = (*(s32 *)((char *)(temp_v0_2) + 0x8));
        if (temp_a1_2 != 0) {
            temp_t2 = var_t2 - ((s32) ((*(s32 *)((char *)(temp_v0_2) + 0xA)) * temp_ra) >> 1);
            if ((temp_t2 <= 0) && ((-temp_t6 < temp_t2) || (var_t5 != 0))) {
                func_15114D24((s16) arg0, temp_a1_2, 0x5DC0, 0x7D0, 0xFA0, 0);
            }
        }
    }
}

void func_15116D7C(f32 *arg0) {
    f32 *var_a1;
    f32 *var_a2;
    f32 *var_a3;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f14;
    s32 var_v1;

    temp_f0 = (f32) (*(f32 *)((char *)(arg0) + 0x3C)) * 0.00390625f;
    var_v1 = 0;
    var_a1 = arg0 + 0x60;
    var_a2 = arg0 + 0x7C;
    var_a3 = arg0;
    do {
        temp_f14 = *var_a1;
        temp_f12 = *var_a2;
        var_v1 += 4;
        if (temp_f14 != temp_f12) {
            if (temp_f12 < temp_f14) {
                *var_a1 = temp_f14 - temp_f0;
                temp_f12_2 = *var_a2;
                if (*var_a1 < temp_f12_2) {
                    *var_a1 = temp_f12_2;
                }
            } else {
                *var_a1 = temp_f14 + temp_f0;
                temp_f12_3 = *var_a2;
                if (temp_f12_3 < *var_a1) {
                    *var_a1 = temp_f12_3;
                }
            }
        }
        var_a1 += 4;
        var_a2 += 4;
        *var_a3 += *var_a1 * (f32) D_800BE9E4;
        temp_f12_4 = *var_a3;
        if (temp_f12_4 < 0.0f) {
            *var_a3 = temp_f12_4 + 360.0f;
        } else if (temp_f12_4 >= 360.0f) {
            *var_a3 = temp_f12_4 - 360.0f;
        }
        var_a3 += 4;
    } while (var_v1 != 0xC);
}

void func_15116EA4(void *arg0) {
    s32 sp54;
    s32 sp34;
    s32 sp2C;
    s32 sp28;
    void *sp20;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f8;
    f32 temp_f8_2;
    f32 var_f12;
    f32 var_f18;
    s16 *temp_a2;
    s16 *var_a0;
    s16 *var_t0;
    s16 *var_v1_2;
    s16 var_f16;
    s32 temp_a1;
    s32 temp_f4;
    s32 temp_t5;
    s32 temp_t8;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 var_a1;
    s32 var_t1;
    s32 var_v0;
    s32 var_v1;
    u32 temp_lo;
    u32 temp_t7;
    u8 *temp_v0_2;
    u8 temp_t2;
    void *temp_a0;
    void *temp_t0;
    void *temp_t9;
    void *temp_v1;
    void *temp_v1_2;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x3C));
    temp_v1 = ((temp_v0 & 0xFFFF) * 2) + &D_80089320;
    temp_t0 = ((*(s32 *)((char *)(temp_v1) + 0x0)) * 8) + &D_8002AAD0;
    var_t1 = (*(s32 *)((char *)(arg0) + 0x84));
    temp_t2 = (*(s32 *)((char *)(temp_v1) + 0x1));
    temp_t8 = (*(s32 *)((char *)(temp_t0) + 0x4)) - (*(s32 *)((char *)(temp_t0) + 0x0));
    sp54 = temp_t8;
    temp_t5 = temp_v0 >> 0x10;
    if ((*(s32 *)((char *)(arg0) + 0x80)) == NULL) {
        sp20 = temp_t0;
        sp34 = var_t1;
        sp2C = (s32) temp_t2;
        sp28 = temp_t5;
        temp_v0_2 = allocate_memory(temp_t8, 1, 2, 0);
        (*(s32 *)((char *)(arg0) + 0x80)) = temp_v0_2;
        func_10004514((*(s32 *)((char *)(temp_t0) + 0x0)), temp_v0_2, sp54, 1);
    }
    temp_f0 = (f32) temp_t2 * ((f32) var_t1 * D_800A2FD4);
    temp_f4 = (s32) temp_f0;
    var_v1 = temp_f4;
    var_f12 = temp_f0 - (f32) temp_f4;
    if (temp_t2 == temp_f4) {
        var_f12 = 1.0f;
        var_v1 = temp_f4 - 1;
    }
    temp_t7 = (sp54 / (s32) temp_t2) & ~1;
    temp_lo = temp_t7 / 6U;
    temp_a1 = var_v1 + 1;
    var_v0 = 0;
    temp_a2 = (*(s32 *)((char *)(arg0) + 0x80)) + (var_v1 * temp_t7);
    var_t0 = temp_a2;
    if (temp_t2 != temp_a1) {
        var_t0 = (*(s32 *)((char *)(arg0) + 0x80)) + (temp_a1 * temp_t7);
    }
    if ((s32) temp_lo > 0) {
        var_a0 = temp_a2;
        var_v1_2 = var_t0;
        var_a1 = 1;
        var_f16 = *var_v1_2;
        var_f18 = (f32) *var_a0;
        if (temp_lo != 1) {
            do {
                var_a1 += 1;
                var_v1_2 += 6;
                var_a0 += 6;
                (*(s16 *)((char *)((*(s16 *)((char *)(((char *)(arg0) + (D_800BE9C0 * 4))) + 0x20))) + var_v0)) = (s16) (s32) ((((f32) var_f16 - var_f18) * var_f12) + var_f18 + (f32) (*(s16 *)((char *)(arg0) + 0x10)));
                temp_f10 = (f32) (*(f32 *)((char *)(var_a0) - 0x2));
                (*(s16 *)((char *)(((*(s16 *)((char *)(((char *)(arg0) + (D_800BE9C0 * 4))) + 0x20)) + var_v0)) + 0x4)) = (s16) (s32) ((((f32) (*(s16 *)((char *)(var_v1_2) - 0x2)) - temp_f10) * var_f12) + temp_f10 + (f32) (*(s16 *)((char *)(arg0) + 0x12)));
                temp_f8 = (f32) (*(f32 *)((char *)(var_a0) - 0x4));
                temp_t9 = (*(s32 *)((char *)(((char *)(arg0) + (D_800BE9C0 * 4))) + 0x20)) + var_v0;
                var_v0 += 0x10;
                (*(s16 *)((char *)(temp_t9) + 0x2)) = (s16) (s32) ((((f32) (*(s16 *)((char *)(var_v1_2) - 0x4)) - temp_f8) * var_f12) + temp_f8 + (f32) (*(s16 *)((char *)(arg0) + 0x14)));
                var_f16 = (*(s32 *)((char *)(var_v1_2) + 0x0));
                var_f18 = (f32) (*(f32 *)((char *)(var_a0) + 0x0));
            } while (var_a1 != temp_lo);
        }
        temp_v1_2 = var_v1_2 + 6;
        temp_a0 = var_a0 + 6;
        (*(s16 *)((char *)((*(s16 *)((char *)(((char *)(arg0) + (D_800BE9C0 * 4))) + 0x20))) + var_v0)) = (s16) (s32) ((((f32) var_f16 - var_f18) * var_f12) + var_f18 + (f32) (*(s16 *)((char *)(arg0) + 0x10)));
        temp_f10_2 = (f32) (*(f32 *)((char *)(temp_a0) - 0x2));
        (*(s16 *)((char *)(((*(s16 *)((char *)(((char *)(arg0) + (D_800BE9C0 * 4))) + 0x20)) + var_v0)) + 0x4)) = (s16) (s32) ((((f32) (*(s16 *)((char *)(temp_v1_2) - 0x2)) - temp_f10_2) * var_f12) + temp_f10_2 + (f32) (*(s16 *)((char *)(arg0) + 0x12)));
        temp_f8_2 = (f32) (*(f32 *)((char *)(temp_a0) - 0x4));
        (*(s16 *)((char *)(((*(s16 *)((char *)(((char *)(arg0) + (D_800BE9C0 * 4))) + 0x20)) + var_v0)) + 0x2)) = (s16) (s32) ((((f32) (*(s16 *)((char *)(temp_v1_2) - 0x4)) - temp_f8_2) * var_f12) + temp_f8_2 + (f32) (*(s16 *)((char *)(arg0) + 0x14)));
    }
    temp_v0_3 = (*(s32 *)((char *)(arg0) + 0x7C));
    if (temp_v0_3 < var_t1) {
        var_t1 -= temp_t5;
        if (var_t1 < temp_v0_3) {
            goto block_15;
        }
    } else if (var_t1 < temp_v0_3) {
        var_t1 += temp_t5;
        if (temp_v0_3 < var_t1) {
block_15:
            var_t1 = temp_v0_3;
        }
    }
    (*(s32 *)((char *)(arg0) + 0x84)) = var_t1;
}

f32 func_151172D8(void *arg0, f32 arg1) {
    f32 sp34;
    f32 sp2C;
    f32 sp24;
    f32 sp20;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f16;
    f32 temp_f2;
    f32 temp_f8;
    f32 var_f12;
    f32 var_f2;
    f32 var_f2_2;
    s16 temp_a1;
    s32 temp_v0;
    s32 temp_v1;

    var_f12 = arg1;
    sp24 = (*(s32 *)((char *)(arg0) + 0x7C));
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x3C));
    temp_f16 = (*(s32 *)((char *)(arg0) + 0x80));
    temp_f2 = (*(s32 *)((char *)(arg0) + 0x84));
    temp_f8 = (f32) ((s32) (temp_v0 << 0x16) >> 0x16);
    sp2C = temp_f8;
    if ((var_f12 != temp_f8) || (temp_f2 != 0.0f)) {
        temp_v1 = temp_v0 >> 0xA;
        if ((temp_f2 == 0.0f) && (temp_v1 != 0)) {
            temp_a1 = *(&D_80089260 + (temp_v1 * 0xC));
            if (temp_a1 != 0) {
                sp34 = temp_f2;
                sp20 = temp_f16;
                func_15114D24((s16) var_f12, temp_a1, 0x5DC0, 0xC8, 0x9C4, 0);
            }
        }
        sp34 = temp_f2;
        sp20 = temp_f16;
        temp_f12 = var_f12 + (temp_f2 * (f32) D_800BE9E4);
        arg1 = temp_f12;
        temp_f0 = func_15048A70(temp_f12, sp2C);
        var_f12 = arg1;
        temp_f0_2 = fabsf(temp_f0);
        if (temp_f0 > 0.0f) {
            var_f2 = temp_f2 + (temp_f0_2 * temp_f16);
        } else {
            var_f2 = temp_f2 - (temp_f0_2 * temp_f16);
        }
        var_f2_2 = var_f2 * sp24;
        if ((fabsf(temp_f0) < D_800A2FD8) && (fabsf(var_f2_2) < D_800A2FD8)) {
            var_f12 = sp2C;
            var_f2_2 = 0.0f;
        } else if (var_f12 < 0.0f) {
            var_f12 += 360.0f;
        } else if (var_f12 >= 360.0f) {
            var_f12 -= 360.0f;
        }
        (*(s32 *)((char *)(arg0) + 0x84)) = var_f2_2;
    }
    return var_f12;
}

void func_151174A0(void *arg0) {
    (*(s32 *)((char *)(arg0) + 0x8)) = (void *)(s32) func_151172D8((*(s32 *)((char *)(arg0) + 0x8)), 0);
}

void func_151174C8(void *arg0) {
    (*(s32 *)((char *)(arg0) + 0x4)) = (void *)(s32) func_151172D8((*(s32 *)((char *)(arg0) + 0x4)), 0);
}

void func_151174F0(void **arg0) {
    *arg0 = (void *)(s32) func_151172D8(*arg0, 0);
}

f32 func_15117518(void *arg0, f32 arg1) {
    f32 sp3C;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    f32 var_f12;
    f32 var_f2;
    s16 temp_a1;
    s32 temp_v0;
    s32 temp_v1;

    var_f12 = arg1;
    sp28 = (*(s32 *)((char *)(arg0) + 0x7C));
    sp24 = (*(f32 *)((char *)(arg0) + 0x80)) * (f32) D_800BE9E4;
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x3C));
    temp_f2 = (*(s32 *)((char *)(arg0) + 0x84));
    temp_f14 = (f32) ((s32) (temp_v0 << 0x16) >> 0x16);
    if ((var_f12 != temp_f14) || (temp_f2 != 0.0f)) {
        temp_v1 = temp_v0 >> 0xA;
        if ((temp_f2 == 0.0f) && (temp_v1 != 0)) {
            temp_a1 = *(&D_80089260 + (temp_v1 * 0xC));
            if (temp_a1 != 0) {
                sp3C = temp_f2;
                sp34 = temp_f14;
                func_15114D24((s16) var_f12, (s16) temp_f14, temp_a1, 0x5DC0, 0xC8, 0x9C4, 0);
            }
        }
        sp3C = temp_f2;
        sp34 = temp_f14;
        sp2C = func_15048A70(var_f12, temp_f14);
        temp_f12 = arg1 + (temp_f2 * (f32) D_800BE9E4);
        arg1 = temp_f12;
        temp_f0 = func_15048A70(temp_f12, temp_f14);
        var_f12 = arg1;
        sp30 = temp_f0;
        if (((temp_f0 <= 0.0f) && (sp2C > 0.0f)) || ((temp_f0 >= 0.0f) && (sp2C < 0.0f))) {
            var_f12 = temp_f14;
            sp30 = 0.0f;
            var_f2 = -sp28 * temp_f2;
        } else if (temp_f0 > 0.0f) {
            var_f2 = temp_f2 + sp24;
        } else {
            var_f2 = temp_f2 - sp24;
        }
        if ((fabsf(sp30) < 2.0f) && (fabsf(var_f2) < 1.0f)) {
            var_f12 = temp_f14;
            var_f2 = 0.0f;
        } else if (var_f12 < 0.0f) {
            var_f12 += 360.0f;
        } else if (var_f12 >= 360.0f) {
            var_f12 -= 360.0f;
        }
        (*(s32 *)((char *)(arg0) + 0x84)) = var_f2;
    }
    return var_f12;
}

void func_15117770(void **arg0) {
    *arg0 = (void *)(s32) func_15117518(*arg0, 0);
}

void func_15117798(void *arg0) {
    (*(s32 *)((char *)(arg0) + 0x8)) = (void *)(s32) func_15117518((*(s32 *)((char *)(arg0) + 0x8)), 0);
}

void func_151177C0(void *arg0) {
    s32 sp1C;
    void * (*var_t0)(s32, s32, s32);
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 var_a1;
    s32 var_a2;
    s32 var_a3;
    s32 var_t1;
    s32 var_v0;
    u16 temp_v1;
    u8 temp_t9;
    u8 temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x73));
    temp_v1 = (*(s32 *)((char *)(arg0) + 0x54));
    var_a1 = 0x28;
    var_t1 = 3;
    var_a2 = 0;
    var_t0 = NULL;
    var_a3 = temp_v0 & 3;
    if ((temp_v1 == 0x800B) && (D_800BE9F0 == 0xC)) {
        var_a1 = 0x22;
    } else if (D_800BE9F0 == 0x31) {
        var_a1 = 0x14;
        var_a2 = 1;
    } else if (D_800BE9F0 == 0xA) {
        var_a1 = 0x14;
        var_a2 = 1;
    } else if (D_800BE9F0 == 0x34) {
        var_a1 = 0xA;
        var_a2 = 1;
        var_t1 = 6;
        var_t0 = func_15104A80;
    } else if (temp_v1 == 4) {
        var_a1 = 0xF;
    }
    var_v0 = (*(s32 *)((char *)(arg0) + 0x7C));
    if (var_v0 == 0) {
        var_v0 = (*(s32 *)((char *)(arg0) + 0x12)) | 0x80000000;
        (*(s32 *)((char *)(arg0) + 0x7C)) = var_v0;
    }
    if (var_a3 == 3) {
        temp_v0_2 = (s16) var_v0 - var_a1;
        if (temp_v0_2 != (*(s32 *)((char *)(arg0) + 0x12))) {
            (*(s32 *)((char *)(arg0) + 0x12)) = temp_v0_2;
        }
        if ((var_a2 != 0) && !((*(s32 *)((char *)(arg0) + 0x4F)) & 4) && !(temp_v0 & 4)) {
            var_a3 = 1;
        }
    } else if (var_a3 == 0) {
        if ((s16) ((s16) var_v0 - var_a1) != (*(s16 *)((char *)(arg0) + 0x12))) {
            (*(s16 *)((char *)(arg0) + 0x12)) = (s16) var_v0;
        }
    } else if (var_a3 == 2) {
        temp_v0_3 = (s16) var_v0 - var_a1;
        (*(s16 *)((char *)(arg0) + 0x12)) = (s16) ((*(s16 *)((char *)(arg0) + 0x12)) - var_t1);
        if (temp_v0_3 >= (*(s32 *)((char *)(arg0) + 0x12))) {
            (*(s32 *)((char *)(arg0) + 0x12)) = temp_v0_3;
            var_a3 = 3;
            if (var_t0 != NULL) {
                sp1C = 3;
                var_t0(var_a1, var_a2, 3);
                var_a3 = 3;
            }
        }
    } else if (var_a3 == 1) {
        (*(s16 *)((char *)(arg0) + 0x12)) = (s16) ((*(s16 *)((char *)(arg0) + 0x12)) + 3);
        if ((*(s16 *)((char *)(arg0) + 0x12)) >= (s16) var_v0) {
            (*(s16 *)((char *)(arg0) + 0x12)) = (s16) var_v0;
            var_a3 = 0;
        }
    }
    temp_t9 = (*(s32 *)((char *)(arg0) + 0x73)) & 0xFFFC;
    (*(s32 *)((char *)(arg0) + 0x73)) = temp_t9;
    (*(u8 *)((char *)(arg0) + 0x73)) = (u8) (temp_t9 | var_a3);
}

void func_151179BC(void *arg0) {
    s16 sp56;
    s16 sp54;
    s16 sp52;
    s16 sp50;
    s32 sp48;
    s32 sp3C;
    s32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    s16 var_v1_2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_t1;
    s32 temp_t3;
    s32 temp_t6;
    s32 temp_t7;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_t0;
    s32 var_v1;
    u8 temp_t9;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x3C));
    var_v1 = (*(s32 *)((char *)(arg0) + 0x80));
    temp_t7 = temp_v0 >> 0x10;
    temp_t6 = (*(s32 *)((char *)(arg0) + 0x73)) & 3;
    temp_t1 = temp_v0 & 0xFFFF;
    if (var_v1 == 0) {
        var_v1 = (*(s32 *)((char *)(arg0) + 0x14)) | 0x80000000;
        (*(s32 *)((char *)(arg0) + 0x7C)) = (s32) (((*(s32 *)((char *)(arg0) + 0x10)) & 0xFFFF) | ((*(s32 *)((char *)(arg0) + 0x12)) << 0x10));
        (*(s32 *)((char *)(arg0) + 0x80)) = var_v1;
    }
    temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x7C));
    temp_t3 = temp_v0_2 >> 0x10;
    if (temp_t6 == 0) {
        (*(s16 *)((char *)(arg0) + 0x10)) = (s16) temp_v0_2;
        (*(s16 *)((char *)(arg0) + 0x12)) = (s16) temp_t3;
        (*(s16 *)((char *)(arg0) + 0x14)) = (s16) var_v1;
        return;
    }
    sp52 = (s16) var_v1;
    sp54 = (s16) temp_t3;
    sp56 = (s16) temp_v0_2;
    sp38 = temp_t1;
    sp3C = temp_t6;
    sp50 = (s16) temp_t7;
    temp_v0_3 = func_150AD9A0((s16) temp_v0_2 - (*(s16 *)((char *)(arg0) + 0x10)), (s16) temp_t3 - (*(s16 *)((char *)(arg0) + 0x12)), (s16) var_v1 - (*(s16 *)((char *)(arg0) + 0x14)), (s16) temp_t7);
    var_t0 = temp_t6;
    if (var_t0 == 3) {
        if ((s16) temp_t7 < 0) {
            sp48 = (s32) -(s16) temp_t7;
        } else {
            sp48 = (s32) (s16) temp_t7;
        }
        if ((temp_t1 != 0) && !((*(s32 *)((char *)(arg0) + 0x4F)) & 4) && !((*(s32 *)((char *)(arg0) + 0x73)) & 4)) {
            temp_a0 = (*(s32 *)((char *)(arg0) + 0x84));
            if (D_800BE9E4 < temp_a0) {
                (*(s32 *)((char *)(arg0) + 0x84)) = (s32) (temp_a0 - D_800BE9E4);
            } else {
                var_t0 = 1;
            }
        } else {
            (*(s32 *)((char *)(arg0) + 0x84)) = temp_t1;
        }
    } else {
        temp_a0_2 = temp_v0_3 + 6;
        if (var_t0 == 2) {
            sp48 = temp_a0_2;
            if ((s16) temp_t7 < 0) {
                var_v1_2 = -(s16) temp_t7;
            } else {
                var_v1_2 = (s16) temp_t7;
            }
            if (temp_a0_2 >= var_v1_2) {
                var_t0 = 3;
                if ((s16) temp_t7 < 0) {
                    sp48 = (s32) -(s16) temp_t7;
                } else {
                    sp48 = (s32) (s16) temp_t7;
                }
                (*(s32 *)((char *)(arg0) + 0x84)) = temp_t1;
            }
        } else if (var_t0 == 1) {
            if (temp_v0_3 < 3) {
                sp48 = 0;
                var_t0 = 0;
            } else {
                sp48 = temp_v0_3 - 3;
            }
        }
    }
    if (temp_v0_3 != sp48) {
        sp3C = var_t0;
        sp50 = (s16) temp_t7;
        sp34 = cosf((*(s32 *)((char *)(arg0) + 0x0)) * D_800A2FDC);
        sp30 = sinf((*(s32 *)((char *)(arg0) + 0x0)) * D_800A2FE0);
        sp2C = cosf((*(s32 *)((char *)(arg0) + 0x4)) * D_800A2FE4);
        sp28 = sinf((*(s32 *)((char *)(arg0) + 0x4)) * D_800A2FE8);
        sp24 = cosf((*(s32 *)((char *)(arg0) + 0x8)) * D_800A2FEC);
        temp_f0 = sinf((*(s32 *)((char *)(arg0) + 0x8)) * D_800A2FF0);
        if ((s16) temp_t7 < 0) {
            sp48 = -sp48;
        }
        temp_f12 = sp34 * sp28;
        temp_f2 = (f32) sp48;
        (*(s16 *)((char *)(arg0) + 0x10)) = (s16) (s32) ((f32) sp56 + (temp_f2 * ((temp_f12 * sp24) + (sp30 * temp_f0))));
        (*(s16 *)((char *)(arg0) + 0x12)) = (s16) (s32) ((f32) sp54 + (temp_f2 * ((temp_f12 * temp_f0) - (sp30 * sp24))));
        (*(s16 *)((char *)(arg0) + 0x14)) = (s16) (s32) ((f32) sp52 + (temp_f2 * sp34 * sp2C));
    }
    temp_t9 = (*(s32 *)((char *)(arg0) + 0x73)) & 0xFFFC;
    (*(s32 *)((char *)(arg0) + 0x73)) = temp_t9;
    (*(u8 *)((char *)(arg0) + 0x73)) = (u8) (temp_t9 | var_t0);
}

void func_15117D3C(void *arg0, void *arg1) {
    u8 temp_t5;
    u8 temp_v1;

    if (((*(s32 *)((char *)(arg1) + 0x0)) == 1) && ((*(s32 *)((char *)(arg0) + 0x4F)) & 4)) {
        temp_v1 = (*(s32 *)((char *)(arg0) + 0x73));
        if (!(temp_v1 & 3) && !(temp_v1 & 4) && ((temp_t5 = temp_v1 & 0xFFFC, (((*(s32 *)((char *)(arg0) + 0x3C)) & 0xFFFF) == 0)) || ((*(s32 *)((char *)((*(s32 *)((char *)(arg1) + 0x31C))) + 0x57)) == 1))) {
            (*(s32 *)((char *)(arg0) + 0x73)) = temp_t5;
            (*(u8 *)((char *)(arg0) + 0x73)) = (u8) (temp_t5 | 2);
        }
    }
}

void func_15117DA4(void *arg0, f32 arg1, s32 arg2, f32 arg3, void *arg4) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f2;
    s32 var_f14;
    void *temp_v0;
    void *var_s0;

    var_f14 = arg2;
    var_s0 = arg0;
    if (((*(s32 *)((char *)(var_s0) + 0x54)) == 0x8006) && (D_800BE9F0 == 0x35)) {
        temp_v0 = func_151149AC(var_f14, 0xFD);
        var_s0 = temp_v0;
        func_1511F31C(temp_v0);
        var_f14 = D_800A2FF4;
        arg1 = 0.0f;
        arg3 = 0.0f;
    }
    arg2 = var_f14;
    temp_f20 = (*(s32 *)((char *)(var_s0) + 0x0)) * D_800A2FF8;
    temp_f22 = sinf(temp_f20);
    temp_f0 = cosf(temp_f20);
    temp_f10 = (f32) arg2 * temp_f0;
    (*(s32 *)((char *)(arg4) + 0x0)) = arg1;
    (*(f32 *)((char *)(arg4) + 0x4)) = (f32) (temp_f10 - (arg3 * temp_f22));
    (*(f32 *)((char *)(arg4) + 0x8)) = (f32) (((f32) arg2 * temp_f22) + (arg3 * temp_f0));
    temp_f20_2 = (*(s32 *)((char *)(var_s0) + 0x4)) * D_800A2FFC;
    temp_f22_2 = sinf(temp_f20_2);
    temp_f0_2 = cosf(temp_f20_2);
    temp_f12 = (*(s32 *)((char *)(arg4) + 0x8));
    temp_f2 = (*(s32 *)((char *)(arg4) + 0x0));
    (*(f32 *)((char *)(arg4) + 0x0)) = (f32) ((temp_f12 * temp_f22_2) + (temp_f2 * temp_f0_2));
    (*(f32 *)((char *)(arg4) + 0x8)) = (f32) ((temp_f12 * temp_f0_2) + (-temp_f2 * temp_f22_2));
    (*(f32 *)((char *)(arg4) + 0x0)) = (f32) ((*(f32 *)((char *)(arg4) + 0x0)) + (f32) (*(f32 *)((char *)(var_s0) + 0x10)));
    (*(f32 *)((char *)(arg4) + 0x4)) = (f32) ((*(f32 *)((char *)(arg4) + 0x4)) + (f32) (*(f32 *)((char *)(var_s0) + 0x12)));
    (*(f32 *)((char *)(arg4) + 0x8)) = (f32) ((*(f32 *)((char *)(arg4) + 0x8)) + (f32) (*(f32 *)((char *)(var_s0) + 0x14)));
}

/*
Decompilation failure in function func_15117F3C:

Found jr instruction at 142560.s line 3349, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

void func_1511896C(void) {
    func_151189AC(NULL);
}

void func_1511898C(void) {
    func_151189AC(3);
}

void func_151189AC(void *arg0) {
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp5C;
    f32 sp58;
    s32 sp54;
    s32 sp4C;
    s32 sp48;
    s32 sp44;
    s32 sp40;
    f32 sp3C;
    s32 sp30;
    f32 sp2C;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f2;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f12;
    f32 var_f14;
    f32 var_f16;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_f6;
    s32 temp_t6;
    s32 temp_v0;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_a2;
    s32 var_t0;
    s32 var_v0;
    u8 temp_t1;
    u8 temp_v1;
    void *temp_v0_2;

    sp44 = 0;
    sp40 = 0;
    func_1511F990(arg0);
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x3C));
    temp_v1 = (*(s32 *)((char *)(arg0) + 0x73));
    var_a2 = sp40;
    var_t0 = (s32) (temp_v0 << 0x16) >> 0x16;
    temp_t6 = (s32) (temp_v0 & 0xFC00) >> 0xA;
    temp_a0 = temp_v1 & 3;
    sp2C = (f32) var_t0;
    var_f14 = sp2C;
    sp64 = (*(s32 *)((char *)(arg0) + 0x4));
    var_f16 = (*(s32 *)((char *)(arg0) + 0x84));
    if ((temp_a0 == 0) || (temp_a0 == 1)) {
        var_f14 = 0.0f;
        if ((temp_a0 == 1) && (temp_v1 & 4)) {
            var_a2 = 1;
        }
    }
    if ((temp_a0 == 0) || (temp_a0 == 3)) {
        var_f16 = 0.0f;
        sp64 = var_f14;
    }
    if ((sp64 != var_f14) || (var_f16 != 0.0f)) {
        if ((*(s32 *)((char *)(arg0) + 0x7C)) == 0.0f) {
            if (var_a2 != 0) {
                (*(f32 *)((char *)(arg0) + 0x7C)) = (f32) D_800A3138;
            } else {
                (*(f32 *)((char *)(arg0) + 0x7C)) = (f32) D_800A313C;
            }
        }
        sp5C = (*(s32 *)((char *)(arg0) + 0x7C));
        if ((*(s32 *)((char *)(arg0) + 0x80)) == 0.0f) {
            if (var_a2 != 0) {
                (*(f32 *)((char *)(arg0) + 0x80)) = (f32) D_800A3140;
            } else {
                (*(f32 *)((char *)(arg0) + 0x80)) = (f32) D_800A3144;
            }
        }
        if (var_f16 == 0.0f) {
            if (var_f14 == 0.0f) {
                sp44 = (s32) *(&D_80089262 + (temp_t6 * 0xC));
            } else {
                sp44 = (s32) *(&D_80089260 + (temp_t6 * 0xC));
            }
        }
        sp54 = temp_a0;
        sp48 = temp_t6;
        temp_f12 = sp64 + var_f16;
        sp4C = var_t0;
        sp68 = var_f14;
        sp6C = var_f16;
        sp64 = temp_f12;
        sp58 = (*(s32 *)((char *)(arg0) + 0x80));
        temp_f0 = func_15048A70(temp_f12, var_f14);
        var_a0 = temp_a0;
        if (fabsf(temp_f0) < fabsf(var_f16)) {
            var_f16 = -var_f16 * sp5C;
            if (fabsf(var_f16) < 1.0f) {
                var_f16 = 0.0f;
                temp_v0_2 = (temp_t6 * 0xC) + &D_80089260;
                if (var_f14 == 0.0f) {
                    var_a0 = 0;
                    sp44 = (s32) (*(s32 *)((char *)(temp_v0_2) + 0x6));
                } else {
                    var_a0 = 3;
                    sp44 = (s32) (*(s32 *)((char *)(temp_v0_2) + 0x4));
                }
                sp64 = var_f14;
            } else {
                (*(f32 *)((char *)(arg0) + 0x80)) = (f32) ((*(f32 *)((char *)(arg0) + 0x80)) * 0.5f);
            }
        } else if (temp_f0 > 0.0f) {
            var_f16 += (*(s32 *)((char *)(arg0) + 0x80));
            var_f0 = 5.0f;
            if (var_f16 > 5.0f) {
                goto block_36;
            }
        } else {
            var_f16 -= (*(s32 *)((char *)(arg0) + 0x80));
            var_f0 = -5.0f;
            if (var_f16 < -5.0f) {
block_36:
                var_f16 = var_f0;
            }
        }
        var_f0_2 = sp64;
        if (temp_f0 < 0.0f) {
            var_f12 = -temp_f0;
        } else {
            var_f12 = temp_f0;
        }
        if ((var_f12 > 30.0f) && ((temp_f0 * var_f16) < 0.0f)) {
            var_f16 = 0.0f;
        }
        if (var_f0_2 < -180.0f) {
            var_f0_2 += 360.0f;
        } else if (var_f0_2 >= 180.0f) {
            var_f0_2 -= 360.0f;
        }
        temp_t1 = (*(s32 *)((char *)(arg0) + 0x73)) & 0xFFFC;
        (*(s32 *)((char *)(arg0) + 0x73)) = temp_t1;
        (*(u8 *)((char *)(arg0) + 0x73)) = (u8) (temp_t1 | var_a0);
        sp64 = var_f0_2;
        if (sp44 != 0) {
            sp4C = var_t0;
            sp64 = var_f0_2;
            sp6C = var_f16;
            func_15114D24((s16) var_f12, (s16) var_f14, (s16) arg0, sp44, 0x5DC0, 0x9C4, 0x1194, 0);
        }
    }
    (*(s32 *)((char *)(arg0) + 0x84)) = var_f16;
    if ((D_800BE9B4 != 0) || (sp64 != (*(s32 *)((char *)(arg0) + 0x4)))) {
        if ((D_800C35EA == 1) && (sp4C = var_t0, (func_15022B08((s32) ((char *)(arg0) - (char *)(D_800DBEF4)) / 160, 0) != 0))) {
            sp64 = (*(s32 *)((char *)(arg0) + 0x4));
        } else {
            (*(s32 *)((char *)(arg0) + 0x4)) = sp64;
        }
        temp_v1_2 = ((s32) (*(s32 *)((char *)(arg0) + 0x3C)) >> 0x18) & 0xFF;
        if (D_800BE9F0 == 2) {
            func_1000E75C((s32) (255.0f - fabsf(((sp64 - sp2C) * 255.0f) / sp2C)));
            return;
        }
        if (temp_v1_2 != 0) {
            temp_f12_2 = fabsf(sp64);
            if (var_t0 < 0) {
                var_v0 = -var_t0;
            } else {
                var_v0 = var_t0;
            }
            temp_a0_2 = temp_v1_2 - 1;
            sp30 = temp_a0_2;
            temp_f2 = 1.0f - fabsf((temp_f12_2 - (f32) var_v0) / sp2C);
            sp3C = temp_f2;
            func_1518804C(temp_f12_2, temp_a0_2, temp_f2);
            temp_f6 = (s32) (sp3C * 255.0f);
            func_15173C60(temp_f6, sp30);
            if ((D_800BE9F0 == 1) && (sp30 == 0)) {
                func_15173C90(temp_f6, 0, 0xF8);
            }
        }
    }
}

void func_15118F24(void *arg0) {
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    s32 sp4C;
    s32 sp44;
    f32 sp40;
    f32 sp38;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 var_f0;
    f32 var_f12;
    f32 var_f14;
    f32 var_f16;
    f32 var_f18;
    f32 var_f18_2;
    s16 temp_t8;
    s32 temp_s0;
    s32 temp_t6;
    s32 temp_t6_2;
    s32 var_v0;
    u8 temp_t2;

    func_1511F990(arg0, 1);
    temp_t8 = (*(s32 *)((char *)(arg0) + 0x3E));
    sp44 = (s32) temp_t8;
    temp_t6 = (*(s32 *)((char *)(arg0) + 0x73)) & 3;
    var_f14 = (f32) temp_t8;
    sp38 = var_f14;
    var_f12 = (*(s32 *)((char *)(arg0) + 0x8));
    var_f18 = (*(s32 *)((char *)(arg0) + 0x84));
    if ((temp_t6 == 0) || (temp_t6 == 1)) {
        var_f14 = 0.0f;
    }
    if ((temp_t6 == 0) || (temp_t6 == 3)) {
        var_f18 = 0.0f;
        var_f12 = var_f14;
    }
    if ((var_f12 != var_f14) || (var_f18 != 0.0f)) {
        if ((*(s32 *)((char *)(arg0) + 0x7C)) == 0.0f) {
            (*(f32 *)((char *)(arg0) + 0x7C)) = (f32) D_800A3148;
        }
        sp54 = (*(s32 *)((char *)(arg0) + 0x7C));
        if ((*(s32 *)((char *)(arg0) + 0x80)) == 0.0f) {
            (*(f32 *)((char *)(arg0) + 0x80)) = (f32) D_800A314C;
        }
        if (var_f12 > 90.0f) {
            var_f16 = (*(s32 *)((char *)(arg0) + 0x80)) * (180.0f - var_f12);
        } else {
            var_f16 = (*(s32 *)((char *)(arg0) + 0x80)) * var_f12;
        }
        if (var_f18 == 0.0f) {
            if (var_f14 == 0.0f) {
                var_f16 += D_800A3150;
            } else {
                sp64 = var_f18;
                sp50 = var_f16;
                sp60 = var_f14;
                sp5C = var_f12;
                sp4C = temp_t6;
                func_10010F88(var_f12, var_f14, 0x4BA, 0x5DC0, 0, 0, 0, (s32) (*(s32 *)((char *)(arg0) + 0x10)), (s32) (*(s32 *)((char *)(arg0) + 0x12)), (s32) (*(s32 *)((char *)(arg0) + 0x14)), 0xC8, 0x9C4);
                var_f16 += D_800A3154;
            }
        }
        temp_f12 = var_f12 + var_f18;
        sp4C = temp_t6;
        sp60 = var_f14;
        sp50 = var_f16;
        sp5C = temp_f12;
        sp64 = var_f18;
        temp_f0 = func_15048A70(temp_f12, var_f14);
        temp_f2 = fabsf(temp_f0);
        sp58 = temp_f0;
        var_v0 = temp_t6;
        var_f12 = temp_f12;
        if (temp_f2 < fabsf(var_f18)) {
            var_f18_2 = -var_f18 * sp54;
            temp_f2_2 = (*(s32 *)((char *)(arg0) + 0x80));
            if (fabsf(var_f18_2) < (temp_f2_2 * D_800A3158)) {
                var_f18_2 = 0.0f;
                var_f12 = var_f14;
                if (var_f14 == 0.0f) {
                    var_v0 = 0;
                } else {
                    sp64 = 0.0f;
                    sp5C = var_f12;
                    sp4C = 3;
                    func_10010F88(var_f12, var_f14, 0x4BB, 0x5DC0, 0, 0, 0, (s32) (*(s32 *)((char *)(arg0) + 0x10)), (s32) (*(s32 *)((char *)(arg0) + 0x12)), (s32) (*(s32 *)((char *)(arg0) + 0x14)), 0xC8, 0x9C4);
                    var_v0 = 3;
                    var_f18_2 = 0.0f;
                }
            } else {
                (*(f32 *)((char *)(arg0) + 0x80)) = (f32) (temp_f2_2 * 0.5f);
            }
            sp64 = var_f18_2;
            sp5C = var_f12;
            sp4C = var_v0;
            func_151669A0(var_f12, (*(s32 *)((char *)(arg0) + 0x10)), (*(s32 *)((char *)(arg0) + 0x12)), (*(s32 *)((char *)(arg0) + 0x14)), 0x3E19999A, 0xFF, 0);
            var_f18 = var_f18_2;
        } else if (sp58 > 0.0f) {
            var_f18 += var_f16;
            var_f0 = 10.0f;
            if (var_f18 > 10.0f) {
                goto block_30;
            }
        } else {
            var_f18 -= var_f16;
            var_f0 = -10.0f;
            if (var_f18 < -10.0f) {
block_30:
                var_f18 = var_f0;
            }
        }
        if (var_f12 < 0.0f) {
            var_f12 += 360.0f;
        } else if (var_f12 >= 360.0f) {
            var_f12 -= 360.0f;
        }
        temp_t2 = (*(s32 *)((char *)(arg0) + 0x73)) & 0xFFFC;
        (*(s32 *)((char *)(arg0) + 0x73)) = temp_t2;
        (*(u8 *)((char *)(arg0) + 0x73)) = (u8) (temp_t2 | var_v0);
    }
    (*(s32 *)((char *)(arg0) + 0x84)) = var_f18;
    if ((D_800BE9B4 != 0) || (var_f12 != (*(s32 *)((char *)(arg0) + 0x8)))) {
        (*(s32 *)((char *)(arg0) + 0x8)) = var_f12;
        temp_t6_2 = ((s32) (*(s32 *)((char *)(arg0) + 0x3C)) >> 0x18) & 0xFF;
        if ((temp_t6_2 != 0) && (sp44 != 0)) {
            temp_s0 = temp_t6_2 - 1;
            temp_f2_3 = 1.0f - fabsf((var_f12 - sp38) / sp38);
            sp40 = temp_f2_3;
            func_1518804C(var_f12, temp_s0, temp_f2_3);
            func_15173C60((s32) (sp40 * 255.0f), temp_s0);
        }
    }
}

void func_151193AC(void *arg0, void *arg1) {
    u8 temp_t1;
    u8 temp_v0;

    if (((*(s32 *)((char *)(arg1) + 0x0)) == 1) && ((*(s32 *)((char *)(arg1) + 0x65)) == 0)) {
        temp_v0 = (*(s32 *)((char *)(arg0) + 0x73));
        if (!(temp_v0 & 3)) {
            temp_t1 = temp_v0 & 0xFFFC;
            if (!(temp_v0 & 4)) {
                (*(s32 *)((char *)(arg0) + 0x73)) = temp_t1;
                (*(u8 *)((char *)(arg0) + 0x73)) = (u8) (temp_t1 | 2);
            }
        }
    }
}

void func_151193F4(void *arg0) {
    s16 temp_t0;
    s16 temp_v0;
    s32 temp_a1;
    s32 temp_v1;

    if ((*(s32 *)((char *)(arg0) + 0x84)) == 0) {
        (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x12)) | 0x80000000);
    }
    temp_v1 = (*(s32 *)((char *)(arg0) + 0x7C));
    if (temp_v1 != 0) {
        temp_v0 = (*(s32 *)((char *)(arg0) + 0x12));
        (*(u8 *)((char *)(arg0) + 0x73)) = (u8) ((*(u8 *)((char *)(arg0) + 0x73)) & 0xFFFC);
        temp_t0 = ((s32) ((((s32) (*(s32 *)((char *)(arg0) + 0x3C)) >> 0x10) & 0xFFFF) * (*(s32 *)((char *)(arg0) + 0x80))) / 256) + (s16) (*(s32 *)((char *)(arg0) + 0x84));
        temp_a1 = temp_v0 - temp_t0;
        if (temp_t0 != temp_v0) {
            if (temp_a1 < 0) {
                if (-temp_a1 < temp_v1) {
                    (*(s32 *)((char *)(arg0) + 0x12)) = temp_t0;
                } else {
                    (*(s16 *)((char *)(arg0) + 0x12)) = (s16) (temp_v0 + temp_v1);
                }
            } else if (temp_a1 < temp_v1) {
                (*(s32 *)((char *)(arg0) + 0x12)) = temp_t0;
            } else {
                (*(s16 *)((char *)(arg0) + 0x12)) = (s16) (temp_v0 - temp_v1);
            }
            (*(u8 *)((char *)(arg0) + 0x73)) = (u8) (*(u8 *)((char *)(arg0) + 0x73));
            return;
        }
        (*(u8 *)((char *)(arg0) + 0x73)) = (u8) ((*(u8 *)((char *)(arg0) + 0x73)) | 3);
    }
}

void func_151194D4(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    s8 *sp4C;
    u32 sp44;
    s16 temp_v0;
    s16 temp_v1_2;
    s32 var_s1_2;
    s32 var_v0_2;
    s8 *var_t0;
    s8 var_v0;
    u32 temp_v1;
    u32 var_s0;
    u32 var_s0_2;
    u32 var_s1;
    u32 var_s5;
    void *temp_a1;
    void *temp_a1_2;

    var_t0 = (*(s32 *)((char *)(arg0) + 0x1C));
    var_v0 = *var_t0;
    var_s5 = sp44;
    if (var_v0 != -0x21) {
        do {
            switch (var_v0) {                       /* irregular */
            case 1:
                var_s5 = (u32) ((*(u32 *)((char *)(var_t0) + 0x4)) & 0xFFFFFF) >> 4;
                break;
            case 5:
                sp4C = var_t0;
                temp_v1 = (*(s32 *)((char *)(var_t0) + 0x4));
                var_v0_2 = 0;
                var_s1 = 0;
                var_s0 = temp_v1;
                do {
                    temp_a1 = (*(u32 *)((char *)(arg0) + 0x28)) + ((((u32) (var_s0 & 0xFF) / 10U) + var_s5) * 0x10);
                    var_s1 += 1;
                    if (((*(s32 *)((char *)(temp_a1) + 0x0)) == (*(s32 *)((char *)(arg1) + 0x0))) && ((*(s32 *)((char *)(temp_a1) + 0x2)) == (*(s32 *)((char *)(arg1) + 0x2))) && ((*(s32 *)((char *)(temp_a1) + 0x4)) == (*(s32 *)((char *)(arg1) + 0x4)))) {
                        var_v0_2 = 1;
                        (*(s32 *)((char *)(temp_a1) + 0x6)) = arg3;
                    } else {
                        var_s0 = var_s0 >> 8;
                    }
                } while (var_s1 < 3U);
                var_s0_2 = temp_v1;
                if (var_v0_2 != 0) {
                    var_s1_2 = 0;
                    do {
                        temp_a1_2 = (*(u32 *)((char *)(arg0) + 0x28)) + ((((u32) (var_s0_2 & 0xFF) / 10U) + var_s5) * 0x10);
                        if ((*(s32 *)((char *)(temp_a1_2) + 0x6)) == 0) {
                            temp_v1_2 = (*(s32 *)((char *)(temp_a1_2) + 0x4));
                            temp_v0 = (*(s32 *)((char *)(temp_a1_2) + 0x0));
                            if (arg2 < ((temp_v1_2 * temp_v1_2) + (temp_v0 * temp_v0))) {
                                (*(s32 *)((char *)(temp_a1_2) + 0x6)) = arg3;
                                func_151194D4(arg0, temp_a1_2, arg2, arg3);
                            }
                        }
                        var_s1_2 += 1;
                        var_s0_2 = var_s0_2 >> 8;
                    } while (var_s1_2 != 3);
                }
                var_t0 = sp4C;
                break;
            }
            var_v0 = (*(s32 *)((char *)(var_t0) + 0x8));
            var_t0 += 8;
        } while (var_v0 != -0x21);
        sp44 = var_s5;
    }
}

void func_151196D4(void *arg0) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f2;
    s16 temp_a0;
    s16 temp_v0_2;
    s32 temp_t4;
    s32 temp_t5;
    s32 var_a0;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s3;
    s32 var_v0;
    u16 temp_v0;
    u16 temp_v1;
    u16 var_s2;
    void *temp_a1;
    void *var_s0;
    void *var_s0_2;
    void *var_s0_3;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x54));
    var_s0 = (*(s32 *)((char *)(arg0) + 0x28));
    var_s3 = 0x64;
    if ((temp_v0 == 0x21) || (temp_v0 == 0x22)) {
        var_s3 = 0x190;
    }
    (*(s32 *)((char *)(arg0) + 0x84)) = 1;
    var_s2 = 0;
    var_s1 = 0;
    if ((s32) (*(s32 *)((char *)(arg0) + 0x16)) > 0) {
        do {
            if ((*(s32 *)((char *)(var_s0) + 0x6)) == 0) {
                temp_a0 = (*(s32 *)((char *)(var_s0) + 0x4));
                temp_v0_2 = (*(s32 *)((char *)(var_s0) + 0x0));
                if (var_s3 < ((temp_a0 * temp_a0) + (temp_v0_2 * temp_v0_2))) {
                    var_s2 += 1;
                    (*(s32 *)((char *)(var_s0) + 0x6)) = var_s2;
                    func_151194D4(arg0, var_s0, var_s3, var_s2);
                }
            }
            var_s1 += 1;
            var_s0 = (char *)(var_s0) + 0x10;
        } while (var_s1 < (s32) (*(s32 *)((char *)(arg0) + 0x16)));
    }
    if (var_s2 != 0) {
        temp_f22 = D_800A315C;
        do {
            temp_v1 = (*(s32 *)((char *)(arg0) + 0x16));
            temp_a1 = (*(s32 *)((char *)(arg0) + 0x28));
            var_v0 = 0;
            var_a0 = 0;
            var_s1_2 = 0;
            var_s0_2 = temp_a1;
            if ((s32) temp_v1 > 0) {
                do {
                    var_s1_2 += 1;
                    if (var_s2 == (*(s32 *)((char *)(var_s0_2) + 0x6))) {
                        var_v0 += (*(s32 *)((char *)(var_s0_2) + 0x0));
                        var_a0 += (*(s32 *)((char *)(var_s0_2) + 0x4));
                    }
                    var_s0_2 = (char *)(var_s0_2) + 0x10;
                } while (var_s1_2 < (s32) temp_v1);
            }
            if ((var_v0 != 0) || (var_a0 != 0)) {
                var_s0_3 = temp_a1;
                var_s1_3 = 0;
                temp_t4 = (s32) (func_150484A0((f32) var_v0, (f32) var_a0) * temp_f22) & 0xFF;
                if ((s32) var_s2 < temp_t4) {
                    temp_t5 = -temp_t4 & 0xFF;
                    temp_f20 = func_15048A40(temp_t5 & 0xFF);
                    temp_f0 = func_150489B0(temp_t5 & 0xFF);
                    if ((s32) (*(s32 *)((char *)(arg0) + 0x16)) > 0) {
                        do {
                            var_s1_3 += 1;
                            if (var_s2 == (*(s32 *)((char *)(var_s0_3) + 0x6))) {
                                temp_f2 = (f32) (*(f32 *)((char *)(var_s0_3) + 0x4));
                                (*(u16 *)((char *)(var_s0_3) + 0x6)) = (u16) ((((var_s2 - 1) & 3) << 8) | temp_t4);
                                temp_f12 = (f32) (*(f32 *)((char *)(var_s0_3) + 0x0));
                                (*(s16 *)((char *)(var_s0_3) + 0x0)) = (s16) (s32) ((temp_f2 * temp_f20) + (temp_f12 * temp_f0));
                                (*(s16 *)((char *)(var_s0_3) + 0x4)) = (s16) (s32) ((temp_f2 * temp_f0) - (temp_f12 * temp_f20));
                            }
                            var_s0_3 = (char *)(var_s0_3) + 0x10;
                        } while (var_s1_3 < (s32) (*(s32 *)((char *)(arg0) + 0x16)));
                    }
                }
            }
            var_s2 -= 1;
        } while (var_s2 != 0);
    }
}

void func_15119938(void *arg0) {
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    void * sp6C;
    void * *var_s1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 var_f0;
    f32 var_f12;
    f32 var_f18;
    f32 var_f18_2;
    f32 var_f20;
    f32 var_f20_2;
    s32 temp_s6;
    s32 temp_t0;
    s32 temp_t5;
    s32 temp_t9;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s2;
    s32 var_s2_2;
    u16 temp_v0_4;
    void *temp_v0_3;
    void *temp_v0_5;
    void *var_s3;
    void *var_s5;

    var_s3 = (*(s32 *)((char *)(arg0) + 0x28));
    var_s5 = (*(s32 *)((char *)(((char *)(arg0) + (D_800BE9C0 * 4))) + 0x20));
    spB0 = (f32) (*(f32 *)((char *)(arg0) + 0x10));
    spAC = (f32) (*(f32 *)((char *)(arg0) + 0x12));
    spA8 = (f32) (*(f32 *)((char *)(arg0) + 0x14));
    spA4 = (*(s32 *)((char *)(arg0) + 0x2C));
    spA0 = (*(s32 *)((char *)(arg0) + 0x30));
    sp9C = (*(s32 *)((char *)(arg0) + 0x34));
    temp_s6 = (s32) ((*(s32 *)((char *)(arg0) + 0x4)) * D_800A3160);
    if ((*(s32 *)((char *)(arg0) + 0x84)) == 0) {
        func_151196D4(arg0);
    }
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x7C));
    if (temp_v0 >= 0x400) {
        temp_f0 = (*(s32 *)((char *)(arg0) + 0x80));
        temp_t5 = temp_v0 - 1;
        (*(f32 *)((char *)(arg0) + 0x80)) = (f32) (temp_f0 + (((f32) (temp_v0 - 0x400) - temp_f0) * D_800A3164 * D_800BE9A4));
        if (temp_v0 != 0x420) {
            (*(s32 *)((char *)(arg0) + 0x7C)) = temp_t5;
            if (temp_t5 == 0x400) {
                (*(s32 *)((char *)(arg0) + 0x7C)) = 0;
                (*(s32 *)((char *)(arg0) + 0x80)) = 0.0f;
            }
        }
    } else {
        (*(f32 *)((char *)(arg0) + 0x80)) = (f32) ((*(f32 *)((char *)(arg0) + 0x80)) + ((0.01953125f + (0.00390625f * (f32) (func_151EF610() % 6))) * D_800BE9A4));
        temp_t0 = (*(s32 *)((char *)(arg0) + 0x7C)) - (func_151EF610() % 3);
        (*(s32 *)((char *)(arg0) + 0x7C)) = temp_t0;
        if (temp_t0 < 0x14) {
            (*(s32 *)((char *)(arg0) + 0x7C)) = 0xEC;
        }
    }
    var_s2 = 0;
    var_s1 = &sp6C;
    do {
        temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x7C));
        if (temp_v0_2 >= 0x400) {
            (*(u32 *)((char *)(var_s1) + 0x0)) = func_15048A40((u32) (*(u32 *)((char *)(arg0) + 0x80)) & 0xFF);
            var_f0 = func_150489B0((u32) (*(u32 *)((char *)(arg0) + 0x80)) & 0xFF);
        } else {
            temp_f20 = ((*(f32 *)((char *)(arg0) + 0x80)) * D_800A3168) - (D_800A316C * (f32) var_s2);
            if (temp_f20 <= 0.0f) {
                var_f20 = 5.0f;
            } else {
                temp_f22 = func_15048A40((temp_v0_2 >> 1) & 0xFF);
                var_f20 = (sinf(temp_f20) * (2.0f * temp_f22)) + 5.0f;
            }
            temp_t9 = (u32) var_f20 & 0xFF;
            (*(s32 *)((char *)(var_s1) + 0x0)) = func_15048A40(temp_t9 & 0xFF);
            var_f0 = func_150489B0(temp_t9 & 0xFF);
        }
        (*(s32 *)((char *)(var_s1) + 0x4)) = var_f0;
        var_s2 += 1;
        var_s1 = (char *)(var_s1) + 8;
    } while (var_s2 < 4);
    if ((*(s32 *)((char *)(arg0) + 0x7C)) != 0x420) {
        temp_v0_3 = func_1505EFD0(0);
        if (temp_v0_3 != NULL) {
            temp_f12 = (*(f32 *)((char *)(temp_v0_3) + 0x14)) - (f32) (*(f32 *)((char *)(arg0) + 0x10));
            temp_f20_2 = (*(f32 *)((char *)(temp_v0_3) + 0x18)) - (f32) (*(f32 *)((char *)(arg0) + 0x12));
            temp_f18 = (*(f32 *)((char *)(temp_v0_3) + 0x1C)) - (f32) (*(f32 *)((char *)(arg0) + 0x14));
            if (((temp_f12 * temp_f12) + (temp_f20_2 * temp_f20_2) + (temp_f18 * temp_f18)) < 3072.0f) {
                if ((*(s32 *)((char *)((*(s32 *)((char *)(temp_v0_3) + 0x31C))) + 0x57)) == 1) {
                    (*(s32 *)((char *)(arg0) + 0x7C)) = 0x420;
                } else {
                    (*(s32 *)((char *)(arg0) + 0x7C)) = 0x41F;
                }
            }
        }
    }
    var_s2_2 = 0;
    if ((s32) (*(s32 *)((char *)(arg0) + 0x16)) > 0) {
        do {
            temp_v0_4 = (*(s32 *)((char *)(var_s3) + 0x6));
            if (temp_v0_4 != 0) {
                temp_f22_2 = func_15048A40((temp_v0_4 + temp_s6) & 0xFF);
                temp_f0_2 = func_150489B0(((*(s32 *)((char *)(var_s3) + 0x6)) + temp_s6) & 0xFF);
                temp_f14 = (f32) (*(f32 *)((char *)(var_s3) + 0x2));
                temp_v0_5 = &sp6C + (((s32) (*(s32 *)((char *)(var_s3) + 0x6)) >> 8) * 8);
                temp_f2 = (*(s32 *)((char *)(temp_v0_5) + 0x0));
                temp_f12_2 = (*(s32 *)((char *)(temp_v0_5) + 0x4));
                temp_f16 = (f32) (*(f32 *)((char *)(var_s3) + 0x4));
                var_f18 = (temp_f14 * temp_f2) + (temp_f16 * temp_f12_2);
                var_f20_2 = (temp_f14 * temp_f12_2) - (temp_f16 * temp_f2);
                if (var_f20_2 < 1.0f) {
                    var_f18 -= var_f20_2;
                    var_f20_2 = 1.0f;
                }
                temp_f2_2 = (f32) (*(f32 *)((char *)(var_s3) + 0x0));
                var_f12 = (temp_f2_2 * temp_f0_2) + (var_f18 * temp_f22_2);
                var_f18_2 = (var_f18 * temp_f0_2) - (temp_f2_2 * temp_f22_2);
            } else {
                var_f12 = (f32) (*(f32 *)((char *)(var_s3) + 0x0));
                var_f20_2 = (f32) (*(f32 *)((char *)(var_s3) + 0x2));
                var_f18_2 = (f32) (*(f32 *)((char *)(var_s3) + 0x4));
            }
            var_s2_2 += 1;
            var_s5 = (char *)(var_s5) + 0x10;
            var_s3 = (char *)(var_s3) + 0x10;
            (*(s16 *)((char *)(var_s5) - 0x10)) = (s16) (s32) ((var_f12 * spA4) + spB0);
            (*(s16 *)((char *)(var_s5) - 0xE)) = (s16) (s32) ((var_f20_2 * spA0) + spAC);
            (*(s16 *)((char *)(var_s5) - 0xC)) = (s16) (s32) ((var_f18_2 * sp9C) + spA8);
        } while (var_s2_2 < (s32) (*(s32 *)((char *)(arg0) + 0x16)));
    }
}

void func_15119FC0(void *arg0) {
    s16 sp4E;
    void * sp4C;
    s16 sp4A;
    void * *var_s0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f2;
    f32 temp_f2_2;
    s32 temp_t4;
    s32 temp_v0;
    s32 temp_v0_2;
    s8 temp_v1;
    void *var_v0;

    if ((*(s32 *)((char *)(arg0) + 0x84)) < 0x20) {
        if ((*(s32 *)((char *)(arg0) + 0x80)) == 0) {
            (*(s32 *)((char *)(arg0) + 0x80)) = (s32) (*(s32 *)((char *)(arg0) + 0x12));
        }
        temp_f12 = (*(s32 *)((char *)(arg0) + 0x7C));
        (*(f32 *)((char *)(arg0) + 0x0)) = (f32) (sinf((*(f32 *)((char *)(arg0) + 0x7C))) * 15.0f);
        (*(f32 *)((char *)(arg0) + 0x4)) = (f32) (temp_f12 * D_800A3170);
        (*(f32 *)((char *)(arg0) + 0x8)) = (f32) (cosf(temp_f12) * 15.0f);
        (*(f32 *)((char *)(arg0) + 0x7C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x7C)) + (D_800A3178 * D_800BE9A4));
        temp_f20 = (*(s32 *)((char *)(arg0) + 0x7C));
        if (D_800A3174 <= temp_f20) {
            (*(f32 *)((char *)(arg0) + 0x7C)) = (f32) (temp_f20 - D_800A3174);
        }
        temp_v0 = (*(s32 *)((char *)(arg0) + 0x84));
        (*(s16 *)((char *)(arg0) + 0x12)) = (s16) ((s32) (cosf(2.0f * (*(s16 *)((char *)(arg0) + 0x7C))) * 10.0f) + (*(s16 *)((char *)(arg0) + 0x80)) + 0xA);
        if (temp_v0 == 0) {
            temp_v1 = D_8008FD8C;
            var_s0 = &gObjects;
            if (temp_v1 > 0) {
loop_7:
                if (((*(s32 *)((char *)(var_s0) + 0x0)) != 0) && ((*(s32 *)((char *)(var_s0) + 0x127)) != 0xFF)) {
                    if ((*(s32 *)((char *)(arg0) + 0x3C)) < 0) {
                        goto block_12;
                    }
                    temp_f0 = (f32) (*(f32 *)((char *)(arg0) + 0x14)) - (*(f32 *)((char *)(var_s0) + 0x1C));
                    temp_f2 = (f32) (*(f32 *)((char *)(arg0) + 0x10)) - (*(f32 *)((char *)(var_s0) + 0x14));
                    temp_f20_2 = (temp_f0 * temp_f0) + (temp_f2 * temp_f2);
                    if (temp_f20_2 < 6400.0f) {
                        func_1507C3E0(var_s0, &sp4E, &sp4C, &sp4A);
                        (*(s32 *)((char *)(arg0) + 0x4F)) = 0x31;
                        temp_f0_2 = (*(s32 *)((char *)(var_s0) + 0x18));
                        temp_f2_2 = (f32) (*(f32 *)((char *)(arg0) + 0x12));
                        if ((temp_f0_2 < (temp_f2_2 + 80.0f)) && ((temp_f2_2 - 80.0f) < (temp_f0_2 + (f32) sp4E)) && ((s32) (*(f32 *)((char *)(var_s0) + 0x1CA)) > 0)) {
                            if (func_15060BA4(0x42A00000, var_s0, 1) != 0) {
                                temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x3C));
                                if (temp_v0_2 != 0) {
                                    (*(s32 *)((char *)(arg0) + 0x84)) = (s32) (((temp_v0_2 >> 0x10) & 0xFFFF) * 0x3C);
                                    (*(u8 *)((char *)(arg0) + 0x70)) = (u8) ((*(u8 *)((char *)(arg0) + 0x70)) | 4);
                                } else {
                                    (*(s32 *)((char *)(arg0) + 0x6E)) = 1;
                                    func_1508EE0C(2, ((s32) ((char *)(arg0) - (char *)(D_800DBEF4)) / 160) & 0xFFFF);
                                }
                                (*(s32 *)((char *)(arg0) + 0x4F)) = 0x20;
                                func_10010344(0x1CF, var_s0, 0x7D00, 0xC8, 0x9C4);
                                func_151D69B4(arg0, var_s0);
                            } else {
                                (*(s32 *)((char *)(arg0) + 0x4F)) = 0x31;
                                (*(s8 *)((char *)(arg0) + 0x8A)) = (s8) (u32) ((0.25f + (temp_f20_2 * D_800A317C)) * 255.0f);
                            }
                        } else {
                            goto block_25;
                        }
                    } else {
                        (*(s32 *)((char *)(arg0) + 0x8A)) = 0xFF;
                        (*(s32 *)((char *)(arg0) + 0x4F)) = 0x21;
block_25:
                        var_v0 = (D_8008FD8C * 0x32C) + &gObjects;
                        goto block_26;
                    }
                } else {
block_12:
                    var_v0 = (temp_v1 * 0x32C) + &gObjects;
block_26:
                    var_s0 = (char *)(var_s0) + 0x32C;
                    if ((u32) var_s0 >= (u32) var_v0) {

                    } else {
                        goto loop_7;
                    }
                }
            }
        } else {
            (*(s32 *)((char *)(arg0) + 0x4F)) = 0x31;
            (*(s8 *)((char *)(arg0) + 0x8A)) = (s8) ((0x20 - temp_v0) * 8);
        }
    }
    if ((*(s32 *)((char *)(arg0) + 0x84)) > 0) {
        temp_t4 = (*(s32 *)((char *)(arg0) + 0x84)) - D_800BE9E4;
        (*(s32 *)((char *)(arg0) + 0x84)) = temp_t4;
        if (temp_t4 <= 0) {
            (*(s32 *)((char *)(arg0) + 0x84)) = 0;
            (*(s32 *)((char *)(arg0) + 0x8A)) = 0xFF;
            (*(s32 *)((char *)(arg0) + 0x4F)) = 0x21;
        }
    }
}

s32 func_1511A410(s8 *arg0, s32 *arg1) {
    s32 sp10;
    s32 spC;
    s32 var_v0;
    s32 var_v1;
    s8 var_a1;

    spC = 0;
    sp10 = 0;
    var_v0 = 0;
    var_v1 = 0;
    if (*arg0 != -0x21) {
        var_a1 = *((0 * 8) + arg0);
loop_2:
        if (var_a1 == -3) {
            (&spC)[var_v0] = var_v1;
            var_v0 += 1;
        }
        var_v1 += 1;
        var_a1 = (*(s32 *)((var_v1 * 8) + (char *)(arg0)));
        if ((var_a1 != -0x21) && (var_v0 < 2)) {
            goto loop_2;
        }
    }
    *arg1 = sp10;
    return spC;
}

void func_1511A494(void *arg0, s32 *arg1, s32 *arg2) {
    s32 sp60;
    void * *sp58;
    s32 sp50;
    s32 sp4C;
    s32 sp48;
    s32 sp3C;
    void * *var_a3;
    void * *var_t1;
    void * var_a2;
    s16 temp_t9;
    s16 var_t0;
    s32 temp_lo;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_4;
    s32 var_a2_2;
    s32 var_v1;
    s8 temp_v1;
    u8 temp_a0;
    u8 temp_v0_3;
    u8 var_v0;

    var_t1 = NULL;
    var_a3 = &D_80089324;
loop_1:
    temp_v1 = (*(s32 *)((char *)(var_a3) + 0x6));
    var_v0 = (*(s32 *)((char *)(var_a3) + 0x5));
    if (temp_v1 != -1) {
        if (D_800BE9F0 == temp_v1) {
            if (var_v0 != 0xFF) {
                var_v0 |= 0x8000;
            }
            goto block_5;
        }
        goto block_8;
    }
block_5:
    if ((var_v0 == 0xFF) || (var_v0 == (*(s32 *)((char *)(arg0) + 0x54)))) {
        var_t1 = var_a3;
    } else {
block_8:
        var_a3 = (char *)(var_a3) + 0xC;
        if ((char *)(var_a3) != (char *)(&D_80089444)) {
            goto loop_1;
        }
    }
    if (var_t1 != NULL) {
        temp_v0 = *arg1;
        if (temp_v0 == 0) {
            sp58 = var_t1;
            var_t1 = sp58;
            *arg1 = (sp48 << 0x10) | func_1511A410((*(s32 *)((char *)(arg0) + 0x1C)), &sp48);
        } else {
            sp48 = (temp_v0 >> 0x10) & 0xFFFF;
        }
        temp_v0_2 = *arg2;
        temp_t9 = (temp_v0_2 >> 0x10) & 0xFFFF;
        var_t0 = temp_t9;
        if (temp_t9 == 0) {
            var_t0 = 1;
        }
        var_v1 = (temp_v0_2 & 0xFFFF) + var_t0;
        if ((*(s32 *)((char *)(var_t1) + 0x8)) != 0) {
            if (var_v1 < 0) {
                var_t0 = 1;
                var_v1 = (s32) (*(s32 *)((char *)(var_t1) + 0x7));
            } else {
                temp_a0 = (*(s32 *)((char *)(var_t1) + 0x4));
                temp_v0_3 = (*(s32 *)((char *)(var_t1) + 0x7));
                if (var_v1 >= (temp_a0 * temp_v0_3)) {
                    var_t0 = -1;
                    var_v1 = (temp_a0 - 1) * temp_v0_3;
                }
            }
        } else {
            temp_lo = (*(s32 *)((char *)(var_t1) + 0x4)) * (*(s32 *)((char *)(var_t1) + 0x7));
            if (var_v1 >= temp_lo) {
                var_v1 -= temp_lo;
                var_t0 = 1;
            }
        }
        sp3C = 0;
        if ((D_800BE9F0 == 6) || (var_a2 = 0x3E, (D_800BE9F0 == 0x3B))) {
            var_a2 = 3;
        }
        sp50 = var_v1;
        sp4C = (s32) var_t0;
        temp_v0_4 = func_1510D0EC((*(s32 *)((char *)((*(s32 *)((char *)(var_t1) + 0x0))) + ((var_v1 / (s32) (*(s32 *)((char *)(var_t1) + 0x7))) * 4))), &sp60, var_a2, 0);
        var_a2_2 = sp3C;
        if (sp48 != 0) {
            var_a2_2 = (sp60 + temp_v0_4) - 0x20;
        }
        func_1510D874(arg0, temp_v0_4, var_a2_2, 4, 5);
        *arg2 = (sp4C << 0x10) | sp50;
    }
}

void func_1511A6FC(void *arg0) {
    if ((*(s32 *)((char *)(arg0) + 0x3C)) != 0) {
        func_15116110(0);
    }
    func_1511A494(arg0, (char *)(arg0) + 0x80, (char *)(arg0) + 0x84);
}

void func_1511A738(void *arg0) {
    if ((D_800C35EA == 1) && (func_15022B08((s32) ((char *)(arg0) - (char *)(D_800DBEF4)) / 160, 0, arg0) != 0)) {
        (*(s32 *)((char *)(arg0) + 0x7C)) = 0;
        (*(s32 *)((char *)(arg0) + 0x18)) = 0.0f;
    }
    func_151162D4(arg0);
    func_1511A494(arg0, (char *)(arg0) + 0x80, (char *)(arg0) + 0x84);
}

void func_1511A7C0(void *arg0) {
    s32 var_a1;
    s32 var_v1;
    void *temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x80));
    (*(s32 *)((char *)(temp_v0) + 0x1E)) = 1;
    (*(s32 *)((char *)(temp_v0) + 0x10)) = 0.0f;
    (*(s32 *)((char *)(temp_v0) + 0x1C)) = 0;
    (*(s32 *)((char *)(temp_v0) + 0x1D)) = 7;
    (*(s32 *)((char *)(temp_v0) + 0x14)) = 260.0f;
    (*(s32 *)((char *)(temp_v0) + 0x18)) = 100.0f;
    var_v1 = 0;
    var_a1 = 0;
    if ((s32) (*(s32 *)((char *)(arg0) + 0x16)) > 0) {
        do {
            var_v1 += 1;
            (*(s32 *)((char *)((*(s32 *)((char *)(temp_v0) + 0x4))) + var_a1)) = 0.0f;
            var_a1 += 4;
        } while (var_v1 < (s32) (*(s32 *)((char *)(arg0) + 0x16)));
    }
}

void func_1511A838(void *arg0) {
    void *sp;
    void * spE0;
    f32 spDC;
    f32 spD8;
    f32 spD4;
    u8 spBB;
    u8 spBA;
    u8 spB9;
    u8 spB8;
    u8 *spB0;
    s32 spA8;
    u8 *spA0;
    s32 sp9C;
    f32 sp98;
    void *sp70;
    u8 *sp6C;
    f32 *temp_s6;
    f32 *var_s0_3;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f20;
    f32 temp_f24;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 var_f0;
    f32 var_f14;
    f32 var_f20;
    s32 temp_s4;
    s32 temp_t3;
    s32 temp_v0_7;
    s32 var_s0_2;
    s32 var_s0_4;
    s32 var_s2;
    s32 var_s2_2;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *temp_v0_3;
    u8 *temp_v0_4;
    u8 *temp_v0_5;
    u8 *var_a1;
    u8 *var_s0;
    u8 *var_s1;
    u8 *var_s1_2;
    u8 *var_v0_2;
    u8 *var_v0_3;
    u8 temp_a0;
    u8 temp_a1;
    u8 temp_t0;
    u8 temp_t2;
    u8 temp_t4;
    u8 temp_t7;
    u8 temp_v0_6;
    void *temp_v1;
    void *var_s1_3;
    void *var_s5;
    void *var_v0;
    void *var_v1;

    var_s5 = (*(s32 *)((char *)(arg0) + 0x28));
    temp_f24 = (f32) ((*(s32 *)((char *)(arg0) + 0x3C)) & 0xFF);
    if ((*(s32 *)((char *)(arg0) + 0x80)) == NULL) {
        temp_v0 = allocate_memory(0x28, 1, 0, 0);
        (*(s32 *)((char *)(arg0) + 0x80)) = temp_v0;
        spA0 = temp_v0;
        temp_v0_2 = allocate_memory((s32) (*(s32 *)((char *)(arg0) + 0x16)), 1, 0, 0);
        (*(s32 *)((char *)(spA0) + 0x0)) = temp_v0_2;
        temp_v0_3 = allocate_memory((*(s32 *)((char *)(arg0) + 0x16)) * 4, 1, 0, 0);
        (*(s32 *)((char *)(spA0) + 0x4)) = temp_v0_3;
        spB0 = temp_v0_3;
        temp_v0_4 = allocate_memory((*(s32 *)((char *)(arg0) + 0x16)) * 4, 1, 0, 0);
        (*(s32 *)((char *)(spA0) + 0x8)) = temp_v0_4;
        temp_v0_5 = allocate_memory((*(s32 *)((char *)(arg0) + 0x16)) * 4, 1, 0, 0);
        (*(s32 *)((char *)(spA0) + 0xC)) = temp_v0_5;
        var_a1 = temp_v0_5;
        var_s1 = temp_v0_2;
        var_v1 = var_s5;
        var_f14 = (f32) (((s32) (*(f32 *)((char *)(arg0) + 0x3C)) >> 0x10) & 0xFFFF);
        var_s0 = temp_v0_4;
        if (var_f14 == 0.0f) {
            var_f20 = 1.0f;
        } else {
            var_f20 = 1.0f / var_f14;
        }
        var_s2 = 0;
        if ((s32) (*(s32 *)((char *)(arg0) + 0x16)) > 0) {
            do {
                sp70 = var_v1;
                sp6C = var_a1;
                sp98 = var_f14;
                *var_s1 = (u8) (random_u32((*(u8 *)((char *)(arg0) + 0x16)), var_a1) % 255U);
                var_s2 += 1;
                temp_f2 = (f32) (*(f32 *)((char *)(var_v1) + 0x0));
                var_s1 += 1;
                temp_f12 = (f32) (*(f32 *)((char *)(var_v1) + 0x4));
                temp_f0 = sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12));
                *var_a1 = (f32) ((var_f14 - temp_f0) * var_f20);
                *var_s0 = (f32) ((var_f14 - (temp_f0 * D_800A3180)) * var_f20);
                if (*var_s0 < 0.0f) {
                    *var_s0 = 0.0f;
                }
                var_v1 = (char *)(var_v1) + 0x10;
                var_a1 += 4;
                var_s0 += 4;
            } while (var_s2 < (s32) (*(s32 *)((char *)(arg0) + 0x16)));
            var_s2 = 0;
        }
        var_s1_2 = temp_v0_2;
        if ((s32) (*(s32 *)((char *)(arg0) + 0x16)) > 0) {
            do {
                var_s0_2 = 0;
                *var_s1_2 = random_u32((*(s32 *)((char *)(arg0) + 0x16)));
                temp_v1 = (char *)(var_s5) + (var_s2 * 0x10);
                var_v0 = var_s5;
                if ((s32) (*(s32 *)((char *)(arg0) + 0x16)) > 0) {
                    do {
                        if (((*(s32 *)((char *)(temp_v1) + 0x0)) == (*(s32 *)((char *)(var_v0) + 0x0))) && ((*(s32 *)((char *)(temp_v1) + 0x2)) == (*(s32 *)((char *)(var_v0) + 0x2))) && ((*(s32 *)((char *)(temp_v1) + 0x4)) == (*(s32 *)((char *)(var_v0) + 0x4)))) {
                            temp_v0_2[var_s0_2] = *var_s1_2;
                        }
                        var_s0_2 += 1;
                        var_v0 = (char *)(var_v0) + 0x10;
                    } while (var_s0_2 < (s32) (*(s32 *)((char *)(arg0) + 0x16)));
                }
                var_s2 += 1;
                var_s1_2 += 1;
            } while (var_s2 < (s32) (*(s32 *)((char *)(arg0) + 0x16)));
            var_s2 = 0;
        }
        (*(s32 *)((char *)(spA0) + 0x10)) = 0.0f;
        (*(s32 *)((char *)(spA0) + 0x1E)) = 0;
        var_v0_2 = spB0;
        if ((s32) (*(s32 *)((char *)(arg0) + 0x16)) > 0) {
            do {
                *var_v0_2 = 0.0f;
                var_s2 += 1;
                var_v0_2 += 4;
            } while (var_s2 < (s32) (*(s32 *)((char *)(arg0) + 0x16)));
        }
        (*(s32 *)((char *)(spA0) + 0x20)) = 0;
        (*(s32 *)((char *)(spA0) + 0x24)) = 0;
    }
    temp_s4 = (*(s32 *)((*(s32 *)((char *)(arg0) + 0x80))));
    spB0 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x80))) + 0x4));
    temp_s6 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x80))) + 0x8));
    spA0 = (*(s32 *)((char *)(arg0) + 0x80));
    spA8 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x80))) + 0xC));
    var_s2_2 = 0;
    if (((*(s32 *)((char *)(arg0) + 0x73)) & 3) == 3) {
        spA0 = (*(s32 *)((char *)(arg0) + 0x80));
        func_1511A7C0(arg0);
        (*(u8 *)((char *)(arg0) + 0x73)) = (u8) ((*(u8 *)((char *)(arg0) + 0x73)) & 0xFFFC);
    }
    if ((*(s32 *)((char *)(spA0) + 0x1E)) != 0) {
        temp_f2_2 = (*(s32 *)((char *)(spA0) + 0x14));
        temp_a1 = (*(s32 *)((char *)(spA0) + 0x1C));
        (*(u8 *)((char *)(spA0) + 0x1C)) = (u8) (temp_a1 + ((*(u8 *)((char *)(spA0) + 0x1D)) * D_800BE9E4));
        if (temp_f2_2 < (*(s32 *)((char *)(spA0) + 0x18))) {
            var_f0 = 0.5f;
        } else {
            var_f0 = D_800A3184;
        }
        temp_a0 = (*(s32 *)((char *)(spA0) + 0x1C));
        if (((s32) temp_a0 < (s32) temp_a1) || (((s32) temp_a0 >= 0x81) && ((s32) temp_a1 < 0x81))) {
            (*(f32 *)((char *)(spA0) + 0x14)) = (f32) (temp_f2_2 * var_f0);
        }
        temp_f2_3 = (*(s32 *)((char *)(spA0) + 0x14));
        var_s0_3 = temp_s6;
        (*(f32 *)((char *)(spA0) + 0x10)) = (f32) (temp_f2_3 * func_15048A40((*(f32 *)((char *)(spA0) + 0x1C)), temp_a1));
        if (temp_f2_3 <= 3.0f) {
            (*(s32 *)((char *)(spA0) + 0x10)) = 0.0f;
            (*(s32 *)((char *)(spA0) + 0x1E)) = 0U;
        }
        var_v0_3 = spB0;
        if ((s32) (*(s32 *)((char *)(arg0) + 0x16)) > 0) {
            do {
                temp_f0_2 = *var_v0_3;
                *var_v0_3 = (f32) (temp_f0_2 + (((*(f32 *)((char *)(spA0) + 0x10)) - temp_f0_2) * *var_s0_3));
                var_s2_2 += 1;
                var_s0_3 += 4;
                var_v0_3 += 4;
            } while (var_s2_2 < (s32) (*(s32 *)((char *)(arg0) + 0x16)));
            var_s2_2 = 0;
        }
    }
    func_1511490C(&spE0, arg0);
    var_s1_3 = (*(s32 *)((char *)(((char *)(arg0) + (D_800BE9C0 * 4))) + 0x20));
    spB8 = (u8) (*(u8 *)((char *)(arg0) + 0x84));
    spB9 = (u8) ((s32) (*(u8 *)((char *)(arg0) + 0x84)) >> 8);
    spBA = (u8) ((s32) (*(u8 *)((char *)(arg0) + 0x84)) >> 0x10);
    sp9C = 0;
    spBB = (u8) ((s32) (*(u8 *)((char *)(arg0) + 0x84)) >> 0x18);
    if ((s32) (*(s32 *)((char *)(arg0) + 0x16)) > 0) {
        do {
            if (!((*(s32 *)((char *)(var_s1_3) + 0x6)) & 0x4000)) {
                temp_v0_6 = (*(s32 *)((char *)(temp_s4) + var_s2_2));
                temp_t3 = ((*(s32 *)((char *)((char *)(sp) + (temp_v0_6 & 3)) + 0xB8)) + temp_v0_6) & 0xFF;
                var_s0_4 = temp_t3;
                if (temp_v0_6 & 0x80) {
                    var_s0_4 = -temp_t3 & 0xFF;
                }
                temp_f20 = func_15048A40(var_s0_4 & 0xFF) * temp_f24;
                temp_f2_4 = func_150489B0(var_s0_4 & 0xFF) * temp_f24;
                temp_v0_7 = var_s2_2 * 4;
                if ((*(s32 *)((char *)(spA0) + 0x1E)) != 0) {
                    sp9C = (s32) ((*(s32 *)((char *)(spA8) + temp_v0_7)) * (*(s32 *)((char *)(spB0) + temp_v0_7)));
                }
                func_150A7960(&spE0, (f32) (*(f32 *)((char *)(var_s5) + 0x0)) + temp_f20, (f32) ((*(f32 *)((char *)(var_s5) + 0x2)) + sp9C), (f32) (*(f32 *)((char *)(var_s5) + 0x4)) + temp_f2_4, &spDC, &spD8, &spD4);
            } else {
                func_150A7960(&spE0, (f32) (*(f32 *)((char *)(var_s5) + 0x0)), (f32) (*(f32 *)((char *)(var_s5) + 0x2)), (f32) (*(f32 *)((char *)(var_s5) + 0x4)), &spDC, &spD8, &spD4);
            }
            var_s2_2 += 1;
            var_s1_3 = (char *)(var_s1_3) + 0x10;
            var_s5 = (char *)(var_s5) + 0x10;
            (*(s16 *)((char *)(var_s1_3) - 0x10)) = (s16) (s32) spDC;
            (*(s16 *)((char *)(var_s1_3) - 0xE)) = (s16) (s32) spD8;
            (*(s16 *)((char *)(var_s1_3) - 0xC)) = (s16) (s32) spD4;
        } while (var_s2_2 < (s32) (*(s32 *)((char *)(arg0) + 0x16)));
    }
    temp_t7 = spBB + 4;
    temp_t0 = spB8 + 1;
    temp_t2 = spB9 + 2;
    temp_t4 = spBA + 3;
    spBB = temp_t7;
    spB8 = temp_t0;
    spB9 = temp_t2;
    spBA = temp_t4;
    (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((temp_t7 << 0x18) | (temp_t0 & 0xFF) | ((temp_t2 & 0xFF) << 8) | ((temp_t4 & 0xFF) << 0x10));
    func_1511A494(arg0, (s32 *) (spA0 + 0x20), (s32 *) (spA0 + 0x24));
}

void func_1511AF30(void *arg0) {
    f32 sp1C;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    s32 var_v0;
    u32 temp_hi;

    temp_f0 = (f32) (*(f32 *)((char *)(arg0) + 0x3C));
    temp_f14 = (*(s32 *)((char *)(arg0) + 0x7C));
    temp_f12 = 75.0f * temp_f0 * D_800A3188;
    if (temp_f12 != temp_f14) {
        temp_f2 = temp_f12 - temp_f14;
        if (fabsf(temp_f2) < 1.0f) {
            (*(s32 *)((char *)(arg0) + 0x7C)) = temp_f12;
        } else {
            var_v0 = 1;
            if (temp_f2 < 0.0f) {
                var_v0 = -1;
            }
            (*(f32 *)((char *)(arg0) + 0x7C)) = (f32) (temp_f14 + (f32) var_v0);
        }
        (*(s32 *)((char *)(arg0) + 0x80)) = 0.0f;
    } else {
        sp1C = temp_f0;
        temp_hi = random_u32((u16) temp_f12, (*(u8 * *)&temp_f14)) % 1000U;
        if ((s32) temp_hi < 0x1F4) {
            (*(f32 *)((char *)(arg0) + 0x84)) = (f32) ((f32) temp_hi * 5.0f * temp_f0 * D_800A318C * D_800A3190);
        }
        temp_f0_2 = (*(s32 *)((char *)(arg0) + 0x80));
        (*(f32 *)((char *)(arg0) + 0x80)) = (f32) (temp_f0_2 + (((*(f32 *)((char *)(arg0) + 0x84)) - temp_f0_2) * D_800A3194));
    }
    (*(f32 *)((char *)(arg0) + 0x0)) = (f32) ((*(f32 *)((char *)(arg0) + 0x7C)) + (*(f32 *)((char *)(arg0) + 0x80)));
}

/*
Decompilation failure in function func_1511B07C:

Found jr instruction at 142560.s line 6894, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

void func_1511B51C(void *arg0) {
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    s32 sp34;
    s32 sp2C;
    f32 sp28;
    f32 sp20;
    s32 sp1C;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f2;
    f32 var_f12;
    f32 var_f14;
    f32 var_f16;
    f32 var_f18;
    f32 var_f2;
    s16 temp_v1;
    s32 temp_a2;
    s32 temp_t3;
    s32 temp_t6;
    s32 var_v0;
    u8 temp_t9;

    temp_v1 = (*(s32 *)((char *)(arg0) + 0x3E));
    temp_t6 = (*(s32 *)((char *)(arg0) + 0x73)) & 3;
    sp20 = (f32) temp_v1;
    var_f14 = sp20;
    var_f12 = (*(s32 *)((char *)(arg0) + 0x8));
    var_f16 = (*(s32 *)((char *)(arg0) + 0x84));
    if ((temp_t6 == 0) || (temp_t6 == 1)) {
        var_f14 = 0.0f;
    }
    if ((temp_t6 == 0) || (temp_t6 == 3)) {
        var_f12 = var_f14;
        var_f16 = 0.0f;
    }
    if ((var_f12 != var_f14) || (var_f16 != 0.0f)) {
        var_f2 = (*(s32 *)((char *)(arg0) + 0x7C));
        if (var_f2 == 0.0f) {
            var_f2 = D_800A31BC;
        }
        var_f18 = (*(s32 *)((char *)(arg0) + 0x80));
        if (var_f18 == 0.0f) {
            var_f18 = 0.5f;
        }
        temp_f12 = var_f12 + var_f16;
        sp34 = temp_t6;
        sp2C = (s32) temp_v1;
        sp44 = temp_f12;
        sp3C = var_f2;
        sp48 = var_f14;
        sp4C = var_f16;
        sp38 = var_f18;
        temp_f0 = func_15048A70(temp_f12, var_f14);
        temp_f2 = fabsf(temp_f0);
        sp40 = temp_f0;
        var_v0 = temp_t6;
        var_f12 = temp_f12;
        if (temp_f2 < fabsf(var_f16)) {
            var_f16 = -var_f16 * sp3C;
            if (fabsf(var_f16) < (var_f18 * D_800A31C0)) {
                var_f16 = 0.0f;
                var_f12 = var_f14;
                if (var_f14 == 0.0f) {
                    var_v0 = 0;
                } else {
                    var_v0 = 3;
                }
            }
        } else if (sp40 > 0.0f) {
            var_f16 += (var_f18 - var_f16) * D_800A31C4;
        } else {
            var_f16 -= (var_f18 + var_f16) * D_800A31C8;
        }
        if (var_f12 < 0.0f) {
            var_f12 += 360.0f;
        } else if (var_f12 >= 360.0f) {
            var_f12 -= 360.0f;
        }
        temp_t9 = (*(s32 *)((char *)(arg0) + 0x73)) & 0xFFFC;
        (*(s32 *)((char *)(arg0) + 0x73)) = temp_t9;
        (*(u8 *)((char *)(arg0) + 0x73)) = (u8) (temp_t9 | var_v0);
    }
    (*(s32 *)((char *)(arg0) + 0x84)) = var_f16;
    if ((D_800BE9B4 != 0) || (var_f12 != (*(s32 *)((char *)(arg0) + 0x8)))) {
        (*(s32 *)((char *)(arg0) + 0x8)) = var_f12;
        temp_t3 = ((s32) (*(s32 *)((char *)(arg0) + 0x3C)) >> 0x18) & 0xFF;
        if ((temp_t3 != 0) && (temp_v1 != 0)) {
            temp_a2 = temp_t3 - 1;
            sp1C = temp_a2;
            temp_f0_2 = fabsf((var_f12 - sp20) / sp20);
            sp28 = temp_f0_2;
            func_1518804C(var_f12, (s32) var_f14, (f32) temp_a2, temp_f0_2, temp_a2);
            func_15173C60((s32) ((1.0f - sp28) * 255.0f), sp1C);
        }
    }
}

void func_1511B7D4(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void * *sp8C;
    void *sp60;
    void *sp5C;
    void * *var_s4;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f2;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_v0;
    s32 var_a1;
    s32 var_a3;
    s8 temp_t1;
    s8 var_a2;
    u8 var_a0;
    u8 var_s5;
    u8 var_s5_2;
    void *temp_a0;
    void *temp_v0_2;

    var_a1 = arg1;
    var_a2 = arg2;
    var_a3 = arg3;
    var_s5 = 0;
    if ((*(s32 *)((char *)(arg0) + 0x3C)) == 0) {
        var_s5 = D_800A2F70;
        sp5C = (char *)(arg0) - 0xA0;
        sp60 = (char *)(arg0) - 0x140;
        sp8C = &D_800A2F71;
    }
    var_s4 = sp8C;
    temp_f0 = (*(s32 *)((char *)(sp5C) + 0x8));
    var_a0 = var_s5;
    if (((*(s32 *)((char *)(arg0) + 0x80)) != temp_f0) || ((*(s32 *)((char *)(arg0) + 0x84)) != (*(s32 *)((char *)(sp60) + 0x8)))) {
        (*(s32 *)((char *)(arg0) + 0x80)) = temp_f0;
        (*(s32 *)((char *)(arg0) + 0x7C)) = 2;
        (*(f32 *)((char *)(arg0) + 0x84)) = (f32) (*(f32 *)((char *)(sp60) + 0x8));
    }
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x7C));
    if (temp_v0 != 0) {
        (*(s32 *)((char *)(arg0) + 0x7C)) = (s32) (temp_v0 - 1);
        var_s5_2 = var_s5 - 1;
        if (var_s5 != 0) {
            temp_f24 = D_800A31CC;
            do {
                temp_v0_2 = (&sp5C)[(*(s32 *)((char *)(var_s4) + 0x1))];
                temp_s1 = (*(s32 *)((char *)(temp_v0_2) + 0x10)) - (*(s32 *)((char *)(arg0) + 0x10));
                temp_f20 = -(*(s32 *)((char *)(temp_v0_2) + 0x8)) * temp_f24;
                temp_s2 = (*(s32 *)((char *)(temp_v0_2) + 0x12)) - (*(s32 *)((char *)(arg0) + 0x12));
                temp_f22 = sinf(temp_f20);
                temp_f0_2 = cosf(temp_f20);
                temp_t1 = (*(s32 *)((char *)(var_s4) + 0x0)) * 0x10;
                temp_a0 = (*(s32 *)((char *)(arg0) + 0x28)) + temp_t1;
                temp_f2 = (f32) ((*(f32 *)((char *)(temp_a0) + 0x2)) - temp_s2);
                var_a2 = temp_t1;
                temp_f12 = (f32) ((*(f32 *)((char *)(temp_a0) + 0x0)) - temp_s1);
                var_a1 = (*(s32 *)((char *)(temp_a0) + 0x4)) + (*(s32 *)((char *)(arg0) + 0x14));
                var_a0 = var_s5_2;
                var_s4 = (char *)(var_s4) + 2;
                var_a3 = (s32) ((temp_f2 * temp_f0_2) - (temp_f12 * temp_f22));
                (*(s32 *)((char *)((*(s32 *)((char *)(((char *)(arg0) + (D_800BE9C0 * 4))) + 0x20))) + var_a2)) = (s32) ((temp_f2 * temp_f22) + (temp_f12 * temp_f0_2)) + temp_s1 + (*(s32 *)((char *)(arg0) + 0x10));
                (*(s16 *)((char *)(((*(s16 *)((char *)(((char *)(arg0) + (D_800BE9C0 * 4))) + 0x20)) + ((*(s16 *)((char *)(var_s4) - 0x2)) * 0x10))) + 0x2)) = (s16) (var_a3 + temp_s2 + (*(s16 *)((char *)(arg0) + 0x12)));
                (*(s16 *)((char *)(((*(s16 *)((char *)(((char *)(arg0) + (D_800BE9C0 * 4))) + 0x20)) + ((*(s16 *)((char *)(var_s4) - 0x2)) * 0x10))) + 0x4)) = (s16) var_a1;
                var_s5_2 -= 1;
            } while (var_s5_2 != 0);
        }
    }
}

void func_1511BA24(void *arg0) {
    f32 sp1C;
    u32 temp_t7;

    sp1C = 0.0f;
    func_15188010((*(s32 *)((char *)(arg0) + 0x3C)), &sp1C, arg0);
    temp_t7 = (u32) (sp1C * 255.0f);
    (*(s8 *)((char *)(arg0) + 0x8A)) = (s8) temp_t7;
    if (!(temp_t7 & 0xFF)) {
        (*(s32 *)((char *)(arg0) + 0x8A)) = 1;
    }
}

void func_1511BB04(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    f32 temp_f4;
    f32 var_f14;
    f32 var_f16;
    s16 *temp_a0;
    s16 *temp_a1;
    s16 temp_t6_2;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_v1;
    s32 var_v1_2;
    u8 *temp_v0;
    u8 *var_a2;
    u8 *var_v0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a1_2;
    void *temp_a1_3;
    void *temp_t0;
    void *temp_t2;
    void *temp_t4;
    void *temp_t6;
    void *temp_t8;

    if ((*(s32 *)((char *)(arg0) + 0x7C)) == NULL) {
        temp_v0 = allocate_memory((*(s32 *)((char *)(arg0) + 0x16)) * 4, 1, 0, 0);
        (*(s32 *)((char *)(arg0) + 0x7C)) = temp_v0;
        var_a3 = 0;
        var_v1 = 0;
        if ((s32) (*(s32 *)((char *)(arg0) + 0x16)) > 0) {
            var_a2 = temp_v0;
            do {
                var_a3 += 1;
                var_a2 += 4;
                (*(s16 *)((char *)(var_a2) - 0x4)) = (s16) (*(s16 *)((char *)(((*(s16 *)((char *)(arg0) + 0x28)) + var_v1)) + 0x8));
                (*(s16 *)((char *)(var_a2) - 0x2)) = (s16) (*(s16 *)((char *)(((*(s16 *)((char *)(arg0) + 0x28)) + var_v1)) + 0xA));
                temp_t8 = (*(s32 *)((char *)(arg0) + 0x28)) + var_v1;
                temp_t6 = (*(s32 *)((char *)(arg0) + 0x20)) + var_v1;
                (*(s32 *)((char *)(temp_t6) + 0x0)) = (s32) (*(s32 *)((char *)(temp_t8) + 0x0));
                (*(s32 *)((char *)(temp_t6) + 0x4)) = (s32) (*(s32 *)((char *)(temp_t8) + 0x4));
                (*(s32 *)((char *)(temp_t6) + 0x8)) = (s32) (*(s32 *)((char *)(temp_t8) + 0x8));
                (*(s32 *)((char *)(temp_t6) + 0xC)) = (s32) (*(s32 *)((char *)(temp_t8) + 0xC));
                temp_t4 = (*(s32 *)((char *)(arg0) + 0x28)) + var_v1;
                temp_t2 = (*(s32 *)((char *)(arg0) + 0x24)) + var_v1;
                (*(s32 *)((char *)(temp_t2) + 0x0)) = (s32) (*(s32 *)((char *)(temp_t4) + 0x0));
                (*(s32 *)((char *)(temp_t2) + 0x4)) = (s32) (*(s32 *)((char *)(temp_t4) + 0x4));
                (*(s32 *)((char *)(temp_t2) + 0x8)) = (s32) (*(s32 *)((char *)(temp_t4) + 0x8));
                (*(s32 *)((char *)(temp_t2) + 0xC)) = (s32) (*(s32 *)((char *)(temp_t4) + 0xC));
                temp_a0 = (*(s32 *)((char *)(arg0) + 0x20)) + var_v1;
                *temp_a0 += (*(s32 *)((char *)(arg0) + 0x10));
                temp_a0_2 = (*(s32 *)((char *)(arg0) + 0x20)) + var_v1;
                (*(s16 *)((char *)(temp_a0_2) + 0x2)) = (s16) ((*(s16 *)((char *)(temp_a0_2) + 0x2)) + (*(s16 *)((char *)(arg0) + 0x12)));
                temp_a0_3 = (*(s32 *)((char *)(arg0) + 0x20)) + var_v1;
                (*(s16 *)((char *)(temp_a0_3) + 0x4)) = (s16) ((*(s16 *)((char *)(temp_a0_3) + 0x4)) + (*(s16 *)((char *)(arg0) + 0x14)));
                temp_a1 = (*(s32 *)((char *)(arg0) + 0x24)) + var_v1;
                *temp_a1 += (*(s32 *)((char *)(arg0) + 0x10));
                temp_a1_2 = (*(s32 *)((char *)(arg0) + 0x24)) + var_v1;
                (*(s16 *)((char *)(temp_a1_2) + 0x2)) = (s16) ((*(s16 *)((char *)(temp_a1_2) + 0x2)) + (*(s16 *)((char *)(arg0) + 0x12)));
                temp_a1_3 = (*(s32 *)((char *)(arg0) + 0x24)) + var_v1;
                temp_t6_2 = (*(s32 *)((char *)(temp_a1_3) + 0x4));
                var_v1 += 0x10;
                (*(s16 *)((char *)(temp_a1_3) + 0x4)) = (s16) (temp_t6_2 + (*(s16 *)((char *)(arg0) + 0x14)));
            } while (var_a3 < (s32) (*(s32 *)((char *)(arg0) + 0x16)));
        }
    }
    var_a3_2 = 0;
    var_f14 = 1.0f;
    var_f16 = 1.0f;
    if (arg3 != 1.0f) {
        var_f14 = 1.0f / arg3;
    }
    var_v1_2 = 0;
    if (arg4 != 1.0f) {
        var_f16 = 1.0f / arg4;
    }
    var_v0 = (*(s32 *)((char *)(arg0) + 0x7C));
    if ((s32) (*(s32 *)((char *)(arg0) + 0x16)) > 0) {
        do {
            var_a3_2 += 1;
            temp_f4 = (f32) *var_v0;
            var_v0 += 4;
            (*(s16 *)((char *)(((*(s16 *)((char *)(((char *)(arg0) + (D_800BE9C0 * 4))) + 0x20)) + var_v1_2)) + 0x8)) = (s16) (s32) (((temp_f4 + ((-(arg1 - ((f32) (*(s16 *)((char *)(arg0) + 0x10)) + D_800A31D0)) * D_800A31D8) - 1024.0f)) * var_f14) + 1024.0f);
            temp_t0 = (*(s32 *)((char *)(((char *)(arg0) + (D_800BE9C0 * 4))) + 0x20)) + var_v1_2;
            var_v1_2 += 0x10;
            (*(s16 *)((char *)(temp_t0) + 0xA)) = (s16) (s32) ((((f32) (*(s16 *)((char *)(var_v0) - 0x2)) + (((arg2 - ((f32) (*(s16 *)((char *)(arg0) + 0x14)) + D_800A31D4)) * D_800A31DC) - 1024.0f)) * var_f16) + 1024.0f);
        } while (var_a3_2 < (s32) (*(s32 *)((char *)(arg0) + 0x16)));
    }
}

void func_1511BDF4(void *arg0) {
    void *var_v0;

    var_v0 = (*(s32 *)((char *)(arg0) + 0x80));
    if (var_v0 != NULL) {

    } else {
        var_v0 = func_15083E90((*(s32 *)((char *)(arg0) + 0x3F)));
    }
    if (var_v0 != NULL) {
        func_1511BB04(arg0, (*(s32 *)((char *)(var_v0) + 0x14)), (*(s32 *)((char *)(var_v0) + 0x1C)), 1.0f, 1.0f);
    }
}

void func_1511BE5C(void *arg0) {
    (*(f32 *)((char *)(arg0) + 0x4)) = (f32) (func_150484A0((f32) (*(s32 *)((char *)(arg0) + 0x10)) - (f32) (*(f32 *)((char *)((D_800DBFF0)) + 0x2F8)), (f32) (*(s32 *)((char *)(arg0) + 0x14)) - (f32) (*(f32 *)((char *)((D_800DBFF0)) + 0x300))) * D_800A31E0);
}

void func_1511BEBC(void *arg0) {
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    s16 sp72;
    s32 sp5C;
    s32 sp48;
    f32 sp44;
    s32 sp40;
    s32 sp3C;
    f32 sp38;
    void * *temp_v0_3;
    void * *var_s1;
    void * *var_v1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;
    f32 temp_f16;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f4_2;
    s16 temp_v0_5;
    s16 var_a3;
    s32 temp_t4;
    s32 temp_t9;
    s32 temp_v0_2;
    s32 var_a0;
    s32 var_t0;
    s32 var_t1;
    s32 var_t2;
    s32 var_v0;
    s32 var_v0_2;
    u8 temp_t6;
    u8 temp_v0;
    void *temp_v0_4;
    void *var_a1;

    func_1511BE5C(arg0);
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x73));
    var_t1 = (*(s32 *)((char *)(arg0) + 0x80));
    var_t2 = temp_v0 & 3;
    temp_t4 = temp_v0 & 4;
    sp38 = (*(s32 *)((char *)(arg0) + 0x84));
    if (D_800BE9F0 == 0xA) {
        temp_f0 = (*(s32 *)((char *)(arg0) + 0x34)) * 100.0f;
        sp44 = temp_f0 * temp_f0;
        if ((*(s32 *)((char *)(arg0) + 0x7C)) == 0) {
            if ((*(s32 *)((char *)(arg0) + 0x12)) == 0) {
                (*(s32 *)((char *)(arg0) + 0x12)) = 1;
            }
            (*(s32 *)((char *)(arg0) + 0x7C)) = (s32) ((*(s32 *)((char *)(arg0) + 0x12)) & 0xFFFF);
            if (var_t2 == 3) {
                (*(s32 *)((char *)(arg0) + 0x12)) = (*(s32 *)((char *)(arg0) + 0x12));
            }
        }
        temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x7C));
        var_a3 = (s16) temp_v0_2;
        var_s1 = NULL;
        sp74 = (f32) (*(f32 *)((char *)(arg0) + 0x10));
        var_t0 = temp_v0_2 >> 0x10;
        sp78 = (f32) (*(f32 *)((char *)(arg0) + 0x12)) + D_800A31E4;
        sp7C = (f32) (*(f32 *)((char *)(arg0) + 0x14));
        if ((var_t2 != 3) && (var_t2 != 1)) {
            var_a0 = 0;
            if (D_8008FD8C > 0) {
                var_a1 = D_800DBFF0;
loop_10:
                var_a0 += 0x9A0;
                if ((s32) (*(s32 *)((char *)((*(s32 *)((char *)(var_a1) + 0x3D4))) + 0x6B)) >= 4) {
                    var_v0 = D_8008FD8C * 0x4D;
                    goto block_16;
                }
                temp_v0_3 = (*(s32 *)((char *)(var_a1) + 0x3D0));
                temp_f16 = (*(s32 *)((char *)(temp_v0_3) + 0x18));
                if (((temp_f16 + 40.0f) < sp78) && (temp_f0_2 = (temp_f16 + (f32) (*(f32 *)((char *)(temp_v0_3) + 0xE6))) - sp78, temp_f2 = (*(f32 *)((char *)(temp_v0_3) + 0x1C)) - sp7C, temp_f12 = (*(f32 *)((char *)(temp_v0_3) + 0x14)) - sp74, (((temp_f2 * temp_f2) + ((temp_f12 * temp_f12) + (temp_f0_2 * temp_f0_2))) < sp44))) {
                    var_s1 = temp_v0_3;
                } else {
                    var_v0 = D_8008FD8C * 0x4D;
block_16:
                    var_a1 = (char *)(var_a1) + 0x9A0;
                    if (var_a0 < (var_v0 << 5)) {
                        goto loop_10;
                    }
                }
            }
        }
        if ((var_s1 == NULL) && ((var_t2 == 2) || (var_t2 == 1))) {
            var_v1 = &gObjects;
            var_v0_2 = 0;
            if (D_8008FD8C > 0) {
loop_21:
                var_v0_2 += 1;
                if ((*(s32 *)((char *)((*(s32 *)((char *)(var_v1) + 0x31C))) + 0x6B)) != 0) {
                    var_s1 = var_v1;
                } else {
                    var_v1 = (char *)(var_v1) + 0x32C;
                    if (var_v0_2 < D_8008FD8C) {
                        goto loop_21;
                    }
                }
            }
        }
        if ((var_s1 != NULL) || (var_t2 == 2)) {
            if ((var_s1 != NULL) && (var_t1 == 0)) {
                sp72 = var_a3;
                sp48 = var_t0;
                sp3C = var_t1;
                sp5C = var_t2;
                sp40 = temp_t4;
                func_15060A30(0x16B, var_s1);
            }
            if (temp_t4 == 0) {
                var_t2 = 2;
                if (var_t1 == 0) {
                    var_t0 = 0x32;
                    var_t1 += 1;
                    if (func_150DDED0 != NULL) {
                        sp72 = var_a3;
                        sp48 = 0x32;
                        sp3C = var_t1;
                        sp5C = 2;
                        func_150DDED0(arg0);
                        var_t0 = 0x32;
                        var_t2 = 2;
                    }
                }
                if (var_s1 != NULL) {
                    if (var_t0 != 0) {
                        (*(s32 *)((char *)((*(s32 *)((char *)(var_s1) + 0x31C))) + 0x6B)) = 1U;
                    } else {
                        (*(s32 *)((char *)((*(s32 *)((char *)(var_s1) + 0x31C))) + 0x6B)) = 2U;
                    }
                }
                if (var_t0 != 0) {
                    if (D_800BE9E4 < var_t0) {
                        var_t0 -= D_800BE9E4;
                    } else {
                        sp5C = 2;
                        sp3C = var_t1;
                        sp48 = 0;
                        func_10010F88(5.89e-43f, 4.5916e-41f, 0, 0, 0, (s32) (*(s32 *)((char *)(arg0) + 0x10)), (s32) (*(s32 *)((char *)(arg0) + 0x12)), (s32) (*(s32 *)((char *)(arg0) + 0x14)), 0x5DC, 0xDAC);
                        var_t0 = sp48;
                        goto block_45;
                    }
                } else {
                    temp_f4 = sp38 + 1.0f;
                    sp38 = temp_f4;
                    (*(s16 *)((char *)(arg0) + 0x12)) = (s16) (s32) ((f32) (*(s16 *)((char *)(arg0) + 0x12)) - temp_f4);
                    temp_f0_3 = (f32) var_a3 - 300.0f;
                    if ((f32) (*(f32 *)((char *)(arg0) + 0x12)) <= temp_f0_3) {
                        (*(s16 *)((char *)(arg0) + 0x12)) = (s16) (s32) temp_f0_3;
                        sp38 = 0.0f;
                        if (var_s1 != NULL) {
                            (*(s32 *)((char *)((*(s32 *)((char *)(var_s1) + 0x31C))) + 0x6B)) = 0U;
                        }
                        sp5C = 3;
                        sp3C = 0;
                        sp48 = var_t0;
                        func_10010F88(5.9e-43f, 4.5916e-41f, 0, 0, 0, (s32) (*(s32 *)((char *)(arg0) + 0x10)), (s32) (*(s32 *)((char *)(arg0) + 0x12)), (s32) (*(s32 *)((char *)(arg0) + 0x14)), 0x5DC, 0xDAC);
                        var_t1 = 0;
block_45:
                        var_t2 = sp5C;
                    }
                }
                if (var_s1 != NULL) {
                    (*(s16 *)((char *)((*(s16 *)((char *)(var_s1) + 0x31C))) + 0x6C)) = (s16) (s32) sp74;
                    (*(s16 *)((char *)((*(s16 *)((char *)(var_s1) + 0x31C))) + 0x6E)) = (s16) (s32) sp78;
                    (*(s16 *)((char *)((*(s16 *)((char *)(var_s1) + 0x31C))) + 0x70)) = (s16) (s32) sp7C;
                }
            } else if (var_s1 != NULL) {
                if ((var_t1 == 0) && ((*(s32 *)((char *)((*(s32 *)((char *)(var_s1) + 0x31C))) + 0x6B)) == 0)) {
                    var_t0 = 0x32;
                    var_t1 += 1;
                }
                temp_v0_4 = (*(s32 *)((char *)(var_s1) + 0x31C));
                if (var_t0 != 0) {
                    (*(s32 *)((char *)(temp_v0_4) + 0x6B)) = 3U;
                } else if ((*(s32 *)((char *)(temp_v0_4) + 0x6B)) == 3) {
                    (*(s32 *)((char *)(temp_v0_4) + 0x6B)) = 4U;
                    var_t1 = 0;
                }
                if (var_t0 != 0) {
                    if (D_800BE9E4 < var_t0) {
                        var_t0 -= D_800BE9E4;
                    } else {
                        var_t0 = 0;
                    }
                }
            }
            if (var_s1 != NULL) {
                (*(s16 *)((char *)((*(s16 *)((char *)(var_s1) + 0x31C))) + 0x6C)) = (s16) (s32) sp74;
                (*(s16 *)((char *)((*(s16 *)((char *)(var_s1) + 0x31C))) + 0x6E)) = (s16) (s32) sp78;
                (*(s16 *)((char *)((*(s16 *)((char *)(var_s1) + 0x31C))) + 0x70)) = (s16) (s32) sp7C;
            }
        } else if (!(temp_v0 & 8) || (var_t2 == 1)) {
            temp_v0_5 = (*(s32 *)((char *)(arg0) + 0x12));
            if (temp_v0_5 < var_a3) {
                if (var_t1 == 0) {
                    var_t1 += 1;
                }
                var_t2 = 1;
                temp_f4_2 = sp38 + D_800A31E8;
                sp38 = temp_f4_2;
                (*(s16 *)((char *)(arg0) + 0x12)) = (s16) (s32) ((f32) temp_v0_5 + temp_f4_2);
                if ((*(s32 *)((char *)(arg0) + 0x12)) >= var_a3) {
                    (*(s32 *)((char *)(arg0) + 0x12)) = var_a3;
                    var_t1 = 0;
                    var_t2 = 0;
                    sp38 = 0.0f;
                }
            }
            if (var_s1 != NULL) {
                (*(s32 *)((char *)((*(s32 *)((char *)(var_s1) + 0x31C))) + 0x6B)) = 0U;
            }
        }
        (*(s32 *)((char *)(arg0) + 0x80)) = var_t1;
        temp_t6 = (*(s32 *)((char *)(arg0) + 0x73)) & 0xFFFC;
        (*(s32 *)((char *)(arg0) + 0x73)) = temp_t6;
        (*(u8 *)((char *)(arg0) + 0x73)) = (u8) (temp_t6 | var_t2);
        temp_t9 = (*(s32 *)((char *)(arg0) + 0x7C)) & 0xFFFF;
        (*(s32 *)((char *)(arg0) + 0x7C)) = temp_t9;
        (*(s32 *)((char *)(arg0) + 0x7C)) = (s32) (temp_t9 | (var_t0 << 0x10));
        (*(s32 *)((char *)(arg0) + 0x84)) = sp38;
    }
}

void func_1511C540(void) {

}

void func_1511C548(void *arg0) {
    f32 sp20;
    f32 temp_f8;

    sp20 = sinf((*(s32 *)((char *)(arg0) + 0x80)));
    temp_f8 = sinf((*(s32 *)((char *)(arg0) + 0x84))) * 16.0f;
    (*(f32 *)((char *)(arg0) + 0x0)) = (f32) (sp20 * 16.0f);
    (*(s32 *)((char *)(arg0) + 0x8)) = temp_f8;
    (*(f32 *)((char *)(arg0) + 0x80)) = (f32) ((*(f32 *)((char *)(arg0) + 0x80)) + (D_800A31EC * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x84)) = (f32) ((*(f32 *)((char *)(arg0) + 0x84)) + (D_800A31F0 * D_800BE9A4));
    (*(s32 *)((char *)(arg0) + 0x80)) = func_15144B68((*(s32 *)((char *)(arg0) + 0x80)));
    (*(s32 *)((char *)(arg0) + 0x84)) = func_15144B68((*(s32 *)((char *)(arg0) + 0x84)));
    if (((*(s32 *)((char *)(arg0) + 0x8)) == 0.0f) && ((*(s32 *)((char *)(arg0) + 0x84)) == 0.0f)) {
        (*(s32 *)((char *)(arg0) + 0x0)) = 7.5f;
        (*(s32 *)((char *)(arg0) + 0x8)) = 8.0f;
    }
}

void func_1511C638(void *arg0) {
    s32 sp50[64];
    s32 sp64;
    void *sp5C;
    u16 sp5A;
    u16 sp58;
    void *sp48;
    void * *sp44;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_t6_2;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;
    u16 temp_t1;
    u32 temp_hi;
    u32 temp_t5;
    u32 temp_t9;
    u8 temp_t6_3;
    void *temp_t6;
    void *temp_v0;

    sp64 = (*(s32 *)((char *)(arg0) + 0x73)) & 3;
    if (D_800BE9F0 == 4) {
        sp5C = (char *)(arg0) + 0x140;
    } else {
        sp5C = NULL;
    }
    if (sp64 == 1) {
        sp64 = 0;
        (*(s32 *)((char *)(arg0) + 0x8A)) = 0;
        (*(s32 *)((char *)(arg0) + 0x10E)) = 0;
        if (sp5C != NULL) {
            (*(s32 *)((char *)(sp5C) + 0x6E)) = 0;
        }
        temp_a1 = (*(s32 *)((char *)(arg0) + 0x3C));
        if (temp_a1 != 0xFF) {
            func_15173C60(0, temp_a1);
        }
    }
    if (D_800BE9B4 != 0) {
        temp_v0 = (char *)(arg0) + 0xA0;
        if (sp64 == 3) {
            (*(s32 *)((char *)(arg0) + 0x8A)) = 0xFF;
            (*(s32 *)((char *)(temp_v0) + 0x6E)) = 1;
            if (sp5C != NULL) {
                (*(s32 *)((char *)(sp5C) + 0x6E)) = 1;
            }
        } else {
            (*(s32 *)((char *)(arg0) + 0x8A)) = 0;
            (*(s32 *)((char *)(temp_v0) + 0x6E)) = 0;
            if (sp5C != NULL) {
                (*(s32 *)((char *)(sp5C) + 0x6E)) = 0;
            }
        }
    }
    if (sp64 == 2) {
        temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x7C));
        temp_t6 = (char *)(arg0) + 0xA0;
        if (temp_v0_2 < 0) {
            (*(s32 *)((char *)(arg0) + 0x7C)) = (s32) (temp_v0_2 + D_800BE9E4);
        } else {
            sp48 = temp_t6;
            if ((*(s32 *)((char *)(arg0) + 0x80)) == 0) {
                temp_v1 = (*(s32 *)((char *)(temp_t6) + 0x3C));
                temp_v0_3 = temp_v1 & 0xFF;
                switch (temp_v0_3) {                /* irregular */
                case 2:
                    break;
                case 1:
                    func_15170F4C(sp48, 0xFF, 0, 1);
                    func_10010F30(0x2BEU, 0x7FFF, 0x40, 0, 0);
                    break;
                case 0:
                    temp_t9 = random_u32(2U) % 3U;
                    sp50[0] = (s32) (*(s32 *)((char *)&(D_800A2F84) + 0x0));
                    sp50[1] = (u16) (*(u16 *)((char *)&(D_800A2F84) + 0x4));
                    sp5A = (u16) temp_t9;
                    temp_t1 = (&sp50[0])[((u32) ((random_u32() & 1) + sp5A + 1) % 3U) & 0xFFFF];
                    sp5A = (&sp50[0])[sp5A];
                    sp58 = temp_t1;
                    func_10010F30(0x2B7U, 0x7FFF, 0x40, 0, 0);
                    func_10010F30(sp5A, 0x7FFF, 0xA, 0, 0);
                    func_10010F30(sp58, 0x7FFF, 0x36, 0, 0);
                    sp5A = (u16) (random_u32() % 5U);
                    temp_t5 = (u32) ((random_u32() & 3) + sp5A + 1) % 5U;
                    sp44 = &func_1000EC24;
                    sp58 = (u16) temp_t5;
                    func_1000FA64((sp5A + 0x2B1) & 0xFFFF, (*(s32 *)((char *)(arg0) + 0x10)), (*(s32 *)((char *)(arg0) + 0x12)), (*(s32 *)((char *)(arg0) + 0x14)), 0x4000, 0x2711, 0x2710, &func_1000EC24, 0x1001E, 0, 0x200, 0);
                    func_1000FA64((sp58 + 0x2B1) & 0xFFFF, (*(s32 *)((char *)(arg0) + 0x10)), (*(s32 *)((char *)(arg0) + 0x12)), (*(s32 *)((char *)(arg0) + 0x14)), 0x4000, 0x2711, 0x2710, sp44, 0x1001E, 0, 0, 0);
                    sp5A = (u16) (random_u32() % 5U);
                    temp_hi = (u32) ((random_u32() & 3) + sp5A + 1) % 5U;
                    sp58 = (u16) temp_hi;
                    func_1000FA64((sp5A + 0x2B1) & 0xFFFF, (*(s32 *)((char *)(arg0) + 0x10)), (*(s32 *)((char *)(arg0) + 0x12)), (*(s32 *)((char *)(arg0) + 0x14)), 0x4000, 0x2711, 0x2710, sp44, 0x3C, 0, 0x300, 0);
                    func_1000FA64((temp_hi + 0x2B1) & 0xFFFF, (*(s32 *)((char *)(arg0) + 0x10)), (*(s32 *)((char *)(arg0) + 0x12)), (*(s32 *)((char *)(arg0) + 0x14)), 0x4000, 0x2711, 0x2710, sp44, 0x3C, 0, 0x100, 0);
                    break;
                case 3:
                    func_150B2740((temp_v1 >> 8) & 0xFF, 0xFF);
                    break;
                }
            }
            (*(s32 *)((char *)(arg0) + 0x8A)) = 0xFF;
            (*(s32 *)((char *)(sp48) + 0x6E)) = 1;
            if (sp5C != NULL) {
                (*(s32 *)((char *)(sp5C) + 0x6E)) = 1;
            }
            temp_t6_2 = (*(s32 *)((char *)(arg0) + 0x80)) + (D_800BE9E4 * 0x1E);
            (*(s32 *)((char *)(arg0) + 0x80)) = temp_t6_2;
            if (temp_t6_2 >= 0xFF) {
                (*(s32 *)((char *)(arg0) + 0x80)) = 0xFF;
                sp64 = 3;
            }
            temp_a1_2 = (*(s32 *)((char *)(arg0) + 0x3C));
            if (temp_a1_2 != 0xFF) {
                func_15173C60((*(s32 *)((char *)(arg0) + 0x80)), temp_a1_2);
            }
            if (sp64 == 3) {
                (*(s32 *)((char *)(arg0) + 0x7C)) = 0;
                (*(s32 *)((char *)(arg0) + 0x80)) = 0;
            }
        }
    }
    temp_t6_3 = (*(s32 *)((char *)(arg0) + 0x73)) & 0xFFFC;
    (*(s32 *)((char *)(arg0) + 0x73)) = temp_t6_3;
    (*(u8 *)((char *)(arg0) + 0x73)) = (u8) (temp_t6_3 | sp64);
}

void func_1511CB2C(void *arg0, f32 *arg1) {
    *arg1 = D_800A31F4;
}

void func_1511CB44(void *arg0) {
    void *spA4;
    s32 *spA0;
    f32 sp90;
    s32 sp88;
    s32 sp60;
    f32 sp58;
    s32 sp54;
    s32 sp50;
    s32 sp4C;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f2;
    f32 var_f0;
    f32 var_f2;
    f32 var_f2_2;
    s16 temp_t8;
    s32 *var_a1;
    s32 *var_a1_2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    u16 temp_a1;
    u16 var_v1_4;
    u32 temp_t1;
    u32 temp_v0_3;
    u8 *temp_t5;
    u8 *temp_v0;
    u8 temp_t4;
    u8 temp_v0_2;
    void *var_v1_2;
    void *var_v1_3;

    var_f0 = 0.0f;
    if (D_800BE9F0 == 4) {
        sp60 = 0;
        goto block_5;
    }
    if (D_800BE9F0 == 0x13) {
        sp60 = 1;
        if ((*(s32 *)((char *)(arg0) + 0x72)) == 0xFE) {
            var_f0 = D_800A31F8;
            sp54 = 0x20;
            sp50 = 0x20;
        }
block_5:
        sp58 = var_f0;
        func_1511CB2C(arg0, &sp90);
        var_s0 = 0;
        sp90 -= (f32) (*(f32 *)((char *)(arg0) + 0x14));
        if ((*(s32 *)((char *)(arg0) + 0x7C)) == NULL) {
            sp88 = 1;
            temp_v0 = allocate_memory(0x1C, 1, 0, 0);
            (*(s32 *)((char *)(arg0) + 0x7C)) = temp_v0;
            (*(s32 *)((char *)(temp_v0) + 0x0)) = allocate_memory((s32) (*(s32 *)((char *)(arg0) + 0x16)), 1, 0, 0);
            if (sp58 != 0.0f) {
                (*(s32 *)((char *)(temp_v0) + 0x18)) = allocate_memory((*(s32 *)((char *)(arg0) + 0x16)) * 4, 1, 0, 0);
                var_s0_2 = 0;
                var_v1 = 0;
                if ((s32) (*(s32 *)((char *)(arg0) + 0x16)) > 0) {
                    var_v0 = 0;
                    do {
                        var_s0_2 += 1;
                        ((s16 *)((char *)(temp_v0) + 0x18))[var_v1] = (s16) ((*(s16 *)((char *)(((*(s16 *)((char *)(arg0) + 0x28)) + var_v0)) + 0x8)) - 0x2000);
                        temp_t5 = &((s32 *)((char *)(temp_v0) + 0x18))[var_v1];
                        var_v1 += 4;
                        (*(s16 *)((char *)(temp_t5) + 0x2)) = (s16) ((*(s16 *)((char *)(((*(s16 *)((char *)(arg0) + 0x28)) + var_v0)) + 0xA)) - 0x2000);
                        var_v0 += 0x10;
                    } while (var_s0_2 < (s32) (*(s32 *)((char *)(arg0) + 0x16)));
                }
                (*(s32 *)((char *)(temp_v0) + 0x14)) = 0.0f;
            }
            var_s0 = 0;
        } else {
            sp88 = 0;
        }
        if (sp88 != 0) {
            if (sp60 == 0) {
                (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x7C))) + 0x6)) = 0x1DAU;
                (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x7C))) + 0x13)) = 0x6DU;
                (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x7C))) + 0x8)) = 100.0f;
                var_f2 = D_800A31FC;
            } else {
                var_f2 = 1.0f;
                (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x7C))) + 0x6)) = 0x259U;
                (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x7C))) + 0x13)) = 0x6DU;
                (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x7C))) + 0x8)) = 36.0f;
            }
            (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x7C))) + 0x4)) = 0U;
            var_a1 = (*(s32 *)((char *)(arg0) + 0x28));
            var_v1_2 = (*(s32 *)((char *)(((char *)(arg0) + (D_800BE9C0 * 4))) + 0x20));
            if ((s32) (*(s32 *)((char *)(arg0) + 0x16)) > 0) {
                var_v0_2 = 0;
                do {
                    temp_t1 = (u32) ((sp90 - (f32) (*(u32 *)((char *)(((*(u32 *)((char *)(arg0) + 0x28)) + var_v0_2)) + 0x4))) * var_f2);
                    var_v0_2 += 0x10;
                    (*(s8 *)((char *)((*(s8 *)((*(s8 *)((char *)(arg0) + 0x7C))))) + var_s0)) = (s8) temp_t1;
                    var_s0 += 1;
                    var_v1_2 = (char *)(var_v1_2) + 0x10;
                    (*(s16 *)((char *)(var_v1_2) - 0x10)) = (s16) ((*(s16 *)((char *)(var_a1) + 0x0)) + (*(s16 *)((char *)(arg0) + 0x10)));
                    temp_t8 = (*(s32 *)((char *)(var_a1) + 0x4));
                    var_a1 += 0x10;
                    (*(s16 *)((char *)(var_v1_2) - 0xC)) = (s16) (temp_t8 + (*(s16 *)((char *)(arg0) + 0x14)));
                } while (var_s0 < (s32) (*(s32 *)((char *)(arg0) + 0x16)));
                var_s0 = 0;
            }
            (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x7C))) + 0x12)) = 0U;
            (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x7C))) + 0x10)) = 0U;
            if (D_800BE9F0 == 4) {
                temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x72));
                if (temp_v0_2 != 0xF2) {
                    if (temp_v0_2 == 0xF1) {
                        (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x7C))) + 0x11)) = 0U;
                    } else {
                        (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x7C))) + 0x11)) = 0x80U;
                    }
                    (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x7C))) + 0x12)) = 1U;
                }
            }
            if (sp60 == 1) {
                (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x7C))) + 0xC)) = func_15195FB0((s32) arg0, D_800902D8, 0, 0, 0, 0, 8);
            }
        }
        var_v1_3 = (*(s32 *)((char *)(((char *)(arg0) + (D_800BE9C0 * 4))) + 0x20));
        var_a1_2 = (*(s32 *)((char *)(arg0) + 0x28));
        if ((s32) (*(s32 *)((char *)(arg0) + 0x16)) > 0) {
            temp_f22 = D_800A3200;
            temp_f20 = D_800A3204;
            sp4C = ((s32) (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x7C))) + 0x4)) >> 8) & 0xFF;
            do {
                spA0 = var_a1_2;
                spA4 = var_v1_3;
                temp_f0 = func_150489B0(((*(s32 *)((char *)((*(s32 *)((*(s32 *)((char *)(arg0) + 0x7C))))) + var_s0)) + sp4C) & 0xFF, var_a1_2);
                var_f2_2 = temp_f0;
                if (sp60 == 0) {
                    temp_f12 = (f32) ((*(f32 *)((char *)(var_a1_2) + 0x4)) + (*(f32 *)((char *)(arg0) + 0x14)));
                    if (temp_f12 < temp_f20) {
                        var_f2_2 = (temp_f0 + 1.0f) * 0.5f;
                        (*(s16 *)((char *)(var_v1_3) + 0x4)) = (s16) (s32) (temp_f20 + ((temp_f12 - temp_f20) * (((1.0f - temp_f22) * var_f2_2) + temp_f22)));
                    }
                }
                (*(s16 *)((char *)(var_v1_3) + 0x2)) = (s16) (s32) ((f32) ((*(s16 *)((char *)(var_a1_2) + 0x2)) + (*(s16 *)((char *)(arg0) + 0x12))) + (temp_f0 * (*(s16 *)((char *)((*(s16 *)((char *)(arg0) + 0x7C))) + 0x8))));
                if ((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x7C))) + 0x12)) == 0) {
                    temp_v0_3 = (u32) ((32.5f * (var_f2_2 + 1.0f)) + 190.0f);
                    (*(s8 *)((char *)(var_v1_3) + 0xC)) = (s8) temp_v0_3;
                    (*(s8 *)((char *)(var_v1_3) + 0xD)) = (s8) temp_v0_3;
                    (*(s8 *)((char *)(var_v1_3) + 0xE)) = (s8) temp_v0_3;
                }
                var_s0 += 1;
                var_v1_3 = (char *)(var_v1_3) + 0x10;
                var_a1_2 += 0x10;
            } while (var_s0 < (s32) (*(s32 *)((char *)(arg0) + 0x16)));
        }
        temp_a1 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x7C))) + 0x6));
        var_v1_4 = temp_a1;
        if (sp60 == 0) {
            temp_f2 = (f32) (((s32) temp_a1 >> 1) & 0xFFFF);
            var_v1_4 = (u32) (temp_f2 + ((func_150489B0((((s32) (*(u32 *)((char *)((*(u32 *)((char *)(arg0) + 0x7C))) + 0x4)) >> 8) + (*(u32 *)((char *)((*(u32 *)((char *)(arg0) + 0x7C))) + 0x13))) & 0xFF, (s32 *) temp_a1) + 1.0f) * 0.5f * temp_f2)) & 0xFFFF;
        }
        (*(u16 *)((char *)((*(u16 *)((char *)(arg0) + 0x7C))) + 0x4)) = (u16) ((*(u16 *)((char *)((*(u16 *)((char *)(arg0) + 0x7C))) + 0x4)) - (var_v1_4 * D_800BE9E4));
        if ((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x7C))) + 0x12)) != 0) {
            temp_t4 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x7C))) + 0x10)) + (D_800BE9E4 * 2);
            (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x7C))) + 0x10)) = temp_t4;
            (*(s8 *)((char *)(arg0) + 0x8A)) = (s8) (u32) (((func_150489B0((temp_t4 + (*(s8 *)((char *)((*(s8 *)((char *)(arg0) + 0x7C))) + 0x11))) & 0xFF, &D_800BE9E4) + 1.0f) * 0.5f * 205.0f) + 50.0f);
        }
        if (sp58 != 0.0f) {
            func_15094AB8((*(s32 *)((char *)(((char *)(arg0) + (D_800BE9C0 * 4))) + 0x20)), (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x7C))) + 0x18)), (*(s32 *)((char *)(arg0) + 0x16)), (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x7C))) + 0x14)), sp54, sp50);
            (*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x7C))) + 0x14)) = (f32) ((*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x7C))) + 0x14)) + sp58);
            temp_f0_2 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x7C))) + 0x14));
            if (temp_f0_2 >= 360.0f) {
                (*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x7C))) + 0x14)) = (f32) (temp_f0_2 - 360.0f);
                return;
            }
            if (temp_f0_2 < 0.0f) {
                (*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x7C))) + 0x14)) = (f32) (temp_f0_2 + 360.0f);
            }
        }
    }
}

void func_1511D394(void *arg0) {
    void *sp74;
    u8 sp6B;
    f32 sp60;
    s32 sp54;
    s32 sp50;
    s32 sp4C;
    s32 sp48;
    u8 *sp44;
    void *sp40;
    f32 sp3C;
    s32 sp38;
    f32 sp30;
    s32 sp24;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    s16 temp_t8;
    s16 temp_t9;
    s32 temp_t7;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_t1;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    u16 temp_t1;
    u8 *temp_v0_2;
    u8 *temp_v0_3;
    u8 *var_a0;
    u8 *var_a1;
    u8 *var_t4;
    u8 temp_t3;
    u8 temp_t7_2;
    void *temp_t0;
    void *temp_t2;
    void *temp_v0;

    temp_v0 = func_151149AC((*(s32 *)((char *)(arg0) + 0x3C)) & 0xFF);
    if (temp_v0 != NULL) {
        temp_t0 = (*(s32 *)((char *)(temp_v0) + 0x7C));
        if (temp_t0 != NULL) {
            temp_t2 = ((((s32) (*(s32 *)((char *)(arg0) + 0x3C)) >> 8) & 0xFF) * 0x14) + &D_80089444;
            sp54 = (s32) (*(s32 *)((char *)(temp_t2) + 0xA));
            var_v1 = 0;
            sp50 = (s32) (*(s32 *)((char *)(temp_t2) + 0x8));
            temp_t3 = (*(s32 *)((char *)(temp_t2) + 0xC));
            sp3C = (*(s32 *)((char *)(temp_t2) + 0x0));
            sp30 = (*(s32 *)((char *)(temp_t2) + 0x4));
            temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x7C));
            temp_t1 = (*(s32 *)((char *)(temp_t2) + 0xE));
            var_t4 = temp_v0_2;
            if (temp_v0_2 == NULL) {
                sp6B = temp_t3;
                sp40 = temp_t2;
                sp4C = (s32) temp_t1;
                sp74 = temp_t0;
                temp_v0_3 = allocate_memory((*(s32 *)((char *)(arg0) + 0x16)) * 2, 1, 0, 0);
                (*(s32 *)((char *)(arg0) + 0x7C)) = temp_v0_3;
                var_t4 = temp_v0_3;
                var_a3 = 0;
                if ((s32) (*(s32 *)((char *)(arg0) + 0x16)) > 0) {
                    var_v1_2 = 0;
                    var_a0 = temp_v0_3;
                    do {
                        var_a3 += 1;
                        var_a0 += 2;
                        temp_t8 = (*(s32 *)((char *)(((*(s32 *)((char *)(arg0) + 0x28)) + var_v1_2)) + 0x8));
                        var_v1_2 += 0x10;
                        (*(s32 *)((char *)(var_a0) - 0x2)) = temp_t8;
                    } while (var_a3 < (s32) (*(s32 *)((char *)(arg0) + 0x16)));
                }
                (*(s32 *)((char *)(temp_t2) + 0x11)) = 0U;
                var_v1 = 1;
            }
            sp44 = var_t4;
            sp40 = temp_t2;
            temp_t7 = (((s32) (*(s32 *)((char *)(temp_t0) + 0x4)) >> 8) + temp_t3) & 0xFF;
            sp24 = temp_t7;
            sp4C = (s32) temp_t1;
            sp48 = 0;
            sp38 = var_v1;
            temp_f2 = (func_150489B0(temp_t7) + 1.0f) * 0.5f;
            sp60 = temp_f2;
            var_a3_2 = 0;
            temp_f12 = (func_15048A40((u8) sp24) + 0.5f) * 0.5f;
            if (var_v1 != 0) {
                (*(s32 *)((char *)(arg0) + 0x84)) = temp_f2;
                (*(s32 *)((char *)(arg0) + 0x80)) = 0.0f;
            } else {
                temp_f0 = (temp_f2 - (*(s32 *)((char *)(arg0) + 0x84))) * sp3C;
                if (temp_f0 > 0.0f) {
                    (*(f32 *)((char *)(arg0) + 0x80)) = (f32) ((*(f32 *)((char *)(arg0) + 0x80)) + sp30);
                    if (temp_f0 < (*(s32 *)((char *)(arg0) + 0x80))) {
                        (*(s32 *)((char *)(arg0) + 0x80)) = temp_f0;
                    }
                } else {
                    (*(f32 *)((char *)(arg0) + 0x80)) = (f32) ((*(f32 *)((char *)(arg0) + 0x80)) - sp30);
                    if ((*(s32 *)((char *)(arg0) + 0x80)) < temp_f0) {
                        (*(s32 *)((char *)(arg0) + 0x80)) = temp_f0;
                    }
                }
                (*(f32 *)((char *)(arg0) + 0x84)) = (f32) ((*(f32 *)((char *)(arg0) + 0x84)) + (*(f32 *)((char *)(arg0) + 0x80)));
            }
            var_a1 = var_t4;
            var_v1_3 = 0;
            var_t1 = (s32) ((f32) temp_t1 * temp_f12);
            if ((*(s32 *)((char *)((*(s32 *)((char *)(((char *)(arg0) + (D_800BE9C0 * 4))) + 0x20))) + 0xA)) >= 0x801) {
                var_t1 -= 0x800;
            }
            if ((s32) (*(s32 *)((char *)(arg0) + 0x16)) > 0) {
                do {
                    var_a3_2 += 1;
                    temp_t9 = *var_a1 - ((s32) ((*(s32 *)((char *)(arg0) + 0x84)) * (f32) sp54) + sp50);
                    var_a1 += 2;
                    (*(s32 *)((char *)(((*(s32 *)((char *)(((char *)(arg0) + (D_800BE9C0 * 4))) + 0x20)) + var_v1_3)) + 0x8)) = temp_t9;
                    (*(s16 *)((char *)(((*(s16 *)((char *)(((char *)(arg0) + (D_800BE9C0 * 4))) + 0x20)) + var_v1_3)) + 0xA)) = (s16) ((*(s16 *)((char *)(((*(s16 *)((char *)(((char *)(arg0) + ((D_800BE9C0 == 0) * 4))) + 0x20)) + var_v1_3)) + 0xA)) + var_t1);
                    var_v1_3 += 0x10;
                } while (var_a3_2 < (s32) (*(s32 *)((char *)(arg0) + 0x16)));
            }
            temp_t7_2 = (*(s32 *)((char *)(temp_t2) + 0x11)) + (D_800BE9E4 * 2);
            (*(s32 *)((char *)(temp_t2) + 0x11)) = temp_t7_2;
            (*(s8 *)((char *)(arg0) + 0x8A)) = (s8) (u32) (((func_150489B0((s32) temp_f12, (s32 *)0x3F000000, (temp_t7_2 + (*(s8 *)((char *)(temp_t2) + 0x10))) & 0xFF, var_a1, &D_800BE9C0, var_a3_2) + 1.0f) * 0.5f * 205.0f) + 50.0f);
        }
    }
}

void func_1511D7BC(void *arg0) {
    s32 sp40;
    u8 *sp3C;
    s32 sp38;
    s32 sp34;
    s32 sp30;
    f32 sp28;
    u8 sp27;
    u8 *sp20;
    f32 temp_f0;
    s16 temp_t5;
    s16 temp_t5_2;
    s32 temp_v0_4;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_v1;
    s32 var_v1_2;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *temp_v0_3;
    u8 *var_a0;
    u8 *var_t0;
    u8 *var_t1;
    u8 *var_v0;
    u8 temp_a0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x7C));
    var_t0 = temp_v0;
    if (temp_v0 == NULL) {
        temp_v0_2 = allocate_memory(0xC, 1, 0, 0);
        (*(s32 *)((char *)(arg0) + 0x7C)) = temp_v0_2;
        (*(s32 *)((char *)(temp_v0_2) + 0x4)) = 0;
        (*(s32 *)((char *)(temp_v0_2) + 0x8)) = 0;
        sp20 = temp_v0_2;
        temp_v0_3 = allocate_memory((*(s32 *)((char *)(arg0) + 0x16)) * 4, 1, 0, 0);
        var_t0 = sp20;
        var_t1 = temp_v0_3;
        var_a1 = 0;
        *var_t0 = temp_v0_3;
        var_v1 = 0;
        var_a0 = temp_v0_3;
        if ((s32) (*(s32 *)((char *)(arg0) + 0x16)) > 0) {
            do {
                var_a1 += 1;
                var_a0 += 4;
                (*(s16 *)((char *)(var_a0) - 0x4)) = (s16) (*(s16 *)((char *)(((*(s16 *)((char *)(arg0) + 0x28)) + var_v1)) + 0x8));
                temp_t5 = (*(s32 *)((char *)(((*(s32 *)((char *)(arg0) + 0x28)) + var_v1)) + 0xA));
                var_v1 += 0x10;
                (*(s32 *)((char *)(var_a0) - 0x2)) = temp_t5;
            } while (var_a1 < (s32) (*(s32 *)((char *)(arg0) + 0x16)));
        }
    } else {
        var_t1 = *temp_v0;
    }
    temp_v0_4 = (*(s32 *)((char *)(arg0) + 0x3C));
    sp38 = temp_v0_4 & 0xFFF;
    sp34 = (temp_v0_4 >> 0xC) & 0xFFF;
    sp30 = (temp_v0_4 >> 0x18) & 0xFF;
    sp3C = var_t1;
    sp20 = var_t0;
    temp_a0 = ((s32) (*(s32 *)((char *)(arg0) + 0x80)) >> 4) & 0xFF;
    sp27 = temp_a0;
    sp40 = 0;
    sp28 = func_15048A40(temp_a0, 0U);
    temp_f0 = func_150489B0((s32) temp_a0);
    var_a1_2 = 0;
    (*(s32 *)((char *)(arg0) + 0x80)) = (s32) ((*(s32 *)((char *)(arg0) + 0x80)) + (sp30 * D_800BE9E4));
    if ((s32) (*(s32 *)((char *)(arg0) + 0x16)) > 0) {
        var_v0 = var_t1;
        var_v1_2 = 0;
        do {
            var_a1_2 += 1;
            temp_t5_2 = *var_v0 + (s16) (s32) ((f32) sp38 * temp_f0);
            var_v0 += 4;
            (*(s32 *)((char *)(((*(s32 *)((char *)(((char *)(arg0) + (D_800BE9C0 * 4))) + 0x20)) + var_v1_2)) + 0x8)) = temp_t5_2;
            (*(s16 *)((char *)(((*(s16 *)((char *)(((char *)(arg0) + (D_800BE9C0 * 4))) + 0x20)) + var_v1_2)) + 0xA)) = (s16) ((*(s16 *)((char *)(var_v0) - 0x2)) + (s16) (s32) ((f32) sp34 * sp28));
            var_v1_2 += 0x10;
        } while (var_a1_2 < (s32) (*(s32 *)((char *)(arg0) + 0x16)));
    }
    func_1511A494(arg0, (s32 *) (var_t0 + 4), (s32 *) (var_t0 + 8));
}

void func_1511D9E4(void *arg0) {
    u8 *sp2C;
    s16 temp_t2;
    s16 temp_t3;
    s16 temp_t4;
    s16 temp_t4_2;
    s32 temp_t1;
    s32 var_a0;
    s32 var_v1;
    s32 var_v1_2;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *var_a1;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x7C));
    if (temp_v0 == NULL) {
        temp_v0_2 = allocate_memory((*(s32 *)((char *)(arg0) + 0x16)) * 4, 1, 0, 0);
        (*(s32 *)((char *)(arg0) + 0x7C)) = temp_v0_2;
        sp2C = temp_v0_2;
        var_a0 = 0;
        var_v1 = 0;
        var_a1 = temp_v0_2;
        if ((s32) (*(s32 *)((char *)(arg0) + 0x16)) > 0) {
            do {
                var_a0 += 1;
                var_a1 += 4;
                (*(s16 *)((char *)(var_a1) - 0x4)) = (s16) ((*(s16 *)((char *)(((*(s16 *)((char *)(arg0) + 0x28)) + var_v1)) + 0x8)) - 0x2000);
                temp_t4 = (*(s32 *)((char *)(((*(s32 *)((char *)(arg0) + 0x28)) + var_v1)) + 0xA));
                var_v1 += 0x10;
                (*(s16 *)((char *)(var_a1) - 0x2)) = (s16) (temp_t4 - 0x2000);
            } while (var_a0 < (s32) (*(s32 *)((char *)(arg0) + 0x16)));
            var_a0 = 0;
        }
        var_v1_2 = 0;
        if ((s32) (*(s32 *)((char *)(arg0) + 0x16)) > 0) {
            do {
                var_a0 += 1;
                temp_t2 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x28))) + var_v1_2)) + (*(s32 *)((char *)(arg0) + 0x10));
                (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x24))) + var_v1_2)) = temp_t2;
                (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x20))) + var_v1_2)) = temp_t2;
                temp_t3 = (*(s32 *)((char *)(((*(s32 *)((char *)(arg0) + 0x28)) + var_v1_2)) + 0x2)) + (*(s32 *)((char *)(arg0) + 0x12));
                (*(s32 *)((char *)(((*(s32 *)((char *)(arg0) + 0x24)) + var_v1_2)) + 0x2)) = temp_t3;
                (*(s32 *)((char *)(((*(s32 *)((char *)(arg0) + 0x20)) + var_v1_2)) + 0x2)) = temp_t3;
                temp_t4_2 = (*(s32 *)((char *)(((*(s32 *)((char *)(arg0) + 0x28)) + var_v1_2)) + 0x4)) + (*(s32 *)((char *)(arg0) + 0x14));
                (*(s32 *)((char *)(((*(s32 *)((char *)(arg0) + 0x24)) + var_v1_2)) + 0x4)) = temp_t4_2;
                (*(s32 *)((char *)(((*(s32 *)((char *)(arg0) + 0x20)) + var_v1_2)) + 0x4)) = temp_t4_2;
                var_v1_2 += 0x10;
            } while (var_a0 < (s32) (*(s32 *)((char *)(arg0) + 0x16)));
        }
    } else {
        sp2C = temp_v0;
    }
    temp_t1 = (*(s32 *)((char *)(arg0) + 0x3C));
    (*(f32 *)((char *)(arg0) + 0x80)) = (f32) ((*(f32 *)((char *)(arg0) + 0x80)) + ((f32) ((f64) (f32) (s16) temp_t1 * D_800A3208) * (f32) D_800BE9E4));
    func_15094AB8((*(s32 *)((char *)(((char *)(arg0) + (D_800BE9C0 * 4))) + 0x20)), sp2C, (*(s32 *)((char *)(arg0) + 0x16)), (*(s32 *)((char *)(arg0) + 0x80)), temp_t1 >> 0x18, (temp_t1 >> 0x10) & 0xFF);
}

void func_1511DBC4(void *arg0) {
    s32 sp24;
    u8 *sp20;
    f32 temp_f12;
    f32 temp_f2;
    s32 temp_t6;
    s32 var_v0;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *var_v1;
    u8 temp_t1;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x7C));
    if (temp_v0 == NULL) {
        temp_v0_2 = allocate_memory(0x10, 1, 0, 0);
        (*(s32 *)((char *)(arg0) + 0x7C)) = temp_v0_2;
        (*(s32 *)((char *)(temp_v0_2) + 0x0)) = 0.0f;
        (*(s32 *)((char *)(temp_v0_2) + 0x4)) = 0.0f;
        (*(s32 *)((char *)(temp_v0_2) + 0x8)) = 0.0f;
        var_v1 = temp_v0_2;
        (*(f32 *)((char *)(temp_v0_2) + 0xC)) = (f32) D_800A3210;
    } else {
        var_v1 = temp_v0;
    }
    temp_t6 = (*(s32 *)((char *)(arg0) + 0x73)) & 3;
    var_v0 = temp_t6;
    if (temp_t6 == 0) {
        (*(s32 *)((char *)(arg0) + 0x8)) = 0.0f;
    } else if (var_v0 == 3) {
        (*(s32 *)((char *)(arg0) + 0x8)) = 90.0f;
        sp20 = var_v1;
        sp24 = var_v0;
        (*(f32 *)((char *)(arg0) + 0x8)) = (f32) ((*(f32 *)((char *)(arg0) + 0x8)) + (cosf((*(f32 *)((char *)(var_v1) + 0x0)) * D_800A3214) * 0.5f));
        (*(f32 *)((char *)(var_v1) + 0x0)) = (f32) ((*(f32 *)((char *)(var_v1) + 0x0)) + (3.0f * (f32) D_800BE9E4));
    } else if (var_v0 == 2) {
        if ((*(s32 *)((char *)(arg0) + 0x8)) == 0.0f) {
            (*(s32 *)((char *)(var_v1) + 0x4)) = 0.0f;
            (*(s32 *)((char *)(var_v1) + 0x8)) = 0.0f;
        }
        (*(f32 *)((char *)(var_v1) + 0x8)) = (f32) ((*(f32 *)((char *)(var_v1) + 0x8)) + (*(f32 *)((char *)(var_v1) + 0xC)));
        (*(f32 *)((char *)(var_v1) + 0x4)) = (f32) ((*(f32 *)((char *)(var_v1) + 0x4)) + (*(f32 *)((char *)(var_v1) + 0x8)));
        (*(f32 *)((char *)(arg0) + 0x8)) = (f32) ((*(f32 *)((char *)(arg0) + 0x8)) + (*(f32 *)((char *)(var_v1) + 0x4)));
        if ((*(s32 *)((char *)(arg0) + 0x8)) >= 90.0f) {
            var_v0 = 3;
            (*(s32 *)((char *)(arg0) + 0x8)) = 90.0f;
        }
    } else {
        temp_f2 = (*(s32 *)((char *)(arg0) + 0x8));
        temp_f12 = (f32) D_800BE9E4;
        if (temp_f12 < temp_f2) {
            (*(f32 *)((char *)(arg0) + 0x8)) = (f32) (temp_f2 - temp_f12);
        } else {
            (*(s32 *)((char *)(arg0) + 0x8)) = 0.0f;
            var_v0 = 0;
        }
    }
    temp_t1 = (*(s32 *)((char *)(arg0) + 0x73)) & 0xFFFC;
    (*(s32 *)((char *)(arg0) + 0x73)) = temp_t1;
    (*(u8 *)((char *)(arg0) + 0x73)) = (u8) (temp_t1 | var_v0);
}

/*
Decompilation failure in function func_1511DD98:

Found jr instruction at 142560.s line 9985, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

void func_1511DF6C(void *arg0) {
    f32 sp6C;
    s16 sp66;
    void * sp64;
    void * sp62;
    void * *var_s0_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 var_f14;
    f32 var_f6;
    f32 var_f6_2;
    f32 var_f6_3;
    f32 var_f8;
    f32 var_f8_2;
    s32 temp_v0_5;
    s32 var_s0;
    s32 var_s3;
    s8 temp_v1;
    u16 temp_t1;
    u16 temp_t5;
    u16 temp_t8;
    u16 temp_t9;
    u16 temp_t9_2;
    u16 temp_v0_3;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *var_s2;
    void *temp_v0_4;
    void *temp_v0_6;
    void *var_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x7C));
    var_s2 = temp_v0;
    if (temp_v0 == NULL) {
        temp_v0_2 = allocate_memory(0x10, 1, 0, 0);
        (*(s32 *)((char *)(arg0) + 0x7C)) = temp_v0_2;
        var_s2 = temp_v0_2;
        bzero(temp_v0_2, 0x10);
        (*(f32 *)((char *)(var_s2) + 0xC)) = (f32) (*(f32 *)((char *)(arg0) + 0x2C));
        (*(s32 *)((char *)(arg0) + 0x34)) = 0.0f;
        (*(s32 *)((char *)(arg0) + 0x30)) = 0.0f;
        (*(s32 *)((char *)(arg0) + 0x2C)) = 0.0f;
    }
    temp_v0_3 = (*(s32 *)((char *)(arg0) + 0x54));
    var_s0 = 0;
    var_s3 = -1;
    switch (temp_v0_3) {                            /* irregular */
    case 0x59:
    case 0x5A:
        break;
    case 0x54:
        var_s3 = 0x17;
        if (D_800BE9F0 == 0x2D) {
            temp_v0_4 = func_1509B570(0xBA);
            if ((temp_v0_4 != NULL) && ((*(s32 *)((char *)(temp_v0_4) + 0x1FE4)) <= 0)) {
                var_s0 = 1;
            }
        }
        /* fallthrough */
    default:
        (*(f32 *)((char *)(arg0) + 0x4)) = (f32) ((*(f32 *)((char *)(arg0) + 0x4)) + ((f32) D_800BE9E4 * D_800A32F0));
        temp_t8 = (*(s32 *)((char *)(var_s2) + 0x0));
        var_f6 = (f32) temp_t8;
        if ((s32) temp_t8 < 0) {
            var_f6 += 4294967296.0f;
        }
        (*(f32 *)((char *)(arg0) + 0x0)) = (f32) (8.0f * cosf(var_f6 * D_800A32F4));
        temp_t9 = (*(s32 *)((char *)(var_s2) + 0x2));
        var_f6_2 = (f32) temp_t9;
        if ((s32) temp_t9 < 0) {
            var_f6_2 += 4294967296.0f;
        }
        (*(f32 *)((char *)(arg0) + 0x18)) = (f32) (12.0f * cosf(var_f6_2 * D_800A32F8));
        temp_t1 = (*(s32 *)((char *)(var_s2) + 0x0));
        var_f8 = (f32) temp_t1;
        if ((s32) temp_t1 < 0) {
            var_f8 += 4294967296.0f;
        }
        (*(u16 *)((char *)(var_s2) + 0x0)) = (u16) (u32) (var_f8 + ((f32) D_800BE9E4 * D_800A32FC));
        temp_t5 = (*(s32 *)((char *)(var_s2) + 0x2));
        var_f6_3 = (f32) temp_t5;
        if ((s32) temp_t5 < 0) {
            var_f6_3 += 4294967296.0f;
        }
        (*(u16 *)((char *)(var_s2) + 0x2)) = (u16) (u32) (var_f6_3 + ((f32) D_800BE9E4 * D_800A3300));
        break;
    }
    if (((s32) (*(s32 *)((char *)(var_s2) + 0x4)) < 3) && (var_s0 == 0)) {
        temp_v1 = D_8008FD8C;
        if (temp_v1 > 0) {
            var_s0_2 = &gObjects;
loop_23:
            if (((*(s32 *)((char *)(var_s0_2) + 0x0)) != 0) && ((s32) (*(s32 *)((char *)(var_s0_2) + 0x1CA)) > 0)) {
                if ((*(s32 *)((char *)(var_s0_2) + 0x127)) == 0xFF) {
                    goto block_28;
                }
                if ((*(s32 *)((char *)(var_s0_2) + 0x300)) == 0) {
                    var_v0 = (temp_v1 * 0x32C) + &gObjects;
                    goto block_49;
                }
                temp_v0_5 = (*(s32 *)((char *)(arg0) + 0x84));
                if (((temp_v0_5 == 1) && ((*(s32 *)((char *)(var_s0_2) + 0x128)) != 0)) || ((temp_v0_5 == 2) && ((*(s32 *)((char *)(var_s0_2) + 0x128)) == 0)) || ((temp_v0_5 == 3) && ((*(s32 *)((char *)(var_s0_2) + 0x128)) & 1))) {
                    var_v0 = (temp_v1 * 0x32C) + &gObjects;
                    goto block_49;
                }
                if ((var_s3 != -1) && (func_1503195C(var_s0_2, var_s3, 0) != 0)) {
                    var_v0 = (D_8008FD8C * 0x32C) + &gObjects;
                    goto block_49;
                }
                temp_v0_6 = (*(s32 *)((char *)(var_s0_2) + 0x31C));
                temp_f0 = (f32) (*(f32 *)((char *)(arg0) + 0x10)) - (*(f32 *)((char *)(var_s0_2) + 0x14));
                temp_f2 = (f32) (*(f32 *)((char *)(arg0) + 0x14)) - (*(f32 *)((char *)(var_s0_2) + 0x1C));
                var_f14 = (f32) ((*(s32 *)((char *)(temp_v0_6) + 0x1AF)) & 0xFF) * 0.015625f;
                if ((*(s32 *)((char *)(temp_v0_6) + 0x84)) != 0) {
                    var_f14 *= D_800A3304;
                }
                temp_f12 = 100.0f * var_f14;
                if ((((temp_f0 * temp_f0) + (temp_f2 * temp_f2)) < (temp_f12 * temp_f12)) && (sp6C = temp_f12, func_1507C3E0((*(void **)&temp_f12), (*(s16 * *)&var_f14), var_s0_2, &sp66, &sp64, &sp62), temp_f0_2 = (f32) (*(f32 *)((char *)(arg0) + 0x12)), (temp_f0_2 < (*(f32 *)((char *)(var_s0_2) + 0x17C)))) && (temp_f2_2 = (*(f32 *)((char *)(var_s0_2) + 0x18)), (temp_f2_2 < (temp_f0_2 + sp6C))) && ((temp_f0_2 - sp6C) < (temp_f2_2 + (f32) sp66))) {
                    (*(s32 *)((char *)(arg0) + 0x80)) = (s32) (*(s32 *)((char *)(var_s0_2) + 0x3B));
                    (*(s32 *)((char *)(var_s2) + 0x4)) = 3U;
                    func_1511DD98(sp6C, arg0, var_s0_2);
                    func_151D6970(var_s0_2, arg0);
                } else {
                    var_v0 = (D_8008FD8C * 0x32C) + &gObjects;
                    goto block_49;
                }
            } else {
block_28:
                var_v0 = (temp_v1 * 0x32C) + &gObjects;
block_49:
                var_s0_2 = (char *)(var_s0_2) + 0x32C;
                if ((u32) var_s0_2 < (u32) var_v0) {
                    goto loop_23;
                }
            }
        }
    }
    if ((*(s32 *)((char *)(var_s2) + 0x4)) == 0) {
        (*(f32 *)((char *)(arg0) + 0x34)) = (f32) ((*(f32 *)((char *)(arg0) + 0x34)) + (D_800A3308 * (*(f32 *)((char *)(var_s2) + 0xC))));
        temp_f2_3 = (*(s32 *)((char *)(var_s2) + 0xC));
        if (temp_f2_3 <= (*(s32 *)((char *)(arg0) + 0x34))) {
            (*(s32 *)((char *)(arg0) + 0x34)) = temp_f2_3;
            (*(s32 *)((char *)(var_s2) + 0x6)) = 0U;
            (*(u16 *)((char *)(var_s2) + 0x4)) = (u16) ((*(u16 *)((char *)(var_s2) + 0x4)) + 1);
            (*(f32 *)((char *)(var_s2) + 0x8)) = (f32) D_800A330C;
        }
        (*(s32 *)((char *)(arg0) + 0x30)) = (*(s32 *)((char *)(arg0) + 0x34));
        goto block_66;
    }
    if ((*(s32 *)((char *)(var_s2) + 0x4)) == 1) {
        (*(f32 *)((char *)(var_s2) + 0x8)) = (f32) ((*(f32 *)((char *)(var_s2) + 0x8)) - (D_800A3310 * (*(f32 *)((char *)(var_s2) + 0xC))));
        if ((*(s32 *)((char *)(var_s2) + 0x8)) <= 0.0f) {
            (*(u16 *)((char *)(var_s2) + 0x4)) = (u16) ((*(u16 *)((char *)(var_s2) + 0x4)) + 1);
            (*(s32 *)((char *)(var_s2) + 0x8)) = 0.0f;
        }
        temp_t9_2 = (*(s32 *)((char *)(var_s2) + 0x6));
        var_f8_2 = (f32) temp_t9_2;
        if ((s32) temp_t9_2 < 0) {
            var_f8_2 += 4294967296.0f;
        }
        (*(f32 *)((char *)(arg0) + 0x34)) = (f32) ((cosf(var_f8_2 * D_800A3314) * (*(f32 *)((char *)(var_s2) + 0x8))) + (*(f32 *)((char *)(var_s2) + 0xC)));
        temp_f2_4 = (*(s32 *)((char *)(arg0) + 0x34));
        (*(s32 *)((char *)(arg0) + 0x30)) = temp_f2_4;
        (*(s32 *)((char *)(arg0) + 0x2C)) = temp_f2_4;
        (*(u16 *)((char *)(var_s2) + 0x6)) = (u16) ((*(u16 *)((char *)(var_s2) + 0x6)) + (D_800BE9E4 * 0x1613));
        return;
    }
    if (((*(s32 *)((char *)(var_s2) + 0x4)) != 2) && ((*(s32 *)((char *)(var_s2) + 0x4)) == 3)) {
        (*(f32 *)((char *)(arg0) + 0x34)) = (f32) ((*(f32 *)((char *)(arg0) + 0x34)) - (D_800A3318 * (*(f32 *)((char *)(var_s2) + 0xC))));
        if ((*(s32 *)((char *)(arg0) + 0x34)) <= 0.0f) {
            (*(s32 *)((char *)(var_s2) + 0x4)) = 0U;
            (*(s32 *)((char *)(arg0) + 0x6E)) = 1;
            (*(s32 *)((char *)(arg0) + 0x34)) = 0.0f;
        }
        (*(s32 *)((char *)(arg0) + 0x30)) = (*(s32 *)((char *)(arg0) + 0x34));
block_66:
        (*(s32 *)((char *)(arg0) + 0x2C)) = (*(s32 *)((char *)(arg0) + 0x34));
    }
}

/*
Decompilation failure in function func_1511E780:

Found jr instruction at 142560.s line 10770, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

void func_1511EC50(void *arg0) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 var_f2;

    if ((*(s32 *)((char *)(arg0) + 0x7C)) == 0) {
        (*(f32 *)((char *)(arg0) + 0x84)) = (f32) (*(f32 *)((char *)(arg0) + 0x12));
    }
    temp_f0 = (f32) (*(f32 *)((char *)(arg0) + 0x12));
    var_f2 = (f32) D_800BE9E4 * 4.0f;
    if ((*(s32 *)((char *)(arg0) + 0x3C)) != 0) {
        var_f2 *= 0.25f;
    }
    if ((*(s32 *)((char *)(arg0) + 0x80)) != 0) {
        temp_f12 = (*(s32 *)((char *)(arg0) + 0x84)) + 500.0f;
        (*(s16 *)((char *)(arg0) + 0x12)) = (s16) (s32) (temp_f0 + (var_f2 * 5.0f));
        if (temp_f12 < (f32) (*(f32 *)((char *)(arg0) + 0x12))) {
            (*(s32 *)((char *)(arg0) + 0x6E)) = 1;
            (*(s16 *)((char *)(arg0) + 0x12)) = (s16) (s32) temp_f12;
        }
    } else {
        temp_f12_2 = (*(s32 *)((char *)(arg0) + 0x84));
        (*(s16 *)((char *)(arg0) + 0x12)) = (s16) (s32) (temp_f0 - var_f2);
        if ((f32) (*(f32 *)((char *)(arg0) + 0x12)) < temp_f12_2) {
            (*(s16 *)((char *)(arg0) + 0x12)) = (s16) (s32) temp_f12_2;
        }
    }
    (*(s32 *)((char *)(arg0) + 0x7C)) = 1;
}

void func_1511ED84(void *arg0) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f2;
    s32 temp_v0;

    if ((*(s32 *)((char *)(arg0) + 0x7C)) == 0) {
        (*(f32 *)((char *)(arg0) + 0x84)) = (f32) (*(f32 *)((char *)(arg0) + 0x14));
    }
    temp_v0 = 1 - ((*(s32 *)((char *)(arg0) + 0x72)) & 1);
    temp_f0 = (f32) (*(f32 *)((char *)(arg0) + 0x14));
    temp_f2 = (f32) D_800BE9E4 * 4.0f;
    if ((*(s32 *)((char *)(arg0) + 0x80)) != 0) {
        if (temp_v0 & 1) {
            temp_f12 = (*(s32 *)((char *)(arg0) + 0x84));
            (*(s16 *)((char *)(arg0) + 0x14)) = (s16) (s32) (temp_f0 + temp_f2);
            if (temp_f12 < (f32) (*(f32 *)((char *)(arg0) + 0x14))) {
                (*(s16 *)((char *)(arg0) + 0x14)) = (s16) (s32) temp_f12;
            }
        } else {
            temp_f12_2 = (*(s32 *)((char *)(arg0) + 0x84));
            (*(s16 *)((char *)(arg0) + 0x14)) = (s16) (s32) (temp_f0 - temp_f2);
            if ((f32) (*(f32 *)((char *)(arg0) + 0x14)) < temp_f12_2) {
                (*(s16 *)((char *)(arg0) + 0x14)) = (s16) (s32) temp_f12_2;
            }
        }
    } else if (temp_v0 & 1) {
        temp_f12_3 = (*(s32 *)((char *)(arg0) + 0x84)) - 350.0f;
        (*(s16 *)((char *)(arg0) + 0x14)) = (s16) (s32) (temp_f0 - temp_f2);
        if ((f32) (*(f32 *)((char *)(arg0) + 0x14)) < temp_f12_3) {
            (*(s16 *)((char *)(arg0) + 0x14)) = (s16) (s32) temp_f12_3;
        }
    } else {
        temp_f12_4 = (*(s32 *)((char *)(arg0) + 0x84)) + 350.0f;
        (*(s16 *)((char *)(arg0) + 0x14)) = (s16) (s32) (temp_f0 + temp_f2);
        if (temp_f12_4 < (f32) (*(f32 *)((char *)(arg0) + 0x14))) {
            (*(s16 *)((char *)(arg0) + 0x14)) = (s16) (s32) temp_f12_4;
        }
    }
    (*(s32 *)((char *)(arg0) + 0x7C)) = 1;
}

void func_1511EF40(void *arg0) {
    void *sp4C;
    f32 sp48;
    void * sp44;
    f32 sp40;
    f32 sp3C;
    void *sp34;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f2;
    s16 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *var_s0;
    void *temp_a0;
    void *temp_v1;
    void *var_a0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x7C));
    var_s0 = temp_v0;
    if (temp_v0 == NULL) {
        temp_v0_2 = allocate_memory(0x24, 1, 0, 0);
        (*(s32 *)((char *)(arg0) + 0x7C)) = temp_v0_2;
        var_s0 = temp_v0_2;
        bzero(temp_v0_2, 0x24);
    }
    temp_v0_3 = (*(s32 *)((char *)(var_s0) + 0x1C));
    if (temp_v0_3 > 0) {
        (*(s16 *)((char *)(var_s0) + 0x1C)) = (s16) (temp_v0_3 - D_800BE9E4);
        if ((*(s32 *)((char *)(var_s0) + 0x1C)) <= 0) {
            temp_a0 = ((*(s32 *)((char *)(arg0) + 0x84)) * 0x9A0) + D_800DBFF0;
            sp34 = temp_a0;
            func_151239CC(temp_a0, 0xA);
        }
    }
    temp_v0_4 = (*(s32 *)((char *)(arg0) + 0x80));
    var_a0 = sp34;
    if (temp_v0_4 == 1) {
        temp_v1 = ((*(s32 *)((char *)(arg0) + 0x84)) * 0x32C) + &gObjects;
        (*(s16 *)((char *)(arg0) + 0x10)) = (s16) (s32) (*(s16 *)((char *)(temp_v1) + 0x14));
        (*(s16 *)((char *)(arg0) + 0x12)) = (s16) ((s32) (*(s16 *)((char *)(temp_v1) + 0x18)) + 0x64);
        (*(s16 *)((char *)(arg0) + 0x14)) = (s16) (s32) (*(s16 *)((char *)(temp_v1) + 0x1C));
        sp4C = temp_v1;
        func_15086CBC(func_15086D48(0x28), &sp48, &sp44, &sp40);
        (*(f32 *)((char *)(var_s0) + 0x14)) = (f32) ((sp48 - (*(f32 *)((char *)(sp4C) + 0x14))) * 0.5f);
        temp_f2 = (*(s32 *)((char *)(var_s0) + 0x14));
        (*(f32 *)((char *)(var_s0) + 0x18)) = (f32) ((sp40 - (*(f32 *)((char *)(sp4C) + 0x1C))) * 0.5f);
        temp_f12 = (*(s32 *)((char *)(var_s0) + 0x18));
        (*(f32 *)((char *)(var_s0) + 0x0)) = (f32) ((*(f32 *)((char *)(sp4C) + 0x14)) + temp_f2);
        (*(f32 *)((char *)(var_s0) + 0x4)) = (f32) ((*(f32 *)((char *)(sp4C) + 0x18)) + 100.0f);
        (*(s32 *)((char *)(var_s0) + 0x10)) = -90.0f;
        temp_f0 = sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12));
        (*(f32 *)((char *)(var_s0) + 0x8)) = (f32) ((*(f32 *)((char *)(sp4C) + 0x1C)) + temp_f12);
        (*(s32 *)((char *)(var_s0) + 0xC)) = temp_f0;
        (*(s32 *)((char *)(arg0) + 0x80)) = 2;
        return;
    }
    if (temp_v0_4 == 2) {
        temp_v0_5 = (*(s32 *)((char *)(arg0) + 0x84));
        if (D_80082FA0 >= temp_v0_5) {
            var_a0 = (temp_v0_5 * 0x9A0) + D_800DBFF0;
            if ((*(s32 *)((char *)(var_a0) + 0x2C)) != 0x400000) {
                sp34 = var_a0;
                func_15123934(var_a0, 0x400000, 0, (*(s32 *)((char *)(var_a0) + 0x134)), 0xA);
            }
            (*(f32 *)((char *)(var_a0) + 0x2BC)) = (f32) (*(f32 *)((char *)(arg0) + 0x10));
            (*(f32 *)((char *)(var_a0) + 0x2C0)) = (f32) (*(f32 *)((char *)(arg0) + 0x12));
            (*(f32 *)((char *)(var_a0) + 0x2A4)) = (f32) (*(f32 *)((char *)(var_a0) + 0x2BC));
            (*(s32 *)((char *)(var_a0) + 0x2F8)) = 0.0f;
            (*(s32 *)((char *)(var_a0) + 0x300)) = 0.0f;
            (*(f32 *)((char *)(var_a0) + 0x2A8)) = (f32) (*(f32 *)((char *)(var_a0) + 0x2C0));
            (*(f32 *)((char *)(var_a0) + 0x2C4)) = (f32) (*(f32 *)((char *)(arg0) + 0x14));
            (*(f32 *)((char *)(var_a0) + 0x2AC)) = (f32) (*(f32 *)((char *)(var_a0) + 0x2C4));
            (*(s32 *)((char *)(var_a0) + 0x2FC)) = 300.0f;
            (*(s32 *)((char *)(var_s0) + 0x1C)) = 0x3C;
        }
        sp34 = var_a0;
        temp_f12_2 = ((*(s32 *)((char *)(var_s0) + 0x10)) * D_800A3378) / 180.0f;
        sp3C = temp_f12_2;
        (*(s16 *)((char *)(arg0) + 0x12)) = (s16) (s32) ((cosf(temp_f12_2) * (*(s16 *)((char *)(var_s0) + 0xC))) + (*(s16 *)((char *)(var_s0) + 0x4)));
        temp_f0_2 = sinf(temp_f12_2);
        (*(s16 *)((char *)(arg0) + 0x10)) = (s16) (s32) ((*(s16 *)((char *)(var_s0) + 0x0)) + ((*(s16 *)((char *)(var_s0) + 0x14)) * temp_f0_2));
        (*(s16 *)((char *)(arg0) + 0x14)) = (s16) (s32) ((*(s16 *)((char *)(var_s0) + 0x8)) + ((*(s16 *)((char *)(var_s0) + 0x18)) * temp_f0_2));
        (*(f32 *)((char *)(var_s0) + 0x10)) = (f32) ((*(f32 *)((char *)(var_s0) + 0x10)) + (f32) D_800BE9E4);
        if ((*(s32 *)((char *)(var_s0) + 0x10)) > 90.0f) {
            (*(s32 *)((char *)(var_s0) + 0x10)) = 90.0f;
            (*(s32 *)((char *)(arg0) + 0x80)) = 0;
            (*(s32 *)((char *)(arg0) + 0x6E)) = 1;
            if (D_80082FA0 >= (*(s32 *)((char *)(arg0) + 0x84))) {
                func_151239CC(var_a0, 0xA);
            }
        }
    }
}

void func_1511F31C(void *arg0) {
    void * sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    void *temp_v0;

    if (((*(s32 *)((char *)(arg0) + 0x54)) == 0x8005) && (D_800BE9F0 == 0x35)) {
        temp_v0 = func_151149AC((*(s32 *)((char *)(arg0) + 0x3E)) & 0xFF);
        if (temp_v0 != NULL) {
            func_1511490C(&sp48, temp_v0);
            func_150A7960(&sp48, -3.0f, 223.0f, 549.0f, &sp44, &sp40, &sp3C);
            (*(s16 *)((char *)(arg0) + 0x10)) = (s16) (s32) sp44;
            (*(s16 *)((char *)(arg0) + 0x12)) = (s16) (s32) sp40;
            (*(s16 *)((char *)(arg0) + 0x14)) = (s16) (s32) sp3C;
        }
    }
}

void func_1511F3E8(void *arg0) {
    s32 temp_t2;
    s32 temp_t4;
    s32 temp_v1;
    s32 temp_v1_2;

    if ((*(s32 *)((char *)(arg0) + 0x7C)) == 0) {
        (*(s32 *)((char *)(arg0) + 0x7C)) = 1;
        (*(s32 *)((char *)(arg0) + 0x80)) = (s32) ((((s32) (*(s32 *)((char *)(arg0) + 0x3C)) >> 0x10) & 0xFFFF) * 0x3C);
    }
    temp_v1 = (*(s32 *)((char *)(arg0) + 0x80));
    temp_t2 = ((*(s32 *)((char *)(arg0) + 0x3C)) & 0xFFFF) * 0x3C;
    if (temp_v1 != 0) {
        if (D_800BE9E4 < temp_v1) {
            (*(s32 *)((char *)(arg0) + 0x80)) = (s32) (temp_v1 - D_800BE9E4);
            return;
        }
        (*(s32 *)((char *)(arg0) + 0x80)) = 0;
        (*(s32 *)((char *)(arg0) + 0x84)) = temp_t2;
        return;
    }
    temp_v1_2 = (*(s32 *)((char *)(arg0) + 0x84));
    temp_t4 = temp_v1_2 - D_800BE9E4;
    if (D_800BE9E4 < temp_v1_2) {
        (*(s32 *)((char *)(arg0) + 0x84)) = temp_t4;
        (*(s8 *)((char *)(arg0) + 0x8A)) = (s8) ((s32) (temp_t4 * 0xFF) / temp_t2);
        return;
    }
    (*(s32 *)((char *)(arg0) + 0x6E)) = 1;
}

void func_1511F4D0(void *arg0) {
    s32 sp8;
    s32 sp4;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a2_3;
    s32 temp_a2_4;
    s32 temp_a2_5;
    s32 temp_f16;
    s32 temp_lo;
    s32 temp_t4;
    s32 var_a1;
    s32 var_a3;
    s32 var_t0;
    s32 var_v0;
    u8 temp_t4_2;
    u8 temp_v1;

    temp_v1 = (*(s32 *)((char *)(arg0) + 0x73));
    var_v0 = temp_v1 & 3;
    if ((temp_v1 & 4) == 4) {
        if (var_v0 == 2) {
            var_v0 = 0;
        } else if (var_v0 == 1) {
            var_v0 = 3;
        }
    }
    temp_a2 = (*(s32 *)((char *)(arg0) + 0x84));
    var_t0 = (*(s32 *)((char *)(arg0) + 0x7C));
    var_a3 = (temp_a2 >> 0x10) & 0xFFFF;
    var_a1 = temp_a2 & 0xFFFF;
    temp_f16 = (s32) ((f32) (*(s32 *)((char *)(arg0) + 0x3C)) * (*(s32 *)((char *)(arg0) + 0x30)));
    if (var_t0 == 0) {
        temp_t4 = ((*(s32 *)((char *)(arg0) + 0x10)) & 0xFFFF) | ((*(s32 *)((char *)(arg0) + 0x12)) << 0x10);
        (*(s32 *)((char *)(arg0) + 0x7C)) = temp_t4;
        if (var_v0 == 3) {
            var_a1 = 0xD;
            var_a3 = 0xD;
            var_t0 = temp_t4;
        } else {
            var_a3 = 0;
            var_a1 = 0;
            var_t0 = (*(s32 *)((char *)(arg0) + 0x7C));
        }
    }
    sp4 = (s32) (s16) var_t0;
    sp8 = (s32) (s16) (((s32) (*(s32 *)((char *)(arg0) + 0x7C)) >> 0x10) & 0xFFFF);
    if (var_v0 == 2) {
        temp_a2_2 = var_a1 + D_800BE9E4;
        var_a1 = 0xD;
        if (temp_a2_2 < 0xD) {
            var_a1 = temp_a2_2;
        }
        if (var_a1 >= 9) {
            temp_a2_3 = var_a3 + D_800BE9E4;
            var_a3 = 0xD;
            if (temp_a2_3 < 0xD) {
                var_a3 = temp_a2_3;
            } else {
                var_v0 = 3;
            }
        }
    } else if (var_v0 == 1) {
        temp_a2_4 = var_a3 - D_800BE9E4;
        var_a3 = 0;
        if (temp_a2_4 > 0) {
            var_a3 = temp_a2_4;
        }
        if (var_a3 < 4) {
            temp_a2_5 = var_a1 - D_800BE9E4;
            var_a1 = 0;
            if (temp_a2_5 > 0) {
                var_a1 = temp_a2_5;
            } else {
                var_v0 = 0;
            }
        }
    }
    (*(s16 *)((char *)(arg0) + 0x12)) = (s16) (sp8 + ((s32) (var_a1 * temp_f16) / 13));
    (*(s16 *)((char *)(arg0) + 0xB2)) = (s16) (sp8 - ((s32) ((temp_f16 + 1) * var_a1) / 13));
    temp_lo = (s32) (var_a3 * temp_f16) / 13;
    (*(s16 *)((char *)(arg0) + 0x150)) = (s16) (sp4 - temp_lo);
    temp_t4_2 = (*(s32 *)((char *)(arg0) + 0x73)) & ~3;
    (*(s32 *)((char *)(arg0) + 0x73)) = temp_t4_2;
    (*(s16 *)((char *)(arg0) + 0x1F0)) = (s16) (sp4 + temp_lo);
    (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((var_a1 & 0xFFFF) | ((var_a3 & 0xFFFF) << 0x10));
    (*(u8 *)((char *)(arg0) + 0x73)) = (u8) ((temp_t4_2 & 0xFF) | var_v0);
}

void func_1511F768(void *arg0, void * arg1) {
    if ((*(s32 *)((char *)(arg0) + 0x80)) == 0) {
        (*(s32 *)((char *)(arg0) + 0x80)) = 1;
    }
}

void func_1511F788(void *arg0) {
    s32 sp24;
    s16 sp1E;
    s32 temp_lo;
    s32 temp_t9;
    s32 temp_v0;

    sp1E = (s16) (s32) ((f32) (*(s16 *)((char *)(arg0) + 0x12)) + (*(s16 *)((char *)(arg0) + 0x18)));
    temp_lo = (s32) ((*(s32 *)((char *)(arg0) + 0x3C)) * 0x3C) / 60;
    if (D_800BE9B4 != 0) {
        sp24 = temp_lo;
        (*(s32 *)((char *)(arg0) + 0x7C)) = (s32) (random_u32() & 0xFFFF);
    }
    sp24 = temp_lo;
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x80));
    (*(f32 *)((char *)(arg0) + 0x18)) = (f32) (cosf((f32) (*(f32 *)((char *)(arg0) + 0x7C)) * 0.005493164f) * 25.0f);
    (*(s32 *)((char *)(arg0) + 0x7C)) = (s32) ((*(s32 *)((char *)(arg0) + 0x7C)) + (D_800BE9E4 * 0xA));
    if (temp_v0 == 1) {
        temp_t9 = (*(s32 *)((char *)(arg0) + 0x84)) + D_800BE9E4;
        (*(s32 *)((char *)(arg0) + 0x84)) = temp_t9;
        if (temp_lo < temp_t9) {
            (*(s32 *)((char *)(arg0) + 0x80)) = 2;
        }
    } else if (temp_v0 == 2) {
        (*(s16 *)((char *)(arg0) + 0x12)) = (s16) ((*(s16 *)((char *)(arg0) + 0x12)) - D_800BE9E4);
        if ((*(s32 *)((char *)(arg0) + 0x12)) < -0x2710) {
            (*(s32 *)((char *)(arg0) + 0x6E)) = 1;
        }
    }
    (*(s16 *)((char *)(arg0) + 0x5C)) = (s16) (s32) (((f32) (*(s16 *)((char *)(arg0) + 0x12)) + (*(s16 *)((char *)(arg0) + 0x18))) - (f32) sp1E);
}

void func_1511F92C(void *arg0) {
    void *temp_v0;

    temp_v0 = func_151149AC((s32) (*(s32 *)((char *)(arg0) + 0x3F)), arg0);
    if (temp_v0 != NULL) {
        (*(s16 *)((char *)(arg0) + 0x10)) = (s16) (*(s16 *)((char *)(temp_v0) + 0x10));
        (*(s16 *)((char *)(arg0) + 0x12)) = (s16) (*(s16 *)((char *)(temp_v0) + 0x12));
        (*(s16 *)((char *)(arg0) + 0x14)) = (s16) (*(s16 *)((char *)(temp_v0) + 0x14));
    }
}
