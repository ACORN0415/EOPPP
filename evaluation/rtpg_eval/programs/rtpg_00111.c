#include <stdlib.h>
int test_func(void) {
    int v0 = 100;
    int v1 = 86;
    int v2 = 82;
    int v3 = 91;
    int v4 = 33;
    int v5 = 64;
    int i;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
