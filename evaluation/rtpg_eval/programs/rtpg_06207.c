#include <stdlib.h>
int test_func(void) {
    int v0 = 18;
    int v1 = 23;
    int v2 = 1;
    int i;
    v0 = v0 - v2;
    if (v0 > v2) { v0 = v2; }
    v1 = v1 * 6;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
