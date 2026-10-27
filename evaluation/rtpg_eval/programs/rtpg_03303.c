#include <stdlib.h>
int __arr_3303[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 46;
    int v1 = 10;
    int v2 = 80;
    int v3 = 57;
    int v4 = 24;
    int i;
    if (v1 > v3) { v1 = v3; }
    for (i = 0; i < 10; i++) { __arr_3303[i] = v0 + i; }
    v1 = __arr_didx[__idx_didx[0]];
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    int *__p = &v4;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
