#include <stdlib.h>
int test_func(void) {
    int v0 = 84;
    int v1 = 47;
    int v2 = 77;
    int v3 = 91;
    int v4 = 60;
    int v5 = 100;
    int v6 = 88;
    int i;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    v1 = v1 % (v3 + 1);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
