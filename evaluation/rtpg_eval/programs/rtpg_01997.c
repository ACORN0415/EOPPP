#include <stdlib.h>
int test_func(void) {
    int v0 = 15;
    int v1 = 57;
    int v2 = 56;
    int i;
    v1 = v1 + v2;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
