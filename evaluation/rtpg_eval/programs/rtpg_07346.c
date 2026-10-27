#include <stdlib.h>
int test_func(void) {
    int v0 = 74;
    int v1 = 61;
    int v2 = 10;
    int v3 = 93;
    int v4 = 24;
    int v5 = 59;
    int i;
    v0 = v0 + v5;
    v2 = v2 - v0;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
