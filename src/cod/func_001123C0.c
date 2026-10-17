#include "common.h"

typedef struct RingBuffer {
    u32 capacity;
    s32 count;
    u8 *read_ptr;
    u8 *write_ptr;
    u8 data[1];
} RingBuffer;

void func_001123C0(RingBuffer *s) {
    s->count--;
    s->read_ptr++;
    if (s->read_ptr == s->data + s->capacity) {
        s->read_ptr = s->data;
    }
}
