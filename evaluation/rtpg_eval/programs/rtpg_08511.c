#include <stdlib.h>
int test_func(void) {
    int v0 = 41;
    int v1 = 47;
    int v2 = 32;
    int v3 = 19;
    int v4 = 13;
    int v5 = 70;
    int v6 = 85;
    int v7 = 61;
    int i;
    if (v3 > v0) { v3 = v0; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
