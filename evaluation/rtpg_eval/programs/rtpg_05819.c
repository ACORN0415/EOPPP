#include <stdlib.h>
int test_func(void) {
    int v0 = 86;
    int v1 = 26;
    int v2 = 79;
    int i;
    v0 = 48;
    v2 = v2 + v0;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
