#include <stdlib.h>
int test_func(void) {
    int v0 = 20;
    int v1 = 1;
    int v2 = 80;
    int v3 = 63;
    int v4 = 88;
    int i;
    v1 = v1 - v0;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
