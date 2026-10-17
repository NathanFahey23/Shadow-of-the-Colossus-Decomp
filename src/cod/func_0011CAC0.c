#include "common.h"

struct rect {
    s32 w;
    s32 h;
    s32 pitch;
    s32 unkC;
};

s32 func_001211B8(s32, struct rect *);

s32 func_0011CAC0(s32 arg0, void *arg1) {
    struct rect r;
    r.w = *(u16 *)((u8 *)arg1 + 0x28);
    r.h = *(u16 *)((u8 *)arg1 + 0x2C);
    r.pitch = (*(s32 *)((u8 *)arg1 + 0x30) << 10) / *(u16 *)((u8 *)arg1 + 0x28);
    r.unkC = 1;
    return func_001211B8(arg0, &r);
}
