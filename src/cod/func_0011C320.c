#include "common.h"

// TARGET: 0x0011C320
// TC: 2.9
// -G0
// -O2

typedef struct {
    u8 pad0[0x400];
    u8 buf[0x400];
    s32 count;
    u8 pad804[0x90];
    s32 state;
} Struct898;

extern Struct898 D_0015DF48[];

s32 func_00120748(s32, void *, s32, s32);

s32 func_0011C320(s32 arg0) {
    if (D_0015DF48[arg0].count > 0 && D_0015DF48[arg0].state == 1) {
        if (func_00120748(arg0, D_0015DF48[arg0].buf, D_0015DF48[arg0].count, 1) == 0) {
            return 0;
        }
    }
    D_0015DF48[arg0].state = 0;
    return 1;
}
