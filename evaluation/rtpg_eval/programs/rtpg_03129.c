#include <stdlib.h>
int __arr_3129[10];
int test_func(void) {
    int v0 = 98;
    int v1 = 48;
    int v2 = 8;
    int i;
    for (i = 0; i < 10; i++) { __arr_3129[i] = v2 + i; }
    for (i = 0; i < 6; i++) {
        v0 = v0 + v2;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
