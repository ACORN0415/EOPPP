#include <stdlib.h>
int __arr_12[10];
int test_func(void) {
    int v0 = 97;
    int v1 = 84;
    int v2 = 12;
    int v3 = 8;
    int v4 = 76;
    int v5 = 90;
    int i;
    for (i = 0; i < 10; i++) { __arr_12[i] = v5 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
