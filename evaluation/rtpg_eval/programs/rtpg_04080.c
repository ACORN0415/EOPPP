#include <stdlib.h>
int test_func(void) {
    int v0 = 100;
    int v1 = 73;
    int v2 = 59;
    int v3 = 42;
    int v4 = 27;
    int v5 = 75;
    int i;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
