#include <stdlib.h>
int test_func(void) {
    int v0 = 88;
    int v1 = 74;
    int v2 = 47;
    int v3 = 95;
    int i;
    v0 = v0 + v3;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
