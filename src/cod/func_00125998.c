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

u8 *func_00125998(u8 *arg0, s32 *arg1) {
    s32 var_6;
    s32 var_7;
    u8 *var_4;
    u8 temp_3;
    u8 temp_3_2;

    temp_3 = *arg0;
    var_4 = arg0 + 1;
    var_7 = 0;
    var_6 = temp_3 & 0x7F;
    if (temp_3 & 0x80) {
        do {
            temp_3_2 = *var_4;
            var_4 += 1;
            var_7 += 7;
            var_6 |= (temp_3_2 & 0x7F) << var_7;
        } while (temp_3_2 & 0x80);
    }
    *arg1 = var_6;
    return var_4;
}
