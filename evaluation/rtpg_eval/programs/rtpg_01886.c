#include <stdlib.h>
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 76;
    int v1 = 58;
    int v2 = 5;
    int v3 = 38;
    int v4 = 27;
    int v5 = 92;
    int v6 = 80;
    int i;
    for (i = 0; i < 10; i++) {
        v6 = v6 + v2;
    }
    v3 = 62;
    v3 = __arr_didx[__idx_didx[0]];
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
