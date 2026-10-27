#include <stdlib.h>
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 50;
    int v1 = 11;
    int v2 = 77;
    int v3 = 98;
    int v4 = 11;
    int i;
    v1 = v1 * 10;
    v4 = v4 - v1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    int *__p = &v4;
    *__p = *__p + 1;
    v4 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
