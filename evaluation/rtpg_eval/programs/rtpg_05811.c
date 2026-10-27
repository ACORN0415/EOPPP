#include <stdlib.h>
int test_func(void) {
    int v0 = 0;
    int v1 = 69;
    int v2 = 75;
    int v3 = 34;
    int v4 = 4;
    int v5 = 29;
    int v6 = 60;
    int i;
    v4 = v4 - v6;
    v6 = v6 + v1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v6;
    free(__pm);
    int *__p = &v6;
    *__p = *__p + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
