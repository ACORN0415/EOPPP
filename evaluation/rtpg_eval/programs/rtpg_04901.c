#include <stdlib.h>
int test_func(void) {
    int v0 = 26;
    int v1 = 44;
    int v2 = 28;
    int i;
    for (i = 0; i < 11; i++) {
        v2 = v2 + v1;
    }
    v2 = v2 * 6;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
