#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 79;
    int v1 = 41;
    int v2 = 87;
    int v3 = 65;
    int v4 = 92;
    int v5 = 70;
    int v6 = 84;
    int i;
    v3 = 42;
    v6 = v6 + v2;
    v3 = __helper(v3);
    v1 = __arr_didx[__idx_didx[0]];
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
