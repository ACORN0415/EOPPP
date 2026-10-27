#include <stdlib.h>
int test_func(void) {
    int v0 = 66;
    int v1 = 44;
    int v2 = 99;
    int v3 = 53;
    int v4 = 29;
    int i;
    for (i = 0; i < 18; i++) {
        v4 = v4 + v0;
    }
    if (v1 > v3) { v1 = v3; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
