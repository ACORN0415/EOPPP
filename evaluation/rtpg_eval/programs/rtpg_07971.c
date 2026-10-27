#include <stdlib.h>
int test_func(void) {
    int v0 = 91;
    int v1 = 52;
    int v2 = 40;
    int v3 = 74;
    int v4 = 7;
    int i;
    v1 = v1 - v0;
    if (v4 > v4) { v4 = v4; }
    v4 = v4 + v1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    int *__p = &v1;
    *__p = *__p + 1;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
