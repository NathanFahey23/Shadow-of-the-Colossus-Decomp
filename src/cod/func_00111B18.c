#include "common.h"

extern void *D_00133938;
extern s32 D_0013393C;

s32 func_0010FB20(void);
void func_0010FB70(void);

void *func_00111B18(void *new_table, s32 count) {
    s32 flags;
    void *old_table;

    flags = func_0010FB20();
    old_table = D_00133938;
    D_00133938 = new_table;
    D_0013393C = count;
    func_001283D0(new_table, 0, count * 16);
    if (flags != 0) {
        func_0010FB70();
    }
    return old_table;
}
