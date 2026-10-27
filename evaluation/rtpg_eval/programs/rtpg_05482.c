#include <stdlib.h>
int test_func(void) {
    int v0 = 27;
    int v1 = 55;
    int v2 = 52;
    int v3 = 42;
    int v4 = 40;
    int v5 = 2;
    int v6 = 81;
    int v7 = 76;
    int i;
    v1 = 5;
    v5 = v5 * 10;
    for (i = 0; i < 6; i++) {
        v6 = v6 + v4;
    }
    if (v7 > 0) goto __skip;
    v7 = 999;
__skip:
    v7 = v7 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
