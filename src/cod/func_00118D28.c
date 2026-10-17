#include "common.h"

s32 func_00118438(s32, void *, s32, void *, s32);
s32 func_00118380(s32, s32, void *, s32, s32);
s32 func_00118490(s32, void *, void *, s32, s32);

s32 func_00118D28(s32 arg0, s32 *arg1, s32 arg2, s32 arg3, void *arg4, s32 arg5) {
    s32 ret;

    arg1[0] = arg2;
    arg1[1] = arg3;
    arg1[2] = arg5;
    ret = func_00118438(arg0, arg1, 3, arg4, arg5);
    if (ret < 0) {
        return ret;
    }
    if (func_00118380(arg0, 0x13, arg1, arg5 + 0xC, arg5 + 0xC) < 0) {
        return -0x21E;
    }
    ret = func_00118490(arg0, arg4, arg1, 3, arg5);
    if (ret >= 0) {
        return arg1[0];
    }
    return ret;
}
