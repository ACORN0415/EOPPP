#include <stdlib.h>
int test_func(void) {
    int v0 = 3;
    int v1 = 77;
    int v2 = 90;
    int v3 = 22;
    int v4 = 91;
    int i;
    v0 = v0 * 3;
    v1 = v1 - v2;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
