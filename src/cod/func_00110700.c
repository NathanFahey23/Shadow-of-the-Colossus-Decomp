#include "common.h"

s32 func_0010FB20(void);
void func_0010FB70(void);
void func_00110410(u32);

s32 func_00110700(void) {
    u32 mode;
    s32 intr = func_0010FB20();
    mode = *(volatile u32 *)0x10001010;
    if (!(mode & 0x80)) {
        if (intr) {
            func_0010FB70();
        }
        return 0;
    }
    func_00110410(mode & 0xFFFFF37FU);
    if (intr) {
        func_0010FB70();
    }
    return 1;
}
