#include <stdlib.h>
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 86;
    int v1 = 39;
    int v2 = 11;
    int i;
    v2 = v2 - v0;
    if (v1 > v0) { v1 = v0; }
    v0 = 40;
    v1 = v1 / (v0 + 1);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
