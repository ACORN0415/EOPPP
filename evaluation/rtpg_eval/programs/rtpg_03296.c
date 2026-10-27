#include <stdlib.h>
int test_func(void) {
    int v0 = 86;
    int v1 = 2;
    int v2 = 91;
    int v3 = 100;
    int v4 = 59;
    int v5 = 80;
    int v6 = 77;
    int v7 = 94;
    int i;
    if (v1 > v0) { v1 = v0; }
    for (i = 0; i < 16; i++) {
        v0 = v0 + v6;
    }
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
