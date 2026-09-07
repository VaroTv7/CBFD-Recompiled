/**
 * Auto-decompiled from asm/487D0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


extern s32 D_80084040;
extern f32 D_80096910;
extern f32 D_80096914;
extern f32 D_80096918;
extern f32 D_8009691C;
extern s32 D_80096920;
extern s32 D_800BE6C0;
extern s32 D_800BE6D0;
extern s32 D_800C57A0;
void func_1501B320();

void func_1501B320(s32 arg0) {
    f32 sp44;
    f32 sp3C;
    f32 sp38;
    f32 sp30;
    f32 sp2C;
    f32 sp24;
    f32 *sp1C;
    f32 *sp18;
    f32 *temp_a0;
    f32 *temp_v1;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f14;
    f32 temp_f2;
    f32 temp_f4;
    f32 var_f0;
    s32 temp_v0_2;
    s32 var_v0;
    void *temp_v0;
    void *temp_v0_3;

    if (D_800BEAC0 == 0) {
        temp_v0 = D_800DBFF0 + (arg0 * 0x9A0);
        if ((*(s32 *)((char *)(temp_v0) + 0x698)) != 0) {
            sp38 = D_80096910;
        } else if (D_800DBFF4 != 0) {
            sp38 = 1.0f;
        } else {
            sp38 = D_80096914;
        }
        var_f0 = (*(s32 *)((char *)(temp_v0) + 0x388));
        temp_f14 = (*(s32 *)((char *)(temp_v0) + 0x380));
        temp_v0_2 = arg0 * 4;
        temp_a0 = temp_v0_2 + &D_800BE6C0;
        if (var_f0 < 0.0f) {
            var_f0 += 360.0f;
        } else if (var_f0 >= 360.0f) {
            var_f0 -= 360.0f;
        }
        if (var_f0 > 180.0f) {
            var_f0 -= 360.0f;
        }
        temp_f2 = *temp_a0;
        temp_v1 = temp_v0_2 + &D_800BE6D0;
        sp18 = temp_v1;
        sp1C = temp_a0;
        sp24 = temp_f14;
        *temp_a0 = temp_f2 + ((var_f0 - temp_f2) * sp38);
        *temp_v1 += sp38 * func_15048A70(*temp_v1, temp_f14);
        temp_f12 = *temp_v1;
        if (temp_f12 < 0.0f) {
            *temp_v1 = temp_f12 + 360.0f;
        } else if (temp_f12 >= 360.0f) {
            *temp_v1 = temp_f12 - 360.0f;
        }
        sp18 = temp_v1;
        sp1C = temp_a0;
        temp_f0 = func_15048A70(*temp_v1, sp24);
        if (fabsf(temp_f0) > 90.0f) {
            var_v0 = 1;
            if (temp_f0 < 0.0f) {
                var_v0 = -1;
            }
            *temp_v1 = sp24 - ((f32) var_v0 * 90.0f);
        }
        temp_f12_2 = *temp_v1;
        if (temp_f12_2 < 0.0f) {
            *temp_v1 = temp_f12_2 + 360.0f;
        } else if (temp_f12_2 >= 360.0f) {
            *temp_v1 = temp_f12_2 - 360.0f;
        }
        sp18 = temp_v1;
        temp_f12_3 = *temp_a0 * D_80096918;
        sp3C = temp_f12_3;
        sp30 = -sinf(temp_f12_3);
        sp2C = cosf(temp_f12_3);
        temp_f12_4 = *temp_v1 * D_8009691C;
        sp3C = temp_f12_4;
        sp44 = sinf(temp_f12_4) * sp2C;
        temp_v0_3 = (arg0 * 3) + &D_800DCD30;
        temp_f4 = cosf(temp_f12_4) * sp2C * 127.0f;
        (*(s8 *)((char *)(temp_v0_3) + 0x0)) = (s8) (s32) (sp44 * 127.0f);
        (*(s8 *)((char *)(temp_v0_3) + 0x1)) = (s8) (s32) (sp30 * 127.0f);
        (*(s8 *)((char *)(temp_v0_3) + 0x2)) = (s8) (s32) temp_f4;
    }
}

void func_1501B640(void) {
    func_1501B320(0);
}

void func_1501B660(void *arg0, f32 *arg1, s32 arg2) {
    u8 sp37;
    u8 sp36;
    u8 sp35;
    f32 temp_f0;
    f32 temp_f12;
    f32 var_f10;
    f32 var_f18;
    f32 var_f18_2;
    f32 var_f2;
    f32 var_f6;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 temp_s4;
    s32 temp_t6;
    s32 temp_t9;
    s32 var_a1;
    s32 var_a2;
    s32 var_v0;
    u16 var_a0;
    u8 temp_fp;
    u8 temp_s6;
    u8 temp_s7;
    u8 var_t0;
    u8 var_t1;
    u8 var_t2;
    void *temp_s3_3;
    void *temp_s5;
    void *temp_s5_2;
    void *temp_v0;
    void *var_v1;

    temp_v0 = (*(s32 *)((char *)(((char *)(arg0) + ((*(s32 *)((char *)(arg0) + 0x1C8)) * 8) + (D_800BE9C0 * 4))) + 0x28C));
    if (temp_v0 != NULL) {
        var_a2 = -1;
        var_a0 = *(&D_800C57A0 + ((*(s32 *)((char *)(arg0) + 0x4)) * 2));
        var_a1 = 0;
        var_v1 = temp_v0;
        if ((s32) var_a0 > 0) {
            var_t2 = sp35;
            var_t1 = sp36;
            var_t0 = sp37;
            do {
                var_a1 += 0x10;
                temp_t6 = (*(s32 *)((char *)(var_v1) + 0x6)) & 0x7F00;
                temp_s3 = temp_t6 >> 8;
                if (temp_t6 != 0) {
                    if (temp_s3 != var_a2) {
                        if (temp_s3 >= 6) {

                        } else {
                            var_a2 = temp_s3;
                            temp_s3_2 = temp_s3 - 1;
                            if (arg2 != 0) {
                                var_v0 = temp_s3_2 * 4;
                                var_f2 = (*(s32 *)((char *)(arg1) + var_v0));
                            } else {
                                var_f2 = *arg1;
                                var_v0 = temp_s3_2 * 4;
                            }
                            temp_s4 = *(&D_80084040 + var_v0);
                            temp_f0 = 1.0f / (f32) (*(&D_80096920 + temp_s3_2) - 1);
                            temp_t9 = (u32) (var_f2 / temp_f0) & 0xFF;
                            var_f18 = (f32) temp_t9;
                            temp_s3_3 = temp_s4 + (temp_t9 * 3);
                            temp_s6 = (*(s32 *)((char *)(temp_s3_3) + 0x0));
                            temp_s5 = temp_s4 + (temp_t9 * 3);
                            temp_s5_2 = (char *)(temp_s5) + 3;
                            if (temp_t9 < 0) {
                                var_f18 += 4294967296.0f;
                            }
                            temp_f12 = (var_f2 - (var_f18 * temp_f0)) / temp_f0;
                            var_f6 = (f32) temp_s6;
                            if ((s32) temp_s6 < 0) {
                                var_f6 += 4294967296.0f;
                            }
                            temp_s7 = (*(s32 *)((char *)(temp_s3_3) + 0x1));
                            var_t0 = (u32) (((f32) ((*(u32 *)((char *)(temp_s5) + 0x3)) - temp_s6) * temp_f12) + var_f6) & 0xFF;
                            var_f10 = (f32) temp_s7;
                            if ((s32) temp_s7 < 0) {
                                var_f10 += 4294967296.0f;
                            }
                            temp_fp = (*(s32 *)((char *)(temp_s3_3) + 0x2));
                            var_t1 = (u32) (((f32) ((*(u32 *)((char *)(temp_s5_2) + 0x1)) - temp_s7) * temp_f12) + var_f10) & 0xFF;
                            var_f18_2 = (f32) temp_fp;
                            if ((s32) temp_fp < 0) {
                                var_f18_2 += 4294967296.0f;
                            }
                            var_t2 = (u32) (((f32) ((*(u32 *)((char *)(temp_s5_2) + 0x2)) - temp_fp) * temp_f12) + var_f18_2) & 0xFF;
                            goto block_19;
                        }
                    } else {
block_19:
                        (*(s32 *)((char *)(var_v1) + 0xC)) = var_t0;
                        (*(s32 *)((char *)(var_v1) + 0xD)) = var_t1;
                        (*(s32 *)((char *)(var_v1) + 0xE)) = var_t2;
                        var_a0 = *(&D_800C57A0 + ((*(s32 *)((char *)(arg0) + 0x4)) * 2));
                    }
                }
                var_v1 = (char *)(var_v1) + 0x10;
            } while (var_a1 < (var_a0 * 0x10));
            sp35 = var_t2;
            sp36 = var_t1;
            sp37 = var_t0;
        }
    }
}
