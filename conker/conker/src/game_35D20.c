#include <ultra64.h>
#include "functions.h"
#include "variables.h"

// loops and loops
#pragma GLOBAL_ASM("asm/nonmatchings/game_35D20/func_15008870.s")
void func_15008930(s32 arg0) {
    void (**funcs)(void);
    s32 count;
    s32 i;

    if (arg0 == 1) {
        funcs = D_80082BD0;
        count = 1;
    } else if (arg0 == 2) {
        funcs = D_80082BD4;
        count = 1;
    } else {
        count = 0;
    }
    for (i = 0; i < count; i++) {
        funcs[i]();
    }
    D_800DD1B0 = -1;
}
