#include <stdlib.h>
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 64;
    int v1 = 24;
    int v2 = 9;
    int v3 = 28;
    int v4 = 54;
    int v5 = 92;
    int v6 = 71;
    int i;
    v2 = v2 + v1;
    for (i = 0; i < 9; i++) {
        v1 = v1 + v4;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    v4 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
