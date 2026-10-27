#include <stdlib.h>
int test_func(void) {
    int v0 = 90;
    int v1 = 73;
    int v2 = 16;
    int v3 = 22;
    int v4 = 36;
    int v5 = 21;
    int v6 = 61;
    int i;
    v4 = v4 * 6;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
