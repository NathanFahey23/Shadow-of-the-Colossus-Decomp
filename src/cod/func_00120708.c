#include "common.h"

// AS: 2.10
extern u8 D_00135638[];
s32 func_00121A70(s32, void *, s32, s32);

s32 func_00120708(s32 arg0, void *arg1, s32 arg2, s32 arg3) {
    u16 *p = (u16 *)(D_00135638 + arg0 * 0x184);
    s32 factor = p[0x2A / 2];
    return func_00121A70(arg0, arg1, arg2 * factor, factor * arg3);
}
