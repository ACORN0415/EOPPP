#include <stdlib.h>
int test_func(void) {
    int v0 = 99;
    int v1 = 83;
    int v2 = 41;
    int v3 = 80;
    int v4 = 9;
    int v5 = 79;
    int i;
    if (v2 > v4) { v2 = v4; }
    for (i = 0; i < 9; i++) {
        v3 = v3 + v2;
    }
    v0 = v0 * 5;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
