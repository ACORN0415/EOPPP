#include <stdlib.h>
int test_func(void) {
    int v0 = 99;
    int v1 = 66;
    int v2 = 8;
    int v3 = 7;
    int v4 = 28;
    int v5 = 60;
    int v6 = 12;
    int i;
    v0 = v0 - v2;
    if (v0 > v3) { v0 = v3; }
    v4 = 98;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
