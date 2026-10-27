#include <stdlib.h>
int test_func(void) {
    int v0 = 32;
    int v1 = 51;
    int v2 = 19;
    int v3 = 79;
    int v4 = 20;
    int i;
    v3 = v3 * 2;
    v4 = v4 + v1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v4;
    *__p = *__p + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
