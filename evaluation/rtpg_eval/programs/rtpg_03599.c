#include <stdlib.h>
int test_func(void) {
    int v0 = 77;
    int v1 = 19;
    int v2 = 55;
    int v3 = 20;
    int v4 = 76;
    int v5 = 68;
    int v6 = 46;
    int i;
    v4 = v4 * 8;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
