#include <stdlib.h>
int test_func(void) {
    int v0 = 13;
    int v1 = 39;
    int v2 = 68;
    int v3 = 73;
    int v4 = 73;
    int i;
    for (i = 0; i < 11; i++) {
        v2 = v2 + v4;
    }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    v4 = v4 / (v0 + 1);
    return v0;
}
int main(void) { return test_func(); }
