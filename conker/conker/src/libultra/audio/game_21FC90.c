#include <n_libaudio.h>

extern s32  D_800E0E00;
extern s32  D_800E0E04;
extern s32  D_800E0E08;
extern s32  D_800E0E10;
extern s16  D_800E0E14;
extern s16  D_800E0E16;
extern u8   D_800E0E18;
extern u8   D_800E0E2C;
extern s32  D_800E0E20;
extern s32  D_800E0E24;
extern s32  D_800E0E28;
extern s32  *D_800E0E30; // 0x8000
extern s32  D_800E0D80; // libaudio struct?
extern s16  D_800E0DB0;
extern s16  D_800E0DB2;
extern s32  D_800E0DD8;
extern s32  D_800E0DE0;
extern s32  D_800E0DE4;
extern s32  D_800E0DFC;
extern s16  D_8002BC10[];
extern s16  D_8002BD0E[];
extern u8   D_800428C1;
extern u8   D_800428C2;
s16 _getVol();


// NON-MATCHING (BLOCKED BY BUILD FLAGS, NOT BY THE SOURCE): the C below
// is a verified EXACT match - 44 of 44 instructions, every single word
// identical to target, with no relocation sites at all since these are
// leaf functions that reference nothing external.  It cannot be enabled
// because it only matches at -O1, and this file is built -g by the
// directory-wide rule
//     $(BUILD_DIR)/$(SRC_DIR)/libultra/audio/%.o: OPT_FLAGS := -g
// in the Makefile.  At -g this same source drops to 22 of 44 words.
//
// That flag split is real, not a mistake in the rule: func_151F2C4C,
// func_151F2CDC and func_151F2D6C in this same file are byte-perfect at
// -g and collapse to roughly a third of their words at -O1, so the file
// as splat carved it holds code from two different translation units -
// the interrupt-driven audio driver at -g, and these two leaf CRC
// helpers at -O1.  Enabling them needs the file split in conker.us.yaml
// plus a per-file OPT_FLAGS line, which is a build-layout change rather
// than a decompilation one.
//
// The tells that a function in a -g file actually wants -O1, all three
// present here and absent from every -g function in this file:
//   - the epilogue has no branch to a shared return label (at -g even a
//     single trailing `return` emits `b <epilogue>` plus the dead
//     closing-brace `b`);
//   - a delay slot is filled by hoisting an instruction across a
//     statement boundary, not just from immediately before the branch;
//   - operands of the NEXT statement are computed before the previous
//     statement's store.
//
// Source shape notes, both needed even at -O1:
//   - the bit loop is `for (j = 7; j >= 0; j--)`, not
//     `do { ... } while (--j >= 0);` - the `for` lets the scheduler
//     hoist the decrement and its store above the final xor, which is
//     exactly what target does, and it was worth 17 of the 52 words;
//   - `crc |= x;` not `crc = crc | x;` - the compound form puts crc in
//     the first operand slot of the `or`, matching target.
// u8 func_151F27E0(u16 arg0) {
//     u8 crc;
//     u8 tmp;
//     s32 i;
//
//     crc = 0;
//     for (i = 0; i < 0x10; i++) {
//         tmp = (crc & 0x10) ? 0x15 : 0;
//         crc = crc << 1;
//         crc |= (u8) ((arg0 & 0x400) ? 1 : 0);
//         arg0 = arg0 << 1;
//         crc = crc ^ tmp;
//     }
//     return crc & 0x1F;
// }
#pragma GLOBAL_ASM("asm/nonmatchings/libultra/audio/game_21FC90/func_151F27E0.s")

// NON-MATCHING (BLOCKED BY BUILD FLAGS, NOT BY THE SOURCE): the C below
// is a verified EXACT match - 52 of 52 instructions, every single word
// identical to target, with no relocation sites at all since these are
// leaf functions that reference nothing external.  It cannot be enabled
// because it only matches at -O1, and this file is built -g by the
// directory-wide rule
//     $(BUILD_DIR)/$(SRC_DIR)/libultra/audio/%.o: OPT_FLAGS := -g
// in the Makefile.  At -g this same source drops to 15 of 52 words.
//
// That flag split is real, not a mistake in the rule: func_151F2C4C,
// func_151F2CDC and func_151F2D6C in this same file are byte-perfect at
// -g and collapse to roughly a third of their words at -O1, so the file
// as splat carved it holds code from two different translation units -
// the interrupt-driven audio driver at -g, and these two leaf CRC
// helpers at -O1.  Enabling them needs the file split in conker.us.yaml
// plus a per-file OPT_FLAGS line, which is a build-layout change rather
// than a decompilation one.
//
// The tells that a function in a -g file actually wants -O1, all three
// present here and absent from every -g function in this file:
//   - the epilogue has no branch to a shared return label (at -g even a
//     single trailing `return` emits `b <epilogue>` plus the dead
//     closing-brace `b`);
//   - a delay slot is filled by hoisting an instruction across a
//     statement boundary, not just from immediately before the branch;
//   - operands of the NEXT statement are computed before the previous
//     statement's store.
//
// Source shape notes, both needed even at -O1:
//   - the bit loop is `for (j = 7; j >= 0; j--)`, not
//     `do { ... } while (--j >= 0);` - the `for` lets the scheduler
//     hoist the decrement and its store above the final xor, which is
//     exactly what target does, and it was worth 17 of the 52 words;
//   - `crc |= x;` not `crc = crc | x;` - the compound form puts crc in
//     the first operand slot of the `or`, matching target.
// u8 func_151F2890(u8 *p) {
//     u8 crc;
//     u8 tmp;
//     s32 i;
//     s32 j;
//
//     crc = 0;
//     i = 0;
//     do {
//         for (j = 7; j >= 0; j--) {
//             tmp = (crc & 0x80) ? 0x85 : 0;
//             crc = crc << 1;
//             if (i == 0x20) {
//                 crc = crc | 0;
//             } else {
//                 crc |= (p[0] & (1 << j)) ? 1 : 0;
//             }
//             crc = crc ^ tmp;
//         }
//         p++;
//     } while (++i < 0x21);
//     return crc;
// }
#pragma GLOBAL_ASM("asm/nonmatchings/libultra/audio/game_21FC90/func_151F2890.s")

void func_151F2960(s32 arg0, s32 arg1) {
    if (D_800E0DFC == 0) {
        return;
    }
    D_800E0E04 = 4;
    if (D_800E0E2C == 0) {
      D_800E0E2C = 1;
        D_800E0E30 = allocate_memory(0x8000, 0xFF, 2, 1);
        if (D_800E0E30 == 0) {
            D_800E0E2C = 0;
            return;
        }
        D_800E0E20 = func_1502B5C8(0, 2, 0x17, 4);
        if (D_800E0E20 != 0) {
            func_100043B4(D_800E0E20, 0xFF);
        }
        D_800E0E24 = func_1502B5C8(0, 2, 0x17, 5);
        if (D_800E0E24 != 0) {
            func_100043B4(D_800E0E24, 0xFF);
        }
        D_800E0E28 = func_1502B5C8(0, 2, 0x17, 6);
        if (D_800E0E28 != 0) {
            func_100043B4(D_800E0E28, 0xFF);
        }
        if ((D_800E0E20 == 0) || (D_800E0E24 == 0) || (D_800E0E28 == 0)) {
            if (D_800E0E20 != 0) {
                func_10004074(D_800E0E20);
            }
            if (D_800E0E24 != 0) {
                func_10004074(D_800E0E24);
            }
            if (D_800E0E28 != 0) {
                func_10004074(D_800E0E28);
            }
            func_10004074(D_800E0E30);
            D_800E0E30 = 0;
            D_800E0E2C = 0;
            return;
        }
        func_151F3DE0();
    }
    D_800E0D80 = arg0;
    D_800E0DE0 = arg1;
    D_800E0DE4 = 0;
    D_800E0E10 = 0;
    D_800E0E18 = 5;
    D_800E0E04 = 5;
}

void func_151F2BA8(void) {
    u32 mask = osSetIntMask(1);
    D_800E0E04 = 3;
    osSetIntMask(mask);
}

void func_151F2BE8(void) {
    u32 mask = osSetIntMask(1);

    if (D_800E0E04 == 5) {
        D_800E0E04 = 6;
    } else {
        D_800E0E04 = 2;
    }

    osSetIntMask(mask);
}

void func_151F2C4C(void) {
    u32 mask = osSetIntMask(1);

    if (D_800E0E04 == 2) {
        D_800E0E18 = 5;
        D_800E0E04 = 7;
    } else if (D_800E0E04 == 6) {
        D_800E0E18 = 5;
        D_800E0E04 = 5;
    }

    osSetIntMask(mask);
}

s32 func_151F2CDC(void) {
    s32 ret;
    u32 mask;

    ret = 0;
    mask = osSetIntMask(1);

    if (D_800E0E04 == 1 || D_800E0E04 == 5 || D_800E0E04 == 6 || D_800E0E04 == 7 ||
        D_800E0E04 == 2) {
        ret = D_800E0E04;
    }

    osSetIntMask(mask);
    return ret;
}

void func_151F2D6C(s32 arg0, s32 arg1) {
    u32 mask = osSetIntMask(1);

    if (arg0 < 0) {
        D_800E0E08 = 0;
    } else if (arg0 >= 0x8000) {
        D_800E0E08 = 0x7FFF;
    } else {
        D_800E0E08 = arg0;
    }

    D_800E0E10 = arg1;
    osSetIntMask(mask);
}

void func_151F2DFC(s32 arg0, s32 arg1) {
    if (arg0 >= 0x80) {
        arg0 = (u16)0x7F;
    } else {
        if (arg0 < 0) {
            arg0 = (u16)0;
        }
    }
    D_800E0E16 = arg0;
    if (arg1 != 0) {
        D_800E0E14 = (s16) D_800E0E16;
    }
}

void func_151F2E4C(s32 arg0, s32 arg1) {
    D_800E0DB2 = arg0;
    D_800E0DB0 = arg1;
    if (D_800E0DD8 == 0) {
        D_800E0DD8 = 2;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/audio/game_21FC90/func_151F2E88.s")

void func_151F39E4(void *arg0) {
    if (*(s32 *) ((char *) arg0 + 0x88) != *(s16 *) ((char *) arg0 + 0xE) ||
        *(s16 *) ((char *) arg0 + 0x94) != *(s16 *) ((char *) arg0 + 0xC)) {
        if (*(s32 *) ((char *) arg0 + 0x28) >= *(s32 *) ((char *) arg0 + 0x2C)) {
            *(s16 *) ((char *) arg0 + 0x1C) =
                (*(s16 *) ((char *) arg0 + 0xE) * D_8002BC10[*(s16 *) ((char *) arg0 + 0xC)]) >> 15;
            *(s16 *) ((char *) arg0 + 0x22) =
                (*(s16 *) ((char *) arg0 + 0xE) * D_8002BD0E[-*(s16 *) ((char *) arg0 + 0xC)]) >> 15;
            *(s32 *) ((char *) arg0 + 0x28) = *(s32 *) ((char *) arg0 + 0x2C);
            *(s16 *) ((char *) arg0 + 0x10) = *(s16 *) ((char *) arg0 + 0x1C);
            *(s16 *) ((char *) arg0 + 0x12) = *(s16 *) ((char *) arg0 + 0x22);
        } else {
            *(s16 *) ((char *) arg0 + 0x10) =
                _getVol(*(s16 *) ((char *) arg0 + 0x10), *(s32 *) ((char *) arg0 + 0x28),
                        *(s16 *) ((char *) arg0 + 0x1A), *(u16 *) ((char *) arg0 + 0x18));
            *(s16 *) ((char *) arg0 + 0x12) =
                _getVol(*(s16 *) ((char *) arg0 + 0x12), *(s32 *) ((char *) arg0 + 0x28),
                        *(s16 *) ((char *) arg0 + 0x20), *(u16 *) ((char *) arg0 + 0x1E));
        }

        if (*(s16 *) ((char *) arg0 + 0x10) == 0) {
            *(s16 *) ((char *) arg0 + 0x10) = 1;
        }
        if (*(s16 *) ((char *) arg0 + 0x12) == 0) {
            *(s16 *) ((char *) arg0 + 0x12) = 1;
        }

        *(s16 *) ((char *) arg0 + 0xE) = *(s32 *) ((char *) arg0 + 0x88);
        if (*(s16 *) ((char *) arg0 + 0xE) == 0 && *(s32 *) ((char *) arg0 + 0x90) != 0) {
            func_151F2BA8();
        }

        if (*(s16 *) ((char *) arg0 + 0x94) != *(s16 *) ((char *) arg0 + 0xC)) {
            if (D_800428C2 != 0) {
                *(s16 *) ((char *) arg0 + 0xC) = (*(s16 *) ((char *) arg0 + 0x94) >> 1) + 0x20;
            } else if (D_800428C1 != 0) {
                *(s16 *) ((char *) arg0 + 0xC) = 0x40;
            } else {
                *(s16 *) ((char *) arg0 + 0xC) = *(s16 *) ((char *) arg0 + 0x94);
            }
        }

        *(s32 *) ((char *) arg0 + 0x28) = 0;
        *(s32 *) ((char *) arg0 + 0x2C) = (*(u32 *) ((char *) arg0 + 0x90) + 0xB7) / 0xB8 * 0xB8;
        *(s16 *) ((char *) arg0 + 0x24) = 1;
    }
}

void func_151F3C1C(s32 arg0) {
    D_800E0E00 = arg0;
}

void func_151F3C34(s32 arg0) {
    D_800E0DFC = arg0;
}

s32 func_151F3C4C(s32 arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 sp1C;
    void *fp;

    if (arg3 != -1) {
        D_800E0DE4 = arg3;
    }
    if (D_800E0DE4 + arg2 > D_800E0DE0) {
        arg2 = D_800E0DE0 - D_800E0DE4;
    }

    fp = (*(void *(**)(void *)) ((char *) n_syn + 0x24))(&sp1C);
    sp1C = ((s32 (*)(void *, s32, s32)) fp)((void *) (D_800E0D80 + D_800E0DE4), arg2, 0);
    if (sp1C == 0) {
        return 0;
    }

    sp1C = sp1C + 0x80000000;
    osInvalDCache((void *) sp1C, arg2);
    bcopy((void *) sp1C, arg1, arg2);
    D_800E0DE4 = D_800E0DE4 + arg2;
    return arg2;
}

void func_151F3D78(void) {
    s32 sp1C;
    void *fp;

    fp = (*(void *(**)(void *)) ((char *) n_syn + 0x24))(&sp1C);
    ((void (*)(void *, s32, s32)) fp)((void *) (D_800E0D80 + D_800E0DE4), 0x810, 0);
}
