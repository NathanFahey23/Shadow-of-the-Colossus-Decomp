#include "common.h"

struct Struct_00151900 {
    s32 field_0;
    s32 field_4;
    s32 field_8;
};

extern struct Struct_00151900 D_00151900;
extern s32 D_00151E28;

void func_00107020(s32);
s32 func_00107030(s32);

s32 func_0011B670(s32 arg0, s32 *arg1, s32 *arg2) {
    int zero = 0;
    struct Struct_00151900 *ptr = &D_00151900;

    if (ptr->field_4 == 0) return -1;
    if (arg1) *arg1 = ptr->field_4;

    if (arg0 == 0) {
        func_00107020(D_00151E28);
        goto block_7;
    }
    if (func_00107030(D_00151E28) >= 0) {
block_7:
        if (arg2) *arg2 = ptr->field_8;
        if (arg1 == NULL) {
            do {
                if (arg2 || zero) {
                    ptr->field_4 = 0;
                } else {
                    ptr->field_4 = 0;
                }
            } while (0);
        } else {
            *arg1 = ptr->field_4;
            ptr->field_4 = 0;
        }
        return 1;
    }
    return 0;
}
