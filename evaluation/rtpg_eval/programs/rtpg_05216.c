#include <stdlib.h>
int test_func(void) {
    int v0 = 63;
    int v1 = 89;
    int v2 = 35;
    int v3 = 64;
    int v4 = 53;
    int v5 = 73;
    int v6 = 15;
    int i;
    v0 = v0 - v4;
    if (v3 > v1) { v3 = v1; }
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
