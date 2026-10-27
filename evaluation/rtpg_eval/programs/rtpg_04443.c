#include <stdlib.h>
int __arr_4443[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 38;
    int v1 = 24;
    int v2 = 47;
    int v3 = 14;
    int i;
    for (i = 0; i < 10; i++) { __arr_4443[i] = v3 + i; }
    v2 = v2 * 7;
    v2 = v2 - v0;
    v2 = __arr_didx[__idx_didx[0]];
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
