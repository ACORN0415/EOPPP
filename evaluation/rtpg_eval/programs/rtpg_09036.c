#include <stdlib.h>
int __arr_9036[10];
int test_func(void) {
    int v0 = 41;
    int v1 = 8;
    int v2 = 61;
    int v3 = 41;
    int i;
    for (i = 0; i < 12; i++) {
        v2 = v2 + v1;
    }
    for (i = 0; i < 10; i++) { __arr_9036[i] = v2 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
