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
    s32 alloc_count;
    TimerSlot *free_list;
    TimerSlot *active_list;
    s32 current_handle;
} TimerGlobal;

extern TimerGlobal D_00133918;
void func_00110998(TimerSlot *);

s32 func_00110E00(s32 handle) {
    TimerSlot *slot = (TimerSlot *)(((u32)handle >> 10) << 6);
    if (handle < 0 || (handle & 0x3FF) != slot->key) {
        return 0x80008002;
    }
    if (D_00133918.current_handle == handle) {
        return 0x80000010;
    }
    if (slot->flags & 2) {
        func_00110998(slot);
    }
    slot->key = 0;
    slot->flags = 0;
    slot->next = D_00133918.free_list;
    D_00133918.free_list = slot;
    D_00133918.alloc_count--;
    return 0;
}
