#include <stdlib.h>
int __arr_5771[10];
int test_func(void) {
    int v0 = 87;
    int v1 = 78;
    int v2 = 24;
    int v3 = 84;
    int v4 = 71;
    int v5 = 76;
    int i;
    if (v2 > v0) { v2 = v0; }
    for (i = 0; i < 10; i++) { __arr_5771[i] = v1 + i; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
