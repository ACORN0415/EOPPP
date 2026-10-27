#include <stdlib.h>
int __arr_5678[10];
int test_func(void) {
    int v0 = 41;
    int v1 = 0;
    int v2 = 25;
    int v3 = 3;
    int v4 = 55;
    int v5 = 99;
    int i;
    v1 = v1 * 7;
    for (i = 0; i < 5; i++) {
        v4 = v4 + v4;
    }
    for (i = 0; i < 10; i++) { __arr_5678[i] = v0 + i; }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    v1 = v1 ^ v0;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
