#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 32;
    int v1 = 58;
    int v2 = 50;
    int v3 = 36;
    int v4 = 51;
    int v5 = 96;
    int v6 = 68;
    int v7 = 54;
    int i;
    v2 = v2 + v2;
    if (v1 > v6) { v1 = v6; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
