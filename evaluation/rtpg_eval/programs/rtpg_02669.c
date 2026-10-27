#include <stdlib.h>
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 12;
    int v1 = 42;
    int v2 = 1;
    int v3 = 85;
    int v4 = 42;
    int v5 = 28;
    int v6 = 5;
    int i;
    v3 = 13;
    if (v1 > v4) { v1 = v4; }
    v0 = v0 & v2;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
