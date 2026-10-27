#include <stdlib.h>
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 79;
    int v1 = 37;
    int v2 = 77;
    int v3 = 53;
    int v4 = 47;
    int v5 = 90;
    int v6 = 58;
    int i;
    v6 = v6 - v5;
    if (v4 > v0) { v4 = v0; }
    v2 = __arr_didx[__idx_didx[0]];
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
