#include "common.h"

typedef struct {
    u32 *ptr;
    u32 pad4;
    u32 *f8;
    u32 fC;
} PacketStruct;

u32 *func_00113098(PacketStruct *arg0) {
    u32 *p = arg0->ptr;
    u32 *f8 = arg0->f8;
    while ((u32)p & 0xC) {
        *p++ = 0;
    }
    if (f8 != 0) {
        s32 diff = ((s32)p - (s32)f8) >> 4;
        diff--;
        *f8 += diff;
    }
    arg0->ptr = p;
    arg0->f8 = 0;
    return p;
}
