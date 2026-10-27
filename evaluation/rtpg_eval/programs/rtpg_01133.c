#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 0;
    int v1 = 7;
    int v2 = 34;
    int v3 = 33;
    int v4 = 14;
    int i;
    if (v2 > v1) { v2 = v1; }
    v3 = __arr_didx[__idx_didx[0]];
    v3 = __helper(v3);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
