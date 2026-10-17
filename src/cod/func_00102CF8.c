#include "common.h"

typedef void *va_list;

void func_0012C048(void *ctx, const char *fmt, va_list ap);
void func_001290C4(void *ctx);

void func_00102CF8(const char *fmt, ...) {
    u8 ctx[0x100];
    va_list ap;

    __builtin_stdarg_start(ap, fmt);
    func_0012C048(ctx, fmt, ap);
    __builtin_va_end(ap);
    func_001285C0((const char *)ctx);
    func_001290C4(ctx);
}
