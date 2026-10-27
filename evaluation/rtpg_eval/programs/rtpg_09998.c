#include <stdlib.h>
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 10;
    int v1 = 60;
    int v2 = 40;
    int v3 = 63;
    int v4 = 30;
    int v5 = 7;
    int v6 = 80;
    int v7 = 62;
    int i;
    if (v5 > v7) { v5 = v7; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    v1 = __arr_didx[__idx_didx[0]];
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
