#include <stdlib.h>
int __arr_1748[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 88;
    int v1 = 93;
    int v2 = 85;
    int i;
    v0 = 30;
    for (i = 0; i < 10; i++) { __arr_1748[i] = v2 + i; }
    v2 = __arr_didx[__idx_didx[0]];
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    v1 = v1 & v0;
    return v0;
}
int main(void) { return test_func(); }
