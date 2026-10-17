#include "common.h"

s32 func_0010FB20(void);
void func_0010FB70(void);
void func_00108D68(void);
s32 func_00107FF8(void (*callback)(void), void *context, u32 limit, const char *format, void *args);

void func_00108E88(const char *format, void *args) {
    s32 context = 0;
    s32 state;
    state = func_0010FB20();
    func_00107FF8(func_00108D68, &context, 0xffffffffU, format, args);
    if (state) func_0010FB70();
}
