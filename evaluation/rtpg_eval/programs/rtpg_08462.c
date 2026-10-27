#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 43;
    int v1 = 26;
    int v2 = 21;
    int v3 = 47;
    int v4 = 90;
    int v5 = 49;
    int v6 = 48;
    int v7 = 88;
    int i;
    v3 = 53;
    v5 = v5 - v6;
    if (v5 > v6) { v5 = v6; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
