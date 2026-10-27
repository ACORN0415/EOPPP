#include <stdlib.h>
int test_func(void) {
    int v0 = 70;
    int v1 = 43;
    int v2 = 51;
    int v3 = 77;
    int v4 = 2;
    int v5 = 21;
    int v6 = 12;
    int v7 = 34;
    int i;
    v7 = v7 - v5;
    v5 = v5 * 5;
    switch (v7) {
        case 0: v7 = 1; break;
        case 1: v7 = 2; break;
        default: v7 = 0; break;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
