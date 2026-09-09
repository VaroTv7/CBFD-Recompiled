#include <ultra64.h>

#include "functions.h"
#include "variables.h"

f32 random_float();                                /* extern */

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1506AD30.s")

void func_1506AF74(void) {
    if ((gCurrentObject->unk100 & 8) != 0) {
        gCurrentObject->unk100 |= 4;
    }
    gCurrentObject->unk100 &= 0xF7;
    func_1505E650(gCurrentObject, 0x38, 0x3F800000, 0x40A00000, 0x00000000, 0x00000000, 0);
}

void func_1506AFE0(void) {
    func_1505E650(gCurrentObject, 0x48, 0x3F800000, 0x40A00000, 0x00000000, 0x00000000, 0);
}

void func_1506B020(void) {
    gCurrentObject->unk1CB = (u8)1;
    func_1505E650(gCurrentObject, 0x39, 0x3F800000, 0x40A00000, 0x00000000, 0x00000000, 0);
}

void func_1506B070(void) {
}

void func_1506B078(void) {
    f32 tmp = (gCurrentObject->y_position - (gCurrentObject->unk118 - 150.0f)) * D_80099C34;

    if (tmp < 0.0f) {
        tmp = 1.0f;
    } else {
        tmp +=  1.0f;
    }
    func_1506B100(0xD1, tmp, 4.0f);
}

// triggered when entering water?
void func_1506B100(s32 arg0, f32 arg1, f32 arg2) {
    func_1505E650(gCurrentObject, arg0, *(s32 *) &arg1, *(s32 *) &arg2, 0x00000000, 0x00000000, 0);
}

void func_1506B14C(void) {
    func_1505E650(gCurrentObject, (u16) (gCurrentObject->unk84.uh + 1), *(s32 *) &gCurrentObject->animation_speed, 0x40400000, 0x00000000, 0x00000000, 0);
}

void func_1506B198(void) {
    func_1505E650(gCurrentObject, (u16) (gCurrentObject->unk84.uh + 1), *(s32 *) &gCurrentObject->animation_speed, 0x40400000, 0x00000000, 0x00000000, 1);
}

void func_1506B1E8(void) {
    func_1505E650(gCurrentObject, 0x3C, 0x3F800000, 0x40400000, 0x00000000, 0x00000000, 0);
}

void func_1506B228(void) {
    func_1505E650(gCurrentObject, 0x54, 0x3F800000, 0x40400000, 0x00000000, 0x00000000, 0);
}

void func_1506B268(void) {
    gCurrentObject->unk83 = 0;
    gCurrentObject->disable_run = 0;
    func_1505E650(gCurrentObject, 0xF, 0x3F800000, 0x40C00000, 0x00000000, 0x00000000, 0);
}

void func_1506B2BC(void) {
    struct127 *temp_v0 = func_150721E8(gCurrentObject);
    if ((temp_v0 != 0) && (((((s32)temp_v0 - (s32)&gObjects) / 0x32C) + 1) == gObjects[0].unk274)) {
        gCurrentObject->unk218 = 0;
        gCurrentObject->unk232 = (u8)4;
    }
}

void func_1506B328(void) {
    func_1505E650(gCurrentObject, 0x3E, 0x3F800000, 0x40A00000, 0x00000000, 0x00000000, 0);
}

void func_1506B368(void) {
}

void func_1506B370(void) {
    // return index of gCurrentObject in structs array
    func_1507D4F8(((s32)gCurrentObject - (s32)gObjects) / (s32)sizeof(struct127));
}

void func_1506B3B0(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1506B3B8.s")
// NON-MATCHING: 5% there...
// void func_1506B3B8(void) {
//     u8 sp19;
//     s16 temp_t0;
//     s32 temp_a3;
//     s32 temp_v0;
//     s32 temp_v1;
//     struct127 *temp_a1;
//     struct127 *temp_a1_2;
//     s32 phi_a2;
//     s32 phi_a0;
//     u8 phi_a0_2;
//
//     temp_a1 = gCurrentObject;
//     sp19 = 0;
//     temp_a1_2 = gCurrentObject;
//     temp_t0 = (temp_a1_2->unk7A + (temp_a1_2->unk1FD << 8)) - func_1505A630(gObjects[0].x_position - temp_a1->x_position, temp_a1->z_position - gObjects[0].z_position, temp_a1);
//     temp_v1 = (s32) temp_t0 >> 8;
//     temp_a3 = temp_v1 & 0xFF;
//     phi_a2 = temp_v1 & 0xFF;
//     if ((temp_a3 & 0x80) != 0) {
//         phi_a2 = -temp_a3 & 0xFF;
//     }
//     temp_v0 = phi_a2;
//     if (phi_a2 < (s32) D_80099A3C) {
//         phi_a0 = 1;
//     } else {
//         if ((s32) D_80099A43 < temp_v0) {
//             phi_a0_2 = (u8)5U;
//         } else {
//             phi_a0_2 = sp19;
//             if ((s32) D_80099A3E < temp_v0) {
//                 phi_a0_2 = (u8)2U;
//             }
//         }
//         if ((s32) temp_t0 < 0) {
//             phi_a0 = (phi_a0_2 + 4) & 0xFF;
//         } else {
//             phi_a0 = (phi_a0_2 + 3) & 0xFF;
//         }
//     }
//     temp_a1_2->unk138 = (u8)0;
//     gCurrentObject->unk244 = (s16) D_80099A3C[phi_a0]; // + 0x800A0000)->unk-65C4;
//     gCurrentObject->unk21C = (u16)0x4E20;
// }

void func_1506B4EC(void) {
    func_1506B3B8();
}

void func_1506B50C(void) {
    gCurrentObject->unk21C = 0;
}

void func_1506B520(void) {
    s32 tmp;

    if (gCurrentObject->health != 0) {
        if ((gCurrentObject->unk31C != 0) && (gCurrentObject->unk31C->unk78 == 0x25)) {
            tmp = 427;
        } else {
            tmp = 240;
        }
        func_1505E650(gCurrentObject, tmp, 0x3FC00000, 0x40400000, 0x00000000, 0x00000000, 0);
    } else {
        func_1507CD64(gCurrentObject, 1);
    }
}

void func_1506B5A4(void) {
}

void func_1506B5AC(void) {
}

void func_1506B5B4(void) {
    gCurrentObject->unk1CB = (u8)1;
}

void func_1506B5CC(void) {
    gCurrentObject->unk1CB = (u8)1;
}

void func_1506B5E4(void) {
    func_1506160C(gCurrentObject, 2, 7, 8, 0);
    gCurrentObject->animation_speed = 0.0f;
    gCurrentObject->unk2D0->unk10 = 0.0f;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1506B634.s")
// NON-MATCHING: miles away
// void func_1506B634(u8 arg0) {
//     s32 temp_a0;
//     u32 temp_hi;
//     struct126 *temp_a1;
//     s32 phi_a0;
//     s32 phi_a0_2;
//
//     temp_hi = random_u32() % (u32) arg0;
//     temp_a0 = temp_hi & 0xFF;
//     temp_a1 = gCurrentObject->unk31C;
//     if (temp_a1->unk16 != 0) {
//         phi_a0 = temp_a0;
//         if (D_800BE9F0 == 0x29) {
//             phi_a0 = temp_a0;
//             if ((temp_hi & 0xFF) == 7) {
//                 phi_a0 = 0;
//             }
//         }
//         temp_a1->unkE = (s16) D_80099ABC[phi_a0]; // + 0x800A0000)->unk-6544;
//         phi_a0_2 = phi_a0;
//     } else {
//         temp_a1->unkE = (s16) D_80099AB4[(temp_hi & 0xFF)]; // + 0x800A0000)->unk-654C;
//         phi_a0_2 = temp_a0;
//     }
//     if (gCurrentObject->unk31C->unkE == 0xA7) {
//         D_800D1580 = 0xFF020144; // 4278321476
//         gCurrentObject->unk31C->unkC = (random_u32(phi_a0_2, temp_a1, &gCurrentObject) % 3U) + 2;
//         func_1506E8D8();
//         gCurrentObject->xz_velocity = (f32) (gCurrentObject->xz_velocity * D_80099C38);
//     }
// }

void func_1506B740(void) {
    u8 res = random_u32() & 0xFF;

    if ((D_80099C3C != gCurrentObject->unk118) && (gCurrentObject->y_position < gCurrentObject->unk118)) {
        gCurrentObject->unk31C->unkE = 0x2D0;
    } else {
        if (gCurrentObject->unk84.uh == 0xA7) {
            if (gCurrentObject->unk31C->unkC == 0) {
                res = 0;
            } else {
                gCurrentObject->unk31C->unkC--;
                res = 0xFF;
            }
        }
        if (res < 0x80) {
            func_1506B634(8);
        }
    }
}

void func_1506B7F4(void) {
    gCurrentObject->disable_run = 0;
    gCurrentObject->unk83 = 0;
    func_1506B634(2);
}

void func_1506B82C(void) {
    gCurrentObject->disable_run = 0;
    gCurrentObject->unk83 = 0;
    func_1507F640();
}

void func_1506B860(void) {
    func_1506B100(181, 0.6299999952316284f, 5.0f);
}

void func_1506B88C(void) {
    func_1506B100(182, 1.0f, 4.0f);
}

void func_1506B8B4(void) {
    gCurrentObject->unk31C->unk78 = (u8)0;
    gCurrentObject->disable_run = (u8)0;
    gCurrentObject->unk83 = (u8)0;
    func_1507F640();
}

void func_1506B8F4(void) {
    func_1506B100(222, 0.75f, 4.0f);
}

void func_1506B91C(void) {
    func_1506B100(191, 1.0f, 4.0f);
}

void func_1506B944(void) {
    gCurrentObject->disable_run = (u8)0;
    gCurrentObject->unk83 = (u8)0;
    func_1506B100(0xC5, 1.0f, 4.0f);
}

void func_1506B984(void) {
    func_1506B100(0xAF, 1.0f, 4.0f);
}

void func_1506B9AC(void) {
    gCurrentObject->unk244 = (u16)0;
}

void func_1506B9C0(void) {
    struct126 *temp_a0;

    D_800BE720[gCurrentObjectIndex] |= 0x4000;
    temp_a0 = gCurrentObject->unk31C;
    if (temp_a0 != 0) {
        temp_a0->unk78 = 0;
        D_800D2E60[D_800D1940 >> 3] |=  (1 << (D_800D1940 & 7));
    }
    func_1507F640(temp_a0);
}

void func_1506BA4C(s32 arg0, s32 arg1) {
    if (D_800D1580 == 0) {
        func_100109D0(gCurrentObject);
    } else {
        if (gCurrentObject->camera == 0) {
            func_10010154(D_800D1580, gCurrentObject, 28000, arg0, arg1);
        } else {
            func_10010154(D_800D1580, gCurrentObject, 24000, 500, 2500);
        }
    }
}

void func_1506BAD8(s32 arg0, s32 arg1) {
    if (D_800D1580 == 0) {
        func_10010A3C(gCurrentObject);
    } else {
        if (gCurrentObject->camera == 0) {
            func_10010344(D_800D1580, gCurrentObject, 28000, arg0, arg1);
        } else {
            func_10010344(D_800D1580, gCurrentObject, 24000, 500, 2500);
        }
    }
}

void func_1506BB64(s16 arg0, s32 arg1) {
    func_10012718(D_800D1582, gCurrentObject, 28000, arg0, arg1);
}

void func_1506BBA8(s32 arg0, s32 arg1) {
    if (gCurrentObject->camera == 0) {
        func_10010154(D_800D1582, gCurrentObject, 14000, arg0, arg1);
    } else {
        func_10010154(D_800D1582, gCurrentObject, 12000, 500, 2500);
    }
}

void func_1506BC24(s32 arg0, s32 arg1) {
    if (gCurrentObject->camera == 0) {
        func_10010344(D_800D1582, gCurrentObject, 0x36B0, arg0, arg1);
    } else {
        func_10010344(D_800D1582, gCurrentObject, 0x2EE0, 0x1F4, 0x9C4);
    }
}

void func_1506BCA0(void) {
    gCurrentObject->y_velocity = D_800D1580;
}

// ???
#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1506BCC8.s")

void func_1506BDE8(void) {
    if (gCurrentObject->y_position < D_80099C40) {
        gCurrentObject->y_velocity = (f32) D_800D1580;
    }
}

void func_1506BE2C(void) {
    gCurrentObject->gravity = D_800D1580;
}

void func_1506BE54(void) {
    gCurrentObject->gravity = D_800D1580 * D_80099C44;
}

void func_1506BE84(void) {
    gCurrentObject->disable_run = 0;
}

void func_1506BE98(void) {
    gCurrentObject->target_speed = D_800D1580;
}

void func_1506BEC0(void) {
    gCurrentObject->disable_run = D_800D1580;
}

void func_1506BEDC(void) {
    gCurrentObject->unkD0 = D_800D1580;
    gCurrentObject->unk114 = (f32) ((s32) D_800D1580 >> 8);
}

void func_1506BF1C(void) {
    if (gCurrentObject->unk118 <= gCurrentObject->y_position) {
        func_1506BF5C();
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1506BF5C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1506C32C.s")

void func_1506C418(void) {
    func_10010A3C(gCurrentObject);
}

void func_1506C43C(void) {
    func_100109D0(gCurrentObject);
}

// requires jump table
#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1506C460.s")
// requires jump table
#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1506CE6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1506D2E8.s")
// NON-MATCHING: plenty to figure out here
// void func_1506D2E8(void) {
//     f32 sp40;
//     f32 sp3C;
//     f32 sp38;
//     f32 sp2C;
//     u16 temp_v0_2;
//     struct127 *temp_s0;
//     f32 phi_f0;
//
//     temp_s0 = func_1505EEF4(func_15083E0C(D_800D1580 & 0xFF));
//     if (temp_s0 != NULL) {
//         sp2C = 0.0f;
//         func_151A3390(temp_s0, 0xFF);
//         phi_f0 = 0.0f;
//         if ((D_800D1580 & 0xFF00) != 0) {
//             phi_f0 = gCurrentObject->camera->unk780 - 15.0f;
//         }
//         temp_v0_2 = gCurrentObject->unk7A;
//         temp_s0->unk78 = temp_v0_2;
//         temp_s0->unk7A = temp_v0_2;
//         temp_s0->unk76 = temp_v0_2;
//         func_1505A184(temp_v0_2, 5000.0f, phi_f0, &sp40, &sp3C, &sp38);
//         D_800D2104[temp_s0->unk13F]->unk8 = (s16) (s32) (gCurrentObject->x_position + sp40);
//         D_800D2104[temp_s0->unk13F]->unkC = (s16) (s32) (gCurrentObject->z_position + sp3C);
//         D_800D2104[temp_s0->unk13F]->unkA = (s16) (s32) (gCurrentObject->y_position + sp38);
//         temp_s0->unk65 = (u8)0;
//         temp_s0->unk218 = 0;
//         if ((D_800D1580 & 0xFF00) != 0) {
//             temp_s0->unk232 = (u8)4;
//             temp_s0->unk14C = 0.25f;
//             temp_s0->unk150 = 0.25f;
//             temp_s0->y_position = (f32) (gCurrentObject->y_position + 70.0f);
//         } else {
//             temp_s0->unk232 = (u8)2;
//             temp_s0->xz_velocity = -15.0f;
//             temp_s0->y_velocity = 34.0f;
//             temp_s0->unk14C = 0.5f;
//             temp_s0->unk150 = 0.5f;
//             temp_s0->gravity = (f32) D_80099D44;
//         }
//     }
// }

void func_1506D4F4(void) {
    func_1505E650(gCurrentObject, gCurrentObject->unk84.uh, 0x3C23D70A, 0x00000000, 0x00000000, 0x00000000, 0);
}

void func_1506D538(void) {
    if (D_800C35EA != 1) {
        func_1507D4F8(gCurrentObjectIndex);
    }
}

void func_1506D570(void) {
    gCurrentObject->unk6E = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1506D584.s")
// ???
#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1506D6B4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1506D74C.s")

void func_1506D898(void) {
    gCurrentObject->y_position -= 80.0f;
    func_1505E650(gCurrentObject, 663, 0x3F800000, 0x00000000, 0x00000000, 0x00000000, 0);
    gCurrentObject->unk100 &= 0xFFDF;
    gCurrentObject->unk83 = 0;
    gCurrentObject->disable_run = 0;
    gCurrentObject->unk31C->unk97 = 0;
    gCurrentObject->unk31C->unk44 = 12;
}

void func_1506D934(void) {
    gCurrentObject->unk103 = D_800D1580;
}

void func_1506D950(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1506D958.s")

void func_1506DA78(void) {
    gCurrentObject->immune = D_800D1580;
}

void func_1506DA94(void) {
    if (D_800D1580 != 0) {
        if ((gCurrentObject->unk44 > 20.0f) && (gCurrentObject->xz_velocity > 20.0f)) {
            gCurrentObject->unk83 = (u8)0;
        }
    }
    func_15174690(gCurrentObjectIndex, 0, 24, 0, 409, 4, 170, 0xFF, 0);
}

void func_1506DB30(void) {
    D_800D1890 = (s8) D_800D1580;
    func_15076760();
}

void func_1506DB5C(void) {
    gCurrentObject->xz_velocity = (f32) D_800D1580;
}

void func_1506DB84(void) {
    gCurrentObject->unk239 = (s8) D_800D1580;
}

void func_1506DBA0(void) {
    gCurrentObject->unk1E5 = D_800D1580 & 0xff;
    gCurrentObject->unk1E6 = (D_800D1580 >> 8) & 0xff;
}

void func_1506DBD4(void) {
    struct127 *temp_v0 = func_15072208(gCurrentObject, 0);
    if (temp_v0 != NULL) {
        func_15054A5C(temp_v0, gCurrentObject);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1506DC10.s")

void func_1506DCA4(void) {
    gCurrentObject->unk2E8 = D_800D1580;
}

void func_1506DCC0(void) {
    gCurrentObject->unk2EC = (s32) D_800D1580;
}

void func_1506DCDC(void) {
    gCurrentObject->health = (s8) D_800D1580;
}

void func_1506DCF8(void) {
}

void func_1506DD00(void) {
    struct127 *temp_v1;

    if (D_800D1580 == 0) {
        temp_v1 = gCurrentObject;
        temp_v1->unkF8 = (s32) temp_v1->unk144->unk18;
    } else {
        temp_v1 = gCurrentObject;
        temp_v1->unkF8 |= D_800D1580;
    }
}

void func_1506DD44(void) {
    gCurrentObject->unkF8 &= ~D_800D1580;
}

void func_1506DD6C(void) {
    if (gCurrentObject->unk31C != 0) {
        gCurrentObject->unk31C->matrix_physics = D_800D1580 & 0x7F;
    }
    if (D_800D1580 == 0) {
        gCurrentObject->unk76 = gCurrentObject->unk7A;
    }
}

void func_1506DDB8(void) {
}

void func_1506DDC0(void) {
    if (func_15178E50(D_800BE9F0) != 0) {
        func_1516EED4(gCurrentObjectIndex, D_800D1580, 0xFF, 0);
    }
}

void func_1506DE04(void) {
    s32 i;
    for(i = 0; i < 2; i++) {
        func_15174690(gCurrentObjectIndex, 10, 18, 12, 0x199, 4, 0xAA, 0xFF, 0);
    }
}

// jump table
#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1506DE84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1506E0EC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1506E2CC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1506E46C.s")

void func_1506E5FC(void) {
    if (func_1506E46C(gCurrentObject, &D_800D1580, 0) != 0) {
        func_1506BA4C(300, 1800);
    }
}

void func_1506E63C(void) {
    if (func_1506E46C(gCurrentObject, &D_800D1580, 0) != 0) {
        func_1506BA4C(100, 800);
    }
}

void func_1506E67C(void) {
    if (func_1506E46C(gCurrentObject, &D_800D1580, 0) != 0) {
        func_1506BA4C(190, 1300);
    }
}

void func_1506E6BC(void) {
    if (func_1506E46C(gCurrentObject, &D_800D1580, 0) != 0) {
        func_1506BA4C(300, 3000);
    }
}

void func_1506E6FC(void) {
    if (func_1506E46C(gCurrentObject, &D_800D1580, 0) != 0) {
        func_1506BA4C(700, 4000);
    }
}

void func_1506E73C(void) {
    if (func_1506E46C(gCurrentObject, &D_800D1580, 0) != 0) {
        func_1506BA4C(3000, 8000);
    }
}

void func_1506E77C(void) {
    if (func_1506E46C(gCurrentObject, &D_800D1580, 0) != 0) {
        func_1506BBA8(300, 1800);
    }
}

void func_1506E7BC(void) {
    if (func_1506E46C(gCurrentObject, &D_800D1580, 0) != 0) {
        func_1506BBA8(300, 3000);
    }
}

void func_1506E7FC(void) {
    if (gCurrentObject->unk28 == 0.0f) {
        if (gCurrentObject->unk107 == 0) {
            func_1506E5FC();
        }
    }
}

void func_1506E848(void) {
    if ((func_1506E46C(gCurrentObject, &D_800D1580, 0) != 0) && (func_1000F4D8((u16)D_800D1582) == 0)) {
        func_1506BA4C(0x50, 800);
    }
}

void func_1506E898(void) {
    if (func_1506E46C(gCurrentObject, &D_800D1580, 2) != 0) {
        func_1506BB64(300, 1800);
    }
}

void func_1506E8D8(void) {
    if (func_1506E46C(gCurrentObject, &D_800D1580, 1) != 0) {
        func_1506BAD8(300, 1800);
    }
}

void func_1506E918(void) {
    if (func_1506E46C(gCurrentObject, &D_800D1580, 1) != 0) {
        func_1506BAD8(100, 800);
    }
}

void func_1506E958(void) {
    if (func_1506E46C(gCurrentObject, &D_800D1580, 1) != 0) {
        func_1506BAD8(190, 1300);
    }
}

void func_1506E998(void) {
    if (func_1506E46C(gCurrentObject, &D_800D1580, 1) != 0) {
        func_1506BAD8(300, 3000);
    }
}

void func_1506E9D8(void) {
    if (func_1506E46C(gCurrentObject, &D_800D1580, 1) != 0) {
        func_1506BAD8(700, 4000);
    }
}

void func_1506EA18(void) {
    if (func_1506E46C(gCurrentObject, &D_800D1580, 1) != 0) {
        func_1506BAD8(3000, 8000);
    }
}

void func_1506EA58(void) {
    if (func_1506E46C(gCurrentObject, &D_800D1580, 1) != 0) {
        func_1506BC24(300, 3000);
    }
}

void func_1506EA98(void) {
    u8 temp_t6;
    struct127 *temp_a1;

    temp_t6 = (gCurrentObject->unk13C - 100);
    if (gCurrentObject->unk13C != 0) {
        temp_a1 = &gObjects[temp_t6];
        if (gObjects[temp_t6].unk13D >= 100) {
            gObjects[temp_t6].unk13D = (u8)0U;
            gObjects[temp_t6].xz_velocity = 18.0f;
            gObjects[temp_t6].y_velocity = 40.0f;
            gObjects[temp_t6].gravity = 6.0f;
            gObjects[temp_t6].unk76 = (u16) gCurrentObject->unk7A;
            gObjects[temp_t6].unk65 = (u8)0;
            if (gObjects[temp_t6].id  == 0x20) {
                gObjects[temp_t6].unkF8 |= 0x200;
                gObjects[temp_t6].y_velocity = 0.0f;
                gObjects[temp_t6].gravity = 0.0f;
                gObjects[temp_t6].xz_velocity = 0.0f;
            }
            gObjects[temp_t6].stunned = (u8)0xFE;
            gObjects[temp_t6].unk105 = (u8)0;
            gObjects[temp_t6].unk106 = func_1505E7CC(0xC, temp_a1); //, temp_t6);
            gObjects[temp_t6].unk84.uh = (u16)0xFFFF;
            gObjects[temp_t6].unk1CC = (f32) D_80099DA0;
            func_1505E874(temp_t6, temp_a1);
            gObjects[temp_t6].unk25C |= 0x40;
        }
        gCurrentObject->unk13C = (u8)0;
    }
}

void func_1506EBC0(void) {
    u8 temp_v0 = (u8)(gCurrentObject->unk13C - 100);

    if (gCurrentObject->unk13C) {
        if ((s32) gObjects[temp_v0].unk13D >= 0x64) {
            gObjects[temp_v0].unk65 = 0;
            gObjects[temp_v0].unk13D = (u8)0U;
            gObjects[temp_v0].xz_velocity = 0.0f;
            gObjects[temp_v0].y_velocity = 0.0f;
            gObjects[temp_v0].gravity = 6.0f;
            gObjects[temp_v0].unk1CC = D_80099DA4; // 1000000.0
        }
        gCurrentObject->unk13C = 0U;
    }
}

void func_1506EC50(void) {
    if (D_80099DA8 < gCurrentObject->unk28) {
        if (((D_800D1580 & 0x8000) == 0) || (D_800CC2E8[0] < gCurrentObject->y_position)) {
            D_800D1878 = D_800D1580 & 0xFF;
            D_800D1880 = 0;
            gCurrentObject->unk138 -= 1;
        }
    }
}

void func_1506ECD0(void) {
    gCurrentObject->unk2D0->unk4 |= 0x8000;
}

void func_1506ECF0(void) {
    gCurrentObject->unk3A = (s8) D_800D1580;
}

void func_1506ED0C(void) {
    gCurrentObject->unk83 = (s8) D_800D1580;
    gCurrentObject->unk100 |= 0x10;
    gCurrentObject->unk31C->unk31 = (u8)1;
}

void func_1506ED4C(void) {
    gCurrentObject->unk100 = (s8) D_800D1580;
}

void func_1506ED68(void) {
    gCurrentObject->unkA9 = (u8)5;
    gCurrentObject->unk31C->unk31 = (u8)0;
}

void func_1506ED90(void) {
    gCurrentObject->unk21C = (s16) D_800D1580;
}

void func_1506EDAC(void) {
    gCurrentObject->unkF4 = (s32) D_800D1580;
}

void func_1506EDC8(void) {
    gCurrentObject->unkF4 &= ~D_800D1580;
}

void func_1506EDF0(void) {
    gCurrentObject->unkF4 |= D_800D1580;
}

void func_1506EE14(void) {
    gCurrentObject->unk25C |= D_800D1580;
}

void func_1506EE38(void) {
    gCurrentObject->unk25C &= ~D_800D1580;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1506EE60.s")
// NON-MATCHING: same issue as earlier
// void func_1506EE60(void) {
//     s32 temp_a1;
//     s32 temp_v0;
//
//     temp_v0 = D_800D1580;
//     temp_a1 = temp_v0 & 0xFFFF;
//     if (temp_v0 != 0) {
//         func_15188810(gCurrentObject.unk0, temp_a1, temp_v0 >> 0x10);
//         return;
//     }
//     func_15188A9C(gCurrentObject.unk154C, temp_a1);
// }

void func_1506EEAC(void) {
    func_151898C0(gCurrentObject, D_800D1580);
}

void func_1506EED8(void) {
    gCurrentObject->unk24E = (s8) D_800D1580;
}

void func_1506EEF4(void) {
    gCurrentObject->unk276 = (D_800D1580 >> 16) & 0xFFFF;
    gCurrentObject->unk278 = (D_800D1580 >> 24) & 0xFF;
    gCurrentObject->unk282 = D_800D1580 & 0xFFFF;
    gCurrentObject->unk284 = 0;
    gCurrentObject->unk285 = 0;
    gCurrentObject->unk286 = 0;
    gCurrentObject->unk287 = 0;
}

// TBD whats goins on here
#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1506EF5C.s")

void func_1506EFB4(void) {
    gCurrentObject->unk282 = (u16)0;
}

void func_1506EFC8(s32 arg0) {
    if (gCurrentObject->id != 0x8C) {
        func_150BB760(gCurrentObject);
    }
}

void func_1506F004(s32 arg0) {
    func_150BCBBC(gCurrentObject);
}

void func_1506F02C(s32 arg0) {
    func_150BA4C0(gCurrentObject, 0xFF, 0);
}

void func_1506F05C(s32 arg0) {
    func_151925C4(gCurrentObject, 0x32, 0xFF, 1);
}

void func_1506F090(s32 arg0) {
    func_151925C4(gCurrentObject, -1, 0xFF, 1);
}

void func_1506F0C4(s32 arg0) {
    func_150C1260(gCurrentObject, 0);
}

void func_1506F0F0(s32 arg0) {
    func_150C1260(gCurrentObject, 1);
}

void func_1506F11C(s32 arg0) {
    func_150BABE0(gCurrentObject, 0, 0xFF);
}

void func_1506F14C(s32 arg0) {
    func_150BABE0(gCurrentObject, 1, 0xFF);
}

void func_1506F17C(s32 arg0) {
    func_150AEEB0(gCurrentObject, 0xFF);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1506F1A8.s")

void func_1506F524(s32 arg0) {
    func_15197A7C(gCurrentObject);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1506F54C.s")

void func_1506F8C0(s32 arg0) {
    func_1519EF70(gCurrentObject, 0, 0);
}

void func_1506F8F0(s32 arg0) {
    struct127* a0;
    func_150E2EA4(a0 = gCurrentObject, a0->unique_id, 0x14, -1, 482.0f, -127.0f, -45.0f, D_80099E98, -211.0f, -114.0f, 3, 3, 5, 20.0f, (random_float() * 10.0f) + 40.0f, 0, 0.0f);
}

void func_1506F9C0(s32 arg0) {
    struct127* a0;
    func_150E2EA4(a0 = gCurrentObject, a0->unique_id, 0x14, -1, 241.0f, -127.0f, -45.0f, 418.0f, -211.0f, -114.0f, 3, 3, 5, 20.0f, (random_float() * 10.0f) + 40.0f, 0, 0.0f);
}

void func_1506FA90(s32 arg0) {
    struct127* a0;
    func_150E2EA4(a0 = gCurrentObject, a0->unique_id, 0x1A, -1, -181.0f, -218.0f, -1.0f, D_80099E9C, -584.0f, -2.0f, 3, 3, 5, 20.0f, (random_float() * 10.0f) + 40.0f, 0, 0.0f);
}

void func_1506FB60(s32 arg0) {
    if (func_151044F4() != 0) {
        func_151C6A28(gCurrentObject, (arg0 - 0x13) & 0xFF, 0xFF, 0);
    } else {
        func_151C62D0(gCurrentObject, (arg0 - 0x13) & 0xFF, 0, 0, -1, 0xFF, 0);
    }
}

void func_1506FBE8(s32 arg0) {
    func_151A0A10(gCurrentObject, 0x46, 0xFF, 0);
}

void func_1506FC1C(s32 arg0) {
    func_151A0A10(gCurrentObject, 0x28, 0xFF, 0);
}

void func_1506FC50(s32 arg0) {
    func_1519E688();
}

void func_1506FC74(s32 arg0) {
    func_1519E6BC(gCurrentObject);
}

void func_1506FC9C(s32 arg0) {
    func_150B3AB0(gCurrentObject, 0xFF);
}

void func_1506FCC8(s32 arg0) {
    func_15196438(gCurrentObject, 6, 0xFF, 0);
}

void func_1506FCFC(s32 arg0) {
    func_15196438(gCurrentObject, 5, 0xFF, 0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1506FD30.s")

void func_1506FDF0(s32 arg0) {
    func_151AABC4(gCurrentObject, 0);
}

void func_1506FE1C(s32 arg0) {
    func_151AABC4(gCurrentObject, 1);
}

void func_1506FE48(s32 arg0) {
    func_151AABC4(gCurrentObject, 0);
}

void func_1506FE74(s32 arg0) {
    func_151AABC4(gCurrentObject, 1);
}

void func_1506FEA0(s32 arg0) {
    func_151AABC4(gCurrentObject, 2);
}

void func_1506FECC(s32 arg0) {
    func_151AABC4(gCurrentObject, 3);
}

void func_1506FEF8(s32 arg0) {
    func_151AB920(gCurrentObject, 0);
}

void func_1506FF24(s32 arg0) {
    func_151AB920(gCurrentObject, 1);
}

void func_1506FF50(s32 arg0) {
    func_151AB930(gCurrentObject);
}

void func_1506FF78(s32 arg0) {
    func_150CBF80(gCurrentObject, 0, 1, 0xFF);
}

void func_1506FFAC(s32 arg0) {
    func_150CBF80(gCurrentObject, 1, 1, 0xFF);
}

void func_1506FFE0(s32 arg0) {
    func_150CBF80(gCurrentObject, 2, 1, 0xFF);
}

void func_15070014(s32 arg0) {
    func_150CA150(gCurrentObject);
}

void func_1507003C(s32 arg0) {
    func_151B01B8(gCurrentObject, 0);
    func_151B09BC(gCurrentObject, 0, 0x3E8, 0xFF, 0);
}

void func_15070084(s32 arg0) {
    func_151AECA0(gCurrentObject, 0xFF, 1);
}

void func_150700B4(s32 arg0) {
    func_151B03B8(gCurrentObject, 0xFF, 1);
}

void func_150700E4(s32 arg0) {
    func_15193660(gCurrentObject, 0xFF, 1);
}

void func_15070114(s32 arg0) {
    func_151937F4(gCurrentObject, 0xFF, 1);
}

void func_15070144(s32 arg0) {
    struct198 tmp;
    s32 tmp0;

    tmp.unk0 = 1;
    tmp.unk8 = 0;
    tmp.unkC = 0;
    tmp.unk4 = gCurrentObject;

    if (D_800BE9F0 == 0x2B) {
        tmp0 = 3;
    } else {
        tmp0 = 0;
    }
    func_151C0698(gCurrentObject, 0, &tmp, tmp0 & 0xFF, 0xFF, 1);
    func_151C1FB8(gCurrentObject);
}

void func_150701C4(s32 arg0) {
    func_151C5280(gCurrentObject, 0xFF, 1);
}

void func_150701F4(s32 arg0) {
    func_151C9740(gCurrentObject, 0xFF, 1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_15070224.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_15070300.s")

void func_15070690(s32 arg0) {
    func_150EEE00(gCurrentObject, (arg0 - 0x3E) & 0xFF, arg0);
}

void func_150706C4(s32 arg0) {
    func_150EEF40(gCurrentObject, (arg0 - 0x3E) & 0xFF, arg0);
}

void func_150706F8(s32 arg0) {
    if ((gCurrentObject->unk94 & 0x10) == 0) {
        func_150F03F8(gCurrentObject, 0, 0xFF, 1);
    }
    if ((gCurrentObject->unk94 & 8) == 0) {
        func_150F03F8(gCurrentObject, 1, 0xFF, 1);
    }
}

void func_15070760(s32 arg0) {
    func_150EBEC0(gCurrentObject, 0, 0xFF, 1);
}

void func_15070794(s32 arg0) {
    func_150EBEC0(gCurrentObject, 1, 0xFF, 1);
}

void func_150707C8(s32 arg0) {
    func_150FDDA0(gCurrentObject, 0xFF, 1);
}

void func_150707F8(s32 arg0) {
    func_150FDF38(gCurrentObject, 0xFF, 1, 0, 0);
}

void func_15070830(s32 arg0) {
    func_150FE320(gCurrentObject, 0xFF, 1);
}

void func_15070860(s32 arg0) {
    func_150FE49C(gCurrentObject, 0xFF, 1, 0, 0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_15070898.s")

void func_15070C18(s32 arg0) {
    func_15199834(gCurrentObject);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_15070C40.s")
// NON-MATCHING: missing a move and a branch
// void func_15103E40(s32, s32, s32, u8, u8, u8, u8);
// void func_15070C40(u8 arg0) {
//     struct17 tmp;
//     struct127 *temp_a1;
//     struct127 *phi_a0;
//
//     phi_a0 = temp_a1 = gCurrentObject;
//     tmp.unk0 = temp_a1->x_position;
//     tmp.unk4 = temp_a1->y_position;
//     tmp.unk8 = temp_a1->z_position;
//
//     if (temp_a1->unk124) {
//         phi_a0 = &gObjects[temp_a1->unk124 - 1];
//         func_15103E40(phi_a0, temp_a1, &tmp, arg0, 0, 0xFF, 0);
//     }
// }

void func_15070CDC(s32 arg0) {
    func_15070C40(1);
}

void func_15070D00(s32 arg0) {
    func_15070C40(0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_15070D24.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_15070F60.s")
void func_15071230(s32 arg0) {
    func_15070F60(0);
}

void func_15071254(s32 arg0) {
    func_15070F60(1);
}

void func_15071278(s32 arg0) {
    func_150FC438(gCurrentObject, 0, 1, gCurrentObject->unk84.ub[1]);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_150712AC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_15071360.s")

void func_15071434(s32 arg0) {
    func_150FF840(gCurrentObject, 1, 0, 0xFF, 1);
}

void func_15071470(s32 arg0) {
    func_150FF840(gCurrentObject, 0, 0, 0xFF, 1);
}

void func_150714AC(s32 arg0) {
    func_150FF840(gCurrentObject, 0, 1, 0xFF, 1);
}

void func_150714E8(s32 arg0) {
    func_151D5714(gCurrentObject, &D_800A2148, &D_800A2154, D_80088BB0, 0x3F800000, 0xFF, 1);
}

void func_15071544(s32 arg0) {
    func_151D4668(gCurrentObject);
    func_151D469C(gCurrentObject, 4, 0x78, 0xFF, 1);
}

void func_1507158C(s32 arg0) {
    func_151D4668(gCurrentObject);
    func_151D469C(gCurrentObject, 2, 0x78, 0xFF, 1);
}

void func_150715D4(s32 arg0) {
    func_151D4668(gCurrentObject);
    func_151D469C(gCurrentObject, 3, 0x78, 0xFF, 1);
}

void func_1507161C(s32 arg0) {

}

void func_15071628(s32 arg0) {
    func_151D0058(gCurrentObject, (arg0 - 0x55) & 0xFF, 0xFF, 1);
}

void func_15071668(s32 arg0) {
    func_151D0024(gCurrentObject);
}

void func_15071690(s32 arg0) {
    struct127 *temp_a0;
    s32 pad0;
    s32 sp1C;

    temp_a0 = gCurrentObject;
    if ((temp_a0->unk1D4 != 0) && ((temp_a0->unk74 & 0xF) != 0xF)) {
        func_150B60E0(temp_a0, &sp1C);
        func_150B5C38(&sp1C, 0xFF, 1);
    }
}

void func_150716EC(s32 arg0) {
    struct17 tmp;
    struct127 *temp_v0;

    temp_v0 = gCurrentObject;
    tmp.unk0 = temp_v0->x_position;
    tmp.unk4 = temp_v0->y_position;
    tmp.unk8 = temp_v0->z_position;
    func_151D5404(&tmp, 0x44BBC000, 0x453B8000, 0x39AEC33E, 0xC, 0xF, 0xFF, 0);
}

void func_15071764(s32 arg0) {
    struct127 *sp34 = func_15083E90(18);
    if (sp34 != NULL) {
        func_150F0BEC(sp34);
        func_150F10D4(sp34);
        func_15161E24(sp34, 1, 2, 300, 70, 255, 130, 0, 255, 1);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_150717E0.s")
// void func_150717E0(s32 arg0) {
//     u8 sp24;
//     void *sp20;
//     void **sp18;
//     void **temp_a0;
//     void *temp_v0;
//
//     temp_v0 = func_15083E90(0x12);
//     temp_a0 = &sp20;
//     if (temp_v0 != 0) {
//         sp20 = temp_v0;
//         sp18 = temp_a0;
//         sp24 = temp_v0->unk3B;
//         func_15131D4C(temp_a0, 0x43);
//         func_151494E0(temp_a0, 0x43);
//     }
// }

void func_15071830(s32 arg0) {
    func_150F9BB0(gCurrentObject, 0xFF, 1);
}

void func_15071860(s32 arg0) {
    func_1519072C(gCurrentObject);
}

void func_15071888(s32 arg0) {
    func_151D5714(gCurrentObject, &D_800A1FB0, &D_800A1FBC, D_80088B90, D_80099F30, 0xFF, 1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_150718E4.s")

void func_15071998(s32 arg0) {
    func_150FA520(gCurrentObject, 0, 0xFF, 1);
}

void func_150719CC(s32 arg0) {
    func_150FA520(gCurrentObject, 1, 0xFF, 1);
}

void func_15071A00(s32 arg0) {
    func_150FA520(gCurrentObject, 2, 0xFF, 1);
}

void func_15071A34(s32 arg0) {
    func_151D09A8(gCurrentObject, 0xFF, 1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_15071A64.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_15071B18.s")

void func_15071D08(s32 arg0) {
    func_150F2230(gCurrentObject, 0xFF, 1);
}

void func_15071D38(void) {
    void (*func)(s32);

    func = D_80086150[D_800D1580];
    if (func != 0) {
        func(D_800D1580);
    }
}

void func_15071D78(void) {
    struct127 *tmp;
    struct127 *orig;

    tmp = func_150721E8(gCurrentObject);
    if (tmp != NULL) {
        orig = gCurrentObject;
        gCurrentObject = tmp;
        func_15071D38();
        gCurrentObject = orig;
    }
}

void func_15071DC8(void) {
    func_15141A7C(gCurrentObject, D_800D1580);
}

void func_15071DF4(void) {
    func_15192800(gCurrentObject, D_800D1580);
}

void func_15071E20(void) {
    gCurrentObject->unk247 = (s8) D_800D1580;
}

void func_15071E3C(void) {
    gCurrentObject->unk248 = (s8) D_800D1580;
}

void func_15071E58(void) {
    D_800D1878 = D_800D1580 & 0xFF;
    gCurrentObject->unk244 = (D_800D1580 >> 8) & 0xFF;
    func_1505E650(gCurrentObject, gCurrentObject->unk244, 0x3F99999A, 0x40400000, *(s32 *) &D_800D1878, 0x00000000, 0);
}

void func_15071ED4(void) {
    func_1505E650(gCurrentObject, 0x59, 0x3F800000, 0x40400000, 0x00000000, 0x00000000, 0);
}

void func_15071F14(void) {
    func_1505E650(gCurrentObject, 0x24, 0x3F800000, 0x40400000, 0x00000000, 0x00000000, 0);
}

void func_15071F54(void) {
    func_1507C8E0(gCurrentObject, D_800D1580);
}

void func_15071F80(void) {
    if (D_800C35EA == 1) {
        gCurrentObject->unk138++;
    }
}

void func_15071FB0(void) {
    if (gCurrentObject->unk28 == 0.0f) {
        gCurrentObject->unk10C = (u16)0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_15071FDC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_150721A4.s")
// NON-MATCHING: identical instructions, ordering, and size (0x44 bytes) to
// target across every source variation tried (direct global reads, a
// hoisted color local, inline casts, swapped declaration order) - only the
// specific register NUMBERS IDO -O2 picks for the loaded D_800D1580 value
// and the two sra results differ (v0/v1/t0 here vs target's v1/t6/t7).
// void func_150721A4(void) {
//     u8 tmp2 = D_800D1580 >> 8;
//     u8 tmp0 = D_800D1580 >> 16;
//     u8 tmp1 = D_800D1580;
//     func_1506160C(gCurrentObject, tmp0, tmp1, tmp2, 0);
// }

struct127 *func_150721E8(struct127 *arg0) {
    return func_15072208(arg0, 0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_15072208.s")

void func_150722F0(void) {
    struct127 *temp_v0 = func_150721E8(gCurrentObject);
    if (temp_v0 != 0) {
        u8 tmp0 = D_800D1580 >> 8;
        u8 tmp1 = D_800D1580;
        func_1506160C(temp_v0, 2, tmp0, tmp1, 0);
    }
}

void func_1507233C(void) {
    gCurrentObject->unk94 = (s32) ~(D_800D1580 | 1);
}

void func_15072360(void) {
    gCurrentObject->unk94 &= ~D_800D1580;
}

void func_15072388(void) {
    gCurrentObject->unk94 |= D_800D1580;
}

void func_150723AC(void) {
    struct127 *temp_v0 = func_15083E90(D_800D1583);
    if (temp_v0 != NULL) {
        func_15060F28(temp_v0, 0);
    }
}

void func_150723E0(void) {
    struct127 *temp_v0 = func_15083E90(D_800D1583);
    if ((temp_v0 != 0) && (temp_v0->unk65 != 0)) {
        func_15060F28(temp_v0, 0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_15072420.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1507266C.s")

void func_15072740(void) {
    s32 temp_v0;
    struct127 *temp_v1;

    temp_v0 = D_800D1580 >> 16;
    temp_v1 = &gObjects[gCurrentObject->unk222];
    temp_v1->unk65 = gCurrentObjectIndex + 1;
    temp_v1->unk5C = temp_v0;
    temp_v1->unk101 = 4;
}

void func_150727AC(void) {
    gCurrentObject->animation_speed = D_800D1580 * D_80099F4C;
    gCurrentObject->unk2D0->unk10 = gCurrentObject->animation_speed;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_150727F0.s")

void func_15072918(void) {
    func_15060F28(gCurrentObject, 0);
}

void func_15072940(void) {
    func_15060F28(gCurrentObject, 1);
}

void func_15072968(void) {
    func_1505E650(gCurrentObject, 44, 0x3FC00000, 0x41400000, 0x00000000, 0x00000000, 0);
    gCurrentObject->disable_run = 25;
}

void func_150729B4(void) {
    gCurrentObject->unk2E4 = D_800D1580;
}

void func_150729D0(void) {
    gCurrentObject->unk31C->unk8 = (u16)1;
    func_1507EB4C(gCurrentObject, 21);
    func_1506B82C();
}

void func_15072A14(void) {
    gCurrentObject->unk31C->unk66 = (u16)0;
    func_1507F640();
}

void func_15072A40(void) {
    gCurrentObject->unk31C->unk19B = (u8)0;
    gCurrentObject->unk31C->unk78 = (u8)0;
    func_1507F640();
}

void func_15072A7C(void) {
    if (gCurrentObject->unk31C != 0) {
        gCurrentObject->unk31C->unk1A9++;
        if ((random_u32() & 7) < (u32) gCurrentObject->unk31C->unk1A9) {
            func_1505E650(gCurrentObject, 394, 0x3F800000, 0x40800000, 0x00000000, 0x00000000, 0);
        }
    }
}

void func_15072AF8(void) {
    func_1505E650(gCurrentObject, (u16) (gCurrentObject->unk84.uh + 1), 0x3F800000, 0x40C00000, 0x00000000, 0x00000000, 0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_15072B44.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_15072DA0.s")

void func_15072DD8(void) {
    func_15083568(gCurrentObject, D_800D1580, 0x3F800000, 0);

    if ((gCurrentObject->unk31C != 0) && (gCurrentObject->unk31C->unk11A == 1)) {
        gCurrentObject->unk31C->unk11A = (u8)2U;
    }
}

void func_15072E38(void) {
    func_150836CC(gCurrentObject, D_800D1580);

    if (gCurrentObject->unk31C != 0) {
        gCurrentObject->unk31C->unk11A = (u8)0;
    }
}

void func_15072E7C(void) {
    gCurrentObject->unk10C = (s16) D_800D1580;
}

void func_15072E98(void) {
    gCurrentObject->unk2D0->unk10 *= D_800D1874;
}

void func_15072EC0(void) {
    struct197 *tmp;

    tmp = gCurrentObject->unk2D0;
    if (tmp->unk10 < D_800D1874) {
        gCurrentObject->unk10C = 0;
    }
}

void func_15072EF4(void) {
    gCurrentObject->stunned = (s8) D_800D1580;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_15072F10.s")

void func_15073054(void) {
    gCurrentObject->unk22E = (s16) D_800D1580;
}

void func_15073070(void) {

}

void func_15073078(void) {
    func_1512D748(0, D_800D1580, 1);
}

void func_150730A4(void) {
    gCurrentObject->unk1FF = (u8)3;
    gCurrentObject->unk200 = (s8) D_800D1580;
}

void func_150730D0(void) {
    struct127 *temp_v0;

    if (D_800D1580 == 1) {
        temp_v0 = gCurrentObject;
        temp_v0->unk2F8 |= 0x100;
    } else {
        temp_v0 = gCurrentObject;
        temp_v0->unk2F8 &= 0xFEFF;
      }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_15073118.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1507342C.s")

void func_150738E8(void) {
    u8 temp_v0 = (u8)(gCurrentObject->unk13C - 100);

    if (gCurrentObject->unk13C != 0) {
        gCurrentObject->unk13C = 0U;
        gObjects[temp_v0].unkF8 = 0x8200;
        gObjects[temp_v0].unk13D = 0;
        gObjects[temp_v0].unk76 = gCurrentObject->unk7A;
        gObjects[temp_v0].unk65 = 0;
        gObjects[temp_v0].unk232 = 6;
        gObjects[temp_v0].unk218 = 0;
        gObjects[temp_v0].stunned = 0;
        gObjects[temp_v0].unk7A = 0xE000;
        func_1505E650(gCurrentObject, 0x97, 0x3F800000, 0x40A00000, 0x00000000, 0x00000000, 0);
    }
}

void func_150739A4(void) {
    gCurrentObject->unk64 = (s8) D_800D1580;
}

void func_150739C0(void) {
    gCurrentObject->unk64 -= D_800BE9A0;

    if (gCurrentObject->unk64 >= 0) {
        D_800D1880 = 0;
        gCurrentObject->unk138--;
        D_800D1878 = D_800D1580;
    }
}

void func_15073A28(void) {
    gCurrentObject->unk44 = (f32) D_800D1580;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_15073A50.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_15073B38.s")

void func_15073C28(void) {
    func_1507F640();
}

void func_15073C48(void) {

}

// ???
#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_15073C50.s")

void func_15073CB8(void) {
    struct127 *tmp = func_1505F0AC(0x53);
    if ((tmp != 0) && ((u16)tmp->unk244 == 0x1F)) {
        tmp->unk21C = (u16)0;
    }
}

void func_15073CF4(void) {
    func_15062B1C(gCurrentObject, (f32) D_800D1580);
}


void func_15073D34(void) {
    func_15062B50(gCurrentObject, (f32) D_800D1580);
}

void func_15073D74(void) {
    struct127 *temp_v0;

    temp_v0 = func_15083E90(D_800D1583);
    if (temp_v0 != 0) {
        temp_v0->unk65 = (u8)0;
    }
}

void func_15073DA4(void) {
    s32 tmp;

    if (D_800D1580 != 0) {
        tmp = 18;
    } else {
        tmp = 2;
    }
    func_1506C460(gCurrentObject->unk40, 150.0f, 0, 0, 100, tmp, 60.0f, 0.5f, 0, 0, 1);
}

void func_15073E2C(void) {
    func_1506C460(gCurrentObject->unk40, 80.0f, 0, 0, 100, 11, 40.0f, 0.5f, 0, 14, 1);
}

void func_15073EA4(void) {
    func_1506C460(gCurrentObject->unk40, 60.0f, 0, 0, 100, 12, 40.0f, 0.5f, 0, 14, 1);
}

void func_15073F1C(void) {
    struct126 *temp_v0 = func_1503195C(gCurrentObject, 0x3C, 0);
    if (temp_v0 != NULL) {
        temp_v0->unk38 = 0x960;
    }
}

void func_15073F54(void) {
}

void func_15073F5C(void) {
    gCurrentObject->unk2CB = (s8) D_800D1580;
}

void func_15073F78(void) {
    gCurrentObject->unk10B &= ~D_800D1580;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_15073FA0.s")

void func_15074644(void) {
    gCurrentObject->unk31C->unk11A = (s8) D_800D1580;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_15074664.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_150746F0.s")
// ?
#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_150747E4.s")

void func_15074840(void) {
    if (gCurrentObject->unk31C != 0) {
        gCurrentObject->unk31C->unk1AA += D_800D1580;
    }
}

void func_15074870(void) {
    gCurrentObject->unk24F = (s8) D_800D1580;
}

// ??
#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1507488C.s")

void func_150748F4(void) {
    D_800CC3D7 = (s8) D_800D1580;
}

void func_1507490C(void) {
    struct127 *tmp;
    u8 temp_v0 = (u8)(gCurrentObject->unk13C - 100);

    if (gCurrentObject->unk13C != 0) {
        tmp = &gObjects[temp_v0 & 0xFF];
        if (gObjects[temp_v0].unk13D >= 0x64) {
            gObjects[temp_v0].unk232 = D_800D1580;
            gObjects[temp_v0].unk218 = 0;
            gObjects[temp_v0].stunned = 0;
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_15074980.s")

void func_15074A44(void) {
    if (gCurrentObject->unk31C != 0) {
        gCurrentObject->unk31C->unk26 = (s8) D_800D1580;
    }
}

void func_15074A6C(void) {
    if (gCurrentObject->unk13C == 0) {
        gCurrentObject->unk138++;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_15074A94.s")
// NON-MATCHING: JUSTREG
// void func_15074A94(void) {
//     f32 phi_f2;
//     f32 temp_f0;
//
//     temp_f0 = func_1505A72C(&gObjects, gCurrentObject);
//
//     if (gCurrentObject->unk148 < D_8009A0E8) {
//         gCurrentObject->unk148 = gCurrentObject->unk154;
//     }
//
//     if (temp_f0 < 200.0f) {
//         phi_f2 = D_8009A0EC;
//     } else {
//         if (D_8009A0F0 < temp_f0) {
//             phi_f2 = gCurrentObject->unk148;
//         } else {
//             f32 tmp = D_8009A0F4;
//             phi_f2 = gCurrentObject->unk148;
//             phi_f2 = phi_f2 - tmp;
//             phi_f2 = phi_f2 * ((temp_f0 - 200.0f) / D_8009A0F8);
//             phi_f2 = phi_f2 + tmp;
//         }
//     }
//     gCurrentObject->unk154 = gCurrentObject->unk158 = phi_f2;
//     gCurrentObject->unk15C = D_8009A0FC;
// }

void func_15074B7C(void) {
    D_800D1880 = 0;
    D_800D1878 = D_800D1580;

    if (D_800D1580 == 0) {
        D_800D1878 = D_8009A100;
        gCurrentObject->unk1FC |= 4;
        gCurrentObject->unk138 = 0;
    }
}

void func_15074BD8(s32 arg0, s32 arg1, s32 arg2) {
}

void func_15074BEC(s32 arg0, s32 arg1, s32 arg2) {
}

void func_15074C00(s32 arg0, struct127 *arg1, s32 arg2) {
    struct199 tmp; // is this actually 2 structs?

    if (((u8)arg1->unk239 & 0x7F) == 5) {
        func_1504715C(&tmp);
        tmp.unk24 = D_800CC2C0;
        tmp.unk28 = D_800CC2C4;
        tmp.unk2C = D_800CC2C8;
        func_150C04C0(&tmp.unk24, &tmp, 0x16, 1, 0xFF, 0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_15074C80.s")

void func_15074DEC(struct127 *arg0, s32 arg1, s32 arg2) {
    arg0->unk2E8 = 1;
}

void func_15074E04(s32 arg0, s32 arg1, s32 arg2) {
    func_1516FE1C((s32) (arg1 - (s32)&gObjects) / (s32) sizeof(struct127), 0xB4, 0xFF, 0);
    func_1518D1C0(arg1, 0xB, 0, 1, 0xFF, 0, &D_80099C1C);
}

void func_15074E80(struct127 *arg0, struct127 *arg1, s32 arg2) {
    s8 sp1F = 0;
    func_15194794(arg0, arg1, &sp1F);
    if (arg1->interaction_state == 1) {
        arg0->immune = (u8)0xFF;
        arg1->immune = (u8)0xC8;
        D_800D1580 = 0x60000; // 393216
        func_15072740();
    }
}

void func_15074EE8(struct127 *arg0, struct127 *arg1, s32 arg2) {
    if (arg1->interaction_state == 1) {
        arg0->immune = (u8)0xFF;
        arg1->immune = (u8)0xC8;
        D_800D1580 = 0x70000;
        func_15072740();
    }
}

void func_15074F30(struct127 *arg0, struct127 *arg1, s32 arg2) {
    arg0->unk232 = arg1->unk109;
    arg0->unk218 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_15074F48.s")

void func_15074FD4(struct127 *arg0, struct127 *arg1, s32 arg2) {
    if (arg1->interaction_state == 1) {
        arg0->immune = (u8)0xFF;
        arg1->immune = (u8)0xC8;
        D_800D1580 = 0x60000;
        if (arg0->id == 0x8E) {
            D_800D1580 = 0x140000;
        }
        func_15072740();
    }
    func_151942B0(arg0, arg1, arg2);
}

void func_15075050(struct127 *arg0, s32 arg1, s32 arg2) {
    arg0->unkB8 = 5.0f;
    if (arg0->xz_velocity > 0.0f) {
        arg0->unkB8 = -5.0f;
    }
    arg0->gravity = 5.0f;
    arg0->y_velocity = 12.0f;
}

void func_150750A4(struct127 *arg0, s32 arg1, s32 arg2) {
    arg0->gravity = 5.0f;
}

void func_150750C4(struct127 *arg0, struct127 *arg1, u8 *arg2) {

    if ((arg1->id  == 0x88) && ((s32) arg0->unk107 < 0x37)) {
        arg0->unk138 += 3;
    }
    func_15194794(arg0, arg1, arg2);
    if (arg1->id != 0x53) {
        func_15145A50(arg1);
        arg1->health = (u8)0;
        func_1507CD64(arg1, 8);
        *arg2 = (u8)39;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1507515C.s")
