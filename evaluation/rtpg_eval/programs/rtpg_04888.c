#include <stdlib.h>
int test_func(void) {
    int v0 = 15;
    int v1 = 57;
    int v2 = 36;
    int v3 = 38;
    int v4 = 16;
    int i;
    v4 = v4 - v1;
    float __f = 1.5f;
    __f = __f + 1.0f;
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
