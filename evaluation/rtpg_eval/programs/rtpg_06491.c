#include <stdlib.h>
int test_func(void) {
    int v0 = 9;
    int v1 = 0;
    int v2 = 51;
    int v3 = 91;
    int i;
    for (i = 0; i < 13; i++) {
        v1 = v1 + v0;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
