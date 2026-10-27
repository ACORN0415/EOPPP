#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 75;
    int v1 = 67;
    int v2 = 76;
    int v3 = 59;
    int v4 = 24;
    int i;
    v1 = 64;
    v3 = v3 + v1;
    if (v1 > v0) { v1 = v0; }
    v4 = __helper(v4);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
