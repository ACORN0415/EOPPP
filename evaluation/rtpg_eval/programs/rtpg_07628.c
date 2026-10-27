#include <stdlib.h>
int test_func(void) {
    int v0 = 68;
    int v1 = 25;
    int v2 = 0;
    int v3 = 59;
    int v4 = 4;
    int i;
    v0 = 89;
    v2 = v2 - v3;
    for (i = 0; i < 9; i++) {
        v3 = v3 + v3;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
