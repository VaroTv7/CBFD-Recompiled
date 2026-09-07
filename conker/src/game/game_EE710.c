/**
 * Auto-decompiled from asm/EE710.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 random_u32();                                /* extern */
f32 random_float();                                /* extern */
void *func_15132A4C();      /* extern */
void * func_15142314();                   /* extern */
void * func_1514C2F0(); /* extern */
void * func_15165F80(); /* extern */
extern f32 D_800A01D0;
extern f32 D_800A01D4;
extern f32 D_800A01D8;
extern f32 D_800A01DC;
extern f32 D_800A01E0;

void func_150C1260(void *arg0, s32 arg1) {
    f32 sp12C;
    s32 sp128;
    f32 sp124;
    s16 sp11C;
    s16 sp11A;
    u8 sp118;
    void *sp114;
    s8 sp112;
    s8 sp110;
    s8 sp10F;
    s8 sp10E;
    s8 sp10D;
    s8 sp10C;
    s8 sp10B;
    s8 sp10A;
    s8 sp109;
    s8 sp108;
    s32 sp104;
    s8 sp100;
    s16 spFE;
    s16 spFC;
    s32 spF8;
    f32 spF4;
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
    f32 sp80;
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f28;
    f32 temp_f2;
    f32 temp_f30;
    s32 temp_s0;
    s32 temp_t6;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s1;
    void *temp_v0;

    f32 sp134;
    temp_t6 = arg1 & 0xFF;
    sp124 = ((*(s32 *)((char *)(arg0) + 0x14C)) + (*(s32 *)((char *)(arg0) + 0x150))) * 0.5f;
    if (arg0 != NULL) {
        temp_v1 = (*(s32 *)((char *)(arg0) + 0x1D4));
        if (temp_v1 != 0) {
            switch (temp_t6) {                      /* irregular */
            case 0:
                sp128 = 0xD;
                break;
            case 1:
                sp128 = 0x11;
                break;
            }
            func_15142314(temp_v1, sp128, &sp12C);
            temp_f0 = sp124 * 80.0f;
            sp80 = temp_f0;
            func_1514C2F0(sp12C, (*(s32 *)((char *)(arg0) + 0x180)), sp134, temp_f0, 0, 0x10, 0x10, 0, 0, temp_f0 * 4.0f, 0, 0xFF);
            func_15165F80(-1, (s32) sp12C, (s32) ((f32) (s32) (*(s32 *)((char *)(arg0) + 0x180)) + 2.0f), (s32) sp134, 0xB, 0x13, 0, 0xFF, 0);
            spFE = 5;
            spF8 = 0x29E8;
            sp100 = 0;
            sp104 = 0;
            sp108 = 0xFF;
            sp109 = 1;
            sp10A = 0;
            sp10B = 0;
            sp10C = 0;
            sp10D = 0;
            sp10E = 0;
            sp10F = 0;
            sp110 = 0;
            sp112 = 1;
            sp114 = arg0;
            spC4 = 1.0f;
            spC8 = 1.0f;
            spCC = 1.0f;
            spAC = D_800A01D0;
            spF0 = 0.0f;
            spF4 = D_800A01D4;
            sp11A = 0x10;
            sp11C = 0xF;
            sp118 = (*(s32 *)((char *)(arg0) + 0x3B));
            temp_v1_2 = (random_u32() & 7) + 5;
            var_s1 = temp_v1_2 - 1;
            if (temp_v1_2 != 0) {
                temp_f30 = D_800A01D8;
                temp_f28 = D_800A01DC;
                do {
                    temp_s0 = random_u32() & 0xFF;
                    temp_f20 = ((random_float() * temp_f28) + temp_f30) * 18.0f * sp124;
                    temp_f22 = func_151423D8((temp_s0 - 0x40) & 0xFF);
                    temp_f24 = func_151423D8(temp_s0 & 0xFF);
                    spFC = (random_u32() & 0x1F) + 0xF;
                    spD0 = (sp80 * temp_f22) + sp12C;
                    spE0 = temp_f20;
                    spD4 = (*(s32 *)((char *)(arg0) + 0x180)) + 2.0f;
                    spD8 = (sp80 * temp_f24) + sp134;
                    spDC = temp_f20 * temp_f22;
                    spE4 = temp_f20 * temp_f24;
                    temp_f2 = ((random_float() * temp_f28) + temp_f30) * sp124 * D_800A01E0;
                    spB0 = temp_f2;
                    spB4 = temp_f2;
                    spA8 = temp_f2;
                    spB8 = random_float() * 360.0f;
                    spBC = random_float() * 360.0f;
                    spC0 = random_float() * 360.0f;
                    spE8 = 25.0f - (random_float() * 50.0f);
                    spEC = 25.0f - (random_float() * 50.0f);
                    temp_v0 = func_15132A4C(&spA8, 3, 0xFF, 4, 0xFF, 0);
                    if (temp_v0 != NULL) {
                        (*(f32 *)((char *)(temp_v0) + 0x170)) = (f32) (*(f32 *)((char *)(arg0) + 0x180));
                    }
                    var_s1 -= 1;
                } while (var_s1 != 0);
            }
        }
    }
}
