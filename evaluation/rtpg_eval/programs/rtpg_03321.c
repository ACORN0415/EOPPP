#include <stdlib.h>
int __arr_3321[10];
int test_func(void) {
    int v0 = 78;
    int v1 = 3;
    int v2 = 34;
    int v3 = 85;
    int v4 = 16;
    int v5 = 82;
    int v6 = 13;
    int v7 = 65;
    int i;
    if (v1 > v4) { v1 = v4; }
    v3 = v3 - v0;
    for (i = 0; i < 10; i++) { __arr_3321[i] = v0 + i; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
