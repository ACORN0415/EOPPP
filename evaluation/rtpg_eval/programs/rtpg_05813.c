#include <stdlib.h>
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 36;
    int v1 = 53;
    int v2 = 79;
    int v3 = 97;
    int v4 = 4;
    int v5 = 64;
    int v6 = 90;
    int v7 = 45;
    int i;
    v7 = 91;
    for (i = 0; i < 16; i++) {
        v7 = v7 + v1;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    if (v6 > 0) goto __skip;
    v6 = 999;
__skip:
    v6 = v6 + 1;
    v7 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
