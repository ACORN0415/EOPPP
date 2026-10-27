#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_8961[10];
int test_func(void) {
    int v0 = 41;
    int v1 = 56;
    int v2 = 80;
    int v3 = 80;
    int v4 = 2;
    int v5 = 67;
    int i;
    if (v3 > v2) { v3 = v2; }
    for (i = 0; i < 10; i++) { __arr_8961[i] = v4 + i; }
    v0 = v0 - v2;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    v5 = __helper(v5);
    return v0;
}
int main(void) { return test_func(); }
