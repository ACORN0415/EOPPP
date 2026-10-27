#include <stdlib.h>
int test_func(void) {
    int v0 = 79;
    int v1 = 100;
    int v2 = 44;
    int v3 = 55;
    int v4 = 57;
    int v5 = 31;
    int i;
    for (i = 0; i < 16; i++) {
        v2 = v2 + v2;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
