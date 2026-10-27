#include <stdlib.h>
int test_func(void) {
    int v0 = 98;
    int v1 = 73;
    int v2 = 53;
    int v3 = 83;
    int v4 = 29;
    int i;
    for (i = 0; i < 7; i++) {
        v2 = v2 + v3;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
