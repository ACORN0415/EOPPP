#include <stdlib.h>
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 79;
    int v1 = 69;
    int v2 = 81;
    int v3 = 27;
    int v4 = 6;
    int v5 = 41;
    int v6 = 94;
    int i;
    v4 = v4 + v6;
    v3 = __arr_didx[__idx_didx[0]];
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    int *__p = &v5;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
