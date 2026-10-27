#include <stdlib.h>
int test_func(void) {
    int v0 = 11;
    int v1 = 47;
    int v2 = 58;
    int i;
    v1 = v1 + v0;
    for (i = 0; i < 11; i++) {
        v1 = v1 + v0;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
