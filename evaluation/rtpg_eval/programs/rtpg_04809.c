#include <stdlib.h>
int __arr_4809[10];
int test_func(void) {
    int v0 = 8;
    int v1 = 58;
    int v2 = 97;
    int v3 = 86;
    int v4 = 43;
    int v5 = 83;
    int v6 = 5;
    int i;
    v0 = v0 * 5;
    for (i = 0; i < 10; i++) { __arr_4809[i] = v1 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
