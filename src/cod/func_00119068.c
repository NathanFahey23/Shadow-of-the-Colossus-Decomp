#include "common.h"

s32 func_00118380(s32, s32, void *, s32, s32);
s32 func_00118490(s32, void *, void *, s32, s32);

s32 func_00119068(s32 arg0, s32 *arg1, void *arg2, s32 arg3, s32 arg4) {
    arg1[1] = arg4;
    arg1[0] = arg3;
    if (func_00118380(arg0, 0x11, arg1, 8, arg3 + 4) < 0) {
        return -0x21E;
    }
    {
        s32 ret = func_00118490(arg0, arg2, arg1, 1, arg3);
        if (ret >= 0) {
            return arg1[0];
        }
        return ret;
    }
}
