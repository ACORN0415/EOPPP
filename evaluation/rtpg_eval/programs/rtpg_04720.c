#include <stdlib.h>
int test_func(void) {
    int v0 = 73;
    int v1 = 8;
    int v2 = 47;
    int v3 = 46;
    int v4 = 99;
    int v5 = 46;
    int i;
    v1 = 59;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
