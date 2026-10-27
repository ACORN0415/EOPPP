#include <stdlib.h>
int __arr_2837[10];
int test_func(void) {
    int v0 = 28;
    int v1 = 63;
    int v2 = 89;
    int v3 = 53;
    int v4 = 9;
    int v5 = 9;
    int i;
    v5 = 19;
    v2 = v2 + v1;
    for (i = 0; i < 10; i++) { __arr_2837[i] = v2 + i; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
