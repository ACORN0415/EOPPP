#include <stdlib.h>
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 44;
    int v1 = 28;
    int v2 = 14;
    int v3 = 79;
    int v4 = 38;
    int v5 = 90;
    int v6 = 4;
    int i;
    v0 = 20;
    int *__p = &v5;
    *__p = *__p + 1;
    v2 = __arr_didx[__idx_didx[0]];
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
