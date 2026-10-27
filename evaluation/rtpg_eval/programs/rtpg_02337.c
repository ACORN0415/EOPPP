#include <stdlib.h>
int test_func(void) {
    int v0 = 98;
    int v1 = 84;
    int v2 = 3;
    int v3 = 27;
    int v4 = 3;
    int v5 = 43;
    int v6 = 61;
    int i;
    for (i = 0; i < 7; i++) {
        v1 = v1 + v4;
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
