#include <stdlib.h>
int test_func(void) {
    int v0 = 42;
    int v1 = 50;
    int v2 = 58;
    int v3 = 62;
    int v4 = 42;
    int i;
    v2 = 27;
    if (v2 > v1) { v2 = v1; }
    v0 = v0 - v3;
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
