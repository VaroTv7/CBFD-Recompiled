/**
 * Auto-decompiled from asm/19A8B0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_150448D0(); /* extern */
f32 func_150489B0();                        /* extern */
void * func_15095760();             /* extern */
void * func_150A7960(); /* extern */
u8 random_u32();                    /* extern */
void *func_15142E24(); /* extern */
void *func_15142FBC();         /* extern */
void *func_15167A68();        /* extern */
s32 func_151EF610();                         /* extern */
void func_1516F864();               /* static */
void func_1516F94C();       /* static */
void func_15170034();
extern s32 D_8008CA4C;
extern s32 D_8008CBA0;
extern s32 D_8008CBC4;
extern s32 D_8008CBD0;
extern s32 D_8008CBDC;
extern s32 D_8008CBE8;
extern s32 D_8008CBF4;
extern s32 D_8008CC00;
extern s32 D_8008CC0C;
extern s32 D_800A6E00;
extern s32 D_800A6E0C;
extern s32 D_800A6E30;
extern f32 D_800A6E84;
extern s32 D_800D2C9C;
extern u8 D_800D2DA8;
extern u8 D_800D2DA9;
extern u8 D_800D2DAA;
extern s8 D_800D2DAB;
extern s16 D_800DD1BC;
extern s16 D_800DD1C8;
extern s16 D_800DD1CA;
extern s16 D_800DD1CC;
void func_1516D4E8();
void func_1516D99C();

void func_1516D400(void) {
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;

    if ((s32) D_800DD2A0 < 0xFF) {
        var_v0 = D_800DD2A0 + D_800BE9A0;
        if (var_v0 >= 0x100) {
            var_v0 = 0xFF;
        }
        D_800DD2A0 = (u8) var_v0;
    }
    if ((s32) D_800DD2A1 < 0xFF) {
        var_v0_2 = D_800DD2A1 + D_800BE9A0;
        if (var_v0_2 >= 0x100) {
            var_v0_2 = 0xFF;
        }
        D_800DD2A1 = (u8) var_v0_2;
    }
    if ((s32) D_800DD2A2 < 0xFF) {
        var_v0_3 = D_800DD2A2 + D_800BE9A0;
        if (var_v0_3 >= 0x100) {
            var_v0_3 = 0xFF;
        }
        D_800DD2A2 = (u8) var_v0_3;
    }
    if ((s32) D_800DD2A3 < 0xFF) {
        var_v0_4 = D_800DD2A3 + D_800BE9A0;
        if (var_v0_4 >= 0x100) {
            var_v0_4 = 0xFF;
        }
        D_800DD2A3 = (u8) var_v0_4;
    }
}

void func_1516D4E8( s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, s32 arg11, s32 arg12, s32 arg13, s32 arg14, s32 arg15, s32 arg16, s32 arg17, s32 arg18, s32 arg19, s32 arg20, s32 arg21, s32 arg22, s32 arg23, s32 arg24, s32 arg25, s32 arg26, s32 arg27, s32 arg28, s32 arg29, s32 arg30) {
    void *sp34;
    void * var_a0;
    void *temp_v0;

    if (arg27 != 0) {
        var_a0 = 0x67;
    } else {
        var_a0 = 0x12;
    }
    temp_v0 = func_15167A68(var_a0, arg30, 0x34, 0, (s32) arg29, 1);
    if (temp_v0 != NULL) {
        (*(s32 *)((char *)(temp_v0) + 0xE)) = arg0;
        (*(s32 *)((char *)(temp_v0) + 0x10)) = arg1;
        (*(s32 *)((char *)(temp_v0) + 0x12)) = arg2;
        (*(s32 *)((char *)(temp_v0) + 0x1A)) = arg3;
        (*(s32 *)((char *)(temp_v0) + 0x1B)) = arg4;
        (*(s32 *)((char *)(temp_v0) + 0x1C)) = arg5;
        (*(s32 *)((char *)(temp_v0) + 0x1D)) = arg6;
        (*(s32 *)((char *)(temp_v0) + 0x1E)) = arg7;
        (*(s32 *)((char *)(temp_v0) + 0x1F)) = arg8;
        (*(s32 *)((char *)(temp_v0) + 0x20)) = arg9;
        (*(s32 *)((char *)(temp_v0) + 0x21)) = arg10;
        (*(s32 *)((char *)(temp_v0) + 0x22)) = arg11;
        (*(s32 *)((char *)(temp_v0) + 0x23)) = arg12;
        (*(s32 *)((char *)(temp_v0) + 0x14)) = arg23;
        (*(s32 *)((char *)(temp_v0) + 0x16)) = arg24;
        (*(s32 *)((char *)(temp_v0) + 0x24)) = arg25;
        (*(s32 *)((char *)(temp_v0) + 0x25)) = 0;
        (*(s32 *)((char *)(temp_v0) + 0x18)) = arg26;
        (*(s32 *)((char *)(temp_v0) + 0x26)) = arg13;
        (*(s32 *)((char *)(temp_v0) + 0x27)) = arg14;
        (*(s32 *)((char *)(temp_v0) + 0x28)) = arg15;
        (*(s32 *)((char *)(temp_v0) + 0x29)) = arg16;
        (*(s32 *)((char *)(temp_v0) + 0x2A)) = arg17;
        (*(s32 *)((char *)(temp_v0) + 0x2B)) = arg18;
        (*(s32 *)((char *)(temp_v0) + 0x2C)) = arg19;
        (*(s32 *)((char *)(temp_v0) + 0x2D)) = arg20;
        (*(s32 *)((char *)(temp_v0) + 0x2E)) = arg21;
        (*(s32 *)((char *)(temp_v0) + 0x2F)) = arg22;
        if (arg28 != 0) {
            sp34 = temp_v0;
            (*(s32 *)((char *)(temp_v0) + 0x30)) = func_150448D0(-1, 0, arg28, 0x14, 0x14, 0x14, 0, (char *)(temp_v0) + 0xE, (char *)(temp_v0) + 0x14);
            return;
        }
        (*(s32 *)((char *)(temp_v0) + 0x30)) = 0;
    }
}

void func_1516D678(void *arg0) {
    s32 temp_t6;
    s32 var_v0;
    u8 temp_v0;
    void *temp_v0_2;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x24));
    if (temp_v0 != 0) {
        var_v0 = temp_v0 - D_800BE9E4;
        if (var_v0 < 0) {
            var_v0 = 0;
        }
        (*(u8 *)((char *)(arg0) + 0x24)) = (u8) var_v0;
    }
    if (((s32 (*)())((char *)(&D_8008CBA0 + ((*(s32 *)((char *)(arg0) + 0x23)) * 4))))() == 1) {
        temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x30));
        if (temp_v0_2 != NULL) {
            (*(s32 *)((char *)(temp_v0_2) + 0x4)) = 0;
        }
        func_1516972C(arg0);
        return;
    }
    temp_t6 = ((*(s32 *)((char *)(arg0) + 0x10)) << 8) + (*(s32 *)((char *)(arg0) + 0x25)) + ((*(s32 *)((char *)(arg0) + 0x18)) * D_800BE9E4);
    (*(s16 *)((char *)(arg0) + 0x10)) = (s16) (temp_t6 >> 8);
    (*(u8 *)((char *)(arg0) + 0x25)) = (u8) temp_t6;
}

void func_1516D738(void *arg1, void * arg2) {
    s8 sp91;
    u8 sp8E;
    s16 sp8C;
    s16 sp8A;
    s16 sp88;
    s16 sp86;
    s16 sp84;
    void *sp7C;
    s32 sp78;
    s32 sp5C;
    s16 var_a1;
    u8 temp_a1_2;
    u8 temp_a2;
    u8 temp_a3;
    void *temp_a1;
    void *temp_v0;
    void *temp_v0_2;
    void *var_a0;
    void *var_a0_2;

    sp78 = 0;
    D_800D2DAB = 0;
    temp_a1 = *(&D_8008CA4C + ((*(s32 *)((char *)(arg1) + 0x1A)) * 4));
    sp7C = temp_a1;
    temp_v0 = func_15142E24(temp_a1, (*(s32 *)((char *)(arg1) + 0x1B)) << 8, 2, 0x100, 0x100, 0, 6, &sp84, &sp78, 3);
    var_a0 = temp_v0;
    if ((*(s32 *)((char *)(sp7C) + 0xA)) == 5) {
        var_a1 = 2;
    } else {
        var_a1 = 1;
    }
    if (var_a1 != D_800DD1BC) {
        if (sp78 == 0) {
            var_a0 = (char *)(temp_v0) + 8;
            (*(s32 *)((char *)(temp_v0) + 0x0)) = 0xE7000000;
            (*(s32 *)((char *)(temp_v0) + 0x4)) = 0;
            sp78 = 1;
        }
        D_800DD1BC = var_a1;
        if (var_a1 == 1) {
            sp5C = 0;
            (*(s32 *)((char *)(var_a0) + 0x0)) = 0xFC30B261;
            (*(s32 *)((char *)(var_a0) + 0x4)) = 0x5566FF7F;
            var_a0 = (char *)(var_a0) + 8;
        } else {
            sp5C = 0x100000;
            (*(s32 *)((char *)(var_a0) + 0x0)) = 0xFC30B5FF;
            (*(s32 *)((char *)(var_a0) + 0x4)) = 0x5FFEFE38;
            var_a0 = (char *)(var_a0) + 8;
        }
    }
    temp_v0_2 = func_15142FBC(var_a0, sp5C | D_800D2C9C | 0x2C00, 0x5049DC, &sp78);
    sp84 = (*(s32 *)((char *)(arg1) + 0xE));
    var_a0_2 = temp_v0_2;
    sp86 = (*(s32 *)((char *)(arg1) + 0x10));
    sp88 = (*(s32 *)((char *)(arg1) + 0x12));
    sp8A = (*(s32 *)((char *)(arg1) + 0x14));
    sp8C = (*(s32 *)((char *)(arg1) + 0x16));
    sp91 = 0;
    sp8E = (*(s32 *)((char *)(arg1) + 0x1F));
    D_800D2DA8 = (*(s32 *)((char *)(arg1) + 0x1C));
    D_800D2DA9 = (*(s32 *)((char *)(arg1) + 0x1D));
    D_800D2DAA = (*(s32 *)((char *)(arg1) + 0x1E));
    temp_a1_2 = (*(s32 *)((char *)(arg1) + 0x20));
    temp_a2 = (*(s32 *)((char *)(arg1) + 0x21));
    temp_a3 = (*(s32 *)((char *)(arg1) + 0x22));
    if ((temp_a1_2 != D_800DD1C8) || (temp_a2 != D_800DD1CA) || (temp_a3 != D_800DD1CC)) {
        D_800DD1C8 = (s16) temp_a1_2;
        D_800DD1CA = (s16) temp_a2;
        D_800DD1CC = (s16) temp_a3;
        if (sp78 == 0) {
            (*(s32 *)((char *)(temp_v0_2) + 0x0)) = 0xE7000000;
            var_a0_2 = (char *)(temp_v0_2) + 8;
            (*(s32 *)((char *)(temp_v0_2) + 0x4)) = 0;
        }
        (*(s32 *)((char *)(var_a0_2) + 0x4)) = (s32) ((temp_a1_2 << 0x18) | ((temp_a2 & 0xFF) << 0x10) | ((temp_a3 & 0xFF) << 8));
        (*(s32 *)((char *)(var_a0_2) + 0x0)) = 0xFB000000;
        var_a0_2 = (char *)(var_a0_2) + 8;
    }
    func_15095760(var_a0_2, &sp84, temp_a2, temp_a3);
}

void func_1516D99C( s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, s32 arg11, s32 arg12, s32 arg13, s32 arg14, s32 arg15, s32 arg16, s32 arg17, s32 arg18, s32 arg19, s32 arg20, s32 arg21, s32 arg22, s32 arg23, s32 arg24, s32 arg25, s32 arg26, s32 arg27, s32 arg28, s32 arg29, s32 arg30, s32 arg31, s32 arg32, s32 arg33, s32 arg34, s32 arg35, s32 arg36, s32 arg37, s32 arg38, s32 arg39, s32 arg40, s32 arg41, s32 arg42, s32 arg43, s32 arg44, s32 arg45, s32 arg46, s32 arg47, s32 arg48) {
    void * var_a0;
    void *temp_v0;

    if (arg44 != 0) {
        var_a0 = 0x66;
    } else {
        var_a0 = 0x11;
    }
    temp_v0 = func_15167A68(var_a0, arg48, 0x4C, 0, (s32) arg47, 1);
    if (temp_v0 != NULL) {
        (*(s32 *)((char *)(temp_v0) + 0xE)) = arg0;
        (*(s32 *)((char *)(temp_v0) + 0x10)) = arg1;
        (*(s32 *)((char *)(temp_v0) + 0x12)) = arg2;
        (*(s32 *)((char *)(temp_v0) + 0x14)) = arg27;
        (*(s32 *)((char *)(temp_v0) + 0x16)) = arg28;
        (*(s32 *)((char *)(temp_v0) + 0x18)) = arg29;
        (*(s32 *)((char *)(temp_v0) + 0x1A)) = arg30;
        (*(s32 *)((char *)(temp_v0) + 0x24)) = arg3;
        (*(s32 *)((char *)(temp_v0) + 0x25)) = arg4;
        (*(s32 *)((char *)(temp_v0) + 0x26)) = arg5;
        (*(s32 *)((char *)(temp_v0) + 0x27)) = arg6;
        (*(s32 *)((char *)(temp_v0) + 0x28)) = arg7;
        (*(s32 *)((char *)(temp_v0) + 0x2A)) = arg9;
        (*(s32 *)((char *)(temp_v0) + 0x2B)) = arg10;
        (*(s32 *)((char *)(temp_v0) + 0x2C)) = arg11;
        (*(s32 *)((char *)(temp_v0) + 0x29)) = arg8;
        (*(s32 *)((char *)(temp_v0) + 0x2D)) = arg12;
        (*(s32 *)((char *)(temp_v0) + 0x2E)) = arg13;
        (*(s32 *)((char *)(temp_v0) + 0x2F)) = arg14;
        (*(s32 *)((char *)(temp_v0) + 0x30)) = arg15;
        (*(s32 *)((char *)(temp_v0) + 0x31)) = arg16;
        (*(s32 *)((char *)(temp_v0) + 0x32)) = arg17;
        (*(s32 *)((char *)(temp_v0) + 0x33)) = arg18;
        (*(s32 *)((char *)(temp_v0) + 0x34)) = arg19;
        (*(s32 *)((char *)(temp_v0) + 0x35)) = arg20;
        (*(s32 *)((char *)(temp_v0) + 0x36)) = arg21;
        (*(s32 *)((char *)(temp_v0) + 0x37)) = arg22;
        (*(s32 *)((char *)(temp_v0) + 0x38)) = arg23;
        (*(s32 *)((char *)(temp_v0) + 0x39)) = arg24;
        (*(s32 *)((char *)(temp_v0) + 0x3A)) = arg25;
        (*(s32 *)((char *)(temp_v0) + 0x20)) = arg31;
        (*(s8 *)((char *)(temp_v0) + 0x3C)) = (s8) arg31;
        (*(s32 *)((char *)(temp_v0) + 0x3B)) = arg26;
        (*(s32 *)((char *)(temp_v0) + 0x3D)) = arg32;
        (*(s32 *)((char *)(temp_v0) + 0x3E)) = arg33;
        (*(s32 *)((char *)(temp_v0) + 0x3F)) = arg34;
        (*(s32 *)((char *)(temp_v0) + 0x40)) = arg35;
        (*(s32 *)((char *)(temp_v0) + 0x1C)) = arg36;
        (*(s32 *)((char *)(temp_v0) + 0x1E)) = arg37;
        (*(s32 *)((char *)(temp_v0) + 0x22)) = arg38;
        (*(s32 *)((char *)(temp_v0) + 0x42)) = 0;
        (*(s32 *)((char *)(temp_v0) + 0x41)) = arg39;
        (*(s32 *)((char *)(temp_v0) + 0x43)) = arg40;
        if ((arg44 != 0) && ((s32) arg41 >= 4)) {
            arg41 = 3U;
        }
        (*(s32 *)((char *)(temp_v0) + 0x44)) = arg41;
        (*(s32 *)((char *)(temp_v0) + 0x45)) = arg42;
        (*(s32 *)((char *)(temp_v0) + 0x46)) = arg43;
        (*(s32 *)((char *)(temp_v0) + 0x47)) = arg45;
        (*(s32 *)((char *)(temp_v0) + 0x48)) = arg46;
    }
}

void func_1516DB90(void *arg0) {
    void *sp184;
    s32 sp180;
    s32 sp178;
    s32 sp170;
    s32 sp16C;
    s32 sp168;
    s32 sp164;
    s32 sp160;
    f32 sp13C;
    f32 sp138;
    f32 sp134;
    f32 sp130;
    f32 sp12C;
    f32 sp128;
    f32 sp124;
    f32 sp120;
    f32 sp11C;
    u8 sp109;
    s32 sp104;
    s32 spFC;
    s32 spF8;
    f32 temp_f0;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f24;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f6;
    f32 var_f16;
    f32 var_f16_2;
    f32 var_f18;
    f32 var_f22;
    s16 temp_s2;
    s16 var_s2;
    s16 var_s3;
    s16 var_s4;
    s16 var_s5;
    s16 var_s6;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_t6;
    s32 temp_t6_2;
    s32 temp_t7;
    s32 temp_t7_2;
    s32 temp_t8_2;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_9;
    s32 var_fp;
    s32 var_s7;
    u16 temp_a0;
    u16 temp_v0_8;
    u32 var_v1;
    u8 temp_t6_3;
    u8 temp_t8;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v0_6;
    u8 temp_v0_7;
    u8 var_s1;
    u8 var_v0;

    sp184 = arg0;
    if ((*(s32 *)((char *)(arg0) + 0x0)) == 0x11) {
        spFC = 0;
    } else {
        spFC = 1;
    }
    temp_t8 = (*(s32 *)((char *)(arg0) + 0x42));
    spF8 = (s32) temp_t8;
    temp_t7 = temp_t8 - D_800BE9E4;
    spF8 = temp_t7;
    if (temp_t7 < 0) {
        var_fp = sp164;
        var_s7 = sp160;
        do {
            temp_v0 = (*(s32 *)((char *)(arg0) + 0x41));
            sp180 = 0;
            if (temp_v0 != 0) {
                spF8 += temp_v0;
            } else {
                spF8 = 0;
            }
            if ((s32) (*(s32 *)((char *)(arg0) + 0x44)) > 0) {
                do {
                    if ((*(s32 *)((char *)(arg0) + 0x43)) != 0) {
                        sp109 = random_u32();
                        if ((*(s32 *)((char *)(arg0) + 0x22)) & 4) {
                            temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x43));
                            sp104 = (s32) temp_v0_2;
                            sp104 = (s32) ((*(s32 *)((char *)(arg0) + 0x20)) * temp_v0_2) / (s32) (*(s32 *)((char *)(arg0) + 0x3C));
                        } else {
                            sp104 = (s32) (*(s32 *)((char *)(arg0) + 0x43));
                        }
                    }
                    if (((*(s32 *)((char *)(arg0) + 0x43)) == 0) || ((s32) sp109 < sp104)) {
                        temp_v0_3 = (*(s32 *)((char *)(arg0) + 0x3F));
                        if (temp_v0_3 == 0xFF) {
                            temp_a0 = (*(s32 *)((char *)(arg0) + 0x22));
                            if (temp_a0 & 0x10) {
                                temp_v0_4 = (*(s32 *)((char *)(arg0) + 0x10)) | ((*(s32 *)((char *)(arg0) + 0xE)) << 0x10);
                                var_s4 = (*(s32 *)((char *)(temp_v0_4) + 0x0));
                                var_s6 = (*(s32 *)((char *)(temp_v0_4) + 0x4));
                                var_s5 = (*(s32 *)((char *)(temp_v0_4) + 0x2)) + (*(s32 *)((char *)(arg0) + 0x12));
                            } else if (temp_a0 & 0x20) {
                                temp_v0_5 = (*(s32 *)((char *)(arg0) + 0x10)) | ((*(s32 *)((char *)(arg0) + 0xE)) << 0x10);
                                var_s4 = (s16) (s32) (*(s16 *)((char *)(temp_v0_5) + 0x0));
                                var_s6 = (s16) (s32) (*(s16 *)((char *)(temp_v0_5) + 0x8));
                                var_s5 = (s16) (s32) ((*(s16 *)((char *)(temp_v0_5) + 0x4)) + (f32) (*(s16 *)((char *)(arg0) + 0x12)));
                            } else {
                                var_s4 = (*(s32 *)((char *)(arg0) + 0xE));
                                var_s5 = (s16) (*(s16 *)((char *)(arg0) + 0x10));
                                var_s6 = (*(s32 *)((char *)(arg0) + 0x12));
                            }
                            goto block_29;
                        }
                        if ((*(s32 *)((char *)((&gObjects + (temp_v0_3 * 0x32C))) + 0x1D4)) == 0) {
                            var_v0 = (*(s32 *)((char *)(sp184) + 0x44));
                        } else {
                            sp13C = (f32)(s32)*(&D_800A6E30 + ((s32)((*(f32 *)((char *)(arg0) + 0xE)) * 0xE)));
                            sp138 = (f32) (*(f32 *)((char *)((&D_800A6E30 + ((s32)((*(f32 *)((char *)(arg0) + 0xE)) * 0xE)))) + 0x2));
                            sp134 = (f32) (*(f32 *)((char *)((&D_800A6E30 + ((s32)((*(f32 *)((char *)(arg0) + 0xE)) * 0xE)))) + 0x4));
                            sp130 = (f32) (*(f32 *)((char *)((&D_800A6E30 + ((s32)((*(f32 *)((char *)(arg0) + 0xE)) * 0xE)))) + 0x6));
                            sp12C = (f32) (*(f32 *)((char *)((&D_800A6E30 + ((s32)((*(f32 *)((char *)(arg0) + 0xE)) * 0xE)))) + 0x8));
                            sp128 = (f32) (*(f32 *)((char *)((&D_800A6E30 + ((s32)((*(f32 *)((char *)(arg0) + 0xE)) * 0xE)))) + 0xA));
                            if ((*(s32 *)((char *)((&D_800A6E30 + ((*(s32 *)((char *)(arg0) + 0xE)) * 0xE))) + 0xC)) != 0) {
                                temp_t6 = random_u32() & (*(s32 *)((char *)((&D_800A6E30 + ((*(s32 *)((char *)(arg0) + 0xE)) * 0xE))) + 0xC));
                                var_f18 = (f32) temp_t6;
                                if (temp_t6 < 0) {
                                    var_f18 += 4294967296.0f;
                                }
                                sp128 += var_f18;
                            }
                            func_150A7960((*(s32 *)((char *)((&gObjects + ((*(s32 *)((char *)(arg0) + 0x3F)) * 0x32C))) + 0x1D4)) + ((*(s32 *)((char *)(arg0) + 0x47)) << 6), sp13C, sp138, sp134, &sp13C, &sp138, &sp134);
                            func_150A7960((*(s32 *)((char *)((&gObjects + ((*(s32 *)((char *)(arg0) + 0x3F)) * 0x32C))) + 0x1D4)) + ((*(s32 *)((char *)(arg0) + 0x47)) << 6), sp130, sp12C, sp128, &sp130, &sp12C, &sp128);
                            temp_f16 = (sp12C - sp138) * 8.0f;
                            sp124 = (sp130 - sp13C) * 8.0f;
                            sp120 = temp_f16;
                            sp178 = (s32) temp_f16;
                            sp11C = (sp128 - sp134) * 8.0f;
                            temp_t6_2 = (0x40 - (*(s32 *)((char *)((&gObjects + ((*(s32 *)((char *)(arg0) + 0x3F)) * 0x32C))) + 0x76))) & 0xFF;
                            temp_f16_2 = sp124 - ((*(s32 *)((char *)((&gObjects + ((*(s32 *)((char *)(arg0) + 0x3F)) * 0x32C))) + 0x3C)) * func_15048A40(temp_t6_2 & 0xFF) * 64.0f);
                            sp124 = temp_f16_2;
                            temp_f4 = (*(s32 *)((char *)(D_800CC30C) + ((*(s32 *)((char *)(arg0) + 0x3F)) * 0x32C))) * func_150489B0(temp_t6_2 & 0xFF) * 64.0f;
                            sp170 = (s32) temp_f16_2;
                            temp_f6 = sp11C - temp_f4;
                            sp11C = temp_f6;
                            sp16C = (s32) (*(s32 *)((char *)&(sp170) + 0x2));
                            sp170 = (s32) temp_f6;
                            sp168 = (s32) (*(s32 *)((char *)&(sp170) + 0x3));
                            var_fp = (s32) (*(s32 *)((char *)&(sp170) + 0x2));
                            var_s7 = (s32) (*(s32 *)((char *)&(sp170) + 0x3));
                            var_s4 = (s16) (s32) sp13C;
                            var_s5 = (s16) (s32) sp138;
                            var_s6 = (s16) (s32) sp134;
block_29:
                            if ((*(s32 *)((char *)(arg0) + 0x22)) & 8) {
                                func_15170034((*(s32 *)((char *)(arg0) + 0x22)), &sp124, &sp120, &sp11C);
                                temp_t6_3 = (*(s32 *)((char *)(arg0) + 0x46));
                                temp_f20 = (f32) ((*(f32 *)((char *)(arg0) + 0x45)) * 0x10);
                                var_f22 = (f32) temp_t6_3;
                                if ((s32) temp_t6_3 < 0) {
                                    var_f22 += 4294967296.0f;
                                }
                                temp_f4_2 = (f32) var_s5 + (var_f22 * sp120);
                                sp120 *= temp_f20;
                                var_s5 = (s16) (s32) temp_f4_2;
                                sp178 = (s32) sp120;
                                random_u32();
                                temp_f0 = sp124 * temp_f20;
                                temp_f2 = sp11C * temp_f20;
                                var_s4 = (s16) (s32) ((f32) var_s4 + (sp124 * var_f22));
                                var_s6 = (s16) (s32) ((f32) var_s6 + (sp11C * var_f22));
                                sp170 = (s32) temp_f0;
                                sp16C = (s32) (*(s32 *)((char *)&(sp170) + 0x2));
                                sp170 = (s32) temp_f2;
                                sp168 = (s32) (*(s32 *)((char *)&(sp170) + 0x3));
                                var_fp = (s32) (*(s32 *)((char *)&(sp170) + 0x2));
                                var_s7 = (s32) (*(s32 *)((char *)&(sp170) + 0x3));
                                sp11C = temp_f2;
                                sp124 = temp_f0;
                            }
                            if ((*(s32 *)((char *)(arg0) + 0x3D)) != 0) {
                                temp_v0_6 = random_u32();
                                temp_f22 = func_15048A40(temp_v0_6 & 0xFF);
                                temp_f24 = func_150489B0(temp_v0_6 & 0xFF & 0xFF);
                                temp_lo = (random_u32() & 0xFFFF) * (*(s32 *)((char *)(arg0) + 0x3D));
                                var_f16 = (f32) temp_lo;
                                if (temp_lo < 0) {
                                    var_f16 += 4294967296.0f;
                                }
                                temp_f20_2 = var_f16 * 0.000015258789f;
                                var_s4 = (s16) (s32) ((f32) var_s4 + (temp_f20_2 * temp_f22));
                                var_s6 = (s16) (s32) ((f32) var_s6 + (temp_f20_2 * temp_f24));
                            }
                            if ((*(s32 *)((char *)(arg0) + 0x3E)) != 0) {
                                temp_f22_2 = func_15048A40(random_u32() & 0xFF);
                                temp_lo_2 = (random_u32() & 0xFFFF) * (*(s32 *)((char *)(arg0) + 0x3E));
                                var_f16_2 = (f32) temp_lo_2;
                                if (temp_lo_2 < 0) {
                                    var_f16_2 += 4294967296.0f;
                                }
                                var_s5 += (s32) (var_f16_2 * 0.000015258789f * temp_f22_2);
                            }
                            temp_s2 = (*(s32 *)((char *)(arg0) + 0x14));
                            var_s3 = (*(s32 *)((char *)(arg0) + 0x16));
                            var_v1 = 0;
                            if ((*(s32 *)((char *)(arg0) + 0x18)) != 0) {
                                var_v1 = random_u32() % (u32) (*(u32 *)((char *)(arg0) + 0x18));
                            }
                            if ((*(s32 *)((char *)(arg0) + 0x22)) & 1) {
                                var_s2 = temp_s2 + var_v1;
                                var_s3 += var_v1;
                            } else {
                                var_s2 = temp_s2 + var_v1;
                                if ((*(s32 *)((char *)(arg0) + 0x1A)) != 0) {
                                    var_s3 += random_u32((*(u32 *)((char *)(arg0) + 0x22))) % (u32) (*(u32 *)((char *)(arg0) + 0x1A));
                                }
                            }
                            if (!((*(s32 *)((char *)(arg0) + 0x22)) & 8) && !((*(s32 *)((char *)(arg0) + 0x22)) & 0x80)) {
                                sp178 = (s32) (*(s32 *)((char *)(arg0) + 0x1C));
                                if ((*(s32 *)((char *)(arg0) + 0x1E)) != 0) {
                                    sp178 += random_u32((*(u16 *)((char *)(arg0) + 0x22))) % (u16) (*(u16 *)((char *)(arg0) + 0x1E));
                                }
                                sp16C = (s32) (*(s32 *)((char *)(arg0) + 0x2E));
                                if ((*(s32 *)((char *)(arg0) + 0x38)) != 0) {
                                    temp_t7_2 = sp16C + (random_u32() % (u8) (*(u8 *)((char *)(arg0) + 0x38)));
                                    sp16C = temp_t7_2;
                                    if (temp_t7_2 >= 0x100) {
                                        sp16C = 0xFF;
                                    }
                                }
                                var_s1 = (*(s32 *)((char *)(arg0) + 0x2F));
                                if ((*(s32 *)((char *)(arg0) + 0x39)) != 0) {
                                    var_s1 += random_u32() % (u8) (*(u8 *)((char *)(arg0) + 0x39));
                                    if ((s32) var_s1 >= 0x100) {
                                        var_s1 = 0xFF;
                                    }
                                }
                                var_fp = (s32) (*(s32 *)((char *)(arg0) + 0x30));
                                if ((*(s32 *)((char *)(arg0) + 0x3A)) != 0) {
                                    var_fp += random_u32() % (u8) (*(u8 *)((char *)(arg0) + 0x3A));
                                    if (var_fp >= 0x100) {
                                        var_fp = 0xFF;
                                    }
                                }
                                var_s7 = (s32) (*(s32 *)((char *)(arg0) + 0x31));
                                sp168 = (s32) var_s1;
                                if ((*(s32 *)((char *)(arg0) + 0x3B)) != 0) {
                                    temp_v0_7 = random_u32();
                                    sp168 = (s32) var_s1;
                                    var_s7 += temp_v0_7 % (u8) (*(u8 *)((char *)(arg0) + 0x3B));
                                    if (var_s7 >= 0x100) {
                                        var_s7 = 0xFF;
                                        sp168 = (s32) var_s1;
                                    }
                                }
                            }
                            func_1516D4E8(var_s4, var_s5, var_s6, (*(u8 *)((char *)(arg0) + 0x24)), (u8) (s32) (*(u8 *)((char *)(arg0) + 0x25)), (u8) (s32) (*(u8 *)((char *)(arg0) + 0x26)), (u8) (s32) (*(u8 *)((char *)(arg0) + 0x27)), (u8) (s32) (*(u8 *)((char *)(arg0) + 0x28)), (u8) (s32) (*(u8 *)((char *)(arg0) + 0x29)), (u8) (s32) (*(u8 *)((char *)(arg0) + 0x2A)), (u8) (s32) (*(u8 *)((char *)(arg0) + 0x2B)), (u8) (s32) (*(u8 *)((char *)(arg0) + 0x2C)), (u8) (s32) (*(u8 *)((char *)(arg0) + 0x2D)), (u8) sp16C, (u8) sp168, (u8) var_fp, (u8) var_s7, (u8) (s32) (*(u8 *)((char *)(arg0) + 0x32)), (u8) (s32) (*(u8 *)((char *)(arg0) + 0x33)), (u8) (s32) (*(u8 *)((char *)(arg0) + 0x34)), (u8) (s32) (*(u8 *)((char *)(arg0) + 0x35)), (u8) (s32) (*(u8 *)((char *)(arg0) + 0x36)), (u8) (s32) (*(u8 *)((char *)(arg0) + 0x37)), (s16) (s32) var_s2, (s16) (s32) var_s3, (u8) (s32) (*(u8 *)((char *)(arg0) + 0x40)), (s16) sp178, spFC, (s32) (*(u8 *)((char *)(arg0) + 0x48)), (u8) (s32) (*(u8 *)((char *)(arg0) + 0xC)), (s32) (*(u8 *)((char *)(arg0) + 0x1)));
                            goto block_65;
                        }
                    } else {
block_65:
                        var_v0 = (*(s32 *)((char *)(sp184) + 0x44));
                    }
                    temp_t8_2 = sp180 + 1;
                    sp180 = temp_t8_2;
                } while (temp_t8_2 < (s32) var_v0);
            }
        } while (spF8 < 0);
        sp164 = var_fp;
        sp160 = var_s7;
    }
    temp_v0_8 = (*(s32 *)((char *)(arg0) + 0x20));
    (*(u8 *)((char *)(arg0) + 0x42)) = (u8) spF8;
    if (temp_v0_8 != 0xFFFF) {
        temp_v0_9 = temp_v0_8 - D_800BE9E4;
        if (temp_v0_9 > 0) {
            (*(u16 *)((char *)(arg0) + 0x20)) = (u16) temp_v0_9;
            return;
        }
        func_1516972C(arg0);
    }
}

void func_1516E778(u32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_1516D99C((s16) (arg0 >> 0x10), (s16) arg0, 0, arg2, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 4U, 0U, 0U, 0U, 0xFFU, 0xFFU, 0xFFU, 0U, 8U, 8U, 1U, 0U, 0U, 0U, 0U, 0x155, 0x155, 0x155, 0x155, (u16) arg1, 0x1EU, 0U, 0xFFU, 0x28U, 0x168, 0x18U, 0x21U, 4U, 0U, 1U, 0U, 0U, 0, 0U, 0U, (u8) (s32) arg3, arg4);
}

s32 func_1516E8CC(void *arg0) {
    f32 temp_f0;
    f32 temp_f2;
    f32 var_f10;
    f32 var_f10_2;
    f32 var_f16;
    f32 var_f16_2;
    f32 var_f4;
    f32 var_f4_2;
    s16 temp_v1;
    s32 var_a2;
    u8 temp_a1;
    u8 temp_a3;
    u8 temp_t0;
    u8 temp_t1;
    u8 temp_t2;
    u8 temp_t5;
    u8 temp_t6;
    u8 temp_t9;
    u8 var_v1;
    u8 var_v1_2;
    void *temp_v0;
    void *var_a1;

    var_v1 = (*(s32 *)((char *)(arg0) + 0x1F));
    if ((*(s32 *)((char *)(arg0) + 0x24)) != 0) {
        if (var_v1 != 0xFF) {
            var_v1 += D_800BE9E4 << 5;
            if ((s32) var_v1 >= 0x100) {
                var_v1 = 0xFF;
            }
            (*(s32 *)((char *)(arg0) + 0x1F)) = var_v1;
        }
    } else if (var_v1 != 0) {
        var_v1 -= D_800BE9E4 * 0x10;
        if ((s32) var_v1 < 0) {
            var_v1 = 0;
        }
        (*(s32 *)((char *)(arg0) + 0x1F)) = var_v1;
    }
    if (((*(s32 *)((char *)(arg0) + 0x24)) == 0) && (var_v1 == 0)) {
        return 1;
    }
    temp_v1 = (*(s32 *)((char *)(arg0) + 0x14)) + (D_800BE9E4 * 0xA);
    (*(s32 *)((char *)(arg0) + 0x16)) = temp_v1;
    (*(s32 *)((char *)(arg0) + 0x14)) = temp_v1;
    if ((*(s32 *)((char *)(arg0) + 0x24)) == 0) {
        var_a2 = (*(s32 *)((char *)(arg0) + 0x24)) + ((s32) (*(s32 *)((char *)(arg0) + 0x1F)) >> 5);
    } else {
        var_a2 = (*(s32 *)((char *)(arg0) + 0x24)) + 8;
    }
    temp_a1 = (*(s32 *)((char *)(arg0) + 0x26));
    var_v1_2 = temp_a1;
    if ((s32) temp_a1 < (temp_a1 + 8)) {
        var_a1 = temp_a1 + &D_800A6E00;
loop_18:
        temp_a3 = (*(s32 *)((char *)(var_a1) + 0x0));
        if (var_a2 >= (s32) temp_a3) {
            temp_v0 = (var_v1_2 * 3) + &D_800A6E0C;
            temp_t1 = (*(s32 *)((char *)(temp_v0) - 0x3));
            temp_f0 = (f32) (var_a2 - temp_a3) / (f32) ((*(f32 *)((char *)(var_a1) - 0x1)) - temp_a3);
            var_f4 = (f32) temp_t1;
            temp_f2 = 1.0f - temp_f0;
            if ((s32) temp_t1 < 0) {
                var_f4 += 4294967296.0f;
            }
            temp_t2 = (*(s32 *)((char *)(temp_v0) + 0x0));
            var_f16 = (f32) temp_t2;
            if ((s32) temp_t2 < 0) {
                var_f16 += 4294967296.0f;
            }
            (*(s8 *)((char *)(arg0) + 0x1C)) = (s8) (u32) ((var_f4 * temp_f0) + (var_f16 * temp_f2));
            temp_t5 = (*(s32 *)((char *)(temp_v0) - 0x2));
            var_f16_2 = (f32) temp_t5;
            if ((s32) temp_t5 < 0) {
                var_f16_2 += 4294967296.0f;
            }
            temp_t6 = (*(s32 *)((char *)(temp_v0) + 0x1));
            var_f10 = (f32) temp_t6;
            if ((s32) temp_t6 < 0) {
                var_f10 += 4294967296.0f;
            }
            (*(s8 *)((char *)(arg0) + 0x1D)) = (s8) (u32) ((var_f16_2 * temp_f0) + (var_f10 * temp_f2));
            temp_t9 = (*(s32 *)((char *)(temp_v0) - 0x1));
            var_f10_2 = (f32) temp_t9;
            if ((s32) temp_t9 < 0) {
                var_f10_2 += 4294967296.0f;
            }
            temp_t0 = (*(s32 *)((char *)(temp_v0) + 0x2));
            var_f4_2 = (f32) temp_t0;
            if ((s32) temp_t0 < 0) {
                var_f4_2 += 4294967296.0f;
            }
            (*(s8 *)((char *)(arg0) + 0x1E)) = (s8) (u32) ((var_f10_2 * temp_f0) + (var_f4_2 * temp_f2));
        } else {
            var_v1_2 += 1;
            var_a1 = (char *)(var_a1) + 1;
            if ((s32) var_v1_2 < ((*(s32 *)((char *)(arg0) + 0x26)) + 8)) {
                goto loop_18;
            }
        }
    }
    return 0;
}

s32 func_1516ECAC(void *arg0) {
    s32 temp_t4;
    u8 var_v1;

    var_v1 = (*(s32 *)((char *)(arg0) + 0x1F));
    if ((*(s32 *)((char *)(arg0) + 0x24)) != 0) {
        if (var_v1 != 0xFF) {
            var_v1 += D_800BE9E4 << 7;
            if ((s32) var_v1 >= 0x100) {
                var_v1 = 0xFF;
            }
            (*(s32 *)((char *)(arg0) + 0x1F)) = var_v1;
        }
    } else if (var_v1 != 0) {
        var_v1 -= D_800BE9E4 * (*(s32 *)((char *)(arg0) + 0x26));
        if ((s32) var_v1 < 0) {
            var_v1 = 0;
        }
        (*(s32 *)((char *)(arg0) + 0x1F)) = var_v1;
    }
    if (((*(s32 *)((char *)(arg0) + 0x24)) == 0) && (var_v1 == 0)) {
        return 1;
    }
    temp_t4 = (s32) ((((*(s32 *)((char *)(arg0) + 0x2C)) << 8) | (*(s32 *)((char *)(arg0) + 0x2D))) * var_v1) >> 7;
    (*(s16 *)((char *)(arg0) + 0x16)) = (s16) temp_t4;
    (*(s16 *)((char *)(arg0) + 0x14)) = (s16) temp_t4;
    return 0;
}

void func_1516ED68(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if ((*(s32 *)((char *)(D_800CC2D4) + (arg0 * 0x32C))) == 0x3A) {
        func_1516D99C(5, 0, 0, 4U, 0U, 0xFFU, 0xFFU, 0xFFU, 0U, 0U, 0U, 0U, 2U, 0U, 0U, 0U, 0U, 0U, 0U, 8U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0x124, 0x124, 0, 0, (u16) arg1, 0U, 0U, (u8) arg0, 0xCU, 0, 0U, 0x81U, 2U, 0U, 1U, 0U, 0U, 0, 5U, 0U, (u8) (s32) arg2, arg3);
    }
}

void func_1516EED4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *temp_v0;

    temp_v0 = &(&D_800DD2A0)[arg0];
    if ((arg0 < 4) && ((s32) *temp_v0 >= arg1)) {
        *temp_v0 = 0;
        func_1516D99C(0, 0, 0, 4U, 0U, 0xFFU, 0xFFU, 0xFFU, 0U, 0U, 0U, 0U, 2U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0x200, 0x200, 0, 0, 0x1EU, 0U, 0U, (u8) arg0, 0x14U, 0, 0U, 0x81U, 8U, 0U, 1U, 0U, 0U, 0, 0xCU, 0U, (u8) (s32) arg2, arg3);
    }
}

s32 func_1516F024(void *arg0) {
    void *sp;
    s32 sp54;
    void * sp48;
    void * sp3C;
    void * sp30;
    void * sp24;
    s16 temp_v0;
    u8 temp_a2;
    u8 temp_v1;
    u8 var_v0;

    (*(s32 *)((char *)&(sp48) + 0x0)) = (s32) (*(s32 *)((char *)&(D_8008CBC4) + 0x0));
    (*(s32 *)((char *)&(sp48) + 0x4)) = (s32) (*(s32 *)((char *)&(D_8008CBC4) + 0x4));
    (*(s32 *)((char *)&(sp48) + 0x8)) = (*(s32 *)((char *)&(D_8008CBC4) + 0x8));
    (*(s32 *)((char *)&(sp3C) + 0x0)) = (s32) (*(s32 *)((char *)&(D_8008CBD0) + 0x0));
    (*(s32 *)((char *)&(sp3C) + 0x4)) = (s32) (*(s32 *)((char *)&(D_8008CBD0) + 0x4));
    (*(s32 *)((char *)&(sp3C) + 0x8)) = (*(s32 *)((char *)&(D_8008CBD0) + 0x8));
    (*(s32 *)((char *)&(sp30) + 0x0)) = (s32) (*(s32 *)((char *)&(D_8008CBDC) + 0x0));
    (*(s32 *)((char *)&(sp30) + 0x4)) = (s32) (*(s32 *)((char *)&(D_8008CBDC) + 0x4));
    (*(s32 *)((char *)&(sp30) + 0x8)) = (*(s32 *)((char *)&(D_8008CBDC) + 0x8));
    (*(s32 *)((char *)&(sp24) + 0x0)) = (s32) (*(s32 *)((char *)&(D_8008CBE8) + 0x0));
    (*(s32 *)((char *)&(sp24) + 0x4)) = (s32) (*(s32 *)((char *)&(D_8008CBE8) + 0x4));
    (*(s32 *)((char *)&(sp24) + 0x8)) = (*(s32 *)((char *)&(D_8008CBE8) + 0x8));
    temp_a2 = (*(s32 *)((char *)(arg0) + 0x2C));
    var_v0 = (*(s32 *)((char *)(arg0) + 0x1F));
    if ((*(s32 *)((char *)(arg0) + 0x24)) != 0) {
        temp_v1 = *(&sp30 + temp_a2);
        if (var_v0 != temp_v1) {
            var_v0 += D_800BE9E4 * 0x10;
            if ((s32) temp_v1 < (s32) var_v0) {
                var_v0 = temp_v1;
            }
            (*(s32 *)((char *)(arg0) + 0x1F)) = var_v0;
        }
    } else if (var_v0 != 0) {
        var_v0 -= D_800BE9E4 * (*(s32 *)(&sp24 + temp_a2));
        if ((s32) var_v0 < 0) {
            var_v0 = 0;
        }
        (*(s32 *)((char *)(arg0) + 0x1F)) = var_v0;
    }
    if (((*(s32 *)((char *)(arg0) + 0x24)) == 0) && (var_v0 == 0)) {
        return 1;
    }
    sp54 = (s32) temp_a2;
    func_1516F864((*(s32 *)((char *)(arg0) + 0x24)), temp_a2, &sp30);
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x14)) + (D_800BE9E4 * (*(s32 *)((char *)((char *)(sp) + sp54) + 0x3C)));
    (*(s32 *)((char *)(arg0) + 0x16)) = temp_v0;
    (*(s32 *)((char *)(arg0) + 0x14)) = temp_v0;
    if (sp54 == 3) {
        (*(s32 *)((char *)(arg0) + 0x18)) = 0x64;
    }
    func_1516F94C(arg0, (*(s32 *)((char *)((char *)(sp) + sp54) + 0x48)), sp54);
    return 0;
}

void func_1516F1C0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_1516D99C(2, 0, 0, 0x2DU, 0U, 0xFFU, 0xFFU, 0xFFU, 0U, 0U, 0U, 0U, 2U, 0U, 0U, 0U, 0U, 0U, 0U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0x50, 0x50, 0, 0, (u16) arg1, 0xAU, 0xAU, (u8) arg0, 0x3CU, 0, 0U, 0x81U, 4U, 0U, 1U, 0U, 0U, 0, 4U, 2U, (u8) (s32) arg2, arg3);
}

void func_1516F2F8( s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 spD4;

    spD4 = (s32) arg0;
    func_1516D99C(3, 0, 0, 0x2BU, 0U, 0xFFU, 0xFFU, 0xFFU, 0U, 0U, 0U, 0U, 2U, 0U, 0U, 0U, 0U, 0U, 0U, 2U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0x50, 0x50, 0, 0, (u16) arg1, 4U, 4U, (u8) (s32) arg0, 0x10U, 0, 0U, 0x81U, 4U, 0U, 1U, 0U, 0U, 0, 1U, 0U, (u8) (s32) arg4, arg5);
    func_1516D99C(3, 0, 0, 0x2BU, 0U, 0xFFU, 0xFFU, 0xFFU, 0U, 0U, 0U, 0U, 2U, 0U, 0U, 0U, 0U, 0U, 0U, 3U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0x50, 0x50, 0, 0, 7U, 4U, 4U, (u8) (s32) arg0, (u8) arg2, 0, 0U, 0x81U, 5U, 0U, 1U, 0U, 0U, 0, 1U, (u8) arg3, (u8) (s32) arg4, arg5);
}

void func_1516F548( s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, s32 arg11, s32 arg15, s32 arg16) {
    s32 unkspF6;
    s32 unkspF2;
    s32 unkspEE;
    s32 spF4;
    s32 spF0;
    s32 spEC;
    s32 spE8;
    s32 spE4;
    s32 spE0;
    s32 spDC;
    s32 spD8;
    s32 spD4;
    s32 spD0;
    s32 temp_t7;
    s32 temp_t8;

    spE8 = (s32) arg4;
    temp_t8 = (s32) (arg7 << 0xC) / 4096;
    temp_t7 = (s32) (arg8 << 0xC) / 4096;
    spDC = (s32) (s16) temp_t7;
    spE0 = (s32) (s16) temp_t8;
    spE4 = (s32) arg6;
    spD8 = (s32) arg3;
    spD4 = (s32) arg9;
    spD0 = (s32) arg5;
    spF4 = (s32) arg0;
    spF0 = (s32) arg1;
    spEC = (s32) arg2;
    func_1516D99C(arg0, arg1, arg2, 0xDU, 0U, 0x67U, 0x17U, 0xDU, 0U, 0U, 0x12U, 0U, 2U, (u8) (s32) arg4, 0U, (u8) (s32) arg6, 0U, 0U, 0U, (u8) arg10, 0U, 0U, 0U, 0U, 0U, 0U, 0U, (s16) (s32) (s16) temp_t8, (s16) (s32) (s16) temp_t8, (s16) (s32) (s16) temp_t7, (s16) (s32) (s16) temp_t7, (u16) (s32) arg3, (u8) (s32) arg9, 0x14U, 0xFFU, 0x10U, (s16) (s32) arg5, 0xC8U, 1U, 0U, 0U, 1U, 0U, 0U, 0, 0U, 0U, (u8) (s32) arg15, arg16);
    func_1516D99C(unkspF6, unkspF2, unkspEE, 0xDU, 0U, 0x67U, 0x17U, 0xDU, 0U, 0U, 0x12U, 0U, 2U, (u8) (s32) arg4, 0U, (u8) (s32) arg6, 0U, 0U, 0U, (u8) arg11, 0U, 0U, 0U, 0U, 0U, 0U, 0U, (s16) (s32) (s16) temp_t8, (s16) (s32) (s16) temp_t8, (s16) (s32) (s16) temp_t7, (s16) (s32) (s16) temp_t7, (u16) (s32) arg3, (u8) (s32) arg9, 0x14U, 0xFFU, 0x10U, (s16) (s32) arg5, 0xC8U, 1U, 6U, 0U, 1U, 0U, 0U, 0, 0U, 0U, (u8) (s32) arg15, arg16);
    func_1000FA64(7, unkspF6, unkspF2, unkspEE, 0x36B0, 0x3E8, 0x64, &func_1000EBC4, (s32) arg3, 0, 0, 0);
}

void func_1516F864(void *arg0) {
    s32 temp_t1;
    s32 temp_t3;

    temp_t3 = ((*(s32 *)((char *)(arg0) + 0xE)) << 8) + (*(s32 *)((char *)(arg0) + 0x2A)) + ((((*(s32 *)((char *)(arg0) + 0x26)) << 8) + (*(s32 *)((char *)(arg0) + 0x27))) * D_800BE9E4);
    (*(s16 *)((char *)(arg0) + 0xE)) = (s16) (temp_t3 >> 8);
    (*(u8 *)((char *)(arg0) + 0x2A)) = (u8) temp_t3;
    temp_t1 = ((*(s32 *)((char *)(arg0) + 0x12)) << 8) + (*(s32 *)((char *)(arg0) + 0x2B)) + ((((*(s32 *)((char *)(arg0) + 0x28)) << 8) + (*(s32 *)((char *)(arg0) + 0x29))) * D_800BE9E4);
    (*(s16 *)((char *)(arg0) + 0x12)) = (s16) (temp_t1 >> 8);
    (*(u8 *)((char *)(arg0) + 0x2B)) = (u8) temp_t1;
}

void func_1516F8EC(void *arg0, s32 arg1) {
    s32 temp_t0;

    temp_t0 = (s32) ((((*(s32 *)((char *)(arg0) + 0x26)) << 8) + (*(s32 *)((char *)(arg0) + 0x27))) * arg1) >> 8;
    (*(s8 *)((char *)(arg0) + 0x26)) = (s8) (temp_t0 >> 8);
    (*(u8 *)((char *)(arg0) + 0x27)) = (u8) temp_t0;
}

void func_1516F91C(void *arg0, s32 arg1) {
    s32 temp_t0;

    temp_t0 = (s32) ((((*(s32 *)((char *)(arg0) + 0x28)) << 8) + (*(s32 *)((char *)(arg0) + 0x29))) * arg1) >> 8;
    (*(s8 *)((char *)(arg0) + 0x28)) = (s8) (temp_t0 >> 8);
    (*(u8 *)((char *)(arg0) + 0x29)) = (u8) temp_t0;
}

void func_1516F94C(void *arg0, s32 arg1) {
    func_1516F8EC(arg0, arg1);
    func_1516F91C(arg0, arg1);
}

void func_1516F984(void *arg0, void *arg1) {
    func_1516F94C(arg1, 0);
    (*(s16 *)((char *)(arg0) + 0x18)) = (s16) ((s32) ((*(s16 *)((char *)(arg0) + 0x18)) * (s32) arg1) >> 8);
}

s32 func_1516F9C4(void *arg0) {
    s32 temp_t0;
    u8 var_v0;

    var_v0 = (*(s32 *)((char *)(arg0) + 0x1F));
    if ((*(s32 *)((char *)(arg0) + 0x24)) != 0) {
        if (var_v0 != 0xFF) {
            var_v0 += D_800BE9E4 * 0x10;
            if ((s32) var_v0 >= 0x100) {
                var_v0 = 0xFF;
            }
            (*(s32 *)((char *)(arg0) + 0x1F)) = var_v0;
        }
    } else {
        if (var_v0 != 0) {
            var_v0 -= D_800BE9E4 * 8;
            if ((s32) var_v0 < 0) {
                var_v0 = 0;
            }
            (*(s32 *)((char *)(arg0) + 0x1F)) = var_v0;
        }
        temp_t0 = (s32) (var_v0 << 9) >> 8;
        (*(s16 *)((char *)(arg0) + 0x16)) = (s16) temp_t0;
        (*(s16 *)((char *)(arg0) + 0x14)) = (s16) temp_t0;
    }
    if (((*(s32 *)((char *)(arg0) + 0x24)) == 0) && (var_v0 == 0)) {
        return 1;
    }
    func_1516F864((*(s32 *)((char *)(arg0) + 0x24)));
    func_1516F984(arg0, 0xF0);
    return 0;
}

void func_1516FA88( s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    func_1516D99C(arg0, arg1, arg2, 0x1BU, 0U, 0xFFU, 0xFFU, 0xFFU, 0U, 0xFFU, 0xFFU, 0xFFU, 3U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0x400, 0x400, 0, 0, 2U, 0U, 0U, 0xFFU, 0xFU, 0, 0U, 9U, 0U, 0xFFU, 0xAU, 0x5AU, 5U, arg3, 0U, 0U, (u8) (s32) arg4, arg5);
}

s32 func_1516FBCC(void *arg0) {
    s16 temp_v1;
    s32 temp_t9;
    s32 var_v0_2;
    u8 temp_v1_2;
    u8 temp_v1_3;
    u8 temp_v1_4;
    u8 var_v0;

    var_v0 = (*(s32 *)((char *)(arg0) + 0x1F));
    if ((*(s32 *)((char *)(arg0) + 0x24)) != 0) {
        if (var_v0 != 0xFF) {
            var_v0 += D_800BE9E4 * 0x10;
            if ((s32) var_v0 >= 0x100) {
                var_v0 = 0xFF;
            }
            (*(s32 *)((char *)(arg0) + 0x1F)) = var_v0;
        }
    } else if (var_v0 != 0) {
        var_v0 -= D_800BE9E4 << (*(s32 *)((char *)(arg0) + 0x2F));
        if ((s32) var_v0 < 0) {
            var_v0 = 0;
        }
        (*(s32 *)((char *)(arg0) + 0x1F)) = var_v0;
    }
    if (((*(s32 *)((char *)(arg0) + 0x24)) == 0) && (var_v0 == 0)) {
        return 1;
    }
    (*(s16 *)((char *)(arg0) + 0x14)) = (s16) ((*(s16 *)((char *)(arg0) + 0x14)) + ((*(s16 *)((char *)(arg0) + 0x2D)) * D_800BE9E4));
    temp_v1 = (*(s32 *)((char *)(arg0) + 0x14));
    (*(s16 *)((char *)(arg0) + 0x16)) = (s16) ((*(s16 *)((char *)(arg0) + 0x16)) + ((*(s16 *)((char *)(arg0) + 0x2E)) * D_800BE9E4));
    if ((temp_v1 <= 0) || (temp_v1 <= 0)) {
        (*(s32 *)((char *)(arg0) + 0x16)) = 0;
        (*(s16 *)((char *)(arg0) + 0x14)) = (s16) (*(s16 *)((char *)(arg0) + 0x16));
        return 1;
    }
    var_v0_2 = (*(s32 *)((char *)(arg0) + 0x2C)) + D_800BE9E4;
    if (var_v0_2 >= 0x80) {
        var_v0_2 = 0x7F;
    }
    temp_v1_2 = (*(s32 *)((char *)(arg0) + 0x26));
    temp_t9 = var_v0_2 * 2;
    (*(u8 *)((char *)(arg0) + 0x2C)) = (u8) var_v0_2;
    temp_v1_3 = (*(s32 *)((char *)(arg0) + 0x27));
    (*(s8 *)((char *)(arg0) + 0x1C)) = (s8) (((s32) (((*(s8 *)((char *)(arg0) + 0x29)) - temp_v1_2) * temp_t9) >> 8) + temp_v1_2);
    temp_v1_4 = (*(s32 *)((char *)(arg0) + 0x28));
    (*(s8 *)((char *)(arg0) + 0x1D)) = (s8) (((s32) (((*(s8 *)((char *)(arg0) + 0x2A)) - temp_v1_3) * temp_t9) >> 8) + temp_v1_3);
    (*(s8 *)((char *)(arg0) + 0x1E)) = (s8) (((s32) (((*(s8 *)((char *)(arg0) + 0x2B)) - temp_v1_4) * temp_t9) >> 8) + temp_v1_4);
    return 0;
}

s32 func_1516FD50(void *arg0) {
    s32 temp_t0;
    u8 var_v0;

    var_v0 = (*(s32 *)((char *)(arg0) + 0x1F));
    if ((*(s32 *)((char *)(arg0) + 0x24)) != 0) {
        if (var_v0 != 0xFF) {
            var_v0 += D_800BE9E4 * 0x10;
            if ((s32) var_v0 >= 0x100) {
                var_v0 = 0xFF;
            }
            (*(s32 *)((char *)(arg0) + 0x1F)) = var_v0;
        }
    } else {
        if (var_v0 != 0) {
            var_v0 -= D_800BE9E4 * 8;
            if ((s32) var_v0 < 0) {
                var_v0 = 0;
            }
            (*(s32 *)((char *)(arg0) + 0x1F)) = var_v0;
        }
        temp_t0 = (s32) (var_v0 << 9) >> 8;
        (*(s16 *)((char *)(arg0) + 0x16)) = (s16) temp_t0;
        (*(s16 *)((char *)(arg0) + 0x14)) = (s16) temp_t0;
    }
    if (((*(s32 *)((char *)(arg0) + 0x24)) == 0) && (var_v0 == 0)) {
        return 1;
    }
    func_1516F864((*(s32 *)((char *)(arg0) + 0x24)));
    (*(s16 *)((char *)(arg0) + 0x18)) = (s16) ((*(s16 *)((char *)(arg0) + 0x18)) + (*(s16 *)((char *)(arg0) + 0x2C)));
    return 0;
}

void func_1516FE1C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 var_fp;
    s16 var_s7;
    s32 *temp_t0;
    s32 var_a0;
    s32 var_a1;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    void *temp_fp;

    f32 spFC;
    var_a0 = arg0;
    temp_t0 = (var_a0 * 0x32C) + &gObjects;
    var_s1 = 0;
    var_s0 = 0;
    if (*temp_t0 == 1) {
        var_s7 = 4;
        var_fp = 0;
        var_s2 = 0x19;
        var_a1 = 1;
    } else {
        temp_fp = temp_t0 + 0x14;
        var_s7 = (s16) ((s32) temp_fp >> 0x10);
        var_fp = (s16) temp_fp;
        var_a0 = 0xFF;
        var_a1 = 0x21;
        var_s2 = spFC;
    }
    do {
        if (var_s0 == 1) {
            var_s2 = 0x1B;
            var_s1 = 8;
        }
        func_1516D99C(var_s7, var_fp, 0, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, (u8) var_s1, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0xAA, 0xAA, 0xAA, 0xAA, (u16) (arg1 & 0xFFFF), 0x1EU, 0U, (u8) (var_a0 & 0xFF), 0x1EU, 0x168, 0x18U, (u16) (var_a1 & 0xFFFF), 4U, 0U, 1U, 0U, 0U, 0, (u8) var_s2, 0U, (u8) (s32) arg2, arg3);
        var_s0 += 1;
    } while (var_s0 != 2);
}

void func_15170034( s32 arg0, f32 *arg1, f32 *arg2, f32 *arg3) {
    s32 unksp1F;
    s32 sp2C;
    f32 sp24;
    f32 sp20;
    s32 sp1C;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a1;

    var_a1 = 0x7F;
    if (arg0 & 0x40) {
        var_a1 = 0x3F;
    }
    sp2C = var_a1;
    temp_v1 = random_u32((u16) var_a1) & var_a1;
    sp1C = temp_v1;
    *arg2 = func_150489B0(temp_v1 & 0xFF, var_a1);
    sp20 = func_15048A40(unksp1F);
    temp_v1_2 = random_u32() & 0xFF;
    sp1C = temp_v1_2;
    sp24 = func_150489B0(temp_v1_2 & 0xFF);
    *arg1 = sp20 * func_15048A40(unksp1F);
    *arg3 = sp20 * sp24;
}

void func_151700D8(void *arg0, f32 arg1, f32 arg2, u8 arg3, f32 arg4, s32 arg5, s32 arg6, s32 arg7, u8 arg8, s32 arg9) {
    s32 sp120[64];
    s32 sp18C;
    s32 sp150;
    s32 sp138;
    void * sp12C;
    void * sp114;
    s32 sp104;
    s32 spF4;
    s32 spF0;
    s32 spEC;
    s32 spE8;
    s32 spE4;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f2;
    s16 temp_s3;
    s32 temp_f10;
    s32 temp_f16;
    s32 temp_s2;
    s32 temp_s6;
    s32 var_a0;
    s32 var_a1;
    s32 var_s4;
    void *temp_s0;
    void *temp_s1;
    void *var_s5;

    (*(s32 *)((char *)&(sp12C) + 0x0)) = (s32) (*(s32 *)((char *)&(D_8008CBF4) + 0x0));
    (*(s32 *)((char *)&(sp12C) + 0x4)) = (s32) (*(s32 *)((char *)&(D_8008CBF4) + 0x4));
    (*(s32 *)((char *)&(sp12C) + 0x8)) = (s32) (*(s32 *)((char *)&(D_8008CBF4) + 0x8));
    sp120[0] = (*(s32 *)((char *)&(D_8008CC00) + 0x0));
    var_a1 = 0;
    sp120[1] = (s32) (*(s32 *)((char *)&(D_8008CC00) + 0x4));
    sp120[2] = (s32) (*(s32 *)((char *)&(D_8008CC00) + 0x8));
    (*(s32 *)((char *)&(sp114) + 0x0)) = (s32) (*(s32 *)((char *)&(D_8008CC0C) + 0x0));
    (*(s32 *)((char *)&(sp114) + 0x4)) = (s32) (*(s32 *)((char *)&(D_8008CC0C) + 0x4));
    (*(u8 *)((char *)&(sp114) + 0x8)) = (u8) (*(u8 *)((char *)&(D_8008CC0C) + 0x8));
    var_s5 = arg0;
    sp150 = (s32) ((&sp120[0])[arg5] * arg4);
    do {
        var_s4 = 0;
        if (var_a1 != 3) {
            var_a0 = var_a1 + 1;
            sp104 = var_a0;
        } else {
            sp104 = var_a1 + 1;
            var_a0 = 0;
        }
        if ((var_a1 == 0) || (var_a1 == 2)) {
            sp138 = arg6;
        } else {
            sp138 = arg7;
        }
        temp_s0 = (char *)(arg0) + (var_a0 * 0xC);
        temp_s1 = (arg5 * 3) + &sp114;
        temp_f10 = (s32) (2.0f * ((((*(s32 *)((char *)(temp_s0) + 0x0)) + (*(s32 *)((char *)(var_s5) + 0x0))) * 0.5f) - arg1));
        temp_f16 = (s32) (2.0f * ((((*(s32 *)((char *)(temp_s0) + 0x8)) + (*(s32 *)((char *)(var_s5) + 0x8))) * 0.5f) - arg2));
        if (sp138 > 0) {
            spF4 = (s32) arg3;
            temp_s6 = (s32) (D_800A6E84 * arg4);
            spEC = temp_f10 & 0xFF;
            spF0 = (temp_f10 >> 8) & 0xFF;
            spE8 = (temp_f16 >> 8) & 0xFF;
            spE4 = temp_f16 & 0xFF;
            sp18C = var_a1;
            do {
                temp_f2 = (*(s32 *)((char *)(var_s5) + 0x0));
                temp_f12 = (*(s32 *)((char *)(var_s5) + 0x4));
                temp_f14 = (*(s32 *)((char *)(var_s5) + 0x8));
                temp_f0 = (f32) var_s4 * (1.0f / (f32) (sp138 - 1));
                temp_f20 = (((*(s32 *)((char *)(temp_s0) + 0x0)) - temp_f2) * temp_f0) + temp_f2;
                temp_f22 = (((*(s32 *)((char *)(temp_s0) + 0x4)) - temp_f12) * temp_f0) + temp_f12;
                temp_f24 = (((*(s32 *)((char *)(temp_s0) + 0x8)) - temp_f14) * temp_f0) + temp_f14;
                temp_s2 = (random_u32((u16) temp_f12, temp_f14, sp18C) & 0x1F) + 0xF;
                temp_s3 = (random_u32() % (u32) (s32) (836.0f * arg4)) + temp_s6;
                func_1516D4E8((s16) (s32) temp_f20, (s16) (s32) temp_f22, (s16) (s32) temp_f24, 0xDU, 0U, (u8) (s32) (*(s16 *)((char *)(temp_s1) + 0x0)), (u8) (s32) (*(s16 *)((char *)(temp_s1) + 0x1)), (u8) (s32) (*(s16 *)((char *)(temp_s1) + 0x2)), 0U, 0U, 0U, 0U, 2U, (u8) spF0, (u8) spEC, (u8) spE8, (u8) spE4, 0U, 0U, (u8) spF4, 0U, 0U, 0U, (s16) (s32) temp_s3, (s16) (s32) temp_s3, (u8) temp_s2, (s16) ((random_u32() % (u32) sp150) + (s32) (143.0f * arg4)), 0, 0, (u8) (s32) arg8, arg9);
                var_s4 += 1;
            } while (var_s4 != sp138);
        }
        var_a1 = sp104;
        var_s5 = (char *)(var_s5) + 0xC;
    } while (var_a1 != 4);
}

void func_15170500( s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 unkspDB;
    f32 spFC;
    f32 spF4;
    s32 spD8;
    s32 spD4;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f2;
    s32 temp_a0;
    s32 temp_f10;
    s32 temp_f18;
    s32 temp_f6;
    s32 temp_f8;
    u16 var_a3;

    var_a3 = arg3;
    if (arg4 == 0) {
        var_a3 = D_800CC34A;
    }
    arg3 = (s32) var_a3;
    spD8 = func_151EF610((s32) var_a3) % 50;
    temp_a0 = (s32) arg3 & 0xFF;
    spD4 = temp_a0;
    spFC = func_150489B0(temp_a0);
    temp_f12 = -func_15048A40((u8) temp_a0);
    spF4 = temp_f12;
    temp_f0 = func_150489B0((s32) temp_f12, (s32) unkspDB);
    temp_f14 = 2.0f * 0.0f;
    temp_f2 = 2.0f * (spFC * temp_f0);
    temp_f12_2 = 2.0f * (temp_f12 * temp_f0);
    if (arg4 != 0) {
        temp_f6 = (s32) (temp_f2 * 256.0f);
        temp_f10 = (s32) (temp_f12_2 * 256.0f);
        func_1516D4E8((s16) temp_f12_2, (s16) temp_f14, arg0, (u8) arg1, (u8) arg2, 0x2AU, 0U, 0xFFU, 0xFFU, 0xFFU, 0U, 0U, 0U, 0U, 6U, (u8) (temp_f6 >> 8), (u8) (temp_f6 & 0xFF), (u8) (temp_f10 >> 8), (u8) (temp_f10 & 0xFF), 0U, 0U, 0U, 0U, 0, 1, 0x200U, 0x166, 0xFF, (s32) (temp_f14 * 256.0f) - 0x32, 0U, 0);
        return;
    }
    temp_f8 = (s32) (temp_f2 * 256.0f);
    temp_f18 = (s32) (temp_f12_2 * 256.0f);
    func_1516D99C((s16) temp_f12_2, (s16) temp_f14, arg0, (u8) arg1, (u8) arg2, 0x2AU, 0U, 0xFFU, 0xFFU, 0xFFU, 0U, 0U, 0U, 0U, 6U, (u8) (temp_f8 >> 8), (u8) (temp_f8 & 0xFF), (u8) (temp_f18 >> 8), (u8) (temp_f18 & 0xFF), 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0, 0, 0x200, 0x166, 0U, 0U, 0x14U, 0U, 0U, 0xFF, 0xFFU, (u16) ((s32) (temp_f14 * 256.0f) - 0x32), 0xC8U, 9U, 1U, 0U, 1U, 0x32, 0x14U, 0U, 0U, 0);
}

s32 func_151707E0(void *arg0) {
    s32 sp20;
    s32 temp_v0;
    s32 temp_v1;
    s8 temp_a0;
    u8 temp_a1;
    u8 var_v1;

    var_v1 = (*(s32 *)((char *)(arg0) + 0x1F));
    if ((*(s32 *)((char *)(arg0) + 0x24)) != 0) {
        if (var_v1 == 0) {
            sp20 = (s32) var_v1;
            (*(u8 *)((char *)(arg0) + 0x24)) = (u8) ((random_u32() % 25U) + 0xC8);
        }
        if (var_v1 != 0xFE) {
            var_v1 += D_800BE9E4 << 6;
            if ((s32) var_v1 >= 0xFF) {
                var_v1 = 0xFE;
            }
            (*(s32 *)((char *)(arg0) + 0x1F)) = var_v1;
        }
    } else if (var_v1 != 0) {
        var_v1 -= D_800BE9E4 * 0x10;
        if ((s32) var_v1 < 0) {
            var_v1 = 0;
        }
        (*(s32 *)((char *)(arg0) + 0x1F)) = var_v1;
    }
    if (((*(s32 *)((char *)(arg0) + 0x24)) == 0) && (var_v1 == 0)) {
        return 1;
    }
    func_1516F864((u8) arg0);
    if ((*(s32 *)((char *)(arg0) + 0x2F)) != 0) {
        func_1516F8EC(arg0, (func_151EF610() % 32) + 0xE6);
        func_1516F91C(arg0, (func_151EF610() % 32) + 0xE6);
    } else {
        temp_a0 = (*(s32 *)((char *)(arg0) + 0x26));
        temp_a1 = (*(s32 *)((char *)(arg0) + 0x27));
        temp_v0 = (temp_a0 << 8) + temp_a1;
        temp_v1 = (temp_a0 << 8) + temp_a1;
        if (((temp_v0 * temp_v0) + (temp_v1 * temp_v1)) >= 0x7D1) {
            func_1516F8EC(arg0, (func_151EF610((s32) temp_a0, temp_a1) % 32) + 0xDC);
            func_1516F91C(arg0, (func_151EF610() % 32) + 0xDC);
        }
    }
    (*(s32 *)((char *)(arg0) + 0x18)) = 0;
    return 0;
}

void func_151709B4(s16 arg0, s16 arg1, s16 arg2, s32 arg3, f32 arg4, u8 arg5, s32 arg6) {
    f32 spF0;
    f32 spEC;
    f32 spE8;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    s32 temp_f4;
    s32 temp_f6;
    s32 var_s0;

    var_s0 = 0;
    if (arg3 > 0) {
        do {
            func_15170034(0x40U, &spF0, &spEC, &spE8);
            temp_f0 = spF0 * arg4;
            temp_f2 = spEC * (2.0f * arg4);
            temp_f12 = spE8 * arg4;
            temp_f4 = (s32) temp_f0;
            temp_f6 = (s32) temp_f12;
            spE8 = temp_f12;
            spEC = temp_f2;
            spF0 = temp_f0;
            func_1516D4E8((s16) temp_f12, arg0, arg1, (u8) arg2, 0x2FU, 0U, 0xFFU, 0xFFU, 0xFFU, 0U, 0xFFU, 0U, 0U, 7U, (u8) (temp_f4 >> 8), (u8) (temp_f4 & 0xFF), (u8) (temp_f6 >> 8), (u8) (temp_f6 & 0xFF), 0U, 0U, 0U, 0U, 0U, 0, 0x200, 0x200U, 0x28, (s32) temp_f2, 0, 0U, (s32) arg5);
            var_s0 += 1;
        } while (var_s0 != arg3);
    }
}
