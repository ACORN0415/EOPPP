#include <stdlib.h>
int test_func(void) {
    int v0 = 44;
    int v1 = 79;
    int v2 = 63;
    int v3 = 1;
    int v4 = 14;
    int v5 = 57;
    int v6 = 55;
    int v7 = 34;
    int i;
    if (v2 > v7) { v2 = v7; }
    v2 = v2 | v7;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v7; __s.b = v7 + 1;
    return v0;
}
int main(void) { return test_func(); }
