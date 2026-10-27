#include <stdlib.h>
int test_func(void) {
    int v0 = 65;
    int v1 = 93;
    int v2 = 18;
    int v3 = 10;
    int v4 = 83;
    int v5 = 11;
    int v6 = 18;
    int v7 = 24;
    int i;
    v5 = v5 + v6;
    if (v6 > 0) goto __skip;
    v6 = 999;
__skip:
    v6 = v6 + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
