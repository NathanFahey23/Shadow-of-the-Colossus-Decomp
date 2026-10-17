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

M2C_UNK func_00106FF0(s32);                         /* extern */
extern s32 D_00133A28;
extern s32 D_00150DC0;

s32 func_00115D28(void) {
    if (D_00133A28 == 0) {
        return 0;
    }
    D_00133A28 = 0;
    if (D_00150DC0 >= 0) {
        func_00106FF0(D_00150DC0);
    }
    return 1;
}
