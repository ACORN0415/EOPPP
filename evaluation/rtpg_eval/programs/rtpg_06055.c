#include <stdlib.h>
int __arr_6055[10];
int test_func(void) {
    int v0 = 70;
    int v1 = 65;
    int v2 = 39;
    int i;
    for (i = 0; i < 10; i++) { __arr_6055[i] = v0 + i; }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
