#include <stdlib.h>
int test_func(void) {
    int v0 = 49;
    int v1 = 30;
    int v2 = 67;
    int i;
    if (v0 > v0) { v0 = v0; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
