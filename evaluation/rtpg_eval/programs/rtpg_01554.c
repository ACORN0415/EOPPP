#include <stdlib.h>
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 2;
    int v1 = 56;
    int v2 = 80;
    int v3 = 57;
    int v4 = 47;
    int i;
    for (i = 0; i < 9; i++) {
        v3 = v3 + v0;
    }
    v0 = v0 - v3;
    v0 = __arr_didx[__idx_didx[0]];
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
