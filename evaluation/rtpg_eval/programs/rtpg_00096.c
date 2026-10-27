#include <stdlib.h>
int test_func(void) {
    int v0 = 28;
    int v1 = 7;
    int v2 = 100;
    int v3 = 87;
    int v4 = 81;
    int v5 = 43;
    int v6 = 84;
    int i;
    for (i = 0; i < 10; i++) {
        v1 = v1 + v6;
    }
    int *__p = &v6;
    *__p = *__p + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
