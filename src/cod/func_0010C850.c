#include "common.h"

typedef struct { int id, valid; } StdioHandle;
typedef struct { int count, max, init, attr, option; char *name; } SemaParam;
typedef struct { int sema; int *result; int size, fd; void *entry; char pad[3116]; } DreadRequest;
extern int D_00132314[];
extern char D_001380A0[];
extern DreadRequest D_001459C0;
extern int D_00146600[16];
extern char D_001470C0[40];
extern StdioHandle *func_0010A318(int);
extern int func_00106FE0(SemaParam *);
extern int func_00106FF0(int);
extern int func_00107020(int);
extern int func_0010A798(int);
extern int func_0010A7C8(void);
extern int func_0010A228(void *, int, int, void *, int, void *, int, int, int, int);
int func_0010C850(int fd, void *entry) {
 SemaParam sema;
 int result;
 StdioHandle *handle;
 int sid, status;
 DreadRequest *request = &D_001459C0;
 handle = func_0010A318(fd);
 func_0010A798(11);
 if (!D_00132314[0] || !handle || !handle->valid) {
  func_0010A7C8();
  return -9;
 }
 request->fd = handle->id;
 request->entry = entry;
 sema.max = 1;
 sema.name = D_001380A0;
 sema.init = 0;
 sid = func_00106FE0(&sema);
 request->sema = sid;
 request->result = &result;
 request->size = 4;
 if (func_0010A228(D_001470C0,11,0,&D_001459C0,32,D_00146600,4,0,0,0) < 0) {
  func_00107020(sid);
  func_0010A7C8();
  return -11;
 }
 status = *(int *)((unsigned int)D_00146600 | 0x20000000);
 func_0010A7C8();
 if (!status) {
  func_00106FF0(sid);
  return -11;
 }
 func_00107020(sid);
 func_00106FF0(sid);
 return result;
}
