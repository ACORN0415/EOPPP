#include <stdlib.h>
int test_func(void) {
    int v0 = 72;
    int v1 = 11;
    int v2 = 8;
    int v3 = 61;
    int v4 = 77;
    int v5 = 87;
    int v6 = 67;
    int v7 = 63;
    int i;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v6;
    free(__pm);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
