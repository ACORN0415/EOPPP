#include <stdlib.h>
int test_func(void) {
    int v0 = 93;
    int v1 = 67;
    int v2 = 98;
    int v3 = 21;
    int i;
    v0 = v0 + v3;
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
