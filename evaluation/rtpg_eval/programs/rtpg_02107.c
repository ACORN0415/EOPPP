#include <stdlib.h>
int test_func(void) {
    int v0 = 22;
    int v1 = 87;
    int v2 = 61;
    int v3 = 21;
    int i;
    for (i = 0; i < 10; i++) {
        v2 = v2 + v0;
    }
    v3 = v3 * 2;
    v1 = v1 - v3;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
