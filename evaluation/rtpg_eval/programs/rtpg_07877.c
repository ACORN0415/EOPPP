#include <stdlib.h>
int test_func(void) {
    int v0 = 88;
    int v1 = 37;
    int v2 = 4;
    int v3 = 83;
    int v4 = 56;
    int v5 = 24;
    int v6 = 70;
    int i;
    v3 = v3 - v2;
    for (i = 0; i < 15; i++) {
        v6 = v6 + v2;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v6; __s.b = v6 + 1;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
