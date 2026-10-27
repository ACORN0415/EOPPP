#include <stdlib.h>
int __arr_7432[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 77;
    int v1 = 65;
    int v2 = 2;
    int v3 = 46;
    int i;
    v3 = v3 + v2;
    for (i = 0; i < 10; i++) { __arr_7432[i] = v2 + i; }
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    v0 = __arr_didx[__idx_didx[0]];
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
