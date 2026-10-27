#include <stdlib.h>
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 34;
    int v1 = 67;
    int v2 = 59;
    int v3 = 36;
    int v4 = 67;
    int v5 = 61;
    int i;
    v4 = v4 * 2;
    v1 = v1 + v3;
    v0 = 16;
    v1 = __arr_didx[__idx_didx[0]];
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
