#include <stdlib.h>
int test_func(void) {
    int v0 = 24;
    int v1 = 32;
    int v2 = 51;
    int v3 = 92;
    int i;
    if (v2 > v2) { v2 = v2; }
    v3 = v3 + v2;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    v1 = v1 & v0;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
