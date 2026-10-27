#include <stdlib.h>
int test_func(void) {
    int v0 = 2;
    int v1 = 13;
    int v2 = 1;
    int v3 = 32;
    int v4 = 71;
    int v5 = 59;
    int v6 = 64;
    int v7 = 46;
    int i;
    v0 = v0 - v3;
    v4 = v4 + v6;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
