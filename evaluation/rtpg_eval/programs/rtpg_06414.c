#include <stdlib.h>
int test_func(void) {
    int v0 = 0;
    int v1 = 85;
    int v2 = 26;
    int v3 = 35;
    int v4 = 76;
    int v5 = 35;
    int i;
    v4 = v4 * 9;
    for (i = 0; i < 5; i++) {
        v3 = v3 + v0;
    }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
