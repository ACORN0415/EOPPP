#include <stdlib.h>
int test_func(void) {
    int v0 = 69;
    int v1 = 73;
    int v2 = 81;
    int v3 = 69;
    int v4 = 53;
    int i;
    v0 = v0 - v1;
    v4 = 35;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    v4 = v4 % (v1 + 1);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
