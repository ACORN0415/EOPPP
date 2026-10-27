#include <stdlib.h>
int test_func(void) {
    int v0 = 88;
    int v1 = 69;
    int v2 = 34;
    int v3 = 87;
    int v4 = 92;
    int i;
    v3 = v3 * 6;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
