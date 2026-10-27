#include <stdlib.h>
int test_func(void) {
    int v0 = 12;
    int v1 = 37;
    int v2 = 28;
    int v3 = 85;
    int v4 = 73;
    int i;
    v0 = v0 - v2;
    for (i = 0; i < 20; i++) {
        v3 = v3 + v4;
    }
    if (v3 > v0) { v3 = v0; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
