#include <stdlib.h>
int test_func(void) {
    int v0 = 78;
    int v1 = 42;
    int v2 = 86;
    int v3 = 84;
    int i;
    for (i = 0; i < 15; i++) {
        v1 = v1 + v2;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
