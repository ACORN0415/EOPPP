#include <stdlib.h>
int test_func(void) {
    int v0 = 8;
    int v1 = 60;
    int v2 = 38;
    int i;
    if (v2 > v2) { v2 = v2; }
    v0 = v0 - v1;
    for (i = 0; i < 5; i++) {
        v0 = v0 + v0;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
