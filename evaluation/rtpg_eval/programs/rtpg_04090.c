#include <stdlib.h>
int test_func(void) {
    int v0 = 72;
    int v1 = 82;
    int v2 = 35;
    int i;
    v2 = v2 * 8;
    v1 = v1 - v2;
    v1 = 11;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
