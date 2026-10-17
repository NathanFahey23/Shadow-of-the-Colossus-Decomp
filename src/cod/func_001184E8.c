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

M2C_UNK func_00128FB0(s32, s32);                    /* extern */
s32 func_001290C4(s32);                             /* extern */

s32 func_001184E8(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_16;
    s32 temp_18;
    s32 temp_19;

    temp_19 = arg2 * 4;
    temp_18 = M2C_FIELD(arg0, s32 *, 0x30) - temp_19;
    if (arg3 == 0) {
        return 0;
    }
    temp_16 = func_001290C4(arg3) + 1;
    if ((temp_16 < 0) || (temp_18 < temp_16)) {
        return -0x21F;
    }
    func_00128FB0(arg1 + temp_19, arg3);
    return temp_16;
}
