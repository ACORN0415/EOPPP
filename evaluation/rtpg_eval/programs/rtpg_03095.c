#include <stdlib.h>
int test_func(void) {
    int v0 = 37;
    int v1 = 24;
    int v2 = 36;
    int v3 = 8;
    int v4 = 72;
    int v5 = 59;
    int v6 = 50;
    int i;
    if (v4 > v2) { v4 = v2; }
    v1 = v1 + v0;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    v1 = v1 & v2;
    return v0;
}
int main(void) { return test_func(); }
