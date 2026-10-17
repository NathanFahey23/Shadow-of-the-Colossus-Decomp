#include "common.h"

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 key;
    s32 flags;
    s64 start;
    s64 accum;
} TimerSlot2;

s64 func_00110C78(void);

s64 func_00111320(s32 handle) {
    s64 res;
    TimerSlot2 *slot = (TimerSlot2 *)(((u32)handle >> 10) << 6);
    if (handle < 0 || (handle & 0x3FF) != slot->key) {
        return -1;
    }
    res = slot->accum;
    if (slot->flags & 1) {
        res += func_00110C78() - slot->start;
    }
    return res;
}
