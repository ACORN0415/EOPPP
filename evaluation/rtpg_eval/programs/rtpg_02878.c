#include <stdlib.h>
int test_func(void) {
    int v0 = 9;
    int v1 = 24;
    int v2 = 43;
    int v3 = 8;
    int i;
    v1 = 6;
    v0 = v0 + v0;
    v1 = v1 & v0;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
