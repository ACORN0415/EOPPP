#include <stdlib.h>
int test_func(void) {
    int v0 = 85;
    int v1 = 36;
    int v2 = 29;
    int v3 = 64;
    int v4 = 91;
    int v5 = 92;
    int v6 = 20;
    int i;
    v0 = v0 * 8;
    if (v2 > v5) { v2 = v5; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
