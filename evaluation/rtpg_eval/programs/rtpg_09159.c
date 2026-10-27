#include <stdlib.h>
int test_func(void) {
    int v0 = 80;
    int v1 = 10;
    int v2 = 93;
    int v3 = 36;
    int v4 = 64;
    int v5 = 51;
    int i;
    v0 = v0 * 6;
    if (v0 > v5) { v0 = v5; }
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
