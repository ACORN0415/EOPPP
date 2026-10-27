#include <stdlib.h>
int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_5735[10];
int test_func(void) {
    int v0 = 68;
    int v1 = 80;
    int v2 = 59;
    int v3 = 100;
    int v4 = 88;
    int v5 = 5;
    int i;
    for (i = 0; i < 10; i++) { __arr_5735[i] = v5 + i; }
    v3 = __helper(v3);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
