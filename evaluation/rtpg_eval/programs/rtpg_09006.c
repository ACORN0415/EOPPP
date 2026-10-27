#include <stdlib.h>
int test_func(void) {
    int v0 = 23;
    int v1 = 28;
    int v2 = 66;
    int i;
    v1 = v1 * 2;
    v2 = v2 - v1;
    int *__p = &v2;
    *__p = *__p + 1;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
