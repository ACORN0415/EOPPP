#include <stdlib.h>
int test_func(void) {
    int v0 = 71;
    int v1 = 91;
    int v2 = 31;
    int v3 = 0;
    int i;
    v1 = v1 * 7;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
