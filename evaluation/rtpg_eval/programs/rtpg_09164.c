#include <stdlib.h>
int __arr_9164[10];
int test_func(void) {
    int v0 = 59;
    int v1 = 45;
    int v2 = 41;
    int v3 = 75;
    int v4 = 75;
    int v5 = 67;
    int i;
    for (i = 0; i < 10; i++) { __arr_9164[i] = v5 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
