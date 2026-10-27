#include <stdlib.h>
int test_func(void) {
    int v0 = 77;
    int v1 = 12;
    int v2 = 52;
    int i;
    if (v1 > v2) { v1 = v2; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
