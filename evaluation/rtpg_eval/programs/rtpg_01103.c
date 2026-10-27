#include <stdlib.h>
int __arr_1103[10];
int test_func(void) {
    int v0 = 78;
    int v1 = 74;
    int v2 = 52;
    int i;
    v0 = v0 + v1;
    for (i = 0; i < 10; i++) { __arr_1103[i] = v0 + i; }
    if (v1 > v2) { v1 = v2; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
