#include <stdlib.h>
int test_func(void) {
    int v0 = 17;
    int v1 = 44;
    int v2 = 48;
    int v3 = 67;
    int v4 = 99;
    int i;
    for (i = 0; i < 13; i++) {
        v3 = v3 + v3;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
