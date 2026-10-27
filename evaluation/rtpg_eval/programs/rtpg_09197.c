#include <stdlib.h>
int test_func(void) {
    int v0 = 95;
    int v1 = 100;
    int v2 = 100;
    int v3 = 65;
    int v4 = 0;
    int v5 = 29;
    int v6 = 22;
    int v7 = 74;
    int i;
    for (i = 0; i < 17; i++) {
        v0 = v0 + v0;
    }
    if (v1 > v2) { v1 = v2; }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v6;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
