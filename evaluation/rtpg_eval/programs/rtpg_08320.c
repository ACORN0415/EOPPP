#include <stdlib.h>
int test_func(void) {
    int v0 = 58;
    int v1 = 34;
    int v2 = 41;
    int v3 = 97;
    int v4 = 14;
    int v5 = 87;
    int v6 = 79;
    int v7 = 26;
    int i;
    if (v4 > v2) { v4 = v2; }
    v1 = v1 - v7;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    v6 = v6 % (v5 + 1);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v7;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
