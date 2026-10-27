#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 65;
    int v1 = 82;
    int v2 = 10;
    int i;
    if (v0 > v1) { v0 = v1; }
    v0 = 71;
    v1 = v1 + v1;
    v2 = __arr_didx[__idx_didx[0]];
    v1 = __helper(v1);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
