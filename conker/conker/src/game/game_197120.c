/**
 * Auto-decompiled from asm/197120.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 random_u32();                          /* extern */
void func_1510F800();                                 /* extern */
s32 func_1510F8D8();                /* extern */
void * func_15167AD8();                     /* extern */
void * func_1516F864();                            /* extern */
void * func_1516F94C();                         /* extern */
void * func_151709B4();   /* extern */
void * func_15171200(); /* extern */
void * func_151718F0(); /* extern */
void * func_15171D4C(); /* extern */
void * func_1518CA04();                                /* extern */
extern s32 D_8008CADC;
extern f32 D_800A6CB0;
extern f32 D_800A6CB4;
extern f32 D_800A6CB8;
extern f32 D_800A6CBC;
extern f32 D_800A6CC0;
extern f32 D_800A6CC4;
extern f32 D_800A6CC8;

void func_15169C70(void *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f16;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 var_f4;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 var_v0;
    u8 temp_t1;
    u8 temp_t5;
    u8 temp_v0;
    u8 temp_v0_2;

    temp_f0 = (f32) D_800BE9E4;
    (*(f32 *)((char *)(arg0) + 0x90)) = (f32) ((*(f32 *)((char *)(arg0) + 0x90)) + ((*(f32 *)((char *)(arg0) + 0xA8)) * temp_f0));
    (*(f32 *)((char *)(arg0) + 0x98)) = (f32) ((*(f32 *)((char *)(arg0) + 0x98)) + ((*(f32 *)((char *)(arg0) + 0xB0)) * temp_f0));
    (*(f32 *)((char *)(arg0) + 0x9C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x9C)) + ((*(f32 *)((char *)(arg0) + 0xB4)) * temp_f0));
    (*(f32 *)((char *)(arg0) + 0xA0)) = (f32) ((*(f32 *)((char *)(arg0) + 0xA0)) + ((*(f32 *)((char *)(arg0) + 0xB8)) * temp_f0));
    (*(f32 *)((char *)(arg0) + 0xA4)) = (f32) ((*(f32 *)((char *)(arg0) + 0xA4)) + ((*(f32 *)((char *)(arg0) + 0xBC)) * temp_f0));
    (*(f32 *)((char *)(arg0) + 0xAC)) = (f32) ((*(f32 *)((char *)(arg0) + 0xAC)) + (-0.5f * temp_f0));
    (*(f32 *)((char *)(arg0) + 0x94)) = (f32) ((*(f32 *)((char *)(arg0) + 0x94)) + ((*(f32 *)((char *)(arg0) + 0xAC)) * temp_f0));
    if ((*(s32 *)((char *)(arg0) + 0xE8)) & 1) {
        temp_t1 = (*(s32 *)((char *)(arg0) + 0xE7)) + (D_800BE9E4 * 8);
        (*(s32 *)((char *)(arg0) + 0xE7)) = temp_t1;
        (*(f32 *)((char *)(arg0) + 0xC4)) = (f32) (((func_15048A40(temp_t1 & 0xFF) * D_800A6CB0) + 1.0f) * (*(f32 *)((char *)(arg0) + 0xD4)));
    }
    if ((*(s32 *)((char *)(arg0) + 0xE8)) & 2) {
        temp_f2 = (*(s32 *)((char *)(arg0) + 0xA8));
        temp_f16 = (*(s32 *)((char *)(arg0) + 0xB0));
        (*(f32 *)((char *)(arg0) + 0xA0)) = (f32) (func_150484A0((*(f32 *)((char *)(arg0) + 0xA8)), (*(f32 *)((char *)(arg0) + 0xB0))) * D_800A6CB4);
        (*(f32 *)((char *)(arg0) + 0x9C)) = (f32) (func_150484A0(-(*(f32 *)((char *)(arg0) + 0xAC)), sqrtf((temp_f2 * temp_f2) + (temp_f16 * temp_f16))) * D_800A6CB8);
    }
    func_1510F800(0);
    temp_f2_2 = (f32) (func_1510F8D8((s32) (*(f32 *)((char *)(arg0) + 0x90)), (s32) (*(f32 *)((char *)(arg0) + 0x94)), (s32) (*(f32 *)((char *)(arg0) + 0x98)), 0) + (*(f32 *)((char *)(arg0) + 0xE9)));
    if (((*(s32 *)((char *)(arg0) + 0x94)) < temp_f2_2) && ((*(s32 *)((char *)(arg0) + 0xAC)) < 0.0f)) {
        temp_v0 = (*(s32 *)((char *)(arg0) + 0xEB));
        (*(s32 *)((char *)(arg0) + 0x94)) = temp_f2_2;
        if (temp_v0 == 1) {
            func_15171200(4, 0xB, (*(s32 *)((char *)(arg0) + 0x90)), (*(s32 *)((char *)(arg0) + 0x94)), (*(s32 *)((char *)(arg0) + 0x98)), (*(s32 *)((char *)(arg0) + 0xAC)) * (*(s32 *)((char *)(arg0) + 0xDC)), 0.5f, 1.0f, 60.0f, 2, 0xFF, D_800A6CBC, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
            func_151718F0((*(f32 *)((char *)(arg0) + 0x90)), ((*(f32 *)((char *)(arg0) + 0x94)) - (f32) (*(f32 *)((char *)(arg0) + 0xE9))) + 30.0f, (*(f32 *)((char *)(arg0) + 0x98)), 0x42480000, 0x28, 0.0030517578f, 0, 0x14, (s32) (*(f32 *)((char *)(arg0) + 0xC)), (s32) (*(f32 *)((char *)(arg0) + 0x1)));
            func_151718F0((*(f32 *)((char *)(arg0) + 0x90)), ((*(f32 *)((char *)(arg0) + 0x94)) - (f32) (*(f32 *)((char *)(arg0) + 0xE9))) + 15.0f, (*(f32 *)((char *)(arg0) + 0x98)), 0x41F00000, 0x28, 0.0030517578f, 0, 0xA, (s32) (*(f32 *)((char *)(arg0) + 0xC)), (s32) (*(f32 *)((char *)(arg0) + 0x1)));
            func_1518CA04((*(s32 *)((char *)(arg0) + 0xEA)));
            func_1516972C(arg0);
            return;
        }
        if (temp_v0 == 4) {
            func_15171200(3, 0xB, (*(s32 *)((char *)(arg0) + 0x90)), (*(s32 *)((char *)(arg0) + 0x94)), (*(s32 *)((char *)(arg0) + 0x98)), (*(s32 *)((char *)(arg0) + 0xAC)) * (*(s32 *)((char *)(arg0) + 0xDC)), 0.5f, D_800A6CC0, 40.0f, 2, 0x3C, -0.5f, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
            func_1518CA04((*(s32 *)((char *)(arg0) + 0xEA)));
            func_1516972C(arg0);
            return;
        }
        if (temp_v0 == 3) {
            func_15171200(2, 0xCB, (*(s32 *)((char *)(arg0) + 0x90)), (*(s32 *)((char *)(arg0) + 0x94)), (*(s32 *)((char *)(arg0) + 0x98)), 6.0f, 0.5f, 1.0f, 60.0f, 5, 0x3C, D_800A6CC4, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
            func_151709B4((s32) (*(s32 *)((char *)(arg0) + 0x90)), (s32) ((*(s32 *)((char *)(arg0) + 0x94)) + 10.0f), (s32) (*(s32 *)((char *)(arg0) + 0x98)), 4, (*(s32 *)((char *)(arg0) + 0xAC)) * 200.0f, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
            func_1518CA04((*(s32 *)((char *)(arg0) + 0xEA)));
            func_1516972C(arg0);
            return;
        }
        if (temp_v0 == 6) {
            (*(s32 *)((char *)(arg0) + 0xB0)) = 0.0f;
            (*(s32 *)((char *)(arg0) + 0xAC)) = 0.0f;
            (*(s32 *)((char *)(arg0) + 0xA8)) = 0.0f;
            (*(s32 *)((char *)(arg0) + 0xBC)) = 0.0f;
            (*(s32 *)((char *)(arg0) + 0xB8)) = 0.0f;
            (*(s32 *)((char *)(arg0) + 0xB4)) = 0.0f;
            (*(s32 *)((char *)(arg0) + 0xDC)) = 0.0f;
            (*(s32 *)((char *)(arg0) + 0xEB)) = 0U;
            (*(s32 *)((char *)(arg0) + 0xCC)) = 0x3C;
            return;
        }
        if (temp_v0 == 8) {
            func_1518CA04((*(s32 *)((char *)(arg0) + 0xEA)));
            func_1516972C(arg0);
            return;
        }
        temp_f0_2 = (*(s32 *)((char *)(arg0) + 0xD8));
        (*(f32 *)((char *)(arg0) + 0xA8)) = (f32) ((*(f32 *)((char *)(arg0) + 0xA8)) * temp_f0_2);
        (*(f32 *)((char *)(arg0) + 0xB0)) = (f32) ((*(f32 *)((char *)(arg0) + 0xB0)) * temp_f0_2);
        (*(f32 *)((char *)(arg0) + 0xAC)) = (f32) ((*(f32 *)((char *)(arg0) + 0xAC)) * (*(f32 *)((char *)(arg0) + 0xDC)));
        if ((*(s32 *)((char *)(arg0) + 0xAC)) < 2.0f) {
            (*(s32 *)((char *)(arg0) + 0xA8)) = 0.0f;
            (*(s32 *)((char *)(arg0) + 0xAC)) = 0.0f;
            (*(s32 *)((char *)(arg0) + 0xB0)) = 0.0f;
            (*(s32 *)((char *)(arg0) + 0xB4)) = 0.0f;
            (*(s32 *)((char *)(arg0) + 0xB8)) = 0.0f;
            (*(s32 *)((char *)(arg0) + 0xBC)) = 0.0f;
        } else {
            temp_t5 = (*(s32 *)((char *)(arg0) + 0xE9));
            var_f4 = (f32) temp_t5;
            if ((s32) temp_t5 < 0) {
                var_f4 += 4294967296.0f;
            }
            func_151718F0((*(s32 *)((char *)(arg0) + 0x90)), ((*(s32 *)((char *)(arg0) + 0x94)) - var_f4) + 15.0f, (*(s32 *)((char *)(arg0) + 0x98)), 0x41A00000, 0x32, 0.00045776367f, 0, 4, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
            temp_v0_2 = (*(s32 *)((char *)(arg0) + 0xEB));
            if (temp_v0_2 == 2) {
                if (random_u32() & 0x8000) {
                    (*(f32 *)((char *)(arg0) + 0xB4)) = (f32) (((f32) (random_u32() >> 0x10) * 0.00015258789f) + 40.0f);
                }
            } else if (temp_v0_2 == 5) {
                func_151709B4((s32) (*(s32 *)((char *)(arg0) + 0x90)), (s32) ((*(s32 *)((char *)(arg0) + 0x94)) + 10.0f), (s32) (*(s32 *)((char *)(arg0) + 0x98)), 4, (*(s32 *)((char *)(arg0) + 0xAC)) * 200.0f, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
            }
        }
        temp_f0_3 = (*(s32 *)((char *)(arg0) + 0xE0));
        (*(f32 *)((char *)(arg0) + 0xB4)) = (f32) ((*(f32 *)((char *)(arg0) + 0xB4)) * temp_f0_3);
        (*(f32 *)((char *)(arg0) + 0xBC)) = (f32) ((*(f32 *)((char *)(arg0) + 0xBC)) * temp_f0_3);
        goto block_26;
    }
block_26:
    temp_v0_3 = (*(s32 *)((char *)(arg0) + 0xCC));
    if (temp_v0_3 != 0) {
        var_v0 = temp_v0_3 - D_800BE9E4;
        if (var_v0 <= 0) {
            (*(s32 *)((char *)(arg0) + 0xEC)) = 2;
            var_v0 = 1;
            temp_v1 = (*(s32 *)((char *)(arg0) + 0xE5)) - (D_800BE9E4 * 4);
            if (temp_v1 <= 0) {
                func_1518CA04((*(s32 *)((char *)(arg0) + 0xEA)));
                func_1516972C(arg0);
                return;
            }
            (*(u8 *)((char *)(arg0) + 0xE5)) = (u8) temp_v1;
            goto block_31;
        }
block_31:
        (*(s32 *)((char *)(arg0) + 0xCC)) = var_v0;
    }
}

void func_1516A3F4(void *arg0) {
    s32 sp48;
    u8 sp41;
    s8 sp40;
    s8 sp3E;
    s16 sp3C;
    s16 sp3A;
    s16 sp38;
    s16 sp36;
    s16 sp34;
    s16 sp32;
    s16 sp30;
    s32 sp2C;
    s16 temp_v1;
    s32 temp_t0;
    s32 temp_v0;
    s32 var_v1;
    u8 temp_v0_2;

    var_v1 = (*(s32 *)((char *)(arg0) + 0x14));
    temp_t0 = (*(s32 *)((char *)(arg0) + 0x22)) + (*(s32 *)((char *)(arg0) + 0x2A));
    if (var_v1 >= temp_t0) {
        sp48 = temp_t0;
        func_1510F800(0);
        temp_v0 = func_1510F8D8((s32) (*(s32 *)((char *)(arg0) + 0x20)), (s32) (*(s32 *)((char *)(arg0) + 0x22)), (s32) (*(s32 *)((char *)(arg0) + 0x24)), 0);
        (*(s32 *)((char *)(arg0) + 0x14)) = temp_v0;
        var_v1 = temp_v0;
    }
    if (var_v1 >= temp_t0) {
        (*(s32 *)((char *)(arg0) + 0x38)) = 0;
        if ((temp_t0 - var_v1) < 0x32) {
            sp30 = 0;
            sp32 = 0x100;
            sp2C = D_8008CADC;
            sp34 = (*(s32 *)((char *)(arg0) + 0x20));
            sp36 = (*(s32 *)((char *)(arg0) + 0x14)) + 0xA;
            sp38 = (*(s32 *)((char *)(arg0) + 0x24));
            temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x3B));
            sp3E = 0;
            sp40 = 3;
            temp_v1 = ((s32) (temp_v0_2 << 0xC) / 5100) + 0xCC;
            sp3A = temp_v1;
            sp3C = temp_v1;
            sp41 = temp_v0_2;
            func_15167AD8(&sp2C, (*(s32 *)((char *)(arg0) + 0xC)), (*(s32 *)((char *)(arg0) + 0x1)));
        }
    } else {
        (*(s16 *)((char *)(arg0) + 0x26)) = (s16) (s32) ((f32) (*(s16 *)((char *)(arg0) + 0x26)) * D_800A6CC8);
        (*(s16 *)((char *)(arg0) + 0x28)) = (s16) (s32) ((f32) (*(s16 *)((char *)(arg0) + 0x28)) * D_800A6CC8);
    }
}

void func_1516A538(void *arg0) {
    u32 sp48;
    s32 sp44;

    if ((*(s32 *)((char *)(arg0) + 0x14)) >= 0x300) {
        sp48 = random_u32() % 3U;
        sp44 = (s32) (*(s32 *)((char *)(arg0) + 0x25));
        func_15171D4C((f32) (*(f32 *)((char *)(arg0) + 0x18)), (f32) ((*(f32 *)((char *)(arg0) + 0x1A)) - 0xA), arg0, (f32) (*(f32 *)((char *)(arg0) + 0x1C)), 0x64, 0, sp48 + 0x20, (f32) (random_u32(arg0) % 360U), 0, ((s32) (sp44 * 0x19) / 255) + 0x19, 0, 0x100, 0, (s32) (*(f32 *)((char *)(arg0) + 0xC)), (s32) (*(f32 *)((char *)(arg0) + 0x1)));
    }
}

s32 func_1516A648(void *arg0) {
    s8 temp_v1;
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
        var_v0 -= D_800BE9E4 * 4;
        if ((s32) var_v0 < 0) {
            var_v0 = 0;
        }
        (*(s32 *)((char *)(arg0) + 0x1F)) = var_v0;
    }
    if (((*(s32 *)((char *)(arg0) + 0x24)) == 0) && (var_v0 == 0)) {
        return 1;
    }
    (*(s16 *)((char *)(arg0) + 0x18)) = (s16) ((*(s16 *)((char *)(arg0) + 0x18)) - 0x12C);
    func_1516F864(arg0);
    temp_v1 = func_1510F8D8((s32) (*(s32 *)((char *)(arg0) + 0xE)), (s32) (*(s32 *)((char *)(arg0) + 0x10)), (s32) (*(s32 *)((char *)(arg0) + 0x12)), 0) + 0xA;
    (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) (temp_v1 >> 8);
    (*(s32 *)((char *)(arg0) + 0x2D)) = temp_v1;
    if ((*(s32 *)((char *)(arg0) + 0x10)) < temp_v1) {
        (*(s16 *)((char *)(arg0) + 0x10)) = (s16) temp_v1;
        (*(s16 *)((char *)(arg0) + 0x18)) = (s16) (s32) ((f32) (*(s16 *)((char *)(arg0) + 0x18)) * -0.5f);
        func_1516F94C(arg0, 0xE6);
    }
    return 0;
}
