#include <stdlib.h>
int __arr_7741[10];
int test_func(void) {
    int v0 = 7;
    int v1 = 53;
    int v2 = 60;
    int i;
    for (i = 0; i < 10; i++) { __arr_7741[i] = v1 + i; }
    v1 = 90;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
