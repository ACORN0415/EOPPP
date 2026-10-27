#include <stdlib.h>
int test_func(void) {
    int v0 = 67;
    int v1 = 51;
    int v2 = 94;
    int v3 = 93;
    int v4 = 20;
    int i;
    v1 = v1 * 6;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    v2 = v2 / (v3 + 1);
    return v0;
}
int main(void) { return test_func(); }
