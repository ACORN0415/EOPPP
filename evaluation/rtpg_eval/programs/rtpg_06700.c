#include <stdlib.h>
int test_func(void) {
    int v0 = 26;
    int v1 = 45;
    int v2 = 3;
    int v3 = 86;
    int v4 = 20;
    int v5 = 50;
    int i;
    v0 = 54;
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
