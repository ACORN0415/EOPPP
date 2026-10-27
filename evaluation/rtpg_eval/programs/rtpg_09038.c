#include <stdlib.h>
int test_func(void) {
    int v0 = 39;
    int v1 = 17;
    int v2 = 67;
    int v3 = 16;
    int v4 = 78;
    int v5 = 0;
    int i;
    v0 = v0 - v2;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v4 = v4 | v5;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
