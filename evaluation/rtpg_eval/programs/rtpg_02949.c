#include <stdlib.h>
int test_func(void) {
    int v0 = 63;
    int v1 = 23;
    int v2 = 57;
    int v3 = 70;
    int i;
    v0 = 22;
    v2 = v2 + v1;
    if (v0 > v0) { v0 = v0; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
