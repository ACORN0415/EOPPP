#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 61;
    int v1 = 68;
    int v2 = 75;
    int v3 = 7;
    int v4 = 20;
    int v5 = 9;
    int v6 = 60;
    int i;
    for (i = 0; i < 20; i++) {
        v5 = v5 + v6;
    }
    if (v5 > v6) { v5 = v6; }
    v6 = __arr_didx[__idx_didx[0]];
    v6 = __helper(v6);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
