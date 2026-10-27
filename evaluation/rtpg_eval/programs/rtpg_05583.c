#include <stdlib.h>
int test_func(void) {
    int v0 = 71;
    int v1 = 27;
    int v2 = 14;
    int i;
    v1 = v1 - v2;
    for (i = 0; i < 17; i++) {
        v1 = v1 + v2;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
