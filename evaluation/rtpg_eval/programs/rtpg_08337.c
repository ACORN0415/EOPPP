#include <stdlib.h>
int __arr_8337[10];
int test_func(void) {
    int v0 = 59;
    int v1 = 68;
    int v2 = 28;
    int v3 = 44;
    int v4 = 61;
    int v5 = 39;
    int v6 = 66;
    int i;
    for (i = 0; i < 10; i++) { __arr_8337[i] = v0 + i; }
    v6 = v6 + v1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
