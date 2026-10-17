#include "common.h"

void *func_00109E50(void *);
void func_00109EA8(void *);
void func_00106F00(void);

void func_0010A070(void *arg0) {
    while (1) {
        void *res;
        while ((res = func_00109E50(arg0)) != 0) {
            func_00109EA8(res);
        }
        func_00106F00();
    }
}
