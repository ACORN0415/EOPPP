#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_7176[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 99;
    int v1 = 59;
    int v2 = 56;
    int i;
    if (v2 > v1) { v2 = v1; }
    for (i = 0; i < 10; i++) { __arr_7176[i] = v2 + i; }
    v2 = v2 + v1;
    v1 = __arr_didx[__idx_didx[0]];
    v2 = __helper(v2);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
