#include <stdlib.h>
int __arr_4929[10];
int test_func(void) {
    int v0 = 35;
    int v1 = 77;
    int v2 = 0;
    int v3 = 52;
    int v4 = 34;
    int v5 = 87;
    int v6 = 51;
    int v7 = 91;
    int i;
    v0 = v0 + v0;
    v2 = 85;
    for (i = 0; i < 10; i++) { __arr_4929[i] = v6 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
