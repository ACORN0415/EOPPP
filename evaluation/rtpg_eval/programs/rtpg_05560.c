#include <stdlib.h>
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 28;
    int v1 = 19;
    int v2 = 81;
    int v3 = 66;
    int v4 = 54;
    int v5 = 90;
    int v6 = 18;
    int i;
    v0 = v0 - v4;
    v1 = v1 * 6;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
