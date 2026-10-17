#include "common.h"

s32 func_00118380(s32, s32, void *, s32, s32);
s32 func_00118928(s32 arg0, s32 *arg1, s32 arg2, s32 arg3) {
    arg1[0] = arg2;
    arg1[1] = arg3;
    if (func_00118380(arg0, 3, arg1, 8, 4) >= 0) {
        goto label;
    }
    return -0x21E;
label:
    return *arg1;
}
