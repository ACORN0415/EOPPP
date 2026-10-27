#include <stdlib.h>
int test_func(void) {
    int v0 = 9;
    int v1 = 26;
    int v2 = 66;
    int v3 = 53;
    int v4 = 82;
    int v5 = 67;
    int v6 = 52;
    int v7 = 15;
    int i;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v6;
    free(__pm);
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
