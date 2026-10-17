#include "common.h"

s32 func_00118438(s32, void *, s32, void *, s32);
s32 func_00118380(s32, s32, void *, s32, s32);
s32 func_00118578(s32, void *, s32);

s32 func_00118710(s32 arg0, s32 *arg1, s32 arg2, s32 arg3, void *arg4) {
    s32 ret;

    *arg1 = arg3;
    ret = func_00118438(arg0, arg1, 1, arg4, 0x10);
    if (ret < 0) {
        return ret;
    }
    if (func_00118380(arg0, 7, arg1, 0x14, arg3 + 0x14) < 0) {
        return -0x21E;
    }
    ret = func_00118578(arg2, arg1, 5);
    if (ret >= 0) {
        return *arg1;
    }
    return ret;
}
