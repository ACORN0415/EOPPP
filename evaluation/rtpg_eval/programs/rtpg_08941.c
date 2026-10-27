#include <stdlib.h>
int test_func(void) {
    int v0 = 31;
    int v1 = 67;
    int v2 = 47;
    int v3 = 72;
    int i;
    for (i = 0; i < 12; i++) {
        v3 = v3 + v0;
    }
    v0 = 60;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
