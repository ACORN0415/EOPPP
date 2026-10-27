#include <stdlib.h>
int test_func(void) {
    int v0 = 84;
    int v1 = 55;
    int v2 = 86;
    int v3 = 31;
    int v4 = 56;
    int v5 = 54;
    int v6 = 6;
    int v7 = 9;
    int i;
    v3 = v3 * 2;
    v3 = v3 + v5;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v7; __s.b = v7 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v7;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
