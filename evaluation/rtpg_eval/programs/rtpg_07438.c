#include <stdlib.h>
int test_func(void) {
    int v0 = 5;
    int v1 = 87;
    int v2 = 18;
    int v3 = 50;
    int v4 = 44;
    int v5 = 68;
    int v6 = 35;
    int i;
    v3 = 73;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
