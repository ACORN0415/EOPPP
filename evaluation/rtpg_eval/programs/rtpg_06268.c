#include <stdlib.h>
int __arr_6268[10];
int test_func(void) {
    int v0 = 37;
    int v1 = 66;
    int v2 = 85;
    int v3 = 35;
    int v4 = 32;
    int v5 = 11;
    int i;
    v5 = v5 + v4;
    for (i = 0; i < 10; i++) { __arr_6268[i] = v0 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
