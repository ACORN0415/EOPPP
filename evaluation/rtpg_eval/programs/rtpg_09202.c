#include <stdlib.h>
int test_func(void) {
    int v0 = 18;
    int v1 = 85;
    int v2 = 58;
    int v3 = 22;
    int v4 = 93;
    int v5 = 81;
    int i;
    v3 = 34;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
