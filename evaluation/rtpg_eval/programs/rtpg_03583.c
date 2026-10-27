#include <stdlib.h>
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 15;
    int v1 = 98;
    int v2 = 4;
    int v3 = 98;
    int v4 = 43;
    int v5 = 40;
    int v6 = 3;
    int i;
    v0 = v0 * 3;
    v3 = v3 - v0;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v6; __s.b = v6 + 1;
    v0 = __arr_didx[__idx_didx[0]];
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
