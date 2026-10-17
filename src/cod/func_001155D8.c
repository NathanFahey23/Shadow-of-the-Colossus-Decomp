#include "common.h"

typedef struct {
    u8 b0;
    u8 b1;
    u8 b2;
    u8 b3;
    s32 w4;
    u8 pad8[0x14];
    u8 buf1c[0x20];
    u8 pad3c[0x40];
    s32 w7c;
} PadSub;

typedef struct {
    u8 pad[0x10];
    PadSub *sub;
    u8 pad14[0x320];
} PadSocket;

extern PadSocket D_0014B598[16];
void *func_001283D0(void *dest, s32 value, s32 size);

void func_001155D8(s32 arg0) {
    PadSub *sub = D_0014B598[arg0].sub;
    s32 i = 1;
    do {
        sub->b0 = 0;
        sub->w7c = 0;
        sub->b1 = 0;
        sub->b3 = 0;
        sub->b2 = 0;
        sub->w4 = 0;
        func_001283D0(sub->buf1c, 0xFF, 0x20);
        sub++;
        i--;
    } while (i >= 0);
}
