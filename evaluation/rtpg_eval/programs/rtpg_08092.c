#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 47;
    int v1 = 90;
    int v2 = 26;
    int v3 = 18;
    int v4 = 91;
    int v5 = 49;
    int v6 = 31;
    int i;
    if (v3 > v4) { v3 = v4; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    v6 = __arr_didx[__idx_didx[0]];
    v5 = __helper(v5);
    return v0;
}
int main(void) { return test_func(); }
