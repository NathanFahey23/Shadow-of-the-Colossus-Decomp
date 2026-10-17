#include "common.h"

s32 func_0011C4C8(s32, s32, s32 *);

s32 func_0011C510(s32 arg0, s32 arg1, s32 *arg2) {
    u32 ret = func_0011C4C8(arg0, arg1, arg2);
    u32 new_var;
    if (*arg2 != 0) {
        return 0;
    }
    new_var = ret;
    if (ret == 0xFFFFFFFF) {
        ret = 0xFFFFFFFF;
        *arg2 = 0x81010059;
        return ret;
    }
    ret = new_var & 0x7FFFFFFF;
    return ret;
}
