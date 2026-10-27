#include <stdlib.h>
int test_func(void) {
    int v0 = 64;
    int v1 = 46;
    int v2 = 98;
    int v3 = 61;
    int v4 = 1;
    int v5 = 90;
    int v6 = 16;
    int i;
    v2 = v2 + v2;
    for (i = 0; i < 6; i++) {
        v4 = v4 + v4;
    }
    v3 = v3 - v5;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
