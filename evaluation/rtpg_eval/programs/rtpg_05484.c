#include <stdlib.h>
int test_func(void) {
    int v0 = 91;
    int v1 = 47;
    int v2 = 41;
    int v3 = 17;
    int i;
    v3 = v3 + v2;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
