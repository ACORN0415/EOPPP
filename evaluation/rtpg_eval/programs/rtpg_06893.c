#include <stdlib.h>
int __arr_6893[10];
int test_func(void) {
    int v0 = 43;
    int v1 = 27;
    int v2 = 82;
    int v3 = 22;
    int i;
    for (i = 0; i < 17; i++) {
        v0 = v0 + v2;
    }
    if (v2 > v0) { v2 = v0; }
    for (i = 0; i < 10; i++) { __arr_6893[i] = v1 + i; }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
