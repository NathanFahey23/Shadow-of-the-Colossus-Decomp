#include "common.h"

typedef void *va_list;
#define va_start(ap,last) ((ap)=((char *)__builtin_next_arg(last) - 56))
#define va_end(ap) ((void)0)
s32 func_0010FB20(void);
void func_0010FB70(void);
void func_00108D68(void);
s32 func_00107FF8(void (*callback)(void), void *context, u32 limit, const char *format, va_list args);
void func_00108EF8(const char *format, ...) {
 va_list args;
 s32 context=0;
 s32 state;
 state=func_0010FB20();
 va_start(args,format);
 func_00107FF8(func_00108D68,&context,0xffffffffU,format,args);
 va_end(args);
 if(state) func_0010FB70();
}
