#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 33;
    int v1 = 6;
    int v2 = 68;
    int i;
    v0 = 26;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    v1 = __arr_didx[__idx_didx[0]];
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
