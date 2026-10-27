#include <stdlib.h>
int test_func(void) {
    int v0 = 1;
    int v1 = 38;
    int v2 = 42;
    int v3 = 55;
    int v4 = 88;
    int v5 = 3;
    int v6 = 52;
    int i;
    for (i = 0; i < 7; i++) {
        v3 = v3 + v4;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
