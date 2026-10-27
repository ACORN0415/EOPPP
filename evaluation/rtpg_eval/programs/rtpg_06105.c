#include <stdlib.h>
int test_func(void) {
    int v0 = 36;
    int v1 = 53;
    int v2 = 66;
    int v3 = 16;
    int v4 = 24;
    int v5 = 18;
    int v6 = 85;
    int i;
    for (i = 0; i < 16; i++) {
        v5 = v5 + v5;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
