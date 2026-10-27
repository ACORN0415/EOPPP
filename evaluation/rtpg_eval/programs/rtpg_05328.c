#include <stdlib.h>
int __arr_5328[10];
int test_func(void) {
    int v0 = 28;
    int v1 = 93;
    int v2 = 36;
    int v3 = 9;
    int v4 = 48;
    int v5 = 89;
    int i;
    for (i = 0; i < 10; i++) { __arr_5328[i] = v4 + i; }
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
