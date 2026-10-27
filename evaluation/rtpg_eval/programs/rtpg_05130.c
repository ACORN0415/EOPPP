#include <stdlib.h>
int test_func(void) {
    int v0 = 49;
    int v1 = 99;
    int v2 = 42;
    int v3 = 0;
    int v4 = 48;
    int v5 = 39;
    int v6 = 35;
    int i;
    v4 = v4 + v5;
    v6 = 91;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
