#include <stdlib.h>
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 84;
    int v1 = 40;
    int v2 = 8;
    int v3 = 92;
    int v4 = 33;
    int i;
    for (i = 0; i < 14; i++) {
        v2 = v2 + v2;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
