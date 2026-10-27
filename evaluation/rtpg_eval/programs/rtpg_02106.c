#include <stdlib.h>
int test_func(void) {
    int v0 = 95;
    int v1 = 7;
    int v2 = 12;
    int v3 = 78;
    int v4 = 59;
    int v5 = 94;
    int i;
    v1 = v1 - v5;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
