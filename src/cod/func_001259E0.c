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

u8 *func_001259E0(u8 *arg0, s32 *arg1) {
    s32 temp_2;
    s32 var_8;
    u32 var_7;
    u8 *var_4;
    u8 temp_6;

    var_4 = arg0;
    var_7 = 0;
    var_8 = 0;
    do {
        temp_6 = *var_4;
        var_4 += 1;
        temp_2 = (temp_6 & 0x7F) << var_7;
        var_7 += 7;
        var_8 |= temp_2;
    } while (temp_6 & 0x80);
    if ((var_7 < 0x20U) && (temp_6 & 0x40)) {
        var_8 |= -1 << var_7;
    }
    *arg1 = var_8;
    return var_4;
}
