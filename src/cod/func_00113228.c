#include "common.h"

struct StreamObj {
    u128 *cursor;
    u8 pad[0x10];
    u128 *last;
};

void func_00113228(struct StreamObj *arg0, u128 arg1) {
    *arg0->cursor = arg1;
    arg0->last = arg0->cursor;
    arg0->cursor++;
}
