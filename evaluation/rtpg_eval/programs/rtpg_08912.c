#include <stdlib.h>
int test_func(void) {
    int v0 = 46;
    int v1 = 95;
    int v2 = 76;
    int v3 = 12;
    int v4 = 31;
    int v5 = 78;
    int v6 = 4;
    int v7 = 45;
    int i;
    if (v3 > v3) { v3 = v3; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    int *__p = &v4;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
