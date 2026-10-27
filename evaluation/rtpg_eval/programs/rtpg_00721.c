#include <stdlib.h>
int test_func(void) {
    int v0 = 98;
    int v1 = 97;
    int v2 = 96;
    int v3 = 33;
    int v4 = 50;
    int i;
    v3 = v3 * 2;
    for (i = 0; i < 17; i++) {
        v2 = v2 + v2;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
