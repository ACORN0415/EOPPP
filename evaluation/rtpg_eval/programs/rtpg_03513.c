#include <stdlib.h>
int __arr_3513[10];
int test_func(void) {
    int v0 = 45;
    int v1 = 53;
    int v2 = 86;
    int i;
    for (i = 0; i < 10; i++) { __arr_3513[i] = v2 + i; }
    for (i = 0; i < 10; i++) {
        v1 = v1 + v0;
    }
    int *__p = &v1;
    *__p = *__p + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
