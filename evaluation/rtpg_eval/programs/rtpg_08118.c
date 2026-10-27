#include <stdlib.h>
int test_func(void) {
    int v0 = 88;
    int v1 = 79;
    int v2 = 22;
    int v3 = 58;
    int v4 = 37;
    int v5 = 86;
    int i;
    v1 = v1 * 9;
    for (i = 0; i < 20; i++) {
        v0 = v0 + v5;
    }
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
