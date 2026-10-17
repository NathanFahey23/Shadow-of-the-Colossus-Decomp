#include "common.h"

// TARGET: 0x001185A8
// TC: 2.9
// -G0
// -O2

s32 func_00118438(void *, void *, s32, void *, s32);
s32 func_00118380(void *, s32, void *, s32, s32);
s32 func_00118490(void *, void *, void *, s32, s32);

s32 func_001185A8(void *arg0, s32 *arg1, void *arg2, s32 arg3, s32 arg4) {
    s32 shift;
    s32 res;

    shift = arg3 * 8;
    arg1[1] = arg4;
    arg1[0] = arg3;

    res = func_00118438(arg0, arg1, 2, arg2, shift);
    if (res < 0) {
        return res;
    }

    if (func_00118380(arg0, 0x14, arg1, shift + 8, shift | 4) < 0) {
        return -0x21E;
    }

    res = func_00118490(arg0, arg2, arg1, 2, shift);
    if (res >= 0) {
        return arg1[0];
    }
    return res;
}
