#include <stdlib.h>
int test_func(void) {
    int v0 = 45;
    int v1 = 96;
    int v2 = 23;
    int v3 = 57;
    int v4 = 88;
    int v5 = 93;
    int i;
    v2 = v2 * 3;
    v2 = 29;
    v2 = v2 - v1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
