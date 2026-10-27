#include <stdlib.h>
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 15;
    int v1 = 36;
    int v2 = 4;
    int v3 = 98;
    int v4 = 17;
    int v5 = 11;
    int v6 = 0;
    int v7 = 33;
    int i;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v7;
    free(__pm);
    v5 = v5 & v7;
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
