#include <stdlib.h>
int test_func(void) {
    int v0 = 67;
    int v1 = 84;
    int v2 = 0;
    int v3 = 69;
    int v4 = 24;
    int v5 = 36;
    int v6 = 64;
    int i;
    for (i = 0; i < 20; i++) {
        v5 = v5 + v4;
    }
    if (v5 > v2) { v5 = v2; }
    v2 = v2 + v3;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
