#include <stdlib.h>
int __arr_7345[10];
int test_func(void) {
    int v0 = 96;
    int v1 = 75;
    int v2 = 73;
    int v3 = 13;
    int v4 = 31;
    int v5 = 37;
    int v6 = 73;
    int i;
    for (i = 0; i < 10; i++) { __arr_7345[i] = v3 + i; }
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
