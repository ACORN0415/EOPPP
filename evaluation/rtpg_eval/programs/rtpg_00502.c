#include <stdlib.h>
int test_func(void) {
    int v0 = 8;
    int v1 = 1;
    int v2 = 42;
    int v3 = 70;
    int i;
    v3 = v3 - v0;
    float __f = 1.5f;
    __f = __f + 1.0f;
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
