#include <stdlib.h>
int __arr_1329[10];
int test_func(void) {
    int v0 = 0;
    int v1 = 86;
    int v2 = 66;
    int v3 = 85;
    int v4 = 61;
    int v5 = 25;
    int v6 = 12;
    int v7 = 77;
    int i;
    v3 = v3 + v7;
    for (i = 0; i < 10; i++) { __arr_1329[i] = v7 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
