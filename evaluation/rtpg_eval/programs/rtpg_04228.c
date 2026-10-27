#include <stdlib.h>
int test_func(void) {
    int v0 = 97;
    int v1 = 29;
    int v2 = 86;
    int v3 = 97;
    int v4 = 49;
    int v5 = 98;
    int v6 = 75;
    int v7 = 50;
    int i;
    v7 = 82;
    v6 = v6 * 8;
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    v2 = v2 / (v5 + 1);
    return v0;
}
int main(void) { return test_func(); }
