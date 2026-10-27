#include <stdlib.h>
int test_func(void) {
    int v0 = 8;
    int v1 = 64;
    int v2 = 42;
    int v3 = 88;
    int v4 = 78;
    int v5 = 41;
    int i;
    v5 = v5 - v4;
    v0 = 92;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
