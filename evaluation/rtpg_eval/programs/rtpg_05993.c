#include <stdlib.h>
int test_func(void) {
    int v0 = 53;
    int v1 = 69;
    int v2 = 19;
    int i;
    v2 = 74;
    v0 = v0 + v0;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
