#include "common.h"

void *func_00113520(void);

void func_00114530(u64 *env) {
    if (*(s16 *)((char *)func_00113520() + 6) == 1) {
        *(volatile u64 *)0x12000000 = env[0];
        *(volatile u64 *)0x12000070 = env[2];
        *(volatile u64 *)0x12000080 = env[3];
        *(volatile u64 *)0x120000C0 = env[4];
    } else {
        *(volatile u64 *)0x12000000 = env[0];
        *(volatile u64 *)0x12000020 = env[1];
        *(volatile u64 *)0x12000090 = env[2];
        *(volatile u64 *)0x120000A0 = env[3];
        *(volatile u64 *)0x120000E0 = env[4];
    }
}
