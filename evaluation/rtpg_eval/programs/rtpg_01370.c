#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 92;
    int v1 = 33;
    int v2 = 35;
    int v3 = 87;
    int v4 = 71;
    int v5 = 17;
    int v6 = 88;
    int i;
    v6 = 100;
    v0 = v0 + v2;
    if (v3 > v4) { v3 = v4; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v6;
    free(__pm);
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
