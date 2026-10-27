#include <stdlib.h>
int test_func(void) {
    int v0 = 61;
    int v1 = 100;
    int v2 = 72;
    int v3 = 16;
    int i;
    v0 = v0 + v2;
    v3 = 39;
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
