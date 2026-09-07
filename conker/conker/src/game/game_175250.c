/**
 * Auto-decompiled from asm/175250.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_15046C80();           /* extern */
void *func_150950D4(); /* extern */
s32 func_1513F4E4();                   /* extern */
s32 func_15142B7C();                /* extern */
s32 func_15142C10();   /* extern */
s32 func_15142CF0(); /* extern */
void *func_15142FBC();           /* extern */
s32 func_1514306C();                     /* extern */
void * func_151441A4(); /* extern */
void * func_151442FC(); /* extern */
void *func_15144B34();                           /* extern */
void * func_151478F4();                                  /* extern */
void *func_15147A80(); /* extern */
void * func_151D5D60();    /* extern */
void * memcpy();                         /* extern */
extern s32 D_8008A3E0;
extern s32 D_8008A3F8;
extern s32 D_8008A42C;
extern s32 D_8008A430;
extern s32 D_8008A450;
extern s32 D_80091564;
extern s32 D_800915A4;
extern s32 D_800A4AC8;
extern s32 D_800D2C9C;
extern s32 D_800DD1B0;
void * func_15147DA0();

void *func_15147DA0(void *arg0, f32 *arg1, f32 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, void *arg11, s32 *arg12, s32 arg13, s32 arg14) {
    void *sp3C;
    void *sp38;
    void *temp_a0;
    void *temp_v0;

    (*(s32 *)((char *)(arg0) + 0x10)) = 1;
    temp_v0 = func_15147A80(arg2 + 0x48, 0x14, 1, 0, 1, arg9, arg10, arg12, (s32) arg13, arg14);
    if (temp_v0 == NULL) {
        return NULL;
    }
    temp_a0 = (*(s32 *)((char *)(temp_v0) + 0x98));
    sp3C = temp_v0;
    sp38 = temp_a0;
    memcpy(temp_a0, arg1, 0x20);
    (*(s8 *)((char *)(temp_a0) + 0x20)) = (s8) arg3;
    (*(s8 *)((char *)(temp_a0) + 0x21)) = (s8) arg4;
    (*(s8 *)((char *)(temp_a0) + 0x22)) = (s8) arg5;
    (*(s8 *)((char *)(temp_a0) + 0x23)) = (s8) arg6;
    (*(s8 *)((char *)(temp_a0) + 0x24)) = (s8) arg7;
    (*(s8 *)((char *)(temp_a0) + 0x25)) = (s8) arg8;
    (*(s32 *)((char *)(temp_a0) + 0x28)) = (s32) (*(s32 *)((char *)(arg11) + 0x0));
    (*(s32 *)((char *)(temp_a0) + 0x2C)) = (s32) (*(s32 *)((char *)(arg11) + 0x4));
    (*(s32 *)((char *)(temp_a0) + 0x30)) = (s32) (*(s32 *)((char *)(arg11) + 0x8));
    (*(s32 *)((char *)(temp_a0) + 0x34)) = (s32) (*(s32 *)((char *)(arg11) + 0xC));
    (*(s32 *)((char *)(temp_a0) + 0x38)) = (s32) (*(s32 *)((char *)(arg11) + 0x10));
    (*(s32 *)((char *)(temp_a0) + 0x3C)) = (s32) (*(s32 *)((char *)(arg11) + 0x14));
    (*(s32 *)((char *)(temp_a0) + 0x40)) = (s32) (*(s32 *)((char *)(arg11) + 0x18));
    (*(s32 *)((char *)(temp_a0) + 0x44)) = (s32) (*(s32 *)((char *)(arg11) + 0x1C));
    return sp3C;
}

s8 func_15147EB8(void *arg0) {
    void *sp2C;
    s8 sp2B;
    s32 sp18;
    s16 temp_v0_3;
    s32 temp_a1;
    s32 temp_lo;
    s8 var_a2;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_4;
    void *temp_t8;
    void *var_v1;

    var_v1 = (*(s32 *)((char *)(arg0) + 0x98));
    var_a2 = 0;
    temp_v0 = (*(s32 *)((char *)(var_v1) + 0x20));
    if (temp_v0 != 0) {
        sp2C = var_v1;
        sp2B = 0;
        var_a2 = sp2B;
        if (((s32 (*)())((char *)(&D_8008A3E0 + (temp_v0 * 4))))(0) == 0) {
            var_a2 = 1;
        }
    }
    temp_v0_2 = (*(s32 *)((char *)(var_v1) + 0x21));
    if ((temp_v0_2 != 0) && (var_a2 == 0)) {
        sp2C = var_v1;
        sp2B = var_a2;
        if (((s32 (*)())((char *)(&D_8008A3F8 + (temp_v0_2 * 4))))(arg0) == 0) {
            var_a2 = 1;
        }
    }
    if (((*(s32 *)((char *)(var_v1) + 0x18)) & 0x40) && (var_a2 == 0)) {
        temp_v0_3 = (*(s32 *)((char *)(arg0) + 0x1C));
        if (temp_v0_3 < (*(s32 *)((char *)(var_v1) + 0x1C))) {
            temp_lo = temp_v0_3 * (*(s32 *)((char *)(var_v1) + 0x1E));
            if (temp_lo < (s32) (*(s32 *)((char *)(var_v1) + 0x1B))) {
                (*(u8 *)((char *)(var_v1) + 0x1B)) = (u8) temp_lo;
            }
        }
    }
    temp_a1 = var_a2 == 0;
    if (var_a2 != 0) {
        temp_v0_4 = (*(s32 *)((char *)(var_v1) + 0x22));
        if (temp_v0_4 != 0) {
            sp18 = temp_a1;
            ((s32 (*)())((char *)(&D_8008A42C + (temp_v0_4 * 4))))(arg0, temp_a1, var_a2);
        }
    }
    if ((*(s32 *)((char *)(arg0) + 0x2C)) > 0) {
        temp_t8 = (*(s32 *)((char *)(arg0) + 0x94)) + ((*(s32 *)((char *)(arg0) + 0x2D)) * 0x14);
        (*(s32 *)((char *)(arg0) + 0x54)) = (s32) (*(s32 *)((char *)(temp_t8) + 0x0));
        (*(s32 *)((char *)(arg0) + 0x58)) = (s32) (*(s32 *)((char *)(temp_t8) + 0x4));
        (*(s32 *)((char *)(arg0) + 0x5C)) = (s32) (*(s32 *)((char *)(temp_t8) + 0x8));
    } else {
        (*(s32 *)((char *)(arg0) + 0x54)) = 0;
        (*(s32 *)((char *)(arg0) + 0x58)) = 0;
        (*(s32 *)((char *)(arg0) + 0x5C)) = 0;
    }
    return (s8) temp_a1;
}

void *func_1514803C(void *arg0, void *arg1, s32 arg2) {
    void *sp118;
    s8 sp117;
    f32 sp108;
    f32 spFC;
    void *spF0;
    s32 spEC;
    s16 spC2;
    s16 spC0;
    s16 spBE;
    s16 spBC;
    s16 spBA;
    s16 spB8;
    s16 spB6;
    s16 spB4;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f24;
    f32 temp_f24_2;
    f32 temp_f26;
    f32 temp_f26_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 var_f18;
    f32 var_f18_2;
    f32 var_f20;
    f32 var_f20_2;
    f32 var_f22;
    f32 var_f22_2;
    s32 temp_a3;
    s32 temp_t5;
    s32 temp_v0;
    s32 var_a1;
    s32 var_a3;
    s32 var_v0;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s2;
    void *temp_t6;
    void *temp_t7;
    void *temp_t8;
    void *temp_v0_2;
    void *temp_v1;
    void *var_a2;
    void *var_s0;

    f32 sp100;
    f32 sp104;
    f32 sp10C;
    f32 sp110;
    var_s0 = arg1;
    temp_s2 = (*(s32 *)((char *)(arg0) + 0x98));
    if ((*(s32 *)((char *)(arg0) + 0x2C)) >= 2) {
        func_151D5D60((char *)(arg0) + 0x84, arg2, ((*(s32 *)((char *)(arg0) + 0x25)) << 5) - 0x20, &sp118, 0);
        if (sp118 == NULL) {

        } else if (sp118 != NULL) {
            if (D_800BE9C0 != 0) {
                sp118 = (char *)(sp118) + (((*(s32 *)((char *)(arg0) + 0x25)) * 2) - 2) * 0x10;
            }
            sp117 = 1;
            temp_t5 = (*(s32 *)((char *)(arg0) + 0x94));
            spF0 = func_15144B34(arg2);
            spEC = temp_t5;
            temp_v0 = func_1514306C(0, (*(s32 *)((char *)(temp_s2) + 0x19)), 0, 2);
            if (temp_v0 != D_800DD1B0) {
                D_800915A4 = *(&D_80091564 + ((*(s32 *)((char *)(temp_s2) + 0x19)) * 4));
                if ((*(s32 *)((char *)(temp_s2) + 0x18)) & 0x80) {
                    var_v0 = 0x3E;
                } else {
                    var_v0 = 3;
                }
                spEC = temp_t5;
                var_s0 = func_150950D4(var_s0, &D_800915A4, 0, 0, 0, 0, 2, 0x100, 0x100, var_v0);
                D_800DD1B0 = temp_v0;
            }
            spEC = temp_t5;
            func_151441A4(&spC2, &spC0, &spBE, &spBC, 0, 0, 0, 0, 0, 0, 0, (s32) (*(s32 *)((char *)(temp_s2) + 0x1B)), (s32) (*(s32 *)((char *)(temp_s2) + 0x1A)), (s32) (*(s32 *)((char *)(temp_s2) + 0x44)));
            func_151442FC(&spBA, &spB8, &spB6, &spB4, 0, 0, 0, 0, 0, 0, 0, (s32) (*(s32 *)((char *)(temp_s2) + 0x1B)), (s32) (*(s32 *)((char *)(temp_s2) + 0x1A)), (s32) (*(s32 *)((char *)(temp_s2) + 0x45)));
            temp_v1 = ((*(s32 *)((char *)(temp_s2) + 0x34)) * 8) + &D_800A4AC8;
            var_a3 = (*(s32 *)((char *)(arg0) + 0x2E)) - 1;
            var_s0 = func_15142FBC(func_1513F4E4(func_15142CF0(func_15142C10(func_15142B7C(var_s0, (*(s32 *)((char *)(temp_s2) + 0x2C)), (*(s32 *)((char *)(temp_s2) + 0x30))), spBA, spB8, spB6, (s32) spB4, &sp117), 0, 0, spC2, (s32) spC0, (s32) spBE, (s32) spBC, &sp117), (*(s32 *)((char *)(temp_s2) + 0x3B)), &sp117), (*(s32 *)((char *)(temp_s2) + 0x28)) | 0x80000 | D_800D2C9C | 0x2C00 | (*(s32 *)((char *)(temp_s2) + 0x3C)) | (*(s32 *)((char *)(temp_s2) + 0x40)), (*(s32 *)((char *)(temp_v1) + 0x4)) | (*(s32 *)((char *)(temp_v1) + 0x0)), &sp117);
            if (var_a3 < 0) {
                var_a3 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
            }
            var_a1 = var_a3 - 1;
            if (var_a1 < 0) {
                var_a1 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
            }
            temp_v0_2 = spEC + (var_a3 * 0x14);
            (*(s32 *)((char *)&(spFC) + 0x0)) = (*(s32 *)((char *)(temp_v0_2) + 0x0));
            (*(s32 *)((char *)&(spFC) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v0_2) + 0x4));
            var_a2 = spEC + (var_a1 * 0x14);
            (*(s32 *)((char *)&(spFC) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v0_2) + 0x8));
            (*(s32 *)((char *)&(sp108) + 0x0)) = (*(s32 *)((char *)(var_a2) + 0x0));
            (*(s32 *)((char *)&(sp108) + 0x4)) = (s32) (*(s32 *)((char *)(var_a2) + 0x4));
            (*(s32 *)((char *)&(sp108) + 0x8)) = (s32) (*(s32 *)((char *)(var_a2) + 0x8));
            temp_f22 = spFC - (*(s32 *)((char *)(spF0) + 0x0));
            temp_f24 = sp100 - (*(s32 *)((char *)(spF0) + 0x4));
            temp_f26 = sp104 - (*(s32 *)((char *)(spF0) + 0x8));
            temp_f18 = sp100 - sp10C;
            temp_f20 = sp104 - sp110;
            temp_f2 = spFC - sp108;
            temp_f12 = (temp_f18 * temp_f26) - (temp_f24 * temp_f20);
            temp_f14 = (temp_f20 * temp_f22) - (temp_f26 * temp_f2);
            temp_f16 = (temp_f2 * temp_f24) - (temp_f22 * temp_f18);
            temp_f0 = sqrtf((temp_f12 * temp_f12) + (temp_f14 * temp_f14) + (temp_f16 * temp_f16));
            if (temp_f0 == 0.0f) {
                var_f18 = 0.0f;
                var_f20 = 0.0f;
                var_f22 = 0.0f;
            } else {
                temp_f2_2 = (*(s32 *)((char *)(temp_s2) + 0x0)) / temp_f0;
                var_f18 = temp_f12 * temp_f2_2;
                var_f20 = temp_f14 * temp_f2_2;
                var_f22 = temp_f16 * temp_f2_2;
            }
            (*(s16 *)((char *)(sp118) + 0x0)) = (s16) (s32) (spFC + var_f18);
            (*(s16 *)((char *)(sp118) + 0x2)) = (s16) (s32) (sp100 + var_f20);
            (*(s16 *)((char *)(sp118) + 0x4)) = (s16) (s32) (sp104 + var_f22);
            (*(s16 *)((char *)(sp118) + 0xA)) = (s16) ((*(s16 *)((char *)(temp_v0_2) + 0x10)) + 0x4000);
            (*(s32 *)((char *)(sp118) + 0x8)) = 0x43C0;
            (*(s32 *)((char *)(sp118) + 0xC)) = 0xFF;
            (*(s32 *)((char *)(sp118) + 0xD)) = 0xFF;
            (*(s32 *)((char *)(sp118) + 0xE)) = 0xFF;
            (*(s32 *)((char *)(sp118) + 0xF)) = 0xFF;
            (*(s32 *)((char *)(sp118) + 0x6)) = 0;
            temp_t8 = (char *)(sp118) + 0x10;
            sp118 = temp_t8;
            (*(s16 *)((char *)(sp118) + 0x10)) = (s16) (s32) (spFC - var_f18);
            (*(s16 *)((char *)(sp118) + 0x2)) = (s16) (s32) (sp100 - var_f20);
            (*(s16 *)((char *)(sp118) + 0x4)) = (s16) (s32) (sp104 - var_f22);
            (*(s16 *)((char *)(sp118) + 0xA)) = (s16) ((*(s16 *)((char *)(temp_v0_2) + 0x10)) + 0x4000);
            (*(s32 *)((char *)(sp118) + 0x8)) = 0x4000;
            (*(s32 *)((char *)(sp118) + 0xC)) = 0xFF;
            (*(s32 *)((char *)(temp_t8) + 0xD)) = 0xFF;
            (*(s32 *)((char *)(sp118) + 0xE)) = 0xFF;
            (*(s32 *)((char *)(sp118) + 0xF)) = 0xFF;
            (*(s32 *)((char *)(sp118) + 0x6)) = 0;
            sp118 = (char *)(temp_t8) + 0x10;
            do {
                temp_f22_2 = sp108 - (*(s32 *)((char *)(spF0) + 0x0));
                temp_a3 = var_a1;
                temp_f24_2 = sp10C - (*(s32 *)((char *)(spF0) + 0x4));
                var_a1 -= 1;
                temp_f26_2 = sp110 - (*(s32 *)((char *)(spF0) + 0x8));
                temp_f18_2 = sp100 - sp10C;
                temp_f20_2 = sp104 - sp110;
                temp_f2_3 = spFC - sp108;
                temp_f12_2 = (temp_f18_2 * temp_f26_2) - (temp_f24_2 * temp_f20_2);
                temp_f14_2 = (temp_f20_2 * temp_f22_2) - (temp_f26_2 * temp_f2_3);
                temp_f16_2 = (temp_f2_3 * temp_f24_2) - (temp_f22_2 * temp_f18_2);
                temp_f0_2 = sqrtf((temp_f12_2 * temp_f12_2) + (temp_f14_2 * temp_f14_2) + (temp_f16_2 * temp_f16_2));
                if (temp_f0_2 == 0.0f) {
                    var_f18_2 = 0.0f;
                    var_f20_2 = 0.0f;
                    var_f22_2 = 0.0f;
                } else {
                    temp_f2_4 = (*(s32 *)((char *)(temp_s2) + 0x0)) / temp_f0_2;
                    var_f18_2 = temp_f12_2 * temp_f2_4;
                    var_f20_2 = temp_f14_2 * temp_f2_4;
                    var_f22_2 = temp_f16_2 * temp_f2_4;
                }
                (*(s16 *)((char *)(sp118) + 0x0)) = (s16) (s32) (sp108 + var_f18_2);
                (*(s16 *)((char *)(sp118) + 0x2)) = (s16) (s32) (sp10C + var_f20_2);
                (*(s16 *)((char *)(sp118) + 0x4)) = (s16) (s32) (sp110 + var_f22_2);
                (*(s16 *)((char *)(sp118) + 0xA)) = (s16) ((*(s16 *)((char *)(var_a2) + 0x10)) + 0x4000);
                (*(s32 *)((char *)(sp118) + 0x8)) = 0x43C0;
                (*(s32 *)((char *)(sp118) + 0xC)) = 0xFF;
                (*(s32 *)((char *)(sp118) + 0xD)) = 0xFF;
                (*(s32 *)((char *)(sp118) + 0xE)) = 0xFF;
                (*(s32 *)((char *)(sp118) + 0xF)) = 0xFF;
                (*(s32 *)((char *)(sp118) + 0x6)) = 0;
                temp_t7 = (char *)(sp118) + 0x10;
                sp118 = temp_t7;
                (*(s16 *)((char *)(sp118) + 0x10)) = (s16) (s32) (sp108 - var_f18_2);
                (*(s16 *)((char *)(sp118) + 0x2)) = (s16) (s32) (sp10C - var_f20_2);
                (*(s16 *)((char *)(sp118) + 0x4)) = (s16) (s32) (sp110 - var_f22_2);
                (*(s16 *)((char *)(sp118) + 0xA)) = (s16) ((*(s16 *)((char *)(var_a2) + 0x10)) + 0x4000);
                (*(s32 *)((char *)(sp118) + 0x8)) = 0x4000;
                (*(s32 *)((char *)(sp118) + 0xC)) = 0xFF;
                (*(s32 *)((char *)(temp_t7) + 0xD)) = 0xFF;
                (*(s32 *)((char *)(sp118) + 0xE)) = 0xFF;
                (*(s32 *)((char *)(sp118) + 0xF)) = 0xFF;
                (*(s32 *)((char *)(sp118) + 0x6)) = 0;
                sp118 = (char *)(temp_t7) + 0x10;
                (*(s32 *)((char *)(var_s0) + 0x0)) = 0x01004008;
                temp_s0 = (char *)(var_s0) + 8;
                (*(s32 *)((char *)(var_s0) + 0x4)) = (void *) ((char *)(sp118) - 0x40);
                (*(s32 *)((char *)(var_s0) + 0x8)) = 0x05000204;
                (*(s32 *)((char *)(temp_s0) + 0x4)) = 0;
                temp_s0_2 = (char *)(temp_s0) + 8;
                (*(s32 *)((char *)(temp_s0) + 0x8)) = 0x05020604;
                (*(s32 *)((char *)(temp_s0_2) + 0x4)) = 0;
                var_s0 = (char *)(temp_s0_2) + 8;
                var_a2 = (char *)(var_a2) - 0x14;
                if (var_a1 < 0) {
                    var_a1 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                    var_a2 = spEC + (var_a1 * 0x14);
                }
                temp_t6 = spEC + (temp_a3 * 0x14);
                (*(s32 *)((char *)&(spFC) + 0x0)) = (*(s32 *)((char *)(temp_t6) + 0x0));
                (*(s32 *)((char *)&(spFC) + 0x4)) = (s32) (*(s32 *)((char *)(temp_t6) + 0x4));
                (*(s32 *)((char *)&(spFC) + 0x8)) = (s32) (*(s32 *)((char *)(temp_t6) + 0x8));
                (*(s32 *)((char *)&(sp108) + 0x0)) = (*(s32 *)((char *)(var_a2) + 0x0));
                (*(s32 *)((char *)&(sp108) + 0x4)) = (s32) (*(s32 *)((char *)(var_a2) + 0x4));
                (*(s32 *)((char *)&(sp108) + 0x8)) = (s32) (*(s32 *)((char *)(var_a2) + 0x8));
            } while (temp_a3 != (*(s32 *)((char *)(arg0) + 0x2D)));
        }
    }
    return var_s0;
}

s32 func_151488C4(void *arg0) {
    u16 sp0;
    s16 var_a3;
    s32 temp_lo;
    s32 temp_v0;
    s8 temp_a1;
    s8 var_a1;
    s8 var_a1_2;
    void *temp_a2;
    void *temp_t7;
    void *temp_v1;

    var_a1 = (*(s32 *)((char *)(arg0) + 0x2D));
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x94));
    temp_v1 = (*(s32 *)((char *)(arg0) + 0x98));
    if (var_a1 != (*(s32 *)((char *)(arg0) + 0x2E))) {
        do {
            temp_lo = var_a1 * 0x14;
            var_a1 += 1;
            temp_a2 = temp_v0 + temp_lo;
            (*(f32 *)((char *)(temp_a2) + 0xC)) = (f32) ((*(f32 *)((char *)(temp_a2) + 0xC)) - ((*(f32 *)((char *)(temp_v1) + 0x10)) * D_800BE9A4));
            (*(f32 *)((char *)(temp_a2) + 0x0)) = (f32) ((*(f32 *)((char *)(temp_a2) + 0x0)) + ((*(f32 *)((char *)(temp_v1) + 0x4)) * D_800BE9A4));
            (*(f32 *)((char *)(temp_a2) + 0x4)) = (f32) ((*(f32 *)((char *)(temp_a2) + 0x4)) + ((*(f32 *)((char *)(temp_a2) + 0xC)) * D_800BE9A4));
            (*(f32 *)((char *)(temp_a2) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_a2) + 0x8)) + ((*(f32 *)((char *)(temp_v1) + 0xC)) * D_800BE9A4));
            if (var_a1 == (*(s32 *)((char *)(arg0) + 0x25))) {
                var_a1 = 0;
            }
        } while (var_a1 != (*(s32 *)((char *)(arg0) + 0x2E)));
    }
    temp_a1 = (*(s32 *)((char *)(arg0) + 0x2C));
    if (temp_a1 < ((*(s32 *)((char *)(arg0) + 0x25)) - 1)) {
        var_a3 = 0;
        if ((*(s32 *)((char *)(temp_v1) + 0x18)) & 0x20) {
            var_a3 = 0x1000;
        }
        if (temp_a1 != 0) {
            sp0 = (u16) (0x1000 / temp_a1);
        }
        (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) (temp_a1 + 1);
        temp_t7 = temp_v0 + ((*(s32 *)((char *)(arg0) + 0x2E)) * 0x14);
        (*(s32 *)((char *)(temp_t7) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x10));
        (*(s32 *)((char *)(temp_t7) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x14));
        (*(s32 *)((char *)(temp_t7) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x18));
        (*(f32 *)((char *)((temp_v0 + ((s32)((*(f32 *)((char *)(arg0) + 0x2E)) * 0x14)))) + 0xC)) = (f32) (*(f32 *)((char *)(temp_v1) + 0x8));
        (*(s8 *)((char *)(arg0) + 0x2E)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2E)) + 1);
        if ((*(s32 *)((char *)(arg0) + 0x25)) == (*(s32 *)((char *)(arg0) + 0x2E))) {
            (*(s32 *)((char *)(arg0) + 0x2E)) = 0;
        }
        var_a1_2 = (*(s32 *)((char *)(arg0) + 0x2D));
        if (var_a1_2 != (*(s32 *)((char *)(arg0) + 0x2E))) {
            do {
                (*(s32 *)((char *)((temp_v0 + (var_a1_2 * 0x14))) + 0x10)) = var_a3;
                if ((*(s32 *)((char *)(temp_v1) + 0x18)) & 0x20) {
                    var_a3 = (var_a3 - sp0) & 0xFFFF;
                } else {
                    var_a3 = (var_a3 + sp0) & 0xFFFF;
                }
                var_a1_2 += 1;
                if (var_a1_2 == (*(s32 *)((char *)(arg0) + 0x25))) {
                    var_a1_2 = 0;
                }
            } while (var_a1_2 != (*(s32 *)((char *)(arg0) + 0x2E)));
        }
    } else if ((*(s32 *)((char *)(temp_v1) + 0x18)) & 0x17) {
        (*(s32 *)((char *)(temp_v1) + 0x20)) = 3;
    } else {
        (*(s32 *)((char *)(temp_v1) + 0x20)) = 2;
    }
    return 1;
}

s32 func_15148AF4(void *arg0) {
    s8 var_a1;
    void *temp_a2;
    void *temp_v1;

    temp_v1 = (*(s32 *)((char *)(arg0) + 0x98));
    var_a1 = (*(s32 *)((char *)(arg0) + 0x2E));
    do {
        var_a1 -= 1;
        if (var_a1 < 0) {
            var_a1 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
        }
        temp_a2 = (*(s32 *)((char *)(arg0) + 0x94)) + (var_a1 * 0x14);
        (*(f32 *)((char *)(temp_a2) + 0xC)) = (f32) ((*(f32 *)((char *)(temp_a2) + 0xC)) - ((*(f32 *)((char *)(temp_v1) + 0x10)) * D_800BE9A4));
        (*(f32 *)((char *)(temp_a2) + 0x0)) = (f32) ((*(f32 *)((char *)(temp_a2) + 0x0)) + ((*(f32 *)((char *)(temp_v1) + 0x4)) * D_800BE9A4));
        (*(f32 *)((char *)(temp_a2) + 0x4)) = (f32) ((*(f32 *)((char *)(temp_a2) + 0x4)) + ((*(f32 *)((char *)(temp_a2) + 0xC)) * D_800BE9A4));
        (*(f32 *)((char *)(temp_a2) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_a2) + 0x8)) + ((*(f32 *)((char *)(temp_v1) + 0xC)) * D_800BE9A4));
    } while (var_a1 != (*(s32 *)((char *)(arg0) + 0x2D)));
    return 1;
}

s32 func_15148BA4(void *arg0) {
    void *sp50;
    s32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    s32 temp_t2;
    s8 temp_v0;
    s8 var_v1;
    u8 temp_v0_3;
    u8 temp_v0_4;
    void *temp_t0;
    void *temp_t4;
    void *temp_v0_2;
    void *temp_v1;

    f32 sp44;
    f32 sp48;
    temp_t0 = (*(s32 *)((char *)(arg0) + 0x98));
    temp_t2 = (*(s32 *)((char *)(arg0) + 0x94));
    var_v1 = (*(s32 *)((char *)(arg0) + 0x2E));
    if ((*(s32 *)((char *)(temp_t0) + 0x18)) & 7) {
        temp_t4 = temp_t2 + ((*(s32 *)((char *)(arg0) + 0x2D)) * 0x14);
        (*(s32 *)((char *)&(sp40) + 0x0)) = (*(s32 *)((char *)(temp_t4) + 0x0));
        (*(s32 *)((char *)&(sp40) + 0x4)) = (s32) (*(s32 *)((char *)(temp_t4) + 0x4));
        (*(s32 *)((char *)&(sp40) + 0x8)) = (s32) (*(s32 *)((char *)(temp_t4) + 0x8));
    }
    do {
        var_v1 -= 1;
        if (var_v1 < 0) {
            var_v1 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
        }
        temp_v0_2 = temp_t2 + (var_v1 * 0x14);
        (*(f32 *)((char *)(temp_v0_2) + 0xC)) = (f32) ((*(f32 *)((char *)(temp_v0_2) + 0xC)) - ((*(f32 *)((char *)(temp_t0) + 0x10)) * D_800BE9A4));
        (*(f32 *)((char *)(temp_v0_2) + 0x0)) = (f32) ((*(f32 *)((char *)(temp_v0_2) + 0x0)) + ((*(f32 *)((char *)(temp_t0) + 0x4)) * D_800BE9A4));
        (*(f32 *)((char *)(temp_v0_2) + 0x4)) = (f32) ((*(f32 *)((char *)(temp_v0_2) + 0x4)) + ((*(f32 *)((char *)(temp_v0_2) + 0xC)) * D_800BE9A4));
        (*(f32 *)((char *)(temp_v0_2) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_v0_2) + 0x8)) + ((*(f32 *)((char *)(temp_t0) + 0xC)) * D_800BE9A4));
        temp_v0 = (*(s32 *)((char *)(arg0) + 0x2D));
    } while (var_v1 != temp_v0);
    if ((*(s32 *)((char *)(temp_t0) + 0x18)) & 0x17) {
        temp_v1 = temp_t2 + (temp_v0 * 0x14);
        if ((*(s32 *)((char *)(temp_v1) + 0x4)) < sp44) {
            sp38 = sp44;
            sp34 = (*(s32 *)((char *)(temp_v1) + 0x0));
            sp3C = (*(s32 *)((char *)((temp_t2 + ((*(s32 *)((char *)(arg0) + 0x2D)) * 0x14))) + 0x8));
            sp50 = temp_t0;
            if (func_15046C80(&sp34, 0, (*(s32 *)((char *)((temp_t2 + ((*(s32 *)((char *)(arg0) + 0x2D)) * 0x14))) + 0x4)), (char *)(arg0) + 0x60) != 0) {
                if ((*(s32 *)((char *)(arg0) + 0x7D)) == 3) {
                    temp_v0_3 = (*(s32 *)((char *)(sp50) + 0x24));
                    if ((temp_v0_3 != 0) && (((s32 (*)())((char *)(&D_8008A450 + (temp_v0_3 * 4))))(arg0, sp40, sp44, sp48, (*(s32 *)((char *)(arg0) + 0x60)), (char *)(arg0) + 0x64) == 0)) {
                        return 0;
                    }
                    goto block_16;
                }
                temp_v0_4 = (*(s32 *)((char *)(sp50) + 0x23));
                if ((temp_v0_4 != 0) && (((s32 (*)())((char *)(&D_8008A430 + (temp_v0_4 * 4))))(arg0, sp40, sp44, sp48, (*(s32 *)((char *)(arg0) + 0x60)), (char *)(arg0) + 0x64) == 0)) {
                    return 0;
                }
                goto block_16;
            }
        }
    }
block_16:
    return 1;
}

s32 func_15148DE0(void *arg0) {
    s16 var_v0;
    s32 temp_t9;
    s8 temp_v0;
    s8 var_a2;
    void *temp_a1;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x2C));
    if (temp_v0 >= 3) {
        (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) (temp_v0 - 1);
        temp_a1 = (*(s32 *)((char *)(arg0) + 0x98));
        temp_t9 = (0x1000 / (s8) (*(s8 *)((char *)(arg0) + 0x2C))) & 0xFFFF;
        var_a2 = (*(s32 *)((char *)(arg0) + 0x2D));
        var_v0 = 0;
        if ((*(s32 *)((char *)(temp_a1) + 0x18)) & 0x20) {
            var_v0 = 0x1000;
        }
        (*(s8 *)((char *)(arg0) + 0x2E)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2E)) - 1);
        if ((*(s32 *)((char *)(arg0) + 0x2E)) < 0) {
            (*(s8 *)((char *)(arg0) + 0x2E)) = (s8) ((*(s8 *)((char *)(arg0) + 0x25)) - 1);
        }
        if (var_a2 != (*(s32 *)((char *)(arg0) + 0x2E))) {
            do {
                (*(s32 *)((char *)(((*(s32 *)((char *)(arg0) + 0x94)) + (var_a2 * 0x14))) + 0x10)) = var_v0;
                if ((*(s32 *)((char *)(temp_a1) + 0x18)) & 0x20) {
                    var_v0 = (var_v0 - temp_t9) & 0xFFFF;
                } else {
                    var_v0 = (var_v0 + temp_t9) & 0xFFFF;
                }
                var_a2 += 1;
                if (var_a2 == (*(s32 *)((char *)(arg0) + 0x25))) {
                    var_a2 = 0;
                }
            } while (var_a2 != (*(s32 *)((char *)(arg0) + 0x2E)));
        }
        return 1;
    }
    return 0;
}

s32 func_15148EF8(void *arg0, void * arg1, void * arg2, void * arg3) {
    (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x98))) + 0x20)) = 4;
    return 1;
}

void func_15148F1C(u8 arg0, f32 arg1, f32 arg2, f32 arg3, s32 arg4, u8 arg5, u8 arg6, f32 arg7, s16 arg8, f32 arg9, f32 arg10, u8 arg11) {
    s8 spB1;
    s32 spAC;
    s16 spAA;
    s16 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    s8 sp97;
    s8 sp96;
    u8 sp95;
    s8 sp94;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    s8 sp69;
    s8 sp68;
    s32 sp64;
    s32 sp60;
    s32 sp5C;
    s32 sp58;
    s32 sp54;
    s32 sp50;
    s32 sp4C;
    f32 temp_f0;
    f32 temp_f2;

    sp78 = func_151423D8(arg6);
    sp74 = func_151423D8(((s32) arg6 - 0x40) & 0xFF);
    sp70 = func_151423D8(arg5);
    temp_f2 = func_151423D8(((s32) arg5 - 0x40) & 0xFF);
    spAC = 1;
    spAA = 1;
    sp96 = 0xFF;
    sp94 = 8;
    sp95 = arg0;
    if (arg0 == 0xA) {
        sp94 = 0x28;
    }
    temp_f0 = arg7 * sp78;
    sp9C = arg1;
    spA4 = arg3;
    spA0 = arg2;
    sp7C = arg9;
    sp8C = arg10;
    spB1 = arg4 + 3;
    sp97 = 0xFF;
    spA8 = arg8;
    sp80 = temp_f0 * temp_f2;
    sp84 = -arg7 * sp74;
    sp88 = temp_f0 * sp70;
    sp4C = 0;
    sp50 = 1;
    sp54 = 0x160600;
    sp58 = 3;
    sp5C = 0x10;
    sp60 = 0x80;
    sp64 = 0x20;
    sp68 = 0;
    sp69 = 9;
    func_15147DA0((*(void **)&(arg7)), &sp9C, &sp7C, 0, 1, 0, 0, 0, 0, 0, 0, NULL, &sp4C, 0U, (s32) arg11);
}

s32 func_151490C8(void *arg0) {
    s8 temp_t6;
    s8 var_v1;

    temp_t6 = (*(s32 *)((char *)(arg0) + 0x1C)) * 8;
    var_v1 = temp_t6;
    if (temp_t6 >= 0x100) {
        var_v1 = -1;
    }
    (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x98))) + 0x1B)) = var_v1;
    if ((var_v1 & 0xFF) < 0) {
        return 0;
    }
    return 1;
}

void func_15149104(void) {
    func_151478F4();
}
