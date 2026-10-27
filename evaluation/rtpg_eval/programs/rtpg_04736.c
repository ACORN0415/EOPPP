#include <stdlib.h>
int test_func(void) {
    int v0 = 72;
    int v1 = 84;
    int v2 = 77;
    int v3 = 41;
    int v4 = 59;
    int v5 = 58;
    int v6 = 72;
    int i;
    if (v1 > v0) { v1 = v0; }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
