#include <stdlib.h>
int test_func(void) {
    int v0 = 56;
    int v1 = 58;
    int v2 = 49;
    int v3 = 74;
    int v4 = 5;
    int v5 = 85;
    int i;
    v3 = v3 + v3;
    v1 = v1 * 9;
    for (i = 0; i < 20; i++) {
        v3 = v3 + v5;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
