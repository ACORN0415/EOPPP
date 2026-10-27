#include <stdlib.h>
int test_func(void) {
    int v0 = 51;
    int v1 = 10;
    int v2 = 48;
    int v3 = 69;
    int v4 = 12;
    int v5 = 73;
    int v6 = 79;
    int i;
    v3 = v3 * 2;
    for (i = 0; i < 20; i++) {
        v4 = v4 + v6;
    }
    if (v1 > v1) { v1 = v1; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v6;
    free(__pm);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    v4 = v4 | v1;
    return v0;
}
int main(void) { return test_func(); }
