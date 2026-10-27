#include <stdlib.h>
int test_func(void) {
    int v0 = 62;
    int v1 = 95;
    int v2 = 21;
    int v3 = 85;
    int v4 = 60;
    int i;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
