#include <stdlib.h>
int test_func(void) {
    int v0 = 32;
    int v1 = 98;
    int v2 = 80;
    int v3 = 51;
    int v4 = 81;
    int v5 = 82;
    int v6 = 31;
    int i;
    v6 = 81;
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
