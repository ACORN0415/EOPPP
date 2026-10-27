#include <stdlib.h>
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 1;
    int v1 = 76;
    int v2 = 6;
    int i;
    for (i = 0; i < 16; i++) {
        v0 = v0 + v1;
    }
    v1 = __arr_didx[__idx_didx[0]];
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
