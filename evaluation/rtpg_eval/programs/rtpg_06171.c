#include <stdlib.h>
int __arr_6171[10];
int test_func(void) {
    int v0 = 60;
    int v1 = 21;
    int v2 = 93;
    int v3 = 22;
    int v4 = 53;
    int v5 = 25;
    int v6 = 50;
    int v7 = 38;
    int i;
    v6 = v6 * 4;
    for (i = 0; i < 10; i++) { __arr_6171[i] = v3 + i; }
    v0 = v0 + v4;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    v5 = v5 / (v0 + 1);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
