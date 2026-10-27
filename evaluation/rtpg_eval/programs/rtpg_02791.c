#include <stdlib.h>
int test_func(void) {
    int v0 = 95;
    int v1 = 64;
    int v2 = 45;
    int v3 = 73;
    int i;
    if (v2 > v0) { v2 = v0; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
