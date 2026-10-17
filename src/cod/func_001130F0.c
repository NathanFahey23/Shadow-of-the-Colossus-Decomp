#include "common.h"

typedef struct {
    u32 *ptr;
    u32 pad4;
    u32 *f8;
    u32 fC;
} PacketStruct;

u32 *func_00113098(void *);

void func_001130F0(PacketStruct *arg0, u32 arg1) {
    u32 *ptr;
    arg0->f8 = func_00113098(arg0);
    ptr = arg0->ptr;
    *ptr++ = arg1 | 0x10000000;
    arg0->fC = 0;
    arg0->ptr = ptr + 1;
    *ptr = 0;
}
