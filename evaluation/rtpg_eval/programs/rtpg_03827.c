#include <stdlib.h>
int test_func(void) {
    int v0 = 36;
    int v1 = 56;
    int v2 = 22;
    int i;
    v2 = v2 - v0;
    int *__p = &v2;
    *__p = *__p + 1;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
