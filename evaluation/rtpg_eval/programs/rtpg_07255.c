#include <stdlib.h>
int __arr_7255[10];
int test_func(void) {
    int v0 = 62;
    int v1 = 88;
    int v2 = 24;
    int v3 = 89;
    int v4 = 5;
    int i;
    v3 = v3 + v3;
    for (i = 0; i < 10; i++) { __arr_7255[i] = v1 + i; }
    v3 = v3 * 3;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    int *__p = &v0;
    *__p = *__p + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
