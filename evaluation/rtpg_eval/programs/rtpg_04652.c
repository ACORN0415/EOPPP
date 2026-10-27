#include <stdlib.h>
int __arr_4652[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 57;
    int v1 = 7;
    int v2 = 45;
    int i;
    v1 = v1 - v2;
    for (i = 0; i < 10; i++) { __arr_4652[i] = v2 + i; }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    v1 = __arr_didx[__idx_didx[0]];
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
