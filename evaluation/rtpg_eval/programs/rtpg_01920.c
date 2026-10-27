#include <stdlib.h>
int test_func(void) {
    int v0 = 3;
    int v1 = 11;
    int v2 = 56;
    int v3 = 51;
    int v4 = 99;
    int v5 = 1;
    int i;
    v5 = 4;
    for (i = 0; i < 7; i++) {
        v2 = v2 + v0;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
