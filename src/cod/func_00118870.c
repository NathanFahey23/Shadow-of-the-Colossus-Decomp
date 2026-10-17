#include "common.h"

s32 func_00118438(s32, void *, s32, void *, s32);
s32 func_00118380(s32, s32, void *, s32, s32);

s32 func_00118870(s32 arg0, s32 *arg1, void *arg2) {
    s32 ret = func_00118438(arg0, arg1, 1, arg2, 0x40);
    if (ret < 0) {
        return ret;
    }
    if (func_00118380(arg0, 1, arg1, 0x44, 4) >= 0) {
        goto label;
    }
    return -0x21E;
label:
    if (*arg1 != 0) {
        return *arg1;
    }
    return -0x21C;
}
