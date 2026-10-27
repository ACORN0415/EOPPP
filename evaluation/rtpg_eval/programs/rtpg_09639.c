#include <stdlib.h>
int test_func(void) {
    int v0 = 22;
    int v1 = 77;
    int v2 = 63;
    int v3 = 39;
    int v4 = 78;
    int v5 = 11;
    int i;
    v1 = v1 * 6;
    v2 = v2 - v0;
    v1 = 47;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
