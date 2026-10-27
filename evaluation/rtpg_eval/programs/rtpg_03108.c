#include <stdlib.h>
int test_func(void) {
    int v0 = 24;
    int v1 = 96;
    int v2 = 13;
    int v3 = 21;
    int v4 = 60;
    int v5 = 70;
    int v6 = 40;
    int v7 = 70;
    int i;
    v4 = v4 + v7;
    v7 = 10;
    v7 = v7 ^ v4;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v6;
    free(__pm);
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
