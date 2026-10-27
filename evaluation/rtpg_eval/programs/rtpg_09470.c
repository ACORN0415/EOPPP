#include <stdlib.h>
int __arr_9470[10];
int test_func(void) {
    int v0 = 63;
    int v1 = 25;
    int v2 = 24;
    int v3 = 92;
    int v4 = 16;
    int v5 = 99;
    int i;
    for (i = 0; i < 10; i++) { __arr_9470[i] = v5 + i; }
    v5 = 15;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
