#include <stdlib.h>
int test_func(void) {
    int v0 = 82;
    int v1 = 83;
    int v2 = 3;
    int v3 = 40;
    int v4 = 3;
    int v5 = 38;
    int v6 = 65;
    int v7 = 66;
    int i;
    v3 = v3 * 7;
    v6 = v6 + v4;
    v7 = 54;
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    v3 = v3 % (v6 + 1);
    return v0;
}
int main(void) { return test_func(); }
