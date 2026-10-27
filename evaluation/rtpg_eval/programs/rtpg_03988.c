#include <stdlib.h>
int test_func(void) {
    int v0 = 30;
    int v1 = 6;
    int v2 = 15;
    int v3 = 86;
    int v4 = 19;
    int i;
    v3 = v3 - v2;
    v0 = v0 / (v4 + 1);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
