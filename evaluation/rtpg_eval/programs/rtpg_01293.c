#include <stdlib.h>
int __arr_1293[10];
int test_func(void) {
    int v0 = 68;
    int v1 = 56;
    int v2 = 69;
    int v3 = 73;
    int v4 = 29;
    int v5 = 48;
    int v6 = 25;
    int v7 = 100;
    int i;
    v4 = v4 * 3;
    for (i = 0; i < 10; i++) { __arr_1293[i] = v2 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
