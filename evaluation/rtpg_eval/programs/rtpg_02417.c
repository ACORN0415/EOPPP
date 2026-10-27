#include <stdlib.h>
int test_func(void) {
    int v0 = 38;
    int v1 = 43;
    int v2 = 12;
    int i;
    v0 = v0 * 5;
    int *__p = &v1;
    *__p = *__p + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
