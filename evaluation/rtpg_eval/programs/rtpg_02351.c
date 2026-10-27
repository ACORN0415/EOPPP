#include <stdlib.h>
int test_func(void) {
    int v0 = 19;
    int v1 = 29;
    int v2 = 36;
    int v3 = 94;
    int v4 = 81;
    int v5 = 74;
    int i;
    for (i = 0; i < 5; i++) {
        v4 = v4 + v0;
    }
    int *__p = &v2;
    *__p = *__p + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
