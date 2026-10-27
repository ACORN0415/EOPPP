#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 84;
    int v1 = 97;
    int v2 = 76;
    int v3 = 60;
    int v4 = 33;
    int v5 = 82;
    int v6 = 25;
    int i;
    if (v6 > v5) { v6 = v5; }
    v0 = v0 + v2;
    v6 = v6 - v2;
    v3 = __helper(v3);
    v2 = __arr_didx[__idx_didx[0]];
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
