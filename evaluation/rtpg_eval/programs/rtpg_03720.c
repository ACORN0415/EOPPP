#include <stdlib.h>
int __arr_3720[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 5;
    int v1 = 8;
    int v2 = 81;
    int v3 = 88;
    int v4 = 83;
    int v5 = 8;
    int i;
    for (i = 0; i < 10; i++) { __arr_3720[i] = v3 + i; }
    v5 = __arr_didx[__idx_didx[0]];
    v4 = v4 / (v3 + 1);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
