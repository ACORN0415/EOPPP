#include <stdlib.h>
int test_func(void) {
    int v0 = 72;
    int v1 = 44;
    int v2 = 100;
    int v3 = 9;
    int v4 = 33;
    int v5 = 65;
    int i;
    v0 = 71;
    v5 = v5 * 8;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
