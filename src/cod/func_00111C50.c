#include "common.h"

typedef struct {
    s32 field_0;
    u8 pad[12];
} Slot16;

extern Slot16 *D_00133938;
extern u32 D_0013393C;
extern Slot16 D_0014AC88[];

s32 func_00111C50(s32 arg0) {
    Slot16 *table;
    u32 limit;
    u32 index = arg0;

    if (arg0 < 0) {
        index = arg0 & 0x7FFFFFFF;
        table = D_0014AC88;
        limit = 0x20;
    } else {
        table = D_00133938;
        limit = D_0013393C;
    }
    if (index >= limit) {
        return -0x69;
    }
    table[index].field_0 = 0;
    return 0;
}
