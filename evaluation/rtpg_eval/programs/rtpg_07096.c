#include <stdlib.h>
int __arr_7096[10];
int test_func(void) {
    int v0 = 27;
    int v1 = 39;
    int v2 = 83;
    int v3 = 53;
    int v4 = 44;
    int v5 = 74;
    int i;
    for (i = 0; i < 10; i++) { __arr_7096[i] = v4 + i; }
    v1 = v1 + v1;
    for (i = 0; i < 16; i++) {
        v0 = v0 + v1;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
