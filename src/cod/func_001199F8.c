#include "common.h"

struct Entry_001199F8 {
    u8 pad[0x10];
    s32 flags;
    struct Entry_001199F8 *self;
    s32 id;
    u8 pad2[0x40 - 0x1C];
};

struct Pool_001199F8 {
    s32 next_id;
    struct Entry_001199F8 *entries;
    s32 count;
};

s32 func_0010FB20(void);
s32 func_0010FB70(void);

struct Entry_001199F8 *func_001199F8(struct Pool_001199F8 *pool) {
    s32 i;
    struct Entry_001199F8 *entry;
    s32 id;

    func_0010FB20();

    entry = pool->entries;
    for (i = 0; i < pool->count; i++, entry++) {
        if (!(entry->flags & 1)) {
            entry->flags = (i << 16) | 5;
            if (++pool->next_id == 1) {
                pool->next_id++;
                id = 1;
            } else {
                id = pool->next_id;
            }
            entry->self = entry;
            entry->id = id;
            func_0010FB70();
            return entry;
        }
    }

    func_0010FB70();
    return (struct Entry_001199F8 *)0;
}
