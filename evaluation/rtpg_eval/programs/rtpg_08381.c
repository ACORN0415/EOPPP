#include <stdlib.h>
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 76;
    int v1 = 57;
    int v2 = 42;
    int v3 = 18;
    int v4 = 96;
    int v5 = 32;
    int v6 = 44;
    int i;
    for (i = 0; i < 11; i++) {
        v2 = v2 + v1;
    }
    v4 = __arr_didx[__idx_didx[0]];
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
