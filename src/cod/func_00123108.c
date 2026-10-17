#include "common.h"

void func_00107260(s32);
void func_001073A0(void *, s32);

void func_00123108(s32 arg0, s32 arg1, u32 size) {
    u32 dma[4];
    u32 rem = size & 0x3F;
    u32 aligned = size & ~0x3F;
    u32 adj = aligned + 0x40;
    if (rem == 0) {
        adj = aligned;
    }
    dma[0] = arg0;
    do {
        dma[1] = arg1;
    } while (0);
    do {
        dma[2] = adj;
        dma[3] = 0;
        func_00107260(0);
        func_001073A0(dma, 1);
    } while (0);
}
