#include "common.h"

s32 func_0010FB20(void);
void func_0010FB70(void);
s32 func_00110D48(void);

s32 func_00110DB8(void) {
    s32 temp_16;
    s32 temp_17;

    temp_16 = func_0010FB20();
    temp_17 = func_00110D48();
    if (temp_16 != 0) {
        func_0010FB70();
    }
    return temp_17;
}
