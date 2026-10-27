#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 99;
    int v1 = 35;
    int v2 = 44;
    int v3 = 26;
    int v4 = 12;
    int v5 = 61;
    int v6 = 41;
    int v7 = 52;
    int i;
    v3 = 32;
    v7 = v7 * 9;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    v7 = __helper(v7);
    return v0;
}
int main(void) { return test_func(); }
