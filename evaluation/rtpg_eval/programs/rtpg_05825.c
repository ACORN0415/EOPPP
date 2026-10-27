#include <stdlib.h>
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 32;
    int v1 = 11;
    int v2 = 70;
    int v3 = 76;
    int v4 = 85;
    int v5 = 13;
    int i;
    v0 = v0 - v4;
    for (i = 0; i < 17; i++) {
        v0 = v0 + v5;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    v4 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
