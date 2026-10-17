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

s32 func_00106ED0();                                /* extern */
M2C_UNK func_00107020(s32);                         /* extern */
extern s32 D_001329A0;
extern s32 D_001360C0;
extern s32 D_001360C4;

void func_00128490(void) {
    s32 temp_2;

    temp_2 = func_00106ED0();
    if (D_001360C0 == temp_2) {
        D_001360C4 += 1;
        return;
    }
    func_00107020(D_001329A0);
    D_001360C0 = temp_2;
    D_001360C4 += 1;
}
