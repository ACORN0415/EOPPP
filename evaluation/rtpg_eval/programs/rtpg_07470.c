#include <stdlib.h>
int test_func(void) {
    int v0 = 58;
    int v1 = 96;
    int v2 = 17;
    int v3 = 92;
    int v4 = 54;
    int i;
    v1 = v1 - v3;
    if (v2 > v0) { v2 = v0; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
