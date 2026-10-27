#include <stdlib.h>
int test_func(void) {
    int v0 = 53;
    int v1 = 43;
    int v2 = 66;
    int v3 = 41;
    int v4 = 39;
    int v5 = 61;
    int i;
    for (i = 0; i < 5; i++) {
        v1 = v1 + v1;
    }
    v1 = v1 + v0;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
