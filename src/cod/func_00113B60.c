#include "common.h"

typedef struct {
    s16 unk0;
    s16 unk2;
    s32 unk4;
    s32 unk8;
} GsState;

void func_00111D60(void);
s64 func_00111DF0(void);

s32 func_00113B60(void) {
    GsState *s = (GsState *)func_00113520();
    if (s->unk8 == 0) {
        func_00111D60();
        if (s->unk0 == 1) {
            return (*(volatile u64 *)0x12001000 >> 13) & 1;
        }
    } else {
        s64 bit = (func_00111DF0() >> 13) & 1;
        if (s->unk0 == 1) {
            return bit;
        }
    }
}
