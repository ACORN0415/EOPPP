#include <stdlib.h>
int test_func(void) {
    int v0 = 69;
    int v1 = 3;
    int v2 = 22;
    int v3 = 51;
    int i;
    v0 = v0 + v3;
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
