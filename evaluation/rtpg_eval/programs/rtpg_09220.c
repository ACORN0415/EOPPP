#include <stdlib.h>
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 9;
    int v1 = 4;
    int v2 = 8;
    int v3 = 94;
    int v4 = 36;
    int v5 = 12;
    int v6 = 47;
    int v7 = 98;
    int i;
    v1 = 57;
    v2 = __arr_didx[__idx_didx[0]];
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v7;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
