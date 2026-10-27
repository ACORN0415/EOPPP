#include <stdlib.h>
int __arr_8726[10];
int test_func(void) {
    int v0 = 8;
    int v1 = 49;
    int v2 = 74;
    int v3 = 81;
    int v4 = 22;
    int v5 = 83;
    int i;
    for (i = 0; i < 10; i++) { __arr_8726[i] = v5 + i; }
    for (i = 0; i < 11; i++) {
        v4 = v4 + v4;
    }
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
