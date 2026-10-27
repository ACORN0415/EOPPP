#include <stdlib.h>
int test_func(void) {
    int v0 = 36;
    int v1 = 89;
    int v2 = 25;
    int v3 = 19;
    int v4 = 17;
    int v5 = 8;
    int i;
    v5 = 30;
    for (i = 0; i < 17; i++) {
        v2 = v2 + v4;
    }
    v1 = v1 + v2;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
