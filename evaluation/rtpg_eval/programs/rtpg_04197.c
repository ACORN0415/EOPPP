#include <stdlib.h>
int test_func(void) {
    int v0 = 89;
    int v1 = 44;
    int v2 = 51;
    int v3 = 0;
    int v4 = 45;
    int v5 = 68;
    int v6 = 83;
    int i;
    v5 = v5 + v0;
    float __f = 1.5f;
    __f = __f + 1.0f;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v6;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
