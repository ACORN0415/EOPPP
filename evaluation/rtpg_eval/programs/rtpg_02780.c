#include <stdlib.h>
int test_func(void) {
    int v0 = 63;
    int v1 = 23;
    int v2 = 15;
    int i;
    v2 = v2 + v0;
    v2 = v2 * 6;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
