#include "common.h"

// AS: 2.10
extern u8 D_00135638[];
s32 func_00120D10(s32, s32, s32);

s32 func_00120D58(s32 arg0, s32 arg1) {
    u8 *p = D_00135638 + arg0 * 0x184;
    u16 a = *(u16 *)(p + 0x2A);
    return func_00120D10(arg0, (arg1 * a) / *(u16 *)(p + 0x2C), a);
}
