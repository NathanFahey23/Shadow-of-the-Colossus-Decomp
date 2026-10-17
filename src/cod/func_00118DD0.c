#include "common.h"

s32 func_00118380(s32, s32, void *, s32, s32);
s32 func_00118490(s32, void *, void *, s32, s32);

s32 func_00118DD0(s32 arg0, s32 *arg1, void *arg2, s32 arg3) {
    *arg1 = arg3;
    if (func_00118380(arg0, 8, arg1, 4, (arg3 << 2) + 4) >= 0) {
        goto label;
    }
    return -0x21E;
label:
    if (*arg1 >= 0) {
        s32 ret = func_00118490(arg0, arg2, arg1, 1, *arg1 << 2);
        if (ret >= 0) {
            return *arg1;
        }
        return ret;
    }
    return *arg1;
}
