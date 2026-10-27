#include <stdlib.h>
int __arr_9764[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 83;
    int v1 = 2;
    int v2 = 86;
    int v3 = 87;
    int v4 = 7;
    int i;
    for (i = 0; i < 10; i++) { __arr_9764[i] = v0 + i; }
    v3 = v3 * 7;
    if (v1 > v1) { v1 = v1; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
