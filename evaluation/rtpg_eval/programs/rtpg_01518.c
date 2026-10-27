#include <stdlib.h>
int test_func(void) {
    int v0 = 72;
    int v1 = 14;
    int v2 = 25;
    int v3 = 35;
    int v4 = 82;
    int v5 = 1;
    int v6 = 94;
    int i;
    for (i = 0; i < 20; i++) {
        v4 = v4 + v2;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
