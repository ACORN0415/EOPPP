#include <stdlib.h>
int __arr_3924[10];
int test_func(void) {
    int v0 = 28;
    int v1 = 77;
    int v2 = 5;
    int i;
    for (i = 0; i < 10; i++) { __arr_3924[i] = v2 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
