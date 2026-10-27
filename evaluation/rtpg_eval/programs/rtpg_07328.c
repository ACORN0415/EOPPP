#include <stdlib.h>
int __arr_7328[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 6;
    int v1 = 61;
    int v2 = 61;
    int i;
    v0 = v0 * 10;
    for (i = 0; i < 10; i++) { __arr_7328[i] = v0 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
