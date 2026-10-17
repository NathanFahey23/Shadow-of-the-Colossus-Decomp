#include "common.h"

typedef struct TimerSlot {
    struct TimerSlot *next;
    struct TimerSlot *prev;
    volatile u32 key;
    u32 flags;
    u64 start;
    u64 accum;
    u64 compare;
    void *callback;
    void *gp;
    void *opt;
} TimerSlot;

typedef struct TimerGlobal {
    volatile u64 unk0;
    s32 unk8;
    volatile u32 key_counter;
    volatile u32 alloc_count;
    TimerSlot *free_list;
    TimerSlot *active_list;
    volatile s32 current_handle;
} TimerGlobal;

extern TimerGlobal D_00133918;

void func_00110910(TimerSlot *slot) {
    TimerSlot *prev = 0;
    TimerSlot *curr = D_00133918.active_list;
    u64 target = slot->compare + slot->start - slot->accum;

    while (curr != 0) {
        if (target < curr->compare + curr->start - curr->accum) {
            break;
        }
        prev = curr;
        curr = curr->next;
    }
    slot->prev = prev;
    slot->next = curr;
    if (curr != 0) {
        curr->prev = slot;
    }
    if (prev != 0) {
        prev->next = slot;
    } else {
        D_00133918.active_list = slot;
    }
}
