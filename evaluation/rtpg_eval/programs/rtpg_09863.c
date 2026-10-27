#include <stdlib.h>
int test_func(void) {
    int v0 = 68;
    int v1 = 90;
    int v2 = 50;
    int v3 = 22;
    int v4 = 85;
    int v5 = 17;
    int v6 = 75;
    int v7 = 85;
    int i;
    v7 = v7 - v1;
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
