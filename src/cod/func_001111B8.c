#include "common.h"

typedef struct TimerSlot {
    struct TimerSlot *next;
    struct TimerSlot *prev;
    volatile u32 key;
    u32 flags;
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
    volatile u32 key_counter;
    volatile u32 alloc_count;
    TimerSlot *free_list;
    TimerSlot *active_list;
    volatile s32 current_handle;
} TimerGlobal;

extern TimerGlobal D_00133918;
s64 func_00110C78(void);
s32 func_0010FB20(void);
void func_0010FB70(void);

s64 func_001111B8(s32 handle, s64 new_accum) {
    TimerSlot *slot;
    s64 old_accum;
    s32 intr;

    slot = (TimerSlot *)(((u32)handle >> 10) << 6);
    intr = func_0010FB20();
    if (handle < 0 || (handle & 0x3FF) != slot->key || D_00133918.current_handle == handle) {
        if (intr) {
            func_0010FB70();
        }
        return -1;
    }
    old_accum = slot->accum;
    if (slot->flags & 1) {
        s64 now = func_00110C78();
        old_accum += now - slot->start;
        slot->start = now;
        slot->accum = new_accum;
    } else {
        slot->accum = new_accum;
    }
    if (intr) {
        func_0010FB70();
    }
    return old_accum;
}
