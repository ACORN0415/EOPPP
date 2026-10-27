#include <stdlib.h>
int test_func(void) {
    int v0 = 81;
    int v1 = 8;
    int v2 = 42;
    int v3 = 68;
    int v4 = 43;
    int i;
    if (v2 > v1) { v2 = v1; }
    v0 = v0 * 4;
    v4 = 21;
    int *__p = &v4;
    *__p = *__p + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
