#include <stdlib.h>
int test_func(void) {
    int v0 = 21;
    int v1 = 16;
    int v2 = 89;
    int v3 = 28;
    int i;
    if (v2 > v0) { v2 = v0; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
