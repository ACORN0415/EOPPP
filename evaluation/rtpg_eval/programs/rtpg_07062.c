#include <stdlib.h>
int test_func(void) {
    int v0 = 91;
    int v1 = 72;
    int v2 = 13;
    int v3 = 28;
    int v4 = 29;
    int v5 = 10;
    int v6 = 98;
    int i;
    v3 = 89;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
