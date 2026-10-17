#include "common.h"

struct ContextBlock {
    u8 *cursor;
    u8 pad[8];
    s32 *header;
};

void func_001131F8(struct ContextBlock *arg0) {
    u8 *cursor = arg0->cursor;
    s32 *header = arg0->header;
    cursor -= 4;
    arg0->header = NULL;
    *header += (u32)((cursor - (u8 *)header) >> 2) >> 2;
}
