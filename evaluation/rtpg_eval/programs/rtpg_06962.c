#include <stdlib.h>
int test_func(void) {
    int v0 = 48;
    int v1 = 49;
    int v2 = 71;
    int v3 = 92;
    int v4 = 60;
    int v5 = 30;
    int v6 = 46;
    int i;
    for (i = 0; i < 13; i++) {
        v6 = v6 + v6;
    }
    v1 = 49;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    int *__p = &v3;
    *__p = *__p + 1;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
