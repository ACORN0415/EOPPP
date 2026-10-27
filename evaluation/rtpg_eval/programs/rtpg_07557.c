#include <stdlib.h>
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 74;
    int v1 = 40;
    int v2 = 68;
    int v3 = 22;
    int v4 = 50;
    int v5 = 48;
    int v6 = 61;
    int i;
    v3 = 24;
    int *__p = &v0;
    *__p = *__p + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v6;
    free(__pm);
    v4 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
