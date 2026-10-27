#include <stdlib.h>
int test_func(void) {
    int v0 = 6;
    int v1 = 35;
    int v2 = 71;
    int v3 = 48;
    int v4 = 24;
    int v5 = 29;
    int v6 = 15;
    int v7 = 13;
    int i;
    v4 = v4 * 9;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
