#include <stdlib.h>
int test_func(void) {
    int v0 = 22;
    int v1 = 85;
    int v2 = 66;
    int v3 = 53;
    int v4 = 13;
    int i;
    v2 = v2 + v1;
    v1 = v1 * 7;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
