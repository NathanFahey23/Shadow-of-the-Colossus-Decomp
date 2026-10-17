#include "common.h"

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 key;
    s32 flags;
    s64 end;
    s64 start;
} TimerSlot;

s64 func_00111288(s32 handle) {
    TimerSlot *slot = (TimerSlot *)(((u32)handle >> 10) << 6);
    if (handle < 0 || (handle & 0x3FF) != slot->key) {
        return -1;
    }
    if (slot->flags & 1) {
        return slot->end - slot->start;
    }
    return 0;
}
