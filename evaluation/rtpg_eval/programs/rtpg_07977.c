#include <stdlib.h>
int test_func(void) {
    int v0 = 54;
    int v1 = 22;
    int v2 = 75;
    int v3 = 99;
    int v4 = 68;
    int v5 = 78;
    int v6 = 91;
    int v7 = 3;
    int i;
    for (i = 0; i < 15; i++) {
        v2 = v2 + v0;
    }
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v6;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
