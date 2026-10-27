#include <stdlib.h>
int test_func(void) {
    int v0 = 15;
    int v1 = 65;
    int v2 = 31;
    int v3 = 42;
    int v4 = 63;
    int v5 = 35;
    int v6 = 94;
    int i;
    v3 = v3 * 2;
    if (v6 > v6) { v6 = v6; }
    for (i = 0; i < 17; i++) {
        v6 = v6 + v3;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v6; __s.b = v6 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
