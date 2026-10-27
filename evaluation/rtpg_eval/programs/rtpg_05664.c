#include <stdlib.h>
int test_func(void) {
    int v0 = 2;
    int v1 = 84;
    int v2 = 26;
    int v3 = 43;
    int v4 = 55;
    int v5 = 68;
    int i;
    if (v2 > v1) { v2 = v1; }
    v1 = v1 - v0;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
