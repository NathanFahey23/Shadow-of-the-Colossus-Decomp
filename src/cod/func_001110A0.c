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

void func_00110998(TimerSlot *);
void func_00110780(s64);
s64 func_00110C78(void);

s32 func_001110A0(s32 handle) {
    s64 now;
    u32 flags;
    TimerSlot *slot = (TimerSlot *)(((u32)handle >> 10) << 6);
    if (handle < 0 || (handle & 0x3FF) != slot->key) {
        return 0x80008002;
    }
    if (D_00133918.current_handle == handle) {
        return 0x80000010;
    }
    if (!(slot->flags & 1)) {
        return 0;
    }
    now = func_00110C78();
    flags = slot->flags;
    slot->accum += now - slot->start;
    slot->flags = flags & 0xFFFFFFFEU;
    if (flags & 2) {
        func_00110998(slot);
        func_00110780(now);
    }
    return 1;
}
