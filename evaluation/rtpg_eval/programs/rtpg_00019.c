#include <stdlib.h>
int __arr_19[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 83;
    int v1 = 61;
    int v2 = 53;
    int v3 = 8;
    int v4 = 34;
    int i;
    for (i = 0; i < 10; i++) { __arr_19[i] = v0 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
