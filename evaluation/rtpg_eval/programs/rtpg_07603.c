#include <stdlib.h>
int test_func(void) {
    int v0 = 94;
    int v1 = 53;
    int v2 = 83;
    int v3 = 58;
    int v4 = 98;
    int v5 = 84;
    int i;
    v3 = v3 * 6;
    v5 = v5 - v1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    v2 = v2 | v3;
    return v0;
}
int main(void) { return test_func(); }
