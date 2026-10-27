#include <stdlib.h>
int test_func(void) {
    int v0 = 13;
    int v1 = 96;
    int v2 = 3;
    int i;
    for (i = 0; i < 15; i++) {
        v0 = v0 + v2;
    }
    v1 = v1 * 5;
    if (v2 > v2) { v2 = v2; }
    int *__p = &v2;
    *__p = *__p + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
