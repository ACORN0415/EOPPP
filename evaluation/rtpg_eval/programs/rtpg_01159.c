#include <stdlib.h>
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 63;
    int v1 = 88;
    int v2 = 72;
    int v3 = 4;
    int v4 = 42;
    int v5 = 78;
    int v6 = 8;
    int i;
    v4 = v4 - v2;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
