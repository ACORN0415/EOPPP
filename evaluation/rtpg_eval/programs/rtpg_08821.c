#include <stdlib.h>
int test_func(void) {
    int v0 = 18;
    int v1 = 29;
    int v2 = 18;
    int i;
    v0 = 41;
    v1 = v1 - v0;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v2 = v2 / (v1 + 1);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
