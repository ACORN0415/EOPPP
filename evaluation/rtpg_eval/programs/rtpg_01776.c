#include <stdlib.h>
int __arr_1776[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 30;
    int v1 = 7;
    int v2 = 16;
    int v3 = 56;
    int v4 = 26;
    int i;
    if (v1 > v4) { v1 = v4; }
    for (i = 0; i < 10; i++) { __arr_1776[i] = v1 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    v1 = v1 ^ v0;
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
