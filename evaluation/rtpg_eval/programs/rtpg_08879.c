#include <stdlib.h>
int __arr_8879[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 88;
    int v1 = 79;
    int v2 = 84;
    int v3 = 36;
    int v4 = 90;
    int v5 = 50;
    int v6 = 76;
    int i;
    v2 = 30;
    for (i = 0; i < 10; i++) { __arr_8879[i] = v5 + i; }
    v4 = v4 + v2;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    int *__p = &v2;
    *__p = *__p + 1;
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
