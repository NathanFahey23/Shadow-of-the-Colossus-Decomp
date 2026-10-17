#include "common.h"

s32 func_0011B150(s32, s32, u16);
void func_0011B670(s32, s32, void *);

s32 func_0011BA28(s32 arg0, s32 arg1, u16 arg2) {
    s32 val = func_0011B150(arg0, arg1, arg2);
    if (val != 0) {
        return val;
    }
    func_0011B670(0, 0, &val);
    return val;
}
