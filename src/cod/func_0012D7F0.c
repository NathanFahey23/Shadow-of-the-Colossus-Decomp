#include "common.h"

typedef struct Entry58 {
    s32 w0;
    s32 w4;
    s32 w8;
    s16 c;
    s16 e;
    s32 w10;
    s32 w14;
    s32 w18;
    void *self;
    void *fn0;
    void *fn1;
    void *fn2;
    void *fn3;
    u8 pad[0x24];
    void *obj;
} Entry58;

void func_0012FA40(void);
void func_0012FAA8(void);
void func_0012FB28(void);
void func_0012FB90(void);

void func_0012D7F0(Entry58 *entry, s16 arg1, s16 arg2, void *arg3) {
    entry->w0 = 0;
    entry->w4 = 0;
    entry->w8 = 0;
    entry->c = arg1;
    entry->e = arg2;
    entry->w10 = 0;
    entry->w14 = 0;
    entry->w18 = 0;
    entry->self = entry;
    entry->fn0 = func_0012FA40;
    entry->fn1 = func_0012FAA8;
    entry->fn2 = func_0012FB28;
    entry->fn3 = func_0012FB90;
    entry->obj = arg3;
}
