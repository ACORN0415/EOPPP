#include <stdlib.h>
int __arr_5787[10];
int test_func(void) {
    int v0 = 17;
    int v1 = 78;
    int v2 = 86;
    int v3 = 100;
    int v4 = 14;
    int i;
    for (i = 0; i < 10; i++) { __arr_5787[i] = v3 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
