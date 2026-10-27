#include <stdlib.h>
int test_func(void) {
    int v0 = 47;
    int v1 = 54;
    int v2 = 27;
    int v3 = 48;
    int v4 = 32;
    int i;
    if (v1 > v4) { v1 = v4; }
    v3 = 31;
    v4 = v4 / (v0 + 1);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
