#include <stdlib.h>
int test_func(void) {
    int v0 = 17;
    int v1 = 25;
    int v2 = 64;
    int v3 = 72;
    int v4 = 29;
    int v5 = 55;
    int i;
    v3 = v3 + v3;
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
