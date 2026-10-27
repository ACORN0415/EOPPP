#include <stdlib.h>
int __arr_1710[10];
int test_func(void) {
    int v0 = 95;
    int v1 = 91;
    int v2 = 56;
    int v3 = 96;
    int i;
    for (i = 0; i < 10; i++) { __arr_1710[i] = v2 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
