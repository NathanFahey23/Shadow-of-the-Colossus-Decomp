#include "common.h"

typedef struct RingBuffer {
    u32 capacity;
    s32 count;
    u8 *read_ptr;
    u8 *write_ptr;
    u8 data[1];
} RingBuffer;

void func_00112380(RingBuffer *s) {
    s->count++;
    s->write_ptr++;
    if (s->write_ptr == s->data + s->capacity) {
        s->write_ptr = s->data;
    }
}
