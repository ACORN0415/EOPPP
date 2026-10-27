#include <stdlib.h>
int test_func(void) {
    int v0 = 40;
    int v1 = 25;
    int v2 = 12;
    int v3 = 1;
    int i;
    v3 = 77;
    v3 = v3 + v0;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
