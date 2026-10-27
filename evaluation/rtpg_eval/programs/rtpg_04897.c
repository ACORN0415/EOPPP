#include <stdlib.h>
int __arr_4897[10];
int test_func(void) {
    int v0 = 79;
    int v1 = 81;
    int v2 = 72;
    int v3 = 71;
    int v4 = 69;
    int i;
    for (i = 0; i < 10; i++) { __arr_4897[i] = v1 + i; }
    v3 = 4;
    float __f = 1.5f;
    __f = __f + 1.0f;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
