#include <stdlib.h>
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 7;
    int v1 = 83;
    int v2 = 95;
    int v3 = 41;
    int v4 = 3;
    int v5 = 8;
    int i;
    v4 = v4 - v0;
    v5 = v5 * 9;
    v0 = __arr_didx[__idx_didx[0]];
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
