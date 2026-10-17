#include "common.h"

s32 func_00118380(s32, s32, void *, s32, s32);

s32 func_00119410(s32 arg0, s32 *arg1) {
    if (func_00118380(arg0, 0x1F, arg1, 0, 4) >= 0) {
        goto label;
    }
    return -0x21E;
label:
    return *arg1;
}
