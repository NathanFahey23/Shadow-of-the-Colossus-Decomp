#include "common.h"

typedef struct {
    u8 data[64];
} Element;

typedef struct {
    u8 pad0[0x14];
    Element *elements;
    s32 count;
    Element *other_elements;
    s32 max;
    s32 index;
} RingBuffer;

void *func_00109288();

void *func_001092B8(RingBuffer *arg0, s32 arg1) {
    void *ret;
    if (arg1 < 0 || arg1 >= arg0->max) {
        ret = func_00109288();
    } else {
        ret = &arg0->other_elements[arg1];
    }
    return ret;
}
