#include <stdlib.h>
int test_func(void) {
    int v0 = 18;
    int v1 = 24;
    int v2 = 29;
    int v3 = 49;
    int v4 = 14;
    int v5 = 33;
    int v6 = 26;
    int i;
    v1 = 40;
    for (i = 0; i < 13; i++) {
        v0 = v0 + v6;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    int *__p = &v2;
    *__p = *__p + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
