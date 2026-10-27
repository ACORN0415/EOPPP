#include <stdlib.h>
int test_func(void) {
    int v0 = 62;
    int v1 = 80;
    int v2 = 31;
    int v3 = 84;
    int v4 = 3;
    int v5 = 58;
    int i;
    v4 = v4 * 7;
    v0 = v0 + v0;
    v3 = v3 - v4;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
