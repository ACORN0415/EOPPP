#include <stdlib.h>
int __arr_9999[10];
int test_func(void) {
    int v0 = 66;
    int v1 = 49;
    int v2 = 84;
    int v3 = 94;
    int v4 = 30;
    int i;
    v4 = 66;
    v2 = v2 * 4;
    for (i = 0; i < 10; i++) { __arr_9999[i] = v3 + i; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
