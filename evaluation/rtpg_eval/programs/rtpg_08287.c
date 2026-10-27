#include <stdlib.h>
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 80;
    int v1 = 21;
    int v2 = 86;
    int v3 = 73;
    int v4 = 47;
    int v5 = 14;
    int v6 = 25;
    int i;
    v4 = 37;
    v1 = v1 + v0;
    v3 = __arr_didx[__idx_didx[0]];
    struct __S { int a; int b; };
    struct __S __s; __s.a = v6; __s.b = v6 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
