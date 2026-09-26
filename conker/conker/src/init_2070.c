#include <ultra64.h>

#include "functions.h"
#include "variables.h"
#include "libc/stdarg.h"


s32 func_10002070(s32 arg0, s32 arg1, s32 arg2) {
    return 1;
}

// A debug print, libultra's osSyncPrintf in shape: formats `fmt` and its arguments
// with func_100020D0 (the formatter), sending the output to func_10002070, which
// only returns 1, so in this build nothing is printed anywhere. Its only caller is
// _n_handleEvent's "snd %d has been freed too early" warning. It first clears
// D_80035500, which nothing else refers to.
void func_10002088(const char *fmt, ...) {
    va_list args;

    va_start(args, fmt);
    D_80035500 = 0;
    func_100020D0(func_10002070, NULL, fmt, args);
    va_end(args);
}

// this is a beast:
#pragma GLOBAL_ASM("asm/nonmatchings/init_2070/func_100020D0.s")

// contains a jump table
#pragma GLOBAL_ASM("asm/nonmatchings/init_2070/func_10002718.s")
