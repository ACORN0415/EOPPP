#include <stdlib.h>
int __arr_540[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 31;
    int v1 = 65;
    int v2 = 27;
    int v3 = 69;
    int v4 = 26;
    int v5 = 88;
    int v6 = 89;
    int v7 = 28;
    int i;
    for (i = 0; i < 11; i++) {
        v4 = v4 + v0;
    }
    for (i = 0; i < 10; i++) { __arr_540[i] = v4 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
