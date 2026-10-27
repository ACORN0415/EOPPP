#include <stdlib.h>
int test_func(void) {
    int v0 = 57;
    int v1 = 80;
    int v2 = 36;
    int v3 = 5;
    int v4 = 63;
    int i;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
