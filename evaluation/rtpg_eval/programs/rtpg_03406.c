#include <stdlib.h>
int test_func(void) {
    int v0 = 100;
    int v1 = 62;
    int v2 = 89;
    int v3 = 86;
    int v4 = 2;
    int v5 = 25;
    int v6 = 20;
    int v7 = 90;
    int i;
    v4 = v4 - v5;
    for (i = 0; i < 9; i++) {
        v4 = v4 + v7;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    v3 = v3 % (v1 + 1);
    if (v6 > 0) goto __skip;
    v6 = 999;
__skip:
    v6 = v6 + 1;
    return v0;
}
int main(void) { return test_func(); }
