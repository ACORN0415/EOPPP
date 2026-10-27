#include <stdlib.h>
int test_func(void) {
    int v0 = 42;
    int v1 = 71;
    int v2 = 34;
    int v3 = 100;
    int v4 = 62;
    int v5 = 17;
    int v6 = 53;
    int v7 = 16;
    int i;
    v7 = 8;
    v1 = v1 - v0;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v6;
    free(__pm);
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    int *__p = &v6;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
