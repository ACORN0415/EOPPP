#include <stdlib.h>
int __arr_3308[10];
int test_func(void) {
    int v0 = 78;
    int v1 = 60;
    int v2 = 70;
    int v3 = 85;
    int i;
    v0 = v0 * 3;
    for (i = 0; i < 10; i++) { __arr_3308[i] = v1 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
