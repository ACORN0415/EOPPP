#include <stdlib.h>
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 33;
    int v1 = 54;
    int v2 = 55;
    int v3 = 14;
    int v4 = 29;
    int v5 = 51;
    int i;
    v1 = v1 - v2;
    if (v4 > v5) { v4 = v5; }
    v2 = __arr_didx[__idx_didx[0]];
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
