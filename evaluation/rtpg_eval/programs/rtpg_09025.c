#include <stdlib.h>
int __arr_9025[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 14;
    int v1 = 7;
    int v2 = 33;
    int i;
    v0 = v0 - v2;
    for (i = 0; i < 10; i++) { __arr_9025[i] = v2 + i; }
    if (v1 > v0) { v1 = v0; }
    v0 = __arr_didx[__idx_didx[0]];
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
