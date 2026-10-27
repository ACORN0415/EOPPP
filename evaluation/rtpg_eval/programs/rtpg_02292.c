#include <stdlib.h>
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 26;
    int v1 = 90;
    int v2 = 32;
    int v3 = 90;
    int i;
    for (i = 0; i < 14; i++) {
        v1 = v1 + v3;
    }
    v2 = v2 - v1;
    if (v0 > v0) { v0 = v0; }
    v1 = v1 / (v2 + 1);
    v3 = __arr_didx[__idx_didx[0]];
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
