#include <ultra64.h>

#include "functions.h"
#include "variables.h"



#pragma GLOBAL_ASM("asm/nonmatchings/game_221290/func_151F3DE0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_221290/func_151F42E8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_221290/func_151F4F38.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_221290/func_151F578C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_221290/func_151F63C4.s")
extern s16 D_800AEB7C[];
extern s32 D_800E0E00;

// Copies 0x240 floats from the unk4664 scratch buffer into unk4F64.
// When the channel selected by arg1 is active (unk3C98 set) and in
// mode 2, the copy is scattered through a per-(unk3BA4, unk3BB4)
// permutation table in D_800AEB7C, optionally preceded by 0x24
// straight copies; otherwise it is a plain sequential copy.
s32 func_151F6970(void *arg0, s32 arg1) {
    s16 *tbl;
    f32 *dst;
    f32 *src;
    s32 i;

    tbl = (s16 *) ((char *) D_800AEB7C
                   + *(s32 *) ((char *) arg0 + 0x3BA4) * 3456
                   + *(s32 *) ((char *) arg0 + 0x3BB4) * 1152);
    dst = (f32 *) ((char *) arg0 + 0x4F64);
    src = (f32 *) ((char *) arg0 + 0x4664);
    i = 0;

    if (*(s32 *) ((char *) arg0 + arg1 * 4 + 0x3C98) != 0 &&
        *(s32 *) ((char *) arg0 + arg1 * 4 + 0x3CA0) == 2) {
        if (*(s32 *) ((char *) arg0 + arg1 * 4 + 0x3CA8) != 0) {
            while (i++ < 0x24) {
                *dst++ = *src++;
            }
        }
        while (i < 0x240) {
            dst[tbl[i++]] = *src++;
        }
    } else {
        while (i++ < 0x240) {
            *dst++ = *src++;
        }
    }

    return 1;
}
#pragma GLOBAL_ASM("asm/nonmatchings/game_221290/func_151F6B28.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_221290/func_151F6FD0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_221290/func_151F78B4.s")
// NON-MATCHING (one word): 74/74 instructions, and 73 of the 74 words
// are byte-identical to target. Operates on the same streaming buffer
// struct as func_151F85C4 below (fields unk18/unk1C/unk201C/unk2020/
// unk3F88, unk0/unk4 a callback userdata+fnptr pair). Compacts the
// window by discarding the first 0x1000 consumed bytes when
// unk201C+unk3F88 gets close to full, refills via the object's own
// fill callback, zero-pads any short read, then advances the position
// and byte-count fields and returns the old position.
//
// UPDATED 2026-09-22: the previous writeup here had this at 72 vs 74
// with `obj` marked `volatile` to force target's reload-heavy shape,
// and recorded several failed attempts to tune the reload density.
// None of that was the real issue - this file was simply being
// compiled with the wrong OPT_FLAGS. game_221290.c is the .game
// overlay's audio driver and was built UNOPTIMIZED (`-g`) in the
// original ROM, which is why target reloads everything from the stack;
// there is nothing to force with `volatile`. The Makefile now carries
// a `-g` override for this file, and the plain non-volatile source
// below matches. Two further operand-order fixes were needed once the
// flags were right: IDO emits a commutative `addu`/operand pair in the
// REVERSE of source order, so the `if` condition reads unk3F88 before
// unk201C to make target load unk201C first.
//
// The single remaining differing word is idx 35, `addu a1,t2,t4` where
// this build emits `addu a1,t4,t2` - the same commutative add with its
// two source registers swapped. Tried writing the address expression
// as `ptr + off`, `off + ptr`, and `&((char *) arg0)[off]`; all three
// produce the identical (reversed) operand order, so this is the
// established unfixable operand-order class rather than a phrasing
// problem. Everything else, including both jal sites, matches.
// s32 func_151F7F60(void *arg0) {
//     s32 shiftAmt = 0x1000;
//     s32 bytesRead;
//
//     if (*(s32 *) ((char *) arg0 + 0x3F88) + *(s32 *) ((char *) arg0 + 0x201C) >= 0x1FFC) {
//         bcopy((char *) arg0 + shiftAmt + 0x1C, (char *) arg0 + 0x1C, shiftAmt);
//         *(s32 *) ((char *) arg0 + 0x201C) -= shiftAmt;
//         *(s32 *) ((char *) arg0 + 0x2020) -= shiftAmt << 3;
//     }
//
//     bytesRead = ((s32 (*)(void *, void *, s32, s32)) (*(void **) ((char *) arg0 + 4)))(
//         *(void **) arg0,
//         (char *) arg0 + *(s32 *) ((char *) arg0 + 0x201C) + 0x1C,
//         *(s32 *) ((char *) arg0 + 0x3F88),
//         -1);
//
//     if (bytesRead < *(s32 *) ((char *) arg0 + 0x3F88)) {
//         bzero((char *) arg0 + bytesRead + 0x1C, *(s32 *) ((char *) arg0 + 0x3F88) - bytesRead);
//     }
//
//     *(s32 *) ((char *) arg0 + 0x18) += *(s32 *) ((char *) arg0 + 0x3F88);
//     *(s32 *) ((char *) arg0 + 0x201C) += *(s32 *) ((char *) arg0 + 0x3F88);
//
//     return *(s32 *) ((char *) arg0 + 0x201C) - *(s32 *) ((char *) arg0 + 0x3F88);
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_221290/func_151F7F60.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_221290/func_151F8088.s")
// Init for the fixed-address global buffer D_800E1880: sets
// unkC/unk10/unk14 to -1, copies the 3 args into unk0/unk4/unk8, zeroes
// unk201C/unk2020/unk3BA0, bails if func_151F8088(ptr, 0) fails, then
// zeroes unk8474 and bzero's a 0x900-byte region at +0x6A64.
extern u8 D_800E1880[];

void *func_151F85C4(s32 arg0, s32 arg1, s32 arg2) {
    void *obj = D_800E1880;

    if (obj == 0) {
        return 0;
    }

    *(s32 *) ((char *) obj + 0xC) = -1;
    *(s32 *) ((char *) obj + 0x10) = -1;
    *(s32 *) ((char *) obj + 0x14) = -1;
    *(s32 *) ((char *) obj + 0x0) = arg0;
    *(s32 *) ((char *) obj + 0x4) = arg1;
    *(s32 *) ((char *) obj + 0x8) = arg2;
    *(s32 *) ((char *) obj + 0x201C) = 0;
    *(s32 *) ((char *) obj + 0x2020) = 0;
    *(s32 *) ((char *) obj + 0x3BA0) = 0;

    if (func_151F8088(obj, 0) == 0) {
        return 0;
    }

    *(s32 *) ((char *) obj + 0x8474) = 0;
    bzero((char *) obj + 0x6A64, 0x900);

    return obj;
}

// NON-MATCHING (JUSTREG): 109/109 instructions, with only 5 of the 109
// words genuinely differing - the other 9 differences are relocation
// sites (jal func_151F8088, jal strlen, and the %hi/%lo pairs for
// D_800E0E04 and D_800E0E00). Advances the unk3BA0 slot cursor mod 6,
// re-arms the stream via func_151F8088, hands the caller the current
// slot buffer and unk3F8C, then if unk3BC8 is set reads a NUL-
// terminated string one byte at a time through the object's own
// unk4 reader and forwards it to the D_800E0E00 log hook.
//
// The 5 real differences are all commutative-operand / register-
// numbering choices with no source-level lever: one `addu t3,t0,t2`
// emitted with its operands swapped, and the loop body allocating t0
// and t2 to obj/i in the opposite order from target (every downstream
// use follows that one swap). Tried reordering the pointer arithmetic
// and the call's subexpressions; neither moves it.
//
// Everything structural does match, and four separate idioms were
// needed to get there under this file's `-g` build - all worth reusing
// on the remaining pragmas here:
//   - locals declared in descending stack-slot order (obj, ret, buf, i)
//   - the early exit written as `goto end;` rather than `return ret;`,
//     so it branches to the shared return stub instead of duplicating
//     the v0 load
//   - `while (buf[i++])` not `while (buf[i++] != 0)`; the explicit
//     comparison materializes a boolean via sltu+move before branching
//   - `u8 buf[]` not `char buf[]`, since target reads it with `lbu`
//     (this codebase compiles with -signed, so plain char gives `lb`)
#pragma GLOBAL_ASM("asm/nonmatchings/game_221290/func_151F86B0.s")
// s32 func_151F86B0(void *arg0, void *arg1, void *arg2) {
//     void *obj;
//     s32 ret;
//     u8 buf[0x100];
//     s32 i;
//
//     obj = arg0;
//     *(s32 *) ((char *) obj + 0x3BA0) += 1;
//     if (*(s32 *) ((char *) obj + 0x3BA0) >= 6) {
//         *(s32 *) ((char *) obj + 0x3BA0) = 0;
//     }
//
//     if (func_151F8088(obj, *(s32 *) ((char *) obj + 0x8474)) == 0) {
//         D_800E0E04 = 3;
//         return 0;
//     }
//
//     *(s32 *) ((char *) obj + 0x8474) = -1;
//     ret = ((s32 (*)(void *)) *(void **) ((char *) obj + 0x8478))(obj);
//
//     if (ret == 0) {
//         goto end;
//     }
//
//     *(s32 *) arg1 = (s32) ((char *) obj + *(s32 *) ((char *) obj + 0x3BA0) * 1160 + 0x2070);
//     *(s32 *) arg2 = *(s32 *) ((char *) obj + 0x3F8C);
//
//     if (*(s32 *) ((char *) obj + 0x3BC8) != 0) {
//         i = 0;
//         do {
//             if (((s32 (*)(void *, u8 *, s32, s32)) *(void **) ((char *) obj + 4))(
//                     *(void **) obj, &buf[i], 1, -1) == 0) {
//                 break;
//             }
//         } while (buf[i++]);
//
//         if (D_800E0E00 != 0) {
//             ((void (*)(s32, char *, s32)) D_800E0E00)(0, (char *) buf, strlen((char *) buf) + 1);
//         }
//     }
//
// end:
//     return ret;
// }

