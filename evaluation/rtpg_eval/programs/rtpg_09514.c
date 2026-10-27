#include <stdlib.h>
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 41;
    int v1 = 28;
    int v2 = 1;
    int v3 = 66;
    int v4 = 29;
    int v5 = 85;
    int v6 = 58;
    int i;
    v2 = 16;
    for (i = 0; i < 8; i++) {
        v1 = v1 + v4;
    }
    v2 = v2 - v5;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    v1 = __arr_didx[__idx_didx[0]];
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
