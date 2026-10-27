#include <stdlib.h>
int test_func(void) {
    int v0 = 73;
    int v1 = 76;
    int v2 = 96;
    int v3 = 82;
    int v4 = 8;
    int v5 = 0;
    int v6 = 49;
    int v7 = 62;
    int i;
    if (v2 > v7) { v2 = v7; }
    v6 = 19;
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    switch (v7) {
        case 0: v7 = 1; break;
        case 1: v7 = 2; break;
        default: v7 = 0; break;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
