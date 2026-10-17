#include "common.h"

struct StreamObj {
    u32 *cursor;
    u8 pad[0x10];
    u64 *last;
};

void func_00113240(struct StreamObj *obj) {
    u64 *last = obj->last;
    u32 *cursor = obj->cursor;
    u64 tag = *last;
    s32 diff = ((s32)cursor - (s32)last) >> 3;
    u64 type = (tag >> 58) & 3;
    u32 count = diff - 2;
    u32 *p;

    if (type != 1) {
        count >>= 1;
    }

    if (type != 2) {
        u32 align = tag >> 60;
        if (align == 0) {
            align = 16;
        }
        count = (count + align - 1) / align;
    }

    obj->last = NULL;
    *last = tag + (u32)count;

    p = cursor;
    while ((u32)p & 0xC) {
        *p++ = 0;
    }
    obj->cursor = p;
}
