#include "common.h"

// TARGET: 0x0011CA30
// TC: 2.9
// -G0
// -O2

s32 func_0011C4C8(s32, u32, s32 *);

s32 func_0011CA30(s32 arg0, u32 arg1) {
    s32 res;
    s32 count;

    if (arg1 == 0xFFFFFFFF) {
        return 0;
    }

    count = 1;
    goto loop_entry;

loop_continue:
    count++;
    arg1 &= 0x7FFFFFFF;

loop_entry:
    arg1 = func_0011C4C8(arg0, arg1, &res);
    if (res != 0) {
        return res;
    }
    if (arg1 == 0xFFFFFFFF) {
        return count;
    }
    if ((s32)arg1 < 0) {
        goto loop_continue;
    }
    return 0x81019002;
}
