#include <stdlib.h>
int __arr_6199[10];
int test_func(void) {
    int v0 = 39;
    int v1 = 26;
    int v2 = 99;
    int v3 = 98;
    int v4 = 98;
    int v5 = 40;
    int i;
    if (v3 > v4) { v3 = v4; }
    for (i = 0; i < 10; i++) { __arr_6199[i] = v5 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    v5 = v5 / (v2 + 1);
    return v0;
}
int main(void) { return test_func(); }
