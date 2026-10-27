#include <stdlib.h>
int test_func(void) {
    int v0 = 53;
    int v1 = 95;
    int v2 = 33;
    int v3 = 14;
    int i;
    v1 = v1 - v3;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
