#include <stdlib.h>
int test_func(void) {
    int v0 = 10;
    int v1 = 34;
    int v2 = 24;
    int i;
    for (i = 0; i < 11; i++) {
        v0 = v0 + v2;
    }
    v1 = v1 + v2;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
