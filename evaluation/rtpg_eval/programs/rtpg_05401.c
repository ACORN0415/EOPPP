#include <stdlib.h>
int __arr_5401[10];
int test_func(void) {
    int v0 = 38;
    int v1 = 31;
    int v2 = 78;
    int v3 = 36;
    int v4 = 87;
    int v5 = 75;
    int i;
    for (i = 0; i < 7; i++) {
        v0 = v0 + v3;
    }
    for (i = 0; i < 10; i++) { __arr_5401[i] = v1 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
