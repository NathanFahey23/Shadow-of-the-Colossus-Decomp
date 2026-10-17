#include "common.h"

/* machine draft (m2c), tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

s32 func_0010FB20();                                /* extern */
M2C_UNK func_0010FB70();                            /* extern */
s32 func_00110EF0(s32, s32);                        /* extern */

s32 func_00110F40(s32 arg0, s32 arg1) {
    s32 temp_16;
    s32 temp_18;

    temp_18 = func_0010FB20();
    temp_16 = func_00110EF0(arg0, arg1);
    if (temp_18 != 0) {
        func_0010FB70();
    }
    return temp_16;
}
