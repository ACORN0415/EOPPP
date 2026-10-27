#include <stdlib.h>
int __arr_8407[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 71;
    int v1 = 22;
    int v2 = 42;
    int v3 = 93;
    int v4 = 64;
    int v5 = 79;
    int v6 = 22;
    int i;
    v4 = v4 + v2;
    for (i = 0; i < 10; i++) { __arr_8407[i] = v2 + i; }
    v6 = v6 - v1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    v3 = __arr_didx[__idx_didx[0]];
    v0 = v0 ^ v3;
    return v0;
}
int main(void) { return test_func(); }
