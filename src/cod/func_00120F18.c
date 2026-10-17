#include "common.h"

struct Struct_00135638 {
    u8 data[0x184];
};
extern struct Struct_00135638 D_00135638[];

struct Struct_00135638 *func_00120F18(s32 arg0) {
    return &D_00135638[arg0];
}
