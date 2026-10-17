#include "common.h"

typedef struct {
    char pad[0x10];
    int flags;
    int pad2;
    int id;
} Inner;

typedef struct {
    Inner *inner;
    int id;
} Outer;

int func_00109B80(Outer *arg0) {
    Inner *inner = arg0->inner;
    if (!inner) goto fail;
    if (arg0->id != inner->id) goto fail;
    if (inner->flags & 1) goto success;
fail:
    return 0;
success:
    return 1;
}
