#include <stdlib.h>
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 18;
    int v1 = 46;
    int v2 = 30;
    int v3 = 32;
    int v4 = 86;
    int v5 = 92;
    int i;
    v2 = v2 + v0;
    if (v1 > v5) { v1 = v5; }
    v4 = __arr_didx[__idx_didx[0]];
    int *__p = &v2;
    *__p = *__p + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
