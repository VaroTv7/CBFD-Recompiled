/**
 * Auto-decompiled from asm/1048D0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */
#include <ultra64.h>

#include "functions.h"
#include "variables.h"

void * func_1001091C();                  /* extern */
void * func_10010FFC();           /* extern */
void *func_15033E84();                        /* extern */
s32 func_15052F9C(); /* extern */
void * func_1505327C();       /* extern */
void * func_150535F4();                            /* extern */
void * func_1505A3A8();              /* extern */
void * func_1505C7D8();                /* extern */
s32 func_1508855C();                  /* extern */
void * func_150885EC();                     /* extern */
s32 func_1508868C();                  /* extern */
s32 func_1510D0EC();                  /* extern */
extern s32 D_80088900;
extern f32 D_800A0AF0;
extern f32 D_800A0AF4;
extern f32 D_800A0AF8;
extern f32 D_800A0AFC;
extern f32 D_800A0B00;
extern f32 D_800A0B04;
extern f32 D_800A0B08;
extern s32 D_800CC39C;
extern s8 D_800CC4B4;
extern u16 D_800D9910;

void func_150D7420(void *arg0, u8 *arg1, s32 arg2) {
    u8 temp_v0;

    if ((arg2 & 0xFF) == 0x36) {
        temp_v0 = *arg1;
        switch (temp_v0) {                          /* irregular */
        case 1:
            (*(s32 *)((char *)(arg0) + 0x28)) = 0xFF;
            (*(s32 *)((char *)(arg0) + 0x29)) = 0;
            (*(s32 *)((char *)(arg0) + 0x58)) = (s32) ((*(s32 *)((char *)(arg0) + 0x58)) | 2);
            (*(s32 *)((char *)(arg0) + 0x2A)) = 0;
            return;
        case 2:
            (*(s32 *)((char *)(arg0) + 0x28)) = 0xFF;
            (*(s32 *)((char *)(arg0) + 0x29)) = 0;
            (*(s32 *)((char *)(arg0) + 0x58)) = (s32) ((*(s32 *)((char *)(arg0) + 0x58)) | 2);
            (*(s32 *)((char *)(arg0) + 0x2A)) = 0;
            return;
        case 3:
            (*(s32 *)((char *)(arg0) + 0x28)) = 0;
            (*(s32 *)((char *)(arg0) + 0x29)) = 0xFF;
            (*(s32 *)((char *)(arg0) + 0x58)) = (s32) ((*(s32 *)((char *)(arg0) + 0x58)) | 2);
            (*(s32 *)((char *)(arg0) + 0x2A)) = 0;
            return;
        default:
        case 0:
            (*(s32 *)((char *)(arg0) + 0x58)) = (s32) ((*(s32 *)((char *)(arg0) + 0x58)) & ~2);
            break;
        }
    }
}

void func_150D74DC(void *arg0, u8 *arg1, s32 arg2) {
    u8 temp_v0;

    if ((arg2 & 0xFF) == 0x36) {
        temp_v0 = *arg1;
        switch (temp_v0) {                          /* irregular */
        case 1:
            (*(s32 *)((char *)(arg0) + 0x58)) = (s32) ((*(s32 *)((char *)(arg0) + 0x58)) & ~2);
            return;
        case 2:
            (*(s32 *)((char *)(arg0) + 0x28)) = 0xFF;
            (*(s32 *)((char *)(arg0) + 0x29)) = 0;
            (*(s32 *)((char *)(arg0) + 0x58)) = (s32) ((*(s32 *)((char *)(arg0) + 0x58)) | 2);
            (*(s32 *)((char *)(arg0) + 0x2A)) = 0;
            return;
        case 3:
            (*(s32 *)((char *)(arg0) + 0x28)) = 0;
            (*(s32 *)((char *)(arg0) + 0x29)) = 0xFF;
            (*(s32 *)((char *)(arg0) + 0x58)) = (s32) ((*(s32 *)((char *)(arg0) + 0x58)) | 2);
            (*(s32 *)((char *)(arg0) + 0x2A)) = 0;
            return;
        default:
        case 0:
            (*(s32 *)((char *)(arg0) + 0x58)) = (s32) ((*(s32 *)((char *)(arg0) + 0x58)) & ~2);
            break;
        }
    }
}

void func_150D758C(void *arg0, u8 *arg1, s32 arg2) {
    u8 temp_v0;

    if ((arg2 & 0xFF) == 0x36) {
        temp_v0 = *arg1;
        switch (temp_v0) {                          /* irregular */
        case 1:
            (*(s32 *)((char *)(arg0) + 0x58)) = (s32) ((*(s32 *)((char *)(arg0) + 0x58)) & ~2);
            return;
        case 2:
            (*(s32 *)((char *)(arg0) + 0x58)) = (s32) ((*(s32 *)((char *)(arg0) + 0x58)) & ~2);
            return;
        case 3:
            (*(s32 *)((char *)(arg0) + 0x28)) = 0;
            (*(s32 *)((char *)(arg0) + 0x29)) = 0xFF;
            (*(s32 *)((char *)(arg0) + 0x58)) = (s32) ((*(s32 *)((char *)(arg0) + 0x58)) | 2);
            (*(s32 *)((char *)(arg0) + 0x2A)) = 0;
            return;
        default:
        case 0:
            (*(s32 *)((char *)(arg0) + 0x58)) = (s32) ((*(s32 *)((char *)(arg0) + 0x58)) & ~2);
            break;
        }
    }
}

void func_150D7630(s32 arg0) {
    if (arg0 == 0) {
        D_800D9910 += D_800BE9E4 << 6;
    }
}

void *func_150D765C(void *arg0) {
    void * sp60;
    s32 sp4C[2];
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    void *var_s3;

    var_s3 = arg0;
    var_s2 = 0;
    (*(s32 *)((char *)&(sp4C[0]) + 0x0)) = (*(s32 *)((char *)&(D_80088900) + 0x0));
    var_s0 = 8;
    (*(s32 *)((char *)&(sp4C[0]) + 0x4)) = (s32) (*(s32 *)((char *)&(D_80088900) + 0x4));
    var_s1 = (s32) D_800D9910 >> 8;
    do {
        if (var_s0 >= 0x18) {
            var_s2 = 1;
        }
        temp_v0 = func_1510D0EC((*(s32 *)((char *)(sp4C[var_s2]) + ((var_s1 % 5) * 4))), &sp60, 3, 0);
        (*(s32 *)((char *)(var_s3) + 0x0)) = (s32) ((var_s0 & 0xFFFF) | 0xDB060000);
        (*(s32 *)((char *)(var_s3) + 0x4)) = temp_v0;
        var_s3 = (char *)(var_s3) + 8;
        var_s0 += 4;
        var_s1 += 0xD;
    } while (var_s0 != 0x20);
    return var_s3;
}

void func_150D7790(void *arg0, s32 arg1) {
    s32 sp48;
    void *sp40;
    s32 sp38;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v1;
    s32 var_t0;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_5;
    void *temp_v0_6;

    var_t0 = 0;
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x31C));
    if ((temp_v0 == NULL) || ((*(s32 *)((char *)(temp_v0) + 0x1AE)) > 0)) {
        switch (arg1) {                             /* irregular */
        default:
            var_t0 = 1;
            if (arg1 != 0x33) {
                return;
            }
        case 50:
            temp_v1 = (var_t0 * 0x1E) + 0x1E;
            sp38 = temp_v1;
            temp_v0_2 = func_1506C460((*(s32 *)((char *)(arg0) + 0x40)), 0x439B0000, 0, 0, temp_v1, 0xD, 0.0f, 1.0f, 0, 1, var_t0 == 0);
            if (temp_v0_2 != NULL) {
                (*(s8 *)((char *)(temp_v0_2) + 0x124)) = (s8) (gCurrentObjectIndex + 1);
            }
            if ((temp_v0_2 != NULL) && (temp_v1 != 0x1E)) {
                (*(s32 *)((char *)(temp_v0_2) + 0x221)) = -1;
                sp40 = temp_v0_2;
                temp_v0_3 = func_1508855C(arg0, temp_v0_2);
                if (temp_v0_3 != -1) {
                    sp48 = temp_v0_3;
                    temp_v0_4 = func_1508868C(temp_v0_2, temp_v0_2);
                    if (temp_v0_4 != -1) {
                        func_150885EC(sp48, temp_v0_4, sp48);
                    }
                }
            }
            temp_v0_5 = (*(s32 *)((char *)(arg0) + 0x31C));
            if (temp_v0_5 != NULL) {
                (*(s8 *)((char *)(temp_v0_5) + 0x1AE)) = (s8) ((*(s8 *)((char *)(temp_v0_5) + 0x1AE)) - 1);
            }
            break;
        case 48:
        case 49:
            if (temp_v0 != NULL) {
                (*(s32 *)((char *)(temp_v0) + 0x12C)) = 0x78;
                temp_v0_6 = (*(s32 *)((char *)(arg0) + 0x31C));
                (*(s8 *)((char *)(temp_v0_6) + 0x1AE)) = (s8) ((*(s8 *)((char *)(temp_v0_6) + 0x1AE)) - 1);
                func_10010154(0x628, arg0, 0x7FFF, 0x1F4, 0x3E8);
                return;
            }
            break;
        }
    }
}

void func_150D7928(void *arg0) {
    f32 sp84;
    u8 sp83;
    f32 sp7C;
    s32 sp74;
    f32 sp58;
    s32 sp54;
    s32 sp48;
    s32 sp40;
    void * *sp3C;
    void * *var_v0_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 var_f0;
    f32 var_f6;
    s16 temp_t1;
    s16 temp_v0_3;
    s32 temp_t7;
    s32 var_a0;
    s32 var_a2;
    u16 temp_t5;
    u16 temp_v0_5;
    u8 temp_t6;
    u8 temp_v0;
    u8 temp_v0_4;
    u8 temp_v1_2;
    u8 var_t0;
    u8 var_v0_3;
    void *temp_a2;
    void *temp_a2_2;
    void *temp_v0_2;
    void *temp_v1;
    void *var_v0;
    void *var_v1;

    sp83 = (*(s32 *)((char *)(arg0) + 0x124));
    sp7C = (*(s32 *)((char *)(arg0) + 0x3C));
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x4));
    sp74 = -1;
    sp40 = (s32) temp_v0;
    if (temp_v0 == 0x48) {
        temp_v0_2 = func_15033E84(arg0);
        if (temp_v0_2 != NULL) {
            sp74 = (s32) (*(s32 *)((char *)(temp_v0_2) + 0x6));
        }
    }
    temp_v0_3 = (*(s32 *)((char *)(arg0) + 0xE4));
    (*(s32 *)((char *)(arg0) + 0xB0)) = 0x19;
    if (temp_v0_3 != 0) {
        (*(s32 *)((char *)(arg0) + 0x90)) = temp_v0_3;
    }
    temp_v0_4 = (*(s32 *)((char *)(arg0) + 0x13C));
    if (temp_v0_4 != 0) {
        temp_a2 = (sp83 * 0x32C) + &gObjects;
        if ((*(s32 *)((char *)((*(s32 *)((char *)(temp_a2) + 0x31C))) + 0x4E)) != 0) {
            (*(s32 *)((char *)(arg0) + 0xE4)) = 0;
            var_v0 = (char *)(arg0) + 0x18E;
            (*(f32 *)((char *)(arg0) + 0x180)) = (f32) (*(f32 *)((char *)(temp_a2) + 0x180));
            var_a0 = 1;
            (*(s32 *)((char *)(arg0) + 0x184)) = (s32) (*(s32 *)((char *)(temp_a2) + 0x184));
            var_v1 = (char *)(temp_a2) + 0x18E;
            (*(s16 *)((char *)(arg0) + 0x18C)) = (s16) (*(s16 *)((char *)(temp_a2) + 0x18C));
            do {
                var_a0 += 4;
                var_v0 = (char *)(var_v0) + 8;
                (*(s16 *)((char *)(var_v0) - 0x8)) = (s16) (*(s16 *)((char *)(var_v1) + 0x0));
                temp_t1 = (*(s32 *)((char *)(var_v1) + 0x2));
                var_v1 = (char *)(var_v1) + 8;
                (*(s32 *)((char *)(var_v0) - 0x6)) = temp_t1;
                (*(s16 *)((char *)(var_v0) - 0x4)) = (s16) (*(s16 *)((char *)(var_v1) - 0x4));
                (*(s16 *)((char *)(var_v0) - 0x2)) = (s16) (*(s16 *)((char *)(var_v1) - 0x2));
            } while (var_a0 != 9);
            (*(s32 *)((char *)(arg0) + 0x24)) = 6.0f;
            sp84 = (*(s32 *)((char *)(temp_a2) + 0x54)) * D_800A0AF0;
            (*(f32 *)((char *)(arg0) + 0x44)) = (f32) (*(f32 *)((char *)(temp_a2) + 0xC4));
            if (sp40 == 0x7F) {
                temp_t7 = (*(s32 *)((char *)(temp_a2) + 0x184)) & ~0x1F;
                (*(s32 *)((char *)(temp_a2) + 0x184)) = temp_t7;
                (*(s32 *)((char *)(temp_a2) + 0x125)) = 0x14;
                (*(s32 *)((char *)(temp_a2) + 0x184)) = (s32) (temp_t7 | 4);
                (*(f32 *)((char *)(arg0) + 0x18)) = (f32) (*(f32 *)((char *)(temp_a2) + 0x18));
                temp_f0 = (*(s32 *)((char *)(arg0) + 0x14));
                temp_f2 = (*(s32 *)((char *)(arg0) + 0x1C));
                (*(f32 *)((char *)(arg0) + 0x14)) = (f32) (temp_f0 + (((*(f32 *)((char *)(temp_a2) + 0x14)) - temp_f0) * 0.5f));
                (*(f32 *)((char *)(arg0) + 0x1C)) = (f32) (temp_f2 + (((*(f32 *)((char *)(temp_a2) + 0x1C)) - temp_f2) * 0.5f));
                (*(s32 *)((char *)(temp_a2) + 0x8A)) = 0xA;
                if ((*(s32 *)((char *)((*(s32 *)((char *)(temp_a2) + 0x31C))) + 0x4F)) == 2) {
                    temp_f0_2 = (*(s32 *)((char *)(temp_a2) + 0x44)) * D_800A0AF4;
                    if (sp7C < temp_f0_2) {
                        sp7C = temp_f0_2;
                    }
                    (*(s32 *)((char *)(temp_a2) + 0xAA)) = 0x46;
                }
            } else {
                (*(s32 *)((char *)(arg0) + 0x20)) = 0.0f;
            }
            temp_v0_5 = (*(s32 *)((char *)(arg0) + 0x21C));
            (*(u16 *)((char *)(arg0) + 0x21C)) = (u16) (temp_v0_5 + ((s16) ((*(u16 *)((char *)(temp_a2) + 0x7A)) - temp_v0_5) / 3));
            (*(s32 *)((char *)(arg0) + 0x7A)) = temp_v0_5;
            (*(s32 *)((char *)(arg0) + 0x76)) = temp_v0_5;
            (*(f32 *)((char *)(arg0) + 0x3C)) = (f32) (*(f32 *)((char *)(temp_a2) + 0x3C));
            if ((*(s32 *)((char *)(arg0) + 0xD0)) != 0) {
                func_1505C7D8(arg0, gCurrentObjectIndex, temp_a2);
            }
            goto block_36;
        }
    }
    (*(u16 *)((char *)(arg0) + 0x21C)) = (u16) (*(u16 *)((char *)(arg0) + 0x7A));
    if (temp_v0_4 != 0) {
        if ((*(s32 *)((char *)(D_800CC3D4) + (sp83 * 0x32C))) != 0) {
            (*(s32 *)((char *)(arg0) + 0xC0)) = 15.0f;
            (*(s32 *)((char *)(arg0) + 0x20)) = 80.0f;
        }
        (*(s32 *)((char *)(arg0) + 0x13C)) = 0U;
    }
    sp83 = gCurrentObjectIndex;
    (*(s32 *)((char *)(arg0) + 0x65)) = 0;
    (*(s16 *)((char *)(arg0) + 0xE4)) = (s16) (*(s16 *)((char *)(arg0) + 0x90));
    func_1505A3A8(0, arg0, 0, 0x3F000000, 1);
    sp58 = (*(s32 *)((char *)(arg0) + 0x3C));
    (*(s32 *)((char *)(arg0) + 0x104)) = 0x1E;
    func_15059140(arg0);
    (*(s32 *)((char *)(arg0) + 0x3C)) = sp58;
    sp84 = ((*(s32 *)((char *)(arg0) + 0xC4)) - (*(s32 *)((char *)(arg0) + 0x44))) * D_800A0AF8;
    var_v0_2 = &gObjects;
    var_t0 = 0;
    if ((*(s32 *)((char *)(arg0) + 0x232)) == 4) {
        if (sp40 == 0x48) {
            D_800CC4B4 = 1;
        }
        if (func_15052F9C(0, arg0, 0x42480000, 0x17, 4, 0, 5, 0, 0, 0, 0) != 0) {
            return;
        }
        goto block_36;
    }
    do {
        if ((*(s32 *)((char *)(var_v0_2) + 0x0)) == 1) {
            temp_v1 = (*(s32 *)((char *)(var_v0_2) + 0x31C));
            if (((*(s32 *)((char *)(temp_v1) + 0x78)) == 0) && ((*(s32 *)((char *)(temp_v1) + 0x11A)) == 0) && ((1 << var_t0) & D_800CC268) && ((*(s32 *)((char *)(var_v0_2) + 0x20)) < 0.0f)) {
                (*(s32 *)((char *)(arg0) + 0x124)) = var_t0;
                var_f0 = 39.0f;
                if (sp40 == 0x48) {
                    (*(s32 *)((char *)(var_v0_2) + 0x104)) = 0;
                    var_f0 = 0.0f;
                }
                sp3C = var_v0_2;
                sp54 = (s32) var_t0;
                func_1505327C(0.0f, arg0, var_f0, 0x40400000, 4, -1);
            }
        }
        var_t0 += 1;
        var_v0_2 = (char *)(var_v0_2) + 0x32C;
    } while (var_t0 != 2);
block_36:
    temp_f2_2 = (*(s32 *)((char *)(arg0) + 0x180));
    (*(s32 *)((char *)(arg0) + 0x125)) = 0xFF;
    (*(f32 *)((char *)(arg0) + 0x28)) = (f32) ((*(f32 *)((char *)(arg0) + 0x18)) - temp_f2_2);
    if (sp40 == 0x48) {
        if (sp74 == 0x7A) {
            temp_f0_3 = temp_f2_2 + 180.0f;
            (*(s32 *)((char *)(arg0) + 0xF8)) = (s32) ((*(s32 *)((char *)(arg0) + 0xF8)) | 0x10000);
            func_15058EA4(arg0, temp_f0_3 + 10.0f, 0x3F99999A, temp_f0_3, D_800A0AFC, 4.0f, -4.0f);
            if ((*(s32 *)((char *)(arg0) + 0x13C)) != 0) {
                *(&D_800CC39C + ((*(s32 *)((char *)(arg0) + 0x124)) * 0x32C)) = 0x1E;
            }
            temp_t5 = (*(s32 *)((char *)(arg0) + 0x7A));
            (*(f32 *)((char *)(arg0) + 0xC4)) = (f32) -(*(f32 *)((char *)(arg0) + 0x20));
            var_f6 = (f32) temp_t5;
            if ((s32) temp_t5 < 0) {
                var_f6 += 4294967296.0f;
            }
            (*(f32 *)((char *)(arg0) + 0x40)) = (f32) (var_f6 * 0.005493164f);
        }
    } else {
        func_1506B100(0, 0x40000000, 0x40800000);
        if ((*(s32 *)((char *)(arg0) + 0x28)) > 75.0f) {
            temp_v1_2 = (*(s32 *)((char *)(arg0) + 0x102));
            var_v0_3 = temp_v1_2;
            if ((s32) temp_v1_2 < 0x1E) {
                temp_t6 = temp_v1_2 + 1;
                (*(s32 *)((char *)(arg0) + 0x102)) = temp_t6;
                var_v0_3 = temp_t6 & 0xFF;
            }
        } else {
            var_v0_3 = (*(s32 *)((char *)(arg0) + 0x102));
            if ((s32) var_v0_3 < 0xA) {
                (*(s32 *)((char *)(arg0) + 0x102)) = 0U;
                var_v0_3 = 0 & 0xFF;
            }
        }
        if (((s32) var_v0_3 >= 0xB) && ((temp_a2_2 = &gObjects + (sp83 * 0x32C), ((*(s32 *)((char *)(temp_a2_2) + 0x28)) == 0.0f)) || ((*(s32 *)((char *)(arg0) + 0xAD)) != 0) || (((*(s32 *)((char *)(arg0) + 0x124)) != 0) && ((*(s32 *)((char *)((*(s32 *)((char *)(temp_a2_2) + 0x31C))) + 0x4F)) == 2)))) {
            if ((*(s32 *)((char *)(arg0) + 0x13C)) != 0) {
                (*(s32 *)((char *)((&gObjects + ((*(s32 *)((char *)(arg0) + 0x124)) * 0x32C))) + 0xCC)) = 0;
                (*(s32 *)((char *)((*(s32 *)((char *)((&gObjects + ((*(s32 *)((char *)(arg0) + 0x124)) * 0x32C))) + 0x31C))) + 0x4E)) = 0;
                (*(s32 *)((char *)((&gObjects + ((*(s32 *)((char *)(arg0) + 0x124)) * 0x32C))) + 0xAD)) = 0;
                (*(s32 *)((char *)((&gObjects + ((*(s32 *)((char *)(arg0) + 0x124)) * 0x32C))) + 0x24)) = 4.0f;
            }
            func_100109D0(0.0f, arg0);
            func_10010FFC(0, 0x51, 0x6D60, 0, 0, arg0);
            (*(s32 *)((char *)(arg0) + 0x1CA)) = 0U;
        }
        temp_f0_4 = (*(s32 *)((char *)(arg0) + 0x150));
        if (temp_f0_4 < 1.0f) {
            (*(f32 *)((char *)(arg0) + 0x150)) = (f32) (temp_f0_4 + D_800A0B00);
        }
        if ((*(s32 *)((char *)(arg0) + 0x28)) == 0.0f) {
            (*(s32 *)((char *)(arg0) + 0xC0)) = 0.0f;
            (*(f32 *)((char *)(arg0) + 0xBC)) = (f32) ((*(f32 *)((char *)(arg0) + 0xBC)) * 0.5f);
        }
        temp_f2_3 = (*(s32 *)((char *)(arg0) + 0xC0));
        if (temp_f2_3 == 0.0f) {
            (*(f32 *)((char *)(arg0) + 0xC4)) = (f32) ((*(f32 *)((char *)(arg0) + 0x44)) + sp84);
        } else {
            (*(f32 *)((char *)(arg0) + 0xC4)) = (f32) ((*(f32 *)((char *)(arg0) + 0xC4)) + temp_f2_3);
            temp_f0_5 = (*(s32 *)((char *)(arg0) + 0xC4));
            if (temp_f0_5 < 0.0f) {
                (*(f32 *)((char *)(arg0) + 0xC4)) = (f32) (temp_f0_5 + 360.0f);
            } else if (temp_f0_5 > 360.0f) {
                (*(f32 *)((char *)(arg0) + 0xC4)) = (f32) (temp_f0_5 - 360.0f);
            }
        }
        if ((*(s32 *)((char *)(arg0) + 0x13C)) != 0) {
            temp_f2_4 = (f32) (s16) (s32) (fabsf((*(f32 *)((char *)(arg0) + 0xC4)) * D_800A0B04) + 44.0f);
            (*(s32 *)((char *)(arg0) + 0xC8)) = temp_f2_4;
            (*(s16 *)((char *)((&gObjects + ((*(s16 *)((char *)(arg0) + 0x124)) * 0x32C))) + 0xCC)) = (s16) (s32) ((f32) (s16) (s32) (temp_f2_4 + 44.0f) * (*(s16 *)((char *)(arg0) + 0x150)));
        } else {
            (*(s32 *)((char *)(arg0) + 0xC8)) = 44.0f;
        }
        if ((D_800A0B08 < sp7C) && ((*(s32 *)((char *)(arg0) + 0x28)) < 10.0f) && ((*(s32 *)((char *)(arg0) + 0x1CA)) != 0) && (D_800C35EA != 1)) {
            var_a2 = (s32) (1000.0f * sp7C);
            if (var_a2 >= 0x4651) {
                var_a2 = 0x4650;
            }
            sp48 = var_a2;
            if (func_100107F8(0.0f, arg0) == 0) {
                func_10010154(0x678, arg0, var_a2, 0x3E8, 0x7D0);
            } else {
                func_1001091C(arg0, var_a2, var_a2);
            }
        } else {
            func_100109D0(0.0f, arg0);
        }
        func_15052490(arg0, (*(s32 *)((char *)(arg0) + 0x76)), sp7C, 0x3F0CCCCD);
    }
    func_150535F4(arg0);
}
