#include <stdlib.h>
int __arr_612[10];
int test_func(void) {
    int v0 = 74;
    int v1 = 95;
    int v2 = 91;
    int v3 = 61;
    int v4 = 53;
    int v5 = 55;
    int i;
    for (i = 0; i < 10; i++) { __arr_612[i] = v2 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
