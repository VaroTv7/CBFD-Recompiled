#include <ultra64.h>
#include "functions.h"
#include "variables.h"

// loops and loops
extern u8 D_800DCE50[];

void func_15008870(s32 arg0) {
    s32 lo;
    s32 hi;
    s32 row;
    s32 i;

    lo = 0;
    hi = 0x68;
    if (arg0 == 1) {
        hi = 0x65;
    } else if (arg0 == 2) {
        lo = 0x65;
    }

    for (row = 0; row != 2; row++) {
        for (i = lo; i < hi; i++) {
            *(s32 *) (D_800DCE50 + row * 0x1A0 + i * 4) = 0;
        }
    }
}
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
