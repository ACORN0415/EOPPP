#include <stdlib.h>
int test_func(void) {
    int v0 = 2;
    int v1 = 25;
    int v2 = 12;
    int v3 = 26;
    int v4 = 27;
    int i;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
