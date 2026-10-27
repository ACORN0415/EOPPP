#include <stdlib.h>
int __arr_9336[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 98;
    int v1 = 32;
    int v2 = 33;
    int v3 = 48;
    int v4 = 64;
    int v5 = 86;
    int v6 = 43;
    int i;
    for (i = 0; i < 17; i++) {
        v4 = v4 + v5;
    }
    for (i = 0; i < 10; i++) { __arr_9336[i] = v0 + i; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
