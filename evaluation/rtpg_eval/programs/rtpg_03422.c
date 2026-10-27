#include <stdlib.h>
int test_func(void) {
    int v0 = 37;
    int v1 = 84;
    int v2 = 97;
    int v3 = 75;
    int i;
    for (i = 0; i < 14; i++) {
        v3 = v3 + v0;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
