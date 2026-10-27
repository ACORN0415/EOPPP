#include <stdlib.h>
int test_func(void) {
    int v0 = 97;
    int v1 = 4;
    int v2 = 1;
    int v3 = 70;
    int v4 = 8;
    int i;
    if (v0 > v4) { v0 = v4; }
    for (i = 0; i < 15; i++) {
        v1 = v1 + v0;
    }
    v0 = v0 + v3;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
