#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 6;
    int v1 = 36;
    int v2 = 43;
    int v3 = 81;
    int v4 = 90;
    int v5 = 71;
    int i;
    v4 = v4 - v5;
    if (v3 > v3) { v3 = v3; }
    v1 = v1 * 6;
    v5 = __helper(v5);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
