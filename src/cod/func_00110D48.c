#include "common.h"

typedef struct TimerSlot {
    struct TimerSlot *next;
    struct TimerSlot *prev;
    volatile s32 key;
    s32 flags;
    s64 start;
    s64 accum;
    u64 compare;
    void *callback;
    void *gp;
    void *opt;
} TimerSlot;

typedef struct TimerGlobal {
    u64 unk0;
    s32 unk8;
    volatile s32 key_counter;
    volatile s32 alloc_count;
    TimerSlot *free_list;
    TimerSlot *active_list;
    volatile s32 current_handle;
} TimerGlobal;

extern TimerGlobal D_00133918;

s32 func_00110D48(void) {
    TimerSlot *slot = D_00133918.free_list;
    if (slot == 0) {
        return 0x80008005;
    }
    D_00133918.alloc_count++;
    D_00133918.free_list = slot->next;
    slot->callback = 0;
    slot->flags = 0;
    slot->accum = 0;
    D_00133918.key_counter++;
    slot->key = ((D_00133918.key_counter << 1) & 0x3FE) | 1;
    return ((s32)slot << 4) | slot->key;
}
