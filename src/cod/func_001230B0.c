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

M2C_UNK func_00106DF0(s32);                         /* extern */
M2C_UNK func_00106E30(s32);                         /* extern */
M2C_UNK func_00109D28(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_00109DC0(M2C_UNK *);                   /* extern */
extern M2C_UNK D_00169F10;
extern M2C_UNK D_00169F58;

void func_001230B0(s32 arg0) {
    func_00109D28(&D_00169F10, &D_00169F58);
    func_00109DC0(&D_00169F58);
    func_00106E30(arg0);
    func_00106DF0(arg0);
}
