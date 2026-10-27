#include <stdlib.h>
int test_func(void) {
    int v0 = 99;
    int v1 = 79;
    int v2 = 53;
    int v3 = 21;
    int i;
    v3 = v3 * 3;
    for (i = 0; i < 7; i++) {
        v3 = v3 + v0;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
