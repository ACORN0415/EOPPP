#include <stdlib.h>
int __arr_7446[10];
int test_func(void) {
    int v0 = 44;
    int v1 = 46;
    int v2 = 98;
    int v3 = 75;
    int v4 = 70;
    int v5 = 15;
    int i;
    for (i = 0; i < 6; i++) {
        v4 = v4 + v5;
    }
    for (i = 0; i < 10; i++) { __arr_7446[i] = v2 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    int *__p = &v5;
    *__p = *__p + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
