#include <stdlib.h>
int test_func(void) {
    int v0 = 24;
    int v1 = 90;
    int v2 = 65;
    int v3 = 35;
    int v4 = 99;
    int i;
    v1 = 69;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    float __f = 1.5f;
    __f = __f + 1.0f;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
