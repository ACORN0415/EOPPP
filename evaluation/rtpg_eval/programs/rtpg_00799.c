#include <stdlib.h>
int __arr_799[10];
int test_func(void) {
    int v0 = 0;
    int v1 = 6;
    int v2 = 58;
    int v3 = 82;
    int v4 = 34;
    int v5 = 69;
    int i;
    v0 = v0 - v3;
    if (v2 > v0) { v2 = v0; }
    for (i = 0; i < 10; i++) { __arr_799[i] = v4 + i; }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    v3 = v3 & v4;
    return v0;
}
int main(void) { return test_func(); }
