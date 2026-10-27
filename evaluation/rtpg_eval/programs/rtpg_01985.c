#include <stdlib.h>
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 39;
    int v1 = 95;
    int v2 = 71;
    int v3 = 8;
    int v4 = 46;
    int v5 = 82;
    int v6 = 34;
    int i;
    v6 = v6 - v0;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
