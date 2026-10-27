#include <stdlib.h>
int test_func(void) {
    int v0 = 93;
    int v1 = 95;
    int v2 = 90;
    int v3 = 81;
    int v4 = 12;
    int i;
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
