#include "common.h"

// TC: 2.96
typedef unsigned short u16;
typedef short s16;
typedef int s32;
typedef long long s64;

typedef struct _FILE {
    unsigned char pad[12];
    u16 _flags;     /* 0x0C */
    s16 _file;      /* 0x0E */
    unsigned char pad2[0x54 - 0x10];
    void *_data;    /* 0x54 */
} FILE;

s32 func_001311B8(void *data, s32 file, s32 offset, s32 whence);
s64 func_00130FE8(void *data, s32 file, const char *buf, s32 n);

s32 func_0012FAA8(FILE *fp, const char *buf, s32 n) {
    register FILE *f = fp;
    register const char *b = buf;
    register s32 len = n;
    u16 flags;

    if (f->_flags & 0x100) {
        func_001311B8(f->_data, f->_file, 0, 2);
    }
    flags = f->_flags & 0xEFFF;
    f->_flags = flags;
    return (s32)func_00130FE8(f->_data, f->_file, b, len);
}
