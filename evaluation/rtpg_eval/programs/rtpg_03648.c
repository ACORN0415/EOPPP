#include <stdlib.h>
int test_func(void) {
    int v0 = 75;
    int v1 = 66;
    int v2 = 41;
    int v3 = 36;
    int v4 = 42;
    int v5 = 75;
    int i;
    v0 = 69;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
