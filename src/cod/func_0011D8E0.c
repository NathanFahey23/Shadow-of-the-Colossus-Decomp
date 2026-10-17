#include "common.h"

struct Entry_0011D8E0 {
    u8 pad[0x888];
    s32 field_888;
    s32 field_88C;
    u8 pad2[0x898 - 0x890];
};

extern struct Entry_0011D8E0 D_0015DF48[];

s32 func_00121E88(void);
s32 func_00120490(s32);
s32 func_001204B0(s32, s32, void *);
void func_00121698(s32);

u32 func_0011D8E0(s32 arg0) {
    s32 *new_var;
    s32 offset;
    struct Entry_0011D8E0 *entry;

    if (!func_00121E88()) {
        return 0x81010013;
    }
    if (!func_00120490(arg0)) {
        return 0x81019003;
    }
    offset = arg0 * sizeof(struct Entry_0011D8E0);
    entry = (struct Entry_0011D8E0 *)((u8 *)D_0015DF48 - (-offset));
    if (entry->field_888 == 1) {
        return 0x81019003;
    }
    new_var = &((struct Entry_0011D8E0 *)(((u8 *)(entry = D_0015DF48)) + offset))->field_88C;
    if ((u32)*new_var == 0) {
        return 0x8101002F;
    }
    if (!func_001204B0(arg0, offset, D_0015DF48)) {
        return 0x81010013;
    }
    func_00121698(arg0);
    return 0;
}
