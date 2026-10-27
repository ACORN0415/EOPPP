#include <stdlib.h>
int test_func(void) {
    int v0 = 52;
    int v1 = 85;
    int v2 = 72;
    int v3 = 68;
    int v4 = 71;
    int i;
    v1 = 63;
    v0 = v0 - v2;
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    v1 = v1 % (v0 + 1);
    return v0;
}
int main(void) { return test_func(); }
