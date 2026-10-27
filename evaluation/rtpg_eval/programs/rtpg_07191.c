#include <stdlib.h>
int test_func(void) {
    int v0 = 2;
    int v1 = 47;
    int v2 = 89;
    int v3 = 28;
    int v4 = 48;
    int v5 = 55;
    int v6 = 38;
    int v7 = 41;
    int i;
    v1 = v1 + v1;
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
