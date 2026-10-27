#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 14;
    int v1 = 2;
    int v2 = 84;
    int v3 = 91;
    int v4 = 64;
    int i;
    v2 = v2 + v3;
    v3 = v3 - v4;
    v4 = v4 * 8;
    v1 = __helper(v1);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
