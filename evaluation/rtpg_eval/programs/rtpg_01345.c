#include <stdlib.h>
int __arr_1345[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 57;
    int v1 = 32;
    int v2 = 64;
    int v3 = 72;
    int v4 = 13;
    int v5 = 92;
    int v6 = 73;
    int v7 = 81;
    int i;
    v4 = v4 + v4;
    for (i = 0; i < 10; i++) { __arr_1345[i] = v1 + i; }
    v1 = __arr_didx[__idx_didx[0]];
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v7;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
