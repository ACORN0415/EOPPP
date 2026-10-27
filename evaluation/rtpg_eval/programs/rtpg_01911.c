#include <stdlib.h>
int test_func(void) {
    int v0 = 37;
    int v1 = 18;
    int v2 = 55;
    int v3 = 13;
    int i;
    for (i = 0; i < 6; i++) {
        v2 = v2 + v1;
    }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
