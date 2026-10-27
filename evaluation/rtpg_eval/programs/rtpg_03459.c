#include <stdlib.h>
int test_func(void) {
    int v0 = 45;
    int v1 = 75;
    int v2 = 30;
    int v3 = 55;
    int i;
    v3 = 46;
    for (i = 0; i < 19; i++) {
        v1 = v1 + v2;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    v1 = v1 % (v2 + 1);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
