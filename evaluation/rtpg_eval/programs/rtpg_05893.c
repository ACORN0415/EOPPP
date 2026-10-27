#include <stdlib.h>
int test_func(void) {
    int v0 = 81;
    int v1 = 23;
    int v2 = 88;
    int i;
    v2 = v2 * 10;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    v1 = v1 % (v2 + 1);
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
