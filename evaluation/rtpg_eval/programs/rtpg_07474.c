#include <stdlib.h>
int __arr_7474[10];
int test_func(void) {
    int v0 = 35;
    int v1 = 66;
    int v2 = 3;
    int i;
    for (i = 0; i < 10; i++) { __arr_7474[i] = v0 + i; }
    v2 = v2 - v1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
