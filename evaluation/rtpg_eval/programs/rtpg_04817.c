#include <stdlib.h>
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 53;
    int v1 = 76;
    int v2 = 73;
    int v3 = 65;
    int v4 = 60;
    int v5 = 61;
    int v6 = 8;
    int v7 = 7;
    int i;
    for (i = 0; i < 7; i++) {
        v1 = v1 + v5;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    v0 = v0 ^ v5;
    v4 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
