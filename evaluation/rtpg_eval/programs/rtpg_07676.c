#include <stdlib.h>
int test_func(void) {
    int v0 = 79;
    int v1 = 84;
    int v2 = 11;
    int i;
    v0 = v0 - v1;
    v0 = 3;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
