#include <stdlib.h>
int test_func(void) {
    int v0 = 2;
    int v1 = 3;
    int v2 = 29;
    int v3 = 41;
    int v4 = 7;
    int v5 = 20;
    int i;
    if (v0 > v0) { v0 = v0; }
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
