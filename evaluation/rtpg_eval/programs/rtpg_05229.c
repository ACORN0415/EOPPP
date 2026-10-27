#include <stdlib.h>
int test_func(void) {
    int v0 = 90;
    int v1 = 27;
    int v2 = 70;
    int v3 = 18;
    int v4 = 9;
    int i;
    for (i = 0; i < 6; i++) {
        v3 = v3 + v3;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
