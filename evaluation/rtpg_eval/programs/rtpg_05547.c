#include <stdlib.h>
int __arr_5547[10];
int test_func(void) {
    int v0 = 26;
    int v1 = 28;
    int v2 = 17;
    int v3 = 6;
    int i;
    for (i = 0; i < 10; i++) { __arr_5547[i] = v1 + i; }
    v2 = v2 - v1;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
