#include "common.h"

// TARGET: 0x00118B48
// TC: 2.9
// -G0
// -O2

s32 func_00118438(void *, void *, s32, void *, s32);
s32 func_00118380(void *, s32, void *, s32, s32);

s32 func_00118B48(void *arg0, s32 *arg1, s32 arg2, void *arg3, s32 arg4, s32 *arg5, s32 arg6) {
    s32 res;

    arg1[0] = arg2;
    if (arg5 != (void *)0) {
        arg1[1] = *arg5;
    } else {
        arg1[1] = 0;
    }
    arg1[2] = arg4;
    arg1[3] = arg6;

    res = func_00118438(arg0, arg1, 4, arg3, arg4);
    if (res < 0) {
        return res;
    }

    if (func_00118380(arg0, 5, arg1, arg4 + 0x10, 8) < 0) {
        return -0x21E;
    }

    if (arg5 != (void *)0) {
        *arg5 = arg1[1];
    }
    return arg1[0];
}
