#include <stdlib.h>
int __arr_1216[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 72;
    int v1 = 53;
    int v2 = 70;
    int v3 = 60;
    int v4 = 63;
    int v5 = 30;
    int v6 = 77;
    int v7 = 26;
    int i;
    for (i = 0; i < 7; i++) {
        v6 = v6 + v6;
    }
    v1 = v1 * 7;
    for (i = 0; i < 10; i++) { __arr_1216[i] = v5 + i; }
    v0 = __arr_didx[__idx_didx[0]];
    int *__p = &v7;
    *__p = *__p + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
