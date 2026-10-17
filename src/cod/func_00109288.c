#include "common.h"

typedef struct {
    u8 data[64];
} Element;

typedef struct {
    u8 pad0[0x14];
    Element *elements;
    s32 count;
    u8 pad1[8];
    s32 index;
} RingBuffer;

void *func_00109288(RingBuffer *arg0) {
    s32 rem = arg0->index % arg0->count;
    void *ret = &arg0->elements[rem];
    arg0->index = rem + 1;
    return ret;
}
