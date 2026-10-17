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
M2C_UNK func_00112C00(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
extern s32 D_00133A64;
extern s32 D_00133A88;
extern M2C_UNK func_001171B8;

s32 func_00117210(void) {
    s32 temp_16;

    D_00133A64 = 1;
    temp_16 = func_0010FB20();
    func_00112C00(0x80000012, &func_001171B8, 0);
    if (temp_16 != 0) {
        func_0010FB70();
    }
    D_00133A64 = 0;
    D_00133A88 = 1;
    return 1;
}
