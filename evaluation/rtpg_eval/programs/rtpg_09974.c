#include <stdlib.h>
int test_func(void) {
    int v0 = 89;
    int v1 = 12;
    int v2 = 62;
    int v3 = 17;
    int v4 = 41;
    int i;
    if (v0 > v2) { v0 = v2; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
