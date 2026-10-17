#include "common.h"

struct Struct_00119AA0 {
    u8 pad[0x10];
    u32 field10;
    u32 pad14;
    u32 field18;
};

void func_00119AA0(struct Struct_00119AA0 *arg0) {
    arg0->field18 = 0;
    arg0->field10 &= 0xFFFFFFFEU;
}
