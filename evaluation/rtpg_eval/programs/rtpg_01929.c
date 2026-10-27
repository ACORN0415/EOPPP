#include <stdlib.h>
int test_func(void) {
    int v0 = 94;
    int v1 = 72;
    int v2 = 73;
    int v3 = 100;
    int v4 = 78;
    int v5 = 99;
    int v6 = 72;
    int v7 = 39;
    int i;
    v7 = v7 * 8;
    for (i = 0; i < 20; i++) {
        v6 = v6 + v4;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
