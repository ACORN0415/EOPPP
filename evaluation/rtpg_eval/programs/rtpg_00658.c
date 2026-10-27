#include <stdlib.h>
int test_func(void) {
    int v0 = 19;
    int v1 = 72;
    int v2 = 18;
    int i;
    for (i = 0; i < 14; i++) {
        v1 = v1 + v2;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
