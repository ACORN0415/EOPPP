#include <stdlib.h>
int test_func(void) {
    int v0 = 61;
    int v1 = 69;
    int v2 = 65;
    int v3 = 67;
    int v4 = 92;
    int v5 = 37;
    int v6 = 84;
    int i;
    v5 = 55;
    if (v3 > v5) { v3 = v5; }
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v6;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
