#include <stdlib.h>
int test_func(void) {
    int v0 = 60;
    int v1 = 75;
    int v2 = 28;
    int v3 = 33;
    int i;
    v3 = 51;
    v1 = v1 + v0;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
