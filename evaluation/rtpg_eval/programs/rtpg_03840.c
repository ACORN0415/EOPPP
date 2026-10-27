#include <stdlib.h>
int test_func(void) {
    int v0 = 28;
    int v1 = 46;
    int v2 = 90;
    int v3 = 24;
    int v4 = 73;
    int v5 = 70;
    int v6 = 18;
    int i;
    for (i = 0; i < 19; i++) {
        v0 = v0 + v6;
    }
    v2 = 19;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
