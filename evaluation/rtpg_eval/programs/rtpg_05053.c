#include <stdlib.h>
int __arr_5053[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 49;
    int v1 = 26;
    int v2 = 88;
    int v3 = 7;
    int v4 = 6;
    int i;
    for (i = 0; i < 10; i++) { __arr_5053[i] = v0 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    v0 = __arr_didx[__idx_didx[0]];
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
