#include "common.h"

typedef struct {
    u32 *ptr;
    u8 pad[8];
    u32 *fC;
} Struct1131A0;

void func_001132E8(void *, s32, s32);

void func_001131A0(Struct1131A0 *arg0, s32 arg1) {
    func_001132E8(arg0, 2, 3);
    *arg0->ptr = (arg1 != 0) ? 0xD0000000 : 0x50000000;
    arg0->fC = arg0->ptr;
    arg0->ptr++;
}
