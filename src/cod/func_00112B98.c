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

M2C_UNK func_00106D10(M2C_UNK, s32);                /* extern */
M2C_UNK func_00107540(M2C_UNK);                     /* extern */
extern s32 D_00133948;
extern s32 D_0014B354;

void func_00112B98(void) {
    func_00107540(5);
    func_00106D10(5, D_0014B354);
    D_00133948 = 0;
}
