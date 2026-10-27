#include <stdlib.h>
int __arr_1658[10];
int test_func(void) {
    int v0 = 21;
    int v1 = 97;
    int v2 = 93;
    int v3 = 24;
    int v4 = 61;
    int v5 = 49;
    int v6 = 98;
    int i;
    for (i = 0; i < 10; i++) { __arr_1658[i] = v1 + i; }
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    v4 = v4 | v5;
    return v0;
}
int main(void) { return test_func(); }
