#include "common.h"

typedef struct {
    u8 b[16];
} Name16;

typedef struct {
    u32 option;
    s32 port;
    s32 slot;
    s32 number;
    u8 name[16];
} scePad2SocketParam;

typedef struct {
    u32 option;
    s32 type;
    s32 port;
    s32 slot;
    s32 number;
    u8 name[16];
} DbcSocketParam;

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fC;
    void *buf;
    u8 pad[0x334 - 0x14];
} PadSocket;

extern PadSocket D_0014B598[];
extern char D_00138560[];

s32 func_00108EF8(const char *, ...);
s32 func_00115E40(DbcSocketParam *, void *, void *);
void func_001155D8(s32);

s32 func_001150B0(scePad2SocketParam *arg0, void *arg1) {
    DbcSocketParam sockParam;
    s32 sock;

    if ((u32)arg1 & 0x3F) {
        func_00108EF8(D_00138560);
        return -1;
    }

    if (arg0 != 0) {
        sockParam.option = arg0->option;
        sockParam.port = arg0->port;
        sockParam.slot = arg0->slot;
        sockParam.number = arg0->number;
        *(Name16 *)sockParam.name = *(Name16 *)arg0->name;
    } else {
        sockParam.option = 0;
        sockParam.port = 0;
        sockParam.slot = 0;
        sockParam.number = 0;
        sockParam.name[0] = 0;
    }

    sockParam.type = 1;
    sockParam.option |= 1;

    sock = func_00115E40(&sockParam, arg1, (u8 *)arg1 + 0x80);
    if (sock < 0) {
        return sock;
    }

    D_0014B598[sock].f0 = 1;
    D_0014B598[sock].buf = arg1;
    func_001155D8(sock);
    return sock;
}
