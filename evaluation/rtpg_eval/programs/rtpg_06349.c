#include <stdlib.h>
int test_func(void) {
    int v0 = 98;
    int v1 = 47;
    int v2 = 92;
    int v3 = 24;
    int v4 = 80;
    int v5 = 59;
    int v6 = 19;
    int v7 = 60;
    int i;
    if (v6 > v3) { v6 = v3; }
    for (i = 0; i < 16; i++) {
        v7 = v7 + v0;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
