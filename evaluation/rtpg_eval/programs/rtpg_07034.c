#include <stdlib.h>
int test_func(void) {
    int v0 = 91;
    int v1 = 24;
    int v2 = 62;
    int v3 = 84;
    int v4 = 22;
    int i;
    if (v2 > v1) { v2 = v1; }
    v0 = v0 ^ v3;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
