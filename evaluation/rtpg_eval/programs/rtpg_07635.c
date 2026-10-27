#include <stdlib.h>
int __arr_7635[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 5;
    int v1 = 9;
    int v2 = 83;
    int v3 = 92;
    int v4 = 70;
    int v5 = 36;
    int v6 = 28;
    int v7 = 13;
    int i;
    for (i = 0; i < 15; i++) {
        v4 = v4 + v6;
    }
    if (v5 > v1) { v5 = v1; }
    for (i = 0; i < 10; i++) { __arr_7635[i] = v0 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    int *__p = &v4;
    *__p = *__p + 1;
    v4 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
