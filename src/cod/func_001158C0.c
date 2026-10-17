#include "common.h"

typedef struct {
    u64 f0 : 14;
    u64 f1 : 2;
    u64 f2 : 8;
    u64 f3 : 8;
} CmdBits;

s32 func_00116B30(s32, CmdBits, s32 *, s32);

s32 func_001158C0(s32 arg0, s32 arg1) {
    s32 res;
    CmdBits bf;
    s32 ret;

    bf.f0 = 2;
    bf.f1 = 2;
    bf.f2 = 3;
    bf.f3 = 1;

    ret = func_00116B30(arg0, bf, &res, arg1);
    if (ret >= 0) {
        return res;
    }
    return ret;
}
