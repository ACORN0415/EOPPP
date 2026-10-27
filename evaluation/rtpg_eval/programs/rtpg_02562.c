#include <stdlib.h>
int test_func(void) {
    int v0 = 97;
    int v1 = 81;
    int v2 = 63;
    int v3 = 93;
    int v4 = 28;
    int v5 = 59;
    int v6 = 25;
    int v7 = 30;
    int i;
    v2 = v2 + v7;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
