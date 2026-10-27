#include <stdlib.h>
int test_func(void) {
    int v0 = 68;
    int v1 = 86;
    int v2 = 12;
    int v3 = 82;
    int v4 = 15;
    int i;
    for (i = 0; i < 6; i++) {
        v2 = v2 + v1;
    }
    v3 = v3 - v1;
    v3 = 60;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
