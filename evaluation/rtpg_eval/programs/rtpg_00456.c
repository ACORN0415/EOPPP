#include <stdlib.h>
int test_func(void) {
    int v0 = 23;
    int v1 = 2;
    int v2 = 9;
    int v3 = 58;
    int v4 = 84;
    int i;
    v4 = v4 + v0;
    v0 = 71;
    int *__p = &v4;
    *__p = *__p + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
