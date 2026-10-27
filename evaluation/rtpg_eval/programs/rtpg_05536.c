#include <stdlib.h>
int test_func(void) {
    int v0 = 10;
    int v1 = 29;
    int v2 = 88;
    int v3 = 100;
    int v4 = 51;
    int v5 = 42;
    int v6 = 28;
    int i;
    if (v2 > v5) { v2 = v5; }
    v3 = v3 - v4;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v6;
    free(__pm);
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
