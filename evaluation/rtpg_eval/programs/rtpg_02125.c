#include <stdlib.h>
int test_func(void) {
    int v0 = 16;
    int v1 = 51;
    int v2 = 73;
    int v3 = 11;
    int v4 = 56;
    int i;
    v0 = 26;
    v0 = v0 + v0;
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
