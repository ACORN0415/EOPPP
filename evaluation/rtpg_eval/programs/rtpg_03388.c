#include <stdlib.h>
int test_func(void) {
    int v0 = 27;
    int v1 = 5;
    int v2 = 57;
    int v3 = 55;
    int v4 = 38;
    int i;
    v1 = 82;
    for (i = 0; i < 17; i++) {
        v4 = v4 + v1;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    float __f = 1.5f;
    __f = __f + 1.0f;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
