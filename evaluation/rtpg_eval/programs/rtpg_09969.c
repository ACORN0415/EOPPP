#include <stdlib.h>
int test_func(void) {
    int v0 = 51;
    int v1 = 53;
    int v2 = 22;
    int v3 = 76;
    int v4 = 71;
    int v5 = 64;
    int v6 = 18;
    int i;
    v1 = v1 + v0;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v6;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
