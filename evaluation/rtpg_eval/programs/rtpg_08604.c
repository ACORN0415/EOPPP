#include <stdlib.h>
int __arr_8604[10];
int test_func(void) {
    int v0 = 20;
    int v1 = 19;
    int v2 = 74;
    int v3 = 34;
    int v4 = 22;
    int i;
    v0 = v0 * 5;
    for (i = 0; i < 10; i++) { __arr_8604[i] = v3 + i; }
    v2 = v2 - v3;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
