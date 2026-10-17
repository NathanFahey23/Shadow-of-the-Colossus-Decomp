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

typedef struct ObjectBlock {
    u8 pad0[0x38];
    s32 field38;
    void *cb;
    u8 pad40[0x198];
    s32 next;
    s32 count;
    Entry58 *entries_ptr;
    Entry58 entries[3];
} ObjectBlock;

void func_0012D9C0(void);
void func_0012D7F0(Entry58 *entry, s16 arg1, s16 arg2, void *arg3);

void func_0012DA00(ObjectBlock *obj) {
    obj->cb = func_0012D9C0;
    obj->field38 = 1;
    func_0012D7F0(&obj->entries[0], 4, 0, obj);
    func_0012D7F0(&obj->entries[1], 9, 1, obj);
    func_0012D7F0(&obj->entries[2], 10, 2, obj);
    obj->next = 0;
    obj->entries_ptr = &obj->entries[0];
    obj->count = 3;
}
