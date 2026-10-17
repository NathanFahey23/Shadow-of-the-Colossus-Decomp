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

M2C_UNK func_00111C50(M2C_UNK);                     /* extern */
M2C_UNK func_00112C78(M2C_UNK);                     /* extern */
extern s32 D_00135618;

void func_001199C8(void) {
    D_00135618 = 0;
    func_00112C78(0x80000018);
    func_00111C50(0x80000014);
}
