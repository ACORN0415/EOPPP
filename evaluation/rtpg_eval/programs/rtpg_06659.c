#include <stdlib.h>
int __arr_6659[10];
int test_func(void) {
    int v0 = 82;
    int v1 = 14;
    int v2 = 73;
    int v3 = 86;
    int i;
    for (i = 0; i < 19; i++) {
        v1 = v1 + v0;
    }
    v3 = v3 - v0;
    for (i = 0; i < 10; i++) { __arr_6659[i] = v3 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
