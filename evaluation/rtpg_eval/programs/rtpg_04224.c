#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 67;
    int v1 = 72;
    int v2 = 86;
    int v3 = 28;
    int v4 = 90;
    int v5 = 75;
    int v6 = 84;
    int i;
    v3 = v3 + v6;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v6;
    free(__pm);
    v0 = __arr_didx[__idx_didx[0]];
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
