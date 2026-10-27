#include <stdlib.h>
int __arr_2970[10];
int test_func(void) {
    int v0 = 58;
    int v1 = 50;
    int v2 = 28;
    int v3 = 81;
    int v4 = 37;
    int v5 = 46;
    int v6 = 48;
    int v7 = 25;
    int i;
    for (i = 0; i < 10; i++) { __arr_2970[i] = v0 + i; }
    v2 = v2 * 4;
    if (v7 > v7) { v7 = v7; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
