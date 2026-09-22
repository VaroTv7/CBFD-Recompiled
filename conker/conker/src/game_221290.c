#include <ultra64.h>

#include "functions.h"
#include "variables.h"

extern f32 D_800B0C2C;
extern f32 D_800B0C30;
extern f32 D_800B0C34;
extern f32 D_800B0C38;
extern f32 D_800B0C3C;
extern f32 D_800B0C40;
extern f32 D_800B0C44;
extern f32 D_800B0C48;
s32 func_151F8960();
s32 func_151F78B4();
s32 func_151F6FD0();

extern s32 *D_800E0E20;
extern f32 *D_800E1078;
extern f32 D_800E0E38[];
extern f32 D_800E0EC8[];
extern f32 D_800E0FE8[];
extern s32 D_800E0E28;
extern s32 D_800E0E30;
extern f32 D_800E1080[];
extern f32 D_800E1480[];
extern s16 D_800AEB7C[];
extern f32 D_800B067C[];
extern f32 D_800B069C[];
extern s32 D_800E0E00;
extern u8 D_800E1880[];


// Builds the analysis/synthesis window tables and the cube-root lookup
// used by the codec: three sine-windowed ramps into D_800E0E38 /
// D_800E0EC8 / D_800E0FE8, a bias pass over D_800E0E20, then a
// Newton-Raphson solve of x^3 = i^4 for each of 0x2000 entries, and
// finally two geometric scale tables.
s32 func_151F3DE0(void) {
    s32 i;
    f32 x;
    f32 xx;
    f32 delta;
    f32 t;
    f32 eps;
    f32 c;
    f32 d;

    i = 0;
    do {
        D_800E0E38[i] = sinf(((f32) i + 0.5f) * D_800B0C2C);
    } while (++i < 0x24);

    i = 0;
    do {
        D_800E0EC8[i] = sinf(((f32) i + 0.5f) * D_800B0C30);
    } while (++i < 0x12);

    i = 0x12;
    do {
        D_800E0EC8[i] = 1.0f;
    } while (++i < 0x18);

    i = 0x18;
    do {
        D_800E0EC8[i] = sinf((((f32) i + 0.5f) - 18.0f) * D_800B0C34);
    } while (++i < 0x1E);

    i = 0x1E;
    do {
        D_800E0EC8[i] = 0.0f;
    } while (++i < 0x24);

    i = 0;
    do {
        D_800E0FE8[i] = 0.0f;
    } while (++i < 6);

    i = 6;
    do {
        D_800E0FE8[i] = sinf((((f32) i + 0.5f) - 6.0f) * D_800B0C38);
    } while (++i < 0xC);

    i = 0xC;
    do {
        D_800E0FE8[i] = 1.0f;
    } while (++i < 0x12);

    i = 0x12;
    do {
        D_800E0FE8[i] = sinf(((f32) i + 0.5f) * D_800B0C3C);
    } while (++i < 0x24);

    i = 1;
    do {
        D_800E0E20[i] += D_800E0E28;
    } while (++i < 0x22);

    D_800E1078 = (f32 *) D_800E0E30;
    if (D_800E1078 == 0) {
        return 0;
    }

    x = 1.0f;
    D_800E1078[0] = 0.0f;

    i = 1;
    do {
        t = (f32) i;
        t = t * t;
        eps = t * D_800B0C40;
        t = t * t;
        do {
            xx = x * x;
            delta = (xx * x - t) / (2.0f * xx);
            x = x - delta;
        } while (delta > eps || delta < -eps);
        D_800E1078[i] = x;
    } while (++i < 0x2000);

    c = D_800B0C44;
    d = 0.25f;
    D_800E1080[0] = 1.0f;
    D_800E1480[0] = 1.0f;

    i = 1;
    do {
        D_800E1080[i] = c;
        D_800E1480[i] = d;
        d = d * 0.25f;
        c = c * D_800B0C48;
    } while (++i < 0x100);

    return 1;
}
#pragma GLOBAL_ASM("asm/nonmatchings/game_221290/func_151F42E8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_221290/func_151F4F38.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_221290/func_151F578C.s")
// NON-MATCHING (JUSTREG): 363/363 instructions and structurally an
// exact match - with register names normalized away, only SIX lines of
// the 363 differ, and four of those are relocation immediates. Decodes
// one granule: dispatches to the layer's side-info reader, works out
// the three scalefactor-band part boundaries from the D_800AE840 /
// D_800AE948 tables (clamped to the granule's bit budget), runs the
// three Huffman regions through func_151F8994 (zero-filling any region
// whose table is empty), then the count1 region through func_151F8B4C,
// and finally records how many samples were produced and zero-pads the
// remainder up to 0x240.
//
// The two genuine differences:
//   - register numbering diverges from the `if (limit < part[0])`
//     compare onward (target t8/t7/t1 where this build picks t7/t1/t8,
//     and every later use follows). Everything BEFORE that point is
//     register-for-register identical, and the local set provably
//     matches target's frame exactly (14 locals spanning 0x28..0x67,
//     same offsets), so this is allocator state rather than a source
//     difference.
//   - one swapped instruction pair in the `part[1] = limit; part[0] =
//     part[1];` arm, where target hoists the second `addiu &part`
//     above the first store and this build emits it after.
//
// Operand orders were already corrected per the reversal rules (the
// tbl1 index is written unk3CE0 + unk3CE8 so target loads unk3CE8
// first); that fix removed one real difference but did not move the
// register numbering.
#pragma GLOBAL_ASM("asm/nonmatchings/game_221290/func_151F63C4.s")
// s32 func_151F63C4(void *arg0, s32 arg1, s32 arg2) {
//     s32 savedBitPos;
//     s32 limit;
//     s32 part[3];
//     s16 *tbl1;
//     u8 *tbl2;
//     s32 pos;
//     s16 *outp;
//     u8 *outq;
//     s32 j;
//     s32 v;
//     s32 w;
//     s32 end;
//     s32 count;
//     s32 bitPos2;
//
//     savedBitPos = *(s32 *) ((char *) arg0 + 0x2020);
//
//     if (*(s32 *) ((char *) arg0 + 0x3BA4) != 0) {
//         func_151F4F38(arg0, arg1, arg2);
//     } else {
//         func_151F578C(arg0, arg1, arg2);
//     }
//
//     limit = *(s32 *) ((char *) arg0 + arg1 * 4 + arg2 * 4 + 0x3C80) * 2;
//     tbl1 = (s16 *) ((char *) D_800AE840 + *(s32 *) ((char *) arg0 + 0x3BA4) * 132 +
//                     *(s32 *) ((char *) arg0 + 0x3BB4) * 44);
//     tbl2 = (u8 *) ((char *) D_800AE948 + *(s32 *) ((char *) arg0 + 0x3BA4) * 39 +
//                    *(s32 *) ((char *) arg0 + 0x3BB4) * 13);
//
//     if (*(s32 *) ((char *) arg0 + arg1 * 4 + arg2 * 4 + 0x3C98) == 0 &&
//         *(s32 *) ((char *) arg0 + arg1 * 4 + arg2 * 4 + 0x3CA0) == 0) {
//         part[0] = tbl1[*(s32 *) ((char *) arg0 + arg1 * 4 + arg2 * 4 + 0x3CE0)] + 1;
//         if (limit < part[0]) {
//             part[1] = limit;
//             part[0] = part[1];
//         } else {
//             part[1] = tbl1[*(s32 *) ((char *) arg0 + arg1 * 4 + arg2 * 4 + 0x3CE0) +
//                            *(s32 *) ((char *) arg0 + arg1 * 4 + arg2 * 4 + 0x3CE8) + 1] + 1;
//             if (limit < part[1]) {
//                 part[1] = limit;
//             }
//         }
//     } else {
//         if (*(s32 *) ((char *) arg0 + arg1 * 4 + arg2 * 4 + 0x3CA0) == 2 &&
//             *(s32 *) ((char *) arg0 + arg1 * 4 + arg2 * 4 + 0x3CA8) == 0) {
//             part[0] = tbl2[2] * 3 + 3;
//         } else {
//             part[0] = tbl1[7] + 1;
//         }
//         if (limit < part[0]) {
//             part[0] = limit;
//         }
//         part[1] = limit;
//     }
//
//     part[2] = limit;
//     pos = 0;
//     outp = (s16 *) ((char *) arg0 + arg2 * 1156 + 0x3F94);
//     outq = (u8 *) ((char *) arg0 + arg2 * 578 + 0x4418);
//
//     j = 0;
//     do {
//         v = *(s32 *) ((char *) arg0 + arg1 * 12 + arg2 * 12 + j * 4 + 0x3CB0);
//         w = D_800AE7B8[v];
//         end = part[j];
//         if (D_800E0E20[v] == 0) {
//             count = end - pos;
//             bzero(outp, count * 2);
//             outp += count;
//             outq += count;
//             pos = end;
//         } else {
//             pos = func_151F8994((char *) arg0 + 0x1C, (char *) arg0 + 0x2020, v, pos,
//                                 w, end, &outp, &outq);
//         }
//     } while (++j < 3);
//
//     v = *(s32 *) ((char *) arg0 + arg1 * 4 + arg2 * 4 + 0x3D00) + 0x20;
//     bitPos2 = *(s32 *) ((char *) arg0 + arg1 * 4 + arg2 * 4 + 0x3C78) + savedBitPos;
//     pos = func_151F8B4C((char *) arg0 + 0x1C, (char *) arg0 + 0x2020, v, pos,
//                         bitPos2, &outp, &outq);
//     *(s32 *) ((char *) arg0 + 0x2020) = bitPos2;
//
//     if (pos >= 0x241) {
//         *(s32 *) ((char *) arg0 + arg2 * 4 + 0x465C) = 0x240;
//     } else {
//         *(s32 *) ((char *) arg0 + arg2 * 4 + 0x465C) = pos;
//     }
//
//     if (pos < 0x240) {
//         *(s32 *) ((char *) arg0 + arg2 * 4 + 0x4660) = 0x240 - pos;
//         bzero(outp, *(s32 *) ((char *) arg0 + arg2 * 4 + 0x4660) * 2);
//     } else {
//         *(s32 *) ((char *) arg0 + arg2 * 4 + 0x4660) = 0;
//     }
//
//     return 1;
// }

extern s32 *D_800E0E20;
extern f32 *D_800E1078;

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
// In-place complex rotation over the 0x20 slot buffers: for each slot k
// it walks 8 conjugate pairs straddling the slot's base pointer and
// applies the twiddle from the D_800B067C / D_800B069C coefficient
// tables. Bails out early when the channel is already active in mode 2.
s32 func_151F6B28(void *arg0, s32 arg1, s32 arg2) {
    s32 k;
    f32 *p;
    f32 a;
    f32 b;

    if (*(s32 *) ((char *) arg0 + arg1 * 4 + arg2 * 4 + 0x3C98) != 0 &&
        *(s32 *) ((char *) arg0 + arg1 * 4 + arg2 * 4 + 0x3CA0) == 2) {
        return 1;
    }

    k = 1;
    do {
        p = (f32 *) ((char *) arg0 + arg2 * 2304 + k * 72 + 0x4F64);

        a = p[0];
        b = p[-1];
        p[-1] = b * D_800B069C[0] - D_800B067C[0] * a;
        p[0] = a * D_800B069C[0] + D_800B067C[0] * b;

        a = p[1];
        b = p[-2];
        p[-2] = b * D_800B069C[1] - D_800B067C[1] * a;
        p[1] = a * D_800B069C[1] + D_800B067C[1] * b;

        a = p[2];
        b = p[-3];
        p[-3] = b * D_800B069C[2] - D_800B067C[2] * a;
        p[2] = a * D_800B069C[2] + D_800B067C[2] * b;

        a = p[3];
        b = p[-4];
        p[-4] = b * D_800B069C[3] - D_800B067C[3] * a;
        p[3] = a * D_800B069C[3] + D_800B067C[3] * b;

        a = p[4];
        b = p[-5];
        p[-5] = b * D_800B069C[4] - D_800B067C[4] * a;
        p[4] = a * D_800B069C[4] + D_800B067C[4] * b;

        a = p[5];
        b = p[-6];
        p[-6] = b * D_800B069C[5] - D_800B067C[5] * a;
        p[5] = a * D_800B069C[5] + D_800B067C[5] * b;

        a = p[6];
        b = p[-7];
        p[-7] = b * D_800B069C[6] - D_800B067C[6] * a;
        p[6] = a * D_800B069C[6] + D_800B067C[6] * b;

        a = p[7];
        b = p[-8];
        p[-8] = b * D_800B069C[7] - D_800B067C[7] * a;
        p[7] = a * D_800B069C[7] + D_800B067C[7] * b;
    } while (++k < 0x20);

    return 1;
}
#pragma GLOBAL_ASM("asm/nonmatchings/game_221290/func_151F6FD0.s")
// NON-MATCHING (JUSTREG): 427/427 instructions and structurally an
// exact match - with register names normalized away only TWO of the 427
// lines differ, and both are the D_800E0E38 relocation immediate.
//
// Layer-3 frame decode: reads the frame via func_151F7F60, sets the bit
// cursor from the main_data offset, runs side-info + scalefactor decode
// per channel, applies stereo processing, then per channel does the
// alias reduction / IMDCT (func_151F9BF0 for short blocks, func_151F8CF0
// otherwise, the latter taking a window from D_800E0E38), carries the
// overlap halves forward, and emits the PCM block.
//
// The entire remaining difference is register numbering, all of it
// cascading from ONE instruction: target computes the initial `outp`
// address as `addu t9,t6,t8` (arg0 first) where this build emits
// `addu t9,t8,t6` (the scaled offset first). Writing the pointer
// arithmetic the other way round (`offset + (char *) arg0`) does not
// move it - that matches func_151F7F60 and func_151F86B0 in this same
// file, where the identical swapped-`addu` was also immune to every
// phrasing tried. Once that one register pairing differs, every later
// allocation follows it, which is why the raw word diff looks large
// while the normalized diff is two lines.
#pragma GLOBAL_ASM("asm/nonmatchings/game_221290/func_151F78B4.s")
// s32 func_151F78B4(void *arg0) {
//     s32 n;
//     s32 gr;
//     s32 ch;
//     s32 nbands;
//     s32 tmp;
//     s32 mode;
//     s32 i;
//     s32 k;
//     s16 *outp;
//     f32 buf[0x240];
//     f32 scale;
//     f32 inv;
//     f32 one;
//     s32 s;
//     s32 v;
//
//     gr = 0;
//     outp = (s16 *) ((char *) arg0 + *(s32 *) ((char *) arg0 + 0x3BA0) * 1160 + 0x2070);
//
//     n = func_151F7F60(arg0);
//     if (n == 0) {
//         return 0;
//     }
//
//     *(s32 *) ((char *) arg0 + 0x2020) = (n - *(s32 *) ((char *) arg0 + 0x3BF4)) * 8;
//     if (*(s32 *) ((char *) arg0 + 0x2020) < 0) {
//         return 1;
//     }
//
//     for (ch = 0; ch < *(s32 *) ((char *) arg0 + 0x3F8C); ch++) {
//         func_151F63C4(arg0, gr, ch);
//         func_151F42E8(arg0, gr, ch);
//     }
//
//     func_151F6970(arg0, gr);
//
//     if (*(s32 *) ((char *) arg0 + gr * 4 + 0x3C98) != 0 &&
//         *(s32 *) ((char *) arg0 + gr * 4 + 0x3CA0) == 2) {
//         nbands = 0x20;
//     } else {
//         tmp = (*(s32 *) ((char *) arg0 + 0x465C) - 1) / 0x12 + 1;
//         nbands = tmp;
//     }
//
//     for (ch = 0; ch < *(s32 *) ((char *) arg0 + 0x3F8C); ch++) {
//         func_151F6B28(arg0, gr, ch);
//
//         if (*(s32 *) ((char *) arg0 + gr * 4 + ch * 4 + 0x3C98) != 0 &&
//             *(s32 *) ((char *) arg0 + gr * 4 + ch * 4 + 0x3CA0) == 2 &&
//             *(s32 *) ((char *) arg0 + gr * 4 + ch * 4 + 0x3CA8) != 0) {
//             mode = 0;
//         } else if (*(s32 *) ((char *) arg0 + gr * 4 + ch * 4 + 0x3C98) == 0) {
//             mode = 0;
//         } else {
//             mode = *(s32 *) ((char *) arg0 + gr * 4 + ch * 4 + 0x3CA0);
//         }
//
//         if (mode == 2) {
//             for (i = 0; i < 2; i++) {
//                 func_151F9BF0((char *) arg0 + ch * 2304 + i * 72 + 0x4F64, i,
//                               (char *) buf + i * 72,
//                               (char *) arg0 + ch * 2304 + i * 72 + 0x6A64);
//             }
//         } else {
//             for (i = 0; i < 2; i++) {
//                 func_151F8CF0((char *) arg0 + ch * 2304 + i * 72 + 0x4F64, i,
//                               (char *) buf + i * 72,
//                               (char *) arg0 + ch * 2304 + i * 72 + 0x6A64,
//                               (char *) D_800E0E38 + mode * 144);
//             }
//         }
//
//         if (*(s32 *) ((char *) arg0 + gr * 4 + ch * 4 + 0x3C98) != 0 &&
//             *(s32 *) ((char *) arg0 + gr * 4 + ch * 4 + 0x3CA0) == 2 &&
//             *(s32 *) ((char *) arg0 + gr * 4 + ch * 4 + 0x3CA8) != 0) {
//             mode = 2;
//         }
//
//         if (mode == 2) {
//             for (i = 2; i < nbands; i++) {
//                 func_151F9BF0((char *) arg0 + ch * 2304 + i * 72 + 0x4F64, i,
//                               (char *) buf + i * 72,
//                               (char *) arg0 + ch * 2304 + i * 72 + 0x6A64);
//             }
//         } else {
//             for (i = 2; i < nbands; i++) {
//                 func_151F8CF0((char *) arg0 + ch * 2304 + i * 72 + 0x4F64, i,
//                               (char *) buf + i * 72,
//                               (char *) arg0 + ch * 2304 + i * 72 + 0x6A64,
//                               (char *) D_800E0E38 + mode * 144);
//             }
//         }
//
//         while (i < 0x20) {
//             bcopy((char *) arg0 + ch * 2304 + i * 72 + 0x6A64, (char *) buf + i * 72, 0x48);
//             bzero((char *) arg0 + ch * 2304 + i * 72 + 0x6A64, 0x48);
//             i++;
//         }
//
//         scale = 65536.0f;
//         one = 1.0f;
//         v = (s32) (scale * one * 16.0f);
//         *outp = v >> 16;
//         outp++;
//         *outp = v & 0xFFFF;
//         outp++;
//         v = -v;
//         *outp = v >> 16;
//         outp++;
//         *outp = v & 0xFFFF;
//         outp++;
//         inv = 2048.0f / one;
//
//         for (k = 0; k < 0x12; k++) {
//             for (i = 0; i < 0x20; i++) {
//                 s = (s32) (*(f32 *) ((char *) buf + i * 72 + k * 4) * inv);
//                 *outp = s;
//                 outp++;
//             }
//         }
//     }
//
//     return 1;
// }

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
// Frame sync + header parse. Scans the input stream a byte at a time for
// the 0xFF / 0xF0 sync pattern (resetting on any mismatch), reads the
// two header bytes, then pulls the twelve header bitfields into
// unk3BA4..unk3BD0. Re-syncs recursively on a reserved bitrate/sample
// rate, or when the header disagrees with the first one seen. Finally
// installs the per-layer decode hooks and runs the layer's own init.
s32 func_151F8088(void *arg0, s32 arg1) {
    s32 sync;
    s32 n;
    s32 r;
    u8 mask;

    if (arg1 != -1) {
        *(s32 *) ((char *) arg0 + 0x18) = arg1;
    }

    sync = arg1;
    n = 0;
    mask = 0xFF;

    for (;;) {
        r = ((s32 (*)(void *, void *, s32, s32)) *(void **) ((char *) arg0 + 4))(
                *(void **) arg0, (char *) arg0 + n + 0x2024, 1, sync);
        if (r <= 0) {
            return 0;
        }
        sync = -1;
        *(s32 *) ((char *) arg0 + 0x18) += 1;

        if (*(u8 *) ((char *) arg0 + n + 0x2024) != 0xFF &&
            *(u8 *) ((char *) arg0 + n + 0x2024) != 0xF3) {
            return 0;
        }

        if ((*(u8 *) ((char *) arg0 + n + 0x2024) & mask) != mask) {
            mask = 0xFF;
            n = 0;
            continue;
        }
        n++;
        if (mask == 0xF0) {
            break;
        }
        mask = 0xF0;
    }

    r = ((s32 (*)(void *, void *, s32, s32)) *(void **) ((char *) arg0 + 4))(
            *(void **) arg0, (char *) arg0 + 0x2026, 2, -1);
    if (r <= 0) {
        return 0;
    }
    *(s32 *) ((char *) arg0 + 0x18) += 2;
    *(s32 *) ((char *) arg0 + 0x2064) = 0xC;

    *(s32 *) ((char *) arg0 + 0x3BA4) = func_151F8960((char *) arg0 + 0x2024, (char *) arg0 + 0x2064, 1);
    *(s32 *) ((char *) arg0 + 0x3BA8) = func_151F8960((char *) arg0 + 0x2024, (char *) arg0 + 0x2064, 2);
    *(s32 *) ((char *) arg0 + 0x3BAC) = func_151F8960((char *) arg0 + 0x2024, (char *) arg0 + 0x2064, 1);
    *(s32 *) ((char *) arg0 + 0x3BB0) = func_151F8960((char *) arg0 + 0x2024, (char *) arg0 + 0x2064, 4);
    *(s32 *) ((char *) arg0 + 0x3BB4) = func_151F8960((char *) arg0 + 0x2024, (char *) arg0 + 0x2064, 2);
    *(s32 *) ((char *) arg0 + 0x3BB8) = func_151F8960((char *) arg0 + 0x2024, (char *) arg0 + 0x2064, 1);
    *(s32 *) ((char *) arg0 + 0x3BBC) = func_151F8960((char *) arg0 + 0x2024, (char *) arg0 + 0x2064, 1);
    *(s32 *) ((char *) arg0 + 0x3BC0) = func_151F8960((char *) arg0 + 0x2024, (char *) arg0 + 0x2064, 2);
    *(s32 *) ((char *) arg0 + 0x3BC4) = func_151F8960((char *) arg0 + 0x2024, (char *) arg0 + 0x2064, 2);
    *(s32 *) ((char *) arg0 + 0x3BC8) = func_151F8960((char *) arg0 + 0x2024, (char *) arg0 + 0x2064, 1);
    *(s32 *) ((char *) arg0 + 0x3BCC) = func_151F8960((char *) arg0 + 0x2024, (char *) arg0 + 0x2064, 1);
    *(s32 *) ((char *) arg0 + 0x3BD0) = func_151F8960((char *) arg0 + 0x2024, (char *) arg0 + 0x2064, 2);

    if (*(s32 *) ((char *) arg0 + 0x3BB0) == 0xF ||
        *(s32 *) ((char *) arg0 + 0x3BB4) == 3) {
        return func_151F8088(arg0, -1);
    }

    if (*(s32 *) ((char *) arg0 + 0x3BD4) == 0) {
        *(s32 *) ((char *) arg0 + 0x3BD4) = 1;
        *(s32 *) ((char *) arg0 + 0x3BD8) = *(s32 *) ((char *) arg0 + 0x3BA4);
        *(s32 *) ((char *) arg0 + 0x3BDC) = *(s32 *) ((char *) arg0 + 0x3BA8);
        *(s32 *) ((char *) arg0 + 0x3BE0) = *(s32 *) ((char *) arg0 + 0x3BAC);
        *(s32 *) ((char *) arg0 + 0x3BE4) = *(s32 *) ((char *) arg0 + 0x3BB4);
        *(s32 *) ((char *) arg0 + 0x3BE8) = *(s32 *) ((char *) arg0 + 0x3BC0);
        *(s32 *) ((char *) arg0 + 0x3BEC) = *(s32 *) ((char *) arg0 + 0x3BC8);
        *(s32 *) ((char *) arg0 + 0x3BF0) = *(s32 *) ((char *) arg0 + 0x3BCC);
    } else if (*(s32 *) ((char *) arg0 + 0x3BD8) != *(s32 *) ((char *) arg0 + 0x3BA4) ||
               *(s32 *) ((char *) arg0 + 0x3BDC) != *(s32 *) ((char *) arg0 + 0x3BA8) ||
               *(s32 *) ((char *) arg0 + 0x3BE0) != *(s32 *) ((char *) arg0 + 0x3BAC) ||
               *(s32 *) ((char *) arg0 + 0x3BE4) != *(s32 *) ((char *) arg0 + 0x3BB4) ||
               *(s32 *) ((char *) arg0 + 0x3BE8) != *(s32 *) ((char *) arg0 + 0x3BC0) ||
               *(s32 *) ((char *) arg0 + 0x3BF0) != *(s32 *) ((char *) arg0 + 0x3BCC)) {
        return func_151F8088(arg0, -1);
    }

    *(s32 *) ((char *) arg0 + 0x2068) = 4;

    if (*(s32 *) ((char *) arg0 + 0x3BAC) == 0) {
        r = ((s32 (*)(void *, void *, s32, s32)) *(void **) ((char *) arg0 + 4))(
                *(void **) arg0, (char *) arg0 + 0x2028, 2, -1);
        if (r <= 0) {
            return 0;
        }
        *(s32 *) ((char *) arg0 + 0x18) += 2;
        *(s32 *) ((char *) arg0 + 0x2064) += 0x10;
        *(s32 *) ((char *) arg0 + 0x2068) = 6;
    }

    if (*(s32 *) ((char *) arg0 + 0x3BA8) == 1) {
        *(s32 *) ((char *) arg0 + 0x8478) = (s32) func_151F78B4;
        *(s32 *) ((char *) arg0 + 0x847C) = (s32) func_151F6FD0;
    } else if (*(s32 *) ((char *) arg0 + 0x3BA8) == 2) {
        return 0;
    } else if (*(s32 *) ((char *) arg0 + 0x3BA8) == 3) {
        return 0;
    }

    if (((s32 (*)(void *)) *(void **) ((char *) arg0 + 0x847C))(arg0) == 0) {
        return 0;
    }

    return 1;
}
// Init for the fixed-address global buffer D_800E1880: sets
// unkC/unk10/unk14 to -1, copies the 3 args into unk0/unk4/unk8, zeroes
// unk201C/unk2020/unk3BA0, bails if func_151F8088(ptr, 0) fails, then
// zeroes unk8474 and bzero's a 0x900-byte region at +0x6A64.

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

