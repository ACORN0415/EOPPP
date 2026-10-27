#include <stdlib.h>
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 78;
    int v1 = 81;
    int v2 = 12;
    int v3 = 10;
    int v4 = 62;
    int v5 = 53;
    int v6 = 94;
    int v7 = 73;
    int i;
    v2 = __arr_didx[__idx_didx[0]];
    switch (v6) {
        case 0: v6 = 1; break;
        case 1: v6 = 2; break;
        default: v6 = 0; break;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v6;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
