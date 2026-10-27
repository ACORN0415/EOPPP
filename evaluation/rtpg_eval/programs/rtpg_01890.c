#include <stdlib.h>
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 17;
    int v1 = 25;
    int v2 = 57;
    int v3 = 33;
    int v4 = 100;
    int v5 = 15;
    int v6 = 78;
    int v7 = 46;
    int i;
    v5 = v5 - v0;
    v6 = v6 * 7;
    v1 = v1 ^ v3;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v6;
    free(__pm);
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
