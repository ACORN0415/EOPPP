#include <stdlib.h>
int __arr_7561[10];
int test_func(void) {
    int v0 = 28;
    int v1 = 56;
    int v2 = 12;
    int v3 = 87;
    int v4 = 45;
    int v5 = 93;
    int v6 = 86;
    int v7 = 68;
    int i;
    for (i = 0; i < 10; i++) { __arr_7561[i] = v6 + i; }
    for (i = 0; i < 5; i++) {
        v5 = v5 + v1;
    }
    switch (v7) {
        case 0: v7 = 1; break;
        case 1: v7 = 2; break;
        default: v7 = 0; break;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
